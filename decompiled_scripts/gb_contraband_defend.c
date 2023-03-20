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
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 2;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 8;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 8;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	float fLocal_87 = 0f;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	struct<270> Local_96 = { 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, -1, -1, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	struct<11> Local_366[32];
	int iLocal_719 = 0;
	int iLocal_720 = 0;
	int iLocal_721 = 0;
	int iLocal_722 = 0;
	int iLocal_723 = 0;
	int iLocal_724 = 0;
	int iLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	int iLocal_728 = 0;
	int iLocal_729 = 0;
	int iLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	struct<8> Local_738[10];
	var uLocal_819[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	int iLocal_833 = 0;
	var uLocal_834 = 0;
	int iLocal_835 = 0;
	char* sLocal_836 = NULL;
	var uLocal_837 = 16;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
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
	int iLocal_1002 = 0;
	int iLocal_1003 = 0;
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	fLocal_87 = ((0.05f + 0.275f) - 0.01f);
	fLocal_90 = -0.05f;
	fLocal_91 = 0.92f;
	fLocal_92 = 1.94f;
	fLocal_93 = 2.99f;
	fLocal_94 = 3.7f;
	iLocal_722 = -2;
	iLocal_723 = -1;
	sLocal_836 = "";
	if (unk_0x17CC0D5008835470() && func_848(unk_0xE0BDAFA1A39552D6(), 0, 1))
	{
		func_835(ScriptParam_0);
	}
	else
	{
		func_810();
	}
	while (true)
	{
		func_809();
		if (func_801())
		{
			func_810();
		}
		Global_1734817.f_2 = Local_96.f_267;
		Global_1734817.f_3 = Local_96.f_268;
		switch (func_800(unk_0x490BA5FDD7EE47A9()))
		{
			case 0:
				if (unk_0x63BA14E731F141F2("ALARM_BELL_02", 0, -1))
				{
					if (func_799() == 1)
					{
						if (func_798())
						{
							func_797();
							if (func_796())
							{
								func_781(169, 1, func_794());
								func_780();
								func_778();
							}
							else
							{
								func_781(169, 0, func_794());
							}
							Local_366[unk_0x490BA5FDD7EE47A9() /*11*/] = 1;
						}
					}
					else if (func_799() == 4)
					{
						Local_366[unk_0x490BA5FDD7EE47A9() /*11*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_775())
				{
					Local_366[unk_0x490BA5FDD7EE47A9() /*11*/] = 2;
				}
				if (func_799() == 1)
				{
					func_766();
					func_712();
					func_354();
					func_345();
					if (!func_344())
					{
						if (func_796() || func_342())
						{
							func_214(&(Global_1330244.f_527), &Global_1330244, 24, &(Global_1330244.f_1), &(Global_1330244.f_110), -1, 0);
						}
					}
					else
					{
						func_209();
					}
					func_165();
					func_164();
				}
				else if (func_799() == 4)
				{
					Local_366[unk_0x490BA5FDD7EE47A9() /*11*/] = 3;
				}
				func_158();
				break;
			
			case 3:
				func_157(&(Local_96.f_224));
				if (func_156(&(Local_96.f_224)))
				{
					Local_366[unk_0x490BA5FDD7EE47A9() /*11*/] = 4;
				}
				break;
			
			case 2:
				Local_366[unk_0x490BA5FDD7EE47A9() /*11*/] = 4;
			
			case 4:
				func_810();
				break;
		}
		if (unk_0x587E5997B76F47FE())
		{
			switch (func_799())
			{
				case 0:
					if (func_794() > -1)
					{
						func_154();
						func_152();
						func_151();
						func_148();
						if (func_43())
						{
							unk_0x5F55B369FD8D3271(&(Local_96.f_267), &(Local_96.f_268));
							func_37();
							Local_96.f_0 = 1;
							Local_96.f_218 = unk_0x490BA5FDD7EE47A9();
							Local_96.f_219 = unk_0xE0BDAFA1A39552D6();
							func_781(169, 1, func_794());
						}
					}
					break;
				
				case 1:
					func_29();
					func_148();
					func_22();
					func_4();
					if (func_2())
					{
						Local_96.f_0 = 4;
					}
					else if (func_1())
					{
						Local_96.f_0 = 4;
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
	if (Global_2464975.f_4685.f_13)
	{
		Global_2464975.f_4685.f_13 = 0;
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
	if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 2))
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
	switch (Local_96.f_214)
	{
		case 0:
			func_19();
			func_17();
			if (func_344())
			{
				func_15();
				func_5();
			}
			if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 1))
			{
				Local_96.f_214 = 2;
			}
			else if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 3))
			{
				Local_96.f_214 = 2;
			}
			else if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 4))
			{
				Local_96.f_214 = 2;
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
	
	if (Local_96.f_215 > -1)
	{
		return;
	}
	if (!func_12())
	{
		return;
	}
	if (!func_11(&(Local_96.f_228)))
	{
		if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 6))
		{
			if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 11))
			{
				if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 7))
				{
					func_10(&(Local_96.f_228), 0, 0);
				}
			}
		}
	}
	if (func_11(&(Local_96.f_228)))
	{
		if (Local_96.f_222 > 0)
		{
			if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 7))
			{
				func_9(&(Local_96.f_228));
				Local_96.f_222 = 255;
			}
			else
			{
				iVar0 = func_8();
				iVar1 = func_7();
				if (func_6(&(Local_96.f_228), iVar0, 0))
				{
					func_9(&(Local_96.f_228));
					Local_96.f_222 = (Local_96.f_222 - iVar1);
					if (Local_96.f_222 < 0)
					{
						Local_96.f_222 = 0;
					}
				}
			}
		}
		if (Local_96.f_222 <= 0)
		{
			if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 9))
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_1), 9);
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
	if (unk_0x17CC0D5008835470() && !bParam2)
	{
		if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(unk_0x1ADBAAC322D61F73(), *uParam0)) >= iParam1)
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
		if (unk_0x17CC0D5008835470() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x201D90648B2AE3CE();
			}
			else
			{
				*uParam0 = unk_0xED6DF4F701311AF8();
			}
		}
		else
		{
			*uParam0 = unk_0x1ADBAAC322D61F73();
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
	
	if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_96.f_2[0 /*10*/].f_2))
		{
			iVar0 = unk_0x4321FC7479614822(unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2), -1);
			if (iVar0 != 0)
			{
				if (!unk_0xCFC04A38F256EE06(iVar0))
				{
					if (!unk_0x4E75E5867592AC01(iVar0))
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
	if (unk_0xC7A68C5C107A1253(uParam0))
	{
		return !func_14(unk_0xA9B72300DA155F92(uParam0));
	}
	return 0;
}

int func_14(int iParam0)
{
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		if (unk_0xBDA1F5E8A36BFA07(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x1B6292EA51632C25(iParam0, 0))
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
	if (!func_344())
	{
		return;
	}
	if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 6))
	{
		if (!func_11(&(Local_96.f_234)))
		{
			func_10(&(Local_96.f_234), 0, 0);
		}
		if (func_6(&(Local_96.f_234), func_16(), 0))
		{
			unk_0xE27C8E42A97895CF(&(Local_96.f_1), 6);
		}
	}
}

int func_16()
{
	return 60000;
}

void func_17()
{
	if (!func_344())
	{
		return;
	}
	if (!func_11(&(Local_96.f_238)))
	{
		func_10(&(Local_96.f_238), 0, 0);
	}
	else if (func_6(&(Local_96.f_238), func_18(), 0))
	{
		unk_0xE27C8E42A97895CF(&(Local_96.f_1), 15);
	}
}

int func_18()
{
	return 1800000;
}

void func_19()
{
	if (func_344())
	{
		return;
	}
	if (!func_11(&(Local_96.f_236)))
	{
		func_10(&(Local_96.f_236), 0, 0);
		return;
	}
	else if (!func_6(&(Local_96.f_236), func_21(), 0))
	{
		return;
	}
	if (!func_11(&(Local_96.f_226)))
	{
		func_10(&(Local_96.f_226), 0, 0);
	}
	else if (func_6(&(Local_96.f_226), func_20(), 0))
	{
		unk_0xE27C8E42A97895CF(&(Local_96.f_1), 3);
	}
}

int func_20()
{
	return Global_262145.f_13768;
}

int func_21()
{
	return Local_96.f_223;
}

void func_22()
{
	int iVar0;
	int iVar1;
	
	if (func_28())
	{
		return;
	}
	if (unk_0x587E5997B76F47FE())
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			switch (Local_96.f_2[iVar1 /*10*/].f_9)
			{
				case 0:
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar1 /*10*/].f_1))
					{
						if (func_344())
						{
							Local_96.f_2[iVar1 /*10*/].f_9 = 8;
						}
						else
						{
							Local_96.f_2[iVar1 /*10*/].f_9 = 6;
						}
					}
					break;
				
				case 8:
					if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 6))
					{
						Local_96.f_2[iVar1 /*10*/].f_9 = 1;
					}
					else
					{
						func_25(iVar0, iVar1);
					}
					break;
				
				case 1:
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar1 /*10*/].f_1))
					{
						if (func_344())
						{
							func_25(iVar0, iVar1);
						}
					}
					break;
				
				case 2:
					break;
				
				case 3:
					if (func_344())
					{
						if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar1 /*10*/].f_1))
						{
							if (!func_24(Local_96.f_2[iVar1 /*10*/].f_1))
							{
								if (!unk_0x7A6749CADAC50206(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar1 /*10*/].f_1)))
								{
									Local_96.f_2[iVar1 /*10*/].f_9 = 7;
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
	if (func_344())
	{
		if (iParam0 == 1)
		{
			if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*10*/].f_1))
			{
				if (!func_24(Local_96.f_2[iParam0 /*10*/].f_1))
				{
					if (unk_0x7A6749CADAC50206(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*10*/].f_1)))
					{
						if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[0 /*10*/].f_1))
						{
							if (func_24(Local_96.f_2[0 /*10*/].f_1))
							{
								Local_96.f_2[iParam0 /*10*/].f_9 = 3;
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
	if (unk_0xC7A68C5C107A1253(uParam0))
	{
		return unk_0xCFC04A38F256EE06(unk_0x220B3465A4B1FBA5(uParam0));
	}
	return 1;
}

void func_25(int iParam0, int iParam1)
{
	if (!func_24(Local_96.f_2[iParam1 /*10*/].f_1))
	{
		if (unk_0x7A6749CADAC50206(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam1 /*10*/].f_1)))
		{
			if (unk_0x7DA173D4FD42F36B(Local_96.f_205, iParam1))
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_204), iParam1);
				iParam0 = unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_96.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_96.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else if (unk_0x7DA173D4FD42F36B(Local_96.f_206, iParam1))
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_204), iParam1);
				iParam0 = unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_96.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_96.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else if (unk_0x7DA173D4FD42F36B(Local_96.f_207, iParam1))
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_204), iParam1);
				iParam0 = unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_96.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_96.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else if (func_26())
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_204), iParam1);
				iParam0 = unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_96.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_96.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else
			{
				func_23(iParam1);
			}
		}
		else if (Local_96.f_2[iParam1 /*10*/].f_9 != 7)
		{
			Local_96.f_2[iParam1 /*10*/].f_9 = 7;
		}
	}
}

int func_26()
{
	if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[0 /*10*/].f_1))
	{
		if (func_24(Local_96.f_2[0 /*10*/].f_1))
		{
			return 1;
		}
	}
	if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[1 /*10*/].f_1))
	{
		if (func_24(Local_96.f_2[1 /*10*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	if (unk_0x0FDFEC0DD29106EE(*iParam0, 0))
	{
		if (unk_0x4321FC7479614822(unk_0xEB18AC70F95C0F8C(*iParam0), -1) == *iParam0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_28()
{
	return ((((((unk_0x7DA173D4FD42F36B(Local_96.f_1, 1) || unk_0x7DA173D4FD42F36B(Local_96.f_1, 3)) || unk_0x7DA173D4FD42F36B(Local_96.f_1, 4)) || unk_0x7DA173D4FD42F36B(Local_96.f_1, 5)) || unk_0x7DA173D4FD42F36B(Local_96.f_1, 8)) || unk_0x7DA173D4FD42F36B(Local_96.f_1, 9)) || unk_0x7DA173D4FD42F36B(Local_96.f_1, 15));
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
	if (Local_96.f_0 != 4)
	{
		iLocal_721 = 0;
		while (iLocal_721 < unk_0xC4A9F8E5EC59EB4F())
		{
			if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iLocal_721)))
			{
				iVar5 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iLocal_721));
				if (!func_34(iVar5, 0))
				{
					if (func_848(iVar5, 1, 1))
					{
					}
					func_33(iLocal_721);
					func_32(iLocal_721);
					if (func_344())
					{
						if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 8))
						{
							if (unk_0x7DA173D4FD42F36B(Local_366[iLocal_721 /*11*/].f_1, 9))
							{
								unk_0xE27C8E42A97895CF(&(Local_96.f_1), 8);
							}
						}
						if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 6))
						{
							if (unk_0x7DA173D4FD42F36B(Local_366[iLocal_721 /*11*/].f_1, 7))
							{
								unk_0xE27C8E42A97895CF(&(Local_96.f_1), 6);
							}
						}
						if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 11))
						{
							if (unk_0x7DA173D4FD42F36B(Local_366[iLocal_721 /*11*/].f_1, 10))
							{
								unk_0xE27C8E42A97895CF(&(Local_96.f_1), 11);
							}
						}
						if (!unk_0x7DA173D4FD42F36B(Local_96.f_217, iLocal_721))
						{
							if (unk_0x7DA173D4FD42F36B(Local_366[iLocal_721 /*11*/].f_1, 8))
							{
								unk_0xE27C8E42A97895CF(&(Local_96.f_217), iLocal_721);
							}
						}
						else if (!unk_0x7DA173D4FD42F36B(Local_366[iLocal_721 /*11*/].f_1, 8))
						{
							unk_0x99BCB15F954AF579(&(Local_96.f_217), iLocal_721);
						}
						if (iVar2 == -1)
						{
							if (unk_0x7DA173D4FD42F36B(Local_366[iLocal_721 /*11*/].f_1, 3))
							{
								iVar2 = iLocal_721;
							}
						}
						if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 4))
						{
							if (unk_0x7DA173D4FD42F36B(Local_366[iLocal_721 /*11*/].f_1, 2))
							{
								unk_0xE27C8E42A97895CF(&(Local_96.f_1), 4);
								Local_96.f_221 = Local_96.f_216;
							}
						}
						if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 17))
						{
							if (unk_0x7DA173D4FD42F36B(Local_366[iLocal_721 /*11*/].f_1, 15))
							{
								unk_0xE27C8E42A97895CF(&(Local_96.f_1), 17);
							}
						}
						if (bVar4)
						{
							if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 4))
							{
								if (!unk_0x7DA173D4FD42F36B(Local_366[iLocal_721 /*11*/].f_1, 14))
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
					else if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 13))
					{
						if (unk_0x7DA173D4FD42F36B(Local_366[iLocal_721 /*11*/].f_1, 11))
						{
							unk_0xE27C8E42A97895CF(&(Local_96.f_1), 13);
						}
					}
					if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 2))
					{
						if (!bVar3)
						{
							if (func_28())
							{
								if (!unk_0x7DA173D4FD42F36B(Local_366[iLocal_721 /*11*/].f_1, 4))
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
					if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 16))
					{
						if (unk_0x7DA173D4FD42F36B(Local_366[iLocal_721 /*11*/].f_1, 13))
						{
							unk_0xE27C8E42A97895CF(&(Local_96.f_1), 16);
						}
					}
				}
			}
			else if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 5))
			{
				if (Local_96.f_218 > -1)
				{
					if (iLocal_721 == Local_96.f_218)
					{
						unk_0xE27C8E42A97895CF(&(Local_96.f_1), 5);
					}
				}
			}
			iLocal_721++;
		}
		func_31();
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (unk_0x7DA173D4FD42F36B(Local_96.f_209, iVar1))
			{
				iVar0++;
			}
			iVar1++;
		}
		if (Local_96.f_213 != iVar0)
		{
			Local_96.f_213 = iVar0;
		}
		if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 1))
		{
			if (iVar0 >= func_30())
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_1), 1);
			}
		}
		if (func_344())
		{
			if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 7))
			{
				if (Local_96.f_217 != 0)
				{
					unk_0xE27C8E42A97895CF(&(Local_96.f_1), 7);
				}
			}
			else if (Local_96.f_217 == 0)
			{
				unk_0x99BCB15F954AF579(&(Local_96.f_1), 7);
			}
			if (!func_28())
			{
				if (Local_96.f_215 != iVar2)
				{
					Local_96.f_215 = iVar2;
					if (Local_96.f_215 > -1)
					{
						uVar6 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(Local_96.f_215));
						Local_96.f_216 = uVar6;
					}
					else
					{
						Local_96.f_216 = -1;
					}
				}
			}
			if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 18))
			{
				if (bVar4)
				{
					unk_0xE27C8E42A97895CF(&(Local_96.f_1), 18);
				}
			}
		}
		if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 2))
		{
			if (!bVar3)
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_1), 2);
			}
		}
	}
}

int func_30()
{
	switch (Local_96.f_197)
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
	
	if (func_344())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*10*/].f_1))
		{
			if (!unk_0x7DA173D4FD42F36B(Local_96.f_209, iVar0))
			{
				if (!func_11(&(Local_96.f_240[iVar0 /*2*/])))
				{
					if (func_24(Local_96.f_2[iVar0 /*10*/].f_1))
					{
						func_10(&(Local_96.f_240[iVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_6(&(Local_96.f_240[iVar0 /*2*/]), 10000, 0))
				{
					unk_0xE27C8E42A97895CF(&(Local_96.f_209), iVar0);
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
		if (!unk_0x7DA173D4FD42F36B(Local_96.f_205, iVar0))
		{
			if (unk_0x7DA173D4FD42F36B(Local_366[iParam0 /*11*/].f_5, iVar0))
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_205), iVar0);
			}
		}
		if (!unk_0x7DA173D4FD42F36B(Local_96.f_206, iVar0))
		{
			if (unk_0x7DA173D4FD42F36B(Local_366[iParam0 /*11*/].f_2, iVar0))
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_206), iVar0);
			}
		}
		if (!unk_0x7DA173D4FD42F36B(Local_96.f_208, iVar0))
		{
			if (unk_0x7DA173D4FD42F36B(Local_366[iParam0 /*11*/].f_3, iVar0))
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_208), iVar0);
			}
		}
		if (!unk_0x7DA173D4FD42F36B(Local_96.f_207, iVar0))
		{
			if (unk_0x7DA173D4FD42F36B(Local_366[iParam0 /*11*/].f_4, iVar0))
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_207), iVar0);
			}
		}
		if (!unk_0x7DA173D4FD42F36B(Local_96.f_209, iVar0))
		{
			if (unk_0x7DA173D4FD42F36B(Local_366[iParam0 /*11*/].f_6, iVar0))
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_209), iVar0);
			}
			else if (unk_0x7DA173D4FD42F36B(Local_366[iParam0 /*11*/].f_7, iVar0))
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_209), iVar0);
			}
			else if (unk_0x7DA173D4FD42F36B(Local_366[iParam0 /*11*/].f_8, iVar0))
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_209), iVar0);
			}
		}
		iVar0++;
	}
}

void func_33(int iParam0)
{
	int iVar0;
	
	if (func_344())
	{
		return;
	}
	if (!unk_0x7DA173D4FD42F36B(Local_96.f_210, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*10*/].f_2))
			{
				if (func_13(Local_96.f_2[iVar0 /*10*/].f_2))
				{
					unk_0xD81261A54FF973C2(unk_0xA9B72300DA155F92(Local_96.f_2[iVar0 /*10*/].f_2), unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iParam0)), 1);
					unk_0xE27C8E42A97895CF(&(Local_96.f_210), iParam0);
				}
			}
			else
			{
				unk_0xE27C8E42A97895CF(&(Local_96.f_210), iParam0);
			}
			iVar0++;
		}
	}
}

bool func_34(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		bVar0 = func_35(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587816[iParam0 /*444*/].f_195 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA27C9E8196C79D22(iParam0))
		{
			bVar0 = unk_0xF749B19A9F9B3DBF(iParam0) == 8;
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

int func_36()
{
	return Global_1312747;
}

void func_37()
{
	struct<3> Var0;
	
	Var0 = { func_40() };
	if (!func_39(Var0))
	{
		func_38(&(Local_96.f_269), Var0);
	}
}

void func_38(var uParam0, struct<3> Param1)
{
	if (!unk_0x108FF44A8C94AD53(*uParam0))
	{
		*uParam0 = unk_0x035075E23DB0FF43(Param1 - Vector(25f, 25f, 25f), Param1 + Vector(25f, 25f, 25f), 1f, 0.25f, 1, 1);
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
	return func_41(Local_96.f_197 + 1);
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
	
	if (func_344())
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
			if (!unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar0 /*10*/].f_1))
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
	if (!unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*10*/].f_1))
	{
		if (unk_0x98C9563B38ACD6D9(1))
		{
			if (func_60(iVar0))
			{
				if (func_59(Local_96.f_2[iParam0 /*10*/].f_5, 0f, 0f, 0f, 0))
				{
					if (func_47(iParam0, &Var1, &uVar4))
					{
						Local_96.f_2[iParam0 /*10*/].f_5 = { Var1 };
						Local_96.f_2[iParam0 /*10*/].f_8 = uVar4;
					}
				}
				else if (func_46(&(Local_96.f_2[iParam0 /*10*/].f_1), 22, iVar0, Local_96.f_2[iParam0 /*10*/].f_5, Local_96.f_2[iParam0 /*10*/].f_8, 1, 1, 1))
				{
					unk_0x1BBC7C4B775BFAAD(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*10*/].f_1), 1);
					unk_0xBA63517ADBC1E5E3(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*10*/].f_1), 1);
					unk_0xDEA5F99894469373(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*10*/].f_1), Global_1574253);
					unk_0x38DB61894D88F955(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*10*/].f_1), 1);
					if ((iParam0 % 2) == 0)
					{
						iVar6 = unk_0x6267527E254067CA(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*10*/].f_1));
						fVar7 = unk_0xBBDA792448DB5A89(iVar6);
						if (fVar5 != 0f)
						{
							fVar7 = (fVar7 * fVar5);
						}
						iVar6 = unk_0xF2DB717A73826179(fVar7);
						unk_0xF4CB4D4221C2D77E(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*10*/].f_1), iVar6);
						unk_0xEC337F42DFBAD859(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*10*/].f_1), iVar6);
						unk_0x58145D659542F3EC(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*10*/].f_1), 100);
						unk_0xF0683EF788D4342B(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*10*/].f_1), joaat("weapon_assaultrifle"), 9999999, 0, 1);
					}
					else
					{
						unk_0xF0683EF788D4342B(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*10*/].f_1), joaat("weapon_assaultrifle"), 9999999, 0, 1);
					}
					unk_0x6553935614875699(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*10*/].f_1), 281, 1);
					unk_0x2FD7042D8FE731D1(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*10*/].f_1), 1);
					unk_0x6553935614875699(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*10*/].f_1), 42, 1);
					unk_0x76C1E6E8DA089C11(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*10*/].f_1), 1);
					unk_0xD14E5ED9D5665519(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*10*/].f_1), 43, 1);
					unk_0xD14E5ED9D5665519(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*10*/].f_1), 44, 1);
					unk_0x61D7C8D2DB2887AA(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*10*/].f_1), 1);
					if (func_45(iParam0))
					{
						unk_0xD14E5ED9D5665519(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*10*/].f_1), 0, 0);
					}
					unk_0x6553935614875699(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*10*/].f_1), 146, 1);
					unk_0x7BCBC6B8F89A88C1(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*10*/].f_1), Local_96.f_2[iParam0 /*10*/].f_5, 7f, 0, 0);
					unk_0x97C5D2BB8E47131D(unk_0x220B3465A4B1FBA5(Local_96.f_2[iParam0 /*10*/].f_1), 1);
					unk_0xE27C8E42A97895CF(&(Local_96.f_203), iParam0);
				}
			}
		}
	}
	return 0;
}

int func_45(int iParam0)
{
	switch (Local_96.f_197)
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
	
	if (!unk_0x98C9563B38ACD6D9(1))
	{
		return 0;
	}
	iVar0 = unk_0xB500796AAD639F82(iParam1, iParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0x6943A7C6646EF9D3(iVar0);
	if (unk_0xC7A68C5C107A1253(*uParam0))
	{
		unk_0xE2098C4F0BF55A98(iVar0, iParam9);
		if (unk_0x9CE530DAF9F58C77(iVar0))
		{
			if (bParam7)
			{
				unk_0x578505FDD63EC643(*uParam0, 1);
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
	if (!func_59(Local_96.f_103[iVar0 /*5*/], 0f, 0f, 0f, 0))
	{
		if (!Local_96.f_103[iVar0 /*5*/].f_4)
		{
			if (func_48(Local_96.f_103[iVar0 /*5*/], 1f, 1065353216, 1065353216, 1084227584, 0, 0, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam1 = { Local_96.f_103[iVar0 /*5*/] };
				*uParam2 = Local_96.f_103[iVar0 /*5*/].f_3;
				Local_96.f_103[iVar0 /*5*/].f_4 = 1;
				return 1;
			}
			else
			{
				if (unk_0x7D7A247EA1176EFA(Local_96.f_103[iVar0 /*5*/], 1f))
				{
					bVar1 = true;
				}
				else if (unk_0x6B1F3F8F6B7B5B2C(Local_96.f_103[iVar0 /*5*/], Local_96.f_103[iVar0 /*5*/].f_1, (Local_96.f_103[iVar0 /*5*/].f_2 + 1f), 1f) || unk_0x6B1F3F8F6B7B5B2C(Local_96.f_103[iVar0 /*5*/], 1f))
				{
					bVar1 = true;
				}
				if (bVar1)
				{
					if (!unk_0x7DA173D4FD42F36B(Local_96.f_212, iVar0))
					{
						unk_0x79D9EC458879E8B8(Local_96.f_103[iVar0 /*5*/], 5f, 1, 0, 0, 1);
						unk_0xE27C8E42A97895CF(&(Local_96.f_212), iVar0);
					}
				}
			}
		}
	}
	return 0;
}

int func_48(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404993 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x7D7A247EA1176EFA(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0x6B1F3F8F6B7B5B2C(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0x6B1F3F8F6B7B5B2C(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0xE8689F4DBC5D8E1B(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404993++;
	if (bParam13)
	{
		if (unk_0xFED7CD2BD3B9B1DB(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404993++;
	if (fParam14 > 0f)
	{
		if (func_52(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404993++;
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
	Global_2404993++;
	return 1;
}

int func_49(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_848(unk_0xE0BDAFA1A39552D6(), 1, 1))
		{
			if (!unk_0x4FF34B5B023875E1())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0xA1F52EC3ECE1D42E(func_51(unk_0xE0BDAFA1A39552D6()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0x7515D29C901C4E76(Param0, fParam3))
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
		if (func_848(iVar1, 1, 1))
		{
			if (!func_34(iVar1, 0) && unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0xE0BDAFA1A39552D6()))
				{
					if ((func_50(iVar1) || !bParam10) && !Global_2418529[iVar1 /*313*/].f_255)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0xF749B19A9F9B3DBF(iVar1) == -1)
							{
								if (unk_0xF749B19A9F9B3DBF(iVar1) == unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0xF749B19A9F9B3DBF(iVar1) != unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()))) || unk_0xF749B19A9F9B3DBF(iVar1) == -1)
							{
								if (unk_0xA1F52EC3ECE1D42E(func_51(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x8E7415BED3DB6480(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0xF749B19A9F9B3DBF(iVar1) != iParam8 || unk_0xF749B19A9F9B3DBF(iVar1) == -1)
						{
							if (unk_0xA1F52EC3ECE1D42E(func_51(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x8E7415BED3DB6480(iVar1, Param0, fParam3))
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
	if (unk_0xD1BDCACEB9BCE7A2(unk_0x44A9253132E1DDE0(iParam0)) || Global_2418529[iParam0 /*313*/].f_241)
	{
		return 1;
	}
	return 0;
}

Vector3 func_51(int iParam0)
{
	return unk_0xF4745590D18D14B8(unk_0x44A9253132E1DDE0(iParam0), 0);
}

int func_52(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0xE0BDAFA1A39552D6() != iVar1) || iParam8 == 0)
		{
			if (func_848(iVar1, bParam4, bParam5))
			{
				if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1))
				{
					if (!bParam7 || (!unk_0xCFC04A38F256EE06(unk_0x44A9253132E1DDE0(iVar1)) && func_50(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) != unk_0xF749B19A9F9B3DBF(iVar1))) || unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1)
						{
							if (((unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1 && uParam9) && bParam6) && func_53(iVar1))
							{
							}
							else if (unk_0xC1EDB61CE0A4B94E(unk_0x44A9253132E1DDE0(iVar1)))
							{
								if (unk_0xA1F52EC3ECE1D42E(func_51(iVar1), Param0, 1) < fParam3)
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
	if (func_58(unk_0xE0BDAFA1A39552D6(), iParam0))
	{
		return 1;
	}
	Global_2460474 = { func_57(iParam0) };
	if (unk_0xC1CBB5CA861EE944(&Global_2460474))
	{
		return 1;
	}
	if (func_54(unk_0xE0BDAFA1A39552D6(), iParam0))
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
		return Global_1610705[iParam0 /*178*/].f_10;
	}
	return func_55();
}

struct<13> func_57(int iParam0)
{
	struct<13> Var0;
	
	unk_0x3C903E672223AE0B(iParam0, &Var0, 13);
	return Var0;
}

int func_58(int iParam0, int iParam1)
{
	if (unk_0x3D340893CA28EFFC())
	{
		Global_2460474 = { func_57(iParam0) };
		Global_2460487 = { func_57(iParam1) };
		if (unk_0x781D726C27D122E2(&Global_2460474))
		{
			if (unk_0x781D726C27D122E2(&Global_2460487))
			{
				unk_0xAFAED23A75339868(&Global_2460404, 35, &Global_2460474);
				unk_0xAFAED23A75339868(&Global_2460439, 35, &Global_2460487);
				if (Global_2460404 == Global_2460439)
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
	unk_0xBECC89ACB4E5D4ED(iParam0);
	return unk_0x5C9FE32E2FF37989(iParam0);
}

float func_61()
{
	return 2f;
}

int func_62()
{
	int iVar0;
	
	switch (Local_96.f_195)
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
	if (!unk_0xC3A7CFC6468E0BAE(Local_96.f_2[0 /*10*/].f_2))
	{
		return 0;
	}
	if (!unk_0xC3A7CFC6468E0BAE(Local_96.f_2[0 /*10*/].f_1))
	{
		return 0;
	}
	if (!unk_0xC3A7CFC6468E0BAE(Local_96.f_2[1 /*10*/].f_1))
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
	struct<24> Var6;
	struct<3> Var30;
	
	iVar0 = func_147();
	iVar1 = func_62();
	if (!unk_0xC3A7CFC6468E0BAE(Local_96.f_2[0 /*10*/].f_2))
	{
		if (unk_0x432BC9C0928AEEC4(1))
		{
			if (func_60(iVar0))
			{
				if (!func_59(Local_96.f_262, 0f, 0f, 0f, 0))
				{
					Var2 = { Local_96.f_262 };
					uVar5 = Local_96.f_265;
					if (!unk_0x7DA173D4FD42F36B(Local_96.f_211, 0))
					{
						unk_0x79D9EC458879E8B8(Var2, 5f, 1, 0, 0, 1);
						unk_0xE27C8E42A97895CF(&(Local_96.f_211), 0);
					}
					if (func_146(&(Local_96.f_2[0 /*10*/].f_2), iVar0, Var2, uVar5, 1, 1, 1, 0, 1, 1))
					{
						unk_0xB24BAAB22FF36FF1(unk_0x220B3465A4B1FBA5(Local_96.f_2[0 /*10*/].f_2), 1);
						func_145(unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2));
						unk_0x3013DF83C9A8EBF2(unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2), 0);
						unk_0x02AA51E28DECDB1B(unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2), 0, 0);
						unk_0x590C7568C3E71544(unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2), 1);
						unk_0xD7757C8C366A0BD9(unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2), 0);
						unk_0x494152A30775AD1B(unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2), 1);
						unk_0xBC70D0F4C7832614(unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2), 0.08f);
						unk_0xEC337F42DFBAD859(unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2), Global_262145.f_12713);
						unk_0xD53D4444E2EE35FA(unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2), 1);
						unk_0xAFD185F8D087942A(unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2), 1);
						unk_0x29C555E41A8B25BF(unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2), 1);
						unk_0xFAEE78290C84EDA6(unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2), 2, 2);
						unk_0xFAEE78290C84EDA6(unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2), 3, 2);
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
					Var6.f_0 = 0f;
					Var6.f_1 = 0;
					Var6.f_3 = 200f;
					Var6.f_4 = 1;
					Var6.f_5 = 1;
					Var6.f_10 = 1;
					Var6.f_2 = 1;
					Var30 = { func_143(Local_96.f_2[0 /*10*/].f_5, Local_96.f_2[0 /*10*/].f_8, 20f) };
					if (func_66(Local_96.f_2[0 /*10*/].f_5, Var30, iVar0, 0, &(Local_96.f_262), &(Local_96.f_2[0 /*10*/].f_8), &Var6))
					{
						Local_96.f_265 = Local_96.f_2[0 /*10*/].f_8;
					}
				}
			}
		}
	}
	if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[0 /*10*/].f_2))
	{
		if (!unk_0xC3A7CFC6468E0BAE(Local_96.f_2[0 /*10*/].f_1))
		{
			if (unk_0x98C9563B38ACD6D9(1))
			{
				if (func_60(iVar1))
				{
					if (func_65(&(Local_96.f_2[0 /*10*/].f_1), Local_96.f_2[0 /*10*/].f_2, 22, iVar1, -1, 1, 1, 1))
					{
						unk_0x1BBC7C4B775BFAAD(unk_0x220B3465A4B1FBA5(Local_96.f_2[0 /*10*/].f_1), 1);
						unk_0x7D86F9C4E675434D(unk_0x220B3465A4B1FBA5(Local_96.f_2[0 /*10*/].f_1), 1, 0);
						unk_0xBA63517ADBC1E5E3(unk_0x220B3465A4B1FBA5(Local_96.f_2[0 /*10*/].f_1), 1);
						unk_0xDEA5F99894469373(unk_0x220B3465A4B1FBA5(Local_96.f_2[0 /*10*/].f_1), Global_1574253);
						unk_0x6553935614875699(unk_0x220B3465A4B1FBA5(Local_96.f_2[0 /*10*/].f_1), 42, 1);
						unk_0xD14E5ED9D5665519(unk_0x220B3465A4B1FBA5(Local_96.f_2[0 /*10*/].f_1), 3, 0);
						unk_0xD14E5ED9D5665519(unk_0x220B3465A4B1FBA5(Local_96.f_2[0 /*10*/].f_1), 2, 1);
					}
				}
			}
		}
	}
	if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[0 /*10*/].f_1))
	{
		if (!unk_0xC3A7CFC6468E0BAE(Local_96.f_2[1 /*10*/].f_1))
		{
			if (unk_0x98C9563B38ACD6D9(1))
			{
				if (func_60(iVar1))
				{
					if (func_65(&(Local_96.f_2[1 /*10*/].f_1), Local_96.f_2[0 /*10*/].f_2, 22, iVar1, 0, 1, 1, 1))
					{
						unk_0x1BBC7C4B775BFAAD(unk_0x220B3465A4B1FBA5(Local_96.f_2[1 /*10*/].f_1), 1);
						unk_0x7D86F9C4E675434D(unk_0x220B3465A4B1FBA5(Local_96.f_2[1 /*10*/].f_1), 1, 0);
						unk_0xBA63517ADBC1E5E3(unk_0x220B3465A4B1FBA5(Local_96.f_2[1 /*10*/].f_1), 1);
						unk_0xDEA5F99894469373(unk_0x220B3465A4B1FBA5(Local_96.f_2[1 /*10*/].f_1), Global_1574253);
						unk_0x6553935614875699(unk_0x220B3465A4B1FBA5(Local_96.f_2[1 /*10*/].f_1), 42, 1);
						unk_0xD14E5ED9D5665519(unk_0x220B3465A4B1FBA5(Local_96.f_2[1 /*10*/].f_1), 3, 0);
						unk_0xD14E5ED9D5665519(unk_0x220B3465A4B1FBA5(Local_96.f_2[1 /*10*/].f_1), 2, 1);
						unk_0xD14E5ED9D5665519(unk_0x220B3465A4B1FBA5(Local_96.f_2[1 /*10*/].f_1), 5, 1);
						unk_0xF0683EF788D4342B(unk_0x220B3465A4B1FBA5(Local_96.f_2[1 /*10*/].f_1), joaat("weapon_microsmg"), 9999999, 0, 1);
						Local_96.f_2[1 /*10*/].f_2 = Local_96.f_2[0 /*10*/].f_2;
					}
				}
			}
		}
	}
	return 0;
}

int func_65(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x98C9563B38ACD6D9(1))
	{
		return 0;
	}
	if (!unk_0xC7A68C5C107A1253(uParam1))
	{
		return 0;
	}
	if (!unk_0x1B6292EA51632C25(unk_0xA9B72300DA155F92(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x6943A7C6646EF9D3(unk_0x064835636E49C34D(unk_0xA9B72300DA155F92(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xC7A68C5C107A1253(*uParam0))
	{
		unk_0xE2098C4F0BF55A98(unk_0x220B3465A4B1FBA5(*uParam0), iParam7);
		if (unk_0x9CE530DAF9F58C77(unk_0x220B3465A4B1FBA5(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x578505FDD63EC643(*uParam0, 1);
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
	struct<57> Var2;
	struct<57> Var59;
	
	bVar0 = false;
	if (uParam10->f_12)
	{
		if (uParam10->f_23)
		{
			uParam10->f_23 = 0;
		}
	}
	if (unk_0xAD79840A082ADD7F())
	{
		if (!unk_0xA4D01763320ADBAE() > 7 && !unk_0xA4D01763320ADBAE() == 5)
		{
			return 0;
		}
	}
	if (Global_2404993.f_485)
	{
		Global_2404993.f_485 = 0;
		return 0;
	}
	if (!func_142(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (!Global_2404993.f_559 == 0 && unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_564) < func_141(0))
	{
		if (!Global_2404993.f_611 == 0)
		{
			Global_2404993.f_611 = 0;
			func_140();
			func_139();
		}
		return 0;
	}
	if (!unk_0xAE832DCCE9CD3242() == Global_2404993.f_610)
	{
		if (!Global_2404993.f_611 == 0)
		{
			if (unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_614) < func_141(0))
			{
				return 0;
			}
			else
			{
				Global_2404993.f_611 = 0;
			}
		}
	}
	else
	{
		if (unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_612) > 30000)
		{
			Global_2404993.f_611 = 0;
		}
		if (!Global_2404993.f_611 == 0)
		{
			if (unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_614) > func_141(1))
			{
				Global_2404993.f_611 = 0;
			}
		}
	}
	if (uParam10->f_5)
	{
		if (func_133(Param0))
		{
			if (func_132(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2404993.f_611 == 0)
	{
		if (unk_0x2A488C176D52CCA5(Global_2404993.f_623, Param0) > 50f)
		{
			return 0;
		}
	}
	unk_0x4F9B9416E775992C((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2404993.f_611 == 0)
	{
		Global_2404993.f_617 = 0;
		Global_2404993.f_612 = unk_0xED6DF4F701311AF8();
		Global_2404993.f_610 = unk_0xAE832DCCE9CD3242();
		Global_2404993.f_614 = unk_0xED6DF4F701311AF8();
		Global_2404993.f_623 = { Param0 };
		Global_2404993.f_616 = unk_0xED6DF4F701311AF8();
		Global_2404993.f_611 = 2;
		func_131();
		func_140();
		func_127(Param0);
	}
	switch (Global_2404993.f_611)
	{
		case 2:
			if (unk_0x8A517457C85EB9F1((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2404993.f_618 = { Param0 };
				Global_2404993.f_621 = 0f;
				if (((uParam10->f_2 && func_48(Param0, 4f, 1f, 1f, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam10->f_6) && !func_124(Param0, *uParam9, iParam6, unk_0xE0BDAFA1A39552D6(), 0))
				{
					Global_2404993.f_618 = { Param0 };
					Global_2404993.f_621 = *uParam9;
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
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var2.f_38[iVar1 /*3*/] = { uParam10->f_13[iVar1 /*3*/] };
						Var2.f_45[iVar1] = uParam10->f_20[iVar1];
						iVar1++;
					}
					func_78(&(Global_2404993.f_618), &(Global_2404993.f_621), &Var2);
				}
				func_76(Global_2404993.f_618, Global_2404993.f_621, iParam6);
				Global_2404993.f_608 = 0;
				Global_2404993.f_609 = 0;
				Global_2404993.f_617++;
				Global_2404993.f_613 = unk_0xED6DF4F701311AF8();
				Global_2404993.f_612 = unk_0xED6DF4F701311AF8();
				Global_2404993.f_611 = 3;
			}
			break;
		
		case 3:
			if (Global_2404993.f_608)
			{
				if (Global_2404993.f_609)
				{
					if (uParam10->f_10 && !uParam10->f_9)
					{
						func_75(Global_2404993.f_618, 2f);
						Global_2404993.f_611 = 4;
						Global_2404993.f_615 = unk_0xED6DF4F701311AF8();
					}
					else
					{
						bVar0 = true;
					}
				}
				else
				{
					func_74(Global_2404993.f_618, 0);
					func_73();
				}
			}
			else if (unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_613) > 3000)
			{
				func_73();
			}
			break;
		
		case 4:
			if (uParam10->f_10 && !uParam10->f_9)
			{
				if (unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_613) < 10000)
				{
					if (unk_0x9F9AC3C5CA1ED211(Global_2404993.f_622))
					{
						if (unk_0x239BB224A66BA497(Global_2404993.f_622))
						{
							if (!unk_0xB57CE34D27FD10D0(Global_2404993.f_622))
							{
								if (func_72(Global_2404993.f_618, Global_2404993.f_621, iParam6, unk_0xE0BDAFA1A39552D6(), 0) || func_67(Global_2404993.f_618, Global_2404993.f_621, iParam6, 1, 0, 0, 0, 1, 0))
								{
									func_73();
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_73();
							}
						}
					}
					else
					{
						func_73();
					}
				}
				else
				{
					func_73();
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2404993.f_618 = { Param0 };
			Global_2404993.f_621 = 0f;
			Var59.f_6 = 1082130432;
			Var59.f_7 = 1176255488;
			Var59.f_8 = 1;
			Var59.f_10 = 1;
			Var59.f_13 = 1;
			Var59.f_15 = 1;
			Var59.f_16 = 1;
			Var59.f_31 = 1;
			Var59.f_34 = joaat("tailgater");
			Var59.f_38 = 2;
			Var59.f_45 = 2;
			Var59.f_49 = 1123024896;
			Var59.f_53 = 999;
			Var59.f_54 = 1176256410;
			Var59.f_55 = 1;
			Var59.f_56 = 1;
			Var59.f_9 = iParam7;
			Var59.f_3 = 3.5f;
			Var59.f_10 = uParam10->f_4;
			Var59.f_4 = *uParam10;
			Var59.f_12 = 1;
			Var59.f_13 = 0;
			Var59.f_15 = uParam10->f_5;
			Var59.f_11 = uParam10->f_6;
			Var59.f_6 = uParam10->f_7;
			Var59 = { Param3 };
			Var59.f_34 = iParam6;
			Var59.f_31 = uParam10->f_11;
			Var59.f_30 = 1;
			Var59.f_48 = uParam10->f_12;
			Var59.f_56 = uParam10->f_23;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var59.f_38[iVar1 /*3*/] = { uParam10->f_13[iVar1 /*3*/] };
				Var59.f_45[iVar1] = uParam10->f_20[iVar1];
				iVar1++;
			}
			func_78(&(Global_2404993.f_618), &(Global_2404993.f_621), &Var59);
			Global_2404993.f_611 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2404993.f_623 = { Param0 };
	Global_2404993.f_614 = unk_0xED6DF4F701311AF8();
	if (bVar0)
	{
		*uParam8 = { Global_2404993.f_618 };
		*uParam9 = Global_2404993.f_621;
		Global_2404993.f_611 = 0;
		func_131();
		func_140();
		func_139();
		return 1;
	}
	return 0;
}

int func_67(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && unk_0xE0BDAFA1A39552D6() != iVar1) || iParam9 == 0)
		{
			if (func_848(iVar1, bParam5, bParam6))
			{
				if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iVar1))
				{
					if (!bParam8 || (!unk_0xCFC04A38F256EE06(unk_0x44A9253132E1DDE0(iVar1)) && func_50(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) != unk_0xF749B19A9F9B3DBF(iVar1))) || unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1)
						{
							if (((unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1 && iParam10) && bParam7) && func_53(iVar1))
							{
							}
							else if (unk_0xC1EDB61CE0A4B94E(unk_0x44A9253132E1DDE0(iVar1)))
							{
								if (func_68(func_51(iVar1), Param0, fParam3, iParam4, 1036831949))
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

int func_68(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	float fVar10;
	float fVar11;
	struct<3> Var12;
	struct<3> Var15;
	
	if (unk_0x2A488C176D52CCA5(Param0, Param3) < func_71(iParam7, 1008981770))
	{
		Var0 = { 0f, 1f, 0f };
		func_70(&Var0, 0f, 0f, fParam6);
		Var0 = { Var0 / FtoV(unk_0x652D2EEEF1D3E62C(Var0)) };
		func_69(iParam7, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
		fVar9 = unk_0xF87C669B882D93C0((Var6.f_1 - Var3.f_1));
		fVar10 = unk_0xF87C669B882D93C0((Var6.f_0 - Var3.f_0));
		fVar11 = unk_0xF87C669B882D93C0((Var6.f_2 - Var3.f_2));
		Var12 = { Param3 + Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var12.f_2 = (Var12.f_2 - ((0.5f * fVar11) + fParam8));
		Var15 = { Param3 - Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var15.f_2 = (Var15.f_2 + ((0.5f * fVar11) + fParam8));
		if (unk_0x795DFAC3136F0C6E(Param0, Var12, Var15, fVar10, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_69(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (unk_0x1D8189836184FF10(iParam0))
	{
		unk_0x9CFA23DC65790425(iParam0, fParam1, fParam2);
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

void func_70(var uParam0, struct<3> Param1)
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

float func_71(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_69(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (unk_0x71D93B57D07F9804(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_72(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_848(iVar1, 0, 1) && func_848(iParam5, 0, 1))
			{
				if (Global_2413817.f_260[iVar0])
				{
					if (func_68(Global_2413817.f_130[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_68(func_51(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2413817.f_260[iVar0])
			{
				if (func_68(Global_2413817.f_130[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_848(iVar1, 0, 0))
			{
				if (unk_0xC1EDB61CE0A4B94E(unk_0x44A9253132E1DDE0(iVar1)))
				{
					if (func_68(func_51(iVar1), Param0, fParam3, iParam4, 1036831949))
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

void func_73()
{
	if (Global_2404993.f_617 < 20 && unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), Global_2404993.f_616) < 30000)
	{
		Global_2404993.f_611 = 2;
	}
	else
	{
		Global_2404993.f_611 = 5;
	}
}

void func_74(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	
	if (iParam3 < 10 && unk_0x652D2EEEF1D3E62C(Param0) > 0f)
	{
		Var0 = { Global_2404993.f_1721[iParam3 /*3*/] };
		Global_2404993.f_1721[iParam3 /*3*/] = { Param0 };
		func_74(Var0, iParam3 + 1);
	}
}

void func_75(struct<3> Param0, float fParam3)
{
	func_140();
	Global_2404993.f_622 = unk_0xAB960C7D827A8545(Param0 - Vector(fParam3, fParam3, fParam3), Param0 + Vector(fParam3, fParam3, fParam3));
}

void func_76(struct<3> Param0, var uParam3, int iParam4)
{
	struct<7> Var0;
	
	Var0.f_0 = 345;
	Var0.f_1 = unk_0xE0BDAFA1A39552D6();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam3;
	Var0.f_6 = iParam4;
	unk_0xCCAB9843EFA5C08A(1, &Var0, 7, func_77(1, 1));
}

var func_77(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x801C03D92F1C6755(iVar1);
		if (func_848(iVar2, 0, 0))
		{
			if (iVar2 != unk_0xE0BDAFA1A39552D6() || iParam0)
			{
				if (bParam1)
				{
					unk_0xE27C8E42A97895CF(&uVar0, iVar1);
				}
				else if (!func_34(iVar2, 0))
				{
					unk_0xE27C8E42A97895CF(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_78(var uParam0, var uParam1, var uParam2)
{
	if (Global_2404993.f_1155 > 0 && func_123(uParam0, uParam1, uParam2))
	{
	}
	else
	{
		func_79(uParam0, uParam1, uParam2);
	}
}

void func_79(var uParam0, var uParam1, var uParam2)
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
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar28;
	struct<3> Var29;
	float fVar32;
	bool bVar33;
	
	iVar0 = 0;
	if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_118(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
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
		if (func_113(uParam0, 1))
		{
		}
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
	Global_2409418.f_162 = 0;
	Global_2409418.f_163 = 0;
	Global_2409418.f_164 = -99;
	Global_2409418.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2409418[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2409418.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = unk_0xBC3E11E0840ACD52(*uParam0, iVar0, &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0x8E17092FCA923035(iVar8))
		{
			unk_0x56C3FF2C1012AC52(iVar8, &Var1);
			bVar12 = false;
			if (Global_2409418.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2409418.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x69B487ADC61FFEB7(iVar8)) || unk_0x78C3A1255CC06E1B(iVar8))
			{
				unk_0x226281136F155C6F(Var1, &uVar6, &uVar7);
				if (unk_0x2A488C176D52CCA5(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_107(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_104(Var1))
									{
										Var1 = { func_101(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51) };
										if (!func_100(Var1, 5f))
										{
											if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
											{
												if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
												{
													if (func_96(Var1, uParam2) || uParam2->f_33 >= 2)
													{
														if ((uParam2->f_48 && !func_113(&Var1, 0)) || uParam2->f_48 == 0)
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
																	if ((uParam2->f_12 && !func_95(Var1, fVar4, uParam2->f_34, unk_0xE0BDAFA1A39552D6(), 0, uParam2->f_56)) || !uParam2->f_12)
																	{
																		if (!uParam2->f_15 || !func_118(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																		{
																			if (uParam2->f_8)
																			{
																				iVar17 = uParam2->f_31;
																				bVar18 = true;
																				iVar19 = 1;
																				fVar20 = uParam2->f_49;
																				if (!uParam2->f_55)
																				{
																					iVar17 = 0;
																					bVar18 = false;
																					iVar19 = 0;
																					fVar20 = 1f;
																				}
																				else if (uParam2->f_17)
																				{
																					iVar17 = 0;
																					bVar18 = false;
																					iVar19 = 0;
																					if (uParam2->f_33 == 1)
																					{
																						fVar20 = (fVar20 * 0.375f);
																					}
																				}
																				else
																				{
																					bVar18 = true;
																					iVar19 = 1;
																					if (uParam2->f_28)
																					{
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																				}
																				iVar21 = 0;
																				if (uParam2->f_3 > 7f)
																				{
																					if (func_48(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																					{
																						iVar21 = 1;
																					}
																				}
																				else if (func_48(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_67(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																				{
																					iVar21 = 1;
																				}
																				if (iVar21 || uParam2->f_33 >= 2)
																				{
																					if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																					{
																						fVar23 = 0f;
																						if (uParam2->f_52)
																						{
																							iVar22 = func_87(Var1, uParam2->f_54, &fVar23);
																						}
																						if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																						{
																							if (uParam2->f_52)
																							{
																								if (iVar22 < uParam2->f_53)
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2409418.f_162)
																									{
																										Global_2409418[iVar16 /*3*/] = { 0f, 0f, 0f };
																										Global_2409418.f_121[iVar16] = 0f;
																										iVar16++;
																									}
																									Global_2409418.f_162 = 0;
																									uParam2->f_53 = iVar22;
																								}
																							}
																							if (uParam2->f_30)
																							{
																								if (Global_2409418.f_162 == 0)
																								{
																									Global_2409418[0 /*3*/] = { Var1 };
																									Global_2409418.f_121[0] = fVar4;
																								}
																								else
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2409418.f_162 + 1)
																									{
																										if (iVar16 < 40)
																										{
																											if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2409418[iVar16 /*3*/], uParam2->f_35))
																											{
																												func_86(Var1, fVar4, iVar16);
																												iVar16 = Global_2409418.f_162 + 1;
																											}
																										}
																										iVar16++;
																									}
																								}
																								Global_2409418.f_162++;
																								if (Global_2409418.f_162 >= 5)
																								{
																									if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2409418.f_162 == 40)
																									{
																										iVar0 = 100;
																									}
																								}
																							}
																							else
																							{
																								Global_2409418[Global_2409418.f_162 /*3*/] = { Var1 };
																								Global_2409418.f_121[Global_2409418.f_162] = fVar4;
																								Global_2409418.f_162++;
																								if (func_96(Var1, uParam2))
																								{
																									Global_2409418.f_163++;
																								}
																								if (Global_2409418.f_162 >= 10)
																								{
																									if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2409418.f_162 == 40)
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
				if (Global_2409418.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2409418[0 /*3*/] };
						*uParam1 = Global_2409418.f_121[0];
						return;
					}
					else
					{
						if (Global_2409418.f_163 > 0 && !Global_2409418.f_163 == Global_2409418.f_162)
						{
							func_84(0, uParam2);
						}
						iVar24 = unk_0xA6055C735E3DD877(0, Global_2409418.f_162);
						Var25 = { Global_2409418[0 /*3*/] };
						uVar28 = Global_2409418.f_121[0];
						Global_2409418[0 /*3*/] = { Global_2409418[iVar24 /*3*/] };
						Global_2409418.f_121[0] = Global_2409418.f_121[iVar24];
						Global_2409418[iVar24 /*3*/] = { Var25 };
						Global_2409418.f_121[iVar24] = uVar28;
						*uParam0 = { Global_2409418[0 /*3*/] };
						*uParam1 = Global_2409418.f_121[0];
						return;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						func_79(uParam0, uParam1, uParam2);
						return;
					}
					else
					{
						iVar0 = unk_0xA6055C735E3DD877((1 + iVar15), (40 + iVar15));
						unk_0x92162FD91928AD78(*uParam0, iVar0, &Var1, &fVar4, &iVar9, iVar5, fVar13, fVar14);
						Var1 = { func_101(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, iVar10, uParam2->f_11, uParam2->f_34, &bVar11, 0, 0, uParam2->f_51) };
						Var29 = { Var1 };
						fVar32 = fVar4;
						if (!uParam2->f_50)
						{
							bVar33 = true;
						}
						else
						{
							bVar33 = false;
						}
						if (func_118(uParam2->f_35, &Var29, &(uParam2->f_38), &(uParam2->f_45), bVar33, 1) || func_113(&Var29, bVar33))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var29 };
								*uParam1 = fVar32;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								func_79(uParam0, uParam1, uParam2);
								return;
							}
							else
							{
								*uParam0 = { Var29 };
								*uParam1 = fVar32;
								return;
							}
						}
						else
						{
							*uParam0 = { Var29 };
							*uParam1 = fVar32;
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
				func_79(uParam0, uParam1, uParam2);
				return;
			}
			else
			{
				func_80(&Global_1312061, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return;
			}
		}
		Global_2409418.f_164 = iVar8;
	}
}

void func_80(var uParam0, var uParam1, var uParam2, struct<3> Param3)
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
			if (!func_81(*(uParam0[iVar2 /*4*/]), 5f, unk_0xE0BDAFA1A39552D6(), 0, 0))
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

int func_81(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_83(Param0, fParam3, iParam4, iParam5, 0) || func_82(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_82(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (!Global_2413817.f_556[iVar0] == 0)
			{
				if (func_68(Param0, Global_2413817.f_426[iVar0 /*3*/], Global_2413817.f_523[iVar0], Global_2413817.f_556[iVar0], 1036831949))
				{
					if (func_848(iVar1, 0, 1) && func_848(iParam3, 0, 1))
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

int func_83(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			if (bParam6)
			{
				if (func_848(iVar1, 0, 1) && func_848(iParam4, 0, 1))
				{
					if (unk_0xF749B19A9F9B3DBF(iVar1) == unk_0xF749B19A9F9B3DBF(iParam4))
					{
						return 0;
					}
				}
			}
			if (func_848(iVar1, 0, 1) && func_848(iParam4, 0, 1))
			{
				if (Global_2413817.f_260[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2413817.f_130[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (unk_0x2A488C176D52CCA5(func_51(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (Global_2413817.f_260[iVar0])
			{
				if (unk_0x2A488C176D52CCA5(Global_2413817.f_130[iVar0 /*3*/], Param0) < fParam3)
				{
					return 1;
				}
			}
			else if (func_848(iVar1, 0, 1))
			{
				if (unk_0x2A488C176D52CCA5(func_51(iVar1), Param0) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_84(int iParam0, var uParam1)
{
	if (!func_96(Global_2409418[iParam0 /*3*/], uParam1))
	{
		Global_2409418.f_162 = (Global_2409418.f_162 - 1);
		func_85(iParam0);
		if (Global_2409418.f_162 > Global_2409418.f_163)
		{
			func_84(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_84(iParam0 + 1, uParam1);
	}
}

void func_85(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2409418[iParam0 /*3*/] = { Global_2409418[iParam0 + 1 /*3*/] };
			Global_2409418.f_121[iParam0] = Global_2409418.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_86(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2409418[iParam4 /*3*/] };
	uVar3 = Global_2409418.f_121[iParam4];
	Global_2409418[iParam4 /*3*/] = { Param0 };
	Global_2409418.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2409418.f_162 && iParam4 < 39)
	{
		if (unk_0x652D2EEEF1D3E62C(Var0) > 0f)
		{
			func_86(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_87(struct<3> Param0, float fParam3, float fParam4)
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
		if (func_88(iVar5))
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

int func_88(int iParam0)
{
	if (func_848(iParam0, 0, 1))
	{
		if (!func_93(iParam0))
		{
			if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iParam0))
			{
				if (!unk_0xF749B19A9F9B3DBF(iParam0) == unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()))
				{
					if (func_90(unk_0xE0BDAFA1A39552D6(), 1))
					{
						if (!func_89(unk_0xF749B19A9F9B3DBF(iParam0), unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0xF749B19A9F9B3DBF(iParam0) == -1 && unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6()) == -1)
				{
					if (!func_90(unk_0xE0BDAFA1A39552D6(), 1))
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

int func_89(int iParam0, int iParam1, int iParam2)
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
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 0);
				
				case 1:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 1);
				
				case 2:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 2);
				
				case 3:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 4);
				
				case 1:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 5);
				
				case 2:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 6);
				
				case 3:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 8);
				
				case 1:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 9);
				
				case 2:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 10);
				
				case 3:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 12);
				
				case 1:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 13);
				
				case 2:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 14);
				
				case 3:
					return unk_0x7DA173D4FD42F36B(Global_1617902.f_39, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_90(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_91(iParam0))
		{
			return 1;
		}
	}
	if (Global_1587816[iParam0 /*444*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_91(int iParam0)
{
	return func_92(iParam0);
}

bool func_92(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_13.f_1, 0);
}

int func_93(int iParam0)
{
	if (func_34(iParam0, 0))
	{
		return 1;
	}
	if (func_94())
	{
		if (iParam0 == unk_0xE0BDAFA1A39552D6())
		{
			return 1;
		}
	}
	if (unk_0x7DA173D4FD42F36B(Global_2418529[iParam0 /*313*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_94()
{
	return unk_0x7DA173D4FD42F36B(Global_2359301, 3);
}

int func_95(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_72(Param0, fParam3, iParam4, iParam5, iParam6) || func_124(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_96(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_99(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_97(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x795DFAC3136F0C6E(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_97(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_98(&Param3, &Param6);
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

void func_98(var uParam0, var uParam1)
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

bool func_99(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
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

int func_100(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	if (func_90(unk_0xE0BDAFA1A39552D6(), 1))
	{
		if (Global_1617902.f_38505 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617902.f_38505)
			{
				if (Global_1617902.f_38506[iVar0 /*58*/].f_7 != 0)
				{
					if (func_68(Param0, Global_1617902.f_38506[iVar0 /*58*/], Global_1617902.f_38506[iVar0 /*58*/].f_6, Global_1617902.f_38506[iVar0 /*58*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1617902.f_36286 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617902.f_36286)
			{
				if (Global_1617902.f_36289[iVar0 /*90*/].f_16 != 0)
				{
					if (func_68(Param0, Global_1617902.f_36289[iVar0 /*90*/], Global_1617902.f_36289[iVar0 /*90*/].f_3, Global_1617902.f_36289[iVar0 /*90*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1617902.f_49581 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1617902.f_49581)
			{
				if (Global_1617902.f_49585[iVar0 /*128*/].f_12 != 0)
				{
					if (func_68(Param0, Global_1617902.f_49585[iVar0 /*128*/], Global_1617902.f_49585[iVar0 /*128*/].f_3, Global_1617902.f_49585[iVar0 /*128*/].f_12, 0.5f))
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

Vector3 func_101(struct<3> Param0, float fParam3, int iParam4, bool bParam5, struct<3> Param6, int iParam9, bool bParam10, int iParam11, bool bParam12, int iParam13, bool bParam14, bool bParam15)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar8;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	bool bVar16;
	float fVar17;
	float fVar20;
	float fVar23;
	struct<3> Var24;
	struct<3> Var27;
	struct<3> Var30;
	
	if (bParam15)
	{
		if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
		{
			if (!func_102(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	unk_0x226281136F155C6F(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x6FD4A30EB9EA8649(Param0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
		if (iVar11 == iVar12)
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
			if ((iVar11 + iVar12) != iParam4)
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
			bVar15 = true;
		}
		else
		{
			bVar15 = false;
		}
		bVar16 = false;
		if (bVar15)
		{
			if (iVar11 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar11)
			{
				bVar16 = true;
			}
		}
		else if (iVar12 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar12)
		{
			bVar16 = true;
		}
		if (fVar13 < 0f)
		{
			fVar14 = 0f;
		}
		else
		{
			if (bVar15)
			{
				if (bVar16)
				{
					fVar14 = (4.2f * (unk_0xBBDA792448DB5A89(iVar11) * 0.5f));
				}
				else
				{
					fVar14 = (4.2f * unk_0xBBDA792448DB5A89(iVar11));
				}
				if (bVar16)
				{
					if (iVar11 > 2)
					{
						fVar14 = (fVar14 + (IntToFloat((iVar11 - 2)) * 1f));
					}
				}
				else if (iVar11 > 1)
				{
					fVar14 = (fVar14 + (IntToFloat((iVar11 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar16)
				{
					fVar14 = (4.2f * (unk_0xBBDA792448DB5A89(iVar12) * 0.5f));
				}
				else
				{
					fVar14 = (4.2f * unk_0xBBDA792448DB5A89(iVar12));
				}
				if (bVar16)
				{
					if (iVar12 > 2)
					{
						fVar14 = (fVar14 + (IntToFloat((iVar12 - 2)) * 1f));
					}
				}
				else if (iVar12 > 1)
				{
					fVar14 = (fVar14 + (IntToFloat((iVar12 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar14 = (fVar14 + (0.95f * fVar13));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar14 = (fVar14 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar14 = (fVar14 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar14 = (fVar14 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				func_69(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
				fVar23 = (fVar20 - fVar17);
				if (fVar23 > 1.8f)
				{
					fVar14 = (fVar14 + ((fVar23 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (unk_0x652D2EEEF1D3E62C(Param6) > 0f)
	{
		if (!func_102(Param0, *fParam3, Param6))
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
	if (fVar14 < 0f)
	{
		fVar14 = 0f;
	}
	Var0 = { unk_0x90B89006901451E8(Param0, *fParam3, fVar14, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0x003ADF07D87EC4B8(Param0, *fParam3, &Var24))
		{
			Var27 = { Var24 - Param0 };
			if (!iParam11 == 0)
			{
				Var30 = { Var27 / FtoV(unk_0x652D2EEEF1D3E62C(Var27)) };
				func_69(iParam11, &fVar17, &fVar20, 1086324736, 1080033280, 1077936128);
				fVar23 = (fVar20 - fVar17);
				Var30 = { Var30 * FtoV((fVar23 * 0.5f)) };
				Var27 = { Var27 - Var30 };
				Var24 = { Param0 + Var27 };
			}
			Var30 = { Var0 - Var24 };
			Var0 = { Var24 };
		}
	}
	return Var0;
}

int func_102(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_70(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_103(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_103(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_104(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_106(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2409153[iVar1])
	{
		if (func_105(Param0, &(Global_2408450[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2409153[8])
	{
		if (func_105(Param0, &(Global_2408450[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_105(struct<3> Param0, var uParam3)
{
	return unk_0x795DFAC3136F0C6E(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_106(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2408441[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2408441[1])
	{
		if (Param0.f_0 < Global_2408445[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2408441[2])
	{
		if (Param0.f_0 < Global_2408445[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2408445[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2408445[3])
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

int func_107(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_112(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = unk_0x83D8CBE6E641FA2A(0.01f, 360f);
			func_111(&Var1, Global_2404993.f_546, Global_2404993.f_549, 1036831949, 0, fVar4);
			if (func_108(Var1, &uVar0) || func_112(Var1))
			{
				Var1 = { *uParam0 };
				func_111(&Var1, Global_2404993.f_546, Global_2404993.f_549, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_108(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_110();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2404993.f_347[iVar0 /*12*/].f_9 == 1)
		{
			if (func_109(Param0, &(Global_2404993.f_347[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_109(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_99(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404993.f_1719) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_97(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0x795DFAC3136F0C6E(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0x795DFAC3136F0C6E(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0x795DFAC3136F0C6E(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0x795DFAC3136F0C6E(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_110()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2404993.f_347[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_111(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
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
			func_70(&Var0, 0f, 0f, unk_0x83D8CBE6E641FA2A(0f, 360f));
		}
		else
		{
			func_70(&Var0, 0f, 0f, fParam7);
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

int func_112(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2404993.f_549 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2404993.f_546);
		if (fVar0 < Global_2404993.f_549)
		{
			return 1;
		}
	}
	return 0;
}

bool func_113(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2404993.f_22.f_16)
	{
		switch (Global_2404993.f_22.f_15)
		{
			case 0:
				if (func_99(*uParam0, Global_2404993.f_22.f_8, Global_2404993.f_22.f_14, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_97(*uParam0, Global_2404993.f_22.f_8, Global_2404993.f_22.f_11, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0x795DFAC3136F0C6E(*uParam0, Global_2404993.f_22.f_8, Global_2404993.f_22.f_11, Global_2404993.f_22.f_14, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_114(*uParam0, Global_2404993.f_22.f_8, Global_2404993.f_22.f_11, Global_2404993.f_22.f_14, Global_2404993.f_22.f_15, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_114(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_111(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_117(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_115(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		unk_0xEBBD48CB0344518F(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_99(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_97(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!unk_0x795DFAC3136F0C6E(Var1, Param3, Param6, fParam9, 0, 1))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

void func_115(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
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
	Var6 = { func_116(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x9242631F40D1BDA7(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_103(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_103(Var6, Var3) >= 0f)
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
		Var6 = { func_116(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_116(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(unk_0x652D2EEEF1D3E62C(Var6)) };
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x9242631F40D1BDA7(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_103(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_103(Var6, Var29) >= 0f)
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

Vector3 func_116(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_117(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
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

int func_118(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_133(Param0))
	{
		if (func_122(uParam3, bParam6, 0, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_120(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_119(*uParam3, 1056964608))
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
				func_111(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
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

int func_119(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404993.f_1721[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_120(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_108(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_121(&Var2, &(Global_2404993.f_347[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_108(Var2, &uVar1) || func_112(Var2))
			{
				Var2 = { *uParam0 };
				func_121(&Var2, &(Global_2404993.f_347[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_121(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_114(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404993.f_1719) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_114(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_114(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_111(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404993.f_1719) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_117(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_115(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_122(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_2407465[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2407465[iVar0 /*17*/].f_16))
			{
				if (func_109(*uParam0, &(Global_2407465[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2407465[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2407465[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_121(&Var1, &(Global_2407465[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_122(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_121(&Var1, &(Global_2407465[iVar0 /*17*/]), 1036831949, 1, 0);
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

int func_123(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	int iVar13;
	struct<3> Var14;
	var uVar17;
	
	if (Global_2404993.f_1155 > 0)
	{
		iVar0 = 0;
		if (!unk_0x652D2EEEF1D3E62C(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_118(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_113(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		Global_2409418.f_162 = 0;
		Global_2409418.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2409418[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2409418.f_121[iVar5] = 0f;
			iVar5++;
		}
		iVar0 = 0;
		while (iVar0 < Global_2404993.f_1155)
		{
			Var1 = { Global_2404993.f_1156[iVar0 /*4*/] };
			fVar4 = Global_2404993.f_1156[iVar0 /*4*/].f_3;
			if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
			{
				if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
				{
					if ((uParam2->f_12 && !func_95(Var1, fVar4, uParam2->f_34, unk_0xE0BDAFA1A39552D6(), 0, uParam2->f_56)) || !uParam2->f_12)
					{
						if (!uParam2->f_15 || !func_118(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
						{
							if (uParam2->f_8)
							{
								iVar6 = uParam2->f_31;
								bVar7 = true;
								iVar8 = 1;
								fVar9 = uParam2->f_49;
								if (!uParam2->f_55)
								{
									iVar6 = 0;
									bVar7 = false;
									iVar8 = 0;
									fVar9 = 1f;
								}
								else if (uParam2->f_17)
								{
									iVar6 = 0;
									bVar7 = false;
									iVar8 = 0;
									if (uParam2->f_33 == 1)
									{
										fVar9 = (fVar9 * 0.375f);
									}
								}
								else
								{
									bVar7 = true;
									iVar8 = 1;
									if (uParam2->f_28)
									{
										if (uParam2->f_33 == 1)
										{
											fVar9 = (fVar9 * 0.375f);
										}
									}
								}
								bVar10 = false;
								if (uParam2->f_3 > 7f)
								{
									if (func_48(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, uParam2->f_3, 0, 0, 0, 0))
									{
										bVar10 = true;
									}
								}
								else if (func_48(Var1, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, 0, -1, 1, 0f, 0, 0, 0, 0) && !func_67(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
								{
									bVar10 = true;
								}
								if (bVar10)
								{
									if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
									{
										fVar12 = 0f;
										if (uParam2->f_52)
										{
											iVar11 = func_87(Var1, uParam2->f_54, &fVar12);
										}
										if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
										{
											if (uParam2->f_52)
											{
												if (iVar11 < uParam2->f_53)
												{
													iVar5 = 0;
													while (iVar5 < Global_2409418.f_162)
													{
														Global_2409418[iVar5 /*3*/] = { 0f, 0f, 0f };
														Global_2409418.f_121[iVar5] = 0f;
														iVar5++;
													}
													Global_2409418.f_162 = 0;
													uParam2->f_53 = iVar11;
												}
											}
											if (uParam2->f_30)
											{
												if (Global_2409418.f_162 == 0)
												{
													Global_2409418[0 /*3*/] = { Var1 };
													Global_2409418.f_121[0] = fVar4;
												}
												else
												{
													iVar5 = 0;
													while (iVar5 < Global_2409418.f_162 + 1)
													{
														if (iVar5 < 40)
														{
															if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2409418[iVar5 /*3*/], uParam2->f_35))
															{
																func_86(Var1, fVar4, iVar5);
																iVar5 = Global_2409418.f_162 + 1;
															}
														}
														iVar5++;
													}
												}
												Global_2409418.f_162++;
												if (Global_2409418.f_162 >= 5)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404993.f_1155;
													}
													else if (Global_2409418.f_162 == 40)
													{
														iVar0 = Global_2404993.f_1155;
													}
												}
											}
											else
											{
												Global_2409418[Global_2409418.f_162 /*3*/] = { Var1 };
												Global_2409418.f_121[Global_2409418.f_162] = fVar4;
												Global_2409418.f_162++;
												if (Global_2409418.f_162 >= 10)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404993.f_1155;
													}
													else if (Global_2409418.f_162 == 40)
													{
														iVar0 = Global_2404993.f_1155;
													}
												}
											}
										}
									}
									else
									{
										*uParam0 = { Var1 };
										*uParam1 = fVar4;
										return 1;
									}
								}
							}
							else
							{
								*uParam0 = { Var1 };
								*uParam1 = fVar4;
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
		if (Global_2409418.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2409418[0 /*3*/] };
				*uParam1 = Global_2409418.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2409418.f_163 > 0 && !Global_2409418.f_163 == Global_2409418.f_162)
				{
					func_84(0, uParam2);
				}
				iVar13 = unk_0xA6055C735E3DD877(0, Global_2409418.f_162);
				Var14 = { Global_2409418[0 /*3*/] };
				uVar17 = Global_2409418.f_121[0];
				Global_2409418[0 /*3*/] = { Global_2409418[iVar13 /*3*/] };
				Global_2409418.f_121[0] = Global_2409418.f_121[iVar13];
				Global_2409418[iVar13 /*3*/] = { Var14 };
				Global_2409418.f_121[iVar13] = uVar17;
				*uParam0 = { Global_2409418[0 /*3*/] };
				*uParam1 = Global_2409418.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return func_123(uParam0, uParam1, uParam2);
			}
			else
			{
				uParam2->f_33 = 0;
				func_79(uParam0, uParam1, uParam2);
				return 1;
			}
		}
	}
	return 0;
}

int func_124(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_126(Param0, iParam4, Global_2413817.f_426[iVar0 /*3*/], Global_2413817.f_556[iVar0]))
			{
				if (func_125(Param0, fParam3, iParam4, Global_2413817.f_426[iVar0 /*3*/], Global_2413817.f_523[iVar0], Global_2413817.f_556[iVar0], 0))
				{
					if (func_848(iVar1, 0, 1) && func_848(iParam5, 0, 1))
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

int func_125(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, bool bParam10)
{
	int iVar0;
	struct<3> Var1[4];
	struct<3> Var14;
	struct<3> Var17;
	float fVar20;
	float fVar21;
	float fVar22;
	struct<3> Var23;
	struct<3> Var26;
	
	if (func_68(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_69(iParam4, &Var14, &Var17, 1086324736, 1080033280, 1077936128);
	fVar20 = unk_0xF87C669B882D93C0((Var17.f_1 - Var14.f_1));
	fVar21 = unk_0xF87C669B882D93C0((Var17.f_0 - Var14.f_0));
	fVar22 = unk_0xF87C669B882D93C0((Var17.f_2 - Var14.f_2));
	Var23 = { 0f, (fVar20 * 0.5f), 0f };
	func_70(&Var23, 0f, 0f, fParam3);
	Var26 = { (fVar21 * 0.5f), 0f, 0f };
	func_70(&Var26, 0f, 0f, fParam3);
	Var1[0 /*3*/] = { Param0 + Var23 + Var26 };
	Var1[0 /*3*/].f_2 = (Var1[0 /*3*/].f_2 + (0.5f * fVar22));
	Var1[1 /*3*/] = { Param0 + Var23 - Var26 };
	Var1[1 /*3*/].f_2 = (Var1[1 /*3*/].f_2 + (0.5f * fVar22));
	Var1[2 /*3*/] = { Param0 - Var23 + Var26 };
	Var1[2 /*3*/].f_2 = (Var1[2 /*3*/].f_2 + (0.5f * fVar22));
	Var1[3 /*3*/] = { Param0 - Var23 - Var26 };
	Var1[3 /*3*/].f_2 = (Var1[3 /*3*/].f_2 + (0.5f * fVar22));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_68(Var1[iVar0 /*3*/], Param5, fParam8, iParam9, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam10)
	{
		if (func_125(Param5, fParam8, iParam9, Param0, fParam3, iParam4, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_126(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_71(iParam3, 1008981770);
	fVar1 = func_71(iParam7, 1008981770);
	fVar2 = unk_0x2A488C176D52CCA5(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

void func_127(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = func_130(Param0);
	if (iVar0 > -1 && !func_129())
	{
		func_139();
		switch (iVar0)
		{
			case 0:
				func_128(-1139.678f, -2694.165f, 12.949f, 283.4298f);
				func_128(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
				func_128(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
				func_128(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
				func_128(-1110.51f, -2693.236f, 12.9595f, 298.84f);
				func_128(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
				func_128(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
				func_128(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
				func_128(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
				break;
			
			case 1:
				func_128(-1411.731f, -533.6462f, 30.2703f, 215.116f);
				func_128(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
				func_128(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
				func_128(-1438.8f, -584.4678f, 29.595f, 118.1207f);
				break;
			
			case 2:
				func_128(-780.5905f, 292.8159f, 84.673f, 97.2697f);
				func_128(-788.6147f, 291.8073f, 84.72f, 97.7348f);
				func_128(-765.572f, 294.4459f, 84.5182f, 93.9327f);
				func_128(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
				break;
			
			case 3:
				func_128(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
				func_128(-647.239f, 49.2068f, 40.7135f, 355.9723f);
				func_128(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
				func_128(-610.5603f, 5.1258f, 41.2404f, 98.696f);
				break;
			
			case 4:
				func_128(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
				func_128(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
				func_128(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
				func_128(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
				break;
			
			case 5:
				func_128(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
				func_128(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
				func_128(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
				func_128(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
				break;
			
			case 6:
				func_128(-58.1347f, -573.486f, 36.5789f, 341.8442f);
				func_128(-64.227f, -590.2214f, 35.1654f, 338.972f);
				func_128(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
				func_128(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
				break;
			
			case 7:
				func_128(-232.1917f, -978.1431f, 28.166f, 160.2115f);
				func_128(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
				func_128(-251.993f, -998.3963f, 28.3747f, 249.3297f);
				func_128(-262.222f, -994.5226f, 29.23f, 249.4673f);
				break;
			
			case 8:
				func_128(151.624f, -1309.343f, 28.2023f, 243.201f);
				func_128(152.7886f, -1305.608f, 28.2023f, 243.9973f);
				func_128(145.8017f, -1287.19f, 28.312f, 120.6275f);
				func_128(142.8935f, -1282.286f, 28.3156f, 120.3024f);
				break;
			
			case 9:
				func_128(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
				func_128(-2322.187f, 277.638f, 168.4671f, 23.4249f);
				func_128(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
				func_128(-2314.396f, 290.9f, 168.4671f, 114.3983f);
				func_128(-2316.81f, 296.424f, 168.4671f, 113.6228f);
				func_128(-2318.572f, 299.2423f, 168.4671f, 293.83f);
				func_128(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
				func_128(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
				func_128(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
				func_128(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
				func_128(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
				func_128(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
				break;
			
			case 10:
				func_128(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
				func_128(-612.8933f, 692.116f, 148.7577f, 79.1005f);
				func_128(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
				func_128(-639.3558f, 696.9992f, 150.5134f, 77.481f);
				break;
			
			case 11:
				func_128(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
				func_128(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
				func_128(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
				func_128(-668.575f, 668.7567f, 149.4004f, 69.8844f);
				break;
			
			case 12:
				func_128(382.9244f, 443.8122f, 142.9934f, 78.3408f);
				func_128(391.2023f, 442.4812f, 142.5089f, 82.2125f);
				func_128(400.1477f, 441.0816f, 142.0776f, 83.4259f);
				func_128(414.2964f, 439.2628f, 141.5056f, 80.8689f);
				break;
			
			case 13:
				func_128(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
				func_128(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
				func_128(-1283.894f, 467.2136f, 95.4036f, 95.058f);
				func_128(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
				break;
			
			case 14:
				func_128(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
				func_128(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
				func_128(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
				func_128(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
				break;
			
			case 15:
				func_128(382.9244f, 443.8122f, 142.9934f, 78.3408f);
				func_128(391.2023f, 442.4812f, 142.5089f, 82.2125f);
				func_128(400.1477f, 441.0816f, 142.0776f, 83.4259f);
				func_128(414.2964f, 439.2628f, 141.5056f, 80.8689f);
				break;
			
			case 16:
				func_128(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
				func_128(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
				func_128(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
				func_128(-668.575f, 668.7567f, 149.4004f, 69.8844f);
				break;
			
			case 17:
				func_128(-668.575f, 668.7567f, 149.4004f, 69.8844f);
				func_128(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
				func_128(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
				func_128(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
				break;
			
			case 18:
				func_128(128.4334f, 578.7522f, 182.2934f, 106.5458f);
				func_128(97.7791f, 576.8907f, 181.5599f, 91.3539f);
				func_128(83.5896f, 576.4791f, 181.0832f, 89.7262f);
				func_128(69.9599f, 575.9902f, 180.5019f, 91.4926f);
				break;
			
			case 19:
				func_128(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
				func_128(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
				func_128(-931.6637f, 703.693f, 151.369f, 87.7447f);
				func_128(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
				break;
			
			case 20:
				func_128(-872.1293f, 698.7591f, 148.5084f, 339.673f);
				func_128(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
				func_128(-907.3458f, 695.8158f, 150.396f, 270.6491f);
				func_128(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
				break;
			
			case 21:
			case 25:
				func_128(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
				func_128(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
				func_128(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
				func_128(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
				func_128(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
				func_128(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
				func_128(-1611.769f, -601.588f, 31.2908f, 50.7362f);
				func_128(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
				break;
			
			case 22:
			case 26:
				func_128(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
				func_128(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
				func_128(-1346.236f, -523.9114f, 30.6f, 124.7302f);
				func_128(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
				func_128(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
				func_128(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
				func_128(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
				func_128(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
				break;
			
			case 23:
			case 27:
				func_128(-108.2604f, -613.6386f, 35.055f, 160.8063f);
				func_128(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
				func_128(-112.84f, -629.6357f, 35.0662f, 174.9843f);
				func_128(-98.7403f, -590.3209f, 35.075f, 139.7632f);
				func_128(-98.3748f, -612.642f, 35.137f, 161.1124f);
				func_128(-92.595f, -595.4065f, 35.1888f, 161.3083f);
				func_128(-104.4742f, -630.1472f, 35.1396f, 161.184f);
				func_128(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
				break;
			
			case 24:
			case 28:
				func_128(-59.684f, -779.4568f, 43.114f, 228.7591f);
				func_128(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
				func_128(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
				func_128(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
				func_128(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
				func_128(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
				func_128(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
				func_128(-9.239f, -773.0505f, 43.0788f, 318.0367f);
				break;
			}
	}
}

void func_128(struct<3> Param0, float fParam3)
{
	if (Global_2404993.f_1155 < 32)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2404993.f_1156[Global_2404993.f_1155 /*4*/] = { Param0 };
		Global_2404993.f_1156[Global_2404993.f_1155 /*4*/].f_3 = fParam3;
		Global_2404993.f_1155++;
	}
}

int func_129()
{
	if (unk_0x7DA173D4FD42F36B(Global_1617902.f_13, 0) && !Global_2435608.f_5852)
	{
		return 0;
	}
	return 0;
}

int func_130(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (Param0.f_2 <= 0f)
		{
			Param0.f_2 = ((Global_2409200[iVar0 /*7*/].f_2 + Global_2409200[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_105(Param0, &(Global_2409200[iVar0 /*7*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_131()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_2404993.f_1721[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_132(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Var1.f_2 <= 0f)
		{
			Var1.f_2 = ((Global_2409163[iVar0 /*7*/].f_2 + Global_2409163[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_105(Var1, &(Global_2409163[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_115(&Var1, Global_2409163[iVar0 /*7*/], Global_2409163[iVar0 /*7*/].f_3, Global_2409163[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_133(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2404993.f_484)
	{
		if (!func_137(unk_0xE0BDAFA1A39552D6(), 1))
		{
			return 1;
		}
		if (!func_136(Param0, 1008981770))
		{
			if (!func_122(&Param0, 0, 0, 0))
			{
				return 1;
			}
			else if (func_122(&Param0, 0, 1, 0))
			{
				return 1;
			}
		}
		else
		{
			iVar0 = func_135(Param0, 1008981770);
			if (iVar0 > -1)
			{
				Var1 = { func_134(&(Global_2404993.f_39[iVar0 /*12*/])) };
				if (!func_122(&Var1, 0, 0, 0))
				{
					if (!func_122(&Param0, 0, 0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_134(var uParam0)
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

int func_135(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404993.f_39[iVar0 /*12*/].f_9)
		{
			if (func_109(Param0, &(Global_2404993.f_39[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_136(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404993.f_39[iVar0 /*12*/].f_9)
		{
			if (func_109(Param0, &(Global_2404993.f_39[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_137(int iParam0, bool bParam1)
{
	if (Global_1312447 != 0)
	{
		return func_138(iParam0) != 0;
	}
	return func_90(iParam0, bParam1);
}

int func_138(int iParam0)
{
	if (func_848(iParam0, 0, 1))
	{
		return Global_2418529[iParam0 /*313*/].f_1;
	}
	return 0;
}

void func_139()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_2404993.f_1156[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2404993.f_1155 = 0;
}

void func_140()
{
	if (unk_0x9F9AC3C5CA1ED211(Global_2404993.f_622))
	{
		unk_0x154A3BB33869C26D(Global_2404993.f_622);
	}
	Global_2404993.f_622 = -1;
}

int func_141(bool bParam0)
{
	if (unk_0x4FF34B5B023875E1())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_142(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x7DA173D4FD42F36B(Global_2428549.f_1, iParam0);
	}
	return 1;
}

Vector3 func_143(struct<3> Param0, float fParam3, float fParam4)
{
	struct<3> Var0;
	
	Var0 = { 0f, 1f, 0f };
	func_144(Var0, fParam3);
	Var0.f_0 = (Var0.f_0 * fParam4);
	Var0.f_1 = (Var0.f_1 * fParam4);
	Var0.f_2 = (Var0.f_2 * fParam4);
	Var0 = { Var0 + Param0 };
	return Var0;
}

Vector3 func_144(struct<3> Param0, float fParam3)
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

void func_145(int iParam0)
{
	if (!func_344())
	{
		switch (Local_96.f_195)
		{
			case 0:
				unk_0x5B9D79C27A5B31DC(iParam0, 0);
				break;
			
			case 1:
				unk_0x5B9D79C27A5B31DC(iParam0, 2);
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		unk_0x22984397339DE6D1(iParam0, 15, 1);
		unk_0xACDED0164ADC06D7(iParam0, 0, 156);
	}
}

int func_146(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11)
{
	var uVar0;
	
	if (!unk_0x432BC9C0928AEEC4(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0x6C4DEE9BDB093DC6(Param2, 1f, 0, 0, 1, 1, 1);
	}
	uVar0 = unk_0x75409DE1FC985A9D(iParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xECD7D746642249EB(uVar0);
	if (unk_0xC7A68C5C107A1253(*uParam0))
	{
		unk_0xE2098C4F0BF55A98(uVar0, iParam10);
		if (unk_0x9CE530DAF9F58C77(iVar0))
		{
			if (bParam8)
			{
				unk_0x578505FDD63EC643(*uParam0, 1);
			}
			else
			{
				unk_0x578505FDD63EC643(*uParam0, 0);
			}
		}
		unk_0x194FCE8D467C221F(iVar0, iParam9);
		return 1;
	}
	return 0;
}

int func_147()
{
	int iVar0;
	
	switch (Local_96.f_195)
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

void func_148()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x587E5997B76F47FE())
	{
		return;
	}
	if (func_344())
	{
		return;
	}
	if (Local_96.f_209 != 0)
	{
		return;
	}
	if (!func_11(&(Local_96.f_230)))
	{
		func_10(&(Local_96.f_230), 0, 0);
	}
	iVar1 = func_150();
	if (!func_6(&(Local_96.f_230), 15000, 0))
	{
		iVar0 = 0;
		while (iVar0 < func_149())
		{
			iVar2 = 0;
			if (!unk_0xC3A7CFC6468E0BAE(Local_96.f_199[iVar0]))
			{
				if (unk_0x432BC9C0928AEEC4(1))
				{
					if (func_60(iVar1))
					{
						if (!func_59(Local_96.f_179[iVar0 /*5*/], 0f, 0f, 0f, 0))
						{
							if (func_48(Local_96.f_179[iVar0 /*5*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
							{
								if (!unk_0x7DA173D4FD42F36B(Local_96.f_211, iVar0))
								{
									unk_0x79D9EC458879E8B8(Local_96.f_179[iVar0 /*5*/], 5f, 1, 0, 0, 1);
									unk_0xE27C8E42A97895CF(&(Local_96.f_211), iVar0);
								}
								if (func_146(&(Local_96.f_199[iVar0]), iVar1, Local_96.f_179[iVar0 /*5*/], Local_96.f_179[iVar0 /*5*/].f_3, 1, 1, 1, 0, 1, 1))
								{
									unk_0x9CA85DDE7A48C0E4(unk_0xA9B72300DA155F92(Local_96.f_199[iVar0]), 1);
									func_145(unk_0xA9B72300DA155F92(Local_96.f_199[iVar0]));
								}
							}
							else
							{
								if (unk_0x7D7A247EA1176EFA(Local_96.f_179[iVar0 /*5*/], 6f))
								{
									iVar2 = 1;
								}
								else if (unk_0x6B1F3F8F6B7B5B2C(Local_96.f_179[iVar0 /*5*/], Local_96.f_179[iVar0 /*5*/].f_1, (Local_96.f_179[iVar0 /*5*/].f_2 + 1f), 1f) || unk_0x6B1F3F8F6B7B5B2C(Local_96.f_179[iVar0 /*5*/], 1f))
								{
									iVar2 = 1;
								}
								if (iVar2 == 1)
								{
									if (!unk_0x7DA173D4FD42F36B(Local_96.f_211, iVar0))
									{
										unk_0x79D9EC458879E8B8(Local_96.f_179[iVar0 /*5*/], 6f, 1, 0, 0, 1);
										unk_0xE27C8E42A97895CF(&(Local_96.f_211), iVar0);
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

int func_149()
{
	switch (Local_96.f_197)
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

int func_150()
{
	int iVar0;
	
	switch (Local_96.f_195)
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

void func_151()
{
	if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 12))
	{
		return;
	}
	switch (Local_96.f_197)
	{
		case 0:
			Local_96.f_261 = unk_0x33189531E55C7E33(31.1862f, -2594.657f, -50f, 68.0247f, -2551.956f, 50f, 1, 1, 1, 1);
			break;
		
		case 1:
			Local_96.f_261 = unk_0x33189531E55C7E33(-1109.664f, -1297.61f, -50f, -1074.653f, -1223.725f, 50f, 1, 1, 1, 1);
			break;
		
		case 2:
			Local_96.f_261 = unk_0x33189531E55C7E33(859.394f, -1082.382f, -50f, 914.3219f, -1008.526f, 50f, 1, 1, 1, 1);
			break;
		
		case 3:
			Local_96.f_261 = unk_0x33189531E55C7E33(240.8218f, -1997.975f, -50f, 243.8696f, -1933.894f, 50f, 1, 1, 1, 1);
			break;
		
		case 4:
			Local_96.f_261 = unk_0x33189531E55C7E33(-451.6602f, 171.9769f, -50f, -397.3188f, 222.9419f, 50f, 1, 1, 1, 1);
			break;
		
		case 5:
			Local_96.f_261 = unk_0x33189531E55C7E33(-1059.294f, -2044.054f, -50f, -1011.896f, -1884.057f, 140.3546f, 1, 1, 1, 1);
			break;
		
		case 6:
			Local_96.f_261 = unk_0x33189531E55C7E33(-1284.743f, -836.3273f, -50f, -1246.317f, -774.2995f, 50f, 1, 1, 1, 1);
			break;
		
		case 7:
			Local_96.f_261 = unk_0x33189531E55C7E33(-924.5807f, -2758.87f, -50.9462f, -789.014f, -2731.518f, 112.94f, 1, 1, 1, 1);
			break;
		
		case 8:
			Local_96.f_261 = unk_0x33189531E55C7E33(253.779f, -3039.713f, -50f, 308.8536f, -2986.068f, 50f, 1, 1, 1, 1);
			break;
		
		case 9:
			Local_96.f_261 = unk_0x33189531E55C7E33(1515.631f, -2191.266f, -50f, 1597.112f, -2059.625f, 150f, 1, 1, 1, 1);
			break;
		
		case 10:
			Local_96.f_261 = unk_0x33189531E55C7E33(-348.6945f, -2731.759f, -50f, -230.5551f, -2670.349f, 50.0003f, 1, 1, 1, 1);
			break;
		
		case 11:
			Local_96.f_261 = unk_0x33189531E55C7E33(464.591f, -669.6168f, -50f, 598.1423f, -499.8008f, 50f, 1, 1, 1, 1);
			break;
		
		case 12:
			Local_96.f_261 = unk_0x33189531E55C7E33(-564.2241f, -1836.488f, -50f, -498.0586f, -1768.227f, 50f, 1, 1, 1, 1);
			break;
		
		case 13:
			Local_96.f_261 = unk_0x33189531E55C7E33(-357.3719f, -1413.902f, -50f, -287.5592f, -1320.63f, 50f, 1, 1, 1, 1);
			break;
		
		case 14:
			Local_96.f_261 = unk_0x33189531E55C7E33(302.4282f, 333.8127f, -50f, 359.9608f, 361.1776f, 150f, 1, 1, 1, 1);
			break;
		
		case 15:
			Local_96.f_261 = unk_0x33189531E55C7E33(883.963f, -1600.535f, -50f, 980.0828f, -1532.579f, 50f, 1, 1, 1, 1);
			break;
		
		case 16:
			Local_96.f_261 = unk_0x33189531E55C7E33(691.8906f, -946.6288f, -50f, 792.8187f, -856.2645f, 50f, 1, 1, 1, 1);
			break;
		
		case 17:
			Local_96.f_261 = unk_0x33189531E55C7E33(931.0925f, -2203.321f, -50f, 1054.687f, -2104.696f, 50f, 1, 1, 1, 1);
			break;
		
		case 18:
			Local_96.f_261 = unk_0x33189531E55C7E33(909.5201f, -2548.777f, -50f, 1079.576f, -2480.221f, 50f, 1, 1, 1, 1);
			break;
		
		case 19:
			Local_96.f_261 = unk_0x33189531E55C7E33(-285.6858f, 169.6409f, -50f, -231.663f, 249.5953f, 150f, 1, 1, 1, 1);
			break;
		
		case 20:
			Local_96.f_261 = unk_0x33189531E55C7E33(490.689f, -2005.857f, -50f, 557.8708f, -1886.362f, 124.4746f, 1, 1, 1, 1);
			break;
		
		case 21:
			Local_96.f_261 = unk_0x33189531E55C7E33(88.2044f, -2235.053f, -50f, 199.7525f, -2183.485f, 50f, 1, 1, 1, 1);
			break;
	}
	unk_0xE27C8E42A97895CF(&(Local_96.f_1), 12);
}

void func_152()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (Local_96.f_223 == 0)
	{
		Var0 = { unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0) };
		Var3 = { func_153() };
		fVar6 = unk_0xA1F52EC3ECE1D42E(Var0, Var3, 0);
		if (fVar6 > 2500f)
		{
			Local_96.f_223 = Global_262145.f_13763;
		}
		else if (fVar6 > 2000f)
		{
			Local_96.f_223 = Global_262145.f_13764;
		}
		else if (fVar6 > 1500f)
		{
			Local_96.f_223 = Global_262145.f_13765;
		}
		else if (fVar6 > 1000f)
		{
			Local_96.f_223 = Global_262145.f_13766;
		}
		else
		{
			Local_96.f_223 = Global_262145.f_13767;
		}
	}
}

Vector3 func_153()
{
	switch (Local_96.f_197)
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

void func_154()
{
	int iVar0;
	
	if (!func_59(Local_96.f_103[0 /*5*/], 0f, 0f, 0f, 0))
	{
		return;
	}
	func_155();
	iVar0 = func_794();
	switch (iVar0)
	{
		case 99:
			switch (Local_96.f_197)
			{
				case 0:
					Local_96.f_2[0 /*10*/].f_5 = { 81.7918f, -2554.375f, 5f };
					Local_96.f_2[0 /*10*/].f_8 = 268.2536f;
					break;
				
				case 1:
					Local_96.f_2[0 /*10*/].f_5 = { -1065.693f, -1275.444f, 4.9818f };
					Local_96.f_2[0 /*10*/].f_8 = 120.7465f;
					break;
				
				case 2:
					Local_96.f_2[0 /*10*/].f_5 = { 905.6629f, -1003.347f, 33.8966f };
					Local_96.f_2[0 /*10*/].f_8 = 271.0984f;
					break;
				
				case 3:
					Local_96.f_2[0 /*10*/].f_5 = { 231.9853f, -1935.578f, 22.4437f };
					Local_96.f_2[0 /*10*/].f_8 = 322.2929f;
					break;
				
				case 4:
					Local_96.f_2[0 /*10*/].f_5 = { -399.3887f, 230.6774f, 82.492f };
					Local_96.f_2[0 /*10*/].f_8 = 270.2787f;
					break;
				
				case 5:
					Local_96.f_2[0 /*10*/].f_5 = { -1086.639f, -2005.462f, 12.0063f };
					Local_96.f_2[0 /*10*/].f_8 = 11.8952f;
					break;
				
				case 6:
					Local_96.f_2[0 /*10*/].f_5 = { -1244.429f, -884.493f, 11.165f };
					Local_96.f_2[0 /*10*/].f_8 = 126.962f;
					break;
				
				case 7:
					Local_96.f_2[0 /*10*/].f_5 = { -835.0118f, -2630.999f, 12.9249f };
					Local_96.f_2[0 /*10*/].f_8 = 328.7649f;
					break;
				
				case 8:
					Local_96.f_2[0 /*10*/].f_5 = { 296.2087f, -3013.953f, 4.9212f };
					Local_96.f_2[0 /*10*/].f_8 = 0.24f;
					break;
				
				case 9:
					Local_96.f_2[0 /*10*/].f_5 = { 1413.249f, -1954.944f, 64.6238f };
					Local_96.f_2[0 /*10*/].f_8 = 326.5977f;
					break;
				
				case 10:
					Local_96.f_2[0 /*10*/].f_5 = { -318.5519f, -2671.678f, 5.0502f };
					Local_96.f_2[0 /*10*/].f_8 = 318.3914f;
					break;
				
				case 11:
					Local_96.f_2[0 /*10*/].f_5 = { 504.8237f, -711.9799f, 23.9127f };
					Local_96.f_2[0 /*10*/].f_8 = 177.966f;
					break;
				
				case 12:
					Local_96.f_2[0 /*10*/].f_5 = { -524.3798f, -1770.964f, 20.3834f };
					Local_96.f_2[0 /*10*/].f_8 = 245.3696f;
					break;
				
				case 13:
					Local_96.f_2[0 /*10*/].f_5 = { -286.5591f, -1359.238f, 30.3043f };
					Local_96.f_2[0 /*10*/].f_8 = 180.1492f;
					break;
				
				case 14:
					Local_96.f_2[0 /*10*/].f_5 = { 343.9299f, 321.1165f, 103.4987f };
					Local_96.f_2[0 /*10*/].f_8 = 75.8829f;
					break;
				
				case 15:
					Local_96.f_2[0 /*10*/].f_5 = { 974.6287f, -1540.746f, 29.4172f };
					Local_96.f_2[0 /*10*/].f_8 = 4.069f;
					break;
				
				case 16:
					Local_96.f_2[0 /*10*/].f_5 = { 777.0914f, -937.4927f, 24.7044f };
					Local_96.f_2[0 /*10*/].f_8 = 186.7581f;
					break;
				
				case 17:
					Local_96.f_2[0 /*10*/].f_5 = { 997.4642f, -2087.759f, 30.2136f };
					Local_96.f_2[0 /*10*/].f_8 = 275.8696f;
					break;
				
				case 18:
					Local_96.f_2[0 /*10*/].f_5 = { 987.9297f, -2461.676f, 27.3773f };
					Local_96.f_2[0 /*10*/].f_8 = 85.6201f;
					break;
				
				case 19:
					Local_96.f_2[0 /*10*/].f_5 = { -227.6549f, 188.3366f, 78.676f };
					Local_96.f_2[0 /*10*/].f_8 = 178.634f;
					break;
				
				case 20:
					Local_96.f_2[0 /*10*/].f_5 = { 460.4135f, -1932.892f, 23.6765f };
					Local_96.f_2[0 /*10*/].f_8 = 295.2699f;
					break;
				
				case 21:
					Local_96.f_2[0 /*10*/].f_5 = { 241.4945f, -2093.446f, 16.3114f };
					Local_96.f_2[0 /*10*/].f_8 = 225.7471f;
					break;
				
				default:
					Local_96.f_2[0 /*10*/].f_5 = { 974.6287f, -1540.746f, 29.4172f };
					Local_96.f_2[0 /*10*/].f_8 = 4.069f;
			}
			break;
		
		case 0:
			switch (Local_96.f_197)
			{
				case 0:
					Local_96.f_103[0 /*5*/] = { 48.6581f, -2562.141f, 5f };
					Local_96.f_103[0 /*5*/].f_3 = 18.2728f;
					Local_96.f_103[1 /*5*/] = { 51.6031f, -2571.123f, 5.0046f };
					Local_96.f_103[1 /*5*/].f_3 = 345.3663f;
					Local_96.f_103[2 /*5*/] = { 56.6838f, -2564.757f, 5.0641f };
					Local_96.f_103[2 /*5*/].f_3 = 55.4785f;
					Local_96.f_103[3 /*5*/] = { 62.9447f, -2585.068f, 5.0046f };
					Local_96.f_103[3 /*5*/].f_3 = 271.0223f;
					Local_96.f_103[4 /*5*/] = { 65.0669f, -2563.442f, 5f };
					Local_96.f_103[4 /*5*/].f_3 = 316.6382f;
					Local_96.f_103[5 /*5*/] = { 47.7942f, -2575.388f, 9.0407f };
					Local_96.f_103[5 /*5*/].f_3 = 37.4409f;
					Local_96.f_179[0 /*5*/] = { 61.478f, -2560.506f, 5f };
					Local_96.f_179[0 /*5*/].f_3 = 238.6826f;
					Local_96.f_179[1 /*5*/] = { 49.6015f, -2564.766f, 5.0046f };
					Local_96.f_179[1 /*5*/].f_3 = 154.2891f;
					break;
				
				case 1:
					Local_96.f_103[0 /*5*/] = { -1078.744f, -1271.7f, 9.5625f };
					Local_96.f_103[0 /*5*/].f_3 = 274.4253f;
					Local_96.f_103[1 /*5*/] = { -1087.233f, -1257.104f, 9.5625f };
					Local_96.f_103[1 /*5*/].f_3 = 354.2453f;
					Local_96.f_103[2 /*5*/] = { -1072.724f, -1267.841f, 4.9577f };
					Local_96.f_103[2 /*5*/].f_3 = 193.2412f;
					Local_96.f_103[3 /*5*/] = { -1085.99f, -1254.825f, 4.431f };
					Local_96.f_103[3 /*5*/].f_3 = 304.0791f;
					Local_96.f_103[4 /*5*/] = { -1081.952f, -1259.029f, 4.5607f };
					Local_96.f_103[4 /*5*/].f_3 = 251.1138f;
					Local_96.f_103[5 /*5*/] = { -1063.538f, -1257.842f, 5.0206f };
					Local_96.f_103[5 /*5*/].f_3 = 31.8546f;
					Local_96.f_179[0 /*5*/] = { -1063.267f, -1260.492f, 5.0582f };
					Local_96.f_179[0 /*5*/].f_3 = 134.6062f;
					Local_96.f_179[1 /*5*/] = { -1080.071f, -1255.526f, 4.4927f };
					Local_96.f_179[1 /*5*/].f_3 = 282.3716f;
					break;
				
				case 2:
					Local_96.f_103[0 /*5*/] = { 902.5689f, -1021.511f, 33.9664f };
					Local_96.f_103[0 /*5*/].f_3 = 337.3475f;
					Local_96.f_103[1 /*5*/] = { 894.0451f, -1020.726f, 33.9665f };
					Local_96.f_103[1 /*5*/].f_3 = 303.745f;
					Local_96.f_103[2 /*5*/] = { 901.3245f, -1033.82f, 33.9661f };
					Local_96.f_103[2 /*5*/].f_3 = 343.5762f;
					Local_96.f_103[3 /*5*/] = { 909.4354f, -1035.19f, 33.9662f };
					Local_96.f_103[3 /*5*/].f_3 = 175.276f;
					Local_96.f_103[4 /*5*/] = { 900.9361f, -1044.508f, 38.9808f };
					Local_96.f_103[4 /*5*/].f_3 = 150.7164f;
					Local_96.f_103[5 /*5*/] = { 894.3841f, -1032.681f, 38.9808f };
					Local_96.f_103[5 /*5*/].f_3 = 327.9728f;
					Local_96.f_179[0 /*5*/] = { 900.9302f, -1019.053f, 33.967f };
					Local_96.f_179[0 /*5*/].f_3 = 294.1935f;
					Local_96.f_179[1 /*5*/] = { 905.7681f, -1034.471f, 33.9661f };
					Local_96.f_179[1 /*5*/].f_3 = 222.0787f;
					break;
				
				case 3:
					Local_96.f_103[0 /*5*/] = { 241.6933f, -1941.756f, 22.6063f };
					Local_96.f_103[0 /*5*/].f_3 = 54.0685f;
					Local_96.f_103[1 /*5*/] = { 247.0794f, -1955.052f, 22.2033f };
					Local_96.f_103[1 /*5*/].f_3 = 350.0075f;
					Local_96.f_103[2 /*5*/] = { 260.179f, -1959.165f, 22.0967f };
					Local_96.f_103[2 /*5*/].f_3 = 284.5439f;
					Local_96.f_103[3 /*5*/] = { 258.183f, -1967.262f, 21.487f };
					Local_96.f_103[3 /*5*/].f_3 = 173.9707f;
					Local_96.f_103[4 /*5*/] = { 248.7987f, -1959.507f, 27.2402f };
					Local_96.f_103[4 /*5*/].f_3 = 231.9236f;
					Local_96.f_103[5 /*5*/] = { 233.8911f, -1946.98f, 27.2402f };
					Local_96.f_103[5 /*5*/].f_3 = 342.0352f;
					Local_96.f_179[0 /*5*/] = { 260.5989f, -1964.07f, 21.7532f };
					Local_96.f_179[0 /*5*/].f_3 = 147.0433f;
					Local_96.f_179[1 /*5*/] = { 241.5964f, -1944.464f, 22.3678f };
					Local_96.f_179[1 /*5*/].f_3 = 73.2698f;
					break;
				
				case 4:
					Local_96.f_103[0 /*5*/] = { -405.6343f, 182.3138f, 79.2232f };
					Local_96.f_103[0 /*5*/].f_3 = 306.9303f;
					Local_96.f_103[1 /*5*/] = { -420.0244f, 184.8413f, 79.6851f };
					Local_96.f_103[1 /*5*/].f_3 = 228.321f;
					Local_96.f_103[2 /*5*/] = { -428.4716f, 185.8607f, 79.7578f };
					Local_96.f_103[2 /*5*/].f_3 = 44.5389f;
					Local_96.f_103[3 /*5*/] = { -435.6789f, 179.3023f, 74.3213f };
					Local_96.f_103[3 /*5*/].f_3 = 85.0906f;
					Local_96.f_103[4 /*5*/] = { -399.305f, 190.302f, 80.5987f };
					Local_96.f_103[4 /*5*/].f_3 = 85.1506f;
					Local_96.f_103[5 /*5*/] = { -438.713f, 183.3993f, 74.2764f };
					Local_96.f_103[5 /*5*/].f_3 = 351.0685f;
					Local_96.f_179[0 /*5*/] = { -436.8526f, 183.3829f, 74.3109f };
					Local_96.f_179[0 /*5*/].f_3 = 7.2644f;
					Local_96.f_179[1 /*5*/] = { -405.3793f, 187.1801f, 79.9864f };
					Local_96.f_179[1 /*5*/].f_3 = 354.7918f;
					break;
				
				case 5:
					Local_96.f_103[0 /*5*/] = { -1069.206f, -2014.558f, 12.1616f };
					Local_96.f_103[0 /*5*/].f_3 = 201.0558f;
					Local_96.f_103[1 /*5*/] = { -1063.069f, -2014.715f, 12.1616f };
					Local_96.f_103[1 /*5*/].f_3 = 141.4469f;
					Local_96.f_103[2 /*5*/] = { -1067.427f, -2023.773f, 12.2027f };
					Local_96.f_103[2 /*5*/].f_3 = 197.023f;
					Local_96.f_103[3 /*5*/] = { -1060.439f, -2024.766f, 12.1616f };
					Local_96.f_103[3 /*5*/].f_3 = 152.4942f;
					Local_96.f_103[4 /*5*/] = { -1052.16f, -2022.239f, 12.1616f };
					Local_96.f_103[4 /*5*/].f_3 = 146.7409f;
					Local_96.f_103[5 /*5*/] = { -1051.755f, -2029.141f, 12.1616f };
					Local_96.f_103[5 /*5*/].f_3 = 82.1706f;
					Local_96.f_103[6 /*5*/] = { -1073.135f, -2011.029f, 12.6172f };
					Local_96.f_103[6 /*5*/].f_3 = 214.1918f;
					Local_96.f_103[7 /*5*/] = { -1071.441f, -2002.931f, 14.7905f };
					Local_96.f_103[7 /*5*/].f_3 = 187.3056f;
					Local_96.f_179[0 /*5*/] = { -1052.354f, -2025.611f, 12.1616f };
					Local_96.f_179[0 /*5*/].f_3 = 358.8676f;
					Local_96.f_179[1 /*5*/] = { -1066.611f, -2016.299f, 12.1616f };
					Local_96.f_179[1 /*5*/].f_3 = 280.333f;
					Local_96.f_179[2 /*5*/] = { -1063.965f, -2024.623f, 12.1831f };
					Local_96.f_179[2 /*5*/].f_3 = 269.67f;
					break;
				
				case 6:
					Local_96.f_103[0 /*5*/] = { -1280.076f, -805.8421f, 16.508f };
					Local_96.f_103[0 /*5*/].f_3 = 57.9953f;
					Local_96.f_103[1 /*5*/] = { -1286.231f, -811.6383f, 16.4521f };
					Local_96.f_103[1 /*5*/].f_3 = 35.4979f;
					Local_96.f_103[2 /*5*/] = { -1277.371f, -821.9402f, 16.1003f };
					Local_96.f_103[2 /*5*/].f_3 = 239.3392f;
					Local_96.f_103[3 /*5*/] = { -1267.488f, -824.3138f, 16.0992f };
					Local_96.f_103[3 /*5*/].f_3 = 144.6389f;
					Local_96.f_103[4 /*5*/] = { -1262.181f, -824.9617f, 16.0996f };
					Local_96.f_103[4 /*5*/].f_3 = 39.795f;
					Local_96.f_103[5 /*5*/] = { -1287.23f, -791.7753f, 16.5858f };
					Local_96.f_103[5 /*5*/].f_3 = 140.3937f;
					Local_96.f_179[0 /*5*/] = { -1273.327f, -823.6479f, 16.0992f };
					Local_96.f_179[0 /*5*/].f_3 = 254.419f;
					Local_96.f_179[1 /*5*/] = { -1285.171f, -807.566f, 16.5295f };
					Local_96.f_179[1 /*5*/].f_3 = 146.8347f;
					break;
				
				case 7:
					Local_96.f_103[0 /*5*/] = { -886.5272f, -2713.691f, 12.8285f };
					Local_96.f_103[0 /*5*/].f_3 = 330.9706f;
					Local_96.f_103[1 /*5*/] = { -876.2014f, -2718.661f, 12.9446f };
					Local_96.f_103[1 /*5*/].f_3 = 335.853f;
					Local_96.f_103[2 /*5*/] = { -882.2947f, -2732.553f, 12.8285f };
					Local_96.f_103[2 /*5*/].f_3 = 33.564f;
					Local_96.f_103[3 /*5*/] = { -884.4581f, -2724.486f, 12.8285f };
					Local_96.f_103[3 /*5*/].f_3 = 22.4268f;
					Local_96.f_103[4 /*5*/] = { -887.4197f, -2737.267f, 12.8285f };
					Local_96.f_103[4 /*5*/].f_3 = 356.0724f;
					Local_96.f_103[5 /*5*/] = { -894.7762f, -2736.815f, 12.8285f };
					Local_96.f_103[5 /*5*/].f_3 = 164.3784f;
					Local_96.f_103[6 /*5*/] = { -897.211f, -2750.013f, 12.9445f };
					Local_96.f_103[6 /*5*/].f_3 = 321.2128f;
					Local_96.f_103[7 /*5*/] = { -882.6691f, -2745.853f, 12.9362f };
					Local_96.f_103[7 /*5*/].f_3 = 64.3587f;
					Local_96.f_103[8 /*5*/] = { -907.6017f, -2749.353f, 12.9445f };
					Local_96.f_103[8 /*5*/].f_3 = 335.7514f;
					Local_96.f_103[9 /*5*/] = { -869.9126f, -2715.025f, 12.9446f };
					Local_96.f_103[9 /*5*/].f_3 = 8.2036f;
					Local_96.f_179[0 /*5*/] = { -882.8745f, -2713.687f, 12.8285f };
					Local_96.f_179[0 /*5*/].f_3 = 239.8798f;
					Local_96.f_179[1 /*5*/] = { -883.874f, -2728.786f, 12.8285f };
					Local_96.f_179[1 /*5*/].f_3 = 201.2263f;
					Local_96.f_179[2 /*5*/] = { -891.2535f, -2737.411f, 12.8285f };
					Local_96.f_179[2 /*5*/].f_3 = 92.5365f;
					break;
				
				case 8:
					Local_96.f_103[0 /*5*/] = { 258.4958f, -3019.888f, 4.7612f };
					Local_96.f_103[0 /*5*/].f_3 = 190.0675f;
					Local_96.f_103[1 /*5*/] = { 273.9505f, -3013.159f, 4.7016f };
					Local_96.f_103[1 /*5*/].f_3 = 68.4427f;
					Local_96.f_103[2 /*5*/] = { 273.0544f, -3016.924f, 4.7049f };
					Local_96.f_103[2 /*5*/].f_3 = 136.0059f;
					Local_96.f_103[3 /*5*/] = { 274.0455f, -2995.704f, 4.7009f };
					Local_96.f_103[3 /*5*/].f_3 = 145.0681f;
					Local_96.f_103[4 /*5*/] = { 277.7727f, -3020.606f, 10.5614f };
					Local_96.f_103[4 /*5*/].f_3 = 59.5107f;
					Local_96.f_103[5 /*5*/] = { 277.1279f, -3034.719f, 10.5614f };
					Local_96.f_103[5 /*5*/].f_3 = 113.9025f;
					Local_96.f_179[0 /*5*/] = { 266.3998f, -3022.136f, 4.7302f };
					Local_96.f_179[0 /*5*/].f_3 = 14.1592f;
					Local_96.f_179[1 /*5*/] = { 270.9944f, -2999.383f, 4.7128f };
					Local_96.f_179[1 /*5*/].f_3 = 145.314f;
					break;
				
				case 9:
					Local_96.f_103[0 /*5*/] = { 1546.335f, -2124.289f, 76.1382f };
					Local_96.f_103[0 /*5*/].f_3 = 17.7805f;
					Local_96.f_103[1 /*5*/] = { 1554.385f, -2125.222f, 76.3125f };
					Local_96.f_103[1 /*5*/].f_3 = 10.9741f;
					Local_96.f_103[2 /*5*/] = { 1558.224f, -2118.532f, 76.3765f };
					Local_96.f_103[2 /*5*/].f_3 = 15.6854f;
					Local_96.f_103[3 /*5*/] = { 1547.75f, -2143.708f, 76.4844f };
					Local_96.f_103[3 /*5*/].f_3 = 154.3238f;
					Local_96.f_103[4 /*5*/] = { 1552.05f, -2147.172f, 76.5383f };
					Local_96.f_103[4 /*5*/].f_3 = 147.9245f;
					Local_96.f_103[5 /*5*/] = { 1563.341f, -2138.102f, 76.5841f };
					Local_96.f_103[5 /*5*/].f_3 = 149.5447f;
					Local_96.f_103[6 /*5*/] = { 1561.244f, -2133.029f, 76.4828f };
					Local_96.f_103[6 /*5*/].f_3 = 76.8144f;
					Local_96.f_103[7 /*5*/] = { 1569.277f, -2130.628f, 77.3351f };
					Local_96.f_103[7 /*5*/].f_3 = 112.2364f;
					Local_96.f_179[0 /*5*/] = { 1550.601f, -2145.957f, 76.5271f };
					Local_96.f_179[0 /*5*/].f_3 = 296.1894f;
					Local_96.f_179[1 /*5*/] = { 1563.138f, -2135.943f, 76.5206f };
					Local_96.f_179[1 /*5*/].f_3 = 260.3118f;
					Local_96.f_179[2 /*5*/] = { 1550.38f, -2123.159f, 76.2165f };
					Local_96.f_179[2 /*5*/].f_3 = 235.2799f;
					break;
				
				case 10:
					Local_96.f_103[0 /*5*/] = { -307.7643f, -2684.145f, 5.0079f };
					Local_96.f_103[0 /*5*/].f_3 = 10.2057f;
					Local_96.f_103[1 /*5*/] = { -298.4151f, -2685.329f, 5.1595f };
					Local_96.f_103[1 /*5*/].f_3 = 34.7011f;
					Local_96.f_103[2 /*5*/] = { -309.9699f, -2692.377f, 5.1532f };
					Local_96.f_103[2 /*5*/].f_3 = 231.6414f;
					Local_96.f_103[3 /*5*/] = { -315.5637f, -2698.447f, 6.55f };
					Local_96.f_103[3 /*5*/].f_3 = 279.1803f;
					Local_96.f_103[4 /*5*/] = { -307.4792f, -2699.072f, 5.0003f };
					Local_96.f_103[4 /*5*/].f_3 = 2.2931f;
					Local_96.f_103[5 /*5*/] = { -304.3626f, -2700.868f, 5.0003f };
					Local_96.f_103[5 /*5*/].f_3 = 253.2487f;
					Local_96.f_103[6 /*5*/] = { -306.5913f, -2707.836f, 5.1532f };
					Local_96.f_103[6 /*5*/].f_3 = 313.0547f;
					Local_96.f_103[7 /*5*/] = { -303.2011f, -2711.413f, 5.0003f };
					Local_96.f_103[7 /*5*/].f_3 = 288.4283f;
					Local_96.f_179[0 /*5*/] = { -304.9815f, -2709.62f, 5.0003f };
					Local_96.f_179[0 /*5*/].f_3 = 135.5251f;
					Local_96.f_179[1 /*5*/] = { -305.7259f, -2696.407f, 5.0003f };
					Local_96.f_179[1 /*5*/].f_3 = 207.3978f;
					Local_96.f_179[2 /*5*/] = { -303.8944f, -2685.304f, 5.0003f };
					Local_96.f_179[2 /*5*/].f_3 = 255.2084f;
					break;
				
				case 11:
					Local_96.f_103[0 /*5*/] = { 518.3859f, -657.3704f, 23.7512f };
					Local_96.f_103[0 /*5*/].f_3 = 138.1634f;
					Local_96.f_103[1 /*5*/] = { 519.1835f, -649.9944f, 23.7512f };
					Local_96.f_103[1 /*5*/].f_3 = 17.4978f;
					Local_96.f_103[2 /*5*/] = { 495.9756f, -648.6689f, 31.7074f };
					Local_96.f_103[2 /*5*/].f_3 = 283.3737f;
					Local_96.f_103[3 /*5*/] = { 504.1287f, -641.0121f, 23.7369f };
					Local_96.f_103[3 /*5*/].f_3 = 303.125f;
					Local_96.f_103[4 /*5*/] = { 498.1048f, -638.1683f, 23.9727f };
					Local_96.f_103[4 /*5*/].f_3 = 289.9783f;
					Local_96.f_103[5 /*5*/] = { 499.259f, -630.4283f, 23.7512f };
					Local_96.f_103[5 /*5*/].f_3 = 194.1317f;
					Local_96.f_103[6 /*5*/] = { 508.6016f, -626.3681f, 23.7571f };
					Local_96.f_103[6 /*5*/].f_3 = 343.9152f;
					Local_96.f_103[7 /*5*/] = { 497.44f, -661.5337f, 27.617f };
					Local_96.f_103[7 /*5*/].f_3 = 199.5863f;
					Local_96.f_179[0 /*5*/] = { 517.3517f, -654.2748f, 23.7512f };
					Local_96.f_179[0 /*5*/].f_3 = 150.2542f;
					Local_96.f_179[1 /*5*/] = { 505.3363f, -645.2184f, 23.7512f };
					Local_96.f_179[1 /*5*/].f_3 = 23.9108f;
					Local_96.f_179[2 /*5*/] = { 508.3529f, -630.1296f, 23.7512f };
					Local_96.f_179[2 /*5*/].f_3 = 127.1383f;
					break;
				
				case 12:
					Local_96.f_103[0 /*5*/] = { -546.3519f, -1769.694f, 20.5902f };
					Local_96.f_103[0 /*5*/].f_3 = 277.4846f;
					Local_96.f_103[1 /*5*/] = { -541.7958f, -1776.458f, 20.5973f };
					Local_96.f_103[1 /*5*/].f_3 = 356.3462f;
					Local_96.f_103[2 /*5*/] = { -534.571f, -1772.565f, 20.4432f };
					Local_96.f_103[2 /*5*/].f_3 = 23.1421f;
					Local_96.f_103[3 /*5*/] = { -527.7571f, -1776.274f, 20.367f };
					Local_96.f_103[3 /*5*/].f_3 = 255.9772f;
					Local_96.f_103[4 /*5*/] = { -531.6744f, -1781.516f, 20.4994f };
					Local_96.f_103[4 /*5*/].f_3 = 295.9945f;
					Local_96.f_103[5 /*5*/] = { -555.2966f, -1799.182f, 21.5471f };
					Local_96.f_103[5 /*5*/].f_3 = 327.6154f;
					Local_96.f_103[6 /*5*/] = { -549.1064f, -1786.567f, 21.012f };
					Local_96.f_103[6 /*5*/].f_3 = 334.4709f;
					Local_96.f_103[7 /*5*/] = { -518.8139f, -1785.754f, 20.6425f };
					Local_96.f_103[7 /*5*/].f_3 = 206.6088f;
					Local_96.f_179[0 /*5*/] = { -556.8245f, -1795.383f, 21.5195f };
					Local_96.f_179[0 /*5*/].f_3 = 204.3955f;
					Local_96.f_179[1 /*5*/] = { -531.0875f, -1774.35f, 20.4042f };
					Local_96.f_179[1 /*5*/].f_3 = 77.9003f;
					Local_96.f_179[2 /*5*/] = { -548.1949f, -1767.868f, 20.6224f };
					Local_96.f_179[2 /*5*/].f_3 = 102.3641f;
					break;
				
				case 13:
					Local_96.f_103[0 /*5*/] = { -295.7925f, -1366.301f, 30.3114f };
					Local_96.f_103[0 /*5*/].f_3 = 200.7773f;
					Local_96.f_103[1 /*5*/] = { -294.7914f, -1361.439f, 30.3099f };
					Local_96.f_103[1 /*5*/].f_3 = 280.8006f;
					Local_96.f_103[2 /*5*/] = { -294.8237f, -1355.167f, 30.3168f };
					Local_96.f_103[2 /*5*/].f_3 = 223.8718f;
					Local_96.f_103[3 /*5*/] = { -291.4968f, -1352.201f, 30.2753f };
					Local_96.f_103[3 /*5*/].f_3 = 205.2611f;
					Local_96.f_103[4 /*5*/] = { -294.7546f, -1345.713f, 30.3095f };
					Local_96.f_103[4 /*5*/].f_3 = 323.2399f;
					Local_96.f_103[5 /*5*/] = { -291.2322f, -1339.262f, 30.2775f };
					Local_96.f_103[5 /*5*/].f_3 = 257.2056f;
					Local_96.f_103[6 /*5*/] = { -295.7278f, -1331.49f, 30.3084f };
					Local_96.f_103[6 /*5*/].f_3 = 75.2552f;
					Local_96.f_103[7 /*5*/] = { -293.849f, -1328.756f, 30.2182f };
					Local_96.f_103[7 /*5*/].f_3 = 328.9491f;
					Local_96.f_179[0 /*5*/] = { -292.8152f, -1332.385f, 30.1537f };
					Local_96.f_179[0 /*5*/].f_3 = 29.6972f;
					Local_96.f_179[1 /*5*/] = { -291.6872f, -1348.131f, 30.282f };
					Local_96.f_179[1 /*5*/].f_3 = 166.5207f;
					Local_96.f_179[2 /*5*/] = { -295.23f, -1364.201f, 30.3097f };
					Local_96.f_179[2 /*5*/].f_3 = 108.2429f;
					break;
				
				case 14:
					Local_96.f_103[0 /*5*/] = { 344.5797f, 336.7456f, 104.1594f };
					Local_96.f_103[0 /*5*/].f_3 = 346.2658f;
					Local_96.f_103[1 /*5*/] = { 342.3423f, 332.3715f, 103.7572f };
					Local_96.f_103[1 /*5*/].f_3 = 102.4295f;
					Local_96.f_103[2 /*5*/] = { 341.1604f, 310.392f, 103.4193f };
					Local_96.f_103[2 /*5*/].f_3 = 61.0026f;
					Local_96.f_103[3 /*5*/] = { 346.6567f, 309.6925f, 103.1454f };
					Local_96.f_103[3 /*5*/].f_3 = 257.871f;
					Local_96.f_103[4 /*5*/] = { 350.7382f, 328.2918f, 103.2696f };
					Local_96.f_103[4 /*5*/].f_3 = 117.8644f;
					Local_96.f_103[5 /*5*/] = { 354.2978f, 327.3369f, 103.0974f };
					Local_96.f_103[5 /*5*/].f_3 = 177.6163f;
					Local_96.f_103[6 /*5*/] = { 366.9816f, 326.3944f, 102.6179f };
					Local_96.f_103[6 /*5*/].f_3 = 201.951f;
					Local_96.f_103[7 /*5*/] = { 363.9641f, 322.1239f, 102.6943f };
					Local_96.f_103[7 /*5*/].f_3 = 243.2871f;
					Local_96.f_179[0 /*5*/] = { 343.0425f, 312.0052f, 103.3437f };
					Local_96.f_179[0 /*5*/].f_3 = 258.1888f;
					Local_96.f_179[1 /*5*/] = { 360.5493f, 322.6658f, 102.7946f };
					Local_96.f_179[1 /*5*/].f_3 = 286.3943f;
					Local_96.f_179[2 /*5*/] = { 343.9996f, 332.1288f, 103.7176f };
					Local_96.f_179[2 /*5*/].f_3 = 7.4532f;
					break;
				
				case 15:
					Local_96.f_103[0 /*5*/] = { 962.8411f, -1572.776f, 29.5579f };
					Local_96.f_103[0 /*5*/].f_3 = 198.1588f;
					Local_96.f_103[1 /*5*/] = { 958.9659f, -1572.392f, 29.6097f };
					Local_96.f_103[1 /*5*/].f_3 = 93.0019f;
					Local_96.f_103[2 /*5*/] = { 974.9329f, -1566.858f, 29.5658f };
					Local_96.f_103[2 /*5*/].f_3 = 171.6639f;
					Local_96.f_103[3 /*5*/] = { 977.1616f, -1563.333f, 29.6385f };
					Local_96.f_103[3 /*5*/].f_3 = 4.8635f;
					Local_96.f_103[4 /*5*/] = { 961.7667f, -1559.233f, 29.8001f };
					Local_96.f_103[4 /*5*/].f_3 = 241.449f;
					Local_96.f_103[5 /*5*/] = { 961.8814f, -1556.363f, 29.807f };
					Local_96.f_103[5 /*5*/].f_3 = 275.0858f;
					Local_96.f_103[6 /*5*/] = { 968.3688f, -1552.087f, 29.6598f };
					Local_96.f_103[6 /*5*/].f_3 = 176.2653f;
					Local_96.f_103[7 /*5*/] = { 965.8116f, -1547.661f, 29.6223f };
					Local_96.f_103[7 /*5*/].f_3 = 333.7709f;
					Local_96.f_103[8 /*5*/] = { 957.9225f, -1553.855f, 33.7974f };
					Local_96.f_103[8 /*5*/].f_3 = 308.3917f;
					Local_96.f_103[9 /*5*/] = { 957.7077f, -1566.216f, 33.7974f };
					Local_96.f_103[9 /*5*/].f_3 = 219.3558f;
					Local_96.f_179[0 /*5*/] = { 965.2025f, -1549.952f, 29.6078f };
					Local_96.f_179[0 /*5*/].f_3 = 41.5896f;
					Local_96.f_179[1 /*5*/] = { 974.5963f, -1564.88f, 29.5937f };
					Local_96.f_179[1 /*5*/].f_3 = 251.9554f;
					Local_96.f_179[2 /*5*/] = { 960.7539f, -1572.775f, 29.6016f };
					Local_96.f_179[2 /*5*/].f_3 = 322.5412f;
					break;
				
				case 16:
					Local_96.f_103[0 /*5*/] = { 764.532f, -917.6445f, 24.3477f };
					Local_96.f_103[0 /*5*/].f_3 = 200.6824f;
					Local_96.f_103[1 /*5*/] = { 757.4073f, -914.5825f, 24.2703f };
					Local_96.f_103[1 /*5*/].f_3 = 268.7243f;
					Local_96.f_103[2 /*5*/] = { 763.8087f, -928.9955f, 24.4204f };
					Local_96.f_103[2 /*5*/].f_3 = 359.3907f;
					Local_96.f_103[3 /*5*/] = { 762.9298f, -935.2947f, 24.4307f };
					Local_96.f_103[3 /*5*/].f_3 = 337.1544f;
					Local_96.f_103[4 /*5*/] = { 720.5742f, -888.9393f, 23.2796f };
					Local_96.f_103[4 /*5*/].f_3 = 301.5278f;
					Local_96.f_103[5 /*5*/] = { 763.72f, -888.6782f, 24.0956f };
					Local_96.f_103[5 /*5*/].f_3 = 196.7567f;
					Local_96.f_103[6 /*5*/] = { 763.0903f, -884.3161f, 23.9395f };
					Local_96.f_103[6 /*5*/].f_3 = 321.9963f;
					Local_96.f_103[7 /*5*/] = { 743.7985f, -872.6409f, 24.0443f };
					Local_96.f_103[7 /*5*/].f_3 = 251.8575f;
					Local_96.f_103[8 /*5*/] = { 741.907f, -881.8726f, 24.0428f };
					Local_96.f_103[8 /*5*/].f_3 = 268.2814f;
					Local_96.f_103[9 /*5*/] = { 752.8027f, -884.268f, 24.1054f };
					Local_96.f_103[9 /*5*/].f_3 = 282.8442f;
					Local_96.f_179[0 /*5*/] = { 763.8987f, -886.4079f, 24.0887f };
					Local_96.f_179[0 /*5*/].f_3 = 85.7335f;
					Local_96.f_179[1 /*5*/] = { 744.0313f, -877.4133f, 24.0497f };
					Local_96.f_179[1 /*5*/].f_3 = 152.0251f;
					Local_96.f_179[2 /*5*/] = { 763.1165f, -916.4111f, 24.3315f };
					Local_96.f_179[2 /*5*/].f_3 = 133.3755f;
					break;
				
				case 17:
					Local_96.f_103[0 /*5*/] = { 1003.053f, -2149.714f, 37.3448f };
					Local_96.f_103[0 /*5*/].f_3 = 182.3138f;
					Local_96.f_103[1 /*5*/] = { 1010.169f, -2135.276f, 29.5516f };
					Local_96.f_103[1 /*5*/].f_3 = 349.7712f;
					Local_96.f_103[2 /*5*/] = { 1011.614f, -2142.546f, 29.5516f };
					Local_96.f_103[2 /*5*/].f_3 = 2.675f;
					Local_96.f_103[3 /*5*/] = { 1018.429f, -2145.479f, 29.5994f };
					Local_96.f_103[3 /*5*/].f_3 = 263.1569f;
					Local_96.f_103[4 /*5*/] = { 1020.569f, -2148.083f, 30.5334f };
					Local_96.f_103[4 /*5*/].f_3 = 259.3002f;
					Local_96.f_103[5 /*5*/] = { 1011.448f, -2146.674f, 29.5516f };
					Local_96.f_103[5 /*5*/].f_3 = 139.4625f;
					Local_96.f_103[6 /*5*/] = { 1013.688f, -2150.349f, 30.5334f };
					Local_96.f_103[6 /*5*/].f_3 = 91.3056f;
					Local_96.f_103[7 /*5*/] = { 1011.563f, -2153.055f, 29.5516f };
					Local_96.f_103[7 /*5*/].f_3 = 44.0468f;
					Local_96.f_103[8 /*5*/] = { 1008.21f, -2156.475f, 29.5516f };
					Local_96.f_103[8 /*5*/].f_3 = 347.5848f;
					Local_96.f_103[9 /*5*/] = { 1007.324f, -2161.736f, 29.5516f };
					Local_96.f_103[9 /*5*/].f_3 = 172.5634f;
					Local_96.f_179[0 /*5*/] = { 1007.872f, -2138.394f, 29.5516f };
					Local_96.f_179[0 /*5*/].f_3 = 139.8753f;
					Local_96.f_179[1 /*5*/] = { 1013.982f, -2145.138f, 29.5516f };
					Local_96.f_179[1 /*5*/].f_3 = 259.47f;
					Local_96.f_179[2 /*5*/] = { 1008.767f, -2160.593f, 29.5516f };
					Local_96.f_179[2 /*5*/].f_3 = 200.1719f;
					break;
				
				case 18:
					Local_96.f_103[0 /*5*/] = { 1016.825f, -2498.752f, 27.3493f };
					Local_96.f_103[0 /*5*/].f_3 = 61.8849f;
					Local_96.f_103[1 /*5*/] = { 996.0087f, -2540.799f, 27.3073f };
					Local_96.f_103[1 /*5*/].f_3 = 3.7927f;
					Local_96.f_103[2 /*5*/] = { 1017.77f, -2493.367f, 27.3879f };
					Local_96.f_103[2 /*5*/].f_3 = 88.4198f;
					Local_96.f_103[3 /*5*/] = { 1012.715f, -2506.288f, 27.302f };
					Local_96.f_103[3 /*5*/].f_3 = 27.7498f;
					Local_96.f_103[4 /*5*/] = { 996.7639f, -2512.485f, 27.302f };
					Local_96.f_103[4 /*5*/].f_3 = 40.6136f;
					Local_96.f_103[5 /*5*/] = { 1015.915f, -2514.646f, 27.3035f };
					Local_96.f_103[5 /*5*/].f_3 = 56.6315f;
					Local_96.f_103[6 /*5*/] = { 1011.236f, -2524.491f, 27.3083f };
					Local_96.f_103[6 /*5*/].f_3 = 15.7729f;
					Local_96.f_103[7 /*5*/] = { 1006.954f, -2527.826f, 27.3043f };
					Local_96.f_103[7 /*5*/].f_3 = 101.1154f;
					Local_96.f_103[8 /*5*/] = { 999.3998f, -2523.023f, 27.302f };
					Local_96.f_103[8 /*5*/].f_3 = 354.1063f;
					Local_96.f_103[9 /*5*/] = { 994.9509f, -2527.176f, 27.302f };
					Local_96.f_103[9 /*5*/].f_3 = 125.381f;
					Local_96.f_179[0 /*5*/] = { 1012.638f, -2502.169f, 27.302f };
					Local_96.f_179[0 /*5*/].f_3 = 316.6046f;
					Local_96.f_179[1 /*5*/] = { 1013.986f, -2523.53f, 27.3055f };
					Local_96.f_179[1 /*5*/].f_3 = 240.5153f;
					Local_96.f_179[2 /*5*/] = { 996.9083f, -2523.664f, 27.302f };
					Local_96.f_179[2 /*5*/].f_3 = 164.8845f;
					break;
				
				case 19:
					Local_96.f_103[0 /*5*/] = { -266.5881f, 190.2768f, 84.3252f };
					Local_96.f_103[0 /*5*/].f_3 = 121.811f;
					Local_96.f_103[1 /*5*/] = { -271.8751f, 195.5884f, 84.6149f };
					Local_96.f_103[1 /*5*/].f_3 = 274.2204f;
					Local_96.f_103[2 /*5*/] = { -265.1418f, 201.9027f, 84.4806f };
					Local_96.f_103[2 /*5*/].f_3 = 181.8879f;
					Local_96.f_103[3 /*5*/] = { -261.9281f, 201.8817f, 84.2857f };
					Local_96.f_103[3 /*5*/].f_3 = 253.3033f;
					Local_96.f_103[4 /*5*/] = { -260.6143f, 186.3196f, 84.0337f };
					Local_96.f_103[4 /*5*/].f_3 = 4.0892f;
					Local_96.f_103[5 /*5*/] = { -255.9788f, 194.8307f, 83.7181f };
					Local_96.f_103[5 /*5*/].f_3 = 103.808f;
					Local_96.f_103[6 /*5*/] = { -252.9307f, 192.114f, 82.7736f };
					Local_96.f_103[6 /*5*/].f_3 = 262.768f;
					Local_96.f_103[7 /*5*/] = { -242.0461f, 190.5416f, 79.3582f };
					Local_96.f_103[7 /*5*/].f_3 = 200.5955f;
					Local_96.f_103[8 /*5*/] = { -241.619f, 202.893f, 82.2432f };
					Local_96.f_103[8 /*5*/].f_3 = 209.8882f;
					Local_96.f_103[9 /*5*/] = { -235.1685f, 202.9628f, 82.1429f };
					Local_96.f_103[9 /*5*/].f_3 = 338.4766f;
					Local_96.f_179[0 /*5*/] = { -237.4442f, 203.1399f, 82.1887f };
					Local_96.f_179[0 /*5*/].f_3 = 159.4961f;
					Local_96.f_179[1 /*5*/] = { -251.6716f, 193.9603f, 82.6293f };
					Local_96.f_179[1 /*5*/].f_3 = 87.8942f;
					Local_96.f_179[2 /*5*/] = { -266.8874f, 193.015f, 84.3937f };
					Local_96.f_179[2 /*5*/].f_3 = 65.6299f;
					break;
				
				case 20:
					Local_96.f_103[0 /*5*/] = { 534.4465f, -1941.385f, 30.2292f };
					Local_96.f_103[0 /*5*/].f_3 = 311.177f;
					Local_96.f_103[1 /*5*/] = { 558.1476f, -1927.909f, 23.7833f };
					Local_96.f_103[1 /*5*/].f_3 = 342.9807f;
					Local_96.f_103[2 /*5*/] = { 546.3505f, -1928.6f, 23.8219f };
					Local_96.f_103[2 /*5*/].f_3 = 311.7955f;
					Local_96.f_103[3 /*5*/] = { 547.1193f, -1947.377f, 23.9851f };
					Local_96.f_103[3 /*5*/].f_3 = 250.7509f;
					Local_96.f_103[4 /*5*/] = { 572.5258f, -1930.575f, 23.7494f };
					Local_96.f_103[4 /*5*/].f_3 = 346.9088f;
					Local_96.f_103[5 /*5*/] = { 539.3912f, -1923.777f, 23.9851f };
					Local_96.f_103[5 /*5*/].f_3 = 316.7842f;
					Local_96.f_103[6 /*5*/] = { 563.26f, -1920.301f, 23.7598f };
					Local_96.f_103[6 /*5*/].f_3 = 325.4008f;
					Local_96.f_103[7 /*5*/] = { 533.5303f, -1938.4f, 23.9851f };
					Local_96.f_103[7 /*5*/].f_3 = 309.4188f;
					Local_96.f_179[0 /*5*/] = { 548.8199f, -1930.106f, 23.8175f };
					Local_96.f_179[0 /*5*/].f_3 = 159.5928f;
					Local_96.f_179[1 /*5*/] = { 551.0328f, -1946.83f, 23.9851f };
					Local_96.f_179[1 /*5*/].f_3 = 84.4521f;
					Local_96.f_179[2 /*5*/] = { 561.5193f, -1927.552f, 23.7627f };
					Local_96.f_179[2 /*5*/].f_3 = 80.685f;
					break;
				
				case 21:
					Local_96.f_103[0 /*5*/] = { 110.1075f, -2228.434f, 5.1712f };
					Local_96.f_103[0 /*5*/].f_3 = 265.3441f;
					Local_96.f_103[1 /*5*/] = { 109.2036f, -2234.949f, 5.0633f };
					Local_96.f_103[1 /*5*/].f_3 = 271.2665f;
					Local_96.f_103[2 /*5*/] = { 92.4692f, -2228.285f, 5.0333f };
					Local_96.f_103[2 /*5*/].f_3 = 246.2804f;
					Local_96.f_103[3 /*5*/] = { 89.8902f, -2221.848f, 5.0483f };
					Local_96.f_103[3 /*5*/].f_3 = 77.5276f;
					Local_96.f_103[4 /*5*/] = { 119.3045f, -2188.549f, 4.9608f };
					Local_96.f_103[4 /*5*/].f_3 = 260.6882f;
					Local_96.f_103[5 /*5*/] = { 135.5824f, -2185.041f, 5.0909f };
					Local_96.f_103[5 /*5*/].f_3 = 248.253f;
					Local_96.f_103[6 /*5*/] = { 102.5402f, -2183.203f, 4.953f };
					Local_96.f_103[6 /*5*/].f_3 = 254.5778f;
					Local_96.f_103[7 /*5*/] = { 93.2016f, -2199.761f, 5.0431f };
					Local_96.f_103[7 /*5*/].f_3 = 178.9871f;
					Local_96.f_103[8 /*5*/] = { 95.4634f, -2193.558f, 5.0313f };
					Local_96.f_103[8 /*5*/].f_3 = 283.6666f;
					Local_96.f_103[9 /*5*/] = { 99.6321f, -2203.004f, 5.181f };
					Local_96.f_103[9 /*5*/].f_3 = 312.4828f;
					Local_96.f_179[0 /*5*/] = { 95.909f, -2196.279f, 5.0431f };
					Local_96.f_179[0 /*5*/].f_3 = 139.258f;
					Local_96.f_179[1 /*5*/] = { 120.4857f, -2191.816f, 5.0209f };
					Local_96.f_179[1 /*5*/].f_3 = 159.3418f;
					Local_96.f_179[2 /*5*/] = { 109.2645f, -2231.557f, 5.0333f };
					Local_96.f_179[2 /*5*/].f_3 = 62.2714f;
					break;
				
				default:
					Local_96.f_103[0 /*5*/] = { 968.5941f, -1557.899f, 29.6842f };
					Local_96.f_103[0 /*5*/].f_3 = 114.28f;
					Local_96.f_103[1 /*5*/] = { 965.9659f, -1571.214f, 29.5878f };
					Local_96.f_103[1 /*5*/].f_3 = 62.3577f;
					Local_96.f_103[2 /*5*/] = { 951.7892f, -1575.491f, 29.434f };
					Local_96.f_103[2 /*5*/].f_3 = 41.1548f;
					Local_96.f_103[3 /*5*/] = { 939.3943f, -1575.787f, 29.345f };
					Local_96.f_103[3 /*5*/].f_3 = 85.4368f;
					Local_96.f_103[4 /*5*/] = { 928.4522f, -1577.374f, 29.4239f };
					Local_96.f_103[4 /*5*/].f_3 = 336.8404f;
					Local_96.f_103[5 /*5*/] = { 921.6147f, -1573.96f, 29.6373f };
					Local_96.f_103[5 /*5*/].f_3 = 337.606f;
					Local_96.f_103[6 /*5*/] = { 920.303f, -1564.142f, 29.7523f };
					Local_96.f_103[6 /*5*/].f_3 = 52.3963f;
					Local_96.f_103[7 /*5*/] = { 918.5511f, -1552.143f, 29.7808f };
					Local_96.f_103[7 /*5*/].f_3 = 244.4705f;
					Local_96.f_103[8 /*5*/] = { 922.5096f, -1543.686f, 29.8074f };
					Local_96.f_103[8 /*5*/].f_3 = 8.0474f;
					Local_96.f_103[9 /*5*/] = { 910.6829f, -1547.757f, 29.6528f };
					Local_96.f_103[9 /*5*/].f_3 = 217.9933f;
					Local_96.f_103[10 /*5*/] = { 910.2541f, -1557.902f, 29.7034f };
					Local_96.f_103[10 /*5*/].f_3 = 237.5501f;
					Local_96.f_103[11 /*5*/] = { 909.9764f, -1572.07f, 29.791f };
					Local_96.f_103[11 /*5*/].f_3 = 287.341f;
					Local_96.f_179[0 /*5*/] = { 912.0468f, -1562.435f, 29.7522f };
					Local_96.f_179[0 /*5*/].f_3 = 305.0547f;
					Local_96.f_179[1 /*5*/] = { 903.5677f, -1559.325f, 29.6796f };
					Local_96.f_179[1 /*5*/].f_3 = 301.2764f;
					Local_96.f_179[2 /*5*/] = { 970.6998f, -1558.555f, 29.6813f };
					Local_96.f_179[2 /*5*/].f_3 = 43.0116f;
			}
			break;
	}
}

var func_155()
{
	if (Local_96.f_195 != -1)
	{
		return Local_96.f_195;
	}
	Local_96.f_195 = unk_0xA6055C735E3DD877(0, 3);
	return Local_96.f_195;
}

int func_156(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_157(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0x587E5997B76F47FE())
		{
			func_10(uParam0, 0, 0);
		}
	}
}

void func_158()
{
	char* sVar0;
	
	func_163();
	if (unk_0x7DA173D4FD42F36B(iLocal_720, 9))
	{
		return;
	}
	if (func_796())
	{
		if (!unk_0x7DA173D4FD42F36B(iLocal_720, 0))
		{
			unk_0xC8601D5221312A4A("DisableFlightMusic", 1);
			unk_0xC8601D5221312A4A("WantedMusicDisabled", 1);
			unk_0xE27C8E42A97895CF(&iLocal_720, 0);
		}
		if (!unk_0x7DA173D4FD42F36B(iLocal_720, 1))
		{
			if (!func_344())
			{
				sVar0 = "EXEC1_UNDER_ATTACK_START";
			}
			else
			{
				sVar0 = "EXEC1_DEFEND_FLEEING_START";
			}
			if (unk_0x25B97FB8615971D6(sVar0))
			{
				unk_0xE27C8E42A97895CF(&iLocal_720, 1);
			}
		}
		if (!func_344())
		{
			if (!unk_0x7DA173D4FD42F36B(iLocal_720, 3))
			{
				if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 13))
				{
					if (unk_0x25B97FB8615971D6("EXEC1_UNDER_ATTACK_ARRIVE_SMA"))
					{
						unk_0xE27C8E42A97895CF(&iLocal_720, 3);
					}
				}
			}
		}
		if (!func_344())
		{
			if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 1))
			{
				if (!unk_0x7DA173D4FD42F36B(iLocal_720, 4))
				{
					if (unk_0x25B97FB8615971D6("EXEC1_UNDER_ATTACK_STOP"))
					{
						unk_0xE27C8E42A97895CF(&iLocal_720, 4);
					}
				}
			}
		}
		if (!unk_0x7DA173D4FD42F36B(iLocal_720, 6))
		{
			if ((((unk_0x7DA173D4FD42F36B(Local_96.f_1, 3) || unk_0x7DA173D4FD42F36B(Local_96.f_1, 15)) || unk_0x7DA173D4FD42F36B(Local_96.f_1, 5)) || unk_0x7DA173D4FD42F36B(Local_96.f_1, 9)) || unk_0x7DA173D4FD42F36B(Local_96.f_1, 8))
			{
				if (unk_0x25B97FB8615971D6("EXEC1_UNDER_ATTACK_FAIL"))
				{
					unk_0xE27C8E42A97895CF(&iLocal_720, 6);
				}
			}
		}
		if (func_344())
		{
			if (!unk_0x7DA173D4FD42F36B(iLocal_720, 16))
			{
				if (Local_96.f_215 == -1)
				{
					if (func_159("DCONTRA_OBJ4"))
					{
						if (unk_0x25B97FB8615971D6("EXEC1_DEFEND_FLEEING_RETRIEVE_SMA"))
						{
							unk_0xE27C8E42A97895CF(&iLocal_720, 16);
						}
					}
				}
			}
			if (!unk_0x7DA173D4FD42F36B(iLocal_720, 17))
			{
				if (Local_96.f_215 != -1)
				{
					if (unk_0x25B97FB8615971D6("EXEC1_DEFEND_FLEEING_RETURN_SMA"))
					{
						unk_0xE27C8E42A97895CF(&iLocal_720, 17);
					}
				}
			}
			if (!unk_0x7DA173D4FD42F36B(iLocal_720, 18))
			{
				if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 4))
				{
					if (unk_0x25B97FB8615971D6("EXEC1_DEFEND_FLEEING_STOP"))
					{
						unk_0xE27C8E42A97895CF(&iLocal_720, 18);
					}
				}
			}
		}
	}
}

int func_159(char* sParam0)
{
	if (unk_0x226FA58470A21AEF(sParam0))
	{
		return 0;
	}
	if (!func_162())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		if (unk_0x2673375C0C31BF99(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x2673375C0C31BF99(sParam0) > 23)
	{
		return 0;
	}
	return func_160(sParam0);
}

bool func_160(char* sParam0)
{
	if (!func_162())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		return func_161(sParam0);
	}
	if (unk_0x226FA58470A21AEF(sParam0))
	{
		return 0;
	}
	return unk_0x9F7CDE7B20BCB675(sParam0) == unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_10));
}

bool func_161(char* sParam0)
{
	if (!func_162())
	{
		return 0;
	}
	if (unk_0x226FA58470A21AEF(sParam0))
	{
		return 0;
	}
	return unk_0x9F7CDE7B20BCB675(sParam0) == unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_14));
}

int func_162()
{
	if (Global_1312577 == 19)
	{
		return 0;
	}
	return 1;
}

void func_163()
{
	if (unk_0x7DA173D4FD42F36B(iLocal_720, 8))
	{
		if (unk_0x7DA173D4FD42F36B(iLocal_720, 9))
		{
			if (!unk_0x7DA173D4FD42F36B(iLocal_720, 10))
			{
				if (unk_0x7DA173D4FD42F36B(iLocal_720, 11))
				{
					if (!unk_0x7DA173D4FD42F36B(iLocal_720, 12))
					{
						unk_0x5BC661D1FF0D731E(1);
						unk_0xC8601D5221312A4A("AllowScoreAndRadio", 0);
					}
				}
				if (!unk_0x7DA173D4FD42F36B(iLocal_720, 15))
				{
					if (unk_0x25B97FB8615971D6("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0xE27C8E42A97895CF(&iLocal_720, 15);
					}
				}
				if (unk_0x7DA173D4FD42F36B(iLocal_720, 15))
				{
					if (!unk_0x7DA173D4FD42F36B(iLocal_720, 13))
					{
						if (unk_0x25B97FB8615971D6("APT_FADE_IN_RADIO"))
						{
							unk_0xE27C8E42A97895CF(&iLocal_720, 13);
						}
					}
					if (unk_0x7DA173D4FD42F36B(iLocal_720, 13))
					{
						unk_0xE27C8E42A97895CF(&iLocal_720, 10);
					}
				}
			}
		}
	}
}

void func_164()
{
	struct<3> Var0;
	float fVar3;
	
	if (!func_796() && !func_342())
	{
		return;
	}
	if (unk_0x7DA173D4FD42F36B(iLocal_719, 15))
	{
		if (!unk_0x7DA173D4FD42F36B(iLocal_719, 16))
		{
			if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
			{
				if (unk_0x16B4666C6E139F11() == 0)
				{
					unk_0x23C09ED6B6466E40(5);
					unk_0xD8C6045E402E904C(unk_0xE0BDAFA1A39552D6(), 2, 0);
					unk_0xB9AD37E5A78BA03C(unk_0xE0BDAFA1A39552D6(), 0);
					unk_0xE27C8E42A97895CF(&iLocal_719, 16);
				}
			}
		}
		return;
	}
	if (func_344())
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[0 /*10*/].f_2))
		{
			Var0 = { unk_0xF4745590D18D14B8(unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2), 0) };
		}
	}
	else
	{
		Var0 = { func_40() };
	}
	fVar3 = unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), Var0);
	if (!unk_0x7DA173D4FD42F36B(iLocal_719, 17))
	{
		if (fVar3 < 250000f)
		{
			unk_0x23C09ED6B6466E40(0);
			unk_0xE27C8E42A97895CF(&iLocal_719, 17);
		}
	}
	else if (fVar3 > 360000f)
	{
		unk_0x23C09ED6B6466E40(5);
		unk_0x99BCB15F954AF579(&iLocal_719, 17);
	}
}

void func_165()
{
	struct<3> Var0;
	
	if (!func_796() && !func_342())
	{
		return;
	}
	if (func_344())
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[0 /*10*/].f_2))
		{
			Var0 = { unk_0xF4745590D18D14B8(unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2), 0) };
		}
	}
	else
	{
		Var0 = { func_40() };
	}
	if (!func_59(Var0, 0f, 0f, 0f, 0))
	{
		func_166(169, Var0, &uLocal_834, 1140457472, 1144750080, 0);
	}
}

void func_166(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_208(unk_0xE0BDAFA1A39552D6()) && !func_207(unk_0xE0BDAFA1A39552D6())) && !unk_0x7DA173D4FD42F36B(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1, 8)) && (func_206(unk_0xE0BDAFA1A39552D6()) || func_205(unk_0xE0BDAFA1A39552D6())))
	{
		return;
	}
	Global_1734808 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), Param1);
	func_203(iParam0, fVar0);
	if (unk_0x3DC360442A11BB38() && unk_0x0FDDFFBD775C7598() == 15)
	{
		if (func_202(unk_0xE0BDAFA1A39552D6()) || func_200(unk_0xE0BDAFA1A39552D6()))
		{
			if (!unk_0x86AA79952D0B526D(1344549371))
			{
				unk_0x084681BC25D24FCC(1344549371);
			}
		}
		else if (unk_0x86AA79952D0B526D(1344549371))
		{
			unk_0x310F4E81C7574224(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_199(unk_0xE0BDAFA1A39552D6(), 21))
		{
			func_198(Param1, 1, 0);
		}
		if (!*uParam4 && func_848(unk_0xE0BDAFA1A39552D6(), 1, 1))
		{
			*uParam4 = 1;
			if (func_197(iParam0))
			{
				unk_0x71543B3C24188223(func_196(iParam0));
				if (func_195(iParam0, -1))
				{
					unk_0x23C09ED6B6466E40(0);
					if (unk_0xB0565BA1AD71378E(unk_0xE0BDAFA1A39552D6()) > 0)
					{
						unk_0xD8C6045E402E904C(unk_0xE0BDAFA1A39552D6(), 0, 1);
						unk_0xB9AD37E5A78BA03C(unk_0xE0BDAFA1A39552D6(), 1);
					}
					unk_0xE27C8E42A97895CF(&(Global_1734808.f_3), 0);
				}
			}
			if (func_194(iParam0))
			{
				fVar1 = func_193(iParam0);
				if (fVar1 != 1f)
				{
					func_190(fVar1);
					unk_0xE27C8E42A97895CF(&(Global_1734808.f_3), 1);
				}
			}
			if (!Global_2391043)
			{
				if (func_189(iParam0) && func_202(unk_0xE0BDAFA1A39552D6()))
				{
					func_187(1);
					func_186(2);
				}
			}
			func_185(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_184(unk_0xE0BDAFA1A39552D6(), 19))
			{
				func_183(19);
			}
		}
		if (*uParam4 && func_848(unk_0xE0BDAFA1A39552D6(), 1, 1))
		{
			*uParam4 = 0;
			if (func_197(iParam0))
			{
				if (unk_0x7DA173D4FD42F36B(Global_1734808.f_3, 0))
				{
					unk_0x71543B3C24188223(1f);
					unk_0x23C09ED6B6466E40(5);
					unk_0x99BCB15F954AF579(&(Global_1734808.f_3), 0);
				}
			}
			if (func_194(iParam0))
			{
				func_182();
				unk_0x99BCB15F954AF579(&(Global_1734808.f_3), 1);
			}
			if (iParam7 && !func_208(unk_0xE0BDAFA1A39552D6()))
			{
				if (func_180(unk_0xE0BDAFA1A39552D6()) != 152)
				{
					func_169();
				}
			}
			if (func_168(2))
			{
				func_187(0);
				func_167(2);
			}
		}
	}
}

void func_167(int iParam0)
{
	unk_0x99BCB15F954AF579(&(Global_2464975.f_4685.f_18), iParam0);
}

bool func_168(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_2464975.f_4685.f_18, iParam0);
}

void func_169()
{
	Global_2404993.f_20 = { Global_2406822 };
	Global_2404993.f_22 = { Global_2406824 };
	func_178();
	func_170(1, 1);
}

void func_170(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_2404993.f_39 = { Global_2406841 };
	}
	else
	{
		Global_2404993.f_39 = { Global_2406841 };
		Global_2404993.f_39.f_49 = { Global_2406841.f_49 };
		Global_2404993.f_39.f_52 = Global_2406841.f_52;
		Global_2404993.f_39.f_53 = Global_2406841.f_53;
	}
	if (bParam0)
	{
		func_177();
	}
	func_173(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_172(0);
	func_171();
}

void func_171()
{
	struct<4> Var0;
	
	if (Global_2404993.f_469.f_1 == unk_0xAE832DCCE9CD3242())
	{
		Global_2404993.f_469 = { Var0 };
	}
}

void func_172(bool bParam0)
{
	if (bParam0)
	{
		Global_2404993.f_638 = 0;
	}
	else
	{
		Global_2404993.f_638 = 1;
	}
}

void func_173(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		Global_2404993.f_1144 = iParam1;
		Global_2404993.f_1145 = iParam2;
		Global_2404993.f_1146 = iParam10;
		func_175();
		func_174(8, 0, 0);
		Global_2404993.f_639 = 1;
		Global_2404993.f_1147 = iParam11;
		Global_2404993.f_1150 = iParam3;
		Global_2404993.f_1151 = iParam4;
		Global_2404993.f_1148 = iParam5;
		Global_2404993.f_1149 = iParam6;
		Global_2404993.f_1152 = iParam7;
		Global_2404993.f_1153 = iParam8;
		Global_2404993.f_1154 = iParam9;
	}
	else
	{
		func_175();
		func_174(0, 0, 0);
		Global_2404993.f_639 = 0;
	}
}

void func_174(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2409586 = 0;
	}
	Global_2404993.f_469 = iParam0;
	Global_2404993.f_469.f_1 = unk_0xAE832DCCE9CD3242();
	Global_2404993.f_469.f_2 = iParam1;
	Global_2404993.f_469.f_3 = iParam2;
}

void func_175()
{
	func_176();
	Global_2404993.f_640 = 0;
}

void func_176()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404993.f_641[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_177()
{
	Global_2404993.f_347 = { Global_2407149 };
}

void func_178()
{
	func_179();
	Global_2404993.f_1285 = 0;
}

void func_179()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404993.f_1286[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_180(int iParam0)
{
	if (func_181(iParam0, 0))
	{
		return Global_1610705[iParam0 /*178*/].f_10.f_28;
	}
	return -1;
}

int func_181(int iParam0, int iParam1)
{
	if (Global_1610705[iParam0 /*178*/].f_10.f_28 != -1 || (iParam1 && Global_1610705[iParam0 /*178*/].f_10.f_27 != -1))
	{
		return 1;
	}
	return 0;
}

void func_182()
{
	if (unk_0xDF49ABF9204CC801(Global_2464975.f_4681))
	{
		if (!Global_2464975.f_4681 == unk_0xAE832DCCE9CD3242() && Global_2464975.f_4680 < 1f)
		{
			return;
		}
	}
	Global_2464975.f_4681 = -1;
	Global_2464975.f_4680 = 1f;
}

void func_183(int iParam0)
{
	unk_0x99BCB15F954AF579(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_4), iParam0);
}

bool func_184(int iParam0, int iParam1)
{
	return unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_10.f_4, iParam1);
}

void func_185(int iParam0)
{
	unk_0xE27C8E42A97895CF(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_4), iParam0);
}

void func_186(int iParam0)
{
	unk_0xE27C8E42A97895CF(&(Global_2464975.f_4685.f_18), iParam0);
}

void func_187(int iParam0)
{
	if (func_188() && iParam0)
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

int func_188()
{
	if ((((Global_978175 != -1 && Global_978175 != 33) && Global_978175 != 35) && Global_978175 != 37) && Global_978175 != 21)
	{
		return 1;
	}
	return 0;
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 142:
		case 159:
		case 148:
		case 157:
		case 166:
			return 1;
		
		default:
	}
	return 0;
}

void func_190(float fParam0)
{
	float fVar0;
	
	if (unk_0x9F7CDE7B20BCB675(unk_0x47B34031F915C179()) == func_191())
	{
		return;
	}
	fVar0 = (Global_2464975.f_4680 - fParam0);
	if (unk_0xDF49ABF9204CC801(Global_2464975.f_4681))
	{
		if (!Global_2464975.f_4681 == unk_0xAE832DCCE9CD3242() && unk_0xF87C669B882D93C0(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2464975.f_4680 = fParam0;
	Global_2464975.f_4681 = unk_0xAE832DCCE9CD3242();
}

int func_191()
{
	switch (func_192())
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

int func_192()
{
	return Global_25152;
}

float func_193(int iParam0)
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
			return 0f;
		
		default:
	}
	return 1f;
}

int func_194(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 164:
		case 151:
		case 170:
		case 169:
			return 1;
		
		default:
	}
	return 0;
}

int func_195(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 151:
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
	}
	return 0;
}

float func_196(int iParam0)
{
	switch (iParam0)
	{
		case 131:
		case 138:
		case 140:
		case 139:
		case 141:
		case 146:
			return 0f;
		
		case 144:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_197(int iParam0)
{
	switch (iParam0)
	{
		case 152:
		case 142:
		case 164:
		case 151:
		case 160:
		case 166:
			return 1;
		
		default:
	}
	return 0;
}

void func_198(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404993.f_39.f_49 = { Param0 };
	Global_2404993.f_39.f_52 = iParam3;
	Global_2404993.f_39.f_53 = iParam4;
}

bool func_199(int iParam0, int iParam1)
{
	return unk_0x7DA173D4FD42F36B(Global_2418529[iParam0 /*313*/].f_206, iParam1);
}

int func_200(int iParam0)
{
	if (func_201(iParam0))
	{
		if (func_202(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_201(int iParam0)
{
	if (iParam0 != func_55())
	{
		if (Global_1610705[iParam0 /*178*/].f_10 != func_55())
		{
			return Global_1610705[iParam0 /*178*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_202(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_184(iParam0, 9);
	}
	return 0;
}

void func_203(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_204(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_778();
	}
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_10709;
		
		case 142:
			return Global_262145.f_10697;
		
		case 157:
			return Global_262145.f_10664;
		
		case 159:
			return Global_262145.f_10647;
		
		case 162:
			return Global_262145.f_10758;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_205(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x7DA173D4FD42F36B(Global_1610705[iVar0 /*178*/].f_1, 0);
	}
	return 0;
}

int func_206(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x7DA173D4FD42F36B(Global_1610705[iVar0 /*178*/].f_1, 7);
	}
	return 0;
}

bool func_207(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 2);
}

int func_208(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610705[iVar0 /*178*/] != -1;
	}
	return 0;
}

void func_209()
{
	if (!func_344())
	{
		return;
	}
	if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 4))
	{
		return;
	}
	if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 18))
	{
		return;
	}
	if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 17))
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[0 /*10*/].f_2) && unk_0x40B3668D7226E0DF(Local_96.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_96.f_2[0 /*10*/].f_2))
			{
				if (!unk_0x666D4D13AC213458(unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2)))
				{
					func_213(&(Local_96.f_2[0 /*10*/].f_2));
				}
			}
		}
		return;
	}
	if (unk_0x7DA173D4FD42F36B(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1, 15))
	{
		return;
	}
	if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_96.f_2[0 /*10*/].f_2))
		{
			if (func_210(Local_96.f_2[0 /*10*/].f_2))
			{
				if (unk_0x40B3668D7226E0DF(Local_96.f_2[0 /*10*/].f_2))
				{
					unk_0xC26C4630EB1979DB(unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2), 1, 1);
					unk_0xE27C8E42A97895CF(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1), 15);
				}
			}
		}
	}
}

int func_210(var uParam0)
{
	if (unk_0xED2E89495A3A119B(uParam0))
	{
		return 1;
	}
	if (func_211(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_211(var uParam0)
{
	if (!unk_0x587E5997B76F47FE())
	{
		return 0;
	}
	if (!unk_0xC3A7CFC6468E0BAE(uParam0))
	{
		return 0;
	}
	if (func_212(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_212(var uParam0)
{
	if (unk_0xC7A68C5C107A1253(uParam0))
	{
		unk_0x05482B0CE9645411(uParam0);
		return unk_0x40B3668D7226E0DF(uParam0);
	}
	return 0;
}

void func_213(var uParam0)
{
	var uVar0;
	
	if (unk_0xC7A68C5C107A1253(*uParam0))
	{
		if (!unk_0x40B3668D7226E0DF(*uParam0))
		{
		}
	}
	if (unk_0xC3A7CFC6468E0BAE(*uParam0))
	{
		uVar0 = unk_0x4C4151C3DEC199DC(*uParam0);
		unk_0x68BC4628D1B1B784(&uVar0);
	}
}

void func_214(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	
	if (func_332(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_330() || iParam2 == 24)
	{
		if (func_286(uParam1, iParam2, uParam3, Global_1573685, 0, func_328()))
		{
			func_285(1);
			if ((!func_283() && !func_281()) || unk_0x7DA173D4FD42F36B(Global_2464975.f_4426, 1))
			{
				if (func_280())
				{
					func_277();
				}
				else
				{
					unk_0xF2C2AA10F5F1DDB2(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_276(1);
						Global_1573685 = 0;
						iVar54 = -1;
						if (Global_1573833 != 1)
						{
							func_275(uParam1);
							if (unk_0x7DA173D4FD42F36B(uParam3->f_33, 7))
							{
								unk_0x99BCB15F954AF579(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 24)
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
								if (func_848(unk_0x801C03D92F1C6755(iVar52), 0, 1))
								{
									iVar35 = unk_0x801C03D92F1C6755(iVar52);
									if (!func_34(iVar35, 0))
									{
										if ((unk_0x296D7F88818B62E7(iVar35, unk_0xE0BDAFA1A39552D6()) || Global_2418529[iVar35 /*313*/].f_232 != -1) || func_274(iVar35))
										{
											iVar44 = iVar35;
											if (func_201(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_271(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_269(unk_0xE0BDAFA1A39552D6(), 0))
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_267())
							{
								if (func_848(unk_0x801C03D92F1C6755(iVar52), 0, 1))
								{
									iVar35 = unk_0x801C03D92F1C6755(iVar52);
								}
								else
								{
									iVar35 = func_55();
								}
							}
							else
							{
								iVar35 = (uParam0[iVar52 /*47*/])->f_1;
							}
							if ((func_266(iVar35) && func_261(iVar35, iParam2)) && func_848(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1587816[iVar44 /*444*/].f_195.f_6;
								Var38 = { func_256(iVar35) };
								if (iVar35 == unk_0xE0BDAFA1A39552D6())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0x3DB24415831CBC43(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_57(iVar35) };
								iVar37 = func_250(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0xA7ABBEE53A1DE38B(iVar37);
								}
								Global_1573685++;
								if ((uParam0[iVar52 /*47*/])->f_22 != -1f)
								{
									fVar45 = (uParam0[iVar52 /*47*/])->f_22;
								}
								if ((uParam0[iVar52 /*47*/])->f_30 != -1)
								{
									iVar46 = (uParam0[iVar52 /*47*/])->f_30;
								}
								if ((uParam0[iVar52 /*47*/])->f_46 != -1)
								{
									iVar47 = (uParam0[iVar52 /*47*/])->f_46;
								}
								iVar43 = (uParam0[iVar52 /*47*/])->f_9;
								if (((uParam0[iVar52 /*47*/])->f_9 != -1 || (uParam0[iVar52 /*47*/])->f_22 != -1f) || (uParam0[iVar52 /*47*/])->f_30 != -1)
								{
									if (!func_267())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_245(&iVar43, &fVar45, (uParam0[iVar52 /*47*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_244(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar48 = (uParam0[iVar52 /*47*/])->f_2 + 1;
									if (iVar54 != iVar48)
									{
										iVar54 = iVar48;
									}
									else
									{
										iVar48 = -2;
									}
								}
								iVar51 = func_238(iVar35, 0);
								if (bVar34)
								{
									if (func_237(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_236(iParam5))
								{
									func_235(uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((uParam0[iVar52 /*47*/])->f_37), &((uParam0[iVar52 /*47*/])->f_41), (uParam0[iVar52 /*47*/])->f_45, iVar48, bParam6);
								}
								else
								{
									func_235(uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((uParam0[iVar52 /*47*/])->f_37), &((uParam0[iVar52 /*47*/])->f_41), (uParam0[iVar52 /*47*/])->f_45, iVar48, bParam6);
								}
								unk_0xE27C8E42A97895CF(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x801C03D92F1C6755(iVar52);
							if (func_848(iVar35, 0, 1) && !unk_0x7DA173D4FD42F36B(iVar49, iVar35))
							{
								iVar35 = unk_0x801C03D92F1C6755(iVar52);
							}
							else
							{
								iVar35 = func_55();
							}
							if (func_266(iVar35))
							{
								if (func_848(unk_0x801C03D92F1C6755(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1587816[iVar44 /*444*/].f_195.f_6;
									Var38 = { func_256(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_57(iVar35) };
									iVar37 = func_250(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0xA7ABBEE53A1DE38B(iVar37);
									}
									Global_1573685++;
									iVar51 = func_238(iVar35, 1);
									if (bVar34)
									{
										if (func_237(iVar35, 1))
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
									func_227(unk_0x3DB24415831CBC43(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0x7DA173D4FD42F36B(uParam3->f_33, 11))
						{
							func_224(uParam3, uParam1);
						}
						func_9(&(uParam3->f_21));
						func_223();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x7DA173D4FD42F36B(uParam3->f_33, 7))
						{
							func_222(uParam3, uParam1);
							func_221(uParam1, 0, 1);
							unk_0xE27C8E42A97895CF(&(uParam3->f_33), 7);
						}
						func_222(uParam3, uParam1);
						if (!unk_0x7DA173D4FD42F36B(uParam3->f_33, 11))
						{
							unk_0xE27C8E42A97895CF(&(uParam3->f_33), 11);
						}
						if (func_217(uParam3))
						{
							Global_1573833 = 1;
						}
						func_215(uParam3);
						if (Global_1573833 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1573833 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x6A87921801178186(*uParam1))
					{
						unk_0xA53AA6798EF8BAB3(7);
						unk_0x85DC3CB6F30C7FE7(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0xA53AA6798EF8BAB3(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_223();
			func_276(0);
			if (unk_0x7DA173D4FD42F36B(uParam3->f_33, 7))
			{
				unk_0x99BCB15F954AF579(&(uParam3->f_33), 7);
			}
			if (unk_0x7DA173D4FD42F36B(uParam3->f_33, 10))
			{
				unk_0x99BCB15F954AF579(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x50E2186E0E0244C6();
}

void func_215(var uParam0)
{
	if (!func_11(&(uParam0->f_21)))
	{
		func_10(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_9(&(uParam0->f_21));
		func_216(0);
	}
}

void func_216(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573833 != 2)
		{
			Global_1573833 = 2;
		}
	}
	else
	{
		switch (Global_1573833)
		{
			case 0:
				Global_1573833 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_217(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x801C03D92F1C6755(uParam0->f_37);
	if (iVar15 != func_55() && func_848(iVar15, 0, 1))
	{
		Var2 = { func_57(iVar15) };
		iVar1 = func_220(uParam0, uParam0->f_37);
		if (func_219(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x7B3E90AFB94DE6A4(&Var2))
					{
						if (unk_0xCAA113034DC9272C(&Var2))
						{
							iVar16 = 1;
							func_218(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x88BD5F6528137EC3(&Var2))
					{
						iVar16 = 1;
						func_218(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x7B3E90AFB94DE6A4(&Var2))
					{
						if (!unk_0xCAA113034DC9272C(&Var2))
						{
							iVar16 = 1;
							func_218(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_218(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x7B3E90AFB94DE6A4(&Var2))
					{
						if (!unk_0x88BD5F6528137EC3(&Var2))
						{
							iVar16 = 1;
							func_218(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x88BD5F6528137EC3(&Var2))
					{
						iVar16 = 1;
						func_218(uParam0, iVar0, 0);
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

void func_218(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_219(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xD6F48B026382A9AD(&uParam0, 13);
}

var func_220(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_221(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x2B859AD680983623(*uParam0, "COLLAPSE"))
	{
		unk_0x504EDFAAB39BF764(iParam1);
		unk_0xE97F1B22C5E8989F();
	}
	if (iParam2 == 1)
	{
		if (unk_0x2B859AD680983623(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xE97F1B22C5E8989F();
		}
	}
}

void func_222(var uParam0, var uParam1)
{
	if (!unk_0x7DA173D4FD42F36B(uParam0->f_33, 10))
	{
		unk_0x2B859AD680983623(*uParam1, "SET_HIGHLIGHT");
		unk_0x7AF283DA3BA078CD(uParam0->f_35);
		unk_0xE97F1B22C5E8989F();
		unk_0xE27C8E42A97895CF(&(uParam0->f_33), 10);
	}
}

void func_223()
{
	if (Global_1573833 != 0)
	{
		Global_1573833 = 0;
	}
}

void func_224(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x801C03D92F1C6755(iVar0);
		if (iVar2 != func_55())
		{
			if (func_848(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_226(uParam0->f_38[iVar0 /*2*/], 0);
					func_225(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1587816[iVar0 /*444*/].f_195.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_225(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x6A87921801178186(*uParam0))
	{
		if (unk_0x2B859AD680983623(*uParam0, "SET_ICON"))
		{
			unk_0x7AF283DA3BA078CD(iParam1);
			unk_0x7AF283DA3BA078CD(iParam2);
			if (iParam2 == 65)
			{
				unk_0x7AF283DA3BA078CD(iParam3);
			}
			unk_0xE97F1B22C5E8989F();
		}
	}
}

int func_226(int iParam0, bool bParam1)
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

void func_227(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_234() && iParam3 < func_233())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1573687)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573833 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x2B859AD680983623(*uParam1, sVar1))
		{
			unk_0x7AF283DA3BA078CD(iParam3);
			if (unk_0x7DA173D4FD42F36B(uParam2->f_33, 8) || uParam2->f_108 == 6)
			{
				func_232("");
			}
			else
			{
				unk_0x7AF283DA3BA078CD(iParam9);
			}
			func_232(sParam0);
			unk_0x7AF283DA3BA078CD(iParam10);
			if (uParam2->f_108 == 6)
			{
				func_232("");
			}
			else
			{
				unk_0x7AF283DA3BA078CD(65);
			}
			unk_0x7AF283DA3BA078CD(-1);
			func_232("");
			if (uParam2->f_108 == 6)
			{
				func_232("");
			}
			else
			{
				func_232(&sParam4);
			}
			unk_0x504EDFAAB39BF764(uParam2->f_36);
			unk_0xD700C94ACCCAC57A(sParam8);
			unk_0xD700C94ACCCAC57A(sParam8);
			if (func_231(uParam2))
			{
				func_230("DPAD_FRIEND");
			}
			else if (func_229(uParam2))
			{
				func_230("DPAD_FRIEND");
			}
			else if (func_228(uParam2))
			{
				func_230("DPAD_CREW");
			}
			else
			{
				func_230("");
			}
			unk_0xE97F1B22C5E8989F();
		}
	}
}

bool func_228(var uParam0)
{
	return unk_0x7DA173D4FD42F36B(uParam0->f_33, 6);
}

bool func_229(var uParam0)
{
	return unk_0x7DA173D4FD42F36B(uParam0->f_33, 5);
}

void func_230(char* sParam0)
{
	unk_0x7291E2F821FCFC04(sParam0);
	unk_0xD6360E18957BCDD3();
}

int func_231(var uParam0)
{
	if (func_229(uParam0) && func_228(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_232(char* sParam0)
{
	unk_0x8C64B9C850F2EFB2(sParam0);
}

int func_233()
{
	int iVar0;
	
	if (Global_1573687)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_234()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573687)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_235(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, var uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam2 >= func_234() && iParam2 < func_233())
	{
		iParam2 = (iParam2 % 16);
		iVar0 = iParam2 + 1;
		if (Global_1573687)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam9 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573833 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x6A87921801178186(*uParam0))
		{
			if (unk_0x2B859AD680983623(*uParam0, sVar1))
			{
				unk_0x7AF283DA3BA078CD(iParam2);
				if (unk_0x7DA173D4FD42F36B(uParam1->f_33, 8) || uParam1->f_108 == 6)
				{
					func_232("");
				}
				else
				{
					unk_0x7AF283DA3BA078CD(iParam8);
				}
				if (uParam1->f_108 == 6 && !unk_0x226FA58470A21AEF(sParam15))
				{
					func_230(sParam15);
				}
				else
				{
					func_232(&(uParam1->f_1));
				}
				unk_0x7AF283DA3BA078CD(iParam10);
				if (uParam1->f_108 == 6)
				{
					func_232("");
				}
				else
				{
					unk_0x7AF283DA3BA078CD(65);
				}
				if (iParam11 == 1)
				{
					unk_0x7AF283DA3BA078CD(iVar0);
				}
				else
				{
					unk_0x7AF283DA3BA078CD(-1);
				}
				if (func_267())
				{
					func_232("");
				}
				else if (uParam1->f_108 == 6 && !unk_0x226FA58470A21AEF(sParam15))
				{
					unk_0x7291E2F821FCFC04("FM_AE_ONE_INT");
					unk_0x4C5D86B5B659C953(sParam15);
					unk_0xD92C45283BCDA624(iParam17);
					unk_0xD6360E18957BCDD3();
				}
				else if (uParam1->f_108 == 5 && !unk_0x226FA58470A21AEF(sParam15))
				{
					unk_0x7291E2F821FCFC04("FM_AE_ONE_INT");
					unk_0x4C5D86B5B659C953(sParam15);
					unk_0xD92C45283BCDA624(iParam17);
					unk_0xD6360E18957BCDD3();
				}
				else if ((uParam1->f_108 == 7 && !unk_0x226FA58470A21AEF(sParam15)) && !unk_0x226FA58470A21AEF(sParam16))
				{
					unk_0x7291E2F821FCFC04("FM_AE_TWO_INT");
					unk_0x4C5D86B5B659C953(sParam15);
					unk_0x4C5D86B5B659C953(sParam16);
					unk_0xD92C45283BCDA624(iParam17);
					unk_0xD6360E18957BCDD3();
				}
				else if (uParam1->f_108 == 8 && !unk_0x226FA58470A21AEF(&(uParam1->f_104)))
				{
					unk_0x7291E2F821FCFC04("FM_AE_UNIT");
					if (fParam12 != -1f)
					{
						unk_0xCB4A32D75D69162C(fParam12, 1);
					}
					if (iParam9 != -1)
					{
						unk_0xD92C45283BCDA624(iParam9);
					}
					unk_0x4C5D86B5B659C953(&(uParam1->f_104));
					unk_0xD6360E18957BCDD3();
				}
				else if (uParam1->f_108 == 9)
				{
					unk_0x7291E2F821FCFC04("FM_AE_CASH");
					unk_0x87E13A04CCA58668(iParam9, 1);
					unk_0xD6360E18957BCDD3();
				}
				else if (iParam14 > -1)
				{
					if (iParam14 == 0 && !unk_0x226FA58470A21AEF(&(uParam1->f_104)))
					{
						func_230(&(uParam1->f_104));
					}
					else
					{
						func_232("");
					}
				}
				else if (iParam13 != -1)
				{
					unk_0x7291E2F821FCFC04("STRING");
					unk_0x474EBA999C39492E(iParam13, 6);
					unk_0xD6360E18957BCDD3();
				}
				else if (fParam12 != -1f)
				{
					unk_0x7291E2F821FCFC04("NUMBER");
					unk_0xCB4A32D75D69162C(fParam12, 1);
					unk_0xD6360E18957BCDD3();
				}
				else if (iParam9 != -1)
				{
					unk_0x7AF283DA3BA078CD(iParam9);
				}
				else
				{
					func_232("");
				}
				if (uParam1->f_108 == 6)
				{
					func_232("");
				}
				else
				{
					func_232(&sParam3);
				}
				unk_0x504EDFAAB39BF764(uParam1->f_36);
				if (iParam11 == 1 || unk_0x226FA58470A21AEF(sParam7))
				{
					func_232("");
					func_232("");
				}
				else
				{
					unk_0xD700C94ACCCAC57A(sParam7);
					unk_0xD700C94ACCCAC57A(sParam7);
				}
				if (func_231(uParam1))
				{
					func_230("DPAD_FRIEND");
				}
				else if (func_229(uParam1))
				{
					func_230("DPAD_FRIEND");
				}
				else if (func_228(uParam1))
				{
					func_230("DPAD_CREW");
				}
				else
				{
					func_230("");
				}
				unk_0xE97F1B22C5E8989F();
			}
		}
	}
}

int func_236(int iParam0)
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

bool func_237(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_201(iParam0))
		{
			return 0;
		}
	}
	return Global_1610705[iParam0 /*178*/].f_10 != func_55();
}

int func_238(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_208(iParam0)) && !func_243(iParam0))
	{
		iVar0 = func_242();
	}
	iVar1 = func_241(iParam0);
	if (!iVar1 == -1)
	{
		return func_239(iVar1);
	}
	return iVar0;
}

int func_239(int iParam0)
{
	int iVar0;
	
	iVar0 = func_240(iParam0);
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
		
		default:
	}
	return 1;
}

var func_240(int iParam0)
{
	return Global_2413817.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_241(int iParam0)
{
	if (!iParam0 == func_55())
	{
		if (func_237(iParam0, 1))
		{
			return Global_2413817.f_1946.f_11[func_56(iParam0)];
		}
	}
	return -1;
}

int func_242()
{
	return 21;
}

bool func_243(int iParam0)
{
	return func_184(iParam0, 20);
}

char* func_244(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0xF35BDD4618A4A0F0())
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
			if (unk_0xF35BDD4618A4A0F0())
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

int func_245(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_249(iParam3))
	{
		*fParam1 = (func_246(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_236(iParam3))
	{
		*fParam1 = (func_246(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_246(int iParam0, int iParam1)
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
			if (unk_0xF35BDD4618A4A0F0())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_248(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xF35BDD4618A4A0F0())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_247(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_247(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_248(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_249(int iParam0)
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

int func_250(int iParam0)
{
	int iVar0;
	
	iVar0 = func_253(iParam0);
	if (iVar0 == -1)
	{
		func_251(iParam0, 1);
		return 0;
	}
	Global_1348612[iVar0 /*5*/].f_4 = 1;
	return Global_1348612[iVar0 /*5*/].f_2;
}

void func_251(int iParam0, bool bParam1)
{
	if (!func_848(iParam0, 0, 1))
	{
		return;
	}
	if (func_253(iParam0) != -1)
	{
		return;
	}
	if (Global_1348775)
	{
		if (iParam0 == Global_1348775.f_1)
		{
			return;
		}
	}
	if (func_252(iParam0))
	{
		return;
	}
	if (Global_1348813 >= 32)
	{
		return;
	}
	Global_1348780[Global_1348813] = iParam0;
	Global_1348813++;
	if (bParam1)
	{
	}
}

int func_252(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348813)
	{
		if (Global_1348780[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_253(int iParam0)
{
	int iVar0;
	
	if (!func_848(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1348773 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1348773)
	{
		if (Global_1348612[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x7BEEB9D9904F3BAD(Global_1348612[iVar0 /*5*/].f_2) && unk_0x512211B77C9DF624(Global_1348612[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_254(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_254(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1348773)
	{
		return;
	}
	if (unk_0x7BEEB9D9904F3BAD(Global_1348612[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1348612[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xA7ABBEE53A1DE38B(Global_1348612[iParam0 /*5*/].f_2), 64);
			unk_0xCB1D1677ABBD32DC(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x48F723C28E5556E7(Global_1348612[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1348773)
	{
		Global_1348612[iVar32 /*5*/] = { Global_1348612[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_255(&(Global_1348612[iVar32 /*5*/]));
	Global_1348773 = (Global_1348773 - 1);
}

void func_255(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_55();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x17CC0D5008835470())
	{
		uParam0->f_3 = unk_0x201D90648B2AE3CE();
	}
}

struct<4> func_256(int iParam0)
{
	struct<4> Var0;
	
	if (func_848(iParam0, 0, 1))
	{
		Global_2460474 = { func_57(iParam0) };
		if (unk_0xB6FEE919E18FF45B())
		{
			if (func_219(Global_2460474))
			{
				if (!unk_0x8BA2944C243C370E(&Global_2460474))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0x4F07450559D0D1D1(0))
		{
			return Var0;
		}
		if (func_260(&Global_2460474))
		{
			Global_2460404 = { func_258(iParam0) };
			func_257(&Global_2460404, &Var0);
		}
	}
	return Var0;
}

void func_257(var uParam0, var uParam1)
{
	unk_0x86199F6DDB9773B7(uParam0, 35, uParam1);
}

struct<35> func_258(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_259(iParam0))
	{
		return Global_1315947[unk_0xE0BDAFA1A39552D6() /*35*/];
	}
	Var0 = { func_57(iParam0) };
	unk_0xAFAED23A75339868(&Var13, 35, &Var0);
	return Var13;
}

int func_259(int iParam0)
{
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		return 1;
	}
	return 0;
}

int func_260(var uParam0)
{
	if (unk_0x80D93820C5262668())
	{
		if (unk_0x3D340893CA28EFFC() && unk_0x781D726C27D122E2(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_261(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_207(iParam0) || func_265(iParam0)) || func_264(iParam0))
		{
			return 0;
		}
	}
	if (!func_263(iParam0))
	{
		return 0;
	}
	if ((!func_262(iParam0) && Global_2418529[iParam0 /*313*/].f_232 == -1) && !func_274(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_262(int iParam0)
{
	if (func_848(iParam0, 0, 1))
	{
		if (func_848(unk_0xE0BDAFA1A39552D6(), 0, 1))
		{
			if (unk_0x296D7F88818B62E7(iParam0, unk_0xE0BDAFA1A39552D6()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_263(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_131, 22);
}

bool func_264(int iParam0)
{
	if (func_207(iParam0))
	{
		return 1;
	}
	return unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 8);
}

int func_265(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 10) || unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 9));
	}
	return 0;
}

int func_266(int iParam0)
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
		if (unk_0x7DA173D4FD42F36B(Global_1587816[iVar0 /*444*/].f_131, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_267()
{
	switch (func_268(unk_0xE0BDAFA1A39552D6()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_243(unk_0xE0BDAFA1A39552D6()))
	{
		switch (func_180(unk_0xE0BDAFA1A39552D6()))
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

int func_268(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1610705[iVar0 /*178*/];
	}
	return -1;
}

int func_269(int iParam0, int iParam1)
{
	if (Global_1610705[iParam0 /*178*/].f_10.f_28 != -1 && func_270(Global_1610705[iParam0 /*178*/].f_10.f_28))
	{
		return 1;
	}
	if (iParam1 && Global_1610705[iParam0 /*178*/].f_10.f_27 != -1)
	{
		if (func_270(Global_1610705[iParam0 /*178*/].f_10.f_27))
		{
			return 1;
		}
	}
	return 0;
}

int func_270(int iParam0)
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
	return 0;
}

void func_271(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_848(unk_0x801C03D92F1C6755(iVar0), 0, 1))
		{
			iVar1 = unk_0x801C03D92F1C6755(iVar0);
			if (!func_34(iVar1, 0))
			{
				if ((unk_0x296D7F88818B62E7(iVar1, unk_0xE0BDAFA1A39552D6()) || Global_2418529[iVar1 /*313*/].f_232 != -1) || func_274(iVar1))
				{
					if (func_272(iVar1, iParam1, 0))
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

int func_272(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_55())
	{
		if (!bParam2)
		{
			if (func_273(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1610705[iParam0 /*178*/].f_10 != func_55())
		{
			return iParam1 == Global_1610705[iParam0 /*178*/].f_10;
		}
	}
	return 0;
}

int func_273(int iParam0, int iParam1)
{
	if (iParam1 != func_55())
	{
		if (iParam0 != func_55())
		{
			if (Global_1610705[iParam0 /*178*/].f_10 != func_55())
			{
				if (Global_1610705[iParam0 /*178*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_274(int iParam0)
{
	return Global_1587816[iParam0 /*444*/].f_180 != 0;
}

void func_275(var uParam0)
{
	if (unk_0x6A87921801178186(*uParam0))
	{
		unk_0x2B859AD680983623(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x7AF283DA3BA078CD(0);
		unk_0xE97F1B22C5E8989F();
	}
}

void func_276(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1338619.f_2 == 0)
		{
			Global_1338619.f_2 = 1;
		}
	}
	else if (Global_1338619.f_2 == 1)
	{
		Global_1338619.f_2 = 0;
	}
}

void func_277()
{
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4426, 1))
	{
		if (func_279())
		{
			func_278();
		}
	}
}

void func_278()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2428549.f_2191[iVar0 /*72*/].f_2 != 0)
		{
			Global_2428549.f_2191[iVar0 /*72*/].f_2 = 5;
			unk_0xE27C8E42A97895CF(&(Global_2428549.f_2191[iVar0 /*72*/].f_63), 0);
		}
		iVar0++;
	}
}

bool func_279()
{
	return Global_2428549.f_2191[0 /*72*/].f_1 != 0;
}

int func_280()
{
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4426, 0) && func_279())
	{
		return 1;
	}
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4426, 1) && func_279())
	{
		return 1;
	}
	return 0;
}

int func_281()
{
	if (func_279())
	{
		if (func_282(Global_2428549.f_2191[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_282(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 86:
		case 89:
		case 90:
		case 85:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 88:
		case 98:
			return 1;
		
		default:
	}
	return 0;
}

int func_283()
{
	if (func_279())
	{
		if (func_284(Global_2428549.f_2191[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_284(int iParam0)
{
	switch (iParam0)
	{
		case 62:
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
			return 1;
		
		default:
	}
	return 0;
}

void func_285(int iParam0)
{
	Global_1338619.f_1 = Global_1338619;
	Global_1338619 = iParam0;
}

int func_286(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_327(iParam1);
	if (iParam1 == 17)
	{
		bVar5 = true;
	}
	fVar7 = func_326();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_325())
		{
			if (func_324() > 0 && Global_1573687)
			{
				unk_0x1DA4744DA0C4552C();
				unk_0x681D62E6F663F7E0(fVar7);
				unk_0x9AD5FF38501E64A6(18);
				if (unk_0x6146EFE5BC2DD8DC())
				{
					unk_0xBC86BA2C01CE2035();
				}
				unk_0x9AD5FF38501E64A6(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_312())
		{
			func_311(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4429, 26))
	{
		func_311(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_11(&(uParam2->f_19)))
	{
		if (func_324() == 1)
		{
			func_310(bVar6, uParam0, 0);
			func_10(&(uParam2->f_19), 0, 0);
			func_311(uParam0, uParam2, 0);
		}
	}
	if (func_11(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x6146EFE5BC2DD8DC())
		{
			unk_0xBC86BA2C01CE2035();
		}
		unk_0x9AD5FF38501E64A6(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_324() == 0 && !bParam5))
		{
			func_311(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_309();
				if (iParam1 == 23 || iParam1 == 24)
				{
					unk_0x1DA4744DA0C4552C();
				}
				unk_0x9AD5FF38501E64A6(18);
			}
			if (unk_0x7DA173D4FD42F36B(uParam2->f_33, 0))
			{
				Global_1573685 = uParam3;
				Global_1573684 = 1;
				unk_0x681D62E6F663F7E0(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1573686)
					{
						unk_0x99BCB15F954AF579(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar5 == 0)
				{
					func_309();
					if (iParam1 == 23 || iParam1 == 24)
					{
						unk_0x1DA4744DA0C4552C();
					}
					unk_0x9AD5FF38501E64A6(18);
				}
				unk_0x681D62E6F663F7E0(fVar7);
				if (func_310(bVar6, uParam0, 0))
				{
					func_275(uParam0);
					sVar4 = func_307(iParam1, &(Global_1617902.f_76925), bParam4);
					if (bParam4)
					{
						func_304(uParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_297(uParam0, func_301(uParam2), func_298(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_294(uParam0, func_296(), func_295(), -1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1573686;
						func_304(uParam0, sVar4, "", 0, -1, Global_1573686, 1);
					}
					else
					{
						Var0 = { func_292(iParam1) };
						iVar8 = func_287(iParam1);
						func_304(uParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0xE27C8E42A97895CF(&(uParam2->f_33), 0);
				}
			}
		}
	}
	return 0;
}

int func_287(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_291())
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
		
		case 22:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 9:
		case 10:
		case 11:
		case 14:
			iVar0 = 2;
			break;
		
		case 12:
			iVar0 = 17;
			break;
		
		case 13:
			iVar0 = 18;
			break;
		
		case 15:
			if (func_290(unk_0xE0BDAFA1A39552D6()))
			{
				iVar0 = 20;
			}
			if (func_289(unk_0xE0BDAFA1A39552D6()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_288(unk_0xE0BDAFA1A39552D6()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_288(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 4;
}

bool func_289(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 7;
}

bool func_290(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 2;
}

bool func_291()
{
	return Global_1617902.f_1 == 0;
}

struct<4> func_292(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_293(unk_0xE0BDAFA1A39552D6()) || func_288(unk_0xE0BDAFA1A39552D6()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 9:
		case 10:
		case 11:
		case 14:
		case 12:
		case 13:
		case 15:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_1617902.f_23, 16);
			break;
	}
	return Var0;
}

bool func_293(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 5;
}

void func_294(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x6A87921801178186(*uParam0))
	{
		unk_0x2B859AD680983623(*uParam0, "SET_TITLE");
		if (unk_0x226FA58470A21AEF(sParam2))
		{
			func_230(sParam1);
		}
		else
		{
			unk_0x7291E2F821FCFC04("FM_AE_BRACKT");
			unk_0x4C5D86B5B659C953(sParam1);
			unk_0x4C5D86B5B659C953(sParam2);
			unk_0xD6360E18957BCDD3();
		}
		func_230("");
		if (iParam3 != -1)
		{
			unk_0x7AF283DA3BA078CD(iParam3);
		}
		unk_0xE97F1B22C5E8989F();
	}
}

char* func_295()
{
	switch (func_180(unk_0xE0BDAFA1A39552D6()))
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

char* func_296()
{
	switch (func_180(unk_0xE0BDAFA1A39552D6()))
	{
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
			return "PIM_MAGM201";
			break;
		
		case 151:
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
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
	}
	return "";
}

void func_297(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x6A87921801178186(*uParam0))
	{
		unk_0x2B859AD680983623(*uParam0, "SET_TITLE");
		if (unk_0x226FA58470A21AEF(sParam2))
		{
			func_230(sParam1);
		}
		else if (func_268(unk_0xE0BDAFA1A39552D6()) == 133)
		{
			unk_0x7291E2F821FCFC04("FM_AE_BRACKT_C");
			unk_0x4C5D86B5B659C953(sParam1);
			unk_0x4C5D86B5B659C953(sParam2);
			unk_0xD6360E18957BCDD3();
		}
		else
		{
			unk_0x7291E2F821FCFC04("FM_AE_BRACKT");
			unk_0x4C5D86B5B659C953(sParam1);
			unk_0x4C5D86B5B659C953(sParam2);
			unk_0xD6360E18957BCDD3();
		}
		func_230("");
		if (iParam3 != -1)
		{
			unk_0x7AF283DA3BA078CD(iParam3);
		}
		unk_0xE97F1B22C5E8989F();
	}
}

char* func_298(var uParam0)
{
	int iVar0;
	
	iVar0 = func_268(unk_0xE0BDAFA1A39552D6());
	if (func_300())
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
			switch (func_299())
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

int func_299()
{
	if (func_268(unk_0xE0BDAFA1A39552D6()) == 133)
	{
		return Global_2464975.f_4672;
	}
	return -1;
}

bool func_300()
{
	return Global_1587815;
}

char* func_301(var uParam0)
{
	int iVar0;
	
	iVar0 = func_268(unk_0xE0BDAFA1A39552D6());
	if (func_300())
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
			if (func_303() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_303() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_299())
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
			if (func_302() == 1)
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

int func_302()
{
	return Global_2464975.f_4675;
}

int func_303()
{
	if (func_268(unk_0xE0BDAFA1A39552D6()) == 132)
	{
		return Global_2464975.f_4670;
	}
	return -1;
}

void func_304(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x6A87921801178186(*uParam0))
	{
		unk_0x2B859AD680983623(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_232(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x7291E2F821FCFC04(sParam1);
			unk_0xD92C45283BCDA624(iParam5);
			unk_0xD6360E18957BCDD3();
		}
		else
		{
			func_230(sParam1);
		}
		if (func_325() && iParam6)
		{
			if (func_306())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x7291E2F821FCFC04("LBD_DPD_CNT");
			unk_0xD92C45283BCDA624(iVar0);
			unk_0xD92C45283BCDA624(iVar1);
			unk_0xD6360E18957BCDD3();
		}
		else
		{
			func_230(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x7AF283DA3BA078CD(iParam4);
			if (func_305(unk_0xE0BDAFA1A39552D6()))
			{
				unk_0x7AF283DA3BA078CD(166);
			}
		}
		unk_0xE97F1B22C5E8989F();
	}
}

int func_305(int iParam0)
{
	if (func_290(iParam0) || func_289(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_306()
{
	return Global_1573687;
}

char* func_307(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_308();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573851 == 0)
		{
			Global_1573851 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x226FA58470A21AEF(sParam1))
	{
		if (Global_1573851 == 1)
		{
			Global_1573851 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573851 == 0)
		{
			Global_1573851 = 1;
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
			case 6:
			case 22:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 15:
			case 11:
			case 14:
			case 12:
			case 10:
			case 9:
			case 13:
			case 16:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 18:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_308()
{
	if (unk_0x6CEB82F05DCED56D())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x80BCEDDB598B6BA5())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x8683BD7E2B2607B8())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x2E1D5B997B3CEA7A())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_309()
{
	Global_36642 = 1;
}

bool func_310(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0xDDEDAA5105426019("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0xDDEDAA5105426019("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0xDDEDAA5105426019("mp_matchmaking_card");
	}
	return unk_0x6A87921801178186(*uParam1);
}

void func_311(var uParam0, var uParam1, bool bParam2)
{
	unk_0x99BCB15F954AF579(&(uParam1->f_33), 7);
	Global_1573685 = 0;
	func_223();
	Global_1573684 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_11(&(uParam1->f_19)))
		{
			func_9(&(uParam1->f_19));
		}
	}
	if (unk_0x6A87921801178186(*uParam0))
	{
		unk_0x0E4537BE1D04DAC7(uParam0);
	}
	if (unk_0x7DA173D4FD42F36B(uParam1->f_33, 0))
	{
		unk_0x99BCB15F954AF579(&(uParam1->f_33), 0);
	}
	unk_0x681D62E6F663F7E0(0f);
}

int func_312()
{
	if (func_323())
	{
		return 0;
	}
	if (func_322())
	{
		return 0;
	}
	if (!func_320())
	{
		return 0;
	}
	if (!func_318())
	{
		return 0;
	}
	if (func_317(8, -1))
	{
		return 0;
	}
	if (func_324() == 2)
	{
		return 0;
	}
	if (Global_2464975.f_4404)
	{
		return 0;
	}
	if (func_316())
	{
		return 0;
	}
	else if (!func_90(unk_0xE0BDAFA1A39552D6(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_315(1) || func_313(1)) || Global_17118.f_124) || Global_17118)
	{
		return 0;
	}
	if (unk_0x3DC360442A11BB38())
	{
		return 0;
	}
	if (func_93(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (Global_1722816)
	{
		return 0;
	}
	if (Global_1722819)
	{
		return 0;
	}
	if (func_168(0))
	{
		return 0;
	}
	if (unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_7, 4))
	{
		return 0;
	}
	return 1;
}

int func_313(bool bParam0)
{
	if (unk_0xA72B7766889EBB86())
	{
		if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
		{
			if (func_314(unk_0x06736567F820A39E()))
			{
				if (unk_0xE9F7E89BC2352535(0, 25) || unk_0xE9F7E89BC2352535(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17118.f_130)
	{
		return 0;
	}
	if (unk_0xE9F7E89BC2352535(0, 19) || (!bParam0 && unk_0x7A4571218C06A722(0, 19)))
	{
		return 1;
	}
	if (unk_0x55812CD5A331E1F8())
	{
		if (((unk_0xE9F7E89BC2352535(0, 166) || unk_0xE9F7E89BC2352535(0, 167)) || unk_0xE9F7E89BC2352535(0, 168)) || unk_0xE9F7E89BC2352535(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x7A4571218C06A722(0, 166) || unk_0x7A4571218C06A722(0, 167)) || unk_0x7A4571218C06A722(0, 168)) || unk_0x7A4571218C06A722(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_314(int iParam0)
{
	int iVar0;
	
	if (unk_0x8B2DC483C96C65F6())
	{
		if (!unk_0xCFC04A38F256EE06(iParam0))
		{
			unk_0x47BF380FF078FA9F(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_315(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17118.f_4 && Global_17118.f_104 == 4);
	}
	return Global_17118.f_4;
}

bool func_316()
{
	return Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_180 != 0;
}

bool func_317(int iParam0, int iParam1)
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
	return unk_0x7DA173D4FD42F36B(Global_1338622.f_949, iParam0);
}

int func_318()
{
	if (func_319() == 0)
	{
		return 1;
	}
	return 0;
}

int func_319()
{
	return Global_1312466.f_18;
}

int func_320()
{
	if (func_321())
	{
		return 1;
	}
	if (unk_0x4FF34B5B023875E1())
	{
		return 0;
	}
	if (unk_0x58CFBE8B8644D59B() || unk_0xEC708A793EB17979())
	{
		return 0;
	}
	if (unk_0xE80DFF2CE01EA7DA())
	{
		return 0;
	}
	return 1;
}

bool func_321()
{
	return Global_1312438;
}

bool func_322()
{
	return Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/] == 5;
}

bool func_323()
{
	return unk_0x1ADBAAC322D61F73() <= Global_17257.f_5745 + 100;
}

int func_324()
{
	return Global_1338622.f_68;
}

int func_325()
{
	if (Global_1573686 > 16)
	{
		return 1;
	}
	return 0;
}

float func_326()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x3F3FC0D85C84A6CE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_327(int iParam0)
{
	switch (iParam0)
	{
		case 17:
		case 23:
		case 24:
			return 1;
			break;
	}
	return 0;
}

int func_328()
{
	if (func_329(unk_0xE0BDAFA1A39552D6()))
	{
		return Global_1318849;
	}
	return 0;
}

int func_329(int iParam0)
{
	if (unk_0x17CC0D5008835470())
	{
		if (func_34(iParam0, 0))
		{
			return unk_0x7FE82332EF233898(iParam0);
		}
	}
	return 0;
}

int func_330()
{
	if (func_328())
	{
		return 1;
	}
	if (func_264(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (func_300())
	{
		return 1;
	}
	if (func_208(unk_0xE0BDAFA1A39552D6()))
	{
		switch (func_268(unk_0xE0BDAFA1A39552D6()))
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
				if (!func_331(unk_0xE0BDAFA1A39552D6()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_331(unk_0xE0BDAFA1A39552D6()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_331(unk_0xE0BDAFA1A39552D6()))
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

bool func_331(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 4);
}

int func_332(int iParam0)
{
	if ((iParam0 == 24 && func_208(unk_0xE0BDAFA1A39552D6())) && !func_243(unk_0xE0BDAFA1A39552D6()))
	{
		return 1;
	}
	if (iParam0 == 23)
	{
		if (func_181(unk_0xE0BDAFA1A39552D6(), 0) && func_243(unk_0xE0BDAFA1A39552D6()))
		{
			return 1;
		}
		if (func_333(unk_0xE0BDAFA1A39552D6()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_333(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_208(iParam0) && !func_207(iParam0)) && !unk_0x7DA173D4FD42F36B(Global_1610705[iParam0 /*178*/].f_1, 8));
	bVar2 = func_243(iParam0);
	uVar3 = func_341();
	uVar4 = func_335();
	if ((bVar1 && (func_206(iParam0) || func_205(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_202(iParam0)) && !func_334(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2464975.f_4685.f_22 != iVar0)
	{
		Global_2464975.f_4685.f_22 = iVar0;
	}
	return iVar0;
}

bool func_334(int iParam0)
{
	return func_184(iParam0, 19);
}

int func_335()
{
	if ((func_184(unk_0xE0BDAFA1A39552D6(), 21) || func_184(unk_0xE0BDAFA1A39552D6(), 22)) || func_338())
	{
		return 1;
	}
	if (func_336())
	{
		func_185(22);
		return 1;
	}
	return 0;
}

int func_336()
{
	if (func_181(unk_0xE0BDAFA1A39552D6(), 0))
	{
		if ((func_341() && !func_337()) || func_199(unk_0xE0BDAFA1A39552D6(), 21))
		{
			if (!func_184(unk_0xE0BDAFA1A39552D6(), 27))
			{
				return 1;
			}
		}
		else
		{
			func_183(27);
		}
	}
	return 0;
}

bool func_337()
{
	return Global_1312416.f_1;
}

bool func_338()
{
	return func_339(284, -1);
}

int func_339(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2494881[iParam0 /*5*/][func_340(iParam1)];
	if (unk_0x4E4F28F5B7A7C06C(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_340(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_36();
		if (iVar1 > -1)
		{
			Global_2473567 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2473567 = 1;
		}
	}
	return iVar0;
}

bool func_341()
{
	return Global_1312416;
}

int func_342()
{
	int iVar0;
	
	iVar0 = -1;
	if (!func_34(unk_0xE0BDAFA1A39552D6(), 0))
	{
		iVar0 = unk_0x490BA5FDD7EE47A9();
	}
	else
	{
		iVar0 = func_343();
	}
	if (iVar0 != -1)
	{
		return unk_0x7DA173D4FD42F36B(Local_366[iVar0 /*11*/].f_1, 1);
	}
	return 0;
}

int func_343()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_355;
	if (unk_0xA27C9E8196C79D22(iVar1))
	{
		if (unk_0x605885F0A8AC6672(iVar1))
		{
			iVar2 = unk_0xBD1E178ABA0E03F1(iVar1);
			iVar0 = iVar2;
		}
	}
	return iVar0;
}

bool func_344()
{
	return Local_96.f_196 == 99;
}

void func_345()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xF33D012D28E3DB68(1))
	{
		iVar1 = unk_0xF0310CD279B9DC23(1, iVar0);
		switch (iVar1)
		{
			case 179:
				func_346(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_346(int iParam0)
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
	
	if (unk_0x6E7EC37CC38579DB(1, iParam0, &Var0, 10))
	{
		iVar29 = 0;
		while (iVar29 < 10)
		{
			if (!unk_0x7DA173D4FD42F36B(Local_96.f_209, iVar29))
			{
				if (!unk_0x7DA173D4FD42F36B(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_6, iVar29))
				{
					if (unk_0xC1EDB61CE0A4B94E(Var0.f_0))
					{
						if (unk_0xFCBEC4C2079B0872(Var0.f_0))
						{
							if (!unk_0x7DA173D4FD42F36B(Local_96.f_205, iVar29))
							{
								if (!unk_0x7DA173D4FD42F36B(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_5, iVar29))
								{
									if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar29 /*10*/].f_2))
									{
										if (unk_0xC1EDB61CE0A4B94E(unk_0xA9B72300DA155F92(Local_96.f_2[iVar29 /*10*/].f_2)))
										{
											if (unk_0x43AB2E726FCE3BF7(Var0.f_0) == unk_0xA9B72300DA155F92(Local_96.f_2[iVar29 /*10*/].f_2))
											{
												if (unk_0xC1EDB61CE0A4B94E(Var0.f_1))
												{
													if (unk_0x77CB3F400804EDD1(Var0.f_1))
													{
														if (unk_0x406B8F450D0105AB(Var0.f_1) == unk_0x06736567F820A39E())
														{
															if (func_797() == Local_96.f_218)
															{
																unk_0xE27C8E42A97895CF(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_5), iVar29);
															}
														}
														else if (unk_0x4E75E5867592AC01(unk_0x406B8F450D0105AB(Var0.f_1)))
														{
															iVar30 = unk_0x90CB634380C802C7(unk_0x406B8F450D0105AB(Var0.f_1));
															if (!unk_0x605885F0A8AC6672(iVar30))
															{
																unk_0xE27C8E42A97895CF(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_5), iVar29);
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
						else if (unk_0x77CB3F400804EDD1(Var0.f_0))
						{
							iVar11 = unk_0x406B8F450D0105AB(Var0.f_0);
							if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar29 /*10*/].f_1))
							{
								if (iVar11 == unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar29 /*10*/].f_1))
								{
									if (unk_0xC1EDB61CE0A4B94E(Var0.f_1))
									{
										if (unk_0x77CB3F400804EDD1(Var0.f_1))
										{
											iVar10 = unk_0x406B8F450D0105AB(Var0.f_1);
											if (unk_0x4E75E5867592AC01(iVar10))
											{
												iVar13 = unk_0x90CB634380C802C7(iVar10);
												if (unk_0x605885F0A8AC6672(iVar13))
												{
													if (Var0.f_3)
													{
														if (iVar13 == unk_0xE0BDAFA1A39552D6())
														{
															unk_0xE27C8E42A97895CF(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_6), iVar29);
															if (!func_344())
															{
																Var15.f_2 = 206;
																Var15.f_10 = unk_0xE0BDAFA1A39552D6();
																func_352(Var15, func_353(0));
															}
														}
													}
												}
												else if (!unk_0x7DA173D4FD42F36B(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_7, iVar29))
												{
													if (Var0.f_3)
													{
														unk_0xE27C8E42A97895CF(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_7), iVar29);
													}
												}
											}
											else if (!unk_0x7DA173D4FD42F36B(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_8, iVar29))
											{
												if (Var0.f_3)
												{
													unk_0xE27C8E42A97895CF(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_8), iVar29);
												}
											}
										}
										else if (!unk_0x7DA173D4FD42F36B(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_8, iVar29))
										{
											if (Var0.f_3)
											{
												unk_0xE27C8E42A97895CF(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_8), iVar29);
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
		if (!unk_0x7DA173D4FD42F36B(iLocal_719, 15))
		{
			if (unk_0xC1EDB61CE0A4B94E(Var0.f_0))
			{
				if (unk_0x77CB3F400804EDD1(Var0.f_0))
				{
					iVar11 = unk_0x406B8F450D0105AB(Var0.f_0);
					if (func_351(unk_0x79469DA5833EACA8(iVar11)))
					{
						unk_0xE27C8E42A97895CF(&iLocal_719, 15);
					}
				}
				else if (unk_0xFCBEC4C2079B0872(Var0.f_0))
				{
					if (func_350(unk_0x79469DA5833EACA8(Var0.f_0)))
					{
						if (!func_349(unk_0x06736567F820A39E(), unk_0x43AB2E726FCE3BF7(Var0.f_0), 0))
						{
							if (!func_348(unk_0x43AB2E726FCE3BF7(Var0.f_0), 0))
							{
								unk_0xE27C8E42A97895CF(&iLocal_719, 15);
							}
						}
					}
				}
			}
		}
	}
	if (func_342())
	{
		if (!func_184(unk_0xE0BDAFA1A39552D6(), 20))
		{
			if (unk_0xC1EDB61CE0A4B94E(Var0.f_0))
			{
				if (unk_0x77CB3F400804EDD1(Var0.f_0))
				{
					iVar11 = unk_0x406B8F450D0105AB(Var0.f_0);
					if (unk_0x4E75E5867592AC01(iVar11))
					{
						iVar12 = unk_0x90CB634380C802C7(iVar11);
						if (unk_0xC1EDB61CE0A4B94E(Var0.f_1))
						{
							if (unk_0x77CB3F400804EDD1(Var0.f_1))
							{
								iVar10 = unk_0x406B8F450D0105AB(Var0.f_1);
								if (unk_0x4E75E5867592AC01(iVar10))
								{
									iVar13 = unk_0x90CB634380C802C7(iVar10);
									if (iVar13 == unk_0xE0BDAFA1A39552D6())
									{
										if (unk_0x605885F0A8AC6672(iVar12))
										{
											if (func_237(iVar12, 1))
											{
												if (Local_96.f_218 > -1)
												{
													iVar14 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(Local_96.f_218));
													if (func_272(iVar12, iVar14, 1))
													{
														func_347(0);
														func_778();
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

void func_347(int iParam0)
{
	if (!func_243(unk_0xE0BDAFA1A39552D6()))
	{
		if (iParam0 || func_333(unk_0xE0BDAFA1A39552D6()) != 0)
		{
			func_185(20);
			if (func_208(unk_0xE0BDAFA1A39552D6()))
			{
				if (!unk_0x7DA173D4FD42F36B(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1, 8))
				{
					unk_0xE27C8E42A97895CF(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1), 8);
				}
			}
		}
	}
}

int func_348(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0xD6B335B6F8116876(iParam0) + 1;
	if (!unk_0xBDA1F5E8A36BFA07(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x5B4FEA5F286F0C8F(iParam0, (iVar0 - 1)))
			{
				iVar2 = unk_0x4321FC7479614822(iParam0, (iVar0 - 1));
				if (bParam1)
				{
					if (unk_0xC1EDB61CE0A4B94E(iVar2))
					{
						if (unk_0x4E75E5867592AC01(iVar2))
						{
							return 1;
						}
					}
				}
				else if (!unk_0xCFC04A38F256EE06(iVar2))
				{
					if (unk_0x4E75E5867592AC01(iVar2))
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

int func_349(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xC1EDB61CE0A4B94E(iParam0) && !unk_0xBDA1F5E8A36BFA07(iParam0, 0))
	{
		if (unk_0xC1EDB61CE0A4B94E(iParam1) && !unk_0xBDA1F5E8A36BFA07(iParam1, 0))
		{
			if (unk_0x93E49C491856D7AD(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_350(int iParam0)
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

int func_351(int iParam0)
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

void func_352(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0xE0BDAFA1A39552D6();
	if (!iParam14 == 0)
	{
		unk_0xCCAB9843EFA5C08A(1, &Param0, 14, iParam14);
	}
}

int func_353(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xC4A9F8E5EC59EB4F())
	{
		if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar1)))
		{
			iVar2 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iVar1));
			if (func_848(iVar2, 0, 0))
			{
				if (iVar2 != unk_0xE0BDAFA1A39552D6() || iParam0)
				{
					unk_0xE27C8E42A97895CF(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_354()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_34(unk_0xE0BDAFA1A39552D6(), 0))
	{
		if (unk_0x7DA173D4FD42F36B(iLocal_719, 10))
		{
			unk_0x99BCB15F954AF579(&iLocal_719, 10);
		}
		return;
	}
	iVar0 = Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_355;
	if (!unk_0x7DA173D4FD42F36B(iLocal_719, 10))
	{
		if (Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1 != 0)
		{
			Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1 = 0;
		}
		unk_0xE27C8E42A97895CF(&iLocal_719, 10);
	}
	if (!unk_0x7DA173D4FD42F36B(iLocal_719, 11))
	{
		unk_0xE27C8E42A97895CF(&iLocal_719, 11);
		func_711();
	}
	if (unk_0xA27C9E8196C79D22(iVar0))
	{
		if (unk_0x605885F0A8AC6672(iVar0))
		{
			uVar1 = unk_0xBD1E178ABA0E03F1(iVar0);
			iVar2 = uVar1;
			iVar3 = Local_366[iVar2 /*11*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_605();
					func_590();
					func_581();
					func_355();
					break;
				
				case 2:
					func_355();
					break;
				
				case 3:
					func_810();
					break;
				}
			}
	}
}

void func_355()
{
	struct<10> Var0;
	int iVar10;
	char* sVar11;
	var uVar12;
	int iVar13;
	int iVar14;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	iVar10 = func_55();
	iVar13 = unk_0x490BA5FDD7EE47A9();
	iVar14 = unk_0xE0BDAFA1A39552D6();
	if (func_34(unk_0xE0BDAFA1A39552D6(), 0))
	{
		iVar13 = func_343();
		iVar14 = Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_355;
	}
	if (!unk_0x7DA173D4FD42F36B(Local_366[iVar13 /*11*/].f_1, 4))
	{
		if (!unk_0x7DA173D4FD42F36B(iLocal_719, 3))
		{
			if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 1))
			{
				if (iVar13 == Local_96.f_218 || func_797() == Local_96.f_218)
				{
					if (func_333(unk_0xE0BDAFA1A39552D6()) >= 2)
					{
						sVar11 = func_577(iVar14);
						uVar12 = func_576(iVar14);
						func_574(86, "BIGM_DEFENDED", "BIGM_CONTRAS", sVar11, uVar12, 0, -1, -1, -1, 2, -1);
					}
					if (iVar14 == unk_0xE0BDAFA1A39552D6())
					{
						if (!unk_0x7DA173D4FD42F36B(iLocal_719, 6))
						{
							func_573(1, 1);
							unk_0xE27C8E42A97895CF(&iLocal_719, 6);
						}
						func_470(169, 1, &Var0);
						unk_0xF746C048B9686846(unk_0xE0BDAFA1A39552D6());
					}
				}
				else if (func_342())
				{
				}
				iLocal_728 = func_20();
				iLocal_729 = (func_20() - func_469(&(Local_96.f_226), 0, 0));
				unk_0xE27C8E42A97895CF(&iLocal_719, 3);
			}
			else if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 4))
			{
				if (unk_0x7DA173D4FD42F36B(Local_366[iVar13 /*11*/].f_1, 14))
				{
					if (Local_96.f_221 >= 0)
					{
						iVar10 = unk_0x801C03D92F1C6755(Local_96.f_221);
						if (iVar10 == iVar14)
						{
							func_449(86, "BIGM_SECURED", "BIGM_CONTRAYR", 1, -1, 2);
						}
						else if (func_333(iVar14) >= 2)
						{
							sVar11 = func_577(iVar14);
							uVar12 = func_576(iVar14);
							func_574(86, "BIGM_SECURED", "BIGM_CONTRAGR", sVar11, uVar12, 0, -1, -1, -1, 2, -1);
						}
					}
					if (iVar14 == unk_0xE0BDAFA1A39552D6())
					{
						if (!unk_0x7DA173D4FD42F36B(iLocal_719, 6))
						{
							func_573(1, 1);
							unk_0xE27C8E42A97895CF(&iLocal_719, 6);
						}
						func_470(169, 1, &Var0);
						unk_0xF746C048B9686846(unk_0xE0BDAFA1A39552D6());
					}
					iLocal_728 = func_20();
					iLocal_729 = (func_20() - func_469(&(Local_96.f_226), 0, 0));
					unk_0xE27C8E42A97895CF(&iLocal_719, 3);
				}
			}
			else if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 3))
			{
				if (unk_0x490BA5FDD7EE47A9() == Local_96.f_218 || func_797() == Local_96.f_218)
				{
					if (func_333(iVar14) >= 2)
					{
						sVar11 = func_577(iVar14);
						uVar12 = func_576(unk_0xE0BDAFA1A39552D6());
						func_574(87, "BIGM_DCLOST", "BIGM_CONTRAFD", sVar11, uVar12, 0, -1, -1, -1, 2, -1);
					}
					if (iVar14 == unk_0xE0BDAFA1A39552D6())
					{
						if (!unk_0x7DA173D4FD42F36B(iLocal_719, 6))
						{
							func_573(0, 2);
							unk_0xE27C8E42A97895CF(&iLocal_719, 6);
						}
						func_470(169, 0, &Var0);
					}
				}
				iLocal_728 = func_20();
				iLocal_729 = (func_20() - func_469(&(Local_96.f_226), 0, 0));
				unk_0xE27C8E42A97895CF(&iLocal_719, 3);
			}
			else if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 9))
			{
				if (func_435())
				{
					if (func_333(iVar14) >= 2)
					{
						sVar11 = func_577(iVar14);
						uVar12 = func_576(iVar14);
						func_574(87, "BIGM_DCLOST", "BIGM_CONTRALS", sVar11, uVar12, 0, -1, -1, -1, 2, -1);
					}
				}
				if (iVar14 == unk_0xE0BDAFA1A39552D6())
				{
					if (!unk_0x7DA173D4FD42F36B(iLocal_719, 6))
					{
						func_573(0, 2);
						unk_0xE27C8E42A97895CF(&iLocal_719, 6);
					}
					func_470(169, 0, &Var0);
				}
				iLocal_728 = func_20();
				iLocal_729 = (func_20() - func_469(&(Local_96.f_226), 0, 0));
				unk_0xE27C8E42A97895CF(&iLocal_719, 3);
			}
			else if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 8))
			{
				if (func_435())
				{
					if (func_333(iVar14) >= 2)
					{
						sVar11 = func_577(iVar14);
						uVar12 = func_576(iVar14);
						func_574(87, "BIGM_DCLOST", "BIGM_CONTRALS", sVar11, uVar12, 0, -1, -1, -1, 2, -1);
					}
				}
				if (iVar14 == unk_0xE0BDAFA1A39552D6())
				{
					if (!unk_0x7DA173D4FD42F36B(iLocal_719, 6))
					{
						func_573(0, 2);
						unk_0xE27C8E42A97895CF(&iLocal_719, 6);
					}
					func_470(169, 0, &Var0);
				}
				iLocal_728 = func_20();
				iLocal_729 = (func_20() - func_469(&(Local_96.f_226), 0, 0));
				unk_0xE27C8E42A97895CF(&iLocal_719, 3);
			}
			else if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 15))
			{
				if (func_435())
				{
					if (func_333(iVar14) >= 2)
					{
						sVar11 = func_577(iVar14);
						uVar12 = func_576(iVar14);
						func_574(87, "BIGM_DCLOST", "BIGM_CONTRALS", sVar11, uVar12, 0, -1, -1, -1, 2, -1);
					}
				}
				if (iVar14 == unk_0xE0BDAFA1A39552D6())
				{
					if (!unk_0x7DA173D4FD42F36B(iLocal_719, 6))
					{
						func_573(0, 2);
						unk_0xE27C8E42A97895CF(&iLocal_719, 6);
					}
					func_470(169, 0, &Var0);
				}
				iLocal_728 = func_20();
				iLocal_729 = (func_20() - func_469(&(Local_96.f_226), 0, 0));
				unk_0xE27C8E42A97895CF(&iLocal_719, 3);
			}
			else if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 5))
			{
				if (func_435())
				{
					if (func_796())
					{
						if (func_333(iVar14) >= 2)
						{
						}
					}
					else if (func_333(iVar14) >= 2)
					{
						func_449(87, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2);
					}
				}
				if (iVar14 == unk_0xE0BDAFA1A39552D6())
				{
					if (!unk_0x7DA173D4FD42F36B(iLocal_719, 6))
					{
						func_573(0, 8);
						unk_0xE27C8E42A97895CF(&iLocal_719, 6);
					}
					func_470(169, 0, &Var0);
				}
				unk_0xE27C8E42A97895CF(&iLocal_719, 3);
			}
		}
		if (unk_0x7DA173D4FD42F36B(iLocal_719, 3))
		{
			func_711();
			if (unk_0x490BA5FDD7EE47A9() == Local_96.f_218)
			{
				if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 16) && !unk_0x7DA173D4FD42F36B(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1, 13))
				{
					if ((((unk_0x7DA173D4FD42F36B(Local_96.f_1, 15) || unk_0x7DA173D4FD42F36B(Local_96.f_1, 8)) || unk_0x7DA173D4FD42F36B(Local_96.f_1, 3)) || func_11(&(Local_96.f_226))) || (func_344() && unk_0x7DA173D4FD42F36B(Local_96.f_1, 9)))
					{
						func_381();
					}
					else
					{
						unk_0xE27C8E42A97895CF(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1), 13);
						if (!func_380(38))
						{
							func_379(38);
						}
					}
					if (iLocal_730 == 2)
					{
						unk_0xE27C8E42A97895CF(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1), 13);
					}
					if (iLocal_730 == 3)
					{
						unk_0xE27C8E42A97895CF(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1), 13);
					}
				}
			}
			if (!unk_0x7DA173D4FD42F36B(iLocal_720, 8))
			{
				func_377();
				func_375();
				unk_0xE27C8E42A97895CF(&iLocal_720, 8);
			}
			if (!unk_0x7DA173D4FD42F36B(iLocal_719, 7))
			{
				if (Local_96.f_219 != -1)
				{
					if (unk_0x7DA173D4FD42F36B(iLocal_719, 5))
					{
						if (unk_0xA27C9E8196C79D22(unk_0x801C03D92F1C6755(Local_96.f_219)))
						{
							func_373(unk_0x801C03D92F1C6755(Local_96.f_219), 432, 0);
							func_371(unk_0x801C03D92F1C6755(Local_96.f_219), 1, 0);
							func_370(unk_0x801C03D92F1C6755(Local_96.f_219), 0, 0);
							func_369(unk_0x801C03D92F1C6755(Local_96.f_219), 0);
							func_368(unk_0x801C03D92F1C6755(Local_96.f_219), Global_262145.f_10542, 0);
							unk_0xE27C8E42A97895CF(&iLocal_719, 7);
						}
					}
				}
			}
			if (func_356(&uLocal_731, 1) && (unk_0x7DA173D4FD42F36B(Local_96.f_1, 16) || unk_0x7DA173D4FD42F36B(Local_96.f_1, 5)))
			{
				if (iVar13 == unk_0x490BA5FDD7EE47A9())
				{
					unk_0xE27C8E42A97895CF(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1), 4);
				}
			}
		}
	}
}

int func_356(var uParam0, bool bParam1)
{
	bool bVar0;
	
	func_185(29);
	if ((*uParam0 > 0 && !func_279()) && func_333(unk_0xE0BDAFA1A39552D6()) != 0)
	{
		if (!func_367())
		{
			func_366();
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
				unk_0xE27C8E42A97895CF(&(Global_1734808.f_3), 2);
				if (bParam1)
				{
					unk_0xE27C8E42A97895CF(&(Global_2464975.f_4426), 0);
					func_10(&(uParam0->f_5), 0, 0);
				}
				func_10(&(uParam0->f_1), 0, 0);
				func_365(uParam0, 1);
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
				func_360();
				func_365(uParam0, 2);
			}
			break;
		
		case 2:
			func_360();
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_357(func_358()))
				{
					unk_0x310F6B4E168A8F5D(1);
				}
				func_365(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0x99BCB15F954AF579(&(Global_2464975.f_4426), 1);
				unk_0x99BCB15F954AF579(&(Global_1734808.f_3), 2);
				func_365(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x99BCB15F954AF579(&(Global_2464975.f_4426), 1);
			unk_0x99BCB15F954AF579(&(Global_1734808.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_357(char* sParam0)
{
	unk_0xC11856C04AAC5813(sParam0);
	return unk_0xBA2B1F42B35E6698(0);
}

char* func_358()
{
	if (func_270(func_359()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_359()
{
	return Global_1616402;
}

void func_360()
{
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4426, 0))
	{
		if ((((((((!unk_0xCA914B57A3600215() && !unk_0x7DA173D4FD42F36B(Global_2464975.f_743, 2)) && func_848(unk_0xE0BDAFA1A39552D6(), 1, 1)) && !Global_68089) && !Global_52961) && !unk_0x4FF34B5B023875E1()) && !func_184(unk_0xE0BDAFA1A39552D6(), 22)) && func_333(unk_0xE0BDAFA1A39552D6()) != 0) && !func_363(func_364()))
		{
			unk_0xE27C8E42A97895CF(&(Global_2464975.f_4426), 1);
			func_362(func_358(), -1);
			func_361(1);
			unk_0x99BCB15F954AF579(&(Global_2464975.f_4426), 0);
		}
	}
}

void func_361(int iParam0)
{
	if (iParam0 && !func_279())
	{
		unk_0x962E604CCA53388F(-1, "Boss_Message_Orange", "GTAO_Boss_Goons_FM_Soundset", 0);
	}
}

void func_362(char* sParam0, int iParam1)
{
	unk_0x15835437CE85AEA4(sParam0);
	unk_0x65FD8FA7D3B7F717(0, 0, 0, iParam1);
}

int func_363(int iParam0)
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

int func_364()
{
	var uVar0;
	
	uVar0 = unk_0x47B34031F915C179();
	if (unk_0x2F6869889D97DFED(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x2F6869889D97DFED(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	return 0;
}

void func_365(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_366()
{
	Global_2445584 = 1;
}

int func_367()
{
	if (func_180(unk_0xE0BDAFA1A39552D6()) == 170)
	{
		return 1;
	}
	return 0;
}

void func_368(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return;
	}
	if (unk_0x9F7CDE7B20BCB675(unk_0x47B34031F915C179()) == func_191())
	{
		return;
	}
	iVar0 = iParam0;
	if (!unk_0xDF49ABF9204CC801(Global_2412936.f_691[iParam0]) || Global_2412936.f_691[iParam0] == unk_0xAE832DCCE9CD3242())
	{
		if (bParam2)
		{
			unk_0xE27C8E42A97895CF(&(Global_2412936.f_388), iVar0);
			Global_2412936.f_493[iVar0] = uParam1;
			Global_2412936.f_691[iParam0] = unk_0xAE832DCCE9CD3242();
		}
		else
		{
			unk_0x99BCB15F954AF579(&(Global_2412936.f_388), iVar0);
			Global_2412936.f_691[iParam0] = -1;
		}
	}
}

void func_369(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xE27C8E42A97895CF(&(Global_2412936.f_365), iParam0);
	}
	else
	{
		unk_0x99BCB15F954AF579(&(Global_2412936.f_365), iParam0);
	}
	if (unk_0xCDB4C4200A9B478A(Global_2412936[iParam0]))
	{
		if (bParam1)
		{
			unk_0xF1C629E826767C2C(Global_2412936[iParam0], 0);
		}
		else
		{
			unk_0xF1C629E826767C2C(Global_2412936[iParam0], 1);
		}
	}
}

void func_370(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_848(iParam0, 1, 1))
		{
			Global_2412936.f_625[iParam0] = unk_0xAE832DCCE9CD3242();
			unk_0xE27C8E42A97895CF(&(Global_2412936.f_364), iParam0);
			func_369(iParam0, bParam2);
		}
	}
	else
	{
		func_369(iParam0, bParam2);
		unk_0x99BCB15F954AF579(&(Global_2412936.f_364), iParam0);
		Global_2412936.f_625[iParam0] = -1;
	}
}

void func_371(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return;
	}
	if (unk_0x9F7CDE7B20BCB675(unk_0x47B34031F915C179()) == func_191())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_372(iParam0))
	{
		if (bParam2)
		{
			unk_0xE27C8E42A97895CF(&(Global_2412936.f_386), iVar0);
			Global_2412936.f_559[iParam0] = unk_0xAE832DCCE9CD3242();
			Global_2412936.f_427[iVar0] = iParam1;
		}
		else
		{
			unk_0x99BCB15F954AF579(&(Global_2412936.f_386), iVar0);
			Global_2412936.f_559[iParam0] = -1;
		}
	}
}

int func_372(int iParam0)
{
	if (!unk_0xDF49ABF9204CC801(Global_2412936.f_559[iParam0]) || Global_2412936.f_559[iParam0] == unk_0xAE832DCCE9CD3242())
	{
		return 1;
	}
	return 0;
}

void func_373(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_55())
	{
		return;
	}
	if (unk_0x9F7CDE7B20BCB675(unk_0x47B34031F915C179()) == func_191())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0xDF49ABF9204CC801(Global_2412936.f_526[iParam0]) || Global_2412936.f_526[iParam0] == unk_0xAE832DCCE9CD3242())
	{
		if (bParam2)
		{
			if (!unk_0x7DA173D4FD42F36B(Global_2412936.f_385, iVar0))
			{
				func_374();
			}
			unk_0xE27C8E42A97895CF(&(Global_2412936.f_385), iVar0);
			Global_2412936.f_394[iVar0] = uVar1;
			Global_2412936.f_526[iParam0] = unk_0xAE832DCCE9CD3242();
		}
		else
		{
			if (unk_0x7DA173D4FD42F36B(Global_2412936.f_385, iVar0))
			{
				func_374();
			}
			unk_0x99BCB15F954AF579(&(Global_2412936.f_385), iVar0);
			Global_2412936.f_526[iParam0] = -1;
		}
	}
}

void func_374()
{
	Global_2412936.f_880 = 1;
}

void func_375()
{
	int iVar0;
	int iVar1;
	
	if (!func_344())
	{
		return;
	}
	if (!unk_0x7DA173D4FD42F36B(iLocal_719, 9))
	{
		unk_0xE27C8E42A97895CF(&iLocal_719, 9);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x801C03D92F1C6755(iVar0);
			if (unk_0xA27C9E8196C79D22(iVar1))
			{
				if (iVar1 != unk_0xE0BDAFA1A39552D6())
				{
					func_373(iVar1, 478, 0);
					func_371(iVar1, func_376(iLocal_833), 0);
				}
			}
			iVar0++;
		}
	}
}

int func_376(int iParam0)
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
	unk_0xD06A5371300291A8(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_377()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xCDB4C4200A9B478A(uLocal_819[iVar0]))
		{
			unk_0x2239ED27B231AE2E(&(uLocal_819[iVar0]));
		}
		iVar0++;
	}
	if (unk_0xCDB4C4200A9B478A(uLocal_832))
	{
		unk_0x2239ED27B231AE2E(&uLocal_832);
	}
	if (unk_0xCDB4C4200A9B478A(uLocal_830))
	{
		unk_0x2239ED27B231AE2E(&uLocal_830);
	}
	if (unk_0xCDB4C4200A9B478A(uLocal_831))
	{
		unk_0x2239ED27B231AE2E(&uLocal_831);
	}
	if (unk_0x7DA173D4FD42F36B(iLocal_719, 12))
	{
		unk_0x8EBF150526027B8E(uLocal_727);
		unk_0xD0BA6FAA717010DE("ALARM_BELL_02");
		unk_0x99BCB15F954AF579(&iLocal_719, 12);
	}
	if (((func_357("DCONTRA_HLP1") || func_357("DCONTRA_HLP2")) || func_357("DCONTRA_HLPVCR")) || func_357("DCONTRA_HLPCR"))
	{
		unk_0x310F6B4E168A8F5D(1);
	}
	func_378();
}

void func_378()
{
	if (unk_0x7DA173D4FD42F36B(iLocal_719, 14))
	{
		func_175();
		func_173(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
		unk_0x99BCB15F954AF579(&iLocal_719, 14);
	}
}

void func_379(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xE27C8E42A97895CF(&(Global_2464975.f_4685.f_7[iVar0]), iVar1);
}

bool func_380(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x7DA173D4FD42F36B(Global_2464975.f_4685.f_7[iVar0], iVar1);
}

void func_381()
{
	float fVar0;
	
	if (func_344())
	{
		if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 9) || unk_0x7DA173D4FD42F36B(Local_96.f_1, 8))
		{
			func_382(func_434());
			if (!func_380(36))
			{
				func_379(36);
			}
		}
	}
	else if (func_11(&(Local_96.f_226)))
	{
		if (iLocal_729 <= 0)
		{
			func_382(func_434());
			if (!func_380(36))
			{
				func_379(36);
			}
		}
		else
		{
			fVar0 = (unk_0xBBDA792448DB5A89((iLocal_728 - iLocal_729)) / unk_0xBBDA792448DB5A89(iLocal_728));
			fVar0 = (fVar0 * 0.5f);
			func_382(fVar0);
			if (!func_380(37))
			{
				func_379(37);
			}
		}
	}
}

void func_382(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Local_96.f_197 + 1;
	iVar1 = func_433(iVar0);
	if (iVar1 > 0)
	{
		iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * fParam0));
		if (unk_0xBBDA792448DB5A89(iVar2) > (unk_0xBBDA792448DB5A89(iVar1) / 2f))
		{
			iVar2 = (iVar2 - 1);
		}
		func_383(iVar0, iVar2, 0, 0, &iLocal_730, 0);
	}
	else
	{
		unk_0xE27C8E42A97895CF(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1), 13);
	}
}

void func_383(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5)
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
	iVar0 = func_433(iParam0);
	iVar1 = func_432(iParam0);
	if (!func_431())
	{
		if (iVar1 >= 0 && iVar0 >= iParam1)
		{
			iVar2 = (func_433(iParam0) - iParam1);
			iVar3 = 0;
			if (bParam5)
			{
				iVar3 = iParam1;
			}
			func_417(iParam0, iVar1, iVar2, iVar3, 0, 11);
			func_415(func_416(iVar1), iVar2, -1, 1);
			Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_68[iVar1 /*2*/].f_1 = iVar2;
			if (iVar3 != 0)
			{
				func_411(iParam0, iVar3);
				func_407(iParam0, iVar3);
			}
			if (unk_0x21A36E2323FEA4B1())
			{
				unk_0xEB6DCEF38A8E25F9(10);
			}
			func_404(10, 0);
			*uParam4 = 2;
		}
		else
		{
			*uParam4 = 3;
		}
	}
	else if (iVar1 >= 0 && iVar0 >= iParam1)
	{
		iVar4 = (func_433(iParam0) - iParam1);
		iVar5 = 0;
		if (bParam5)
		{
			iVar5 = iParam1;
		}
		if (func_384(iVar1, iParam1, iVar5, iParam2, iParam3, uParam4))
		{
			if (*uParam4 == 2)
			{
				func_417(iParam0, iVar1, iVar4, iVar5, 0, 11);
				func_415(func_416(iVar1), iVar4, -1, 1);
				Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_68[iVar1 /*2*/].f_1 = iVar4;
				if (iVar5 != 0)
				{
					func_407(iParam0, iVar5);
				}
				if (unk_0x21A36E2323FEA4B1())
				{
					unk_0xEB6DCEF38A8E25F9(10);
				}
				func_404(10, 0);
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

bool func_384(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
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
			iVar0 = func_403(iParam0);
			uVar1 = func_401(0, iParam1, 0, -1);
			iVar2 = func_400(iParam0);
			uVar3 = func_399(iParam0);
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
			if (iParam4 == 0 || func_395(78225582, -1799524201, uVar1, -788753717, 1, 0, 1, 4, iVar0, 3))
			{
				if (func_395(78225582, 69656641, iVar2, -788753717, iParam1, 0, 1, 4, 0, 3))
				{
					if (iParam2 == 0 || func_395(78225582, 69656641, uVar3, -788753717, iParam2, 0, 1, 4, 0, 3))
					{
						if (func_395(78225582, -739932302, iVar4, -788753717, 1, iParam3, 0, 4, iVar2, 3))
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
			if (*uParam5 == 1 && func_393())
			{
			}
			else
			{
				*uParam5 = 3;
				func_387(func_391());
			}
			break;
		
		case 1:
			if (func_386(func_391()))
			{
				if (func_385(func_391()) == 2)
				{
					*uParam5 = 2;
					func_387(func_391());
				}
				else
				{
					*uParam5 = 3;
					func_387(func_391());
				}
			}
			break;
	}
	return *uParam5 != 1;
}

int func_385(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2562803[iParam0 /*73*/].f_2;
	}
	return 0;
}

int func_386(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2562803[iParam0 /*73*/].f_2 != 1;
	}
	return 0;
}

void func_387(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_431())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_390(iParam0))
		{
			if (!bVar0)
			{
				unk_0x8FFE442E1A39D51A();
			}
		}
		else if (!bVar0)
		{
			unk_0x00C69F802173480C(Global_2562803[iParam0 /*73*/]);
		}
		func_388(&(Global_2562803[iParam0 /*73*/]));
	}
}

void func_388(var uParam0)
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
	func_389(&(uParam0->f_8.f_3));
	func_389(&(uParam0->f_8.f_16));
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
	uParam0->f_66 = 0;
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
}

void func_389(var uParam0)
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

int func_390(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2562803[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

int func_391()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_392(iVar0) != 2147483647)
		{
			if (func_390(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_392(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2562803[iParam0 /*73*/];
	}
	return -1;
}

int func_393()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (!func_431())
	{
		bVar0 = true;
	}
	iVar1 = func_391();
	if (iVar1 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x5A041CC4F10FF856(func_36()) || unk_0x8E2645554EC732F0())
		{
			if (func_394(Global_2562803[iVar1 /*73*/].f_6, Global_2562803[iVar1 /*73*/].f_4, Global_2562803[iVar1 /*73*/].f_1) == 1)
			{
				Global_2563294 = 1;
			}
			return 0;
		}
		if (Global_2445217)
		{
			if (Global_2562803[iVar1 /*73*/].f_6 == 1067618600 || Global_2562803[iVar1 /*73*/].f_6 == -1303831698)
			{
				Global_2563295 = 1;
				return 0;
			}
		}
	}
	iVar2 = func_392(iVar1);
	if (iVar2 != 2147483647)
	{
		if (bVar0 || unk_0x535D3302CA34FAFF(iVar2))
		{
			if (bVar0)
			{
				Global_2562803[iVar1 /*73*/].f_66 = 1;
			}
			Global_2562803[iVar1 /*73*/].f_72 = 0;
			Global_2563285 = 1;
			return 1;
		}
	}
	return 0;
}

int func_394(int iParam0, int iParam1, int iParam2)
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

int func_395(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_431())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x5A041CC4F10FF856(func_36()) || unk_0x8E2645554EC732F0())
		{
			Global_2563294 = 1;
			return 0;
		}
		if (Global_2445217)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_2563295 = 1;
				return 0;
			}
		}
	}
	iVar1 = func_391();
	if (iVar1 == -1)
	{
		if (!func_397(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_396(iParam1))
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
		Global_2562803[iVar1 /*73*/].f_70 = Var2.f_0;
		Global_2562803[iVar1 /*73*/].f_71 = Var2.f_1;
		if (bVar0 || unk_0x809AB5DD969454A9(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_396(int iParam0)
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
			return 1;
			break;
	}
	return 0;
}

int func_397(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_431())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x5A041CC4F10FF856(func_36()) || unk_0x8E2645554EC732F0())
		{
			Global_2563294 = 1;
			return 0;
		}
		if (Global_2445217)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_2563295 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2562803[iVar1 /*73*/].f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_2562803[iVar1 /*73*/].f_5 == 1)
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
		if (unk_0xA6A1F7719666CD21())
		{
			unk_0x8FFE442E1A39D51A();
		}
	}
	if (bVar0 || unk_0x65CEB7DD61AC9B2E(&iVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_398(iVar3, uParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5);
		return 1;
	}
	return 0;
}

int func_398(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2562803[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_431())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2562803[iVar0 /*73*/].f_2 = 1;
			Global_2562803[iVar0 /*73*/].f_1 = iParam5;
			Global_2562803[iVar0 /*73*/].f_3 = uParam1;
			Global_2562803[iVar0 /*73*/].f_4 = iParam2;
			Global_2562803[iVar0 /*73*/].f_7 = uParam3;
			Global_2562803[iVar0 /*73*/].f_5 = 0;
			Global_2562803[iVar0 /*73*/] = iParam0;
			Global_2562803[iVar0 /*73*/].f_6 = iParam4;
			Global_2562803[iVar0 /*73*/].f_69 = uParam8;
			Global_2562803[iVar0 /*73*/].f_68 = uParam7;
			Global_2562803[iVar0 /*73*/].f_72 = 0;
			Global_2563285 = 0;
			if (bParam6)
			{
				Global_2562803[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_399(int iParam0)
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
	if (unk_0x226FA58470A21AEF(&cVar0))
	{
		return -1;
	}
	return unk_0x9F7CDE7B20BCB675(&cVar0);
}

int func_400(int iParam0)
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
	if (unk_0x226FA58470A21AEF(&cVar0))
	{
		return -1;
	}
	return unk_0x9F7CDE7B20BCB675(&cVar0);
}

int func_401(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	
	func_402(&sVar0, bParam0, iParam1, bParam2, iParam3);
	return unk_0x9F7CDE7B20BCB675(&sVar0);
}

void func_402(char* sParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
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

int func_403(int iParam0)
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
	if (unk_0x226FA58470A21AEF(&cVar0))
	{
		return -1;
	}
	return unk_0x9F7CDE7B20BCB675(&cVar0);
}

void func_404(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_406(iParam0, iParam1))
	{
		iVar0 = func_405();
		Global_2444000[iVar0] = iParam0;
	}
}

int func_405()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2444000[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_406(int iParam0, var uParam1)
{
	if (Global_1315901)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315913) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_407(int iParam0, int iParam1)
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
			if (Global_1736113[iVar0] == iParam0)
			{
				Global_1736106[iVar0] = 0;
				Global_1736113[iVar0] = 0;
				iVar1++;
			}
		}
		iVar0 = (iVar0 + -1);
	}
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_1736113[iVar0] == 0)
		{
			if (iVar2 == -1)
			{
				iVar2 = 0;
			}
		}
		else if (iVar2 != -1)
		{
			Global_1736106[iVar2] = Global_1736106[iVar0];
			Global_1736113[iVar2] = Global_1736113[iVar0];
			Global_1736106[iVar0] = 0;
			Global_1736113[iVar0] = 0;
			iVar2++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_409(func_410(iVar0), Global_1736106[iVar0], -1, 1);
		func_409(func_408(iVar0), Global_1736113[iVar0], -1, 1);
		iVar0++;
	}
}

int func_408(int iParam0)
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

var func_409(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = unk_0x5F589E7A0D9C623A((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0xF1BE098FFCB3A8F1((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x5F589E7A0D9C623A((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0xF1BE098FFCB3A8F1((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x5F589E7A0D9C623A((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0xF1BE098FFCB3A8F1((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x5F589E7A0D9C623A((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0xF1BE098FFCB3A8F1((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x78343BC601F0B283((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0xF1BE098FFCB3A8F1((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x78343BC601F0B283((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0xF1BE098FFCB3A8F1((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0xF1BE098FFCB3A8F1((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0xF1BE098FFCB3A8F1((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0xF1BE098FFCB3A8F1((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0xF1BE098FFCB3A8F1((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0xF1BE098FFCB3A8F1((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0xF1BE098FFCB3A8F1((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0xF1BE098FFCB3A8F1((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xC60DF3F40775C421(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_410(int iParam0)
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

void func_411(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_414(func_432(iParam0));
	iVar1 = func_413(iVar0, -1, 0);
	if (iVar1 >= iParam1)
	{
		func_412(iVar0, (iVar1 - iParam1), -1, 1);
	}
}

void func_412(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2473854[iParam0 /*5*/][func_340(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, iParam1, iParam3);
	}
}

int func_413(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2473854[iParam0 /*5*/][func_340(iParam1)];
	if (unk_0xFF4D252D25F54A29(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_414(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3226;
	}
	else if (iParam0 == 1)
	{
		return 3227;
	}
	else if (iParam0 == 2)
	{
		return 3228;
	}
	else if (iParam0 == 3)
	{
		return 3229;
	}
	else if (iParam0 == 4)
	{
		return 3230;
	}
	return 3226;
}

void func_415(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2473854[iParam0 /*5*/][func_340(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1347761[func_340(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1347767[func_340(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1347773[func_340(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1347779[func_340(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1347737[func_340(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1347743[func_340(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1347749[func_340(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1347755[func_340(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1347713[func_340(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1347719[func_340(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1347725[func_340(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1347731[func_340(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1347785[func_340(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1347791[func_340(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1347797[func_340(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1347803[func_340(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1347809[func_340(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1347815[func_340(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1347821[func_340(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2497579[0 /*6*/][func_340(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2497579[1 /*6*/][func_340(iParam2)] = iParam1;
			break;
		
		case 2907:
			Global_2497579[2 /*6*/][func_340(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2497579[3 /*6*/][func_340(iParam2)] = iParam1;
			break;
		
		case 3918:
			Global_2497641[func_340(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1347827[func_340(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1347833[func_340(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1347839[func_340(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1347845[func_340(iParam2)] = iParam1;
			break;
		
		case 3031:
			Global_2497610[0 /*5*/][func_340(iParam2)] = iParam1;
			break;
		
		case 3032:
			Global_2497610[1 /*5*/][func_340(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2497610[2 /*5*/][func_340(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2497610[3 /*5*/][func_340(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2497610[4 /*5*/][func_340(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2497646[0 /*5*/][func_340(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2497646[1 /*5*/][func_340(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2497646[2 /*5*/][func_340(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2497646[3 /*5*/][func_340(iParam2)] = iParam1;
			break;
		
		case 3220:
			Global_2497646[4 /*5*/][func_340(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2497672[0 /*5*/][func_340(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2497672[1 /*5*/][func_340(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2497672[2 /*5*/][func_340(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2497672[3 /*5*/][func_340(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2497672[4 /*5*/][func_340(iParam2)] = iParam1;
			break;
		
		case 3199:
			Global_2497610[5 /*5*/][func_340(iParam2)] = iParam1;
			break;
		
		case 3205:
			Global_2497579[4 /*6*/][func_340(iParam2)] = iParam1;
			break;
		
		case 3243:
			Global_2497698[func_340(iParam2)] = iParam1;
			break;
		
		case 3244:
			Global_2497713[func_340(iParam2)] = iParam1;
			break;
		
		case 3245:
			Global_2497703[func_340(iParam2)] = iParam1;
			break;
		
		case 3246:
			Global_2497718[func_340(iParam2)] = iParam1;
			break;
		
		case 3247:
			Global_2497708[func_340(iParam2)] = iParam1;
			break;
		
		case 3248:
			Global_2497723[func_340(iParam2)] = iParam1;
			break;
		
		case 3269:
			Global_2497728[func_340(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_416(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3221;
		
		case 1:
			return 3222;
		
		case 2:
			return 3223;
		
		case 3:
			return 3224;
		
		case 4:
			return 3225;
		
		default:
	}
	return 3976;
}

void func_417(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
		iVar0 = func_433(iParam0);
		while (iVar0 <= (iParam2 - 1))
		{
			if (iVar0 < func_430(iParam0))
			{
				if (iVar2 < iParam3)
				{
					if (func_428(func_429(iParam0), iVar0))
					{
						iVar3 = func_427(iParam5);
						func_425(iParam1, iVar0, func_426(iVar3), 1, -1);
						iVar2++;
					}
					else
					{
						iVar4 = 0;
						while (iVar4 <= (iParam2 - 1))
						{
							if (func_428(func_429(iParam0), iVar4))
							{
								if (!func_422(func_423(func_424(iParam1, iVar4, -1, -1))))
								{
									iVar5 = func_424(iParam1, iVar4, -1, -1);
									iVar6 = func_427(iParam5);
									func_425(iParam1, iVar4, func_426(iVar6), 1, -1);
									func_425(iParam1, (iParam2 - 1), iVar5, 1, -1);
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
					iVar8 = func_419(iParam0, iVar0, iParam5);
					if (iVar0 > 0 && !func_418(func_429(iParam0), iVar0))
					{
						while (iVar8 == func_423(func_424(iParam1, (iVar0 - 1), -1, -1)) && iVar7 < 10)
						{
							iVar8 = func_419(iParam0, iVar0, iParam5);
							iVar7++;
						}
					}
					if (iVar8 != 0)
					{
						if (func_424(iParam1, iVar0, -1, -1) == 0)
						{
							func_425(iParam1, iVar0, func_426(iVar8), 1, -1);
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
		while (iVar0 <= (func_433(iParam0) - 1))
		{
			if (iVar0 < func_430(iParam0))
			{
				if (iParam3 > 0)
				{
					iVar1 = 0;
					while (iVar1 <= (func_433(iParam0) - 1))
					{
						if (func_422(func_423(func_424(iParam1, iVar1, -1, -1))))
						{
							if (!func_422(func_423(func_424(iParam1, iVar0, -1, -1))))
							{
								iVar10 = func_424(iParam1, iVar1, -1, -1);
								func_425(iParam1, iVar1, func_424(iParam1, iVar0, -1, -1), 1, -1);
								func_425(iParam1, iVar0, iVar10, 1, -1);
							}
						}
						iVar1++;
					}
				}
				else if (func_422(func_423(func_424(iParam1, iVar0, -1, -1))))
				{
					bVar9 = false;
					iVar1 = 0;
					while (iVar1 <= 5)
					{
						if (!bVar9)
						{
							if (iParam2 >= iVar1)
							{
								if (func_428(func_429(iParam0), iVar1))
								{
									if (!func_422(func_423(func_424(iParam1, iVar1, -1, -1))))
									{
										iVar11 = func_424(iParam1, iVar1, -1, -1);
										func_425(iParam1, iVar1, func_424(iParam1, iVar0, -1, -1), 1, -1);
										func_425(iParam1, iVar0, iVar11, 1, -1);
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
		while (iVar0 <= (func_433(iParam0) - 1))
		{
			if (iVar0 < func_430(iParam0))
			{
				func_425(iParam1, iVar0, func_426(0), 1, -1);
			}
			iVar0++;
		}
	}
	Global_1736236 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1736232[iVar0] = 0;
		iVar0++;
	}
}

int func_418(int iParam0, int iParam1)
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

int func_419(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	iVar0 = unk_0xA6055C735E3DD877(0, 2);
	if (func_418(func_429(iParam0), iParam1))
	{
		iVar0 = unk_0xA6055C735E3DD877(0, 4);
	}
	bVar1 = false;
	if ((iVar0 == 1 || iVar0 == 2) || iVar0 == 3)
	{
		bVar1 = true;
	}
	uVar2 = func_421(func_429(iParam0), iParam1);
	return func_420(uParam2, uVar2, bVar1);
}

int func_420(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xA6055C735E3DD877(0, 2);
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
			iVar0 = unk_0xA6055C735E3DD877(0, 3);
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

int func_421(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return unk_0xA6055C735E3DD877(0, 2);
		
		case 2:
			if (((((((iParam1 > 13 && iParam1 < 21) || (iParam1 > 34 && iParam1 < 42)) || (iParam1 > 55 && iParam1 < 63)) || (iParam1 > 76 && iParam1 < 84)) || (iParam1 > 89 && iParam1 < 93)) || (iParam1 > 98 && iParam1 < 102)) || (iParam1 > 107 && iParam1 < 109))
			{
				return 1;
			}
			else
			{
				return unk_0xA6055C735E3DD877(0, 2);
			}
			break;
	}
	return -1;
}

int func_422(int iParam0)
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

int func_423(int iParam0)
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

int func_424(int iParam0, int iParam1, int iParam2, int iParam3)
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
	iVar18 = unk_0x9F7CDE7B20BCB675(&cVar2);
	iVar19 = (8 * (iParam1 % 8));
	if (0 != iVar18)
	{
		if (!unk_0xC4D41F5AA8205814(iVar18, &iVar0, iVar19, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

var func_425(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	iVar18 = unk_0x9F7CDE7B20BCB675(&cVar2);
	iVar19 = (8 * (iParam1 % 8));
	if (iParam2 < 0)
	{
		iParam2 = 255;
	}
	if (0 != iVar18)
	{
		uVar0 = unk_0xC60DF3F40775C421(iVar18, iParam2, iVar19, 8, iParam3);
	}
	return uVar0;
}

int func_426(int iParam0)
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

int func_427(var uParam0)
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

int func_428(int iParam0, int iParam1)
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

int func_429(int iParam0)
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

int func_430(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = func_429(iParam0);
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

int func_431()
{
	if (unk_0x55812CD5A331E1F8())
	{
		return 1;
	}
	return 0;
}

int func_432(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_68[iVar0 /*2*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_433(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam0 == Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_68[iVar0 /*2*/])
			{
				return Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_68[iVar0 /*2*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

float func_434()
{
	if (!func_344())
	{
		return (unk_0xBBDA792448DB5A89(Global_262145.f_13761) * 0.01f);
	}
	return (unk_0xBBDA792448DB5A89(Global_262145.f_13762) * 0.01f);
}

int func_435()
{
	int iVar0;
	
	if (!func_34(unk_0xE0BDAFA1A39552D6(), 0))
	{
		if (!func_436(1))
		{
			if (unk_0x7DA173D4FD42F36B(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1, 12))
			{
				unk_0x99BCB15F954AF579(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1), 12);
			}
			return 0;
		}
		if (func_335())
		{
			if (unk_0x7DA173D4FD42F36B(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1, 12))
			{
				unk_0x99BCB15F954AF579(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1), 12);
			}
			return 0;
		}
		if (!unk_0x7DA173D4FD42F36B(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1, 12))
		{
			unk_0xE27C8E42A97895CF(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1), 12);
		}
	}
	else
	{
		iVar0 = func_343();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!unk_0x7DA173D4FD42F36B(Local_366[iVar0 /*11*/].f_1, 12))
		{
			return 0;
		}
	}
	return 1;
}

int func_436(bool bParam0)
{
	if (func_199(unk_0xE0BDAFA1A39552D6(), 21))
	{
		return 0;
	}
	if (unk_0x51857BE3D081B03F())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x8122B656FB23F1C7())
		{
			return 0;
		}
	}
	if (func_448(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (func_447())
	{
		return 0;
	}
	if (func_322())
	{
		return 0;
	}
	if (func_446())
	{
		return 0;
	}
	if (func_316())
	{
		return 0;
	}
	if (unk_0x21A36E2323FEA4B1())
	{
		return 0;
	}
	if (func_91(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (!func_318())
	{
		return 0;
	}
	if (func_199(unk_0xE0BDAFA1A39552D6(), 0) || func_199(unk_0xE0BDAFA1A39552D6(), 3))
	{
		return 0;
	}
	if ((func_199(unk_0xE0BDAFA1A39552D6(), 12) || func_199(unk_0xE0BDAFA1A39552D6(), 14)) || func_199(unk_0xE0BDAFA1A39552D6(), 13))
	{
		return 0;
	}
	if (func_445(unk_0xE0BDAFA1A39552D6(), 0, 0))
	{
		if ((!func_444(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_9) && !func_442(unk_0xE0BDAFA1A39552D6())) || (func_180(unk_0xE0BDAFA1A39552D6()) != 167 && func_180(unk_0xE0BDAFA1A39552D6()) != 168))
		{
			return 0;
		}
	}
	if (func_441())
	{
		return 0;
	}
	if (Global_1722816)
	{
		return 0;
	}
	if (func_440(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (func_439())
	{
		return 0;
	}
	if (func_438(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	if (func_437(unk_0xE0BDAFA1A39552D6()))
	{
		return 0;
	}
	return 1;
}

int func_437(int iParam0)
{
	if (Global_2418529[iParam0 /*313*/].f_257.f_4 != 0 || Global_2418529[iParam0 /*313*/].f_257.f_5)
	{
		return 1;
	}
	return 0;
}

int func_438(int iParam0)
{
	if (unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_250.f_7, 14))
	{
		return 1;
	}
	if (unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_250.f_7, 11))
	{
		return 1;
	}
	return 0;
}

int func_439()
{
	if (Global_2557205.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_440(int iParam0)
{
	if (!func_848(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1587816[iParam0 /*444*/].f_35;
}

bool func_441()
{
	return Global_91362.f_297 > 0;
}

int func_442(int iParam0)
{
	if (iParam0 != func_55())
	{
		if (func_848(iParam0, 1, 1))
		{
			if (Global_2418529[iParam0 /*313*/].f_305.f_1 != -1)
			{
				return func_443(Global_2418529[iParam0 /*313*/].f_305.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_443(int iParam0)
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
	}
	return -1;
}

int func_444(int iParam0)
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

int func_445(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1587816[iParam0 /*444*/].f_250.f_9 > 0)
	{
		if (bParam1)
		{
			if (unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_250.f_7, 0))
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
		if (func_442(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_446()
{
	return Global_1315913;
}

bool func_447()
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_18, 0);
}

int func_448(int iParam0)
{
	if (func_90(iParam0, 1))
	{
		if (Global_1587816[iParam0 /*444*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_449(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_468(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_450(&Var0);
}

int func_450(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2428549.f_2481)
		{
			return 0;
		}
	}
	func_453(uParam0, uParam0->f_16);
	func_452(uParam0);
	if (func_451(uParam0->f_1))
	{
		if (Global_2428549.f_2191[0 /*72*/].f_2 == 0)
		{
			Global_2428549.f_2191[0 /*72*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2428549.f_2191[0 /*72*/].f_1 == 13 || Global_2428549.f_2191[0 /*72*/].f_1 == 52) || Global_2428549.f_2191[0 /*72*/].f_1 == 53) || Global_2428549.f_2191[0 /*72*/].f_1 == 57)
		{
			Global_2428549.f_2191[0 /*72*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2428549.f_2191[iVar0 + 1 /*72*/] = { Global_2428549.f_2191[iVar0 /*72*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2428549.f_2191[1 /*72*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2428549.f_2191[iVar0 /*72*/].f_2 == 0)
		{
			Global_2428549.f_2191[iVar0 /*72*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0xE27C8E42A97895CF(&(Global_2428549.f_2191[iVar0 /*72*/].f_63), 1);
				Global_2428549.f_2191[iVar0 /*72*/].f_2 = 5;
			}
			if (uParam0->f_1 == 85)
			{
				if (func_282(Global_2428549.f_2191[iVar0 /*72*/].f_1))
				{
					Global_2428549.f_2191[iVar0 /*72*/].f_2 = 5;
					unk_0xE27C8E42A97895CF(&(Global_2428549.f_2191[iVar0 /*72*/].f_63), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_451(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_452(var uParam0)
{
	if (func_284(uParam0->f_1))
	{
		uParam0->f_66 = func_242();
	}
}

void func_453(var uParam0, int iParam1)
{
	if (func_284(uParam0->f_1))
	{
		uParam0->f_67 = 1;
	}
	if (iParam1 == func_55())
	{
		return;
	}
	if (func_282(uParam0->f_1))
	{
		if (uParam0->f_65 == 1)
		{
			uParam0->f_67 = func_454(iParam1, -2, 0, 0);
		}
	}
}

int func_454(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_93(iParam0))
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
	if (func_93(unk_0xE0BDAFA1A39552D6()) || (func_467() && func_466()))
	{
		uVar0 = func_465();
		if (unk_0xC1EDB61CE0A4B94E(uVar0))
		{
			if (unk_0x4E75E5867592AC01(iVar0))
			{
				if (unk_0x90CB634380C802C7(iVar0) != -1)
				{
					if (func_848(unk_0x90CB634380C802C7(iVar0), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x21A36E2323FEA4B1()) && iParam1 < 4)
						{
							if (Global_1617902.f_73330[iParam1] != -1)
							{
								return func_464(iParam1, iParam0, 0);
							}
							else
							{
								return func_461(iParam0, unk_0x90CB634380C802C7(iVar0), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_461(iParam0, unk_0x90CB634380C802C7(iVar0), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x21A36E2323FEA4B1()) && iParam1 < 4)
			{
				if (Global_1617902.f_73330[iParam1] != -1)
				{
					return func_464(iParam1, iParam0, 0);
				}
				else
				{
					return func_455(0, -1, 0);
				}
			}
			else
			{
				return func_455(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x21A36E2323FEA4B1()) && iParam1 < 4)
	{
		if (Global_1617902.f_73330[iParam1] != -1)
		{
			return func_464(iParam1, iParam0, 0);
		}
		else
		{
			return func_461(iParam0, unk_0xE0BDAFA1A39552D6(), iParam1, bParam2, bParam3);
		}
	}
	return func_461(iParam0, unk_0xE0BDAFA1A39552D6(), iParam1, bParam2, bParam3);
}

int func_455(bool bParam0, int iParam1, bool bParam2)
{
	return func_456(unk_0xE0BDAFA1A39552D6(), bParam0, iParam1, bParam2);
}

int func_456(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0xF749B19A9F9B3DBF(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_89(iVar0, iParam2, 0) && !unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_460(1);
				}
				else
				{
					return func_460(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x7DA173D4FD42F36B(Global_1617902.f_4, 20))
			{
				return func_457(iVar0, iParam2, 1);
			}
			else
			{
				return func_457(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_460(1);
	}
	return func_460(0);
}

int func_457(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_459(iParam0, iParam1);
	if (func_458(Global_1617902.f_76918))
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

int func_458(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7549[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_459(int iParam0, int iParam1)
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
			if (!func_89(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_460(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_461(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0xF749B19A9F9B3DBF(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1587816[iVar2 /*444*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_463(iParam1, iParam0, iVar0, 0) && !unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 18)) || ((func_89(unk_0xF749B19A9F9B3DBF(iParam1), unk_0xF749B19A9F9B3DBF(iParam0), 0) && unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 23)) && !unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 18)))
			{
				return func_460(1);
			}
			else if (unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 26))
			{
				return func_462(1);
			}
			else
			{
				return func_456(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573837 || Global_1573828) || Global_1587816[iParam0 /*444*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573837 == 1 && Global_1573847 == 0))
			{
				return func_460(1);
			}
			else
			{
				return func_456(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573832 && Global_1573410.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_241(iParam0);
	if (!iVar3 == -1)
	{
		return func_239(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_462(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_463(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0xF749B19A9F9B3DBF(iParam0) == -1 && unk_0xF749B19A9F9B3DBF(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0xF749B19A9F9B3DBF(iParam0) == unk_0xF749B19A9F9B3DBF(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0xF749B19A9F9B3DBF(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0xF749B19A9F9B3DBF(iParam0) == iParam2;
	}
	return unk_0xF749B19A9F9B3DBF(iParam0) == iParam2;
}

int func_464(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1617902.f_73330[iParam0] != -1 && Global_1617902.f_73330[iParam0] <= 4)
	{
		if (Global_1617902.f_73330[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1617902.f_73330[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1617902.f_73330[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1617902.f_73330[iParam0] == 4)
		{
			if (unk_0x7DA173D4FD42F36B(Global_1617902.f_15, 29))
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
			iVar0 = Global_1617902.f_73330[iParam0];
		}
	}
	else
	{
		iVar0 = func_456(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

var func_465()
{
	return Global_2359301.f_2;
}

bool func_466()
{
	return unk_0x7DA173D4FD42F36B(Global_2359301, 4);
}

bool func_467()
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_18, 14);
}

void func_468(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_55();
	uParam1->f_17 = func_55();
	uParam1->f_18 = func_55();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_19), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_65 = 1;
	uParam1->f_68 = 1;
	uParam1->f_69 = 1;
	uParam1->f_67 = 0;
	StringCopy(&(uParam1->f_23), "", 64);
	StringCopy(&(uParam1->f_39), "", 64);
}

int func_469(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x17CC0D5008835470() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x1F0E2DBE53276B95(unk_0x201D90648B2AE3CE(), *uParam0);
		}
		else
		{
			return unk_0x1F0E2DBE53276B95(unk_0xED6DF4F701311AF8(), *uParam0);
		}
	}
	return unk_0x1F0E2DBE53276B95(unk_0x1ADBAAC322D61F73(), *uParam0);
}

void func_470(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	var uVar18;
	var uVar19;
	int iVar20;
	bool bVar21;
	int iVar22;
	
	func_571(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		iVar1 = (iVar1 + func_570(iParam0));
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = (iVar0 + func_569(iParam0));
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (func_180(unk_0xE0BDAFA1A39552D6()) == 167 || func_180(unk_0xE0BDAFA1A39552D6()) == 168)
	{
		if (bParam1)
		{
			if (func_568(unk_0xE0BDAFA1A39552D6()) > 0)
			{
				func_567();
			}
			else
			{
				func_566();
			}
		}
		else
		{
			func_565();
		}
	}
	if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_201(unk_0xE0BDAFA1A39552D6()))
			{
				if (uParam2->f_5)
				{
					iVar0 = (iVar0 + func_560(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_122));
				}
				else
				{
					iVar4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						iVar4 = (iVar4 + uParam2->f_8);
					}
					iVar5 = func_559(iVar4);
					iVar6 = (iVar5 * iVar4);
					iVar0 = (iVar0 + iVar6);
					iVar8 = func_558(&uVar7);
					iVar9 = Global_262145.f_13770;
					if (iVar8 > iVar9)
					{
						iVar8 = iVar9;
					}
					iVar10 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar8) * Global_262145.f_12980));
					iVar11 = ((iVar0 / 100) * iVar10);
					iVar0 = (iVar0 + iVar11);
					if (uParam2->f_6)
					{
						iVar0 = (iVar0 + *uParam2);
					}
					if (iVar8 > 0 && uParam2->f_9 != 4)
					{
						func_379(44);
					}
				}
				func_553(iVar0);
				func_552();
				Global_2464975.f_4685.f_169 = iVar0;
				iVar12 = 0;
				while (iVar12 < unk_0xC4A9F8E5EC59EB4F())
				{
					iVar13 = iVar12;
					if (unk_0x6B90EB073E0E641F(iVar13))
					{
						iVar14 = unk_0x1886D89D5D557CB4(iVar13);
						if (func_551(iVar14))
						{
							func_543(iVar14, 1);
						}
					}
					iVar12++;
				}
			}
		}
		if (func_201(unk_0xE0BDAFA1A39552D6()))
		{
			func_542();
		}
	}
	else if (iParam0 == 167)
	{
		if (func_201(unk_0xE0BDAFA1A39552D6()))
		{
			if (bParam1)
			{
				func_541();
			}
			func_540();
		}
	}
	iVar15 = func_539();
	if (iVar15 != func_55() && iParam0 != 148)
	{
		if (func_237(unk_0xE0BDAFA1A39552D6(), 0))
		{
			if (!func_272(unk_0xE0BDAFA1A39552D6(), iVar15, 1))
			{
				func_525(&iVar0, 1);
			}
		}
	}
	func_522(iParam0, &iVar16, &iVar17);
	iVar1 = (iVar1 + iVar16);
	iVar0 = (iVar0 + iVar17);
	if (iVar1 > 0)
	{
		Global_1734817.f_10 = iVar1;
		func_521();
		func_482(0, unk_0x06736567F820A39E(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1734817.f_9 = iVar0;
		iVar20 = func_481();
		if (iVar20 != func_55())
		{
			func_480(iVar20, &uVar18, &uVar19);
		}
		bVar21 = !func_479(1);
		if (iParam0 == 168)
		{
			if (!func_431())
			{
				unk_0x3C4FC10A27FC59C0(iVar0, iVar4);
			}
		}
		else if (func_431())
		{
			func_475(-856006867, iVar0, &iVar22, 0, 1, 0);
			Global_2562803[iVar22 /*73*/].f_8.f_54 = uVar18;
			Global_2562803[iVar22 /*73*/].f_8.f_55 = uVar19;
			Global_2562803[iVar22 /*73*/].f_8.f_56 = bVar21;
		}
		else
		{
			unk_0x2622A5EF3329E2D6(uVar18, uVar19, iVar0, bVar21);
		}
		if (func_474(iParam0))
		{
			if (func_473(iParam0) > -1)
			{
				func_472(func_473(iParam0), iVar0);
			}
		}
		Global_2446413 = iVar0;
		func_471(&Global_2444522, 0, 0);
	}
}

void func_471(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x17CC0D5008835470() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x201D90648B2AE3CE();
		}
		else
		{
			*uParam0 = unk_0xED6DF4F701311AF8();
		}
	}
	else
	{
		*uParam0 = unk_0x1ADBAAC322D61F73();
	}
	uParam0->f_1 = 1;
}

void func_472(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2464975.f_269 = iParam0;
		if (iParam1 > Global_262145.f_5198)
		{
			iParam1 = Global_262145.f_5198;
		}
		Global_2464975.f_270 = iParam1;
		Global_2464975.f_271 = 0;
	}
}

int func_473(int iParam0)
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
		
		default:
	}
	return 0;
}

int func_474(int iParam0)
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
	}
	return iVar0;
}

void func_475(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_431())
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
			if (iParam1 > 0)
			{
				func_476(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_476(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_476(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_431())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x5A041CC4F10FF856(func_36()) || unk_0x8E2645554EC732F0())
		{
			Global_2563294 = 1;
			return 0;
		}
		if (Global_2445217)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2563295 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2562803[iVar1 /*73*/].f_2 == 0)
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
	if (bVar0 || unk_0x1CFE5997DD1709D1(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x535D3302CA34FAFF(iVar3))
		{
			*uParam0 = func_398(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2562803[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2563285 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2563293 = 1;
			Global_2563296 = iParam4;
			Global_2563298 = iParam3;
			Global_2563299 = 1;
			Global_2563297 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2563296 = iParam4;
			Global_2563298 = iParam3;
			Global_2563299 = 1;
			Global_2563297 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_478(1, iParam4);
			Global_2563293 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_477(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_477(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xE27C8E42A97895CF(&(Global_2418529[unk_0xE0BDAFA1A39552D6() /*313*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_387(iParam0);
	}
}

void func_478(int iParam0, var uParam1)
{
	Global_2446544 = uParam1;
	Global_2446543 = iParam0;
}

bool func_479(bool bParam0)
{
	return func_237(unk_0xE0BDAFA1A39552D6(), bParam0);
}

void func_480(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1610705[iParam0 /*178*/].f_10.f_7[0];
	*uParam2 = Global_1610705[iParam0 /*178*/].f_10.f_7[1];
}

int func_481()
{
	return Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10;
}

int func_482(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_483(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_483(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_493(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xC1EDB61CE0A4B94E(iParam1))
		{
			if (unk_0x77CB3F400804EDD1(iParam1))
			{
				uVar1 = unk_0x406B8F450D0105AB(iParam1);
				func_489(unk_0xB90C4C04BACF96A1(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_484(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_484(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_487(iParam0, 1) };
	if (iParam0 == func_486(unk_0x06736567F820A39E()))
	{
		func_485(1);
	}
	func_489(Var0, iParam1, 0, sParam2, iParam3);
}

void func_485(int iParam0)
{
	Global_2428549.f_1375 = iParam0;
}

int func_486(int iParam0)
{
	return iParam0;
}

Vector3 func_487(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x611B1E292F714CAD())
	{
		Var3 = { unk_0xE361DCEC3CCB65F0(2) };
	}
	if (iParam0 == func_488(unk_0x06736567F820A39E()) && unk_0x20EC647BB13B981D(unk_0x132F78245A5DBB0A()) == 4)
	{
		Var0 = { unk_0xF42E2289B33D5C38(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xF4745590D18D14B8(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0xBDA1F5E8A36BFA07(iParam0, 0))
	{
		fVar6 = unk_0x3CAD22C2D36A7F14(iParam0);
		if (unk_0x20EC647BB13B981D(unk_0x132F78245A5DBB0A()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0x9CFA23DC65790425(unk_0x79469DA5833EACA8(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x90B89006901451E8(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_488(int iParam0)
{
	return iParam0;
}

void func_489(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2428549.f_774[iVar0 /*30*/].f_6 == 0 || Global_2428549.f_774[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2428549.f_774[iVar1 /*30*/] = { Param0 };
			Global_2428549.f_774[iVar1 /*30*/].f_6 = 1;
			Global_2428549.f_774[iVar1 /*30*/].f_4 = func_492(Global_2428549.f_774[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2428549.f_774[iVar1 /*30*/].f_7 = unk_0x201D90648B2AE3CE();
			Global_2428549.f_774[iVar1 /*30*/].f_3 = iParam3;
			Global_2428549.f_774[iVar1 /*30*/].f_8 = iParam4;
			Global_2428549.f_774[iVar1 /*30*/].f_9 = func_491();
			Global_2428549.f_774[iVar1 /*30*/].f_10 = func_490();
			StringCopy(&(Global_2428549.f_774[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2428549.f_774[iVar1 /*30*/].f_26 = unk_0xBA8585CC543EF6BE(unk_0x201D90648B2AE3CE(), iParam6);
		}
	}
}

int func_490()
{
	if (Global_2428549.f_1375)
	{
		Global_2428549.f_1375 = 0;
		return 1;
	}
	Global_2428549.f_1375 = 0;
	return 0;
}

var func_491()
{
	var uVar0;
	
	uVar0 = Global_2428549.f_1377;
	Global_2428549.f_1377 = 1;
	return uVar0;
}

float func_492(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0xA1F52EC3ECE1D42E(unk_0x1ADD718B7E9360A5(), Param0, 1);
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

var func_493(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_494(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_494(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_520(unk_0xE0BDAFA1A39552D6()) || func_519(unk_0xE0BDAFA1A39552D6()))
	{
		if (Global_262145.f_7844 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7844;
		}
	}
	else if (Global_262145.f_5249 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5249;
	}
	if (func_518(uParam2))
	{
	}
	if (func_517())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_515(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_514(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_512(0, &iVar1);
					break;
				
				case 3:
					func_512(1, &iVar1);
					break;
				
				case 1:
					func_510(&iVar1);
					break;
				}
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
			func_508(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_504((func_507(unk_0xE0BDAFA1A39552D6()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xADECF862874B38F9(iVar1, iParam8, iParam9);
				if (Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_39.f_2 != -1)
				{
					func_508(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_499(iVar1);
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
				func_495((func_497(unk_0xE0BDAFA1A39552D6()) + iVar1));
			}
			else
			{
				func_495((func_497(unk_0xE0BDAFA1A39552D6()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_495(int iParam0)
{
	if (func_517())
	{
		Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_195.f_5 = iParam0;
		func_496(joaat("mpply_globalxp"), iParam0);
	}
}

void func_496(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, uParam1, 1);
	}
}

int func_497(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_848(iParam0, 0, 1))
		{
			if (iParam0 == unk_0xE0BDAFA1A39552D6())
			{
				return func_498(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1587816[iParam0 /*444*/].f_195.f_5;
			}
		}
		else
		{
			return func_498(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_498(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0xFF4D252D25F54A29(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_499(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_57(unk_0xE0BDAFA1A39552D6()) };
	if (unk_0x3D340893CA28EFFC())
	{
		if (unk_0x781D726C27D122E2(&Var0))
		{
			iVar13 = func_502(func_503(&Var0));
			if (iVar13 == 0)
			{
				func_501(&Global_1347700, iParam0);
				func_500(joaat("mpply_crew_local_xp_0"), Global_1347700);
			}
			else if (iVar13 == 1)
			{
				func_501(&Global_1347701, iParam0);
				func_500(joaat("mpply_crew_local_xp_1"), Global_1347701);
			}
			else if (iVar13 == 2)
			{
				func_501(&Global_1347702, iParam0);
				func_500(joaat("mpply_crew_local_xp_2"), Global_1347702);
			}
			else if (iVar13 == 3)
			{
				func_501(&Global_1347703, iParam0);
				func_500(joaat("mpply_crew_local_xp_3"), Global_1347703);
			}
			else if (iVar13 == 4)
			{
				func_501(&Global_1347704, iParam0);
				func_500(joaat("mpply_crew_local_xp_4"), Global_1347704);
			}
		}
	}
}

void func_500(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x57B5A527FBAC251E(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1347695 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1347697 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1347697 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1347698 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1347699 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1347700 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1347701 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1347702 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1347703 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1347704 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1347705 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1347706 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1347707 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1347708 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1347709 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1347710 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1347711 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_501(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_502(int iParam0)
{
	if (iParam0 == Global_1347695)
	{
		return 0;
	}
	else if (iParam0 == Global_1347696)
	{
		return 1;
	}
	else if (iParam0 == Global_1347697)
	{
		return 2;
	}
	else if (iParam0 == Global_1347698)
	{
		return 3;
	}
	else if (iParam0 == Global_1347699)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_503(var uParam0)
{
	if (unk_0x3D340893CA28EFFC())
	{
		if (unk_0x781D726C27D122E2(uParam0))
		{
			return Global_2444023;
		}
	}
	return Global_2444023;
}

void func_504(int iParam0, int iParam1, int iParam2)
{
	if (func_517())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7814 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1347815[func_340(-1)])
				{
					unk_0xADECF862874B38F9(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1347815[func_340(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7813 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xADECF862874B38F9(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7813 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xADECF862874B38F9(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_142(unk_0xE0BDAFA1A39552D6()))
		{
			Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_195.f_1 = iParam0;
			Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_195.f_6 = func_505(iParam0, 1);
		}
		func_415(632, iParam0, -1, 1);
		func_412(633, func_505(iParam0, 1), -1, 1);
		Global_1347815[func_340(-1)] = iParam0;
		func_404(7, 0);
	}
}

int func_505(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_506(iParam0, 0);
}

int func_506(int iParam0, int iParam1)
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
		if (Global_276766[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_276766[iVar3] < iParam0)
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

int func_507(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0xE0BDAFA1A39552D6())
			{
				return Global_1347815[func_340(-1)];
			}
			else if (func_142(iParam0))
			{
				return Global_1587816[iParam0 /*444*/].f_195.f_1;
			}
		}
	}
	else
	{
		return Global_1347815[func_340(-1)];
	}
	return 0;
}

void func_508(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_413(iParam0, func_340(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_509(iParam0))
	{
		func_412(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_415(iParam0, iVar0, iParam2, 1);
	}
}

int func_509(int iParam0)
{
	if (Global_1347694)
	{
		switch (iParam0)
		{
			case 780:
			case 781:
			case 782:
			case 783:
			case 770:
			case 771:
			case 772:
			case 773:
			case 760:
			case 761:
			case 762:
			case 763:
			case 750:
			case 751:
			case 752:
			case 753:
			case 1296:
			case 632:
			case 1271:
			case 757:
			case 758:
			case 759:
			case 1229:
			case 1868:
			case 2259:
			case 2907:
			case 3036:
			case 3918:
			case 3031:
			case 3032:
			case 3033:
			case 3034:
			case 3035:
			case 3216:
			case 3217:
			case 3218:
			case 3219:
			case 3220:
			case 3221:
			case 3222:
			case 3223:
			case 3224:
			case 3225:
			case 3205:
			case 3199:
			case 3243:
			case 3244:
			case 3245:
			case 3246:
			case 3247:
			case 3248:
			case 3269:
				return 1;
				break;
			}
	}
	return 0;
}

void func_510(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xF749B19A9F9B3DBF(unk_0xE0BDAFA1A39552D6());
	iVar0 = 0;
	while (iVar0 < unk_0xC4A9F8E5EC59EB4F())
	{
		iVar4 = unk_0x3FA2D2B4F501B725(iVar0);
		if (unk_0x6B90EB073E0E641F(iVar4))
		{
			iVar5 = unk_0x1886D89D5D557CB4(iVar4);
			if (unk_0xF749B19A9F9B3DBF(iVar5) != -1)
			{
				if (unk_0xF749B19A9F9B3DBF(iVar5) == iVar1 || func_89(unk_0xF749B19A9F9B3DBF(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0xE0BDAFA1A39552D6())
					{
						if (func_58(unk_0xE0BDAFA1A39552D6(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_511(*iParam0, 100) * (10f * Global_262145.f_4213)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_511(*iParam0, 100) * (20f * Global_262145.f_4206)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_511(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_512(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0xC4A9F8E5EC59EB4F())
		{
			iVar3 = iVar0;
			if (unk_0x6B90EB073E0E641F(iVar3))
			{
				iVar4 = unk_0x1886D89D5D557CB4(iVar3);
				if (func_848(iVar4, 0, 1))
				{
					if (iVar4 != unk_0xE0BDAFA1A39552D6())
					{
						iVar1++;
						if (func_58(unk_0xE0BDAFA1A39552D6(), iVar4))
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
			if (func_848(iVar4, 1, 1))
			{
				if (iVar4 != unk_0xE0BDAFA1A39552D6())
				{
					if (func_513(unk_0xE0BDAFA1A39552D6(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_58(unk_0xE0BDAFA1A39552D6(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_511(*iParam1, 100) * (10f * Global_262145.f_4213)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_511(*iParam1, 100) * (20f * Global_262145.f_4206)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_513(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_51(iParam0), func_51(iParam1));
	return 0f;
}

int func_514(int iParam0)
{
	int iVar0;
	
	if (unk_0xDC66ACBB5C8ECB07() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_511(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_515(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0xED165ADF51B05913(iParam0) > func_507(unk_0xE0BDAFA1A39552D6()))
		{
			iParam0 = -func_507(unk_0xE0BDAFA1A39552D6());
		}
	}
	if (func_516(8000, 0, 0) > 0)
	{
		if (func_516(8000, 0, 0) < (iParam0 + func_507(unk_0xE0BDAFA1A39552D6())))
		{
			iParam0 = (func_516(8000, 0, 0) - func_507(unk_0xE0BDAFA1A39552D6()));
		}
	}
	return iParam0;
}

int func_516(int iParam0, bool bParam1, int iParam2)
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
	return Global_276766[iParam0];
}

int func_517()
{
	return 1;
}

int func_518(var uParam0)
{
	if (unk_0x60D87DA27F70EBBC(uParam0))
	{
		return 1;
	}
	else if (unk_0x2F6869889D97DFED(uParam0, "") || unk_0x2F6869889D97DFED(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_519(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 2;
}

bool func_520(int iParam0)
{
	return Global_2418529[iParam0 /*313*/].f_114 == 7;
}

void func_521()
{
	Global_2445583 = 1;
}

void func_522(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_168(7))
	{
		return;
	}
	iVar0 = func_524(iParam0);
	iVar1 = func_523(iParam0);
	iVar2 = unk_0xED165ADF51B05913(unk_0x1F0E2DBE53276B95(Global_2464975.f_4685.f_67, unk_0x201D90648B2AE3CE()));
	if (iVar2 > Global_262145.f_10582)
	{
		iVar2 = Global_262145.f_10582;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_523(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10673;
		
		case 152:
			return Global_262145.f_10708;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10696;
		
		case 157:
			return Global_262145.f_10663;
		
		case 159:
			return Global_262145.f_10646;
		
		case 164:
			return Global_262145.f_10686;
		
		case 160:
			return Global_262145.f_10736;
		
		case 162:
			return Global_262145.f_10756;
		
		case 163:
			return Global_262145.f_10721;
		
		case 154:
			return Global_262145.f_10791;
		
		case 155:
			return Global_262145.f_10781;
		
		case 153:
			return Global_262145.f_10745;
		
		case 170:
			return Global_262145.f_12625;
		
		case 171:
			return Global_262145.f_12684;
		
		case 172:
			return Global_262145.f_12702;
		
		case 173:
			return Global_262145.f_12643;
		
		case 166:
			return Global_262145.f_12658;
		
		case 167:
			return Global_262145.f_12749;
		
		case 169:
			return Global_262145.f_12721;
		
		case 168:
			return Global_262145.f_12714;
		
		default:
	}
	return 0;
}

int func_524(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10672;
		
		case 152:
			return Global_262145.f_10707;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10695;
		
		case 157:
			return Global_262145.f_10662;
		
		case 159:
			return Global_262145.f_10645;
		
		case 164:
			return Global_262145.f_10685;
		
		case 160:
			return Global_262145.f_10735;
		
		case 162:
			return Global_262145.f_10755;
		
		case 163:
			return Global_262145.f_10720;
		
		case 154:
			return Global_262145.f_10790;
		
		case 155:
			return Global_262145.f_10780;
		
		case 153:
			return Global_262145.f_10744;
		
		case 170:
			return Global_262145.f_12624;
		
		case 171:
			return Global_262145.f_12683;
		
		case 172:
			return Global_262145.f_12701;
		
		case 173:
			return Global_262145.f_12642;
		
		case 166:
			return Global_262145.f_12657;
		
		default:
	}
	return 0;
}

void func_525(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_538())
		{
			if (func_479(0))
			{
				if (unk_0xA27C9E8196C79D22(func_481()))
				{
					if (func_537() == 100)
					{
						iVar0 = *iParam0;
						*iParam0 = 0;
					}
					else
					{
						iVar0 = ((*iParam0 / 100) * func_537());
						*iParam0 = (*iParam0 - iVar0);
					}
					func_535(&iVar0, 0);
					if (iParam1 == 1)
					{
						func_528("GB_BCUT_TICK1", func_481(), iVar0, 0, 0, 1, 1);
					}
					func_379(20);
					func_526(func_481(), iVar0, 1);
				}
			}
		}
	}
}

void func_526(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_848(iParam0, 0, 1))
	{
		Var0.f_0 = 456;
		Var0.f_1 = unk_0xE0BDAFA1A39552D6();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0xCCAB9843EFA5C08A(1, &Var0, 5, func_527(iParam0));
	}
}

int func_527(int iParam0)
{
	var uVar0;
	
	unk_0xE27C8E42A97895CF(&uVar0, iParam0);
	return uVar0;
}

int func_528(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x3DB24415831CBC43(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x3DB24415831CBC43(iParam1), 64);
		}
		unk_0x999E5F6D1B49D87B(sParam0);
		unk_0xD5EA844E0F1947AF(func_454(iParam1, -2, 1, 0));
		unk_0x9C174A0D56FFB64A(func_533(&Var1));
		if (!iParam3 == 0)
		{
			unk_0xD5EA844E0F1947AF(iParam3);
		}
		unk_0xD92C45283BCDA624(iParam2);
		iVar0 = unk_0xB452F88B6A7B058D(0, 1);
		func_529(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_529(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_532() || !unk_0x21A36E2323FEA4B1()) || !func_34(unk_0xE0BDAFA1A39552D6(), 0))
	{
		return;
	}
	iVar0 = func_530(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1731647.f_5[iVar0 /*53*/] = iParam0;
		Global_1731647.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1731647.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1731647.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1731647.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1731647.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1731647.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1731647.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_530(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1731647 - 1))
	{
		if (iParam0 > Global_1731647.f_5[iVar0 /*53*/].f_1)
		{
			func_531(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1731647++;
	if (Global_1731647 > 5)
	{
		Global_1731647 = 5;
		return Global_1731647;
	}
	return (Global_1731647 - 1);
}

void func_531(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1731647.f_5[iVar0 /*53*/] = { Global_1731647.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_532()
{
	return unk_0xAACC697A3792B3EF(-1762644250);
}

var func_533(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_534(&cVar0);
}

var func_534(char[4] cParam0)
{
	return cParam0;
}

void func_535(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_536(1);
	}
	else
	{
		iVar1 = func_536(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_536(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_10577;
}

int func_537()
{
	return Global_262145.f_10576;
}

bool func_538()
{
	return func_201(unk_0xE0BDAFA1A39552D6());
}

int func_539()
{
	return Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_30;
}

void func_540()
{
	int iVar0;
	
	iVar0 = Global_2497703[func_36()];
	iVar0++;
	Global_2497703[func_36()] = iVar0;
	func_415(3245, iVar0, -1, 1);
}

void func_541()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2497698[func_36()];
	iVar1 = Global_2497713[func_36()];
	iVar0++;
	iVar1++;
	Global_2497698[func_36()] = iVar0;
	Global_2497713[func_36()] = iVar1;
	Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_85 = iVar1;
	func_415(3243, iVar0, -1, 1);
	func_415(3244, iVar1, -1, 1);
}

void func_542()
{
	int iVar0;
	
	iVar0 = Global_2497708[func_36()];
	iVar0++;
	func_415(3247, iVar0, -1, 1);
}

void func_543(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_545(iParam0);
	func_544(iParam0, uVar0, iParam1);
}

void func_544(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 453;
	Var0.f_1 = unk_0xE0BDAFA1A39552D6();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	if (iParam0 != func_55())
	{
		if (unk_0xA27C9E8196C79D22(iParam0))
		{
			unk_0xCCAB9843EFA5C08A(1, &Var0, 4, func_527(iParam0));
		}
	}
}

int func_545(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_550();
	iVar0 = func_548(iParam0, iVar0);
	iVar1 = Global_1610705[func_481() /*178*/].f_10.f_155;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_12585));
	if (iVar0 < func_547())
	{
		iVar0 = func_547();
	}
	if (iVar0 > func_546())
	{
		iVar0 = func_546();
	}
	return iVar0;
}

int func_546()
{
	return Global_262145.f_12586;
}

int func_547()
{
	return Global_262145.f_13760;
}

int func_548(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_568(iParam0) * func_549());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_549()
{
	return Global_262145.f_13759;
}

var func_550()
{
	return Global_262145.f_10568;
}

int func_551(int iParam0)
{
	if (unk_0xA27C9E8196C79D22(iParam0))
	{
		if (iParam0 != unk_0xE0BDAFA1A39552D6())
		{
			if (func_272(iParam0, unk_0xE0BDAFA1A39552D6(), 0))
			{
				if (!func_184(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_552()
{
	int iVar0;
	
	iVar0 = Global_2497718[func_36()];
	iVar0++;
	func_415(3246, iVar0, -1, 1);
}

void func_553(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2497723[func_36()];
	iVar0 = (iVar0 + iParam0);
	func_415(3248, iVar0, -1, 1);
	if (func_555(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_554(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_409(7666, iVar2, -1, 1);
	}
}

int func_554(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_13903;
			break;
		
		case 2:
			return Global_262145.f_13904;
			break;
		
		case 3:
			return Global_262145.f_13905;
			break;
		
		case 4:
			return Global_262145.f_13906;
			break;
		
		case 5:
			return Global_262145.f_13907;
			break;
		
		case 6:
			return Global_262145.f_13908;
			break;
		
		case 7:
			return Global_262145.f_13909;
			break;
		
		case 8:
			return Global_262145.f_13910;
			break;
		
		case 9:
			return Global_262145.f_13911;
			break;
		
		case 10:
			return Global_262145.f_13912;
			break;
		
		case 11:
			return Global_262145.f_13913;
			break;
		
		case 12:
			return Global_262145.f_13914;
			break;
		
		case 13:
			return Global_262145.f_13915;
			break;
		
		case 14:
			return Global_262145.f_13916;
			break;
		
		case 15:
			return Global_262145.f_13917;
			break;
		
		case 16:
			return Global_262145.f_13918;
			break;
		
		case 17:
			return Global_262145.f_13919;
			break;
		
		case 18:
			return Global_262145.f_13920;
			break;
		
		case 19:
			return Global_262145.f_13921;
			break;
		
		case 20:
			return Global_262145.f_13922;
			break;
		
		case 21:
			return Global_262145.f_13923;
			break;
		
		case 22:
			return Global_262145.f_13924;
			break;
		
		case 23:
			return Global_262145.f_13925;
			break;
		
		case 24:
			return Global_262145.f_13926;
			break;
	}
	return 0;
}

int func_555(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	iVar1 = func_557(iParam0, iParam1);
	uVar2 = func_556(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0xC4D41F5AA8205814(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_556(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0xF1BE098FFCB3A8F1((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0xF1BE098FFCB3A8F1((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0xF1BE098FFCB3A8F1((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0xF1BE098FFCB3A8F1((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0xF1BE098FFCB3A8F1((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0xF1BE098FFCB3A8F1((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0xF1BE098FFCB3A8F1((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0xF1BE098FFCB3A8F1((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0xF1BE098FFCB3A8F1((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0xF1BE098FFCB3A8F1((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0xF1BE098FFCB3A8F1((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0xF1BE098FFCB3A8F1((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0xF1BE098FFCB3A8F1((iParam0 - 7641)) * 8) * 8;
	}
	return iVar0;
}

int func_557(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0x5F589E7A0D9C623A((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0x5F589E7A0D9C623A((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0x5F589E7A0D9C623A((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0x5F589E7A0D9C623A((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x78343BC601F0B283((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x78343BC601F0B283((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0x315A637AD6814955((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

int func_558(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xA27C9E8196C79D22(unk_0x801C03D92F1C6755(iVar0)))
		{
			iVar2 = unk_0x801C03D92F1C6755(iVar0);
			if (!func_34(iVar2, 0) && !func_272(iVar2, unk_0xE0BDAFA1A39552D6(), 1))
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

var func_559(int iParam0)
{
	if (iParam0 >= Global_262145.f_12958)
	{
		return Global_262145.f_12979;
	}
	else if (iParam0 >= Global_262145.f_12957)
	{
		return Global_262145.f_12978;
	}
	else if (iParam0 >= Global_262145.f_12956)
	{
		return Global_262145.f_12977;
	}
	else if (iParam0 >= Global_262145.f_12955)
	{
		return Global_262145.f_12976;
	}
	else if (iParam0 >= Global_262145.f_12954)
	{
		return Global_262145.f_12975;
	}
	else if (iParam0 >= Global_262145.f_12953)
	{
		return Global_262145.f_12974;
	}
	else if (iParam0 >= Global_262145.f_12952)
	{
		return Global_262145.f_12973;
	}
	else if (iParam0 >= Global_262145.f_12951)
	{
		return Global_262145.f_12972;
	}
	else if (iParam0 >= Global_262145.f_12950)
	{
		return Global_262145.f_12971;
	}
	else if (iParam0 >= Global_262145.f_12949)
	{
		return Global_262145.f_12970;
	}
	else if (iParam0 >= Global_262145.f_12948)
	{
		return Global_262145.f_12969;
	}
	else if (iParam0 >= Global_262145.f_12947)
	{
		return Global_262145.f_12968;
	}
	else if (iParam0 >= Global_262145.f_12946)
	{
		return Global_262145.f_12967;
	}
	else if (iParam0 >= Global_262145.f_12945)
	{
		return Global_262145.f_12966;
	}
	else if (iParam0 >= Global_262145.f_12944)
	{
		return Global_262145.f_12965;
	}
	else if (iParam0 >= Global_262145.f_12943)
	{
		return Global_262145.f_12964;
	}
	else if (iParam0 >= Global_262145.f_12942)
	{
		return Global_262145.f_12963;
	}
	else if (iParam0 >= Global_262145.f_12941)
	{
		return Global_262145.f_12962;
	}
	else if (iParam0 >= Global_262145.f_12940)
	{
		return Global_262145.f_12961;
	}
	else if (iParam0 >= Global_262145.f_12939)
	{
		return Global_262145.f_12960;
	}
	return Global_262145.f_12959;
}

int func_560(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_564(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_563(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_562(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_561(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_561(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_562(unk_0xA6055C735E3DD877(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_561(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = func_414(func_432(iParam0));
		return func_413(iVar0, -1, 0);
	}
	return 0;
}

int func_562(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_13158;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_13156;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_13160;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_13154;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_13152;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_13162;
	}
	return 0;
}

int func_563(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1736106[iVar0] == iParam1 && Global_1736113[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_564(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_250.f_68[iVar0 /*2*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_565()
{
	if (func_538())
	{
		Global_2435608.f_3065.f_70 = 0;
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_155 = Global_2435608.f_3065.f_70;
	}
}

void func_566()
{
	if (func_538())
	{
		if (Global_2435608.f_3065.f_70 < 10)
		{
			Global_2435608.f_3065.f_70++;
			Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_155 = Global_2435608.f_3065.f_70;
		}
	}
}

void func_567()
{
	if (func_538())
	{
		if (Global_2435608.f_3065.f_70 > 0)
		{
			Global_2435608.f_3065.f_70 = (Global_2435608.f_3065.f_70 - 1);
			Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_155 = Global_2435608.f_3065.f_70;
		}
	}
}

int func_568(int iParam0)
{
	return Global_1610705[iParam0 /*178*/].f_10.f_23;
}

int func_569(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10693) * Global_262145.f_10698));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10643) * Global_262145.f_10648));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10670) * Global_262145.f_10674));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10683) * Global_262145.f_10687));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10705) * Global_262145.f_10710));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10867) * Global_262145.f_10868));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10873) * Global_262145.f_10874));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10871) * Global_262145.f_10872));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10865) * Global_262145.f_10866));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10869) * Global_262145.f_10870));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10863) * Global_262145.f_10864));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_12681;
		
		case 172:
			return Global_262145.f_12697;
		
		case 173:
			return Global_262145.f_12640;
		
		case 166:
			return 0;
		
		default:
	}
	return 0;
}

int func_570(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10694) * Global_262145.f_10699));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10644) * Global_262145.f_10649));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10671) * Global_262145.f_10675));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10684) * Global_262145.f_10688));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10706) * Global_262145.f_10711));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10743) * Global_262145.f_10746));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10789) * Global_262145.f_10792));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10779) * Global_262145.f_10782));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10734) * Global_262145.f_10737));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10754) * Global_262145.f_10759));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10719) * Global_262145.f_10722));
		
		case 170:
			return Global_262145.f_12623;
		
		case 171:
			return Global_262145.f_12682;
		
		case 172:
			return Global_262145.f_12698;
		
		case 173:
			return Global_262145.f_12641;
		
		case 166:
			return 0;
		
		case 167:
			return 2000;
		
		case 168:
			return 5000;
		
		default:
	}
	return 0;
}

void func_571(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_572(iParam0))
	{
		if (!func_538())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_10587;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	*uParam1 = Global_262145.f_10586;
	*uParam2 = Global_262145.f_10585;
	if (func_237(unk_0xE0BDAFA1A39552D6(), 1))
	{
		*uParam1 = Global_262145.f_10584;
		*uParam2 = Global_262145.f_10583;
	}
	iVar0 = func_539();
	if (iVar0 != func_55())
	{
		if (func_272(unk_0xE0BDAFA1A39552D6(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_572(int iParam0)
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

void func_573(bool bParam0, int iParam1)
{
	Global_1734817.f_6 = unk_0x40077EDF3FF70C39();
	if (bParam0)
	{
		Global_1734817.f_7 = 1;
	}
	else
	{
		Global_1734817.f_7 = 0;
	}
	Global_1734817.f_8 = iParam1;
	if (Global_1734817.f_4 == 0)
	{
		if ((func_202(unk_0xE0BDAFA1A39552D6()) || func_334(unk_0xE0BDAFA1A39552D6())) || func_243(unk_0xE0BDAFA1A39552D6()))
		{
			Global_1734817.f_4 = 1;
		}
	}
}

int func_574(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_55();
	iVar1 = func_55();
	iVar2 = func_55();
	return func_575(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_575(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	struct<72> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_71 = -1;
	func_468(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_16 = iParam5;
	Var0.f_17 = iParam6;
	Var0.f_18 = iParam7;
	StringCopy(&(Var0.f_23), sParam3, 64);
	StringCopy(&(Var0.f_55), sParam8, 16);
	Var0.f_65 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_66 = uParam12;
	unk_0xE27C8E42A97895CF(&(Var0.f_63), 2);
	return func_450(&Var0);
}

int func_576(int iParam0)
{
	int iVar0;
	
	iVar0 = func_241(iParam0);
	if (iVar0 != -1)
	{
		return func_239(iVar0);
	}
	return 1;
}

char* func_577(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0xE0BDAFA1A39552D6())
	{
		sVar0 = func_580(&(Global_1610705[iParam0 /*178*/].f_10.f_77));
		return sVar0;
	}
	if (((func_184(iParam0, 28) || func_184(unk_0xE0BDAFA1A39552D6(), 28)) || func_579(iParam0)) && !func_578(iParam0))
	{
		return unk_0x71DD68B05C4C8FA5("GB_REST_ACC");
	}
	iVar1 = func_56(iParam0);
	if (iVar1 != func_55())
	{
		if (iVar1 != unk_0xE0BDAFA1A39552D6())
		{
			if (!unk_0xC9B6CD4E82C594D0(0, -1, 1))
			{
				return unk_0x71DD68B05C4C8FA5("GB_REST_ACC");
			}
		}
	}
	if (iVar1 != func_55())
	{
		sVar0 = func_580(&(Global_1610705[iVar1 /*178*/].f_10.f_77));
		if (unk_0x226FA58470A21AEF(sVar0))
		{
			return unk_0x71DD68B05C4C8FA5("GB_REST_ACC");
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_578(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_57(iParam0) };
	if (unk_0xB6FEE919E18FF45B() && unk_0x8BA2944C243C370E(&Var0))
	{
		return 1;
	}
	return 0;
}

int func_579(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_57(iParam0) };
	if (unk_0x8B003E1580113906() || unk_0x55812CD5A331E1F8())
	{
		if (unk_0x4F07450559D0D1D1(0))
		{
			return 0;
		}
	}
	else if (unk_0xB6FEE919E18FF45B())
	{
		if (unk_0x8BA2944C243C370E(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

var func_580(var uParam0)
{
	return uParam0;
}

void func_581()
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
	if (func_344())
	{
		if (func_11(&(Local_96.f_238)))
		{
			iVar1 = (func_18() - 300000);
			bVar0 = func_6(&(Local_96.f_238), iVar1, 0);
			if (bVar0)
			{
				func_589();
				if ((func_18() - func_469(&(Local_96.f_238), 0, 0)) > 0)
				{
					if ((func_18() - func_469(&(Local_96.f_238), 0, 0)) > 30000)
					{
						func_588((func_18() - func_469(&(Local_96.f_238), 0, 0)), "GB_WORK_END", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 1, 0, 0, 0);
					}
					else
					{
						func_588((func_18() - func_469(&(Local_96.f_238), 0, 0)), "GB_WORK_END", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0);
					}
				}
				else
				{
					func_588(0, "GB_WORK_END", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0);
				}
			}
		}
		return;
	}
	if (!func_796() && !func_342())
	{
		return;
	}
	if (!func_435())
	{
		return;
	}
	iVar2 = unk_0xE0BDAFA1A39552D6();
	if (func_34(unk_0xE0BDAFA1A39552D6(), 0))
	{
		iVar2 = Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_355;
	}
	iVar3 = func_333(iVar2);
	if (iVar3 < 3)
	{
		return;
	}
	iVar4 = (func_30() - Local_96.f_213);
	if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 13))
	{
		func_585(iVar4, "DCONTRA_HUD1", -1, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (func_11(&(Local_96.f_226)))
	{
		iVar5 = func_20();
		iVar6 = (func_20() - func_469(&(Local_96.f_226), 0, 0));
		func_582(iVar6, iVar5, "DCONTRA_HUD2", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1);
	}
	else
	{
		iVar5 = func_20();
		iVar6 = func_20();
		func_582(iVar6, iVar5, "DCONTRA_HUD2", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1);
	}
}

void func_582(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_584(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339962.f_1 = 1;
		func_583(0, iVar0);
		Global_1339962.f_946[iVar0] = iParam0;
		Global_1339962.f_946.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1339962.f_946.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1339962.f_946.f_194[iVar0] = iParam3;
		Global_1339962.f_946.f_183[iVar0] = iParam4;
		Global_1339962.f_946.f_216[iVar0] = iParam5;
		Global_1339962.f_946.f_227[iVar0 /*3*/] = iParam6;
		Global_1339962.f_946.f_227[iVar0 /*3*/].f_1 = iParam7;
		Global_1339962.f_946.f_258[iVar0] = iParam8;
		Global_1339962.f_946.f_269[iVar0] = iParam9;
		Global_1339962.f_946.f_312[iVar0] = iParam10;
		Global_1339962.f_946.f_323[iVar0] = iParam11;
		Global_1339962.f_946.f_334[iVar0] = iParam12;
		Global_1339962.f_946.f_345[iVar0] = iParam13;
		Global_1339962.f_941 = 1;
		Global_1339962.f_946.f_356[iVar0] = iParam14;
		Global_1339962.f_946.f_367[iVar0] = iParam15;
		Global_1339962.f_946.f_378[iVar0] = iParam16;
		Global_1339962.f_946.f_389[iVar0] = iParam17;
		Global_1339962.f_946.f_400[iVar0] = iParam18;
		Global_1339962.f_946.f_411[iVar0] = iParam19;
	}
}

void func_583(int iParam0, int iParam1)
{
	unk_0xE27C8E42A97895CF(&(Global_1339962.f_4759[iParam0]), iParam1);
}

bool func_584(int iParam0, int iParam1)
{
	return unk_0x7DA173D4FD42F36B(Global_1339962.f_4759[iParam0], iParam1);
}

void func_585(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
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
			if (func_584(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339962.f_1 = 1;
		func_583(6, iVar0);
		Global_1339962.f_3557[iVar0] = iParam0;
		StringCopy(&(Global_1339962.f_3557.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339962.f_3557.f_183[iVar0] = iParam3;
		Global_1339962.f_3557.f_172[iVar0] = iParam2;
		Global_1339962.f_3557.f_260[iVar0] = iParam4;
		Global_1339962.f_3557.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1339962.f_3557.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1339962.f_3557.f_443[iVar0] = iParam7;
		Global_1339962.f_3557.f_454[iVar0] = iParam8;
		Global_1339962.f_3557.f_497[iVar0] = iParam9;
		Global_1339962.f_3557.f_508[iVar0] = iParam10;
		Global_1339962.f_3557.f_205[iVar0] = iParam11;
		Global_1339962.f_3557.f_216[iVar0] = iParam12;
		Global_1339962.f_3557.f_227[iVar0] = iParam13;
		Global_1339962.f_3557.f_238[iVar0] = iParam14;
		Global_1339962.f_3557.f_249[iVar0] = iParam15;
		Global_1339962.f_3557.f_519[iVar0] = iParam16;
		Global_1339962.f_3557.f_530[iVar0] = iParam17;
		Global_1339962.f_3557.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_587())
		{
			Global_1339962.f_941 = 1;
		}
		if (unk_0x55812CD5A331E1F8())
		{
			iVar2 = 0;
			unk_0x4C6D647F0AAA9B5B(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1339962.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1339962.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1339962.f_941 = 1;
			}
			if (func_586())
			{
				Global_1339962.f_945 = 1;
			}
		}
	}
}

int func_586()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x55812CD5A331E1F8())
	{
		unk_0x4C6D647F0AAA9B5B(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_587()
{
	if ((unk_0x852598C027636D43() == 8 || unk_0x852598C027636D43() == 9) || unk_0x852598C027636D43() == 10)
	{
		return 1;
	}
	return 0;
}

void func_588(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_584(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1339962.f_1 = 1;
		func_583(7, iVar0);
		Global_1339962.f_4109[iVar0] = iParam0;
		StringCopy(&(Global_1339962.f_4109.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1339962.f_4109.f_172[iVar0] = iParam2;
		Global_1339962.f_4109.f_216[iVar0] = iParam3;
		Global_1339962.f_4109.f_183[iVar0] = iParam4;
		Global_1339962.f_4109.f_194[iVar0] = iParam5;
		Global_1339962.f_4109.f_249[iVar0] = iParam6;
		Global_1339962.f_4109.f_260[iVar0] = iParam7;
		Global_1339962.f_4109.f_205[iVar0] = iParam8;
		Global_1339962.f_4109.f_314[iVar0] = iParam9;
		Global_1339962.f_4109.f_325[iVar0] = iParam10;
		Global_1339962.f_4109.f_357[iVar0] = iParam11;
		Global_1339962.f_4109.f_238[iVar0] = iParam12;
		Global_1339962.f_4109.f_271[iVar0] = iParam13;
		Global_1339962.f_4109.f_368[iVar0] = iParam14;
		Global_1339962.f_4109.f_379[iVar0] = iParam15;
	}
}

void func_589()
{
	Global_1339962.f_942 = 1;
}

void func_590()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar3 = unk_0xE0BDAFA1A39552D6();
	iVar4 = unk_0x490BA5FDD7EE47A9();
	if (!unk_0x7DA173D4FD42F36B(iLocal_719, 1))
	{
		return;
	}
	if (func_34(unk_0xE0BDAFA1A39552D6(), 0))
	{
		iVar4 = func_343();
		iVar3 = Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_355;
	}
	iVar5 = func_333(iVar3);
	if (!func_435())
	{
		if (func_159("DCONTRA_OBJ"))
		{
			func_711();
		}
		if (func_159("DCONTRA_OBJ2"))
		{
			func_711();
		}
		if (func_159("DCONTRA_OBJ3"))
		{
			func_711();
		}
		if (func_159("DCONTRA_OBJ4"))
		{
			func_711();
		}
		if (func_159("DCONTRA_TOBJ"))
		{
			func_711();
		}
		if (func_159("DCONTRA_TOBJ2"))
		{
			func_711();
		}
		if (func_159("DCONTRA_TOBJ3"))
		{
			func_711();
		}
		if (func_159("DCONTRA_WOBJ"))
		{
			func_711();
		}
		return;
	}
	if (iVar5 < 3)
	{
		if (func_159("DCONTRA_OBJ"))
		{
			func_711();
		}
		if (func_159("DCONTRA_OBJ2"))
		{
			func_711();
		}
		if (func_159("DCONTRA_OBJ3"))
		{
			func_711();
		}
		if (func_159("DCONTRA_OBJ4"))
		{
			func_711();
		}
		if (func_159("DCONTRA_TOBJ"))
		{
			func_711();
		}
		if (func_159("DCONTRA_TOBJ2"))
		{
			func_711();
		}
		if (func_159("DCONTRA_TOBJ3"))
		{
			func_711();
		}
		if (func_159("DCONTRA_WOBJ"))
		{
			func_711();
		}
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!func_344())
	{
		if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 13) && !unk_0x7DA173D4FD42F36B(Local_366[iVar4 /*11*/].f_1, 11))
		{
			if (!func_159("DCONTRA_WOBJ"))
			{
				func_604("DCONTRA_WOBJ", 0);
			}
		}
		else if (iVar4 == Local_96.f_218)
		{
			if (!func_159("DCONTRA_OBJ"))
			{
				func_604("DCONTRA_OBJ", 0);
			}
		}
		else if (func_797() == Local_96.f_218)
		{
			if (!func_159("DCONTRA_OBJ"))
			{
				func_604("DCONTRA_OBJ", 0);
			}
		}
	}
	else if (func_603())
	{
		if (iVar4 == Local_96.f_218)
		{
			if (!func_159("DCONTRA_OBJ2"))
			{
				func_604("DCONTRA_OBJ2", 0);
			}
		}
		else if (func_797() == Local_96.f_218)
		{
			if (!func_159("DCONTRA_OBJ2"))
			{
				func_604("DCONTRA_OBJ2", 0);
			}
		}
	}
	else
	{
		if (func_159("DCONTRA_OBJ2"))
		{
			func_711();
		}
		if (func_159("DCONTRA_TOBJ2"))
		{
			func_711();
		}
		if (Local_96.f_216 < 0)
		{
			if (!func_159("DCONTRA_OBJ4"))
			{
				func_604("DCONTRA_OBJ4", 0);
			}
		}
		else
		{
			iVar2 = func_602();
			if (iVar2 != func_55())
			{
				if (unk_0x605885F0A8AC6672(iVar2))
				{
					if (iVar2 == iVar3)
					{
						if (!func_159("DCONTRA_OBJ3"))
						{
							func_604("DCONTRA_OBJ3", 0);
						}
					}
					else if (!func_159("DCONTRA_TOBJ3"))
					{
						iVar0 = func_241(iVar2);
						if (iVar0 > -1)
						{
							iVar1 = func_239(iVar0);
							func_591("DCONTRA_TOBJ3", "DCONTRA_CBAND", iVar1, 0);
						}
					}
				}
			}
		}
	}
}

void func_591(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_592(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312577 = 18;
		Global_1312577.f_54 = iParam2;
	}
}

int func_592(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (unk_0x226FA58470A21AEF(sParam0))
	{
		return 0;
	}
	if (unk_0x2673375C0C31BF99(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x226FA58470A21AEF(sParam1))
	{
		return 0;
	}
	if (unk_0x2673375C0C31BF99(sParam1) > 23)
	{
		return 0;
	}
	if (func_601(sParam0, sParam1) && Global_1312577.f_54 == Global_1312577.f_56)
	{
		return 0;
	}
	func_596();
	Global_1312577 = 3;
	StringCopy(&(Global_1312577.f_1), unk_0x47B34031F915C179(), 24);
	Global_1312577.f_7 = unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	StringCopy(&(Global_1312577.f_14), sParam1, 64);
	Global_1312577.f_56 = uParam3;
	func_595();
	func_594(bParam2);
	func_593();
	return 1;
}

void func_593()
{
	unk_0xE27C8E42A97895CF(&(Global_1312577.f_57), 1);
}

void func_594(bool bParam0)
{
	if (bParam0)
	{
		unk_0xE27C8E42A97895CF(&(Global_1312577.f_57), 0);
		return;
	}
	unk_0x99BCB15F954AF579(&(Global_1312577.f_57), 0);
}

void func_595()
{
	Global_1312577.f_8 = unk_0xBA8585CC543EF6BE(unk_0x201D90648B2AE3CE(), 86400000);
	Global_1312577.f_9 = unk_0x201D90648B2AE3CE();
}

void func_596()
{
	func_598();
	func_597(0);
}

void func_597(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x17CC0D5008835470();
	Global_1312577 = 19;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0x201D90648B2AE3CE();
		Global_1312577.f_9 = unk_0x201D90648B2AE3CE();
	}
	StringCopy(&(Global_1312577.f_10), "", 16);
	StringCopy(&(Global_1312577.f_14), "", 64);
	StringCopy(&(Global_1312577.f_30), "", 64);
	Global_1312577.f_50 = 0;
	Global_1312577.f_51 = 0;
	Global_1312577.f_52 = 0;
	Global_1312577.f_53 = -1;
	Global_1312577.f_54 = 0;
	Global_1312577.f_57 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_598()
{
	if (!func_600())
	{
	}
	if (func_162())
	{
		unk_0xDC3C901EF33A999B(&(Global_1312577.f_10));
		func_599();
		unk_0x50E6AB5DBF4F6633();
	}
}

void func_599()
{
	switch (Global_1312577)
	{
		case 19:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0xD92C45283BCDA624(Global_1312577.f_50);
			return;
		
		case 2:
			unk_0xD92C45283BCDA624(Global_1312577.f_50);
			unk_0xD92C45283BCDA624(Global_1312577.f_51);
			return;
		
		case 3:
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_14));
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x31D14A3385CE358B(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_30));
			return;
		
		case 12:
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x31D14A3385CE358B(&(Global_1312577.f_14));
			return;
		
		case 13:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_30));
			return;
		
		case 14:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0xD5EA844E0F1947AF(Global_1312577.f_55);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_30));
			return;
		
		case 16:
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_30));
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_46));
			return;
		
		case 15:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			return;
		
		case 18:
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_14));
			return;
		
		case 17:
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_14));
			unk_0xD5EA844E0F1947AF(Global_1312577.f_54);
			unk_0x4C5D86B5B659C953(&(Global_1312577.f_46));
			unk_0x9C174A0D56FFB64A(&(Global_1312577.f_30));
			return;
		
		default:
	}
}

int func_600()
{
	if (!func_162())
	{
		return 0;
	}
	unk_0xD6574ACDB39AA1DE(&(Global_1312577.f_10));
	func_599();
	return unk_0xAB0007E3E71F28E1();
}

bool func_601(char* sParam0, char* sParam1)
{
	if (!func_162())
	{
		return 0;
	}
	if (unk_0x226FA58470A21AEF(sParam0))
	{
		return 0;
	}
	if (unk_0x226FA58470A21AEF(sParam1))
	{
		return 0;
	}
	if (!unk_0x9F7CDE7B20BCB675(sParam0) == unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_10)))
	{
		return 0;
	}
	return unk_0x9F7CDE7B20BCB675(sParam1) == unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_14));
}

int func_602()
{
	int iVar0;
	
	iVar0 = func_55();
	if (Local_96.f_216 > -1)
	{
		iVar0 = unk_0x801C03D92F1C6755(Local_96.f_216);
	}
	return iVar0;
}

int func_603()
{
	var uVar0;
	var uVar1;
	
	if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_96.f_2[0 /*10*/].f_2))
		{
			uVar0 = unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2);
			if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[0 /*10*/].f_1))
			{
				if (!func_24(Local_96.f_2[0 /*10*/].f_1))
				{
					uVar1 = unk_0x220B3465A4B1FBA5(Local_96.f_2[0 /*10*/].f_1);
					if (unk_0x93E49C491856D7AD(uVar1, uVar0, 0))
					{
						return 1;
					}
				}
			}
			if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[1 /*10*/].f_1))
			{
				if (!func_24(Local_96.f_2[1 /*10*/].f_1))
				{
					iVar1 = unk_0x220B3465A4B1FBA5(Local_96.f_2[1 /*10*/].f_1);
					if (unk_0x93E49C491856D7AD(iVar1, iVar0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_604(char* sParam0, bool bParam1)
{
	if (unk_0x226FA58470A21AEF(sParam0))
	{
		return;
	}
	if (unk_0x2673375C0C31BF99(sParam0) > 23)
	{
		return;
	}
	if (func_160(sParam0))
	{
		return;
	}
	func_596();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), unk_0x47B34031F915C179(), 24);
	Global_1312577.f_7 = unk_0x9F7CDE7B20BCB675(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_595();
	func_594(bParam1);
	func_593();
}

void func_605()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_796() && !func_342())
	{
		return;
	}
	if (!unk_0x7DA173D4FD42F36B(iLocal_719, 18))
	{
		iVar0 = func_333(unk_0xE0BDAFA1A39552D6());
		if (iVar0 >= 2)
		{
			unk_0xE27C8E42A97895CF(&iLocal_719, 18);
			func_707();
		}
	}
	if (!func_435())
	{
		return;
	}
	iVar1 = unk_0x490BA5FDD7EE47A9();
	iVar2 = unk_0xE0BDAFA1A39552D6();
	if (func_34(unk_0xE0BDAFA1A39552D6(), 0))
	{
		iVar1 = func_343();
		iVar2 = Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_355;
	}
	if (!unk_0x7DA173D4FD42F36B(iLocal_719, 1))
	{
		iVar0 = func_333(iVar2);
		if (iVar0 >= 2)
		{
			if (iVar1 == Local_96.f_218)
			{
				if (func_344())
				{
					if (func_628())
					{
						func_449(85, "BIGM_DEFEND", "BIGM_DEFEND3", 1, -1, 2);
						unk_0xE27C8E42A97895CF(&iLocal_719, 1);
					}
				}
				else if (func_628())
				{
					func_449(85, "BIGM_DEFEND", "BIGM_DEFEND2", 1, -1, 2);
					unk_0xE27C8E42A97895CF(&iLocal_719, 1);
				}
				if (unk_0x7DA173D4FD42F36B(iLocal_719, 1))
				{
					if (iVar2 == unk_0xE0BDAFA1A39552D6())
					{
						func_627(1);
					}
				}
			}
			else if (func_797() == Local_96.f_218)
			{
				if (func_344())
				{
					if (func_606(func_623(1), "DCONTRA_TXT2", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						func_449(85, "BIGM_DEFEND", "BIGM_DEFEND3", 1, -1, 2);
					}
				}
				else if (func_606(func_623(1), "DCONTRA_TXT1", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_449(85, "BIGM_DEFEND", "BIGM_DEFEND4", 1, -1, 2);
				}
				if (iVar2 == unk_0xE0BDAFA1A39552D6())
				{
					func_627(1);
				}
				unk_0xE27C8E42A97895CF(&iLocal_719, 1);
			}
			else
			{
				unk_0xE27C8E42A97895CF(&iLocal_719, 1);
			}
		}
		else
		{
			unk_0xE27C8E42A97895CF(&iLocal_719, 1);
		}
	}
}

int func_606(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x99BCB15F954AF579(&Global_2283, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_607(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2990 = iParam6;
			Global_2893[3 /*6*/] = { Global_101186.f_32651[iParam0 /*29*/].f_3 };
			Global_2970 = iParam0;
			unk_0xE27C8E42A97895CF(&Global_2283, 1);
			unk_0xE27C8E42A97895CF(&Global_2283, 7);
		}
		return 1;
	}
	return 0;
}

int func_607(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x2F6869889D97DFED(sParam14, sParam15))
	{
	}
	func_617();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14413 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14413 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14413 == 1)
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
		if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
		{
			if (unk_0x0B755A8FB5904621(unk_0x06736567F820A39E()))
			{
				return 0;
			}
		}
		if (Global_101186.f_12817[Global_14413 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0x98934607F8D0FB03(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0x98934607F8D0FB03(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_616() == 0)
	{
		func_614();
		return 0;
	}
	func_613(Global_16779);
	StringCopy(&(Global_101186.f_12907[Global_16779 /*104*/]), sParam1, 64);
	Global_101186.f_12907[Global_16779 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101186.f_12907[Global_16779 /*104*/].f_24 = iParam2;
	}
	Global_101186.f_12907[Global_16779 /*104*/].f_25 = iParam7;
	Global_101186.f_12907[Global_16779 /*104*/].f_26 = uParam8;
	Global_101186.f_12907[Global_16779 /*104*/].f_29 = uParam9;
	Global_101186.f_12907[Global_16779 /*104*/].f_30 = uParam12;
	Global_101186.f_12907[Global_16779 /*104*/].f_31 = uParam11;
	Global_101186.f_12907[Global_16779 /*104*/].f_28 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101186.f_12907[Global_16779 /*104*/].f_33), sParam4, 64);
	Global_101186.f_12907[Global_16779 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101186.f_12907[Global_16779 /*104*/].f_50), sParam5, 64);
	Global_101186.f_12907[Global_16779 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101186.f_12907[Global_16779 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101186.f_12907[Global_16779 /*104*/].f_83), sParam15, 64);
	if (unk_0x7DA173D4FD42F36B(Global_2283, 10))
	{
		Global_101186.f_12907[Global_16779 /*104*/].f_99[0] = 1;
		Global_101186.f_12907[Global_16779 /*104*/].f_99[1] = 1;
		Global_101186.f_12907[Global_16779 /*104*/].f_99[2] = 1;
		Global_2989 = 4;
		func_612(0);
		func_612(2);
		func_612(1);
	}
	else
	{
		func_617();
		switch (iParam16)
		{
			case 3:
				Global_101186.f_12907[Global_16779 /*104*/].f_99[Global_14413] = 1;
				break;
			
			case 0:
				Global_101186.f_12907[Global_16779 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101186.f_12907[Global_16779 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101186.f_12907[Global_16779 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14413)
			{
				case 0:
					func_612(0);
					Global_2989 = 0;
					break;
				
				case 1:
					func_612(1);
					Global_2989 = 1;
					break;
				
				case 2:
					func_612(2);
					Global_2989 = 2;
					break;
				
				case 3:
					func_612(3);
					Global_2989 = 3;
					break;
				
				default:
					Global_2989 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (unk_0x7DA173D4FD42F36B(Global_2283, 10))
		{
			Global_101186.f_12817[0 /*20*/].f_17 = 1;
			Global_101186.f_12817[1 /*20*/].f_17 = 1;
			Global_101186.f_12817[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101186.f_12817[Global_14413 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101186.f_12817[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101186.f_12817[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101186.f_12817[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16781[Global_16779] = 0;
	if (bParam10)
	{
		func_617();
		if (Global_14356)
		{
			StringCopy(&Global_14402, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14413)
			{
				case 0:
					StringCopy(&Global_14402, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14402, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14402, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14402, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_446())
			{
				unk_0x962E604CCA53388F(-1, "Text_Arrive_Tone", &Global_14402, 1);
			}
		}
	}
	if (!Global_14572)
	{
		if (Global_14413.f_1 == 6)
		{
			func_611(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_608(1);
			func_611(Global_14394, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14393), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_608(int iParam0)
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
	
	Global_16780 = 0;
	Global_2888 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2852[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_610(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (unk_0x7DA173D4FD42F36B(Global_2284, 3))
								{
									iVar2 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14575 = 0;
								}
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_230(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(iVar2);
								unk_0xE97F1B22C5E8989F();
							}
							if (Global_2444091)
							{
								if (iVar1 == 14)
								{
									func_609(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2852[iVar0] = 1;
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
				if (iParam0 == Global_2290[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2290[iVar1 /*15*/].f_4)
					{
						if (Global_2852[iVar0] == 0)
						{
							Global_2816[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_101186.f_12907[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101186.f_12907[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101186.f_12907[iVar3 /*104*/].f_99[Global_14413] == 1)
											{
												Global_16780++;
											}
										}
									}
									iVar3++;
								}
								func_609(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16780), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69521)
								{
									iVar4 = 0;
									iVar4 = Global_2566789;
									func_609(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14413)
									{
										case 0:
											iVar5 = Global_36875;
											break;
										
										case 1:
											iVar5 = Global_36876;
											break;
										
										case 2:
											iVar5 = Global_36877;
											break;
										
										default:
											break;
									}
									func_609(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar5), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_609(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16775), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_230(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(Global_2289);
								unk_0xE97F1B22C5E8989F();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x7DA173D4FD42F36B(Global_2284, 6))
								{
									iVar6 = 42;
								}
								else
								{
									iVar6 = 255;
								}
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_230(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(iVar6);
								unk_0xE97F1B22C5E8989F();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x7DA173D4FD42F36B(Global_2284, 3))
								{
									iVar7 = 42;
									Global_14575 = 1;
								}
								else
								{
									iVar7 = 255;
									Global_14575 = 0;
								}
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_230(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(iVar7);
								unk_0xE97F1B22C5E8989F();
							}
							else if (iVar1 == 8)
							{
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_230(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(42);
								unk_0xE97F1B22C5E8989F();
							}
							else if ((iVar1 == 23 && unk_0x2F6869889D97DFED(&(Global_2290[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x7DA173D4FD42F36B(Global_2284, 6))
							{
								unk_0x2B859AD680983623(Global_14394, "SET_DATA_SLOT");
								unk_0x7AF283DA3BA078CD(1);
								unk_0x7AF283DA3BA078CD(iVar0);
								unk_0x7AF283DA3BA078CD(Global_2290[iVar1 /*15*/].f_10);
								unk_0x7AF283DA3BA078CD(0);
								func_230(&(Global_2290[iVar1 /*15*/]));
								unk_0x7AF283DA3BA078CD(42);
								unk_0xE97F1B22C5E8989F();
							}
							else if (Global_2290[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar8 = 0;
								iVar8 = Global_1609456.f_1;
								func_609(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar8), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_609(Global_14394, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2290[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2290[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2852[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_609(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0x2B859AD680983623(uParam0, sParam1);
	unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x226FA58470A21AEF(sParam7))
	{
		func_230(sParam7);
	}
	if (!unk_0x226FA58470A21AEF(sParam8))
	{
		func_230(sParam8);
	}
	if (!unk_0x226FA58470A21AEF(sParam9))
	{
		func_230(sParam9);
	}
	if (!unk_0x226FA58470A21AEF(sParam10))
	{
		func_230(sParam10);
	}
	if (!unk_0x226FA58470A21AEF(sParam11))
	{
		func_230(sParam11);
	}
	unk_0xE97F1B22C5E8989F();
}

bool func_610(int iParam0)
{
	return Global_35742 == iParam0;
}

void func_611(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0x2B859AD680983623(uParam0, sParam1);
	unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7AF283DA3BA078CD(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE97F1B22C5E8989F();
}

void func_612(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101186.f_12817[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_613(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xF14A94DD5AC25E5A();
	uVar1 = unk_0x4DD90C24B73F9042();
	uVar2 = unk_0xEC5C0F25A9A364A0();
	uVar3 = unk_0xED13857F967C0912();
	uVar4 = unk_0x39BDC971C31BA81C() + 1;
	uVar5 = unk_0x6EBF2ECA5972D1E7();
	Global_101186.f_12907[iParam0 /*104*/].f_18 = uVar0;
	Global_101186.f_12907[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101186.f_12907[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101186.f_12907[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101186.f_12907[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101186.f_12907[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_614()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69521)
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
	Global_16779 = 34;
	Global_101186.f_12907[Global_16779 /*104*/].f_18 = -1;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_615(Global_101186.f_12907[iVar2 /*104*/].f_18, Global_101186.f_12907[Global_16779 /*104*/].f_18))
		{
			Global_16779 = iVar2;
		}
		iVar2++;
	}
	Global_101186.f_12907[Global_16779 /*104*/].f_24 = 1;
}

int func_615(struct<6> Param0, struct<6> Param6)
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

int func_616()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69521)
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
		if (Global_101186.f_12907[iVar2 /*104*/].f_24 == 0)
		{
			Global_16779 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16779 = 34;
	Global_101186.f_12907[Global_16779 /*104*/].f_18 = -1;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_1 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_2 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_3 = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101186.f_12907[iVar2 /*104*/].f_24 == 0 || Global_101186.f_12907[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_615(Global_101186.f_12907[iVar2 /*104*/].f_18, Global_101186.f_12907[Global_16779 /*104*/].f_18))
			{
				Global_16779 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16779 == 34)
	{
		return 0;
	}
	Global_101186.f_12907[Global_16779 /*104*/].f_99[0] = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_99[1] = 0;
	Global_101186.f_12907[Global_16779 /*104*/].f_99[2] = 0;
	return 1;
}

void func_617()
{
	if (func_610(14))
	{
		if (!unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
		{
			if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()) == Global_101186.f_32651[2 /*29*/])
			{
				Global_14413 = 2;
			}
			else
			{
				Global_14413 = 0;
			}
		}
	}
	else
	{
		Global_14413 = func_618();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69521)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

var func_618()
{
	func_619();
	return Global_101186.f_1902.f_539.f_3549;
}

void func_619()
{
	int iVar0;
	
	if (unk_0xC1EDB61CE0A4B94E(unk_0x06736567F820A39E()))
	{
		if (func_622(Global_101186.f_1902.f_539.f_3549) != unk_0x79469DA5833EACA8(unk_0x06736567F820A39E()))
		{
			iVar0 = func_621(unk_0x06736567F820A39E());
			if (func_620(iVar0) && (!func_610(14) || Global_100138))
			{
				if (Global_101186.f_1902.f_539.f_3549 != iVar0 && func_620(Global_101186.f_1902.f_539.f_3549))
				{
					Global_101186.f_1902.f_539.f_3550 = Global_101186.f_1902.f_539.f_3549;
				}
				Global_101186.f_1902.f_539.f_3551 = iVar0;
				Global_101186.f_1902.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101186.f_1902.f_539.f_3549 != 145)
			{
				Global_101186.f_1902.f_539.f_3551 = Global_101186.f_1902.f_539.f_3549;
			}
			return;
		}
	}
	Global_101186.f_1902.f_539.f_3549 = 145;
}

bool func_620(int iParam0)
{
	return iParam0 < 3;
}

int func_621(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		iVar1 = unk_0x79469DA5833EACA8(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_622(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_622(int iParam0)
{
	if (func_620(iParam0))
	{
		return Global_101186.f_32651[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_623(bool bParam0)
{
	if (func_625(bParam0))
	{
		if (bParam0 && func_624())
		{
			Global_101186.f_32651[22 /*29*/].f_24[Global_14413] = 1;
			return 22;
		}
		else
		{
			return 75;
		}
	}
	if (bParam0 && func_624())
	{
		Global_101186.f_32651[22 /*29*/].f_24[Global_14413] = 1;
		return 22;
	}
	return 74;
}

int func_624()
{
	int iVar0;
	
	iVar0 = func_56(unk_0xE0BDAFA1A39552D6());
	if (((iVar0 != unk_0xE0BDAFA1A39552D6() && iVar0 != func_55()) && unk_0xA27C9E8196C79D22(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

bool func_625(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = func_56(unk_0xE0BDAFA1A39552D6());
		if (func_624())
		{
			if (func_626(iVar0))
			{
				return 1;
			}
			return 0;
		}
	}
	return func_413(3200, -1, 0) != 0;
}

bool func_626(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1587816[iParam0 /*444*/].f_250.f_7, 29);
}

void func_627(bool bParam0)
{
	if (bParam0)
	{
		if (!func_184(unk_0xE0BDAFA1A39552D6(), 9))
		{
			if (func_333(unk_0xE0BDAFA1A39552D6()) != 0)
			{
				func_185(9);
			}
		}
	}
	else if (func_184(unk_0xE0BDAFA1A39552D6(), 9))
	{
		func_183(9);
	}
}

int func_628()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_623(1);
	switch (iLocal_835)
	{
		case 0:
			sLocal_836 = func_706();
			if (func_625(1))
			{
				func_705(&uLocal_837, 3, 0, "EXECPA_MALE", 0, 1);
			}
			else
			{
				func_705(&uLocal_837, 2, 0, "EXECPA_FEMALE", 0, 1);
			}
			iLocal_835++;
			break;
		
		case 1:
			if (func_699(0, 1, 0, 1))
			{
				unk_0xE27C8E42A97895CF(&uVar1, 4);
				if (func_629(&uLocal_837, iVar0, "EXCALAU", sLocal_836, uVar1, 0))
				{
					iLocal_835++;
					return 1;
				}
			}
			break;
		
		case 2:
			break;
	}
	return 0;
}

int func_629(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_697())
	{
		return 0;
	}
	if (func_696())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_630(uParam0, iParam1, sParam2, sParam3, 1, iParam5, uParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_630(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, int iParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x226FA58470A21AEF(sParam2))
	{
		return 0;
	}
	if (unk_0x2673375C0C31BF99(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x226FA58470A21AEF(sParam3))
	{
		return 0;
	}
	if (unk_0x2673375C0C31BF99(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x9F7CDE7B20BCB675(unk_0x47B34031F915C179());
	iVar1 = func_695(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x226FA58470A21AEF(iParam7))
	{
		iVar2 = unk_0x9F7CDE7B20BCB675(iParam7);
	}
	if (func_694(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_689(uParam6))
	{
		return 0;
	}
	if (func_686(iVar0, iVar1, iVar2))
	{
		if (func_685())
		{
			return 0;
		}
		func_684();
		return func_637(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, iParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_636(iParam4))
	{
		return 0;
	}
	func_631(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_631(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1332285.f_40.f_1 = iParam0;
	Global_1332285.f_40.f_2 = iParam1;
	Global_1332285.f_40.f_3 = iParam2;
	StringCopy(&(Global_1332285.f_40.f_4), sParam3, 16);
	Global_1332285.f_40.f_8 = iParam4;
	Global_1332285.f_40.f_9 = iParam5;
	Global_1332285.f_40.f_14 = uParam6;
	func_632(iParam4);
	func_684();
	Global_1332285.f_40.f_13 = unk_0xBA8585CC543EF6BE(unk_0x201D90648B2AE3CE(), 7000);
}

void func_632(int iParam0)
{
	if (func_635(iParam0))
	{
		func_634();
		return;
	}
	func_633();
}

void func_633()
{
	Global_1332285.f_40.f_10 = 0;
}

void func_634()
{
	Global_1332285.f_40.f_10 = 1;
}

int func_635(int iParam0)
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

bool func_636(int iParam0)
{
	return iParam0 > Global_1332285.f_40.f_8;
}

int func_637(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_683();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_680(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_677(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_680(uParam0, sParam3, sParam4);
		}
		return func_661(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_660(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_656(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_655(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_638(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_638(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_654();
	bVar0 = true;
	if (func_640(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_639(120000);
		return 1;
	}
	return 0;
}

void func_639(int iParam0)
{
	Global_1332285.f_40.f_11 = unk_0xBA8585CC543EF6BE(unk_0x201D90648B2AE3CE(), iParam0);
	Global_1332285.f_40.f_12 = 1;
}

int func_640(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
		sVar2 = unk_0x3DB24415831CBC43(iVar0);
		iVar1 = func_250(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xE96D4FF9851C6F0F(unk_0x201D90648B2AE3CE(), Global_1332285.f_40.f_13))
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
	sVar4 = func_653(uParam5, bParam6, &iVar3);
	uVar5 = func_651(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x226FA58470A21AEF(sParam8))
	{
		iVar6++;
		if (!unk_0x226FA58470A21AEF(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x2F6869889D97DFED(sVar4, " "))
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
		if (unk_0x7DA173D4FD42F36B(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x7DA173D4FD42F36B(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x226FA58470A21AEF(sVar2))
	{
		bVar12 = func_650(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_644(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x7DA173D4FD42F36B(iParam4, 0))
	{
		func_643();
	}
	func_654();
	func_642();
	func_641();
	return 1;
}

void func_641()
{
	Global_1332285.f_57 = 0;
	Global_1332285.f_57.f_1 = 0;
}

void func_642()
{
	Global_1332285.f_40 = 3;
}

void func_643()
{
	unk_0xE27C8E42A97895CF(&Global_2283, 8);
}

int func_644(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_645(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2990 = iParam6;
			unk_0xE27C8E42A97895CF(&Global_2568055, 0);
		}
		return 1;
	}
	return 0;
}

int func_645(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x2F6869889D97DFED(sParam14, sParam15))
	{
	}
	func_617();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14413 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14413 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14413 == 1)
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
		if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
		{
			if (unk_0x0B755A8FB5904621(unk_0x06736567F820A39E()))
			{
				return 0;
			}
		}
		if (Global_2568040 == 1)
		{
			return 0;
		}
		if (unk_0x98934607F8D0FB03(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0x98934607F8D0FB03(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_649() == 0)
	{
		func_647();
		return 0;
	}
	func_646(Global_2568039);
	StringCopy(&(Global_2566790[Global_2568039 /*104*/]), sParam1, 64);
	Global_2566790[Global_2568039 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2566790[Global_2568039 /*104*/].f_24 = iParam2;
	}
	Global_2566790[Global_2568039 /*104*/].f_25 = iParam7;
	Global_2566790[Global_2568039 /*104*/].f_26 = uParam8;
	Global_2566790[Global_2568039 /*104*/].f_29 = uParam9;
	Global_2566790[Global_2568039 /*104*/].f_30 = uParam12;
	Global_2566790[Global_2568039 /*104*/].f_31 = uParam11;
	Global_2566790[Global_2568039 /*104*/].f_28 = 0;
	Global_2566790[Global_2568039 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2566790[Global_2568039 /*104*/].f_33), sParam4, 64);
	Global_2566790[Global_2568039 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2566790[Global_2568039 /*104*/].f_50), sParam5, 64);
	Global_2566790[Global_2568039 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2566790[Global_2568039 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2566790[Global_2568039 /*104*/].f_83), sParam15, 64);
	func_617();
	switch (iParam16)
	{
		case 3:
			Global_2566790[Global_2568039 /*104*/].f_99[Global_14413] = 1;
			break;
		
		case 0:
			Global_2566790[Global_2568039 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2566790[Global_2568039 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2566790[Global_2568039 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14413)
		{
			case 0:
				func_612(0);
				break;
			
			case 1:
				func_612(1);
				break;
			
			case 2:
				func_612(2);
				break;
			
			case 3:
				func_612(3);
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
				Global_2568040 = 1;
				break;
			
			case 0:
				Global_2568040 = 1;
				break;
			
			case 2:
				Global_2568040 = 1;
				break;
			
			case 1:
				Global_2568040 = 1;
				break;
			}
	}
	Global_16781[Global_2568039] = 0;
	if (bParam10)
	{
		func_617();
		if (Global_14356)
		{
			StringCopy(&Global_14402, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14413)
			{
				case 0:
					StringCopy(&Global_14402, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14402, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14402, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14402, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_446())
			{
				unk_0x962E604CCA53388F(-1, "Text_Arrive_Tone", &Global_14402, 1);
			}
		}
	}
	if (!Global_14572)
	{
		if (Global_14413.f_1 == 6)
		{
			func_611(Global_14394, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_608(1);
			func_611(Global_14394, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14393), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_646(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0xF14A94DD5AC25E5A();
	uVar1 = unk_0x4DD90C24B73F9042();
	uVar2 = unk_0xEC5C0F25A9A364A0();
	uVar3 = unk_0xED13857F967C0912();
	uVar4 = unk_0x39BDC971C31BA81C() + 1;
	uVar5 = unk_0x6EBF2ECA5972D1E7();
	Global_2566790[iParam0 /*104*/].f_18 = uVar0;
	Global_2566790[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2566790[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2566790[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2566790[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2566790[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_647()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2568039 = 11;
	Global_2566790[Global_2568039 /*104*/].f_18 = -1;
	Global_2566790[Global_2568039 /*104*/].f_18.f_1 = 0;
	Global_2566790[Global_2568039 /*104*/].f_18.f_2 = 0;
	Global_2566790[Global_2568039 /*104*/].f_18.f_3 = 0;
	Global_2566790[Global_2568039 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_648(Global_2566790[iVar2 /*104*/].f_18, Global_2566790[Global_2568039 /*104*/].f_18))
		{
			Global_2568039 = iVar2;
		}
		iVar2++;
	}
	Global_2566790[Global_2568039 /*104*/].f_24 = 1;
}

int func_648(struct<6> Param0, struct<6> Param6)
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

int func_649()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2566790[iVar2 /*104*/].f_24 == 0)
		{
			Global_2568039 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2568039 = 11;
	Global_2566790[Global_2568039 /*104*/].f_18 = -1;
	Global_2566790[Global_2568039 /*104*/].f_18.f_1 = 0;
	Global_2566790[Global_2568039 /*104*/].f_18.f_2 = 0;
	Global_2566790[Global_2568039 /*104*/].f_18.f_3 = 0;
	Global_2566790[Global_2568039 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2566790[iVar2 /*104*/].f_24 == 0 || Global_2566790[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_648(Global_2566790[iVar2 /*104*/].f_18, Global_2566790[Global_2568039 /*104*/].f_18))
			{
				Global_2568039 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2568039 == 11)
	{
		return 0;
	}
	Global_2566790[Global_2568039 /*104*/].f_99[0] = 0;
	Global_2566790[Global_2568039 /*104*/].f_99[1] = 0;
	Global_2566790[Global_2568039 /*104*/].f_99[2] = 0;
	return 1;
}

int func_650(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_645(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_2990 = iParam10;
			unk_0xE27C8E42A97895CF(&Global_2568055, 0);
		}
		return 1;
	}
	return 0;
}

int func_651(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_652(2, iParam1);
	return iParam0;
}

void func_652(int iParam0, var uParam1)
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

var func_653(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0x226FA58470A21AEF(uParam0))
	{
		return sLocal_18;
	}
	if (unk_0x2F6869889D97DFED(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_652(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0x71DD68B05C4C8FA5(sParam0);
}

void func_654()
{
	Global_1332285.f_40.f_9 = 4;
}

int func_655(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_654();
	bVar0 = false;
	return func_640(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_656(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_657(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_657(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
		sVar2 = unk_0x3DB24415831CBC43(iVar0);
		iVar1 = func_250(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xE96D4FF9851C6F0F(unk_0x201D90648B2AE3CE(), Global_1332285.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16773 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_653(uParam5, bParam6, &iVar3);
	uVar5 = func_651(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x226FA58470A21AEF(sParam8))
	{
		iVar6++;
		if (!unk_0x226FA58470A21AEF(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x2F6869889D97DFED(sVar4, " "))
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
		if (unk_0x7DA173D4FD42F36B(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x7DA173D4FD42F36B(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x226FA58470A21AEF(sVar2))
	{
		bVar12 = func_659(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_606(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x7DA173D4FD42F36B(iParam4, 0))
	{
		func_643();
	}
	func_658();
	func_642();
	func_641();
	return 1;
}

void func_658()
{
	Global_1332285.f_40.f_9 = 3;
}

int func_659(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	unk_0x99BCB15F954AF579(&Global_2283, 10);
	iVar0 = 3;
	if (func_607(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_2990 = iParam10;
			Global_2893[3 /*6*/] = { Global_101186.f_32651[iParam0 /*29*/].f_3 };
			Global_2970 = iParam0;
			StringCopy(&Global_2971, sParam5, 64);
			unk_0xE27C8E42A97895CF(&Global_2283, 1);
			unk_0xE27C8E42A97895CF(&Global_2283, 7);
		}
		return 1;
	}
	return 0;
}

int func_660(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
	}
	if (unk_0x96E2A6D13B9C3420(unk_0x06736567F820A39E()))
	{
		return 0;
	}
	func_658();
	bVar0 = true;
	if (func_657(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_639(120000);
		return 1;
	}
	return 0;
}

int func_661(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		if (unk_0x96E2A6D13B9C3420(unk_0x06736567F820A39E()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x7DA173D4FD42F36B(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x7DA173D4FD42F36B(iParam4, 4))
	{
		bVar0 = func_676(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_667(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x7DA173D4FD42F36B(iParam4, 3))
		{
			func_666(1);
		}
		if (unk_0x7DA173D4FD42F36B(iParam4, 5))
		{
			func_665(1);
		}
		func_664();
		func_642();
		func_663();
		func_662();
		return 1;
	}
	return 0;
}

void func_662()
{
	Global_2471999 = 0;
}

void func_663()
{
	Global_1332285.f_57 = 1;
	Global_1332285.f_57.f_1 = 0;
}

void func_664()
{
	Global_1332285.f_40.f_9 = 1;
}

void func_665(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xE27C8E42A97895CF(&Global_2285, 0);
	}
	else
	{
		unk_0x99BCB15F954AF579(&Global_2285, 0);
	}
}

void func_666(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xE27C8E42A97895CF(&Global_2283, 20);
	}
	else
	{
		unk_0x99BCB15F954AF579(&Global_2283, 20);
	}
}

int func_667(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_675(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15760 = 0;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 0;
	Global_15766 = 0;
	Global_2621441 = 0;
	return func_668(sParam3, iParam4, bParam7);
}

int func_668(char* sParam0, int iParam1, bool bParam2)
{
	Global_15713 = 0;
	if (Global_15712 == 0 || Global_15714 == 2)
	{
		if (Global_15712 != 0)
		{
			if (iParam1 > Global_15714)
			{
				if (Global_15719 == 0)
				{
					unk_0xC48487554D051523(0);
					Global_14413.f_1 = 3;
					Global_15712 = 0;
					Global_15713 = 1;
					Global_15765 = 0;
					Global_15708 = 0;
					Global_15709 = 0;
					Global_15723 = 0;
					Global_15722 = 0;
					Global_14412 = 0;
				}
				else
				{
					func_674();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x97D4BC3047CEF5DE())
		{
			return 0;
		}
		if (func_317(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_673();
		Global_15001 = { Global_15166 };
		Global_15718 = Global_15719;
		Global_15725 = Global_15726;
		Global_2621442 = Global_2621441;
		Global_15727 = { Global_15743 };
		Global_15720 = Global_15721;
		Global_16702 = Global_16703;
		Global_16710 = { Global_16716 };
		Global_16704 = Global_16705;
		Global_16706 = Global_16707;
		Global_16708 = Global_16709;
		Global_15331.f_370 = Global_16701;
		Global_15331.f_368 = Global_16699;
		Global_15331.f_369 = Global_16700;
		Global_15708 = Global_15709;
		if (Global_15718)
		{
			unk_0x99BCB15F954AF579(&Global_2283, 20);
			unk_0x99BCB15F954AF579(&Global_2284, 17);
			unk_0x99BCB15F954AF579(&Global_2285, 0);
			if (bParam2)
			{
				func_617();
				if (Global_3088[Global_14413 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14413.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14379 == 1)
			{
				return 0;
			}
			if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
			{
				if (unk_0x29A1618738394E16(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (func_672())
				{
					return 0;
				}
				if (unk_0x96E2A6D13B9C3420(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (unk_0x9C4162CAC2B459EC(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (unk_0x5378344F881C2B51(unk_0x06736567F820A39E()))
				{
					return 0;
				}
				if (unk_0x206A3BB6682CBCBD(unk_0x06736567F820A39E(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69521)
				{
					if (unk_0xC774E76B3D78AD45(unk_0x06736567F820A39E()))
					{
						return 0;
					}
					if (unk_0x57EEE01FD8B2618E(unk_0xE0BDAFA1A39552D6()))
					{
						return 0;
					}
					if (unk_0x973D428626B4A21D(unk_0x06736567F820A39E()))
					{
						return 0;
					}
					if (unk_0x4AEBCDB39031E1D4(unk_0xE0BDAFA1A39552D6()))
					{
						return 0;
					}
				}
			}
			if (func_671())
			{
				return 0;
			}
			else
			{
				switch (Global_14413.f_1)
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
				if (unk_0x7DA173D4FD42F36B(Global_2283, 9))
				{
					return 0;
				}
			}
			func_670();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_669();
		return 1;
	}
	if (Global_15712 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15714 || iParam1 == Global_15714)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_674();
	}
	return 0;
}

void func_669()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xC48487554D051523(0);
	Global_15712 = 1;
}

void func_670()
{
	Global_15765 = Global_15764;
	Global_15759 = Global_15760;
	Global_15806 = { Global_15794 };
	Global_15812 = { Global_15800 };
	Global_15767 = Global_15766;
	Global_15836 = { Global_15818 };
	Global_15842 = { Global_15824 };
	Global_15848 = { Global_15830 };
	Global_15854 = { Global_15860 };
	Global_1598 = Global_1599;
	Global_1600 = Global_1601;
	Global_15723 = Global_15724;
	Global_15725 = Global_15726;
	Global_15727 = { Global_15743 };
	Global_15716 = Global_15717;
	Global_16728 = 0;
	Global_15761 = 0;
	Global_15762 = 0;
	unk_0x99BCB15F954AF579(&Global_2284, 16);
}

int func_671()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_672()
{
	int iVar0;
	int iVar1;
	
	if (Global_69521)
	{
		iVar0 = 0;
		unk_0x47BF380FF078FA9F(unk_0x06736567F820A39E(), &iVar1, 1);
		if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xEA0AA34E1398E91E() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7868479D9B6694C0(unk_0xE0BDAFA1A39552D6()))
	{
		if (unk_0x8FE2FBDA23507F78(unk_0x06736567F820A39E(), 78, 1))
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

void func_673()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15001[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15001[iVar0 /*10*/].f_1), "", 24);
		Global_15001[iVar0 /*10*/].f_7 = 0;
		Global_15001[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15001.f_161 = -99;
	Global_15001.f_162 = { 0f, 0f, 0f };
}

void func_674()
{
	unk_0x0F9FE213495D2609();
	Global_16723 = 0;
	if ((unk_0x1FB728BC68674B71() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xC48487554D051523(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x97D4BC3047CEF5DE())
	{
		unk_0xC48487554D051523(1);
		Global_15712 = 6;
		return;
	}
}

void func_675(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_676(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_675(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15760 = 1;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 0;
	Global_15766 = 0;
	Global_2621441 = 0;
	return func_668(sParam3, iParam4, bParam7);
}

int func_677(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
	}
	if (unk_0x96E2A6D13B9C3420(unk_0x06736567F820A39E()))
	{
		return 0;
	}
	if (func_679(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_678();
		func_664();
		func_642();
		func_663();
		func_662();
		return 1;
	}
	return 0;
}

void func_678()
{
	Global_16730 = 0;
}

bool func_679(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_675(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15760 = 0;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 1;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_15717 = 0;
	Global_15764 = 1;
	Global_15766 = 0;
	StringCopy(&Global_15860, sParam5, 24);
	Global_2621441 = 0;
	return func_668(sParam3, iParam4, bParam8);
}

int func_680(var uParam0, char* sParam1, char* sParam2)
{
	if (func_682(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_681();
		func_642();
		func_663();
		return 1;
	}
	return 0;
}

void func_681()
{
	Global_1332285.f_40.f_9 = 2;
}

bool func_682(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_675(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_668(sParam2, iParam3, 0);
}

void func_683()
{
	Global_1332285.f_55 = Global_1332285.f_40.f_1;
	Global_1332285.f_55.f_1 = Global_1332285.f_40.f_10;
}

void func_684()
{
	Global_1332285.f_40 = 1;
}

bool func_685()
{
	return Global_1332285.f_40 == 1;
}

int func_686(int iParam0, int iParam1, int iParam2)
{
	if (!func_687(iParam0))
	{
		return 0;
	}
	if (Global_1332285.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1332285.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_687(int iParam0)
{
	if (!func_688())
	{
		return 0;
	}
	if (!Global_1332285.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_688()
{
	if (Global_1332285.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_689(int iParam0)
{
	if (func_693())
	{
		return 0;
	}
	if (func_692())
	{
		return 0;
	}
	if (func_691(0))
	{
		return 0;
	}
	if (Global_1312466.f_18 != 0)
	{
		return 0;
	}
	if (Global_1722816 || func_439())
	{
		return 0;
	}
	if (!unk_0x7DA173D4FD42F36B(uParam0, 6))
	{
		if (func_690())
		{
			return 0;
		}
	}
	return 1;
}

bool func_690()
{
	return unk_0xE96D4FF9851C6F0F(unk_0x201D90648B2AE3CE(), Global_1347434);
}

int func_691(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x7DA173D4FD42F36B(Global_2283, 14))
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
	if (unk_0x98934607F8D0FB03(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_692()
{
	return Global_1332285.f_40 == 3;
}

bool func_693()
{
	return func_671();
}

int func_694(int iParam0, int iParam1, int iParam2)
{
	if (!func_692())
	{
		return 0;
	}
	return func_686(iParam0, iParam1, iParam2);
}

int func_695(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x9F7CDE7B20BCB675(&cVar0);
}

bool func_696()
{
	return Global_2469986.f_1;
}

int func_697()
{
	if (Global_1332473.f_2)
	{
		return 1;
	}
	return func_698();
}

bool func_698()
{
	return func_693();
}

int func_699(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x6146EFE5BC2DD8DC())
	{
		return 0;
	}
	if (func_704())
	{
		return 0;
	}
	if (!unk_0xDF916BCF4D39E8C2())
	{
		return 0;
	}
	if (func_323())
	{
		return 0;
	}
	if (func_447())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_90(unk_0xE0BDAFA1A39552D6(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_703(unk_0xE0BDAFA1A39552D6()))
		{
			return 0;
		}
	}
	if (func_702())
	{
		return 0;
	}
	if (unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		return 0;
	}
	if (unk_0x3DC360442A11BB38())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x6F54F6E4D3F3FD07(unk_0xE0BDAFA1A39552D6()))
		{
			return 0;
		}
	}
	if (Global_1573684)
	{
		return 0;
	}
	if (func_701())
	{
		return 0;
	}
	if (func_700())
	{
		return 0;
	}
	if (func_316())
	{
		return 0;
	}
	if (Global_68089)
	{
		return 0;
	}
	if (Global_2472483)
	{
		return 0;
	}
	return 1;
}

bool func_700()
{
	return Global_2434839.f_568;
}

bool func_701()
{
	return Global_2434839.f_720;
}

bool func_702()
{
	return Global_2428549.f_2482.f_585;
}

int func_703(int iParam0)
{
	if (Global_2418529[iParam0 /*313*/].f_206 == 0)
	{
		return 0;
	}
	return 1;
}

int func_704()
{
	if (Global_15712 != 0 || unk_0x97D4BC3047CEF5DE())
	{
		return 1;
	}
	return 0;
}

void func_705(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69521)
	{
		if (!unk_0xCFC04A38F256EE06(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xCCE0A12014F4F2E9(iParam2, 0);
			}
			else
			{
				unk_0xCCE0A12014F4F2E9(iParam2, 1);
			}
		}
		if (!unk_0xCFC04A38F256EE06(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x5E0FA44E176DE736(iParam2, 0);
			}
			else
			{
				unk_0x5E0FA44E176DE736(iParam2, 1);
			}
		}
	}
}

char* func_706()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = !func_625(1);
	iVar1 = unk_0xA6055C735E3DD877(0, 3);
	if (!func_344())
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

void func_707()
{
	if (func_481() != func_55())
	{
		Global_1734817 = func_710(func_481());
		Global_1734817.f_1 = func_709(func_481());
	}
	Global_1734817.f_5 = unk_0x40077EDF3FF70C39();
	Global_1734817.f_13 = func_708();
	Global_1734817.f_15 = 0;
	if (func_479(1))
	{
		if (func_539() == func_481())
		{
			Global_1734817.f_15 = 1;
		}
	}
}

int func_708()
{
	int iVar0;
	
	iVar0 = func_481();
	if (iVar0 != func_55())
	{
		return Global_1610705[iVar0 /*178*/].f_10.f_71;
	}
	return 0;
}

var func_709(int iParam0)
{
	return Global_1610705[iParam0 /*178*/].f_10.f_7[1];
}

var func_710(int iParam0)
{
	return Global_1610705[iParam0 /*178*/].f_10.f_7[0];
}

void func_711()
{
	if (!func_162())
	{
		return;
	}
	if (!unk_0x9F7CDE7B20BCB675(unk_0x47B34031F915C179()) == Global_1312577.f_7)
	{
		return;
	}
	func_596();
}

void func_712()
{
	if (func_34(unk_0xE0BDAFA1A39552D6(), 0))
	{
		return;
	}
	switch (Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_9)
	{
		case 0:
			func_739();
			func_355();
			if (Local_96.f_214 == 2)
			{
				Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_9 = 2;
			}
			else if (Local_96.f_214 == 3)
			{
				Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_9 = 3;
			}
			break;
		
		case 2:
			func_713();
			func_355();
			if (Local_96.f_214 == 3)
			{
				Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_9 = 3;
			}
			break;
		
		case 3:
			func_810();
			break;
	}
}

void func_713()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	iVar0 = unk_0x490BA5FDD7EE47A9();
	iVar1 = Local_96.f_197 + 1;
	if (func_34(unk_0xE0BDAFA1A39552D6(), 0))
	{
		iVar0 = func_343();
	}
	if (!func_344())
	{
		if (!unk_0x7DA173D4FD42F36B(Local_366[iVar0 /*11*/].f_1, 14))
		{
			unk_0xE27C8E42A97895CF(&(Local_366[iVar0 /*11*/].f_1), 14);
		}
		return;
	}
	if (!func_737())
	{
		if (!unk_0x7DA173D4FD42F36B(Local_366[iVar0 /*11*/].f_1, 14))
		{
			unk_0xE27C8E42A97895CF(&(Local_366[iVar0 /*11*/].f_1), 14);
		}
		return;
	}
	if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_96.f_2[0 /*10*/].f_2))
		{
			if (unk_0x93E49C491856D7AD(unk_0x06736567F820A39E(), unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2), 0))
			{
				return;
			}
		}
	}
	if (!unk_0x7DA173D4FD42F36B(Local_366[iVar0 /*11*/].f_1, 14))
	{
		if (!func_723(iVar1, unk_0x490BA5FDD7EE47A9()))
		{
			if (!unk_0x7DA173D4FD42F36B(iLocal_719, 13))
			{
				if (func_722(unk_0xE0BDAFA1A39552D6(), iVar1))
				{
					unk_0xE27C8E42A97895CF(&iLocal_719, 13);
				}
			}
			else
			{
				bVar4 = true;
				iVar2 = 0;
				while (iVar2 < unk_0xC4A9F8E5EC59EB4F())
				{
					if (unk_0x6B90EB073E0E641F(unk_0x3FA2D2B4F501B725(iVar2)))
					{
						iVar3 = unk_0x1886D89D5D557CB4(unk_0x3FA2D2B4F501B725(iVar2));
						if (func_722(iVar3, iVar1))
						{
							if (!func_718(iVar3, iVar1))
							{
								bVar4 = false;
							}
						}
					}
					iVar2++;
				}
				if (bVar4)
				{
					func_714();
				}
			}
		}
		else
		{
			unk_0xE27C8E42A97895CF(&(Local_366[iVar0 /*11*/].f_1), 14);
		}
	}
}

void func_714()
{
	func_715();
}

void func_715()
{
	int iVar0;
	
	if (func_717(unk_0xE0BDAFA1A39552D6()))
	{
		iVar0 = func_716(unk_0xE0BDAFA1A39552D6());
		unk_0xE27C8E42A97895CF(&(Global_1735933.f_110), iVar0);
	}
}

int func_716(int iParam0)
{
	if (iParam0 != func_55())
	{
		return Global_2418529[iParam0 /*313*/].f_305.f_4;
	}
	return -1;
}

int func_717(int iParam0)
{
	bool bVar0;
	
	if (iParam0 != func_55() && func_848(iParam0, 1, 1))
	{
		bVar0 = unk_0x7DA173D4FD42F36B(Global_2418529[iParam0 /*313*/].f_305, 1);
		return bVar0;
	}
	return 0;
}

int func_718(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_720(iParam1);
	if (iParam0 != func_55() && func_848(iParam0, 1, 1))
	{
		if (func_717(iParam0))
		{
			if (func_716(iParam0) == iVar0)
			{
				if (func_719(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_719(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_2418529[iParam0 /*313*/].f_305, 2);
}

int func_720(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (func_721(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_721(int iParam0)
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

int func_722(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_720(iParam1);
	if (iParam0 != func_55() && func_848(iParam0, 1, 1))
	{
		if (func_717(iParam0))
		{
			if (func_716(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_723(int iParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	
	iVar0 = func_720(iParam0);
	if (unk_0x7DA173D4FD42F36B(Global_1735933.f_111, iVar0))
	{
		return 1;
	}
	else if (!func_736(iVar0))
	{
		if (func_735(iParam0, iParam1, &Var1, &uVar4))
		{
			func_724(iVar0, 1, 1, Var1, uVar4, 0);
		}
		else
		{
			func_724(iVar0, 1, 0, Var1, 0, 0);
		}
	}
	return 0;
}

int func_724(int iParam0, bool bParam1, bool bParam2, struct<3> Param3, int iParam6, bool bParam7)
{
	if (!func_734(iParam0))
	{
		return 0;
	}
	if (!bParam7)
	{
		if (!(func_733(iParam0) || func_727(iParam0, 0)))
		{
			func_726(iParam0);
			return 0;
		}
	}
	else if (!func_733(iParam0))
	{
		unk_0xE27C8E42A97895CF(&(Global_1735933.f_15), iParam0);
	}
	if (unk_0x7DA173D4FD42F36B(Global_1735933.f_13, iParam0))
	{
		return 0;
	}
	unk_0xE27C8E42A97895CF(&(Global_1735933.f_13), iParam0);
	unk_0x99BCB15F954AF579(&(Global_1735933.f_111), iParam0);
	func_725(iParam0);
	if (bParam2)
	{
		unk_0xE27C8E42A97895CF(&(Global_1735933.f_14), iParam0);
		Global_1735933.f_16[iParam0 /*3*/] = { Param3 };
		Global_1735933.f_86[iParam0] = iParam6;
	}
	else
	{
		unk_0x99BCB15F954AF579(&(Global_1735933.f_14), iParam0);
		Global_1735933.f_16[iParam0 /*3*/] = { 0f, 0f, 0f };
		Global_1735933.f_86[iParam0] = 0f;
	}
	if (bParam1)
	{
		unk_0x99BCB15F954AF579(&(Global_1735933.f_110), iParam0);
	}
	else
	{
		unk_0xE27C8E42A97895CF(&(Global_1735933.f_110), iParam0);
	}
	return 1;
}

void func_725(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0xEB18AC70F95C0F8C(unk_0x06736567F820A39E());
	if (iVar0 != 0)
	{
		if (!unk_0xBDA1F5E8A36BFA07(iVar0, 0) && !unk_0xBDA1F5E8A36BFA07(unk_0x06736567F820A39E(), 0))
		{
			if (unk_0x4321FC7479614822(iVar0, -1) == unk_0x06736567F820A39E())
			{
				Global_1735933.f_116 = iParam0;
				Global_1735933.f_117 = iVar0;
				func_471(&(Global_1735933.f_118), 0, 0);
				Global_1735933.f_120 = 0;
			}
		}
	}
}

void func_726(int iParam0)
{
	if (!func_734(iParam0))
	{
		return;
	}
	unk_0x99BCB15F954AF579(&(Global_1735933.f_13), iParam0);
	unk_0x99BCB15F954AF579(&(Global_1735933.f_14), iParam0);
	unk_0x99BCB15F954AF579(&(Global_1735933.f_15), iParam0);
	unk_0x99BCB15F954AF579(&(Global_1735933.f_110), iParam0);
	unk_0x99BCB15F954AF579(&(Global_1735933.f_111), iParam0);
	Global_1735933.f_16[iParam0 /*3*/] = { 0f, 0f, 0f };
	Global_1735933.f_86[iParam0] = 0f;
	if (Global_2418529[unk_0xE0BDAFA1A39552D6() /*313*/].f_305.f_4 == iParam0)
	{
		Global_2418529[unk_0xE0BDAFA1A39552D6() /*313*/].f_305.f_4 = -1;
		unk_0x99BCB15F954AF579(&(Global_2418529[unk_0xE0BDAFA1A39552D6() /*313*/].f_305), 2);
		unk_0x99BCB15F954AF579(&(Global_2418529[unk_0xE0BDAFA1A39552D6() /*313*/].f_305), 1);
	}
}

int func_727(int iParam0, int iParam1)
{
	if (func_848(unk_0xE0BDAFA1A39552D6(), 1, 1) && !func_732())
	{
		if (func_729(iParam0))
		{
			return 1;
		}
		else if (iParam1 && func_728(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_728(int iParam0)
{
	if (func_736(iParam0))
	{
		return unk_0x7DA173D4FD42F36B(Global_1735933.f_15, iParam0);
	}
	return 0;
}

bool func_729(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 150;
	func_730(iParam0, &Var1);
	return unk_0xA1F52EC3ECE1D42E(func_51(unk_0xE0BDAFA1A39552D6()), Var1, 1) <= IntToFloat(iVar0);
}

void func_730(int iParam0, var uParam1)
{
	switch (func_443(iParam0))
	{
		case 0:
			func_731(iParam0, uParam1);
			break;
	}
}

void func_731(int iParam0, var uParam1)
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

bool func_732()
{
	int iVar0;
	
	iVar0 = unk_0x98934607F8D0FB03(joaat("am_mp_smpl_interior_int"));
	return (iVar0 > 0 || unk_0x5B003181D760D4E1("AM_MP_SMPL_INTERIOR_INT", Global_1735933.f_129, 1, 0));
}

int func_733(int iParam0)
{
	if (unk_0xB3D80F0AC1AB6177(unk_0xE0BDAFA1A39552D6(), "AM_MP_SMPL_INTERIOR_EXT", iParam0) || unk_0x5B003181D760D4E1("AM_MP_SMPL_INTERIOR_EXT", iParam0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_734(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 23)
	{
		return 1;
	}
	return 0;
}

int func_735(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (func_429(iParam0))
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

bool func_736(int iParam0)
{
	return unk_0x7DA173D4FD42F36B(Global_1735933.f_13, iParam0);
}

int func_737()
{
	if (unk_0x7DA173D4FD42F36B(iLocal_719, 13))
	{
		return 1;
	}
	if (unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		return 0;
	}
	if (unk_0xA1F52EC3ECE1D42E(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), func_738(Local_96.f_197 + 1), 1) > 100f)
	{
		return 0;
	}
	return 1;
}

Vector3 func_738(int iParam0)
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

void func_739()
{
	func_765();
	func_605();
	func_764();
	func_762();
	func_590();
	func_759();
	func_744();
	func_741();
	func_581();
	func_740();
}

void func_740()
{
}

void func_741()
{
	struct<3> Var0;
	float fVar3;
	
	if (func_344())
	{
		return;
	}
	if (func_28())
	{
		return;
	}
	Var0 = { func_738(Local_96.f_197 + 1) };
	fVar3 = unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), Var0);
	if (fVar3 < 62500f)
	{
		if (!unk_0x7DA173D4FD42F36B(iLocal_719, 14))
		{
			func_173(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
			func_742();
			unk_0xE27C8E42A97895CF(&iLocal_719, 14);
		}
	}
	else if (fVar3 > 250000f)
	{
		func_378();
	}
}

void func_742()
{
	int iVar0;
	
	if (func_344())
	{
		return;
	}
	iVar0 = Local_96.f_197 + 1;
	switch (iVar0)
	{
		case 1:
			func_743(93.9801f, -2532.177f, 5.0778f, 124.1404f, 1065353216);
			func_743(96.7817f, -2536.936f, 5f, 121.982f, 1065353216);
			func_743(106.1278f, -2539.717f, 5.0003f, 111.4201f, 1065353216);
			func_743(7.7245f, -2598.042f, 5.0075f, 283.2584f, 1065353216);
			func_743(13.7512f, -2602.234f, 5.0069f, 290.8908f, 1065353216);
			func_743(113.3588f, -2586.112f, 5.0121f, 88.5573f, 1065353216);
			func_743(111.6119f, -2592.456f, 5.0229f, 78.4188f, 1065353216);
			func_743(8.5363f, -2518.204f, 5.0163f, 213.3867f, 1065353216);
			break;
		
		case 2:
			func_743(-1150.759f, -1273.248f, 5.7478f, 282.4241f, 1065353216);
			func_743(-1019.696f, -1323.524f, 4.9009f, 45.7692f, 1065353216);
			func_743(-1012.756f, -1319.543f, 4.9001f, 43.138f, 1065353216);
			func_743(-1005.033f, -1315.236f, 4.941f, 58.4519f, 1065353216);
			func_743(-1014.173f, -1307.516f, 5.2364f, 52.7034f, 1065353216);
			func_743(-1022.801f, -1245.642f, 5.014f, 106.8874f, 1065353216);
			func_743(-1112.947f, -1296.568f, 4.258f, 298.12f, 1065353216);
			func_743(-1118.264f, -1218.13f, 1.5169f, 188.9163f, 1065353216);
			break;
		
		case 3:
			func_743(856.3708f, -1013.008f, 28.4203f, 271.5768f, 1065353216);
			func_743(863.5153f, -993.5998f, 29.2774f, 239.646f, 1065353216);
			func_743(933.4873f, -990.8866f, 37.0241f, 127.1206f, 1065353216);
			func_743(932.2711f, -1007.077f, 36.7075f, 90.5105f, 1065353216);
			func_743(867.5297f, -1076.188f, 27.7798f, 268.1065f, 1065353216);
			func_743(868.5233f, -1092.591f, 27.7269f, 302.3375f, 1065353216);
			func_743(927.5185f, -1092.741f, 33.1574f, 50.444f, 1065353216);
			func_743(936.7908f, -1078.382f, 34.7149f, 77.3112f, 1065353216);
			break;
		
		case 4:
			func_743(243.2832f, -1999.028f, 18.8177f, 341.0091f, 1065353216);
			func_743(273.1573f, -2010.138f, 18.6668f, 29.2809f, 1065353216);
			func_743(171.7093f, -1951.986f, 18.7677f, 286.1576f, 1065353216);
			func_743(186.7918f, -1911.818f, 21.7781f, 235.4626f, 1065353216);
			func_743(201.1726f, -1898.231f, 23.2412f, 220.1641f, 1065353216);
			func_743(223.3617f, -1889.273f, 24.4098f, 178.0541f, 1065353216);
			func_743(260.1144f, -1909.984f, 24.8323f, 142.8378f, 1065353216);
			func_743(289.037f, -1933.327f, 24.3999f, 148.1186f, 1065353216);
			break;
		
		case 5:
			func_743(-444.3442f, 229.0294f, 82.0416f, 232.9779f, 1065353216);
			func_743(-446.8376f, 224.1595f, 82.0175f, 236.8468f, 1065353216);
			func_743(-398.6772f, 227.0964f, 82.593f, 160.9651f, 1065353216);
			func_743(-412.1818f, 224.1092f, 82.5148f, 207.9725f, 1065353216);
			func_743(-368.4009f, 193.0408f, 82.6566f, 97.3058f, 1065353216);
			func_743(-471.0459f, 153.4937f, 77.0803f, 301.4885f, 1065353216);
			func_743(-492.4609f, 191.0608f, 69.9316f, 260.3055f, 1065353216);
			func_743(-492.152f, 185.6411f, 69.9316f, 267.4302f, 1065353216);
			break;
		
		case 6:
			func_743(-1119.86f, -2022.411f, 12.2297f, 292.6461f, 1065353216);
			func_743(-1102.049f, -1983.884f, 12.1406f, 223.9062f, 1065353216);
			func_743(-1084.243f, -1968.423f, 12.1514f, 204.0761f, 1065353216);
			func_743(-1033.419f, -2068.45f, 12.4615f, 33.9101f, 1065353216);
			func_743(-1037.025f, -2088.586f, 12.6459f, 21.4939f, 1065353216);
			func_743(-1056.915f, -2088.188f, 12.2919f, 8.2791f, 1065353216);
			func_743(-1020.213f, -2077.749f, 12.7601f, 40.6275f, 1065353216);
			func_743(-1032.6f, -2101.71f, 12.6309f, 20.9321f, 1065353216);
			break;
		
		case 7:
			func_743(-1323.561f, -801.4799f, 16.5991f, 309.0983f, 1065353216);
			func_743(-1334.537f, -788.2323f, 18.9061f, 263.1596f, 1065353216);
			func_743(-1333.08f, -758.4105f, 19.367f, 226.0109f, 1065353216);
			func_743(-1326.314f, -754.1177f, 19.367f, 215.8053f, 1065353216);
			func_743(-1252.46f, -880.908f, 11.1188f, 6.1107f, 1065353216);
			func_743(-1234.162f, -868.6242f, 11.821f, 83.8965f, 1065353216);
			func_743(-1234.714f, -903.713f, 11.0757f, 22.5172f, 1065353216);
			func_743(-1274.141f, -860.0457f, 11.2177f, 313.1372f, 1065353216);
			break;
		
		case 8:
			func_743(-954.9498f, -2765.854f, 12.9446f, 300.864f, 1065353216);
			func_743(-967.7481f, -2758.093f, 12.8166f, 282.6459f, 1065353216);
			func_743(-974.1952f, -2721.633f, 12.7566f, 258.5829f, 1065353216);
			func_743(-956.0557f, -2704.292f, 12.831f, 242.288f, 1065353216);
			func_743(-900.7191f, -2652.238f, 12.7618f, 177.695f, 1065353216);
			func_743(-870.0709f, -2643.078f, 12.9495f, 171.6949f, 1065353216);
			func_743(-837.4813f, -2697.67f, 12.8121f, 98.2582f, 1065353216);
			func_743(-830.3173f, -2716.68f, 12.9445f, 57.01767f, 1065353216);
			break;
		
		case 9:
			func_743(246.686f, -2954.608f, 4.8465f, 201.0552f, 1065353216);
			func_743(237.4989f, -2960.046f, 4.8401f, 219.4444f, 1065353216);
			func_743(278.0732f, -2933.848f, 4.6858f, 173.7103f, 1065353216);
			func_743(305.2663f, -2953.124f, 4.9916f, 152.1779f, 1065353216);
			func_743(306.9686f, -3051.72f, 4.8569f, 73.9139f, 1065353216);
			func_743(290.1032f, -3067.022f, 4.9168f, 22.2414f, 1065353216);
			func_743(248.4644f, -3081.733f, 4.8082f, 5.7888f, 1065353216);
			func_743(213.5583f, -3006.335f, 4.8585f, 281.9704f, 1065353216);
			break;
		
		case 10:
			func_743(1533.422f, -2207.716f, 76.5674f, 341.3423f, 1065353216);
			func_743(1518.683f, -2197.165f, 76.0905f, 323.85f, 1065353216);
			func_743(1505.83f, -2149.169f, 76.2134f, 287.7332f, 1065353216);
			func_743(1517.668f, -2071.069f, 76.2881f, 218.4776f, 1065353216);
			func_743(1513.971f, -2047.472f, 76.3438f, 229.7462f, 1065353216);
			func_743(1562.546f, -2050.737f, 76.4175f, 158.5163f, 1065353216);
			func_743(1571.823f, -2065.519f, 76.0999f, 139.3434f, 1065353216);
			func_743(1559.668f, -2212.969f, 77.2272f, 30.3786f, 1065353216);
			break;
		
		case 11:
			func_743(-244.4574f, -2679.464f, 5.0003f, 115.7166f, 1065353216);
			func_743(-247.8431f, -2669.538f, 5.0003f, 137.3239f, 1065353216);
			func_743(-273.936f, -2646.584f, 5.1595f, 138.4986f, 1065353216);
			func_743(-283.7866f, -2643.465f, 5.1536f, 145.8487f, 1065353216);
			func_743(-338.5266f, -2716.292f, 5.0016f, 353.4592f, 1065353216);
			func_743(-340.0283f, -2721.088f, 5.0015f, 349.123f, 1065353216);
			func_743(-284.5308f, -2623.301f, 5.0382f, 150.473f, 1065353216);
			func_743(-257.3565f, -2632.506f, 5.0221f, 131.679f, 1065353216);
			break;
		
		case 12:
			func_743(515.9905f, -720.5799f, 23.8387f, 5.6255f, 1065353216);
			func_743(497.1281f, -728.9662f, 23.8776f, 343.3149f, 1065353216);
			func_743(447.638f, -685.7243f, 27.4277f, 285.8884f, 1065353216);
			func_743(449.3201f, -668.7817f, 27.3296f, 271.4846f, 1065353216);
			func_743(498.4707f, -568.4258f, 23.747f, 193.0118f, 1065353216);
			func_743(514.7365f, -562.4415f, 23.7507f, 158.6247f, 1065353216);
			func_743(527.8929f, -562.6914f, 23.7997f, 164.4089f, 1065353216);
			func_743(544.1755f, -594.525f, 23.7432f, 152.6498f, 1065353216);
			break;
		
		case 13:
			func_743(-518.2458f, -1828.47f, 21.5839f, 6.9263f, 1065353216);
			func_743(-493.7525f, -1823.626f, 21.8486f, 29.4302f, 1065353216);
			func_743(-450.3873f, -1794.818f, 20.7743f, 85.0772f, 1065353216);
			func_743(-597.9962f, -1729.797f, 22.139f, 232.3263f, 1065353216);
			func_743(-581.0703f, -1718.014f, 21.9858f, 214.5117f, 1065353216);
			func_743(-449.3808f, -1766.115f, 19.5349f, 112.1522f, 1065353216);
			func_743(-541.6173f, -1821.735f, 21.9225f, 317.0811f, 1065353216);
			func_743(-618.6395f, -1711.974f, 23.0683f, 235.603f, 1065353216);
			break;
		
		case 14:
			func_743(-291.3686f, -1274.791f, 29.4583f, 184.0252f, 1065353216);
			func_743(-260.6114f, -1286.958f, 30.0291f, 148.6145f, 1065353216);
			func_743(-245.4854f, -1358.204f, 30.606f, 97.9413f, 1065353216);
			func_743(-258.2249f, -1408.08f, 30.2904f, 46.1851f, 1065353216);
			func_743(-293.8492f, -1408.819f, 30.2952f, 0.4148f, 1065353216);
			func_743(-335.4179f, -1371.286f, 30.2957f, 304.5049f, 1065353216);
			func_743(-337.6552f, -1333.524f, 30.3008f, 289.5995f, 1065353216);
			func_743(-339.4502f, -1311.185f, 30.2086f, 224.0032f, 1065353216);
			break;
		
		case 15:
			func_743(296.9105f, 339.6927f, 104.52f, 250.3169f, 1065353216);
			func_743(286.231f, 324.1514f, 104.6652f, 267.2802f, 1065353216);
			func_743(314.8456f, 295.4021f, 104.543f, 341.0804f, 1065353216);
			func_743(356.8475f, 275.1253f, 102.1478f, 349.9545f, 1065353216);
			func_743(403.6933f, 290.7596f, 101.9871f, 47.5594f, 1065353216);
			func_743(416.5997f, 309.7407f, 101.987f, 69.7807f, 1065353216);
			func_743(388.4496f, 357.7741f, 101.479f, 81.7557f, 1065353216);
			func_743(323.6804f, 367.7533f, 104.3807f, 251.082f, 1065353216);
			break;
		
		case 16:
			func_743(983.1635f, -1507.116f, 30.4318f, 115.3138f, 1065353216);
			func_743(976.6813f, -1462.792f, 30.4421f, 170.1272f, 1065353216);
			func_743(965.1019f, -1457.18f, 30.1302f, 187.7104f, 1065353216);
			func_743(954.3276f, -1500.289f, 29.9441f, 234.0993f, 1065353216);
			func_743(967.4816f, -1632.333f, 29.1107f, 353.4453f, 1065353216);
			func_743(890.0863f, -1572.723f, 29.84f, 281.6886f, 1065353216);
			func_743(905.2548f, -1543.512f, 29.5311f, 219.2688f, 1065353216);
			func_743(922.9328f, -1544.217f, 29.8062f, 181.6137f, 1065353216);
			break;
		
		case 17:
			func_743(754.465f, -835.6287f, 24.8675f, 202.5404f, 1065353216);
			func_743(760.689f, -821.2197f, 25.2721f, 185.6987f, 1065353216);
			func_743(799.4153f, -825.4905f, 25.19f, 155.4635f, 1065353216);
			func_743(833.3179f, -912.5907f, 24.5379f, 96.2594f, 1065353216);
			func_743(836.246f, -921.1563f, 25.0122f, 86.3203f, 1065353216);
			func_743(798.7469f, -975.9729f, 25.1518f, 41.5425f, 1065353216);
			func_743(753.8427f, -972.2688f, 23.9505f, 340.2511f, 1065353216);
			func_743(737.0633f, -940.94f, 23.8394f, 264.3263f, 1065353216);
			break;
		
		case 18:
			func_743(1021.727f, -2096.922f, 29.9949f, 131.5094f, 1065353216);
			func_743(1004.22f, -2097.619f, 30.1617f, 218.0245f, 1065353216);
			func_743(1048.305f, -2162.876f, 31.0285f, 17.1583f, 1065353216);
			func_743(1053.165f, -2138.979f, 31.6269f, 138.5871f, 1065353216);
			func_743(992.7523f, -2239.598f, 29.5519f, 335.4291f, 1065353216);
			func_743(975.8146f, -2201.123f, 29.5516f, 290.5504f, 1065353216);
			func_743(1035.371f, -2203.133f, 30.8934f, 77.8725f, 1065353216);
			func_743(1040.114f, -2203.875f, 30.8934f, 62.6027f, 1065353216);
			break;
		
		case 19:
			func_743(957.4448f, -2452.676f, 27.553f, 231.7168f, 1065353216);
			func_743(957.0999f, -2474.014f, 27.4957f, 267.1929f, 1065353216);
			func_743(945.7234f, -2497.031f, 27.453f, 256.6793f, 1065353216);
			func_743(946.9409f, -2478.706f, 27.3433f, 233.4717f, 1065353216);
			func_743(932.4327f, -2534.006f, 27.3027f, 231.8695f, 1065353216);
			func_743(900.2678f, -2552.213f, 27.4211f, 283.9405f, 1065353216);
			func_743(1028.407f, -2477.004f, 27.5034f, 91.0284f, 1065353216);
			func_743(1021.066f, -2459.521f, 27.5462f, 131.3309f, 1065353216);
			break;
		
		case 20:
			func_743(-237.7643f, 248.6469f, 91.0445f, 196.7769f, 1065353216);
			func_743(-202.8588f, 245.9139f, 91.0419f, 127.8667f, 1065353216);
			func_743(-199.1134f, 179.474f, 76.6409f, 79.199f, 1065353216);
			func_743(-217.1594f, 141.0364f, 68.6993f, 21.5726f, 1065353216);
			func_743(-240.5069f, 139.3272f, 68.6369f, 352.6409f, 1065353216);
			func_743(-280.1349f, 153.3907f, 74.2578f, 344.9672f, 1065353216);
			func_743(-177.5456f, 215.1789f, 87.8734f, 101.2481f, 1065353216);
			func_743(-174.6252f, 206.0641f, 87.426f, 84.7397f, 1065353216);
			break;
		
		case 21:
			func_743(578.9037f, -1883.818f, 24.4357f, 190.9878f, 1065353216);
			func_743(601.1657f, -1872.286f, 23.7783f, 136.6622f, 1065353216);
			func_743(573.7683f, -1869.375f, 24.1791f, 138.5911f, 1065353216);
			func_743(531.532f, -1858.341f, 24.332f, 211.7805f, 1065353216);
			func_743(542.208f, -1844.02f, 24.332f, 187.9743f, 1065353216);
			func_743(502.1498f, -1917.516f, 24.3684f, 289.8235f, 1065353216);
			func_743(512.4601f, -1985.896f, 23.9851f, 299.9174f, 1065353216);
			func_743(479.1975f, -1908.422f, 24.2436f, 282.8994f, 1065353216);
			break;
		
		case 22:
			func_743(172.8245f, -2183.052f, 5.0294f, 116.2516f, 1065353216);
			func_743(173.7597f, -2198.917f, 5.171f, 72.2949f, 1065353216);
			func_743(173.7982f, -2224.849f, 5.171f, 126.6793f, 1065353216);
			func_743(181.6316f, -2238.538f, 5.0035f, 61.6889f, 1065353216);
			func_743(147.6168f, -2252.883f, 5.0856f, 63.8371f, 1065353216);
			func_743(147.2348f, -2244.339f, 5.0856f, 70.1362f, 1065353216);
			func_743(178.0549f, -2206.273f, 5.0238f, 38.9746f, 1065353216);
			func_743(176.9219f, -2223.301f, 5.0329f, 133.7211f, 1065353216);
			break;
	}
}

void func_743(struct<3> Param0, float fParam3, int iParam4)
{
	if (!Global_2404993.f_639)
	{
	}
	if (Global_2404993.f_640 < 100)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2404993.f_641[Global_2404993.f_640 /*5*/] = { Param0 };
		Global_2404993.f_641[Global_2404993.f_640 /*5*/].f_3 = fParam3;
		Global_2404993.f_641[Global_2404993.f_640 /*5*/].f_4 = iParam4;
		Global_2404993.f_640++;
	}
}

void func_744()
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	
	if (!func_344())
	{
		return;
	}
	if (!unk_0x7DA173D4FD42F36B(iLocal_719, 19))
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_96.f_2[0 /*10*/].f_2))
			{
				unk_0xA32B7A439DBBC873(unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2), 0, 0);
				unk_0xE27C8E42A97895CF(&iLocal_719, 19);
			}
		}
	}
	if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 8))
	{
		if (!unk_0x7DA173D4FD42F36B(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1, 9))
		{
			if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[0 /*10*/].f_2))
			{
				if (!func_13(Local_96.f_2[0 /*10*/].f_2))
				{
					unk_0xE27C8E42A97895CF(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1), 9);
				}
			}
		}
	}
	if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 6))
	{
		if (!unk_0x7DA173D4FD42F36B(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1, 7))
		{
			if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[0 /*10*/].f_2))
			{
				Var1 = { unk_0xF4745590D18D14B8(unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2), 0) };
				if (unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), Var1) < 90000f)
				{
					unk_0xE27C8E42A97895CF(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1), 7);
				}
			}
		}
	}
	if (iLocal_722 == -2)
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_96.f_2[0 /*10*/].f_2))
			{
				if (!unk_0x7DA173D4FD42F36B(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1, 8))
				{
					if (func_758(unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2)))
					{
						unk_0xE27C8E42A97895CF(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1), 8);
					}
				}
				else if (!func_758(unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2)))
				{
					unk_0x99BCB15F954AF579(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1), 8);
				}
			}
		}
	}
	if (!unk_0x7DA173D4FD42F36B(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1, 2) && !unk_0x7DA173D4FD42F36B(Local_96.f_1, 4))
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[0 /*10*/].f_2))
		{
			iVar0 = unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2);
			if (unk_0x1B6292EA51632C25(iVar0, 0))
			{
				if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
				{
					if (unk_0x7A6749CADAC50206(unk_0x06736567F820A39E()))
					{
						if (unk_0x34E1EF1E8BCD1BFC(unk_0x06736567F820A39E(), 0) == iVar0)
						{
							if (unk_0x4321FC7479614822(iVar0, -1) == unk_0x06736567F820A39E())
							{
								if (!unk_0x7DA173D4FD42F36B(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1, 3))
								{
									unk_0xE27C8E42A97895CF(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1), 3);
								}
							}
							else if (unk_0x7DA173D4FD42F36B(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1, 3))
							{
								unk_0x99BCB15F954AF579(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1), 3);
							}
						}
						else if (unk_0x7DA173D4FD42F36B(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1, 3))
						{
							unk_0x99BCB15F954AF579(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1), 3);
						}
					}
					else if (unk_0x7DA173D4FD42F36B(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1, 3))
					{
						unk_0x99BCB15F954AF579(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1), 3);
					}
				}
				else if (unk_0x7DA173D4FD42F36B(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1, 3))
				{
					unk_0x99BCB15F954AF579(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1), 3);
				}
			}
		}
	}
	iVar4 = func_55();
	iVar5 = func_55();
	if (iLocal_722 != Local_96.f_215)
	{
		if (!func_28())
		{
			if (!func_603())
			{
				if (unk_0xCDB4C4200A9B478A(uLocal_832))
				{
					unk_0x2239ED27B231AE2E(&uLocal_832);
				}
				if (Local_96.f_215 == unk_0x490BA5FDD7EE47A9())
				{
					func_757(1);
				}
				else if (Local_96.f_215 > -1)
				{
					iVar4 = func_756();
					if (iVar4 != func_55())
					{
						if (func_479(1))
						{
							iVar5 = func_481();
							if (iVar5 != func_55())
							{
								if (func_272(iVar4, iVar5, 1))
								{
									func_373(iVar4, 478, 1);
									func_371(iVar4, func_376(iLocal_833), 1);
									func_757(1);
								}
							}
						}
						func_754("DCONTRA_TCKV", iVar4, 0, 0, 0, 1, 1, 0);
					}
				}
				else if (Local_96.f_215 == -1)
				{
					if (unk_0xCDB4C4200A9B478A(uLocal_830))
					{
						unk_0x2239ED27B231AE2E(&uLocal_830);
					}
					iVar4 = func_753();
					if (iVar4 != func_55())
					{
						func_373(iVar4, 478, 0);
						func_371(iVar4, func_376(iLocal_833), 0);
					}
					func_752(3, 1);
				}
				iLocal_722 = Local_96.f_215;
			}
			else
			{
				func_752(1, 0);
			}
		}
	}
	func_751();
	func_749(0);
	func_745();
}

void func_745()
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	iVar0 = func_756();
	Var1 = { func_40() };
	if (unk_0xCDB4C4200A9B478A(uLocal_830))
	{
		unk_0xD06A5371300291A8(12, &uVar4, &uVar5, &uVar6, &uVar7);
		unk_0x1F60DF09D920D0B6(1, Var1, 0f, 0f, 0f, 0f, 0f, 0f, 0.6f, 0.6f, 1f, uVar4, uVar5, uVar6, 100, 0, 0, 2, 0, 0, 0, 0);
	}
	if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[0 /*10*/].f_2))
	{
		if (unk_0x40B3668D7226E0DF(Local_96.f_2[0 /*10*/].f_2))
		{
			if (!unk_0x7DA173D4FD42F36B(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1, 2))
			{
				if (iVar0 == unk_0xE0BDAFA1A39552D6())
				{
					if (!unk_0xCFC04A38F256EE06(unk_0x44A9253132E1DDE0(iVar0)))
					{
						if (unk_0x8853522CEFF93BE9(unk_0x44A9253132E1DDE0(iVar0), Var1, 6f, 6f, 2f, 0, 1, 0))
						{
							func_746(unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2), 0);
							if (unk_0xA2C0F3D7469C0A0B(unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2)))
							{
								unk_0x9CA85DDE7A48C0E4(unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2), 1);
							}
							unk_0xE27C8E42A97895CF(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1), 2);
						}
					}
				}
			}
		}
	}
}

int func_746(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_748(iParam0, 1, 1, 0, 0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x801C03D92F1C6755(iVar0);
			if (func_848(iVar1, 0, 1))
			{
				if (unk_0x93E49C491856D7AD(unk_0x44A9253132E1DDE0(iVar1), iParam0, 0))
				{
					func_747(func_527(iVar1), 0, 0f, 0, 0, 0);
				}
			}
			iVar0++;
		}
	}
	else if (!unk_0xA2C0F3D7469C0A0B(iParam0))
	{
		unk_0xCA148D132C220989(iParam0);
	}
	else
	{
		unk_0x9CA85DDE7A48C0E4(iParam0, 1);
		unk_0x93F4FB97D1F2E7A1(iParam0, 0);
		if (bParam1)
		{
			unk_0xB2C123C54D84E6A7(iParam0, 1);
		}
		return 1;
	}
	return 0;
}

void func_747(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	struct<7> Var0;
	
	Var0.f_0 = 58;
	Var0.f_1 = unk_0xE0BDAFA1A39552D6();
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	if (!iParam0 == 0)
	{
		unk_0xCCAB9843EFA5C08A(1, &Var0, 7, iParam0);
	}
}

int func_748(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0xD6B335B6F8116876(iParam0) + 1;
	if (iParam4 || !unk_0xBDA1F5E8A36BFA07(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x5B4FEA5F286F0C8F(iParam0, (iVar0 - 1)))
			{
				iVar2 = unk_0x4321FC7479614822(iParam0, (iVar0 - 1));
				if (iParam3 && iVar2 == unk_0x06736567F820A39E())
				{
				}
				else if (bParam2)
				{
					if (!unk_0xCFC04A38F256EE06(iVar2))
					{
						if (unk_0x4E75E5867592AC01(iVar2))
						{
							if (unk_0xB0565BA1AD71378E(unk_0x90CB634380C802C7(iVar2)) == 0)
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
				else
				{
					iVar3 = unk_0x4321FC7479614822(iParam0, (iVar0 - 1));
					if (!unk_0xCFC04A38F256EE06(iVar3))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

void func_749(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_2())
	{
		return;
	}
	if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*10*/].f_2))
	{
		if (func_13(Local_96.f_2[iParam0 /*10*/].f_2))
		{
			if (unk_0xCDB4C4200A9B478A(uLocal_832))
			{
				if (Local_96.f_216 > -1)
				{
					unk_0xD06A5371300291A8(9, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				else if (iLocal_722 == -2)
				{
					unk_0xD06A5371300291A8(6, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				else
				{
					unk_0xD06A5371300291A8(9, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				func_750(unk_0xA9B72300DA155F92(Local_96.f_2[iParam0 /*10*/].f_2), uVar0, uVar1, uVar2);
			}
		}
	}
}

void func_750(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	fVar6 = 0.5f;
	unk_0x9CFA23DC65790425(unk_0x79469DA5833EACA8(uParam0), &Var0, &Var3);
	fVar7 = ((Var3.f_2 - Var0.f_2) / 2f);
	fVar8 = (Var3.f_2 - fVar7);
	if (fVar6 <= (fVar8 + 0.1f))
	{
		fVar6 = (fVar8 + 0.4f);
	}
	unk_0x1F60DF09D920D0B6(2, unk_0xF4745590D18D14B8(iParam0, 1) + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uParam1, uParam2, uParam3, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_751()
{
	if (iLocal_722 == -2)
	{
		if (unk_0xCDB4C4200A9B478A(uLocal_832))
		{
			if (iLocal_723 != Local_96.f_222)
			{
				iLocal_723 = Local_96.f_222;
				unk_0x7535364E752B61AE(uLocal_832, iLocal_723);
			}
		}
	}
	else if (iLocal_723 != 255)
	{
		iLocal_723 = 255;
	}
}

void func_752(int iParam0, bool bParam1)
{
	if (!unk_0xCDB4C4200A9B478A(uLocal_832))
	{
		if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_96.f_2[0 /*10*/].f_2))
			{
				uLocal_832 = unk_0xDB8B533098769F4F(unk_0xA9B72300DA155F92(Local_96.f_2[0 /*10*/].f_2));
				unk_0xA4E8F868373B09C0(uLocal_832, 12);
				unk_0x3A46FF82408A2709(uLocal_832, 478);
				unk_0x8A6C20F61A3C4CFA(uLocal_832, iParam0);
				if (bParam1)
				{
					unk_0xEEF2AFCBBDD180D3(uLocal_832, 1);
				}
			}
		}
	}
}

int func_753()
{
	int iVar0;
	
	iVar0 = func_55();
	if (iLocal_722 < 0)
	{
		return iVar0;
	}
	if (unk_0xA27C9E8196C79D22(unk_0x801C03D92F1C6755(iLocal_722)))
	{
		iVar0 = unk_0x801C03D92F1C6755(iLocal_722);
	}
	return iVar0;
}

int func_754(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar18;
	int iVar19;
	
	iVar0 = -1;
	iVar1 = unk_0xF749B19A9F9B3DBF(iParam1);
	if (unk_0x296D7F88818B62E7(unk_0xE0BDAFA1A39552D6(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0x3DB24415831CBC43(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0x3DB24415831CBC43(iParam1), 64);
		}
		unk_0x999E5F6D1B49D87B(sParam0);
		if ((iVar1 != -1 && unk_0x21A36E2323FEA4B1()) && iVar1 < 4)
		{
			if (Global_1617902.f_73330[iVar1] != -1)
			{
				unk_0xD5EA844E0F1947AF(func_464(iVar1, iParam1, 0));
			}
			else
			{
				unk_0xD5EA844E0F1947AF(func_454(iParam1, -2, 1, 0));
			}
		}
		else
		{
			unk_0xD5EA844E0F1947AF(func_454(iParam1, -2, 1, 0));
		}
		unk_0x9C174A0D56FFB64A(func_533(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0xB452F88B6A7B058D(0, 1);
		}
		else
		{
			Global_2460474 = { func_57(iParam1) };
			if (unk_0xAFAED23A75339868(&Global_2460404, 35, &Global_2460474))
			{
				iVar18 = 0;
				if (unk_0x2F6869889D97DFED(&(Global_2460404.f_22), "Leader") && Global_2460404.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2460404.f_21 > 0)
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
						Var2 = { func_755(&Var2) };
					}
					iVar0 = unk_0x7EFA4D96D67E80FA(iVar19, unk_0x03FC3C80A0C9E1FA(&Global_2460404, 35), &(Global_2460404.f_17), Global_2460404.f_30, iVar18, 0, Global_2460404, &Var2, Global_1317072, Global_1317073, Global_1317074);
				}
				else
				{
					iVar0 = unk_0xFA42110C8985008E(iVar19, unk_0x03FC3C80A0C9E1FA(&Global_2460404, 35), &(Global_2460404.f_17), Global_2460404.f_30, iVar18, 0, Global_2460404, Global_1317072, Global_1317073, Global_1317074);
				}
			}
			else
			{
				iVar0 = unk_0xB452F88B6A7B058D(0, 1);
			}
		}
		func_529(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_755(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

int func_756()
{
	int iVar0;
	
	iVar0 = func_55();
	if (Local_96.f_216 > -1)
	{
		if (unk_0xA27C9E8196C79D22(unk_0x801C03D92F1C6755(Local_96.f_216)))
		{
			iVar0 = unk_0x801C03D92F1C6755(Local_96.f_216);
		}
	}
	return iVar0;
}

void func_757(bool bParam0)
{
	struct<3> Var0;
	
	if (!unk_0xCDB4C4200A9B478A(uLocal_830))
	{
		Var0 = { func_40() };
		uLocal_830 = unk_0x1232EB8CC16E4E5F(Var0);
		if (bParam0)
		{
			unk_0xEEF2AFCBBDD180D3(uLocal_830, 1);
		}
	}
}

int func_758(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
	{
		return 0;
	}
	Var0 = { unk_0xF4745590D18D14B8(uParam0, 0) };
	if (unk_0xA1F52EC3ECE1D42E(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), Var0, 0) < 50f)
	{
		return 1;
	}
	if (unk_0xE72EEEBA742753B0(iParam0))
	{
		if (unk_0x7515D29C901C4E76(Var0, 1f))
		{
			if (unk_0xA382B3D871DD22A4(unk_0x06736567F820A39E(), iParam0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_759()
{
	int iVar0;
	
	if (!func_435())
	{
		if (func_357("DCONTRA_HLP1"))
		{
			unk_0x310F6B4E168A8F5D(1);
		}
		if (func_357("DCONTRA_HLP2"))
		{
			unk_0x310F6B4E168A8F5D(1);
		}
		if (func_357("DCONTRA_HLPCR"))
		{
			unk_0x310F6B4E168A8F5D(1);
		}
		if (func_357("DCONTRA_HLPVCR"))
		{
			unk_0x310F6B4E168A8F5D(1);
		}
		return;
	}
	iVar0 = func_333(unk_0xE0BDAFA1A39552D6());
	if (iVar0 < 2)
	{
		if (func_357("DCONTRA_HLP1"))
		{
			unk_0x310F6B4E168A8F5D(1);
		}
		if (func_357("DCONTRA_HLP2"))
		{
			unk_0x310F6B4E168A8F5D(1);
		}
		if (func_357("DCONTRA_HLPVCR"))
		{
			unk_0x310F6B4E168A8F5D(1);
		}
		if (func_357("DCONTRA_HLPCR"))
		{
			unk_0x310F6B4E168A8F5D(1);
		}
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!unk_0x7DA173D4FD42F36B(iLocal_719, 1))
	{
		return;
	}
	if (!unk_0x7DA173D4FD42F36B(iLocal_719, 2))
	{
		if (!func_761(85))
		{
			if (func_699(0, 1, 1, 1))
			{
				if (unk_0x490BA5FDD7EE47A9() == Local_96.f_218)
				{
					if (func_344())
					{
						func_362("DCONTRA_HLP3", -1);
					}
					else
					{
						func_362("DCONTRA_HLP1", -1);
					}
					func_361(1);
					unk_0xE27C8E42A97895CF(&iLocal_719, 2);
				}
				else if (func_797() == Local_96.f_218)
				{
					if (func_344())
					{
						func_362("DCONTRA_HLP4", -1);
					}
					else
					{
						func_362("DCONTRA_HLP2", -1);
					}
					func_361(1);
					unk_0xE27C8E42A97895CF(&iLocal_719, 2);
				}
			}
		}
	}
	else if (!unk_0x7DA173D4FD42F36B(iLocal_719, 8))
	{
		if (!func_344())
		{
			if (func_699(0, 1, 1, 1))
			{
				if (func_538())
				{
					func_362("DCONTRA_HLPVCR", -1);
				}
				else
				{
					func_362("DCONTRA_HLPCR", -1);
				}
				func_361(1);
				unk_0xE27C8E42A97895CF(&iLocal_719, 8);
			}
		}
	}
	if (func_344())
	{
		if (unk_0x7DA173D4FD42F36B(iLocal_719, 2))
		{
			if (!unk_0x7DA173D4FD42F36B(iLocal_719, 4))
			{
				if (func_699(0, 1, 1, 1))
				{
					func_760("DCONTRA_HLPLS", "DCONTRA_VBLP", -1);
					func_361(1);
					unk_0xE27C8E42A97895CF(&iLocal_719, 4);
					unk_0xE27C8E42A97895CF(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1), 10);
				}
			}
		}
	}
}

void func_760(char* sParam0, char* sParam1, int iParam2)
{
	unk_0x15835437CE85AEA4(sParam0);
	unk_0x4C5D86B5B659C953(sParam1);
	unk_0x65FD8FA7D3B7F717(0, 0, 0, iParam2);
}

bool func_761(int iParam0)
{
	return Global_2428549.f_2191[0 /*72*/].f_1 == iParam0;
}

void func_762()
{
	struct<3> Var0;
	
	if (!unk_0x7DA173D4FD42F36B(iLocal_719, 12))
	{
		if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
		{
			Var0 = { func_763(func_720(Local_96.f_197 + 1)) };
			if (unk_0xA1F52EC3ECE1D42E(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 1), Var0, 1) <= 200f)
			{
				uLocal_727 = unk_0xD619EBCC6AD6E414();
				unk_0x2299DE0D50444F5B(uLocal_727, "Bell_02", Var0, "ALARMS_SOUNDSET", 0, 0, 0);
				unk_0xE27C8E42A97895CF(&iLocal_719, 12);
			}
		}
	}
}

Vector3 func_763(int iParam0)
{
	struct<3> Var0;
	
	func_731(iParam0, &Var0);
	return Var0;
}

void func_764()
{
	struct<3> Var0;
	
	if (func_344())
	{
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!unk_0x7DA173D4FD42F36B(iLocal_719, 1))
	{
		return;
	}
	if (!unk_0x7DA173D4FD42F36B(Local_96.f_1, 13))
	{
		if (!unk_0x7DA173D4FD42F36B(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1, 11))
		{
			Var0 = { func_40() };
			if (unk_0xB7A628320EFF8E47(unk_0xF4745590D18D14B8(unk_0x06736567F820A39E(), 0), Var0) < 22500f)
			{
				unk_0xE27C8E42A97895CF(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1), 11);
			}
		}
		if (func_435())
		{
			if (!unk_0xCDB4C4200A9B478A(uLocal_831))
			{
				uLocal_831 = unk_0x1232EB8CC16E4E5F(func_40());
				unk_0xEEF2AFCBBDD180D3(uLocal_831, 1);
			}
		}
		else if (unk_0xCDB4C4200A9B478A(uLocal_831))
		{
			unk_0x2239ED27B231AE2E(&uLocal_831);
		}
	}
	else if (unk_0xCDB4C4200A9B478A(uLocal_831))
	{
		unk_0x2239ED27B231AE2E(&uLocal_831);
	}
}

void func_765()
{
	if (!unk_0x7DA173D4FD42F36B(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1, 1))
	{
		if (!func_796())
		{
			if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 6))
			{
				func_187(1);
				unk_0xE27C8E42A97895CF(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_1), 1);
			}
		}
	}
}

void func_766()
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
		if (func_344())
		{
			if (!unk_0x7DA173D4FD42F36B(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_2, iVar3))
			{
				if (!unk_0x7DA173D4FD42F36B(Local_96.f_206, iVar3))
				{
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar3 /*10*/].f_1))
					{
						if (!func_24(Local_96.f_2[iVar3 /*10*/].f_1))
						{
							if (!unk_0xCFC04A38F256EE06(unk_0x06736567F820A39E()))
							{
								if (func_797() == Local_96.f_218)
								{
									if (func_773(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar3 /*10*/].f_1)))
									{
										unk_0xE27C8E42A97895CF(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_2), iVar3);
									}
								}
							}
						}
					}
				}
			}
			if (!unk_0x7DA173D4FD42F36B(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_3, iVar3))
			{
				if (!unk_0x7DA173D4FD42F36B(Local_96.f_208, iVar3))
				{
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar3 /*10*/].f_2))
					{
						if (func_772(iVar3))
						{
							unk_0xE27C8E42A97895CF(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_3), iVar3);
						}
					}
				}
			}
			if (!unk_0x7DA173D4FD42F36B(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_4, iVar3))
			{
				if (!unk_0x7DA173D4FD42F36B(Local_96.f_207, iVar3))
				{
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar3 /*10*/].f_1))
					{
						if (!func_24(Local_96.f_2[iVar3 /*10*/].f_1))
						{
							if (unk_0xDECA6CE314913AC1(unk_0xF4745590D18D14B8(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar3 /*10*/].f_1), 1), 10f, 1))
							{
								unk_0xE27C8E42A97895CF(&(Local_366[unk_0x490BA5FDD7EE47A9() /*11*/].f_4), iVar3);
							}
						}
					}
				}
			}
		}
		if (func_435())
		{
			if (!func_344())
			{
				if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 13))
				{
					func_768(Local_96.f_2[iVar3 /*10*/].f_1, &(Local_738[iVar3 /*8*/]), -1082130432, 0, 1, 0, 0, -1);
				}
			}
			else if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar3 /*10*/].f_1))
			{
				if (!func_24(Local_96.f_2[iVar3 /*10*/].f_1))
				{
					if (!unk_0x0FDFEC0DD29106EE(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar3 /*10*/].f_1), 0))
					{
						func_768(Local_96.f_2[iVar3 /*10*/].f_1, &(Local_738[iVar3 /*8*/]), -1082130432, 0, 0, 0, 0, -1);
					}
				}
				else
				{
					func_768(Local_96.f_2[iVar3 /*10*/].f_1, &(Local_738[iVar3 /*8*/]), -1082130432, 0, 0, 0, 0, -1);
				}
			}
		}
		switch (Local_96.f_2[iVar3 /*10*/].f_9)
		{
			case 1:
				if (unk_0x587E5997B76F47FE())
				{
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar3 /*10*/].f_2))
					{
						if (func_13(Local_96.f_2[iVar3 /*10*/].f_2))
						{
							if (!func_24(Local_96.f_2[iVar3 /*10*/].f_1))
							{
								if (unk_0x954A6C5EBD942B9E(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar3 /*10*/].f_1), unk_0xA9B72300DA155F92(Local_96.f_2[iVar3 /*10*/].f_2)))
								{
									uVar5 = unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar3 /*10*/].f_1);
									if (func_27(&uVar5))
									{
										if (unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar3 /*10*/].f_1), -258271821) != 1 && unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar3 /*10*/].f_1), -258271821) != 0)
										{
											unk_0x2AF5979C8A445B16(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar3 /*10*/].f_1), unk_0xA9B72300DA155F92(Local_96.f_2[iVar3 /*10*/].f_2), 25f, 786603);
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (unk_0x587E5997B76F47FE())
				{
					if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar3 /*10*/].f_2))
					{
						if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar3 /*10*/].f_1))
						{
							if (func_13(Local_96.f_2[iVar3 /*10*/].f_2))
							{
								if (!func_24(Local_96.f_2[iVar3 /*10*/].f_1))
								{
									if (unk_0x954A6C5EBD942B9E(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar3 /*10*/].f_1), unk_0xA9B72300DA155F92(Local_96.f_2[iVar3 /*10*/].f_2)))
									{
										if ((unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar3 /*10*/].f_1), -258271821) != 1 && unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar3 /*10*/].f_1), -258271821) != 0) || unk_0x7DA173D4FD42F36B(Local_96.f_204, iVar3))
										{
											unk_0x2AF5979C8A445B16(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar3 /*10*/].f_1), unk_0xA9B72300DA155F92(Local_96.f_2[iVar3 /*10*/].f_2), 30f, 786469);
											if (unk_0x7DA173D4FD42F36B(Local_96.f_204, iVar3))
											{
												unk_0x99BCB15F954AF579(&(Local_96.f_204), iVar3);
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
				if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar3 /*10*/].f_1))
				{
					if (!func_24(Local_96.f_2[iVar3 /*10*/].f_1))
					{
						iVar4 = unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar3 /*10*/].f_1), -828834893);
						if (iVar4 != 1 && iVar4 != 0)
						{
							if (func_210(Local_96.f_2[iVar3 /*10*/].f_1))
							{
								unk_0xBA63517ADBC1E5E3(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar3 /*10*/].f_1), 1);
								unk_0x748A759556B70724(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar3 /*10*/].f_1), 0, 0);
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
				if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar3 /*10*/].f_1))
				{
					if (!func_24(Local_96.f_2[iVar3 /*10*/].f_1))
					{
						iVar4 = unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar3 /*10*/].f_1), -1442466670);
						if (iVar4 != 1 && iVar4 != 0)
						{
							if (func_210(Local_96.f_2[iVar3 /*10*/].f_1))
							{
								if (unk_0x40B3668D7226E0DF(Local_96.f_2[iVar3 /*10*/].f_1))
								{
									unk_0xBA63517ADBC1E5E3(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar3 /*10*/].f_1), 0);
									unk_0xE7E3395C59F02C4A(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar3 /*10*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iVar3 /*10*/].f_1))
				{
					if (!func_24(Local_96.f_2[iVar3 /*10*/].f_1))
					{
						iVar4 = unk_0xFB900D9EE2ACC400(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar3 /*10*/].f_1), 1120685857);
						if (iVar4 != 1 && iVar4 != 0)
						{
							unk_0xBA63517ADBC1E5E3(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar3 /*10*/].f_1), 0);
							Var0 = { func_153() };
							unk_0xCC3E84A5721DBA15(unk_0x220B3465A4B1FBA5(Local_96.f_2[iVar3 /*10*/].f_1), Var0, 250f, 0);
						}
					}
				}
				break;
		}
		iVar3++;
	}
	func_767();
}

void func_767()
{
	if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iLocal_1003 /*10*/].f_1))
	{
		if (!func_24(Local_96.f_2[iLocal_1003 /*10*/].f_1))
		{
			if (!unk_0x7DA173D4FD42F36B(uLocal_1002, iLocal_1003))
			{
				unk_0xD6844FCDD2BAFECD(Local_96.f_2[iLocal_1003 /*10*/].f_1, 1);
				unk_0xE27C8E42A97895CF(&iLocal_1002, iLocal_1003);
			}
		}
	}
	iLocal_1003++;
	if (iLocal_1003 == 10)
	{
		iLocal_1003 = 0;
	}
}

void func_768(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (unk_0xC7A68C5C107A1253(uParam0))
	{
		if (func_771())
		{
			Global_2428549 = unk_0xE0BDAFA1A39552D6();
		}
		if (bParam3)
		{
			func_770(unk_0x220B3465A4B1FBA5(uParam0), uParam1, 1, Global_2428549, iParam4, iParam5, fParam2, iParam6, iParam7);
		}
		else
		{
			func_770(unk_0x220B3465A4B1FBA5(uParam0), uParam1, -1, Global_2428549, iParam4, iParam5, fParam2, iParam6, iParam7);
		}
	}
	else if (unk_0xCDB4C4200A9B478A(*uParam1))
	{
		func_769(uParam1);
	}
}

void func_769(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0xCDB4C4200A9B478A(*uParam0))
	{
		unk_0x2239ED27B231AE2E(uParam0);
		bVar0 = true;
	}
	if (unk_0xCDB4C4200A9B478A(uParam0->f_1))
	{
		unk_0x2239ED27B231AE2E(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xC1EDB61CE0A4B94E(uParam0->f_7))
	{
		if (!unk_0xCFC04A38F256EE06(uParam0->f_7))
		{
			if (unk_0xE60A28942E3AC2F4(uParam0->f_7))
			{
				unk_0x02301F37BFDE4853(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_770(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xBC628C78D8ECD5F1();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xCFC04A38F256EE06(uParam0))
	{
		if (!unk_0xE60A28942E3AC2F4(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x02301F37BFDE4853(iParam0, 1);
			}
			else
			{
				unk_0x1BFD1B2D060B4D7B(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x64C4679AB573D014(iParam0, iParam2);
			unk_0x8071A84CFEF9473E(iParam0, fParam6);
			if (unk_0xCDB4C4200A9B478A(*uParam1))
			{
				unk_0xA4E8F868373B09C0(*uParam1, 7);
			}
		}
		unk_0x4E4EE0053F5CC360(iParam0, uParam4);
		unk_0xD8980636C77E9E15(iParam0, uParam5);
		*uParam1 = unk_0x02474D0091F9C4C7(iParam0);
		if (!unk_0x7DA173D4FD42F36B(uParam1->f_6, 2))
		{
			if (unk_0xCDB4C4200A9B478A(*uParam1))
			{
				if (!unk_0x226FA58470A21AEF(uParam7))
				{
					unk_0x029684F77EB71B8F("MCUSTBLIP");
					unk_0x9C174A0D56FFB64A(sParam7);
					unk_0xA16AF6FEBF65A3F0(*uParam1);
				}
				unk_0xE27C8E42A97895CF(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x0FDFEC0DD29106EE(iParam0, 0))
		{
			uParam1->f_1 = unk_0xC449C2B2F01617A0(iParam0);
			if (!unk_0x7DA173D4FD42F36B(uParam1->f_6, 3))
			{
				if (unk_0xCDB4C4200A9B478A(uParam1->f_1))
				{
					unk_0xA4E8F868373B09C0(uParam1->f_1, 7);
					unk_0xE27C8E42A97895CF(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xCDB4C4200A9B478A(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x99BCB15F954AF579(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_771()
{
	return Global_1315888;
}

int func_772(int iParam0)
{
	if (unk_0xC3A7CFC6468E0BAE(Local_96.f_2[iParam0 /*10*/].f_2))
	{
		if (func_13(Local_96.f_2[iParam0 /*10*/].f_2))
		{
			if (unk_0x5B69019B28C95DD8(unk_0xA9B72300DA155F92(Local_96.f_2[iParam0 /*10*/].f_2), 0, 7000) || unk_0x5B69019B28C95DD8(unk_0xA9B72300DA155F92(Local_96.f_2[iParam0 /*10*/].f_2), 1, 40000))
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

int func_773(var uParam0)
{
	var uVar0;
	var uVar1;
	
	if (unk_0x225B26AE60B121A0(unk_0xE0BDAFA1A39552D6(), uParam0))
	{
		return 1;
	}
	if (unk_0x1D7CB59C357D17AB(unk_0xE0BDAFA1A39552D6(), uParam0))
	{
		return 1;
	}
	if (func_774())
	{
		if (unk_0xFD400CC34D5746B3(unk_0xE0BDAFA1A39552D6(), &uVar0))
		{
			if (unk_0x77CB3F400804EDD1(uVar0))
			{
				uVar1 = unk_0x406B8F450D0105AB(iVar0);
				if (unk_0xC1EDB61CE0A4B94E(uVar1))
				{
					if (!unk_0xBDA1F5E8A36BFA07(iVar1, 0))
					{
						if (unk_0x0FDFEC0DD29106EE(iVar1, 0))
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

bool func_774()
{
	return Global_1573831;
}

int func_775()
{
	if (func_776(1))
	{
		return 1;
	}
	if (Global_2464975.f_4685.f_14)
	{
		Global_2464975.f_4685.f_14 = 0;
		return 1;
	}
	return 0;
}

int func_776(bool bParam0)
{
	bool bVar0;
	
	if (!func_479(1))
	{
		bVar0 = false;
		if (Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_51 != func_55())
		{
			if (func_848(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_51, 0, 1) && Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_19 == 4)
			{
				bVar0 = true;
			}
		}
		else if (func_777(func_180(unk_0xE0BDAFA1A39552D6())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_379(31);
				if (unk_0xA27C9E8196C79D22(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_51))
				{
					Global_1609371 = func_454(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_51, -2, 0, 0);
				}
				else
				{
					Global_1609371 = 1;
				}
				Global_1609355 = { Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_77 };
			}
			return 1;
		}
	}
	return 0;
}

int func_777(int iParam0)
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
			return 0;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
			return 1;
		
		case 148:
			return 2;
		
		default:
	}
	return -1;
}

void func_778()
{
	if (!func_779(unk_0xE0BDAFA1A39552D6()))
	{
		func_185(25);
	}
}

bool func_779(int iParam0)
{
	return func_184(iParam0, 25);
}

void func_780()
{
	int iVar0;
	
	iVar0 = func_241(unk_0xE0BDAFA1A39552D6());
	iLocal_833 = func_239(iVar0);
}

void func_781(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	
	if (Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_28 != iParam0)
	{
		func_793(-1);
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_28 = iParam0;
		if (func_792() != -1)
		{
			func_791(-1);
		}
		if (func_790() != -1)
		{
			func_789(-1);
		}
		func_787(iParam2);
		func_785(iParam0);
		if (!func_194(iParam0))
		{
			fVar0 = func_193(iParam0);
			if (fVar0 != 1f)
			{
				func_190(fVar0);
				unk_0xE27C8E42A97895CF(&(Global_1734808.f_3), 1);
			}
		}
		if (!func_197(iParam0))
		{
			if (func_195(iParam0, iParam2))
			{
				unk_0x23C09ED6B6466E40(0);
				unk_0xD8C6045E402E904C(unk_0xE0BDAFA1A39552D6(), 0, 0);
				unk_0xB9AD37E5A78BA03C(unk_0xE0BDAFA1A39552D6(), 0);
				unk_0xE27C8E42A97895CF(&(Global_1734808.f_3), 0);
			}
			else if (unk_0x16B4666C6E139F11() < 5)
			{
				unk_0x71543B3C24188223(1f);
				unk_0x23C09ED6B6466E40(5);
			}
		}
		if (func_341())
		{
			func_185(27);
		}
		if (bParam1)
		{
			if (!func_335())
			{
				func_187(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0x7DA173D4FD42F36B(Global_2464975.f_4414, 1) || unk_0x7DA173D4FD42F36B(Global_2464975.f_4414, 4)) || unk_0x7DA173D4FD42F36B(Global_2464975.f_4414, 0))
			{
				func_379(6);
			}
			func_784();
		}
		if (iParam0 == 164)
		{
			unk_0x6849F03027FD1813(3, 0);
			unk_0x6849F03027FD1813(5, 0);
		}
		if (func_208(unk_0xE0BDAFA1A39552D6()) && func_202(unk_0xE0BDAFA1A39552D6()))
		{
			unk_0xE27C8E42A97895CF(&(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_1), 8);
		}
		func_782();
	}
}

void func_782()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_783();
	iVar2 = func_56(unk_0xE0BDAFA1A39552D6());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x801C03D92F1C6755(iVar0);
		if (unk_0xA27C9E8196C79D22(iVar1))
		{
			if (func_272(iVar1, iVar2, 1))
			{
				unk_0xFDB2AD78EE5E2EE4(unk_0xE0BDAFA1A39552D6(), iVar1, uVar3);
				unk_0xFDB2AD78EE5E2EE4(iVar1, unk_0xE0BDAFA1A39552D6(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_783()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_481();
	if (iVar0 != func_55())
	{
		if (func_848(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0x7DA173D4FD42F36B(Global_1610705[iVar1 /*178*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_784()
{
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4414, 1))
	{
		unk_0x99BCB15F954AF579(&(Global_2464975.f_4414), 1);
	}
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4414, 4))
	{
		unk_0x99BCB15F954AF579(&(Global_2464975.f_4414), 4);
	}
	if (unk_0x7DA173D4FD42F36B(Global_2464975.f_4414, 6))
	{
		unk_0x99BCB15F954AF579(&(Global_2464975.f_4414), 6);
	}
	unk_0x99BCB15F954AF579(&(Global_2464975.f_4414), 0);
	unk_0x99BCB15F954AF579(&(Global_2464975.f_4414), 2);
	Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_365 = 0;
	if (Global_2464975.f_4416 > 0)
	{
		unk_0x23C09ED6B6466E40(Global_2464975.f_4416);
	}
	Global_2464975.f_4415 = 0;
}

void func_785(int iParam0)
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_413(3357, -1, 0);
	iVar1 = func_786(iParam0);
	if (iVar1 != -1)
	{
		unk_0xE27C8E42A97895CF(&uVar0, iVar1);
		func_412(3357, uVar0, -1, 1);
	}
}

int func_786(int iParam0)
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
		
		default:
	}
	return -1;
}

void func_787(int iParam0)
{
	func_788(unk_0xE0BDAFA1A39552D6(), iParam0);
}

void func_788(int iParam0, int iParam1)
{
	if (Global_1610705[iParam0 /*178*/].f_10.f_121 != iParam1)
	{
		Global_1610705[iParam0 /*178*/].f_10.f_121 = iParam1;
	}
}

void func_789(int iParam0)
{
	if (Global_2464975.f_4685.f_138 != iParam0)
	{
		Global_2464975.f_4685.f_138 = iParam0;
	}
}

int func_790()
{
	return Global_2464975.f_4685.f_138;
}

void func_791(int iParam0)
{
	if (Global_2464975.f_4685.f_137 != iParam0)
	{
		Global_2464975.f_4685.f_137 = iParam0;
	}
}

int func_792()
{
	return Global_2464975.f_4685.f_137;
}

void func_793(int iParam0)
{
	Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_27 = iParam0;
}

int func_794()
{
	struct<4> Var0;
	int iVar4;
	
	if (Local_96.f_196 != -1)
	{
		return Local_96.f_196;
	}
	Var0 = { func_795() };
	Local_96.f_198 = func_433(Var0.f_0);
	Local_96.f_197 = (Var0.f_0 - 1);
	if (Local_96.f_197 < 0)
	{
		Local_96.f_197 = 0;
	}
	if (Local_96.f_196 == -1)
	{
		iVar4 = unk_0xA6055C735E3DD877(0, 10);
		if (iVar4 > 7)
		{
			Local_96.f_196 = 99;
		}
		else
		{
			Local_96.f_196 = 0;
		}
		if (Global_262145.f_12849 && Local_96.f_196 == 0)
		{
			Local_96.f_196 = 99;
		}
		else if (Global_262145.f_12848 && Local_96.f_196 == 99)
		{
			Local_96.f_196 = 0;
		}
	}
	return Local_96.f_196;
}

struct<4> func_795()
{
	return Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_122;
}

int func_796()
{
	int iVar0;
	
	iVar0 = func_797();
	if (iVar0 > -1)
	{
		if (Local_96.f_218 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_797()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x490BA5FDD7EE47A9();
	iVar1 = unk_0xE0BDAFA1A39552D6();
	if (func_34(unk_0xE0BDAFA1A39552D6(), 0))
	{
		iVar0 = func_343();
		iVar1 = Global_1587816[unk_0xE0BDAFA1A39552D6() /*444*/].f_355;
	}
	if (Local_366[iVar0 /*11*/].f_10 != -1)
	{
		return Local_366[iVar0 /*11*/].f_10;
	}
	if (func_201(iVar1))
	{
		Local_366[iVar0 /*11*/].f_10 = iVar0;
		if (iVar0 == Local_96.f_218)
		{
			func_627(1);
		}
	}
	else if (func_237(iVar1, 1))
	{
		iVar2 = func_481();
		if (iVar2 != func_55())
		{
			if (unk_0x605885F0A8AC6672(iVar2))
			{
				Local_366[iVar0 /*11*/].f_10 = unk_0xBD1E178ABA0E03F1(iVar2);
			}
		}
	}
	return Local_366[iVar0 /*11*/].f_10;
}

int func_798()
{
	if (func_344())
	{
		if (!func_63())
		{
			return 0;
		}
	}
	return 1;
}

int func_799()
{
	return Local_96.f_0;
}

int func_800(int iParam0)
{
	return Local_366[iParam0 /*11*/];
}

int func_801()
{
	bool bVar0;
	
	func_806(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315888 == 0)
	{
		if (!unk_0x17CC0D5008835470())
		{
			return 1;
		}
	}
	if (func_805())
	{
		return 1;
	}
	if (Global_2446452)
	{
		return 1;
	}
	if (func_804())
	{
		return 1;
	}
	if (func_803(157))
	{
		if (!func_802())
		{
			return 1;
		}
	}
	if (func_803(155))
	{
		return 1;
	}
	if (!unk_0x2CB436C59D8FC08B())
	{
		return 1;
	}
	if (func_191() != 0)
	{
		if (unk_0x98934607F8D0FB03(func_191()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_802()
{
	return Global_2434839.f_575;
}

int func_803(int iParam0)
{
	if (unk_0x1151827D6B6D09C7(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_804()
{
	return Global_2444095;
}

bool func_805()
{
	return Global_2434839.f_570;
}

void func_806(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0xF33D012D28E3DB68(1))
	{
		iVar1 = unk_0xF0310CD279B9DC23(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6E7EC37CC38579DB(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 347:
					func_807(iVar0);
					break;
				
				case 2:
					unk_0x6E7EC37CC38579DB(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_807(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x6E7EC37CC38579DB(1, iParam0, &Var0, 3))
	{
		if (func_848(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x44A9253132E1DDE0(Var0.f_1);
			if (unk_0xC1EDB61CE0A4B94E(uVar3))
			{
				if (unk_0x0FDFEC0DD29106EE(iVar3, 0))
				{
					uVar4 = unk_0x34E1EF1E8BCD1BFC(iVar3, 0);
					if (unk_0xBBDEC099189867B6(uVar4, Var0.f_2) && unk_0x992E302DC36A4251())
					{
						if (func_808(uVar4, &bVar5))
						{
							unk_0x87332622AA717A1B(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x768B37F1452D4834(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_808(int iParam0, var uParam1)
{
	if (unk_0xC1EDB61CE0A4B94E(uParam0))
	{
		if (!unk_0xC9A01F9792B3D486(iParam0))
		{
			if (unk_0x2A3F30E37EB8FDD8(iParam0))
			{
				unk_0xB7E6C6AE18F1EDA6(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x7292AF41BC6C644F(iParam0, 0))
		{
			if (unk_0xA2C0F3D7469C0A0B(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_809()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_810()
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
	
	if (!func_34(unk_0xE0BDAFA1A39552D6(), 0))
	{
		if (unk_0x7DA173D4FD42F36B(iLocal_719, 18))
		{
			if (!unk_0x7DA173D4FD42F36B(iLocal_719, 6))
			{
				if (unk_0x17CC0D5008835470())
				{
					if (func_796() || func_342())
					{
						func_573(0, 4);
						unk_0xE27C8E42A97895CF(&iLocal_719, 6);
					}
				}
			}
			uVar0 = Local_96.f_196;
			iVar1 = -1;
			iVar2 = -1;
			iVar3 = Local_96.f_197 + 1;
			iVar4 = Local_96.f_198;
			iVar5 = -1;
			bVar6 = !func_344();
			iVar7 = -1;
			iVar8 = 0;
			iVar9 = 0;
			iVar5 = Local_96.f_213;
			if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 1) || unk_0x7DA173D4FD42F36B(Local_96.f_1, 4))
			{
				iVar7 = 2;
			}
			else if (unk_0x7DA173D4FD42F36B(Local_96.f_1, 8))
			{
				iVar7 = 1;
			}
			else if (((unk_0x7DA173D4FD42F36B(Local_96.f_1, 3) || unk_0x7DA173D4FD42F36B(Local_96.f_1, 9)) || unk_0x7DA173D4FD42F36B(Local_96.f_1, 15)) || unk_0x7DA173D4FD42F36B(Local_96.f_1, 5))
			{
				iVar7 = 0;
			}
			if (unk_0x17CC0D5008835470())
			{
				Global_1734817.f_2 = Local_96.f_267;
				Global_1734817.f_3 = Local_96.f_268;
				func_827(uVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar7, iVar8, iVar9, bVar6);
			}
		}
	}
	func_378();
	if (unk_0xD53C8BCD41123EE6(unk_0x06736567F820A39E()) == iLocal_724)
	{
		unk_0xDEA5F99894469373(unk_0x06736567F820A39E(), uLocal_726);
	}
	if (unk_0x17CC0D5008835470())
	{
		if (unk_0x587E5997B76F47FE())
		{
			unk_0x8659A4920DA95096(Local_96.f_261, 1);
		}
		func_375();
	}
	func_826();
	if (Local_96.f_219 != -1)
	{
		if (unk_0x7DA173D4FD42F36B(iLocal_719, 5))
		{
			if (unk_0xA27C9E8196C79D22(unk_0x801C03D92F1C6755(Local_96.f_219)))
			{
				func_373(unk_0x801C03D92F1C6755(Local_96.f_219), 432, 0);
				func_371(unk_0x801C03D92F1C6755(Local_96.f_219), 1, 0);
				func_370(unk_0x801C03D92F1C6755(Local_96.f_219), 0, 0);
				func_369(unk_0x801C03D92F1C6755(Local_96.f_219), 0);
				func_368(unk_0x801C03D92F1C6755(Local_96.f_219), Global_262145.f_10542, 0);
			}
		}
	}
	if (func_168(0))
	{
		func_167(0);
	}
	if (unk_0x7DA173D4FD42F36B(iLocal_720, 0))
	{
		if (!unk_0x7DA173D4FD42F36B(iLocal_720, 2))
		{
			unk_0xC8601D5221312A4A("DisableFlightMusic", 0);
			unk_0xC8601D5221312A4A("WantedMusicDisabled", 0);
		}
	}
	unk_0xE27C8E42A97895CF(&iLocal_720, 8);
	func_163();
	unk_0xDDC8F43C2CBC62A7(1);
	func_627(0);
	func_825(&(Local_96.f_269));
	func_812(1);
	if (!func_34(unk_0xE0BDAFA1A39552D6(), 0))
	{
		unk_0x23C09ED6B6466E40(5);
	}
	func_811();
}

void func_811()
{
	unk_0xF5DF8F3392CDD07B();
}

void func_812(bool bParam0)
{
	int iVar0;
	
	if (Global_1330244.f_1.f_108 != 0)
	{
		Global_1330244.f_1.f_108 = 0;
	}
	if (Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_28 == 167 || Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_28 == 168)
	{
		func_823();
		unk_0x99BCB15F954AF579(&(Global_1734808.f_3), 4);
	}
	if (Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_28 == 164)
	{
		unk_0x6849F03027FD1813(3, 1);
		unk_0x6849F03027FD1813(5, 1);
	}
	if (Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_28 != -1)
	{
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_28 = -1;
		if (!unk_0x7DA173D4FD42F36B(Global_1573903.f_1, 14) && !func_208(unk_0xE0BDAFA1A39552D6()))
		{
			func_187(0);
		}
	}
	else if (func_821(unk_0xE0BDAFA1A39552D6()) != -1)
	{
		func_793(-1);
	}
	func_787(-1);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_819(iVar0);
		iVar0++;
	}
	if (unk_0x7DA173D4FD42F36B(Global_1734808.f_3, 0))
	{
		unk_0x71543B3C24188223(1f);
		unk_0x23C09ED6B6466E40(5);
		unk_0x99BCB15F954AF579(&(Global_1734808.f_3), 0);
	}
	if (func_270(func_364()))
	{
		func_818(-1);
	}
	else if (func_363(func_364()))
	{
	}
	else
	{
		func_814(-1, 1);
	}
	func_183(19);
	func_183(20);
	func_183(21);
	func_183(22);
	func_183(27);
	func_167(3);
	func_167(4);
	func_167(7);
	func_813();
	if (func_202(unk_0xE0BDAFA1A39552D6()))
	{
		func_627(0);
	}
	func_183(29);
	Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_51 = func_55();
	if (Global_2464975.f_4685.f_14 != 0)
	{
		Global_2464975.f_4685.f_14 = 0;
	}
	if (bParam0)
	{
		func_169();
	}
	if (!func_208(unk_0xE0BDAFA1A39552D6()))
	{
		func_182();
		unk_0x99BCB15F954AF579(&(Global_1734808.f_3), 1);
	}
}

void func_813()
{
	if (func_779(unk_0xE0BDAFA1A39552D6()))
	{
		func_183(25);
	}
}

void func_814(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_364();
	}
	if (iParam0 > 0)
	{
		if (func_481() != func_55())
		{
			if (func_817(unk_0xE0BDAFA1A39552D6()) == unk_0xE0BDAFA1A39552D6())
			{
				Global_2460522.f_35[func_816(iParam0)] = 1;
			}
		}
		iVar0 = func_816(159);
		if (func_815(iVar0, Global_262145.f_10793, bParam1))
		{
			func_9(&(Global_2460522[iVar0 /*2*/]));
			func_10(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_816(157);
		if (func_815(iVar0, Global_262145.f_10793, bParam1))
		{
			func_9(&(Global_2460522[iVar0 /*2*/]));
			func_10(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_816(148);
		if (func_815(iVar0, Global_262145.f_10793, bParam1))
		{
			func_9(&(Global_2460522[iVar0 /*2*/]));
			func_10(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_816(164);
		if (func_815(iVar0, Global_262145.f_10793, bParam1))
		{
			func_9(&(Global_2460522[iVar0 /*2*/]));
			func_10(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_816(142);
		if (func_815(iVar0, Global_262145.f_10793, bParam1))
		{
			func_9(&(Global_2460522[iVar0 /*2*/]));
			func_10(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_816(152);
		if (func_815(iVar0, Global_262145.f_10793, bParam1))
		{
			func_9(&(Global_2460522[iVar0 /*2*/]));
			func_10(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_816(166);
		if (func_815(iVar0, Global_262145.f_10793, bParam1))
		{
			func_9(&(Global_2460522[iVar0 /*2*/]));
			func_10(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_816(170);
		if (func_815(iVar0, Global_262145.f_10793, bParam1))
		{
			func_9(&(Global_2460522[iVar0 /*2*/]));
			func_10(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_816(173);
		if (func_815(iVar0, Global_262145.f_10793, bParam1))
		{
			func_9(&(Global_2460522[iVar0 /*2*/]));
			func_10(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_815(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_184(unk_0xE0BDAFA1A39552D6(), 19) && !func_184(unk_0xE0BDAFA1A39552D6(), 20)) && !func_184(unk_0xE0BDAFA1A39552D6(), 9))
		{
			return 0;
		}
	}
	if (Global_2460522.f_35[iParam0] == 1 && func_11(&(Global_2460522[iParam0 /*2*/])))
	{
		if (func_469(&(Global_2460522[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2460522.f_35[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_816(int iParam0)
{
	switch (iParam0)
	{
		case 159:
			return 3;
		
		case 157:
			return 4;
		
		case 148:
			return 5;
		
		case 164:
			return 6;
		
		case 142:
			return 7;
		
		case 152:
			return 8;
		
		case 163:
			return 9;
		
		case 155:
			return 10;
		
		case 160:
			return 11;
		
		case 153:
			return 12;
		
		case 162:
			return 13;
		
		case 154:
			return 14;
		
		case 166:
			return 0;
		
		case 170:
			return 1;
		
		case 173:
			return 2;
		
		case 171:
			return 15;
		
		case 172:
			return 16;
		
		default:
	}
	return -1;
}

int func_817(int iParam0)
{
	return Global_1610705[iParam0 /*178*/].f_10.f_30;
}

void func_818(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_364();
	}
	if (iParam0 > 0)
	{
		if (func_481() != func_55())
		{
			Global_2460522.f_35[func_816(iParam0)] = 1;
		}
		iVar0 = func_816(155);
		if (func_815(iVar0, Global_262145.f_10794, 0))
		{
			func_9(&(Global_2460522[iVar0 /*2*/]));
			func_10(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_816(163);
		if (func_815(iVar0, Global_262145.f_10794, 0))
		{
			func_9(&(Global_2460522[iVar0 /*2*/]));
			func_10(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_816(160);
		if (func_815(iVar0, Global_262145.f_10794, 0))
		{
			func_9(&(Global_2460522[iVar0 /*2*/]));
			func_10(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_816(153);
		if (func_815(iVar0, Global_262145.f_10794, 0))
		{
			func_9(&(Global_2460522[iVar0 /*2*/]));
			func_10(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_816(162);
		if (func_815(iVar0, Global_262145.f_10794, 0))
		{
			func_9(&(Global_2460522[iVar0 /*2*/]));
			func_10(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_816(154);
		if (func_815(iVar0, Global_262145.f_10794, 0))
		{
			func_9(&(Global_2460522[iVar0 /*2*/]));
			func_10(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_816(171);
		if (func_815(iVar0, Global_262145.f_10794, 0))
		{
			func_9(&(Global_2460522[iVar0 /*2*/]));
			func_10(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_816(172);
		if (func_815(iVar0, Global_262145.f_10794, 0))
		{
			func_9(&(Global_2460522[iVar0 /*2*/]));
			func_10(&(Global_2460522[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_819(int iParam0)
{
	if (!func_59(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_107[iParam0 /*3*/], func_820(), 0))
	{
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_107[iParam0 /*3*/] = { func_820() };
	}
	if (!func_59(Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_97[iParam0 /*3*/], func_820(), 0))
	{
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_97[iParam0 /*3*/] = { func_820() };
	}
}

Vector3 func_820()
{
	struct<3> Var0;
	
	return Var0;
}

int func_821(int iParam0)
{
	if (func_822(iParam0, 0))
	{
		return Global_1610705[iParam0 /*178*/].f_10.f_27;
	}
	return -1;
}

int func_822(int iParam0, int iParam1)
{
	if (Global_1610705[iParam0 /*178*/].f_10.f_27 != -1 || (iParam1 && Global_1610705[iParam0 /*178*/].f_10.f_28 != -1))
	{
		return 1;
	}
	return 0;
}

void func_823()
{
	unk_0x99BCB15F954AF579(&(Global_2464975.f_1643), 28);
	unk_0x99BCB15F954AF579(&(Global_2464975.f_1643), 29);
	func_824(24);
}

void func_824(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x99BCB15F954AF579(&(Global_2464975.f_4685.f_7[iVar0]), iVar1);
}

void func_825(var uParam0)
{
	if (unk_0x108FF44A8C94AD53(*uParam0))
	{
		unk_0xBC04067745AF290E(*uParam0, 1);
	}
}

void func_826()
{
	unk_0x50C99396AA9E5449(iLocal_725);
	unk_0x50C99396AA9E5449(iLocal_724);
}

void func_827(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	var uVar0;
	struct<23> Var1;
	int iVar24;
	struct<24> Var25;
	struct<24> Var49;
	struct<25> Var73;
	
	uVar0 = unk_0x47B34031F915C179();
	iVar24 = func_56(unk_0xE0BDAFA1A39552D6());
	Var1.f_0 = Global_1734817;
	Var1.f_1 = Global_1734817.f_1;
	Var1.f_4 = Global_1734817.f_4;
	Var1.f_5 = Global_1734817.f_5;
	Var1.f_6 = Global_1734817.f_6;
	Var1.f_7 = Global_1734817.f_7;
	Var1.f_8 = Global_1734817.f_8;
	Var1.f_9 = Global_1734817.f_9;
	Var1.f_10 = Global_1734817.f_10;
	Var1.f_2 = Global_1734817.f_2;
	Var1.f_3 = Global_1734817.f_3;
	Var1.f_11 = iParam3;
	Var1.f_12 = iParam2;
	Var1.f_13 = uParam0;
	Var1.f_14 = func_834();
	Var1.f_16 = iParam1;
	Var1.f_21 = iParam7;
	Var1.f_22 = iParam8;
	if (iVar24 != func_55() && unk_0xA27C9E8196C79D22(iVar24))
	{
		Var1.f_17 = iParam4;
		Var1.f_18 = func_833(iVar24, iParam3);
		Var1.f_19 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iParam4) / unk_0xBBDA792448DB5A89(func_430(iParam3))) * 100f));
		Var1.f_20 = (100 - unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(func_830(iParam3, iVar24)) / unk_0xBBDA792448DB5A89(func_430(iParam3))) * 100f)));
		Var1.f_15 = func_829(iVar24);
	}
	if (unk_0x17CC0D5008835470())
	{
		if (unk_0x2F6869889D97DFED(uVar0, "GB_CONTRABAND_SELL"))
		{
			Var25 = { Var1 };
			Var25.f_23 = iParam5;
			unk_0x3C9A306FEE8A9EE4(&Var25);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "GB_CONTRABAND_BUY"))
		{
			unk_0xD679115D4EBD7E17(&Var1);
		}
		else if (unk_0x2F6869889D97DFED(sVar0, "GB_CONTRABAND_DEFEND"))
		{
			if (bParam9 == 1)
			{
				Var49 = { Var1 };
				Var49.f_23 = iParam5;
				unk_0xE18E6A502957E731(&Var49);
			}
			else
			{
				Var73 = { Var1 };
				Var73.f_23 = iParam5;
				Var73.f_24 = iParam6;
				unk_0x54FF52DFA10C49C4(&Var73);
			}
		}
	}
	func_828();
}

void func_828()
{
	struct<18> Var0;
	
	Global_1734817 = { Var0 };
}

int func_829(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1587816[iParam0 /*444*/].f_250.f_68[iVar0 /*2*/] > 0 && Global_1587816[iParam0 /*444*/].f_250.f_68[iVar0 /*2*/] <= 22)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_830(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_832(iParam1, iParam0))
	{
		iVar0 = func_831(iParam0, iParam1);
		iVar1 = func_429(iParam0);
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

int func_831(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam0 == Global_1587816[iParam1 /*444*/].f_250.f_68[iVar0 /*2*/])
			{
				return Global_1587816[iParam1 /*444*/].f_250.f_68[iVar0 /*2*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_832(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_42(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1587816[iParam0 /*444*/].f_250.f_68[iVar0 /*2*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_833(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_42(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam1 == Global_1587816[iParam0 /*444*/].f_250.f_68[iVar0 /*2*/])
			{
				return Global_1587816[iParam0 /*444*/].f_250.f_68[iVar0 /*2*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_834()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_56(unk_0xE0BDAFA1A39552D6());
	if (iVar2 != func_55())
	{
		iVar1 = 1;
		while (iVar1 <= 22)
		{
			if (func_832(iVar2, iVar1))
			{
				unk_0xE27C8E42A97895CF(&uVar0, iVar1);
			}
			iVar1++;
		}
	}
	return uVar0;
}

void func_835(struct<20> Param0)
{
	func_846(func_847(Param0.f_0), Param0);
	unk_0xD9E25CCAEFD3B39A(10);
	unk_0xFABD8F29655099FA(3);
	func_845(0, -1, 0);
	unk_0x8C2CCD685DA243F6(&Local_96, 270);
	unk_0xE51AD091F27ECBFF(&Local_366, 353);
	if (!func_844())
	{
		func_810();
	}
	if (unk_0x17CC0D5008835470())
	{
		unk_0x8AAE4CDF72BA829A(0);
		if (unk_0x587E5997B76F47FE())
		{
		}
		func_841();
		func_836(0, 0);
		Local_366[unk_0x490BA5FDD7EE47A9() /*11*/] = 0;
	}
	else
	{
		func_810();
	}
}

void func_836(int iParam0, int iParam1)
{
	func_840();
	func_839();
	if ((iParam0 != 0 && unk_0xA27C9E8196C79D22(iParam1)) && func_838(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0xE27C8E42A97895CF(&Global_1734803, 0);
				break;
			}
	}
	if (!func_538() && !func_237(unk_0xE0BDAFA1A39552D6(), 1))
	{
		if (func_338())
		{
			func_186(3);
		}
		func_186(4);
	}
	if (func_479(0))
	{
		Global_1610705[unk_0xE0BDAFA1A39552D6() /*178*/].f_10.f_51 = func_481();
	}
	func_837();
}

void func_837()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1330244.f_527[iVar0 /*47*/].f_1 = func_55();
		Global_1330244.f_527[iVar0 /*47*/].f_9 = 0;
		iVar0++;
	}
}

int func_838(int iParam0, bool bParam1)
{
	return func_272(unk_0xE0BDAFA1A39552D6(), iParam0, bParam1);
}

void func_839()
{
	func_824(33);
	func_824(34);
	func_824(35);
	func_824(36);
	func_824(37);
	func_824(38);
	func_824(39);
	func_824(40);
	func_824(43);
	func_824(41);
	func_824(42);
	func_824(47);
}

void func_840()
{
	struct<14> Var0;
	
	Global_1734817 = { Var0 };
	Global_1734817.f_14 = 0;
	Global_1734817.f_15 = 0;
}

void func_841()
{
	int iVar0;
	
	unk_0x3ECE0E645B1530B3("relDefendPlayer", &iLocal_724);
	unk_0x3ECE0E645B1530B3("relDefendAI", &iLocal_725);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		unk_0x054CBFE90FAA6840(1, Global_1574218[iVar0], iLocal_724);
		unk_0x054CBFE90FAA6840(1, iLocal_724, Global_1574218[iVar0]);
		unk_0x054CBFE90FAA6840(1, Global_1574218[iVar0], iLocal_725);
		unk_0x054CBFE90FAA6840(1, iLocal_725, Global_1574218[iVar0]);
		unk_0x054CBFE90FAA6840(1, iLocal_724, joaat("COP"));
		unk_0x054CBFE90FAA6840(1, joaat("COP"), iLocal_724);
		unk_0x054CBFE90FAA6840(1, iLocal_724, Global_1574260[5]);
		unk_0x054CBFE90FAA6840(1, Global_1574260[5], iLocal_724);
		unk_0x054CBFE90FAA6840(1, iLocal_724, Global_1574251);
		unk_0x054CBFE90FAA6840(1, Global_1574251, iLocal_724);
		iVar0++;
	}
	unk_0x054CBFE90FAA6840(5, iLocal_724, iLocal_725);
	unk_0x054CBFE90FAA6840(5, iLocal_725, iLocal_724);
	unk_0x054CBFE90FAA6840(1, 2017343592, iLocal_725);
	unk_0x054CBFE90FAA6840(5, 2017343592, iLocal_724);
	func_843(1, &iLocal_725);
	func_842(&iLocal_725);
	func_842(&iLocal_724);
}

void func_842(int iParam0)
{
	unk_0x054CBFE90FAA6840(1, -1865950624, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, -1865950624);
	unk_0x054CBFE90FAA6840(1, 296331235, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, 296331235);
	unk_0x054CBFE90FAA6840(1, 1166638144, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, 1166638144);
	unk_0x054CBFE90FAA6840(1, 2037579709, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, 2037579709);
	unk_0x054CBFE90FAA6840(1, 2017343592, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, 2017343592);
	unk_0x054CBFE90FAA6840(1, -1821475077, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, -1821475077);
	unk_0x054CBFE90FAA6840(1, 1782292358, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, 1782292358);
	unk_0x054CBFE90FAA6840(1, -1033021910, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, -1033021910);
	unk_0x054CBFE90FAA6840(1, -1285976420, *iParam0);
	unk_0x054CBFE90FAA6840(1, *iParam0, -1285976420);
}

void func_843(int iParam0, int iParam1)
{
	unk_0x054CBFE90FAA6840(iParam0, joaat("COP"), *iParam1);
	unk_0x054CBFE90FAA6840(iParam0, *iParam1, joaat("COP"));
	unk_0x054CBFE90FAA6840(iParam0, joaat("army"), *iParam1);
	unk_0x054CBFE90FAA6840(iParam0, *iParam1, joaat("army"));
	unk_0x054CBFE90FAA6840(iParam0, -183807561, *iParam1);
	unk_0x054CBFE90FAA6840(iParam0, *iParam1, -183807561);
}

int func_844()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x17CC0D5008835470())
		{
			return 0;
		}
		if (unk_0x9D9BDEBCB8E7ADC5())
		{
			return 1;
		}
		if (func_805())
		{
			return 0;
		}
		if (func_803(155))
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

int func_845(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xD225119541DF4E45();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_811();
			}
			else
			{
				return 0;
			}
		}
		if (!func_771())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x17CC0D5008835470())
				{
					if (!bParam2)
					{
						func_811();
					}
					else
					{
						return 0;
					}
				}
				if (func_805())
				{
					if (!bParam2)
					{
						func_811();
					}
					else
					{
						return 0;
					}
				}
				if (func_803(155))
				{
					if (!bParam2)
					{
						func_811();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xE5302F426D0500D6())
			{
				if (!bParam2)
				{
					func_811();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xD225119541DF4E45();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x17CC0D5008835470())
		{
			if (!bParam2)
			{
				func_811();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xE5302F426D0500D6())
	{
		if (!bParam2)
		{
			func_811();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_846(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x17CC0D5008835470())
	{
		func_811();
	}
	unk_0xEC43D0BC14815F9E(uParam0, 0, Param1.f_16);
}

int func_847(int iParam0)
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
		
		case 73:
			return 32;
		
		case 74:
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
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 80:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("mpsv_lp0_31"):
			return 32;
		
		case 83:
			return 32;
		
		case 84:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 2;
		
		case 96:
			return 1;
		
		case 92:
			return 2;
		
		case 93:
			return 4;
		
		case 94:
			return 2;
		
		case 95:
			return 2;
		
		case 77:
			return 1;
		
		case 97:
			return 2;
		
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
			return 0;
		
		case 105:
			return 1;
		
		case 104:
			return 4;
		
		default:
	}
	return 0;
}

int func_848(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0xA27C9E8196C79D22(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x7868479D9B6694C0(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2428549.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

