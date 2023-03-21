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
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	struct<270> Local_112 = { 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, -1, -1, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	struct<11> Local_382[32];
	int iLocal_735 = 0;
	int iLocal_736 = 0;
	int iLocal_737 = 0;
	int iLocal_738 = 0;
	int iLocal_739 = 0;
	int iLocal_740 = 0;
	int iLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	int iLocal_744 = 0;
	int iLocal_745 = 0;
	int iLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	struct<8> Local_754[10];
	var uLocal_835[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	int iLocal_849 = 0;
	var uLocal_850 = 0;
	int iLocal_851 = 0;
	char* sLocal_852 = NULL;
	var uLocal_853 = 16;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
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
	int iLocal_1019 = 0;
	int iLocal_1020 = 0;
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
	iLocal_738 = -2;
	iLocal_739 = -1;
	sLocal_852 = "";
	if (unk_0x44243F2E2F58B8E3() && func_1162(unk_0x8CFC7D6E1DA5D304(), 0, 1))
	{
		func_1129(ScriptParam_0);
	}
	else
	{
		func_1074();
	}
	while (true)
	{
		func_1073();
		if (func_1065())
		{
			func_1074();
		}
		Global_1807007.f_2 = Local_112.f_267;
		Global_1807007.f_3 = Local_112.f_268;
		switch (func_1064(unk_0xA651DA0BC9FD8FA4()))
		{
			case 0:
				if (unk_0xFF22FE9205F44FB6("ALARM_BELL_02", 0, -1))
				{
					if (func_1063() == 1)
					{
						if (func_1062())
						{
							func_1061();
							if (func_1060())
							{
								func_1043(169, 1, func_1058(), 0);
								func_1042();
								func_1040();
							}
							else
							{
								func_1043(169, 0, func_1058(), 0);
							}
							Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/] = 1;
						}
					}
					else if (func_1063() == 4)
					{
						Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_1037(1))
				{
					Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/] = 2;
				}
				if (func_1063() == 1)
				{
					func_1028();
					func_945();
					func_416();
					func_407();
					if (!func_406())
					{
						if (func_1060() || func_404())
						{
							func_256(&(Global_1347470.f_532), &Global_1347470, 26, &(Global_1347470.f_1), &(Global_1347470.f_115), -1, 0);
						}
					}
					else
					{
						func_251();
					}
					func_197();
					func_196();
				}
				else if (func_1063() == 4)
				{
					Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/] = 3;
				}
				func_190();
				break;
			
			case 3:
				func_189(&(Local_112.f_224));
				if (func_188(&(Local_112.f_224)))
				{
					Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/] = 4;
				}
				break;
			
			case 2:
				Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/] = 4;
			
			case 4:
				func_1074();
				break;
		}
		if (unk_0xF67B871D7588B9D9())
		{
			switch (func_1063())
			{
				case 0:
					if (func_1058() > -1)
					{
						func_186();
						func_184();
						func_183();
						func_180();
						if (func_43())
						{
							unk_0x991913908B585B67(&(Local_112.f_267), &(Local_112.f_268));
							func_37();
							Local_112.f_0 = 1;
							Local_112.f_218 = unk_0xA651DA0BC9FD8FA4();
							Local_112.f_219 = unk_0x8CFC7D6E1DA5D304();
							func_1043(169, 1, func_1058(), 0);
						}
					}
					break;
				
				case 1:
					func_29();
					func_180();
					func_22();
					func_4();
					if (func_2())
					{
						Local_112.f_0 = 4;
					}
					else if (func_1())
					{
						Local_112.f_0 = 4;
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
	if (Global_2512581.f_4878.f_29)
	{
		Global_2512581.f_4878.f_29 = 0;
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
	if (unk_0xB03A1684359C50A1(Local_112.f_1, 2))
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
	switch (Local_112.f_214)
	{
		case 0:
			func_19();
			func_17();
			if (func_406())
			{
				func_15();
				func_5();
			}
			if (unk_0xB03A1684359C50A1(Local_112.f_1, 1))
			{
				Local_112.f_214 = 2;
			}
			else if (unk_0xB03A1684359C50A1(Local_112.f_1, 3))
			{
				Local_112.f_214 = 2;
			}
			else if (unk_0xB03A1684359C50A1(Local_112.f_1, 4))
			{
				Local_112.f_214 = 2;
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
	
	if (Local_112.f_215 > -1)
	{
		return;
	}
	if (!func_12())
	{
		return;
	}
	if (!func_11(&(Local_112.f_228)))
	{
		if (unk_0xB03A1684359C50A1(Local_112.f_1, 6))
		{
			if (unk_0xB03A1684359C50A1(Local_112.f_1, 11))
			{
				if (!unk_0xB03A1684359C50A1(Local_112.f_1, 7))
				{
					func_10(&(Local_112.f_228), 0, 0);
				}
			}
		}
	}
	if (func_11(&(Local_112.f_228)))
	{
		if (Local_112.f_222 > 0)
		{
			if (unk_0xB03A1684359C50A1(Local_112.f_1, 7))
			{
				func_9(&(Local_112.f_228));
				Local_112.f_222 = 255;
			}
			else
			{
				iVar0 = func_8();
				iVar1 = func_7();
				if (func_6(&(Local_112.f_228), iVar0, 0))
				{
					func_9(&(Local_112.f_228));
					Local_112.f_222 = (Local_112.f_222 - iVar1);
					if (Local_112.f_222 < 0)
					{
						Local_112.f_222 = 0;
					}
				}
			}
		}
		if (Local_112.f_222 <= 0)
		{
			if (!unk_0xB03A1684359C50A1(Local_112.f_1, 9))
			{
				unk_0xD2A9C3F486236CC5(&(Local_112.f_1), 9);
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
	if (unk_0x44243F2E2F58B8E3() && !bParam2)
	{
		if (unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(unk_0x5AFB8ED811F05E4D(), *uParam0)) >= iParam1)
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
		if (unk_0x44243F2E2F58B8E3() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xE92FCF3C05C2EF1D();
			}
			else
			{
				*uParam0 = unk_0x5E1037C28AA2B562();
			}
		}
		else
		{
			*uParam0 = unk_0x5AFB8ED811F05E4D();
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
	
	if (unk_0x5AD42783360AB57E(Local_112.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_112.f_2[0 /*10*/].f_2))
		{
			iVar0 = unk_0x4983F8C51A0C0AF3(unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2), -1, 0);
			if (iVar0 != 0)
			{
				if (!unk_0x0FAE113CE72ED842(iVar0))
				{
					if (!unk_0xEE1E09882FA264CA(iVar0))
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
	if (unk_0x49E68AAD93AADF10(uParam0))
	{
		return !func_14(unk_0xFA62333764BA8F5D(uParam0));
	}
	return 0;
}

int func_14(int iParam0)
{
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		if (unk_0x74C2FE037DFC8B4A(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0xC4B84EB67F78C1F0(iParam0, 0))
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
	if (!func_406())
	{
		return;
	}
	if (!unk_0xB03A1684359C50A1(Local_112.f_1, 6))
	{
		if (!func_11(&(Local_112.f_234)))
		{
			func_10(&(Local_112.f_234), 0, 0);
		}
		if (func_6(&(Local_112.f_234), func_16(), 0))
		{
			unk_0xD2A9C3F486236CC5(&(Local_112.f_1), 6);
		}
	}
}

int func_16()
{
	return 60000;
}

void func_17()
{
	if (!func_406())
	{
		return;
	}
	if (!func_11(&(Local_112.f_238)))
	{
		func_10(&(Local_112.f_238), 0, 0);
	}
	else if (func_6(&(Local_112.f_238), func_18(), 0))
	{
		unk_0xD2A9C3F486236CC5(&(Local_112.f_1), 15);
	}
}

int func_18()
{
	return 1800000;
}

void func_19()
{
	if (func_406())
	{
		return;
	}
	if (!func_11(&(Local_112.f_236)))
	{
		func_10(&(Local_112.f_236), 0, 0);
		return;
	}
	else if (!func_6(&(Local_112.f_236), func_21(), 0))
	{
		return;
	}
	if (!func_11(&(Local_112.f_226)))
	{
		func_10(&(Local_112.f_226), 0, 0);
	}
	else if (func_6(&(Local_112.f_226), func_20(), 0))
	{
		unk_0xD2A9C3F486236CC5(&(Local_112.f_1), 3);
	}
}

int func_20()
{
	return Global_262145.f_15284;
}

int func_21()
{
	return Local_112.f_223;
}

void func_22()
{
	int iVar0;
	int iVar1;
	
	if (func_28())
	{
		return;
	}
	if (unk_0xF67B871D7588B9D9())
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			switch (Local_112.f_2[iVar1 /*10*/].f_9)
			{
				case 0:
					if (unk_0x5AD42783360AB57E(Local_112.f_2[iVar1 /*10*/].f_1))
					{
						if (func_406())
						{
							Local_112.f_2[iVar1 /*10*/].f_9 = 8;
						}
						else
						{
							Local_112.f_2[iVar1 /*10*/].f_9 = 6;
						}
					}
					break;
				
				case 8:
					if (unk_0xB03A1684359C50A1(Local_112.f_1, 6))
					{
						Local_112.f_2[iVar1 /*10*/].f_9 = 1;
					}
					else
					{
						func_25(iVar0, iVar1);
					}
					break;
				
				case 1:
					if (unk_0x5AD42783360AB57E(Local_112.f_2[iVar1 /*10*/].f_1))
					{
						if (func_406())
						{
							func_25(iVar0, iVar1);
						}
					}
					break;
				
				case 2:
					break;
				
				case 3:
					if (func_406())
					{
						if (unk_0x5AD42783360AB57E(Local_112.f_2[iVar1 /*10*/].f_1))
						{
							if (!func_24(Local_112.f_2[iVar1 /*10*/].f_1))
							{
								if (!unk_0x1A7B277A2CBA7ADF(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iVar1 /*10*/].f_1)))
								{
									Local_112.f_2[iVar1 /*10*/].f_9 = 7;
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
	if (func_406())
	{
		if (iParam0 == 1)
		{
			if (unk_0x5AD42783360AB57E(Local_112.f_2[iParam0 /*10*/].f_1))
			{
				if (!func_24(Local_112.f_2[iParam0 /*10*/].f_1))
				{
					if (unk_0x1A7B277A2CBA7ADF(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam0 /*10*/].f_1)))
					{
						if (unk_0x5AD42783360AB57E(Local_112.f_2[0 /*10*/].f_1))
						{
							if (func_24(Local_112.f_2[0 /*10*/].f_1))
							{
								Local_112.f_2[iParam0 /*10*/].f_9 = 3;
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
	if (unk_0x49E68AAD93AADF10(uParam0))
	{
		return unk_0x0FAE113CE72ED842(unk_0x5FC7C92D1FA1DAEC(uParam0));
	}
	return 1;
}

void func_25(int iParam0, int iParam1)
{
	if (!func_24(Local_112.f_2[iParam1 /*10*/].f_1))
	{
		if (unk_0x1A7B277A2CBA7ADF(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam1 /*10*/].f_1)))
		{
			if (unk_0xB03A1684359C50A1(Local_112.f_205, iParam1))
			{
				unk_0xD2A9C3F486236CC5(&(Local_112.f_204), iParam1);
				iParam0 = unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_112.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_112.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else if (unk_0xB03A1684359C50A1(Local_112.f_206, iParam1))
			{
				unk_0xD2A9C3F486236CC5(&(Local_112.f_204), iParam1);
				iParam0 = unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_112.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_112.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else if (unk_0xB03A1684359C50A1(Local_112.f_207, iParam1))
			{
				unk_0xD2A9C3F486236CC5(&(Local_112.f_204), iParam1);
				iParam0 = unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_112.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_112.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else if (func_26())
			{
				unk_0xD2A9C3F486236CC5(&(Local_112.f_204), iParam1);
				iParam0 = unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_112.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_112.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else
			{
				func_23(iParam1);
			}
		}
		else if (Local_112.f_2[iParam1 /*10*/].f_9 != 7)
		{
			Local_112.f_2[iParam1 /*10*/].f_9 = 7;
		}
	}
}

int func_26()
{
	if (unk_0x5AD42783360AB57E(Local_112.f_2[0 /*10*/].f_1))
	{
		if (func_24(Local_112.f_2[0 /*10*/].f_1))
		{
			return 1;
		}
	}
	if (unk_0x5AD42783360AB57E(Local_112.f_2[1 /*10*/].f_1))
	{
		if (func_24(Local_112.f_2[1 /*10*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	if (unk_0x657B649BA2AD3582(*iParam0, 0))
	{
		if (unk_0x4983F8C51A0C0AF3(unk_0x0B495402BD092DEB(*iParam0), -1, 0) == *iParam0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_28()
{
	return ((((((unk_0xB03A1684359C50A1(Local_112.f_1, 1) || unk_0xB03A1684359C50A1(Local_112.f_1, 3)) || unk_0xB03A1684359C50A1(Local_112.f_1, 4)) || unk_0xB03A1684359C50A1(Local_112.f_1, 5)) || unk_0xB03A1684359C50A1(Local_112.f_1, 8)) || unk_0xB03A1684359C50A1(Local_112.f_1, 9)) || unk_0xB03A1684359C50A1(Local_112.f_1, 15));
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
	if (Local_112.f_0 != 4)
	{
		iLocal_737 = 0;
		while (iLocal_737 < unk_0xF02902C16AF3CA92())
		{
			if (unk_0x0CA6AB9C192005B8(unk_0xF4E7C3C6384793AA(iLocal_737)))
			{
				iVar5 = unk_0x8A0B92A0286253B3(unk_0xF4E7C3C6384793AA(iLocal_737));
				if (!func_34(iVar5, 0))
				{
					if (func_1162(iVar5, 1, 1))
					{
					}
					func_33(iLocal_737);
					func_32(iLocal_737);
					if (func_406())
					{
						if (!unk_0xB03A1684359C50A1(Local_112.f_1, 8))
						{
							if (unk_0xB03A1684359C50A1(Local_382[iLocal_737 /*11*/].f_1, 9))
							{
								unk_0xD2A9C3F486236CC5(&(Local_112.f_1), 8);
							}
						}
						if (!unk_0xB03A1684359C50A1(Local_112.f_1, 6))
						{
							if (unk_0xB03A1684359C50A1(Local_382[iLocal_737 /*11*/].f_1, 7))
							{
								unk_0xD2A9C3F486236CC5(&(Local_112.f_1), 6);
							}
						}
						if (!unk_0xB03A1684359C50A1(Local_112.f_1, 11))
						{
							if (unk_0xB03A1684359C50A1(Local_382[iLocal_737 /*11*/].f_1, 10))
							{
								unk_0xD2A9C3F486236CC5(&(Local_112.f_1), 11);
							}
						}
						if (!unk_0xB03A1684359C50A1(Local_112.f_217, iLocal_737))
						{
							if (unk_0xB03A1684359C50A1(Local_382[iLocal_737 /*11*/].f_1, 8))
							{
								unk_0xD2A9C3F486236CC5(&(Local_112.f_217), iLocal_737);
							}
						}
						else if (!unk_0xB03A1684359C50A1(Local_382[iLocal_737 /*11*/].f_1, 8))
						{
							unk_0x62148293B793073B(&(Local_112.f_217), iLocal_737);
						}
						if (iVar2 == -1)
						{
							if (unk_0xB03A1684359C50A1(Local_382[iLocal_737 /*11*/].f_1, 3))
							{
								iVar2 = iLocal_737;
							}
						}
						if (!unk_0xB03A1684359C50A1(Local_112.f_1, 4))
						{
							if (unk_0xB03A1684359C50A1(Local_382[iLocal_737 /*11*/].f_1, 2))
							{
								unk_0xD2A9C3F486236CC5(&(Local_112.f_1), 4);
								Local_112.f_221 = Local_112.f_216;
							}
						}
						if (!unk_0xB03A1684359C50A1(Local_112.f_1, 17))
						{
							if (unk_0xB03A1684359C50A1(Local_382[iLocal_737 /*11*/].f_1, 15))
							{
								unk_0xD2A9C3F486236CC5(&(Local_112.f_1), 17);
							}
						}
						if (bVar4)
						{
							if (unk_0xB03A1684359C50A1(Local_112.f_1, 4))
							{
								if (!unk_0xB03A1684359C50A1(Local_382[iLocal_737 /*11*/].f_1, 14))
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
					else if (!unk_0xB03A1684359C50A1(Local_112.f_1, 13))
					{
						if (unk_0xB03A1684359C50A1(Local_382[iLocal_737 /*11*/].f_1, 11))
						{
							unk_0xD2A9C3F486236CC5(&(Local_112.f_1), 13);
						}
					}
					if (!unk_0xB03A1684359C50A1(Local_112.f_1, 2))
					{
						if (!bVar3)
						{
							if (func_28())
							{
								if (!unk_0xB03A1684359C50A1(Local_382[iLocal_737 /*11*/].f_1, 4))
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
					if (!unk_0xB03A1684359C50A1(Local_112.f_1, 16))
					{
						if (unk_0xB03A1684359C50A1(Local_382[iLocal_737 /*11*/].f_1, 13))
						{
							unk_0xD2A9C3F486236CC5(&(Local_112.f_1), 16);
						}
					}
				}
			}
			else if (!unk_0xB03A1684359C50A1(Local_112.f_1, 5))
			{
				if (Local_112.f_218 > -1)
				{
					if (iLocal_737 == Local_112.f_218)
					{
						unk_0xD2A9C3F486236CC5(&(Local_112.f_1), 5);
					}
				}
			}
			iLocal_737++;
		}
		func_31();
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (unk_0xB03A1684359C50A1(Local_112.f_209, iVar1))
			{
				iVar0++;
			}
			iVar1++;
		}
		if (Local_112.f_213 != iVar0)
		{
			Local_112.f_213 = iVar0;
		}
		if (!unk_0xB03A1684359C50A1(Local_112.f_1, 1))
		{
			if (iVar0 >= func_30())
			{
				unk_0xD2A9C3F486236CC5(&(Local_112.f_1), 1);
			}
		}
		if (func_406())
		{
			if (!unk_0xB03A1684359C50A1(Local_112.f_1, 7))
			{
				if (Local_112.f_217 != 0)
				{
					unk_0xD2A9C3F486236CC5(&(Local_112.f_1), 7);
				}
			}
			else if (Local_112.f_217 == 0)
			{
				unk_0x62148293B793073B(&(Local_112.f_1), 7);
			}
			if (!func_28())
			{
				if (Local_112.f_215 != iVar2)
				{
					Local_112.f_215 = iVar2;
					if (Local_112.f_215 > -1)
					{
						uVar6 = unk_0x8A0B92A0286253B3(unk_0xF4E7C3C6384793AA(Local_112.f_215));
						Local_112.f_216 = uVar6;
					}
					else
					{
						Local_112.f_216 = -1;
					}
				}
			}
			if (!unk_0xB03A1684359C50A1(Local_112.f_1, 18))
			{
				if (bVar4)
				{
					unk_0xD2A9C3F486236CC5(&(Local_112.f_1), 18);
				}
			}
		}
		if (!unk_0xB03A1684359C50A1(Local_112.f_1, 2))
		{
			if (!bVar3)
			{
				unk_0xD2A9C3F486236CC5(&(Local_112.f_1), 2);
			}
		}
	}
}

int func_30()
{
	switch (Local_112.f_197)
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
	
	if (func_406())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x5AD42783360AB57E(Local_112.f_2[iVar0 /*10*/].f_1))
		{
			if (!unk_0xB03A1684359C50A1(Local_112.f_209, iVar0))
			{
				if (!func_11(&(Local_112.f_240[iVar0 /*2*/])))
				{
					if (func_24(Local_112.f_2[iVar0 /*10*/].f_1))
					{
						func_10(&(Local_112.f_240[iVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_6(&(Local_112.f_240[iVar0 /*2*/]), 10000, 0))
				{
					unk_0xD2A9C3F486236CC5(&(Local_112.f_209), iVar0);
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
		if (!unk_0xB03A1684359C50A1(Local_112.f_205, iVar0))
		{
			if (unk_0xB03A1684359C50A1(Local_382[iParam0 /*11*/].f_5, iVar0))
			{
				unk_0xD2A9C3F486236CC5(&(Local_112.f_205), iVar0);
			}
		}
		if (!unk_0xB03A1684359C50A1(Local_112.f_206, iVar0))
		{
			if (unk_0xB03A1684359C50A1(Local_382[iParam0 /*11*/].f_2, iVar0))
			{
				unk_0xD2A9C3F486236CC5(&(Local_112.f_206), iVar0);
			}
		}
		if (!unk_0xB03A1684359C50A1(Local_112.f_208, iVar0))
		{
			if (unk_0xB03A1684359C50A1(Local_382[iParam0 /*11*/].f_3, iVar0))
			{
				unk_0xD2A9C3F486236CC5(&(Local_112.f_208), iVar0);
			}
		}
		if (!unk_0xB03A1684359C50A1(Local_112.f_207, iVar0))
		{
			if (unk_0xB03A1684359C50A1(Local_382[iParam0 /*11*/].f_4, iVar0))
			{
				unk_0xD2A9C3F486236CC5(&(Local_112.f_207), iVar0);
			}
		}
		if (!unk_0xB03A1684359C50A1(Local_112.f_209, iVar0))
		{
			if (unk_0xB03A1684359C50A1(Local_382[iParam0 /*11*/].f_6, iVar0))
			{
				unk_0xD2A9C3F486236CC5(&(Local_112.f_209), iVar0);
			}
			else if (unk_0xB03A1684359C50A1(Local_382[iParam0 /*11*/].f_7, iVar0))
			{
				unk_0xD2A9C3F486236CC5(&(Local_112.f_209), iVar0);
			}
			else if (unk_0xB03A1684359C50A1(Local_382[iParam0 /*11*/].f_8, iVar0))
			{
				unk_0xD2A9C3F486236CC5(&(Local_112.f_209), iVar0);
			}
		}
		iVar0++;
	}
}

void func_33(int iParam0)
{
	int iVar0;
	
	if (func_406())
	{
		return;
	}
	if (!unk_0xB03A1684359C50A1(Local_112.f_210, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (unk_0x5AD42783360AB57E(Local_112.f_2[iVar0 /*10*/].f_2))
			{
				if (func_13(Local_112.f_2[iVar0 /*10*/].f_2))
				{
					unk_0xC8B9E1BC94518558(unk_0xFA62333764BA8F5D(Local_112.f_2[iVar0 /*10*/].f_2), unk_0x8A0B92A0286253B3(unk_0xF4E7C3C6384793AA(iParam0)), 1);
					unk_0xD2A9C3F486236CC5(&(Local_112.f_210), iParam0);
				}
			}
			else
			{
				unk_0xD2A9C3F486236CC5(&(Local_112.f_210), iParam0);
			}
			iVar0++;
		}
	}
}

bool func_34(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		bVar0 = func_35(-1, 0) == 8;
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

int func_35(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_36();
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

int func_36()
{
	return Global_1312736;
}

void func_37()
{
	struct<3> Var0;
	
	Var0 = { func_40() };
	if (!func_39(Var0))
	{
		func_38(&(Local_112.f_269), Var0, 1, 1103626240);
	}
}

void func_38(var uParam0, struct<3> Param1, int iParam4, int iParam5)
{
	if (!unk_0x1BAEB842824F0F68(*uParam0))
	{
		*uParam0 = unk_0x284286A72EF0C5A8(Param1 - Vector(iParam5, iParam5, iParam5), Param1 + Vector(iParam5, iParam5, iParam5), 1f, 0.25f, iParam4, 1);
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
	return func_41(Local_112.f_197 + 1);
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
	
	if (func_406())
	{
		func_66();
		if (!func_65())
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
			if (!unk_0x5AD42783360AB57E(Local_112.f_2[iVar0 /*10*/].f_1))
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
	
	iVar0 = func_64();
	fVar5 = func_63();
	if (!unk_0x5AD42783360AB57E(Local_112.f_2[iParam0 /*10*/].f_1))
	{
		if (unk_0x5A27D0B71FCE8B09(1))
		{
			if (func_62(iVar0))
			{
				if (func_61(Local_112.f_2[iParam0 /*10*/].f_5, 0f, 0f, 0f, 0))
				{
					if (func_47(iParam0, &Var1, &uVar4))
					{
						Local_112.f_2[iParam0 /*10*/].f_5 = { Var1 };
						Local_112.f_2[iParam0 /*10*/].f_8 = uVar4;
					}
				}
				else if (func_46(&(Local_112.f_2[iParam0 /*10*/].f_1), 22, iVar0, Local_112.f_2[iParam0 /*10*/].f_5, Local_112.f_2[iParam0 /*10*/].f_8, 1, 1, 1))
				{
					unk_0xDC633118188196B0(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam0 /*10*/].f_1), 1);
					unk_0x40E2910BAF39B1C7(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam0 /*10*/].f_1), 1);
					unk_0x641E77554763EF06(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam0 /*10*/].f_1), Global_1574750);
					unk_0x07C41718268FCB31(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam0 /*10*/].f_1), 1);
					if ((iParam0 % 2) == 0)
					{
						iVar6 = unk_0x0A088F357EF627CA(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam0 /*10*/].f_1));
						fVar7 = unk_0xBBDA792448DB5A89(iVar6);
						if (fVar5 != 0f)
						{
							fVar7 = (fVar7 * fVar5);
						}
						iVar6 = unk_0xF2DB717A73826179(fVar7);
						unk_0xC64BF686A1905A3D(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam0 /*10*/].f_1), iVar6);
						unk_0x874004759C4BE8DC(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam0 /*10*/].f_1), iVar6);
						unk_0x03387760D3B39DD7(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam0 /*10*/].f_1), 100);
						unk_0x7D154B840BD03D00(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam0 /*10*/].f_1), joaat("weapon_assaultrifle"), 9999999, 0, 1);
					}
					else
					{
						unk_0x7D154B840BD03D00(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam0 /*10*/].f_1), joaat("weapon_assaultrifle"), 9999999, 0, 1);
					}
					unk_0x764AFC5A3A16C2B0(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam0 /*10*/].f_1), 281, 1);
					unk_0x9B78D121254B9A0D(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam0 /*10*/].f_1), 1);
					unk_0x764AFC5A3A16C2B0(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam0 /*10*/].f_1), 42, 1);
					unk_0x87BB569E1E8B1D34(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam0 /*10*/].f_1), 1);
					unk_0x273FE09AE985A00A(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam0 /*10*/].f_1), 43, 1);
					unk_0x273FE09AE985A00A(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam0 /*10*/].f_1), 44, 1);
					unk_0x1070F6BBC5E06444(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam0 /*10*/].f_1), 1);
					if (func_45(iParam0))
					{
						unk_0x273FE09AE985A00A(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam0 /*10*/].f_1), 0, 0);
					}
					unk_0x764AFC5A3A16C2B0(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam0 /*10*/].f_1), 146, 1);
					unk_0x177D8D1F373F4C95(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam0 /*10*/].f_1), Local_112.f_2[iParam0 /*10*/].f_5, 7f, 0, 0);
					unk_0x10F31830C95ED2E5(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iParam0 /*10*/].f_1), 1);
					unk_0xD2A9C3F486236CC5(&(Local_112.f_203), iParam0);
				}
			}
		}
	}
	return 0;
}

int func_45(int iParam0)
{
	switch (Local_112.f_197)
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
	
	if (!unk_0x5A27D0B71FCE8B09(1))
	{
		return 0;
	}
	iVar0 = unk_0x364B87C5C64BD100(iParam1, iParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0x69B3692B4761803C(iVar0);
	if (unk_0x49E68AAD93AADF10(*uParam0))
	{
		unk_0xB05881241072FEE6(iVar0, iParam9);
		if (unk_0x2A7F482ED04D9A1A(iVar0))
		{
			if (bParam7)
			{
				unk_0x81E21F3D8AF3CEC2(*uParam0, 1);
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
	if (!func_61(Local_112.f_103[iVar0 /*5*/], 0f, 0f, 0f, 0))
	{
		if (!Local_112.f_103[iVar0 /*5*/].f_4)
		{
			if (func_48(Local_112.f_103[iVar0 /*5*/], 1f, 1065353216, 1065353216, 1084227584, 0, 0, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam1 = { Local_112.f_103[iVar0 /*5*/] };
				*uParam2 = Local_112.f_103[iVar0 /*5*/].f_3;
				Local_112.f_103[iVar0 /*5*/].f_4 = 1;
				return 1;
			}
			else
			{
				if (unk_0x5288FA47638BE8EE(Local_112.f_103[iVar0 /*5*/], 1f))
				{
					bVar1 = true;
				}
				else if (unk_0xF00F53194FFC1443(Local_112.f_103[iVar0 /*5*/], Local_112.f_103[iVar0 /*5*/].f_1, (Local_112.f_103[iVar0 /*5*/].f_2 + 1f), 1f) || unk_0xF00F53194FFC1443(Local_112.f_103[iVar0 /*5*/], 1f))
				{
					bVar1 = true;
				}
				if (bVar1)
				{
					if (!unk_0xB03A1684359C50A1(Local_112.f_212, iVar0))
					{
						unk_0x7EE425AE3317BA69(Local_112.f_103[iVar0 /*5*/], 5f, 1, 0, 0, 1);
						unk_0xD2A9C3F486236CC5(&(Local_112.f_212), iVar0);
					}
				}
			}
		}
	}
	return 0;
}

int func_48(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405047.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x5288FA47638BE8EE(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xF00F53194FFC1443(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xF00F53194FFC1443(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xE9168FF5AA33FC8E(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam13)
	{
		if (unk_0xA5E527B690D287FC(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (fParam14 > 0f)
	{
		if (func_54(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
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
	Global_2405047.f_2++;
	return 1;
}

int func_49(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_1162(unk_0x8CFC7D6E1DA5D304(), 1, 1))
		{
			if (!unk_0xEC0ECEF2AF3FDA8D())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x15EE504466B7BBD3(func_51(unk_0x8CFC7D6E1DA5D304()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x6157232E032EBC56(Param0, fParam3))
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
		if (func_1162(iVar1, 1, 1))
		{
			if (!func_34(iVar1, 0) && unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x8CFC7D6E1DA5D304()))
				{
					if ((func_50(iVar1) || !bParam10) && !Global_2422724[iVar1 /*420*/].f_274)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x1BE7B010C9B9841E(iVar1) == -1)
							{
								if (unk_0x1BE7B010C9B9841E(iVar1) == unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x1BE7B010C9B9841E(iVar1) != unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()))) || unk_0x1BE7B010C9B9841E(iVar1) == -1)
							{
								if (unk_0x15EE504466B7BBD3(func_51(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x2B6FEB1E9F3FDFFC(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x1BE7B010C9B9841E(iVar1) != iParam8 || unk_0x1BE7B010C9B9841E(iVar1) == -1)
						{
							if (unk_0x15EE504466B7BBD3(func_51(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x2B6FEB1E9F3FDFFC(iVar1, Param0, fParam3))
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
	if (unk_0xD84C4308F24CEEE7(unk_0x6604E096142B4B55(iParam0)) || Global_2422724[iParam0 /*420*/].f_260)
	{
		return 1;
	}
	return 0;
}

Vector3 func_51(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_53() && Global_1595681[iVar0 /*678*/].f_672) && !func_39(Global_1595681[iVar0 /*678*/].f_673))
	{
		return Global_1595681[iVar0 /*678*/].f_673;
	}
	return func_52(iParam0);
}

Vector3 func_52(int iParam0)
{
	return unk_0x761660F5CE986DC4(unk_0x6604E096142B4B55(iParam0), 0);
}

bool func_53()
{
	return Global_2447128.f_16;
}

int func_54(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x8CFC7D6E1DA5D304() != iVar1) || iParam8 == 0)
		{
			if (func_1162(iVar1, bParam4, bParam5))
			{
				if (unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iVar1))
				{
					if (!bParam7 || (!unk_0x0FAE113CE72ED842(unk_0x6604E096142B4B55(iVar1)) && func_50(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) != unk_0x1BE7B010C9B9841E(iVar1))) || unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) == -1)
						{
							if (((unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) == -1 && uParam9) && bParam6) && func_55(iVar1))
							{
							}
							else if (unk_0x31F12808DC47A9E5(unk_0x6604E096142B4B55(iVar1)))
							{
								if (unk_0x15EE504466B7BBD3(func_52(iVar1), Param0, 1) < fParam3)
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

int func_55(int iParam0)
{
	if (func_60(unk_0x8CFC7D6E1DA5D304(), iParam0))
	{
		return 1;
	}
	Global_2491936 = { func_59(iParam0) };
	if (unk_0x5AA8CFBEDE9B83FC(&Global_2491936))
	{
		return 1;
	}
	if (func_56(unk_0x8CFC7D6E1DA5D304(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_56(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_58(iParam0);
	if (!iVar0 == func_57())
	{
		if (iVar0 == func_58(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_57()
{
	return -1;
}

int func_58(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_1627460[iParam0 /*530*/].f_11;
	}
	return func_57();
}

struct<13> func_59(int iParam0)
{
	struct<13> Var0;
	
	unk_0xAFA03929DD14DF46(iParam0, &Var0, 13);
	return Var0;
}

int func_60(int iParam0, int iParam1)
{
	if (unk_0xE906D9FB40E35957())
	{
		Global_2491936 = { func_59(iParam0) };
		Global_2491949 = { func_59(iParam1) };
		if (unk_0x9FDA5C5DFB3FE364(&Global_2491936))
		{
			if (unk_0x9FDA5C5DFB3FE364(&Global_2491949))
			{
				unk_0x4AEF279CFD4A57C6(&Global_2491866, 35, &Global_2491936);
				unk_0x4AEF279CFD4A57C6(&Global_2491901, 35, &Global_2491949);
				if (Global_2491866 == Global_2491901)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_61(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_62(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x9016574B77A748EE(iParam0);
	return unk_0xEDFE27D1AEA0EA7F(iParam0);
}

float func_63()
{
	return 2f;
}

int func_64()
{
	int iVar0;
	
	switch (Local_112.f_195)
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

int func_65()
{
	if (!unk_0x5AD42783360AB57E(Local_112.f_2[0 /*10*/].f_2))
	{
		return 0;
	}
	if (!unk_0x5AD42783360AB57E(Local_112.f_2[0 /*10*/].f_1))
	{
		return 0;
	}
	if (!unk_0x5AD42783360AB57E(Local_112.f_2[1 /*10*/].f_1))
	{
		return 0;
	}
	return 1;
}

int func_66()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	var uVar5;
	struct<28> Var6;
	struct<3> Var34;
	
	iVar0 = func_179();
	iVar1 = func_64();
	if (!unk_0x5AD42783360AB57E(Local_112.f_2[0 /*10*/].f_2))
	{
		if (unk_0x274CFAE26B786CB6(1))
		{
			if (func_62(iVar0))
			{
				if (!func_61(Local_112.f_262, 0f, 0f, 0f, 0))
				{
					Var2 = { Local_112.f_262 };
					uVar5 = Local_112.f_265;
					if (!unk_0xB03A1684359C50A1(Local_112.f_211, 0))
					{
						unk_0x7EE425AE3317BA69(Var2, 5f, 1, 0, 0, 1);
						unk_0xD2A9C3F486236CC5(&(Local_112.f_211), 0);
					}
					if (func_178(&(Local_112.f_2[0 /*10*/].f_2), iVar0, Var2, uVar5, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						unk_0xFA4085765D010C3C(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[0 /*10*/].f_2), 1);
						func_177(unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2));
						unk_0x5D41CFDE94DA9F49(unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2), 0);
						unk_0x6780B033CB86560E(unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2), 0, 0);
						unk_0xE58E53D56F33BF17(unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2), 1);
						unk_0x573ECB938C09210F(unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2), 0);
						unk_0xF321DFA4C895508B(unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2), 1);
						unk_0x966FA142773AB2CC(unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2), 0.08f);
						unk_0x874004759C4BE8DC(unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2), Global_262145.f_14228);
						unk_0x9A397FD2271E5FF3(unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2), 1);
						unk_0xC6C8881523DEA17A(unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2), 1);
						unk_0x0ADF55B41BBFCE10(unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2), 1);
						unk_0x6B8D6ABF26D72969(unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2), 2, 2);
						unk_0x6B8D6ABF26D72969(unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2), 3, 2);
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
					Var6.f_27 = 1123024896;
					Var6.f_0 = 0f;
					Var6.f_1 = 0;
					Var6.f_3 = 200f;
					Var6.f_4 = 1;
					Var6.f_5 = 1;
					Var6.f_10 = 1;
					Var6.f_2 = 1;
					Var34 = { func_175(Local_112.f_2[0 /*10*/].f_5, Local_112.f_2[0 /*10*/].f_8, 20f) };
					if (func_68(Local_112.f_2[0 /*10*/].f_5, Var34, iVar0, 0, &(Local_112.f_262), &(Local_112.f_2[0 /*10*/].f_8), &Var6))
					{
						Local_112.f_265 = Local_112.f_2[0 /*10*/].f_8;
					}
				}
			}
		}
	}
	if (unk_0x5AD42783360AB57E(Local_112.f_2[0 /*10*/].f_2))
	{
		if (!unk_0x5AD42783360AB57E(Local_112.f_2[0 /*10*/].f_1))
		{
			if (unk_0x5A27D0B71FCE8B09(1))
			{
				if (func_62(iVar1))
				{
					if (func_67(&(Local_112.f_2[0 /*10*/].f_1), Local_112.f_2[0 /*10*/].f_2, 22, iVar1, -1, 1, 1, 1))
					{
						unk_0xDC633118188196B0(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[0 /*10*/].f_1), 1);
						unk_0xFC9BA95283E53AFD(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[0 /*10*/].f_1), 1, 0);
						unk_0x40E2910BAF39B1C7(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[0 /*10*/].f_1), 1);
						unk_0x641E77554763EF06(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[0 /*10*/].f_1), Global_1574750);
						unk_0x764AFC5A3A16C2B0(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[0 /*10*/].f_1), 42, 1);
						unk_0x273FE09AE985A00A(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[0 /*10*/].f_1), 3, 0);
						unk_0x273FE09AE985A00A(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[0 /*10*/].f_1), 2, 1);
					}
				}
			}
		}
	}
	if (unk_0x5AD42783360AB57E(Local_112.f_2[0 /*10*/].f_1))
	{
		if (!unk_0x5AD42783360AB57E(Local_112.f_2[1 /*10*/].f_1))
		{
			if (unk_0x5A27D0B71FCE8B09(1))
			{
				if (func_62(iVar1))
				{
					if (func_67(&(Local_112.f_2[1 /*10*/].f_1), Local_112.f_2[0 /*10*/].f_2, 22, iVar1, 0, 1, 1, 1))
					{
						unk_0xDC633118188196B0(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[1 /*10*/].f_1), 1);
						unk_0xFC9BA95283E53AFD(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[1 /*10*/].f_1), 1, 0);
						unk_0x40E2910BAF39B1C7(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[1 /*10*/].f_1), 1);
						unk_0x641E77554763EF06(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[1 /*10*/].f_1), Global_1574750);
						unk_0x764AFC5A3A16C2B0(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[1 /*10*/].f_1), 42, 1);
						unk_0x273FE09AE985A00A(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[1 /*10*/].f_1), 3, 0);
						unk_0x273FE09AE985A00A(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[1 /*10*/].f_1), 2, 1);
						unk_0x273FE09AE985A00A(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[1 /*10*/].f_1), 5, 1);
						unk_0x7D154B840BD03D00(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[1 /*10*/].f_1), joaat("weapon_microsmg"), 9999999, 0, 1);
						Local_112.f_2[1 /*10*/].f_2 = Local_112.f_2[0 /*10*/].f_2;
					}
				}
			}
		}
	}
	return 0;
}

int func_67(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x5A27D0B71FCE8B09(1))
	{
		return 0;
	}
	if (!unk_0x49E68AAD93AADF10(uParam1))
	{
		return 0;
	}
	if (!unk_0xC4B84EB67F78C1F0(unk_0xFA62333764BA8F5D(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x69B3692B4761803C(unk_0xC52E83A4C0F88DAB(unk_0xFA62333764BA8F5D(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x49E68AAD93AADF10(*uParam0))
	{
		unk_0xB05881241072FEE6(unk_0x5FC7C92D1FA1DAEC(*uParam0), iParam7);
		if (unk_0x2A7F482ED04D9A1A(unk_0x5FC7C92D1FA1DAEC(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x81E21F3D8AF3CEC2(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_68(struct<3> Param0, struct<3> Param3, int iParam6, int iParam7, var uParam8, var uParam9, var uParam10)
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
	if (unk_0x51CFE20A158947F4())
	{
		if (!unk_0xCAC20ED19D675C6E() > 7 && !unk_0xCAC20ED19D675C6E() == 5)
		{
			return 0;
		}
	}
	if (Global_2405047.f_509)
	{
		Global_2405047.f_509 = 0;
		return 0;
	}
	if (!func_174(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (!Global_2405047.f_586 == 0 && unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Global_2405047.f_591) < func_173(0))
	{
		if (!Global_2405047.f_650 == 0)
		{
			Global_2405047.f_650 = 0;
			func_172();
			func_171();
		}
		return 0;
	}
	if (!unk_0xBCF9D020FA9C313D() == Global_2405047.f_649)
	{
		if (!Global_2405047.f_650 == 0)
		{
			if (unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Global_2405047.f_653) < func_173(0))
			{
				return 0;
			}
			else
			{
				Global_2405047.f_650 = 0;
			}
		}
	}
	else
	{
		if (unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Global_2405047.f_651) > 30000)
		{
			Global_2405047.f_650 = 0;
		}
		if (!Global_2405047.f_650 == 0)
		{
			if (unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Global_2405047.f_653) > func_173(1))
			{
				Global_2405047.f_650 = 0;
			}
		}
	}
	if (uParam10->f_5)
	{
		if (func_165(Param0))
		{
			if (func_164(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2405047.f_650 == 0)
	{
		if (unk_0x2A488C176D52CCA5(Global_2405047.f_668, Param0) > 50f)
		{
			return 0;
		}
	}
	unk_0xEA3ACC77B4C2040A((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2405047.f_650 == 0)
	{
		Global_2405047.f_655 = 0;
		Global_2405047.f_651 = unk_0x5E1037C28AA2B562();
		Global_2405047.f_649 = unk_0xBCF9D020FA9C313D();
		Global_2405047.f_653 = unk_0x5E1037C28AA2B562();
		Global_2405047.f_668 = { Param0 };
		Global_2405047.f_654 = unk_0x5E1037C28AA2B562();
		Global_2405047.f_650 = 2;
		func_163();
		func_172();
		if (!uParam10->f_25 || ((((func_162(Param0, 1, 1133903872) && !uParam10->f_26) && !Global_2512581.f_866) && !Global_2512581.f_855) && !Global_2512581.f_863))
		{
			func_144(Param0, iParam6);
		}
		if (func_139(Param0))
		{
			func_144(Param0, iParam6);
		}
	}
	switch (Global_2405047.f_650)
	{
		case 2:
			if (unk_0x29C76D80E7597FEE((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2405047.f_656 = { Param0 };
				Global_2405047.f_659 = 0f;
				if (Global_2512581.f_866)
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
				if (((uParam10->f_2 && func_48(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam10->f_6) && !func_137(Param0, *uParam9, iParam6, unk_0x8CFC7D6E1DA5D304(), 0))
				{
					Global_2405047.f_656 = { Param0 };
					Global_2405047.f_659 = *uParam9;
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
					Var5.f_49 = uParam10->f_27;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam10->f_13[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam10->f_20[iVar1];
						iVar1++;
					}
					func_88(&(Global_2405047.f_656), &(Global_2405047.f_659), &Var5);
				}
				Global_2405047.f_647 = unk_0x61E9B3BFA06B017B(0, 65535);
				func_86(Global_2405047.f_656, Global_2405047.f_659, iParam6, Global_2405047.f_647);
				Global_2405047.f_645 = 0;
				Global_2405047.f_646 = 0;
				Global_2405047.f_655++;
				Global_2405047.f_652 = unk_0x5E1037C28AA2B562();
				Global_2405047.f_651 = unk_0x5E1037C28AA2B562();
				Global_2405047.f_650 = 3;
			}
			break;
		
		case 3:
			if (Global_2405047.f_645)
			{
				if (Global_2405047.f_647 == Global_2405047.f_648)
				{
					if (Global_2405047.f_646)
					{
						if (uParam10->f_10 && !uParam10->f_9)
						{
							if (func_85(Global_2405047.f_656, Global_2405047.f_659, iParam6, 1, 1036831949))
							{
								Global_2405047.f_650 = 4;
								Global_2405047.f_672 = unk_0x5E1037C28AA2B562();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_83(Global_2405047.f_656, 0);
						func_82(-1);
					}
				}
				else
				{
					Global_2405047.f_645 = 0;
					Global_2405047.f_646 = 0;
				}
			}
			else if (unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Global_2405047.f_652) > 3000)
			{
				func_82(-1);
			}
			break;
		
		case 4:
			if (uParam10->f_10 && !uParam10->f_9)
			{
				if (unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Global_2405047.f_672) < 10000)
				{
					if (unk_0xF2572F6240670CD2(Global_2405047.f_671))
					{
						if (unk_0x8393D39BD5057DAE(Global_2405047.f_671))
						{
							if (!unk_0x69931145334B2B19(Global_2405047.f_671))
							{
								if (func_81(Global_2405047.f_656, Global_2405047.f_659, iParam6, unk_0x8CFC7D6E1DA5D304(), 0) || func_70(Global_2405047.f_656, Global_2405047.f_659, iParam6, 1, 0, 0, 0, 1, 0))
								{
									func_83(Global_2405047.f_656, 0);
									func_82(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_83(Global_2405047.f_656, 0);
								func_82(-1);
							}
						}
					}
					else
					{
						func_82(-1);
					}
				}
				else
				{
					func_82(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2405047.f_656 = { Param0 };
			Global_2405047.f_659 = 0f;
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
			Var64.f_49 = uParam10->f_27;
			func_88(&(Global_2405047.f_656), &(Global_2405047.f_659), &Var64);
			Global_2405047.f_650 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2405047.f_668 = { Param0 };
	Global_2405047.f_653 = unk_0x5E1037C28AA2B562();
	if (bVar0)
	{
		Global_2405047.f_508 = 0;
		*uParam8 = { Global_2405047.f_656 };
		*uParam9 = Global_2405047.f_659;
		func_69(1);
		return 1;
	}
	return 0;
}

void func_69(bool bParam0)
{
	Global_2405047.f_650 = 0;
	func_163();
	func_172();
	if (bParam0)
	{
		func_171();
	}
}

int func_70(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar8;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0x8CFC7D6E1DA5D304() != iVar1) || iParam9 == 0)
		{
			if (func_1162(iVar1, bParam5, bParam6))
			{
				if (unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iVar1))
				{
					if (!bParam8 || (!unk_0x0FAE113CE72ED842(unk_0x6604E096142B4B55(iVar1)) && func_50(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) != unk_0x1BE7B010C9B9841E(iVar1))) || unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) == -1)
						{
							if (((unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) == -1 && iParam10) && bParam7) && func_55(iVar1))
							{
							}
							else if (unk_0x31F12808DC47A9E5(unk_0x6604E096142B4B55(iVar1)))
							{
								fVar2 = 0.1f;
								if (unk_0x657B649BA2AD3582(unk_0x6604E096142B4B55(iVar1), 0))
								{
									iVar3 = unk_0x5AD687C3474F04B4(unk_0x6604E096142B4B55(iVar1), 0);
									if (unk_0x31F12808DC47A9E5(iVar3) && !unk_0x74C2FE037DFC8B4A(iVar3, 0))
									{
										iVar4 = unk_0x4F69FBD64CDF125B(iVar3);
										Var5 = { unk_0x761660F5CE986DC4(iVar3, 0) };
										fVar8 = unk_0x93FDA3BF59E7B77F(iVar3);
										if (func_80(Param0, fParam3, iParam4, Var5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_71(func_52(iVar1), Param0, fParam3, iParam4, fVar2))
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

int func_71(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_79(iParam7, 1008981770))
	{
		func_72(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
		if (unk_0xBD0ECFC2907D1982(Param0, Var0, Var3, fVar6, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_72(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	Var0 = { 0f, 1f, 0f };
	func_78(&Var0, 0f, 0f, fParam3);
	Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
	func_73(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
	Var9 = { Param0 + Var0 * FtoV((Var6.f_1 + fParam8)) };
	Var9.f_2 = (Var9.f_2 - ((0.5f * unk_0x36E1A96E1D63ED91((Var6.f_2 - Var3.f_2))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) };
	Var12.f_2 = (Var12.f_2 + ((0.5f * unk_0x36E1A96E1D63ED91((Var6.f_2 - Var3.f_2))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = unk_0x36E1A96E1D63ED91((Var6.f_0 - Var3.f_0));
}

void func_73(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (unk_0x13F3D1D84F5B8F2E(iParam0))
	{
		unk_0x0D8E51F437C55570(iParam0, fParam1, fParam2);
	}
	else
	{
		iVar0 = func_76(iParam0);
		if (iVar0 != 0)
		{
			func_74(iVar0, fParam1, fParam2, 1086324736, 1080033280, 1077936128);
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

void func_74(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_75(iParam0, &Global_1315788);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (unk_0x13F3D1D84F5B8F2E(Global_1315788[iVar0]))
		{
			unk_0x0D8E51F437C55570(Global_1315788[iVar0], &(Global_1315792[iVar0 /*3*/]), &(Global_1315799[iVar0 /*3*/]));
		}
		if (unk_0x652D2EEEF1D3E62C(Global_1315792[iVar0 /*3*/]) <= 0.01f || unk_0x652D2EEEF1D3E62C(Global_1315799[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1315792[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1315799[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1315792[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1315799[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1315792[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1315799[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1315806[iVar0] = (Global_1315799[iVar0 /*3*/] - Global_1315792[iVar0 /*3*/]);
		Global_1315809[iVar0] = (Global_1315799[iVar0 /*3*/].f_1 - Global_1315792[iVar0 /*3*/].f_1);
		Global_1315812[iVar0] = (Global_1315799[iVar0 /*3*/].f_2 - Global_1315792[iVar0 /*3*/].f_2);
		if (Global_1315806[iVar0] > Global_1315815)
		{
			Global_1315815 = Global_1315806[iVar0];
		}
		if (Global_1315812[iVar0] > Global_1315816)
		{
			Global_1315816 = Global_1315812[iVar0];
		}
		iVar0++;
	}
	Global_1315817 = (Global_1315815 * -0.5f);
	Global_1315820 = (Global_1315815 * 0.5f);
	Global_1315817.f_1 = ((((0.5f * Global_1315809[0]) + Global_1315809[1]) + Global_1315788.f_3) * -1f);
	Global_1315820.f_1 = (0.5f * Global_1315809[0]);
	Global_1315817.f_2 = (Global_1315812[0] * -0.5f);
	Global_1315820.f_2 = (Global_1315812[0] * 0.5f);
	*uParam1 = { Global_1315817 };
	*uParam2 = { Global_1315820 };
}

void func_75(int iParam0, var uParam1)
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
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_77(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_77(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_78(var uParam0, struct<3> Param1)
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

float func_79(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_73(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (unk_0x71D93B57D07F9804(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_80(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var14;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	
	if (func_71(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_73(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	Var20 = { 0f, Var17.f_1, 0f };
	func_78(&Var20, 0f, 0f, fParam3);
	Var23 = { 0f, Var14.f_1, 0f };
	func_78(&Var23, 0f, 0f, fParam3);
	Var26 = { (unk_0x36E1A96E1D63ED91((Var17.f_0 - Var14.f_0)) * 0.5f), 0f, 0f };
	func_78(&Var26, 0f, 0f, fParam3);
	Var1[0 /*3*/] = { Param0 + Var20 + Var26 };
	Var1[0 /*3*/].f_2 = (Var1[0 /*3*/].f_2 + (0.5f * unk_0x36E1A96E1D63ED91((Var17.f_2 - Var14.f_2))));
	Var1[1 /*3*/] = { Param0 + Var20 - Var26 };
	Var1[1 /*3*/].f_2 = (Var1[1 /*3*/].f_2 + (0.5f * unk_0x36E1A96E1D63ED91((Var17.f_2 - Var14.f_2))));
	Var1[2 /*3*/] = { Param0 + Var23 + Var26 };
	Var1[2 /*3*/].f_2 = (Var1[2 /*3*/].f_2 + (0.5f * unk_0x36E1A96E1D63ED91((Var17.f_2 - Var14.f_2))));
	Var1[3 /*3*/] = { Param0 + Var23 - Var26 };
	Var1[3 /*3*/].f_2 = (Var1[3 /*3*/].f_2 + (0.5f * unk_0x36E1A96E1D63ED91((Var17.f_2 - Var14.f_2))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_71(Var1[iVar0 /*3*/], Param5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_80(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_81(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_1162(iVar1, 0, 1) && func_1162(iParam5, 0, 1))
			{
				if (Global_2416788.f_261[iVar0])
				{
					if (func_71(Global_2416788.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_71(func_52(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2416788.f_261[iVar0])
			{
				if (func_71(Global_2416788.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_1162(iVar1, 0, 0))
			{
				if (unk_0x31F12808DC47A9E5(unk_0x6604E096142B4B55(iVar1)))
				{
					if (func_71(func_52(iVar1), Param0, fParam3, iParam4, 1036831949))
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

void func_82(int iParam0)
{
	if (Global_2405047.f_655 < 20 && unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), Global_2405047.f_654) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2405047.f_655 < iParam0))
		{
			Global_2405047.f_650 = 2;
		}
		else
		{
			Global_2405047.f_650 = 5;
		}
	}
	else
	{
		Global_2405047.f_650 = 5;
	}
}

void func_83(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	
	if (iParam3 == 0 && func_84(Param0, 0.01f))
	{
		return;
	}
	if (iParam3 < 30 && unk_0x652D2EEEF1D3E62C(Param0) > 0f)
	{
		Var0 = { Global_2405047.f_2693[iParam3 /*3*/] };
		Global_2405047.f_2693[iParam3 /*3*/] = { Param0 };
		func_83(Var0, iParam3 + 1);
	}
}

int func_84(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2405047.f_2693[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_85(struct<3> Param0, float fParam3, int iParam4, bool bParam5, float fParam6)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	int iVar7;
	float fVar8;
	
	if (!unk_0xF67B871D7588B9D9())
	{
		return 0;
	}
	else
	{
		func_172();
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Global_2405047.f_660[iVar7] == -1 && unk_0xF67B871D7588B9D9())
			{
				func_72(Param0, fParam3, iParam4, &Var0, &Var3, &uVar6, fParam6);
				if (bParam5)
				{
					fVar8 = unk_0x36E1A96E1D63ED91((Var0.f_2 - Var3.f_2));
					Var0.f_2 = (Var0.f_2 + ((fVar8 * 0.5f) - 2f));
					Var3.f_2 = (Var3.f_2 + (fVar8 * 0.5f));
				}
				Global_2405047.f_660[iVar7] = unk_0x62AF1E6ADF80E48A(Var0, Var3, fParam6);
				Global_2405047.f_664[iVar7] = unk_0xBCF9D020FA9C313D();
				Global_2405047.f_671 = Global_2405047.f_660[iVar7];
				return 1;
			}
			iVar7++;
		}
	}
	return 0;
}

void func_86(struct<3> Param0, var uParam3, int iParam4, var uParam5)
{
	struct<8> Var0;
	
	Var0.f_0 = 126597332;
	Var0.f_1 = unk_0x8CFC7D6E1DA5D304();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam3;
	Var0.f_6 = iParam4;
	Var0.f_7 = uParam5;
	unk_0xDC8B8CF2FBDF3387(1, &Var0, 8, func_87(1, 1));
}

var func_87(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x3479F6F64A48251C(iVar1);
		if (func_1162(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x8CFC7D6E1DA5D304() || iParam0)
			{
				if (bParam1)
				{
					unk_0xD2A9C3F486236CC5(&uVar0, iVar1);
				}
				else if (!func_34(iVar2, 0))
				{
					unk_0xD2A9C3F486236CC5(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_88(var uParam0, var uParam1, var uParam2)
{
	if (Global_2405047.f_1720 > 0 && func_134(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_89(uParam0, uParam1, uParam2);
	}
}

void func_89(var uParam0, var uParam1, var uParam2)
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
	bool bVar18;
	int iVar19;
	bool bVar20;
	int iVar21;
	float fVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	int iVar26;
	struct<3> Var27;
	var uVar30;
	struct<3> Var31;
	float fVar34;
	bool bVar35;
	
	iVar0 = 0;
	if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_130(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_125(uParam0, 1))
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
	Global_2412034.f_162 = 0;
	Global_2412034.f_163 = 0;
	Global_2412034.f_164 = -99;
	Global_2412034.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2412034[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2412034.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_76(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = unk_0x58B6E6434BE716EC(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0x6A5C05E993D7D360(iVar8))
		{
			unk_0x7BB9D074A0EB3FD1(iVar8, &Var1);
			bVar12 = false;
			if (Global_2412034.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2412034.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0xC73BA4A62D56A649(iVar8)) || unk_0xFBEC931614CC67D6(iVar8))
			{
				unk_0xB41CD0F3D2BE7B22(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_118(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_115(Var1))
									{
										Var1 = { func_112(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
										{
											if (!func_111(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_107(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_125(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar18 = true;
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar18 = false;
																	}
																}
																if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_106(Var1, fVar4, uParam2->f_34, unk_0x8CFC7D6E1DA5D304(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_130(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar19 = uParam2->f_31;
																					bVar20 = true;
																					iVar21 = 1;
																					fVar22 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						fVar22 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar22 = (fVar22 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar20 = true;
																						iVar21 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar22 = (fVar22 * 0.375f);
																							}
																						}
																					}
																					iVar23 = 0;
																					if (!func_105(Var1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_48(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_48(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_70(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar23 = 1;
																						}
																					}
																					if (iVar23 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar25 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar24 = func_97(Var1, uParam2->f_54, &fVar25);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar24 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar24 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412034.f_162)
																										{
																											Global_2412034[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2412034.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2412034.f_162 = 0;
																										uParam2->f_53 = iVar24;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2412034.f_162 == 0)
																									{
																										Global_2412034[0 /*3*/] = { Var1 };
																										Global_2412034.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2412034.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2412034[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_96(Var1, fVar4, iVar16);
																													iVar16 = Global_2412034.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2412034.f_162++;
																									if (Global_2412034.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412034.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2412034[Global_2412034.f_162 /*3*/] = { Var1 };
																									Global_2412034.f_121[Global_2412034.f_162] = fVar4;
																									Global_2412034.f_162++;
																									if (func_107(Var1, uParam2))
																									{
																										Global_2412034.f_163++;
																									}
																									if (Global_2412034.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2412034.f_162 == 40)
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
																					else if (bVar18)
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
				if (Global_2412034.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2412034[0 /*3*/] };
						*uParam1 = Global_2412034.f_121[0];
						return;
					}
					else
					{
						if (Global_2412034.f_163 > 0 && !Global_2412034.f_163 == Global_2412034.f_162)
						{
							func_94(0, uParam2);
						}
						iVar26 = unk_0x61E9B3BFA06B017B(0, Global_2412034.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar26 = 0;
						}
						Var27 = { Global_2412034[0 /*3*/] };
						uVar30 = Global_2412034.f_121[0];
						Global_2412034[0 /*3*/] = { Global_2412034[iVar26 /*3*/] };
						Global_2412034.f_121[0] = Global_2412034.f_121[iVar26];
						Global_2412034[iVar26 /*3*/] = { Var27 };
						Global_2412034.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2412034[0 /*3*/] };
						*uParam1 = Global_2412034.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_89(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0x61E9B3BFA06B017B((1 + iVar15), (40 + iVar15));
						unk_0xEA1F20FEC8701002(*uParam0, iVar0, &Var1, &fVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_112(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
						Var31 = { Var1 };
						fVar34 = fVar4;
						if (!uParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_130(uParam2->f_35, &Var31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_125(&Var31, bVar35))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_89(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								return;
							}
						}
						else
						{
							*uParam0 = { Var31 };
							*uParam1 = fVar34;
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
				func_89(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_90(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2412034.f_164 = iVar8;
	}
}

void func_90(var uParam0, var uParam1, var uParam2, struct<3> Param3)
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
			if (!func_91(*(uParam0[iVar2 /*4*/]), 5f, unk_0x8CFC7D6E1DA5D304(), 0, 0))
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

int func_91(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_93(Param0, fParam3, iParam4, iParam5, 0) || func_92(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_92(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_71(Param0, Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_1162(iVar2, 0, 1) && func_1162(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_93(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
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
				if (func_1162(iVar1, 0, 1) && func_1162(iParam4, 0, 1))
				{
					if (unk_0x1BE7B010C9B9841E(iVar1) == unk_0x1BE7B010C9B9841E(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_1162(iVar1, 0, 1) && func_1162(iParam4, 0, 1))
				{
					if (Global_2416788.f_261[iVar0])
					{
						if (unk_0x2A488C176D52CCA5(Global_2416788.f_131[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (unk_0x2A488C176D52CCA5(func_52(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2416788.f_261[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2416788.f_131[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_1162(iVar1, 0, 1))
				{
					if (unk_0x2A488C176D52CCA5(func_52(iVar1), Param0) < 1f)
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

void func_94(int iParam0, var uParam1)
{
	if (!func_107(Global_2412034[iParam0 /*3*/], uParam1))
	{
		Global_2412034.f_162 = (Global_2412034.f_162 - 1);
		func_95(iParam0);
		if (Global_2412034.f_162 > Global_2412034.f_163)
		{
			func_94(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_94(iParam0 + 1, uParam1);
	}
}

void func_95(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2412034[iParam0 /*3*/] = { Global_2412034[iParam0 + 1 /*3*/] };
			Global_2412034.f_121[iParam0] = Global_2412034.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_96(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2412034[iParam4 /*3*/] };
	uVar3 = Global_2412034.f_121[iParam4];
	Global_2412034[iParam4 /*3*/] = { Param0 };
	Global_2412034.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2412034.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_96(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_97(struct<3> Param0, float fParam3, float fParam4)
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
		if (func_98(iVar5))
		{
			Var1 = { func_52(iVar5) };
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

int func_98(int iParam0)
{
	if (func_1162(iParam0, 0, 1))
	{
		if (!func_103(iParam0))
		{
			if (unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iParam0))
			{
				if (!unk_0x1BE7B010C9B9841E(iParam0) == unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()))
				{
					if (func_100(unk_0x8CFC7D6E1DA5D304(), 1))
					{
						if (!func_99(unk_0x1BE7B010C9B9841E(iParam0), unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x1BE7B010C9B9841E(iParam0) == -1 && unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304()) == -1)
				{
					if (!func_100(unk_0x8CFC7D6E1DA5D304(), 1))
					{
						if (!func_55(iParam0))
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

int func_99(int iParam0, int iParam1, int iParam2)
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
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 0);
				
				case 1:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 1);
				
				case 2:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 2);
				
				case 3:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 4);
				
				case 1:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 5);
				
				case 2:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 6);
				
				case 3:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 8);
				
				case 1:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 9);
				
				case 2:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 10);
				
				case 3:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 12);
				
				case 1:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 13);
				
				case 2:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 14);
				
				case 3:
					return unk_0xB03A1684359C50A1(Global_1646129.f_49, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_100(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_101(iParam0))
		{
			return 1;
		}
	}
	if (Global_1595681[iParam0 /*678*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_101(int iParam0)
{
	return func_102(iParam0);
}

bool func_102(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_13.f_1, 0);
}

int func_103(int iParam0)
{
	if (func_34(iParam0, 0))
	{
		return 1;
	}
	if (func_104())
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

bool func_104()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 3);
}

int func_105(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = unk_0x048A9E2FC8C538E3(Param0, 30f, 0, iVar0);
	if (unk_0x31F12808DC47A9E5(iVar1) && !unk_0x74C2FE037DFC8B4A(iVar1, 0))
	{
		iVar2 = unk_0x4F69FBD64CDF125B(iVar1);
		Var3 = { unk_0x761660F5CE986DC4(iVar1, 0) };
		fVar6 = unk_0x93FDA3BF59E7B77F(iVar1);
		if (func_80(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = unk_0x048A9E2FC8C538E3(Param0, 30f, 0, iVar0);
	if (unk_0x31F12808DC47A9E5(iVar1) && !unk_0x74C2FE037DFC8B4A(iVar1, 0))
	{
		iVar2 = unk_0x4F69FBD64CDF125B(iVar1);
		Var3 = { unk_0x761660F5CE986DC4(iVar1, 0) };
		fVar6 = unk_0x93FDA3BF59E7B77F(iVar1);
		if (func_80(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_106(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_81(Param0, fParam3, iParam4, iParam5, iParam6) || func_137(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_107(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_110(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_108(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0xBD0ECFC2907D1982(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_108(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_109(&Param3, &Param6);
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

void func_109(var uParam0, var uParam1)
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

bool func_110(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
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

int func_111(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	if (func_100(unk_0x8CFC7D6E1DA5D304(), 1))
	{
		if (Global_1646129.f_52935 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1646129.f_52935)
			{
				if (Global_1646129.f_52936[iVar0 /*68*/].f_7 != 0)
				{
					if (func_71(Param0, Global_1646129.f_52936[iVar0 /*68*/], Global_1646129.f_52936[iVar0 /*68*/].f_6, Global_1646129.f_52936[iVar0 /*68*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1646129.f_49726 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1646129.f_49726)
			{
				if (Global_1646129.f_49729[iVar0 /*130*/].f_16 != 0)
				{
					if (func_71(Param0, Global_1646129.f_49729[iVar0 /*130*/], Global_1646129.f_49729[iVar0 /*130*/].f_3, Global_1646129.f_49729[iVar0 /*130*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1646129.f_66586 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1646129.f_66586)
			{
				if (Global_1646129.f_66590[iVar0 /*213*/].f_12 != 0)
				{
					if (func_71(Param0, Global_1646129.f_66590[iVar0 /*213*/], Global_1646129.f_66590[iVar0 /*213*/].f_3, Global_1646129.f_66590[iVar0 /*213*/].f_12, 0.5f))
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

Vector3 func_112(struct<3> Param0, float fParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
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
			if (!func_113(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0xB41CD0F3D2BE7B22(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x54B2CE59D6C4315A(Param0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, iParam9);
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
				func_73(iParam11, &fVar14, &fVar17, 1086324736, 1080033280, 1077936128);
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
		if (!func_113(Param0, *fParam3, Param6))
		{
			if (bParam5 || ((uVar4 & 1024 != 0 || Param0.f_2 == 0f) && bParam10))
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
	Var0 = { unk_0xA89DC5E1C1F12DBF(Param0, *fParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x6FB8A2C3C6531976(Param0, *fParam3, &Var21))
		{
			Var24 = { Var21 - Param0 };
			if (!iParam11 == 0)
			{
				Var27 = { Var24 / FtoV(unk_0x652D2EEEF1D3E62C(Var24)) };
				func_73(iParam11, &fVar14, &fVar17, 1086324736, 1080033280, 1077936128);
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

int func_113(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_78(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_114(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_114(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_115(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_117(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2411748[iVar1])
	{
		if (func_116(Param0, &(Global_2411045[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2411748[8])
	{
		if (func_116(Param0, &(Global_2411045[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_116(struct<3> Param0, var uParam3)
{
	return unk_0xBD0ECFC2907D1982(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_117(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2411036[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2411036[1])
	{
		if (Param0.f_0 < Global_2411040[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2411036[2])
	{
		if (Param0.f_0 < Global_2411040[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2411040[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2411040[3])
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

int func_118(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_124(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0x3D81861E1A1652A9(0.01f, 360f);
			func_123(&Var1, Global_2405047.f_573, Global_2405047.f_576, 1036831949, 0, fVar4);
			if (func_119(Var1, &uVar0) || func_124(Var1))
			{
				Var1 = { *uParam0 };
				func_123(&Var1, Global_2405047.f_573, Global_2405047.f_576, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_119(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_122())
	{
		return 0;
	}
	iVar1 = func_121();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2405047.f_360[iVar0 /*12*/].f_9 == 1)
		{
			if (func_120(Param0, &(Global_2405047.f_360[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_120(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_110(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2405047.f_2691) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_108(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0xBD0ECFC2907D1982(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0xBD0ECFC2907D1982(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0xBD0ECFC2907D1982(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0xBD0ECFC2907D1982(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_121()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405047.f_360[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_122()
{
	return Global_1808664.f_28;
}

void func_123(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
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
			func_78(&Var0, 0f, 0f, unk_0x3D81861E1A1652A9(0f, 360f));
		}
		else
		{
			func_78(&Var0, 0f, 0f, fParam7);
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

int func_124(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2405047.f_576 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2405047.f_573);
		if (fVar0 < Global_2405047.f_576)
		{
			return 1;
		}
	}
	return 0;
}

bool func_125(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2405047.f_26.f_17)
	{
		switch (Global_2405047.f_26.f_16)
		{
			case 0:
				if (func_110(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_15, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_108(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_12, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0xBD0ECFC2907D1982(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_12, Global_2405047.f_26.f_15, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_126(*uParam0, Global_2405047.f_26.f_9, Global_2405047.f_26.f_12, Global_2405047.f_26.f_15, Global_2405047.f_26.f_16, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_126(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_123(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_129(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_127(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0xF76F6CDAE27FDDDA(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_110(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_108(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0xBD0ECFC2907D1982(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

void func_127(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
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
	Var6 = { func_128(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x828D7620A6039793(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_114(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_114(Var6, Var3) >= 0f)
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
		Var6 = { func_128(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_128(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x828D7620A6039793(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_114(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_114(Var6, Var29) >= 0f)
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

Vector3 func_128(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_129(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
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

int func_130(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_165(Param0))
	{
		if (func_133(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_131(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_84(*uParam3, 1056964608))
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
				func_123(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
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

int func_131(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_119(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_132(&Var2, &(Global_2405047.f_360[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_119(Var2, &uVar1) || func_124(Var2))
			{
				Var2 = { *uParam0 };
				func_132(&Var2, &(Global_2405047.f_360[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_132(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_126(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2405047.f_2691) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_126(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_126(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_123(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2405047.f_2691) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_129(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_127(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_133(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2409745[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409745[iVar0 /*17*/].f_16))
			{
				if (func_120(*uParam0, &(Global_2409745[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2409745[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409745[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_132(&Var1, &(Global_2409745[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_133(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_132(&Var1, &(Global_2409745[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_134(var uParam0, var uParam1, var uParam2)
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
	
	if (Global_2405047.f_1720 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_130(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_125(uParam0, 1))
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
		Global_2412034.f_162 = 0;
		Global_2412034.f_163 = 0;
		iVar6 = 0;
		while (iVar6 < 40)
		{
			Global_2412034[iVar6 /*3*/] = { 0f, 0f, 0f };
			Global_2412034.f_121[iVar6] = 0f;
			iVar6++;
		}
		func_135(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_2405047.f_1720)
		{
			iVar1 = Global_2405047.f_2126[iVar0];
			if (iVar1 > -1 && iVar1 < 101)
			{
				Var2 = { Global_2405047.f_1721[iVar1 /*4*/] };
				fVar5 = Global_2405047.f_1721[iVar1 /*4*/].f_3;
				if (unk_0x652D2EEEF1D3E62C(Var2) > 0f)
				{
					if ((uParam2->f_57 && unk_0x2A488C176D52CCA5(Var2, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var2.f_0, Var2.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_106(Var2, fVar5, uParam2->f_34, unk_0x8CFC7D6E1DA5D304(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_130(uParam2->f_35, &Var2, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
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
										if (!func_105(Var2, fVar5, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_48(Var2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar11 = true;
												}
											}
											else if (func_48(Var2, 6f, 1f, 1f, 5f, iVar7, bVar8, iVar9, fVar10, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_70(Var2, fVar5, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar11 = true;
											}
										}
										if (bVar11)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar13 = 0f;
												if (uParam2->f_52)
												{
													iVar12 = func_97(Var2, uParam2->f_54, &fVar13);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar12 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar12 < uParam2->f_53)
														{
															iVar6 = 0;
															while (iVar6 < Global_2412034.f_162)
															{
																Global_2412034[iVar6 /*3*/] = { 0f, 0f, 0f };
																Global_2412034.f_121[iVar6] = 0f;
																iVar6++;
															}
															Global_2412034.f_162 = 0;
															uParam2->f_53 = iVar12;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2412034.f_162 == 0)
														{
															Global_2412034[0 /*3*/] = { Var2 };
															Global_2412034.f_121[0] = fVar5;
														}
														else
														{
															iVar6 = 0;
															while (iVar6 < Global_2412034.f_162 + 1)
															{
																if (iVar6 < 40)
																{
																	if (unk_0xB7A628320EFF8E47(Var2, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2412034[iVar6 /*3*/], uParam2->f_35))
																	{
																		func_96(Var2, fVar5, iVar6);
																		iVar6 = Global_2412034.f_162 + 1;
																	}
																}
																iVar6++;
															}
														}
														Global_2412034.f_162++;
														if (Global_2412034.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405047.f_1720;
															}
															else if (Global_2412034.f_162 == 40)
															{
																iVar0 = Global_2405047.f_1720;
															}
														}
													}
													else
													{
														Global_2412034[Global_2412034.f_162 /*3*/] = { Var2 };
														Global_2412034.f_121[Global_2412034.f_162] = fVar5;
														Global_2412034.f_162++;
														if (Global_2412034.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar0 = Global_2405047.f_1720;
															}
															else if (Global_2412034.f_162 == 40)
															{
																iVar0 = Global_2405047.f_1720;
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
		if (Global_2412034.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2412034[0 /*3*/] };
				*uParam1 = Global_2412034.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2412034.f_163 > 0 && !Global_2412034.f_163 == Global_2412034.f_162)
				{
					func_94(0, uParam2);
				}
				iVar14 = unk_0x61E9B3BFA06B017B(0, Global_2412034.f_162);
				Var15 = { Global_2412034[0 /*3*/] };
				uVar18 = Global_2412034.f_121[0];
				Global_2412034[0 /*3*/] = { Global_2412034[iVar14 /*3*/] };
				Global_2412034.f_121[0] = Global_2412034.f_121[iVar14];
				Global_2412034[iVar14 /*3*/] = { Var15 };
				Global_2412034.f_121[iVar14] = uVar18;
				*uParam0 = { Global_2412034[0 /*3*/] };
				*uParam1 = Global_2412034.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_134(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_89(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

void func_135(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2405047.f_1720)
	{
		uVar1 = func_136(Param0, fVar0, &fVar0);
		Global_2405047.f_2126[iVar2] = uVar1;
		iVar2++;
	}
}

int func_136(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2405047.f_1720)
	{
		fVar2 = unk_0xB7A628320EFF8E47(Param0, Global_2405047.f_1721[iVar3 /*4*/]);
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

int func_137(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_138(Param0, iParam4, Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_80(Param0, fParam3, iParam4, Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/], Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2416788.f_427[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_1162(iVar2, 0, 1) && func_1162(iParam5, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_138(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_79(iParam3, 1008981770);
	fVar1 = func_79(iParam7, 1008981770);
	fVar2 = unk_0x2A488C176D52CCA5(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_139(struct<3> Param0)
{
	var uVar0;
	
	if (Global_2512581.f_866 && func_140(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_140(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*uParam3 = -1;
	iVar2 = func_143(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_141(iVar1))
			{
				if (func_143(Global_1808664.f_42[iVar0 /*3*/], 0) == iVar2)
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

int func_141(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_142(iParam0);
	if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_241 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11;
	if (iVar1 != func_57())
	{
		if (Global_1595681[iVar1 /*678*/].f_266.f_241 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_1 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_142(int iParam0)
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

int func_143(struct<3> Param0, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2409745[iVar0 /*17*/].f_9 == 1 || iParam3 == 0)
		{
			if (func_120(Param0, &(Global_2409745[iVar0 /*17*/]), 0.1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_144(struct<3> Param0, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar6[3];
	
	if (Global_2405047.f_44.f_315)
	{
		return;
	}
	if (!func_161())
	{
		if (iParam3 == 0)
		{
		}
		iVar1 = func_160(Param0);
		if (iVar1 > -1)
		{
			func_171();
			switch (iVar1)
			{
				case 0:
					func_159(-1139.678f, -2694.165f, 12.949f, 283.4298f);
					func_159(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
					func_159(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_159(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
					func_159(-1110.51f, -2693.236f, 12.9595f, 298.84f);
					func_159(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
					func_159(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
					func_159(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
					func_159(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
					break;
				
				case 1:
					func_159(-1411.731f, -533.6462f, 30.2703f, 215.116f);
					func_159(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
					func_159(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
					func_159(-1438.8f, -584.4678f, 29.595f, 118.1207f);
					break;
				
				case 2:
					func_159(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_159(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_159(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_159(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				
				case 3:
					func_159(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_159(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_159(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_159(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				
				case 4:
					func_159(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_159(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_159(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_159(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				
				case 5:
					func_159(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_159(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_159(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_159(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				
				case 6:
					func_159(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_159(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_159(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_159(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				
				case 7:
					func_159(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_159(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_159(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_159(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				
				case 8:
					func_159(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_159(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_159(145.8017f, -1287.19f, 28.312f, 120.6275f);
					func_159(142.8935f, -1282.286f, 28.3156f, 120.3024f);
					break;
				
				case 9:
					func_159(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
					func_159(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_159(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
					func_159(-2314.396f, 290.9f, 168.4671f, 114.3983f);
					func_159(-2316.81f, 296.424f, 168.4671f, 113.6228f);
					func_159(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_159(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_159(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_159(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
					func_159(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
					func_159(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_159(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
					break;
				
				case 10:
					func_157(78);
					break;
				
				case 11:
					func_157(79);
					break;
				
				case 12:
					func_157(82);
					break;
				
				case 13:
					func_157(81);
					break;
				
				case 14:
					func_157(73);
					break;
				
				case 15:
					func_159(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_159(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_159(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_159(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				
				case 16:
					func_157(75);
					break;
				
				case 17:
					func_157(76);
					break;
				
				case 18:
					func_157(77);
					break;
				
				case 19:
					func_159(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_159(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_159(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_159(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				
				case 20:
					func_157(80);
					break;
				
				case 21:
				case 25:
					func_157(87);
					break;
				
				case 22:
				case 26:
					func_157(88);
					break;
				
				case 23:
				case 27:
					func_157(89);
					break;
				
				case 24:
				case 28:
					func_157(90);
					break;
				
				case 29:
				case 30:
					if (func_156(iParam3))
					{
						func_157(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_17);
					}
					break;
			}
		}
		else if (func_153(Param0, &iVar2, &iVar6) || (func_140(Param0, &(iVar2[0])) && (unk_0xD8BB60C76D29E4BB(iParam3) || unk_0xB6353CAE3EBC0919(iParam3))))
		{
			func_171();
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
					Global_2405047.f_508 = 1;
				}
				if (!iVar6[iVar0] && func_152(iVar2[iVar0], -1))
				{
					if (func_156(iParam3))
					{
						func_157(iVar2[iVar0]);
					}
				}
				else if (iVar6[iVar0])
				{
					if (((func_151(unk_0x18F7BE9ACB7D08F4()) || func_150(unk_0x18F7BE9ACB7D08F4())) && unk_0xD8BB60C76D29E4BB(iParam3)) || unk_0xB6353CAE3EBC0919(iParam3))
					{
						if (func_149(iParam3))
						{
							func_148(iVar2[iVar0]);
						}
						else if (func_147(iParam3))
						{
							func_146(iVar2[iVar0]);
							func_148(iVar2[iVar0]);
						}
						else
						{
							func_146(iVar2[iVar0]);
							func_148(iVar2[iVar0]);
						}
					}
					else
					{
						func_145(iVar2[iVar0]);
					}
				}
				else
				{
					func_157(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_145(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			func_159(434.1898f, 6535.824f, 27.0084f, 66.9998f);
			func_159(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_159(435.1928f, 6543.298f, 26.889f, 66.9998f);
			func_159(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_159(429.8463f, 6511.11f, 27.0717f, 60.9997f);
			func_159(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_159(443.1016f, 6580.717f, 26.0739f, 85.1993f);
			func_159(451.9748f, 6579.937f, 26.0319f, 85.1993f);
			break;
		
		case 26:
			func_159(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
			func_159(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_159(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
			func_159(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_159(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
			func_159(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_159(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
			func_159(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		
		case 24:
			func_159(60.7522f, 6465.807f, 30.3941f, 213.3973f);
			func_159(57.4131f, 6462.55f, 30.3663f, 213.3973f);
			func_159(48.0438f, 6452.668f, 30.3245f, 213.3973f);
			func_159(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_159(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_159(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_159(32.1837f, 6437.21f, 30.2991f, 213.3973f);
			func_159(29.4732f, 6434.526f, 30.3702f, 213.3973f);
			break;
		
		case 25:
			func_159(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_159(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_159(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
			func_159(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
			func_159(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
			func_159(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_159(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_159(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		
		case 22:
			func_159(45.2181f, 6341.107f, 30.2296f, 14.3964f);
			func_159(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_159(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_159(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_159(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_159(65.6465f, 6380.626f, 30.2398f, 212.9964f);
			func_159(24.8587f, 6366.36f, 30.2286f, 32.7965f);
			func_159(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		
		case 28:
			func_159(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_159(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_159(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_159(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_159(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_159(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_159(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_159(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		
		case 31:
			func_159(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_159(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_159(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_159(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_159(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_159(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_159(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_159(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		
		case 29:
			func_159(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
			func_159(-1454.819f, -359.998f, 42.7885f, 311.3925f);
			func_159(-1462.675f, -360.1352f, 42.9255f, 223.392f);
			func_159(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
			func_159(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_159(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
			func_159(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_159(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
			break;
		
		case 30:
			func_159(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
			func_159(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
			func_159(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
			func_159(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
			func_159(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
			func_159(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
			func_159(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
			func_159(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
			break;
		
		case 27:
			func_159(1414.237f, -1656.344f, 60.2449f, 332.7893f);
			func_159(1416.668f, -1659.933f, 60.6982f, 332.7893f);
			func_159(1419.327f, -1663.972f, 61.2382f, 332.7893f);
			func_159(1421.557f, -1667.367f, 61.7479f, 332.7893f);
			func_159(1423.744f, -1670.853f, 62.3125f, 332.7893f);
			func_159(1412.157f, -1652.746f, 59.9105f, 332.7893f);
			func_159(1426.201f, -1673.598f, 62.7133f, 330.1893f);
			func_159(1435.804f, -1694.73f, 65.0743f, 352.5892f);
			break;
		
		case 33:
			func_159(2810.787f, 4435.92f, 47.5295f, 20.7996f);
			func_159(2808.413f, 4443.922f, 47.3732f, 14.7995f);
			func_159(2806.298f, 4451.786f, 47.1865f, 15.3995f);
			func_159(2803.925f, 4459.858f, 46.9823f, 15.3995f);
			func_159(2801.756f, 4467.755f, 46.8147f, 15.3995f);
			func_159(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_159(2903.725f, 4425.854f, 47.3523f, 23.1992f);
			func_159(2907.076f, 4418.059f, 47.6301f, 23.1992f);
			break;
		
		case 36:
			func_159(1680.448f, 4821.131f, 41.0599f, 186.399f);
			func_159(1679.76f, 4829.447f, 40.9167f, 186.399f);
			func_159(1678.668f, 4838.03f, 41.0221f, 187.7989f);
			func_159(1677.612f, 4846.028f, 41.0452f, 187.7989f);
			func_159(1675.851f, 4860.434f, 41.0901f, 187.7989f);
			func_159(1674.843f, 4868.343f, 41.0684f, 187.7989f);
			func_159(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_159(1672.525f, 4884.972f, 41.0478f, 186.7986f);
			break;
		
		case 34:
			func_159(422.863f, 3583.901f, 32.2386f, 313.5986f);
			func_159(426.6211f, 3583.208f, 32.2386f, 313.5986f);
			func_159(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_159(434.2751f, 3580.881f, 32.2386f, 313.5986f);
			func_159(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_159(442.0173f, 3578.948f, 32.2386f, 313.5986f);
			func_159(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_159(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		
		case 35:
			func_159(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_159(620.9771f, 2725.759f, 40.7897f, 4.3984f);
			func_159(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_159(611.1158f, 2737.387f, 40.9734f, 185.3984f);
			func_159(598.9713f, 2736.261f, 41.0602f, 186.5986f);
			func_159(592.6151f, 2735.886f, 41.0602f, 186.5986f);
			func_159(586.0421f, 2735.9f, 41.0535f, 186.5986f);
			func_159(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		
		case 32:
			func_159(214.3318f, 2492.26f, 53.9736f, 312.7978f);
			func_159(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_159(213.7524f, 2501.251f, 53.5958f, 312.7978f);
			func_159(213.6645f, 2505.908f, 53.3477f, 312.7978f);
			func_159(213.4478f, 2510.734f, 53.1055f, 312.7978f);
			func_159(212.9148f, 2515.268f, 52.9376f, 312.7978f);
			func_159(211.5983f, 2519.216f, 52.6753f, 312.7978f);
			func_159(210.1288f, 2523.187f, 52.3493f, 312.7978f);
			break;
		
		case 38:
			func_159(153.6785f, -2476.192f, 4.9877f, 178.4004f);
			func_159(150.9209f, -2516.979f, 4.9909f, 179.9999f);
			func_159(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_159(153.866f, -2467.242f, 4.9877f, 178.4004f);
			func_159(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_159(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_159(142.7427f, -2536.147f, 5f, 205.0002f);
			func_159(138.8267f, -2535.865f, 5f, 205.0002f);
			break;
		
		case 41:
			func_159(-341.4255f, -2734.451f, 5.0413f, 314.8f);
			func_159(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_159(-329.7832f, -2745.604f, 5.0196f, 314.8f);
			func_159(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
			func_159(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
			func_159(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
			func_159(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_159(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		
		case 39:
			func_159(1143.73f, -3105.091f, 4.8989f, 146.1979f);
			func_159(1140.009f, -3104.954f, 4.8985f, 146.1979f);
			func_159(1136.267f, -3104.69f, 4.8969f, 146.1979f);
			func_159(1132.732f, -3104.277f, 4.8944f, 146.1979f);
			func_159(1128.724f, -3104.54f, 4.896f, 146.1979f);
			func_159(1125.106f, -3104.057f, 4.8942f, 146.1979f);
			func_159(1117.8f, -3103.674f, 4.8922f, 146.1979f);
			func_159(1114.015f, -3103.448f, 4.8931f, 146.1979f);
			break;
		
		case 40:
			func_159(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_159(656.1305f, -2707.245f, 5.214f, 24.7971f);
			func_159(659.3307f, -2714.378f, 5.2188f, 22.7968f);
			func_159(662.2627f, -2722.228f, 5.2188f, 19.1968f);
			func_159(649.2115f, -2728.359f, 5.1124f, 20.5967f);
			func_159(646.2606f, -2720.833f, 5.1103f, 21.3967f);
			func_159(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_159(640.3513f, -2706.571f, 5.108f, 21.3967f);
			break;
		
		case 37:
			func_159(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
			func_159(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
			func_159(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
			func_159(-238.214f, -2614.847f, 5.0502f, 271.5953f);
			func_159(-238.013f, -2630.961f, 5.0331f, 271.3949f);
			func_159(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
			func_159(-253.401f, -2631.108f, 5.0319f, 272.195f);
			func_159(-245.5563f, -2631.06f, 5.0323f, 272.195f);
			break;
		
		case 83:
			func_159(-1190.795f, -3371.393f, 12.945f, 348.399f);
			func_159(-1185.634f, -3373.893f, 12.945f, 348.399f);
			func_159(-1114.818f, -3414.185f, 12.945f, 314.199f);
			func_159(-1110.976f, -3416.37f, 12.945f, 314.199f);
			func_159(-1098.621f, -3460.792f, 12.9453f, 329.799f);
			func_159(-1093.31f, -3463.464f, 12.9453f, 329.799f);
			func_159(-1089.433f, -3443.234f, 12.945f, 329.799f);
			func_159(-1084.271f, -3446.31f, 12.945f, 329.799f);
			func_159(-1093.808f, -3452.407f, 12.9451f, 329.799f);
			func_159(-1088.383f, -3455.466f, 12.9451f, 329.799f);
			func_159(-1118.474f, -3411.385f, 12.9451f, 313.199f);
			func_159(-1181.003f, -3375.658f, 12.945f, 346.799f);
			func_159(-1212.071f, -3382.283f, 12.9451f, 328.999f);
			func_159(-1217.708f, -3378.623f, 12.9451f, 328.999f);
			func_159(-1216.986f, -3390.396f, 12.9452f, 328.999f);
			func_159(-1222.566f, -3386.707f, 12.9452f, 328.999f);
			func_159(-1222.06f, -3398.882f, 12.9452f, 328.999f);
			func_159(-1227.698f, -3394.946f, 12.9451f, 328.999f);
			func_159(-1097.517f, -3472.086f, 12.9453f, 328.999f);
			func_159(-1102.951f, -3468.619f, 12.9452f, 328.999f);
			func_159(-1227.253f, -3407.38f, 12.9452f, 328.999f);
			func_159(-1232.836f, -3403.572f, 12.9452f, 328.999f);
			break;
		
		case 84:
			func_159(-1364.879f, -3285.201f, 12.945f, 330.2f);
			func_159(-1359.229f, -3288.52f, 12.945f, 330.2f);
			func_159(-1369.636f, -3293.617f, 12.945f, 330.2f);
			func_159(-1363.881f, -3296.796f, 12.945f, 330.2f);
			func_159(-1432.898f, -3247.702f, 12.945f, 330.2f);
			func_159(-1437.282f, -3255.429f, 12.945f, 330.2f);
			func_159(-1441.623f, -3262.969f, 12.945f, 330.2f);
			func_159(-1443.954f, -3251.006f, 12.945f, 330.2f);
			func_159(-1374.159f, -3301.61f, 12.945f, 330.2f);
			func_159(-1368.508f, -3304.924f, 12.945f, 330.2f);
			func_159(-1359.905f, -3276.118f, 12.9448f, 330.4f);
			func_159(-1354.228f, -3279.63f, 12.9448f, 330.4f);
			func_159(-1406.493f, -3246.223f, 12.9449f, 344.5997f);
			func_159(-1411.058f, -3243.62f, 12.9449f, 344.5997f);
			func_159(-1415.326f, -3241.014f, 12.9449f, 344.5997f);
			func_159(-1419.899f, -3238.116f, 12.9449f, 344.5997f);
			func_159(-1370.986f, -3268.945f, 12.9449f, 322.3996f);
			func_159(-1365.735f, -3272.363f, 12.9449f, 322.3996f);
			func_159(-1373.341f, -3313.206f, 12.9448f, 329.5996f);
			func_159(-1379.091f, -3310.004f, 12.9448f, 330.7996f);
			func_159(-1436.989f, -3228.515f, 12.9449f, 343.9996f);
			func_159(-1444.064f, -3273.751f, 12.945f, 330.7996f);
			break;
		
		case 85:
			func_159(-2060.105f, 3186.159f, 31.81f, 329.599f);
			func_159(-2065.521f, 3189.007f, 31.81f, 150.199f);
			func_159(-2055.006f, 3194.989f, 31.81f, 329.599f);
			func_159(-2060.471f, 3197.816f, 31.81f, 150.199f);
			func_159(-2049.611f, 3204.032f, 31.81f, 329.599f);
			func_159(-2055.048f, 3206.958f, 31.81f, 150.199f);
			func_159(-2049.627f, 3216.253f, 31.81f, 150.199f);
			func_159(-2039.024f, 3222.121f, 31.81f, 329.599f);
			func_159(-2044.17f, 3213.208f, 31.81f, 329.599f);
			func_159(-2044.672f, 3224.638f, 31.81f, 150.199f);
			func_159(-2060.486f, 3165.928f, 31.8103f, 133.9988f);
			func_159(-2055.707f, 3163.053f, 31.8103f, 133.9988f);
			func_159(-2050.911f, 3160.092f, 31.8103f, 133.9988f);
			func_159(-1974.635f, 3137.847f, 31.8103f, 149.5986f);
			func_159(-1970.354f, 3145.22f, 31.8103f, 149.5986f);
			func_159(-1965.709f, 3153.221f, 31.8103f, 149.5986f);
			func_159(-1960.991f, 3161.346f, 31.8103f, 149.5986f);
			func_159(-1983.17f, 3131.33f, 31.8103f, 149.5986f);
			func_159(-1976.614f, 3127.627f, 31.8103f, 149.5986f);
			func_159(-1991.582f, 3127.264f, 31.8103f, 167.7985f);
			func_159(-1995.584f, 3129.369f, 31.8103f, 167.7985f);
			func_159(-1999.335f, 3131.182f, 31.8103f, 167.7985f);
			break;
		
		case 86:
			func_159(-1843.828f, 3085.094f, 31.81f, 165.8f);
			func_159(-1828.571f, 3084.114f, 31.841f, 329.2f);
			func_159(-1823.414f, 3092.762f, 31.843f, 330f);
			func_159(-1819.045f, 3100.435f, 31.845f, 330f);
			func_159(-1833.313f, 3075.722f, 31.838f, 330f);
			func_159(-1847.648f, 3076.8f, 31.835f, 165.8f);
			func_159(-1838.479f, 3078.576f, 31.863f, 150.599f);
			func_159(-1833.605f, 3086.784f, 31.863f, 150.599f);
			func_159(-1828.424f, 3095.617f, 31.863f, 150.599f);
			func_159(-1823.95f, 3102.821f, 31.862f, 150.599f);
			func_159(-1819.284f, 3110.67f, 31.8615f, 150.2f);
			func_159(-1814.545f, 3108.229f, 31.8476f, 330.6f);
			func_159(-1853.939f, 3076.271f, 31.8105f, 176.7996f);
			func_159(-1857.726f, 3078.668f, 31.8105f, 176.7996f);
			func_159(-1861.626f, 3080.777f, 31.8105f, 176.7996f);
			func_159(-1865.584f, 3083.136f, 31.8103f, 176.7996f);
			func_159(-1869.255f, 3085.565f, 31.8103f, 176.7996f);
			func_159(-1913.263f, 3125.342f, 31.8103f, 150.7988f);
			func_159(-1917.546f, 3127.678f, 31.8103f, 150.7988f);
			func_159(-1922.74f, 3130.555f, 31.8103f, 150.7988f);
			func_159(-1927.676f, 3133.413f, 31.8103f, 150.7988f);
			func_159(-1932.418f, 3136.273f, 31.8103f, 150.7988f);
			break;
		
		case 87:
			func_159(-2538.561f, 3303.172f, 31.814f, 296.999f);
			func_159(-2530.309f, 3307.445f, 31.816f, 296.999f);
			func_159(-2521.733f, 3311.833f, 31.817f, 296.999f);
			func_159(-2512.881f, 3316.428f, 31.819f, 296.999f);
			func_159(-2502.952f, 3321.518f, 31.821f, 296.999f);
			func_159(-2542.613f, 3310.728f, 31.814f, 296.999f);
			func_159(-2534.195f, 3314.753f, 31.815f, 296.999f);
			func_159(-2525.635f, 3318.97f, 31.817f, 296.999f);
			func_159(-2516.674f, 3323.545f, 31.819f, 296.999f);
			func_159(-2507.153f, 3328.454f, 31.82f, 296.999f);
			func_159(-2547.689f, 3298.791f, 31.812f, 296.999f);
			func_159(-2551.261f, 3306.304f, 31.8123f, 296.999f);
			func_159(-2497.446f, 3333.296f, 31.821f, 296.999f);
			func_159(-2494.089f, 3326.065f, 31.8218f, 296.999f);
			func_159(-2453.405f, 3255.388f, 31.8276f, 167.1986f);
			func_159(-2449.37f, 3253.417f, 31.8276f, 167.1986f);
			func_159(-2445.49f, 3251.138f, 31.8276f, 167.1986f);
			func_159(-2441.575f, 3248.888f, 31.8276f, 167.1986f);
			func_159(-2437.319f, 3246.554f, 31.8277f, 167.1986f);
			func_159(-2432.723f, 3244.232f, 31.8277f, 167.1986f);
			func_159(-2485.273f, 3330.891f, 31.8239f, 298.1979f);
			func_159(-2488.82f, 3338.365f, 31.8226f, 298.1979f);
			break;
		
		case 89:
			if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_58 == 0)
			{
				func_159(1284.416f, 2890.299f, 45.0276f, 336.3999f);
				func_159(1273.248f, 2901.428f, 45.0426f, 338.3999f);
				func_159(1262.945f, 2911.535f, 43.2959f, 341.9999f);
				func_159(1272.094f, 2873.387f, 45.3443f, 328.5991f);
				func_159(1259.785f, 2892.217f, 45.1126f, 339.9999f);
				func_159(1231.279f, 2910.881f, 43.3085f, 12f);
				func_159(1306.515f, 2839.475f, 46.8947f, 132.3996f);
				func_159(1307.453f, 2825.276f, 45.1566f, 127.1998f);
				func_159(1257.029f, 2872.157f, 45.9766f, 338.5992f);
				func_159(1225.764f, 2930.095f, 41.6173f, 14.7999f);
			}
			else
			{
				func_159(1265.123f, 2836.949f, 47.1021f, 119.9996f);
				func_159(1258.145f, 2831.643f, 46.4503f, 135.7993f);
				func_159(1240.847f, 2828.721f, 46.4388f, 39.5992f);
				func_159(1236.877f, 2835.49f, 46.3491f, 22.9991f);
				func_159(1235.697f, 2843.403f, 46.0231f, 2.7991f);
				func_159(1237.686f, 2850.607f, 45.5261f, 335.5991f);
				func_159(1241.126f, 2858.816f, 45.0176f, 339.7991f);
				func_159(1249.715f, 2810.588f, 47.2648f, 255.1992f);
				func_159(1257.696f, 2808.609f, 47.014f, 266.1992f);
				func_159(1265.577f, 2808.353f, 46.7598f, 277.199f);
				func_159(1273.808f, 2808.484f, 46.3872f, 263.999f);
				func_159(1282.535f, 2807.134f, 45.9705f, 250.7989f);
				func_159(1290.168f, 2803.745f, 45.8005f, 238.7988f);
				func_159(1296.445f, 2798.777f, 46.0903f, 228.9988f);
				func_159(1302.041f, 2792.33f, 45.957f, 221.7987f);
				func_159(1251.389f, 2825.818f, 45.9856f, 119.1982f);
				func_159(1285.48f, 2819.238f, 45.044f, 228.3993f);
				func_159(1293.023f, 2814.164f, 44.8859f, 233.399f);
				func_159(1242.18f, 2814.153f, 47.7108f, 227.3991f);
				func_159(1236.362f, 2819.623f, 47.6845f, 224.399f);
				func_159(1231.532f, 2825.855f, 47.4649f, 210.5992f);
				func_159(1228.177f, 2833.423f, 47.3171f, 197.5993f);
				func_159(1243.095f, 2866.749f, 44.6219f, 353.7992f);
				func_159(1307.346f, 2785.787f, 46.1136f, 219.9997f);
				func_159(1300.752f, 2808.224f, 44.5688f, 228.9997f);
				func_159(1306.571f, 2802.468f, 44.6275f, 224.1992f);
				func_159(1244.465f, 2875.697f, 44.5839f, 353.7992f);
				func_159(1312.441f, 2795.427f, 45.2701f, 218.5991f);
			}
			break;
		
		case 90:
			if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_58 == 0)
			{
				func_159(14.4916f, 2660.726f, 79.0178f, 310.1999f);
				func_159(3.855f, 2672.388f, 78.437f, 319.2f);
				func_159(-7.057f, 2682.247f, 77.472f, 319.2f);
				func_159(-14.041f, 2663.43f, 77.4221f, 319.2f);
				func_159(41.8086f, 2597.059f, 81.3524f, 301.9997f);
				func_159(60.2273f, 2609.745f, 79.5672f, 305.9998f);
				func_159(34.0188f, 2659.723f, 78.9894f, 314.2f);
				func_159(29.4879f, 2675.34f, 76.0202f, 314.2f);
				func_159(19.0088f, 2686.16f, 75.6897f, 314.2f);
				func_159(7.6101f, 2697.113f, 76.2923f, 314.2f);
			}
			else
			{
				func_159(50.6405f, 2633.902f, 79.4503f, 305.1998f);
				func_159(46.2894f, 2639.951f, 79.9122f, 305.1998f);
				func_159(55.3668f, 2627.773f, 79.6363f, 305.1998f);
				func_159(59.9522f, 2620.408f, 80.0499f, 305.1998f);
				func_159(42.1486f, 2646.073f, 80.108f, 305.1998f);
				func_159(68.1481f, 2630.07f, 77.0725f, 305.1998f);
				func_159(62.6048f, 2637.014f, 76.1722f, 305.1998f);
				func_159(57.3543f, 2643.56f, 75.5301f, 305.1998f);
				func_159(52.611f, 2649.698f, 76.1354f, 305.1998f);
				func_159(74.5845f, 2640.475f, 72.602f, 305.1998f);
				func_159(68.5462f, 2646.784f, 71.6298f, 305.1998f);
				func_159(62.426f, 2652.977f, 71.7029f, 305.1998f);
				func_159(79.5597f, 2650.835f, 68.668f, 305.1998f);
				func_159(72.6035f, 2656.857f, 67.3294f, 305.1998f);
				func_159(83.4156f, 2660.237f, 64.3198f, 305.1998f);
				func_159(102.851f, 2688.009f, 51.732f, 224f);
				func_159(109.815f, 2681.012f, 51.112f, 224f);
				func_159(116.355f, 2674.26f, 50.529f, 224f);
				func_159(125.138f, 2665.98f, 49.8f, 224f);
				func_159(132.228f, 2659.865f, 49.26f, 228.4f);
				func_159(139.354f, 2653.536f, 48.737f, 228.4f);
				func_159(88.512f, 2702.995f, 53.042f, 224.199f);
				func_159(81.565f, 2710.357f, 53.67f, 224.199f);
				func_159(75.156f, 2716.981f, 54.223f, 224.199f);
				func_159(68.442f, 2723.806f, 54.775f, 226.199f);
				func_159(61.449f, 2730.606f, 55.308f, 226.199f);
				func_159(53.702f, 2738.167f, 55.855f, 226.199f);
				func_159(91.2443f, 2667.262f, 59.9931f, 314.599f);
			}
			break;
		
		case 91:
			if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_58 == 0)
			{
				func_159(2772.011f, 3889.062f, 42.94f, 145.4f);
				func_159(2785.592f, 3880.409f, 43.695f, 146.199f);
				func_159(2788.387f, 3898.107f, 45.364f, 140.999f);
				func_159(2801.558f, 3912.485f, 44.931f, 131.999f);
				func_159(2805.531f, 3892.253f, 47.01f, 106.399f);
				func_159(2824.791f, 3894.787f, 47.4293f, 105.3989f);
				func_159(2761.739f, 3945.948f, 44.59f, 135.398f);
				func_159(2814.589f, 3930.404f, 44.816f, 134.9978f);
				func_159(2747.627f, 3930.92f, 43.8497f, 138.3978f);
				func_159(2796.312f, 3928.316f, 42.6106f, 134.5979f);
			}
			else
			{
				func_159(2730.174f, 3890.294f, 42.435f, 54.6f);
				func_159(2714.633f, 3918.283f, 42.938f, 16f);
				func_159(2716.533f, 3910.15f, 42.699f, 19.6f);
				func_159(2757.499f, 3874.045f, 42.724f, 64.8f);
				func_159(2747.99f, 3878.676f, 42.561f, 62.8f);
				func_159(2738.337f, 3884.314f, 42.614f, 57.2f);
				func_159(2711.836f, 3926.255f, 42.931f, 21.6f);
				func_159(2707.586f, 3934.558f, 42.984f, 27.6f);
				func_159(2702.361f, 3943.039f, 42.951f, 30.6f);
				func_159(2696.696f, 3951.317f, 43.012f, 34.8f);
				func_159(2766.778f, 3868.911f, 42.822f, 59.8f);
				func_159(2775.397f, 3863.697f, 43.204f, 54.2f);
				func_159(2738.841f, 3869.927f, 42.492f, 242.799f);
				func_159(2746.49f, 3865.861f, 42.808f, 239.599f);
				func_159(2754.829f, 3861.039f, 42.906f, 240.799f);
				func_159(2762.616f, 3856.316f, 42.895f, 240.799f);
				func_159(2770.463f, 3851.383f, 43.216f, 233.199f);
				func_159(2778.129f, 3844.914f, 43.26f, 229.199f);
				func_159(2785.341f, 3837.918f, 43.141f, 224.999f);
				func_159(2730.65f, 3875.186f, 42.437f, 231.999f);
				func_159(2724.14f, 3880.885f, 42.469f, 224.599f);
				func_159(2718.541f, 3887.508f, 42.614f, 217.399f);
				func_159(2783.246f, 3857.409f, 43.175f, 45.199f);
				func_159(2790.716f, 3850.631f, 43.125f, 45.199f);
				func_159(2690.655f, 3959.246f, 43.255f, 40.199f);
				func_159(2797.912f, 3842.523f, 43.166f, 40.199f);
				func_159(2791.836f, 3830.845f, 43.14f, 221.999f);
				func_159(2712.952f, 3894.566f, 42.484f, 14.799f);
			}
			break;
		
		case 92:
			if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_58 == 0)
			{
				func_159(3374.661f, 5559.709f, 12.3726f, 138.7999f);
				func_159(3366.365f, 5569.449f, 13.9704f, 112.8f);
				func_159(3358.493f, 5581.463f, 16.1783f, 112.8f);
				func_159(3356.705f, 5595.363f, 15.4029f, 112.8f);
				func_159(3336.662f, 5552.357f, 19.491f, 249.6f);
				func_159(3336.791f, 5567.825f, 20.432f, 249.6f);
				func_159(3335.259f, 5599.046f, 22.4606f, 249.6f);
				func_159(3336.811f, 5613.029f, 22.2159f, 249.6f);
				func_159(3354.696f, 5609.699f, 15.9453f, 111.3999f);
				func_159(3354.006f, 5624.206f, 16.018f, 111.3999f);
			}
			else
			{
				func_159(3372.053f, 5506.134f, 20.8174f, 99.5999f);
				func_159(3374.923f, 5520.177f, 20.3207f, 86f);
				func_159(3350.643f, 5490.432f, 18.8423f, 139.9997f);
				func_159(3364.189f, 5502.98f, 19.648f, 125.7999f);
				func_159(3354.101f, 5484.773f, 19.619f, 116.399f);
				func_159(3365.919f, 5519.949f, 18.8008f, 102.9988f);
				func_159(3341.889f, 5506.809f, 19.584f, 161.199f);
				func_159(3338.581f, 5497.709f, 19.376f, 161.199f);
				func_159(3335.674f, 5489.348f, 19.542f, 161.199f);
				func_159(3332.019f, 5479.563f, 19.738f, 150.998f);
				func_159(3327.404f, 5470.857f, 19.302f, 159.398f);
				func_159(3323.903f, 5461.49f, 18.492f, 156.398f);
				func_159(3320.016f, 5452.957f, 17.834f, 153.198f);
				func_159(3315.782f, 5444.61f, 17.115f, 150.798f);
				func_159(3335.451f, 5455.723f, 18.2323f, 162.1979f);
				func_159(3338.788f, 5464.803f, 18.8631f, 163.7977f);
				func_159(3362.476f, 5488.211f, 20.4432f, 108.5979f);
				func_159(3371.259f, 5491.274f, 21.5286f, 104.9989f);
				func_159(3342.201f, 5517.014f, 19.642f, 170.199f);
				func_159(3343.267f, 5526.085f, 18.902f, 175.598f);
				func_159(3343.531f, 5536.075f, 18.217f, 178.598f);
				func_159(3357.257f, 5496.71f, 18.9729f, 132.5977f);
				func_159(3342.346f, 5473.345f, 19.1235f, 159.3987f);
				func_159(3347.236f, 5480.447f, 19.4672f, 131.199f);
				func_159(3357.623f, 5516.9f, 16.9016f, 118.7991f);
				func_159(3361.366f, 5545.886f, 15.5532f, 118.7991f);
				func_159(3352.612f, 5541.013f, 16.3238f, 131.999f);
				func_159(3343.349f, 5546.494f, 17.8738f, 173.9988f);
			}
			break;
		
		case 93:
			if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_58 == 0)
			{
				func_159(43.848f, 6845.657f, 13.379f, 247.2f);
				func_159(50.379f, 6861.146f, 15.105f, 247.2f);
				func_159(32.501f, 6871.777f, 13.3283f, 247.2f);
				func_159(38.437f, 6885.796f, 13.3627f, 247.2f);
				func_159(55.806f, 6875.081f, 14.824f, 247.2f);
				func_159(11.616f, 6877.079f, 11.466f, 247.2f);
				func_159(18.954f, 6891.633f, 11.37f, 247.2f);
				func_159(26.68f, 6907.587f, 11.869f, 247.2f);
				func_159(7.479f, 6907.895f, 12.024f, 247.2f);
				func_159(44.9981f, 6901.352f, 11.9426f, 247.2f);
			}
			else
			{
				func_159(35.591f, 6836.608f, 13.288f, 274.4f);
				func_159(36.028f, 6830.135f, 13.801f, 270.8f);
				func_159(35.114f, 6823.884f, 14.527f, 260.8f);
				func_159(48.779f, 6838.693f, 14.337f, 273.6f);
				func_159(56.738f, 6821.8f, 15.244f, 244.8f);
				func_159(48.377f, 6825.895f, 14.656f, 249.8f);
				func_159(49.11f, 6831.439f, 13.991f, 274.8f);
				func_159(53.544f, 6818.275f, 16.342f, 243f);
				func_159(46.162f, 6821.945f, 15.483f, 249.8f);
				func_159(60.129f, 6836.8f, 15.605f, 269.6f);
				func_159(40.88f, 6802.952f, 20.113f, 242.6f);
				func_159(48.203f, 6799.134f, 20.897f, 244.4f);
				func_159(70.449f, 6809.271f, 16.846f, 243f);
				func_159(61.436f, 6814.266f, 16.71f, 244.2f);
				func_159(56.142f, 6793.458f, 19.806f, 242.6f);
				func_159(65.759f, 6791.12f, 18.433f, 276.4f);
				func_159(77.305f, 6805.391f, 18.558f, 245.6f);
				func_159(85.893f, 6800.243f, 18.535f, 249.8f);
				func_159(56.85f, 6780.582f, 18.822f, 297.999f);
				func_159(65.636f, 6784.669f, 18.789f, 293.799f);
				func_159(74.121f, 6788.498f, 18.739f, 293.799f);
				func_159(97.779f, 6796.32f, 19.02f, 276.799f);
				func_159(106.76f, 6796.983f, 18.914f, 272.599f);
				func_159(112.387f, 6802.858f, 18.994f, 210.599f);
				func_159(117.58f, 6802.644f, 18.663f, 209.399f);
				func_159(122.481f, 6802.693f, 18.468f, 209.399f);
				func_159(127.182f, 6802.686f, 18.218f, 209.399f);
				func_159(132.429f, 6801.882f, 17.949f, 209.399f);
			}
			break;
		
		case 94:
			if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_58 == 0)
			{
				func_159(-2213.552f, 2283.726f, 31.7464f, 293.7993f);
				func_159(-2196.71f, 2290.824f, 32.0819f, 293.7993f);
				func_159(-2232.397f, 2274.252f, 31.602f, 296.7993f);
				func_159(-2180.471f, 2296.206f, 32.9612f, 287.5992f);
				func_159(-2180.87f, 2419.649f, 0.2324f, 147.7987f);
				func_159(-2180.166f, 2436.91f, 0.2325f, 144.5987f);
				func_159(-2185.271f, 2457.022f, 0.2062f, 160.1985f);
				func_159(-2329.465f, 2393.603f, 2.5699f, 289.7982f);
				func_159(-2328.978f, 2380.406f, 2.7911f, 289.7982f);
				func_159(-2333.665f, 2366.641f, 3.4939f, 289.7982f);
			}
			else
			{
				func_159(-2239.671f, 2390.292f, 10.756f, 189.2002f);
				func_159(-2217.413f, 2392.471f, 12.2202f, 189.2002f);
				func_159(-2238.863f, 2381.56f, 13.1388f, 185.2003f);
				func_159(-2215.695f, 2383.035f, 14.9809f, 189.4004f);
				func_159(-2238.044f, 2372.67f, 15.07f, 187.4004f);
				func_159(-2215.96f, 2374.251f, 17.0939f, 187.4004f);
				func_159(-2237.494f, 2364.467f, 15.3155f, 186.2004f);
				func_159(-2216.857f, 2365.651f, 18.9029f, 173.0005f);
				func_159(-2218.526f, 2357.065f, 20.7893f, 179.0004f);
				func_159(-2237.625f, 2348.108f, 20.9097f, 179.0004f);
				func_159(-2218.447f, 2348.733f, 22.9621f, 179.0004f);
				func_159(-2238.18f, 2339.141f, 22.5602f, 174.8003f);
				func_159(-2218.771f, 2340.131f, 25.5237f, 177.2002f);
				func_159(-2238.998f, 2330.958f, 25.7263f, 175.8005f);
				func_159(-2219.221f, 2331.934f, 28.5604f, 177.8006f);
				func_159(-2219.077f, 2324.066f, 30.9043f, 198.8006f);
				func_159(-2239.413f, 2322.913f, 28.0647f, 177.8008f);
				func_159(-2240.014f, 2313.951f, 29.5314f, 170.6008f);
				func_159(-2241.543f, 2305.819f, 30.7136f, 163.4006f);
				func_159(-2244.904f, 2298.388f, 31.4166f, 148.2005f);
				func_159(-2249.31f, 2290.892f, 31.5742f, 139.2004f);
				func_159(-2211.896f, 2319.581f, 31.7538f, 259.4002f);
				func_159(-2203.961f, 2320.016f, 31.9895f, 271.4001f);
				func_159(-2255.106f, 2285.415f, 31.617f, 130.3999f);
				func_159(-2196.17f, 2320.341f, 32.2704f, 270.6003f);
				func_159(-2261.335f, 2280.203f, 31.6562f, 130.0002f);
				func_159(-2268.447f, 2275.528f, 31.7095f, 124.4001f);
				func_159(-2188.258f, 2319.985f, 32.5649f, 267.3998f);
			}
			break;
		
		case 95:
			if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_58 == 0)
			{
				func_159(4.0332f, 3378.618f, 41.0822f, 247.1989f);
				func_159(38.819f, 3321.2f, 37.0283f, 203.999f);
				func_159(26.877f, 3309.062f, 37.93f, 191.9991f);
				func_159(15.6727f, 3297.846f, 39.0535f, 191.9991f);
				func_159(-24.2865f, 3367.527f, 41.4783f, 264.399f);
				func_159(-23.1279f, 3352.254f, 40.52f, 280.399f);
				func_159(-25.5802f, 3337.243f, 40.7142f, 320.1988f);
				func_159(97.4844f, 3335.385f, 34.6164f, 7.9981f);
				func_159(20.409f, 3370.839f, 38.8393f, 235.799f);
				func_159(48.457f, 3336.586f, 35.8912f, 270.3979f);
			}
			else
			{
				func_159(25.9869f, 3349.706f, 36.0366f, 273.9994f);
				func_159(25.0176f, 3356.915f, 36.4258f, 276.9998f);
				func_159(36.2443f, 3351.358f, 36.2386f, 272.5997f);
				func_159(35.9352f, 3358.816f, 37.0033f, 276.7998f);
				func_159(25.9651f, 3342.673f, 36.2157f, 270.7997f);
				func_159(30.027f, 3292.351f, 38.604f, 140.199f);
				func_159(49.1614f, 3358.589f, 35.9759f, 263.5988f);
				func_159(48.288f, 3352.494f, 35.5841f, 261.1988f);
				func_159(23.897f, 3283.152f, 39.381f, 145.399f);
				func_159(60.9182f, 3356.21f, 35.8814f, 255.3988f);
				func_159(18.723f, 3274.025f, 40.054f, 155.799f);
				func_159(59.0177f, 3350.004f, 35.3204f, 255.7989f);
				func_159(36.958f, 3298.847f, 38.001f, 127.799f);
				func_159(54.165f, 3311.582f, 36.517f, 303.799f);
				func_159(61.607f, 3317.105f, 35.916f, 306.999f);
				func_159(68.994f, 3323.129f, 35.364f, 308.199f);
				func_159(76.266f, 3329.467f, 34.805f, 311.399f);
				func_159(82.757f, 3335.915f, 34.344f, 316.598f);
				func_159(46.5977f, 3306.196f, 37.1628f, 304.9976f);
				func_159(14.664f, 3263.688f, 40.931f, 160.398f);
				func_159(50.8234f, 3324.118f, 36.2129f, 305.1976f);
				func_159(11.7852f, 3256.101f, 41.7031f, 159.198f);
				func_159(89.575f, 3343.311f, 33.932f, 318.398f);
				func_159(58.4154f, 3329.423f, 35.6197f, 305.5979f);
				func_159(65.3201f, 3334.253f, 35.1903f, 306.5977f);
				func_159(72.1063f, 3339.793f, 34.8449f, 308.5977f);
				func_159(95.6614f, 3349.917f, 33.696f, 316.1977f);
				func_159(85.4387f, 3353.183f, 33.8047f, 317.9978f);
			}
			break;
		
		case 96:
			if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_58 == 0)
			{
				func_159(2135.708f, 1757.503f, 102.073f, 40.999f);
				func_159(2148.674f, 1764.557f, 102.75f, 40.999f);
				func_159(2160.511f, 1771.173f, 104.149f, 40.999f);
				func_159(2172.842f, 1777.391f, 105.369f, 40.999f);
				func_159(2127.938f, 1736.353f, 100.835f, 222.199f);
				func_159(2141.682f, 1739.865f, 99.833f, 222.199f);
				func_159(2152.786f, 1747.776f, 99.785f, 222.199f);
				func_159(2166.356f, 1754.682f, 100.07f, 220.399f);
				func_159(2090.66f, 1701.805f, 101.681f, 243.199f);
				func_159(2066.149f, 1716.735f, 102.112f, 228.2f);
			}
			else
			{
				func_159(2073.044f, 1725.935f, 102.5096f, 225.2f);
				func_159(2077.24f, 1730.299f, 102.5247f, 225.2f);
				func_159(2081.68f, 1734.742f, 102.5588f, 225.2f);
				func_159(2086.052f, 1739.045f, 102.6618f, 225.2f);
				func_159(2090.55f, 1743.53f, 102.6058f, 225.2f);
				func_159(2095.295f, 1748.274f, 102.3022f, 225.2f);
				func_159(2101.779f, 1721.807f, 101.927f, 225.2f);
				func_159(2107.08f, 1727.001f, 101.932f, 225.2f);
				func_159(2095.867f, 1716.475f, 101.925f, 225.2f);
				func_159(2112.387f, 1732.492f, 101.849f, 225.2f);
				func_159(2089.718f, 1710.779f, 101.978f, 225.2f);
				func_159(2111.639f, 1717.132f, 100.855f, 225.2f);
				func_159(2117.297f, 1722.655f, 100.704f, 225.2f);
				func_159(2105.821f, 1711.672f, 101.065f, 225.2f);
				func_159(2098.759f, 1704.866f, 101.209f, 225.2f);
				func_159(2121.208f, 1713.145f, 99.65f, 225.2f);
				func_159(2115.34f, 1707.542f, 99.829f, 225.2f);
				func_159(2109.211f, 1702.247f, 100.079f, 225.2f);
				func_159(2124.167f, 1704.036f, 98.584f, 225.2f);
				func_159(2118.181f, 1698.253f, 98.645f, 225.2f);
				func_159(2127.253f, 1694.878f, 97.078f, 225.2f);
				func_159(2117.786f, 1738.219f, 101.839f, 225.2f);
				func_159(2122.34f, 1728.011f, 100.627f, 225.2f);
				func_159(2126.288f, 1718.542f, 99.501f, 225.2f);
				func_159(2129.762f, 1709.847f, 98.352f, 225.2f);
				func_159(2132.765f, 1700.777f, 96.999f, 225.2f);
				func_159(2120.399f, 1689.165f, 97.388f, 225.2f);
				func_159(2098.994f, 1747.929f, 102.2403f, 225.2f);
			}
			break;
		
		case 97:
			if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_58 == 0)
			{
				func_159(1871.691f, 358.5369f, 162.1067f, 153.1979f);
				func_159(1858.966f, 351.2935f, 161.7614f, 166.598f);
				func_159(1873.611f, 342.6637f, 161.6936f, 142.998f);
				func_159(1887.645f, 343.1557f, 162.1659f, 138.5979f);
				func_159(1888.644f, 328.0839f, 161.7489f, 139.398f);
				func_159(1898.596f, 315.2232f, 161.4418f, 173.7979f);
				func_159(1896.729f, 266.5388f, 161.1619f, 113.5978f);
				func_159(1900.167f, 281.3884f, 161.7807f, 115.197f);
				func_159(1856.286f, 294.624f, 161.442f, 167.9966f);
				func_159(1868.622f, 309.7907f, 162.6084f, 155.1968f);
			}
			else
			{
				func_159(1856.378f, 255.9146f, 162.7158f, 147.6202f);
				func_159(1837.279f, 227.3696f, 165.2592f, 164.3995f);
				func_159(1835.192f, 219.3931f, 167.5468f, 169.9994f);
				func_159(1833.557f, 211.859f, 169.864f, 169.9994f);
				func_159(1839.534f, 194.4053f, 171.3841f, 172.9989f);
				func_159(1838.289f, 185.8157f, 171.2585f, 174.1989f);
				func_159(1837.478f, 177.0607f, 170.7063f, 174.1989f);
				func_159(1840.463f, 202.6959f, 170.8702f, 174.1989f);
				func_159(1836.296f, 168.7307f, 170.5786f, 174.1989f);
				func_159(1835.412f, 159.3162f, 170.4163f, 171.1989f);
				func_159(1826.91f, 214.9648f, 172.2502f, 18.7986f);
				func_159(1823.805f, 223.0288f, 172.0794f, 21.7986f);
				func_159(1820.599f, 231.144f, 172.2987f, 21.7986f);
				func_159(1817.245f, 239.1232f, 172.0878f, 21.7986f);
				func_159(1814.089f, 247.0423f, 171.7386f, 24.9986f);
				func_159(1810.879f, 255.6553f, 171.7517f, 19.3986f);
				func_159(1807.729f, 265.4899f, 172.2307f, 15.1986f);
				func_159(1823.147f, 197.3122f, 172.235f, 192.3984f);
				func_159(1824.641f, 184.4241f, 171.5948f, 183.3985f);
				func_159(1825.019f, 171.2314f, 170.5843f, 183.3985f);
				func_159(1824.748f, 162.8998f, 170.4961f, 173.1985f);
				func_159(1817.345f, 214.6964f, 172.5223f, 203.9982f);
				func_159(1813.466f, 222.3717f, 172.3316f, 200.9982f);
				func_159(1809.114f, 230.8225f, 172.346f, 205.1983f);
				func_159(1805.594f, 239.3896f, 172.0033f, 197.9984f);
				func_159(1802.515f, 247.4269f, 171.8964f, 197.9984f);
				func_159(1833.982f, 150.4025f, 170.411f, 163.7985f);
				func_159(1823.079f, 154.5105f, 170.8194f, 163.7985f);
			}
			break;
		
		default:
			break;
	}
}

void func_146(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_159(-1133.454f, -3371.672f, 12.945f, 329.799f);
			func_159(-1119.748f, -3379.991f, 12.945f, 329.799f);
			func_159(-1147.602f, -3363.505f, 12.945f, 329.799f);
			func_159(-1161.988f, -3354.852f, 12.945f, 329.799f);
			func_159(-1116.563f, -3358.99f, 12.945f, 329.799f);
			func_159(-1131.23f, -3350.104f, 12.945f, 329.799f);
			func_159(-1145.252f, -3341.608f, 12.945f, 329.799f);
			func_159(-1115.202f, -3339.265f, 12.945f, 329.799f);
			func_159(-1129.559f, -3330.697f, 12.945f, 329.799f);
			func_159(-1114.664f, -3320.954f, 12.945f, 329.799f);
			func_159(-1199.923f, -3369.502f, 12.945f, 350.399f);
			func_159(-1212.069f, -3363.568f, 12.945f, 350.399f);
			func_159(-1223.637f, -3356.694f, 12.945f, 350.399f);
			func_159(-1102.284f, -3420.613f, 12.945f, 354.599f);
			func_159(-1091.131f, -3427.396f, 12.945f, 354.599f);
			func_159(-1079.372f, -3434.306f, 12.945f, 354.599f);
			func_159(-1067.498f, -3441.878f, 13.114f, 354.599f);
			func_159(-1055.714f, -3448.819f, 12.977f, 354.599f);
			func_159(-1043.37f, -3455.796f, 13.146f, 354.599f);
			func_159(-1017.023f, -3382.777f, 12.8401f, 330.6f);
			func_159(-1010.608f, -3386.103f, 12.8401f, 330.6f);
			func_159(-1004.658f, -3389.823f, 12.8401f, 330.6f);
			func_159(-998.3798f, -3393.644f, 12.8401f, 330.6f);
			func_159(-991.5242f, -3397.297f, 12.8401f, 330.6f);
			func_159(-985.0826f, -3401.247f, 12.8401f, 330.6f);
			func_159(-978.2733f, -3405.031f, 12.8401f, 330.6f);
			func_159(-971.724f, -3409.109f, 12.8401f, 330.6f);
			func_159(-964.4719f, -3413.202f, 13.1463f, 330.6f);
			func_159(-1022.94f, -3392.372f, 12.8401f, 330.6f);
			func_159(-1016.219f, -3395.82f, 12.8401f, 330.6f);
			func_159(-1009.873f, -3399.143f, 12.8401f, 330.6f);
			func_159(-1003.436f, -3402.982f, 12.8401f, 330.6f);
			func_159(-997.0872f, -3406.928f, 12.8401f, 330.6f);
			func_159(-990.2305f, -3410.548f, 12.8401f, 330.6f);
			func_159(-983.4429f, -3414.093f, 12.8401f, 330.6f);
			func_159(-976.8809f, -3417.846f, 12.8401f, 330.6f);
			func_159(-969.4039f, -3421.727f, 13.1463f, 330.6f);
			func_159(-1028.251f, -3401.834f, 12.8401f, 330.6f);
			func_159(-1021.631f, -3405.433f, 12.8401f, 330.6f);
			func_159(-1015.209f, -3408.563f, 12.8401f, 330.6f);
			func_159(-1008.81f, -3412.484f, 12.8401f, 330.6f);
			func_159(-1002.277f, -3415.987f, 12.8401f, 330.6f);
			func_159(-995.7023f, -3419.97f, 12.8401f, 330.6f);
			func_159(-989.1453f, -3423.988f, 12.8401f, 330.6f);
			func_159(-982.6298f, -3427.981f, 12.8401f, 330.6f);
			func_159(-974.9305f, -3431.833f, 13.1463f, 330.6f);
			break;
		
		case 84:
			func_159(-1356.991f, -3242.228f, 12.945f, 330f);
			func_159(-1369.313f, -3234.758f, 12.945f, 330f);
			func_159(-1381.751f, -3227.408f, 12.945f, 330f);
			func_159(-1394.302f, -3220.021f, 12.945f, 330f);
			func_159(-1354.339f, -3223.129f, 12.945f, 330f);
			func_159(-1366.302f, -3215.809f, 12.945f, 330f);
			func_159(-1378.492f, -3208.645f, 12.945f, 330f);
			func_159(-1350.322f, -3203.405f, 12.945f, 330f);
			func_159(-1362.684f, -3196.451f, 12.945f, 330f);
			func_159(-1347.089f, -3182.69f, 12.945f, 330f);
			func_159(-1452.642f, -3222.367f, 12.945f, 347.799f);
			func_159(-1464.229f, -3215.108f, 12.945f, 347.799f);
			func_159(-1476.133f, -3207.652f, 12.945f, 347.799f);
			func_159(-1488.295f, -3200.033f, 12.945f, 347.799f);
			func_159(-1336.877f, -3272.344f, 12.945f, 8.199f);
			func_159(-1323.381f, -3279.614f, 12.945f, 8.199f);
			func_159(-1309.671f, -3287.749f, 12.945f, 8.199f);
			func_159(-1296.963f, -3294.511f, 12.945f, 8.199f);
			func_159(-1501.978f, -3193.849f, 12.945f, 350.599f);
			func_159(-1344.716f, -3288.333f, 12.9445f, 331.2f);
			func_159(-1338.141f, -3290.335f, 12.9445f, 331.2f);
			func_159(-1331.473f, -3294.178f, 12.9445f, 331.2f);
			func_159(-1324.921f, -3297.998f, 12.9445f, 331.2f);
			func_159(-1318.129f, -3301.957f, 12.9445f, 331.2f);
			func_159(-1350.466f, -3294.226f, 12.9445f, 331.2f);
			func_159(-1343.482f, -3297.576f, 12.9445f, 331.2f);
			func_159(-1336.398f, -3302.456f, 12.9445f, 331.2f);
			func_159(-1329.82f, -3306.82f, 12.945f, 331.2f);
			func_159(-1322.761f, -3310.353f, 12.945f, 331.2f);
			func_159(-1316.587f, -3314.556f, 12.945f, 331.2f);
			func_159(-1326.538f, -3318.499f, 12.945f, 331.2f);
			func_159(-1335.74f, -3313.678f, 12.945f, 331.2f);
			func_159(-1350.848f, -3302.619f, 12.9446f, 331.2f);
			func_159(-1357.961f, -3306.886f, 12.945f, 331.2f);
			func_159(-1335.202f, -3322.428f, 12.9452f, 331.2f);
			func_159(-1351.401f, -3311.566f, 12.9452f, 331.2f);
			func_159(-1344.255f, -3305.965f, 12.9451f, 331.2f);
			func_159(-1299.832f, -3305.573f, 12.945f, 331.2f);
			func_159(-1293.414f, -3309.413f, 12.945f, 331.2f);
			func_159(-1286.835f, -3313.157f, 12.945f, 331.2f);
			func_159(-1303.988f, -3313.1f, 12.945f, 331.2f);
			func_159(-1297.402f, -3316.699f, 12.945f, 331.2f);
			func_159(-1290.969f, -3320.519f, 12.945f, 331.2f);
			func_159(-1308.27f, -3320.612f, 12.945f, 331.2f);
			func_159(-1301.968f, -3324.714f, 12.945f, 331.2f);
			func_159(-1295.483f, -3328.422f, 12.945f, 331.2f);
			break;
		
		case 85:
			func_159(-2039.992f, 3132.191f, 31.81f, 149.399f);
			func_159(-2025.075f, 3128.63f, 31.81f, 197.599f);
			func_159(-2049.589f, 3142.464f, 31.81f, 109.199f);
			func_159(-2088.648f, 3081.327f, 31.81f, 150.599f);
			func_159(-2070.669f, 3111.575f, 31.81f, 123.399f);
			func_159(-2053.385f, 3109.703f, 31.81f, 150.599f);
			func_159(-2044.448f, 3094.012f, 31.81f, 181.799f);
			func_159(-2071.825f, 3093.477f, 31.81f, 150.599f);
			func_159(-2060.579f, 3085.924f, 31.81f, 150.599f);
			func_159(-2062.712f, 3066.073f, 31.81f, 150.599f);
			func_159(-2094.385f, 3190.445f, 31.81f, 117.799f);
			func_159(-2083.056f, 3182.885f, 31.81f, 117.799f);
			func_159(-2071.578f, 3175.554f, 31.81f, 117.799f);
			func_159(-2120.249f, 3173.97f, 31.81f, 25.199f);
			func_159(-2067.547f, 3146.325f, 31.81f, 14.998f);
			func_159(-2080.506f, 3154.591f, 31.81f, 15.798f);
			func_159(-2093.278f, 3159.793f, 31.81f, 14.798f);
			func_159(-2106.614f, 3167.605f, 31.81f, 21.198f);
			func_159(-2106.347f, 3196.902f, 31.81f, 117.799f);
			func_159(-2024.425f, 3102.707f, 31.8103f, 150.7997f);
			func_159(-2018.074f, 3099.056f, 31.8103f, 150.7997f);
			func_159(-2009.032f, 3094.171f, 31.8103f, 150.7997f);
			func_159(-2002.923f, 3090.669f, 31.8103f, 150.7997f);
			func_159(-1996.542f, 3087.201f, 31.8103f, 150.7997f);
			func_159(-1990.232f, 3083.534f, 31.8103f, 150.7997f);
			func_159(-1983.518f, 3080.033f, 31.8103f, 150.7997f);
			func_159(-2029.16f, 3094.357f, 31.8103f, 150.7997f);
			func_159(-2022.431f, 3090.703f, 31.8103f, 150.7997f);
			func_159(-2013.702f, 3086.015f, 31.8103f, 150.7997f);
			func_159(-2007.67f, 3082.42f, 31.8103f, 150.7997f);
			func_159(-2001.211f, 3078.569f, 31.8103f, 150.7997f);
			func_159(-1994.644f, 3074.654f, 31.8103f, 150.7997f);
			func_159(-1987.934f, 3070.654f, 31.8103f, 150.7997f);
			func_159(-2033.776f, 3086.031f, 31.8103f, 150.7997f);
			func_159(-2026.929f, 3082.094f, 31.8103f, 150.7997f);
			func_159(-2018.663f, 3077.341f, 31.8103f, 150.7997f);
			func_159(-2012.345f, 3073.707f, 31.8103f, 150.7997f);
			func_159(-2006.052f, 3070.089f, 31.8103f, 150.7997f);
			func_159(-1999.169f, 3066.132f, 31.8103f, 150.7997f);
			func_159(-1992.542f, 3062.257f, 31.8103f, 150.7997f);
			func_159(-2038.545f, 3077.344f, 31.8103f, 150.7997f);
			func_159(-2031.587f, 3073.344f, 31.8103f, 150.7997f);
			func_159(-2021.909f, 3067.715f, 31.8103f, 150.7997f);
			func_159(-2012.886f, 3063.219f, 31.8103f, 150.7997f);
			func_159(-2003.481f, 3057.141f, 31.8103f, 150.7997f);
			func_159(-1996.618f, 3053.195f, 31.8103f, 150.7997f);
			break;
		
		case 86:
			func_159(-1885.187f, 3095.344f, 31.81f, 150.2f);
			func_159(-1898.637f, 3072.816f, 31.811f, 150.2f);
			func_159(-1886.469f, 3065.78f, 31.811f, 150.2f);
			func_159(-1874.621f, 3058.437f, 31.81f, 150.2f);
			func_159(-1862.818f, 3051.244f, 31.81f, 150.2f);
			func_159(-1915.317f, 3041.652f, 31.811f, 150.2f);
			func_159(-1896.724f, 2997.848f, 31.81f, 150.2f);
			func_159(-1932.975f, 3011.781f, 31.81f, 150.2f);
			func_159(-1875.668f, 3034.438f, 31.811f, 150.2f);
			func_159(-1886.144f, 3016.285f, 31.81f, 150.2f);
			func_159(-1913.706f, 3104.196f, 31.81f, 118.599f);
			func_159(-1925.44f, 3112.236f, 31.81f, 118.599f);
			func_159(-1938.08f, 3119.383f, 31.81f, 118.599f);
			func_159(-1927.822f, 3072.679f, 31.81f, 13.399f);
			func_159(-1940.575f, 3079.031f, 31.81f, 13.399f);
			func_159(-1953.344f, 3084.888f, 31.81f, 13.399f);
			func_159(-1965.91f, 3091.929f, 31.81f, 13.399f);
			func_159(-1978.86f, 3100.029f, 31.81f, 13.399f);
			func_159(-1950.928f, 3126.457f, 31.81f, 118.999f);
			func_159(-1975.282f, 3083.046f, 31.8103f, 150.1997f);
			func_159(-1969.362f, 3079.909f, 31.8103f, 150.1997f);
			func_159(-1963.673f, 3076.887f, 31.8103f, 150.1997f);
			func_159(-1958.524f, 3073.899f, 31.8103f, 150.1997f);
			func_159(-1979.828f, 3074.704f, 31.8103f, 150.1997f);
			func_159(-1973.901f, 3071.418f, 31.8103f, 150.1997f);
			func_159(-1967.917f, 3068.089f, 31.8103f, 150.1997f);
			func_159(-1949.916f, 3068.72f, 31.8103f, 150.1997f);
			func_159(-1961.934f, 3064.6f, 31.8103f, 150.1997f);
			func_159(-1984.332f, 3067.03f, 31.8103f, 150.1997f);
			func_159(-1978.182f, 3063.286f, 31.8103f, 150.1997f);
			func_159(-1972.061f, 3060.191f, 31.8103f, 150.1997f);
			func_159(-1952.61f, 3059.551f, 31.8103f, 150.1997f);
			func_159(-1956.958f, 3051.589f, 31.8103f, 150.1997f);
			func_159(-1988.778f, 3059.135f, 31.8103f, 150.1997f);
			func_159(-1982.174f, 3055.591f, 31.8103f, 150.1997f);
			func_159(-1975.579f, 3051.898f, 31.8103f, 150.1997f);
			func_159(-1969.139f, 3048.28f, 31.8103f, 150.1997f);
			func_159(-1962.25f, 3044.256f, 31.8103f, 150.1997f);
			func_159(-1989.48f, 3050.467f, 31.8103f, 150.1997f);
			func_159(-1977.325f, 3043.786f, 31.8103f, 150.1997f);
			func_159(-1971.07f, 3040.306f, 31.8103f, 150.1997f);
			func_159(-1964.409f, 3037.118f, 31.8103f, 150.1997f);
			func_159(-1998.375f, 3042.349f, 31.8103f, 150.1997f);
			func_159(-1991.769f, 3038.47f, 31.8103f, 150.1997f);
			func_159(-1978.718f, 3035.164f, 31.8103f, 150.1997f);
			func_159(-1971.483f, 3031.316f, 31.8103f, 150.1997f);
			break;
		
		case 87:
			func_159(-2484.323f, 3249.294f, 31.828f, 151f);
			func_159(-2495.313f, 3255.746f, 31.828f, 151f);
			func_159(-2472.644f, 3242.684f, 31.828f, 151f);
			func_159(-2506.313f, 3262.27f, 31.823f, 151f);
			func_159(-2461.494f, 3235.93f, 31.828f, 151f);
			func_159(-2505.602f, 3238.049f, 31.828f, 151f);
			func_159(-2481.937f, 3224.8f, 31.828f, 151f);
			func_159(-2516.813f, 3244.266f, 31.823f, 151f);
			func_159(-2470.03f, 3217.899f, 31.828f, 151f);
			func_159(-2493.933f, 3231.308f, 31.828f, 151f);
			func_159(-2443.467f, 3227.753f, 31.828f, 175.8f);
			func_159(-2431.365f, 3220.9f, 31.828f, 175.8f);
			func_159(-2419.883f, 3214.708f, 31.828f, 175.8f);
			func_159(-2501.903f, 3272.865f, 31.822f, 123.999f);
			func_159(-2513.555f, 3280.176f, 31.817f, 123.999f);
			func_159(-2524.776f, 3287.276f, 31.973f, 123.999f);
			func_159(-2407.718f, 3208.055f, 31.827f, 176.199f);
			func_159(-2395.689f, 3201.125f, 31.827f, 176.199f);
			func_159(-2383.498f, 3194.211f, 31.833f, 176.199f);
			func_159(-2426.219f, 3238.211f, 31.8616f, 150.5996f);
			func_159(-2419.052f, 3233.866f, 31.8726f, 150.5996f);
			func_159(-2412.069f, 3229.854f, 31.8859f, 150.5996f);
			func_159(-2405.282f, 3225.809f, 31.8841f, 150.5996f);
			func_159(-2398.624f, 3222.135f, 31.9249f, 150.5996f);
			func_159(-2391.729f, 3218.229f, 31.9354f, 150.5996f);
			func_159(-2384.727f, 3214.524f, 31.9585f, 150.5996f);
			func_159(-2377.55f, 3210.461f, 31.9192f, 150.5996f);
			func_159(-2369.96f, 3205.835f, 31.8267f, 150.5996f);
			func_159(-2404.498f, 3235.728f, 31.8959f, 150.5996f);
			func_159(-2397.481f, 3232.375f, 31.9879f, 150.5996f);
			func_159(-2390.524f, 3228.125f, 31.9758f, 150.5996f);
			func_159(-2383.986f, 3223.995f, 31.986f, 150.5996f);
			func_159(-2377.176f, 3219.695f, 31.9615f, 150.5996f);
			func_159(-2370.524f, 3215.946f, 32.002f, 150.5996f);
			func_159(-2400.23f, 3243.846f, 31.8311f, 150.5996f);
			func_159(-2393.28f, 3240.281f, 32.0164f, 150.5996f);
			func_159(-2386.355f, 3236.819f, 32.0616f, 150.5996f);
			func_159(-2379.382f, 3232.74f, 32.0318f, 150.5996f);
			func_159(-2372.314f, 3229.196f, 32.0177f, 150.5996f);
			func_159(-2365.153f, 3225.732f, 32.0145f, 150.5996f);
			func_159(-2395.04f, 3252.644f, 31.8557f, 150.5996f);
			func_159(-2388.684f, 3249.092f, 32.0198f, 150.5996f);
			func_159(-2382.127f, 3245.045f, 32.0086f, 150.5996f);
			func_159(-2374.905f, 3240.938f, 32.0085f, 150.5996f);
			func_159(-2368.14f, 3237.328f, 32.0177f, 150.5996f);
			func_159(-2361.068f, 3233.396f, 31.9573f, 150.5996f);
			break;
		
		default:
			break;
	}
}

int func_147(int iParam0)
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

void func_148(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_159(-947.712f, -3367.704f, 12.944f, 60f);
			func_159(-904.692f, -3293.072f, 12.944f, 60f);
			func_159(-863.71f, -3221.978f, 12.944f, 60f);
			func_159(-966.418f, -3162.773f, 12.944f, 60f);
			func_159(-1007.435f, -3233.93f, 12.944f, 60f);
			func_159(-1050.455f, -3308.559f, 12.944f, 60f);
			func_159(-1145.673f, -3253.456f, 12.944f, 60f);
			func_159(-1098.386f, -3181.428f, 12.944f, 60f);
			func_159(-1060.474f, -3108.903f, 12.944f, 60f);
			func_159(-1155.391f, -3053.632f, 12.944f, 60f);
			func_159(-1196.114f, -3125.146f, 12.948f, 60f);
			func_159(-1235.552f, -3201.86f, 12.944f, 60f);
			func_159(-1344.446f, -3139.177f, 12.944f, 60f);
			func_159(-1301.308f, -3064.341f, 12.944f, 60f);
			func_159(-1260.135f, -2992.912f, 12.944f, 60f);
			func_159(-1364.244f, -2932.9f, 12.98f, 60f);
			func_159(-1405.284f, -3004.108f, 12.96f, 60f);
			func_159(-1448.29f, -3078.72f, 12.95f, 60f);
			func_159(-1535.732f, -3028.318f, 12.945f, 60f);
			func_159(-1492.639f, -2953.558f, 12.945f, 60f);
			func_159(-1451.506f, -2882.2f, 12.944f, 60f);
			func_159(-1553.927f, -2823.12f, 13.002f, 60f);
			func_159(-1595.097f, -2894.571f, 12.944f, 60f);
			func_159(-1637.836f, -2968.714f, 12.945f, 60f);
			func_159(-1740.971f, -2911.484f, 12.944f, 330f);
			func_159(-1696.293f, -2833.978f, 12.944f, 330f);
			func_159(-1651.502f, -2756.273f, 12.945f, 330f);
			func_159(-1588.258f, -2647.575f, 12.944f, 330f);
			func_159(-1536.862f, -2681.378f, 12.945f, 330f);
			func_159(-1529.025f, -2544.485f, 12.944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_159(-1970.422f, 2825.696f, 31.81f, 60.4f);
			func_159(-2033.307f, 2855.526f, 31.83f, 60.4f);
			func_159(-2091.018f, 2888.691f, 31.81f, 60.4f);
			func_159(-2206.717f, 2955.363f, 31.81f, 60.4f);
			func_159(-2268.817f, 2990.846f, 31.81f, 60.4f);
			func_159(-2324.039f, 3023.154f, 31.811f, 60.4f);
			func_159(-2435.806f, 3087.705f, 31.824f, 60.4f);
			func_159(-2543.753f, 3149.909f, 31.821f, 60.4f);
			func_159(-1944.848f, 2898.798f, 31.81f, 125.398f);
			func_159(-1978.705f, 2924.367f, 31.846f, 151.999f);
			func_159(-2064.849f, 2955.153f, 31.867f, 151.199f);
			func_159(-2106.165f, 2980.687f, 31.81f, 104.599f);
			func_159(-2302.367f, 3088.676f, 31.814f, 150.598f);
			func_159(-2152.113f, 2924.162f, 31.81f, 60.198f);
			func_159(-2488.232f, 3118.146f, 31.822f, 59.798f);
			func_159(-2277.922f, 3133.756f, 31.811f, 120.598f);
			func_159(-2604.776f, 3185.186f, 31.812f, 59.998f);
			func_159(-2608.107f, 3305.049f, 31.812f, 60.198f);
			func_159(-2718.936f, 3323.203f, 31.81f, 201.198f);
			func_159(-2658.718f, 3216.499f, 31.812f, 59.998f);
			func_159(-2380.372f, 3055.341f, 31.826f, 60.4f);
			func_159(-2790.616f, 3286.24f, 31.812f, 240.397f);
			func_159(-2770.946f, 3322.605f, 31.812f, 240.397f);
			func_159(-2678.805f, 3339.186f, 31.812f, 199.597f);
			func_159(-2743.882f, 3224.094f, 31.81f, 303.397f);
			func_159(-2701.354f, 3203.092f, 31.994f, 328.397f);
			func_159(-2249.816f, 2944.609f, 31.937f, 330.196f);
			func_159(-2586.579f, 3137.286f, 31.935f, 330.196f);
			func_159(-2134.76f, 2878.728f, 31.81f, 330.196f);
			func_159(-1949.075f, 2861.21f, 31.811f, 58.798f);
			break;
		
		default:
			break;
	}
}

int func_149(int iParam0)
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
		case joaat("volatol"):
			return 1;
		
		default:
	}
	return 0;
}

int func_150(int iParam0)
{
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return 0;
	}
	if (unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(iParam0, 1), -1308.118f, -2934.27f, 13.7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_151(int iParam0)
{
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return 0;
	}
	if (unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(iParam0, 1), -2270.245f, 3127.913f, 31.8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_152(int iParam0, int iParam1)
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

int func_153(struct<2> Param0, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	iVar2 = 0;
	fVar3 = 50f;
	iVar0 = 1;
	while (iVar0 <= 117)
	{
		if (iVar2 < *uParam3)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Global_1049531[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1049531[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3)
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
	while (iVar0 < 102)
	{
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (func_141(iVar0))
			{
				fVar3 = 300f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 89 && iVar0 <= 97)
		{
			if (func_154(iVar0))
			{
				fVar3 = 75f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar2 < *uParam3)
		{
			fVar4 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Global_1808664.f_42[iVar0 /*3*/], Global_1808664.f_42[iVar0 /*3*/].f_1, 0f);
			if (fVar4 < fVar3)
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

int func_154(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_155(iParam0);
	if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_248 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11;
	if (iVar1 != func_57())
	{
		if (Global_1595681[iVar1 /*678*/].f_266.f_248 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_1 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_155(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
		
		case 90:
			return 2;
		
		case 91:
			return 3;
		
		case 92:
			return 4;
		
		case 93:
			return 5;
		
		case 94:
			return 6;
		
		case 95:
			return 7;
		
		case 96:
			return 8;
		
		case 97:
			return 9;
		
		default:
	}
	return 0;
}

int func_156(int iParam0)
{
	if ((unk_0x422717A3330EA45D(iParam0) || unk_0x309C05EAA86E194E(iParam0)) || unk_0x93CA7A248A4D402A(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_157(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_159(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_159(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_159(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_159(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_159(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_159(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_159(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_159(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 82:
			func_159(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_159(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_159(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_159(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		
		case 81:
			func_159(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
			func_159(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
			func_159(-1283.894f, 467.2136f, 95.4036f, 95.058f);
			func_159(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
			break;
		
		case 73:
			func_159(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_159(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_159(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_159(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		
		case 75:
			func_159(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_159(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_159(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_159(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 76:
			func_159(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_159(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_159(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_159(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		
		case 77:
			func_159(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_159(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_159(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_159(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		
		case 80:
			func_159(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_159(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_159(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_159(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		
		case 87:
			if (func_158())
			{
				func_159(-1608.297f, -556.875f, 33.406f, 310f);
				func_159(-1616.095f, -563.402f, 33.049f, 309.4f);
				func_159(-1560.29f, -531.69f, 34.576f, 35.3994f);
				func_159(-1555.303f, -538.781f, 34.044f, 35.3994f);
			}
			else
			{
				func_159(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_159(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_159(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_159(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_159(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_159(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_159(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_159(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			}
			break;
		
		case 88:
			if (func_158())
			{
				func_159(-1402.362f, -511.396f, 30.888f, 35.4f);
				func_159(-1356.617f, -531.0343f, 29.7588f, 124.9982f);
				func_159(-1407.634f, -503.839f, 31.35f, 35.4f);
				func_159(-1346.007f, -523.3546f, 30.6339f, 125.9976f);
			}
			else
			{
				func_159(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_159(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_159(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_159(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_159(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_159(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_159(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_159(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
			}
			break;
		
		case 89:
			if (func_158())
			{
				func_159(-102.737f, -597.379f, 35.053f, 160.999f);
				func_159(-97.793f, -589.568f, 35.082f, 134.799f);
				func_159(-110.357f, -619.402f, 35.055f, 160.599f);
				func_159(-112.561f, -627.723f, 35.046f, 165.399f);
			}
			else
			{
				func_159(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_159(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_159(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_159(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_159(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_159(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_159(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_159(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			}
			break;
		
		case 90:
			if (func_158())
			{
				func_159(-59.349f, -779.238f, 43.134f, 228.398f);
				func_159(-41.6311f, -789.1425f, 43.1323f, 255.5993f);
				func_159(-65.212f, -772.66f, 43.151f, 219.398f);
				func_159(-33.0648f, -789.3544f, 43.1287f, 279.5989f);
			}
			else
			{
				func_159(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_159(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_159(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_159(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_159(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_159(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_159(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_159(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			}
			break;
		
		case 91:
			func_159(246.5035f, -1798.749f, 26.1131f, 212.5996f);
			func_159(247.8968f, -1797.017f, 26.1131f, 212.5996f);
			func_159(249.3848f, -1795.374f, 26.1131f, 212.5996f);
			func_159(250.8498f, -1793.695f, 26.1131f, 212.5996f);
			func_159(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_159(266.8129f, -1787.476f, 26.1131f, 164.5991f);
			func_159(264.814f, -1785.801f, 26.1131f, 164.5991f);
			func_159(269.0069f, -1789.16f, 26.1131f, 164.5991f);
			break;
		
		case 92:
			func_159(-1464.5f, -927.9f, 9f, 296.7991f);
			func_159(-1466f, -926.1f, 9f, 296.7991f);
			func_159(-1467.9f, -924.7f, 9f, 296.7991f);
			func_159(-1469.7f, -923.7f, 9f, 296.7991f);
			func_159(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
			func_159(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
			func_159(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
			func_159(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		
		case 93:
			func_159(30.0784f, -1024.16f, 28.4469f, 234.5994f);
			func_159(29.1695f, -1026.719f, 28.4453f, 234.5994f);
			func_159(28.2538f, -1029.296f, 28.4421f, 234.5994f);
			func_159(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_159(32.6932f, -1017.063f, 28.4531f, 234.5994f);
			func_159(33.672f, -1014.399f, 28.4552f, 234.5994f);
			func_159(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_159(39.4909f, -1015.097f, 28.484f, 175.5986f);
			break;
		
		case 94:
			func_159(45.0033f, 2784.392f, 56.8782f, 103.5999f);
			func_159(43.316f, 2785.903f, 56.8782f, 103.5999f);
			func_159(41.6126f, 2787.36f, 56.8782f, 103.5999f);
			func_159(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_159(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_159(33.7771f, 2790.379f, 56.8781f, 208.7997f);
			func_159(30.7578f, 2786.8f, 56.8781f, 208.7997f);
			func_159(29.3121f, 2785.045f, 56.8745f, 208.7997f);
			break;
		
		case 95:
			func_159(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
			func_159(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
			func_159(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
			func_159(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_159(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
			func_159(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
			func_159(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
			func_159(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		
		case 96:
			func_159(1738.422f, 3716.779f, 33.0787f, 6.9999f);
			func_159(1736.207f, 3715.989f, 33.094f, 6.9999f);
			func_159(1748.442f, 3714.17f, 33.0889f, 39.399f);
			func_159(1750.475f, 3715.007f, 33.1067f, 39.399f);
			func_159(1747.18f, 3721.102f, 33.007f, 95.199f);
			func_159(1746.413f, 3723.255f, 32.9738f, 95.199f);
			func_159(1740.67f, 3717.613f, 33.0616f, 8.199f);
			func_159(1733.937f, 3715.08f, 33.1236f, 8.199f);
			break;
		
		case 97:
			func_159(947.9371f, -1452.737f, 30.143f, 331.5991f);
			func_159(950.2141f, -1452.826f, 30.1364f, 331.5991f);
			func_159(952.4588f, -1452.882f, 30.129f, 331.5991f);
			func_159(954.6608f, -1452.869f, 30.1303f, 331.5991f);
			func_159(935.1006f, -1452.701f, 30.1907f, 316.999f);
			func_159(932.5459f, -1452.579f, 30.2194f, 316.999f);
			func_159(929.9319f, -1452.567f, 30.2647f, 316.999f);
			func_159(927.4857f, -1452.446f, 30.3167f, 316.999f);
			break;
		
		case 98:
			func_159(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_159(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_159(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_159(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_159(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_159(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_159(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_159(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		
		case 99:
			func_159(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_159(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_159(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_159(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_159(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_159(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_159(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_159(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		
		case 100:
			func_159(2478.52f, 4082.137f, 36.8208f, 227.5999f);
			func_159(2477.557f, 4079.946f, 36.8014f, 227.5999f);
			func_159(2465.123f, 4081.35f, 37.0655f, 167.4f);
			func_159(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_159(2467.7f, 4080.332f, 37.0649f, 167.4f);
			func_159(2469.587f, 4079.538f, 37.061f, 167.4f);
			func_159(2481.354f, 4088.553f, 36.9131f, 209.4f);
			func_159(2482.442f, 4091.023f, 36.9472f, 209.4f);
			break;
		
		case 101:
			func_159(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_159(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
			func_159(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_159(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_159(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_159(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
			func_159(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
			func_159(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		
		case 102:
			func_159(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
			func_159(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
			func_159(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
			func_159(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
			func_159(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
			func_159(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
			func_159(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
			func_159(-1127.039f, -1564.395f, 3.292f, 168.9988f);
			break;
		
		default:
			break;
	}
}

bool func_158()
{
	return Global_2447128.f_14;
}

void func_159(struct<3> Param0, float fParam3)
{
	if (Global_2405047.f_1720 < 101)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2405047.f_1721[Global_2405047.f_1720 /*4*/] = { Param0 };
		Global_2405047.f_1721[Global_2405047.f_1720 /*4*/].f_3 = fParam3;
		Global_2405047.f_1720++;
	}
}

int func_160(struct<3> Param0)
{
	int iVar0;
	
	if (unk_0x2A488C176D52CCA5(Global_2405047.f_2855, Param0) < Global_2405047.f_2863)
	{
		return Global_2405047.f_2858;
	}
	Global_2405047.f_2855 = { Param0 };
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (Param0.f_2 <= 0f)
		{
			Param0.f_2 = ((Global_2411802[iVar0 /*7*/].f_2 + Global_2411802[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_116(Param0, &(Global_2411802[iVar0 /*7*/])))
		{
			Global_2405047.f_2858 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2405047.f_2858 = -1;
	return -1;
}

int func_161()
{
	if (unk_0xB03A1684359C50A1(Global_1646129.f_13, 0) && !Global_2447908.f_6105)
	{
		return 0;
	}
	return 0;
}

int func_162(struct<2> Param0, var uParam2, bool bParam3, float fParam4)
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
			if (func_141(iVar0))
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
		fVar2 = unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Global_1808664.f_42[iVar0 /*3*/], Global_1808664.f_42[iVar0 /*3*/].f_1, 0f);
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

void func_163()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2405047.f_2693[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_164(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Var1.f_2 <= 0f)
		{
			Var1.f_2 = ((Global_2411758[iVar0 /*7*/].f_2 + Global_2411758[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_116(Var1, &(Global_2411758[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_127(&Var1, Global_2411758[iVar0 /*7*/], Global_2411758[iVar0 /*7*/].f_3, Global_2411758[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_165(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2405047.f_507 && !Global_2405047.f_508)
	{
		if (!Global_2405047.f_44.f_313)
		{
			if (!func_169(unk_0x8CFC7D6E1DA5D304(), 1))
			{
				return 1;
			}
			if (!func_168(Param0, 1008981770))
			{
				if (!func_133(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_133(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_167(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_166(&(Global_2405047.f_44[iVar0 /*12*/])) };
					if (!func_133(&Var1, 0, 0, 0, 1))
					{
						if (!func_133(&Param0, 0, 0, 0, 1))
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

Vector3 func_166(var uParam0)
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

int func_167(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405047.f_44[iVar0 /*12*/].f_9)
		{
			if (func_120(Param0, &(Global_2405047.f_44[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_168(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2405047.f_44[iVar0 /*12*/].f_9)
		{
			if (func_120(Param0, &(Global_2405047.f_44[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_169(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_170(iParam0) != 0;
	}
	return func_100(iParam0, bParam1);
}

int func_170(int iParam0)
{
	if (func_1162(iParam0, 0, 1))
	{
		return Global_2422724[iParam0 /*420*/].f_1;
	}
	return 0;
}

void func_171()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2405047.f_1721[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405047.f_1720 = 0;
}

void func_172()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x19B3A29FD53C54A6(Global_2405047.f_664[iVar0]))
		{
			if (unk_0xBCF9D020FA9C313D() == Global_2405047.f_664[iVar0])
			{
				if (!Global_2405047.f_660[iVar0] == -1)
				{
					if (unk_0xF2572F6240670CD2(Global_2405047.f_660[iVar0]))
					{
						unk_0x98A5E5107E28B35C(Global_2405047.f_660[iVar0]);
						Global_2405047.f_660[iVar0] = -1;
					}
					else
					{
						Global_2405047.f_660[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2405047.f_660[iVar0] == -1)
		{
			Global_2405047.f_660[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_173(bool bParam0)
{
	if (unk_0xEC0ECEF2AF3FDA8D())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_174(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xB03A1684359C50A1(Global_2436169.f_1, iParam0);
	}
	return 1;
}

Vector3 func_175(struct<3> Param0, float fParam3, float fParam4)
{
	struct<3> Var0;
	
	Var0 = { 0f, 1f, 0f };
	func_176(Var0, fParam3);
	Var0.f_0 = (Var0.f_0 * fParam4);
	Var0.f_1 = (Var0.f_1 * fParam4);
	Var0.f_2 = (Var0.f_2 * fParam4);
	Var0 = { Var0 + Param0 };
	return Var0;
}

Vector3 func_176(struct<3> Param0, float fParam3)
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

void func_177(int iParam0)
{
	if (!func_406())
	{
		switch (Local_112.f_195)
		{
			case 0:
				unk_0xB447DBA72E281B1B(iParam0, 0);
				break;
			
			case 1:
				unk_0xB447DBA72E281B1B(iParam0, 2);
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		unk_0x62270578972B4C56(iParam0, 15, 1);
		unk_0xD7C3FB938E520431(iParam0, 0, 156);
	}
}

int func_178(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	var uVar0;
	float fVar1;
	
	if (!unk_0x274CFAE26B786CB6(1))
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
		unk_0xE54597236B7D8C63(Param2, fVar1, 0, 0, 0, 0, 0, 0);
	}
	uVar0 = unk_0x3064CCF56C6C32BC(iParam1, Param2, uParam5, iParam7, iParam6, iParam14);
	*uParam0 = unk_0x565DEBE7A0FD63C3(uVar0);
	Global_2512581.f_5849 = uVar0;
	if (unk_0x49E68AAD93AADF10(*uParam0))
	{
		if (bParam15)
		{
			unk_0xFE6B55E373059E87(uVar0, 1);
		}
		unk_0xB05881241072FEE6(uVar0, iParam10);
		if (unk_0x2A7F482ED04D9A1A(iVar0))
		{
			if (bParam8)
			{
				unk_0x81E21F3D8AF3CEC2(*uParam0, 1);
			}
			else
			{
				unk_0x81E21F3D8AF3CEC2(*uParam0, 0);
			}
			if (bParam13)
			{
				unk_0xB390A11FB93495B6(*uParam0, unk_0x8CFC7D6E1DA5D304(), 1);
			}
		}
		unk_0x0BF4E270537B1A96(iVar0, iParam9);
		unk_0xFE620BEABB8C5910(iVar0, 1);
		if (bParam12)
		{
			unk_0x4FC0DCE1F171F620(iVar0);
			unk_0xC6D32B0FDD8821E4(iVar0, 5, 5, 1f);
		}
		return 1;
	}
	return 0;
}

int func_179()
{
	int iVar0;
	
	switch (Local_112.f_195)
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

void func_180()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xF67B871D7588B9D9())
	{
		return;
	}
	if (func_406())
	{
		return;
	}
	if (Local_112.f_209 != 0)
	{
		return;
	}
	if (!func_11(&(Local_112.f_230)))
	{
		func_10(&(Local_112.f_230), 0, 0);
	}
	iVar1 = func_182();
	if (!func_6(&(Local_112.f_230), 15000, 0))
	{
		iVar0 = 0;
		while (iVar0 < func_181())
		{
			iVar2 = 0;
			if (!unk_0x5AD42783360AB57E(Local_112.f_199[iVar0]))
			{
				if (unk_0x274CFAE26B786CB6(1))
				{
					if (func_62(iVar1))
					{
						if (!func_61(Local_112.f_179[iVar0 /*5*/], 0f, 0f, 0f, 0))
						{
							if (func_48(Local_112.f_179[iVar0 /*5*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
							{
								if (!unk_0xB03A1684359C50A1(Local_112.f_211, iVar0))
								{
									unk_0x7EE425AE3317BA69(Local_112.f_179[iVar0 /*5*/], 5f, 1, 0, 0, 1);
									unk_0xD2A9C3F486236CC5(&(Local_112.f_211), iVar0);
								}
								if (func_178(&(Local_112.f_199[iVar0]), iVar1, Local_112.f_179[iVar0 /*5*/], Local_112.f_179[iVar0 /*5*/].f_3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
								{
									unk_0xAE2E2838C25011ED(unk_0xFA62333764BA8F5D(Local_112.f_199[iVar0]), 1);
									func_177(unk_0xFA62333764BA8F5D(Local_112.f_199[iVar0]));
								}
							}
							else
							{
								if (unk_0x5288FA47638BE8EE(Local_112.f_179[iVar0 /*5*/], 6f))
								{
									iVar2 = 1;
								}
								else if (unk_0xF00F53194FFC1443(Local_112.f_179[iVar0 /*5*/], Local_112.f_179[iVar0 /*5*/].f_1, (Local_112.f_179[iVar0 /*5*/].f_2 + 1f), 1f) || unk_0xF00F53194FFC1443(Local_112.f_179[iVar0 /*5*/], 1f))
								{
									iVar2 = 1;
								}
								if (iVar2 == 1)
								{
									if (!unk_0xB03A1684359C50A1(Local_112.f_211, iVar0))
									{
										unk_0x7EE425AE3317BA69(Local_112.f_179[iVar0 /*5*/], 6f, 1, 0, 0, 1);
										unk_0xD2A9C3F486236CC5(&(Local_112.f_211), iVar0);
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

int func_181()
{
	switch (Local_112.f_197)
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

int func_182()
{
	int iVar0;
	
	switch (Local_112.f_195)
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

void func_183()
{
	if (unk_0xB03A1684359C50A1(Local_112.f_1, 12))
	{
		return;
	}
	switch (Local_112.f_197)
	{
		case 0:
			Local_112.f_261 = unk_0x1701E0E6A11D6B65(31.1862f, -2594.657f, -50f, 68.0247f, -2551.956f, 50f, 1, 1, 1, 1);
			break;
		
		case 1:
			Local_112.f_261 = unk_0x1701E0E6A11D6B65(-1109.664f, -1297.61f, -50f, -1074.653f, -1223.725f, 50f, 1, 1, 1, 1);
			break;
		
		case 2:
			Local_112.f_261 = unk_0x1701E0E6A11D6B65(859.394f, -1082.382f, -50f, 914.3219f, -1008.526f, 50f, 1, 1, 1, 1);
			break;
		
		case 3:
			Local_112.f_261 = unk_0x1701E0E6A11D6B65(240.8218f, -1997.975f, -50f, 243.8696f, -1933.894f, 50f, 1, 1, 1, 1);
			break;
		
		case 4:
			Local_112.f_261 = unk_0x1701E0E6A11D6B65(-451.6602f, 171.9769f, -50f, -397.3188f, 222.9419f, 50f, 1, 1, 1, 1);
			break;
		
		case 5:
			Local_112.f_261 = unk_0x1701E0E6A11D6B65(-1059.294f, -2044.054f, -50f, -1011.896f, -1884.057f, 140.3546f, 1, 1, 1, 1);
			break;
		
		case 6:
			Local_112.f_261 = unk_0x1701E0E6A11D6B65(-1284.743f, -836.3273f, -50f, -1246.317f, -774.2995f, 50f, 1, 1, 1, 1);
			break;
		
		case 7:
			Local_112.f_261 = unk_0x1701E0E6A11D6B65(-924.5807f, -2758.87f, -50.9462f, -789.014f, -2731.518f, 112.94f, 1, 1, 1, 1);
			break;
		
		case 8:
			Local_112.f_261 = unk_0x1701E0E6A11D6B65(253.779f, -3039.713f, -50f, 308.8536f, -2986.068f, 50f, 1, 1, 1, 1);
			break;
		
		case 9:
			Local_112.f_261 = unk_0x1701E0E6A11D6B65(1515.631f, -2191.266f, -50f, 1597.112f, -2059.625f, 150f, 1, 1, 1, 1);
			break;
		
		case 10:
			Local_112.f_261 = unk_0x1701E0E6A11D6B65(-348.6945f, -2731.759f, -50f, -230.5551f, -2670.349f, 50.0003f, 1, 1, 1, 1);
			break;
		
		case 11:
			Local_112.f_261 = unk_0x1701E0E6A11D6B65(464.591f, -669.6168f, -50f, 598.1423f, -499.8008f, 50f, 1, 1, 1, 1);
			break;
		
		case 12:
			Local_112.f_261 = unk_0x1701E0E6A11D6B65(-564.2241f, -1836.488f, -50f, -498.0586f, -1768.227f, 50f, 1, 1, 1, 1);
			break;
		
		case 13:
			Local_112.f_261 = unk_0x1701E0E6A11D6B65(-357.3719f, -1413.902f, -50f, -287.5592f, -1320.63f, 50f, 1, 1, 1, 1);
			break;
		
		case 14:
			Local_112.f_261 = unk_0x1701E0E6A11D6B65(302.4282f, 333.8127f, -50f, 359.9608f, 361.1776f, 150f, 1, 1, 1, 1);
			break;
		
		case 15:
			Local_112.f_261 = unk_0x1701E0E6A11D6B65(883.963f, -1600.535f, -50f, 980.0828f, -1532.579f, 50f, 1, 1, 1, 1);
			break;
		
		case 16:
			Local_112.f_261 = unk_0x1701E0E6A11D6B65(691.8906f, -946.6288f, -50f, 792.8187f, -856.2645f, 50f, 1, 1, 1, 1);
			break;
		
		case 17:
			Local_112.f_261 = unk_0x1701E0E6A11D6B65(931.0925f, -2203.321f, -50f, 1054.687f, -2104.696f, 50f, 1, 1, 1, 1);
			break;
		
		case 18:
			Local_112.f_261 = unk_0x1701E0E6A11D6B65(909.5201f, -2548.777f, -50f, 1079.576f, -2480.221f, 50f, 1, 1, 1, 1);
			break;
		
		case 19:
			Local_112.f_261 = unk_0x1701E0E6A11D6B65(-285.6858f, 169.6409f, -50f, -231.663f, 249.5953f, 150f, 1, 1, 1, 1);
			break;
		
		case 20:
			Local_112.f_261 = unk_0x1701E0E6A11D6B65(490.689f, -2005.857f, -50f, 557.8708f, -1886.362f, 124.4746f, 1, 1, 1, 1);
			break;
		
		case 21:
			Local_112.f_261 = unk_0x1701E0E6A11D6B65(88.2044f, -2235.053f, -50f, 199.7525f, -2183.485f, 50f, 1, 1, 1, 1);
			break;
	}
	unk_0xD2A9C3F486236CC5(&(Local_112.f_1), 12);
}

void func_184()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (Local_112.f_223 == 0)
	{
		Var0 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0) };
		Var3 = { func_185() };
		fVar6 = unk_0x15EE504466B7BBD3(Var0, Var3, 0);
		if (fVar6 > 2500f)
		{
			Local_112.f_223 = Global_262145.f_15279;
		}
		else if (fVar6 > 2000f)
		{
			Local_112.f_223 = Global_262145.f_15280;
		}
		else if (fVar6 > 1500f)
		{
			Local_112.f_223 = Global_262145.f_15281;
		}
		else if (fVar6 > 1000f)
		{
			Local_112.f_223 = Global_262145.f_15282;
		}
		else
		{
			Local_112.f_223 = Global_262145.f_15283;
		}
	}
}

Vector3 func_185()
{
	switch (Local_112.f_197)
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

void func_186()
{
	int iVar0;
	
	if (!func_61(Local_112.f_103[0 /*5*/], 0f, 0f, 0f, 0))
	{
		return;
	}
	func_187();
	iVar0 = func_1058();
	switch (iVar0)
	{
		case 99:
			switch (Local_112.f_197)
			{
				case 0:
					Local_112.f_2[0 /*10*/].f_5 = { 81.7918f, -2554.375f, 5f };
					Local_112.f_2[0 /*10*/].f_8 = 268.2536f;
					break;
				
				case 1:
					Local_112.f_2[0 /*10*/].f_5 = { -1065.693f, -1275.444f, 4.9818f };
					Local_112.f_2[0 /*10*/].f_8 = 120.7465f;
					break;
				
				case 2:
					Local_112.f_2[0 /*10*/].f_5 = { 905.6629f, -1003.347f, 33.8966f };
					Local_112.f_2[0 /*10*/].f_8 = 271.0984f;
					break;
				
				case 3:
					Local_112.f_2[0 /*10*/].f_5 = { 231.9853f, -1935.578f, 22.4437f };
					Local_112.f_2[0 /*10*/].f_8 = 322.2929f;
					break;
				
				case 4:
					Local_112.f_2[0 /*10*/].f_5 = { -399.3887f, 230.6774f, 82.492f };
					Local_112.f_2[0 /*10*/].f_8 = 270.2787f;
					break;
				
				case 5:
					Local_112.f_2[0 /*10*/].f_5 = { -1086.639f, -2005.462f, 12.0063f };
					Local_112.f_2[0 /*10*/].f_8 = 11.8952f;
					break;
				
				case 6:
					Local_112.f_2[0 /*10*/].f_5 = { -1244.429f, -884.493f, 11.165f };
					Local_112.f_2[0 /*10*/].f_8 = 126.962f;
					break;
				
				case 7:
					Local_112.f_2[0 /*10*/].f_5 = { -835.0118f, -2630.999f, 12.9249f };
					Local_112.f_2[0 /*10*/].f_8 = 328.7649f;
					break;
				
				case 8:
					Local_112.f_2[0 /*10*/].f_5 = { 296.2087f, -3013.953f, 4.9212f };
					Local_112.f_2[0 /*10*/].f_8 = 0.24f;
					break;
				
				case 9:
					Local_112.f_2[0 /*10*/].f_5 = { 1413.249f, -1954.944f, 64.6238f };
					Local_112.f_2[0 /*10*/].f_8 = 326.5977f;
					break;
				
				case 10:
					Local_112.f_2[0 /*10*/].f_5 = { -318.5519f, -2671.678f, 5.0502f };
					Local_112.f_2[0 /*10*/].f_8 = 318.3914f;
					break;
				
				case 11:
					Local_112.f_2[0 /*10*/].f_5 = { 504.8237f, -711.9799f, 23.9127f };
					Local_112.f_2[0 /*10*/].f_8 = 177.966f;
					break;
				
				case 12:
					Local_112.f_2[0 /*10*/].f_5 = { -524.3798f, -1770.964f, 20.3834f };
					Local_112.f_2[0 /*10*/].f_8 = 245.3696f;
					break;
				
				case 13:
					Local_112.f_2[0 /*10*/].f_5 = { -286.5591f, -1359.238f, 30.3043f };
					Local_112.f_2[0 /*10*/].f_8 = 180.1492f;
					break;
				
				case 14:
					Local_112.f_2[0 /*10*/].f_5 = { 343.9299f, 321.1165f, 103.4987f };
					Local_112.f_2[0 /*10*/].f_8 = 75.8829f;
					break;
				
				case 15:
					Local_112.f_2[0 /*10*/].f_5 = { 974.6287f, -1540.746f, 29.4172f };
					Local_112.f_2[0 /*10*/].f_8 = 4.069f;
					break;
				
				case 16:
					Local_112.f_2[0 /*10*/].f_5 = { 777.0914f, -937.4927f, 24.7044f };
					Local_112.f_2[0 /*10*/].f_8 = 186.7581f;
					break;
				
				case 17:
					Local_112.f_2[0 /*10*/].f_5 = { 997.4642f, -2087.759f, 30.2136f };
					Local_112.f_2[0 /*10*/].f_8 = 275.8696f;
					break;
				
				case 18:
					Local_112.f_2[0 /*10*/].f_5 = { 987.9297f, -2461.676f, 27.3773f };
					Local_112.f_2[0 /*10*/].f_8 = 85.6201f;
					break;
				
				case 19:
					Local_112.f_2[0 /*10*/].f_5 = { -227.6549f, 188.3366f, 78.676f };
					Local_112.f_2[0 /*10*/].f_8 = 178.634f;
					break;
				
				case 20:
					Local_112.f_2[0 /*10*/].f_5 = { 460.4135f, -1932.892f, 23.6765f };
					Local_112.f_2[0 /*10*/].f_8 = 295.2699f;
					break;
				
				case 21:
					Local_112.f_2[0 /*10*/].f_5 = { 241.4945f, -2093.446f, 16.3114f };
					Local_112.f_2[0 /*10*/].f_8 = 225.7471f;
					break;
				
				default:
					Local_112.f_2[0 /*10*/].f_5 = { 974.6287f, -1540.746f, 29.4172f };
					Local_112.f_2[0 /*10*/].f_8 = 4.069f;
					break;
			}
			break;
		
		case 0:
			switch (Local_112.f_197)
			{
				case 0:
					Local_112.f_103[0 /*5*/] = { 48.6581f, -2562.141f, 5f };
					Local_112.f_103[0 /*5*/].f_3 = 18.2728f;
					Local_112.f_103[1 /*5*/] = { 51.6031f, -2571.123f, 5.0046f };
					Local_112.f_103[1 /*5*/].f_3 = 345.3663f;
					Local_112.f_103[2 /*5*/] = { 56.6838f, -2564.757f, 5.0641f };
					Local_112.f_103[2 /*5*/].f_3 = 55.4785f;
					Local_112.f_103[3 /*5*/] = { 62.9447f, -2585.068f, 5.0046f };
					Local_112.f_103[3 /*5*/].f_3 = 271.0223f;
					Local_112.f_103[4 /*5*/] = { 65.0669f, -2563.442f, 5f };
					Local_112.f_103[4 /*5*/].f_3 = 316.6382f;
					Local_112.f_103[5 /*5*/] = { 47.7942f, -2575.388f, 9.0407f };
					Local_112.f_103[5 /*5*/].f_3 = 37.4409f;
					Local_112.f_179[0 /*5*/] = { 61.478f, -2560.506f, 5f };
					Local_112.f_179[0 /*5*/].f_3 = 238.6826f;
					Local_112.f_179[1 /*5*/] = { 49.6015f, -2564.766f, 5.0046f };
					Local_112.f_179[1 /*5*/].f_3 = 154.2891f;
					break;
				
				case 1:
					Local_112.f_103[0 /*5*/] = { -1078.744f, -1271.7f, 9.5625f };
					Local_112.f_103[0 /*5*/].f_3 = 274.4253f;
					Local_112.f_103[1 /*5*/] = { -1087.233f, -1257.104f, 9.5625f };
					Local_112.f_103[1 /*5*/].f_3 = 354.2453f;
					Local_112.f_103[2 /*5*/] = { -1072.724f, -1267.841f, 4.9577f };
					Local_112.f_103[2 /*5*/].f_3 = 193.2412f;
					Local_112.f_103[3 /*5*/] = { -1085.99f, -1254.825f, 4.431f };
					Local_112.f_103[3 /*5*/].f_3 = 304.0791f;
					Local_112.f_103[4 /*5*/] = { -1081.952f, -1259.029f, 4.5607f };
					Local_112.f_103[4 /*5*/].f_3 = 251.1138f;
					Local_112.f_103[5 /*5*/] = { -1063.538f, -1257.842f, 5.0206f };
					Local_112.f_103[5 /*5*/].f_3 = 31.8546f;
					Local_112.f_179[0 /*5*/] = { -1063.267f, -1260.492f, 5.0582f };
					Local_112.f_179[0 /*5*/].f_3 = 134.6062f;
					Local_112.f_179[1 /*5*/] = { -1080.071f, -1255.526f, 4.4927f };
					Local_112.f_179[1 /*5*/].f_3 = 282.3716f;
					break;
				
				case 2:
					Local_112.f_103[0 /*5*/] = { 902.5689f, -1021.511f, 33.9664f };
					Local_112.f_103[0 /*5*/].f_3 = 337.3475f;
					Local_112.f_103[1 /*5*/] = { 894.0451f, -1020.726f, 33.9665f };
					Local_112.f_103[1 /*5*/].f_3 = 303.745f;
					Local_112.f_103[2 /*5*/] = { 901.3245f, -1033.82f, 33.9661f };
					Local_112.f_103[2 /*5*/].f_3 = 343.5762f;
					Local_112.f_103[3 /*5*/] = { 909.4354f, -1035.19f, 33.9662f };
					Local_112.f_103[3 /*5*/].f_3 = 175.276f;
					Local_112.f_103[4 /*5*/] = { 900.9361f, -1044.508f, 38.9808f };
					Local_112.f_103[4 /*5*/].f_3 = 150.7164f;
					Local_112.f_103[5 /*5*/] = { 894.3841f, -1032.681f, 38.9808f };
					Local_112.f_103[5 /*5*/].f_3 = 327.9728f;
					Local_112.f_179[0 /*5*/] = { 900.9302f, -1019.053f, 33.967f };
					Local_112.f_179[0 /*5*/].f_3 = 294.1935f;
					Local_112.f_179[1 /*5*/] = { 905.7681f, -1034.471f, 33.9661f };
					Local_112.f_179[1 /*5*/].f_3 = 222.0787f;
					break;
				
				case 3:
					Local_112.f_103[0 /*5*/] = { 241.6933f, -1941.756f, 22.6063f };
					Local_112.f_103[0 /*5*/].f_3 = 54.0685f;
					Local_112.f_103[1 /*5*/] = { 247.0794f, -1955.052f, 22.2033f };
					Local_112.f_103[1 /*5*/].f_3 = 350.0075f;
					Local_112.f_103[2 /*5*/] = { 260.179f, -1959.165f, 22.0967f };
					Local_112.f_103[2 /*5*/].f_3 = 284.5439f;
					Local_112.f_103[3 /*5*/] = { 258.183f, -1967.262f, 21.487f };
					Local_112.f_103[3 /*5*/].f_3 = 173.9707f;
					Local_112.f_103[4 /*5*/] = { 248.7987f, -1959.507f, 27.2402f };
					Local_112.f_103[4 /*5*/].f_3 = 231.9236f;
					Local_112.f_103[5 /*5*/] = { 233.8911f, -1946.98f, 27.2402f };
					Local_112.f_103[5 /*5*/].f_3 = 342.0352f;
					Local_112.f_179[0 /*5*/] = { 260.5989f, -1964.07f, 21.7532f };
					Local_112.f_179[0 /*5*/].f_3 = 147.0433f;
					Local_112.f_179[1 /*5*/] = { 241.5964f, -1944.464f, 22.3678f };
					Local_112.f_179[1 /*5*/].f_3 = 73.2698f;
					break;
				
				case 4:
					Local_112.f_103[0 /*5*/] = { -405.6343f, 182.3138f, 79.2232f };
					Local_112.f_103[0 /*5*/].f_3 = 306.9303f;
					Local_112.f_103[1 /*5*/] = { -420.0244f, 184.8413f, 79.6851f };
					Local_112.f_103[1 /*5*/].f_3 = 228.321f;
					Local_112.f_103[2 /*5*/] = { -428.4716f, 185.8607f, 79.7578f };
					Local_112.f_103[2 /*5*/].f_3 = 44.5389f;
					Local_112.f_103[3 /*5*/] = { -435.6789f, 179.3023f, 74.3213f };
					Local_112.f_103[3 /*5*/].f_3 = 85.0906f;
					Local_112.f_103[4 /*5*/] = { -399.305f, 190.302f, 80.5987f };
					Local_112.f_103[4 /*5*/].f_3 = 85.1506f;
					Local_112.f_103[5 /*5*/] = { -438.713f, 183.3993f, 74.2764f };
					Local_112.f_103[5 /*5*/].f_3 = 351.0685f;
					Local_112.f_179[0 /*5*/] = { -436.8526f, 183.3829f, 74.3109f };
					Local_112.f_179[0 /*5*/].f_3 = 7.2644f;
					Local_112.f_179[1 /*5*/] = { -405.3793f, 187.1801f, 79.9864f };
					Local_112.f_179[1 /*5*/].f_3 = 354.7918f;
					break;
				
				case 5:
					Local_112.f_103[0 /*5*/] = { -1069.206f, -2014.558f, 12.1616f };
					Local_112.f_103[0 /*5*/].f_3 = 201.0558f;
					Local_112.f_103[1 /*5*/] = { -1063.069f, -2014.715f, 12.1616f };
					Local_112.f_103[1 /*5*/].f_3 = 141.4469f;
					Local_112.f_103[2 /*5*/] = { -1067.427f, -2023.773f, 12.2027f };
					Local_112.f_103[2 /*5*/].f_3 = 197.023f;
					Local_112.f_103[3 /*5*/] = { -1060.439f, -2024.766f, 12.1616f };
					Local_112.f_103[3 /*5*/].f_3 = 152.4942f;
					Local_112.f_103[4 /*5*/] = { -1052.16f, -2022.239f, 12.1616f };
					Local_112.f_103[4 /*5*/].f_3 = 146.7409f;
					Local_112.f_103[5 /*5*/] = { -1051.755f, -2029.141f, 12.1616f };
					Local_112.f_103[5 /*5*/].f_3 = 82.1706f;
					Local_112.f_103[6 /*5*/] = { -1073.135f, -2011.029f, 12.6172f };
					Local_112.f_103[6 /*5*/].f_3 = 214.1918f;
					Local_112.f_103[7 /*5*/] = { -1071.441f, -2002.931f, 14.7905f };
					Local_112.f_103[7 /*5*/].f_3 = 187.3056f;
					Local_112.f_179[0 /*5*/] = { -1052.354f, -2025.611f, 12.1616f };
					Local_112.f_179[0 /*5*/].f_3 = 358.8676f;
					Local_112.f_179[1 /*5*/] = { -1066.611f, -2016.299f, 12.1616f };
					Local_112.f_179[1 /*5*/].f_3 = 280.333f;
					Local_112.f_179[2 /*5*/] = { -1063.965f, -2024.623f, 12.1831f };
					Local_112.f_179[2 /*5*/].f_3 = 269.67f;
					break;
				
				case 6:
					Local_112.f_103[0 /*5*/] = { -1280.076f, -805.8421f, 16.508f };
					Local_112.f_103[0 /*5*/].f_3 = 57.9953f;
					Local_112.f_103[1 /*5*/] = { -1286.231f, -811.6383f, 16.4521f };
					Local_112.f_103[1 /*5*/].f_3 = 35.4979f;
					Local_112.f_103[2 /*5*/] = { -1277.371f, -821.9402f, 16.1003f };
					Local_112.f_103[2 /*5*/].f_3 = 239.3392f;
					Local_112.f_103[3 /*5*/] = { -1267.488f, -824.3138f, 16.0992f };
					Local_112.f_103[3 /*5*/].f_3 = 144.6389f;
					Local_112.f_103[4 /*5*/] = { -1262.181f, -824.9617f, 16.0996f };
					Local_112.f_103[4 /*5*/].f_3 = 39.795f;
					Local_112.f_103[5 /*5*/] = { -1287.23f, -791.7753f, 16.5858f };
					Local_112.f_103[5 /*5*/].f_3 = 140.3937f;
					Local_112.f_179[0 /*5*/] = { -1273.327f, -823.6479f, 16.0992f };
					Local_112.f_179[0 /*5*/].f_3 = 254.419f;
					Local_112.f_179[1 /*5*/] = { -1285.171f, -807.566f, 16.5295f };
					Local_112.f_179[1 /*5*/].f_3 = 146.8347f;
					break;
				
				case 7:
					Local_112.f_103[0 /*5*/] = { -886.5272f, -2713.691f, 12.8285f };
					Local_112.f_103[0 /*5*/].f_3 = 330.9706f;
					Local_112.f_103[1 /*5*/] = { -876.2014f, -2718.661f, 12.9446f };
					Local_112.f_103[1 /*5*/].f_3 = 335.853f;
					Local_112.f_103[2 /*5*/] = { -882.2947f, -2732.553f, 12.8285f };
					Local_112.f_103[2 /*5*/].f_3 = 33.564f;
					Local_112.f_103[3 /*5*/] = { -884.4581f, -2724.486f, 12.8285f };
					Local_112.f_103[3 /*5*/].f_3 = 22.4268f;
					Local_112.f_103[4 /*5*/] = { -887.4197f, -2737.267f, 12.8285f };
					Local_112.f_103[4 /*5*/].f_3 = 356.0724f;
					Local_112.f_103[5 /*5*/] = { -894.7762f, -2736.815f, 12.8285f };
					Local_112.f_103[5 /*5*/].f_3 = 164.3784f;
					Local_112.f_103[6 /*5*/] = { -897.211f, -2750.013f, 12.9445f };
					Local_112.f_103[6 /*5*/].f_3 = 321.2128f;
					Local_112.f_103[7 /*5*/] = { -882.6691f, -2745.853f, 12.9362f };
					Local_112.f_103[7 /*5*/].f_3 = 64.3587f;
					Local_112.f_103[8 /*5*/] = { -907.6017f, -2749.353f, 12.9445f };
					Local_112.f_103[8 /*5*/].f_3 = 335.7514f;
					Local_112.f_103[9 /*5*/] = { -869.9126f, -2715.025f, 12.9446f };
					Local_112.f_103[9 /*5*/].f_3 = 8.2036f;
					Local_112.f_179[0 /*5*/] = { -882.8745f, -2713.687f, 12.8285f };
					Local_112.f_179[0 /*5*/].f_3 = 239.8798f;
					Local_112.f_179[1 /*5*/] = { -883.874f, -2728.786f, 12.8285f };
					Local_112.f_179[1 /*5*/].f_3 = 201.2263f;
					Local_112.f_179[2 /*5*/] = { -891.2535f, -2737.411f, 12.8285f };
					Local_112.f_179[2 /*5*/].f_3 = 92.5365f;
					break;
				
				case 8:
					Local_112.f_103[0 /*5*/] = { 258.4958f, -3019.888f, 4.7612f };
					Local_112.f_103[0 /*5*/].f_3 = 190.0675f;
					Local_112.f_103[1 /*5*/] = { 273.9505f, -3013.159f, 4.7016f };
					Local_112.f_103[1 /*5*/].f_3 = 68.4427f;
					Local_112.f_103[2 /*5*/] = { 273.0544f, -3016.924f, 4.7049f };
					Local_112.f_103[2 /*5*/].f_3 = 136.0059f;
					Local_112.f_103[3 /*5*/] = { 274.0455f, -2995.704f, 4.7009f };
					Local_112.f_103[3 /*5*/].f_3 = 145.0681f;
					Local_112.f_103[4 /*5*/] = { 277.7727f, -3020.606f, 10.5614f };
					Local_112.f_103[4 /*5*/].f_3 = 59.5107f;
					Local_112.f_103[5 /*5*/] = { 277.1279f, -3034.719f, 10.5614f };
					Local_112.f_103[5 /*5*/].f_3 = 113.9025f;
					Local_112.f_179[0 /*5*/] = { 266.3998f, -3022.136f, 4.7302f };
					Local_112.f_179[0 /*5*/].f_3 = 14.1592f;
					Local_112.f_179[1 /*5*/] = { 270.9944f, -2999.383f, 4.7128f };
					Local_112.f_179[1 /*5*/].f_3 = 145.314f;
					break;
				
				case 9:
					Local_112.f_103[0 /*5*/] = { 1546.335f, -2124.289f, 76.1382f };
					Local_112.f_103[0 /*5*/].f_3 = 17.7805f;
					Local_112.f_103[1 /*5*/] = { 1554.385f, -2125.222f, 76.3125f };
					Local_112.f_103[1 /*5*/].f_3 = 10.9741f;
					Local_112.f_103[2 /*5*/] = { 1558.224f, -2118.532f, 76.3765f };
					Local_112.f_103[2 /*5*/].f_3 = 15.6854f;
					Local_112.f_103[3 /*5*/] = { 1547.75f, -2143.708f, 76.4844f };
					Local_112.f_103[3 /*5*/].f_3 = 154.3238f;
					Local_112.f_103[4 /*5*/] = { 1552.05f, -2147.172f, 76.5383f };
					Local_112.f_103[4 /*5*/].f_3 = 147.9245f;
					Local_112.f_103[5 /*5*/] = { 1563.341f, -2138.102f, 76.5841f };
					Local_112.f_103[5 /*5*/].f_3 = 149.5447f;
					Local_112.f_103[6 /*5*/] = { 1561.244f, -2133.029f, 76.4828f };
					Local_112.f_103[6 /*5*/].f_3 = 76.8144f;
					Local_112.f_103[7 /*5*/] = { 1569.277f, -2130.628f, 77.3351f };
					Local_112.f_103[7 /*5*/].f_3 = 112.2364f;
					Local_112.f_179[0 /*5*/] = { 1550.601f, -2145.957f, 76.5271f };
					Local_112.f_179[0 /*5*/].f_3 = 296.1894f;
					Local_112.f_179[1 /*5*/] = { 1563.138f, -2135.943f, 76.5206f };
					Local_112.f_179[1 /*5*/].f_3 = 260.3118f;
					Local_112.f_179[2 /*5*/] = { 1550.38f, -2123.159f, 76.2165f };
					Local_112.f_179[2 /*5*/].f_3 = 235.2799f;
					break;
				
				case 10:
					Local_112.f_103[0 /*5*/] = { -307.7643f, -2684.145f, 5.0079f };
					Local_112.f_103[0 /*5*/].f_3 = 10.2057f;
					Local_112.f_103[1 /*5*/] = { -298.4151f, -2685.329f, 5.1595f };
					Local_112.f_103[1 /*5*/].f_3 = 34.7011f;
					Local_112.f_103[2 /*5*/] = { -309.9699f, -2692.377f, 5.1532f };
					Local_112.f_103[2 /*5*/].f_3 = 231.6414f;
					Local_112.f_103[3 /*5*/] = { -315.5637f, -2698.447f, 6.55f };
					Local_112.f_103[3 /*5*/].f_3 = 279.1803f;
					Local_112.f_103[4 /*5*/] = { -307.4792f, -2699.072f, 5.0003f };
					Local_112.f_103[4 /*5*/].f_3 = 2.2931f;
					Local_112.f_103[5 /*5*/] = { -304.3626f, -2700.868f, 5.0003f };
					Local_112.f_103[5 /*5*/].f_3 = 253.2487f;
					Local_112.f_103[6 /*5*/] = { -306.5913f, -2707.836f, 5.1532f };
					Local_112.f_103[6 /*5*/].f_3 = 313.0547f;
					Local_112.f_103[7 /*5*/] = { -303.2011f, -2711.413f, 5.0003f };
					Local_112.f_103[7 /*5*/].f_3 = 288.4283f;
					Local_112.f_179[0 /*5*/] = { -304.9815f, -2709.62f, 5.0003f };
					Local_112.f_179[0 /*5*/].f_3 = 135.5251f;
					Local_112.f_179[1 /*5*/] = { -305.7259f, -2696.407f, 5.0003f };
					Local_112.f_179[1 /*5*/].f_3 = 207.3978f;
					Local_112.f_179[2 /*5*/] = { -303.8944f, -2685.304f, 5.0003f };
					Local_112.f_179[2 /*5*/].f_3 = 255.2084f;
					break;
				
				case 11:
					Local_112.f_103[0 /*5*/] = { 518.3859f, -657.3704f, 23.7512f };
					Local_112.f_103[0 /*5*/].f_3 = 138.1634f;
					Local_112.f_103[1 /*5*/] = { 519.1835f, -649.9944f, 23.7512f };
					Local_112.f_103[1 /*5*/].f_3 = 17.4978f;
					Local_112.f_103[2 /*5*/] = { 495.9756f, -648.6689f, 31.7074f };
					Local_112.f_103[2 /*5*/].f_3 = 283.3737f;
					Local_112.f_103[3 /*5*/] = { 504.1287f, -641.0121f, 23.7369f };
					Local_112.f_103[3 /*5*/].f_3 = 303.125f;
					Local_112.f_103[4 /*5*/] = { 498.1048f, -638.1683f, 23.9727f };
					Local_112.f_103[4 /*5*/].f_3 = 289.9783f;
					Local_112.f_103[5 /*5*/] = { 499.259f, -630.4283f, 23.7512f };
					Local_112.f_103[5 /*5*/].f_3 = 194.1317f;
					Local_112.f_103[6 /*5*/] = { 508.6016f, -626.3681f, 23.7571f };
					Local_112.f_103[6 /*5*/].f_3 = 343.9152f;
					Local_112.f_103[7 /*5*/] = { 497.44f, -661.5337f, 27.617f };
					Local_112.f_103[7 /*5*/].f_3 = 199.5863f;
					Local_112.f_179[0 /*5*/] = { 517.3517f, -654.2748f, 23.7512f };
					Local_112.f_179[0 /*5*/].f_3 = 150.2542f;
					Local_112.f_179[1 /*5*/] = { 505.3363f, -645.2184f, 23.7512f };
					Local_112.f_179[1 /*5*/].f_3 = 23.9108f;
					Local_112.f_179[2 /*5*/] = { 508.3529f, -630.1296f, 23.7512f };
					Local_112.f_179[2 /*5*/].f_3 = 127.1383f;
					break;
				
				case 12:
					Local_112.f_103[0 /*5*/] = { -546.3519f, -1769.694f, 20.5902f };
					Local_112.f_103[0 /*5*/].f_3 = 277.4846f;
					Local_112.f_103[1 /*5*/] = { -541.7958f, -1776.458f, 20.5973f };
					Local_112.f_103[1 /*5*/].f_3 = 356.3462f;
					Local_112.f_103[2 /*5*/] = { -534.571f, -1772.565f, 20.4432f };
					Local_112.f_103[2 /*5*/].f_3 = 23.1421f;
					Local_112.f_103[3 /*5*/] = { -527.7571f, -1776.274f, 20.367f };
					Local_112.f_103[3 /*5*/].f_3 = 255.9772f;
					Local_112.f_103[4 /*5*/] = { -531.6744f, -1781.516f, 20.4994f };
					Local_112.f_103[4 /*5*/].f_3 = 295.9945f;
					Local_112.f_103[5 /*5*/] = { -555.2966f, -1799.182f, 21.5471f };
					Local_112.f_103[5 /*5*/].f_3 = 327.6154f;
					Local_112.f_103[6 /*5*/] = { -549.1064f, -1786.567f, 21.012f };
					Local_112.f_103[6 /*5*/].f_3 = 334.4709f;
					Local_112.f_103[7 /*5*/] = { -518.8139f, -1785.754f, 20.6425f };
					Local_112.f_103[7 /*5*/].f_3 = 206.6088f;
					Local_112.f_179[0 /*5*/] = { -556.8245f, -1795.383f, 21.5195f };
					Local_112.f_179[0 /*5*/].f_3 = 204.3955f;
					Local_112.f_179[1 /*5*/] = { -531.0875f, -1774.35f, 20.4042f };
					Local_112.f_179[1 /*5*/].f_3 = 77.9003f;
					Local_112.f_179[2 /*5*/] = { -548.1949f, -1767.868f, 20.6224f };
					Local_112.f_179[2 /*5*/].f_3 = 102.3641f;
					break;
				
				case 13:
					Local_112.f_103[0 /*5*/] = { -295.7925f, -1366.301f, 30.3114f };
					Local_112.f_103[0 /*5*/].f_3 = 200.7773f;
					Local_112.f_103[1 /*5*/] = { -294.7914f, -1361.439f, 30.3099f };
					Local_112.f_103[1 /*5*/].f_3 = 280.8006f;
					Local_112.f_103[2 /*5*/] = { -294.8237f, -1355.167f, 30.3168f };
					Local_112.f_103[2 /*5*/].f_3 = 223.8718f;
					Local_112.f_103[3 /*5*/] = { -291.4968f, -1352.201f, 30.2753f };
					Local_112.f_103[3 /*5*/].f_3 = 205.2611f;
					Local_112.f_103[4 /*5*/] = { -294.7546f, -1345.713f, 30.3095f };
					Local_112.f_103[4 /*5*/].f_3 = 323.2399f;
					Local_112.f_103[5 /*5*/] = { -291.2322f, -1339.262f, 30.2775f };
					Local_112.f_103[5 /*5*/].f_3 = 257.2056f;
					Local_112.f_103[6 /*5*/] = { -295.7278f, -1331.49f, 30.3084f };
					Local_112.f_103[6 /*5*/].f_3 = 75.2552f;
					Local_112.f_103[7 /*5*/] = { -293.849f, -1328.756f, 30.2182f };
					Local_112.f_103[7 /*5*/].f_3 = 328.9491f;
					Local_112.f_179[0 /*5*/] = { -292.8152f, -1332.385f, 30.1537f };
					Local_112.f_179[0 /*5*/].f_3 = 29.6972f;
					Local_112.f_179[1 /*5*/] = { -291.6872f, -1348.131f, 30.282f };
					Local_112.f_179[1 /*5*/].f_3 = 166.5207f;
					Local_112.f_179[2 /*5*/] = { -295.23f, -1364.201f, 30.3097f };
					Local_112.f_179[2 /*5*/].f_3 = 108.2429f;
					break;
				
				case 14:
					Local_112.f_103[0 /*5*/] = { 344.5797f, 336.7456f, 104.1594f };
					Local_112.f_103[0 /*5*/].f_3 = 346.2658f;
					Local_112.f_103[1 /*5*/] = { 342.3423f, 332.3715f, 103.7572f };
					Local_112.f_103[1 /*5*/].f_3 = 102.4295f;
					Local_112.f_103[2 /*5*/] = { 341.1604f, 310.392f, 103.4193f };
					Local_112.f_103[2 /*5*/].f_3 = 61.0026f;
					Local_112.f_103[3 /*5*/] = { 346.6567f, 309.6925f, 103.1454f };
					Local_112.f_103[3 /*5*/].f_3 = 257.871f;
					Local_112.f_103[4 /*5*/] = { 350.7382f, 328.2918f, 103.2696f };
					Local_112.f_103[4 /*5*/].f_3 = 117.8644f;
					Local_112.f_103[5 /*5*/] = { 354.2978f, 327.3369f, 103.0974f };
					Local_112.f_103[5 /*5*/].f_3 = 177.6163f;
					Local_112.f_103[6 /*5*/] = { 366.9816f, 326.3944f, 102.6179f };
					Local_112.f_103[6 /*5*/].f_3 = 201.951f;
					Local_112.f_103[7 /*5*/] = { 363.9641f, 322.1239f, 102.6943f };
					Local_112.f_103[7 /*5*/].f_3 = 243.2871f;
					Local_112.f_179[0 /*5*/] = { 343.0425f, 312.0052f, 103.3437f };
					Local_112.f_179[0 /*5*/].f_3 = 258.1888f;
					Local_112.f_179[1 /*5*/] = { 360.5493f, 322.6658f, 102.7946f };
					Local_112.f_179[1 /*5*/].f_3 = 286.3943f;
					Local_112.f_179[2 /*5*/] = { 343.9996f, 332.1288f, 103.7176f };
					Local_112.f_179[2 /*5*/].f_3 = 7.4532f;
					break;
				
				case 15:
					Local_112.f_103[0 /*5*/] = { 962.8411f, -1572.776f, 29.5579f };
					Local_112.f_103[0 /*5*/].f_3 = 198.1588f;
					Local_112.f_103[1 /*5*/] = { 958.9659f, -1572.392f, 29.6097f };
					Local_112.f_103[1 /*5*/].f_3 = 93.0019f;
					Local_112.f_103[2 /*5*/] = { 974.9329f, -1566.858f, 29.5658f };
					Local_112.f_103[2 /*5*/].f_3 = 171.6639f;
					Local_112.f_103[3 /*5*/] = { 977.1616f, -1563.333f, 29.6385f };
					Local_112.f_103[3 /*5*/].f_3 = 4.8635f;
					Local_112.f_103[4 /*5*/] = { 961.7667f, -1559.233f, 29.8001f };
					Local_112.f_103[4 /*5*/].f_3 = 241.449f;
					Local_112.f_103[5 /*5*/] = { 961.8814f, -1556.363f, 29.807f };
					Local_112.f_103[5 /*5*/].f_3 = 275.0858f;
					Local_112.f_103[6 /*5*/] = { 968.3688f, -1552.087f, 29.6598f };
					Local_112.f_103[6 /*5*/].f_3 = 176.2653f;
					Local_112.f_103[7 /*5*/] = { 965.8116f, -1547.661f, 29.6223f };
					Local_112.f_103[7 /*5*/].f_3 = 333.7709f;
					Local_112.f_103[8 /*5*/] = { 957.9225f, -1553.855f, 33.7974f };
					Local_112.f_103[8 /*5*/].f_3 = 308.3917f;
					Local_112.f_103[9 /*5*/] = { 957.7077f, -1566.216f, 33.7974f };
					Local_112.f_103[9 /*5*/].f_3 = 219.3558f;
					Local_112.f_179[0 /*5*/] = { 965.2025f, -1549.952f, 29.6078f };
					Local_112.f_179[0 /*5*/].f_3 = 41.5896f;
					Local_112.f_179[1 /*5*/] = { 974.5963f, -1564.88f, 29.5937f };
					Local_112.f_179[1 /*5*/].f_3 = 251.9554f;
					Local_112.f_179[2 /*5*/] = { 960.7539f, -1572.775f, 29.6016f };
					Local_112.f_179[2 /*5*/].f_3 = 322.5412f;
					break;
				
				case 16:
					Local_112.f_103[0 /*5*/] = { 764.532f, -917.6445f, 24.3477f };
					Local_112.f_103[0 /*5*/].f_3 = 200.6824f;
					Local_112.f_103[1 /*5*/] = { 757.4073f, -914.5825f, 24.2703f };
					Local_112.f_103[1 /*5*/].f_3 = 268.7243f;
					Local_112.f_103[2 /*5*/] = { 763.8087f, -928.9955f, 24.4204f };
					Local_112.f_103[2 /*5*/].f_3 = 359.3907f;
					Local_112.f_103[3 /*5*/] = { 762.9298f, -935.2947f, 24.4307f };
					Local_112.f_103[3 /*5*/].f_3 = 337.1544f;
					Local_112.f_103[4 /*5*/] = { 720.5742f, -888.9393f, 23.2796f };
					Local_112.f_103[4 /*5*/].f_3 = 301.5278f;
					Local_112.f_103[5 /*5*/] = { 763.72f, -888.6782f, 24.0956f };
					Local_112.f_103[5 /*5*/].f_3 = 196.7567f;
					Local_112.f_103[6 /*5*/] = { 763.0903f, -884.3161f, 23.9395f };
					Local_112.f_103[6 /*5*/].f_3 = 321.9963f;
					Local_112.f_103[7 /*5*/] = { 743.7985f, -872.6409f, 24.0443f };
					Local_112.f_103[7 /*5*/].f_3 = 251.8575f;
					Local_112.f_103[8 /*5*/] = { 741.907f, -881.8726f, 24.0428f };
					Local_112.f_103[8 /*5*/].f_3 = 268.2814f;
					Local_112.f_103[9 /*5*/] = { 752.8027f, -884.268f, 24.1054f };
					Local_112.f_103[9 /*5*/].f_3 = 282.8442f;
					Local_112.f_179[0 /*5*/] = { 763.8987f, -886.4079f, 24.0887f };
					Local_112.f_179[0 /*5*/].f_3 = 85.7335f;
					Local_112.f_179[1 /*5*/] = { 744.0313f, -877.4133f, 24.0497f };
					Local_112.f_179[1 /*5*/].f_3 = 152.0251f;
					Local_112.f_179[2 /*5*/] = { 763.1165f, -916.4111f, 24.3315f };
					Local_112.f_179[2 /*5*/].f_3 = 133.3755f;
					break;
				
				case 17:
					Local_112.f_103[0 /*5*/] = { 1003.053f, -2149.714f, 37.3448f };
					Local_112.f_103[0 /*5*/].f_3 = 182.3138f;
					Local_112.f_103[1 /*5*/] = { 1010.169f, -2135.276f, 29.5516f };
					Local_112.f_103[1 /*5*/].f_3 = 349.7712f;
					Local_112.f_103[2 /*5*/] = { 1011.614f, -2142.546f, 29.5516f };
					Local_112.f_103[2 /*5*/].f_3 = 2.675f;
					Local_112.f_103[3 /*5*/] = { 1018.429f, -2145.479f, 29.5994f };
					Local_112.f_103[3 /*5*/].f_3 = 263.1569f;
					Local_112.f_103[4 /*5*/] = { 1020.569f, -2148.083f, 30.5334f };
					Local_112.f_103[4 /*5*/].f_3 = 259.3002f;
					Local_112.f_103[5 /*5*/] = { 1011.448f, -2146.674f, 29.5516f };
					Local_112.f_103[5 /*5*/].f_3 = 139.4625f;
					Local_112.f_103[6 /*5*/] = { 1013.688f, -2150.349f, 30.5334f };
					Local_112.f_103[6 /*5*/].f_3 = 91.3056f;
					Local_112.f_103[7 /*5*/] = { 1011.563f, -2153.055f, 29.5516f };
					Local_112.f_103[7 /*5*/].f_3 = 44.0468f;
					Local_112.f_103[8 /*5*/] = { 1008.21f, -2156.475f, 29.5516f };
					Local_112.f_103[8 /*5*/].f_3 = 347.5848f;
					Local_112.f_103[9 /*5*/] = { 1007.324f, -2161.736f, 29.5516f };
					Local_112.f_103[9 /*5*/].f_3 = 172.5634f;
					Local_112.f_179[0 /*5*/] = { 1007.872f, -2138.394f, 29.5516f };
					Local_112.f_179[0 /*5*/].f_3 = 139.8753f;
					Local_112.f_179[1 /*5*/] = { 1013.982f, -2145.138f, 29.5516f };
					Local_112.f_179[1 /*5*/].f_3 = 259.47f;
					Local_112.f_179[2 /*5*/] = { 1008.767f, -2160.593f, 29.5516f };
					Local_112.f_179[2 /*5*/].f_3 = 200.1719f;
					break;
				
				case 18:
					Local_112.f_103[0 /*5*/] = { 1016.825f, -2498.752f, 27.3493f };
					Local_112.f_103[0 /*5*/].f_3 = 61.8849f;
					Local_112.f_103[1 /*5*/] = { 996.0087f, -2540.799f, 27.3073f };
					Local_112.f_103[1 /*5*/].f_3 = 3.7927f;
					Local_112.f_103[2 /*5*/] = { 1017.77f, -2493.367f, 27.3879f };
					Local_112.f_103[2 /*5*/].f_3 = 88.4198f;
					Local_112.f_103[3 /*5*/] = { 1012.715f, -2506.288f, 27.302f };
					Local_112.f_103[3 /*5*/].f_3 = 27.7498f;
					Local_112.f_103[4 /*5*/] = { 996.7639f, -2512.485f, 27.302f };
					Local_112.f_103[4 /*5*/].f_3 = 40.6136f;
					Local_112.f_103[5 /*5*/] = { 1015.915f, -2514.646f, 27.3035f };
					Local_112.f_103[5 /*5*/].f_3 = 56.6315f;
					Local_112.f_103[6 /*5*/] = { 1011.236f, -2524.491f, 27.3083f };
					Local_112.f_103[6 /*5*/].f_3 = 15.7729f;
					Local_112.f_103[7 /*5*/] = { 1006.954f, -2527.826f, 27.3043f };
					Local_112.f_103[7 /*5*/].f_3 = 101.1154f;
					Local_112.f_103[8 /*5*/] = { 999.3998f, -2523.023f, 27.302f };
					Local_112.f_103[8 /*5*/].f_3 = 354.1063f;
					Local_112.f_103[9 /*5*/] = { 994.9509f, -2527.176f, 27.302f };
					Local_112.f_103[9 /*5*/].f_3 = 125.381f;
					Local_112.f_179[0 /*5*/] = { 1012.638f, -2502.169f, 27.302f };
					Local_112.f_179[0 /*5*/].f_3 = 316.6046f;
					Local_112.f_179[1 /*5*/] = { 1013.986f, -2523.53f, 27.3055f };
					Local_112.f_179[1 /*5*/].f_3 = 240.5153f;
					Local_112.f_179[2 /*5*/] = { 996.9083f, -2523.664f, 27.302f };
					Local_112.f_179[2 /*5*/].f_3 = 164.8845f;
					break;
				
				case 19:
					Local_112.f_103[0 /*5*/] = { -266.5881f, 190.2768f, 84.3252f };
					Local_112.f_103[0 /*5*/].f_3 = 121.811f;
					Local_112.f_103[1 /*5*/] = { -271.8751f, 195.5884f, 84.6149f };
					Local_112.f_103[1 /*5*/].f_3 = 274.2204f;
					Local_112.f_103[2 /*5*/] = { -265.1418f, 201.9027f, 84.4806f };
					Local_112.f_103[2 /*5*/].f_3 = 181.8879f;
					Local_112.f_103[3 /*5*/] = { -261.9281f, 201.8817f, 84.2857f };
					Local_112.f_103[3 /*5*/].f_3 = 253.3033f;
					Local_112.f_103[4 /*5*/] = { -260.6143f, 186.3196f, 84.0337f };
					Local_112.f_103[4 /*5*/].f_3 = 4.0892f;
					Local_112.f_103[5 /*5*/] = { -255.9788f, 194.8307f, 83.7181f };
					Local_112.f_103[5 /*5*/].f_3 = 103.808f;
					Local_112.f_103[6 /*5*/] = { -252.9307f, 192.114f, 82.7736f };
					Local_112.f_103[6 /*5*/].f_3 = 262.768f;
					Local_112.f_103[7 /*5*/] = { -242.0461f, 190.5416f, 79.3582f };
					Local_112.f_103[7 /*5*/].f_3 = 200.5955f;
					Local_112.f_103[8 /*5*/] = { -241.619f, 202.893f, 82.2432f };
					Local_112.f_103[8 /*5*/].f_3 = 209.8882f;
					Local_112.f_103[9 /*5*/] = { -235.1685f, 202.9628f, 82.1429f };
					Local_112.f_103[9 /*5*/].f_3 = 338.4766f;
					Local_112.f_179[0 /*5*/] = { -237.4442f, 203.1399f, 82.1887f };
					Local_112.f_179[0 /*5*/].f_3 = 159.4961f;
					Local_112.f_179[1 /*5*/] = { -251.6716f, 193.9603f, 82.6293f };
					Local_112.f_179[1 /*5*/].f_3 = 87.8942f;
					Local_112.f_179[2 /*5*/] = { -266.8874f, 193.015f, 84.3937f };
					Local_112.f_179[2 /*5*/].f_3 = 65.6299f;
					break;
				
				case 20:
					Local_112.f_103[0 /*5*/] = { 534.4465f, -1941.385f, 30.2292f };
					Local_112.f_103[0 /*5*/].f_3 = 311.177f;
					Local_112.f_103[1 /*5*/] = { 558.1476f, -1927.909f, 23.7833f };
					Local_112.f_103[1 /*5*/].f_3 = 342.9807f;
					Local_112.f_103[2 /*5*/] = { 546.3505f, -1928.6f, 23.8219f };
					Local_112.f_103[2 /*5*/].f_3 = 311.7955f;
					Local_112.f_103[3 /*5*/] = { 547.1193f, -1947.377f, 23.9851f };
					Local_112.f_103[3 /*5*/].f_3 = 250.7509f;
					Local_112.f_103[4 /*5*/] = { 572.5258f, -1930.575f, 23.7494f };
					Local_112.f_103[4 /*5*/].f_3 = 346.9088f;
					Local_112.f_103[5 /*5*/] = { 539.3912f, -1923.777f, 23.9851f };
					Local_112.f_103[5 /*5*/].f_3 = 316.7842f;
					Local_112.f_103[6 /*5*/] = { 563.26f, -1920.301f, 23.7598f };
					Local_112.f_103[6 /*5*/].f_3 = 325.4008f;
					Local_112.f_103[7 /*5*/] = { 533.5303f, -1938.4f, 23.9851f };
					Local_112.f_103[7 /*5*/].f_3 = 309.4188f;
					Local_112.f_179[0 /*5*/] = { 548.8199f, -1930.106f, 23.8175f };
					Local_112.f_179[0 /*5*/].f_3 = 159.5928f;
					Local_112.f_179[1 /*5*/] = { 551.0328f, -1946.83f, 23.9851f };
					Local_112.f_179[1 /*5*/].f_3 = 84.4521f;
					Local_112.f_179[2 /*5*/] = { 561.5193f, -1927.552f, 23.7627f };
					Local_112.f_179[2 /*5*/].f_3 = 80.685f;
					break;
				
				case 21:
					Local_112.f_103[0 /*5*/] = { 110.1075f, -2228.434f, 5.1712f };
					Local_112.f_103[0 /*5*/].f_3 = 265.3441f;
					Local_112.f_103[1 /*5*/] = { 109.2036f, -2234.949f, 5.0633f };
					Local_112.f_103[1 /*5*/].f_3 = 271.2665f;
					Local_112.f_103[2 /*5*/] = { 92.4692f, -2228.285f, 5.0333f };
					Local_112.f_103[2 /*5*/].f_3 = 246.2804f;
					Local_112.f_103[3 /*5*/] = { 89.8902f, -2221.848f, 5.0483f };
					Local_112.f_103[3 /*5*/].f_3 = 77.5276f;
					Local_112.f_103[4 /*5*/] = { 119.3045f, -2188.549f, 4.9608f };
					Local_112.f_103[4 /*5*/].f_3 = 260.6882f;
					Local_112.f_103[5 /*5*/] = { 135.5824f, -2185.041f, 5.0909f };
					Local_112.f_103[5 /*5*/].f_3 = 248.253f;
					Local_112.f_103[6 /*5*/] = { 102.5402f, -2183.203f, 4.953f };
					Local_112.f_103[6 /*5*/].f_3 = 254.5778f;
					Local_112.f_103[7 /*5*/] = { 93.2016f, -2199.761f, 5.0431f };
					Local_112.f_103[7 /*5*/].f_3 = 178.9871f;
					Local_112.f_103[8 /*5*/] = { 95.4634f, -2193.558f, 5.0313f };
					Local_112.f_103[8 /*5*/].f_3 = 283.6666f;
					Local_112.f_103[9 /*5*/] = { 99.6321f, -2203.004f, 5.181f };
					Local_112.f_103[9 /*5*/].f_3 = 312.4828f;
					Local_112.f_179[0 /*5*/] = { 95.909f, -2196.279f, 5.0431f };
					Local_112.f_179[0 /*5*/].f_3 = 139.258f;
					Local_112.f_179[1 /*5*/] = { 120.4857f, -2191.816f, 5.0209f };
					Local_112.f_179[1 /*5*/].f_3 = 159.3418f;
					Local_112.f_179[2 /*5*/] = { 109.2645f, -2231.557f, 5.0333f };
					Local_112.f_179[2 /*5*/].f_3 = 62.2714f;
					break;
				
				default:
					Local_112.f_103[0 /*5*/] = { 968.5941f, -1557.899f, 29.6842f };
					Local_112.f_103[0 /*5*/].f_3 = 114.28f;
					Local_112.f_103[1 /*5*/] = { 965.9659f, -1571.214f, 29.5878f };
					Local_112.f_103[1 /*5*/].f_3 = 62.3577f;
					Local_112.f_103[2 /*5*/] = { 951.7892f, -1575.491f, 29.434f };
					Local_112.f_103[2 /*5*/].f_3 = 41.1548f;
					Local_112.f_103[3 /*5*/] = { 939.3943f, -1575.787f, 29.345f };
					Local_112.f_103[3 /*5*/].f_3 = 85.4368f;
					Local_112.f_103[4 /*5*/] = { 928.4522f, -1577.374f, 29.4239f };
					Local_112.f_103[4 /*5*/].f_3 = 336.8404f;
					Local_112.f_103[5 /*5*/] = { 921.6147f, -1573.96f, 29.6373f };
					Local_112.f_103[5 /*5*/].f_3 = 337.606f;
					Local_112.f_103[6 /*5*/] = { 920.303f, -1564.142f, 29.7523f };
					Local_112.f_103[6 /*5*/].f_3 = 52.3963f;
					Local_112.f_103[7 /*5*/] = { 918.5511f, -1552.143f, 29.7808f };
					Local_112.f_103[7 /*5*/].f_3 = 244.4705f;
					Local_112.f_103[8 /*5*/] = { 922.5096f, -1543.686f, 29.8074f };
					Local_112.f_103[8 /*5*/].f_3 = 8.0474f;
					Local_112.f_103[9 /*5*/] = { 910.6829f, -1547.757f, 29.6528f };
					Local_112.f_103[9 /*5*/].f_3 = 217.9933f;
					Local_112.f_103[10 /*5*/] = { 910.2541f, -1557.902f, 29.7034f };
					Local_112.f_103[10 /*5*/].f_3 = 237.5501f;
					Local_112.f_103[11 /*5*/] = { 909.9764f, -1572.07f, 29.791f };
					Local_112.f_103[11 /*5*/].f_3 = 287.341f;
					Local_112.f_179[0 /*5*/] = { 912.0468f, -1562.435f, 29.7522f };
					Local_112.f_179[0 /*5*/].f_3 = 305.0547f;
					Local_112.f_179[1 /*5*/] = { 903.5677f, -1559.325f, 29.6796f };
					Local_112.f_179[1 /*5*/].f_3 = 301.2764f;
					Local_112.f_179[2 /*5*/] = { 970.6998f, -1558.555f, 29.6813f };
					Local_112.f_179[2 /*5*/].f_3 = 43.0116f;
					break;
			}
			break;
	}
}

var func_187()
{
	if (Local_112.f_195 != -1)
	{
		return Local_112.f_195;
	}
	Local_112.f_195 = unk_0x61E9B3BFA06B017B(0, 3);
	return Local_112.f_195;
}

int func_188(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_189(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xF67B871D7588B9D9())
		{
			func_10(uParam0, 0, 0);
		}
	}
}

void func_190()
{
	char* sVar0;
	
	func_195();
	if (unk_0xB03A1684359C50A1(iLocal_736, 9))
	{
		return;
	}
	if (func_1060())
	{
		if (!unk_0xB03A1684359C50A1(iLocal_736, 0))
		{
			unk_0x9FC66CAE22E74E58("DisableFlightMusic", 1);
			unk_0x9FC66CAE22E74E58("WantedMusicDisabled", 1);
			unk_0xD2A9C3F486236CC5(&iLocal_736, 0);
		}
		if (!unk_0xB03A1684359C50A1(iLocal_736, 1))
		{
			if (!func_406())
			{
				sVar0 = "EXEC1_UNDER_ATTACK_START";
			}
			else
			{
				sVar0 = "EXEC1_DEFEND_FLEEING_START";
			}
			if (unk_0x9BEA833CAF67289C(sVar0))
			{
				unk_0xD2A9C3F486236CC5(&iLocal_736, 1);
			}
		}
		if (!func_406())
		{
			if (!unk_0xB03A1684359C50A1(iLocal_736, 3))
			{
				if (unk_0xB03A1684359C50A1(Local_112.f_1, 13))
				{
					if (unk_0x9BEA833CAF67289C("EXEC1_UNDER_ATTACK_ARRIVE_SMA"))
					{
						unk_0xD2A9C3F486236CC5(&iLocal_736, 3);
					}
				}
			}
		}
		if (!func_406())
		{
			if (unk_0xB03A1684359C50A1(Local_112.f_1, 1))
			{
				if (!unk_0xB03A1684359C50A1(iLocal_736, 4))
				{
					if (unk_0x9BEA833CAF67289C("EXEC1_UNDER_ATTACK_STOP"))
					{
						unk_0xD2A9C3F486236CC5(&iLocal_736, 4);
					}
				}
			}
		}
		if (!unk_0xB03A1684359C50A1(iLocal_736, 6))
		{
			if ((((unk_0xB03A1684359C50A1(Local_112.f_1, 3) || unk_0xB03A1684359C50A1(Local_112.f_1, 15)) || unk_0xB03A1684359C50A1(Local_112.f_1, 5)) || unk_0xB03A1684359C50A1(Local_112.f_1, 9)) || unk_0xB03A1684359C50A1(Local_112.f_1, 8))
			{
				if (unk_0x9BEA833CAF67289C("EXEC1_UNDER_ATTACK_FAIL"))
				{
					unk_0xD2A9C3F486236CC5(&iLocal_736, 6);
				}
			}
		}
		if (func_406())
		{
			if (!unk_0xB03A1684359C50A1(iLocal_736, 16))
			{
				if (Local_112.f_215 == -1)
				{
					if (func_191("DCONTRA_OBJ4"))
					{
						if (unk_0x9BEA833CAF67289C("EXEC1_DEFEND_FLEEING_RETRIEVE_SMA"))
						{
							unk_0xD2A9C3F486236CC5(&iLocal_736, 16);
						}
					}
				}
			}
			if (!unk_0xB03A1684359C50A1(iLocal_736, 17))
			{
				if (Local_112.f_215 != -1)
				{
					if (unk_0x9BEA833CAF67289C("EXEC1_DEFEND_FLEEING_RETURN_SMA"))
					{
						unk_0xD2A9C3F486236CC5(&iLocal_736, 17);
					}
				}
			}
			if (!unk_0xB03A1684359C50A1(iLocal_736, 18))
			{
				if (unk_0xB03A1684359C50A1(Local_112.f_1, 4))
				{
					if (unk_0x9BEA833CAF67289C("EXEC1_DEFEND_FLEEING_STOP"))
					{
						unk_0xD2A9C3F486236CC5(&iLocal_736, 18);
					}
				}
			}
		}
	}
}

int func_191(char* sParam0)
{
	if (unk_0xFAFFA408239A026B(sParam0))
	{
		return 0;
	}
	if (!func_194())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		if (unk_0xA49B74E0C954F146(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0xA49B74E0C954F146(sParam0) > 23)
	{
		return 0;
	}
	return func_192(sParam0);
}

bool func_192(char* sParam0)
{
	if (!func_194())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		return func_193(sParam0);
	}
	if (unk_0xFAFFA408239A026B(sParam0))
	{
		return 0;
	}
	return unk_0x6E987D62C8535B6E(sParam0) == unk_0x6E987D62C8535B6E(&(Global_1312576.f_12));
}

bool func_193(char* sParam0)
{
	if (!func_194())
	{
		return 0;
	}
	if (unk_0xFAFFA408239A026B(sParam0))
	{
		return 0;
	}
	return unk_0x6E987D62C8535B6E(sParam0) == unk_0x6E987D62C8535B6E(&(Global_1312576.f_16));
}

int func_194()
{
	if (Global_1312576 == 20)
	{
		return 0;
	}
	return 1;
}

void func_195()
{
	if (unk_0xB03A1684359C50A1(iLocal_736, 8))
	{
		if (unk_0xB03A1684359C50A1(iLocal_736, 9))
		{
			if (!unk_0xB03A1684359C50A1(iLocal_736, 10))
			{
				if (unk_0xB03A1684359C50A1(iLocal_736, 11))
				{
					if (!unk_0xB03A1684359C50A1(iLocal_736, 12))
					{
						unk_0x9A70D1B91A853FDD(1);
						unk_0x9FC66CAE22E74E58("AllowScoreAndRadio", 0);
					}
				}
				if (!unk_0xB03A1684359C50A1(iLocal_736, 15))
				{
					if (unk_0x9BEA833CAF67289C("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0xD2A9C3F486236CC5(&iLocal_736, 15);
					}
				}
				if (unk_0xB03A1684359C50A1(iLocal_736, 15))
				{
					if (!unk_0xB03A1684359C50A1(iLocal_736, 13))
					{
						if (unk_0x9BEA833CAF67289C("APT_FADE_IN_RADIO"))
						{
							unk_0xD2A9C3F486236CC5(&iLocal_736, 13);
						}
					}
					if (unk_0xB03A1684359C50A1(iLocal_736, 13))
					{
						unk_0xD2A9C3F486236CC5(&iLocal_736, 10);
					}
				}
			}
		}
	}
}

void func_196()
{
	struct<3> Var0;
	float fVar3;
	
	if (!func_1060() && !func_404())
	{
		return;
	}
	if (unk_0xB03A1684359C50A1(iLocal_735, 15))
	{
		if (!unk_0xB03A1684359C50A1(iLocal_735, 16))
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xA41FC657B4BB4148() == 0)
				{
					unk_0x945880A1F9FE9E4F(5);
					unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 2, 0);
					unk_0xE223A1A4864F355C(unk_0x8CFC7D6E1DA5D304(), 0);
					unk_0xD2A9C3F486236CC5(&iLocal_735, 16);
				}
			}
		}
		return;
	}
	if (func_406())
	{
		if (unk_0x5AD42783360AB57E(Local_112.f_2[0 /*10*/].f_2))
		{
			Var0 = { unk_0x761660F5CE986DC4(unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2), 0) };
		}
	}
	else
	{
		Var0 = { func_40() };
	}
	fVar3 = unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), Var0);
	if (!unk_0xB03A1684359C50A1(iLocal_735, 17))
	{
		if (fVar3 < 250000f)
		{
			unk_0x945880A1F9FE9E4F(0);
			unk_0xD2A9C3F486236CC5(&iLocal_735, 17);
		}
	}
	else if (fVar3 > 360000f)
	{
		unk_0x945880A1F9FE9E4F(5);
		unk_0x62148293B793073B(&iLocal_735, 17);
	}
}

void func_197()
{
	struct<3> Var0;
	
	if (!func_1060() && !func_404())
	{
		return;
	}
	if (func_406())
	{
		if (unk_0x5AD42783360AB57E(Local_112.f_2[0 /*10*/].f_2))
		{
			Var0 = { unk_0x761660F5CE986DC4(unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2), 0) };
		}
	}
	else
	{
		Var0 = { func_40() };
	}
	if (!func_61(Var0, 0f, 0f, 0f, 0))
	{
		func_198(169, Var0, &uLocal_850, 1140457472, 1144750080, 0);
	}
}

void func_198(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_250(unk_0x8CFC7D6E1DA5D304()) && !func_249(unk_0x8CFC7D6E1DA5D304())) && !unk_0xB03A1684359C50A1(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_1, 8)) && (func_248(unk_0x8CFC7D6E1DA5D304()) || func_247(unk_0x8CFC7D6E1DA5D304())))
	{
		return;
	}
	Global_1806998 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), Param1);
	func_245(iParam0, fVar0);
	if (unk_0xC83C302702976DCB() && unk_0xAF5EF4AF56129D79() == 15)
	{
		if (func_244(unk_0x8CFC7D6E1DA5D304()) || func_242(unk_0x8CFC7D6E1DA5D304()))
		{
			if (!unk_0x9C1773823317C064(1344549371))
			{
				unk_0xE155890DEF2A15C4(1344549371);
			}
		}
		else if (unk_0x9C1773823317C064(1344549371))
		{
			unk_0x96266716A280E8D7(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_241(unk_0x8CFC7D6E1DA5D304(), 21))
		{
			func_240(Param1, 1, 0);
		}
		if (!*uParam4 && func_1162(unk_0x8CFC7D6E1DA5D304(), 1, 1))
		{
			*uParam4 = 1;
			if (func_239(iParam0))
			{
				unk_0x8BB3FA32294185BB(func_238(iParam0));
				if (func_237(iParam0, -1))
				{
					unk_0x945880A1F9FE9E4F(0);
					if (unk_0xFF3D7D0CFD33DE47(unk_0x8CFC7D6E1DA5D304()) > 0)
					{
						unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 0, 1);
						unk_0xE223A1A4864F355C(unk_0x8CFC7D6E1DA5D304(), 1);
					}
					unk_0xD2A9C3F486236CC5(&(Global_1806998.f_3), 0);
				}
			}
			if (func_236(iParam0))
			{
				fVar1 = func_235(iParam0);
				if (fVar1 != 1f)
				{
					func_232(fVar1);
					unk_0xD2A9C3F486236CC5(&(Global_1806998.f_3), 1);
				}
			}
			if (!Global_2391045)
			{
				if (func_231(iParam0) && func_244(unk_0x8CFC7D6E1DA5D304()))
				{
					func_229(1);
					func_228(2);
				}
			}
			func_227(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_226(unk_0x8CFC7D6E1DA5D304(), 19))
			{
				func_225(19);
			}
		}
		if (*uParam4 && func_1162(unk_0x8CFC7D6E1DA5D304(), 1, 1))
		{
			*uParam4 = 0;
			if (func_239(iParam0))
			{
				if (unk_0xB03A1684359C50A1(Global_1806998.f_3, 0))
				{
					unk_0x8BB3FA32294185BB(1f);
					unk_0x945880A1F9FE9E4F(5);
					unk_0x62148293B793073B(&(Global_1806998.f_3), 0);
				}
			}
			if (func_236(iParam0))
			{
				func_224();
				unk_0x62148293B793073B(&(Global_1806998.f_3), 1);
			}
			if (iParam7 && !func_250(unk_0x8CFC7D6E1DA5D304()))
			{
				if (func_222(unk_0x8CFC7D6E1DA5D304()) != 152)
				{
					func_201();
				}
			}
			if (func_200(2))
			{
				func_229(0);
				func_199(2);
			}
		}
	}
}

void func_199(int iParam0)
{
	unk_0x62148293B793073B(&(Global_2512581.f_4878.f_34), iParam0);
}

bool func_200(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_2512581.f_4878.f_34, iParam0);
}

void func_201()
{
	unk_0x5AE102D61A343DFA(&(Global_2405047.f_24), &Global_2409093, 2);
	unk_0x5AE102D61A343DFA(&(Global_2405047.f_26), &Global_2409095, 18);
	func_220();
	func_204(1, 1, 0);
	func_202();
}

void func_202()
{
	func_203(0, 0);
}

void func_203(int iParam0, int iParam1)
{
	Global_2405047.f_22 = iParam0;
	Global_2405047.f_23 = iParam1;
}

void func_204(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x5AE102D61A343DFA(&(Global_2405047.f_44), &Global_2409113, 316);
	}
	else
	{
		Global_2405047.f_44 = { Global_2409113 };
		Global_2405047.f_44.f_49 = { Global_2409113.f_49 };
		Global_2405047.f_44.f_52 = Global_2409113.f_52;
		Global_2405047.f_44.f_53 = Global_2409113.f_53;
	}
	if (bParam0)
	{
		func_219();
	}
	if (!bParam2)
	{
		func_207(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_206(0);
	func_205();
}

void func_205()
{
	struct<6> Var0;
	
	if (Global_2405047.f_482.f_1 == unk_0xBCF9D020FA9C313D())
	{
		Global_2405047.f_482 = { Var0 };
	}
}

void func_206(bool bParam0)
{
	if (bParam0)
	{
		Global_2405047.f_685 = 0;
	}
	else
	{
		Global_2405047.f_685 = 1;
	}
}

void func_207(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_218())
		{
			func_217();
		}
		Global_2405047.f_686.f_515 = unk_0xBCF9D020FA9C313D();
		Global_2405047.f_686.f_504 = iParam1;
		Global_2405047.f_686.f_505 = iParam2;
		Global_2405047.f_686.f_506 = iParam10;
		func_215();
		func_211(8, 0, 0, 0, 0);
		Global_2405047.f_686.f_507 = iParam11;
		Global_2405047.f_686.f_510 = iParam3;
		Global_2405047.f_686.f_511 = iParam4;
		Global_2405047.f_686.f_508 = iParam5;
		Global_2405047.f_686.f_509 = iParam6;
		Global_2405047.f_686.f_512 = iParam7;
		Global_2405047.f_686.f_513 = iParam8;
		Global_2405047.f_686.f_514 = iParam9;
		Global_2405047.f_1719 = 1;
	}
	else
	{
		func_208();
	}
}

void func_208()
{
	if (func_218() && !func_210())
	{
		func_217();
	}
	if (func_210())
	{
		func_209();
	}
	else
	{
		func_215();
		func_211(0, 0, 0, 0, 0);
		Global_2405047.f_1719 = 0;
		Global_2405047.f_1718 = 0;
	}
}

void func_209()
{
	unk_0x5AE102D61A343DFA(&(Global_2405047.f_686), &(Global_2405047.f_1202), 516);
	Global_2405047.f_482 = { Global_2405047.f_488 };
	if (unk_0xBCF9D020FA9C313D() == Global_2405047.f_686.f_515)
	{
		Global_2405047.f_1718 = 0;
	}
}

int func_210()
{
	if ((Global_2405047.f_1718 && !unk_0xBCF9D020FA9C313D() == Global_2405047.f_1202.f_515) && unk_0x19B3A29FD53C54A6(Global_2405047.f_1202.f_515))
	{
		return 1;
	}
	return 0;
}

void func_211(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2436169.f_1777.f_690.f_16 != func_57())
	{
		if (unk_0xB03A1684359C50A1(Global_2422724[Global_2436169.f_1777.f_690.f_16 /*420*/].f_414, 0) && func_212())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412202 = 0;
	}
	Global_2405047.f_482 = iParam0;
	Global_2405047.f_482.f_1 = unk_0xBCF9D020FA9C313D();
	Global_2405047.f_482.f_2 = iParam1;
	Global_2405047.f_482.f_3 = iParam2;
	Global_2405047.f_482.f_4 = iParam3;
	Global_2405047.f_482.f_5 = iParam4;
}

int func_212()
{
	if (((func_222(unk_0x8CFC7D6E1DA5D304()) == 229 || func_222(unk_0x8CFC7D6E1DA5D304()) == 191) || func_214()) || func_213())
	{
		return 0;
	}
	return 1;
}

var func_213()
{
	return Global_1574303;
}

int func_214()
{
	if (Global_1646129 == 6)
	{
		return 1;
	}
	return 0;
}

void func_215()
{
	if (func_218() && !func_210())
	{
		func_217();
	}
	func_216();
	Global_2405047.f_686 = 0;
}

void func_216()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405047.f_686.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_217()
{
	if (func_210())
	{
		if (Global_2405047.f_686.f_515 == Global_2405047.f_1202.f_515)
		{
			return;
		}
	}
	if (!unk_0xBCF9D020FA9C313D() == Global_2405047.f_686.f_515)
	{
		unk_0x5AE102D61A343DFA(&(Global_2405047.f_1202), &(Global_2405047.f_686), 516);
		Global_2405047.f_488 = { Global_2405047.f_482 };
		Global_2405047.f_1718 = 1;
	}
}

int func_218()
{
	if ((Global_2405047.f_1719 && !unk_0xBCF9D020FA9C313D() == Global_2405047.f_686.f_515) && unk_0x19B3A29FD53C54A6(Global_2405047.f_686.f_515))
	{
		return 1;
	}
	return 0;
}

void func_219()
{
	unk_0x5AE102D61A343DFA(&(Global_2405047.f_360), &Global_2409429, 121);
}

void func_220()
{
	func_221();
	Global_2405047.f_2228 = 0;
}

void func_221()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405047.f_2229[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_222(int iParam0)
{
	if (func_223(iParam0, 0))
	{
		return Global_1627460[iParam0 /*530*/].f_11.f_33;
	}
	return -1;
}

int func_223(int iParam0, int iParam1)
{
	if (Global_1627460[iParam0 /*530*/].f_11.f_33 != -1 || (iParam1 && Global_1627460[iParam0 /*530*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_224()
{
	if (unk_0x19B3A29FD53C54A6(Global_2512581.f_4874))
	{
		if (!Global_2512581.f_4874 == unk_0xBCF9D020FA9C313D() && Global_2512581.f_4873 < 1f)
		{
			return;
		}
	}
	Global_2512581.f_4874 = -1;
	Global_2512581.f_4873 = 1f;
}

void func_225(int iParam0)
{
	unk_0x62148293B793073B(&(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_4), iParam0);
}

bool func_226(int iParam0, int iParam1)
{
	return unk_0xB03A1684359C50A1(Global_1627460[iParam0 /*530*/].f_11.f_4, iParam1);
}

void func_227(int iParam0)
{
	unk_0xD2A9C3F486236CC5(&(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_4), iParam0);
}

void func_228(int iParam0)
{
	unk_0xD2A9C3F486236CC5(&(Global_2512581.f_4878.f_34), iParam0);
}

void func_229(int iParam0)
{
	if (func_230() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_230()
{
	if ((((Global_979885 != -1 && Global_979885 != 33) && Global_979885 != 35) && Global_979885 != 37) && Global_979885 != 21)
	{
		return 1;
	}
	return 0;
}

int func_231(int iParam0)
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

void func_232(float fParam0)
{
	float fVar0;
	
	if (unk_0x6E987D62C8535B6E(unk_0xFCA64981FEF7C913()) == func_233())
	{
		return;
	}
	fVar0 = (Global_2512581.f_4873 - fParam0);
	if (unk_0x19B3A29FD53C54A6(Global_2512581.f_4874))
	{
		if (!Global_2512581.f_4874 == unk_0xBCF9D020FA9C313D() && unk_0x36E1A96E1D63ED91(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2512581.f_4873 = fParam0;
	Global_2512581.f_4874 = unk_0xBCF9D020FA9C313D();
}

int func_233()
{
	switch (func_234())
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

int func_234()
{
	return Global_25233;
}

float func_235(int iParam0)
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
		case 233:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_236(int iParam0)
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

int func_237(int iParam0, int iParam1)
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

float func_238(int iParam0)
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

int func_239(int iParam0)
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

void func_240(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2405047.f_44.f_49 = { Param0 };
	Global_2405047.f_44.f_52 = iParam3;
	Global_2405047.f_44.f_53 = iParam4;
}

bool func_241(int iParam0, int iParam1)
{
	return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_223, iParam1);
}

int func_242(int iParam0)
{
	if (func_243(iParam0))
	{
		if (func_244(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_243(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (Global_1627460[iParam0 /*530*/].f_11 != func_57())
		{
			return Global_1627460[iParam0 /*530*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_244(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_226(iParam0, 9);
	}
	return 0;
}

void func_245(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_246(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_1040();
	}
}

int func_246(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_11681;
		
		case 142:
			return Global_262145.f_11669;
		
		case 157:
			return Global_262145.f_11636;
		
		case 159:
			return Global_262145.f_11619;
		
		case 162:
			return Global_262145.f_11730;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_247(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_1627460[iVar0 /*530*/].f_1, 0);
	}
	return 0;
}

int func_248(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xB03A1684359C50A1(Global_1627460[iVar0 /*530*/].f_1, 7);
	}
	return 0;
}

bool func_249(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1627460[iParam0 /*530*/].f_1, 2);
}

int func_250(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627460[iVar0 /*530*/] != -1;
	}
	return 0;
}

void func_251()
{
	if (!func_406())
	{
		return;
	}
	if (!unk_0xB03A1684359C50A1(Local_112.f_1, 4))
	{
		return;
	}
	if (!unk_0xB03A1684359C50A1(Local_112.f_1, 18))
	{
		return;
	}
	if (unk_0xB03A1684359C50A1(Local_112.f_1, 17))
	{
		if (unk_0x5AD42783360AB57E(Local_112.f_2[0 /*10*/].f_2) && unk_0xA744F72A307A4982(Local_112.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_112.f_2[0 /*10*/].f_2))
			{
				if (!unk_0xBF0517F7142EEB5B(unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2)))
				{
					func_255(&(Local_112.f_2[0 /*10*/].f_2));
				}
			}
		}
		return;
	}
	if (unk_0xB03A1684359C50A1(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1, 15))
	{
		return;
	}
	if (unk_0x5AD42783360AB57E(Local_112.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_112.f_2[0 /*10*/].f_2))
		{
			if (func_252(Local_112.f_2[0 /*10*/].f_2))
			{
				if (unk_0xA744F72A307A4982(Local_112.f_2[0 /*10*/].f_2))
				{
					unk_0x84F9FDB788695F64(unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2), 1, 1);
					unk_0xD2A9C3F486236CC5(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1), 15);
				}
			}
		}
	}
}

int func_252(var uParam0)
{
	if (unk_0x9529AD13062F9853(uParam0))
	{
		return 1;
	}
	if (func_253(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_253(var uParam0)
{
	if (!unk_0xF67B871D7588B9D9())
	{
		return 0;
	}
	if (!unk_0x5AD42783360AB57E(uParam0))
	{
		return 0;
	}
	if (func_254(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_254(var uParam0)
{
	if (unk_0x49E68AAD93AADF10(uParam0))
	{
		unk_0xB9A913FE4C5AD71F(uParam0);
		return unk_0xA744F72A307A4982(uParam0);
	}
	return 0;
}

void func_255(var uParam0)
{
	var uVar0;
	
	if (unk_0x49E68AAD93AADF10(*uParam0))
	{
		if (!unk_0xA744F72A307A4982(*uParam0))
		{
		}
	}
	if (unk_0x5AD42783360AB57E(*uParam0))
	{
		uVar0 = unk_0x10427BA8138B7F3E(*uParam0);
		unk_0xD3CBE4DA6FF850F6(&uVar0);
	}
}

void func_256(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	
	if (func_394(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_392() || iParam2 == 26)
	{
		if (func_340(uParam1, iParam2, uParam3, Global_1574119, 0, func_390()))
		{
			func_339(1);
			if ((!func_337() && !func_335()) || unk_0xB03A1684359C50A1(Global_2512581.f_4553, 1))
			{
				if (func_334())
				{
					func_331();
				}
				else
				{
					unk_0x09EF2EB55114981C(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_330(1);
						Global_1574119 = 0;
						iVar54 = -1;
						if (Global_1574304 != 1)
						{
							func_329(uParam1);
							if (unk_0xB03A1684359C50A1(uParam3->f_33, 7))
							{
								unk_0x62148293B793073B(&(uParam3->f_33), 7);
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
								if (func_1162(unk_0x3479F6F64A48251C(iVar52), 0, 1))
								{
									iVar35 = unk_0x3479F6F64A48251C(iVar52);
									if (!func_34(iVar35, 0))
									{
										if ((func_328(iVar35) || Global_2422724[iVar35 /*420*/].f_251 != -1) || func_327(iVar35))
										{
											iVar44 = iVar35;
											if (func_243(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_324(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_321(unk_0x8CFC7D6E1DA5D304(), 0) && func_222(unk_0x8CFC7D6E1DA5D304()) != 188)
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_319())
							{
								if (func_1162(unk_0x3479F6F64A48251C(iVar52), 0, 1))
								{
									iVar35 = unk_0x3479F6F64A48251C(iVar52);
								}
								else
								{
									iVar35 = func_57();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*42*/])->f_1;
							}
							if ((func_318(iVar35) && func_314(iVar35, iParam2)) && func_1162(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1595681[iVar44 /*678*/].f_211.f_6;
								Var38 = { func_309(iVar35) };
								if (iVar35 == unk_0x8CFC7D6E1DA5D304())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x3E8AA4B2B7764D27(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_59(iVar35) };
								iVar37 = func_303(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x18EA682CBBDF668A(iVar37);
								}
								Global_1574119++;
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
									if (!func_319())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_298(&iVar43, &fVar45, (uParam0[iVar52 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_297(iParam5, 1, 0, 0), 16);
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
								iVar51 = func_291(iVar35, 0);
								if (bVar34)
								{
									if (func_290(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_289(iParam5))
								{
									func_288(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								else
								{
									func_288(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &Var57, (uParam0[iVar52 /*42*/])->f_40, iVar48, bParam6);
								}
								unk_0xD2A9C3F486236CC5(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x3479F6F64A48251C(iVar52);
							if (func_1162(iVar35, 0, 1) && !unk_0xB03A1684359C50A1(iVar49, iVar35))
							{
								iVar35 = unk_0x3479F6F64A48251C(iVar52);
							}
							else
							{
								iVar35 = func_57();
							}
							if (func_318(iVar35))
							{
								if (func_1162(unk_0x3479F6F64A48251C(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1595681[iVar44 /*678*/].f_211.f_6;
									Var38 = { func_309(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_59(iVar35) };
									iVar37 = func_303(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x18EA682CBBDF668A(iVar37);
									}
									Global_1574119++;
									iVar51 = func_291(iVar35, 1);
									if (bVar34)
									{
										if (func_290(iVar35, 1))
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
									func_269(iVar35, unk_0x3E8AA4B2B7764D27(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0xB03A1684359C50A1(uParam3->f_33, 11))
						{
							func_266(uParam3, uParam1);
						}
						func_9(&(uParam3->f_21));
						func_265();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xB03A1684359C50A1(uParam3->f_33, 7))
						{
							func_264(uParam3, uParam1);
							func_263(uParam1, 0, 1);
							unk_0xD2A9C3F486236CC5(&(uParam3->f_33), 7);
						}
						func_264(uParam3, uParam1);
						if (!unk_0xB03A1684359C50A1(uParam3->f_33, 11))
						{
							unk_0xD2A9C3F486236CC5(&(uParam3->f_33), 11);
						}
						if (func_259(uParam3))
						{
							Global_1574304 = 1;
						}
						func_257(uParam3);
						if (Global_1574304 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574304 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x5C716BBF766E1C70(*uParam1))
					{
						unk_0x31B38BBC4423BEAF(7);
						unk_0xC1C40A3B8772D9BA(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x31B38BBC4423BEAF(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_265();
			func_330(0);
			if (unk_0xB03A1684359C50A1(uParam3->f_33, 7))
			{
				unk_0x62148293B793073B(&(uParam3->f_33), 7);
			}
			if (unk_0xB03A1684359C50A1(uParam3->f_33, 10))
			{
				unk_0x62148293B793073B(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x3E233EDF605C23C0();
}

void func_257(var uParam0)
{
	if (!func_11(&(uParam0->f_21)))
	{
		func_10(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_9(&(uParam0->f_21));
		func_258(0);
	}
}

void func_258(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574304 != 2)
		{
			Global_1574304 = 2;
		}
	}
	else
	{
		switch (Global_1574304)
		{
			case 0:
				Global_1574304 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_259(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x3479F6F64A48251C(uParam0->f_37);
	if (iVar15 != func_57() && func_1162(iVar15, 0, 1))
	{
		Var2 = { func_59(iVar15) };
		iVar1 = func_262(uParam0, uParam0->f_37);
		if (func_261(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xE1CD263FD1D27228(&Var2))
					{
						if (unk_0x81EF0A52B5429304(&Var2))
						{
							iVar16 = 1;
							func_260(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x09D29DA94049CC42(&Var2))
					{
						iVar16 = 1;
						func_260(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xE1CD263FD1D27228(&Var2))
					{
						if (!unk_0x81EF0A52B5429304(&Var2))
						{
							iVar16 = 1;
							func_260(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_260(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xE1CD263FD1D27228(&Var2))
					{
						if (!unk_0x09D29DA94049CC42(&Var2))
						{
							iVar16 = 1;
							func_260(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x09D29DA94049CC42(&Var2))
					{
						iVar16 = 1;
						func_260(uParam0, iVar0, 0);
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

void func_260(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_261(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xBD82AF3F842B99A5(&uParam0, 13);
}

var func_262(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_263(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x76F4FB5EFF5BDED5(*uParam0, "COLLAPSE"))
	{
		unk_0xD6F1BD29497A51C8(iParam1);
		unk_0xE2B30EB9B14EEAB2();
	}
	if (iParam2 == 1)
	{
		if (unk_0x76F4FB5EFF5BDED5(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xE2B30EB9B14EEAB2();
		}
	}
}

void func_264(var uParam0, var uParam1)
{
	if (!unk_0xB03A1684359C50A1(uParam0->f_33, 10))
	{
		unk_0x76F4FB5EFF5BDED5(*uParam1, "SET_HIGHLIGHT");
		unk_0x22DD5585E00B80C3(uParam0->f_35);
		unk_0xE2B30EB9B14EEAB2();
		unk_0xD2A9C3F486236CC5(&(uParam0->f_33), 10);
	}
}

void func_265()
{
	if (Global_1574304 != 0)
	{
		Global_1574304 = 0;
	}
}

void func_266(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x3479F6F64A48251C(iVar0);
		if (iVar2 != func_57())
		{
			if (func_1162(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_268(uParam0->f_38[iVar0 /*2*/], 0);
					func_267(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1595681[iVar0 /*678*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_267(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		if (unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_ICON"))
		{
			unk_0x22DD5585E00B80C3(iParam1);
			unk_0x22DD5585E00B80C3(iParam2);
			if (iParam2 == 65)
			{
				unk_0x22DD5585E00B80C3(iParam3);
			}
			unk_0xE2B30EB9B14EEAB2();
		}
	}
}

int func_268(int iParam0, bool bParam1)
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

void func_269(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_287() && iParam4 < func_286())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574121)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574304 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x76F4FB5EFF5BDED5(*uParam2, sVar1))
		{
			unk_0x22DD5585E00B80C3(iParam4);
			if (unk_0xB03A1684359C50A1(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_285("");
			}
			else
			{
				unk_0x22DD5585E00B80C3(iParam10);
			}
			func_285(sParam1);
			unk_0x22DD5585E00B80C3(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_285("");
			}
			else
			{
				unk_0x22DD5585E00B80C3(65);
			}
			unk_0x22DD5585E00B80C3(-1);
			func_285("");
			if (uParam3->f_108 == 6)
			{
				func_285("");
			}
			else
			{
				func_285(&sParam5);
			}
			func_274(uParam3, iParam0);
			unk_0x27FAC60D3B3FE57C(sParam9);
			unk_0x27FAC60D3B3FE57C(sParam9);
			if (func_273(uParam3))
			{
				func_272("DPAD_FRIEND");
			}
			else if (func_271(uParam3))
			{
				func_272("DPAD_FRIEND");
			}
			else if (func_270(uParam3))
			{
				func_272("DPAD_CREW");
			}
			else
			{
				func_272("");
			}
			unk_0xE2B30EB9B14EEAB2();
		}
	}
}

bool func_270(var uParam0)
{
	return unk_0xB03A1684359C50A1(uParam0->f_33, 6);
}

bool func_271(var uParam0)
{
	return unk_0xB03A1684359C50A1(uParam0->f_33, 5);
}

void func_272(char* sParam0)
{
	unk_0x0ECBA72FAFCEBA59(sParam0);
	unk_0xC30401186AC91B01();
}

int func_273(var uParam0)
{
	if (func_271(uParam0) && func_270(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_274(var uParam0, int iParam1)
{
	if (func_284(iParam1))
	{
		unk_0x22DD5585E00B80C3(121);
	}
	else if (func_278(iParam1))
	{
		unk_0x22DD5585E00B80C3(122);
	}
	else if (((unk_0xB03A1684359C50A1(Global_1646129.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xB03A1684359C50A1(Global_2422724[iParam1 /*420*/].f_419, 0))
	{
		unk_0x22DD5585E00B80C3(123);
	}
	else
	{
		if (func_275())
		{
			uParam0->f_36 = 0;
		}
		unk_0xD6F1BD29497A51C8(uParam0->f_36);
	}
}

int func_275()
{
	if (unk_0x13C2BC1B63ABBCD5())
	{
		if (func_276() || func_158())
		{
			return 1;
		}
	}
	return 0;
}

bool func_276()
{
	if (unk_0x13C2BC1B63ABBCD5())
	{
		return func_158();
	}
	return func_277(Global_1646129.f_116948);
}

int func_277(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4977[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_278(int iParam0)
{
	if ((func_1162(iParam0, 0, 1) && func_282()) && func_279(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_279(int iParam0, bool bParam1)
{
	return func_280(iParam0, bParam1, 1);
}

int func_280(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_281(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1627460[iParam0 /*530*/].f_11;
	if (iVar0 != func_57() && Global_1627460[iVar0 /*530*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_281(int iParam0, int iParam1)
{
	if (iParam0 != func_57())
	{
		if (Global_1627460[iParam0 /*530*/].f_11 != func_57())
		{
			if (Global_1627460[iParam0 /*530*/].f_11 == iParam0 && Global_1627460[iParam0 /*530*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_282()
{
	if (func_250(unk_0x8CFC7D6E1DA5D304()) || func_283())
	{
		return 0;
	}
	return 1;
}

int func_283()
{
	switch (func_222(unk_0x8CFC7D6E1DA5D304()))
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

int func_284(int iParam0)
{
	if (func_275())
	{
		if (func_1162(iParam0, 0, 1))
		{
			return func_243(iParam0);
		}
	}
	if ((func_1162(iParam0, 0, 1) && func_282()) && func_281(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_285(char* sParam0)
{
	unk_0xC34A54899652DAAF(sParam0);
}

int func_286()
{
	int iVar0;
	
	if (Global_1574121)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_287()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574121)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_288(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_287() && iParam3 < func_286())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574121)
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
		if (Global_1574304 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x5C716BBF766E1C70(*uParam1))
		{
			if (unk_0x76F4FB5EFF5BDED5(*uParam1, sVar1))
			{
				unk_0x22DD5585E00B80C3(iParam3);
				if (unk_0xB03A1684359C50A1(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_285("");
				}
				else
				{
					unk_0x22DD5585E00B80C3(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0xFAFFA408239A026B(sParam16))
				{
					func_272(sParam16);
				}
				else
				{
					func_285(&(uParam2->f_1));
				}
				unk_0x22DD5585E00B80C3(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_285("");
				}
				else
				{
					unk_0x22DD5585E00B80C3(65);
				}
				if (iParam12 == 1)
				{
					unk_0x22DD5585E00B80C3(iVar0);
				}
				else
				{
					unk_0x22DD5585E00B80C3(-1);
				}
				if (func_319())
				{
					func_285("");
				}
				else if (uParam2->f_108 == 6 && !unk_0xFAFFA408239A026B(sParam16))
				{
					unk_0x0ECBA72FAFCEBA59("FM_AE_ONE_INT");
					unk_0xBEFD1ED9B6BE5127(sParam16);
					unk_0x3A12001DBF78DC62(iParam17);
					unk_0xC30401186AC91B01();
				}
				else if (uParam2->f_108 == 5 && !unk_0xFAFFA408239A026B(sParam16))
				{
					unk_0x0ECBA72FAFCEBA59("FM_AE_ONE_INT");
					unk_0xBEFD1ED9B6BE5127(sParam16);
					unk_0x3A12001DBF78DC62(iParam17);
					unk_0xC30401186AC91B01();
				}
				else if (uParam2->f_108 == 7 && !unk_0xFAFFA408239A026B(sParam16))
				{
					unk_0x0ECBA72FAFCEBA59("FM_AE_TWO_INT");
					unk_0xBEFD1ED9B6BE5127(sParam16);
					unk_0x3A12001DBF78DC62(iParam17);
					unk_0xC30401186AC91B01();
				}
				else if (uParam2->f_108 == 8 && !unk_0xFAFFA408239A026B(&(uParam2->f_104)))
				{
					unk_0x0ECBA72FAFCEBA59("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0xEF512794542297CA(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x3A12001DBF78DC62(iParam10);
					}
					unk_0xBEFD1ED9B6BE5127(&(uParam2->f_104));
					unk_0xC30401186AC91B01();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x0ECBA72FAFCEBA59("FM_AE_CASH");
					unk_0x7F0713FD21BA55C9(iParam10, 1);
					unk_0xC30401186AC91B01();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0x0ECBA72FAFCEBA59("FM_AE_CASH");
						unk_0x7F0713FD21BA55C9(iParam10, 1);
						unk_0xC30401186AC91B01();
					}
					else
					{
						unk_0x0ECBA72FAFCEBA59("FM_NG_CASH");
						unk_0x7F0713FD21BA55C9(iParam10, 1);
						unk_0xC30401186AC91B01();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0xFAFFA408239A026B(&(uParam2->f_104)))
					{
						func_272(&(uParam2->f_104));
					}
					else
					{
						func_285("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x0ECBA72FAFCEBA59("STRING");
					unk_0x1635DC214B2BB352(iParam14, 6);
					unk_0xC30401186AC91B01();
				}
				else if (fParam13 != -1f)
				{
					unk_0x0ECBA72FAFCEBA59("NUMBER");
					unk_0xEF512794542297CA(fParam13, 1);
					unk_0xC30401186AC91B01();
				}
				else if (iParam10 != -1)
				{
					unk_0x22DD5585E00B80C3(iParam10);
				}
				else
				{
					func_285("");
				}
				if (uParam2->f_108 == 6)
				{
					func_285("");
				}
				else
				{
					func_285(&sParam4);
				}
				func_274(uParam2, iParam0);
				if (iParam12 == 1 || unk_0xFAFFA408239A026B(sParam8))
				{
					func_285("");
					func_285("");
				}
				else
				{
					unk_0x27FAC60D3B3FE57C(sParam8);
					unk_0x27FAC60D3B3FE57C(sParam8);
				}
				if (func_273(uParam2))
				{
					func_272("DPAD_FRIEND");
				}
				else if (func_271(uParam2))
				{
					func_272("DPAD_FRIEND");
				}
				else if (func_270(uParam2))
				{
					func_272("DPAD_CREW");
				}
				else
				{
					func_272("");
				}
				unk_0xE2B30EB9B14EEAB2();
			}
		}
	}
}

int func_289(int iParam0)
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

bool func_290(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_243(iParam0))
		{
			return 0;
		}
	}
	return Global_1627460[iParam0 /*530*/].f_11 != func_57();
}

int func_291(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_250(iParam0)) && !func_296(iParam0))
	{
		iVar0 = func_295();
	}
	iVar1 = func_294(iParam0);
	if (!iVar1 == -1)
	{
		return func_292(iVar1);
	}
	return iVar0;
}

int func_292(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_293(iParam0);
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

var func_293(int iParam0)
{
	return Global_2416788.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_294(int iParam0)
{
	if (!iParam0 == func_57())
	{
		if (func_290(iParam0, 1))
		{
			return Global_2416788.f_2071.f_11[func_58(iParam0)];
		}
	}
	return -1;
}

int func_295()
{
	return 21;
}

bool func_296(int iParam0)
{
	return func_226(iParam0, 20);
}

char* func_297(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0x46DAE6F28FA8E185())
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
			if (unk_0x46DAE6F28FA8E185())
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

int func_298(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_302(iParam3))
	{
		*fParam1 = (func_299(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_289(iParam3))
	{
		*fParam1 = (func_299(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_299(int iParam0, int iParam1)
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
			if (unk_0x46DAE6F28FA8E185())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_301(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x46DAE6F28FA8E185())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_300(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_300(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_301(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_302(int iParam0)
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

int func_303(int iParam0)
{
	int iVar0;
	
	iVar0 = func_306(iParam0);
	if (iVar0 == -1)
	{
		func_304(iParam0, 1);
		return 0;
	}
	Global_1368675[iVar0 /*5*/].f_4 = 1;
	return Global_1368675[iVar0 /*5*/].f_2;
}

void func_304(int iParam0, bool bParam1)
{
	if (!func_1162(iParam0, 0, 1))
	{
		return;
	}
	if (func_306(iParam0) != -1)
	{
		return;
	}
	if (Global_1368838)
	{
		if (iParam0 == Global_1368838.f_1)
		{
			return;
		}
	}
	if (func_305(iParam0))
	{
		return;
	}
	if (Global_1368876 >= 32)
	{
		return;
	}
	Global_1368843[Global_1368876] = iParam0;
	Global_1368876++;
	if (bParam1)
	{
	}
}

int func_305(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1368876)
	{
		if (Global_1368843[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_306(int iParam0)
{
	int iVar0;
	
	if (!func_1162(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1368836 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1368836)
	{
		if (Global_1368675[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x474A54D9A9BD0D31(Global_1368675[iVar0 /*5*/].f_2) && unk_0x8A770CC4CC05DE07(Global_1368675[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_307(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_307(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1368836)
	{
		return;
	}
	if (unk_0x474A54D9A9BD0D31(Global_1368675[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1368675[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x18EA682CBBDF668A(Global_1368675[iParam0 /*5*/].f_2), 64);
			unk_0xBD17B901DFB6DC31(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x60E35C29E0313635(Global_1368675[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1368836)
	{
		Global_1368675[iVar32 /*5*/] = { Global_1368675[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_308(&(Global_1368675[iVar32 /*5*/]));
	Global_1368836 = (Global_1368836 - 1);
}

void func_308(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_57();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x44243F2E2F58B8E3())
	{
		uParam0->f_3 = unk_0xE92FCF3C05C2EF1D();
	}
}

struct<4> func_309(int iParam0)
{
	struct<4> Var0;
	
	if (func_1162(iParam0, 0, 1))
	{
		Global_2491936 = { func_59(iParam0) };
		if (unk_0x929A0C5D6A986B4F())
		{
			if (func_261(Global_2491936))
			{
				if (!unk_0x3F46CD19F4C43D2A(&Global_2491936))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xC8543F17BC4C0591(0))
		{
			return Var0;
		}
		if (func_313(&Global_2491936))
		{
			Global_2491866 = { func_311(iParam0) };
			func_310(&Global_2491866, &Var0);
		}
	}
	return Var0;
}

void func_310(var uParam0, var uParam1)
{
	unk_0x14FE7512F6617D5D(uParam0, 35, uParam1);
}

struct<35> func_311(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_312(iParam0))
	{
		return Global_1312886[unk_0x8CFC7D6E1DA5D304() /*35*/];
	}
	Var0 = { func_59(iParam0) };
	unk_0x4AEF279CFD4A57C6(&Var13, 35, &Var0);
	return Var13;
}

int func_312(int iParam0)
{
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		return 1;
	}
	return 0;
}

int func_313(var uParam0)
{
	if (unk_0x60D6796E6B9FD3DB())
	{
		if (unk_0xE906D9FB40E35957() && unk_0x9FDA5C5DFB3FE364(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_314(int iParam0, int iParam1)
{
	if (iParam1 == 25)
	{
		if ((func_249(iParam0) || func_317(iParam0)) || func_316(iParam0))
		{
			return 0;
		}
	}
	if (!func_315(iParam0))
	{
		return 0;
	}
	if ((!func_328(iParam0) && Global_2422724[iParam0 /*420*/].f_251 == -1) && !func_327(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_315(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_142, 22);
}

bool func_316(int iParam0)
{
	if (func_249(iParam0))
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_1627460[iParam0 /*530*/].f_1, 8);
}

int func_317(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xB03A1684359C50A1(Global_1627460[iParam0 /*530*/].f_1, 10) || unk_0xB03A1684359C50A1(Global_1627460[iParam0 /*530*/].f_1, 9));
	}
	return 0;
}

int func_318(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_57())
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
		if (unk_0xB03A1684359C50A1(Global_1595681[iVar0 /*678*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_319()
{
	switch (func_222(unk_0x8CFC7D6E1DA5D304()))
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
	switch (func_320(unk_0x8CFC7D6E1DA5D304()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_296(unk_0x8CFC7D6E1DA5D304()))
	{
		switch (func_222(unk_0x8CFC7D6E1DA5D304()))
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

int func_320(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627460[iVar0 /*530*/];
	}
	return -1;
}

int func_321(int iParam0, int iParam1)
{
	if (Global_1627460[iParam0 /*530*/].f_11.f_33 != -1 && func_322(Global_1627460[iParam0 /*530*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1627460[iParam0 /*530*/].f_11.f_32 != -1)
	{
		if (func_322(Global_1627460[iParam0 /*530*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_322(int iParam0)
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
	return func_323(iParam0, 0);
	return 0;
}

int func_323(int iParam0, int iParam1)
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

void func_324(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1162(unk_0x3479F6F64A48251C(iVar0), 0, 1))
		{
			iVar1 = unk_0x3479F6F64A48251C(iVar0);
			if (!func_34(iVar1, 0))
			{
				if ((func_328(iVar1) || Global_2422724[iVar1 /*420*/].f_251 != -1) || func_327(iVar1))
				{
					if (func_325(iVar1, iParam1, 0))
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

int func_325(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_57())
	{
		if (!bParam2)
		{
			if (func_326(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1627460[iParam0 /*530*/].f_11 != func_57())
		{
			return iParam1 == Global_1627460[iParam0 /*530*/].f_11;
		}
	}
	return 0;
}

int func_326(int iParam0, int iParam1)
{
	if (iParam1 != func_57())
	{
		if (iParam0 != func_57())
		{
			if (Global_1627460[iParam0 /*530*/].f_11 != func_57())
			{
				if (Global_1627460[iParam0 /*530*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_327(int iParam0)
{
	return Global_1595681[iParam0 /*678*/].f_196 != 0;
}

int func_328(int iParam0)
{
	if (func_1162(iParam0, 0, 1))
	{
		if (func_1162(unk_0x8CFC7D6E1DA5D304(), 0, 1))
		{
			if (unk_0xE392CC8A2777F819(iParam0, unk_0x8CFC7D6E1DA5D304()) || func_222(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_329(var uParam0)
{
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x22DD5585E00B80C3(0);
		unk_0xE2B30EB9B14EEAB2();
	}
}

void func_330(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1357210.f_2 == 0)
		{
			Global_1357210.f_2 = 1;
		}
	}
	else if (Global_1357210.f_2 == 1)
	{
		Global_1357210.f_2 = 0;
	}
}

void func_331()
{
	if (unk_0xB03A1684359C50A1(Global_2512581.f_4553, 1))
	{
		if (func_333())
		{
			func_332();
		}
	}
}

void func_332()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2436169.f_2591[iVar0 /*79*/].f_2 != 0)
		{
			Global_2436169.f_2591[iVar0 /*79*/].f_2 = 5;
			unk_0xD2A9C3F486236CC5(&(Global_2436169.f_2591[iVar0 /*79*/].f_68), 0);
		}
		iVar0++;
	}
}

bool func_333()
{
	return Global_2436169.f_2591[0 /*79*/].f_1 != 0;
}

int func_334()
{
	if (unk_0xB03A1684359C50A1(Global_2512581.f_4553, 0) && func_333())
	{
		return 1;
	}
	if (unk_0xB03A1684359C50A1(Global_2512581.f_4553, 1) && func_333())
	{
		return 1;
	}
	return 0;
}

int func_335()
{
	if (func_333())
	{
		if (func_336(Global_2436169.f_2591[0 /*79*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_336(int iParam0)
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

int func_337()
{
	if (func_333())
	{
		if (func_338(Global_2436169.f_2591[0 /*79*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_338(int iParam0)
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

void func_339(int iParam0)
{
	if (Global_1357210.f_1 != Global_1357210)
	{
		Global_1357210.f_1 = Global_1357210;
	}
	if (Global_1357210 != iParam0)
	{
		Global_1357210 = iParam0;
	}
}

int func_340(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_389(iParam1);
	if (iParam1 == 19)
	{
		bVar5 = true;
	}
	fVar7 = func_388();
	if (iParam1 == 25 || iParam1 == 26)
	{
		if (func_387())
		{
			if (func_386() > 0 && Global_1574121)
			{
				unk_0xA92183CDC960EFB2();
				unk_0x882C4E3F687152C5(fVar7);
				unk_0xE05212008FE9A018(18);
				if (unk_0x622E10ED992CEB95())
				{
					unk_0xCA68B0AB8A5AF85A();
				}
				unk_0xE05212008FE9A018(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_374())
		{
			func_373(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xB03A1684359C50A1(Global_2512581.f_4556, 26))
	{
		func_373(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_11(&(uParam2->f_19)))
	{
		if (func_386() == 1)
		{
			func_372(bVar6, uParam0, 0);
			func_10(&(uParam2->f_19), 0, 0);
			func_373(uParam0, uParam2, 0);
		}
	}
	if (func_11(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x622E10ED992CEB95())
		{
			unk_0xCA68B0AB8A5AF85A();
		}
		unk_0xE05212008FE9A018(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_386() == 0 && !bParam5))
		{
			func_373(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_371();
				if (iParam1 == 25 || iParam1 == 26)
				{
					unk_0xA92183CDC960EFB2();
				}
				unk_0xE05212008FE9A018(18);
			}
			if (!unk_0xB03A1684359C50A1(uParam2->f_33, 0))
			{
				if (bVar5 == 0)
				{
					func_371();
					if (iParam1 == 25 || iParam1 == 26)
					{
						unk_0xA92183CDC960EFB2();
					}
					unk_0xE05212008FE9A018(18);
				}
				unk_0x882C4E3F687152C5(fVar7);
				if (func_372(bVar6, uParam0, 0))
				{
					func_329(uParam0);
					sVar4 = func_369(iParam1, &(Global_1646129.f_116955), bParam4);
					Var0 = { func_367(iParam1) };
					if (bParam4)
					{
						func_364(uParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 25)
					{
						func_357(uParam0, func_361(uParam2), func_358(uParam2), -1);
					}
					else if (iParam1 == 26)
					{
						func_348(uParam0, func_350(uParam2), func_349(), -1);
					}
					else if (func_275())
					{
						uParam2->f_34 = Global_1574120;
						func_364(uParam0, sVar4, &Var0, 1, -1, Global_1574120, 1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1574120;
						func_364(uParam0, sVar4, "", 0, -1, Global_1574120, 1);
					}
					else
					{
						iVar8 = func_341(iParam1);
						func_364(uParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0xD2A9C3F486236CC5(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xB03A1684359C50A1(uParam2->f_33, 0))
			{
				Global_1574119 = uParam3;
				Global_1574118 = 1;
				unk_0x882C4E3F687152C5(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1574120)
					{
						unk_0x62148293B793073B(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_341(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_347())
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
			if (func_346(unk_0x8CFC7D6E1DA5D304()))
			{
				iVar0 = 20;
			}
			if (func_345(unk_0x8CFC7D6E1DA5D304()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_344(unk_0x8CFC7D6E1DA5D304()))
	{
		iVar0 = 2;
	}
	if (func_342())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_342()
{
	if (unk_0x13C2BC1B63ABBCD5())
	{
		return func_53();
	}
	return func_343(Global_1646129.f_116948);
}

int func_343(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4995[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_344(int iParam0)
{
	return Global_2422724[iParam0 /*420*/].f_130 == 4;
}

bool func_345(int iParam0)
{
	return Global_2422724[iParam0 /*420*/].f_130 == 7;
}

bool func_346(int iParam0)
{
	return Global_2422724[iParam0 /*420*/].f_130 == 2;
}

bool func_347()
{
	return Global_1646129.f_1 == 0;
}

void func_348(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_TITLE");
		if (unk_0xFAFFA408239A026B(sParam2))
		{
			func_272(sParam1);
		}
		else
		{
			unk_0x0ECBA72FAFCEBA59("FM_AE_BRACKT");
			unk_0xBEFD1ED9B6BE5127(sParam1);
			unk_0xBEFD1ED9B6BE5127(sParam2);
			unk_0xC30401186AC91B01();
		}
		func_272("");
		if (iParam3 != -1)
		{
			unk_0x22DD5585E00B80C3(iParam3);
		}
		unk_0xE2B30EB9B14EEAB2();
	}
}

char* func_349()
{
	switch (func_222(unk_0x8CFC7D6E1DA5D304()))
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

char* func_350(var uParam0)
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
	switch (func_222(unk_0x8CFC7D6E1DA5D304()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
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
			if (func_353())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_352(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_352(1))
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
			if (func_351(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_176))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_351(int iParam0)
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

bool func_352(bool bParam0)
{
	return func_279(unk_0x8CFC7D6E1DA5D304(), bParam0);
}

bool func_353()
{
	return (func_356() && func_354(func_355()));
}

bool func_354(int iParam0)
{
	return func_281(iParam0, 1);
}

int func_355()
{
	return Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_35;
}

bool func_356()
{
	return Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/] == 148;
}

void func_357(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_TITLE");
		if (unk_0xFAFFA408239A026B(sParam2))
		{
			func_272(sParam1);
		}
		else if (func_320(unk_0x8CFC7D6E1DA5D304()) == 133)
		{
			unk_0x0ECBA72FAFCEBA59("FM_AE_BRACKT_C");
			unk_0xBEFD1ED9B6BE5127(sParam1);
			unk_0xBEFD1ED9B6BE5127(sParam2);
			unk_0xC30401186AC91B01();
		}
		else
		{
			unk_0x0ECBA72FAFCEBA59("FM_AE_BRACKT");
			unk_0xBEFD1ED9B6BE5127(sParam1);
			unk_0xBEFD1ED9B6BE5127(sParam2);
			unk_0xC30401186AC91B01();
		}
		func_272("");
		if (iParam3 != -1)
		{
			unk_0x22DD5585E00B80C3(iParam3);
		}
		unk_0xE2B30EB9B14EEAB2();
	}
}

char* func_358(var uParam0)
{
	int iVar0;
	
	iVar0 = func_320(unk_0x8CFC7D6E1DA5D304());
	if (func_360())
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
			switch (func_359())
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

int func_359()
{
	if (func_320(unk_0x8CFC7D6E1DA5D304()) == 133)
	{
		return Global_2512581.f_4799;
	}
	return -1;
}

bool func_360()
{
	return Global_1595554;
}

char* func_361(var uParam0)
{
	int iVar0;
	
	iVar0 = func_320(unk_0x8CFC7D6E1DA5D304());
	if (func_360())
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
			if (func_363() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_363() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_359())
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
			if (func_362() == 1)
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

int func_362()
{
	return Global_2512581.f_4802;
}

int func_363()
{
	if (func_320(unk_0x8CFC7D6E1DA5D304()) == 132)
	{
		return Global_2512581.f_4797;
	}
	return -1;
}

void func_364(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		unk_0x76F4FB5EFF5BDED5(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_285(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x0ECBA72FAFCEBA59(sParam1);
			unk_0x3A12001DBF78DC62(iParam5);
			unk_0xC30401186AC91B01();
		}
		else
		{
			func_272(sParam1);
		}
		if (func_387() && iParam6)
		{
			if (func_366())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x0ECBA72FAFCEBA59("LBD_DPD_CNT");
			unk_0x3A12001DBF78DC62(iVar0);
			unk_0x3A12001DBF78DC62(iVar1);
			unk_0xC30401186AC91B01();
		}
		else
		{
			func_272(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x22DD5585E00B80C3(iParam4);
			if (func_365(unk_0x8CFC7D6E1DA5D304()))
			{
				unk_0x22DD5585E00B80C3(166);
			}
			else if (func_53())
			{
				unk_0x22DD5585E00B80C3(220);
			}
		}
		unk_0xE2B30EB9B14EEAB2();
	}
}

int func_365(int iParam0)
{
	if (func_346(iParam0) || func_345(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_366()
{
	return Global_1574121;
}

struct<4> func_367(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_368(unk_0x8CFC7D6E1DA5D304()) || func_344(unk_0x8CFC7D6E1DA5D304()))
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
			StringIntConCat(&Var0, Global_1646129.f_33, 16);
			break;
	}
	if (func_275() && unk_0x13C2BC1B63ABBCD5())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_1646129.f_33, 16);
	}
	return Var0;
}

bool func_368(int iParam0)
{
	return Global_2422724[iParam0 /*420*/].f_130 == 5;
}

char* func_369(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 19 && (!func_275() || unk_0xFAFFA408239A026B(sParam1)))
	{
		uVar0 = func_370();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 23)
	{
		if (Global_1574322 == 0)
		{
			Global_1574322 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xFAFFA408239A026B(sParam1))
	{
		if (Global_1574322 == 1)
		{
			Global_1574322 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574322 == 0)
		{
			Global_1574322 = 1;
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

char* func_370()
{
	if (unk_0x1F02F29AB756F2E5())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x1A236D41ABF3E7DB())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xF64E18195138BB4E())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xE0662BA98BE124FF())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_371()
{
	Global_36763 = 1;
}

bool func_372(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0xBD7D7877C82BE42F("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0xBD7D7877C82BE42F("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0xBD7D7877C82BE42F("mp_matchmaking_card");
	}
	return unk_0x5C716BBF766E1C70(*uParam1);
}

void func_373(var uParam0, var uParam1, bool bParam2)
{
	unk_0x62148293B793073B(&(uParam1->f_33), 7);
	Global_1574119 = 0;
	func_265();
	Global_1574118 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_11(&(uParam1->f_19)))
		{
			func_9(&(uParam1->f_19));
		}
	}
	if (unk_0x5C716BBF766E1C70(*uParam0))
	{
		unk_0xEBE532BFFE618875(uParam0);
	}
	if (unk_0xB03A1684359C50A1(uParam1->f_33, 0))
	{
		unk_0x62148293B793073B(&(uParam1->f_33), 0);
	}
	unk_0x882C4E3F687152C5(0f);
}

int func_374()
{
	if (func_385())
	{
		return 0;
	}
	if (func_384())
	{
		return 0;
	}
	if (!func_382())
	{
		return 0;
	}
	if (!func_380())
	{
		return 0;
	}
	if (func_379(8, -1))
	{
		return 0;
	}
	if (func_386() == 2)
	{
		return 0;
	}
	if (Global_2512581.f_4511)
	{
		return 0;
	}
	if (func_378())
	{
		return 0;
	}
	else if (!func_100(unk_0x8CFC7D6E1DA5D304(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_377(1) || func_375(1)) || Global_17162.f_124) || Global_17162)
	{
		return 0;
	}
	if (unk_0xC83C302702976DCB())
	{
		return 0;
	}
	if (func_103(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (Global_1794814)
	{
		return 0;
	}
	if (Global_1794818)
	{
		return 0;
	}
	if (func_200(0))
	{
		return 0;
	}
	if (unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_15, 4))
	{
		return 0;
	}
	if (Global_1350792)
	{
		return 0;
	}
	if ((Global_1818764.f_705.f_5 || Global_1821575.f_705.f_5) || Global_1817807.f_705.f_5)
	{
		return 0;
	}
	return 1;
}

int func_375(bool bParam0)
{
	if (unk_0x0A596203A8341362())
	{
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			if (func_376(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0x02EA7C5633421A0F(0, 25) || unk_0x02EA7C5633421A0F(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17162.f_130)
	{
		return 0;
	}
	if (unk_0x02EA7C5633421A0F(0, 19) || (!bParam0 && unk_0xBAEF57A3E716CC8D(0, 19)))
	{
		return 1;
	}
	if (unk_0xC339C5C5B5E8BC5B())
	{
		if (((unk_0x02EA7C5633421A0F(0, 166) || unk_0x02EA7C5633421A0F(0, 167)) || unk_0x02EA7C5633421A0F(0, 168)) || unk_0x02EA7C5633421A0F(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xBAEF57A3E716CC8D(0, 166) || unk_0xBAEF57A3E716CC8D(0, 167)) || unk_0xBAEF57A3E716CC8D(0, 168)) || unk_0xBAEF57A3E716CC8D(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_376(int iParam0)
{
	int iVar0;
	
	if (unk_0x0A88AA21DE172C4B())
	{
		if (!unk_0x0FAE113CE72ED842(iParam0))
		{
			unk_0x75CE6F8BEC2654E3(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_377(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

bool func_378()
{
	return Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_196 != 0;
}

bool func_379(int iParam0, int iParam1)
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

int func_380()
{
	if (func_381() == 0)
	{
		return 1;
	}
	return 0;
}

int func_381()
{
	return Global_1312466.f_18;
}

int func_382()
{
	if (func_383())
	{
		return 1;
	}
	if (unk_0xEC0ECEF2AF3FDA8D())
	{
		return 0;
	}
	if (unk_0xBC13F084F3B1B544() || unk_0x610450B2545892B5())
	{
		return 0;
	}
	if (unk_0xC5B946266AEC83EB())
	{
		return 0;
	}
	return 1;
}

bool func_383()
{
	return Global_1312438;
}

bool func_384()
{
	return Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/] == 5;
}

bool func_385()
{
	return unk_0x5AFB8ED811F05E4D() <= Global_17301.f_5745 + 100;
}

int func_386()
{
	return Global_1357213.f_68;
}

int func_387()
{
	if (Global_1574120 > 16)
	{
		return 1;
	}
	return 0;
}

float func_388()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x8A9A973E0D52B2FF()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_389(int iParam0)
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

int func_390()
{
	if (func_391(unk_0x8CFC7D6E1DA5D304()))
	{
		return Global_1316731;
	}
	return 0;
}

int func_391(int iParam0)
{
	if (unk_0x44243F2E2F58B8E3())
	{
		if (func_34(iParam0, 0))
		{
			return unk_0x8E5F52AEFF24A334(iParam0);
		}
	}
	return 0;
}

int func_392()
{
	if (func_390())
	{
		return 1;
	}
	if (func_316(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (func_360())
	{
		return 1;
	}
	if (func_250(unk_0x8CFC7D6E1DA5D304()))
	{
		switch (func_320(unk_0x8CFC7D6E1DA5D304()))
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
				if (!func_393(unk_0x8CFC7D6E1DA5D304()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_393(unk_0x8CFC7D6E1DA5D304()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_393(unk_0x8CFC7D6E1DA5D304()))
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

bool func_393(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1627460[iParam0 /*530*/].f_1, 4);
}

int func_394(int iParam0)
{
	if ((iParam0 == 26 && func_250(unk_0x8CFC7D6E1DA5D304())) && !func_296(unk_0x8CFC7D6E1DA5D304()))
	{
		return 1;
	}
	if (iParam0 == 25)
	{
		if (func_223(unk_0x8CFC7D6E1DA5D304(), 0) && func_296(unk_0x8CFC7D6E1DA5D304()))
		{
			return 1;
		}
		if (func_395(unk_0x8CFC7D6E1DA5D304()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_395(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_250(iParam0) && !func_249(iParam0)) && !unk_0xB03A1684359C50A1(Global_1627460[iParam0 /*530*/].f_1, 8));
	bVar2 = func_296(iParam0);
	uVar3 = func_403();
	uVar4 = func_397();
	if ((bVar1 && (func_248(iParam0) || func_247(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_244(iParam0)) && !func_396(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2512581.f_4878.f_38 != iVar0)
	{
		Global_2512581.f_4878.f_38 = iVar0;
	}
	return iVar0;
}

bool func_396(int iParam0)
{
	return func_226(iParam0, 19);
}

int func_397()
{
	if ((func_226(unk_0x8CFC7D6E1DA5D304(), 21) || func_226(unk_0x8CFC7D6E1DA5D304(), 22)) || func_400())
	{
		return 1;
	}
	if (func_398())
	{
		func_227(22);
		return 1;
	}
	return 0;
}

int func_398()
{
	if (func_223(unk_0x8CFC7D6E1DA5D304(), 0))
	{
		if ((func_403() && !func_399()) || func_241(unk_0x8CFC7D6E1DA5D304(), 21))
		{
			return 1;
		}
		else
		{
			func_225(27);
		}
	}
	return 0;
}

bool func_399()
{
	return Global_1312416.f_1;
}

bool func_400()
{
	return func_401(296, -1);
}

int func_401(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2547154[iParam0 /*3*/][func_402(iParam1)];
	if (unk_0xA17AF9F044C9C70E(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_402(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_36();
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

bool func_403()
{
	return Global_1312416;
}

int func_404()
{
	int iVar0;
	
	iVar0 = -1;
	if (!func_34(unk_0x8CFC7D6E1DA5D304(), 0))
	{
		iVar0 = unk_0xA651DA0BC9FD8FA4();
	}
	else
	{
		iVar0 = func_405();
	}
	if (iVar0 != -1)
	{
		return unk_0xB03A1684359C50A1(Local_382[iVar0 /*11*/].f_1, 1);
	}
	return 0;
}

int func_405()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_566;
	if (unk_0x4AF13BCD120BCDBC(iVar1))
	{
		if (unk_0x1DD0F419559F38C7(iVar1))
		{
			iVar2 = unk_0xE24BCF1006ECB50A(iVar1);
			iVar0 = iVar2;
		}
	}
	return iVar0;
}

bool func_406()
{
	return Local_112.f_196 == 99;
}

void func_407()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5B5D98FAAE6FEC3E(1))
	{
		iVar1 = unk_0xD8DDA9403FAEDB57(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_408(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_408(int iParam0)
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
	
	if (unk_0xF6A7C6FEAD04F4B3(1, iParam0, &Var0, 10))
	{
		iVar29 = 0;
		while (iVar29 < 10)
		{
			if (!unk_0xB03A1684359C50A1(Local_112.f_209, iVar29))
			{
				if (!unk_0xB03A1684359C50A1(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_6, iVar29))
				{
					if (unk_0x31F12808DC47A9E5(Var0.f_0))
					{
						if (unk_0x978B4E1292EBBE41(Var0.f_0))
						{
							if (!unk_0xB03A1684359C50A1(Local_112.f_205, iVar29))
							{
								if (!unk_0xB03A1684359C50A1(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_5, iVar29))
								{
									if (unk_0x5AD42783360AB57E(Local_112.f_2[iVar29 /*10*/].f_2))
									{
										if (unk_0x31F12808DC47A9E5(unk_0xFA62333764BA8F5D(Local_112.f_2[iVar29 /*10*/].f_2)))
										{
											if (unk_0x00ABCA0241A97143(Var0.f_0) == unk_0xFA62333764BA8F5D(Local_112.f_2[iVar29 /*10*/].f_2))
											{
												if (unk_0x31F12808DC47A9E5(Var0.f_1))
												{
													if (unk_0xB6C2454233C8F532(Var0.f_1))
													{
														if (unk_0x6DE4035D8BAB73B4(Var0.f_1) == unk_0x18F7BE9ACB7D08F4())
														{
															if (func_1061() == Local_112.f_218)
															{
																unk_0xD2A9C3F486236CC5(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_5), iVar29);
															}
														}
														else if (unk_0xEE1E09882FA264CA(unk_0x6DE4035D8BAB73B4(Var0.f_1)))
														{
															iVar30 = unk_0xD3287DCBDBC58316(unk_0x6DE4035D8BAB73B4(Var0.f_1));
															if (!unk_0x1DD0F419559F38C7(iVar30))
															{
																unk_0xD2A9C3F486236CC5(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_5), iVar29);
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
						else if (unk_0xB6C2454233C8F532(Var0.f_0))
						{
							iVar11 = unk_0x6DE4035D8BAB73B4(Var0.f_0);
							if (unk_0x5AD42783360AB57E(Local_112.f_2[iVar29 /*10*/].f_1))
							{
								if (iVar11 == unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iVar29 /*10*/].f_1))
								{
									if (unk_0x31F12808DC47A9E5(Var0.f_1))
									{
										if (unk_0xB6C2454233C8F532(Var0.f_1))
										{
											iVar10 = unk_0x6DE4035D8BAB73B4(Var0.f_1);
											if (unk_0xEE1E09882FA264CA(iVar10))
											{
												iVar13 = unk_0xD3287DCBDBC58316(iVar10);
												if (unk_0x1DD0F419559F38C7(iVar13))
												{
													if (Var0.f_3)
													{
														if (iVar13 == unk_0x8CFC7D6E1DA5D304())
														{
															unk_0xD2A9C3F486236CC5(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_6), iVar29);
															if (!func_406())
															{
																Var15.f_2 = 400183530;
																Var15.f_10 = unk_0x8CFC7D6E1DA5D304();
																func_414(Var15, func_415(0));
															}
														}
													}
												}
												else if (!unk_0xB03A1684359C50A1(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_7, iVar29))
												{
													if (Var0.f_3)
													{
														unk_0xD2A9C3F486236CC5(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_7), iVar29);
													}
												}
											}
											else if (!unk_0xB03A1684359C50A1(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_8, iVar29))
											{
												if (Var0.f_3)
												{
													unk_0xD2A9C3F486236CC5(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_8), iVar29);
												}
											}
										}
										else if (!unk_0xB03A1684359C50A1(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_8, iVar29))
										{
											if (Var0.f_3)
											{
												unk_0xD2A9C3F486236CC5(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_8), iVar29);
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
		if (!unk_0xB03A1684359C50A1(iLocal_735, 15))
		{
			if (unk_0x31F12808DC47A9E5(Var0.f_0))
			{
				if (unk_0xB6C2454233C8F532(Var0.f_0))
				{
					iVar11 = unk_0x6DE4035D8BAB73B4(Var0.f_0);
					if (func_413(unk_0x4F69FBD64CDF125B(iVar11)))
					{
						unk_0xD2A9C3F486236CC5(&iLocal_735, 15);
					}
				}
				else if (unk_0x978B4E1292EBBE41(Var0.f_0))
				{
					if (func_412(unk_0x4F69FBD64CDF125B(Var0.f_0)))
					{
						if (!func_411(unk_0x18F7BE9ACB7D08F4(), unk_0x00ABCA0241A97143(Var0.f_0), 0))
						{
							if (!func_410(unk_0x00ABCA0241A97143(Var0.f_0), 0))
							{
								unk_0xD2A9C3F486236CC5(&iLocal_735, 15);
							}
						}
					}
				}
			}
		}
	}
	if (func_404())
	{
		if (!func_226(unk_0x8CFC7D6E1DA5D304(), 20))
		{
			if (unk_0x31F12808DC47A9E5(Var0.f_0))
			{
				if (unk_0xB6C2454233C8F532(Var0.f_0))
				{
					iVar11 = unk_0x6DE4035D8BAB73B4(Var0.f_0);
					if (unk_0xEE1E09882FA264CA(iVar11))
					{
						iVar12 = unk_0xD3287DCBDBC58316(iVar11);
						if (unk_0x31F12808DC47A9E5(Var0.f_1))
						{
							if (unk_0xB6C2454233C8F532(Var0.f_1))
							{
								iVar10 = unk_0x6DE4035D8BAB73B4(Var0.f_1);
								if (unk_0xEE1E09882FA264CA(iVar10))
								{
									iVar13 = unk_0xD3287DCBDBC58316(iVar10);
									if (iVar13 == unk_0x8CFC7D6E1DA5D304())
									{
										if (unk_0x1DD0F419559F38C7(iVar12))
										{
											if (func_290(iVar12, 1))
											{
												if (Local_112.f_218 > -1)
												{
													iVar14 = unk_0x8A0B92A0286253B3(unk_0xF4E7C3C6384793AA(Local_112.f_218));
													if (func_325(iVar12, iVar14, 1))
													{
														func_409(0);
														func_1040();
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

void func_409(int iParam0)
{
	if (!func_296(unk_0x8CFC7D6E1DA5D304()))
	{
		if (iParam0 || func_395(unk_0x8CFC7D6E1DA5D304()) != 0)
		{
			func_227(20);
			if (func_250(unk_0x8CFC7D6E1DA5D304()))
			{
				if (!unk_0xB03A1684359C50A1(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_1, 8))
				{
					unk_0xD2A9C3F486236CC5(&(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_1), 8);
				}
			}
		}
	}
}

int func_410(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xE4752B503DF3FEC0(iParam0) + 1;
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x74B8CA477787A438(iParam0, (iVar0 - 1), 0))
			{
				iVar2 = unk_0x4983F8C51A0C0AF3(iParam0, (iVar0 - 1), 0);
				if (bParam1)
				{
					if (unk_0x31F12808DC47A9E5(iVar2))
					{
						if (unk_0xEE1E09882FA264CA(iVar2))
						{
							return 1;
						}
					}
				}
				else if (!unk_0x0FAE113CE72ED842(iVar2))
				{
					if (unk_0xEE1E09882FA264CA(iVar2))
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

int func_411(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x31F12808DC47A9E5(iParam0) && !unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		if (unk_0x31F12808DC47A9E5(iParam1) && !unk_0x74C2FE037DFC8B4A(iParam1, 0))
		{
			if (unk_0x88B79D32B518C327(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_412(int iParam0)
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

int func_413(int iParam0)
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

void func_414(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 1143278407;
	Param0.f_1 = unk_0x8CFC7D6E1DA5D304();
	if (!iParam14 == 0)
	{
		unk_0xDC8B8CF2FBDF3387(1, &Param0, 14, iParam14);
	}
}

int func_415(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xF02902C16AF3CA92())
	{
		if (unk_0x0CA6AB9C192005B8(unk_0xF4E7C3C6384793AA(iVar1)))
		{
			iVar2 = unk_0x8A0B92A0286253B3(unk_0xF4E7C3C6384793AA(iVar1));
			if (func_1162(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x8CFC7D6E1DA5D304() || iParam0)
				{
					unk_0xD2A9C3F486236CC5(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_416()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_34(unk_0x8CFC7D6E1DA5D304(), 0))
	{
		if (unk_0xB03A1684359C50A1(iLocal_735, 10))
		{
			unk_0x62148293B793073B(&iLocal_735, 10);
		}
		return;
	}
	iVar0 = Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_566;
	if (!unk_0xB03A1684359C50A1(iLocal_735, 10))
	{
		if (Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1 != 0)
		{
			Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1 = 0;
		}
		unk_0xD2A9C3F486236CC5(&iLocal_735, 10);
	}
	if (!unk_0xB03A1684359C50A1(iLocal_735, 11))
	{
		unk_0xD2A9C3F486236CC5(&iLocal_735, 11);
		func_944();
	}
	if (unk_0x4AF13BCD120BCDBC(iVar0))
	{
		if (unk_0x1DD0F419559F38C7(iVar0))
		{
			uVar1 = unk_0xE24BCF1006ECB50A(iVar0);
			iVar2 = uVar1;
			iVar3 = Local_382[iVar2 /*11*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_820();
					func_805();
					func_796();
					func_417();
					break;
				
				case 2:
					func_417();
					break;
				
				case 3:
					func_1074();
					break;
				}
			}
	}
}

void func_417()
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
	iVar17 = func_57();
	iVar20 = unk_0xA651DA0BC9FD8FA4();
	iVar21 = unk_0x8CFC7D6E1DA5D304();
	if (func_34(unk_0x8CFC7D6E1DA5D304(), 0))
	{
		iVar20 = func_405();
		iVar21 = Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_566;
	}
	if (!unk_0xB03A1684359C50A1(Local_382[iVar20 /*11*/].f_1, 4))
	{
		if (!unk_0xB03A1684359C50A1(iLocal_735, 3))
		{
			if (unk_0xB03A1684359C50A1(Local_112.f_1, 1))
			{
				if (iVar20 == Local_112.f_218 || func_1061() == Local_112.f_218)
				{
					if (func_395(unk_0x8CFC7D6E1DA5D304()) >= 2)
					{
						sVar18 = func_790(iVar21);
						uVar19 = func_789(iVar21);
						func_787(87, "BIGM_DEFENDED", "BIGM_CONTRAS", sVar18, uVar19, 0, -1, -1, -1, 2, -1);
					}
					if (iVar21 == unk_0x8CFC7D6E1DA5D304())
					{
						if (!unk_0xB03A1684359C50A1(iLocal_735, 6))
						{
							func_725(1, 1, 0, 0, -1, -1, -1, -1, -1);
							unk_0xD2A9C3F486236CC5(&iLocal_735, 6);
						}
						func_565(169, 1, &Var0, 0);
						unk_0x3987E3ADA8E87AD8(unk_0x8CFC7D6E1DA5D304());
					}
				}
				else if (func_404())
				{
				}
				iLocal_744 = func_20();
				iLocal_745 = (func_20() - func_564(&(Local_112.f_226), 0, 0));
				unk_0xD2A9C3F486236CC5(&iLocal_735, 3);
			}
			else if (unk_0xB03A1684359C50A1(Local_112.f_1, 4))
			{
				if (unk_0xB03A1684359C50A1(Local_382[iVar20 /*11*/].f_1, 14))
				{
					if (Local_112.f_221 >= 0)
					{
						iVar17 = unk_0x3479F6F64A48251C(Local_112.f_221);
						if (iVar17 == iVar21)
						{
							func_534(87, "BIGM_SECURED", "BIGM_CONTRAYR", 1, -1, 2);
						}
						else if (func_395(iVar21) >= 2)
						{
							sVar18 = func_790(iVar21);
							uVar19 = func_789(iVar21);
							func_787(87, "BIGM_SECURED", "BIGM_CONTRAGR", sVar18, uVar19, 0, -1, -1, -1, 2, -1);
						}
					}
					if (iVar21 == unk_0x8CFC7D6E1DA5D304())
					{
						if (!unk_0xB03A1684359C50A1(iLocal_735, 6))
						{
							func_725(1, 1, 0, 0, -1, -1, -1, -1, -1);
							unk_0xD2A9C3F486236CC5(&iLocal_735, 6);
						}
						func_565(169, 1, &Var0, 0);
						unk_0x3987E3ADA8E87AD8(unk_0x8CFC7D6E1DA5D304());
					}
					iLocal_744 = func_20();
					iLocal_745 = (func_20() - func_564(&(Local_112.f_226), 0, 0));
					unk_0xD2A9C3F486236CC5(&iLocal_735, 3);
				}
			}
			else if (unk_0xB03A1684359C50A1(Local_112.f_1, 3))
			{
				if (unk_0xA651DA0BC9FD8FA4() == Local_112.f_218 || func_1061() == Local_112.f_218)
				{
					if (func_395(iVar21) >= 2)
					{
						sVar18 = func_790(iVar21);
						uVar19 = func_789(unk_0x8CFC7D6E1DA5D304());
						func_787(88, "BIGM_DCLOST", "BIGM_CONTRAFD", sVar18, uVar19, 0, -1, -1, -1, 2, -1);
					}
					if (iVar21 == unk_0x8CFC7D6E1DA5D304())
					{
						if (!unk_0xB03A1684359C50A1(iLocal_735, 6))
						{
							func_725(0, 2, 0, 0, -1, -1, -1, -1, -1);
							unk_0xD2A9C3F486236CC5(&iLocal_735, 6);
						}
						func_565(169, 0, &Var0, 0);
					}
				}
				iLocal_744 = func_20();
				iLocal_745 = (func_20() - func_564(&(Local_112.f_226), 0, 0));
				unk_0xD2A9C3F486236CC5(&iLocal_735, 3);
			}
			else if (unk_0xB03A1684359C50A1(Local_112.f_1, 9))
			{
				if (func_503())
				{
					if (func_395(iVar21) >= 2)
					{
						sVar18 = func_790(iVar21);
						uVar19 = func_789(iVar21);
						func_787(88, "BIGM_DCLOST", "BIGM_CONTRALS", sVar18, uVar19, 0, -1, -1, -1, 2, -1);
					}
				}
				if (iVar21 == unk_0x8CFC7D6E1DA5D304())
				{
					if (!unk_0xB03A1684359C50A1(iLocal_735, 6))
					{
						func_725(0, 2, 0, 0, -1, -1, -1, -1, -1);
						unk_0xD2A9C3F486236CC5(&iLocal_735, 6);
					}
					func_565(169, 0, &Var0, 0);
				}
				iLocal_744 = func_20();
				iLocal_745 = (func_20() - func_564(&(Local_112.f_226), 0, 0));
				unk_0xD2A9C3F486236CC5(&iLocal_735, 3);
			}
			else if (unk_0xB03A1684359C50A1(Local_112.f_1, 8))
			{
				if (func_503())
				{
					if (func_395(iVar21) >= 2)
					{
						sVar18 = func_790(iVar21);
						uVar19 = func_789(iVar21);
						func_787(88, "BIGM_DCLOST", "BIGM_CONTRALS", sVar18, uVar19, 0, -1, -1, -1, 2, -1);
					}
				}
				if (iVar21 == unk_0x8CFC7D6E1DA5D304())
				{
					if (!unk_0xB03A1684359C50A1(iLocal_735, 6))
					{
						func_725(0, 2, 0, 0, -1, -1, -1, -1, -1);
						unk_0xD2A9C3F486236CC5(&iLocal_735, 6);
					}
					func_565(169, 0, &Var0, 0);
				}
				iLocal_744 = func_20();
				iLocal_745 = (func_20() - func_564(&(Local_112.f_226), 0, 0));
				unk_0xD2A9C3F486236CC5(&iLocal_735, 3);
			}
			else if (unk_0xB03A1684359C50A1(Local_112.f_1, 15))
			{
				if (func_503())
				{
					if (func_395(iVar21) >= 2)
					{
						sVar18 = func_790(iVar21);
						uVar19 = func_789(iVar21);
						func_787(88, "BIGM_DCLOST", "BIGM_CONTRALS", sVar18, uVar19, 0, -1, -1, -1, 2, -1);
					}
				}
				if (iVar21 == unk_0x8CFC7D6E1DA5D304())
				{
					if (!unk_0xB03A1684359C50A1(iLocal_735, 6))
					{
						func_725(0, 2, 0, 0, -1, -1, -1, -1, -1);
						unk_0xD2A9C3F486236CC5(&iLocal_735, 6);
					}
					func_565(169, 0, &Var0, 0);
				}
				iLocal_744 = func_20();
				iLocal_745 = (func_20() - func_564(&(Local_112.f_226), 0, 0));
				unk_0xD2A9C3F486236CC5(&iLocal_735, 3);
			}
			else if (unk_0xB03A1684359C50A1(Local_112.f_1, 5))
			{
				if (func_503())
				{
					if (func_1060())
					{
						if (func_395(iVar21) >= 2)
						{
						}
					}
					else if (func_395(iVar21) >= 2)
					{
						func_534(88, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2);
					}
				}
				if (iVar21 == unk_0x8CFC7D6E1DA5D304())
				{
					if (!unk_0xB03A1684359C50A1(iLocal_735, 6))
					{
						func_725(0, 8, 0, 0, -1, -1, -1, -1, -1);
						unk_0xD2A9C3F486236CC5(&iLocal_735, 6);
					}
					func_565(169, 0, &Var0, 0);
				}
				unk_0xD2A9C3F486236CC5(&iLocal_735, 3);
			}
		}
		if (unk_0xB03A1684359C50A1(iLocal_735, 3))
		{
			func_944();
			if (unk_0xA651DA0BC9FD8FA4() == Local_112.f_218)
			{
				if (!unk_0xB03A1684359C50A1(Local_112.f_1, 16) && !unk_0xB03A1684359C50A1(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1, 13))
				{
					if ((((unk_0xB03A1684359C50A1(Local_112.f_1, 15) || unk_0xB03A1684359C50A1(Local_112.f_1, 8)) || unk_0xB03A1684359C50A1(Local_112.f_1, 3)) || func_11(&(Local_112.f_226))) || (func_406() && unk_0xB03A1684359C50A1(Local_112.f_1, 9)))
					{
						func_449();
					}
					else
					{
						unk_0xD2A9C3F486236CC5(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1), 13);
						if (!func_448(38))
						{
							func_447(38);
						}
					}
					if (iLocal_746 == 2)
					{
						unk_0xD2A9C3F486236CC5(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1), 13);
					}
					if (iLocal_746 == 3)
					{
						unk_0xD2A9C3F486236CC5(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1), 13);
					}
				}
			}
			if (!unk_0xB03A1684359C50A1(iLocal_736, 8))
			{
				func_445();
				func_443();
				unk_0xD2A9C3F486236CC5(&iLocal_736, 8);
			}
			if (!unk_0xB03A1684359C50A1(iLocal_735, 7))
			{
				if (Local_112.f_219 != -1)
				{
					if (unk_0xB03A1684359C50A1(iLocal_735, 5))
					{
						if (unk_0x4AF13BCD120BCDBC(unk_0x3479F6F64A48251C(Local_112.f_219)))
						{
							func_441(unk_0x3479F6F64A48251C(Local_112.f_219), 432, 0);
							func_439(unk_0x3479F6F64A48251C(Local_112.f_219), 1, 0);
							func_438(unk_0x3479F6F64A48251C(Local_112.f_219), 0, 0);
							func_437(unk_0x3479F6F64A48251C(Local_112.f_219), 0);
							func_436(unk_0x3479F6F64A48251C(Local_112.f_219), Global_262145.f_11514, 0);
							unk_0xD2A9C3F486236CC5(&iLocal_735, 7);
						}
					}
				}
			}
			if (func_418(&uLocal_747, 1, 0) && (unk_0xB03A1684359C50A1(Local_112.f_1, 16) || unk_0xB03A1684359C50A1(Local_112.f_1, 5)))
			{
				if (iVar20 == unk_0xA651DA0BC9FD8FA4())
				{
					unk_0xD2A9C3F486236CC5(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1), 4);
				}
			}
		}
	}
}

int func_418(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_227(29);
	if ((*uParam0 > 0 && !func_333()) && func_395(unk_0x8CFC7D6E1DA5D304()) != 0)
	{
		if (!func_433())
		{
			func_432();
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
				unk_0xD2A9C3F486236CC5(&(Global_1806998.f_3), 2);
				if (bParam1)
				{
					unk_0xD2A9C3F486236CC5(&(Global_2512581.f_4553), 0);
					func_10(&(uParam0->f_5), 0, 0);
				}
				func_10(&(uParam0->f_1), 0, 0);
				func_431(uParam0, 1);
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
				func_425(iParam2);
				func_431(uParam0, 2);
			}
			break;
		
		case 2:
			func_425(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_419(func_420(0)))
				{
					unk_0xEFF1F12403847394(1);
				}
				func_431(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0x62148293B793073B(&(Global_2512581.f_4553), 1);
				unk_0x62148293B793073B(&(Global_1806998.f_3), 2);
				func_431(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x62148293B793073B(&(Global_2512581.f_4553), 1);
			unk_0x62148293B793073B(&(Global_1806998.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_419(char* sParam0)
{
	unk_0x24BB6189982CE7D6(sParam0);
	return unk_0xF2850FB50EE28440(0);
}

char* func_420(int iParam0)
{
	if (((func_423(unk_0x8CFC7D6E1DA5D304()) || func_422(unk_0x8CFC7D6E1DA5D304())) || func_353()) || iParam0)
	{
		if (func_422(unk_0x8CFC7D6E1DA5D304()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_322(func_421()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_421()
{
	return Global_1644422;
}

bool func_422(int iParam0)
{
	return func_323(func_222(iParam0), 0);
}

bool func_423(int iParam0)
{
	return func_424(func_222(iParam0));
}

int func_424(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
			if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/] == 148 && func_281(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_35, 1))
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

void func_425(int iParam0)
{
	if (unk_0xB03A1684359C50A1(Global_2512581.f_4553, 0))
	{
		if ((((((((((!unk_0x834A29018EBFDCB3() && !unk_0xB03A1684359C50A1(Global_2512581.f_778, 2)) && func_1162(unk_0x8CFC7D6E1DA5D304(), 1, 1)) && !Global_68213) && !Global_53082) && !unk_0xEC0ECEF2AF3FDA8D()) && !func_226(unk_0x8CFC7D6E1DA5D304(), 22)) && func_395(unk_0x8CFC7D6E1DA5D304()) != 0) && !func_429(func_430())) && !func_423(unk_0x8CFC7D6E1DA5D304())) && !func_428(func_222(unk_0x8CFC7D6E1DA5D304())))
		{
			unk_0xD2A9C3F486236CC5(&(Global_2512581.f_4553), 1);
			func_427(func_420(iParam0), -1);
			func_426(1);
			unk_0x62148293B793073B(&(Global_2512581.f_4553), 0);
		}
	}
}

void func_426(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_352(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_333())
	{
		unk_0x929C3CBA660376D5(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_427(char* sParam0, int iParam1)
{
	unk_0x2202872EA73499C3(sParam0);
	unk_0xF764171B43EBA5E4(0, 0, 0, iParam1);
}

int func_428(int iParam0)
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

int func_429(int iParam0)
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

int func_430()
{
	var uVar0;
	
	uVar0 = unk_0xFCA64981FEF7C913();
	if (unk_0x9D39145AD645E383(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_VEHICLE_EXPORT"))
	{
		return 178;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_PLOUGHED"))
	{
		return 214;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_FULLY_LOADED"))
	{
		return 215;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_AMPHIBIOUS_ASSAULT"))
	{
		return 216;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_TRANSPORTER"))
	{
		return 217;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_FORTIFIED"))
	{
		return 218;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_VELOCITY"))
	{
		return 219;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_STOCKPILING"))
	{
		return 221;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_RAMPED_UP"))
	{
		return 220;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_GUNRUNNING"))
	{
		return 225;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_GUNRUNNING_DEFEND"))
	{
		return 227;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_SMUGGLER"))
	{
		return 229;
	}
	else if (unk_0x9D39145AD645E383(uVar0, "GB_FM_GANGOPS"))
	{
		return 233;
	}
	return 0;
}

void func_431(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_432()
{
	Global_2458315 = 1;
}

int func_433()
{
	if (((((((func_222(unk_0x8CFC7D6E1DA5D304()) == 170 || func_222(unk_0x8CFC7D6E1DA5D304()) == 219) || func_222(unk_0x8CFC7D6E1DA5D304()) == 221) || func_222(unk_0x8CFC7D6E1DA5D304()) == 220) || func_222(unk_0x8CFC7D6E1DA5D304()) == 216) || func_222(unk_0x8CFC7D6E1DA5D304()) == 215) || func_222(unk_0x8CFC7D6E1DA5D304()) == 214) || func_222(unk_0x8CFC7D6E1DA5D304()) == 218)
	{
		return 1;
	}
	if (func_434(unk_0x8CFC7D6E1DA5D304()))
	{
		return 1;
	}
	return 0;
}

int func_434(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1162(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_435(Global_2422724[iParam0 /*420*/].f_324.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_435(int iParam0)
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
		case 98:
		case 99:
		case 100:
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
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
	}
	return -1;
}

void func_436(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return;
	}
	if (unk_0x6E987D62C8535B6E(unk_0xFCA64981FEF7C913()) == func_233())
	{
		return;
	}
	iVar0 = iParam0;
	if (!unk_0x19B3A29FD53C54A6(Global_2415594.f_776[iParam0]) || Global_2415594.f_776[iParam0] == unk_0xBCF9D020FA9C313D())
	{
		if (bParam2)
		{
			unk_0xD2A9C3F486236CC5(&(Global_2415594.f_389), iVar0);
			Global_2415594.f_545[iVar0] = uParam1;
			Global_2415594.f_776[iParam0] = unk_0xBCF9D020FA9C313D();
		}
		else
		{
			unk_0x62148293B793073B(&(Global_2415594.f_389), iVar0);
			Global_2415594.f_776[iParam0] = -1;
		}
	}
}

void func_437(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xD2A9C3F486236CC5(&(Global_2415594.f_365), iParam0);
	}
	else
	{
		unk_0x62148293B793073B(&(Global_2415594.f_365), iParam0);
	}
	if (unk_0xE769D9B5158D0F11(Global_2415594[iParam0]))
	{
		if (bParam1)
		{
			unk_0x90260EB52E59F0F5(Global_2415594[iParam0], 0);
		}
		else
		{
			unk_0x90260EB52E59F0F5(Global_2415594[iParam0], 1);
		}
	}
}

void func_438(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_1162(iParam0, 1, 1))
		{
			Global_2415594.f_710[iParam0] = unk_0xBCF9D020FA9C313D();
			unk_0xD2A9C3F486236CC5(&(Global_2415594.f_364), iParam0);
			func_437(iParam0, bParam2);
		}
	}
	else
	{
		func_437(iParam0, bParam2);
		unk_0x62148293B793073B(&(Global_2415594.f_364), iParam0);
		Global_2415594.f_710[iParam0] = -1;
	}
}

void func_439(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return;
	}
	if (unk_0x6E987D62C8535B6E(unk_0xFCA64981FEF7C913()) == func_233())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_440(iParam0))
	{
		if (bParam2)
		{
			unk_0xD2A9C3F486236CC5(&(Global_2415594.f_386), iVar0);
			Global_2415594.f_611[iParam0] = unk_0xBCF9D020FA9C313D();
			Global_2415594.f_446[iVar0] = iParam1;
		}
		else
		{
			unk_0x62148293B793073B(&(Global_2415594.f_386), iVar0);
			Global_2415594.f_611[iParam0] = -1;
		}
	}
}

int func_440(int iParam0)
{
	if (!unk_0x19B3A29FD53C54A6(Global_2415594.f_611[iParam0]) || Global_2415594.f_611[iParam0] == unk_0xBCF9D020FA9C313D())
	{
		return 1;
	}
	return 0;
}

void func_441(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_57())
	{
		return;
	}
	if (unk_0x6E987D62C8535B6E(unk_0xFCA64981FEF7C913()) == func_233())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0x19B3A29FD53C54A6(Global_2415594.f_578[iParam0]) || Global_2415594.f_578[iParam0] == unk_0xBCF9D020FA9C313D())
	{
		if (bParam2)
		{
			if (!unk_0xB03A1684359C50A1(Global_2415594.f_385, iVar0))
			{
				func_442();
			}
			unk_0xD2A9C3F486236CC5(&(Global_2415594.f_385), iVar0);
			Global_2415594.f_413[iVar0] = uVar1;
			Global_2415594.f_578[iParam0] = unk_0xBCF9D020FA9C313D();
		}
		else
		{
			if (unk_0xB03A1684359C50A1(Global_2415594.f_385, iVar0))
			{
				func_442();
			}
			unk_0x62148293B793073B(&(Global_2415594.f_385), iVar0);
			Global_2415594.f_578[iParam0] = -1;
		}
	}
}

void func_442()
{
	Global_2415594.f_1009 = 1;
}

void func_443()
{
	int iVar0;
	int iVar1;
	
	if (!func_406())
	{
		return;
	}
	if (!unk_0xB03A1684359C50A1(iLocal_735, 9))
	{
		unk_0xD2A9C3F486236CC5(&iLocal_735, 9);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x3479F6F64A48251C(iVar0);
			if (unk_0x4AF13BCD120BCDBC(iVar1))
			{
				if (iVar1 != unk_0x8CFC7D6E1DA5D304())
				{
					func_441(iVar1, 478, 0);
					func_439(iVar1, func_444(iLocal_849), 0);
				}
			}
			iVar0++;
		}
	}
}

int func_444(int iParam0)
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
	unk_0x954894782056D6CB(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_445()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xE769D9B5158D0F11(uLocal_835[iVar0]))
		{
			unk_0x40D517D991458154(&(uLocal_835[iVar0]));
		}
		iVar0++;
	}
	if (unk_0xE769D9B5158D0F11(uLocal_848))
	{
		unk_0x40D517D991458154(&uLocal_848);
	}
	if (unk_0xE769D9B5158D0F11(uLocal_846))
	{
		unk_0x40D517D991458154(&uLocal_846);
	}
	if (unk_0xE769D9B5158D0F11(uLocal_847))
	{
		unk_0x40D517D991458154(&uLocal_847);
	}
	if (unk_0xB03A1684359C50A1(iLocal_735, 12))
	{
		unk_0xEF5B50EACBB40FA0(uLocal_743);
		unk_0x2E46A60AC2DC5A3E("ALARM_BELL_02");
		unk_0x62148293B793073B(&iLocal_735, 12);
	}
	if (((func_419("DCONTRA_HLP1") || func_419("DCONTRA_HLP2")) || func_419("DCONTRA_HLPVCR")) || func_419("DCONTRA_HLPCR"))
	{
		unk_0xEFF1F12403847394(1);
	}
	func_446();
}

void func_446()
{
	if (unk_0xB03A1684359C50A1(iLocal_735, 14))
	{
		func_215();
		func_207(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
		unk_0x62148293B793073B(&iLocal_735, 14);
	}
}

void func_447(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xD2A9C3F486236CC5(&(Global_2512581.f_4878.f_7[iVar0]), iVar1);
}

bool func_448(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xB03A1684359C50A1(Global_2512581.f_4878.f_7[iVar0], iVar1);
}

void func_449()
{
	float fVar0;
	
	if (func_406())
	{
		if (unk_0xB03A1684359C50A1(Local_112.f_1, 9) || unk_0xB03A1684359C50A1(Local_112.f_1, 8))
		{
			func_450(func_502());
			if (!func_448(36))
			{
				func_447(36);
			}
		}
	}
	else if (func_11(&(Local_112.f_226)))
	{
		if (iLocal_745 <= 0)
		{
			func_450(func_502());
			if (!func_448(36))
			{
				func_447(36);
			}
		}
		else
		{
			fVar0 = (unk_0xBBDA792448DB5A89((iLocal_744 - iLocal_745)) / unk_0xBBDA792448DB5A89(iLocal_744));
			fVar0 = (fVar0 * 0.5f);
			func_450(fVar0);
			if (!func_448(37))
			{
				func_447(37);
			}
		}
	}
}

void func_450(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Local_112.f_197 + 1;
	iVar1 = func_501(iVar0);
	if (iVar1 > 0)
	{
		iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * fParam0));
		if (unk_0xBBDA792448DB5A89(iVar2) > (unk_0xBBDA792448DB5A89(iVar1) / 2f))
		{
			iVar2 = (iVar2 - 1);
		}
		func_451(iVar0, iVar2, 0, 0, &iLocal_746, 0);
	}
	else
	{
		unk_0xD2A9C3F486236CC5(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1), 13);
	}
}

void func_451(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5)
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
	iVar0 = func_501(iParam0);
	iVar1 = func_500(iParam0);
	if (!func_499())
	{
		if (iVar1 >= 0 && iVar0 >= iParam1)
		{
			iVar2 = (func_501(iParam0) - iParam1);
			iVar3 = 0;
			if (bParam5)
			{
				iVar3 = iParam1;
			}
			func_485(iParam0, iVar1, iVar2, iVar3, 0, 11);
			func_483(func_484(iVar1), iVar2, -1, 1);
			Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_84[iVar1 /*3*/].f_1 = iVar2;
			if (iVar3 != 0)
			{
				func_479(iParam0, iVar3);
				func_475(iParam0, iVar3);
			}
			if (unk_0x13C2BC1B63ABBCD5())
			{
				unk_0x61E6A7CD3E9B4E8B(10);
			}
			func_472(10, 0);
			*uParam4 = 2;
		}
		else
		{
			*uParam4 = 3;
		}
	}
	else if (iVar1 >= 0 && iVar0 >= iParam1)
	{
		iVar4 = (func_501(iParam0) - iParam1);
		iVar5 = 0;
		if (bParam5)
		{
			iVar5 = iParam1;
		}
		if (func_452(iVar1, iParam1, iVar5, iParam2, iParam3, uParam4, Global_2512581.f_4878.f_200))
		{
			if (*uParam4 == 2)
			{
				func_485(iParam0, iVar1, iVar4, iVar5, 0, 11);
				func_483(func_484(iVar1), iVar4, -1, 1);
				Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_84[iVar1 /*3*/].f_1 = iVar4;
				if (iVar5 != 0)
				{
					func_475(iParam0, iVar5);
				}
				if (unk_0x13C2BC1B63ABBCD5())
				{
					unk_0x61E6A7CD3E9B4E8B(10);
				}
				func_472(10, 0);
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

bool func_452(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (*uParam5 != 0 && *uParam5 != 1)
	{
		*uParam5 = 0;
	}
	switch (*uParam5)
	{
		case 0:
			iVar0 = func_471(iParam0);
			iVar1 = func_469(0, iParam1, 0, -1);
			iVar2 = func_468(iParam0);
			iVar3 = func_467(iParam0);
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
			if (iParam4 == 0 || func_463(78225582, -1799524201, iVar1, -788753717, 1, 0, 1, 4, iVar0, 3))
			{
				if (func_463(78225582, 69656641, iVar2, -788753717, iParam1, 0, 1, 4, 0, 3))
				{
					if (iParam2 == 0 || func_463(78225582, 69656641, iVar3, -788753717, iParam2, 0, 1, 4, 0, 3))
					{
						if (func_463(78225582, -739932302, iVar4, -788753717, 1, iParam3, 0, 4, iVar2, 3))
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
			if (*uParam5 == 1 && func_461())
			{
			}
			else
			{
				*uParam5 = 3;
				func_456(func_460());
			}
			break;
		
		case 1:
			if (func_455(func_460()))
			{
				if (func_454(func_460()) == 2)
				{
					if (iParam3 > 0)
					{
						unk_0x1072CD5DA055A7FA(func_453(func_460()));
						unk_0x7B213E5E67819D11(iParam3, uParam6);
					}
					*uParam5 = 2;
					func_456(func_460());
				}
				else
				{
					*uParam5 = 3;
					func_456(func_460());
				}
			}
			break;
	}
	return *uParam5 != 1;
}

int func_453(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/];
	}
	return -1;
}

int func_454(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_2;
	}
	return 0;
}

int func_455(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_2 != 1;
	}
	return 0;
}

void func_456(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_499())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_459(iParam0))
		{
			if (!bVar0)
			{
				unk_0x03E9246EC94148C2();
			}
		}
		else if (!bVar0)
		{
			unk_0xE5D55D650EDFDBAD(Global_4261865[iParam0 /*80*/]);
		}
		func_457(&(Global_4261865[iParam0 /*80*/]));
	}
}

void func_457(var uParam0)
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
	func_458(&(uParam0->f_8.f_3));
	func_458(&(uParam0->f_8.f_16));
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

void func_458(var uParam0)
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

int func_459(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

int func_460()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_453(iVar0) != 2147483647)
		{
			if (func_459(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_461()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_499())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_460();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0xB1A4F3B337C17BB1(func_36()) || unk_0x84F9D738F354D65C())
		{
			if (func_462(Global_4261865[iVar2 /*80*/].f_6, Global_4261865[iVar2 /*80*/].f_4, Global_4261865[iVar2 /*80*/].f_1) == 1)
			{
				Global_4262415 = 1;
			}
			return 0;
		}
		if (Global_2457935)
		{
			if (Global_4261865[iVar2 /*80*/].f_6 == 1067618600 || Global_4261865[iVar2 /*80*/].f_6 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_453(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0xE91076F2B8E481C8(iVar3))
		{
			Global_4261865[iVar2 /*80*/].f_74 = 1;
			Global_4261865[iVar2 /*80*/].f_73 = 0;
			Global_4261865[iVar2 /*80*/].f_75 = unk_0x756DE011CEDBBD7E();
			if (bVar0)
			{
				Global_4261865[iVar2 /*80*/].f_69 = 1;
				Global_4261865[iVar2 /*80*/].f_73 = 1;
			}
			Global_4261865[iVar2 /*80*/].f_79 = 0;
			Global_4262402 = 1;
			return 1;
		}
	}
	return 0;
}

int func_462(int iParam0, int iParam1, int iParam2)
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
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
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
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
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

int func_463(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_499())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xB1A4F3B337C17BB1(func_36()) || unk_0x84F9D738F354D65C())
		{
			Global_4262415 = 1;
			return 0;
		}
		if (Global_2457935)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_460();
	if (iVar1 == -1)
	{
		if (!func_465(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_464(iParam1))
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
		Global_4261865[iVar1 /*80*/].f_1 = Var2.f_2;
		Global_4261865[iVar1 /*80*/].f_76 = Var2.f_0;
		Global_4261865[iVar1 /*80*/].f_77 = Var2.f_1;
		if (bVar0 || unk_0xEC1ED563CEFC07BC(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_464(int iParam0)
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

int func_465(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_499())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xB1A4F3B337C17BB1(func_36()) || unk_0x84F9D738F354D65C())
		{
			Global_4262415 = 1;
			return 0;
		}
		if (Global_2457935)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_4261865[iVar1 /*80*/].f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4261865[iVar1 /*80*/].f_5 == 1)
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
		if (unk_0x33CEDD8141789508())
		{
			unk_0x03E9246EC94148C2();
		}
	}
	if (bVar0 || unk_0x10FA04307FB62A5E(&iVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_466(iVar3, uParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5, 0);
		return 1;
	}
	return 0;
}

int func_466(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8, int iParam9)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4261865[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_499())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4261865[iVar0 /*80*/].f_2 = 1;
			Global_4261865[iVar0 /*80*/].f_1 = iParam5;
			Global_4261865[iVar0 /*80*/].f_3 = uParam1;
			Global_4261865[iVar0 /*80*/].f_4 = iParam2;
			Global_4261865[iVar0 /*80*/].f_7 = uParam3;
			Global_4261865[iVar0 /*80*/].f_5 = 0;
			Global_4261865[iVar0 /*80*/] = iParam0;
			Global_4261865[iVar0 /*80*/].f_6 = iParam4;
			Global_4261865[iVar0 /*80*/].f_72 = uParam8;
			Global_4261865[iVar0 /*80*/].f_71 = uParam7;
			Global_4261865[iVar0 /*80*/].f_74 = iParam9;
			Global_4261865[iVar0 /*80*/].f_73 = 0;
			Global_4261865[iVar0 /*80*/].f_75 = unk_0x756DE011CEDBBD7E();
			Global_4261865[iVar0 /*80*/].f_79 = 0;
			Global_4262402 = 0;
			if (bParam6)
			{
				Global_4261865[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_467(int iParam0)
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
	if (unk_0xFAFFA408239A026B(&cVar0))
	{
		return -1;
	}
	return unk_0x6E987D62C8535B6E(&cVar0);
}

int func_468(int iParam0)
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
	if (unk_0xFAFFA408239A026B(&cVar0))
	{
		return -1;
	}
	return unk_0x6E987D62C8535B6E(&cVar0);
}

int func_469(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	
	func_470(&sVar0, bParam0, iParam1, bParam2, iParam3);
	return unk_0x6E987D62C8535B6E(&sVar0);
}

void func_470(char* sParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
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

int func_471(int iParam0)
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
	if (unk_0xFAFFA408239A026B(&cVar0))
	{
		return -1;
	}
	return unk_0x6E987D62C8535B6E(&cVar0);
}

void func_472(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_474(iParam0, iParam1))
	{
		iVar0 = func_473();
		Global_2456686[iVar0] = iParam0;
	}
}

int func_473()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2456686[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_474(int iParam0, var uParam1)
{
	if (Global_1312842)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312854) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_475(int iParam0, int iParam1)
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
			if (Global_1808400[iVar0] == iParam0)
			{
				Global_1808393[iVar0] = 0;
				Global_1808400[iVar0] = 0;
				iVar1++;
			}
		}
		iVar0 = (iVar0 + -1);
	}
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_1808400[iVar0] == 0)
		{
			if (iVar2 == -1)
			{
				iVar2 = 0;
			}
		}
		else if (iVar2 != -1)
		{
			Global_1808393[iVar2] = Global_1808393[iVar0];
			Global_1808400[iVar2] = Global_1808400[iVar0];
			Global_1808393[iVar0] = 0;
			Global_1808400[iVar0] = 0;
			iVar2++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_477(func_478(iVar0), Global_1808393[iVar0], -1, 1);
		func_477(func_476(iVar0), Global_1808400[iVar0], -1, 1);
		iVar0++;
	}
}

int func_476(int iParam0)
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

var func_477(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xEBEF812390A22BFA((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xEBEF812390A22BFA((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xEBEF812390A22BFA((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xEBEF812390A22BFA((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xC221F80F6C68465A((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xEBEF812390A22BFA((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xC221F80F6C68465A((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xEBEF812390A22BFA((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xEBEF812390A22BFA((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xEBEF812390A22BFA((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xEBEF812390A22BFA((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xEBEF812390A22BFA((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0xEBEF812390A22BFA((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0xEBEF812390A22BFA((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - unk_0xEBEF812390A22BFA((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - unk_0xEBEF812390A22BFA((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - unk_0xEBEF812390A22BFA((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - unk_0xEBEF812390A22BFA((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0xEBEF812390A22BFA((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0xEBEF812390A22BFA((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xBE55308715B43107(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_478(int iParam0)
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

void func_479(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_482(func_500(iParam0));
	iVar1 = func_481(iVar0, -1, 0);
	if (iVar1 >= iParam1)
	{
		func_480(iVar0, (iVar1 - iParam1), -1, 1, 0);
	}
}

void func_480(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2522855[iParam0 /*3*/][func_402(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, iParam1, iParam3);
	}
}

int func_481(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2522855[iParam0 /*3*/][func_402(iParam1)];
	if (unk_0xD194C635833AC189(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_482(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3635;
	}
	else if (iParam0 == 1)
	{
		return 3636;
	}
	else if (iParam0 == 2)
	{
		return 3637;
	}
	else if (iParam0 == 3)
	{
		return 3638;
	}
	else if (iParam0 == 4)
	{
		return 3639;
	}
	return 3635;
}

void func_483(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2522855[iParam0 /*3*/][func_402(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1367820[func_402(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1367826[func_402(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1367832[func_402(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1367838[func_402(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1367796[func_402(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1367802[func_402(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1367808[func_402(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1367814[func_402(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1367772[func_402(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1367778[func_402(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1367784[func_402(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1367790[func_402(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1367844[func_402(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1367850[func_402(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1367856[func_402(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1367862[func_402(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1367868[func_402(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1367874[func_402(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1367880[func_402(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2548958[0 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2548958[1 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 2918:
			Global_2548958[2 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 3047:
			Global_2548958[3 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 7050:
			Global_2549041[func_402(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1367886[func_402(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1367892[func_402(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1367898[func_402(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1367904[func_402(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2548998[0 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2548998[1 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2548998[2 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2548998[3 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 3046:
			Global_2548998[4 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2549044[0 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2549044[1 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2549044[2 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2549044[3 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2549044[4 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2549060[0 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2549060[1 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2549060[2 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2549060[3 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2549060[4 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2548998[5 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2548958[4 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2549076[func_402(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2549085[func_402(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2549079[func_402(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2549088[func_402(iParam2)] = iParam1;
			break;
		
		case 3656:
			Global_2549082[func_402(iParam2)] = iParam1;
			break;
		
		case 3657:
			Global_2549091[func_402(iParam2)] = iParam1;
			break;
		
		case 3678:
			Global_2549094[func_402(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2548998[6 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2548958[5 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2548998[7 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2548958[6 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2548998[8 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2548958[7 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2548998[9 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 4006:
			Global_2548958[8 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2548998[10 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 4009:
			Global_2548958[9 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 4011:
			Global_2548998[11 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 4012:
			Global_2548958[10 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 6092:
			Global_2548998[12 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 6093:
			Global_2548958[11 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 6150:
			Global_2548998[13 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		case 6151:
			Global_2548958[12 /*3*/][func_402(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_484(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3630;
		
		case 1:
			return 3631;
		
		case 2:
			return 3632;
		
		case 3:
			return 3633;
		
		case 4:
			return 3634;
		
		default:
	}
	return 7870;
}

void func_485(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
		iVar0 = func_501(iParam0);
		while (iVar0 <= (iParam2 - 1))
		{
			if (iVar0 < func_498(iParam0))
			{
				if (iVar2 < iParam3)
				{
					if (func_496(func_497(iParam0), iVar0))
					{
						iVar3 = func_495(iParam5);
						func_493(iParam1, iVar0, func_494(iVar3), 1, -1);
						iVar2++;
					}
					else
					{
						iVar4 = 0;
						while (iVar4 <= (iParam2 - 1))
						{
							if (func_496(func_497(iParam0), iVar4))
							{
								if (!func_490(func_491(func_492(iParam1, iVar4, -1, -1))))
								{
									iVar5 = func_492(iParam1, iVar4, -1, -1);
									iVar6 = func_495(iParam5);
									func_493(iParam1, iVar4, func_494(iVar6), 1, -1);
									func_493(iParam1, (iParam2 - 1), iVar5, 1, -1);
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
					iVar8 = func_487(iParam0, iVar0, iParam5);
					if (iVar0 > 0 && !func_486(func_497(iParam0), iVar0))
					{
						while (iVar8 == func_491(func_492(iParam1, (iVar0 - 1), -1, -1)) && iVar7 < 10)
						{
							iVar8 = func_487(iParam0, iVar0, iParam5);
							iVar7++;
						}
					}
					if (iVar8 != 0)
					{
						if (func_492(iParam1, iVar0, -1, -1) == 0)
						{
							func_493(iParam1, iVar0, func_494(iVar8), 1, -1);
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
		while (iVar0 <= (func_501(iParam0) - 1))
		{
			if (iVar0 < func_498(iParam0))
			{
				if (iParam3 > 0)
				{
					iVar1 = 0;
					while (iVar1 <= (func_501(iParam0) - 1))
					{
						if (func_490(func_491(func_492(iParam1, iVar1, -1, -1))))
						{
							if (!func_490(func_491(func_492(iParam1, iVar0, -1, -1))))
							{
								iVar10 = func_492(iParam1, iVar1, -1, -1);
								func_493(iParam1, iVar1, func_492(iParam1, iVar0, -1, -1), 1, -1);
								func_493(iParam1, iVar0, iVar10, 1, -1);
							}
						}
						iVar1++;
					}
				}
				else if (func_490(func_491(func_492(iParam1, iVar0, -1, -1))))
				{
					bVar9 = false;
					iVar1 = 0;
					while (iVar1 <= 5)
					{
						if (!bVar9)
						{
							if (iParam2 >= iVar1)
							{
								if (func_496(func_497(iParam0), iVar1))
								{
									if (!func_490(func_491(func_492(iParam1, iVar1, -1, -1))))
									{
										iVar11 = func_492(iParam1, iVar1, -1, -1);
										func_493(iParam1, iVar1, func_492(iParam1, iVar0, -1, -1), 1, -1);
										func_493(iParam1, iVar0, iVar11, 1, -1);
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
		while (iVar0 <= (func_501(iParam0) - 1))
		{
			if (iVar0 < func_498(iParam0))
			{
				func_493(iParam1, iVar0, func_494(0), 1, -1);
			}
			iVar0++;
		}
	}
	Global_1808523 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1808519[iVar0] = 0;
		iVar0++;
	}
}

int func_486(int iParam0, int iParam1)
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

int func_487(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	iVar0 = unk_0x61E9B3BFA06B017B(0, 2);
	if (func_486(func_497(iParam0), iParam1))
	{
		iVar0 = unk_0x61E9B3BFA06B017B(0, 4);
	}
	bVar1 = false;
	if ((iVar0 == 1 || iVar0 == 2) || iVar0 == 3)
	{
		bVar1 = true;
	}
	uVar2 = func_489(func_497(iParam0), iParam1);
	return func_488(uParam2, uVar2, bVar1);
}

int func_488(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x61E9B3BFA06B017B(0, 2);
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
			iVar0 = unk_0x61E9B3BFA06B017B(0, 3);
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

int func_489(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return unk_0x61E9B3BFA06B017B(0, 2);
		
		case 2:
			if (((((((iParam1 > 13 && iParam1 < 21) || (iParam1 > 34 && iParam1 < 42)) || (iParam1 > 55 && iParam1 < 63)) || (iParam1 > 76 && iParam1 < 84)) || (iParam1 > 89 && iParam1 < 93)) || (iParam1 > 98 && iParam1 < 102)) || (iParam1 > 107 && iParam1 < 109))
			{
				return 1;
			}
			else
			{
				return unk_0x61E9B3BFA06B017B(0, 2);
			}
			break;
	}
	return -1;
}

int func_490(int iParam0)
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

int func_491(int iParam0)
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

int func_492(int iParam0, int iParam1, int iParam2, int iParam3)
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
	iVar18 = unk_0x6E987D62C8535B6E(&cVar2);
	iVar19 = (8 * (iParam1 % 8));
	if (0 != iVar18)
	{
		if (!unk_0x76DEA399E0EAFF3A(iVar18, &iVar0, iVar19, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

var func_493(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	iVar18 = unk_0x6E987D62C8535B6E(&cVar2);
	iVar19 = (8 * (iParam1 % 8));
	if (iParam2 < 0)
	{
		iParam2 = 255;
	}
	if (0 != iVar18)
	{
		uVar0 = unk_0xBE55308715B43107(iVar18, iParam2, iVar19, 8, iParam3);
	}
	return uVar0;
}

int func_494(int iParam0)
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

int func_495(var uParam0)
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

int func_496(int iParam0, int iParam1)
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

int func_497(int iParam0)
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

int func_498(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = func_497(iParam0);
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

int func_499()
{
	if (unk_0xC339C5C5B5E8BC5B())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

int func_500(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_84[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_501(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam0 == Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_84[iVar0 /*3*/])
			{
				return Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_84[iVar0 /*3*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

float func_502()
{
	if (!func_406())
	{
		return (unk_0xBBDA792448DB5A89(Global_262145.f_15277) * 0.01f);
	}
	return (unk_0xBBDA792448DB5A89(Global_262145.f_15278) * 0.01f);
}

int func_503()
{
	int iVar0;
	
	if (!func_34(unk_0x8CFC7D6E1DA5D304(), 0))
	{
		if (!func_504(1, 1, 1))
		{
			if (unk_0xB03A1684359C50A1(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1, 12))
			{
				unk_0x62148293B793073B(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1), 12);
			}
			return 0;
		}
		if (func_397())
		{
			if (unk_0xB03A1684359C50A1(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1, 12))
			{
				unk_0x62148293B793073B(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1), 12);
			}
			return 0;
		}
		if (!unk_0xB03A1684359C50A1(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1, 12))
		{
			unk_0xD2A9C3F486236CC5(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1), 12);
		}
	}
	else
	{
		iVar0 = func_405();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!unk_0xB03A1684359C50A1(Local_382[iVar0 /*11*/].f_1, 12))
		{
			return 0;
		}
	}
	return 1;
}

int func_504(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_533(unk_0x8CFC7D6E1DA5D304(), 29))
	{
		return 0;
	}
	if (func_241(unk_0x8CFC7D6E1DA5D304(), 21))
	{
		return 0;
	}
	if (bParam2)
	{
		if (unk_0x3AB73ED02FDAC9A8())
		{
			return 0;
		}
	}
	if (!func_315(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x7DF51A716BE7A07F())
		{
			return 0;
		}
	}
	if (func_532(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (func_531())
	{
		return 0;
	}
	if (func_384())
	{
		return 0;
	}
	if (func_530())
	{
		return 0;
	}
	if (func_378())
	{
		return 0;
	}
	if (unk_0x13C2BC1B63ABBCD5())
	{
		return 0;
	}
	if (func_101(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (!func_380())
	{
		return 0;
	}
	if (func_241(unk_0x8CFC7D6E1DA5D304(), 0) || func_241(unk_0x8CFC7D6E1DA5D304(), 3))
	{
		return 0;
	}
	if ((func_241(unk_0x8CFC7D6E1DA5D304(), 12) || func_241(unk_0x8CFC7D6E1DA5D304(), 14)) || func_241(unk_0x8CFC7D6E1DA5D304(), 13))
	{
		return 0;
	}
	if (func_528(unk_0x8CFC7D6E1DA5D304(), 0, 0, 0, 0, 0, 0, 0, 1))
	{
		if (!func_510())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_509())
		{
			return 0;
		}
	}
	if (Global_1794814)
	{
		return 0;
	}
	if (func_508(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (func_507())
	{
		return 0;
	}
	if (func_506(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_15, 4))
	{
		return 0;
	}
	if (func_505(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	return 1;
}

int func_505(int iParam0)
{
	if (Global_2422724[iParam0 /*420*/].f_276.f_4 != 0 || Global_2422724[iParam0 /*420*/].f_276.f_5)
	{
		return 1;
	}
	return 0;
}

int func_506(int iParam0)
{
	if (unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_15, 14))
	{
		return 1;
	}
	if (unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_15, 11))
	{
		return 1;
	}
	return 0;
}

int func_507()
{
	if (Global_4253357.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_508(int iParam0)
{
	if (!func_1162(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1595681[iParam0 /*678*/].f_35;
}

bool func_509()
{
	return Global_92881.f_316 > 0;
}

int func_510()
{
	int iVar0;
	
	iVar0 = func_222(unk_0x8CFC7D6E1DA5D304());
	if (((func_527(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_17) || func_526(unk_0x8CFC7D6E1DA5D304())) || func_525(unk_0x8CFC7D6E1DA5D304())) || func_520(unk_0x8CFC7D6E1DA5D304()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_519(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_518(iVar0) || func_517(iVar0))
		{
			return 1;
		}
	}
	if (func_434(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_517(iVar0))
		{
			return 1;
		}
	}
	if (func_516(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_515(iVar0))
		{
			return 1;
		}
	}
	if (func_514(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_513(iVar0))
		{
			return 1;
		}
	}
	if (func_512(unk_0x8CFC7D6E1DA5D304()))
	{
		if (func_511(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_511(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_512(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1162(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_435(Global_2422724[iParam0 /*420*/].f_324.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_513(int iParam0)
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

int func_514(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1162(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_435(Global_2422724[iParam0 /*420*/].f_324.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_515(int iParam0)
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

int func_516(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1162(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_435(Global_2422724[iParam0 /*420*/].f_324.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_517(int iParam0)
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

int func_518(int iParam0)
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

int func_519(int iParam0)
{
	if (func_152(Global_1595681[iParam0 /*678*/].f_266.f_17, -1))
	{
		return 1;
	}
	return 0;
}

int func_520(int iParam0)
{
	if (func_521(Global_1595681[iParam0 /*678*/].f_266.f_17, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_521(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_522(unk_0x8CFC7D6E1DA5D304(), 0);
	}
	if (bParam1)
	{
		if (func_522(unk_0x8CFC7D6E1DA5D304(), 0))
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

bool func_522(int iParam0, bool bParam1)
{
	if (Global_1595525 != func_57())
	{
		if (!func_524(Global_1595525))
		{
			return 0;
		}
		if (bParam1)
		{
			if (unk_0x8CFC7D6E1DA5D304() != Global_1595525)
			{
				if (unk_0xB03A1684359C50A1(Global_2422724[Global_1595525 /*420*/].f_210, 24) || func_523(Global_1595525))
				{
					return 1;
				}
			}
		}
	}
	return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_210, 24);
}

int func_523(int iParam0)
{
	if (iParam0 != func_57())
	{
		return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_210, 9);
	}
	return 0;
}

int func_524(int iParam0)
{
	if (iParam0 != func_57())
	{
		return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 2);
	}
	return 0;
}

int func_525(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1162(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_435(Global_2422724[iParam0 /*420*/].f_324.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_526(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1162(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_435(Global_2422724[iParam0 /*420*/].f_324.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_527(int iParam0)
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

int func_528(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (Global_1595681[iParam0 /*678*/].f_266.f_17 > 0)
	{
		if (bParam1)
		{
			if (unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_15, 0))
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
		if (func_526(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_434(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_525(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_516(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_514(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_512(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_529(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_529(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1162(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422724[iParam0 /*420*/].f_324.f_4 != func_57())
			{
				return func_435(Global_2422724[iParam0 /*420*/].f_324.f_1) == 8;
			}
		}
	}
	return 0;
}

bool func_530()
{
	return Global_1312854;
}

bool func_531()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_18, 0);
}

int func_532(int iParam0)
{
	if (func_100(iParam0, 1))
	{
		if (Global_1595681[iParam0 /*678*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_533(int iParam0, int iParam1)
{
	return unk_0xB03A1684359C50A1(Global_1627460[iParam0 /*530*/].f_11.f_5, iParam1);
}

int func_534(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_563(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_70 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_71 = iParam5;
	return func_535(&Var0);
}

int func_535(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2436169.f_2909)
		{
			return 0;
		}
	}
	func_545(uParam0, uParam0->f_16);
	func_544(uParam0);
	if (func_53())
	{
		func_544(uParam0);
	}
	if (func_543(uParam0->f_1))
	{
		func_536();
		if (Global_2436169.f_2591[0 /*79*/].f_2 == 0)
		{
			Global_2436169.f_2591[0 /*79*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2436169.f_2591[0 /*79*/].f_1 == 13 || Global_2436169.f_2591[0 /*79*/].f_1 == 53) || Global_2436169.f_2591[0 /*79*/].f_1 == 54) || Global_2436169.f_2591[0 /*79*/].f_1 == 58)
		{
			Global_2436169.f_2591[0 /*79*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2436169.f_2591[iVar0 + 1 /*79*/] = { Global_2436169.f_2591[iVar0 /*79*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2436169.f_2591[1 /*79*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2436169.f_2591[iVar0 /*79*/].f_2 == 0)
		{
			Global_2436169.f_2591[iVar0 /*79*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_536();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0xD2A9C3F486236CC5(&(Global_2436169.f_2591[iVar0 /*79*/].f_68), 1);
				Global_2436169.f_2591[iVar0 /*79*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86)
			{
				if (func_336(Global_2436169.f_2591[iVar0 /*79*/].f_1))
				{
					Global_2436169.f_2591[iVar0 /*79*/].f_2 = 5;
					unk_0xD2A9C3F486236CC5(&(Global_2436169.f_2591[iVar0 /*79*/].f_68), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_536()
{
	bool bVar0;
	
	if (Global_2436169.f_2910)
	{
		return;
	}
	if (!Global_71120)
	{
		Global_71120 = 1;
		bVar0 = true;
	}
	func_537();
	if (bVar0)
	{
		Global_71120 = 0;
	}
}

void func_537()
{
	Global_2436169.f_2911 = 0;
	Global_2436169.f_2911.f_578 = 0;
	func_541(&(Global_2436169.f_2911.f_1));
	Global_2436169.f_2911.f_1.f_1 = 0;
	func_538(&(Global_2436169.f_2911.f_1));
}

void func_538(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		unk_0xEBE532BFFE618875(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (unk_0xC339C5C5B5E8BC5B())
		{
			unk_0x76F4FB5EFF5BDED5(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xD6F1BD29497A51C8(0);
			unk_0xE2B30EB9B14EEAB2();
		}
		unk_0xEBE532BFFE618875(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0x3B82047F26E2CEDB(0);
		uParam0->f_564 = 0;
	}
	if (!Global_71120)
	{
		if (!unk_0xA43E30AC0AF7BE76(unk_0x0A91D180DDC7A1B8()))
		{
			if (!Global_71121)
			{
				if (unk_0xEC0ECEF2AF3FDA8D() && !func_540(0))
				{
					unk_0x8359CF51370FC969(800);
				}
			}
		}
	}
	func_539(0);
}

void func_539(int iParam0)
{
	Global_71112 = iParam0;
	Global_71113 = iParam0;
}

bool func_540(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

void func_541(var uParam0)
{
	func_542(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_542(var uParam0)
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

int func_543(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_544(var uParam0)
{
	if (func_338(uParam0->f_1))
	{
		uParam0->f_71 = func_295();
	}
}

void func_545(var uParam0, int iParam1)
{
	if (func_338(uParam0->f_1))
	{
		uParam0->f_72 = 1;
	}
	if (iParam1 == func_57() || !func_1162(iParam1, 0, 1))
	{
		return;
	}
	if (func_336(uParam0->f_1))
	{
		if (uParam0->f_70 == 1)
		{
			uParam0->f_72 = func_546(iParam1, -2, 0, 0);
		}
	}
}

int func_546(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
	if (func_103(iParam0))
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
		iVar0 = unk_0x1BE7B010C9B9841E(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1646129.f_112025[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_103(unk_0x8CFC7D6E1DA5D304()) || (func_562() && func_561())) && !unk_0xB03A1684359C50A1(Global_2512581.f_4556, 31))
	{
		uVar1 = func_560();
		if (unk_0x31F12808DC47A9E5(uVar1))
		{
			if (unk_0xEE1E09882FA264CA(iVar1))
			{
				if (unk_0xD3287DCBDBC58316(iVar1) != -1)
				{
					if (func_1162(unk_0xD3287DCBDBC58316(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x13C2BC1B63ABBCD5()) && iParam1 < 4)
						{
							if (Global_1646129.f_112025[iParam1] != -1)
							{
								return func_558(iParam1, iParam0, 0);
							}
							else
							{
								return func_553(iParam0, unk_0xD3287DCBDBC58316(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_553(iParam0, unk_0xD3287DCBDBC58316(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x13C2BC1B63ABBCD5()) && iParam1 < 4)
			{
				if (Global_1646129.f_112025[iParam1] != -1)
				{
					return func_558(iParam1, iParam0, 0);
				}
				else
				{
					return func_547(0, -1, 0);
				}
			}
			else
			{
				return func_547(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x13C2BC1B63ABBCD5()) && iParam1 < 4)
	{
		if (Global_1646129.f_112025[iParam1] != -1)
		{
			return func_558(iParam1, iParam0, 0);
		}
		else
		{
			return func_553(iParam0, unk_0x8CFC7D6E1DA5D304(), iParam1, bParam2, bParam3);
		}
	}
	return func_553(iParam0, unk_0x8CFC7D6E1DA5D304(), iParam1, bParam2, bParam3);
}

int func_547(bool bParam0, int iParam1, bool bParam2)
{
	return func_548(unk_0x8CFC7D6E1DA5D304(), bParam0, iParam1, bParam2);
}

int func_548(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x4AF13BCD120BCDBC(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x1BE7B010C9B9841E(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_99(iVar0, iParam2, 0) && !unk_0xB03A1684359C50A1(Global_1646129.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_552(1);
				}
				else
				{
					return func_552(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xB03A1684359C50A1(Global_1646129.f_4, 20))
			{
				return func_549(iVar0, iParam2, 1);
			}
			else
			{
				return func_549(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_552(1);
	}
	return func_552(0);
}

int func_549(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_551(iParam0, iParam1);
	if (func_550(Global_1646129.f_116948))
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

int func_550(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_8254[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_551(int iParam0, int iParam1)
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
			if (!func_99(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_552(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_553(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x1BE7B010C9B9841E(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1595681[iVar2 /*678*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_556(1))
			{
				iVar3 = func_294(iParam0);
				if (!iVar3 == -1)
				{
					return func_292(iVar3);
				}
			}
			if ((func_555(iParam1, iParam0, iVar0, 0) && !unk_0xB03A1684359C50A1(Global_1646129.f_15, 18)) || ((func_99(unk_0x1BE7B010C9B9841E(iParam1), unk_0x1BE7B010C9B9841E(iParam0), 0) && unk_0xB03A1684359C50A1(Global_1646129.f_15, 23)) && !unk_0xB03A1684359C50A1(Global_1646129.f_15, 18)))
			{
				return func_552(1);
			}
			else if (unk_0xB03A1684359C50A1(Global_1646129.f_15, 26))
			{
				return func_554(1);
			}
			else
			{
				return func_548(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574308 || Global_1574299) || Global_1595681[iParam0 /*678*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574308 == 1 && Global_1574318 == 0))
			{
				return func_552(1);
			}
			else
			{
				return func_548(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574303 && Global_1573838.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_294(iParam0);
	if (!iVar4 == -1)
	{
		return func_292(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_554(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_555(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x1BE7B010C9B9841E(iParam0) == -1 && unk_0x1BE7B010C9B9841E(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x1BE7B010C9B9841E(iParam0) == unk_0x1BE7B010C9B9841E(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x1BE7B010C9B9841E(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x1BE7B010C9B9841E(iParam0) == iParam2;
	}
	return unk_0x1BE7B010C9B9841E(iParam0) == iParam2;
}

int func_556(int iParam0)
{
	if ((func_158() || func_557()) || (func_53() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_557()
{
	return Global_2447128.f_15;
}

int func_558(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_980512.f_12[iParam0];
	if (func_556(1))
	{
		iVar2 = func_294(iParam1);
		if (!iVar2 == -1)
		{
			return func_292(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xB03A1684359C50A1(Global_1646129.f_97[iParam0 /*9938*/].f_5106[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_57())
	{
		if (Global_1646129.f_112025[iParam0] != -1 && Global_1646129.f_112025[iParam0] <= 4)
		{
			if (Global_1646129.f_112025[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_1646129.f_112025[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_1646129.f_112025[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_1646129.f_112025[iParam0] == 4)
			{
				if (unk_0xB03A1684359C50A1(Global_1646129.f_15, 29))
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
				iVar0 = Global_1646129.f_112025[iParam0];
			}
		}
		else
		{
			iVar0 = func_548(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xB03A1684359C50A1(Global_1646129.f_21, 13))
		{
			iVar0 = func_559(iParam0);
		}
		if (unk_0xB03A1684359C50A1(Global_1646129.f_24, 29))
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_559(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_1646129.f_138651;
			break;
		
		case 1:
			iVar0 = Global_1646129.f_138652;
			break;
		
		case 2:
			iVar0 = Global_1646129.f_138653;
			break;
		
		case 3:
			iVar0 = Global_1646129.f_138654;
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

var func_560()
{
	return Global_2359302.f_2;
}

bool func_561()
{
	return unk_0xB03A1684359C50A1(Global_2359302, 4);
}

bool func_562()
{
	return unk_0xB03A1684359C50A1(Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_18, 14);
}

void func_563(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_57();
	uParam1->f_17 = func_57();
	uParam1->f_18 = func_57();
	uParam1->f_19 = func_57();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_20), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_70 = 1;
	uParam1->f_73 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 0;
	uParam1->f_76 = 0;
	uParam1->f_72 = 0;
	StringCopy(&(uParam1->f_24), "", 64);
	StringCopy(&(uParam1->f_40), "", 64);
}

int func_564(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x44243F2E2F58B8E3() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), *uParam0);
		}
		else
		{
			return unk_0xB34837A3BB15AB69(unk_0x5E1037C28AA2B562(), *uParam0);
		}
	}
	return unk_0xB34837A3BB15AB69(unk_0x5AFB8ED811F05E4D(), *uParam0);
}

void func_565(int iParam0, bool bParam1, var uParam2, bool bParam3)
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
	var uVar11;
	var uVar12;
	int iVar13;
	bool bVar14;
	struct<2> Var15;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	
	func_723(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (bParam3)
		{
			iVar1 = (iVar1 + Global_262145.f_17422);
		}
		else
		{
			iVar1 = (iVar1 + func_722(iParam0, uParam2->f_13));
		}
		if (iParam0 == 233)
		{
			iVar6 = (uParam2->f_10 / uParam2->f_11) * 100;
			iVar1 = ((iVar1 / 100) * iVar6);
		}
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		if (bParam3 == 0)
		{
			iVar0 = (iVar0 + func_721(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_17421);
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
	if (func_719(iParam0))
	{
		if (bParam1)
		{
			if (func_718(unk_0x8CFC7D6E1DA5D304()) > 0)
			{
				func_717();
			}
			else
			{
				func_716();
			}
		}
		else
		{
			func_715();
		}
	}
	func_702(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_700(iParam0, uParam2, &iVar0, &iVar5);
	func_679(iParam0, uParam2, &iVar0, &iVar5);
	func_653(iParam0, uParam2, &iVar0, &iVar5, &iVar7);
	if (iParam0 == 168)
	{
		Global_2512581.f_4878.f_200 = uVar4;
	}
	else
	{
		Global_2512581.f_4878.f_200 = iVar5;
	}
	iVar8 = func_355();
	if (iVar8 != func_57() && iParam0 != 148)
	{
		if (func_290(unk_0x8CFC7D6E1DA5D304(), 0))
		{
			if (!func_325(unk_0x8CFC7D6E1DA5D304(), iVar8, 1))
			{
				func_638(&iVar0, 1);
			}
		}
	}
	func_634(iParam0, &iVar9, &iVar10);
	iVar1 = (iVar1 + iVar9);
	iVar0 = (iVar0 + iVar10);
	if (iVar1 > 0)
	{
		Global_1807007.f_10 = iVar1;
		func_633();
		func_594(0, unk_0x18F7BE9ACB7D08F4(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1807007.f_9 = iVar0;
		iVar13 = func_593();
		if (iVar13 != func_57())
		{
			func_592(iVar13, &uVar11, &uVar12);
		}
		bVar14 = !func_591(1);
		if (iParam0 == 168)
		{
			if (!func_499())
			{
				unk_0x7B213E5E67819D11(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_590())
			{
				if (!func_499())
				{
					Var15 = { func_589() };
					unk_0xFDC39FD70DC0CBBD(iVar0, unk_0x6E987D62C8535B6E(func_588(Var15.f_0)), func_587(Var15.f_0), iVar5);
				}
			}
			else if (func_499())
			{
				func_583(-856006867, iVar0, &iVar17, 0, 1, 0);
				Global_4261865[iVar17 /*80*/].f_8.f_54 = uVar11;
				Global_4261865[iVar17 /*80*/].f_8.f_55 = uVar12;
				Global_4261865[iVar17 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0x7B213E5E67819D11(iVar0, iVar5);
			}
		}
		else if (iParam0 == 226)
		{
			if (func_582())
			{
				if (!func_499())
				{
					unk_0xFDC39FD70DC0CBBD(iVar0, unk_0x6E987D62C8535B6E(func_588(func_581(unk_0x8CFC7D6E1DA5D304()))), 5, iVar5);
				}
			}
			else if (func_499())
			{
				func_583(-856006867, iVar0, &iVar18, 0, 1, 0);
				Global_4261865[iVar18 /*80*/].f_8.f_54 = uVar11;
				Global_4261865[iVar18 /*80*/].f_8.f_55 = uVar12;
				Global_4261865[iVar18 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0x7B213E5E67819D11(iVar0, iVar5);
			}
		}
		else if (iParam0 == 230)
		{
			if (func_582())
			{
				if (!func_499())
				{
					iVar19 = func_577(uParam2->f_16, iVar5);
					iVar20 = iVar0;
					if (iVar19 > 0)
					{
						iVar20 = (iVar20 - iVar19);
					}
					if (iVar7 > 0)
					{
						iVar20 = (iVar20 - iVar7);
					}
					unk_0x338E61993E6352F0(iVar20, iVar5, iVar7, iVar19, uParam2->f_16);
				}
			}
			else if (func_499())
			{
				func_583(463142405, iVar0, &iVar21, 0, 1, 0);
				Global_4261865[iVar21 /*80*/].f_8.f_54 = uVar11;
				Global_4261865[iVar21 /*80*/].f_8.f_55 = uVar12;
				Global_4261865[iVar21 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0x7B23758A5E790821(uVar11, uVar12, iVar0, bVar14);
			}
		}
		else if (iParam0 == 233)
		{
			if (func_499())
			{
				func_583(1407278493, iVar0, &iVar22, 0, 1, 0);
				Global_4261865[iVar22 /*80*/].f_8.f_54 = uVar11;
				Global_4261865[iVar22 /*80*/].f_8.f_55 = uVar12;
				Global_4261865[iVar22 /*80*/].f_8.f_56 = bVar14;
			}
			else
			{
				unk_0xED26584F6BDCBBFD(iVar0);
			}
		}
		else if (func_499())
		{
			func_583(-856006867, iVar0, &iVar23, 0, 1, 0);
			Global_4261865[iVar23 /*80*/].f_8.f_54 = uVar11;
			Global_4261865[iVar23 /*80*/].f_8.f_55 = uVar12;
			Global_4261865[iVar23 /*80*/].f_8.f_56 = bVar14;
		}
		else
		{
			unk_0xA57DCB671F3ED089(uVar11, uVar12, iVar0, bVar14);
		}
		func_576(iParam0, iVar0);
		if (func_575(iParam0))
		{
			if (func_574(iParam0) > -1)
			{
				func_573(func_574(iParam0), iVar0);
			}
		}
		Global_2458972 = iVar0;
		func_572(&Global_2457240, 0, 0);
	}
	if (func_244(unk_0x8CFC7D6E1DA5D304()) || func_296(unk_0x8CFC7D6E1DA5D304()))
	{
		func_566(iParam0);
	}
	if (func_424(iParam0))
	{
		Global_1807025.f_13 = iVar0;
		Global_1807025.f_14 = iVar1;
	}
	if (func_428(iParam0))
	{
		Global_1807078.f_13 = iVar0;
		Global_1807078.f_14 = iVar1;
	}
	if (func_515(iParam0))
	{
		Global_1807140.f_12 = iVar0;
		Global_1807140.f_13 = iVar1;
	}
	if (func_513(iParam0))
	{
		Global_1807183.f_12 = iVar0;
		Global_1807183.f_13 = iVar1;
	}
	if (func_511(iParam0))
	{
		Global_1807236.f_12 = iVar0;
		Global_1807236.f_13 = iVar1;
	}
}

void func_566(int iParam0)
{
	if (func_571(unk_0x8CFC7D6E1DA5D304()) && func_590())
	{
		if (func_518(iParam0))
		{
			func_569(7180, -1);
		}
		else if (func_568(iParam0))
		{
			func_569(7182, -1);
		}
		else if (func_323(iParam0, 1))
		{
			func_569(7183, -1);
		}
		else if (func_567(iParam0))
		{
			func_569(7184, -1);
		}
	}
}

int func_567(int iParam0)
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

int func_568(int iParam0)
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

void func_569(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_481(iParam0, func_402(iParam1), 0);
	iVar0++;
	if (!func_570(iParam0))
	{
		func_480(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_483(iParam0, iVar0, iParam1, 1);
	}
}

int func_570(int iParam0)
{
	if (Global_1367753)
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
			case 2918:
			case 3047:
			case 7050:
			case 3042:
			case 3043:
			case 3044:
			case 3045:
			case 3046:
			case 3221:
			case 3223:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3631:
			case 3632:
			case 3633:
			case 3634:
			case 3216:
			case 3210:
			case 3652:
			case 3653:
			case 3654:
			case 3655:
			case 3656:
			case 3657:
			case 3678:
			case 3219:
			case 3218:
			case 4003:
			case 4002:
			case 4006:
			case 4005:
			case 4009:
			case 4008:
			case 4012:
			case 4011:
			case 6093:
			case 6092:
			case 6151:
			case 6150:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_571(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_101, 14);
}

void func_572(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x44243F2E2F58B8E3() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xE92FCF3C05C2EF1D();
		}
		else
		{
			*uParam0 = unk_0x5E1037C28AA2B562();
		}
	}
	else
	{
		*uParam0 = unk_0x5AFB8ED811F05E4D();
	}
	uParam0->f_1 = 1;
}

void func_573(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2512581.f_272 = iParam0;
		if (iParam1 > Global_262145.f_5821)
		{
			iParam1 = Global_262145.f_5821;
		}
		Global_2512581.f_273 = iParam1;
		Global_2512581.f_274 = 0;
	}
}

int func_574(int iParam0)
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

int func_575(int iParam0)
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

void func_576(int iParam0, int iParam1)
{
	if (func_571(unk_0x8CFC7D6E1DA5D304()) && func_590())
	{
		if (func_518(iParam0) && iParam1 > 0)
		{
			func_480(7181, (func_481(7181, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

int func_577(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	
	fVar0 = func_580(iParam0, iParam1);
	fVar1 = (unk_0xBBDA792448DB5A89(func_578(iParam0, iParam1)) * fVar0);
	return unk_0xF2DB717A73826179(fVar1);
}

int func_578(int iParam0, int iParam1)
{
	return (func_579(iParam0) * iParam1);
}

int func_579(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_21374;
		
		case 0:
			return Global_262145.f_21375;
		
		case 1:
			return Global_262145.f_21376;
		
		case 2:
			return Global_262145.f_21377;
		
		case 3:
			return Global_262145.f_21378;
		
		case 4:
			return Global_262145.f_21379;
		
		case 5:
			return Global_262145.f_21380;
		
		case 6:
			return Global_262145.f_21381;
		
		case 7:
			return Global_262145.f_21382;
		
		default:
	}
	return 0;
}

float func_580(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21384);
	switch (iParam0)
	{
		case -1:
		case 8:
			return 0f;
		
		case 7:
			fVar0 = Global_262145.f_21386;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21383);
			break;
		
		case 3:
			fVar0 = Global_262145.f_21386;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21383);
			break;
		
		case 0:
			fVar0 = Global_262145.f_21387;
			break;
		
		case 1:
			fVar0 = Global_262145.f_21387;
			break;
		
		case 4:
			fVar0 = Global_262145.f_21387;
			break;
		
		case 6:
			fVar0 = Global_262145.f_21388;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21385);
			break;
		
		case 2:
			fVar0 = Global_262145.f_21388;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21385);
			break;
		
		case 5:
			fVar0 = Global_262145.f_21388;
			fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21385);
			break;
	}
	iVar2 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam1) / fVar1));
	return (unk_0xBBDA792448DB5A89(iVar2) * fVar0);
}

int func_581(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return Global_1595681[iParam0 /*678*/].f_266.f_160[5 /*12*/];
}

bool func_582()
{
	return func_243(unk_0x8CFC7D6E1DA5D304());
}

void func_583(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_499())
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
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
			if (iParam1 > 0)
			{
				func_584(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
			func_584(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_584(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_499())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xB1A4F3B337C17BB1(func_36()) || unk_0x84F9D738F354D65C())
		{
			Global_4262415 = 1;
			return 0;
		}
		if (Global_2457935)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4261865[iVar2 /*80*/].f_2 == 0)
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
	if ((bVar0 || iVar1) || unk_0x0F88B7BAE118271A(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xE91076F2B8E481C8(iVar4))
		{
			*uParam0 = func_466(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4261865[*uParam0 /*80*/].f_69 = 1;
					Global_4261865[*uParam0 /*80*/].f_73 = 1;
				}
			}
			Global_4262402 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4262414 = 1;
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_586(1, iParam4);
			Global_4262414 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_585(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_585(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xD2A9C3F486236CC5(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_137.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_456(iParam0);
	}
}

void func_586(int iParam0, var uParam1)
{
	Global_2459106 = uParam1;
	Global_2459105 = iParam0;
}

int func_587(int iParam0)
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

char* func_588(int iParam0)
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

struct<2> func_589()
{
	return Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_188;
}

bool func_590()
{
	return func_354(unk_0x8CFC7D6E1DA5D304());
}

bool func_591(bool bParam0)
{
	return func_290(unk_0x8CFC7D6E1DA5D304(), bParam0);
}

void func_592(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1627460[iParam0 /*530*/].f_11.f_8[0];
	*uParam2 = Global_1627460[iParam0 /*530*/].f_11.f_8[1];
}

int func_593()
{
	return Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11;
}

int func_594(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_595(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_595(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_605(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x31F12808DC47A9E5(iParam1))
		{
			if (unk_0xB6C2454233C8F532(iParam1))
			{
				uVar1 = unk_0x6DE4035D8BAB73B4(iParam1);
				func_601(unk_0x433176BD83D09D7E(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_596(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_596(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_599(iParam0, 1) };
	if (iParam0 == func_598(unk_0x18F7BE9ACB7D08F4()))
	{
		func_597(1);
	}
	func_601(Var0, iParam1, 0, sParam2, iParam3);
}

void func_597(int iParam0)
{
	Global_2436169.f_1774 = iParam0;
}

int func_598(int iParam0)
{
	return iParam0;
}

Vector3 func_599(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0xF662B8CF03C92579())
	{
		Var3 = { unk_0xF4A8F5CF2EF6A586(2) };
	}
	if (iParam0 == func_600(unk_0x18F7BE9ACB7D08F4()) && unk_0xC345D9AB8BB3AB24(unk_0xEBE31BF57A0E4641()) == 4)
	{
		Var0 = { unk_0x0AF3D0AB54EA2104(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		fVar6 = unk_0x93FDA3BF59E7B77F(iParam0);
		if (unk_0xC345D9AB8BB3AB24(unk_0xEBE31BF57A0E4641()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0x0D8E51F437C55570(unk_0x4F69FBD64CDF125B(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0xA89DC5E1C1F12DBF(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_600(int iParam0)
{
	return iParam0;
}

void func_601(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2436169.f_1173[iVar0 /*30*/].f_6 == 0 || Global_2436169.f_1173[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2436169.f_1173[iVar1 /*30*/] = { Param0 };
			Global_2436169.f_1173[iVar1 /*30*/].f_6 = 1;
			Global_2436169.f_1173[iVar1 /*30*/].f_4 = func_604(Global_2436169.f_1173[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2436169.f_1173[iVar1 /*30*/].f_7 = unk_0xE92FCF3C05C2EF1D();
			Global_2436169.f_1173[iVar1 /*30*/].f_3 = iParam3;
			Global_2436169.f_1173[iVar1 /*30*/].f_8 = iParam4;
			Global_2436169.f_1173[iVar1 /*30*/].f_9 = func_603();
			Global_2436169.f_1173[iVar1 /*30*/].f_10 = func_602();
			StringCopy(&(Global_2436169.f_1173[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2436169.f_1173[iVar1 /*30*/].f_26 = unk_0xCBD2990CF476037D(unk_0xE92FCF3C05C2EF1D(), iParam6);
		}
	}
}

int func_602()
{
	if (Global_2436169.f_1774)
	{
		Global_2436169.f_1774 = 0;
		return 1;
	}
	Global_2436169.f_1774 = 0;
	return 0;
}

var func_603()
{
	var uVar0;
	
	uVar0 = Global_2436169.f_1776;
	Global_2436169.f_1776 = 1;
	return uVar0;
}

float func_604(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x15EE504466B7BBD3(unk_0x1F977C2BDC83C388(), Param0, 1);
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

var func_605(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_606(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_606(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_632(unk_0x8CFC7D6E1DA5D304()) || func_631(unk_0x8CFC7D6E1DA5D304()))
	{
		if (Global_262145.f_8803 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_8803;
		}
	}
	else if (func_342() || func_630(unk_0x8CFC7D6E1DA5D304()))
	{
		if (Global_262145.f_21821 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_21821;
		}
	}
	else if (Global_262145.f_5872 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_5872;
	}
	if (func_629(uParam2))
	{
	}
	if (func_628())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_626(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_625(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_623(0, &iVar1);
					break;
				
				case 3:
					func_623(1, &iVar1);
					break;
				
				case 1:
					func_621(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1816884)
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
			func_620(1161, iVar1, -1);
			if (iParam1 == 0)
			{
				func_616((func_619(unk_0x8CFC7D6E1DA5D304()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x8BB8B0A092C2FA7B(iVar1, iParam8, iParam9);
				if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_39.f_2 != -1)
				{
					func_620(1162, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_611(iVar1);
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
				func_607((func_609(unk_0x8CFC7D6E1DA5D304()) + iVar1));
			}
			else
			{
				func_607((func_609(unk_0x8CFC7D6E1DA5D304()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_607(int iParam0)
{
	if (func_628())
	{
		Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_211.f_5 = iParam0;
		func_608(joaat("mpply_globalxp"), iParam0);
	}
}

void func_608(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, uParam1, 1);
	}
}

int func_609(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_1162(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x8CFC7D6E1DA5D304())
			{
				return func_610(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1595681[iParam0 /*678*/].f_211.f_5;
			}
		}
		else
		{
			return func_610(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_610(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0xD194C635833AC189(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_611(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_59(unk_0x8CFC7D6E1DA5D304()) };
	if (unk_0xE906D9FB40E35957())
	{
		if (unk_0x9FDA5C5DFB3FE364(&Var0))
		{
			iVar13 = func_614(func_615(&Var0));
			if (iVar13 == 0)
			{
				func_613(&Global_1367759, iParam0);
				func_612(joaat("mpply_crew_local_xp_0"), Global_1367759);
			}
			else if (iVar13 == 1)
			{
				func_613(&Global_1367760, iParam0);
				func_612(joaat("mpply_crew_local_xp_1"), Global_1367760);
			}
			else if (iVar13 == 2)
			{
				func_613(&Global_1367761, iParam0);
				func_612(joaat("mpply_crew_local_xp_2"), Global_1367761);
			}
			else if (iVar13 == 3)
			{
				func_613(&Global_1367762, iParam0);
				func_612(joaat("mpply_crew_local_xp_3"), Global_1367762);
			}
			else if (iVar13 == 4)
			{
				func_613(&Global_1367763, iParam0);
				func_612(joaat("mpply_crew_local_xp_4"), Global_1367763);
			}
		}
	}
}

void func_612(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xD92C8D8AF3C67820(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1367754 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1367756 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1367756 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1367757 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1367758 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1367759 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1367760 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1367761 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1367762 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1367763 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1367764 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1367765 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1367766 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1367767 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1367768 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1367769 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1367770 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_613(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_614(int iParam0)
{
	if (iParam0 == Global_1367754)
	{
		return 0;
	}
	else if (iParam0 == Global_1367755)
	{
		return 1;
	}
	else if (iParam0 == Global_1367756)
	{
		return 2;
	}
	else if (iParam0 == Global_1367757)
	{
		return 3;
	}
	else if (iParam0 == Global_1367758)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_615(var uParam0)
{
	if (unk_0xE906D9FB40E35957())
	{
		if (unk_0x9FDA5C5DFB3FE364(uParam0))
		{
			return Global_2456709;
		}
	}
	return Global_2456709;
}

void func_616(int iParam0, int iParam1, int iParam2)
{
	if (func_628())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8771 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1367874[func_402(-1)])
				{
					unk_0x8BB8B0A092C2FA7B(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1367874[func_402(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8770 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x8BB8B0A092C2FA7B(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8770 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x8BB8B0A092C2FA7B(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_174(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_211.f_1 = iParam0;
			Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_211.f_6 = func_617(iParam0, 1);
		}
		func_483(636, iParam0, -1, 1);
		func_480(637, func_617(iParam0, 1), -1, 1, 0);
		Global_1367874[func_402(-1)] = iParam0;
		func_472(7, 0);
	}
}

int func_617(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_618(iParam0, 0);
}

int func_618(int iParam0, int iParam1)
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
		if (Global_284737[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_284737[iVar3] < iParam0)
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

int func_619(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x8CFC7D6E1DA5D304())
			{
				return Global_1367874[func_402(-1)];
			}
			else if (func_174(iParam0))
			{
				return Global_1595681[iParam0 /*678*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1367874[func_402(-1)];
	}
	return 0;
}

void func_620(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_481(iParam0, func_402(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_570(iParam0))
	{
		func_480(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_483(iParam0, iVar0, iParam2, 1);
	}
}

void func_621(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x1BE7B010C9B9841E(unk_0x8CFC7D6E1DA5D304());
	iVar0 = 0;
	while (iVar0 < unk_0xF02902C16AF3CA92())
	{
		iVar4 = unk_0xF4E7C3C6384793AA(iVar0);
		if (unk_0x0CA6AB9C192005B8(iVar4))
		{
			iVar5 = unk_0x8A0B92A0286253B3(iVar4);
			if (unk_0x1BE7B010C9B9841E(iVar5) != -1)
			{
				if (unk_0x1BE7B010C9B9841E(iVar5) == iVar1 || func_99(unk_0x1BE7B010C9B9841E(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x8CFC7D6E1DA5D304())
					{
						if (func_60(unk_0x8CFC7D6E1DA5D304(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_622(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_622(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_622(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_623(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0xF02902C16AF3CA92())
		{
			iVar3 = iVar0;
			if (unk_0x0CA6AB9C192005B8(iVar3))
			{
				iVar4 = unk_0x8A0B92A0286253B3(iVar3);
				if (func_1162(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x8CFC7D6E1DA5D304())
					{
						iVar1++;
						if (func_60(unk_0x8CFC7D6E1DA5D304(), iVar4))
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
			if (func_1162(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x8CFC7D6E1DA5D304())
				{
					if (func_624(unk_0x8CFC7D6E1DA5D304(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_60(unk_0x8CFC7D6E1DA5D304(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_622(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_622(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_624(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_52(iParam0), func_52(iParam1));
	return 0f;
}

int func_625(int iParam0)
{
	int iVar0;
	
	if (unk_0xC7F65B9C83B8BF29() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_622(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_626(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x18DD02B781D4AD2F(iParam0) > func_619(unk_0x8CFC7D6E1DA5D304()))
		{
			iParam0 = -func_619(unk_0x8CFC7D6E1DA5D304());
		}
	}
	if (func_627(8000, 0, 0) > 0)
	{
		if (func_627(8000, 0, 0) < (iParam0 + func_619(unk_0x8CFC7D6E1DA5D304())))
		{
			iParam0 = (func_627(8000, 0, 0) - func_619(unk_0x8CFC7D6E1DA5D304()));
		}
	}
	return iParam0;
}

int func_627(int iParam0, bool bParam1, int iParam2)
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
	return Global_284737[iParam0];
}

int func_628()
{
	return 1;
}

int func_629(var uParam0)
{
	if (unk_0xE0C4A595CD61B7F2(uParam0))
	{
		return 1;
	}
	else if (unk_0x9D39145AD645E383(uParam0, "") || unk_0x9D39145AD645E383(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_630(int iParam0)
{
	return func_511(func_222(iParam0));
}

bool func_631(int iParam0)
{
	return Global_2422724[iParam0 /*420*/].f_130 == 2;
}

bool func_632(int iParam0)
{
	return Global_2422724[iParam0 /*420*/].f_130 == 7;
}

void func_633()
{
	Global_2458314 = 1;
}

void func_634(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_200(7))
	{
		return;
	}
	iVar0 = func_637(iParam0);
	iVar1 = func_636(iParam0);
	iVar2 = unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(Global_2512581.f_4878.f_87, unk_0xE92FCF3C05C2EF1D()));
	if (func_635(iParam0) != -1)
	{
		if (iVar2 > func_635(iParam0))
		{
			iVar2 = func_635(iParam0);
		}
	}
	else if (iVar2 > Global_262145.f_11554)
	{
		iVar2 = Global_262145.f_11554;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_635(int iParam0)
{
	if (func_323(iParam0, 0) || func_568(iParam0))
	{
		return Global_262145.f_17627;
	}
	if (func_518(iParam0))
	{
		return Global_262145.f_17626;
	}
	switch (iParam0)
	{
		case 192:
			return Global_262145.f_17623;
		
		case 191:
			return Global_262145.f_17625;
		
		case 190:
			return Global_262145.f_17624;
		
		case 227:
			return Global_262145.f_20112;
		
		case 226:
			return Global_262145.f_20100;
		
		case 225:
			return Global_262145.f_20120;
		
		case 230:
			return Global_262145.f_21371;
		
		case 229:
			return Global_262145.f_21275;
		
		case 233:
			return Global_262145.f_21826;
		
		default:
	}
	return -1;
}

int func_636(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11645;
		
		case 152:
			return Global_262145.f_11680;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11668;
		
		case 157:
			return Global_262145.f_11635;
		
		case 159:
			return Global_262145.f_11618;
		
		case 164:
			return Global_262145.f_11658;
		
		case 160:
			return Global_262145.f_11708;
		
		case 162:
			return Global_262145.f_11728;
		
		case 163:
			return Global_262145.f_11693;
		
		case 154:
			return Global_262145.f_11763;
		
		case 155:
			return Global_262145.f_11753;
		
		case 153:
			return Global_262145.f_11717;
		
		case 170:
			return Global_262145.f_14140;
		
		case 171:
			return Global_262145.f_14199;
		
		case 172:
			return Global_262145.f_14217;
		
		case 173:
			return Global_262145.f_14158;
		
		case 166:
			return Global_262145.f_14173;
		
		case 167:
			return Global_262145.f_14264;
		
		case 169:
			return Global_262145.f_14236;
		
		case 168:
			return Global_262145.f_14229;
		
		case 179:
			return Global_262145.f_17506;
		
		case 180:
			return Global_262145.f_17285;
		
		case 182:
			return Global_262145.f_17285;
		
		case 183:
			return Global_262145.f_17285;
		
		case 185:
			return Global_262145.f_17285;
		
		case 186:
			return Global_262145.f_17285;
		
		case 189:
			return Global_262145.f_17506;
		
		case 190:
			return Global_262145.f_17161;
		
		case 191:
			return Global_262145.f_17252;
		
		case 192:
			return Global_262145.f_17046;
		
		case 193:
			return Global_262145.f_17506;
		
		case 194:
			return Global_262145.f_17506;
		
		case 195:
			return Global_262145.f_17285;
		
		case 197:
			return Global_262145.f_17285;
		
		case 198:
			return Global_262145.f_17285;
		
		case 199:
			return Global_262145.f_17506;
		
		case 200:
			return Global_262145.f_17506;
		
		case 201:
			return Global_262145.f_17506;
		
		case 205:
			return Global_262145.f_17506;
		
		case 207:
			return Global_262145.f_17285;
		
		case 208:
			return Global_262145.f_17285;
		
		case 209:
			return Global_262145.f_17285;
		
		case 210:
			return Global_262145.f_17506;
		
		case 211:
			return Global_262145.f_17506;
		
		case 214:
			return Global_262145.f_18321;
		
		case 215:
			return Global_262145.f_18323;
		
		case 216:
			return Global_262145.f_18325;
		
		case 217:
			return Global_262145.f_18327;
		
		case 218:
			return Global_262145.f_18329;
		
		case 219:
			return Global_262145.f_18331;
		
		case 220:
			return Global_262145.f_18333;
		
		case 221:
			return Global_262145.f_18335;
		
		case 225:
			if (func_591(0) || func_352(0))
			{
				return Global_262145.f_20122;
			}
			break;
		
		case 226:
			if (func_591(0) || func_352(0))
			{
				return Global_262145.f_20102;
			}
			break;
		
		case 227:
			if (func_591(0) || func_352(0))
			{
				return Global_262145.f_20114;
			}
			break;
		
		case 229:
			if (func_591(0) || func_352(0))
			{
				return Global_262145.f_21277;
			}
			break;
		
		case 230:
			if (func_591(0) || func_352(0))
			{
				return Global_262145.f_21373;
			}
			break;
		
		case 233:
			if (func_591(0) || func_352(0))
			{
				return Global_262145.f_21825;
			}
			break;
	}
	return 0;
}

int func_637(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_11644;
		
		case 152:
			return Global_262145.f_11679;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_11667;
		
		case 157:
			return Global_262145.f_11634;
		
		case 159:
			return Global_262145.f_11617;
		
		case 164:
			return Global_262145.f_11657;
		
		case 160:
			return Global_262145.f_11707;
		
		case 162:
			return Global_262145.f_11727;
		
		case 163:
			return Global_262145.f_11692;
		
		case 154:
			return Global_262145.f_11762;
		
		case 155:
			return Global_262145.f_11752;
		
		case 153:
			return Global_262145.f_11716;
		
		case 170:
			return Global_262145.f_14139;
		
		case 171:
			return Global_262145.f_14198;
		
		case 172:
			return Global_262145.f_14216;
		
		case 173:
			return Global_262145.f_14157;
		
		case 166:
			return Global_262145.f_14172;
		
		case 179:
			return Global_262145.f_17505;
		
		case 180:
			return Global_262145.f_17284;
		
		case 182:
			return Global_262145.f_17284;
		
		case 183:
			return Global_262145.f_17284;
		
		case 185:
			return Global_262145.f_17284;
		
		case 186:
			return Global_262145.f_17284;
		
		case 189:
			return Global_262145.f_17505;
		
		case 193:
			return Global_262145.f_17505;
		
		case 194:
			return Global_262145.f_17505;
		
		case 195:
			return Global_262145.f_17284;
		
		case 197:
			return Global_262145.f_17284;
		
		case 198:
			return Global_262145.f_17284;
		
		case 199:
			return Global_262145.f_17505;
		
		case 200:
			return Global_262145.f_17505;
		
		case 201:
			return Global_262145.f_17505;
		
		case 205:
			return Global_262145.f_17505;
		
		case 207:
			return Global_262145.f_17284;
		
		case 208:
			return Global_262145.f_17284;
		
		case 209:
			return Global_262145.f_17284;
		
		case 210:
			return Global_262145.f_17505;
		
		case 211:
			return Global_262145.f_17505;
		
		case 190:
			if (!func_582())
			{
				return Global_262145.f_17160;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_582())
			{
				return Global_262145.f_17251;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_582())
			{
				return Global_262145.f_17045;
			}
			else
			{
				return 0;
			}
			break;
		
		case 214:
			return Global_262145.f_18320;
		
		case 215:
			return Global_262145.f_18322;
		
		case 216:
			return Global_262145.f_18324;
		
		case 217:
			return Global_262145.f_18326;
		
		case 218:
			return Global_262145.f_18328;
		
		case 219:
			return Global_262145.f_18330;
		
		case 220:
			return Global_262145.f_18332;
		
		case 221:
			return Global_262145.f_18334;
		
		case 225:
			if (func_352(0))
			{
				return Global_262145.f_20121;
			}
			break;
		
		case 226:
			if (func_352(0))
			{
				return Global_262145.f_20101;
			}
			break;
		
		case 227:
			if (func_352(0))
			{
				return Global_262145.f_20113;
			}
			break;
		
		case 229:
			if (func_352(0))
			{
				return Global_262145.f_21276;
			}
			break;
		
		case 230:
			if (func_352(0))
			{
				return Global_262145.f_21372;
			}
			break;
		
		case 233:
			if (func_352(0))
			{
				return Global_262145.f_21827;
			}
			break;
	}
	return 0;
}

void func_638(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_582())
		{
			if (func_591(0))
			{
				if (!func_352(0))
				{
					if (unk_0x4AF13BCD120BCDBC(func_593()))
					{
						if (func_652() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_652());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_650(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_643("GB_BCUT_TICK1", func_593(), iVar0, 0, 0, 1, 1);
						}
						func_447(20);
						func_639(func_593(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_639(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_1162(iParam0, 0, 1))
	{
		Var0.f_0 = 2146699483;
		Var0.f_1 = unk_0x8CFC7D6E1DA5D304();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_642(iParam0);
		func_641(&(Var0.f_6), &(Var0.f_7));
		unk_0xDC8B8CF2FBDF3387(1, &Var0, 8, func_640(iParam0));
	}
}

int func_640(int iParam0)
{
	var uVar0;
	
	unk_0xD2A9C3F486236CC5(&uVar0, iParam0);
	return uVar0;
}

void func_641(var uParam0, var uParam1)
{
	*uParam0 = Global_1644422.f_9;
	*uParam1 = Global_1644422.f_10;
}

var func_642(int iParam0)
{
	return Global_1627460[iParam0 /*530*/].f_469;
}

int func_643(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x3E8AA4B2B7764D27(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x3E8AA4B2B7764D27(iParam1), 64);
		}
		if (unk_0xFAFFA408239A026B(&Var1))
		{
		}
		unk_0x55E6536147AC42E6(sParam0);
		unk_0x70A9E4720D71C2D5(func_546(iParam1, -2, 1, 0));
		unk_0xB4179F7E88F4C4BF(func_648(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x70A9E4720D71C2D5(iParam3);
		}
		unk_0x3A12001DBF78DC62(iParam2);
		iVar0 = unk_0xAA1D000B9BA8AF23(0, 1);
		func_644(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_644(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_647() || !unk_0x13C2BC1B63ABBCD5()) || !func_34(unk_0x8CFC7D6E1DA5D304(), 0))
	{
		return;
	}
	iVar0 = func_645(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1803650.f_5[iVar0 /*53*/] = iParam0;
		Global_1803650.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1803650.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1803650.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1803650.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1803650.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1803650.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1803650.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1803650.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1803650.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1803650.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1803650.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_645(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1803650 - 1))
	{
		if (iParam0 > Global_1803650.f_5[iVar0 /*53*/].f_1)
		{
			func_646(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1803650++;
	if (Global_1803650 > 5)
	{
		Global_1803650 = 5;
		return Global_1803650;
	}
	return (Global_1803650 - 1);
}

void func_646(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1803650.f_5[iVar0 /*53*/] = { Global_1803650.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_647()
{
	return unk_0x5E02CD27DBE77D67(-1762644250);
}

var func_648(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_649(&cVar0);
}

var func_649(char[4] cParam0)
{
	return cParam0;
}

void func_650(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_651(1);
	}
	else
	{
		iVar1 = func_651(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_651(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_11549;
}

int func_652()
{
	return Global_262145.f_11548;
}

void func_653(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4)
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
	bVar16 = func_352(1);
	bVar17 = false;
	if (iParam0 == 229)
	{
	}
	else if (iParam0 == 230)
	{
		if (func_582())
		{
			iVar15 = unk_0x8CFC7D6E1DA5D304();
		}
		else
		{
			iVar15 = func_593();
		}
		if (iVar15 != -1)
		{
			if (uParam1->f_16 == 8)
			{
				iVar0 = (func_677(iVar15) + uParam1->f_8);
			}
			else
			{
				iVar0 = (func_668(uParam1->f_16) + uParam1->f_8);
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
			iVar2 = func_578(uParam1->f_16, *uParam3);
			*iParam2 = (*iParam2 + iVar2);
			if (bVar17)
			{
				iVar9 = func_577(uParam1->f_16, *uParam3);
				if (iVar9 > 0)
				{
					*iParam2 = (*iParam2 + iVar9);
				}
			}
			if (func_667(*iParam2) > 0)
			{
				if (iVar15 == unk_0x8CFC7D6E1DA5D304())
				{
					func_666("SMTICK_RONCUT", func_667(*iParam2), 1);
				}
				*iParam2 = (*iParam2 - func_667(*iParam2));
			}
			if (iVar15 == unk_0x8CFC7D6E1DA5D304())
			{
				func_664(iVar2, iVar9);
				iVar6 = func_663(&uVar5);
				iVar7 = Global_262145.f_21390;
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar6) * Global_262145.f_21389));
				*uParam4 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + *uParam4);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_447(44);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar16)
					{
						iVar18 = 0;
						while (iVar18 < unk_0xF02902C16AF3CA92())
						{
							iVar19 = iVar18;
							if (unk_0x0CA6AB9C192005B8(iVar19))
							{
								iVar20 = unk_0x8A0B92A0286253B3(iVar19);
								if (func_662(iVar20))
								{
									func_654(iVar20, 1, 1160415507);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2512581.f_4878.f_199 = *iParam2;
			}
			else if (bVar16)
			{
				fVar14 = Global_262145.f_21323;
				iVar3 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_21324;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1816892 = *iParam2;
					func_447(121);
				}
			}
			else
			{
				*iParam2 = 0;
			}
		}
	}
}

void func_654(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_656(iParam0);
	func_655(iParam0, uVar0, iParam1, iParam2);
}

void func_655(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	
	Var0.f_0 = -1933172934;
	Var0.f_1 = unk_0x8CFC7D6E1DA5D304();
	Var0.f_2 = uParam1;
	Var0.f_4 = uParam2;
	Var0.f_3 = uParam3;
	Var0.f_5 = func_642(iParam0);
	func_641(&(Var0.f_6), &(Var0.f_7));
	if (iParam0 != func_57())
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			unk_0xDC8B8CF2FBDF3387(1, &Var0, 8, func_640(iParam0));
		}
	}
}

int func_656(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_661();
	iVar0 = func_659(iParam0, iVar0);
	iVar1 = Global_1627460[func_593() /*530*/].f_11.f_408;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_14100));
	if (iVar0 < func_658())
	{
		iVar0 = func_658();
	}
	if (iVar0 > func_657())
	{
		iVar0 = func_657();
	}
	return iVar0;
}

int func_657()
{
	return Global_262145.f_14101;
}

int func_658()
{
	return Global_262145.f_15276;
}

int func_659(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_718(iParam0) * func_660());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_660()
{
	return Global_262145.f_15275;
}

var func_661()
{
	return Global_262145.f_11540;
}

int func_662(int iParam0)
{
	if (unk_0x4AF13BCD120BCDBC(iParam0))
	{
		if (iParam0 != unk_0x8CFC7D6E1DA5D304())
		{
			if (func_325(iParam0, unk_0x8CFC7D6E1DA5D304(), 0))
			{
				if (!func_226(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_663(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0x4AF13BCD120BCDBC(unk_0x3479F6F64A48251C(iVar0)))
		{
			iVar2 = unk_0x3479F6F64A48251C(iVar0);
			if (!func_34(iVar2, 0) && !func_325(iVar2, unk_0x8CFC7D6E1DA5D304(), 1))
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

void func_664(int iParam0, int iParam1)
{
	if (iParam0 > 0)
	{
		func_665(iParam0, 6099);
	}
	if (iParam1 > 0)
	{
		func_665(iParam1, 6100);
	}
}

void func_665(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	iVar0 = func_481(iParam1, -1, 0);
	func_480(iParam1, (iVar0 + iParam0), -1, 1, 0);
}

int func_666(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x55E6536147AC42E6(sParam0);
	unk_0x3A12001DBF78DC62(iParam1);
	iVar0 = unk_0xAA1D000B9BA8AF23(0, 1);
	func_644(3, sParam0, 1, "", iParam1, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_667(int iParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = (fVar0 * Global_262145.f_21357);
	if (fVar1 > unk_0xBBDA792448DB5A89(Global_262145.f_21358))
	{
		fVar1 = unk_0xBBDA792448DB5A89(Global_262145.f_21358);
	}
	return unk_0xF2DB717A73826179(fVar1);
}

int func_668(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_675())
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		return func_677(unk_0x8CFC7D6E1DA5D304());
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		iVar2 = func_670(func_671(func_674(iVar0), -1, -1));
		if (func_669(iVar2) == iParam0)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_669(int iParam0)
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

int func_670(int iParam0)
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

int func_671(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	iVar1 = func_673(iParam0, iParam1);
	uVar2 = func_672(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x76DEA399E0EAFF3A(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_672(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xEBEF812390A22BFA((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xEBEF812390A22BFA((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xEBEF812390A22BFA((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xEBEF812390A22BFA((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xEBEF812390A22BFA((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xEBEF812390A22BFA((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xEBEF812390A22BFA((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xEBEF812390A22BFA((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xEBEF812390A22BFA((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xEBEF812390A22BFA((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xEBEF812390A22BFA((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0xEBEF812390A22BFA((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - unk_0xEBEF812390A22BFA((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - unk_0xEBEF812390A22BFA((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xEBEF812390A22BFA((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xEBEF812390A22BFA((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - unk_0xEBEF812390A22BFA((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = ((iParam0 - 18162) - unk_0xEBEF812390A22BFA((iParam0 - 18162)) * 8) * 8;
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
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xE0BE48057F22BA0F((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0xC221F80F6C68465A((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0xC221F80F6C68465A((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19016)
	{
		iVar0 = unk_0x392BDB38F78F7050((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	return iVar0;
}

int func_674(int iParam0)
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

bool func_675()
{
	return func_676() != 0;
}

int func_676()
{
	return Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_241;
}

int func_677(int iParam0)
{
	if (iParam0 != func_57() && func_678(iParam0))
	{
		return Global_1595681[iParam0 /*678*/].f_266.f_241.f_3;
	}
	return 0;
}

int func_678(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_1595681[iParam0 /*678*/].f_266.f_241 != 0;
	}
	return 0;
}

void func_679(int iParam0, var uParam1, int iParam2, var uParam3)
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
	
	bVar17 = func_352(1);
	if (iParam0 == 225)
	{
	}
	else if (iParam0 == 226)
	{
		if (func_582())
		{
			iVar15 = unk_0x8CFC7D6E1DA5D304();
		}
		else
		{
			iVar15 = func_593();
		}
		if (iVar15 != -1)
		{
			iVar16 = func_581(iVar15);
			iVar0 = (func_699(iVar15, iVar16) + uParam1->f_8);
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
			iVar2 = func_695(iVar15, iVar16, iVar1);
			if (uParam1->f_14 == 0)
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_20104));
			}
			else
			{
				iVar2 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar2) * Global_262145.f_20103));
			}
			*iParam2 = (*iParam2 + iVar2);
			if (iVar15 == unk_0x8CFC7D6E1DA5D304())
			{
				func_693(iVar16, iVar2);
				if (func_689(iVar16) >= Global_262145.f_19652 || iVar2 >= Global_262145.f_19652)
				{
					func_680(5);
				}
				iVar6 = func_663(&uVar5);
				iVar7 = unk_0xF2DB717A73826179(Global_262145.f_20106);
				if (iVar6 > iVar7)
				{
					iVar6 = iVar7;
				}
				iVar8 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar6) * Global_262145.f_20105));
				iVar9 = ((*iParam2 / 100) * iVar8);
				*iParam2 = (*iParam2 + iVar9);
				if (*iParam2 > 0)
				{
					if (iVar6 > 0)
					{
						func_447(108);
					}
					else
					{
						func_447(110);
					}
				}
				if (*iParam2 > 0)
				{
					if (!bVar17)
					{
						iVar18 = 0;
						while (iVar18 < unk_0xF02902C16AF3CA92())
						{
							iVar19 = iVar18;
							if (unk_0x0CA6AB9C192005B8(iVar19))
							{
								iVar20 = unk_0x8A0B92A0286253B3(iVar19);
								if (func_662(iVar20))
								{
									func_654(iVar20, 1, -1905128202);
								}
							}
							iVar18++;
						}
					}
				}
				Global_2512581.f_4878.f_199 = *iParam2;
			}
			else if (bVar17)
			{
				fVar14 = Global_262145.f_20107;
				iVar3 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar14));
				*iParam2 = iVar3;
				iVar4 = Global_262145.f_20108;
				if (*iParam2 > iVar4)
				{
					*iParam2 = iVar4;
				}
				if (*iParam2 > 0)
				{
					Global_1816892 = *iParam2;
					func_447(112);
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

void func_680(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_262145.f_19640)
			{
				if (func_682(Global_262145.f_19641))
				{
					func_681("CLOTHAWDSTRAP2", "CLOTHAWDDESC1", 0, 0, 0, 1);
				}
			}
			break;
		
		case 1:
			if (Global_262145.f_19642)
			{
				if (func_682(Global_262145.f_19643))
				{
					func_681("CLOTHAWDSTRAP2", "CLOTHAWDDESC2", 0, 0, 0, 1);
				}
			}
			break;
		
		case 2:
			if (Global_262145.f_19644)
			{
				if (func_682(Global_262145.f_19645))
				{
					func_681("CLOTHAWDSTRAP2", "CLOTHAWDDESC3", 0, 0, 0, 1);
				}
			}
			break;
		
		case 3:
			if (Global_262145.f_19646)
			{
				if (func_682(Global_262145.f_19647))
				{
					func_681("CLOTHAWDSTRAP2", "CLOTHAWDDESC5", 0, 0, 0, 1);
				}
			}
			break;
		
		case 4:
			if (Global_262145.f_19648)
			{
				if (func_682(Global_262145.f_19649))
				{
					func_681("CLOTHAWDSTRAP2", "CLOTHAWDDESC6", 0, 0, 0, 1);
				}
			}
			break;
		
		case 5:
			if (Global_262145.f_19650)
			{
				if (func_682(Global_262145.f_19651))
				{
					func_666("CLOTHAWDSTRAP3", Global_262145.f_19652, 1);
				}
			}
			break;
		
		case 6:
			if (Global_262145.f_19653)
			{
				if (func_682(Global_262145.f_19654))
				{
					func_666("CLOTHAWDSTRAP5", Global_262145.f_19786, 1);
				}
			}
			break;
		
		case 7:
			if (Global_262145.f_19656)
			{
				if (func_682(Global_262145.f_19657))
				{
					func_681("CLOTHAWDSTRAP2", "CLOTHAWDDESC8", 0, 0, 0, 1);
				}
			}
			break;
		
		case 8:
			if (Global_262145.f_19658)
			{
				if (func_682(Global_262145.f_19659))
				{
					func_681("CLOTHAWDSTRAP2", "CLOTHAWDDESC9", 0, 0, 0, 1);
				}
			}
			break;
		
		case 9:
			if (Global_262145.f_19660)
			{
				if (func_682(Global_262145.f_19661))
				{
					func_681("CLOTHAWDSTRAP2", "CLOTHAWDDESC10", 0, 0, 0, 1);
				}
			}
			break;
		
		case 10:
			if (Global_262145.f_19662)
			{
				if (func_682(Global_262145.f_19663))
				{
					func_681("CLOTHAWDSTRAP2", "CLOTHAWDDESC11", 0, 0, 0, 1);
				}
			}
			break;
		
		case 11:
			if (Global_262145.f_19664)
			{
				if (func_682(Global_262145.f_19665))
				{
					func_681("CLOTHAWDSTRAP2", "CLOTHAWDDESC12", 0, 0, 0, 1);
				}
			}
			break;
		
		case 12:
			if (Global_262145.f_19666)
			{
				if (func_682(Global_262145.f_19667))
				{
					func_681("CLOTHAWDSTRAP2", "CLOTHAWDDESC13", 0, 0, 0, 1);
				}
			}
			break;
		
		case 13:
			if (Global_262145.f_19668)
			{
				if (func_682(Global_262145.f_19669))
				{
					func_681("CLOTHAWDSTRAP2", "CLOTHAWDDESC14", 0, 0, 0, 1);
				}
			}
			break;
		
		case 14:
			if (Global_262145.f_19670)
			{
				if (func_682(Global_262145.f_19671))
				{
					func_681("CLOTHAWDSTRAP2", "CLOTHAWDDESC15", 0, 0, 0, 1);
				}
			}
			break;
	}
}

int func_681(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	unk_0x55E6536147AC42E6(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x70A9E4720D71C2D5(iParam2);
	}
	if (!iParam3 == 0)
	{
		unk_0x70A9E4720D71C2D5(iParam3);
	}
	unk_0xBEFD1ED9B6BE5127(sParam1);
	if (!bParam4)
	{
		iVar0 = unk_0xAA1D000B9BA8AF23(0, 1);
	}
	else
	{
		Global_2491936 = { func_59(unk_0x8CFC7D6E1DA5D304()) };
		if (unk_0x4AEF279CFD4A57C6(&Global_2491866, 35, &Global_2491936))
		{
			iVar1 = 0;
			if (unk_0x9D39145AD645E383(&(Global_2491866.f_22), "Leader") && Global_2491866.f_30 == 0)
			{
				iVar1 = 1;
			}
			if (Global_2491866.f_21 > 0)
			{
				iVar2 = 0;
			}
			else
			{
				iVar2 = 1;
			}
			iVar0 = unk_0x014CE29AD141E6E1(iVar2, unk_0x0574C6B9D1D311D7(&Global_2491866, 35), &(Global_2491866.f_17), Global_2491866.f_30, iVar1, 0, Global_2491866, unk_0x3E8AA4B2B7764D27(unk_0x8CFC7D6E1DA5D304()), Global_1314011, Global_1314012, Global_1314013);
		}
		else
		{
			iVar0 = unk_0xAA1D000B9BA8AF23(0, 1);
		}
	}
	func_644(8, sParam0, 1, sParam1, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

int func_682(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DLC_MP_GR_M_JBIB_19_0"):
		case joaat("DLC_MP_GR_F_JBIB_25_0"):
		case -1191485992:
		case joaat("CLO_GRF_U_25_0"):
			if (!func_686(15417, -1, -1))
			{
				func_685(15417, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_19_1"):
		case joaat("DLC_MP_GR_F_JBIB_25_1"):
		case -1407302654:
		case joaat("CLO_GRF_U_25_1"):
			if (!func_686(15418, -1, -1))
			{
				func_685(15418, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_JBIB_20_0"):
		case joaat("DLC_MP_GR_F_JBIB_26_0"):
		case joaat("CLO_GRM_U_20_0"):
		case -1850642937:
			if (!func_686(15425, -1, -1))
			{
				func_685(15425, 1, -1, 1);
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
			if (!func_686(15405, -1, -1))
			{
				func_685(15405, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_1"):
		case joaat("DLC_MP_GR_F_DECL_5_1"):
		case joaat("CLO_GRM_DECL_20"):
		case 1374601256:
			if (!func_686(15393, -1, -1))
			{
				func_685(15393, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_2"):
		case joaat("DLC_MP_GR_F_DECL_5_2"):
		case joaat("CLO_GRM_DECL_21"):
		case -660288110:
			if (!func_686(15409, -1, -1))
			{
				func_685(15409, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_3"):
		case joaat("DLC_MP_GR_F_DECL_5_3"):
		case -1005186539:
		case joaat("CLO_GRF_DECL_22"):
			if (!func_686(15396, -1, -1))
			{
				func_685(15396, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_4"):
		case joaat("DLC_MP_GR_F_DECL_5_4"):
		case joaat("CLO_GRM_DECL_23"):
		case -1132522169:
			if (!func_686(15412, -1, -1))
			{
				func_685(15412, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_5"):
		case joaat("DLC_MP_GR_F_DECL_5_5"):
		case 1110085176:
		case joaat("CLO_GRF_DECL_24"):
			if (!func_401(209, -1))
			{
				func_683(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_6"):
		case joaat("DLC_MP_GR_F_DECL_5_6"):
		case joaat("CLO_GRM_DECL_25"):
		case -182614393:
			if (!func_686(15403, -1, -1))
			{
				func_685(15403, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_7"):
		case joaat("DLC_MP_GR_F_DECL_5_7"):
		case -1496983695:
		case joaat("CLO_GRF_DECL_26"):
			if (!func_401(209, -1))
			{
				func_683(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_8"):
		case joaat("DLC_MP_GR_F_DECL_5_8"):
		case joaat("CLO_GRM_DECL_27"):
		case -646852824:
			if (!func_686(15389, -1, -1))
			{
				func_685(15389, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_9"):
		case joaat("DLC_MP_GR_F_DECL_5_9"):
		case 420690954:
		case joaat("CLO_GRF_DECL_28"):
			if (!func_401(209, -1))
			{
				func_683(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_DECL_5_10"):
		case joaat("DLC_MP_GR_F_DECL_5_10"):
		case joaat("CLO_GRM_DECL_29"):
		case 1717168382:
			if (!func_686(15398, -1, -1))
			{
				func_685(15398, 1, -1, 1);
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
			if (!func_686(15400, -1, -1))
			{
				func_685(15400, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_1"):
		case joaat("DLC_MP_GR_F_PHEAD_6_1"):
		case joaat("DLC_MP_GR_M_PHEAD_7_1"):
		case joaat("DLC_MP_GR_F_PHEAD_7_1"):
		case 2065127290:
		case joaat("CLO_GRF_PH_6_1"):
			if (!func_401(209, -1))
			{
				func_683(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_2"):
		case joaat("DLC_MP_GR_F_PHEAD_6_2"):
		case joaat("DLC_MP_GR_M_PHEAD_7_2"):
		case joaat("DLC_MP_GR_F_PHEAD_7_2"):
		case -56403312:
		case joaat("CLO_GRF_PH_6_2"):
			if (!func_686(15408, -1, -1))
			{
				func_685(15408, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_3"):
		case joaat("DLC_MP_GR_F_PHEAD_6_3"):
		case joaat("DLC_MP_GR_M_PHEAD_7_3"):
		case joaat("DLC_MP_GR_F_PHEAD_7_3"):
		case -292700571:
		case joaat("CLO_GRF_PH_6_3"):
			if (!func_401(209, -1))
			{
				func_683(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_4"):
		case joaat("DLC_MP_GR_F_PHEAD_6_4"):
		case joaat("DLC_MP_GR_M_PHEAD_7_4"):
		case joaat("DLC_MP_GR_F_PHEAD_7_4"):
		case -648899601:
		case joaat("CLO_GRF_PH_6_4"):
			if (!func_686(15411, -1, -1))
			{
				func_685(15411, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_5"):
		case joaat("DLC_MP_GR_F_PHEAD_6_5"):
		case joaat("DLC_MP_GR_M_PHEAD_7_5"):
		case joaat("DLC_MP_GR_F_PHEAD_7_5"):
		case -889194678:
		case joaat("CLO_GRF_PH_6_5"):
			if (!func_686(15397, -1, -1))
			{
				func_685(15397, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_6"):
		case joaat("DLC_MP_GR_F_PHEAD_6_6"):
		case joaat("DLC_MP_GR_M_PHEAD_7_6"):
		case joaat("DLC_MP_GR_F_PHEAD_7_6"):
		case 867092646:
		case joaat("CLO_GRF_PH_6_6"):
			if (!func_686(15413, -1, -1))
			{
				func_685(15413, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_7"):
		case joaat("DLC_MP_GR_F_PHEAD_6_7"):
		case joaat("DLC_MP_GR_M_PHEAD_7_7"):
		case joaat("DLC_MP_GR_F_PHEAD_7_7"):
		case 627387411:
		case joaat("CLO_GRF_PH_6_7"):
			if (!func_686(15391, -1, -1))
			{
				func_685(15391, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_8"):
		case joaat("DLC_MP_GR_F_PHEAD_6_8"):
		case joaat("DLC_MP_GR_M_PHEAD_7_8"):
		case joaat("DLC_MP_GR_F_PHEAD_7_8"):
		case joaat("CLO_GRM_PH_6_8"):
		case 1682427144:
			if (!func_686(15388, -1, -1))
			{
				func_685(15388, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_9"):
		case joaat("DLC_MP_GR_F_PHEAD_6_9"):
		case joaat("DLC_MP_GR_M_PHEAD_7_9"):
		case joaat("DLC_MP_GR_F_PHEAD_7_9"):
		case 35480964:
		case joaat("CLO_GRF_PH_6_9"):
			if (!func_401(209, -1))
			{
				func_683(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("DLC_MP_GR_M_PHEAD_6_10"):
		case joaat("DLC_MP_GR_F_PHEAD_6_10"):
		case joaat("DLC_MP_GR_M_PHEAD_7_10"):
		case joaat("DLC_MP_GR_F_PHEAD_7_10"):
		case joaat("CLO_GRM_PH_6_10"):
		case 1377465778:
			if (!func_686(15401, -1, -1))
			{
				func_685(15401, 1, -1, 1);
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
			if (!func_686(15394, -1, -1))
			{
				func_685(15394, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_001_M"):
		case joaat("MP_Gunrunning_Award_001_F"):
		case -1367129204:
		case joaat("CLO_GRF_DECL_1"):
			if (!func_401(209, -1))
			{
				func_683(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_002_M"):
		case joaat("MP_Gunrunning_Award_002_F"):
		case joaat("CLO_GRM_DECL_2"):
		case -1438775324:
			if (!func_686(15406, -1, -1))
			{
				func_685(15406, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_003_M"):
		case joaat("MP_Gunrunning_Award_003_F"):
		case -1686659723:
		case joaat("CLO_GRF_DECL_3"):
			if (!func_686(15395, -1, -1))
			{
				func_685(15395, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_004_M"):
		case joaat("MP_Gunrunning_Award_004_F"):
		case 1992217604:
		case joaat("CLO_GRF_DECL_4"):
			if (!func_401(209, -1))
			{
				func_683(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_005_M"):
		case joaat("MP_Gunrunning_Award_005_F"):
		case -1934557208:
		case joaat("CLO_GRF_DECL_5"):
			if (!func_686(15410, -1, -1))
			{
				func_685(15410, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_006_M"):
		case joaat("MP_Gunrunning_Award_006_F"):
		case -1034032319:
		case joaat("CLO_GRF_DECL_6"):
			if (!func_686(15407, -1, -1))
			{
				func_685(15407, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_007_M"):
		case joaat("MP_Gunrunning_Award_007_F"):
		case 1747334867:
		case joaat("CLO_GRF_DECL_7"):
			if (!func_401(209, -1))
			{
				func_683(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_008_M"):
		case joaat("MP_Gunrunning_Award_008_F"):
		case 236389050:
		case joaat("CLO_GRF_DECL_8"):
			if (!func_401(209, -1))
			{
				func_683(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_009_M"):
		case joaat("MP_Gunrunning_Award_009_F"):
		case joaat("CLO_GRM_DECL_9"):
		case 908992470:
			if (!func_686(15414, -1, -1))
			{
				func_685(15414, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_010_M"):
		case joaat("MP_Gunrunning_Award_010_F"):
		case joaat("CLO_GRM_DECL_10"):
		case -1021993708:
			if (!func_686(15415, -1, -1))
			{
				func_685(15415, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_011_M"):
		case joaat("MP_Gunrunning_Award_011_F"):
		case 479676642:
		case joaat("CLO_GRF_DECL_11"):
			if (!func_686(15399, -1, -1))
			{
				func_685(15399, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_012_M"):
		case joaat("MP_Gunrunning_Award_012_F"):
		case 242920617:
		case joaat("CLO_GRF_DECL_12"):
			if (!func_686(15404, -1, -1))
			{
				func_685(15404, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_013_M"):
		case joaat("MP_Gunrunning_Award_013_F"):
		case -1219723702:
		case joaat("CLO_GRF_DECL_13"):
			if (!func_401(209, -1))
			{
				func_683(209, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_014_M"):
		case joaat("MP_Gunrunning_Award_014_F"):
		case joaat("CLO_GRM_DECL_14"):
		case 2087194554:
			if (!func_686(15392, -1, -1))
			{
				func_685(15392, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_015_M"):
		case joaat("MP_Gunrunning_Award_015_F"):
		case joaat("CLO_GRM_DECL_15"):
		case 981732339:
			if (!func_686(15390, -1, -1))
			{
				func_685(15390, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_016_M"):
		case joaat("MP_Gunrunning_Award_016_F"):
		case joaat("CLO_GRM_DECL_16"):
		case 1271443068:
			if (!func_686(15402, -1, -1))
			{
				func_685(15402, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_017_M"):
		case joaat("MP_Gunrunning_Award_017_F"):
		case joaat("CLO_GRM_DECL_17"):
		case -1785118184:
			if (!func_686(15416, -1, -1))
			{
				func_685(15416, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_018_M"):
		case joaat("MP_Gunrunning_Award_018_F"):
		case 2029126042:
		case joaat("CLO_GRF_DECL_18"):
			if (!func_401(209, -1))
			{
				func_683(209, 1, -1, 1);
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
			if (!func_686(15426, -1, -1))
			{
				func_685(15426, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M"):
		case joaat("MP_Gunrunning_Award_020_F"):
		case 1281631799:
		case joaat("CLO_GRF_DECL_31"):
			if (!func_686(15422, -1, -1))
			{
				func_685(15422, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_020_M_ALT"):
		case joaat("MP_Gunrunning_Award_020_F_ALT"):
		case 447234752:
		case joaat("CLO_GRF_DECL_32"):
			if (!func_686(15423, -1, -1))
			{
				func_685(15423, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_021_M"):
		case joaat("MP_Gunrunning_Award_021_F"):
		case 278933172:
		case joaat("CLO_GRF_DECL_33"):
			if (!func_686(15421, -1, -1))
			{
				func_685(15421, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_022_M"):
		case joaat("MP_Gunrunning_Award_026_F"):
		case -562607521:
		case joaat("CLO_GRF_DECL_34"):
			if (!func_686(15427, -1, -1))
			{
				func_685(15427, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_023_M"):
		case joaat("MP_Gunrunning_Award_023_F"):
		case 755492739:
		case joaat("CLO_GRF_DECL_35"):
			if (!func_686(15419, -1, -1))
			{
				func_685(15419, 1, -1, 1);
				return 1;
			}
			break;
		
		case joaat("MP_Gunrunning_Award_024_M"):
		case joaat("MP_Gunrunning_Award_024_F"):
		case -85982412:
		case joaat("CLO_GRF_DECL_36"):
			if (!func_686(15420, -1, -1))
			{
				func_685(15420, 1, -1, 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_683(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_684())
	{
		iVar0 = Global_2547154[iParam0 /*3*/][func_402(iParam2)];
		if (iVar0 != 0)
		{
			unk_0x0F1BF2DD8A1C0A68(iVar0, iParam1, iParam3);
		}
	}
}

int func_684()
{
	return 1;
	return 0;
}

int func_685(int iParam0, int iParam1, int iParam2, int iParam3)
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
	var uVar17;
	
	if (iParam2 == -1)
	{
		iParam2 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
		iVar0 = unk_0xA03DD370BC425A31(uVar17, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_686(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar1 = func_688(iParam0, iParam1);
	uVar2 = func_687(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x4E4286C35FED641E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_687(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0xC83BD3A121E79D9F((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0xC83BD3A121E79D9F((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0xC83BD3A121E79D9F((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0xC83BD3A121E79D9F((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0xC83BD3A121E79D9F((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0xC83BD3A121E79D9F((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0xC83BD3A121E79D9F((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0xC83BD3A121E79D9F((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0xC83BD3A121E79D9F((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0xC83BD3A121E79D9F((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0xC83BD3A121E79D9F((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0xC83BD3A121E79D9F((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0xC83BD3A121E79D9F((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0xC83BD3A121E79D9F((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0xC83BD3A121E79D9F((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0xC83BD3A121E79D9F((iParam0 - 18098)) * 64);
	}
	return iVar0;
}

int func_688(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x88E3F30217D2CB3E((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0xBAF51F55DF57C4B2((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x45DE926FA3E8434A((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	return iVar0;
}

int func_689(int iParam0)
{
	int iVar0;
	
	iVar0 = func_691(iParam0);
	return func_481(func_690(iVar0), -1, 0);
}

int func_690(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3934;
		
		case 1:
			return 3935;
		
		case 2:
			return 3936;
		
		case 3:
			return 3937;
		
		case 4:
			return 3938;
		
		case 5:
			return 5439;
		
		default:
	}
	return 3934;
}

int func_691(int iParam0)
{
	int iVar0;
	
	if (func_692(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_160[iVar0 /*12*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_692(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

void func_693(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_691(iParam0);
	iVar1 = func_690(iVar0);
	iVar2 = (func_481(iVar1, -1, 0) + iParam1);
	func_480(iVar1, iVar2, -1, 1, 0);
	if (iVar0 == 5)
	{
		return;
	}
	if (func_671(9357, -1, -1) < 3)
	{
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_160[iVar0 /*12*/] != 0)
			{
				iVar1 = func_690(iVar0);
				iVar3 = (iVar3 + func_481(iVar1, -1, 0));
			}
			iVar0++;
		}
		iVar4 = 1;
		while (iVar4 <= 3)
		{
			if (iVar3 >= func_694(iVar4))
			{
				iVar5 = iVar4;
			}
			iVar4++;
		}
		func_477(9357, iVar5, -1, 1);
	}
}

int func_694(int iParam0)
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

int func_695(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_587(iParam1);
	if (func_692(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_16105;
				if (func_696(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16110);
				}
				if (func_696(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16115);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_16104;
				if (func_696(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16109);
				}
				if (func_696(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16114);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_16103;
				if (func_696(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16108);
				}
				if (func_696(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16113);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_16101;
				if (func_696(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16106);
				}
				if (func_696(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16111);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_16102;
				if (func_696(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_16107);
				}
				if (func_696(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_16112);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 5:
				iVar0 = Global_262145.f_20129;
				if (func_696(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_20131);
				}
				if (func_696(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_20130);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_696(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_698(iParam0, iParam1))
	{
		iVar0 = func_697(iParam0, iParam1);
		return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_697(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_692(iParam1) && iParam0 != func_57())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_698(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_692(iParam1) && iParam0 != func_57())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_699(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	if (func_692(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_700(int iParam0, var uParam1, int iParam2, var uParam3)
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
			if (func_590())
			{
				Var0 = { func_589() };
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
				iVar7 = func_695(unk_0x8CFC7D6E1DA5D304(), Var0.f_0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_17735);
					iVar7 = unk_0xF2DB717A73826179(fVar8);
				}
				else
				{
					fVar9 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_17734);
					iVar7 = unk_0xF2DB717A73826179(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_663(&uVar10);
				iVar12 = unk_0xF2DB717A73826179(Global_262145.f_17725);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar11) * Global_262145.f_17724));
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
					func_447(86);
				}
				Global_2512581.f_4878.f_199 = *iParam2;
			}
			else if (func_352(0))
			{
				Var15 = { func_701(func_593()) };
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
				iVar22 = func_695(func_593(), Var15.f_0, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_17735));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_17734));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_17774;
				iVar24 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_17775;
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

struct<2> func_701(int iParam0)
{
	return Global_1627460[iParam0 /*530*/].f_11.f_188;
}

void func_702(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
		if (func_243(unk_0x8CFC7D6E1DA5D304()))
		{
			if (bParam1)
			{
				func_714();
			}
			func_713();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_243(unk_0x8CFC7D6E1DA5D304()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_708(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_177));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_707(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_663(&uVar2);
					iVar4 = Global_262145.f_15286;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar3) * Global_262145.f_14495));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_447(44);
					}
				}
				func_705(*iParam3);
				func_704();
				Global_2512581.f_4878.f_199 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0xF02902C16AF3CA92())
				{
					iVar8 = iVar7;
					if (unk_0x0CA6AB9C192005B8(iVar8))
					{
						iVar9 = unk_0x8A0B92A0286253B3(iVar8);
						if (func_662(iVar9))
						{
							func_654(iVar9, 1, -1292453789);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_243(unk_0x8CFC7D6E1DA5D304()))
		{
			func_703();
		}
	}
}

void func_703()
{
	int iVar0;
	
	iVar0 = Global_2549082[func_36()];
	iVar0++;
	func_483(3656, iVar0, -1, 1);
}

void func_704()
{
	int iVar0;
	
	iVar0 = Global_2549088[func_36()];
	iVar0++;
	func_483(3655, iVar0, -1, 1);
}

void func_705(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2549091[func_36()];
	iVar0 = (iVar0 + iParam0);
	func_483(3657, iVar0, -1, 1);
	if (func_671(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_706(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_477(7666, iVar2, -1, 1);
	}
}

int func_706(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_15419;
			break;
		
		case 2:
			return Global_262145.f_15420;
			break;
		
		case 3:
			return Global_262145.f_15421;
			break;
		
		case 4:
			return Global_262145.f_15422;
			break;
		
		case 5:
			return Global_262145.f_15423;
			break;
		
		case 6:
			return Global_262145.f_15424;
			break;
		
		case 7:
			return Global_262145.f_15425;
			break;
		
		case 8:
			return Global_262145.f_15426;
			break;
		
		case 9:
			return Global_262145.f_15427;
			break;
		
		case 10:
			return Global_262145.f_15428;
			break;
		
		case 11:
			return Global_262145.f_15429;
			break;
		
		case 12:
			return Global_262145.f_15430;
			break;
		
		case 13:
			return Global_262145.f_15431;
			break;
		
		case 14:
			return Global_262145.f_15432;
			break;
		
		case 15:
			return Global_262145.f_15433;
			break;
		
		case 16:
			return Global_262145.f_15434;
			break;
		
		case 17:
			return Global_262145.f_15435;
			break;
		
		case 18:
			return Global_262145.f_15436;
			break;
		
		case 19:
			return Global_262145.f_15437;
			break;
		
		case 20:
			return Global_262145.f_15438;
			break;
		
		case 21:
			return Global_262145.f_15439;
			break;
		
		case 22:
			return Global_262145.f_15440;
			break;
		
		case 23:
			return Global_262145.f_15441;
			break;
		
		case 24:
			return Global_262145.f_15442;
			break;
	}
	return 0;
}

var func_707(int iParam0)
{
	if (iParam0 >= Global_262145.f_14473)
	{
		return Global_262145.f_14494;
	}
	else if (iParam0 >= Global_262145.f_14472)
	{
		return Global_262145.f_14493;
	}
	else if (iParam0 >= Global_262145.f_14471)
	{
		return Global_262145.f_14492;
	}
	else if (iParam0 >= Global_262145.f_14470)
	{
		return Global_262145.f_14491;
	}
	else if (iParam0 >= Global_262145.f_14469)
	{
		return Global_262145.f_14490;
	}
	else if (iParam0 >= Global_262145.f_14468)
	{
		return Global_262145.f_14489;
	}
	else if (iParam0 >= Global_262145.f_14467)
	{
		return Global_262145.f_14488;
	}
	else if (iParam0 >= Global_262145.f_14466)
	{
		return Global_262145.f_14487;
	}
	else if (iParam0 >= Global_262145.f_14465)
	{
		return Global_262145.f_14486;
	}
	else if (iParam0 >= Global_262145.f_14464)
	{
		return Global_262145.f_14485;
	}
	else if (iParam0 >= Global_262145.f_14463)
	{
		return Global_262145.f_14484;
	}
	else if (iParam0 >= Global_262145.f_14462)
	{
		return Global_262145.f_14483;
	}
	else if (iParam0 >= Global_262145.f_14461)
	{
		return Global_262145.f_14482;
	}
	else if (iParam0 >= Global_262145.f_14460)
	{
		return Global_262145.f_14481;
	}
	else if (iParam0 >= Global_262145.f_14459)
	{
		return Global_262145.f_14480;
	}
	else if (iParam0 >= Global_262145.f_14458)
	{
		return Global_262145.f_14479;
	}
	else if (iParam0 >= Global_262145.f_14457)
	{
		return Global_262145.f_14478;
	}
	else if (iParam0 >= Global_262145.f_14456)
	{
		return Global_262145.f_14477;
	}
	else if (iParam0 >= Global_262145.f_14455)
	{
		return Global_262145.f_14476;
	}
	else if (iParam0 >= Global_262145.f_14454)
	{
		return Global_262145.f_14475;
	}
	return Global_262145.f_14474;
}

int func_708(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_712(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_711(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_710(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_709(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_709(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_710(unk_0x61E9B3BFA06B017B(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_709(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = func_482(func_500(iParam0));
		return func_481(iVar0, -1, 0);
	}
	return 0;
}

int func_710(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_14673;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_14671;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_14675;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_14669;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_14667;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_14677;
	}
	return 0;
}

int func_711(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1808393[iVar0] == iParam1 && Global_1808400[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_712(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_84[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_713()
{
	int iVar0;
	
	iVar0 = Global_2549079[func_36()];
	iVar0++;
	Global_2549079[func_36()] = iVar0;
	func_483(3654, iVar0, -1, 1);
}

void func_714()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2549076[func_36()];
	iVar1 = Global_2549085[func_36()];
	iVar0++;
	iVar1++;
	Global_2549076[func_36()] = iVar0;
	Global_2549085[func_36()] = iVar1;
	Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_106 = iVar1;
	func_483(3652, iVar0, -1, 1);
	func_483(3653, iVar1, -1, 1);
}

void func_715()
{
	if (func_582())
	{
		Global_2447908.f_3066.f_134 = 0;
		Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_408 = Global_2447908.f_3066.f_134;
	}
}

void func_716()
{
	if (func_582())
	{
		if (Global_2447908.f_3066.f_134 < 10)
		{
			Global_2447908.f_3066.f_134++;
			Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_408 = Global_2447908.f_3066.f_134;
		}
	}
}

void func_717()
{
	if (func_582())
	{
		if (Global_2447908.f_3066.f_134 > 0)
		{
			Global_2447908.f_3066.f_134 = (Global_2447908.f_3066.f_134 - 1);
			Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_408 = Global_2447908.f_3066.f_134;
		}
	}
}

int func_718(int iParam0)
{
	return Global_1627460[iParam0 /*530*/].f_11.f_28;
}

int func_719(int iParam0)
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
		case 233:
			if (func_591(1) && !func_352(1))
			{
				if (func_720(func_593()))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_720(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_15, 26);
}

int func_721(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11665) * Global_262145.f_11670));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11615) * Global_262145.f_11620));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11642) * Global_262145.f_11646));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11655) * Global_262145.f_11659));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11677) * Global_262145.f_11682));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11839) * Global_262145.f_11840));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11845) * Global_262145.f_11846));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11843) * Global_262145.f_11844));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11837) * Global_262145.f_11838));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11841) * Global_262145.f_11842));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11835) * Global_262145.f_11836));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_14196;
		
		case 172:
			return Global_262145.f_14212;
		
		case 173:
			return Global_262145.f_14155;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_17429;
		
		case 180:
			return Global_262145.f_17305;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_17313;
		
		case 185:
			return Global_262145.f_17322;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_17517;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_17534;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_17382;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_17565;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_17443;
		
		case 205:
			return Global_262145.f_17552;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_17410;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_17547;
		
		case 211:
			return Global_262145.f_17511;
		
		case 214:
			return Global_262145.f_18070;
		
		case 215:
			return Global_262145.f_18080;
		
		case 216:
			return Global_262145.f_18090;
		
		case 217:
			return Global_262145.f_18099;
		
		case 218:
			return Global_262145.f_18108;
		
		case 219:
			return Global_262145.f_18124;
		
		default:
	}
	return 0;
}

int func_722(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11666) * Global_262145.f_11671));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11616) * Global_262145.f_11621));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11643) * Global_262145.f_11647));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11656) * Global_262145.f_11660));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11678) * Global_262145.f_11683));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11715) * Global_262145.f_11718));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11761) * Global_262145.f_11764));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11751) * Global_262145.f_11754));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11706) * Global_262145.f_11709));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11726) * Global_262145.f_11731));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11691) * Global_262145.f_11694));
		
		case 170:
			return Global_262145.f_14138;
		
		case 171:
			return Global_262145.f_14197;
		
		case 172:
			return Global_262145.f_14213;
		
		case 173:
			return Global_262145.f_14156;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_16233;
		
		case 168:
			return Global_262145.f_16232;
		
		case 179:
			return Global_262145.f_17430;
		
		case 180:
			return Global_262145.f_17306;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_17314;
		
		case 185:
			return Global_262145.f_17323;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_17518;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_17535;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_17383;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_17566;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_17444;
		
		case 205:
			return Global_262145.f_17553;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_17411;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_17548;
		
		case 211:
			return Global_262145.f_17512;
		
		case 214:
			return Global_262145.f_18071;
		
		case 215:
			return Global_262145.f_18081;
		
		case 216:
			return Global_262145.f_18091;
		
		case 217:
			return Global_262145.f_18100;
		
		case 218:
			return Global_262145.f_18109;
		
		case 219:
			return Global_262145.f_18125;
		
		case 178:
			if (func_582())
			{
				return Global_262145.f_17948;
			}
			else if (bParam1)
			{
				return Global_262145.f_17949;
			}
			break;
		
		case 188:
			if (func_582())
			{
				return Global_262145.f_18032;
			}
			else if (bParam1)
			{
				return Global_262145.f_18033;
			}
			break;
		
		case 225:
			if (func_582() && !func_590())
			{
				if (func_720(unk_0x8CFC7D6E1DA5D304()))
				{
					return Global_262145.f_20117;
				}
				else
				{
					return Global_262145.f_20118;
				}
			}
			else if (func_590())
			{
				return Global_262145.f_20119;
			}
			break;
		
		case 226:
			if (func_582() && !func_590())
			{
				if (func_720(unk_0x8CFC7D6E1DA5D304()))
				{
					return Global_262145.f_20097;
				}
				else
				{
					return Global_262145.f_20098;
				}
			}
			else if (func_590())
			{
				return Global_262145.f_20099;
			}
			break;
		
		case 227:
			if (func_582() && !func_590())
			{
				if (func_720(unk_0x8CFC7D6E1DA5D304()))
				{
					return Global_262145.f_20109;
				}
				else
				{
					return Global_262145.f_20110;
				}
			}
			else if (func_590())
			{
				return Global_262145.f_20111;
			}
			break;
		
		case 229:
			if (func_582() && !func_590())
			{
				if (func_720(unk_0x8CFC7D6E1DA5D304()))
				{
					return Global_262145.f_21272;
				}
				else
				{
					return Global_262145.f_21273;
				}
			}
			else if (func_590())
			{
				return Global_262145.f_21274;
			}
			break;
		
		case 230:
			if (func_582() && !func_590())
			{
				if (func_720(unk_0x8CFC7D6E1DA5D304()))
				{
					return Global_262145.f_21368;
				}
				else
				{
					return Global_262145.f_21369;
				}
			}
			else if (func_590())
			{
				return Global_262145.f_21370;
			}
			break;
		
		case 233:
			if (func_582() && !func_590())
			{
				if (func_720(unk_0x8CFC7D6E1DA5D304()))
				{
					return Global_262145.f_21823;
				}
				else
				{
					return Global_262145.f_21824;
				}
			}
			else if (func_590())
			{
				return Global_262145.f_21822;
			}
			break;
	}
	return 0;
}

void func_723(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_724(iParam0))
	{
		if (!func_582())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_11559;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_424(iParam0))
	{
		*uParam1 = (Global_262145.f_17283 / 100f);
		*uParam2 = (Global_262145.f_17283 / 100f);
	}
	else
	{
		*uParam1 = Global_262145.f_11558;
		*uParam2 = Global_262145.f_11557;
	}
	if (func_424(iParam0))
	{
		if (func_290(unk_0x8CFC7D6E1DA5D304(), 1))
		{
			*uParam1 = (Global_262145.f_17282 / 100f);
			*uParam2 = (Global_262145.f_17282 / 100f);
		}
	}
	else if (func_290(unk_0x8CFC7D6E1DA5D304(), 1))
	{
		*uParam1 = Global_262145.f_11556;
		*uParam2 = Global_262145.f_11555;
	}
	iVar0 = func_355();
	if (iVar0 != func_57())
	{
		if (func_325(unk_0x8CFC7D6E1DA5D304(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_724(int iParam0)
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

void func_725(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_222(unk_0x8CFC7D6E1DA5D304());
	if (func_424(iVar0))
	{
		Global_1807025.f_2 = func_786();
		Global_1807025.f_3 = func_785();
		Global_1807025.f_50 = iParam4;
		Global_1807025.f_51 = iParam5;
		Global_1807025.f_10 = unk_0xE6E19D6A1FC25165();
		Global_1807025.f_20 = (Global_1807025.f_10 - Global_1807025.f_9);
		Global_1807025.f_12 = iParam1;
		Global_1807025.f_19 = func_779(iVar0, bParam0, func_784(bParam3));
		if (bParam0)
		{
			Global_1807025.f_11 = 1;
		}
		else
		{
			Global_1807025.f_11 = 0;
		}
		if ((func_244(unk_0x8CFC7D6E1DA5D304()) || func_396(unk_0x8CFC7D6E1DA5D304())) || func_296(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1807025.f_8 = 1;
		}
		else
		{
			Global_1807025.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1807025.f_43 = 0;
			Global_1807025.f_45 = func_778(func_593(), iParam2);
			Global_1807025.f_47 = iParam7;
			Global_1807025.f_46 = iParam6;
			Global_1807025.f_52 = func_777(func_593(), iParam2);
		}
		func_775(iVar0);
	}
	else if (func_428(iVar0))
	{
		Global_1807078.f_2 = func_786();
		Global_1807078.f_3 = func_785();
		Global_1807078.f_10 = unk_0xE6E19D6A1FC25165();
		Global_1807078.f_19 = (Global_1807078.f_10 - Global_1807078.f_9);
		Global_1807078.f_12 = iParam1;
		if (bParam0)
		{
			Global_1807078.f_11 = 1;
		}
		else
		{
			Global_1807078.f_11 = 0;
		}
		if ((func_244(unk_0x8CFC7D6E1DA5D304()) || func_396(unk_0x8CFC7D6E1DA5D304())) || func_296(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1807078.f_8 = 1;
		}
		else
		{
			Global_1807078.f_8 = 0;
		}
		func_773(iVar0);
	}
	else if (func_515(iVar0))
	{
		Global_1807140.f_2 = func_786();
		Global_1807140.f_3 = func_785();
		Global_1807140.f_9 = unk_0xE6E19D6A1FC25165();
		Global_1807140.f_18 = (Global_1807140.f_9 - Global_1807140.f_8);
		Global_1807140.f_11 = iParam1;
		Global_1807140.f_7 = func_772();
		Global_1807140.f_42 = func_770(func_36(), 5);
		iVar1 = unk_0x8CFC7D6E1DA5D304();
		iVar2 = func_581(iVar1);
		Global_1807140.f_28 = iVar2;
		Global_1807140.f_29 = func_767((func_769(iVar1) || func_768(iVar1)));
		Global_1807140.f_30 = func_767(func_766(iVar1));
		Global_1807140.f_32 = func_767(func_765(iVar1));
		Global_1807140.f_33 = func_767(func_764(iVar1));
		Global_1807140.f_34 = func_767(func_763(iVar1));
		Global_1807140.f_35 = func_767(func_762(0, iVar1) == 1);
		Global_1807140.f_36 = func_767(func_761(iVar1));
		Global_1807140.f_37 = func_767(func_760(iVar1));
		Global_1807140.f_38 = func_767(func_759(iVar1));
		Global_1807140.f_39 = func_767(func_696(iVar1, iVar2, 0));
		Global_1807140.f_40 = func_767(func_696(iVar1, iVar2, 2));
		Global_1807140.f_41 = func_767(func_696(iVar1, iVar2, 1));
		if (func_758(iVar1))
		{
			Global_1807140.f_31 = 2;
		}
		else if (func_757(iVar1))
		{
			Global_1807140.f_31 = 1;
		}
		if (bParam0)
		{
			Global_1807140.f_10 = 1;
		}
		else
		{
			Global_1807140.f_10 = 0;
		}
		if ((func_244(unk_0x8CFC7D6E1DA5D304()) || func_396(unk_0x8CFC7D6E1DA5D304())) || func_296(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1807140.f_6 = 1;
		}
		else
		{
			Global_1807140.f_6 = 0;
		}
		Global_1807140.f_21 = -2;
		Global_1807140.f_22 = -2;
		func_755(iVar0);
	}
	else if (func_513(iVar0))
	{
		Global_1807183.f_2 = func_786();
		Global_1807183.f_3 = func_785();
		if ((func_244(unk_0x8CFC7D6E1DA5D304()) || func_396(unk_0x8CFC7D6E1DA5D304())) || func_296(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1807183.f_6 = 1;
		}
		else
		{
			Global_1807183.f_6 = 0;
		}
		Global_1807183.f_9 = unk_0xE6E19D6A1FC25165();
		Global_1807183.f_10 = func_767(bParam0);
		Global_1807183.f_11 = iParam1;
		Global_1807183.f_17 = func_754(func_355());
		Global_1807183.f_18 = (Global_1807183.f_9 - Global_1807183.f_8);
		Global_1807183.f_20 = iParam8;
		Global_1807183.f_21 = -2;
		Global_1807183.f_22 = -2;
		Global_1807183.f_27 = func_753();
		Global_1807183.f_29 = func_481(6090, -1, 0);
		Global_1807183.f_30 = func_481(6086, -1, 0);
		Global_1807183.f_31 = func_481(6087, -1, 0);
		Global_1807183.f_32 = func_481(6089, -1, 0);
		Global_1807183.f_33 = func_481(6088, -1, 0);
		Global_1807183.f_34 = func_481(6091, -1, 0);
		Global_1807183.f_36 = func_767(func_352(1));
		Global_1807183.f_37 = func_750();
		func_735();
		func_733(iVar0);
	}
	else if (func_511(iVar0))
	{
		Global_1807236.f_2 = func_786();
		Global_1807236.f_3 = func_785();
		if ((func_244(unk_0x8CFC7D6E1DA5D304()) || func_396(unk_0x8CFC7D6E1DA5D304())) || func_296(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1807236.f_6 = 1;
		}
		else
		{
			Global_1807236.f_6 = 0;
		}
		Global_1807236.f_9 = unk_0xE6E19D6A1FC25165();
		Global_1807236.f_10 = func_767(bParam0);
		Global_1807236.f_11 = iParam1;
		Global_1807236.f_18 = (Global_1807236.f_9 - Global_1807236.f_8);
		Global_1807236.f_20 = iParam8;
		Global_1807236.f_23 = Global_786546;
		Global_1807236.f_36 = Global_786546.f_1;
		Global_1807236.f_24 = func_481(6140, -1, 0);
		Global_1807236.f_25 = func_481(6145, -1, 0);
		Global_1807236.f_26 = func_481(6146, -1, 0);
		Global_1807236.f_27 = func_767((((func_732() || func_731()) || func_730()) || func_729(unk_0x8CFC7D6E1DA5D304())));
		Global_1807236.f_28 = func_481(6147, -1, 0);
		Global_1807236.f_29 = func_767(func_728());
		Global_1807236.f_35 = -1;
		Global_1807236.f_38 = -1;
		Global_1807236.f_39 = Global_1807236.f_4;
		Global_1807236.f_40 = Global_1807236.f_5;
		Global_1807236.f_41 = func_786();
		Global_1807236.f_42 = func_767(func_352(1));
		Global_1807236.f_44 = Global_1807236.f_18;
		func_726(iVar0);
	}
	else
	{
		Global_1807007.f_6 = unk_0xE6E19D6A1FC25165();
		if (bParam0)
		{
			Global_1807007.f_7 = 1;
		}
		else
		{
			Global_1807007.f_7 = 0;
		}
		Global_1807007.f_8 = iParam1;
		if (Global_1807007.f_4 == 0)
		{
			if ((func_244(unk_0x8CFC7D6E1DA5D304()) || func_396(unk_0x8CFC7D6E1DA5D304())) || func_296(unk_0x8CFC7D6E1DA5D304()))
			{
				Global_1807007.f_4 = 1;
			}
		}
	}
}

void func_726(int iParam0)
{
	unk_0xD8AFB345A9C5CCBB(&Global_1807236);
	func_727();
}

void func_727()
{
	struct<46> Var0;
	
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
	Global_1807236 = { Var0 };
	Global_1807236.f_16 = 0;
}

bool func_728()
{
	return func_481(6139, -1, 0) != 0;
}

int func_729(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_1595681[iParam0 /*678*/].f_266.f_248 != 0;
	}
	return 0;
}

bool func_730()
{
	return func_481(6147, -1, 0) == 3;
}

bool func_731()
{
	return func_481(6147, -1, 0) == 2;
}

bool func_732()
{
	return func_481(6147, -1, 0) == 1;
}

void func_733(int iParam0)
{
	unk_0x4809857AF2A6E711(&Global_1807183);
	func_734();
}

void func_734()
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
	Global_1807183 = { Var0 };
	Global_1807183.f_23 = 0;
	Global_1807183.f_24 = 0;
	Global_1807183.f_16 = 0;
}

void func_735()
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
		iVar2 = (iVar0 + func_746(12));
		func_745(iVar2, &iVar1, 1);
		if (iVar1 >= 0)
		{
			if (Global_1320309[iVar1 /*140*/].f_66 != 0 && func_737(Global_1320309[iVar1 /*140*/].f_66, 1))
			{
				if (Global_2512581.f_871 != iVar1)
				{
					if (func_736(Global_1320309[iVar1 /*140*/].f_66))
					{
						if (Global_1320309[iVar1 /*140*/].f_66 != 0)
						{
							iVar3 = Global_1320309[iVar1 /*140*/].f_66;
						}
						switch (iVar0)
						{
							case 0:
								Global_1807183.f_38 = iVar3;
								break;
							
							case 1:
								Global_1807183.f_39 = iVar3;
								break;
							
							case 2:
								Global_1807183.f_40 = iVar3;
								break;
							
							case 3:
								Global_1807183.f_41 = iVar3;
								break;
							
							case 4:
								Global_1807183.f_42 = iVar3;
								break;
							
							case 5:
								Global_1807183.f_43 = iVar3;
								break;
							
							case 6:
								Global_1807183.f_44 = iVar3;
								break;
							
							case 7:
								Global_1807183.f_45 = iVar3;
								break;
							
							case 8:
								Global_1807183.f_46 = iVar3;
								break;
							
							case 9:
								Global_1807183.f_47 = iVar3;
								break;
							}
						}
					}
				}
		}
		iVar0++;
	}
}

int func_736(int iParam0)
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
		case joaat("akula"):
		case joaat("volatol"):
			return 1;
		
		default:
	}
	return 0;
}

int func_737(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xDC3C87280F94833B(iParam0))
	{
		return 0;
	}
	if ((((((iParam0 == joaat("dominator2") && !unk_0x44243F2E2F58B8E3()) || (iParam0 == joaat("buffalo3") && !unk_0x44243F2E2F58B8E3())) || (iParam0 == joaat("gauntlet2") && !unk_0x44243F2E2F58B8E3())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x44243F2E2F58B8E3())) || iParam0 == joaat("blista3"))
	{
		if (!func_744())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x469F77B2A79C2220())
		{
			if (unk_0x2164A4E269B646EB(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x0663FFD85FC79E8F(Var1.f_0))
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
		if ((((!func_743() && !func_742()) && !func_741()) && !func_740()) && !func_744())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x929A0C5D6A986B4F() || unk_0xC339C5C5B5E8BC5B()) || unk_0x0A8A596EB9C068FA())
		{
		}
		else if (!func_741())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_739(iParam0))
		{
			return 0;
		}
	}
	if (!func_738(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_738(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_499())
	{
		return 1;
	}
	unk_0xFA7CFD9BFC4E130D(&iVar0, &uVar1);
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
	if (!unk_0x393CD2FA300F18B3(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_739(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2491976)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0xE6E19D6A1FC25165();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5836 && !Global_262145.f_12069) && iVar1 < Global_262145.f_12070)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_13367 && iVar1 < Global_262145.f_13379)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_13363 && iVar1 < Global_262145.f_13375)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_13364 && iVar1 < Global_262145.f_13376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_13365 && iVar1 < Global_262145.f_13377)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_13366 && iVar1 < Global_262145.f_13378)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_13368 && iVar1 < Global_262145.f_13380)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_13369 && iVar1 < Global_262145.f_13372)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_13370 && iVar1 < Global_262145.f_13373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_13371 && iVar1 < Global_262145.f_13374)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_15998 && iVar1 < Global_262145.f_15963)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_15993 && iVar1 < Global_262145.f_15958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_15997 && iVar1 < Global_262145.f_15962)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_15996 && iVar1 < Global_262145.f_15961)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_15990 && iVar1 < Global_262145.f_15955)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_15991 && iVar1 < Global_262145.f_15956)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_15994 && iVar1 < Global_262145.f_15959)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_15995 && iVar1 < Global_262145.f_15960)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_15992 && iVar1 < Global_262145.f_15957)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16000 && iVar1 < Global_262145.f_15965)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16001 && iVar1 < Global_262145.f_15966)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_15989 && iVar1 < Global_262145.f_15954)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_15988 && iVar1 < Global_262145.f_15953)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_15987 && iVar1 < Global_262145.f_15952)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_15999 && iVar1 < Global_262145.f_15964)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16002 && iVar1 < Global_262145.f_15967)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16003 && iVar1 < Global_262145.f_15968)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16004 && iVar1 < Global_262145.f_15969)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16005 && iVar1 < Global_262145.f_15970)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16150 && iVar1 < Global_262145.f_16172)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16151 && iVar1 < Global_262145.f_16173)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16152 && iVar1 < Global_262145.f_16174)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16153 && iVar1 < Global_262145.f_16175)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16154 && iVar1 < Global_262145.f_16176)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16155 && iVar1 < Global_262145.f_16177)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16157 && iVar1 < Global_262145.f_16178)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16158 && iVar1 < Global_262145.f_16179)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16159 && iVar1 < Global_262145.f_16180)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16160 && iVar1 < Global_262145.f_16181)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16161 && iVar1 < Global_262145.f_16182)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16162 && iVar1 < Global_262145.f_16183)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16163 && iVar1 < Global_262145.f_16184)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16169 && iVar1 < Global_262145.f_16191)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16166 && iVar1 < Global_262145.f_16187)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16167 && iVar1 < Global_262145.f_16188)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16168 && iVar1 < Global_262145.f_16189)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16156 && iVar1 < Global_262145.f_16190)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16170 && iVar1 < Global_262145.f_16192)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16164 && iVar1 < Global_262145.f_16185)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16165 && iVar1 < Global_262145.f_16186)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16171 && iVar1 < Global_262145.f_16193)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_17799 && iVar1 < Global_262145.f_17859)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_17800 && iVar1 < Global_262145.f_17860)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_17801 && iVar1 < Global_262145.f_17861)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_17802 && iVar1 < Global_262145.f_17862)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_17803 && iVar1 < Global_262145.f_17863)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_17804 && iVar1 < Global_262145.f_17864)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_17805 && iVar1 < Global_262145.f_17865)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_17806 && iVar1 < Global_262145.f_17866)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_17807 && iVar1 < Global_262145.f_17867)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_17808 && iVar1 < Global_262145.f_17868)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_17809 && iVar1 < Global_262145.f_17869)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_17810 && iVar1 < Global_262145.f_17870)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_17811 && iVar1 < Global_262145.f_17871)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_17812 && iVar1 < Global_262145.f_17872)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_17813 && iVar1 < Global_262145.f_17873)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_17814 && iVar1 < Global_262145.f_17874)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_17815 && iVar1 < Global_262145.f_17875)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_17816 && iVar1 < Global_262145.f_17876)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_17817 && iVar1 < Global_262145.f_17877)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_17818 && iVar1 < Global_262145.f_17878)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_17819 && iVar1 < Global_262145.f_17879)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_17820 && iVar1 < Global_262145.f_17880)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_17821 && iVar1 < Global_262145.f_17881)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_17822 && iVar1 < Global_262145.f_17882)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_17823 && iVar1 < Global_262145.f_17883)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_18845 && iVar1 < Global_262145.f_18841)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_18846 && iVar1 < Global_262145.f_18842)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_18847 && iVar1 < Global_262145.f_18843)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_18848 && iVar1 < Global_262145.f_18844)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_19688 && iVar1 < Global_262145.f_19696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_19689 && iVar1 < Global_262145.f_19697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_19690 && iVar1 < Global_262145.f_19698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_19691 && iVar1 < Global_262145.f_19699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_19692 && iVar1 < Global_262145.f_19700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_19693 && iVar1 < Global_262145.f_19701)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_20464 && iVar1 < Global_262145.f_20484)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_20476 && iVar1 < Global_262145.f_20496)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_20467 && iVar1 < Global_262145.f_20487)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_20477 && iVar1 < Global_262145.f_20497)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_20465 && iVar1 < Global_262145.f_20485)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_20481 && iVar1 < Global_262145.f_20501)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_20479 && iVar1 < Global_262145.f_20499)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_20480 && iVar1 < Global_262145.f_20500)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_20475 && iVar1 < Global_262145.f_20495)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_20482 && iVar1 < Global_262145.f_20502)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_20478 && iVar1 < Global_262145.f_20498)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_20474 && iVar1 < Global_262145.f_20494)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_20466 && iVar1 < Global_262145.f_20486)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_20468 && iVar1 < Global_262145.f_20488)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_20469 && iVar1 < Global_262145.f_20489)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_20470 && iVar1 < Global_262145.f_20490)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_20471 && iVar1 < Global_262145.f_20491)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_20472 && iVar1 < Global_262145.f_20492)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_20473 && iVar1 < Global_262145.f_20493)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_21425 && iVar1 < Global_262145.f_21453)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_21426 && iVar1 < Global_262145.f_21454)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_21427 && iVar1 < Global_262145.f_21455)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_21428 && iVar1 < Global_262145.f_21456)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_21429 && iVar1 < Global_262145.f_21457)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_21430 && iVar1 < Global_262145.f_21458)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_21431 && iVar1 < Global_262145.f_21459)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_21432 && iVar1 < Global_262145.f_21460)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_21433 && iVar1 < Global_262145.f_21461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_21434 && iVar1 < Global_262145.f_21462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_21435 && iVar1 < Global_262145.f_21463)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_21436 && iVar1 < Global_262145.f_21464)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_21437 && iVar1 < Global_262145.f_21465)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_21438 && iVar1 < Global_262145.f_21466)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_21439 && iVar1 < Global_262145.f_21467)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_21440 && iVar1 < Global_262145.f_21468)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_21441 && iVar1 < Global_262145.f_21469)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_21442 && iVar1 < Global_262145.f_21470)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_21443 && iVar1 < Global_262145.f_21471)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_21444 && iVar1 < Global_262145.f_21472)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_21445 && iVar1 < Global_262145.f_21473)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_21446 && iVar1 < Global_262145.f_21474)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_21447 && iVar1 < Global_262145.f_21475)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_21448 && iVar1 < Global_262145.f_21476)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_21449 && iVar1 < Global_262145.f_21477)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_21450 && iVar1 < Global_262145.f_21478)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_21451 && iVar1 < Global_262145.f_21479)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_21452 && iVar1 < Global_262145.f_21480)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_740()
{
	return 0;
}

int func_741()
{
	return 1;
}

int func_742()
{
	return 1;
}

int func_743()
{
	if (unk_0x5E02CD27DBE77D67(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_744()
{
	var uVar0;
	
	if (unk_0x1F30842E4146CE70())
	{
		if (unk_0xABC550EBCFE96BBC())
		{
			if (unk_0xD51AEB3E72C71D1B())
			{
				unk_0xD194C635833AC189(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xD2A9C3F486236CC5(&uVar0, 2);
				unk_0xD2A9C3F486236CC5(&uVar0, 4);
				unk_0xD2A9C3F486236CC5(&uVar0, 6);
				unk_0xD2A9C3F486236CC5(&Global_25, 2);
				unk_0xD2A9C3F486236CC5(&Global_25, 4);
				unk_0xD2A9C3F486236CC5(&Global_25, 6);
				unk_0xD92C8D8AF3C67820(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x16DC46A28107A94A())
				{
					iVar0 = unk_0x3A75EA627A024B7A(866);
					unk_0xD2A9C3F486236CC5(&iVar0, 0);
					unk_0x167AC4B8CEEB1F11(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_143070 == 2)
	{
		return 1;
	}
	else if (Global_143070 == 3)
	{
		return 0;
	}
	if (unk_0x16DC46A28107A94A())
	{
		if (unk_0xB03A1684359C50A1(unk_0x3A75EA627A024B7A(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_745(int iParam0, int iParam1, bool bParam2)
{
	if (Global_262145.f_9331)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1804002[iParam0] - 1);
		if (bParam2)
		{
			if ((unk_0x756DE011CEDBBD7E() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_746(int iParam0)
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
		
		case 13:
			return 179;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_749(iParam0);
		return func_748(iVar0);
	}
	return (func_747(iParam0, -1) * iParam0);
}

int func_747(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_521(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_527(iParam1))
			{
				return 0;
			}
			else if (func_152(iParam1, -1))
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
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 <= 117 && iParam1 > 0)
			{
				if (Global_1049531[iParam1 /*1951*/].f_33 == 2)
				{
					return 3;
				}
				else if (Global_1049531[iParam1 /*1951*/].f_33 == 6)
				{
					return 8;
				}
				else if (Global_1049531[iParam1 /*1951*/].f_33 == 10)
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
		
		case 13:
			return 7;
			break;
	}
	return 0;
}

int func_748(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		default:
	}
	return -1;
}

int func_749(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 1)
	{
		return iParam0;
	}
	return -1;
}

var func_750()
{
	var uVar0;
	
	uVar0 = func_752();
	if (!func_582())
	{
		if (func_593() != func_57())
		{
			uVar0 = func_751(func_593()) + 1;
		}
	}
	return uVar0;
}

int func_751(int iParam0)
{
	return Global_1627460[iParam0 /*530*/].f_11.f_19;
}

int func_752()
{
	return func_751(unk_0x8CFC7D6E1DA5D304()) + 1;
}

int func_753()
{
	return func_481(6096, -1, 0);
}

int func_754(int iParam0)
{
	if (func_290(iParam0, 1))
	{
		return Global_1627460[iParam0 /*530*/].f_11.f_410;
	}
	return -1;
}

void func_755(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0xDA611A012FA700E9(&Global_1807140);
	func_756();
}

void func_756()
{
	struct<43> Var0;
	
	Global_1807140 = { Var0 };
	Global_1807140.f_23 = 0;
	Global_1807140.f_24 = 0;
	Global_1807140.f_16 = 0;
}

bool func_757(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 12);
}

bool func_758(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 13);
}

int func_759(int iParam0)
{
	if (iParam0 != func_57())
	{
		if ((unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 12) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 13)) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 14))
		{
			return 1;
		}
	}
	return 0;
}

int func_760(int iParam0)
{
	if (iParam0 != func_57())
	{
		if ((unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 0) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 1)) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_761(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (((((unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 3) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 4)) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 5)) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 0)) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 1)) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 2))
		{
			return 1;
		}
	}
	return 0;
}

int func_762(int iParam0, int iParam1)
{
	if (iParam1 == func_57())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 0))
			{
				return 3;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 3))
			{
				return 2;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 6))
			{
				return 4;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 9))
			{
				return 1;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 12))
			{
				return 7;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 15))
			{
				return 5;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 18))
			{
				return 6;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 21))
			{
				return 0;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 24))
			{
				return 8;
			}
			break;
		
		case 1:
			if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 1))
			{
				return 3;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 4))
			{
				return 2;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 7))
			{
				return 4;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 10))
			{
				return 1;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 13))
			{
				return 7;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 16))
			{
				return 5;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 19))
			{
				return 6;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 22))
			{
				return 0;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 25))
			{
				return 8;
			}
			break;
		
		case 2:
			if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 2))
			{
				return 3;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 5))
			{
				return 2;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 8))
			{
				return 4;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 11))
			{
				return 1;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 14))
			{
				return 7;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 17))
			{
				return 5;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 20))
			{
				return 6;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 23))
			{
				return 0;
			}
			else if (unk_0xB03A1684359C50A1(Global_1595681[iParam1 /*678*/].f_266.f_236, 26))
			{
				return 8;
			}
			break;
	}
	return 0;
}

int func_763(int iParam0)
{
	if (iParam0 != func_57())
	{
		if ((unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 6) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 7)) || unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_236, 8))
		{
			return 1;
		}
	}
	return 0;
}

bool func_764(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 8);
}

bool func_765(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 7);
}

bool func_766(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 9);
}

int func_767(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

bool func_768(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 11);
}

bool func_769(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_260, 10);
}

int func_770(int iParam0, int iParam1)
{
	return func_481(func_771(iParam1), iParam0, 0);
}

int func_771(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3881;
		
		case 1:
			return 3910;
		
		case 2:
			return 3914;
		
		case 3:
			return 3918;
		
		case 4:
			return 3922;
		
		case 5:
			return 5433;
		
		default:
	}
	return 3881;
}

int func_772()
{
	int iVar0;
	
	if (func_590())
	{
		return 4;
	}
	else if (func_582())
	{
		if (func_720(unk_0x8CFC7D6E1DA5D304()))
		{
			return 8;
		}
		return 6;
	}
	if (func_352(1))
	{
		iVar0 = func_754(unk_0x8CFC7D6E1DA5D304());
		if (iVar0 == -1)
		{
			iVar0 = 5;
		}
		return iVar0;
	}
	else if (func_591(1))
	{
		if (func_720(func_593()))
		{
			return 9;
		}
		return 7;
	}
	return -2;
}

void func_773(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x4E7B62933B69DA3F(&Global_1807078);
	func_774();
}

void func_774()
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
	Global_1807078 = { Var0 };
	Global_1807078.f_24 = 0;
	Global_1807078.f_25 = 0;
	Global_1807078.f_17 = 0;
}

void func_775(int iParam0)
{
	if (iParam0 == 0)
	{
	}
	unk_0x3456F7325A58B63B(&Global_1807025);
	func_776();
}

void func_776()
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
	Global_1807025 = { Var0 };
	Global_1807025.f_29 = 0;
	Global_1807025.f_30 = 0;
	Global_1807025.f_17 = 0;
}

int func_777(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_696(iParam0, iParam1, 2);
	bVar1 = func_696(iParam0, iParam1, 1);
	bVar2 = func_696(iParam0, iParam1, 0);
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

int func_778(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	if (func_692(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_779(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_518(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_16840;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_16839;
		}
		else
		{
			iVar0 = Global_262145.f_16821;
		}
		iVar1 = 19;
	}
	else if (func_517(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_323(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_16820;
			iVar1 = 20;
		}
	}
	else if (func_424(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_16840;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_16839;
		}
		else
		{
			iVar0 = Global_262145.f_16821;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0xE567E8F7F9EA6A8C(func_783(func_593()), func_782(func_593()), func_786(), func_785(), iVar1, iVar0);
	}
	func_781(iVar0);
	func_780(iVar0);
	return iVar0;
}

void func_780(int iParam0)
{
	int iVar0;
	
	iVar0 = func_481(3951, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_449 = iVar0;
	func_480(3951, iVar0, -1, 1, 0);
}

void func_781(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x8CFC7D6E1DA5D304();
	Global_1627460[iVar0 /*530*/].f_11.f_448 = (Global_1627460[iVar0 /*530*/].f_11.f_448 + iParam0);
	if (Global_1627460[iVar0 /*530*/].f_11.f_448 < -9999)
	{
		Global_1627460[iVar0 /*530*/].f_11.f_448 = 9999;
	}
	else if (Global_1627460[iVar0 /*530*/].f_11.f_448 > 9999)
	{
		Global_1627460[iVar0 /*530*/].f_11.f_448 = 9999;
	}
}

int func_782(int iParam0)
{
	if (iParam0 == func_57())
	{
		return -1;
	}
	return Global_1627460[iParam0 /*530*/].f_11.f_8[1];
}

int func_783(int iParam0)
{
	if (iParam0 == func_57())
	{
		return -1;
	}
	return Global_1627460[iParam0 /*530*/].f_11.f_8[0];
}

int func_784(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_244(unk_0x8CFC7D6E1DA5D304()) || func_296(unk_0x8CFC7D6E1DA5D304()))
	{
		return 1;
	}
	return 0;
}

int func_785()
{
	if (Global_1807007.f_3 != 0)
	{
		return Global_1807007.f_3;
	}
	return -1;
}

int func_786()
{
	if (Global_1807007.f_2 != 0)
	{
		return Global_1807007.f_2;
	}
	return -1;
}

int func_787(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_57();
	iVar1 = func_57();
	iVar2 = func_57();
	return func_788(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_788(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_563(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_16 = iParam5;
	Var0.f_17 = iParam6;
	Var0.f_18 = iParam7;
	StringCopy(&(Var0.f_24), sParam3, 64);
	StringCopy(&(Var0.f_56), sParam8, 16);
	Var0.f_72 = uParam4;
	Var0.f_70 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_71 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_70 = iParam14;
	}
	unk_0xD2A9C3F486236CC5(&(Var0.f_68), 2);
	return func_535(&Var0);
}

int func_789(int iParam0)
{
	int iVar0;
	
	iVar0 = func_294(iParam0);
	if (iVar0 != -1)
	{
		return func_292(iVar0);
	}
	return 1;
}

char* func_790(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0x8CFC7D6E1DA5D304())
	{
		sVar0 = func_795(&(Global_1627460[iParam0 /*530*/].f_11.f_99));
		return sVar0;
	}
	if (Global_1627460[iParam0 /*530*/].f_11.f_115 != Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_115)
	{
		sVar0 = func_793(iParam0, 0);
		return sVar0;
	}
	if (((func_226(iParam0, 28) || func_226(unk_0x8CFC7D6E1DA5D304(), 28)) || func_792(iParam0)) && !func_791(iParam0))
	{
		return func_793(iParam0, 0);
	}
	iVar1 = func_58(iParam0);
	if (iVar1 != func_57())
	{
		if (iVar1 != unk_0x8CFC7D6E1DA5D304())
		{
			if (!unk_0x929A0C5D6A986B4F() && !unk_0xFD22D3369BAD2674(0, -1, 1))
			{
				return func_793(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_57())
	{
		sVar0 = func_795(&(Global_1627460[iVar1 /*530*/].f_11.f_99));
		if (unk_0xFAFFA408239A026B(sVar0))
		{
			return func_793(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_791(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_59(iParam0) };
	if (unk_0x929A0C5D6A986B4F())
	{
		if (unk_0xC8543F17BC4C0591(0))
		{
			if (unk_0x3F46CD19F4C43D2A(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_792(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_57())
	{
		Var0 = { func_59(iParam0) };
		if (unk_0x0A8A596EB9C068FA() || unk_0xC339C5C5B5E8BC5B())
		{
			if (unk_0xC8543F17BC4C0591(0))
			{
				return 0;
			}
		}
		else if (unk_0x929A0C5D6A986B4F())
		{
			if (unk_0xC8543F17BC4C0591(0))
			{
				if (unk_0x3F46CD19F4C43D2A(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

var func_793(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_279(iParam0, 1))
		{
			return func_794();
		}
	}
	return unk_0xE883B8F5FA6A04DA("GB_REST_ACC");
}

var func_794()
{
	return unk_0xE883B8F5FA6A04DA("GB_REST_ACCM");
}

var func_795(var uParam0)
{
	return uParam0;
}

void func_796()
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
	if (func_406())
	{
		if (func_11(&(Local_112.f_238)))
		{
			iVar1 = (func_18() - 300000);
			bVar0 = func_6(&(Local_112.f_238), iVar1, 0);
			if (bVar0)
			{
				func_804();
				if ((func_18() - func_564(&(Local_112.f_238), 0, 0)) > 0)
				{
					if ((func_18() - func_564(&(Local_112.f_238), 0, 0)) > 30000)
					{
						func_803((func_18() - func_564(&(Local_112.f_238), 0, 0)), "GB_WORK_END", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0);
					}
					else
					{
						func_803((func_18() - func_564(&(Local_112.f_238), 0, 0)), "GB_WORK_END", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
					}
				}
				else
				{
					func_803(0, "GB_WORK_END", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
				}
			}
		}
		return;
	}
	if (!func_1060() && !func_404())
	{
		return;
	}
	if (!func_503())
	{
		return;
	}
	iVar2 = unk_0x8CFC7D6E1DA5D304();
	if (func_34(unk_0x8CFC7D6E1DA5D304(), 0))
	{
		iVar2 = Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_566;
	}
	iVar3 = func_395(iVar2);
	if (iVar3 < 3)
	{
		return;
	}
	iVar4 = (func_30() - Local_112.f_213);
	if (unk_0xB03A1684359C50A1(Local_112.f_1, 13))
	{
		func_800(iVar4, "DCONTRA_HUD1", -1, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0);
	}
	if (func_11(&(Local_112.f_226)))
	{
		iVar5 = func_20();
		iVar6 = (func_20() - func_564(&(Local_112.f_226), 0, 0));
		func_797(iVar6, iVar5, "DCONTRA_HUD2", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1);
	}
	else
	{
		iVar5 = func_20();
		iVar6 = func_20();
		func_797(iVar6, iVar5, "DCONTRA_HUD2", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1);
	}
}

void func_797(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_799(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1358718.f_1 = 1;
		func_798(0, iVar0);
		Global_1358718.f_1093[iVar0] = iParam0;
		Global_1358718.f_1093.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1358718.f_1093.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1358718.f_1093.f_194[iVar0] = iParam3;
		Global_1358718.f_1093.f_183[iVar0] = iParam4;
		Global_1358718.f_1093.f_216[iVar0] = iParam5;
		Global_1358718.f_1093.f_227[iVar0 /*3*/] = iParam6;
		Global_1358718.f_1093.f_227[iVar0 /*3*/].f_1 = iParam7;
		Global_1358718.f_1093.f_258[iVar0] = iParam8;
		Global_1358718.f_1093.f_269[iVar0] = iParam9;
		Global_1358718.f_1093.f_312[iVar0] = iParam10;
		Global_1358718.f_1093.f_323[iVar0] = iParam11;
		Global_1358718.f_1093.f_334[iVar0] = iParam12;
		Global_1358718.f_1093.f_345[iVar0] = iParam13;
		Global_1358718.f_1088 = 1;
		Global_1358718.f_1093.f_356[iVar0] = iParam14;
		Global_1358718.f_1093.f_367[iVar0] = iParam15;
		Global_1358718.f_1093.f_378[iVar0] = iParam16;
		Global_1358718.f_1093.f_389[iVar0] = iParam17;
		Global_1358718.f_1093.f_400[iVar0] = iParam18;
		Global_1358718.f_1093.f_411[iVar0] = iParam19;
		Global_1358718.f_1093.f_422[iVar0] = iParam20;
		Global_1358718.f_1093.f_433[iVar0] = iParam21;
		Global_1358718.f_1093.f_444[iVar0] = iParam22;
		Global_1358718.f_1093.f_455[iVar0] = iParam23;
	}
}

void func_798(int iParam0, int iParam1)
{
	unk_0xD2A9C3F486236CC5(&(Global_1358718.f_6097[iParam0]), iParam1);
}

bool func_799(int iParam0, int iParam1)
{
	return unk_0xB03A1684359C50A1(Global_1358718.f_6097[iParam0], iParam1);
}

void func_800(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22)
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
			if (func_799(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1358718.f_1 = 1;
		func_798(6, iVar0);
		Global_1358718.f_3770[iVar0] = iParam0;
		StringCopy(&(Global_1358718.f_3770.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1358718.f_3770.f_183[iVar0] = iParam3;
		Global_1358718.f_3770.f_172[iVar0] = iParam2;
		Global_1358718.f_3770.f_260[iVar0] = iParam4;
		Global_1358718.f_3770.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1358718.f_3770.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1358718.f_3770.f_443[iVar0] = iParam7;
		Global_1358718.f_3770.f_454[iVar0] = iParam8;
		Global_1358718.f_3770.f_497[iVar0] = iParam9;
		Global_1358718.f_3770.f_508[iVar0] = iParam10;
		Global_1358718.f_3770.f_205[iVar0] = iParam11;
		Global_1358718.f_3770.f_216[iVar0] = iParam12;
		Global_1358718.f_3770.f_227[iVar0] = iParam13;
		Global_1358718.f_3770.f_238[iVar0] = iParam14;
		Global_1358718.f_3770.f_249[iVar0] = iParam15;
		Global_1358718.f_3770.f_519[iVar0] = iParam16;
		Global_1358718.f_3770.f_530[iVar0] = iParam17;
		Global_1358718.f_3770.f_541[iVar0] = iParam18;
		Global_1358718.f_3770.f_552[iVar0] = iParam19;
		Global_1358718.f_3770.f_563[iVar0] = iParam20;
		Global_1358718.f_3770.f_574[iVar0] = iParam21;
		Global_1358718.f_3770.f_585[iVar0] = iParam22;
		if (iParam15 == 5 && func_802())
		{
			Global_1358718.f_1088 = 1;
		}
		if (unk_0xC339C5C5B5E8BC5B())
		{
			iVar2 = 0;
			unk_0xA320869CAE52B097(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1358718.f_1092 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1358718.f_1091 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1358718.f_1088 = 1;
			}
			if (func_801())
			{
				Global_1358718.f_1092 = 1;
			}
		}
	}
}

int func_801()
{
	int iVar0;
	var uVar1;
	
	if (unk_0xC339C5C5B5E8BC5B())
	{
		unk_0xA320869CAE52B097(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_802()
{
	if (((unk_0xE7A981467BC975BA() == 8 || unk_0xE7A981467BC975BA() == 9) || unk_0xE7A981467BC975BA() == 10) || unk_0xE7A981467BC975BA() == 12)
	{
		return 1;
	}
	return 0;
}

void func_803(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_799(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1358718.f_1 = 1;
		func_798(7, iVar0);
		Global_1358718.f_4366[iVar0] = iParam0;
		StringCopy(&(Global_1358718.f_4366.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1358718.f_4366.f_172[iVar0] = iParam2;
		Global_1358718.f_4366.f_216[iVar0] = iParam3;
		Global_1358718.f_4366.f_183[iVar0] = iParam4;
		Global_1358718.f_4366.f_194[iVar0] = iParam5;
		Global_1358718.f_4366.f_249[iVar0] = iParam6;
		Global_1358718.f_4366.f_260[iVar0] = iParam7;
		Global_1358718.f_4366.f_205[iVar0] = iParam8;
		Global_1358718.f_4366.f_314[iVar0] = iParam9;
		Global_1358718.f_4366.f_325[iVar0] = iParam10;
		Global_1358718.f_4366.f_357[iVar0] = iParam11;
		Global_1358718.f_4366.f_238[iVar0] = iParam12;
		Global_1358718.f_4366.f_271[iVar0] = iParam13;
		Global_1358718.f_4366.f_368[iVar0] = iParam14;
		Global_1358718.f_4366.f_379[iVar0] = iParam15;
		Global_1358718.f_4366.f_390[iVar0] = iParam16;
	}
}

void func_804()
{
	Global_1358718.f_1089 = 1;
}

void func_805()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar3 = unk_0x8CFC7D6E1DA5D304();
	iVar4 = unk_0xA651DA0BC9FD8FA4();
	if (!unk_0xB03A1684359C50A1(iLocal_735, 1))
	{
		return;
	}
	if (func_34(unk_0x8CFC7D6E1DA5D304(), 0))
	{
		iVar4 = func_405();
		iVar3 = Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_566;
	}
	iVar5 = func_395(iVar3);
	if (!func_503())
	{
		if (func_191("DCONTRA_OBJ"))
		{
			func_944();
		}
		if (func_191("DCONTRA_OBJ2"))
		{
			func_944();
		}
		if (func_191("DCONTRA_OBJ3"))
		{
			func_944();
		}
		if (func_191("DCONTRA_OBJ4"))
		{
			func_944();
		}
		if (func_191("DCONTRA_TOBJ"))
		{
			func_944();
		}
		if (func_191("DCONTRA_TOBJ2"))
		{
			func_944();
		}
		if (func_191("DCONTRA_TOBJ3"))
		{
			func_944();
		}
		if (func_191("DCONTRA_WOBJ"))
		{
			func_944();
		}
		return;
	}
	if (iVar5 < 3)
	{
		if (func_191("DCONTRA_OBJ"))
		{
			func_944();
		}
		if (func_191("DCONTRA_OBJ2"))
		{
			func_944();
		}
		if (func_191("DCONTRA_OBJ3"))
		{
			func_944();
		}
		if (func_191("DCONTRA_OBJ4"))
		{
			func_944();
		}
		if (func_191("DCONTRA_TOBJ"))
		{
			func_944();
		}
		if (func_191("DCONTRA_TOBJ2"))
		{
			func_944();
		}
		if (func_191("DCONTRA_TOBJ3"))
		{
			func_944();
		}
		if (func_191("DCONTRA_WOBJ"))
		{
			func_944();
		}
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!func_406())
	{
		if (!unk_0xB03A1684359C50A1(Local_112.f_1, 13) && !unk_0xB03A1684359C50A1(Local_382[iVar4 /*11*/].f_1, 11))
		{
			if (!func_191("DCONTRA_WOBJ"))
			{
				func_819("DCONTRA_WOBJ", 0);
			}
		}
		else if (iVar4 == Local_112.f_218)
		{
			if (!func_191("DCONTRA_OBJ"))
			{
				func_819("DCONTRA_OBJ", 0);
			}
		}
		else if (func_1061() == Local_112.f_218)
		{
			if (!func_191("DCONTRA_OBJ"))
			{
				func_819("DCONTRA_OBJ", 0);
			}
		}
	}
	else if (func_818())
	{
		if (iVar4 == Local_112.f_218)
		{
			if (!func_191("DCONTRA_OBJ2"))
			{
				func_819("DCONTRA_OBJ2", 0);
			}
		}
		else if (func_1061() == Local_112.f_218)
		{
			if (!func_191("DCONTRA_OBJ2"))
			{
				func_819("DCONTRA_OBJ2", 0);
			}
		}
	}
	else
	{
		if (func_191("DCONTRA_OBJ2"))
		{
			func_944();
		}
		if (func_191("DCONTRA_TOBJ2"))
		{
			func_944();
		}
		if (Local_112.f_216 < 0)
		{
			if (!func_191("DCONTRA_OBJ4"))
			{
				func_819("DCONTRA_OBJ4", 0);
			}
		}
		else
		{
			iVar2 = func_817();
			if (iVar2 != func_57())
			{
				if (unk_0x1DD0F419559F38C7(iVar2))
				{
					if (iVar2 == iVar3)
					{
						if (!func_191("DCONTRA_OBJ3"))
						{
							func_819("DCONTRA_OBJ3", 0);
						}
					}
					else if (!func_191("DCONTRA_TOBJ3"))
					{
						iVar0 = func_294(iVar2);
						if (iVar0 > -1)
						{
							iVar1 = func_292(iVar0);
							func_806("DCONTRA_TOBJ3", "DCONTRA_CBAND", iVar1, 0);
						}
					}
				}
			}
		}
	}
}

void func_806(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_807(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312576 = 19;
		Global_1312576.f_56 = iParam2;
	}
}

int func_807(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (unk_0xFAFFA408239A026B(sParam0))
	{
		return 0;
	}
	if (unk_0xA49B74E0C954F146(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0xFAFFA408239A026B(sParam1))
	{
		return 0;
	}
	if (func_816(sParam0, sParam1) && Global_1312576.f_56 == Global_1312576.f_58)
	{
		return 0;
	}
	func_811();
	Global_1312576 = 3;
	StringCopy(&(Global_1312576.f_1), unk_0xFCA64981FEF7C913(), 32);
	Global_1312576.f_9 = unk_0x6E987D62C8535B6E(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	StringCopy(&(Global_1312576.f_16), sParam1, 64);
	Global_1312576.f_58 = uParam3;
	Global_1312576.f_56 = uParam3;
	func_810();
	func_809(bParam2);
	func_808();
	return 1;
}

void func_808()
{
	unk_0xD2A9C3F486236CC5(&(Global_1312576.f_59), 1);
}

void func_809(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD2A9C3F486236CC5(&(Global_1312576.f_59), 0);
		return;
	}
	unk_0x62148293B793073B(&(Global_1312576.f_59), 0);
}

void func_810()
{
	Global_1312576.f_10 = unk_0xCBD2990CF476037D(unk_0xE92FCF3C05C2EF1D(), 86400000);
	Global_1312576.f_11 = unk_0xE92FCF3C05C2EF1D();
}

void func_811()
{
	func_813();
	func_812(0);
}

void func_812(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x44243F2E2F58B8E3();
	Global_1312576 = 20;
	StringCopy(&(Global_1312576.f_1), "", 32);
	Global_1312576.f_9 = 0;
	if (bVar0)
	{
		Global_1312576.f_10 = unk_0xE92FCF3C05C2EF1D();
		Global_1312576.f_11 = unk_0xE92FCF3C05C2EF1D();
	}
	StringCopy(&(Global_1312576.f_12), "", 16);
	StringCopy(&(Global_1312576.f_16), "", 64);
	StringCopy(&(Global_1312576.f_32), "", 64);
	Global_1312576.f_52 = 0;
	Global_1312576.f_53 = 0;
	Global_1312576.f_54 = 0;
	Global_1312576.f_55 = -1;
	Global_1312576.f_56 = 0;
	Global_1312576.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_813()
{
	if (!func_815())
	{
	}
	if (func_194())
	{
		unk_0xE444E45D40243E87(&(Global_1312576.f_12));
		func_814();
		unk_0xF1591A76844D3AC1();
	}
}

void func_814()
{
	switch (Global_1312576)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x3A12001DBF78DC62(Global_1312576.f_52);
			return;
		
		case 2:
			unk_0x3A12001DBF78DC62(Global_1312576.f_52);
			unk_0x3A12001DBF78DC62(Global_1312576.f_53);
			return;
		
		case 3:
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_16));
			return;
		
		case 4:
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_16));
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_32));
			return;
		
		case 5:
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			return;
		
		case 6:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			return;
		
		case 7:
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_16));
			return;
		
		case 8:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_16));
			return;
		
		case 9:
			unk_0x6F8D47F40E94DBED(&(Global_1312576.f_16));
			return;
		
		case 10:
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_32));
			return;
		
		case 12:
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_32));
			return;
		
		case 13:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_16));
			unk_0x70A9E4720D71C2D5(Global_1312576.f_57);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_32));
			return;
		
		case 11:
			unk_0x6F8D47F40E94DBED(&(Global_1312576.f_16));
			return;
		
		case 14:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_32));
			return;
		
		case 15:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			unk_0x70A9E4720D71C2D5(Global_1312576.f_57);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_32));
			return;
		
		case 17:
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_32));
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_48));
			return;
		
		case 16:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			return;
		
		case 19:
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_16));
			return;
		
		case 18:
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_16));
			unk_0x70A9E4720D71C2D5(Global_1312576.f_56);
			unk_0xBEFD1ED9B6BE5127(&(Global_1312576.f_48));
			unk_0xB4179F7E88F4C4BF(&(Global_1312576.f_32));
			return;
		
		default:
	}
}

int func_815()
{
	if (!func_194())
	{
		return 0;
	}
	unk_0x096CAD0A8332D384(&(Global_1312576.f_12));
	func_814();
	return unk_0x45CD208BAEE25DF4();
}

bool func_816(char* sParam0, char* sParam1)
{
	if (!func_194())
	{
		return 0;
	}
	if (unk_0xFAFFA408239A026B(sParam0))
	{
		return 0;
	}
	if (unk_0xFAFFA408239A026B(sParam1))
	{
		return 0;
	}
	if (!unk_0x6E987D62C8535B6E(sParam0) == unk_0x6E987D62C8535B6E(&(Global_1312576.f_12)))
	{
		return 0;
	}
	return unk_0x6E987D62C8535B6E(sParam1) == unk_0x6E987D62C8535B6E(&(Global_1312576.f_16));
}

int func_817()
{
	int iVar0;
	
	iVar0 = func_57();
	if (Local_112.f_216 > -1)
	{
		iVar0 = unk_0x3479F6F64A48251C(Local_112.f_216);
	}
	return iVar0;
}

int func_818()
{
	var uVar0;
	var uVar1;
	
	if (unk_0x5AD42783360AB57E(Local_112.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_112.f_2[0 /*10*/].f_2))
		{
			uVar0 = unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2);
			if (unk_0x5AD42783360AB57E(Local_112.f_2[0 /*10*/].f_1))
			{
				if (!func_24(Local_112.f_2[0 /*10*/].f_1))
				{
					uVar1 = unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[0 /*10*/].f_1);
					if (unk_0x88B79D32B518C327(uVar1, uVar0, 0))
					{
						return 1;
					}
				}
			}
			if (unk_0x5AD42783360AB57E(Local_112.f_2[1 /*10*/].f_1))
			{
				if (!func_24(Local_112.f_2[1 /*10*/].f_1))
				{
					iVar1 = unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[1 /*10*/].f_1);
					if (unk_0x88B79D32B518C327(iVar1, iVar0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_819(char* sParam0, bool bParam1)
{
	if (unk_0xFAFFA408239A026B(sParam0))
	{
		return;
	}
	if (unk_0xA49B74E0C954F146(sParam0) > 23)
	{
		return;
	}
	if (func_192(sParam0))
	{
		return;
	}
	func_811();
	Global_1312576 = 0;
	StringCopy(&(Global_1312576.f_1), unk_0xFCA64981FEF7C913(), 32);
	Global_1312576.f_9 = unk_0x6E987D62C8535B6E(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	func_810();
	func_809(bParam1);
	func_808();
}

void func_820()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_1060() && !func_404())
	{
		return;
	}
	if (!unk_0xB03A1684359C50A1(iLocal_735, 18))
	{
		iVar0 = func_395(unk_0x8CFC7D6E1DA5D304());
		if (iVar0 >= 2)
		{
			unk_0xD2A9C3F486236CC5(&iLocal_735, 18);
			func_922(-1, 0, 0, -1, 0);
		}
	}
	if (!func_503())
	{
		return;
	}
	iVar1 = unk_0xA651DA0BC9FD8FA4();
	iVar2 = unk_0x8CFC7D6E1DA5D304();
	if (func_34(unk_0x8CFC7D6E1DA5D304(), 0))
	{
		iVar1 = func_405();
		iVar2 = Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_566;
	}
	if (!unk_0xB03A1684359C50A1(iLocal_735, 1))
	{
		iVar0 = func_395(iVar2);
		if (iVar0 >= 2)
		{
			if (iVar1 == Local_112.f_218)
			{
				if (func_406())
				{
					if (func_843())
					{
						func_534(86, "BIGM_DEFEND", "BIGM_DEFEND3", 1, -1, 2);
						unk_0xD2A9C3F486236CC5(&iLocal_735, 1);
					}
				}
				else if (func_843())
				{
					func_534(86, "BIGM_DEFEND", "BIGM_DEFEND2", 1, -1, 2);
					unk_0xD2A9C3F486236CC5(&iLocal_735, 1);
				}
				if (unk_0xB03A1684359C50A1(iLocal_735, 1))
				{
					if (iVar2 == unk_0x8CFC7D6E1DA5D304())
					{
						func_842(1);
					}
				}
			}
			else if (func_1061() == Local_112.f_218)
			{
				if (func_406())
				{
					if (func_821(func_838(1), "DCONTRA_TXT2", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						func_534(86, "BIGM_DEFEND", "BIGM_DEFEND3", 1, -1, 2);
					}
				}
				else if (func_821(func_838(1), "DCONTRA_TXT1", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_534(86, "BIGM_DEFEND", "BIGM_DEFEND4", 1, -1, 2);
				}
				if (iVar2 == unk_0x8CFC7D6E1DA5D304())
				{
					func_842(1);
				}
				unk_0xD2A9C3F486236CC5(&iLocal_735, 1);
			}
			else
			{
				unk_0xD2A9C3F486236CC5(&iLocal_735, 1);
			}
		}
		else
		{
			unk_0xD2A9C3F486236CC5(&iLocal_735, 1);
		}
	}
}

int func_821(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x62148293B793073B(&Global_2323, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_822(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3030 = iParam6;
			Global_2933[3 /*6*/] = { Global_104551.f_28020[iParam0 /*29*/].f_3 };
			Global_3010 = iParam0;
			unk_0xD2A9C3F486236CC5(&Global_2323, 1);
			unk_0xD2A9C3F486236CC5(&Global_2323, 7);
		}
		return 1;
	}
	return 0;
}

int func_822(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x9D39145AD645E383(sParam14, sParam15))
	{
	}
	func_832();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14453 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14453 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14453 == 1)
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
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			if (unk_0xB2F589E05EE3BB5E(unk_0x18F7BE9ACB7D08F4()))
			{
				return 0;
			}
		}
		if (Global_104551.f_14021[Global_14453 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xE7FAF8E78F7D3A73(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xE7FAF8E78F7D3A73(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_831() == 0)
	{
		func_829();
		return 0;
	}
	func_828(Global_16823);
	StringCopy(&(Global_104551.f_14111[Global_16823 /*104*/]), sParam1, 64);
	Global_104551.f_14111[Global_16823 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_104551.f_14111[Global_16823 /*104*/].f_24 = iParam2;
	}
	Global_104551.f_14111[Global_16823 /*104*/].f_25 = iParam7;
	Global_104551.f_14111[Global_16823 /*104*/].f_26 = uParam8;
	Global_104551.f_14111[Global_16823 /*104*/].f_29 = uParam9;
	Global_104551.f_14111[Global_16823 /*104*/].f_30 = uParam12;
	Global_104551.f_14111[Global_16823 /*104*/].f_31 = uParam11;
	Global_104551.f_14111[Global_16823 /*104*/].f_28 = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_104551.f_14111[Global_16823 /*104*/].f_33), sParam4, 64);
	Global_104551.f_14111[Global_16823 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_104551.f_14111[Global_16823 /*104*/].f_50), sParam5, 64);
	Global_104551.f_14111[Global_16823 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_104551.f_14111[Global_16823 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_104551.f_14111[Global_16823 /*104*/].f_83), sParam15, 64);
	if (unk_0xB03A1684359C50A1(Global_2323, 10))
	{
		Global_104551.f_14111[Global_16823 /*104*/].f_99[0] = 1;
		Global_104551.f_14111[Global_16823 /*104*/].f_99[1] = 1;
		Global_104551.f_14111[Global_16823 /*104*/].f_99[2] = 1;
		Global_3029 = 4;
		func_827(0);
		func_827(2);
		func_827(1);
	}
	else
	{
		func_832();
		switch (iParam16)
		{
			case 3:
				Global_104551.f_14111[Global_16823 /*104*/].f_99[Global_14453] = 1;
				break;
			
			case 0:
				Global_104551.f_14111[Global_16823 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_104551.f_14111[Global_16823 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_104551.f_14111[Global_16823 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14453)
			{
				case 0:
					func_827(0);
					Global_3029 = 0;
					break;
				
				case 1:
					func_827(1);
					Global_3029 = 1;
					break;
				
				case 2:
					func_827(2);
					Global_3029 = 2;
					break;
				
				case 3:
					func_827(3);
					Global_3029 = 3;
					break;
				
				default:
					Global_3029 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0xB03A1684359C50A1(Global_2323, 10))
		{
			Global_104551.f_14021[0 /*20*/].f_17 = 1;
			Global_104551.f_14021[1 /*20*/].f_17 = 1;
			Global_104551.f_14021[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_104551.f_14021[Global_14453 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_104551.f_14021[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_104551.f_14021[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_104551.f_14021[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16825[Global_16823] = 0;
	if (bParam10)
	{
		func_832();
		if (Global_14396)
		{
			StringCopy(&Global_14442, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14453)
			{
				case 0:
					StringCopy(&Global_14442, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14442, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14442, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14442, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_530())
			{
				unk_0x929C3CBA660376D5(-1, "Text_Arrive_Tone", &Global_14442, 1);
			}
		}
	}
	if (!Global_14616)
	{
		if (Global_14453.f_1 == 6)
		{
			func_826(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_823(1);
			func_826(Global_14434, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14433), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_823(int iParam0)
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
	
	Global_16824 = 0;
	Global_2928 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2892[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_825(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0xB03A1684359C50A1(Global_2324, 3))
								{
									iVar2 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14619 = 0;
								}
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_272(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(iVar2);
								unk_0xE2B30EB9B14EEAB2();
							}
							if (Global_2456776)
							{
								if (iVar1 == 14)
								{
									func_824(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2892[iVar0] = 1;
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
				if (iParam0 == Global_2330[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2330[iVar1 /*15*/].f_4)
					{
						if (Global_2892[iVar0] == 0)
						{
							Global_2856[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_104551.f_14111[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_104551.f_14111[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_104551.f_14111[iVar3 /*104*/].f_99[Global_14453] == 1)
											{
												Global_16824++;
											}
										}
									}
									iVar3++;
								}
								func_824(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16824), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70852)
								{
									iVar4 = 0;
									iVar4 = Global_4265877;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4265878[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4265878[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4265878[iVar5 /*104*/].f_99[Global_14453] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_824(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14453)
									{
										case 0:
											iVar6 = Global_36996;
											break;
										
										case 1:
											iVar6 = Global_36997;
											break;
										
										case 2:
											iVar6 = Global_36998;
											break;
										
										default:
											break;
									}
									func_824(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_824(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16819), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_272(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(Global_2329);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if (iVar1 == 2)
							{
								if (unk_0xB03A1684359C50A1(Global_2324, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_272(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(iVar7);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if (iVar1 == 3)
							{
								if (unk_0xB03A1684359C50A1(Global_2324, 3))
								{
									iVar8 = 42;
									Global_14619 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14619 = 0;
								}
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_272(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(iVar8);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if (iVar1 == 8)
							{
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_272(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(42);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if ((iVar1 == 23 && unk_0x9D39145AD645E383(&(Global_2330[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0xB03A1684359C50A1(Global_2324, 6))
							{
								unk_0x76F4FB5EFF5BDED5(Global_14434, "SET_DATA_SLOT");
								unk_0x22DD5585E00B80C3(1);
								unk_0x22DD5585E00B80C3(iVar0);
								unk_0x22DD5585E00B80C3(Global_2330[iVar1 /*15*/].f_10);
								unk_0x22DD5585E00B80C3(0);
								func_272(&(Global_2330[iVar1 /*15*/]));
								unk_0x22DD5585E00B80C3(42);
								unk_0xE2B30EB9B14EEAB2();
							}
							else if (Global_2330[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1626200.f_1;
								func_824(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_824(Global_14434, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2330[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2330[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2892[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_824(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x76F4FB5EFF5BDED5(uParam0, sParam1);
	unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0xFAFFA408239A026B(sParam7))
	{
		func_272(sParam7);
	}
	if (!unk_0xFAFFA408239A026B(sParam8))
	{
		func_272(sParam8);
	}
	if (!unk_0xFAFFA408239A026B(sParam9))
	{
		func_272(sParam9);
	}
	if (!unk_0xFAFFA408239A026B(sParam10))
	{
		func_272(sParam10);
	}
	if (!unk_0xFAFFA408239A026B(sParam11))
	{
		func_272(sParam11);
	}
	unk_0xE2B30EB9B14EEAB2();
}

bool func_825(int iParam0)
{
	return Global_35859 == iParam0;
}

void func_826(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x76F4FB5EFF5BDED5(uParam0, sParam1);
	unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x22DD5585E00B80C3(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE2B30EB9B14EEAB2();
}

void func_827(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_104551.f_14021[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_828(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xB093145A4ED05C87();
	uVar1 = unk_0x4BF279EB036481A0();
	uVar2 = unk_0xF0B96EE16BA9FBE8();
	uVar3 = unk_0x518720E0DE404FFC();
	uVar4 = unk_0x5E3E9A684A609866() + 1;
	uVar5 = unk_0xFBE778F13510E585();
	Global_104551.f_14111[iParam0 /*104*/].f_18 = uVar0;
	Global_104551.f_14111[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_104551.f_14111[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_104551.f_14111[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_104551.f_14111[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_104551.f_14111[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_829()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70852)
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
	Global_16823 = 34;
	Global_104551.f_14111[Global_16823 /*104*/].f_18 = -1;
	Global_104551.f_14111[Global_16823 /*104*/].f_18.f_1 = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_18.f_2 = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_18.f_3 = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_830(Global_104551.f_14111[iVar2 /*104*/].f_18, Global_104551.f_14111[Global_16823 /*104*/].f_18))
		{
			Global_16823 = iVar2;
		}
		iVar2++;
	}
	Global_104551.f_14111[Global_16823 /*104*/].f_24 = 1;
}

int func_830(struct<6> Param0, struct<6> Param6)
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

int func_831()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70852)
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
		if (Global_104551.f_14111[iVar2 /*104*/].f_24 == 0)
		{
			Global_16823 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16823 = 34;
	Global_104551.f_14111[Global_16823 /*104*/].f_18 = -1;
	Global_104551.f_14111[Global_16823 /*104*/].f_18.f_1 = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_18.f_2 = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_18.f_3 = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_104551.f_14111[iVar2 /*104*/].f_24 == 0 || Global_104551.f_14111[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_830(Global_104551.f_14111[iVar2 /*104*/].f_18, Global_104551.f_14111[Global_16823 /*104*/].f_18))
			{
				Global_16823 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16823 == 34)
	{
		return 0;
	}
	Global_104551.f_14111[Global_16823 /*104*/].f_99[0] = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_99[1] = 0;
	Global_104551.f_14111[Global_16823 /*104*/].f_99[2] = 0;
	return 1;
}

void func_832()
{
	if (func_825(14))
	{
		if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()) == Global_104551.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_833();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70852)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

var func_833()
{
	func_834();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_834()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_837(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_836(unk_0x18F7BE9ACB7D08F4());
			if (func_835(iVar0) && (!func_825(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_835(Global_104551.f_2353.f_539.f_4301))
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

bool func_835(int iParam0)
{
	return iParam0 < 3;
}

int func_836(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_837(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_837(int iParam0)
{
	if (func_835(iParam0))
	{
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_838(bool bParam0)
{
	if (func_840(bParam0))
	{
		if (bParam0 && func_839())
		{
			Global_104551.f_28020[22 /*29*/].f_24[Global_14453] = 1;
			return 22;
		}
		else
		{
			return 75;
		}
	}
	if (bParam0 && func_839())
	{
		Global_104551.f_28020[22 /*29*/].f_24[Global_14453] = 1;
		return 22;
	}
	return 74;
}

int func_839()
{
	int iVar0;
	
	iVar0 = func_58(unk_0x8CFC7D6E1DA5D304());
	if (((iVar0 != unk_0x8CFC7D6E1DA5D304() && iVar0 != func_57()) && unk_0x4AF13BCD120BCDBC(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

bool func_840(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = func_58(unk_0x8CFC7D6E1DA5D304());
		if (func_839())
		{
			if (func_841(iVar0))
			{
				return 1;
			}
			return 0;
		}
	}
	return func_481(3211, -1, 0) != 0;
}

bool func_841(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_15, 29);
}

void func_842(bool bParam0)
{
	if (bParam0)
	{
		if (!func_226(unk_0x8CFC7D6E1DA5D304(), 9))
		{
			if (func_395(unk_0x8CFC7D6E1DA5D304()) != 0)
			{
				func_227(9);
			}
		}
	}
	else if (func_226(unk_0x8CFC7D6E1DA5D304(), 9))
	{
		func_225(9);
	}
}

int func_843()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_838(1);
	switch (iLocal_851)
	{
		case 0:
			sLocal_852 = func_921();
			if (func_840(1))
			{
				func_920(&uLocal_853, 3, 0, "EXECPA_MALE", 0, 1);
			}
			else
			{
				func_920(&uLocal_853, 2, 0, "EXECPA_FEMALE", 0, 1);
			}
			iLocal_851++;
			break;
		
		case 1:
			if (func_914(0, 1, 0, 1))
			{
				unk_0xD2A9C3F486236CC5(&uVar1, 4);
				if (func_844(&uLocal_853, iVar0, "EXCALAU", sLocal_852, uVar1, 0))
				{
					iLocal_851++;
					return 1;
				}
			}
			break;
		
		case 2:
			break;
	}
	return 0;
}

int func_844(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_912())
	{
		return 0;
	}
	if (func_911())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_845(uParam0, iParam1, sParam2, sParam3, 1, iParam5, uParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_845(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, int iParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xFAFFA408239A026B(sParam2))
	{
		return 0;
	}
	if (unk_0xA49B74E0C954F146(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0xFAFFA408239A026B(sParam3))
	{
		return 0;
	}
	if (unk_0xA49B74E0C954F146(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x6E987D62C8535B6E(unk_0xFCA64981FEF7C913());
	iVar1 = func_910(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0xFAFFA408239A026B(iParam7))
	{
		iVar2 = unk_0x6E987D62C8535B6E(iParam7);
	}
	if (func_909(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_904(uParam6))
	{
		return 0;
	}
	if (func_901(iVar0, iVar1, iVar2))
	{
		if (func_900())
		{
			return 0;
		}
		func_899();
		return func_852(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, iParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_851(iParam4))
	{
		return 0;
	}
	func_846(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_846(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1350816.f_40.f_1 = iParam0;
	Global_1350816.f_40.f_2 = iParam1;
	Global_1350816.f_40.f_3 = iParam2;
	StringCopy(&(Global_1350816.f_40.f_4), sParam3, 16);
	Global_1350816.f_40.f_8 = iParam4;
	Global_1350816.f_40.f_9 = iParam5;
	Global_1350816.f_40.f_14 = uParam6;
	func_847(iParam4);
	func_899();
	Global_1350816.f_40.f_13 = unk_0xCBD2990CF476037D(unk_0xE92FCF3C05C2EF1D(), 7000);
}

void func_847(int iParam0)
{
	if (func_850(iParam0))
	{
		func_849();
		return;
	}
	func_848();
}

void func_848()
{
	Global_1350816.f_40.f_10 = 0;
}

void func_849()
{
	Global_1350816.f_40.f_10 = 1;
}

int func_850(int iParam0)
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

bool func_851(int iParam0)
{
	return iParam0 > Global_1350816.f_40.f_8;
}

int func_852(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_898();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_895(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_892(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_895(uParam0, sParam3, sParam4);
		}
		return func_876(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_875(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_871(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_870(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_853(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_853(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_869();
	bVar0 = true;
	if (func_855(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_854(120000);
		return 1;
	}
	return 0;
}

void func_854(int iParam0)
{
	Global_1350816.f_40.f_11 = unk_0xCBD2990CF476037D(unk_0xE92FCF3C05C2EF1D(), iParam0);
	Global_1350816.f_40.f_12 = 1;
}

int func_855(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_57();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x3E8AA4B2B7764D27(iVar0);
		iVar1 = func_303(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x57D076A6F81F1FC1(unk_0xE92FCF3C05C2EF1D(), Global_1350816.f_40.f_13))
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
	sVar4 = func_868(uParam5, bParam6, &iVar3);
	uVar5 = func_866(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xFAFFA408239A026B(sParam8))
	{
		iVar6++;
		if (!unk_0xFAFFA408239A026B(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x9D39145AD645E383(sVar4, " "))
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
		if (unk_0xB03A1684359C50A1(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xB03A1684359C50A1(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xFAFFA408239A026B(sVar2))
	{
		bVar12 = func_865(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_859(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xB03A1684359C50A1(iParam4, 0))
	{
		func_858();
	}
	func_869();
	func_857();
	func_856();
	return 1;
}

void func_856()
{
	Global_1350816.f_57 = 0;
	Global_1350816.f_57.f_1 = 0;
}

void func_857()
{
	Global_1350816.f_40 = 3;
}

void func_858()
{
	unk_0xD2A9C3F486236CC5(&Global_2323, 8);
}

int func_859(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_860(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3030 = iParam6;
			unk_0xD2A9C3F486236CC5(&Global_4267143, 0);
		}
		return 1;
	}
	return 0;
}

int func_860(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x9D39145AD645E383(sParam14, sParam15))
	{
	}
	func_832();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14453 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14453 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14453 == 1)
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
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			if (unk_0xB2F589E05EE3BB5E(unk_0x18F7BE9ACB7D08F4()))
			{
				return 0;
			}
		}
		if (Global_4267128 == 1)
		{
			return 0;
		}
		if (unk_0xE7FAF8E78F7D3A73(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0xE7FAF8E78F7D3A73(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_864() == 0)
	{
		func_862();
		return 0;
	}
	func_861(Global_4267127);
	StringCopy(&(Global_4265878[Global_4267127 /*104*/]), sParam1, 64);
	Global_4265878[Global_4267127 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4265878[Global_4267127 /*104*/].f_24 = iParam2;
	}
	Global_4265878[Global_4267127 /*104*/].f_25 = iParam7;
	Global_4265878[Global_4267127 /*104*/].f_26 = uParam8;
	Global_4265878[Global_4267127 /*104*/].f_29 = uParam9;
	Global_4265878[Global_4267127 /*104*/].f_30 = uParam12;
	Global_4265878[Global_4267127 /*104*/].f_31 = uParam11;
	Global_4265878[Global_4267127 /*104*/].f_28 = 0;
	Global_4265878[Global_4267127 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4265878[Global_4267127 /*104*/].f_33), sParam4, 64);
	Global_4265878[Global_4267127 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4265878[Global_4267127 /*104*/].f_50), sParam5, 64);
	Global_4265878[Global_4267127 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4265878[Global_4267127 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4265878[Global_4267127 /*104*/].f_83), sParam15, 64);
	func_832();
	switch (iParam16)
	{
		case 3:
			Global_4265878[Global_4267127 /*104*/].f_99[Global_14453] = 1;
			break;
		
		case 0:
			Global_4265878[Global_4267127 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4265878[Global_4267127 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4265878[Global_4267127 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14453)
		{
			case 0:
				func_827(0);
				break;
			
			case 1:
				func_827(1);
				break;
			
			case 2:
				func_827(2);
				break;
			
			case 3:
				func_827(3);
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
				Global_4267128 = 1;
				break;
			
			case 0:
				Global_4267128 = 1;
				break;
			
			case 2:
				Global_4267128 = 1;
				break;
			
			case 1:
				Global_4267128 = 1;
				break;
			}
	}
	Global_16825[Global_4267127] = 0;
	if (bParam10)
	{
		func_832();
		if (Global_14396)
		{
			StringCopy(&Global_14442, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14453)
			{
				case 0:
					StringCopy(&Global_14442, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14442, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14442, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14442, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_530())
			{
				unk_0x929C3CBA660376D5(-1, "Text_Arrive_Tone", &Global_14442, 1);
			}
		}
	}
	if (!Global_14616)
	{
		if (Global_14453.f_1 == 6)
		{
			func_826(Global_14434, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_823(1);
			func_826(Global_14434, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14433), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_861(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xB093145A4ED05C87();
	uVar1 = unk_0x4BF279EB036481A0();
	uVar2 = unk_0xF0B96EE16BA9FBE8();
	uVar3 = unk_0x518720E0DE404FFC();
	uVar4 = unk_0x5E3E9A684A609866() + 1;
	uVar5 = unk_0xFBE778F13510E585();
	Global_4265878[iParam0 /*104*/].f_18 = uVar0;
	Global_4265878[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_4265878[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_4265878[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_4265878[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4265878[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_862()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4267127 = 11;
	Global_4265878[Global_4267127 /*104*/].f_18 = -1;
	Global_4265878[Global_4267127 /*104*/].f_18.f_1 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_2 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_3 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_863(Global_4265878[iVar2 /*104*/].f_18, Global_4265878[Global_4267127 /*104*/].f_18))
		{
			Global_4267127 = iVar2;
		}
		iVar2++;
	}
	Global_4265878[Global_4267127 /*104*/].f_24 = 1;
}

int func_863(struct<6> Param0, struct<6> Param6)
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

int func_864()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4265878[iVar2 /*104*/].f_24 == 0)
		{
			Global_4267127 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4267127 = 11;
	Global_4265878[Global_4267127 /*104*/].f_18 = -1;
	Global_4265878[Global_4267127 /*104*/].f_18.f_1 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_2 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_3 = 0;
	Global_4265878[Global_4267127 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4265878[iVar2 /*104*/].f_24 == 0 || Global_4265878[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_863(Global_4265878[iVar2 /*104*/].f_18, Global_4265878[Global_4267127 /*104*/].f_18))
			{
				Global_4267127 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4267127 == 11)
	{
		return 0;
	}
	Global_4265878[Global_4267127 /*104*/].f_99[0] = 0;
	Global_4265878[Global_4267127 /*104*/].f_99[1] = 0;
	Global_4265878[Global_4267127 /*104*/].f_99[2] = 0;
	return 1;
}

int func_865(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_860(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3030 = iParam10;
			unk_0xD2A9C3F486236CC5(&Global_4267143, 0);
		}
		return 1;
	}
	return 0;
}

int func_866(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_867(2, iParam1);
	return iParam0;
}

void func_867(int iParam0, var uParam1)
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

var func_868(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0xFAFFA408239A026B(uParam0))
	{
		return sLocal_18;
	}
	if (unk_0x9D39145AD645E383(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_867(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xE883B8F5FA6A04DA(sParam0);
}

void func_869()
{
	Global_1350816.f_40.f_9 = 4;
}

int func_870(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_869();
	bVar0 = false;
	return func_855(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_871(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_872(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_872(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
	
	iVar0 = func_57();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = unk_0x3E8AA4B2B7764D27(iVar0);
		iVar1 = func_303(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0x57D076A6F81F1FC1(unk_0xE92FCF3C05C2EF1D(), Global_1350816.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16817 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_868(uParam5, bParam6, &iVar3);
	uVar5 = func_866(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0xFAFFA408239A026B(sParam8))
	{
		iVar6++;
		if (!unk_0xFAFFA408239A026B(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x9D39145AD645E383(sVar4, " "))
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
		if (unk_0xB03A1684359C50A1(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0xB03A1684359C50A1(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0xFAFFA408239A026B(sVar2))
	{
		bVar12 = func_874(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_821(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0xB03A1684359C50A1(iParam4, 0))
	{
		func_858();
	}
	func_873();
	func_857();
	func_856();
	return 1;
}

void func_873()
{
	Global_1350816.f_40.f_9 = 3;
}

int func_874(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	unk_0x62148293B793073B(&Global_2323, 10);
	iVar0 = 3;
	if (func_822(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3030 = iParam10;
			Global_2933[3 /*6*/] = { Global_104551.f_28020[iParam0 /*29*/].f_3 };
			Global_3010 = iParam0;
			StringCopy(&Global_3011, sParam5, 64);
			unk_0xD2A9C3F486236CC5(&Global_2323, 1);
			unk_0xD2A9C3F486236CC5(&Global_2323, 7);
		}
		return 1;
	}
	return 0;
}

int func_875(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
	}
	if (unk_0xAE8B7AC0DA6122BC(unk_0x18F7BE9ACB7D08F4()))
	{
		return 0;
	}
	func_873();
	bVar0 = true;
	if (func_872(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_854(120000);
		return 1;
	}
	return 0;
}

int func_876(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0xAE8B7AC0DA6122BC(unk_0x18F7BE9ACB7D08F4()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0xB03A1684359C50A1(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0xB03A1684359C50A1(iParam4, 4))
	{
		bVar0 = func_891(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_882(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0xB03A1684359C50A1(iParam4, 3))
		{
			func_881(1);
		}
		if (unk_0xB03A1684359C50A1(iParam4, 5))
		{
			func_880(1);
		}
		func_879();
		func_857();
		func_878();
		func_877();
		return 1;
	}
	return 0;
}

void func_877()
{
	Global_2520995 = 0;
}

void func_878()
{
	Global_1350816.f_57 = 1;
	Global_1350816.f_57.f_1 = 0;
}

void func_879()
{
	Global_1350816.f_40.f_9 = 1;
}

void func_880(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2325, 0);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2325, 0);
	}
}

void func_881(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&Global_2323, 20);
	}
	else
	{
		unk_0x62148293B793073B(&Global_2323, 20);
	}
}

int func_882(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_890(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15804 = 0;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_15761 = 0;
	Global_15808 = 0;
	Global_15810 = 0;
	Global_2621441 = 0;
	return func_883(sParam3, iParam4, bParam7);
}

int func_883(char* sParam0, int iParam1, bool bParam2)
{
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam1 > Global_15758)
			{
				if (Global_15763 == 0)
				{
					unk_0xBE97F4E2B659331B(0);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
					Global_15767 = 0;
					Global_15766 = 0;
					Global_14452 = 0;
				}
				else
				{
					func_889();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x85FDEF76CDBAD589())
		{
			return 0;
		}
		if (func_379(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_888();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_16752 = Global_16753;
		Global_15375.f_370 = Global_16745;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15752 = Global_15753;
		if (Global_15762)
		{
			unk_0x62148293B793073B(&Global_2323, 20);
			unk_0x62148293B793073B(&Global_2324, 17);
			unk_0x62148293B793073B(&Global_2325, 0);
			if (bParam2)
			{
				func_832();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14453.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14419 == 1)
			{
				return 0;
			}
			if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
			{
				if (unk_0x38000067CDE001D0(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (func_887())
				{
					return 0;
				}
				if (unk_0xAE8B7AC0DA6122BC(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x0B90D19A63676F41(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0xDDA45FDD097F5240(unk_0x18F7BE9ACB7D08F4()))
				{
					return 0;
				}
				if (unk_0x34F40618CEEAB490(unk_0x18F7BE9ACB7D08F4(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70852)
				{
					if (unk_0xE1F715CDDC50FD7F(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0x869BE9FEE7F5316B(unk_0x8CFC7D6E1DA5D304()))
					{
						return 0;
					}
					if (unk_0xEEDFFBA2DC1CCDB0(unk_0x18F7BE9ACB7D08F4()))
					{
						return 0;
					}
					if (unk_0xAC991FD3AAB0DC56(unk_0x8CFC7D6E1DA5D304()))
					{
						return 0;
					}
				}
			}
			if (func_886())
			{
				return 0;
			}
			else
			{
				switch (Global_14453.f_1)
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
				if (unk_0xB03A1684359C50A1(Global_2323, 9))
				{
					return 0;
				}
			}
			func_885();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_884();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15758 || iParam1 == Global_15758)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_889();
	}
	return 0;
}

void func_884()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xBE97F4E2B659331B(0);
	Global_15756 = 1;
}

void func_885()
{
	Global_15809 = Global_15808;
	Global_15803 = Global_15804;
	Global_15850 = { Global_15838 };
	Global_15856 = { Global_15844 };
	Global_15811 = Global_15810;
	Global_15880 = { Global_15862 };
	Global_15886 = { Global_15868 };
	Global_15892 = { Global_15874 };
	Global_15898 = { Global_15904 };
	Global_1638 = Global_1639;
	Global_1640 = Global_1641;
	Global_15767 = Global_15768;
	Global_15769 = Global_15770;
	Global_15771 = { Global_15787 };
	Global_15760 = Global_15761;
	Global_16772 = 0;
	Global_15805 = 0;
	Global_15806 = 0;
	unk_0x62148293B793073B(&Global_2324, 16);
}

int func_886()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_887()
{
	int iVar0;
	int iVar1;
	
	if (Global_70852)
	{
		iVar0 = 0;
		unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &iVar1, 1);
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x4D73A339AD1764B4() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x637828192EF718F7(unk_0x18F7BE9ACB7D08F4(), 78, 1))
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

void func_888()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15045[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15045[iVar0 /*10*/].f_1), "", 24);
		Global_15045[iVar0 /*10*/].f_7 = 0;
		Global_15045[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15045.f_161 = -99;
	Global_15045.f_162 = { 0f, 0f, 0f };
}

void func_889()
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

void func_890(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_891(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_890(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15804 = 1;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_15761 = 0;
	Global_15808 = 0;
	Global_15810 = 0;
	Global_2621441 = 0;
	return func_883(sParam3, iParam4, bParam7);
}

int func_892(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
	}
	if (unk_0xAE8B7AC0DA6122BC(unk_0x18F7BE9ACB7D08F4()))
	{
		return 0;
	}
	if (func_894(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_893();
		func_879();
		func_857();
		func_878();
		func_877();
		return 1;
	}
	return 0;
}

void func_893()
{
	Global_16774 = 0;
}

bool func_894(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_890(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15804 = 0;
	Global_15763 = 1;
	Global_15770 = 0;
	Global_15765 = 1;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_15761 = 0;
	Global_15808 = 1;
	Global_15810 = 0;
	StringCopy(&Global_15904, sParam5, 24);
	Global_2621441 = 0;
	return func_883(sParam3, iParam4, bParam8);
}

int func_895(var uParam0, char* sParam1, char* sParam2)
{
	if (func_897(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_896();
		func_857();
		func_878();
		return 1;
	}
	return 0;
}

void func_896()
{
	Global_1350816.f_40.f_9 = 2;
}

bool func_897(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_890(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15763 = 0;
	Global_15765 = 0;
	Global_15770 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_2621441 = 0;
	return func_883(sParam2, iParam3, 0);
}

void func_898()
{
	Global_1350816.f_55 = Global_1350816.f_40.f_1;
	Global_1350816.f_55.f_1 = Global_1350816.f_40.f_10;
}

void func_899()
{
	Global_1350816.f_40 = 1;
}

bool func_900()
{
	return Global_1350816.f_40 == 1;
}

int func_901(int iParam0, int iParam1, int iParam2)
{
	if (!func_902(iParam0))
	{
		return 0;
	}
	if (Global_1350816.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1350816.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_902(int iParam0)
{
	if (!func_903())
	{
		return 0;
	}
	if (!Global_1350816.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_903()
{
	if (Global_1350816.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_904(int iParam0)
{
	if (func_908())
	{
		return 0;
	}
	if (func_907())
	{
		return 0;
	}
	if (func_906(0))
	{
		return 0;
	}
	if (Global_1312466.f_18 != 0)
	{
		return 0;
	}
	if (Global_1794814 || func_507())
	{
		return 0;
	}
	if (!unk_0xB03A1684359C50A1(uParam0, 6))
	{
		if (func_905())
		{
			return 0;
		}
	}
	return 1;
}

bool func_905()
{
	return unk_0x57D076A6F81F1FC1(unk_0xE92FCF3C05C2EF1D(), Global_1367558);
}

int func_906(int iParam0)
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

bool func_907()
{
	return Global_1350816.f_40 == 3;
}

bool func_908()
{
	return func_886();
}

int func_909(int iParam0, int iParam1, int iParam2)
{
	if (!func_907())
	{
		return 0;
	}
	return func_901(iParam0, iParam1, iParam2);
}

int func_910(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x6E987D62C8535B6E(&cVar0);
}

bool func_911()
{
	return Global_2518483.f_1;
}

int func_912()
{
	if (Global_1351004.f_2)
	{
		return 1;
	}
	return func_913();
}

bool func_913()
{
	return func_908();
}

int func_914(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x622E10ED992CEB95())
	{
		return 0;
	}
	if (func_919())
	{
		return 0;
	}
	if (!unk_0xC8AB6A5E6C1E6613())
	{
		return 0;
	}
	if (func_385())
	{
		return 0;
	}
	if (func_531())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_100(unk_0x8CFC7D6E1DA5D304(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_918(unk_0x8CFC7D6E1DA5D304()))
		{
			return 0;
		}
	}
	if (func_917())
	{
		return 0;
	}
	if (unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		return 0;
	}
	if (unk_0xC83C302702976DCB())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0xA126D857D0E10968(unk_0x8CFC7D6E1DA5D304()))
		{
			return 0;
		}
	}
	if (Global_1574118)
	{
		return 0;
	}
	if (func_916())
	{
		return 0;
	}
	if (func_915())
	{
		return 0;
	}
	if (func_378())
	{
		return 0;
	}
	if (Global_68213)
	{
		return 0;
	}
	if (Global_2521479)
	{
		return 0;
	}
	return 1;
}

bool func_915()
{
	return Global_2447128.f_579;
}

bool func_916()
{
	return Global_2447128.f_731;
}

bool func_917()
{
	return Global_2436169.f_2911.f_578;
}

int func_918(int iParam0)
{
	if (Global_2422724[iParam0 /*420*/].f_223 == 0)
	{
		return 0;
	}
	return 1;
}

int func_919()
{
	if (Global_15756 != 0 || unk_0x85FDEF76CDBAD589())
	{
		return 1;
	}
	return 0;
}

void func_920(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

char* func_921()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = !func_840(1);
	iVar1 = unk_0x61E9B3BFA06B017B(0, 3);
	if (!func_406())
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

void func_922(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_222(unk_0x8CFC7D6E1DA5D304());
	if (iParam2 || func_424(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1807025 = iVar0;
		if (func_518(iVar0))
		{
			Global_1807025.f_1 = 4;
		}
		else if (func_517(iVar0))
		{
			Global_1807025.f_1 = 5;
		}
		else if (func_323(iVar0, 0))
		{
			Global_1807025.f_1 = 2;
			if (func_567(iVar0))
			{
				Global_1807025.f_1 = 3;
			}
		}
		else
		{
			Global_1807025.f_1 = 1;
		}
		if (func_593() != func_57())
		{
			Global_1807025.f_4 = func_783(func_593());
			Global_1807025.f_5 = func_782(func_593());
		}
		if (func_355() != func_57())
		{
			func_592(func_355(), &(Global_1807025.f_6), &(Global_1807025.f_7));
		}
		Global_1807025.f_9 = unk_0xE6E19D6A1FC25165();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1807025.f_27 = 1;
			Global_1807025.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1807025.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1807025.f_40 = func_587(iParam1);
			Global_1807025.f_41 = func_943();
			Global_1807025.f_42 = func_699(unk_0x8CFC7D6E1DA5D304(), iParam1);
			Global_1807025.f_44 = func_778(unk_0x8CFC7D6E1DA5D304(), iParam1);
		}
	}
	else if (func_515(iVar0))
	{
		if (iVar0 == 225 || iVar0 == 226)
		{
			Global_1807140 = iParam0 + 1;
		}
		else if (iVar0 == 227)
		{
			Global_1807140 = iParam0 + 1;
		}
		else
		{
			Global_1807140 = func_942(unk_0x8CFC7D6E1DA5D304());
		}
		switch (iVar0)
		{
			case 225:
				if (func_941(unk_0x8CFC7D6E1DA5D304()) == 0)
				{
					Global_1807140.f_1 = 0;
				}
				else
				{
					Global_1807140.f_1 = 1;
				}
				break;
			
			case 226:
				Global_1807140.f_1 = 2;
				break;
			
			case 227:
				Global_1807140.f_1 = 3;
				break;
		}
		Global_1807140.f_21 = 1;
		Global_1807140.f_22 = 1;
		if (func_593() != func_57())
		{
			Global_1807140.f_4 = func_783(func_593());
			Global_1807140.f_5 = func_782(func_593());
		}
		if (func_355() != func_57())
		{
			func_592(func_355(), &(Global_1807140.f_4), &(Global_1807140.f_5));
		}
		Global_1807140.f_8 = unk_0xE6E19D6A1FC25165();
		if (iParam0 != -1)
		{
			Global_1807140.f_20 = iParam0;
		}
	}
	else if (func_428(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
		}
		Global_1807078 = iVar0;
		Global_1807025.f_1 = 1;
		if (func_593() != func_57())
		{
			Global_1807078.f_4 = func_783(func_593());
			Global_1807078.f_5 = func_782(func_593());
		}
		if (func_355() != func_57())
		{
			func_592(func_355(), &(Global_1807078.f_6), &(Global_1807078.f_7));
		}
		Global_1807078.f_9 = unk_0xE6E19D6A1FC25165();
		if (iParam0 != -1)
		{
			Global_1807078.f_21 = iParam0;
		}
	}
	else if (func_513(iVar0))
	{
		Global_1807183 = iVar0;
		Global_1807183.f_1 = iParam0;
		Global_1807183.f_21 = 1;
		Global_1807183.f_22 = 1;
		if (func_593() != func_57())
		{
			Global_1807183.f_4 = func_783(func_593());
			Global_1807183.f_5 = func_782(func_593());
		}
		if (func_355() != func_57())
		{
			func_592(func_355(), &(Global_1807183.f_4), &(Global_1807183.f_5));
		}
		Global_1807183.f_8 = unk_0xE6E19D6A1FC25165();
		if (iParam0 != -1)
		{
			Global_1807183.f_20 = iParam0;
		}
		Global_1807183.f_27 = func_770(func_36(), 5);
		Global_1807183.f_28 = func_767(func_678(unk_0x8CFC7D6E1DA5D304()));
		Global_1807183.f_29 = func_481(6090, -1, 0);
		Global_1807183.f_30 = func_481(6086, -1, 0);
		Global_1807183.f_31 = func_481(6087, -1, 0);
		Global_1807183.f_32 = func_481(6089, -1, 0);
		Global_1807183.f_33 = func_481(6088, -1, 0);
		Global_1807183.f_34 = func_481(6091, -1, 0);
		Global_1807183.f_7 = func_772();
		Global_1807183.f_51 = func_767(bParam4);
	}
	else if (func_511(iVar0))
	{
		Global_1807236 = iVar0;
		Global_1807236.f_1 = iParam0;
		Global_1807236.f_21 = 1;
		Global_1807236.f_22 = 1;
		if (func_593() != func_57())
		{
			Global_1807236.f_4 = func_783(func_593());
			Global_1807236.f_5 = func_782(func_593());
		}
		if (func_355() != func_57())
		{
			func_592(func_355(), &(Global_1807236.f_4), &(Global_1807236.f_5));
		}
		Global_1807236.f_8 = unk_0xE6E19D6A1FC25165();
		if (iParam0 != -1)
		{
			Global_1807236.f_20 = iParam0;
		}
		Global_1807236.f_24 = func_481(6140, -1, 0);
		Global_1807236.f_25 = func_481(6145, -1, 0);
		Global_1807236.f_26 = func_481(6146, -1, 0);
		Global_1807236.f_27 = func_767((((func_732() || func_731()) || func_730()) || func_729(unk_0x8CFC7D6E1DA5D304())));
		Global_1807236.f_28 = func_481(6147, -1, 0);
		Global_1807236.f_29 = func_767(func_728());
		Global_1807236.f_31 = 0;
		Global_1807236.f_30 = 0;
		Global_1807236.f_32 = 0;
		Global_1807236.f_33 = 0;
		Global_1807236.f_34 = 0;
		Global_1807236.f_16 = 0;
	}
	else
	{
		if (func_593() != func_57())
		{
			Global_1807007 = func_783(func_593());
			Global_1807007.f_1 = func_782(func_593());
		}
		Global_1807007.f_5 = unk_0xE6E19D6A1FC25165();
		Global_1807007.f_13 = func_940();
		Global_1807007.f_15 = 0;
		if (func_591(1))
		{
			if (func_355() == func_593())
			{
				Global_1807007.f_15 = 1;
			}
		}
		if (func_939())
		{
			Global_1807140.f_28 = 1;
		}
		if (((func_938() || func_937()) || func_936()) || func_935())
		{
			Global_1807140.f_30 = 1;
		}
		if (func_933(func_934(joaat("trailersmall2"))))
		{
			Global_1807140.f_32 = 1;
		}
		if (func_926(func_932(joaat("caddy"))))
		{
			Global_1807140.f_31 = 1;
		}
		if (func_769(unk_0x8CFC7D6E1DA5D304()) || func_768(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1807140.f_29 = 1;
		}
		if (func_764(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1807140.f_33 = 1;
			Global_1807140.f_34 = 1;
		}
		if (func_765(unk_0x8CFC7D6E1DA5D304()))
		{
			Global_1807140.f_36 = 1;
		}
		if (func_762(0, unk_0x8CFC7D6E1DA5D304()) == 1)
		{
			Global_1807140.f_35 = 1;
		}
		if (func_925(unk_0x8CFC7D6E1DA5D304(), 3, &uVar1))
		{
			Global_1807140.f_37 = 1;
		}
		if (func_925(unk_0x8CFC7D6E1DA5D304(), 7, &uVar1))
		{
			Global_1807140.f_38 = 1;
		}
		if (func_924(unk_0x8CFC7D6E1DA5D304()))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = func_923(unk_0x8CFC7D6E1DA5D304(), iVar2);
				if (func_696(unk_0x8CFC7D6E1DA5D304(), iVar3, 0))
				{
					Global_1807140.f_39 = 1;
				}
				if (func_696(unk_0x8CFC7D6E1DA5D304(), iVar3, 2))
				{
					Global_1807140.f_40 = 1;
				}
				if (func_696(unk_0x8CFC7D6E1DA5D304(), iVar3, 1))
				{
					Global_1807140.f_41 = 1;
				}
				iVar2++;
			}
		}
	}
}

int func_923(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_692(Global_1595681[iParam0 /*678*/].f_266.f_160[iParam1 /*12*/]))
	{
		uVar0 = Global_1595681[iParam0 /*678*/].f_266.f_160[iParam1 /*12*/];
	}
	return uVar0;
}

int func_924(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_925(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 != func_57())
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (iParam1 == func_762(iVar0, iParam0))
			{
				*uParam2 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_926(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_931(11, -1) == 0)
	{
		return 0;
	}
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = (iParam0 + func_746(11));
		func_745(iVar1, &iVar0, 1);
		iVar2 = func_931(func_928(iVar1), -1);
		if (iVar2 > 0)
		{
		}
		else if (iVar0 >= 0)
		{
		}
		if (iVar0 >= 0)
		{
			iVar3 = func_481(func_927(4, iVar0), -1, 0);
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

int func_927(int iParam0, int iParam1)
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
			switch (iParam1)
			{
				case 184:
					return 6153;
				
				case 185:
					return 6160;
				
				case 186:
					return 6167;
				
				case 187:
					return 6174;
				
				case 188:
					return 6181;
				
				case 189:
					return 6188;
				
				case 190:
					return 6195;
				
				case 191:
					return 6202;
				
				case 192:
					return 6209;
				
				case 193:
					return 6216;
				
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
					return 4111;
				
				case 101:
					return 4119;
				
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
					return 4271;
				
				case 121:
					return 4279;
				
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
					return 4431;
				
				case 141:
					return 4439;
				
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
			switch (iParam1)
			{
				case 184:
					return 6154;
				
				case 185:
					return 6161;
				
				case 186:
					return 6168;
				
				case 187:
					return 6175;
				
				case 188:
					return 6182;
				
				case 189:
					return 6189;
				
				case 190:
					return 6196;
				
				case 191:
					return 6203;
				
				case 192:
					return 6210;
				
				case 193:
					return 6217;
				
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
					return 4016;
				
				case 89:
					return 4024;
				
				case 90:
					return 4032;
				
				case 91:
					return 4040;
				
				case 92:
					return 4048;
				
				case 93:
					return 4056;
				
				case 94:
					return 4064;
				
				case 95:
					return 4072;
				
				case 96:
					return 4080;
				
				case 97:
					return 4088;
				
				case 98:
					return 4096;
				
				case 99:
					return 4104;
				
				case 100:
					return 4112;
				
				case 101:
					return 4120;
				
				case 102:
					return 4128;
				
				case 103:
					return 4136;
				
				case 104:
					return 4144;
				
				case 105:
					return 4152;
				
				case 106:
					return 4160;
				
				case 107:
					return 4168;
				
				case 108:
					return 4176;
				
				case 109:
					return 4184;
				
				case 110:
					return 4192;
				
				case 111:
					return 4200;
				
				case 112:
					return 4208;
				
				case 113:
					return 4216;
				
				case 114:
					return 4224;
				
				case 115:
					return 4232;
				
				case 116:
					return 4240;
				
				case 117:
					return 4248;
				
				case 118:
					return 4256;
				
				case 119:
					return 4264;
				
				case 120:
					return 4272;
				
				case 121:
					return 4280;
				
				case 122:
					return 4288;
				
				case 123:
					return 4296;
				
				case 124:
					return 4304;
				
				case 125:
					return 4312;
				
				case 126:
					return 4320;
				
				case 127:
					return 4328;
				
				case 128:
					return 4336;
				
				case 129:
					return 4344;
				
				case 130:
					return 4352;
				
				case 131:
					return 4360;
				
				case 132:
					return 4368;
				
				case 133:
					return 4376;
				
				case 134:
					return 4384;
				
				case 135:
					return 4392;
				
				case 136:
					return 4400;
				
				case 137:
					return 4408;
				
				case 138:
					return 4416;
				
				case 139:
					return 4424;
				
				case 140:
					return 4432;
				
				case 141:
					return 4440;
				
				case 142:
					return 4448;
				
				case 143:
					return 4456;
				
				case 144:
					return 4464;
				
				case 145:
					return 4472;
				
				case 146:
					return 4480;
				
				case 147:
					return 4488;
				
				case 148:
					return 4496;
				
				case 149:
					return 4504;
				
				case 150:
					return 4512;
				
				case 151:
					return 4520;
				
				case 152:
					return 4528;
				
				case 153:
					return 4536;
				
				case 154:
					return 4544;
				
				case 155:
					return 4552;
				
				case 156:
					return 4560;
				
				case 157:
					return 4568;
				
				case 158:
					return 5461;
				
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
			switch (iParam1)
			{
				case 184:
					return 6155;
				
				case 185:
					return 6162;
				
				case 186:
					return 6169;
				
				case 187:
					return 6176;
				
				case 188:
					return 6183;
				
				case 189:
					return 6190;
				
				case 190:
					return 6197;
				
				case 191:
					return 6204;
				
				case 192:
					return 6211;
				
				case 193:
					return 6218;
				
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
					return 5911;
				
				case 160:
					return 5918;
				
				case 161:
					return 5925;
				
				case 162:
					return 5932;
				
				case 163:
					return 5939;
				
				case 164:
					return 5946;
				
				case 165:
					return 5953;
				
				case 166:
					return 5960;
				
				case 167:
					return 5967;
				
				case 168:
					return 5974;
				
				case 169:
					return 5981;
				
				case 170:
					return 5988;
				
				case 171:
					return 5995;
				
				case 172:
					return 6002;
				
				case 173:
					return 6009;
				
				case 174:
					return 6016;
				
				case 175:
					return 6023;
				
				case 176:
					return 6030;
				
				case 177:
					return 6037;
				
				case 178:
					return 6044;
				
				case 179:
					return 6051;
				
				case 180:
					return 6058;
				
				case 181:
					return 6065;
				
				case 182:
					return 6072;
				
				case 183:
					return 6079;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6156;
				
				case 185:
					return 6163;
				
				case 186:
					return 6170;
				
				case 187:
					return 6177;
				
				case 188:
					return 6184;
				
				case 189:
					return 6191;
				
				case 190:
					return 6198;
				
				case 191:
					return 6205;
				
				case 192:
					return 6212;
				
				case 193:
					return 6219;
				
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
				
				case 49:
					return 2891;
				
				case 50:
					return 2897;
				
				case 51:
					return 2903;
				
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
				
				case 62:
					return 3015;
				
				case 63:
					return 3021;
				
				case 64:
					return 3027;
				
				case 65:
					return 3228;
				
				case 66:
					return 3236;
				
				case 67:
					return 3244;
				
				case 68:
					return 3252;
				
				case 69:
					return 3260;
				
				case 70:
					return 3268;
				
				case 71:
					return 3276;
				
				case 72:
					return 3284;
				
				case 73:
					return 3292;
				
				case 74:
					return 3300;
				
				case 75:
					return 3308;
				
				case 76:
					return 3316;
				
				case 77:
					return 3324;
				
				case 78:
					return 3332;
				
				case joaat("mpsv_lp0_31"):
					return 3340;
				
				case 80:
					return 3348;
				
				case 81:
					return 3356;
				
				case 82:
					return 3364;
				
				case 83:
					return 3372;
				
				case 84:
					return 3380;
				
				case 85:
					return 3388;
				
				case 86:
					return 3395;
				
				case 87:
					return 3402;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4018;
				
				case 89:
					return 4026;
				
				case 90:
					return 4034;
				
				case 91:
					return 4042;
				
				case 92:
					return 4050;
				
				case 93:
					return 4058;
				
				case 94:
					return 4066;
				
				case 95:
					return 4074;
				
				case 96:
					return 4082;
				
				case 97:
					return 4090;
				
				case 98:
					return 4098;
				
				case 99:
					return 4106;
				
				case 100:
					return 4114;
				
				case 101:
					return 4122;
				
				case 102:
					return 4130;
				
				case 103:
					return 4138;
				
				case 104:
					return 4146;
				
				case 105:
					return 4154;
				
				case 106:
					return 4162;
				
				case 107:
					return 4170;
				
				case 108:
					return 4178;
				
				case 109:
					return 4186;
				
				case 110:
					return 4194;
				
				case 111:
					return 4202;
				
				case 112:
					return 4210;
				
				case 113:
					return 4218;
				
				case 114:
					return 4226;
				
				case 115:
					return 4234;
				
				case 116:
					return 4242;
				
				case 117:
					return 4250;
				
				case 118:
					return 4258;
				
				case 119:
					return 4266;
				
				case 120:
					return 4274;
				
				case 121:
					return 4282;
				
				case 122:
					return 4290;
				
				case 123:
					return 4298;
				
				case 124:
					return 4306;
				
				case 125:
					return 4314;
				
				case 126:
					return 4322;
				
				case 127:
					return 4330;
				
				case 128:
					return 4338;
				
				case 129:
					return 4346;
				
				case 130:
					return 4354;
				
				case 131:
					return 4362;
				
				case 132:
					return 4370;
				
				case 133:
					return 4378;
				
				case 134:
					return 4386;
				
				case 135:
					return 4394;
				
				case 136:
					return 4402;
				
				case 137:
					return 4410;
				
				case 138:
					return 4418;
				
				case 139:
					return 4426;
				
				case 140:
					return 4434;
				
				case 141:
					return 4442;
				
				case 142:
					return 4450;
				
				case 143:
					return 4458;
				
				case 144:
					return 4466;
				
				case 145:
					return 4474;
				
				case 146:
					return 4482;
				
				case 147:
					return 4490;
				
				case 148:
					return 4498;
				
				case 149:
					return 4506;
				
				case 150:
					return 4514;
				
				case 151:
					return 4522;
				
				case 152:
					return 4530;
				
				case 153:
					return 4538;
				
				case 154:
					return 4546;
				
				case 155:
					return 4554;
				
				case 156:
					return 4562;
				
				case 157:
					return 4570;
				
				case 158:
					return 5463;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5912;
				
				case 160:
					return 5919;
				
				case 161:
					return 5926;
				
				case 162:
					return 5933;
				
				case 163:
					return 5940;
				
				case 164:
					return 5947;
				
				case 165:
					return 5954;
				
				case 166:
					return 5961;
				
				case 167:
					return 5968;
				
				case 168:
					return 5975;
				
				case 169:
					return 5982;
				
				case 170:
					return 5989;
				
				case 171:
					return 5996;
				
				case 172:
					return 6003;
				
				case 173:
					return 6010;
				
				case 174:
					return 6017;
				
				case 175:
					return 6024;
				
				case 176:
					return 6031;
				
				case 177:
					return 6038;
				
				case 178:
					return 6045;
				
				case 179:
					return 6052;
				
				case 180:
					return 6059;
				
				case 181:
					return 6066;
				
				case 182:
					return 6073;
				
				case 183:
					return 6080;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6157;
				
				case 185:
					return 6164;
				
				case 186:
					return 6171;
				
				case 187:
					return 6178;
				
				case 188:
					return 6185;
				
				case 189:
					return 6192;
				
				case 190:
					return 6199;
				
				case 191:
					return 6206;
				
				case 192:
					return 6213;
				
				case 193:
					return 6220;
				
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
					return 2823;
				
				case 40:
					return 2830;
				
				case 41:
					return 2837;
				
				case 42:
					return 2844;
				
				case 43:
					return 2851;
				
				case 44:
					return 2858;
				
				case 45:
					return 2865;
				
				case 46:
					return 2872;
				
				case 47:
					return 2879;
				
				case 48:
					return 2886;
				
				case 52:
					return 2947;
				
				case 53:
					return 2954;
				
				case 54:
					return 2961;
				
				case 55:
					return 2968;
				
				case 56:
					return 2975;
				
				case 57:
					return 2982;
				
				case 58:
					return 2989;
				
				case 59:
					return 2996;
				
				case 60:
					return 3003;
				
				case 61:
					return 3010;
				
				case 65:
					return 3231;
				
				case 66:
					return 3239;
				
				case 67:
					return 3247;
				
				case 68:
					return 3255;
				
				case 69:
					return 3263;
				
				case 70:
					return 3271;
				
				case 71:
					return 3279;
				
				case 72:
					return 3287;
				
				case 73:
					return 3295;
				
				case 74:
					return 3303;
				
				case 75:
					return 3311;
				
				case 76:
					return 3319;
				
				case 77:
					return 3327;
				
				case 78:
					return 3335;
				
				case joaat("mpsv_lp0_31"):
					return 3343;
				
				case 80:
					return 3351;
				
				case 81:
					return 3359;
				
				case 82:
					return 3367;
				
				case 83:
					return 3375;
				
				case 84:
					return 3383;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4021;
				
				case 89:
					return 4029;
				
				case 90:
					return 4037;
				
				case 91:
					return 4045;
				
				case 92:
					return 4053;
				
				case 93:
					return 4061;
				
				case 94:
					return 4069;
				
				case 95:
					return 4077;
				
				case 96:
					return 4085;
				
				case 97:
					return 4093;
				
				case 98:
					return 4101;
				
				case 99:
					return 4109;
				
				case 100:
					return 4117;
				
				case 101:
					return 4125;
				
				case 102:
					return 4133;
				
				case 103:
					return 4141;
				
				case 104:
					return 4149;
				
				case 105:
					return 4157;
				
				case 106:
					return 4165;
				
				case 107:
					return 4173;
				
				case 108:
					return 4181;
				
				case 109:
					return 4189;
				
				case 110:
					return 4197;
				
				case 111:
					return 4205;
				
				case 112:
					return 4213;
				
				case 113:
					return 4221;
				
				case 114:
					return 4229;
				
				case 115:
					return 4237;
				
				case 116:
					return 4245;
				
				case 117:
					return 4253;
				
				case 118:
					return 4261;
				
				case 119:
					return 4269;
				
				case 120:
					return 4277;
				
				case 121:
					return 4285;
				
				case 122:
					return 4293;
				
				case 123:
					return 4301;
				
				case 124:
					return 4309;
				
				case 125:
					return 4317;
				
				case 126:
					return 4325;
				
				case 127:
					return 4333;
				
				case 128:
					return 4341;
				
				case 129:
					return 4349;
				
				case 130:
					return 4357;
				
				case 131:
					return 4365;
				
				case 132:
					return 4373;
				
				case 133:
					return 4381;
				
				case 134:
					return 4389;
				
				case 135:
					return 4397;
				
				case 136:
					return 4405;
				
				case 137:
					return 4413;
				
				case 138:
					return 4421;
				
				case 139:
					return 4429;
				
				case 140:
					return 4437;
				
				case 141:
					return 4445;
				
				case 142:
					return 4453;
				
				case 143:
					return 4461;
				
				case 144:
					return 4469;
				
				case 145:
					return 4477;
				
				case 146:
					return 4485;
				
				case 147:
					return 4493;
				
				case 148:
					return 4501;
				
				case 149:
					return 4509;
				
				case 150:
					return 4517;
				
				case 151:
					return 4525;
				
				case 152:
					return 4533;
				
				case 153:
					return 4541;
				
				case 154:
					return 4549;
				
				case 155:
					return 4557;
				
				case 156:
					return 4565;
				
				case 157:
					return 4573;
				
				case 158:
					return 5466;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5914;
				
				case 160:
					return 5921;
				
				case 161:
					return 5928;
				
				case 162:
					return 5935;
				
				case 163:
					return 5942;
				
				case 164:
					return 5949;
				
				case 165:
					return 5956;
				
				case 166:
					return 5963;
				
				case 167:
					return 5970;
				
				case 168:
					return 5977;
				
				case 169:
					return 5984;
				
				case 170:
					return 5991;
				
				case 171:
					return 5998;
				
				case 172:
					return 6005;
				
				case 173:
					return 6012;
				
				case 174:
					return 6019;
				
				case 175:
					return 6026;
				
				case 176:
					return 6033;
				
				case 177:
					return 6040;
				
				case 178:
					return 6047;
				
				case 179:
					return 6054;
				
				case 180:
					return 6061;
				
				case 181:
					return 6068;
				
				case 182:
					return 6075;
				
				case 183:
					return 6082;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6159;
				
				case 185:
					return 6166;
				
				case 186:
					return 6173;
				
				case 187:
					return 6180;
				
				case 188:
					return 6187;
				
				case 189:
					return 6194;
				
				case 190:
					return 6201;
				
				case 191:
					return 6208;
				
				case 192:
					return 6215;
				
				case 193:
					return 6222;
				
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
					return 2822;
				
				case 40:
					return 2829;
				
				case 41:
					return 2836;
				
				case 42:
					return 2843;
				
				case 43:
					return 2850;
				
				case 44:
					return 2857;
				
				case 45:
					return 2864;
				
				case 46:
					return 2871;
				
				case 47:
					return 2878;
				
				case 48:
					return 2885;
				
				case 49:
					return 2892;
				
				case 50:
					return 2898;
				
				case 51:
					return 2904;
				
				case 52:
					return 2946;
				
				case 53:
					return 2953;
				
				case 54:
					return 2960;
				
				case 55:
					return 2967;
				
				case 56:
					return 2974;
				
				case 57:
					return 2981;
				
				case 58:
					return 2988;
				
				case 59:
					return 2995;
				
				case 60:
					return 3002;
				
				case 61:
					return 3009;
				
				case 62:
					return 3016;
				
				case 63:
					return 3022;
				
				case 64:
					return 3028;
				
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
					return 3326;
				
				case 78:
					return 3334;
				
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
				
				case 85:
					return 3389;
				
				case 86:
					return 3396;
				
				case 87:
					return 3403;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4019;
				
				case 89:
					return 4027;
				
				case 90:
					return 4035;
				
				case 91:
					return 4043;
				
				case 92:
					return 4051;
				
				case 93:
					return 4059;
				
				case 94:
					return 4067;
				
				case 95:
					return 4075;
				
				case 96:
					return 4083;
				
				case 97:
					return 4091;
				
				case 98:
					return 4099;
				
				case 99:
					return 4107;
				
				case 100:
					return 4116;
				
				case 101:
					return 4124;
				
				case 102:
					return 4131;
				
				case 103:
					return 4139;
				
				case 104:
					return 4147;
				
				case 105:
					return 4155;
				
				case 106:
					return 4163;
				
				case 107:
					return 4171;
				
				case 108:
					return 4179;
				
				case 109:
					return 4187;
				
				case 110:
					return 4195;
				
				case 111:
					return 4203;
				
				case 112:
					return 4211;
				
				case 113:
					return 4219;
				
				case 114:
					return 4227;
				
				case 115:
					return 4235;
				
				case 116:
					return 4243;
				
				case 117:
					return 4251;
				
				case 118:
					return 4259;
				
				case 119:
					return 4267;
				
				case 120:
					return 4276;
				
				case 121:
					return 4284;
				
				case 122:
					return 4291;
				
				case 123:
					return 4299;
				
				case 124:
					return 4307;
				
				case 125:
					return 4315;
				
				case 126:
					return 4323;
				
				case 127:
					return 4331;
				
				case 128:
					return 4339;
				
				case 129:
					return 4347;
				
				case 130:
					return 4355;
				
				case 131:
					return 4363;
				
				case 132:
					return 4371;
				
				case 133:
					return 4379;
				
				case 134:
					return 4387;
				
				case 135:
					return 4395;
				
				case 136:
					return 4403;
				
				case 137:
					return 4411;
				
				case 138:
					return 4419;
				
				case 139:
					return 4427;
				
				case 140:
					return 4436;
				
				case 141:
					return 4444;
				
				case 142:
					return 4451;
				
				case 143:
					return 4459;
				
				case 144:
					return 4467;
				
				case 145:
					return 4475;
				
				case 146:
					return 4483;
				
				case 147:
					return 4491;
				
				case 148:
					return 4499;
				
				case 149:
					return 4507;
				
				case 150:
					return 4515;
				
				case 151:
					return 4523;
				
				case 152:
					return 4531;
				
				case 153:
					return 4539;
				
				case 154:
					return 4547;
				
				case 155:
					return 4555;
				
				case 156:
					return 4563;
				
				case 157:
					return 4571;
				
				case 158:
					return 5464;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5913;
				
				case 160:
					return 5920;
				
				case 161:
					return 5927;
				
				case 162:
					return 5934;
				
				case 163:
					return 5941;
				
				case 164:
					return 5948;
				
				case 165:
					return 5955;
				
				case 166:
					return 5962;
				
				case 167:
					return 5969;
				
				case 168:
					return 5976;
				
				case 169:
					return 5983;
				
				case 170:
					return 5990;
				
				case 171:
					return 5997;
				
				case 172:
					return 6004;
				
				case 173:
					return 6011;
				
				case 174:
					return 6018;
				
				case 175:
					return 6025;
				
				case 176:
					return 6032;
				
				case 177:
					return 6039;
				
				case 178:
					return 6046;
				
				case 179:
					return 6053;
				
				case 180:
					return 6060;
				
				case 181:
					return 6067;
				
				case 182:
					return 6074;
				
				case 183:
					return 6081;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6158;
				
				case 185:
					return 6165;
				
				case 186:
					return 6172;
				
				case 187:
					return 6179;
				
				case 188:
					return 6186;
				
				case 189:
					return 6193;
				
				case 190:
					return 6200;
				
				case 191:
					return 6207;
				
				case 192:
					return 6214;
				
				case 193:
					return 6221;
				
				default:
			}
			break;
			break;
	}
	return 1626;
}

int func_928(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 194)
	{
		iVar0 = 0;
		while (iVar0 < 14)
		{
			if (iParam0 >= func_746(iVar0) && iParam0 < func_929(iVar0))
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_929(int iParam0)
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
		
		case 13:
			return 186;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_749(iParam0);
		return func_930(iVar0);
	}
	return (func_747(iParam0, -1) * iParam0 + 1);
}

int func_930(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		default:
	}
	return -1;
}

int func_931(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_36();
	}
	if (iParam0 == 7 && !Global_262145.f_16127)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_749(iParam0);
		if (iVar1 == 0 && func_481(5376, iParam1, 0) != 0)
		{
			return 1234;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1367880[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2549041[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 14)
		{
			return 0;
		}
		return Global_2548958[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

int func_932(int iParam0)
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

int func_933(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 != -1)
	{
		iVar0 = -1;
		iVar1 = iParam0 + 157;
		func_745(iVar1, &iVar0, 1);
		if (iVar0 >= 0)
		{
			iVar2 = func_481(func_927(4, iVar0), -1, 0);
			if (iVar2 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_934(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailersmall2"):
			return 0;
			break;
	}
	return -1;
}

bool func_935()
{
	return func_481(6146, -1, 0) != 0;
}

bool func_936()
{
	return func_481(5363, -1, 0) != 0;
}

bool func_937()
{
	return func_481(3811, -1, 0) != 0;
}

bool func_938()
{
	return func_481(3212, -1, 0) != 0;
}

bool func_939()
{
	return func_481(5362, -1, 0) != 0;
}

int func_940()
{
	int iVar0;
	
	iVar0 = func_593();
	if (iVar0 != func_57())
	{
		return Global_1627460[iVar0 /*530*/].f_11.f_93;
	}
	return 0;
}

int func_941(int iParam0)
{
	if (func_223(iParam0, 0))
	{
		return Global_1627460[iParam0 /*530*/].f_11.f_176;
	}
	return -1;
}

int func_942(int iParam0)
{
	if (func_222(iParam0) == 225 || func_222(iParam0) == 226)
	{
		return func_941(iParam0);
	}
	return -1;
}

var func_943()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_698(unk_0x8CFC7D6E1DA5D304(), iVar0))
		{
			unk_0xD2A9C3F486236CC5(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_944()
{
	if (!func_194())
	{
		return;
	}
	if (!unk_0x6E987D62C8535B6E(unk_0xFCA64981FEF7C913()) == Global_1312576.f_9)
	{
		return;
	}
	func_811();
}

void func_945()
{
	if (func_34(unk_0x8CFC7D6E1DA5D304(), 0))
	{
		return;
	}
	switch (Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_9)
	{
		case 0:
			func_999();
			func_417();
			if (Local_112.f_214 == 2)
			{
				Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_9 = 2;
			}
			else if (Local_112.f_214 == 3)
			{
				Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_9 = 3;
			}
			break;
		
		case 2:
			func_946();
			func_417();
			if (Local_112.f_214 == 3)
			{
				Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_9 = 3;
			}
			break;
		
		case 3:
			func_1074();
			break;
	}
}

void func_946()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	iVar0 = unk_0xA651DA0BC9FD8FA4();
	iVar1 = Local_112.f_197 + 1;
	if (func_34(unk_0x8CFC7D6E1DA5D304(), 0))
	{
		iVar0 = func_405();
	}
	if (!func_406())
	{
		if (!unk_0xB03A1684359C50A1(Local_382[iVar0 /*11*/].f_1, 14))
		{
			unk_0xD2A9C3F486236CC5(&(Local_382[iVar0 /*11*/].f_1), 14);
		}
		return;
	}
	if (!func_997())
	{
		if (!unk_0xB03A1684359C50A1(Local_382[iVar0 /*11*/].f_1, 14))
		{
			unk_0xD2A9C3F486236CC5(&(Local_382[iVar0 /*11*/].f_1), 14);
		}
		return;
	}
	if (unk_0x5AD42783360AB57E(Local_112.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_112.f_2[0 /*10*/].f_2))
		{
			if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2), 0))
			{
				return;
			}
		}
	}
	if (!unk_0xB03A1684359C50A1(Local_382[iVar0 /*11*/].f_1, 14))
	{
		if (!func_961(iVar1, unk_0xA651DA0BC9FD8FA4()))
		{
			if (!unk_0xB03A1684359C50A1(iLocal_735, 13))
			{
				if (func_959(unk_0x8CFC7D6E1DA5D304(), iVar1))
				{
					unk_0xD2A9C3F486236CC5(&iLocal_735, 13);
				}
			}
			else
			{
				bVar4 = true;
				iVar2 = 0;
				while (iVar2 < unk_0xF02902C16AF3CA92())
				{
					if (unk_0x0CA6AB9C192005B8(unk_0xF4E7C3C6384793AA(iVar2)))
					{
						iVar3 = unk_0x8A0B92A0286253B3(unk_0xF4E7C3C6384793AA(iVar2));
						if (func_959(iVar3, iVar1))
						{
							if (!func_954(iVar3, iVar1))
							{
								bVar4 = false;
							}
						}
					}
					iVar2++;
				}
				if (bVar4)
				{
					func_947();
				}
			}
		}
		else
		{
			unk_0xD2A9C3F486236CC5(&(Local_382[iVar0 /*11*/].f_1), 14);
		}
	}
}

void func_947()
{
	func_948();
}

void func_948()
{
	int iVar0;
	
	if (func_953(unk_0x8CFC7D6E1DA5D304()))
	{
		iVar0 = func_952(unk_0x8CFC7D6E1DA5D304());
		if (!func_951(3, iVar0))
		{
			func_949(3, iVar0);
		}
	}
}

void func_949(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	func_950(iParam1, &iVar0, &iVar1);
	switch (iParam0)
	{
		case 0:
			unk_0xD2A9C3F486236CC5(&(Global_1808664.f_1374[iVar0]), iVar1);
			return;
			break;
		
		case 1:
			unk_0xD2A9C3F486236CC5(&(Global_1808664.f_1379[iVar0]), iVar1);
			return;
			break;
		
		case 2:
			unk_0xD2A9C3F486236CC5(&(Global_1808664.f_1384[iVar0]), iVar1);
			return;
			break;
		
		case 3:
			unk_0xD2A9C3F486236CC5(&(Global_1808664.f_1799[iVar0]), iVar1);
			return;
			break;
		
		case 4:
			unk_0xD2A9C3F486236CC5(&(Global_1808664.f_1804[iVar0]), iVar1);
			return;
			break;
		
		case 5:
			unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2020[iVar0]), iVar1);
			return;
			break;
		
		case 6:
			unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2025[iVar0]), iVar1);
			return;
			break;
		
		case 7:
			unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2030[iVar0]), iVar1);
			return;
			break;
		
		case 8:
			unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2047[iVar0]), iVar1);
			return;
			break;
		
		case 9:
			unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2052[iVar0]), iVar1);
			return;
			break;
		
		case 10:
			unk_0xD2A9C3F486236CC5(&(Global_1808664.f_1809[iVar0]), iVar1);
			return;
			break;
		
		case 11:
			unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2035[iVar0]), iVar1);
			return;
			break;
		
		case 12:
			unk_0xD2A9C3F486236CC5(&(Global_1808664.f_2040[iVar0]), iVar1);
			return;
			break;
		
		case 13:
			unk_0xD2A9C3F486236CC5(&(Global_1808664.f_1817[iVar0]), iVar1);
			return;
			break;
	}
}

void func_950(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	*uParam2 = (iParam0 - *uParam1 * 32);
}

int func_951(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	func_950(iParam1, &iVar0, &iVar1);
	switch (iParam0)
	{
		case 0:
			return unk_0xB03A1684359C50A1(Global_1808664.f_1374[iVar0], iVar1);
			break;
		
		case 1:
			return unk_0xB03A1684359C50A1(Global_1808664.f_1379[iVar0], iVar1);
			break;
		
		case 2:
			return unk_0xB03A1684359C50A1(Global_1808664.f_1384[iVar0], iVar1);
			break;
		
		case 3:
			return unk_0xB03A1684359C50A1(Global_1808664.f_1799[iVar0], iVar1);
			break;
		
		case 4:
			return unk_0xB03A1684359C50A1(Global_1808664.f_1804[iVar0], iVar1);
			break;
		
		case 5:
			return unk_0xB03A1684359C50A1(Global_1808664.f_2020[iVar0], iVar1);
			break;
		
		case 6:
			return unk_0xB03A1684359C50A1(Global_1808664.f_2025[iVar0], iVar1);
			break;
		
		case 7:
			return unk_0xB03A1684359C50A1(Global_1808664.f_2030[iVar0], iVar1);
			break;
		
		case 8:
			return unk_0xB03A1684359C50A1(Global_1808664.f_2047[iVar0], iVar1);
			break;
		
		case 9:
			return unk_0xB03A1684359C50A1(Global_1808664.f_2052[iVar0], iVar1);
			break;
		
		case 10:
			return unk_0xB03A1684359C50A1(Global_1808664.f_1809[iVar0], iVar1);
			break;
		
		case 11:
			return unk_0xB03A1684359C50A1(Global_1808664.f_2035[iVar0], iVar1);
			break;
		
		case 12:
			return unk_0xB03A1684359C50A1(Global_1808664.f_2040[iVar0], iVar1);
			break;
		
		case 13:
			return unk_0xB03A1684359C50A1(Global_1808664.f_1817[iVar0], iVar1);
			break;
	}
	return 0;
}

int func_952(int iParam0)
{
	if (iParam0 != func_57())
	{
		return Global_2422724[iParam0 /*420*/].f_324.f_11;
	}
	return -1;
}

int func_953(int iParam0)
{
	bool bVar0;
	
	if (iParam0 != func_57() && (func_1162(iParam0, 1, 1) || Global_2405047.f_2639))
	{
		bVar0 = unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_324, 1);
		return bVar0;
	}
	return 0;
}

bool func_954(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_957(iParam1);
	return func_955(iParam0, iVar0);
}

int func_955(int iParam0, int iParam1)
{
	if (iParam0 != func_57() && func_1162(iParam0, 1, 1))
	{
		if (func_953(iParam0))
		{
			if (func_952(iParam0) == iParam1)
			{
				if (func_956(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_956(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_324, 2);
}

int func_957(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 102)
	{
		if (func_958(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_958(int iParam0)
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

bool func_959(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_957(iParam1);
	return func_960(iParam0, iVar0);
}

int func_960(int iParam0, int iParam1)
{
	if (iParam0 != func_57() && func_1162(iParam0, 1, 1))
	{
		if (func_953(iParam0))
		{
			if (func_952(iParam0) == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_961(int iParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	
	iVar0 = func_957(iParam0);
	if (func_951(4, iVar0))
	{
		return 1;
	}
	else if (!func_996(iVar0))
	{
		if (func_995(iParam0, iParam1, &Var1, &uVar4))
		{
			func_962(iVar0, 1, 1, Var1, uVar4, 0, 0, 0);
		}
		else
		{
			func_962(iVar0, 1, 0, Var1, 0, 0, 0, 0);
		}
	}
	return 0;
}

int func_962(int iParam0, bool bParam1, bool bParam2, struct<3> Param3, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	bParam7 = true;
	if (func_953(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (!bParam7)
	{
		if (!(func_994(iParam0) || func_968(iParam0, 0, 1)))
		{
			func_966(iParam0);
			return 0;
		}
	}
	else
	{
		func_949(2, iParam0);
	}
	if (func_951(0, iParam0))
	{
		return 0;
	}
	func_949(0, iParam0);
	func_965(4, iParam0);
	func_964(iParam0);
	if (bParam2)
	{
		func_949(1, iParam0);
		Global_1808664.f_1389[iParam0 /*3*/] = { Param3 };
		Global_1808664.f_1696[iParam0] = iParam6;
	}
	else
	{
		func_965(1, iParam0);
		Global_1808664.f_1389[iParam0 /*3*/] = { 0f, 0f, 0f };
		Global_1808664.f_1696[iParam0] = 0f;
	}
	if (bParam1)
	{
		func_965(3, iParam0);
	}
	else
	{
		func_949(3, iParam0);
	}
	func_965(10, iParam0);
	if (bParam8)
	{
		func_949(10, iParam0);
	}
	func_965(13, iParam0);
	if (bParam9)
	{
		func_949(13, iParam0);
	}
	func_963(1, iParam0);
	return 1;
}

void func_963(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!unk_0xB03A1684359C50A1(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324, 1))
		{
			unk_0xD2A9C3F486236CC5(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324), 1);
			unk_0x62148293B793073B(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324), 2);
			Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_11 = iParam1;
			func_572(&(Global_1808664.f_1823), 0, 0);
		}
	}
	else
	{
		unk_0x62148293B793073B(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324), 1);
		func_949(4, iParam1);
		Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_11 = -1;
		func_9(&(Global_1808664.f_1823));
	}
}

void func_964(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0B495402BD092DEB(unk_0x18F7BE9ACB7D08F4());
	if (iVar0 != 0)
	{
		if (!unk_0x74C2FE037DFC8B4A(iVar0, 0) && !unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x4983F8C51A0C0AF3(iVar0, -1, 0) == unk_0x18F7BE9ACB7D08F4())
			{
				Global_1808664.f_1892 = iParam0;
				Global_1808664.f_1893 = iVar0;
				func_572(&(Global_1808664.f_1894), 0, 0);
				Global_1808664.f_1896 = 0;
			}
		}
	}
}

void func_965(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	func_950(iParam1, &iVar0, &iVar1);
	switch (iParam0)
	{
		case 0:
			unk_0x62148293B793073B(&(Global_1808664.f_1374[iVar0]), iVar1);
			return;
			break;
		
		case 1:
			unk_0x62148293B793073B(&(Global_1808664.f_1379[iVar0]), iVar1);
			return;
			break;
		
		case 2:
			unk_0x62148293B793073B(&(Global_1808664.f_1384[iVar0]), iVar1);
			return;
			break;
		
		case 3:
			unk_0x62148293B793073B(&(Global_1808664.f_1799[iVar0]), iVar1);
			return;
			break;
		
		case 4:
			unk_0x62148293B793073B(&(Global_1808664.f_1804[iVar0]), iVar1);
			return;
			break;
		
		case 5:
			unk_0x62148293B793073B(&(Global_1808664.f_2020[iVar0]), iVar1);
			return;
			break;
		
		case 6:
			unk_0x62148293B793073B(&(Global_1808664.f_2025[iVar0]), iVar1);
			return;
			break;
		
		case 7:
			unk_0x62148293B793073B(&(Global_1808664.f_2030[iVar0]), iVar1);
			return;
			break;
		
		case 8:
			unk_0x62148293B793073B(&(Global_1808664.f_2047[iVar0]), iVar1);
			return;
			break;
		
		case 9:
			unk_0x62148293B793073B(&(Global_1808664.f_2052[iVar0]), iVar1);
			return;
			break;
		
		case 10:
			unk_0x62148293B793073B(&(Global_1808664.f_1809[iVar0]), iVar1);
			return;
			break;
		
		case 11:
			unk_0x62148293B793073B(&(Global_1808664.f_2035[iVar0]), iVar1);
			return;
			break;
		
		case 12:
			unk_0x62148293B793073B(&(Global_1808664.f_2040[iVar0]), iVar1);
			return;
			break;
		
		case 13:
			unk_0x62148293B793073B(&(Global_1808664.f_1817[iVar0]), iVar1);
			return;
			break;
	}
}

void func_966(int iParam0)
{
	if (!func_967(iParam0))
	{
		return;
	}
	func_965(0, iParam0);
	func_965(1, iParam0);
	func_965(2, iParam0);
	func_965(3, iParam0);
	func_965(4, iParam0);
	func_965(10, iParam0);
	Global_1808664.f_1389[iParam0 /*3*/] = { 0f, 0f, 0f };
	Global_1808664.f_1696[iParam0] = 0f;
	if (Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_11 == iParam0)
	{
		Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324.f_11 = -1;
		unk_0x62148293B793073B(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324), 2);
		unk_0x62148293B793073B(&(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324), 1);
	}
	if (unk_0xB03A1684359C50A1(Global_1808664.f_2, 22))
	{
		unk_0x62148293B793073B(&(Global_1808664.f_2), 22);
	}
}

int func_967(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 102)
	{
		return 1;
	}
	return 0;
}

int func_968(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if ((func_1162(unk_0x8CFC7D6E1DA5D304(), 1, 1) || Global_2405047.f_2639) && (!func_993() || func_986()))
	{
		if (func_984(iParam0))
		{
			return 0;
		}
		if (Global_1808664.f_2079 == iParam0)
		{
			return 0;
		}
		if (func_435(iParam0) == 5)
		{
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				if (func_983())
				{
					if (unk_0xB03A1684359C50A1(Global_2422724[unk_0x8CFC7D6E1DA5D304() /*420*/].f_324, 5))
					{
						return 1;
					}
				}
			}
			if (func_516(unk_0x8CFC7D6E1DA5D304()))
			{
				if (func_986())
				{
					return 1;
				}
			}
		}
		if (func_435(iParam0) == 4)
		{
			if (func_982(unk_0x8CFC7D6E1DA5D304()) || (func_981() && unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0)))
			{
				if (func_986())
				{
					if (func_978(Global_1595526) == iParam0)
					{
						return 1;
					}
				}
			}
		}
		if (func_435(iParam0) == 8)
		{
			if (func_512(unk_0x8CFC7D6E1DA5D304()))
			{
				if (func_986())
				{
					return 1;
				}
			}
			if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
			{
				if (func_983())
				{
					iVar0 = unk_0x4983F8C51A0C0AF3(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), -1, 0);
					if (unk_0x31F12808DC47A9E5(iVar0))
					{
						if (func_1162(unk_0xD3287DCBDBC58316(iVar0), 1, 1))
						{
							if (unk_0xB03A1684359C50A1(Global_2422724[unk_0xD3287DCBDBC58316(iVar0) /*420*/].f_324, 5) && func_977(unk_0xD3287DCBDBC58316(iVar0)))
							{
								return 1;
							}
						}
					}
				}
			}
		}
		if (func_435(iParam0) == 9)
		{
			if (func_529(unk_0x8CFC7D6E1DA5D304()) || (func_976() && unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0)))
			{
				if (func_986())
				{
					if (func_974(func_975(Global_1595530)) == iParam0)
					{
						return 1;
					}
				}
			}
		}
		if (iParam2 && func_970(iParam0))
		{
			return 1;
		}
		else if (iParam1 && func_969(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_969(int iParam0)
{
	if (func_996(iParam0))
	{
		return func_951(2, iParam0);
	}
	return 0;
}

int func_970(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 210;
	if (func_971(iParam0))
	{
		iVar0 = 150;
	}
	Var1 = { Global_1808664.f_349[iParam0 /*3*/] };
	if (!func_39(Var1))
	{
		return unk_0x15EE504466B7BBD3(func_52(unk_0x8CFC7D6E1DA5D304()), Var1, 1) <= IntToFloat(iVar0);
	}
	return 0;
}

int func_971(int iParam0)
{
	if (func_1162(unk_0x8CFC7D6E1DA5D304(), 1, 1))
	{
		if (iParam0 == 81)
		{
			if (func_973(unk_0x8CFC7D6E1DA5D304()))
			{
				if (!func_972(unk_0x8CFC7D6E1DA5D304()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_972(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1162(iParam0, 1, 1))
		{
			return Global_2422724[iParam0 /*420*/].f_324.f_1 != -1;
		}
		else if ((Global_1312854 && iParam0 == unk_0x8CFC7D6E1DA5D304()) && func_1162(iParam0, 1, 0))
		{
			return Global_2422724[iParam0 /*420*/].f_324.f_1 != -1;
		}
	}
	return 0;
}

int func_973(int iParam0)
{
	if (iParam0 != func_57())
	{
		return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_324, 6);
	}
	return 0;
}

int func_974(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 102)
	{
		if (func_435(iVar0) == 9)
		{
			if (func_155(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_975(int iParam0)
{
	if (iParam0 == func_57())
	{
		return 0;
	}
	return Global_1595681[iParam0 /*678*/].f_266.f_248;
}

bool func_976()
{
	return unk_0xB03A1684359C50A1(Global_1808664.f_2915, 10);
}

int func_977(int iParam0)
{
	if (iParam0 != func_57())
	{
		return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_324.f_10, 7);
	}
	return 0;
}

int func_978(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return -1;
	}
	iVar0 = func_581(iParam0);
	if (!iVar0 == 0)
	{
		return func_979(iVar0);
	}
	return -1;
}

int func_979(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 102)
	{
		if (func_980(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_980(int iParam0)
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

bool func_981()
{
	return unk_0xB03A1684359C50A1(Global_1808664, 17);
}

int func_982(int iParam0)
{
	if (iParam0 != func_57())
	{
		if (func_1162(iParam0, 1, 1))
		{
			if (Global_2422724[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422724[iParam0 /*420*/].f_324.f_4 != func_57())
			{
				return func_435(Global_2422724[iParam0 /*420*/].f_324.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_983()
{
	if (func_1162(unk_0x8CFC7D6E1DA5D304(), 1, 1))
	{
		if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			if (unk_0x4983F8C51A0C0AF3(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), -1, 0) != unk_0x18F7BE9ACB7D08F4())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_984(int iParam0)
{
	if (unk_0x13C2BC1B63ABBCD5() && !func_985(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_985(int iParam0)
{
	if (Global_1808664.f_2097)
	{
		if ((func_435(iParam0) == 6 || func_435(iParam0) == 10) || func_435(iParam0) == 9)
		{
			return 1;
		}
	}
	return 0;
}

int func_986()
{
	if (func_1162(unk_0x8CFC7D6E1DA5D304(), 1, 1))
	{
		if (func_516(unk_0x8CFC7D6E1DA5D304()))
		{
			if (Global_1595527 != func_57())
			{
				if (func_765(Global_1595527))
				{
					if ((func_973(Global_1595527) && !func_992()) && !func_991())
					{
						return 1;
					}
				}
			}
		}
		else if (func_982(unk_0x8CFC7D6E1DA5D304()) || (func_981() && unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0)))
		{
			if (Global_1595526 != func_57())
			{
				if (func_765(Global_1595526))
				{
					if ((func_973(Global_1595526) && !func_991()) && !func_992())
					{
						return 1;
					}
				}
			}
		}
		else if (func_512(unk_0x8CFC7D6E1DA5D304()))
		{
			if (Global_1595531 != func_57())
			{
				if (func_990(Global_1595531))
				{
					if ((func_989(Global_1595531) && !func_988()) && !func_987())
					{
						return 1;
					}
				}
			}
		}
		else if (func_529(unk_0x8CFC7D6E1DA5D304()) || (func_976() && unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0)))
		{
			if (Global_1595530 != func_57())
			{
				if (func_990(Global_1595530))
				{
					if ((func_989(Global_1595530) && !func_987()) && !func_988())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_987()
{
	return unk_0xB03A1684359C50A1(Global_1808664.f_2915, 3);
}

bool func_988()
{
	return unk_0xB03A1684359C50A1(Global_1808664.f_2915, 4);
}

int func_989(int iParam0)
{
	if (iParam0 != func_57())
	{
		return unk_0xB03A1684359C50A1(Global_2422724[iParam0 /*420*/].f_324.f_10, 6);
	}
	return 0;
}

int func_990(int iParam0)
{
	if (iParam0 != func_57())
	{
		return unk_0xB03A1684359C50A1(Global_1595681[iParam0 /*678*/].f_266.f_247, 1);
	}
	return 0;
}

bool func_991()
{
	return unk_0xB03A1684359C50A1(Global_1808664, 30);
}

bool func_992()
{
	return unk_0xB03A1684359C50A1(Global_1808664, 31);
}

bool func_993()
{
	int iVar0;
	
	iVar0 = unk_0xE7FAF8E78F7D3A73(joaat("am_mp_smpl_interior_int"));
	return (iVar0 > 0 || unk_0x1D96871229AA29DD("AM_MP_SMPL_INTERIOR_INT", Global_1808664.f_1905, 1, 0));
}

int func_994(int iParam0)
{
	if ((unk_0x2D8DC49EB365D6CC(unk_0x8CFC7D6E1DA5D304(), "AM_MP_SMPL_INTERIOR_EXT", iParam0) || unk_0x1D96871229AA29DD("AM_MP_SMPL_INTERIOR_EXT", iParam0, 1, 0)) || func_951(12, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_995(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (func_497(iParam0))
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

bool func_996(int iParam0)
{
	return func_951(0, iParam0);
}

int func_997()
{
	if (unk_0xB03A1684359C50A1(iLocal_735, 13))
	{
		return 1;
	}
	if (unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		return 0;
	}
	if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), func_998(Local_112.f_197 + 1), 1) > 100f)
	{
		return 0;
	}
	return 1;
}

Vector3 func_998(int iParam0)
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

void func_999()
{
	func_1027();
	func_820();
	func_1026();
	func_1023();
	func_805();
	func_1020();
	func_1004();
	func_1001();
	func_796();
	func_1000();
}

void func_1000()
{
}

void func_1001()
{
	struct<3> Var0;
	float fVar3;
	
	if (func_406())
	{
		return;
	}
	if (func_28())
	{
		return;
	}
	Var0 = { func_998(Local_112.f_197 + 1) };
	fVar3 = unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), Var0);
	if (fVar3 < 62500f)
	{
		if (!unk_0xB03A1684359C50A1(iLocal_735, 14))
		{
			func_207(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
			func_1002();
			unk_0xD2A9C3F486236CC5(&iLocal_735, 14);
		}
	}
	else if (fVar3 > 250000f)
	{
		func_446();
	}
}

void func_1002()
{
	int iVar0;
	
	if (func_406())
	{
		return;
	}
	iVar0 = Local_112.f_197 + 1;
	switch (iVar0)
	{
		case 1:
			func_1003(93.9801f, -2532.177f, 5.0778f, 124.1404f, 1065353216);
			func_1003(96.7817f, -2536.936f, 5f, 121.982f, 1065353216);
			func_1003(106.1278f, -2539.717f, 5.0003f, 111.4201f, 1065353216);
			func_1003(7.7245f, -2598.042f, 5.0075f, 283.2584f, 1065353216);
			func_1003(13.7512f, -2602.234f, 5.0069f, 290.8908f, 1065353216);
			func_1003(113.3588f, -2586.112f, 5.0121f, 88.5573f, 1065353216);
			func_1003(111.6119f, -2592.456f, 5.0229f, 78.4188f, 1065353216);
			func_1003(8.5363f, -2518.204f, 5.0163f, 213.3867f, 1065353216);
			break;
		
		case 2:
			func_1003(-1150.759f, -1273.248f, 5.7478f, 282.4241f, 1065353216);
			func_1003(-1019.696f, -1323.524f, 4.9009f, 45.7692f, 1065353216);
			func_1003(-1012.756f, -1319.543f, 4.9001f, 43.138f, 1065353216);
			func_1003(-1005.033f, -1315.236f, 4.941f, 58.4519f, 1065353216);
			func_1003(-1014.173f, -1307.516f, 5.2364f, 52.7034f, 1065353216);
			func_1003(-1022.801f, -1245.642f, 5.014f, 106.8874f, 1065353216);
			func_1003(-1112.947f, -1296.568f, 4.258f, 298.12f, 1065353216);
			func_1003(-1118.264f, -1218.13f, 1.5169f, 188.9163f, 1065353216);
			break;
		
		case 3:
			func_1003(856.3708f, -1013.008f, 28.4203f, 271.5768f, 1065353216);
			func_1003(863.5153f, -993.5998f, 29.2774f, 239.646f, 1065353216);
			func_1003(933.4873f, -990.8866f, 37.0241f, 127.1206f, 1065353216);
			func_1003(932.2711f, -1007.077f, 36.7075f, 90.5105f, 1065353216);
			func_1003(867.5297f, -1076.188f, 27.7798f, 268.1065f, 1065353216);
			func_1003(868.5233f, -1092.591f, 27.7269f, 302.3375f, 1065353216);
			func_1003(927.5185f, -1092.741f, 33.1574f, 50.444f, 1065353216);
			func_1003(936.7908f, -1078.382f, 34.7149f, 77.3112f, 1065353216);
			break;
		
		case 4:
			func_1003(243.2832f, -1999.028f, 18.8177f, 341.0091f, 1065353216);
			func_1003(273.1573f, -2010.138f, 18.6668f, 29.2809f, 1065353216);
			func_1003(171.7093f, -1951.986f, 18.7677f, 286.1576f, 1065353216);
			func_1003(186.7918f, -1911.818f, 21.7781f, 235.4626f, 1065353216);
			func_1003(201.1726f, -1898.231f, 23.2412f, 220.1641f, 1065353216);
			func_1003(223.3617f, -1889.273f, 24.4098f, 178.0541f, 1065353216);
			func_1003(260.1144f, -1909.984f, 24.8323f, 142.8378f, 1065353216);
			func_1003(289.037f, -1933.327f, 24.3999f, 148.1186f, 1065353216);
			break;
		
		case 5:
			func_1003(-444.3442f, 229.0294f, 82.0416f, 232.9779f, 1065353216);
			func_1003(-446.8376f, 224.1595f, 82.0175f, 236.8468f, 1065353216);
			func_1003(-398.6772f, 227.0964f, 82.593f, 160.9651f, 1065353216);
			func_1003(-412.1818f, 224.1092f, 82.5148f, 207.9725f, 1065353216);
			func_1003(-368.4009f, 193.0408f, 82.6566f, 97.3058f, 1065353216);
			func_1003(-471.0459f, 153.4937f, 77.0803f, 301.4885f, 1065353216);
			func_1003(-492.4609f, 191.0608f, 69.9316f, 260.3055f, 1065353216);
			func_1003(-492.152f, 185.6411f, 69.9316f, 267.4302f, 1065353216);
			break;
		
		case 6:
			func_1003(-1119.86f, -2022.411f, 12.2297f, 292.6461f, 1065353216);
			func_1003(-1102.049f, -1983.884f, 12.1406f, 223.9062f, 1065353216);
			func_1003(-1084.243f, -1968.423f, 12.1514f, 204.0761f, 1065353216);
			func_1003(-1033.419f, -2068.45f, 12.4615f, 33.9101f, 1065353216);
			func_1003(-1037.025f, -2088.586f, 12.6459f, 21.4939f, 1065353216);
			func_1003(-1056.915f, -2088.188f, 12.2919f, 8.2791f, 1065353216);
			func_1003(-1020.213f, -2077.749f, 12.7601f, 40.6275f, 1065353216);
			func_1003(-1032.6f, -2101.71f, 12.6309f, 20.9321f, 1065353216);
			break;
		
		case 7:
			func_1003(-1323.561f, -801.4799f, 16.5991f, 309.0983f, 1065353216);
			func_1003(-1334.537f, -788.2323f, 18.9061f, 263.1596f, 1065353216);
			func_1003(-1333.08f, -758.4105f, 19.367f, 226.0109f, 1065353216);
			func_1003(-1326.314f, -754.1177f, 19.367f, 215.8053f, 1065353216);
			func_1003(-1252.46f, -880.908f, 11.1188f, 6.1107f, 1065353216);
			func_1003(-1234.162f, -868.6242f, 11.821f, 83.8965f, 1065353216);
			func_1003(-1234.714f, -903.713f, 11.0757f, 22.5172f, 1065353216);
			func_1003(-1274.141f, -860.0457f, 11.2177f, 313.1372f, 1065353216);
			break;
		
		case 8:
			func_1003(-954.9498f, -2765.854f, 12.9446f, 300.864f, 1065353216);
			func_1003(-967.7481f, -2758.093f, 12.8166f, 282.6459f, 1065353216);
			func_1003(-974.1952f, -2721.633f, 12.7566f, 258.5829f, 1065353216);
			func_1003(-956.0557f, -2704.292f, 12.831f, 242.288f, 1065353216);
			func_1003(-900.7191f, -2652.238f, 12.7618f, 177.695f, 1065353216);
			func_1003(-870.0709f, -2643.078f, 12.9495f, 171.6949f, 1065353216);
			func_1003(-837.4813f, -2697.67f, 12.8121f, 98.2582f, 1065353216);
			func_1003(-830.3173f, -2716.68f, 12.9445f, 57.01767f, 1065353216);
			break;
		
		case 9:
			func_1003(246.686f, -2954.608f, 4.8465f, 201.0552f, 1065353216);
			func_1003(237.4989f, -2960.046f, 4.8401f, 219.4444f, 1065353216);
			func_1003(278.0732f, -2933.848f, 4.6858f, 173.7103f, 1065353216);
			func_1003(305.2663f, -2953.124f, 4.9916f, 152.1779f, 1065353216);
			func_1003(306.9686f, -3051.72f, 4.8569f, 73.9139f, 1065353216);
			func_1003(290.1032f, -3067.022f, 4.9168f, 22.2414f, 1065353216);
			func_1003(248.4644f, -3081.733f, 4.8082f, 5.7888f, 1065353216);
			func_1003(213.5583f, -3006.335f, 4.8585f, 281.9704f, 1065353216);
			break;
		
		case 10:
			func_1003(1533.422f, -2207.716f, 76.5674f, 341.3423f, 1065353216);
			func_1003(1518.683f, -2197.165f, 76.0905f, 323.85f, 1065353216);
			func_1003(1505.83f, -2149.169f, 76.2134f, 287.7332f, 1065353216);
			func_1003(1517.668f, -2071.069f, 76.2881f, 218.4776f, 1065353216);
			func_1003(1513.971f, -2047.472f, 76.3438f, 229.7462f, 1065353216);
			func_1003(1562.546f, -2050.737f, 76.4175f, 158.5163f, 1065353216);
			func_1003(1571.823f, -2065.519f, 76.0999f, 139.3434f, 1065353216);
			func_1003(1559.668f, -2212.969f, 77.2272f, 30.3786f, 1065353216);
			break;
		
		case 11:
			func_1003(-244.4574f, -2679.464f, 5.0003f, 115.7166f, 1065353216);
			func_1003(-247.8431f, -2669.538f, 5.0003f, 137.3239f, 1065353216);
			func_1003(-273.936f, -2646.584f, 5.1595f, 138.4986f, 1065353216);
			func_1003(-283.7866f, -2643.465f, 5.1536f, 145.8487f, 1065353216);
			func_1003(-338.5266f, -2716.292f, 5.0016f, 353.4592f, 1065353216);
			func_1003(-340.0283f, -2721.088f, 5.0015f, 349.123f, 1065353216);
			func_1003(-284.5308f, -2623.301f, 5.0382f, 150.473f, 1065353216);
			func_1003(-257.3565f, -2632.506f, 5.0221f, 131.679f, 1065353216);
			break;
		
		case 12:
			func_1003(515.9905f, -720.5799f, 23.8387f, 5.6255f, 1065353216);
			func_1003(497.1281f, -728.9662f, 23.8776f, 343.3149f, 1065353216);
			func_1003(447.638f, -685.7243f, 27.4277f, 285.8884f, 1065353216);
			func_1003(449.3201f, -668.7817f, 27.3296f, 271.4846f, 1065353216);
			func_1003(498.4707f, -568.4258f, 23.747f, 193.0118f, 1065353216);
			func_1003(514.7365f, -562.4415f, 23.7507f, 158.6247f, 1065353216);
			func_1003(527.8929f, -562.6914f, 23.7997f, 164.4089f, 1065353216);
			func_1003(544.1755f, -594.525f, 23.7432f, 152.6498f, 1065353216);
			break;
		
		case 13:
			func_1003(-518.2458f, -1828.47f, 21.5839f, 6.9263f, 1065353216);
			func_1003(-493.7525f, -1823.626f, 21.8486f, 29.4302f, 1065353216);
			func_1003(-450.3873f, -1794.818f, 20.7743f, 85.0772f, 1065353216);
			func_1003(-597.9962f, -1729.797f, 22.139f, 232.3263f, 1065353216);
			func_1003(-581.0703f, -1718.014f, 21.9858f, 214.5117f, 1065353216);
			func_1003(-449.3808f, -1766.115f, 19.5349f, 112.1522f, 1065353216);
			func_1003(-541.6173f, -1821.735f, 21.9225f, 317.0811f, 1065353216);
			func_1003(-618.6395f, -1711.974f, 23.0683f, 235.603f, 1065353216);
			break;
		
		case 14:
			func_1003(-291.3686f, -1274.791f, 29.4583f, 184.0252f, 1065353216);
			func_1003(-260.6114f, -1286.958f, 30.0291f, 148.6145f, 1065353216);
			func_1003(-245.4854f, -1358.204f, 30.606f, 97.9413f, 1065353216);
			func_1003(-258.2249f, -1408.08f, 30.2904f, 46.1851f, 1065353216);
			func_1003(-293.8492f, -1408.819f, 30.2952f, 0.4148f, 1065353216);
			func_1003(-335.4179f, -1371.286f, 30.2957f, 304.5049f, 1065353216);
			func_1003(-337.6552f, -1333.524f, 30.3008f, 289.5995f, 1065353216);
			func_1003(-339.4502f, -1311.185f, 30.2086f, 224.0032f, 1065353216);
			break;
		
		case 15:
			func_1003(296.9105f, 339.6927f, 104.52f, 250.3169f, 1065353216);
			func_1003(286.231f, 324.1514f, 104.6652f, 267.2802f, 1065353216);
			func_1003(314.8456f, 295.4021f, 104.543f, 341.0804f, 1065353216);
			func_1003(356.8475f, 275.1253f, 102.1478f, 349.9545f, 1065353216);
			func_1003(403.6933f, 290.7596f, 101.9871f, 47.5594f, 1065353216);
			func_1003(416.5997f, 309.7407f, 101.987f, 69.7807f, 1065353216);
			func_1003(388.4496f, 357.7741f, 101.479f, 81.7557f, 1065353216);
			func_1003(323.6804f, 367.7533f, 104.3807f, 251.082f, 1065353216);
			break;
		
		case 16:
			func_1003(983.1635f, -1507.116f, 30.4318f, 115.3138f, 1065353216);
			func_1003(976.6813f, -1462.792f, 30.4421f, 170.1272f, 1065353216);
			func_1003(965.1019f, -1457.18f, 30.1302f, 187.7104f, 1065353216);
			func_1003(954.3276f, -1500.289f, 29.9441f, 234.0993f, 1065353216);
			func_1003(967.4816f, -1632.333f, 29.1107f, 353.4453f, 1065353216);
			func_1003(890.0863f, -1572.723f, 29.84f, 281.6886f, 1065353216);
			func_1003(905.2548f, -1543.512f, 29.5311f, 219.2688f, 1065353216);
			func_1003(922.9328f, -1544.217f, 29.8062f, 181.6137f, 1065353216);
			break;
		
		case 17:
			func_1003(754.465f, -835.6287f, 24.8675f, 202.5404f, 1065353216);
			func_1003(760.689f, -821.2197f, 25.2721f, 185.6987f, 1065353216);
			func_1003(799.4153f, -825.4905f, 25.19f, 155.4635f, 1065353216);
			func_1003(833.3179f, -912.5907f, 24.5379f, 96.2594f, 1065353216);
			func_1003(836.246f, -921.1563f, 25.0122f, 86.3203f, 1065353216);
			func_1003(798.7469f, -975.9729f, 25.1518f, 41.5425f, 1065353216);
			func_1003(753.8427f, -972.2688f, 23.9505f, 340.2511f, 1065353216);
			func_1003(737.0633f, -940.94f, 23.8394f, 264.3263f, 1065353216);
			break;
		
		case 18:
			func_1003(1021.727f, -2096.922f, 29.9949f, 131.5094f, 1065353216);
			func_1003(1004.22f, -2097.619f, 30.1617f, 218.0245f, 1065353216);
			func_1003(1048.305f, -2162.876f, 31.0285f, 17.1583f, 1065353216);
			func_1003(1053.165f, -2138.979f, 31.6269f, 138.5871f, 1065353216);
			func_1003(992.7523f, -2239.598f, 29.5519f, 335.4291f, 1065353216);
			func_1003(975.8146f, -2201.123f, 29.5516f, 290.5504f, 1065353216);
			func_1003(1035.371f, -2203.133f, 30.8934f, 77.8725f, 1065353216);
			func_1003(1040.114f, -2203.875f, 30.8934f, 62.6027f, 1065353216);
			break;
		
		case 19:
			func_1003(957.4448f, -2452.676f, 27.553f, 231.7168f, 1065353216);
			func_1003(957.0999f, -2474.014f, 27.4957f, 267.1929f, 1065353216);
			func_1003(945.7234f, -2497.031f, 27.453f, 256.6793f, 1065353216);
			func_1003(946.9409f, -2478.706f, 27.3433f, 233.4717f, 1065353216);
			func_1003(932.4327f, -2534.006f, 27.3027f, 231.8695f, 1065353216);
			func_1003(900.2678f, -2552.213f, 27.4211f, 283.9405f, 1065353216);
			func_1003(1028.407f, -2477.004f, 27.5034f, 91.0284f, 1065353216);
			func_1003(1021.066f, -2459.521f, 27.5462f, 131.3309f, 1065353216);
			break;
		
		case 20:
			func_1003(-237.7643f, 248.6469f, 91.0445f, 196.7769f, 1065353216);
			func_1003(-202.8588f, 245.9139f, 91.0419f, 127.8667f, 1065353216);
			func_1003(-199.1134f, 179.474f, 76.6409f, 79.199f, 1065353216);
			func_1003(-217.1594f, 141.0364f, 68.6993f, 21.5726f, 1065353216);
			func_1003(-240.5069f, 139.3272f, 68.6369f, 352.6409f, 1065353216);
			func_1003(-280.1349f, 153.3907f, 74.2578f, 344.9672f, 1065353216);
			func_1003(-177.5456f, 215.1789f, 87.8734f, 101.2481f, 1065353216);
			func_1003(-174.6252f, 206.0641f, 87.426f, 84.7397f, 1065353216);
			break;
		
		case 21:
			func_1003(578.9037f, -1883.818f, 24.4357f, 190.9878f, 1065353216);
			func_1003(601.1657f, -1872.286f, 23.7783f, 136.6622f, 1065353216);
			func_1003(573.7683f, -1869.375f, 24.1791f, 138.5911f, 1065353216);
			func_1003(531.532f, -1858.341f, 24.332f, 211.7805f, 1065353216);
			func_1003(542.208f, -1844.02f, 24.332f, 187.9743f, 1065353216);
			func_1003(502.1498f, -1917.516f, 24.3684f, 289.8235f, 1065353216);
			func_1003(512.4601f, -1985.896f, 23.9851f, 299.9174f, 1065353216);
			func_1003(479.1975f, -1908.422f, 24.2436f, 282.8994f, 1065353216);
			break;
		
		case 22:
			func_1003(172.8245f, -2183.052f, 5.0294f, 116.2516f, 1065353216);
			func_1003(173.7597f, -2198.917f, 5.171f, 72.2949f, 1065353216);
			func_1003(173.7982f, -2224.849f, 5.171f, 126.6793f, 1065353216);
			func_1003(181.6316f, -2238.538f, 5.0035f, 61.6889f, 1065353216);
			func_1003(147.6168f, -2252.883f, 5.0856f, 63.8371f, 1065353216);
			func_1003(147.2348f, -2244.339f, 5.0856f, 70.1362f, 1065353216);
			func_1003(178.0549f, -2206.273f, 5.0238f, 38.9746f, 1065353216);
			func_1003(176.9219f, -2223.301f, 5.0329f, 133.7211f, 1065353216);
			break;
	}
}

void func_1003(struct<3> Param0, float fParam3, int iParam4)
{
	if (!Global_2405047.f_1719)
	{
	}
	if (Global_2405047.f_686 < 100)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2405047.f_686.f_1[Global_2405047.f_686 /*5*/] = { Param0 };
		Global_2405047.f_686.f_1[Global_2405047.f_686 /*5*/].f_3 = fParam3;
		Global_2405047.f_686.f_1[Global_2405047.f_686 /*5*/].f_4 = iParam4;
		Global_2405047.f_686++;
	}
}

void func_1004()
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	
	if (!func_406())
	{
		return;
	}
	if (!unk_0xB03A1684359C50A1(iLocal_735, 19))
	{
		if (unk_0x5AD42783360AB57E(Local_112.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_112.f_2[0 /*10*/].f_2))
			{
				unk_0x4566F0A29EB3185B(unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2), 0, 0);
				unk_0xD2A9C3F486236CC5(&iLocal_735, 19);
			}
		}
	}
	if (!unk_0xB03A1684359C50A1(Local_112.f_1, 8))
	{
		if (!unk_0xB03A1684359C50A1(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1, 9))
		{
			if (unk_0x5AD42783360AB57E(Local_112.f_2[0 /*10*/].f_2))
			{
				if (!func_13(Local_112.f_2[0 /*10*/].f_2))
				{
					unk_0xD2A9C3F486236CC5(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1), 9);
				}
			}
		}
	}
	if (!unk_0xB03A1684359C50A1(Local_112.f_1, 6))
	{
		if (!unk_0xB03A1684359C50A1(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1, 7))
		{
			if (unk_0x5AD42783360AB57E(Local_112.f_2[0 /*10*/].f_2))
			{
				Var1 = { unk_0x761660F5CE986DC4(unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2), 0) };
				if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), Var1) < 90000f)
				{
					unk_0xD2A9C3F486236CC5(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1), 7);
				}
			}
		}
	}
	if (iLocal_738 == -2)
	{
		if (unk_0x5AD42783360AB57E(Local_112.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_112.f_2[0 /*10*/].f_2))
			{
				if (!unk_0xB03A1684359C50A1(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1, 8))
				{
					if (func_1019(unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2)))
					{
						unk_0xD2A9C3F486236CC5(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1), 8);
					}
				}
				else if (!func_1019(unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2)))
				{
					unk_0x62148293B793073B(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1), 8);
				}
			}
		}
	}
	if (!unk_0xB03A1684359C50A1(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1, 2) && !unk_0xB03A1684359C50A1(Local_112.f_1, 4))
	{
		if (unk_0x5AD42783360AB57E(Local_112.f_2[0 /*10*/].f_2))
		{
			iVar0 = unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2);
			if (unk_0xC4B84EB67F78C1F0(iVar0, 0))
			{
				if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
				{
					if (unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
					{
						if (unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0) == iVar0)
						{
							if (unk_0x4983F8C51A0C0AF3(iVar0, -1, 0) == unk_0x18F7BE9ACB7D08F4())
							{
								if (!unk_0xB03A1684359C50A1(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1, 3))
								{
									unk_0xD2A9C3F486236CC5(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1), 3);
								}
							}
							else if (unk_0xB03A1684359C50A1(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1, 3))
							{
								unk_0x62148293B793073B(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1), 3);
							}
						}
						else if (unk_0xB03A1684359C50A1(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1, 3))
						{
							unk_0x62148293B793073B(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1), 3);
						}
					}
					else if (unk_0xB03A1684359C50A1(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1, 3))
					{
						unk_0x62148293B793073B(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1), 3);
					}
				}
				else if (unk_0xB03A1684359C50A1(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1, 3))
				{
					unk_0x62148293B793073B(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1), 3);
				}
			}
		}
	}
	iVar4 = func_57();
	iVar5 = func_57();
	if (iLocal_738 != Local_112.f_215)
	{
		if (!func_28())
		{
			if (!func_818())
			{
				if (unk_0xE769D9B5158D0F11(uLocal_848))
				{
					unk_0x40D517D991458154(&uLocal_848);
				}
				if (Local_112.f_215 == unk_0xA651DA0BC9FD8FA4())
				{
					func_1018(1);
				}
				else if (Local_112.f_215 > -1)
				{
					iVar4 = func_1017();
					if (iVar4 != func_57())
					{
						if (func_591(1))
						{
							iVar5 = func_593();
							if (iVar5 != func_57())
							{
								if (func_325(iVar4, iVar5, 1))
								{
									func_441(iVar4, 478, 1);
									func_439(iVar4, func_444(iLocal_849), 1);
									func_1018(1);
								}
							}
						}
						func_1015("DCONTRA_TCKV", iVar4, 0, 0, 0, 1, 1, 0);
					}
				}
				else if (Local_112.f_215 == -1)
				{
					if (unk_0xE769D9B5158D0F11(uLocal_846))
					{
						unk_0x40D517D991458154(&uLocal_846);
					}
					iVar4 = func_1014();
					if (iVar4 != func_57())
					{
						func_441(iVar4, 478, 0);
						func_439(iVar4, func_444(iLocal_849), 0);
					}
					func_1013(3, 1);
				}
				iLocal_738 = Local_112.f_215;
			}
			else
			{
				func_1013(1, 0);
			}
		}
	}
	func_1012();
	func_1010(0);
	func_1005();
}

void func_1005()
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	iVar0 = func_1017();
	Var1 = { func_40() };
	if (unk_0xE769D9B5158D0F11(uLocal_846))
	{
		unk_0x954894782056D6CB(12, &uVar4, &uVar5, &uVar6, &uVar7);
		unk_0x90FEECC6315A95B3(1, Var1, 0f, 0f, 0f, 0f, 0f, 0f, 0.6f, 0.6f, 1f, uVar4, uVar5, uVar6, 100, 0, 0, 2, 0, 0, 0, 0);
	}
	if (unk_0x5AD42783360AB57E(Local_112.f_2[0 /*10*/].f_2))
	{
		if (unk_0xA744F72A307A4982(Local_112.f_2[0 /*10*/].f_2))
		{
			if (!unk_0xB03A1684359C50A1(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1, 2))
			{
				if (iVar0 == unk_0x8CFC7D6E1DA5D304())
				{
					if (!unk_0x0FAE113CE72ED842(unk_0x6604E096142B4B55(iVar0)))
					{
						if (unk_0x8673F2F1802ADEF7(unk_0x6604E096142B4B55(iVar0), Var1, 6f, 6f, 2f, 0, 1, 0))
						{
							func_1006(unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2), &uLocal_1018, 0, 1);
							if (unk_0x1800B99666D25740(unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2)))
							{
								unk_0xAE2E2838C25011ED(unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2), 1);
							}
							unk_0xD2A9C3F486236CC5(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1), 2);
						}
					}
				}
			}
		}
	}
}

int func_1006(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (!func_1008(iParam0, 1, 1, 0, 0, 0, 1, 0))
	{
		if (unk_0x18DD02B781D4AD2F(unk_0xB34837A3BB15AB69(unk_0xE92FCF3C05C2EF1D(), *uParam1)) > 1000)
		{
			iVar0 = 0;
			while (iVar0 < 32)
			{
				iVar1 = unk_0x3479F6F64A48251C(iVar0);
				if (func_1162(iVar1, 0, 1))
				{
					if (unk_0x88B79D32B518C327(unk_0x6604E096142B4B55(iVar1), iParam0, 0))
					{
						func_1007(func_640(iVar1), 0, 0f, 0, 0, 0, -1);
					}
				}
				iVar0++;
			}
			*uParam1 = unk_0xE92FCF3C05C2EF1D();
		}
	}
	else if (!unk_0x1800B99666D25740(iParam0))
	{
		unk_0x89B8CFBBA51399C9(iParam0);
	}
	else
	{
		if (bParam3)
		{
			unk_0xAE2E2838C25011ED(iParam0, 1);
		}
		unk_0x73D7E57BF0ED7FEB(iParam0, 0);
		if (bParam2)
		{
			unk_0xF74B493CCF90C997(iParam0, 1);
		}
		return 1;
	}
	return 0;
}

void func_1007(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0.f_0 = -1346957599;
	Var0.f_1 = unk_0x8CFC7D6E1DA5D304();
	Var0.f_7 = iParam6;
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	Var0.f_8 = unk_0x756DE011CEDBBD7E();
	if (!iParam0 == 0)
	{
		unk_0xDC8B8CF2FBDF3387(1, &Var0, 9, iParam0);
	}
}

int func_1008(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xE4752B503DF3FEC0(iParam0) + 1;
	if (iParam4 || !unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_1009(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0x31F12808DC47A9E5(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x18F7BE9ACB7D08F4())
				{
				}
				else if (bParam2)
				{
					if (!unk_0x0FAE113CE72ED842(iVar2))
					{
						if (unk_0xEE1E09882FA264CA(iVar2))
						{
							if (unk_0xFF3D7D0CFD33DE47(unk_0xD3287DCBDBC58316(iVar2)) == 0)
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
				else if (!unk_0x0FAE113CE72ED842(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_1009(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0x74B8CA477787A438(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x4983F8C51A0C0AF3(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0x31F12808DC47A9E5(iVar0) && !unk_0x74C2FE037DFC8B4A(iParam0, 0))
		{
			iVar0 = unk_0x75FAFA6C74F1ACCD(iParam0, iParam1);
			if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
			{
				if (unk_0x2BBAA45ECDE3DAE2(iVar0, 451360105) == 1 || unk_0x2BBAA45ECDE3DAE2(iVar0, -828834893) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0x761660F5CE986DC4(iParam0, 0), unk_0x761660F5CE986DC4(iVar0, 0)) < 10f)
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

void func_1010(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_2())
	{
		return;
	}
	if (unk_0x5AD42783360AB57E(Local_112.f_2[iParam0 /*10*/].f_2))
	{
		if (func_13(Local_112.f_2[iParam0 /*10*/].f_2))
		{
			if (unk_0xE769D9B5158D0F11(uLocal_848))
			{
				if (Local_112.f_216 > -1)
				{
					unk_0x954894782056D6CB(9, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				else if (iLocal_738 == -2)
				{
					unk_0x954894782056D6CB(6, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				else
				{
					unk_0x954894782056D6CB(9, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				func_1011(unk_0xFA62333764BA8F5D(Local_112.f_2[iParam0 /*10*/].f_2), uVar0, uVar1, uVar2, 0);
			}
		}
	}
}

void func_1011(int iParam0, var uParam1, var uParam2, var uParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	fVar6 = 0.5f;
	unk_0x0D8E51F437C55570(unk_0x4F69FBD64CDF125B(uParam0), &Var0, &Var3);
	fVar7 = ((Var3.f_2 - Var0.f_2) / 2f);
	fVar8 = (Var3.f_2 - fVar7);
	if (fVar6 <= (fVar8 + 0.1f))
	{
		fVar6 = (fVar8 + 0.4f);
	}
	fVar6 = (fVar6 + fParam4);
	unk_0x90FEECC6315A95B3(2, unk_0x761660F5CE986DC4(iParam0, 1) + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uParam1, uParam2, uParam3, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_1012()
{
	if (iLocal_738 == -2)
	{
		if (unk_0xE769D9B5158D0F11(uLocal_848))
		{
			if (iLocal_739 != Local_112.f_222)
			{
				iLocal_739 = Local_112.f_222;
				unk_0x1DB03C7D3DC49006(uLocal_848, iLocal_739);
			}
		}
	}
	else if (iLocal_739 != 255)
	{
		iLocal_739 = 255;
	}
}

void func_1013(int iParam0, bool bParam1)
{
	if (!unk_0xE769D9B5158D0F11(uLocal_848))
	{
		if (unk_0x5AD42783360AB57E(Local_112.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_112.f_2[0 /*10*/].f_2))
			{
				uLocal_848 = unk_0xA8EDC17CEEA40DFA(unk_0xFA62333764BA8F5D(Local_112.f_2[0 /*10*/].f_2));
				unk_0xF60CEE5003674AF0(uLocal_848, 12);
				unk_0xDC0EBFC7730AA226(uLocal_848, 478);
				unk_0x71925FF3194E84CE(uLocal_848, iParam0);
				if (bParam1)
				{
					unk_0x63EECA6600F1090E(uLocal_848, 1);
				}
			}
		}
	}
}

int func_1014()
{
	int iVar0;
	
	iVar0 = func_57();
	if (iLocal_738 < 0)
	{
		return iVar0;
	}
	if (unk_0x4AF13BCD120BCDBC(unk_0x3479F6F64A48251C(iLocal_738)))
	{
		iVar0 = unk_0x3479F6F64A48251C(iLocal_738);
	}
	return iVar0;
}

int func_1015(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar18;
	int iVar19;
	
	iVar0 = -1;
	iVar1 = unk_0x1BE7B010C9B9841E(iParam1);
	if (unk_0xE392CC8A2777F819(unk_0x8CFC7D6E1DA5D304(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0x3E8AA4B2B7764D27(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0x3E8AA4B2B7764D27(iParam1), 64);
		}
		if (unk_0xFAFFA408239A026B(&Var2))
		{
		}
		unk_0x55E6536147AC42E6(sParam0);
		if ((iVar1 != -1 && unk_0x13C2BC1B63ABBCD5()) && iVar1 < 4)
		{
			if (Global_1646129.f_112025[iVar1] != -1)
			{
				unk_0x70A9E4720D71C2D5(func_558(iVar1, iParam1, 0));
			}
			else
			{
				unk_0x70A9E4720D71C2D5(func_546(iParam1, -2, 1, 0));
			}
		}
		else
		{
			unk_0x70A9E4720D71C2D5(func_546(iParam1, -2, 1, 0));
		}
		unk_0xB4179F7E88F4C4BF(func_648(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0xAA1D000B9BA8AF23(0, 1);
		}
		else
		{
			Global_2491936 = { func_59(iParam1) };
			if (unk_0x4AEF279CFD4A57C6(&Global_2491866, 35, &Global_2491936))
			{
				iVar18 = 0;
				if (unk_0x9D39145AD645E383(&(Global_2491866.f_22), "Leader") && Global_2491866.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2491866.f_21 > 0)
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
						Var2 = { func_1016(&Var2) };
					}
					iVar0 = unk_0x014CE29AD141E6E1(iVar19, unk_0x0574C6B9D1D311D7(&Global_2491866, 35), &(Global_2491866.f_17), Global_2491866.f_30, iVar18, 0, Global_2491866, &Var2, Global_1314011, Global_1314012, Global_1314013);
				}
				else
				{
					iVar0 = unk_0xDED68D641B079E77(iVar19, unk_0x0574C6B9D1D311D7(&Global_2491866, 35), &(Global_2491866.f_17), Global_2491866.f_30, iVar18, 0, Global_2491866, Global_1314011, Global_1314012, Global_1314013);
				}
			}
			else
			{
				iVar0 = unk_0xAA1D000B9BA8AF23(0, 1);
			}
		}
		func_644(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_1016(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

int func_1017()
{
	int iVar0;
	
	iVar0 = func_57();
	if (Local_112.f_216 > -1)
	{
		if (unk_0x4AF13BCD120BCDBC(unk_0x3479F6F64A48251C(Local_112.f_216)))
		{
			iVar0 = unk_0x3479F6F64A48251C(Local_112.f_216);
		}
	}
	return iVar0;
}

void func_1018(bool bParam0)
{
	struct<3> Var0;
	
	if (!unk_0xE769D9B5158D0F11(uLocal_846))
	{
		Var0 = { func_40() };
		uLocal_846 = unk_0x29F0B4D7EFF08BF6(Var0);
		if (bParam0)
		{
			unk_0x63EECA6600F1090E(uLocal_846, 1);
		}
	}
}

int func_1019(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		return 0;
	}
	Var0 = { unk_0x761660F5CE986DC4(uParam0, 0) };
	if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), Var0, 0) < 50f)
	{
		return 1;
	}
	if (unk_0x3AAE8FF7FB37F69E(iParam0))
	{
		if (unk_0x6157232E032EBC56(Var0, 1f))
		{
			if (unk_0xAAB9BF2904B9E7CE(unk_0x18F7BE9ACB7D08F4(), iParam0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1020()
{
	int iVar0;
	
	if (!func_503())
	{
		if (func_419("DCONTRA_HLP1"))
		{
			unk_0xEFF1F12403847394(1);
		}
		if (func_419("DCONTRA_HLP2"))
		{
			unk_0xEFF1F12403847394(1);
		}
		if (func_419("DCONTRA_HLPCR"))
		{
			unk_0xEFF1F12403847394(1);
		}
		if (func_419("DCONTRA_HLPVCR"))
		{
			unk_0xEFF1F12403847394(1);
		}
		return;
	}
	iVar0 = func_395(unk_0x8CFC7D6E1DA5D304());
	if (iVar0 < 2)
	{
		if (func_419("DCONTRA_HLP1"))
		{
			unk_0xEFF1F12403847394(1);
		}
		if (func_419("DCONTRA_HLP2"))
		{
			unk_0xEFF1F12403847394(1);
		}
		if (func_419("DCONTRA_HLPVCR"))
		{
			unk_0xEFF1F12403847394(1);
		}
		if (func_419("DCONTRA_HLPCR"))
		{
			unk_0xEFF1F12403847394(1);
		}
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!unk_0xB03A1684359C50A1(iLocal_735, 1))
	{
		return;
	}
	if (!unk_0xB03A1684359C50A1(iLocal_735, 2))
	{
		if (!func_1022(86))
		{
			if (func_914(0, 1, 1, 1))
			{
				if (unk_0xA651DA0BC9FD8FA4() == Local_112.f_218)
				{
					if (func_406())
					{
						func_427("DCONTRA_HLP3", -1);
					}
					else
					{
						func_427("DCONTRA_HLP1", -1);
					}
					func_426(1);
					unk_0xD2A9C3F486236CC5(&iLocal_735, 2);
				}
				else if (func_1061() == Local_112.f_218)
				{
					if (func_406())
					{
						func_427("DCONTRA_HLP4", -1);
					}
					else
					{
						func_427("DCONTRA_HLP2", -1);
					}
					func_426(1);
					unk_0xD2A9C3F486236CC5(&iLocal_735, 2);
				}
			}
		}
	}
	else if (!unk_0xB03A1684359C50A1(iLocal_735, 8))
	{
		if (!func_406())
		{
			if (func_914(0, 1, 1, 1))
			{
				if (func_582())
				{
					func_427("DCONTRA_HLPVCR", -1);
				}
				else
				{
					func_427("DCONTRA_HLPCR", -1);
				}
				func_426(1);
				unk_0xD2A9C3F486236CC5(&iLocal_735, 8);
			}
		}
	}
	if (func_406())
	{
		if (unk_0xB03A1684359C50A1(iLocal_735, 2))
		{
			if (!unk_0xB03A1684359C50A1(iLocal_735, 4))
			{
				if (func_914(0, 1, 1, 1))
				{
					func_1021("DCONTRA_HLPLS", "DCONTRA_VBLP", -1);
					func_426(1);
					unk_0xD2A9C3F486236CC5(&iLocal_735, 4);
					unk_0xD2A9C3F486236CC5(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1), 10);
				}
			}
		}
	}
}

void func_1021(char* sParam0, char* sParam1, int iParam2)
{
	unk_0x2202872EA73499C3(sParam0);
	unk_0xBEFD1ED9B6BE5127(sParam1);
	unk_0xF764171B43EBA5E4(0, 0, 0, iParam2);
}

bool func_1022(int iParam0)
{
	return Global_2436169.f_2591[0 /*79*/].f_1 == iParam0;
}

void func_1023()
{
	struct<3> Var0;
	
	if (!unk_0xB03A1684359C50A1(iLocal_735, 12))
	{
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			Var0 = { func_1024(func_957(Local_112.f_197 + 1)) };
			if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), Var0, 1) <= 200f)
			{
				uLocal_743 = unk_0x2D524E0AFDB169D5();
				unk_0xFF4225D4B94E1277(uLocal_743, "Bell_02", Var0, "ALARMS_SOUNDSET", 0, 0, 0);
				unk_0xD2A9C3F486236CC5(&iLocal_735, 12);
			}
		}
	}
}

Vector3 func_1024(int iParam0)
{
	struct<3> Var0;
	
	func_1025(iParam0, &Var0);
	return Var0;
}

void func_1025(int iParam0, var uParam1)
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

void func_1026()
{
	struct<3> Var0;
	
	if (func_406())
	{
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!unk_0xB03A1684359C50A1(iLocal_735, 1))
	{
		return;
	}
	if (!unk_0xB03A1684359C50A1(Local_112.f_1, 13))
	{
		if (!unk_0xB03A1684359C50A1(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1, 11))
		{
			Var0 = { func_40() };
			if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 0), Var0) < 22500f)
			{
				unk_0xD2A9C3F486236CC5(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1), 11);
			}
		}
		if (func_503())
		{
			if (!unk_0xE769D9B5158D0F11(uLocal_847))
			{
				uLocal_847 = unk_0x29F0B4D7EFF08BF6(func_40());
				unk_0x63EECA6600F1090E(uLocal_847, 1);
			}
		}
		else if (unk_0xE769D9B5158D0F11(uLocal_847))
		{
			unk_0x40D517D991458154(&uLocal_847);
		}
	}
	else if (unk_0xE769D9B5158D0F11(uLocal_847))
	{
		unk_0x40D517D991458154(&uLocal_847);
	}
}

void func_1027()
{
	if (!unk_0xB03A1684359C50A1(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1, 1))
	{
		if (!func_1060())
		{
			if (unk_0xB03A1684359C50A1(Local_112.f_1, 6))
			{
				func_229(1);
				unk_0xD2A9C3F486236CC5(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_1), 1);
			}
		}
	}
}

void func_1028()
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
		if (func_406())
		{
			if (!unk_0xB03A1684359C50A1(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_2, iVar3))
			{
				if (!unk_0xB03A1684359C50A1(Local_112.f_206, iVar3))
				{
					if (unk_0x5AD42783360AB57E(Local_112.f_2[iVar3 /*10*/].f_1))
					{
						if (!func_24(Local_112.f_2[iVar3 /*10*/].f_1))
						{
							if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
							{
								if (func_1061() == Local_112.f_218)
								{
									if (func_1035(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iVar3 /*10*/].f_1)))
									{
										unk_0xD2A9C3F486236CC5(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_2), iVar3);
									}
								}
							}
						}
					}
				}
			}
			if (!unk_0xB03A1684359C50A1(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_3, iVar3))
			{
				if (!unk_0xB03A1684359C50A1(Local_112.f_208, iVar3))
				{
					if (unk_0x5AD42783360AB57E(Local_112.f_2[iVar3 /*10*/].f_2))
					{
						if (func_1034(iVar3))
						{
							unk_0xD2A9C3F486236CC5(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_3), iVar3);
						}
					}
				}
			}
			if (!unk_0xB03A1684359C50A1(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_4, iVar3))
			{
				if (!unk_0xB03A1684359C50A1(Local_112.f_207, iVar3))
				{
					if (unk_0x5AD42783360AB57E(Local_112.f_2[iVar3 /*10*/].f_1))
					{
						if (!func_24(Local_112.f_2[iVar3 /*10*/].f_1))
						{
							if (unk_0x70832328F090DD95(unk_0x761660F5CE986DC4(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iVar3 /*10*/].f_1), 1), 10f, 1))
							{
								unk_0xD2A9C3F486236CC5(&(Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/].f_4), iVar3);
							}
						}
					}
				}
			}
		}
		if (func_503())
		{
			if (!func_406())
			{
				if (unk_0xB03A1684359C50A1(Local_112.f_1, 13))
				{
					func_1030(Local_112.f_2[iVar3 /*10*/].f_1, &(Local_754[iVar3 /*8*/]), -1082130432, 0, 1, 0, 0, -1, -1, 1);
				}
			}
			else if (unk_0x5AD42783360AB57E(Local_112.f_2[iVar3 /*10*/].f_1))
			{
				if (!func_24(Local_112.f_2[iVar3 /*10*/].f_1))
				{
					if (!unk_0x657B649BA2AD3582(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iVar3 /*10*/].f_1), 0))
					{
						func_1030(Local_112.f_2[iVar3 /*10*/].f_1, &(Local_754[iVar3 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
					}
				}
				else
				{
					func_1030(Local_112.f_2[iVar3 /*10*/].f_1, &(Local_754[iVar3 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
				}
			}
		}
		switch (Local_112.f_2[iVar3 /*10*/].f_9)
		{
			case 1:
				if (unk_0xF67B871D7588B9D9())
				{
					if (unk_0x5AD42783360AB57E(Local_112.f_2[iVar3 /*10*/].f_2))
					{
						if (func_13(Local_112.f_2[iVar3 /*10*/].f_2))
						{
							if (!func_24(Local_112.f_2[iVar3 /*10*/].f_1))
							{
								if (unk_0x160400EAEE246B4D(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iVar3 /*10*/].f_1), unk_0xFA62333764BA8F5D(Local_112.f_2[iVar3 /*10*/].f_2)))
								{
									uVar5 = unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iVar3 /*10*/].f_1);
									if (func_27(&uVar5))
									{
										if (unk_0x2BBAA45ECDE3DAE2(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iVar3 /*10*/].f_1), -258271821) != 1 && unk_0x2BBAA45ECDE3DAE2(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iVar3 /*10*/].f_1), -258271821) != 0)
										{
											unk_0x21D24CE144A81296(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iVar3 /*10*/].f_1), unk_0xFA62333764BA8F5D(Local_112.f_2[iVar3 /*10*/].f_2), 25f, 786603);
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (unk_0xF67B871D7588B9D9())
				{
					if (unk_0x5AD42783360AB57E(Local_112.f_2[iVar3 /*10*/].f_2))
					{
						if (unk_0x5AD42783360AB57E(Local_112.f_2[iVar3 /*10*/].f_1))
						{
							if (func_13(Local_112.f_2[iVar3 /*10*/].f_2))
							{
								if (!func_24(Local_112.f_2[iVar3 /*10*/].f_1))
								{
									if (unk_0x160400EAEE246B4D(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iVar3 /*10*/].f_1), unk_0xFA62333764BA8F5D(Local_112.f_2[iVar3 /*10*/].f_2)))
									{
										if ((unk_0x2BBAA45ECDE3DAE2(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iVar3 /*10*/].f_1), -258271821) != 1 && unk_0x2BBAA45ECDE3DAE2(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iVar3 /*10*/].f_1), -258271821) != 0) || unk_0xB03A1684359C50A1(Local_112.f_204, iVar3))
										{
											unk_0x21D24CE144A81296(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iVar3 /*10*/].f_1), unk_0xFA62333764BA8F5D(Local_112.f_2[iVar3 /*10*/].f_2), 30f, 786469);
											if (unk_0xB03A1684359C50A1(Local_112.f_204, iVar3))
											{
												unk_0x62148293B793073B(&(Local_112.f_204), iVar3);
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
				if (unk_0x5AD42783360AB57E(Local_112.f_2[iVar3 /*10*/].f_1))
				{
					if (!func_24(Local_112.f_2[iVar3 /*10*/].f_1))
					{
						iVar4 = unk_0x2BBAA45ECDE3DAE2(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iVar3 /*10*/].f_1), -828834893);
						if (iVar4 != 1 && iVar4 != 0)
						{
							if (func_252(Local_112.f_2[iVar3 /*10*/].f_1))
							{
								unk_0x40E2910BAF39B1C7(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iVar3 /*10*/].f_1), 1);
								unk_0x5941F8B2A813BBA8(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iVar3 /*10*/].f_1), 0, 0);
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
				if (unk_0x5AD42783360AB57E(Local_112.f_2[iVar3 /*10*/].f_1))
				{
					if (!func_24(Local_112.f_2[iVar3 /*10*/].f_1))
					{
						iVar4 = unk_0x2BBAA45ECDE3DAE2(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iVar3 /*10*/].f_1), -1442466670);
						if (iVar4 != 1 && iVar4 != 0)
						{
							if (func_252(Local_112.f_2[iVar3 /*10*/].f_1))
							{
								if (unk_0xA744F72A307A4982(Local_112.f_2[iVar3 /*10*/].f_1))
								{
									unk_0x40E2910BAF39B1C7(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iVar3 /*10*/].f_1), 0);
									unk_0xA34053449E1A61FE(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iVar3 /*10*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (unk_0x5AD42783360AB57E(Local_112.f_2[iVar3 /*10*/].f_1))
				{
					if (!func_24(Local_112.f_2[iVar3 /*10*/].f_1))
					{
						iVar4 = unk_0x2BBAA45ECDE3DAE2(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iVar3 /*10*/].f_1), 1120685857);
						if (iVar4 != 1 && iVar4 != 0)
						{
							unk_0x40E2910BAF39B1C7(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iVar3 /*10*/].f_1), 0);
							Var0 = { func_185() };
							unk_0xD3887D1D857A42D6(unk_0x5FC7C92D1FA1DAEC(Local_112.f_2[iVar3 /*10*/].f_1), Var0, 250f, 0);
						}
					}
				}
				break;
		}
		iVar3++;
	}
	func_1029();
}

void func_1029()
{
	if (unk_0x5AD42783360AB57E(Local_112.f_2[iLocal_1020 /*10*/].f_1))
	{
		if (!func_24(Local_112.f_2[iLocal_1020 /*10*/].f_1))
		{
			if (!unk_0xB03A1684359C50A1(uLocal_1019, iLocal_1020))
			{
				unk_0x8BA7A73C563CC73E(Local_112.f_2[iLocal_1020 /*10*/].f_1, 1);
				unk_0xD2A9C3F486236CC5(&iLocal_1019, iLocal_1020);
			}
		}
	}
	iLocal_1020++;
	if (iLocal_1020 == 10)
	{
		iLocal_1020 = 0;
	}
}

void func_1030(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0x49E68AAD93AADF10(uParam0))
	{
		if (func_1033())
		{
			Global_2436169 = unk_0x8CFC7D6E1DA5D304();
		}
		if (bParam3)
		{
			func_1032(unk_0x5FC7C92D1FA1DAEC(uParam0), uParam1, 1, Global_2436169, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_1032(unk_0x5FC7C92D1FA1DAEC(uParam0), uParam1, -1, Global_2436169, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0xE769D9B5158D0F11(*uParam1))
	{
		func_1031(uParam1);
	}
}

void func_1031(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xE769D9B5158D0F11(*uParam0))
	{
		unk_0x40D517D991458154(uParam0);
		bVar0 = true;
	}
	if (unk_0xE769D9B5158D0F11(uParam0->f_1))
	{
		unk_0x40D517D991458154(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0x31F12808DC47A9E5(uParam0->f_7))
	{
		if (!unk_0x74C2FE037DFC8B4A(uParam0->f_7, 0))
		{
			if (unk_0x449E42BCC3595C8A(uParam0->f_7))
			{
				unk_0x76164E4D9497672C(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_1032(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x0A91D180DDC7A1B8();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x0FAE113CE72ED842(uParam0))
	{
		if (!unk_0x449E42BCC3595C8A(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x76164E4D9497672C(iParam0, 1);
			}
			else
			{
				unk_0xC05807CD5713BE74(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0xAB6FA37A2DD2B949(iParam0, iParam2);
			unk_0x69D1D3E5496A3900(iParam0, fParam6);
			if (unk_0xE769D9B5158D0F11(*uParam1))
			{
				unk_0xF60CEE5003674AF0(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x6F7E958B961ABDEF(iParam0, iParam9);
		}
		unk_0xEFF69FBCAAB71548(iParam0, uParam4);
		unk_0x456885E378D232E4(iParam0, uParam5);
		*uParam1 = unk_0xB77DA7A8004F1B63(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xE769D9B5158D0F11(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x71925FF3194E84CE(*uParam1, iParam8);
				}
				if (!unk_0xFAFFA408239A026B(uParam7))
				{
					unk_0x262BA3D6F3CF3F59("STRING");
					if (bParam10)
					{
						unk_0xB4179F7E88F4C4BF(sParam7);
					}
					else
					{
						unk_0xBEFD1ED9B6BE5127(sParam7);
					}
					unk_0x732B30F79C8AF491(*uParam1);
				}
				unk_0xF60CEE5003674AF0(*uParam1, 7);
			}
		}
		if (!unk_0xB03A1684359C50A1(uParam1->f_6, 2))
		{
			if (unk_0xE769D9B5158D0F11(*uParam1))
			{
				unk_0xD2A9C3F486236CC5(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x657B649BA2AD3582(iParam0, 0))
		{
			uParam1->f_1 = unk_0x41790E9147D31673(iParam0);
			if (!unk_0xB03A1684359C50A1(uParam1->f_6, 3))
			{
				if (unk_0xE769D9B5158D0F11(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0x71925FF3194E84CE(uParam1->f_1, iParam8);
					}
					if (!unk_0xFAFFA408239A026B(sParam7))
					{
						unk_0x262BA3D6F3CF3F59("STRING");
						if (bParam10)
						{
							unk_0xB4179F7E88F4C4BF(sParam7);
						}
						else
						{
							unk_0xBEFD1ED9B6BE5127(sParam7);
						}
						unk_0x732B30F79C8AF491(uParam1->f_1);
					}
					unk_0xF60CEE5003674AF0(uParam1->f_1, 7);
					unk_0xD2A9C3F486236CC5(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0xE769D9B5158D0F11(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0x62148293B793073B(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0xE769D9B5158D0F11(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x62148293B793073B(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_1033()
{
	return Global_1312831;
}

int func_1034(int iParam0)
{
	if (unk_0x5AD42783360AB57E(Local_112.f_2[iParam0 /*10*/].f_2))
	{
		if (func_13(Local_112.f_2[iParam0 /*10*/].f_2))
		{
			if (unk_0x08438F954B83E80B(unk_0xFA62333764BA8F5D(Local_112.f_2[iParam0 /*10*/].f_2), 0, 7000) || unk_0x08438F954B83E80B(unk_0xFA62333764BA8F5D(Local_112.f_2[iParam0 /*10*/].f_2), 1, 40000))
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

int func_1035(var uParam0)
{
	var uVar0;
	var uVar1;
	
	if (unk_0xF905401F186A9803(unk_0x8CFC7D6E1DA5D304(), uParam0))
	{
		return 1;
	}
	if (unk_0x6703CD13741C39C5(unk_0x8CFC7D6E1DA5D304(), uParam0))
	{
		return 1;
	}
	if (func_1036())
	{
		if (unk_0x8E085EFABAAA911F(unk_0x8CFC7D6E1DA5D304(), &uVar0))
		{
			if (unk_0xB6C2454233C8F532(uVar0))
			{
				uVar1 = unk_0x6DE4035D8BAB73B4(iVar0);
				if (unk_0x31F12808DC47A9E5(uVar1))
				{
					if (!unk_0x74C2FE037DFC8B4A(iVar1, 0))
					{
						if (unk_0x657B649BA2AD3582(iVar1, 0))
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

bool func_1036()
{
	return Global_1574302;
}

int func_1037(bool bParam0)
{
	if (func_1038(1))
	{
		return 1;
	}
	if (Global_2512581.f_4878.f_30)
	{
		Global_2512581.f_4878.f_30 = 0;
		return 1;
	}
	if (bParam0)
	{
		if (func_355() == func_57() || !func_1162(func_355(), 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_1038(bool bParam0)
{
	bool bVar0;
	
	if (!func_591(1))
	{
		bVar0 = false;
		if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_57 != func_57())
		{
			if (func_1162(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_57, 0, 1))
			{
				if ((Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_24 == 4 || Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_24 == 8) || Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_24 == 6)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_1039(func_222(unk_0x8CFC7D6E1DA5D304())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_447(31);
				if (func_424(func_222(unk_0x8CFC7D6E1DA5D304())))
				{
					func_447(81);
				}
				if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_57 != func_57() && unk_0x4AF13BCD120BCDBC(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_57))
				{
					Global_1626044 = func_546(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_57, -2, 0, 0);
					if (!func_354(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_57))
					{
						func_447(88);
					}
				}
				else
				{
					Global_1626044 = 1;
				}
				Global_1626028 = { Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_99 };
			}
			return 1;
		}
	}
	return 0;
}

int func_1039(int iParam0)
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
		case 233:
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

void func_1040()
{
	if (!func_1041(unk_0x8CFC7D6E1DA5D304()))
	{
		func_227(25);
	}
}

bool func_1041(int iParam0)
{
	return func_226(iParam0, 25);
}

void func_1042()
{
	int iVar0;
	
	iVar0 = func_294(unk_0x8CFC7D6E1DA5D304());
	iLocal_849 = func_292(iVar0);
}

void func_1043(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 != iParam0)
	{
		func_1057(-1);
		Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 = iParam0;
		if (func_1056() != -1)
		{
			func_1055(-1);
		}
		if (func_1054() != -1)
		{
			func_1053(-1);
		}
		func_1052(iParam2);
		func_1050(iParam0);
		if (!func_236(iParam0))
		{
			fVar0 = func_235(iParam0);
			if (fVar0 != 1f)
			{
				func_232(fVar0);
				unk_0xD2A9C3F486236CC5(&(Global_1806998.f_3), 1);
			}
		}
		if (!func_239(iParam0) || iParam3)
		{
			if (func_237(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0x945880A1F9FE9E4F(0);
				if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
				{
					unk_0x7A7F48A495EAC394(unk_0x8CFC7D6E1DA5D304(), 0, 0);
					unk_0xE223A1A4864F355C(unk_0x8CFC7D6E1DA5D304(), 0);
				}
				unk_0xD2A9C3F486236CC5(&(Global_1806998.f_3), 0);
			}
			else if (unk_0xA41FC657B4BB4148() < 5)
			{
				unk_0x8BB3FA32294185BB(1f);
				unk_0x945880A1F9FE9E4F(5);
			}
		}
		if (func_403())
		{
			func_227(27);
		}
		if (bParam1)
		{
			if (!func_397())
			{
				func_229(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0xB03A1684359C50A1(Global_2512581.f_4523, 1) || unk_0xB03A1684359C50A1(Global_2512581.f_4523, 4)) || unk_0xB03A1684359C50A1(Global_2512581.f_4523, 0))
			{
				func_447(6);
			}
			func_1049();
		}
		if (iParam0 == 164 || iParam0 == 208)
		{
			unk_0x4F7751BE82240EB4(3, 0);
			unk_0x4F7751BE82240EB4(5, 0);
		}
		if (func_250(unk_0x8CFC7D6E1DA5D304()) && func_244(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0xD2A9C3F486236CC5(&(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_1), 8);
		}
		func_1045();
		if (func_1044(iParam0))
		{
			unk_0x4F7751BE82240EB4(3, 0);
			unk_0x4F7751BE82240EB4(5, 0);
			unk_0xD2A9C3F486236CC5(&(Global_1806998.f_3), 6);
		}
	}
}

int func_1044(int iParam0)
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

void func_1045()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_1048();
	iVar2 = func_58(unk_0x8CFC7D6E1DA5D304());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x3479F6F64A48251C(iVar0);
		if (unk_0x4AF13BCD120BCDBC(iVar1))
		{
			if (func_325(iVar1, iVar2, 1) || func_1046(iVar1, unk_0x8CFC7D6E1DA5D304()))
			{
				unk_0xA6111D634CFDB8A0(unk_0x8CFC7D6E1DA5D304(), iVar1, uVar3);
				unk_0xA6111D634CFDB8A0(iVar1, unk_0x8CFC7D6E1DA5D304(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_1046(int iParam0, int iParam1)
{
	if (func_290(iParam0, 1) && func_290(iParam1, 1))
	{
		return (func_1047(iParam0) == func_58(iParam1) || func_1047(iParam1) == func_58(iParam0));
	}
	return 0;
}

int func_1047(int iParam0)
{
	if (func_290(iParam0, 1))
	{
		return Global_1627460[func_58(iParam0) /*530*/].f_11.f_443;
	}
	return func_57();
}

int func_1048()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_593();
	if (iVar0 != func_57())
	{
		if (func_1162(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0xB03A1684359C50A1(Global_1627460[iVar1 /*530*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_1049()
{
	if (unk_0xB03A1684359C50A1(Global_2512581.f_4523, 1))
	{
		unk_0x62148293B793073B(&(Global_2512581.f_4523), 1);
	}
	if (unk_0xB03A1684359C50A1(Global_2512581.f_4523, 4))
	{
		unk_0x62148293B793073B(&(Global_2512581.f_4523), 4);
	}
	if (unk_0xB03A1684359C50A1(Global_2512581.f_4523, 6))
	{
		unk_0x62148293B793073B(&(Global_2512581.f_4523), 6);
	}
	unk_0x62148293B793073B(&(Global_2512581.f_4523), 0);
	unk_0x62148293B793073B(&(Global_2512581.f_4523), 2);
	Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_577 = 0;
	if (Global_2512581.f_4525 > 0)
	{
		unk_0x945880A1F9FE9E4F(Global_2512581.f_4525);
	}
	Global_2512581.f_4524 = 0;
}

void func_1050(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_481(3774, -1, 0);
	iVar1 = func_1051(iParam0);
	if (iVar1 != -1)
	{
		unk_0xD2A9C3F486236CC5(&iVar0, iVar1);
		func_480(3774, iVar0, -1, 1, 0);
	}
}

int func_1051(int iParam0)
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

void func_1052(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x8CFC7D6E1DA5D304();
	if (Global_1627460[iVar0 /*530*/].f_11.f_176 != iParam0)
	{
		Global_1627460[iVar0 /*530*/].f_11.f_176 = iParam0;
	}
}

void func_1053(int iParam0)
{
	if (Global_2512581.f_4878.f_158 != iParam0)
	{
		Global_2512581.f_4878.f_158 = iParam0;
	}
}

int func_1054()
{
	return Global_2512581.f_4878.f_158;
}

void func_1055(int iParam0)
{
	if (Global_2512581.f_4878.f_157 != iParam0)
	{
		Global_2512581.f_4878.f_157 = iParam0;
	}
}

int func_1056()
{
	return Global_2512581.f_4878.f_157;
}

void func_1057(int iParam0)
{
	Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_32 = iParam0;
}

int func_1058()
{
	struct<4> Var0;
	int iVar4;
	
	if (Local_112.f_196 != -1)
	{
		return Local_112.f_196;
	}
	Var0 = { func_1059() };
	Local_112.f_198 = func_501(Var0.f_0);
	Local_112.f_197 = (Var0.f_0 - 1);
	if (Local_112.f_197 < 0)
	{
		Local_112.f_197 = 0;
	}
	if (Local_112.f_196 == -1)
	{
		iVar4 = unk_0x61E9B3BFA06B017B(0, 10);
		if (iVar4 > 7)
		{
			Local_112.f_196 = 99;
		}
		else
		{
			Local_112.f_196 = 0;
		}
		if (Global_262145.f_14364 && Local_112.f_196 == 0)
		{
			Local_112.f_196 = 99;
		}
		else if (Global_262145.f_14363 && Local_112.f_196 == 99)
		{
			Local_112.f_196 = 0;
		}
	}
	return Local_112.f_196;
}

struct<4> func_1059()
{
	return Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_177;
}

int func_1060()
{
	int iVar0;
	
	iVar0 = func_1061();
	if (iVar0 > -1)
	{
		if (Local_112.f_218 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1061()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xA651DA0BC9FD8FA4();
	iVar1 = unk_0x8CFC7D6E1DA5D304();
	if (func_34(unk_0x8CFC7D6E1DA5D304(), 0))
	{
		iVar0 = func_405();
		iVar1 = Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_566;
	}
	if (Local_382[iVar0 /*11*/].f_10 != -1)
	{
		return Local_382[iVar0 /*11*/].f_10;
	}
	if (func_243(iVar1))
	{
		Local_382[iVar0 /*11*/].f_10 = iVar0;
		if (iVar0 == Local_112.f_218)
		{
			func_842(1);
		}
	}
	else if (func_290(iVar1, 1))
	{
		iVar2 = func_593();
		if (iVar2 != func_57())
		{
			if (unk_0x1DD0F419559F38C7(iVar2))
			{
				Local_382[iVar0 /*11*/].f_10 = unk_0xE24BCF1006ECB50A(iVar2);
			}
		}
	}
	return Local_382[iVar0 /*11*/].f_10;
}

int func_1062()
{
	if (func_406())
	{
		if (!func_65())
		{
			return 0;
		}
	}
	return 1;
}

int func_1063()
{
	return Local_112.f_0;
}

int func_1064(int iParam0)
{
	return Local_382[iParam0 /*11*/];
}

int func_1065()
{
	var uVar0;
	
	func_1070(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!unk_0x44243F2E2F58B8E3())
		{
			return 1;
		}
	}
	if (func_1069())
	{
		return 1;
	}
	if (Global_2459011)
	{
		return 1;
	}
	if (func_1068())
	{
		return 1;
	}
	if (func_1067(157))
	{
		if (!func_1066())
		{
			return 1;
		}
	}
	if (func_1067(155))
	{
		return 1;
	}
	if (!unk_0xA1C84586015AE5DB())
	{
		return 1;
	}
	if (func_233() != 0)
	{
		if (unk_0xE7FAF8E78F7D3A73(func_233()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1066()
{
	return Global_2447128.f_586;
}

int func_1067(int iParam0)
{
	if (unk_0xA1B200C8BB1289B7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1068()
{
	return Global_2456781;
}

bool func_1069()
{
	return Global_2447128.f_581;
}

void func_1070(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x5B5D98FAAE6FEC3E(1))
	{
		iVar1 = unk_0xD8DDA9403FAEDB57(1, iVar0);
		if (iVar1 == 171)
		{
			unk_0xF6A7C6FEAD04F4B3(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1592539087:
					func_1071(iVar0);
					break;
				
				case 1094813140:
					unk_0xF6A7C6FEAD04F4B3(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 1903409068)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_1071(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xF6A7C6FEAD04F4B3(1, iParam0, &Var0, 3))
	{
		if (func_1162(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x6604E096142B4B55(Var0.f_1);
			if (unk_0x31F12808DC47A9E5(uVar3))
			{
				if (unk_0x657B649BA2AD3582(iVar3, 0))
				{
					uVar4 = unk_0x5AD687C3474F04B4(iVar3, 0);
					if (unk_0xF7FC2DC5308754C4(uVar4, Var0.f_2) && unk_0xD8E9E28C65F6D7A9())
					{
						if (func_1072(uVar4, &bVar5))
						{
							unk_0x02FFEDE7A52D9E18(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x4F5FF3F3FDCAB15D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_1072(int iParam0, var uParam1)
{
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		if (!unk_0x90D1FDC9D31B7BE1(iParam0))
		{
			if (unk_0x84E7E48409E0DA9F(iParam0))
			{
				if (!unk_0xA403D842C198CAFF(unk_0x4F69FBD64CDF125B(iParam0)))
				{
					unk_0x337F2213526139E0(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0xE54DCC6B21FDC95A(iParam0, 0))
		{
			if (unk_0x1800B99666D25740(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1073()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_1074()
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
	
	if (!func_34(unk_0x8CFC7D6E1DA5D304(), 0))
	{
		if (unk_0xB03A1684359C50A1(iLocal_735, 18))
		{
			if (!unk_0xB03A1684359C50A1(iLocal_735, 6))
			{
				if (unk_0x44243F2E2F58B8E3())
				{
					if (func_1060() || func_404())
					{
						func_725(0, 4, 0, 0, -1, -1, -1, -1, -1);
						unk_0xD2A9C3F486236CC5(&iLocal_735, 6);
					}
				}
			}
			uVar0 = Local_112.f_196;
			iVar1 = -1;
			iVar2 = -1;
			iVar3 = Local_112.f_197 + 1;
			iVar4 = Local_112.f_198;
			iVar5 = -1;
			bVar6 = !func_406();
			iVar7 = -1;
			iVar8 = 0;
			iVar9 = 0;
			iVar5 = Local_112.f_213;
			if (unk_0xB03A1684359C50A1(Local_112.f_1, 1) || unk_0xB03A1684359C50A1(Local_112.f_1, 4))
			{
				iVar7 = 2;
			}
			else if (unk_0xB03A1684359C50A1(Local_112.f_1, 8))
			{
				iVar7 = 1;
			}
			else if (((unk_0xB03A1684359C50A1(Local_112.f_1, 3) || unk_0xB03A1684359C50A1(Local_112.f_1, 9)) || unk_0xB03A1684359C50A1(Local_112.f_1, 15)) || unk_0xB03A1684359C50A1(Local_112.f_1, 5))
			{
				iVar7 = 0;
			}
			if (unk_0x44243F2E2F58B8E3())
			{
				Global_1807007.f_2 = Local_112.f_267;
				Global_1807007.f_3 = Local_112.f_268;
				func_1121(uVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar7, iVar8, iVar9, bVar6);
			}
		}
	}
	func_446();
	if (unk_0x773D11D22FA84F6D(unk_0x18F7BE9ACB7D08F4()) == iLocal_740)
	{
		unk_0x641E77554763EF06(unk_0x18F7BE9ACB7D08F4(), uLocal_742);
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		if (unk_0xF67B871D7588B9D9())
		{
			unk_0x7E1D02126DA8A751(Local_112.f_261, 1);
		}
		func_443();
	}
	func_1120();
	if (Local_112.f_219 != -1)
	{
		if (unk_0xB03A1684359C50A1(iLocal_735, 5))
		{
			if (unk_0x4AF13BCD120BCDBC(unk_0x3479F6F64A48251C(Local_112.f_219)))
			{
				func_441(unk_0x3479F6F64A48251C(Local_112.f_219), 432, 0);
				func_439(unk_0x3479F6F64A48251C(Local_112.f_219), 1, 0);
				func_438(unk_0x3479F6F64A48251C(Local_112.f_219), 0, 0);
				func_437(unk_0x3479F6F64A48251C(Local_112.f_219), 0);
				func_436(unk_0x3479F6F64A48251C(Local_112.f_219), Global_262145.f_11514, 0);
			}
		}
	}
	if (func_200(0))
	{
		func_199(0);
	}
	if (unk_0xB03A1684359C50A1(iLocal_736, 0))
	{
		if (!unk_0xB03A1684359C50A1(iLocal_736, 2))
		{
			unk_0x9FC66CAE22E74E58("DisableFlightMusic", 0);
			unk_0x9FC66CAE22E74E58("WantedMusicDisabled", 0);
		}
	}
	unk_0xD2A9C3F486236CC5(&iLocal_736, 8);
	func_195();
	unk_0x7AAF0D0539858018(1);
	func_842(0);
	func_1119(&(Local_112.f_269), 1);
	func_1076(1, 0);
	if (!func_34(unk_0x8CFC7D6E1DA5D304(), 0))
	{
		unk_0x945880A1F9FE9E4F(5);
	}
	func_1075();
}

void func_1075()
{
	unk_0x810C5D6462DD69E6();
}

void func_1076(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1347470.f_1.f_108 != 0)
	{
		Global_1347470.f_1.f_108 = 0;
	}
	Global_1347470.f_1.f_109 = -1;
	Global_1347470.f_1.f_110 = -1;
	if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 == 167 || Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 == 168)
	{
		func_1117();
		unk_0x62148293B793073B(&(Global_1806998.f_3), 4);
	}
	if ((func_590() && iParam1 != 0) && Global_262145.f_16124)
	{
		if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 == 190 || Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 == 192)
		{
			func_1100(unk_0x8CFC7D6E1DA5D304(), iParam1, 1, 0);
		}
	}
	if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 == 164 || Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 == 208)
	{
		unk_0x4F7751BE82240EB4(3, 1);
		unk_0x4F7751BE82240EB4(5, 1);
	}
	if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 != -1)
	{
		Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_33 = -1;
		if (!unk_0xB03A1684359C50A1(Global_1574398.f_1, 14) && !func_250(unk_0x8CFC7D6E1DA5D304()))
		{
			func_229(0);
		}
	}
	else if (func_1098(unk_0x8CFC7D6E1DA5D304()) != -1)
	{
		func_1057(-1);
	}
	func_1097(func_57());
	if (func_200(16))
	{
		func_199(16);
	}
	func_1094(0);
	func_1052(-1);
	func_1093();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_1092(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_1090(iVar1);
		iVar1++;
	}
	if (unk_0xB03A1684359C50A1(Global_1806998.f_3, 0))
	{
		unk_0x8BB3FA32294185BB(1f);
		unk_0x945880A1F9FE9E4F(5);
		unk_0x62148293B793073B(&(Global_1806998.f_3), 0);
	}
	if (unk_0xB03A1684359C50A1(Global_1806998.f_3, 5))
	{
		unk_0x62148293B793073B(&(Global_1806998.f_3), 5);
	}
	iVar2 = func_430();
	if ((func_322(iVar2) || iVar2 == 205) || iVar2 == 210)
	{
		func_1089(-1);
	}
	else if (((iVar2 == 201 || iVar2 == 200) || iVar2 == 179) || func_518(iVar2))
	{
		func_1085(-1, 1);
	}
	else if (((((func_429(iVar2) || func_1084(iVar2)) || func_1083(iVar2)) || func_515(iVar2)) || func_513(iVar2)) || func_511(iVar2))
	{
	}
	else
	{
		func_1085(-1, 1);
	}
	func_225(19);
	func_225(20);
	func_225(21);
	func_225(22);
	func_225(27);
	func_199(3);
	func_199(4);
	func_199(7);
	func_1082();
	if (func_244(unk_0x8CFC7D6E1DA5D304()))
	{
		func_842(0);
	}
	func_225(29);
	Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_57 = func_57();
	if (Global_2512581.f_4878.f_30 != 0)
	{
		Global_2512581.f_4878.f_30 = 0;
	}
	if (bParam0)
	{
		func_201();
	}
	if (!func_250(unk_0x8CFC7D6E1DA5D304()))
	{
		func_224();
		unk_0x62148293B793073B(&(Global_1806998.f_3), 1);
	}
	if (unk_0xB03A1684359C50A1(Global_1806998.f_3, 6))
	{
		unk_0x4F7751BE82240EB4(3, 1);
		unk_0x4F7751BE82240EB4(5, 1);
		unk_0x62148293B793073B(&(Global_1806998.f_3), 6);
	}
	if (unk_0xB03A1684359C50A1(Global_1806998.f_3, 7))
	{
		unk_0x62148293B793073B(&(Global_1806998.f_3), 7);
	}
	if (unk_0xB03A1684359C50A1(Global_1806998.f_3, 8))
	{
		func_1081("IMPEXP_SELFDES", 0);
		func_1079("IMPEXP_SELFDES");
		unk_0x62148293B793073B(&(Global_1806998.f_3), 8);
	}
	func_1077(iVar2, 0);
}

void func_1077(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xB03A1684359C50A1(Global_1806998.f_3, 9))
		{
			unk_0x64D773F3BE6DC50A(func_1078(iParam0));
			unk_0xD2A9C3F486236CC5(&(Global_1806998.f_3), 9);
		}
	}
	else if (unk_0xB03A1684359C50A1(Global_1806998.f_3, 9))
	{
		unk_0xA11D9B06B99FE786(func_1078(iParam0));
		unk_0x62148293B793073B(&(Global_1806998.f_3), 9);
	}
}

char* func_1078(int iParam0)
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

void func_1079(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0xE0C4A595CD61B7F2(&(Global_104551.f_14111[iVar0 /*104*/])))
		{
			if (unk_0x9D39145AD645E383(&(Global_104551.f_14111[iVar0 /*104*/]), sParam0))
			{
				if (Global_104551.f_14111[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_832();
					Global_104551.f_14111[iVar0 /*104*/].f_99[Global_14453] = 0;
					if (func_1080(iVar0))
					{
					}
					else
					{
						Global_104551.f_14111[iVar0 /*104*/].f_24 = 0;
						Global_104551.f_14111[iVar0 /*104*/].f_28 = 0;
						Global_104551.f_14111[iVar0 /*104*/].f_29 = 0;
					}
					unk_0x1BEAF0E2DD876AA1(Global_104551.f_14111[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_1080(int iParam0)
{
	if ((Global_104551.f_14111[iParam0 /*104*/].f_99[0] == 1 || Global_104551.f_14111[iParam0 /*104*/].f_99[1] == 1) || Global_104551.f_14111[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_1081(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!unk_0xE0C4A595CD61B7F2(&(Global_104551.f_14111[iVar0 /*104*/])))
		{
			if (unk_0x9D39145AD645E383(&(Global_104551.f_14111[iVar0 /*104*/]), sParam0))
			{
				if (Global_104551.f_14111[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_104551.f_14111[iVar0 /*104*/].f_24 = 1;
				if (Global_104551.f_14111[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_104551.f_14111[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_104551.f_14021[0 /*20*/].f_17 = 0;
					}
					if (Global_104551.f_14111[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_104551.f_14021[1 /*20*/].f_17 = 0;
					}
					if (Global_104551.f_14111[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_104551.f_14021[2 /*20*/].f_17 = 0;
					}
					if (Global_104551.f_14111[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_104551.f_14021[3 /*20*/].f_17 = 0;
					}
					Global_104551.f_14111[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_104551.f_14111[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1082()
{
	if (func_1041(unk_0x8CFC7D6E1DA5D304()))
	{
		func_225(25);
	}
}

int func_1083(int iParam0)
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

int func_1084(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_1085(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_430();
	}
	if (iParam0 > 0)
	{
		if (func_593() != func_57())
		{
			if (func_1088(unk_0x8CFC7D6E1DA5D304()) == unk_0x8CFC7D6E1DA5D304())
			{
				Global_2492267.f_93[func_1087(iParam0)] = 1;
			}
		}
		iVar0 = func_1087(159);
		if (func_1086(iVar0, Global_262145.f_11765, bParam1))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(157);
		if (func_1086(iVar0, Global_262145.f_11765, bParam1))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(148);
		if (func_1086(iVar0, Global_262145.f_11765, bParam1))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(164);
		if (func_1086(iVar0, Global_262145.f_11765, bParam1))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(142);
		if (func_1086(iVar0, Global_262145.f_11765, bParam1))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(152);
		if (func_1086(iVar0, Global_262145.f_11765, bParam1))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(166);
		if (func_1086(iVar0, Global_262145.f_11765, bParam1))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(170);
		if (func_1086(iVar0, Global_262145.f_11765, bParam1))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(173);
		if (func_1086(iVar0, Global_262145.f_11765, bParam1))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(179);
		if (func_1086(iVar0, Global_262145.f_11765, bParam1))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(200);
		if (func_1086(iVar0, Global_262145.f_11765, bParam1))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(201);
		if (func_1086(iVar0, Global_262145.f_11765, bParam1))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(182);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(183);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(185);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(186);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(180);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(195);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(197);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(198);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(207);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(208);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(209);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(214);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(215);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(216);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(217);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(218);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(219);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(220);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(221);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_1086(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_226(unk_0x8CFC7D6E1DA5D304(), 19) && !func_226(unk_0x8CFC7D6E1DA5D304(), 20)) && !func_226(unk_0x8CFC7D6E1DA5D304(), 9))
		{
			return 0;
		}
	}
	if (Global_2492267.f_93[iParam0] == 1 && func_11(&(Global_2492267[iParam0 /*2*/])))
	{
		if (func_564(&(Global_2492267[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2492267.f_93[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_1087(int iParam0)
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

int func_1088(int iParam0)
{
	return Global_1627460[iParam0 /*530*/].f_11.f_35;
}

void func_1089(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_430();
	}
	if (iParam0 > 0)
	{
		if (func_593() != func_57())
		{
			Global_2492267.f_93[func_1087(iParam0)] = 1;
		}
		iVar0 = func_1087(155);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(163);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(160);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(153);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(162);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(154);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(171);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(172);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(199);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(194);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(193);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(210);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(205);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(189);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1087(211);
		if (func_1086(iVar0, Global_262145.f_11766, 0))
		{
			func_9(&(Global_2492267[iVar0 /*2*/]));
			func_10(&(Global_2492267[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_1090(int iParam0)
{
	if (!func_61(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_303[iParam0 /*3*/], func_1091(), 0))
	{
		Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_303[iParam0 /*3*/] = { func_1091() };
	}
	if (!func_61(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_290[iParam0 /*3*/], func_1091(), 0))
	{
		Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_290[iParam0 /*3*/] = { func_1091() };
	}
}

Vector3 func_1091()
{
	struct<3> Var0;
	
	return Var0;
}

void func_1092(int iParam0)
{
	if (!func_61(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_145[iParam0 /*3*/], func_1091(), 0))
	{
		Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_145[iParam0 /*3*/] = { func_1091() };
	}
	if (!func_61(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_120[iParam0 /*3*/], func_1091(), 0))
	{
		Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_120[iParam0 /*3*/] = { func_1091() };
	}
}

void func_1093()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573838 = { Var0 };
	Global_1573838.f_13 = func_57();
	if (unk_0xB03A1684359C50A1(Global_1573336, 3))
	{
		unk_0x62148293B793073B(&Global_1573336, 3);
	}
}

void func_1094(bool bParam0)
{
	if (bParam0)
	{
		if (!func_533(unk_0x8CFC7D6E1DA5D304(), 14))
		{
			func_1096(14);
		}
	}
	else if (func_533(unk_0x8CFC7D6E1DA5D304(), 14))
	{
		func_1095(14);
	}
}

void func_1095(int iParam0)
{
	unk_0x62148293B793073B(&(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_5), iParam0);
}

void func_1096(int iParam0)
{
	unk_0xD2A9C3F486236CC5(&(Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_5), iParam0);
}

void func_1097(int iParam0)
{
	if (func_243(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0x8CFC7D6E1DA5D304() != iParam0)
		{
			if (Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_443 != iParam0)
			{
				Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_443 = iParam0;
				if (iParam0 != func_57())
				{
				}
			}
		}
	}
}

int func_1098(int iParam0)
{
	if (func_1099(iParam0, 0))
	{
		return Global_1627460[iParam0 /*530*/].f_11.f_32;
	}
	return -1;
}

int func_1099(int iParam0, int iParam1)
{
	if (Global_1627460[iParam0 /*530*/].f_11.f_32 != -1 || (iParam1 && Global_1627460[iParam0 /*530*/].f_11.f_33 != -1))
	{
		return 1;
	}
	return 0;
}

void func_1100(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (func_698(iParam0, iParam1) && func_1116(iParam0, iParam1))
	{
		iVar0 = func_697(iParam0, iParam1);
		func_1103(iVar0, bParam2, bParam3);
		func_1101(iVar0, 1);
	}
}

void func_1101(int iParam0, int iParam1)
{
	func_685(func_1102(iParam0), iParam1, -1, 1);
	Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_160[iParam0 /*12*/].f_6 = iParam1;
}

int func_1102(int iParam0)
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

void func_1103(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	
	bVar1 = false;
	iVar2 = func_923(unk_0x8CFC7D6E1DA5D304(), iParam0);
	if (!bParam1)
	{
		func_1115(iParam0, 0, bParam2);
	}
	if (bParam1)
	{
		iVar0 = Global_2492180[iParam0];
		iVar0 = func_1114(iParam0, bParam2);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		if (!bParam2)
		{
			Global_1808538 = -1;
		}
		func_1113(iParam0, 0, bParam2);
	}
	else if (func_1111(iParam0, bParam2))
	{
		iVar0 = func_1110(iVar2, 0);
		iVar3 = func_778(unk_0x8CFC7D6E1DA5D304(), iVar2);
		iVar4 = func_1109(iVar2, bParam2);
		iVar5 = func_1110(iVar2, bParam2);
		fVar6 = (unk_0xBBDA792448DB5A89(iVar5) / unk_0xBBDA792448DB5A89(iVar4));
		iVar0 = (iVar0 - unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar3) * fVar6)));
		if (iVar0 <= 0)
		{
			iVar0 = iVar5;
		}
		if (func_1108(iVar2) && func_1107(unk_0x8CFC7D6E1DA5D304(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
		func_1115(iParam0, iVar0, bParam2);
	}
	else
	{
		if (func_1106(unk_0x8CFC7D6E1DA5D304(), iVar2) > 0)
		{
			func_1105(iParam0, (Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_160[iParam0 /*12*/].f_2 - (func_1109(iVar2, bParam2) / 2)));
		}
		iVar0 = (func_1110(iVar2, bParam2) / func_1106(unk_0x8CFC7D6E1DA5D304(), iVar2) + 1);
	}
	if (!bVar1)
	{
		if (func_1108(iVar2) && func_1107(unk_0x8CFC7D6E1DA5D304(), iVar2) == 2)
		{
			iVar0 = (iVar0 / 2);
			bVar1 = true;
		}
	}
	func_1104(unk_0x8CFC7D6E1DA5D304(), iVar2, iVar0, bParam2);
}

void func_1104(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return;
	}
	if (func_692(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				if (bParam3)
				{
					Global_1595681[iParam0 /*678*/].f_266.f_234 = iParam2;
				}
				else
				{
					Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/].f_9 = iParam2;
				}
			}
			iVar0++;
		}
	}
}

void func_1105(int iParam0, int iParam1)
{
	if (iParam0 != -1 && iParam1 != Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_160[iParam0 /*12*/].f_2)
	{
		Global_1595681[unk_0x8CFC7D6E1DA5D304() /*678*/].f_266.f_160[iParam0 /*12*/].f_2 = iParam1;
	}
}

int func_1106(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	if (func_692(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1107(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	if (func_692(iParam1) && func_1108(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/].f_11;
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_1108(int iParam0)
{
	return func_587(iParam0) == 5;
}

int func_1109(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_587(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_16095;
			if (func_696(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16100;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_16094;
			if (func_696(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16099;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_16093;
			if (func_696(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16098;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_16091;
			if (func_696(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16096;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_16092;
			if (func_696(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				uVar0 = Global_262145.f_16097;
			}
			break;
		
		case 5:
			if (bParam1)
			{
				uVar0 = Global_262145.f_20143;
				if (func_696(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20144;
				}
			}
			else
			{
				uVar0 = Global_262145.f_20127;
				if (func_696(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
				{
					uVar0 = Global_262145.f_20128;
				}
			}
			break;
	}
	return uVar0;
}

int func_1110(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_587(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_16076;
			if (func_696(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16085);
			}
			if (func_696(unk_0x8CFC7D6E1DA5D304(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16090);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_16077;
			if (func_696(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16084);
			}
			if (func_696(unk_0x8CFC7D6E1DA5D304(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16089);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_16078;
			if (func_696(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16083);
			}
			if (func_696(unk_0x8CFC7D6E1DA5D304(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16088);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_16079;
			if (func_696(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16081);
			}
			if (func_696(unk_0x8CFC7D6E1DA5D304(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16086);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_16080;
			if (func_696(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_16082);
			}
			if (func_696(unk_0x8CFC7D6E1DA5D304(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_16087);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				iVar0 = Global_262145.f_20140;
			}
			else
			{
				iVar0 = Global_262145.f_20124;
			}
			if (func_696(unk_0x8CFC7D6E1DA5D304(), iParam0, 0))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20141);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20125);
				}
			}
			if (func_696(unk_0x8CFC7D6E1DA5D304(), iParam0, 1))
			{
				if (bParam1)
				{
					iVar0 = (iVar0 - Global_262145.f_20142);
				}
				else
				{
					iVar0 = (iVar0 - Global_262145.f_20126);
				}
			}
			if (func_1107(unk_0x8CFC7D6E1DA5D304(), iParam0) == 2)
			{
				iVar0 *= 2;
			}
			break;
	}
	return iVar0;
}

bool func_1111(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_686(15384, -1, -1);
	}
	return func_686(func_1112(iParam0), -1, -1);
}

int func_1112(int iParam0)
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

void func_1113(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_685(15384, iParam1, -1, 1);
		return;
	}
	func_685(func_1112(iParam0), iParam1, -1, 1);
}

int func_1114(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2492180[iParam0];
	iVar1 = func_923(unk_0x8CFC7D6E1DA5D304(), iParam0);
	if (bParam1)
	{
		iVar0 = Global_2492187;
	}
	if (func_1108(iVar1))
	{
		if (func_1107(unk_0x8CFC7D6E1DA5D304(), iVar1) == 2)
		{
			iVar0 *= 2;
		}
	}
	return iVar0;
}

void func_1115(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		Global_2492187 = iParam1;
		return;
	}
	Global_2492180[iParam0] = iParam1;
}

int func_1116(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_698(iParam0, iParam1))
	{
		iVar0 = func_697(iParam0, iParam1);
		if (Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/].f_4 > 0 && Global_1595681[iParam0 /*678*/].f_266.f_160[iVar0 /*12*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

void func_1117()
{
	unk_0x62148293B793073B(&(Global_2512581.f_1711), 28);
	unk_0x62148293B793073B(&(Global_2512581.f_1711), 29);
	func_1118(24);
}

void func_1118(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x62148293B793073B(&(Global_2512581.f_4878.f_7[iVar0]), iVar1);
}

void func_1119(var uParam0, int iParam1)
{
	if (unk_0x1BAEB842824F0F68(*uParam0))
	{
		unk_0x41A342A28DEEDED9(*uParam0, iParam1);
	}
}

void func_1120()
{
	unk_0x174D10140C6EDAA7(iLocal_741);
	unk_0x174D10140C6EDAA7(iLocal_740);
}

void func_1121(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	var uVar0;
	struct<23> Var1;
	int iVar24;
	struct<24> Var25;
	struct<24> Var49;
	struct<25> Var73;
	
	uVar0 = unk_0xFCA64981FEF7C913();
	iVar24 = func_58(unk_0x8CFC7D6E1DA5D304());
	Var1.f_0 = Global_1807007;
	Var1.f_1 = Global_1807007.f_1;
	Var1.f_4 = Global_1807007.f_4;
	Var1.f_5 = Global_1807007.f_5;
	Var1.f_6 = Global_1807007.f_6;
	Var1.f_7 = Global_1807007.f_7;
	Var1.f_8 = Global_1807007.f_8;
	Var1.f_9 = Global_1807007.f_9;
	Var1.f_10 = Global_1807007.f_10;
	Var1.f_2 = Global_1807007.f_2;
	Var1.f_3 = Global_1807007.f_3;
	Var1.f_11 = iParam3;
	Var1.f_12 = iParam2;
	Var1.f_13 = uParam0;
	Var1.f_14 = func_1128();
	Var1.f_16 = iParam1;
	Var1.f_21 = iParam7;
	Var1.f_22 = iParam8;
	if (iVar24 != func_57() && unk_0x4AF13BCD120BCDBC(iVar24))
	{
		Var1.f_17 = iParam4;
		Var1.f_18 = func_1127(iVar24, iParam3);
		Var1.f_19 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iParam4) / unk_0xBBDA792448DB5A89(func_498(iParam3))) * 100f));
		Var1.f_20 = (100 - unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(func_1124(iParam3, iVar24)) / unk_0xBBDA792448DB5A89(func_498(iParam3))) * 100f)));
		Var1.f_15 = func_1123(iVar24);
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		if (unk_0x9D39145AD645E383(uVar0, "GB_CONTRABAND_SELL"))
		{
			Var25 = { Var1 };
			Var25.f_23 = iParam5;
			unk_0x1C8A0A6E77D69D20(&Var25);
		}
		else if (unk_0x9D39145AD645E383(sVar0, "GB_CONTRABAND_BUY"))
		{
			unk_0x02F557AB4AEFF6EE(&Var1);
		}
		else if (unk_0x9D39145AD645E383(sVar0, "GB_CONTRABAND_DEFEND"))
		{
			if (bParam9 == 1)
			{
				Var49 = { Var1 };
				Var49.f_23 = iParam5;
				unk_0xAFC4086138B74567(&Var49);
			}
			else
			{
				Var73 = { Var1 };
				Var73.f_23 = iParam5;
				Var73.f_24 = iParam6;
				unk_0x79033184092EE8F2(&Var73);
			}
		}
	}
	func_1122();
}

void func_1122()
{
	struct<18> Var0;
	
	Global_1807007 = { Var0 };
}

int func_1123(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1595681[iParam0 /*678*/].f_266.f_84[iVar0 /*3*/] > 0 && Global_1595681[iParam0 /*678*/].f_266.f_84[iVar0 /*3*/] <= 22)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_1124(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_1126(iParam1, iParam0))
	{
		iVar0 = func_1125(iParam0, iParam1);
		iVar1 = func_497(iParam0);
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

int func_1125(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam0 == Global_1595681[iParam1 /*678*/].f_266.f_84[iVar0 /*3*/])
			{
				return Global_1595681[iParam1 /*678*/].f_266.f_84[iVar0 /*3*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1126(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_57())
	{
		return 0;
	}
	if (func_42(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1595681[iParam0 /*678*/].f_266.f_84[iVar0 /*3*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1127(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_42(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam1 == Global_1595681[iParam0 /*678*/].f_266.f_84[iVar0 /*3*/])
			{
				return Global_1595681[iParam0 /*678*/].f_266.f_84[iVar0 /*3*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_1128()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_58(unk_0x8CFC7D6E1DA5D304());
	if (iVar2 != func_57())
	{
		iVar1 = 1;
		while (iVar1 <= 22)
		{
			if (func_1126(iVar2, iVar1))
			{
				unk_0xD2A9C3F486236CC5(&uVar0, iVar1);
			}
			iVar1++;
		}
	}
	return uVar0;
}

void func_1129(struct<21> Param0)
{
	func_1160(func_1161(Param0.f_0), Param0);
	unk_0x0C06E0BAD395F495(10);
	unk_0xC11ECDA47AB081F6(3);
	func_1159(0, -1, 0);
	unk_0x9B457509556CB639(&Local_112, 270);
	unk_0x0D25D64240F2BAA8(&Local_382, 353);
	if (!func_1158())
	{
		func_1074();
	}
	if (unk_0x44243F2E2F58B8E3())
	{
		unk_0xDA6A6B59F261B209(0);
		if (unk_0xF67B871D7588B9D9())
		{
		}
		func_1155();
		func_1130(0, 0);
		Local_382[unk_0xA651DA0BC9FD8FA4() /*11*/] = 0;
	}
	else
	{
		func_1074();
	}
}

void func_1130(int iParam0, int iParam1)
{
	func_1154();
	func_1133(1);
	if ((iParam0 != 0 && unk_0x4AF13BCD120BCDBC(iParam1)) && func_1132(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xD2A9C3F486236CC5(&Global_1806993, 0);
				break;
			}
	}
	if (!func_582() && !func_290(unk_0x8CFC7D6E1DA5D304(), 1))
	{
		if (func_400())
		{
			func_228(3);
		}
	}
	func_228(4);
	if (func_591(0))
	{
		Global_1627460[unk_0x8CFC7D6E1DA5D304() /*530*/].f_11.f_57 = func_593();
	}
	if (func_424(iParam0))
	{
		func_776();
		Global_1807025.f_18 = func_754(func_355());
	}
	else if (func_428(func_1098(unk_0x8CFC7D6E1DA5D304())))
	{
		func_774();
		Global_1807078.f_18 = func_754(func_355());
	}
	func_1131();
}

void func_1131()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1347470.f_532[iVar0 /*42*/].f_1 = func_57();
		Global_1347470.f_532[iVar0 /*42*/].f_9 = 0;
		iVar0++;
	}
}

int func_1132(int iParam0, bool bParam1)
{
	return func_325(unk_0x8CFC7D6E1DA5D304(), iParam0, bParam1);
}

void func_1133(bool bParam0)
{
	int iVar0;
	
	func_1118(33);
	func_1118(34);
	func_1118(35);
	func_1118(36);
	func_1118(37);
	func_1118(38);
	func_1118(39);
	func_1118(40);
	func_1118(43);
	func_1118(41);
	func_1118(54);
	func_1118(42);
	func_1118(47);
	func_1153(23);
	func_1153(24);
	func_1118(92);
	unk_0x62148293B793073B(&(Global_2512581.f_1711), 2);
	func_1152();
	func_1147();
	func_1142();
	func_1135();
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2512581.f_4878.f_14[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_1134(3))
	{
		func_1153(3);
	}
	else if (func_1134(4))
	{
		func_1153(4);
	}
	else if (func_1134(5))
	{
		func_1153(5);
	}
	else if (func_1134(6))
	{
		func_1153(6);
	}
	else if (func_1134(7))
	{
		func_1153(7);
	}
	else if (((((((((((((((((func_1134(0) || func_1134(1)) || func_1134(2)) || func_1134(8)) || func_1134(9)) || func_1134(10)) || func_1134(11)) || func_1134(12)) || func_1134(13)) || func_1134(14)) || func_1134(15)) || func_1134(16)) || func_1134(17)) || func_1134(18)) || func_1134(19)) || func_1134(20)) || func_1134(21)) || func_1134(22))
	{
		func_1153(8);
		func_1153(0);
		func_1153(1);
		func_1153(2);
		func_1153(9);
		func_1153(10);
		func_1153(11);
		func_1153(12);
		func_1153(13);
		func_1153(14);
		func_1153(15);
		func_1153(16);
		func_1153(17);
		func_1153(18);
		func_1153(19);
		func_1153(20);
		func_1153(21);
		func_1153(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2512581.f_4878.f_14[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_1134(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xB03A1684359C50A1(Global_2512581.f_4878.f_14[iVar0], iVar1);
}

void func_1135()
{
	if (func_1141())
	{
		func_1140(0);
		func_1140(1);
		func_1140(2);
		func_1140(3);
		func_1140(4);
		func_1140(5);
		if (func_1139(32))
		{
			if (func_1137(func_1138(), 3))
			{
				func_1136(func_1138(), 3);
			}
			func_1140(32);
		}
	}
}

void func_1136(int iParam0, int iParam1)
{
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_104551.f_28020[iParam0 /*29*/].f_12[iParam1] = 0;
			Global_104551.f_28020[iParam0 /*29*/].f_24[iParam1] = 0;
		}
	}
}

int func_1137(int iParam0, int iParam1)
{
	if (Global_104551.f_28020[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_1138()
{
	if (func_839())
	{
		Global_104551.f_28020[12 /*29*/].f_24[Global_14453] = 1;
	}
	return 12;
}

bool func_1139(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xB03A1684359C50A1(Global_2512581.f_4878.f_23[iVar0], iVar1);
}

void func_1140(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x62148293B793073B(&(Global_2512581.f_4878.f_23[iVar0]), iVar1);
}

int func_1141()
{
	if ((((func_1139(1) || func_1139(0)) || func_1139(2)) || func_1139(4)) || func_1139(5))
	{
		return 1;
	}
	return 0;
}

void func_1142()
{
	if (func_1146())
	{
		func_1145(0);
		func_1145(1);
		func_1145(2);
		func_1145(3);
		func_1145(4);
		func_1145(5);
		func_1145(6);
		func_1145(7);
		if (func_1144(8))
		{
			func_1145(8);
		}
		if (func_1144(15))
		{
			if (func_1137(func_1143(), 3))
			{
				func_1136(func_1143(), 3);
			}
			func_1145(15);
		}
	}
}

int func_1143()
{
	if (func_839())
	{
		Global_104551.f_28020[20 /*29*/].f_24[Global_14453] = 1;
	}
	return 20;
}

bool func_1144(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xB03A1684359C50A1(Global_2512581.f_4878.f_21[iVar0], iVar1);
}

void func_1145(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x62148293B793073B(&(Global_2512581.f_4878.f_21[iVar0]), iVar1);
}

int func_1146()
{
	if ((((((((func_1144(0) || func_1144(1)) || func_1144(2)) || func_1144(3)) || func_1144(4)) || func_1144(5)) || func_1144(6)) || func_1144(7)) || func_1144(8))
	{
		return 1;
	}
	return 0;
}

void func_1147()
{
	if (func_1151())
	{
		func_1150(0);
		func_1150(1);
		func_1150(2);
		func_1150(3);
		func_1150(4);
		func_1150(5);
		func_1150(6);
		func_1150(7);
		func_1150(8);
		func_1150(9);
		func_1150(10);
		func_1150(11);
		func_1150(12);
		if (func_1149(13))
		{
			if (func_1137(func_1148(), 3))
			{
				func_1136(func_1148(), 3);
			}
			func_1150(13);
		}
	}
}

int func_1148()
{
	if (func_839())
	{
		Global_104551.f_28020[76 /*29*/].f_24[Global_14453] = 1;
	}
	return 76;
}

bool func_1149(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0xB03A1684359C50A1(Global_2512581.f_4878.f_19[iVar0], iVar1);
}

void func_1150(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x62148293B793073B(&(Global_2512581.f_4878.f_19[iVar0]), iVar1);
}

int func_1151()
{
	if ((((((((((((func_1149(0) || func_1149(1)) || func_1149(2)) || func_1149(3)) || func_1149(4)) || func_1149(5)) || func_1149(6)) || func_1149(7)) || func_1149(8)) || func_1149(9)) || func_1149(10)) || func_1149(11)) || func_1149(12))
	{
		return 1;
	}
	return 0;
}

void func_1152()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Global_2512581.f_4878.f_17[iVar0] = 0;
		iVar0++;
	}
}

void func_1153(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x62148293B793073B(&(Global_2512581.f_4878.f_14[iVar0]), iVar1);
}

void func_1154()
{
	struct<14> Var0;
	
	Global_1807007 = { Var0 };
	Global_1807007.f_14 = 0;
	Global_1807007.f_15 = 0;
}

void func_1155()
{
	int iVar0;
	
	unk_0x48E76A4B7B58B77A("relDefendPlayer", &iLocal_740);
	unk_0x48E76A4B7B58B77A("relDefendAI", &iLocal_741);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		unk_0xFB5F4D76105A21B5(1, Global_1574714[iVar0], iLocal_740);
		unk_0xFB5F4D76105A21B5(1, iLocal_740, Global_1574714[iVar0]);
		unk_0xFB5F4D76105A21B5(1, Global_1574714[iVar0], iLocal_741);
		unk_0xFB5F4D76105A21B5(1, iLocal_741, Global_1574714[iVar0]);
		unk_0xFB5F4D76105A21B5(1, iLocal_740, joaat("COP"));
		unk_0xFB5F4D76105A21B5(1, joaat("COP"), iLocal_740);
		unk_0xFB5F4D76105A21B5(1, iLocal_740, Global_1574759[5]);
		unk_0xFB5F4D76105A21B5(1, Global_1574759[5], iLocal_740);
		unk_0xFB5F4D76105A21B5(1, iLocal_740, Global_1574747);
		unk_0xFB5F4D76105A21B5(1, Global_1574747, iLocal_740);
		iVar0++;
	}
	unk_0xFB5F4D76105A21B5(5, iLocal_740, iLocal_741);
	unk_0xFB5F4D76105A21B5(5, iLocal_741, iLocal_740);
	unk_0xFB5F4D76105A21B5(1, 2017343592, iLocal_741);
	unk_0xFB5F4D76105A21B5(5, 2017343592, iLocal_740);
	func_1157(1, &iLocal_741);
	func_1156(&iLocal_741);
	func_1156(&iLocal_740);
}

void func_1156(int iParam0)
{
	unk_0xFB5F4D76105A21B5(1, -1865950624, *iParam0);
	unk_0xFB5F4D76105A21B5(1, *iParam0, -1865950624);
	unk_0xFB5F4D76105A21B5(1, 296331235, *iParam0);
	unk_0xFB5F4D76105A21B5(1, *iParam0, 296331235);
	unk_0xFB5F4D76105A21B5(1, 1166638144, *iParam0);
	unk_0xFB5F4D76105A21B5(1, *iParam0, 1166638144);
	unk_0xFB5F4D76105A21B5(1, 2037579709, *iParam0);
	unk_0xFB5F4D76105A21B5(1, *iParam0, 2037579709);
	unk_0xFB5F4D76105A21B5(1, 2017343592, *iParam0);
	unk_0xFB5F4D76105A21B5(1, *iParam0, 2017343592);
	unk_0xFB5F4D76105A21B5(1, -1821475077, *iParam0);
	unk_0xFB5F4D76105A21B5(1, *iParam0, -1821475077);
	unk_0xFB5F4D76105A21B5(1, 1782292358, *iParam0);
	unk_0xFB5F4D76105A21B5(1, *iParam0, 1782292358);
	unk_0xFB5F4D76105A21B5(1, -1033021910, *iParam0);
	unk_0xFB5F4D76105A21B5(1, *iParam0, -1033021910);
	unk_0xFB5F4D76105A21B5(1, -1285976420, *iParam0);
	unk_0xFB5F4D76105A21B5(1, *iParam0, -1285976420);
}

void func_1157(int iParam0, int iParam1)
{
	unk_0xFB5F4D76105A21B5(iParam0, joaat("COP"), *iParam1);
	unk_0xFB5F4D76105A21B5(iParam0, *iParam1, joaat("COP"));
	unk_0xFB5F4D76105A21B5(iParam0, joaat("army"), *iParam1);
	unk_0xFB5F4D76105A21B5(iParam0, *iParam1, joaat("army"));
	unk_0xFB5F4D76105A21B5(iParam0, -183807561, *iParam1);
	unk_0xFB5F4D76105A21B5(iParam0, *iParam1, -183807561);
}

int func_1158()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x44243F2E2F58B8E3())
		{
			return 0;
		}
		if (unk_0x593B88C1B97BDD33())
		{
			return 1;
		}
		if (func_1069())
		{
			return 0;
		}
		if (func_1067(155))
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

int func_1159(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD8BE1F0DC107B5A4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_1075();
			}
			else
			{
				return 0;
			}
		}
		if (!func_1033())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x44243F2E2F58B8E3())
				{
					if (!bParam2)
					{
						func_1075();
					}
					else
					{
						return 0;
					}
				}
				if (func_1069())
				{
					if (!bParam2)
					{
						func_1075();
					}
					else
					{
						return 0;
					}
				}
				if (func_1067(155))
				{
					if (!bParam2)
					{
						func_1075();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x32BCC4E6A353E146())
			{
				if (!bParam2)
				{
					func_1075();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD8BE1F0DC107B5A4();
	}
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x44243F2E2F58B8E3())
		{
			if (!bParam2)
			{
				func_1075();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x32BCC4E6A353E146())
	{
		if (!bParam2)
		{
			func_1075();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1160(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!unk_0x44243F2E2F58B8E3())
	{
		func_1075();
	}
	unk_0x4121A9A0CCC0E014(uParam0, 0, Param1.f_16);
}

int func_1161(int iParam0)
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
		
		case 112:
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
		
		case 113:
			return 32;
		
		case 114:
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
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 115:
			return 32;
		
		case 116:
			return 32;
		
		case 120:
			return 32;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 131:
			return 2;
		
		case 136:
			return 1;
		
		case 132:
			return 2;
		
		case 133:
			return 4;
		
		case 134:
			return 2;
		
		case 135:
			return 2;
		
		case 117:
			return 1;
		
		case 137:
			return 2;
		
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
			return 0;
		
		case 147:
			return 1;
		
		case 144:
			return 4;
		
		case 145:
			return 16;
		
		case 146:
			return 32;
		
		default:
	}
	return 0;
}

int func_1162(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x4AF13BCD120BCDBC(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x557001354138B7FB(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2436169.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

