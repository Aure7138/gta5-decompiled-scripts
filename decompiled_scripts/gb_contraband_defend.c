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
	var uLocal_57 = 10;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 2;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 8;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 8;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	float fLocal_90 = 0f;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	float fLocal_93 = 0f;
	float fLocal_94 = 0f;
	float fLocal_95 = 0f;
	float fLocal_96 = 0f;
	float fLocal_97 = 0f;
	var uLocal_98 = 0;
	struct<270> Local_99 = { 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, -1, -1, -1, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	struct<11> Local_369[32];
	int iLocal_722 = 0;
	int iLocal_723 = 0;
	int iLocal_724 = 0;
	int iLocal_725 = 0;
	int iLocal_726 = 0;
	int iLocal_727 = 0;
	int iLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	int iLocal_731 = 0;
	int iLocal_732 = 0;
	int iLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	struct<8> Local_741[10];
	var uLocal_822[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	int iLocal_836 = 0;
	var uLocal_837 = 0;
	int iLocal_838 = 0;
	char* sLocal_839 = NULL;
	var uLocal_840 = 16;
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
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	int iLocal_1005 = 0;
	int iLocal_1006 = 0;
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
	fLocal_90 = ((0.05f + 0.275f) - 0.01f);
	fLocal_93 = -0.05f;
	fLocal_94 = 0.92f;
	fLocal_95 = 1.94f;
	fLocal_96 = 2.99f;
	fLocal_97 = 3.7f;
	iLocal_725 = -2;
	iLocal_726 = -1;
	sLocal_839 = "";
	if (unk_0xA86CA03D9749EEB3() && func_1122(unk_0x0C1D3C552325765B(), 0, 1))
	{
		func_1107(ScriptParam_0);
	}
	else
	{
		func_1062();
	}
	while (true)
	{
		func_1061();
		if (func_1053())
		{
			func_1062();
		}
		Global_1750569.f_2 = Local_99.f_267;
		Global_1750569.f_3 = Local_99.f_268;
		switch (func_1052(unk_0x848AF823A8EA3C62()))
		{
			case 0:
				if (unk_0xDD9B91529459212C("ALARM_BELL_02", 0, -1))
				{
					if (func_1051() == 1)
					{
						if (func_1050())
						{
							func_1049();
							if (func_1048())
							{
								func_1032(169, 1, func_1046(), 1);
								func_1031();
								func_1029();
							}
							else
							{
								func_1032(169, 0, func_1046(), 1);
							}
							Local_369[unk_0x848AF823A8EA3C62() /*11*/] = 1;
						}
					}
					else if (func_1051() == 4)
					{
						Local_369[unk_0x848AF823A8EA3C62() /*11*/] = 3;
					}
				}
				break;
			
			case 1:
				if (func_1026())
				{
					Local_369[unk_0x848AF823A8EA3C62() /*11*/] = 2;
				}
				if (func_1051() == 1)
				{
					func_1018();
					func_777();
					func_381();
					func_372();
					if (!func_371())
					{
						if (func_1048() || func_369())
						{
							func_226(&(Global_1332731.f_527), &Global_1332731, 24, &(Global_1332731.f_1), &(Global_1332731.f_110), -1, 0);
						}
					}
					else
					{
						func_221();
					}
					func_170();
					func_169();
				}
				else if (func_1051() == 4)
				{
					Local_369[unk_0x848AF823A8EA3C62() /*11*/] = 3;
				}
				func_163();
				break;
			
			case 3:
				func_162(&(Local_99.f_224));
				if (func_161(&(Local_99.f_224)))
				{
					Local_369[unk_0x848AF823A8EA3C62() /*11*/] = 4;
				}
				break;
			
			case 2:
				Local_369[unk_0x848AF823A8EA3C62() /*11*/] = 4;
			
			case 4:
				func_1062();
				break;
		}
		if (unk_0xD9E8CA806A80203D())
		{
			switch (func_1051())
			{
				case 0:
					if (func_1046() > -1)
					{
						func_159();
						func_157();
						func_156();
						func_153();
						if (func_43())
						{
							unk_0xB21EB307350F5CA1(&(Local_99.f_267), &(Local_99.f_268));
							func_37();
							Local_99.f_0 = 1;
							Local_99.f_218 = unk_0x848AF823A8EA3C62();
							Local_99.f_219 = unk_0x0C1D3C552325765B();
							func_1032(169, 1, func_1046(), 1);
						}
					}
					break;
				
				case 1:
					func_29();
					func_153();
					func_22();
					func_4();
					if (func_2())
					{
						Local_99.f_0 = 4;
					}
					else if (func_1())
					{
						Local_99.f_0 = 4;
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
	if (Global_2482149.f_4698.f_17)
	{
		Global_2482149.f_4698.f_17 = 0;
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
	if (unk_0x08BA6DD398CA197C(Local_99.f_1, 2))
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
	switch (Local_99.f_214)
	{
		case 0:
			func_19();
			func_17();
			if (func_371())
			{
				func_15();
				func_5();
			}
			if (unk_0x08BA6DD398CA197C(Local_99.f_1, 1))
			{
				Local_99.f_214 = 2;
			}
			else if (unk_0x08BA6DD398CA197C(Local_99.f_1, 3))
			{
				Local_99.f_214 = 2;
			}
			else if (unk_0x08BA6DD398CA197C(Local_99.f_1, 4))
			{
				Local_99.f_214 = 2;
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
	
	if (Local_99.f_215 > -1)
	{
		return;
	}
	if (!func_12())
	{
		return;
	}
	if (!func_11(&(Local_99.f_228)))
	{
		if (unk_0x08BA6DD398CA197C(Local_99.f_1, 6))
		{
			if (unk_0x08BA6DD398CA197C(Local_99.f_1, 11))
			{
				if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 7))
				{
					func_10(&(Local_99.f_228), 0, 0);
				}
			}
		}
	}
	if (func_11(&(Local_99.f_228)))
	{
		if (Local_99.f_222 > 0)
		{
			if (unk_0x08BA6DD398CA197C(Local_99.f_1, 7))
			{
				func_9(&(Local_99.f_228));
				Local_99.f_222 = 255;
			}
			else
			{
				iVar0 = func_8();
				iVar1 = func_7();
				if (func_6(&(Local_99.f_228), iVar0, 0))
				{
					func_9(&(Local_99.f_228));
					Local_99.f_222 = (Local_99.f_222 - iVar1);
					if (Local_99.f_222 < 0)
					{
						Local_99.f_222 = 0;
					}
				}
			}
		}
		if (Local_99.f_222 <= 0)
		{
			if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 9))
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_1), 9);
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
	if (unk_0xA86CA03D9749EEB3() && !bParam2)
	{
		if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0xDF658EB6CA91DFBC(), *uParam0)) >= iParam1)
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
		if (unk_0xA86CA03D9749EEB3() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x4B50AAB32FBE0483();
			}
			else
			{
				*uParam0 = unk_0xB3FCCA0C64473451();
			}
		}
		else
		{
			*uParam0 = unk_0xDF658EB6CA91DFBC();
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
	
	if (unk_0x3CF373660FCFAFCE(Local_99.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_99.f_2[0 /*10*/].f_2))
		{
			iVar0 = unk_0x8FD32443A080784B(unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2), -1, 0);
			if (iVar0 != 0)
			{
				if (!unk_0xEB361B4BD195A4D3(iVar0))
				{
					if (!unk_0x54F0AEFB11EA090A(iVar0))
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
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		return !func_14(unk_0x15F0E6D5AC2852F1(uParam0));
	}
	return 0;
}

int func_14(int iParam0)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (unk_0x912AD5A10E7633F0(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x1F1B2B6E500380C5(iParam0, 0))
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
	if (!func_371())
	{
		return;
	}
	if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 6))
	{
		if (!func_11(&(Local_99.f_234)))
		{
			func_10(&(Local_99.f_234), 0, 0);
		}
		if (func_6(&(Local_99.f_234), func_16(), 0))
		{
			unk_0x88B0F0DC270164B7(&(Local_99.f_1), 6);
		}
	}
}

int func_16()
{
	return 60000;
}

void func_17()
{
	if (!func_371())
	{
		return;
	}
	if (!func_11(&(Local_99.f_238)))
	{
		func_10(&(Local_99.f_238), 0, 0);
	}
	else if (func_6(&(Local_99.f_238), func_18(), 0))
	{
		unk_0x88B0F0DC270164B7(&(Local_99.f_1), 15);
	}
}

int func_18()
{
	return 1800000;
}

void func_19()
{
	if (func_371())
	{
		return;
	}
	if (!func_11(&(Local_99.f_236)))
	{
		func_10(&(Local_99.f_236), 0, 0);
		return;
	}
	else if (!func_6(&(Local_99.f_236), func_21(), 0))
	{
		return;
	}
	if (!func_11(&(Local_99.f_226)))
	{
		func_10(&(Local_99.f_226), 0, 0);
	}
	else if (func_6(&(Local_99.f_226), func_20(), 0))
	{
		unk_0x88B0F0DC270164B7(&(Local_99.f_1), 3);
	}
}

int func_20()
{
	return Global_262145.f_14021;
}

int func_21()
{
	return Local_99.f_223;
}

void func_22()
{
	int iVar0;
	int iVar1;
	
	if (func_28())
	{
		return;
	}
	if (unk_0xD9E8CA806A80203D())
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			switch (Local_99.f_2[iVar1 /*10*/].f_9)
			{
				case 0:
					if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar1 /*10*/].f_1))
					{
						if (func_371())
						{
							Local_99.f_2[iVar1 /*10*/].f_9 = 8;
						}
						else
						{
							Local_99.f_2[iVar1 /*10*/].f_9 = 6;
						}
					}
					break;
				
				case 8:
					if (unk_0x08BA6DD398CA197C(Local_99.f_1, 6))
					{
						Local_99.f_2[iVar1 /*10*/].f_9 = 1;
					}
					else
					{
						func_25(iVar0, iVar1);
					}
					break;
				
				case 1:
					if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar1 /*10*/].f_1))
					{
						if (func_371())
						{
							func_25(iVar0, iVar1);
						}
					}
					break;
				
				case 2:
					break;
				
				case 3:
					if (func_371())
					{
						if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar1 /*10*/].f_1))
						{
							if (!func_24(Local_99.f_2[iVar1 /*10*/].f_1))
							{
								if (!unk_0x4745637EEB85132D(unk_0x564EAE6038A81C07(Local_99.f_2[iVar1 /*10*/].f_1)))
								{
									Local_99.f_2[iVar1 /*10*/].f_9 = 7;
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
	if (func_371())
	{
		if (iParam0 == 1)
		{
			if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*10*/].f_1))
			{
				if (!func_24(Local_99.f_2[iParam0 /*10*/].f_1))
				{
					if (unk_0x4745637EEB85132D(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*10*/].f_1)))
					{
						if (unk_0x3CF373660FCFAFCE(Local_99.f_2[0 /*10*/].f_1))
						{
							if (func_24(Local_99.f_2[0 /*10*/].f_1))
							{
								Local_99.f_2[iParam0 /*10*/].f_9 = 3;
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
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		return unk_0xEB361B4BD195A4D3(unk_0x564EAE6038A81C07(uParam0));
	}
	return 1;
}

void func_25(int iParam0, int iParam1)
{
	if (!func_24(Local_99.f_2[iParam1 /*10*/].f_1))
	{
		if (unk_0x4745637EEB85132D(unk_0x564EAE6038A81C07(Local_99.f_2[iParam1 /*10*/].f_1)))
		{
			if (unk_0x08BA6DD398CA197C(Local_99.f_205, iParam1))
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_204), iParam1);
				iParam0 = unk_0x564EAE6038A81C07(Local_99.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_99.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_99.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else if (unk_0x08BA6DD398CA197C(Local_99.f_206, iParam1))
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_204), iParam1);
				iParam0 = unk_0x564EAE6038A81C07(Local_99.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_99.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_99.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else if (unk_0x08BA6DD398CA197C(Local_99.f_207, iParam1))
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_204), iParam1);
				iParam0 = unk_0x564EAE6038A81C07(Local_99.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_99.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_99.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else if (func_26())
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_204), iParam1);
				iParam0 = unk_0x564EAE6038A81C07(Local_99.f_2[iParam1 /*10*/].f_1);
				if (func_27(&iParam0))
				{
					Local_99.f_2[iParam1 /*10*/].f_9 = 2;
				}
				else
				{
					Local_99.f_2[iParam1 /*10*/].f_9 = 7;
				}
			}
			else
			{
				func_23(iParam1);
			}
		}
		else if (Local_99.f_2[iParam1 /*10*/].f_9 != 7)
		{
			Local_99.f_2[iParam1 /*10*/].f_9 = 7;
		}
	}
}

int func_26()
{
	if (unk_0x3CF373660FCFAFCE(Local_99.f_2[0 /*10*/].f_1))
	{
		if (func_24(Local_99.f_2[0 /*10*/].f_1))
		{
			return 1;
		}
	}
	if (unk_0x3CF373660FCFAFCE(Local_99.f_2[1 /*10*/].f_1))
	{
		if (func_24(Local_99.f_2[1 /*10*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)
{
	if (unk_0x39FEE545B315414E(*iParam0, 0))
	{
		if (unk_0x8FD32443A080784B(unk_0x02056DA113641E74(*iParam0), -1, 0) == *iParam0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_28()
{
	return ((((((unk_0x08BA6DD398CA197C(Local_99.f_1, 1) || unk_0x08BA6DD398CA197C(Local_99.f_1, 3)) || unk_0x08BA6DD398CA197C(Local_99.f_1, 4)) || unk_0x08BA6DD398CA197C(Local_99.f_1, 5)) || unk_0x08BA6DD398CA197C(Local_99.f_1, 8)) || unk_0x08BA6DD398CA197C(Local_99.f_1, 9)) || unk_0x08BA6DD398CA197C(Local_99.f_1, 15));
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
	if (Local_99.f_0 != 4)
	{
		iLocal_724 = 0;
		while (iLocal_724 < unk_0xE5697AB254094B0D())
		{
			if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iLocal_724)))
			{
				iVar5 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iLocal_724));
				if (!func_34(iVar5, 0))
				{
					if (func_1122(iVar5, 1, 1))
					{
					}
					func_33(iLocal_724);
					func_32(iLocal_724);
					if (func_371())
					{
						if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 8))
						{
							if (unk_0x08BA6DD398CA197C(Local_369[iLocal_724 /*11*/].f_1, 9))
							{
								unk_0x88B0F0DC270164B7(&(Local_99.f_1), 8);
							}
						}
						if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 6))
						{
							if (unk_0x08BA6DD398CA197C(Local_369[iLocal_724 /*11*/].f_1, 7))
							{
								unk_0x88B0F0DC270164B7(&(Local_99.f_1), 6);
							}
						}
						if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 11))
						{
							if (unk_0x08BA6DD398CA197C(Local_369[iLocal_724 /*11*/].f_1, 10))
							{
								unk_0x88B0F0DC270164B7(&(Local_99.f_1), 11);
							}
						}
						if (!unk_0x08BA6DD398CA197C(Local_99.f_217, iLocal_724))
						{
							if (unk_0x08BA6DD398CA197C(Local_369[iLocal_724 /*11*/].f_1, 8))
							{
								unk_0x88B0F0DC270164B7(&(Local_99.f_217), iLocal_724);
							}
						}
						else if (!unk_0x08BA6DD398CA197C(Local_369[iLocal_724 /*11*/].f_1, 8))
						{
							unk_0x09C86C0C5CA26B1E(&(Local_99.f_217), iLocal_724);
						}
						if (iVar2 == -1)
						{
							if (unk_0x08BA6DD398CA197C(Local_369[iLocal_724 /*11*/].f_1, 3))
							{
								iVar2 = iLocal_724;
							}
						}
						if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 4))
						{
							if (unk_0x08BA6DD398CA197C(Local_369[iLocal_724 /*11*/].f_1, 2))
							{
								unk_0x88B0F0DC270164B7(&(Local_99.f_1), 4);
								Local_99.f_221 = Local_99.f_216;
							}
						}
						if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 17))
						{
							if (unk_0x08BA6DD398CA197C(Local_369[iLocal_724 /*11*/].f_1, 15))
							{
								unk_0x88B0F0DC270164B7(&(Local_99.f_1), 17);
							}
						}
						if (bVar4)
						{
							if (unk_0x08BA6DD398CA197C(Local_99.f_1, 4))
							{
								if (!unk_0x08BA6DD398CA197C(Local_369[iLocal_724 /*11*/].f_1, 14))
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
					else if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 13))
					{
						if (unk_0x08BA6DD398CA197C(Local_369[iLocal_724 /*11*/].f_1, 11))
						{
							unk_0x88B0F0DC270164B7(&(Local_99.f_1), 13);
						}
					}
					if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 2))
					{
						if (!bVar3)
						{
							if (func_28())
							{
								if (!unk_0x08BA6DD398CA197C(Local_369[iLocal_724 /*11*/].f_1, 4))
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
					if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 16))
					{
						if (unk_0x08BA6DD398CA197C(Local_369[iLocal_724 /*11*/].f_1, 13))
						{
							unk_0x88B0F0DC270164B7(&(Local_99.f_1), 16);
						}
					}
				}
			}
			else if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 5))
			{
				if (Local_99.f_218 > -1)
				{
					if (iLocal_724 == Local_99.f_218)
					{
						unk_0x88B0F0DC270164B7(&(Local_99.f_1), 5);
					}
				}
			}
			iLocal_724++;
		}
		func_31();
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (unk_0x08BA6DD398CA197C(Local_99.f_209, iVar1))
			{
				iVar0++;
			}
			iVar1++;
		}
		if (Local_99.f_213 != iVar0)
		{
			Local_99.f_213 = iVar0;
		}
		if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 1))
		{
			if (iVar0 >= func_30())
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_1), 1);
			}
		}
		if (func_371())
		{
			if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 7))
			{
				if (Local_99.f_217 != 0)
				{
					unk_0x88B0F0DC270164B7(&(Local_99.f_1), 7);
				}
			}
			else if (Local_99.f_217 == 0)
			{
				unk_0x09C86C0C5CA26B1E(&(Local_99.f_1), 7);
			}
			if (!func_28())
			{
				if (Local_99.f_215 != iVar2)
				{
					Local_99.f_215 = iVar2;
					if (Local_99.f_215 > -1)
					{
						uVar6 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(Local_99.f_215));
						Local_99.f_216 = uVar6;
					}
					else
					{
						Local_99.f_216 = -1;
					}
				}
			}
			if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 18))
			{
				if (bVar4)
				{
					unk_0x88B0F0DC270164B7(&(Local_99.f_1), 18);
				}
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 2))
		{
			if (!bVar3)
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_1), 2);
			}
		}
	}
}

int func_30()
{
	switch (Local_99.f_197)
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
	
	if (func_371())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*10*/].f_1))
		{
			if (!unk_0x08BA6DD398CA197C(Local_99.f_209, iVar0))
			{
				if (!func_11(&(Local_99.f_240[iVar0 /*2*/])))
				{
					if (func_24(Local_99.f_2[iVar0 /*10*/].f_1))
					{
						func_10(&(Local_99.f_240[iVar0 /*2*/]), 0, 0);
					}
				}
				else if (func_6(&(Local_99.f_240[iVar0 /*2*/]), 10000, 0))
				{
					unk_0x88B0F0DC270164B7(&(Local_99.f_209), iVar0);
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
		if (!unk_0x08BA6DD398CA197C(Local_99.f_205, iVar0))
		{
			if (unk_0x08BA6DD398CA197C(Local_369[iParam0 /*11*/].f_5, iVar0))
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_205), iVar0);
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_99.f_206, iVar0))
		{
			if (unk_0x08BA6DD398CA197C(Local_369[iParam0 /*11*/].f_2, iVar0))
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_206), iVar0);
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_99.f_208, iVar0))
		{
			if (unk_0x08BA6DD398CA197C(Local_369[iParam0 /*11*/].f_3, iVar0))
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_208), iVar0);
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_99.f_207, iVar0))
		{
			if (unk_0x08BA6DD398CA197C(Local_369[iParam0 /*11*/].f_4, iVar0))
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_207), iVar0);
			}
		}
		if (!unk_0x08BA6DD398CA197C(Local_99.f_209, iVar0))
		{
			if (unk_0x08BA6DD398CA197C(Local_369[iParam0 /*11*/].f_6, iVar0))
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_209), iVar0);
			}
			else if (unk_0x08BA6DD398CA197C(Local_369[iParam0 /*11*/].f_7, iVar0))
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_209), iVar0);
			}
			else if (unk_0x08BA6DD398CA197C(Local_369[iParam0 /*11*/].f_8, iVar0))
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_209), iVar0);
			}
		}
		iVar0++;
	}
}

void func_33(int iParam0)
{
	int iVar0;
	
	if (func_371())
	{
		return;
	}
	if (!unk_0x08BA6DD398CA197C(Local_99.f_210, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*10*/].f_2))
			{
				if (func_13(Local_99.f_2[iVar0 /*10*/].f_2))
				{
					unk_0x93456C539FCB41E2(unk_0x15F0E6D5AC2852F1(Local_99.f_2[iVar0 /*10*/].f_2), unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iParam0)), 1);
					unk_0x88B0F0DC270164B7(&(Local_99.f_210), iParam0);
				}
			}
			else
			{
				unk_0x88B0F0DC270164B7(&(Local_99.f_210), iParam0);
			}
			iVar0++;
		}
	}
}

bool func_34(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		bVar0 = func_35(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1588660[iParam0 /*532*/].f_201 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			bVar0 = unk_0x10B1B072E9514664(iParam0) == 8;
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
	if (Global_1315209[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312725[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_36()
{
	return Global_1312731;
}

void func_37()
{
	struct<3> Var0;
	
	Var0 = { func_40() };
	if (!func_39(Var0))
	{
		func_38(&(Local_99.f_269), Var0);
	}
}

void func_38(var uParam0, struct<3> Param1)
{
	if (!unk_0xAF4258F870009059(*uParam0))
	{
		*uParam0 = unk_0x868D0600FD5D3D9A(Param1 - Vector(25f, 25f, 25f), Param1 + Vector(25f, 25f, 25f), 1f, 0.25f, 1, 1);
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
	return func_41(Local_99.f_197 + 1);
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
	
	if (func_371())
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
			if (!unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar0 /*10*/].f_1))
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
	if (!unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*10*/].f_1))
	{
		if (unk_0x0C863D3ED919983C(1))
		{
			if (func_60(iVar0))
			{
				if (func_59(Local_99.f_2[iParam0 /*10*/].f_5, 0f, 0f, 0f, 0))
				{
					if (func_47(iParam0, &Var1, &uVar4))
					{
						Local_99.f_2[iParam0 /*10*/].f_5 = { Var1 };
						Local_99.f_2[iParam0 /*10*/].f_8 = uVar4;
					}
				}
				else if (func_46(&(Local_99.f_2[iParam0 /*10*/].f_1), 22, iVar0, Local_99.f_2[iParam0 /*10*/].f_5, Local_99.f_2[iParam0 /*10*/].f_8, 1, 1, 1))
				{
					unk_0xC5EFC3500CF4BE6F(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*10*/].f_1), 1);
					unk_0xFF5CE2ECB4FBD4A8(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*10*/].f_1), 1);
					unk_0x65889F26F311FC55(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*10*/].f_1), Global_1574276);
					unk_0xC517014488E2DF36(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*10*/].f_1), 1);
					if ((iParam0 % 2) == 0)
					{
						iVar6 = unk_0xC6FE0F623405BFA8(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*10*/].f_1));
						fVar7 = unk_0xBBDA792448DB5A89(iVar6);
						if (fVar5 != 0f)
						{
							fVar7 = (fVar7 * fVar5);
						}
						iVar6 = unk_0xF2DB717A73826179(fVar7);
						unk_0x63F91492C8440A2E(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*10*/].f_1), iVar6);
						unk_0xA082D4AC00BC651A(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*10*/].f_1), iVar6);
						unk_0x9C5803DED463887E(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*10*/].f_1), 100);
						unk_0x8942ADC0DB9F81E4(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*10*/].f_1), joaat("weapon_assaultrifle"), 9999999, 0, 1);
					}
					else
					{
						unk_0x8942ADC0DB9F81E4(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*10*/].f_1), joaat("weapon_assaultrifle"), 9999999, 0, 1);
					}
					unk_0x705E4255B39314A7(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*10*/].f_1), 281, 1);
					unk_0xECD905C06E682B6D(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*10*/].f_1), 1);
					unk_0x705E4255B39314A7(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*10*/].f_1), 42, 1);
					unk_0xA951969D2E242071(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*10*/].f_1), 1);
					unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*10*/].f_1), 43, 1);
					unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*10*/].f_1), 44, 1);
					unk_0x5D68D7AA6F7D4144(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*10*/].f_1), 1);
					if (func_45(iParam0))
					{
						unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*10*/].f_1), 0, 0);
					}
					unk_0x705E4255B39314A7(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*10*/].f_1), 146, 1);
					unk_0x728A92BBF4806518(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*10*/].f_1), Local_99.f_2[iParam0 /*10*/].f_5, 7f, 0, 0);
					unk_0x77637031DE326F70(unk_0x564EAE6038A81C07(Local_99.f_2[iParam0 /*10*/].f_1), 1);
					unk_0x88B0F0DC270164B7(&(Local_99.f_203), iParam0);
				}
			}
		}
	}
	return 0;
}

int func_45(int iParam0)
{
	switch (Local_99.f_197)
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
	
	if (!unk_0x0C863D3ED919983C(1))
	{
		return 0;
	}
	iVar0 = unk_0xF8418B3B87CFCCBF(iParam1, iParam2, Param3, uParam6, iParam8, bParam7);
	*uParam0 = unk_0x9ED2AEF3CEBC2436(iVar0);
	if (unk_0x0E091C9F3918F674(*uParam0))
	{
		unk_0xB16B53F6FE1ADDB6(iVar0, iParam9);
		if (unk_0x6B8DF4084A1CD2DC(iVar0))
		{
			if (bParam7)
			{
				unk_0x748B0DC6DACDF341(*uParam0, 1);
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
	if (!func_59(Local_99.f_103[iVar0 /*5*/], 0f, 0f, 0f, 0))
	{
		if (!Local_99.f_103[iVar0 /*5*/].f_4)
		{
			if (func_48(Local_99.f_103[iVar0 /*5*/], 1f, 1065353216, 1065353216, 1084227584, 0, 0, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
			{
				*uParam1 = { Local_99.f_103[iVar0 /*5*/] };
				*uParam2 = Local_99.f_103[iVar0 /*5*/].f_3;
				Local_99.f_103[iVar0 /*5*/].f_4 = 1;
				return 1;
			}
			else
			{
				if (unk_0x916C9DBA707424D8(Local_99.f_103[iVar0 /*5*/], 1f))
				{
					bVar1 = true;
				}
				else if (unk_0xD5723D169730DAAD(Local_99.f_103[iVar0 /*5*/], Local_99.f_103[iVar0 /*5*/].f_1, (Local_99.f_103[iVar0 /*5*/].f_2 + 1f), 1f) || unk_0xD5723D169730DAAD(Local_99.f_103[iVar0 /*5*/], 1f))
				{
					bVar1 = true;
				}
				if (bVar1)
				{
					if (!unk_0x08BA6DD398CA197C(Local_99.f_212, iVar0))
					{
						unk_0x0B17BC5D018E224B(Local_99.f_103[iVar0 /*5*/], 5f, 1, 0, 0, 1);
						unk_0x88B0F0DC270164B7(&(Local_99.f_212), iVar0);
					}
				}
			}
		}
	}
	return 0;
}

int func_48(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2404993.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (unk_0x916C9DBA707424D8(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (unk_0xD5723D169730DAAD(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || unk_0xD5723D169730DAAD(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (unk_0x82C3AA7E0F0CF1A1(Param0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
	if (bParam13)
	{
		if (unk_0xB4FB8C52530E7D65(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
	if (fParam14 > 0f)
	{
		if (func_52(Param0, fParam14, 1, 1, bParam15, bParam17, 0, bParam15))
		{
			return 0;
		}
	}
	Global_2404993.f_2++;
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
	Global_2404993.f_2++;
	return 1;
}

int func_49(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_1122(unk_0x0C1D3C552325765B(), 1, 1))
		{
			if (!unk_0x2C22E7D1C80A53EF())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (unk_0x999A157665D69393(func_51(unk_0x0C1D3C552325765B()), Param0, 1) <= (fVar2 + fParam3))
				{
					if (unk_0xE514F14357BDEECF(Param0, fParam3))
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
		if (func_1122(iVar1, 1, 1))
		{
			if (!func_34(iVar1, 0) && unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != unk_0x0C1D3C552325765B()))
				{
					if ((func_50(iVar1) || !bParam10) && !Global_2421327[iVar1 /*353*/].f_258)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!unk_0x10B1B072E9514664(iVar1) == -1)
							{
								if (unk_0x10B1B072E9514664(iVar1) == unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && unk_0x10B1B072E9514664(iVar1) != unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))) || unk_0x10B1B072E9514664(iVar1) == -1)
							{
								if (unk_0x999A157665D69393(func_51(iVar1), Param0, 1) <= (fVar2 + fParam3))
								{
									if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x10B1B072E9514664(iVar1) != iParam8 || unk_0x10B1B072E9514664(iVar1) == -1)
						{
							if (unk_0x999A157665D69393(func_51(iVar1), Param0, 1) <= (fVar2 + fParam3))
							{
								if (unk_0x1B882D0481F52988(iVar1, Param0, fParam3))
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
	if (unk_0x9125ADC25E13C689(unk_0x21F191D9AFF98B5E(iParam0)) || Global_2421327[iParam0 /*353*/].f_244)
	{
		return 1;
	}
	return 0;
}

Vector3 func_51(int iParam0)
{
	return unk_0xC59DF10B4FC39DF8(unk_0x21F191D9AFF98B5E(iParam0), 0);
}

int func_52(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && unk_0x0C1D3C552325765B() != iVar1) || iParam8 == 0)
		{
			if (func_1122(iVar1, bParam4, bParam5))
			{
				if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
				{
					if (!bParam7 || (!unk_0xEB361B4BD195A4D3(unk_0x21F191D9AFF98B5E(iVar1)) && func_50(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) != unk_0x10B1B072E9514664(iVar1))) || unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1)
						{
							if (((unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1 && uParam9) && bParam6) && func_53(iVar1))
							{
							}
							else if (unk_0xD3FACCDA4D66AEAD(unk_0x21F191D9AFF98B5E(iVar1)))
							{
								if (unk_0x999A157665D69393(func_51(iVar1), Param0, 1) < fParam3)
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
	if (func_58(unk_0x0C1D3C552325765B(), iParam0))
	{
		return 1;
	}
	Global_2471194 = { func_57(iParam0) };
	if (unk_0x74A87F4BE7FE0199(&Global_2471194))
	{
		return 1;
	}
	if (func_54(unk_0x0C1D3C552325765B(), iParam0))
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
		return Global_1614576[iParam0 /*324*/].f_10;
	}
	return func_55();
}

struct<13> func_57(int iParam0)
{
	struct<13> Var0;
	
	unk_0xCA4A074601307AB8(iParam0, &Var0, 13);
	return Var0;
}

int func_58(int iParam0, int iParam1)
{
	if (unk_0x46E4D0D0168391A1())
	{
		Global_2471194 = { func_57(iParam0) };
		Global_2471207 = { func_57(iParam1) };
		if (unk_0xC1B41A655437AD93(&Global_2471194))
		{
			if (unk_0xC1B41A655437AD93(&Global_2471207))
			{
				unk_0x0ADE2D0C6811DC70(&Global_2471124, 35, &Global_2471194);
				unk_0x0ADE2D0C6811DC70(&Global_2471159, 35, &Global_2471207);
				if (Global_2471124 == Global_2471159)
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
	unk_0x491067A8E906F22D(iParam0);
	return unk_0x2C1B5A0D3E233FC3(iParam0);
}

float func_61()
{
	return 2f;
}

int func_62()
{
	int iVar0;
	
	switch (Local_99.f_195)
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
	if (!unk_0x3CF373660FCFAFCE(Local_99.f_2[0 /*10*/].f_2))
	{
		return 0;
	}
	if (!unk_0x3CF373660FCFAFCE(Local_99.f_2[0 /*10*/].f_1))
	{
		return 0;
	}
	if (!unk_0x3CF373660FCFAFCE(Local_99.f_2[1 /*10*/].f_1))
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
	
	iVar0 = func_152();
	iVar1 = func_62();
	if (!unk_0x3CF373660FCFAFCE(Local_99.f_2[0 /*10*/].f_2))
	{
		if (unk_0xD28B39973EB5D6B4(1))
		{
			if (func_60(iVar0))
			{
				if (!func_59(Local_99.f_262, 0f, 0f, 0f, 0))
				{
					Var2 = { Local_99.f_262 };
					uVar5 = Local_99.f_265;
					if (!unk_0x08BA6DD398CA197C(Local_99.f_211, 0))
					{
						unk_0x0B17BC5D018E224B(Var2, 5f, 1, 0, 0, 1);
						unk_0x88B0F0DC270164B7(&(Local_99.f_211), 0);
					}
					if (func_151(&(Local_99.f_2[0 /*10*/].f_2), iVar0, Var2, uVar5, 1, 1, 1, 0, 1, 1, 0))
					{
						unk_0xE211B8943BE9EFEB(unk_0x564EAE6038A81C07(Local_99.f_2[0 /*10*/].f_2), 1);
						func_150(unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2));
						unk_0x0DD72E0CB1FCF511(unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2), 0);
						unk_0x483A8C64905D06CC(unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2), 0, 0);
						unk_0x6783F2971949E5C2(unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2), 1);
						unk_0x39C4DA429D9174C5(unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2), 0);
						unk_0x30AACBA8A7A124E3(unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2), 1);
						unk_0x7F045BD20ABA1109(unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2), 0.08f);
						unk_0xA082D4AC00BC651A(unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2), Global_262145.f_12965);
						unk_0x97F99A3B6E025DD2(unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2), 1);
						unk_0xC00E0AC91B7F5055(unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2), 1);
						unk_0x1B640269845E999D(unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2), 1);
						unk_0x94CCC7D0DD96996A(unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2), 2, 2);
						unk_0x94CCC7D0DD96996A(unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2), 3, 2);
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
					Var30 = { func_148(Local_99.f_2[0 /*10*/].f_5, Local_99.f_2[0 /*10*/].f_8, 20f) };
					if (func_66(Local_99.f_2[0 /*10*/].f_5, Var30, iVar0, 0, &(Local_99.f_262), &(Local_99.f_2[0 /*10*/].f_8), &Var6))
					{
						Local_99.f_265 = Local_99.f_2[0 /*10*/].f_8;
					}
				}
			}
		}
	}
	if (unk_0x3CF373660FCFAFCE(Local_99.f_2[0 /*10*/].f_2))
	{
		if (!unk_0x3CF373660FCFAFCE(Local_99.f_2[0 /*10*/].f_1))
		{
			if (unk_0x0C863D3ED919983C(1))
			{
				if (func_60(iVar1))
				{
					if (func_65(&(Local_99.f_2[0 /*10*/].f_1), Local_99.f_2[0 /*10*/].f_2, 22, iVar1, -1, 1, 1, 1))
					{
						unk_0xC5EFC3500CF4BE6F(unk_0x564EAE6038A81C07(Local_99.f_2[0 /*10*/].f_1), 1);
						unk_0xB1EC0D434D45E629(unk_0x564EAE6038A81C07(Local_99.f_2[0 /*10*/].f_1), 1, 0);
						unk_0xFF5CE2ECB4FBD4A8(unk_0x564EAE6038A81C07(Local_99.f_2[0 /*10*/].f_1), 1);
						unk_0x65889F26F311FC55(unk_0x564EAE6038A81C07(Local_99.f_2[0 /*10*/].f_1), Global_1574276);
						unk_0x705E4255B39314A7(unk_0x564EAE6038A81C07(Local_99.f_2[0 /*10*/].f_1), 42, 1);
						unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_2[0 /*10*/].f_1), 3, 0);
						unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_2[0 /*10*/].f_1), 2, 1);
					}
				}
			}
		}
	}
	if (unk_0x3CF373660FCFAFCE(Local_99.f_2[0 /*10*/].f_1))
	{
		if (!unk_0x3CF373660FCFAFCE(Local_99.f_2[1 /*10*/].f_1))
		{
			if (unk_0x0C863D3ED919983C(1))
			{
				if (func_60(iVar1))
				{
					if (func_65(&(Local_99.f_2[1 /*10*/].f_1), Local_99.f_2[0 /*10*/].f_2, 22, iVar1, 0, 1, 1, 1))
					{
						unk_0xC5EFC3500CF4BE6F(unk_0x564EAE6038A81C07(Local_99.f_2[1 /*10*/].f_1), 1);
						unk_0xB1EC0D434D45E629(unk_0x564EAE6038A81C07(Local_99.f_2[1 /*10*/].f_1), 1, 0);
						unk_0xFF5CE2ECB4FBD4A8(unk_0x564EAE6038A81C07(Local_99.f_2[1 /*10*/].f_1), 1);
						unk_0x65889F26F311FC55(unk_0x564EAE6038A81C07(Local_99.f_2[1 /*10*/].f_1), Global_1574276);
						unk_0x705E4255B39314A7(unk_0x564EAE6038A81C07(Local_99.f_2[1 /*10*/].f_1), 42, 1);
						unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_2[1 /*10*/].f_1), 3, 0);
						unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_2[1 /*10*/].f_1), 2, 1);
						unk_0x87BBAE0EE5DD7680(unk_0x564EAE6038A81C07(Local_99.f_2[1 /*10*/].f_1), 5, 1);
						unk_0x8942ADC0DB9F81E4(unk_0x564EAE6038A81C07(Local_99.f_2[1 /*10*/].f_1), joaat("weapon_microsmg"), 9999999, 0, 1);
						Local_99.f_2[1 /*10*/].f_2 = Local_99.f_2[0 /*10*/].f_2;
					}
				}
			}
		}
	}
	return 0;
}

int func_65(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0x0C863D3ED919983C(1))
	{
		return 0;
	}
	if (!unk_0x0E091C9F3918F674(uParam1))
	{
		return 0;
	}
	if (!unk_0x1F1B2B6E500380C5(unk_0x15F0E6D5AC2852F1(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x9ED2AEF3CEBC2436(unk_0x667A2CFA1914073C(unk_0x15F0E6D5AC2852F1(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0x0E091C9F3918F674(*uParam0))
	{
		unk_0xB16B53F6FE1ADDB6(unk_0x564EAE6038A81C07(*uParam0), iParam7);
		if (unk_0x6B8DF4084A1CD2DC(unk_0x564EAE6038A81C07(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x748B0DC6DACDF341(*uParam0, 1);
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
	if (unk_0xC740F8182E7E9681())
	{
		if (!unk_0x3FC82179CAE1D56D() > 7 && !unk_0x3FC82179CAE1D56D() == 5)
		{
			return 0;
		}
	}
	if (Global_2404993.f_495)
	{
		Global_2404993.f_495 = 0;
		return 0;
	}
	if (!func_147(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (!Global_2404993.f_569 == 0 && unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_574) < func_146(0))
	{
		if (!Global_2404993.f_621 == 0)
		{
			Global_2404993.f_621 = 0;
			func_145();
			func_144();
		}
		return 0;
	}
	if (!unk_0xEAE20F1125B83888() == Global_2404993.f_620)
	{
		if (!Global_2404993.f_621 == 0)
		{
			if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_624) < func_146(0))
			{
				return 0;
			}
			else
			{
				Global_2404993.f_621 = 0;
			}
		}
	}
	else
	{
		if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_622) > 30000)
		{
			Global_2404993.f_621 = 0;
		}
		if (!Global_2404993.f_621 == 0)
		{
			if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_624) > func_146(1))
			{
				Global_2404993.f_621 = 0;
			}
		}
	}
	if (uParam10->f_5)
	{
		if (func_138(Param0))
		{
			if (func_137(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2404993.f_621 == 0)
	{
		if (unk_0x2A488C176D52CCA5(Global_2404993.f_633, Param0) > 50f)
		{
			return 0;
		}
	}
	unk_0x33E1C85069157293((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2404993.f_621 == 0)
	{
		Global_2404993.f_627 = 0;
		Global_2404993.f_622 = unk_0xB3FCCA0C64473451();
		Global_2404993.f_620 = unk_0xEAE20F1125B83888();
		Global_2404993.f_624 = unk_0xB3FCCA0C64473451();
		Global_2404993.f_633 = { Param0 };
		Global_2404993.f_626 = unk_0xB3FCCA0C64473451();
		Global_2404993.f_621 = 2;
		func_136();
		func_145();
		func_127(Param0, iParam6);
	}
	switch (Global_2404993.f_621)
	{
		case 2:
			if (unk_0x34302C240EA1F13B((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2404993.f_628 = { Param0 };
				Global_2404993.f_631 = 0f;
				if (((uParam10->f_2 && func_48(Param0, 4f, 1f, 1f, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam10->f_6) && !func_124(Param0, *uParam9, iParam6, unk_0x0C1D3C552325765B(), 0))
				{
					Global_2404993.f_628 = { Param0 };
					Global_2404993.f_631 = *uParam9;
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
					func_78(&(Global_2404993.f_628), &(Global_2404993.f_631), &Var2);
				}
				func_76(Global_2404993.f_628, Global_2404993.f_631, iParam6);
				Global_2404993.f_618 = 0;
				Global_2404993.f_619 = 0;
				Global_2404993.f_627++;
				Global_2404993.f_623 = unk_0xB3FCCA0C64473451();
				Global_2404993.f_622 = unk_0xB3FCCA0C64473451();
				Global_2404993.f_621 = 3;
			}
			break;
		
		case 3:
			if (Global_2404993.f_618)
			{
				if (Global_2404993.f_619)
				{
					if (uParam10->f_10 && !uParam10->f_9)
					{
						func_75(Global_2404993.f_628, 2f);
						Global_2404993.f_621 = 4;
						Global_2404993.f_625 = unk_0xB3FCCA0C64473451();
					}
					else
					{
						bVar0 = true;
					}
				}
				else
				{
					func_74(Global_2404993.f_628, 0);
					func_73(-1);
				}
			}
			else if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_623) > 3000)
			{
				func_73(-1);
			}
			break;
		
		case 4:
			if (uParam10->f_10 && !uParam10->f_9)
			{
				if (unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_625) < 10000)
				{
					if (unk_0xD4F93C8B74AF0B32(Global_2404993.f_632))
					{
						if (unk_0xB78A2BE8140860EB(Global_2404993.f_632))
						{
							if (!unk_0x670DD68CBB8CD4D0(Global_2404993.f_632))
							{
								if (func_72(Global_2404993.f_628, Global_2404993.f_631, iParam6, unk_0x0C1D3C552325765B(), 0) || func_67(Global_2404993.f_628, Global_2404993.f_631, iParam6, 1, 0, 0, 0, 1, 0))
								{
									func_74(Global_2404993.f_628, 0);
									func_73(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_74(Global_2404993.f_628, 0);
								func_73(-1);
							}
						}
					}
					else
					{
						func_73(-1);
					}
				}
				else
				{
					func_73(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2404993.f_628 = { Param0 };
			Global_2404993.f_631 = 0f;
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
			func_78(&(Global_2404993.f_628), &(Global_2404993.f_631), &Var59);
			Global_2404993.f_621 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2404993.f_633 = { Param0 };
	Global_2404993.f_624 = unk_0xB3FCCA0C64473451();
	if (bVar0)
	{
		*uParam8 = { Global_2404993.f_628 };
		*uParam9 = Global_2404993.f_631;
		Global_2404993.f_621 = 0;
		func_136();
		func_145();
		func_144();
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
		if ((iParam9 == 1 && unk_0x0C1D3C552325765B() != iVar1) || iParam9 == 0)
		{
			if (func_1122(iVar1, bParam5, bParam6))
			{
				if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iVar1))
				{
					if (!bParam8 || (!unk_0xEB361B4BD195A4D3(unk_0x21F191D9AFF98B5E(iVar1)) && func_50(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) != unk_0x10B1B072E9514664(iVar1))) || unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1)
						{
							if (((unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1 && iParam10) && bParam7) && func_53(iVar1))
							{
							}
							else if (unk_0xD3FACCDA4D66AEAD(unk_0x21F191D9AFF98B5E(iVar1)))
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
		fVar9 = unk_0x7466327978A6A24C((Var6.f_1 - Var3.f_1));
		fVar10 = unk_0x7466327978A6A24C((Var6.f_0 - Var3.f_0));
		fVar11 = unk_0x7466327978A6A24C((Var6.f_2 - Var3.f_2));
		Var12 = { Param3 + Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var12.f_2 = (Var12.f_2 - ((0.5f * fVar11) + fParam8));
		Var15 = { Param3 - Var0 * FtoV(((0.5f * fVar9) + fParam8)) };
		Var15.f_2 = (Var15.f_2 + ((0.5f * fVar11) + fParam8));
		if (unk_0xDFC5B758BDC9546F(Param0, Var12, Var15, fVar10, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_69(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (unk_0x81972CB541487AFD(iParam0))
	{
		unk_0xA27A0E75635DD922(iParam0, fParam1, fParam2);
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
			if (func_1122(iVar1, 0, 1) && func_1122(iParam5, 0, 1))
			{
				if (Global_2415586.f_260[iVar0])
				{
					if (func_68(Global_2415586.f_130[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_68(func_51(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2415586.f_260[iVar0])
			{
				if (func_68(Global_2415586.f_130[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_1122(iVar1, 0, 0))
			{
				if (unk_0xD3FACCDA4D66AEAD(unk_0x21F191D9AFF98B5E(iVar1)))
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

void func_73(int iParam0)
{
	if (Global_2404993.f_627 < 20 && unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), Global_2404993.f_626) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2404993.f_627 < iParam0))
		{
			Global_2404993.f_621 = 2;
		}
		else
		{
			Global_2404993.f_621 = 5;
		}
	}
	else
	{
		Global_2404993.f_621 = 5;
	}
}

void func_74(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	
	if (iParam3 < 10 && unk_0x652D2EEEF1D3E62C(Param0) > 0f)
	{
		Var0 = { Global_2404993.f_2255[iParam3 /*3*/] };
		Global_2404993.f_2255[iParam3 /*3*/] = { Param0 };
		func_74(Var0, iParam3 + 1);
	}
}

void func_75(struct<3> Param0, float fParam3)
{
	func_145();
	Global_2404993.f_632 = unk_0x821FC819559DD7F2(Param0 - Vector(fParam3, fParam3, fParam3), Param0 + Vector(fParam3, fParam3, fParam3));
}

void func_76(struct<3> Param0, var uParam3, int iParam4)
{
	struct<7> Var0;
	
	Var0.f_0 = 349;
	Var0.f_1 = unk_0x0C1D3C552325765B();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam3;
	Var0.f_6 = iParam4;
	unk_0x8E36889D76C8D4FA(1, &Var0, 7, func_77(1, 1));
}

var func_77(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0x81C85E54237F8A2E(iVar1);
		if (func_1122(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x0C1D3C552325765B() || iParam0)
			{
				if (bParam1)
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar1);
				}
				else if (!func_34(iVar2, 0))
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_78(var uParam0, var uParam1, var uParam2)
{
	if (Global_2404993.f_1683 > 0 && func_123(uParam0, uParam1, uParam2))
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
	Global_2411139.f_162 = 0;
	Global_2411139.f_163 = 0;
	Global_2411139.f_164 = -99;
	Global_2411139.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2411139[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2411139.f_121[iVar16] = 0f;
		iVar16++;
	}
	while (true)
	{
		iVar8 = unk_0xD2275328A6FD3845(*uParam0, iVar0, &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (unk_0xE25FC54E624B820E(iVar8))
		{
			unk_0x5D5210831D45D0A6(iVar8, &Var1);
			bVar12 = false;
			if (Global_2411139.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2411139.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !unk_0x722521C5827377D3(iVar8)) || unk_0xABEAA77F123D36FA(iVar8))
			{
				unk_0xC54D87D649D77D84(Var1, &uVar6, &uVar7);
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
													if (func_96(Var1, uParam2))
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
																	if ((uParam2->f_12 && !func_95(Var1, fVar4, uParam2->f_34, unk_0x0C1D3C552325765B(), 0, uParam2->f_56)) || !uParam2->f_12)
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
																									while (iVar16 < Global_2411139.f_162)
																									{
																										Global_2411139[iVar16 /*3*/] = { 0f, 0f, 0f };
																										Global_2411139.f_121[iVar16] = 0f;
																										iVar16++;
																									}
																									Global_2411139.f_162 = 0;
																									uParam2->f_53 = iVar22;
																								}
																							}
																							if (uParam2->f_30)
																							{
																								if (Global_2411139.f_162 == 0)
																								{
																									Global_2411139[0 /*3*/] = { Var1 };
																									Global_2411139.f_121[0] = fVar4;
																								}
																								else
																								{
																									iVar16 = 0;
																									while (iVar16 < Global_2411139.f_162 + 1)
																									{
																										if (iVar16 < 40)
																										{
																											if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411139[iVar16 /*3*/], uParam2->f_35))
																											{
																												func_86(Var1, fVar4, iVar16);
																												iVar16 = Global_2411139.f_162 + 1;
																											}
																										}
																										iVar16++;
																									}
																								}
																								Global_2411139.f_162++;
																								if (Global_2411139.f_162 >= 5)
																								{
																									if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2411139.f_162 == 40)
																									{
																										iVar0 = 100;
																									}
																								}
																							}
																							else
																							{
																								Global_2411139[Global_2411139.f_162 /*3*/] = { Var1 };
																								Global_2411139.f_121[Global_2411139.f_162] = fVar4;
																								Global_2411139.f_162++;
																								if (func_96(Var1, uParam2))
																								{
																									Global_2411139.f_163++;
																								}
																								if (Global_2411139.f_162 >= 10)
																								{
																									if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																									{
																										iVar0 = 100;
																									}
																									else if (Global_2411139.f_162 == 40)
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
				if (Global_2411139.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2411139[0 /*3*/] };
						*uParam1 = Global_2411139.f_121[0];
						return;
					}
					else
					{
						if (Global_2411139.f_163 > 0 && !Global_2411139.f_163 == Global_2411139.f_162)
						{
							func_84(0, uParam2);
						}
						iVar24 = unk_0xB5BF1B58C833F7A9(0, Global_2411139.f_162);
						Var25 = { Global_2411139[0 /*3*/] };
						uVar28 = Global_2411139.f_121[0];
						Global_2411139[0 /*3*/] = { Global_2411139[iVar24 /*3*/] };
						Global_2411139.f_121[0] = Global_2411139.f_121[iVar24];
						Global_2411139[iVar24 /*3*/] = { Var25 };
						Global_2411139.f_121[iVar24] = uVar28;
						*uParam0 = { Global_2411139[0 /*3*/] };
						*uParam1 = Global_2411139.f_121[0];
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
						iVar0 = unk_0xB5BF1B58C833F7A9((1 + iVar15), (40 + iVar15));
						unk_0xBE5432549D1D244B(*uParam0, iVar0, &Var1, &fVar4, &iVar9, iVar5, fVar13, fVar14);
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
		Global_2411139.f_164 = iVar8;
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
			if (!func_81(*(uParam0[iVar2 /*4*/]), 5f, unk_0x0C1D3C552325765B(), 0, 0))
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
			if (!Global_2415586.f_556[iVar0] == 0)
			{
				if (func_68(Param0, Global_2415586.f_426[iVar0 /*3*/], Global_2415586.f_523[iVar0], Global_2415586.f_556[iVar0], 1036831949))
				{
					if (func_1122(iVar1, 0, 1) && func_1122(iParam3, 0, 1))
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
				if (func_1122(iVar1, 0, 1) && func_1122(iParam4, 0, 1))
				{
					if (unk_0x10B1B072E9514664(iVar1) == unk_0x10B1B072E9514664(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_1122(iVar1, 0, 1) && func_1122(iParam4, 0, 1))
				{
					if (Global_2415586.f_260[iVar0])
					{
						if (unk_0x2A488C176D52CCA5(Global_2415586.f_130[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (unk_0x2A488C176D52CCA5(func_51(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2415586.f_260[iVar0])
				{
					if (unk_0x2A488C176D52CCA5(Global_2415586.f_130[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_1122(iVar1, 0, 1))
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

void func_84(int iParam0, var uParam1)
{
	if (!func_96(Global_2411139[iParam0 /*3*/], uParam1))
	{
		Global_2411139.f_162 = (Global_2411139.f_162 - 1);
		func_85(iParam0);
		if (Global_2411139.f_162 > Global_2411139.f_163)
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
			Global_2411139[iParam0 /*3*/] = { Global_2411139[iParam0 + 1 /*3*/] };
			Global_2411139.f_121[iParam0] = Global_2411139.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_86(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2411139[iParam4 /*3*/] };
	uVar3 = Global_2411139.f_121[iParam4];
	Global_2411139[iParam4 /*3*/] = { Param0 };
	Global_2411139.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2411139.f_162 && iParam4 < 39)
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
	if (func_1122(iParam0, 0, 1))
	{
		if (!func_93(iParam0))
		{
			if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iParam0))
			{
				if (!unk_0x10B1B072E9514664(iParam0) == unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()))
				{
					if (func_90(unk_0x0C1D3C552325765B(), 1))
					{
						if (!func_89(unk_0x10B1B072E9514664(iParam0), unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (unk_0x10B1B072E9514664(iParam0) == -1 && unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B()) == -1)
				{
					if (!func_90(unk_0x0C1D3C552325765B(), 1))
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
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 0);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 1);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 2);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 4);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 5);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 6);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 8);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 9);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 10);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 12);
				
				case 1:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 13);
				
				case 2:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 14);
				
				case 3:
					return unk_0x08BA6DD398CA197C(Global_1626500.f_41, 15);
				
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
	if (Global_1588660[iParam0 /*532*/] == -1)
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
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_13.f_1, 0);
}

int func_93(int iParam0)
{
	if (func_34(iParam0, 0))
	{
		return 1;
	}
	if (func_94())
	{
		if (iParam0 == unk_0x0C1D3C552325765B())
		{
			return 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_196, 2))
	{
		return 1;
	}
	return 0;
}

bool func_94()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 3);
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
				if (unk_0xDFC5B758BDC9546F(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, 0, 1))
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
	
	if (func_90(unk_0x0C1D3C552325765B(), 1))
	{
		if (Global_1626500.f_41581 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1626500.f_41581)
			{
				if (Global_1626500.f_41582[iVar0 /*59*/].f_7 != 0)
				{
					if (func_68(Param0, Global_1626500.f_41582[iVar0 /*59*/], Global_1626500.f_41582[iVar0 /*59*/].f_6, Global_1626500.f_41582[iVar0 /*59*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1626500.f_39362 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1626500.f_39362)
			{
				if (Global_1626500.f_39365[iVar0 /*90*/].f_16 != 0)
				{
					if (func_68(Param0, Global_1626500.f_39365[iVar0 /*90*/], Global_1626500.f_39365[iVar0 /*90*/].f_3, Global_1626500.f_39365[iVar0 /*90*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1626500.f_53608 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1626500.f_53608)
			{
				if (Global_1626500.f_53612[iVar0 /*128*/].f_12 != 0)
				{
					if (func_68(Param0, Global_1626500.f_53612[iVar0 /*128*/], Global_1626500.f_53612[iVar0 /*128*/].f_3, Global_1626500.f_53612[iVar0 /*128*/].f_12, 0.5f))
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
	unk_0xC54D87D649D77D84(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		unk_0x6FCAA52DD2D987DE(Param0, 1f, 1, &uVar5, &uVar8, &iVar11, &iVar12, &fVar13, iParam9);
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
	Var0 = { unk_0x8461D93FE2207D3A(Param0, *fParam3, fVar14, 0f, 0f) };
	if (bParam5)
	{
		if (unk_0xA19BA829D77A105A(Param0, *fParam3, &Var24))
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
	while (iVar0 < Global_2410853[iVar1])
	{
		if (func_105(Param0, &(Global_2410150[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2410853[8])
	{
		if (func_105(Param0, &(Global_2410150[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_105(struct<3> Param0, var uParam3)
{
	return unk_0xDFC5B758BDC9546F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
}

int func_106(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2410141[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2410141[1])
	{
		if (Param0.f_0 < Global_2410145[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2410141[2])
	{
		if (Param0.f_0 < Global_2410145[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2410145[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2410145[3])
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
			fVar4 = unk_0xF25F352E34274C58(0.01f, 360f);
			func_111(&Var1, Global_2404993.f_556, Global_2404993.f_559, 1036831949, 0, fVar4);
			if (func_108(Var1, &uVar0) || func_112(Var1))
			{
				Var1 = { *uParam0 };
				func_111(&Var1, Global_2404993.f_556, Global_2404993.f_559, 1036831949, 1, fVar4);
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
		if (Global_2404993.f_353[iVar0 /*12*/].f_9 == 1)
		{
			if (func_109(Param0, &(Global_2404993.f_353[iVar0 /*12*/]), 1008981770, 0, 0))
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
			return func_99(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2404993.f_2253) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_97(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return unk_0xDFC5B758BDC9546F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0);
			}
			else if (bParam5)
			{
				if (unk_0xDFC5B758BDC9546F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
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
				if (unk_0xDFC5B758BDC9546F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 0) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return unk_0xDFC5B758BDC9546F(Param0, *uParam3, uParam3->f_3, uParam3->f_6, 0, 1);
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
		if (Global_2404993.f_353[iVar0 /*12*/].f_9)
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
			func_70(&Var0, 0f, 0f, unk_0xF25F352E34274C58(0f, 360f));
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
	
	if (Global_2404993.f_559 > 0f)
	{
		fVar0 = unk_0x2A488C176D52CCA5(Param0, Global_2404993.f_556);
		if (fVar0 < Global_2404993.f_559)
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
	if (Global_2404993.f_26.f_16)
	{
		switch (Global_2404993.f_26.f_15)
		{
			case 0:
				if (func_99(*uParam0, Global_2404993.f_26.f_8, Global_2404993.f_26.f_14, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_97(*uParam0, Global_2404993.f_26.f_8, Global_2404993.f_26.f_11, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (unk_0xDFC5B758BDC9546F(*uParam0, Global_2404993.f_26.f_8, Global_2404993.f_26.f_11, Global_2404993.f_26.f_14, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_114(*uParam0, Global_2404993.f_26.f_8, Global_2404993.f_26.f_11, Global_2404993.f_26.f_14, Global_2404993.f_26.f_15, 1036831949, 0) };
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
		unk_0x3E1E1E768BE3A2F4(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
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
				if (!unk_0xDFC5B758BDC9546F(Var1, Param3, Param6, fParam9, 0, 1))
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
	fVar9 = (unk_0x652D2EEEF1D3E62C(Var3) * unk_0x0BADBFA3B172435F(unk_0x6985B73FFE117B5D(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
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
		fVar9 = (unk_0x652D2EEEF1D3E62C(Var29) * unk_0x0BADBFA3B172435F(unk_0x6985B73FFE117B5D(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
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
	
	if (func_138(Param0))
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
		if (unk_0x2A488C176D52CCA5(Param0, Global_2404993.f_2255[iVar0 /*3*/]) < fParam3)
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
			func_121(&Var2, &(Global_2404993.f_353[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_108(Var2, &uVar1) || func_112(Var2))
			{
				Var2 = { *uParam0 };
				func_121(&Var2, &(Global_2404993.f_353[iVar0 /*12*/]), 1036831949, 1, bParam2);
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
				*uParam0 = { func_114(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2404993.f_2253) * uParam1->f_8)), 0, fParam2, bParam3) };
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
				func_111(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2404993.f_2253) * uParam1->f_8)), fParam2, bParam3, 0);
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
		if (Global_2409165[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2409165[iVar0 /*17*/].f_16))
			{
				if (func_109(*uParam0, &(Global_2409165[iVar0 /*17*/]), 1008981770, 1, 0))
				{
					if (bParam1)
					{
						if (Global_2409165[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2409165[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_121(&Var1, &(Global_2409165[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_122(&Var1, 0, 0, 0))
							{
								Var1 = { *uParam0 };
								func_121(&Var1, &(Global_2409165[iVar0 /*17*/]), 1036831949, 1, 0);
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
	
	if (Global_2404993.f_1683 > 0)
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
		Global_2411139.f_162 = 0;
		Global_2411139.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2411139[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2411139.f_121[iVar5] = 0f;
			iVar5++;
		}
		iVar0 = 0;
		while (iVar0 < Global_2404993.f_1683)
		{
			Var1 = { Global_2404993.f_1684[iVar0 /*4*/] };
			fVar4 = Global_2404993.f_1684[iVar0 /*4*/].f_3;
			if (unk_0x652D2EEEF1D3E62C(Var1) > 0f)
			{
				if ((uParam2->f_5 > 0f && unk_0x2A488C176D52CCA5(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
				{
					if ((uParam2->f_12 && !func_95(Var1, fVar4, uParam2->f_34, unk_0x0C1D3C552325765B(), 0, uParam2->f_56)) || !uParam2->f_12)
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
													while (iVar5 < Global_2411139.f_162)
													{
														Global_2411139[iVar5 /*3*/] = { 0f, 0f, 0f };
														Global_2411139.f_121[iVar5] = 0f;
														iVar5++;
													}
													Global_2411139.f_162 = 0;
													uParam2->f_53 = iVar11;
												}
											}
											if (uParam2->f_30)
											{
												if (Global_2411139.f_162 == 0)
												{
													Global_2411139[0 /*3*/] = { Var1 };
													Global_2411139.f_121[0] = fVar4;
												}
												else
												{
													iVar5 = 0;
													while (iVar5 < Global_2411139.f_162 + 1)
													{
														if (iVar5 < 40)
														{
															if (unk_0xB7A628320EFF8E47(Var1, uParam2->f_35) < unk_0xB7A628320EFF8E47(Global_2411139[iVar5 /*3*/], uParam2->f_35))
															{
																func_86(Var1, fVar4, iVar5);
																iVar5 = Global_2411139.f_162 + 1;
															}
														}
														iVar5++;
													}
												}
												Global_2411139.f_162++;
												if (Global_2411139.f_162 >= 5)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404993.f_1683;
													}
													else if (Global_2411139.f_162 == 40)
													{
														iVar0 = Global_2404993.f_1683;
													}
												}
											}
											else
											{
												Global_2411139[Global_2411139.f_162 /*3*/] = { Var1 };
												Global_2411139.f_121[Global_2411139.f_162] = fVar4;
												Global_2411139.f_162++;
												if (Global_2411139.f_162 >= 10)
												{
													if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
													{
														iVar0 = Global_2404993.f_1683;
													}
													else if (Global_2411139.f_162 == 40)
													{
														iVar0 = Global_2404993.f_1683;
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
		if (Global_2411139.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2411139[0 /*3*/] };
				*uParam1 = Global_2411139.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2411139.f_163 > 0 && !Global_2411139.f_163 == Global_2411139.f_162)
				{
					func_84(0, uParam2);
				}
				iVar13 = unk_0xB5BF1B58C833F7A9(0, Global_2411139.f_162);
				Var14 = { Global_2411139[0 /*3*/] };
				uVar17 = Global_2411139.f_121[0];
				Global_2411139[0 /*3*/] = { Global_2411139[iVar13 /*3*/] };
				Global_2411139.f_121[0] = Global_2411139.f_121[iVar13];
				Global_2411139[iVar13 /*3*/] = { Var14 };
				Global_2411139.f_121[iVar13] = uVar17;
				*uParam0 = { Global_2411139[0 /*3*/] };
				*uParam1 = Global_2411139.f_121[0];
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
			if (func_126(Param0, iParam4, Global_2415586.f_426[iVar0 /*3*/], Global_2415586.f_556[iVar0]))
			{
				if (func_125(Param0, fParam3, iParam4, Global_2415586.f_426[iVar0 /*3*/], Global_2415586.f_523[iVar0], Global_2415586.f_556[iVar0], 0))
				{
					if (func_1122(iVar1, 0, 1) && func_1122(iParam5, 0, 1))
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
	fVar20 = unk_0x7466327978A6A24C((Var17.f_1 - Var14.f_1));
	fVar21 = unk_0x7466327978A6A24C((Var17.f_0 - Var14.f_0));
	fVar22 = unk_0x7466327978A6A24C((Var17.f_2 - Var14.f_2));
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

void func_127(struct<3> Param0, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	var uVar6[3];
	
	if (!func_135())
	{
		if (iParam3 == 0)
		{
		}
		iVar1 = func_134(Param0);
		if (iVar1 > -1)
		{
			func_144();
			switch (iVar1)
			{
				case 0:
					func_133(-1139.678f, -2694.165f, 12.949f, 283.4298f);
					func_133(-1137.455f, -2690.167f, 12.9448f, 283.0835f);
					func_133(-1135.02f, -2685.912f, 12.9412f, 283.8219f);
					func_133(-1099.898f, -2688.611f, 12.9473f, 295.3925f);
					func_133(-1110.51f, -2693.236f, 12.9595f, 298.84f);
					func_133(-1081.807f, -2690.015f, 12.7567f, 219.1729f);
					func_133(-1075.586f, -2697.09f, 12.7567f, 224.8977f);
					func_133(-1095.133f, -2659.995f, 12.7567f, 190.9326f);
					func_133(-1096.511f, -2649.483f, 12.6066f, 182.7913f);
					break;
				
				case 1:
					func_133(-1411.731f, -533.6462f, 30.2703f, 215.116f);
					func_133(-1416.407f, -527.0309f, 30.6453f, 215.2683f);
					func_133(-1432.146f, -580.9922f, 29.5263f, 118.3858f);
					func_133(-1438.8f, -584.4678f, 29.595f, 118.1207f);
					break;
				
				case 2:
					func_133(-780.5905f, 292.8159f, 84.673f, 97.2697f);
					func_133(-788.6147f, 291.8073f, 84.72f, 97.7348f);
					func_133(-765.572f, 294.4459f, 84.5182f, 93.9327f);
					func_133(-756.9962f, 294.8176f, 84.4061f, 93.9545f);
					break;
				
				case 3:
					func_133(-647.9388f, 40.9257f, 38.9494f, 356.4108f);
					func_133(-647.239f, 49.2068f, 40.7135f, 355.9723f);
					func_133(-620.1517f, 3.6633f, 40.5904f, 98.3813f);
					func_133(-610.5603f, 5.1258f, 41.2404f, 98.696f);
					break;
				
				case 4:
					func_133(-943.2437f, -487.8443f, 35.7504f, 208.6441f);
					func_133(-949.2938f, -476.3759f, 36.0878f, 208.1432f);
					func_133(-955.3208f, -465.3984f, 36.3328f, 206.9198f);
					func_133(-959.5925f, -457.0372f, 36.5226f, 207.7534f);
					break;
				
				case 5:
					func_133(-966.1365f, -401.5364f, 36.6824f, 27.6587f);
					func_133(-934.9108f, -413.4091f, 36.5161f, 118.0149f);
					func_133(-920.2501f, -405.6656f, 36.5869f, 117.2407f);
					func_133(-971.7031f, -390.5213f, 36.7118f, 26.8016f);
					break;
				
				case 6:
					func_133(-58.1347f, -573.486f, 36.5789f, 341.8442f);
					func_133(-64.227f, -590.2214f, 35.1654f, 338.972f);
					func_133(-67.0332f, -599.2827f, 35.1787f, 341.5854f);
					func_133(-71.8651f, -612.8891f, 35.1574f, 339.8537f);
					break;
				
				case 7:
					func_133(-232.1917f, -978.1431f, 28.166f, 160.2115f);
					func_133(-229.6225f, -970.9731f, 28.1636f, 160.2397f);
					func_133(-251.993f, -998.3963f, 28.3747f, 249.3297f);
					func_133(-262.222f, -994.5226f, 29.23f, 249.4673f);
					break;
				
				case 8:
					func_133(151.624f, -1309.343f, 28.2023f, 243.201f);
					func_133(152.7886f, -1305.608f, 28.2023f, 243.9973f);
					func_133(145.8017f, -1287.19f, 28.312f, 120.6275f);
					func_133(142.8935f, -1282.286f, 28.3156f, 120.3024f);
					break;
				
				case 9:
					func_133(-2333.575f, 272.6518f, 168.4671f, 23.0287f);
					func_133(-2322.187f, 277.638f, 168.4671f, 23.4249f);
					func_133(-2316.222f, 279.9105f, 168.4671f, 23.0175f);
					func_133(-2314.396f, 290.9f, 168.4671f, 114.3983f);
					func_133(-2316.81f, 296.424f, 168.4671f, 113.6228f);
					func_133(-2318.572f, 299.2423f, 168.4671f, 293.83f);
					func_133(-2327.902f, 291.6653f, 168.4671f, 294.1158f);
					func_133(-2330.711f, 274.0757f, 168.4671f, 205.2184f);
					func_133(-2345.082f, 277.3852f, 168.4671f, 113.4219f);
					func_133(-2347.777f, 282.6038f, 168.4671f, 292.7772f);
					func_133(-2339.33f, 293.4399f, 168.4671f, 114.2739f);
					func_133(-2352.681f, 294.4205f, 168.4671f, 115.5597f);
					break;
				
				case 10:
					func_132(78);
					break;
				
				case 11:
					func_132(79);
					break;
				
				case 12:
					func_132(82);
					break;
				
				case 13:
					func_132(81);
					break;
				
				case 14:
					func_132(73);
					break;
				
				case 15:
					func_133(382.9244f, 443.8122f, 142.9934f, 78.3408f);
					func_133(391.2023f, 442.4812f, 142.5089f, 82.2125f);
					func_133(400.1477f, 441.0816f, 142.0776f, 83.4259f);
					func_133(414.2964f, 439.2628f, 141.5056f, 80.8689f);
					break;
				
				case 16:
					func_132(75);
					break;
				
				case 17:
					func_132(76);
					break;
				
				case 18:
					func_132(77);
					break;
				
				case 19:
					func_133(-921.9734f, 704.0754f, 150.8142f, 96.5139f);
					func_133(-904.7881f, 708.9782f, 149.8261f, 108.2109f);
					func_133(-931.6637f, 703.693f, 151.369f, 87.7447f);
					func_133(-943.8763f, 704.2332f, 152.0993f, 87.6764f);
					break;
				
				case 20:
					func_132(80);
					break;
				
				case 21:
				case 25:
					func_132(87);
					break;
				
				case 22:
				case 26:
					func_132(88);
					break;
				
				case 23:
				case 27:
					func_132(89);
					break;
				
				case 24:
				case 28:
					func_132(90);
					break;
				
				case 29:
				case 30:
					if (func_131(iParam3))
					{
						func_132(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_11);
					}
					break;
			}
		}
		else if (func_130(Param0, 50f, &iVar2, &uVar6))
		{
			func_144();
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (!uVar6[iVar0] && func_129(iVar2[iVar0], -1))
				{
					if (func_131(iParam3))
					{
						func_132(iVar2[iVar0]);
					}
				}
				else if (uVar6[iVar0])
				{
					func_128(iVar2[iVar0]);
				}
				else
				{
					func_132(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_128(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			func_133(434.1898f, 6535.824f, 27.0084f, 66.9998f);
			func_133(434.9146f, 6539.661f, 26.9691f, 66.9998f);
			func_133(435.1928f, 6543.298f, 26.889f, 66.9998f);
			func_133(429.8495f, 6506.581f, 27.1807f, 59.7997f);
			func_133(429.8463f, 6511.11f, 27.0717f, 60.9997f);
			func_133(434.2748f, 6581.816f, 26.1303f, 85.1993f);
			func_133(443.1016f, 6580.717f, 26.0739f, 85.1993f);
			func_133(451.9748f, 6579.937f, 26.0319f, 85.1993f);
			break;
		
		case 26:
			func_133(-148.9694f, 6325.552f, 30.4564f, 224.1983f);
			func_133(-154.9585f, 6331.287f, 30.5809f, 225.7983f);
			func_133(-136.8806f, 6347.622f, 30.4906f, 43.9982f);
			func_133(-142.1459f, 6342.532f, 30.49f, 44.7982f);
			func_133(-136.6504f, 6357.062f, 30.4907f, 43.9982f);
			func_133(-151.1909f, 6358.461f, 30.4907f, 223.398f);
			func_133(-141.4154f, 6365.831f, 30.4907f, 43.3979f);
			func_133(-147.8279f, 6378.042f, 30.5012f, 312.7973f);
			break;
		
		case 24:
			func_133(60.7522f, 6465.807f, 30.3941f, 213.3973f);
			func_133(57.4131f, 6462.55f, 30.3663f, 213.3973f);
			func_133(48.0438f, 6452.668f, 30.3245f, 213.3973f);
			func_133(40.6765f, 6445.235f, 30.3475f, 213.3973f);
			func_133(37.8298f, 6442.521f, 30.3489f, 213.3973f);
			func_133(35.0212f, 6439.866f, 30.3332f, 213.3973f);
			func_133(32.1837f, 6437.21f, 30.2991f, 213.3973f);
			func_133(29.4732f, 6434.526f, 30.3702f, 213.3973f);
			break;
		
		case 25:
			func_133(-377.1927f, 6142.805f, 30.3409f, 315.3965f);
			func_133(-383.3481f, 6136.154f, 30.3752f, 315.3965f);
			func_133(-395.8286f, 6123.635f, 30.2987f, 46.3965f);
			func_133(-389.1636f, 6117.241f, 30.3641f, 46.3965f);
			func_133(-370.6174f, 6129.779f, 30.4414f, 45.7965f);
			func_133(-360.983f, 6130.575f, 30.4401f, 45.7965f);
			func_133(-416.8689f, 6103.411f, 30.3852f, 325.7964f);
			func_133(-420.9229f, 6095.657f, 30.3155f, 334.7964f);
			break;
		
		case 22:
			func_133(45.2181f, 6341.107f, 30.2296f, 14.3964f);
			func_133(41.6057f, 6339.476f, 30.2306f, 14.3964f);
			func_133(39.2508f, 6359.469f, 30.2398f, 207.3965f);
			func_133(36.3203f, 6356.893f, 30.2398f, 207.3965f);
			func_133(51.6043f, 6365.022f, 30.2399f, 33.5965f);
			func_133(65.6465f, 6380.626f, 30.2398f, 212.9964f);
			func_133(24.8587f, 6366.36f, 30.2286f, 32.7965f);
			func_133(19.6254f, 6360.736f, 30.2305f, 32.7965f);
			break;
		
		case 28:
			func_133(94.0245f, 181.2181f, 103.5566f, 160.3953f);
			func_133(91.0039f, 182.2811f, 103.6179f, 160.3953f);
			func_133(68.365f, 148.2105f, 103.5812f, 339.9951f);
			func_133(62.2104f, 150.5185f, 103.6101f, 339.9951f);
			func_133(69.5198f, 186.4278f, 103.9415f, 69.7949f);
			func_133(62.59f, 189.0833f, 103.9981f, 69.7949f);
			func_133(55.6095f, 191.8089f, 104.2827f, 69.7949f);
			func_133(154.7309f, 182.1333f, 104.6903f, 160.1945f);
			break;
		
		case 31:
			func_133(322.4916f, -714.5293f, 28.1574f, 158.5941f);
			func_133(329.5591f, -694.4284f, 28.1656f, 158.5941f);
			func_133(324.565f, -684.3934f, 28.3133f, 247.194f);
			func_133(326.4054f, -679.9403f, 28.3192f, 247.194f);
			func_133(297.1177f, -804.3891f, 28.4859f, 160.594f);
			func_133(288.5461f, -814.6994f, 28.1563f, 163.194f);
			func_133(286.0127f, -821.7357f, 28.3093f, 163.194f);
			func_133(283.6725f, -828.9533f, 28.1247f, 158.994f);
			break;
		
		case 29:
			func_133(-1448.551f, -355.0512f, 43.3715f, 313.3925f);
			func_133(-1454.819f, -359.998f, 42.7885f, 311.3925f);
			func_133(-1462.675f, -360.1352f, 42.9255f, 223.392f);
			func_133(-1447.965f, -368.3028f, 42.5412f, 5.9918f);
			func_133(-1468.678f, -353.4619f, 43.2024f, 217.7916f);
			func_133(-1473.219f, -346.7773f, 43.5318f, 213.9913f);
			func_133(-1490.742f, -420.1957f, 35.9291f, 229.1911f);
			func_133(-1496.003f, -395.7657f, 38.1394f, 45.7909f);
			break;
		
		case 30:
			func_133(-1174.491f, -1381.01f, 3.9253f, 116.5903f);
			func_133(-1183.148f, -1392.559f, 3.6319f, 304.9901f);
			func_133(-1160.964f, -1417.759f, 3.7043f, 65.7899f);
			func_133(-1151.611f, -1411.377f, 3.9411f, 63.5895f);
			func_133(-1167.187f, -1424.07f, 3.4884f, 123.5897f);
			func_133(-1148.22f, -1409.164f, 4.0217f, 63.5895f);
			func_133(-1137.11f, -1372.818f, 3.8993f, 27.5895f);
			func_133(-1140.608f, -1365.747f, 4.0573f, 27.5895f);
			break;
		
		case 27:
			func_133(1414.237f, -1656.344f, 60.2449f, 332.7893f);
			func_133(1416.668f, -1659.933f, 60.6982f, 332.7893f);
			func_133(1419.327f, -1663.972f, 61.2382f, 332.7893f);
			func_133(1421.557f, -1667.367f, 61.7479f, 332.7893f);
			func_133(1423.744f, -1670.853f, 62.3125f, 332.7893f);
			func_133(1412.157f, -1652.746f, 59.9105f, 332.7893f);
			func_133(1426.201f, -1673.598f, 62.7133f, 330.1893f);
			func_133(1435.804f, -1694.73f, 65.0743f, 352.5892f);
			break;
		
		case 33:
			func_133(2810.787f, 4435.92f, 47.5295f, 20.7996f);
			func_133(2808.413f, 4443.922f, 47.3732f, 14.7995f);
			func_133(2806.298f, 4451.786f, 47.1865f, 15.3995f);
			func_133(2803.925f, 4459.858f, 46.9823f, 15.3995f);
			func_133(2801.756f, 4467.755f, 46.8147f, 15.3995f);
			func_133(2893.563f, 4430.258f, 47.338f, 105.9994f);
			func_133(2903.725f, 4425.854f, 47.3523f, 23.1992f);
			func_133(2907.076f, 4418.059f, 47.6301f, 23.1992f);
			break;
		
		case 36:
			func_133(1680.448f, 4821.131f, 41.0599f, 186.399f);
			func_133(1679.76f, 4829.447f, 40.9167f, 186.399f);
			func_133(1678.668f, 4838.03f, 41.0221f, 187.7989f);
			func_133(1677.612f, 4846.028f, 41.0452f, 187.7989f);
			func_133(1675.851f, 4860.434f, 41.0901f, 187.7989f);
			func_133(1674.843f, 4868.343f, 41.0684f, 187.7989f);
			func_133(1673.543f, 4875.752f, 41.0684f, 186.7986f);
			func_133(1672.525f, 4884.972f, 41.0478f, 186.7986f);
			break;
		
		case 34:
			func_133(422.863f, 3583.901f, 32.2386f, 313.5986f);
			func_133(426.6211f, 3583.208f, 32.2386f, 313.5986f);
			func_133(430.466f, 3582.042f, 32.2386f, 313.5986f);
			func_133(434.2751f, 3580.881f, 32.2386f, 313.5986f);
			func_133(438.1525f, 3579.911f, 32.2386f, 313.5986f);
			func_133(442.0173f, 3578.948f, 32.2386f, 313.5986f);
			func_133(420.2694f, 3572.995f, 32.2385f, 353.7984f);
			func_133(424.4825f, 3572.1f, 32.2386f, 348.1984f);
			break;
		
		case 35:
			func_133(627.005f, 2726.019f, 40.7692f, 4.3984f);
			func_133(620.9771f, 2725.759f, 40.7897f, 4.3984f);
			func_133(614.8536f, 2725.355f, 40.8321f, 4.3984f);
			func_133(611.1158f, 2737.387f, 40.9734f, 185.3984f);
			func_133(598.9713f, 2736.261f, 41.0602f, 186.5986f);
			func_133(592.6151f, 2735.886f, 41.0602f, 186.5986f);
			func_133(586.0421f, 2735.9f, 41.0535f, 186.5986f);
			func_133(627.4468f, 2742.742f, 40.8963f, 183.5979f);
			break;
		
		case 32:
			func_133(214.3318f, 2492.26f, 53.9736f, 312.7978f);
			func_133(213.9953f, 2496.666f, 53.8128f, 312.7978f);
			func_133(213.7524f, 2501.251f, 53.5958f, 312.7978f);
			func_133(213.6645f, 2505.908f, 53.3477f, 312.7978f);
			func_133(213.4478f, 2510.734f, 53.1055f, 312.7978f);
			func_133(212.9148f, 2515.268f, 52.9376f, 312.7978f);
			func_133(211.5983f, 2519.216f, 52.6753f, 312.7978f);
			func_133(210.1288f, 2523.187f, 52.3493f, 312.7978f);
			break;
		
		case 38:
			func_133(153.6785f, -2476.192f, 4.9877f, 178.4004f);
			func_133(150.9209f, -2516.979f, 4.9909f, 179.9999f);
			func_133(150.9499f, -2524.965f, 4.9905f, 179.9999f);
			func_133(153.866f, -2467.242f, 4.9877f, 178.4004f);
			func_133(150.8115f, -2533.139f, 4.9895f, 180.0004f);
			func_133(153.8647f, -2433.386f, 5.2336f, 170.2002f);
			func_133(142.7427f, -2536.147f, 5f, 205.0002f);
			func_133(138.8267f, -2535.865f, 5f, 205.0002f);
			break;
		
		case 41:
			func_133(-341.4255f, -2734.451f, 5.0413f, 314.8f);
			func_133(-334.0134f, -2741.43f, 5.0269f, 314.8f);
			func_133(-329.7832f, -2745.604f, 5.0196f, 314.8f);
			func_133(-336.4781f, -2716.139f, 5.0028f, 134.1994f);
			func_133(-334.2752f, -2718.888f, 5.0048f, 135.1992f);
			func_133(-327.6603f, -2725.645f, 5.0103f, 135.1992f);
			func_133(-323.1619f, -2730.345f, 5.0099f, 135.1992f);
			func_133(-316.3481f, -2737.087f, 5.0033f, 135.1992f);
			break;
		
		case 39:
			func_133(1143.73f, -3105.091f, 4.8989f, 146.1979f);
			func_133(1140.009f, -3104.954f, 4.8985f, 146.1979f);
			func_133(1136.267f, -3104.69f, 4.8969f, 146.1979f);
			func_133(1132.732f, -3104.277f, 4.8944f, 146.1979f);
			func_133(1128.724f, -3104.54f, 4.896f, 146.1979f);
			func_133(1125.106f, -3104.057f, 4.8942f, 146.1979f);
			func_133(1117.8f, -3103.674f, 4.8922f, 146.1979f);
			func_133(1114.015f, -3103.448f, 4.8931f, 146.1979f);
			break;
		
		case 40:
			func_133(653.1188f, -2700.255f, 5.2101f, 24.7971f);
			func_133(656.1305f, -2707.245f, 5.214f, 24.7971f);
			func_133(659.3307f, -2714.378f, 5.2188f, 22.7968f);
			func_133(662.2627f, -2722.228f, 5.2188f, 19.1968f);
			func_133(649.2115f, -2728.359f, 5.1124f, 20.5967f);
			func_133(646.2606f, -2720.833f, 5.1103f, 21.3967f);
			func_133(643.4582f, -2713.846f, 5.1099f, 21.3967f);
			func_133(640.3513f, -2706.571f, 5.108f, 21.3967f);
			break;
		
		case 37:
			func_133(-260.5913f, -2615.255f, 5.0502f, 274.5953f);
			func_133(-253.2161f, -2614.896f, 5.0502f, 271.5953f);
			func_133(-245.6569f, -2614.862f, 5.0502f, 271.5953f);
			func_133(-238.214f, -2614.847f, 5.0502f, 271.5953f);
			func_133(-238.013f, -2630.961f, 5.0331f, 271.3949f);
			func_133(-260.9724f, -2631.418f, 5.0355f, 276.9951f);
			func_133(-253.401f, -2631.108f, 5.0319f, 272.195f);
			func_133(-245.5563f, -2631.06f, 5.0323f, 272.195f);
			break;
		
		default:
			break;
	}
}

int func_129(int iParam0, int iParam1)
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

int func_130(struct<2> Param0, var uParam2, float fParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar0 = 1;
	while (iVar0 <= 102)
	{
		if (iVar2 < *uParam4)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Global_1049287[iVar0 /*1908*/].f_3[iVar1 /*3*/], Global_1049287[iVar0 /*1908*/].f_3[iVar1 /*3*/].f_1, 0f) < fParam3)
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
	while (iVar0 < 57)
	{
		if (iVar2 < *uParam4)
		{
			if (unk_0x2A488C176D52CCA5(Param0.f_0, Param0.f_1, 0f, Global_1751948.f_20[iVar0 /*3*/], Global_1751948.f_20[iVar0 /*3*/].f_1, 0f) < fParam3)
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

int func_131(int iParam0)
{
	if ((unk_0xBFD32C1D4D54E09B(iParam0) || unk_0xA727EEDD175A1189(iParam0)) || unk_0xC388189407833D70(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_132(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_133(-602.6942f, 690.0488f, 148.1567f, 75.0245f);
			func_133(-612.8933f, 692.116f, 148.7577f, 79.1005f);
			func_133(-626.1633f, 694.6517f, 149.6835f, 75.1121f);
			func_133(-639.3558f, 696.9992f, 150.5134f, 77.481f);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_133(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_133(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_133(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_133(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 82:
			func_133(382.9244f, 443.8122f, 142.9934f, 78.3408f);
			func_133(391.2023f, 442.4812f, 142.5089f, 82.2125f);
			func_133(400.1477f, 441.0816f, 142.0776f, 83.4259f);
			func_133(414.2964f, 439.2628f, 141.5056f, 80.8689f);
			break;
		
		case 81:
			func_133(-1294.64f, 468.1975f, 96.4245f, 141.8551f);
			func_133(-1300.508f, 468.0167f, 96.8298f, 139.6287f);
			func_133(-1283.894f, 467.2136f, 95.4036f, 95.058f);
			func_133(-1273.584f, 454.4406f, 94.2269f, 30.8724f);
			break;
		
		case 73:
			func_133(-209.2598f, 509.0326f, 130.7979f, 97.2043f);
			func_133(-221.7214f, 507.2553f, 128.5651f, 92.2773f);
			func_133(-237.2848f, 506.8763f, 125.8112f, 85.9315f);
			func_133(-255.5678f, 507.9559f, 122.3364f, 85.1752f);
			break;
		
		case 75:
			func_133(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			func_133(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_133(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_133(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			break;
		
		case 76:
			func_133(-668.575f, 668.7567f, 149.4004f, 69.8844f);
			func_133(-671.5947f, 646.5754f, 148.3114f, 49.9935f);
			func_133(-759.3964f, 690.4262f, 143.0253f, 214.9099f);
			func_133(-763.4828f, 668.4921f, 142.8936f, 236.9954f);
			break;
		
		case 77:
			func_133(128.4334f, 578.7522f, 182.2934f, 106.5458f);
			func_133(97.7791f, 576.8907f, 181.5599f, 91.3539f);
			func_133(83.5896f, 576.4791f, 181.0832f, 89.7262f);
			func_133(69.9599f, 575.9902f, 180.5019f, 91.4926f);
			break;
		
		case 80:
			func_133(-872.1293f, 698.7591f, 148.5084f, 339.673f);
			func_133(-916.5449f, 695.5253f, 150.5625f, 272.7097f);
			func_133(-907.3458f, 695.8158f, 150.396f, 270.6491f);
			func_133(-923.6974f, 691.4489f, 150.9506f, 357.4356f);
			break;
		
		case 87:
			func_133(-1605.148f, -552.5016f, 33.4606f, 309.4211f);
			func_133(-1616.306f, -561.6959f, 32.9867f, 309.4369f);
			func_133(-1582.681f, -534.1682f, 34.4171f, 307.8589f);
			func_133(-1619.657f, -531.5862f, 33.4254f, 128.9132f);
			func_133(-1560.257f, -532.3268f, 34.5436f, 216.0882f);
			func_133(-1553.698f, -541.3412f, 33.8662f, 215.8465f);
			func_133(-1611.769f, -601.588f, 31.2908f, 50.7362f);
			func_133(-1600.63f, -610.1141f, 30.5087f, 51.7297f);
			break;
		
		case 88:
			func_133(-1390.604f, -528.6405f, 29.8387f, 35.4572f);
			func_133(-1357.085f, -531.4611f, 29.7218f, 125.0906f);
			func_133(-1346.236f, -523.9114f, 30.6f, 124.7302f);
			func_133(-1337.852f, -518.1096f, 31.2329f, 124.6998f);
			func_133(-1336.39f, -556.0637f, 29.7514f, 33.8088f);
			func_133(-1340.214f, -508.9828f, 31.4089f, 98.7714f);
			func_133(-1348.607f, -510.3536f, 30.9263f, 99.2425f);
			func_133(-1380.764f, -536.3867f, 29.3128f, 63.6203f);
			break;
		
		case 89:
			func_133(-108.2604f, -613.6386f, 35.055f, 160.8063f);
			func_133(-103.0375f, -598.4797f, 35.0538f, 161.1968f);
			func_133(-112.84f, -629.6357f, 35.0662f, 174.9843f);
			func_133(-98.7403f, -590.3209f, 35.075f, 139.7632f);
			func_133(-98.3748f, -612.642f, 35.137f, 161.1124f);
			func_133(-92.595f, -595.4065f, 35.1888f, 161.3083f);
			func_133(-104.4742f, -630.1472f, 35.1396f, 161.184f);
			func_133(-74.1068f, -619.9417f, 35.1488f, 340.9123f);
			break;
		
		case 90:
			func_133(-59.684f, -779.4568f, 43.114f, 228.7591f);
			func_133(-52.7425f, -784.7151f, 43.1134f, 237.7756f);
			func_133(-45.2736f, -788.4313f, 43.1133f, 250.2438f);
			func_133(-35.9308f, -789.8549f, 43.1167f, 271.1923f);
			func_133(-64.6911f, -762.4548f, 43.1316f, 35.6897f);
			func_133(-24.9853f, -786.8022f, 43.1163f, 297.8276f);
			func_133(-86.2083f, -739.3044f, 43.0546f, 204.9405f);
			func_133(-9.239f, -773.0505f, 43.0788f, 318.0367f);
			break;
		
		case 91:
			func_133(246.5035f, -1798.749f, 26.1131f, 212.5996f);
			func_133(247.8968f, -1797.017f, 26.1131f, 212.5996f);
			func_133(249.3848f, -1795.374f, 26.1131f, 212.5996f);
			func_133(250.8498f, -1793.695f, 26.1131f, 212.5996f);
			func_133(262.9285f, -1784.205f, 26.1131f, 164.5991f);
			func_133(266.8129f, -1787.476f, 26.1131f, 164.5991f);
			func_133(264.814f, -1785.801f, 26.1131f, 164.5991f);
			func_133(269.0069f, -1789.16f, 26.1131f, 164.5991f);
			break;
		
		case 92:
			func_133(-1464.5f, -927.9f, 9f, 296.7991f);
			func_133(-1466f, -926.1f, 9f, 296.7991f);
			func_133(-1467.9f, -924.7f, 9f, 296.7991f);
			func_133(-1469.7f, -923.7f, 9f, 296.7991f);
			func_133(-1462.481f, -931.2933f, 9.1294f, 296.5982f);
			func_133(-1460.639f, -932.9284f, 9.1315f, 296.5982f);
			func_133(-1454.923f, -931.1019f, 9.0872f, 237.1973f);
			func_133(-1450.848f, -934.5874f, 8.4514f, 237.1973f);
			break;
		
		case 93:
			func_133(30.0784f, -1024.16f, 28.4469f, 234.5994f);
			func_133(29.1695f, -1026.719f, 28.4453f, 234.5994f);
			func_133(28.2538f, -1029.296f, 28.4421f, 234.5994f);
			func_133(27.3737f, -1031.767f, 28.3937f, 234.5994f);
			func_133(32.6932f, -1017.063f, 28.4531f, 234.5994f);
			func_133(33.672f, -1014.399f, 28.4552f, 234.5994f);
			func_133(37.488f, -1014.344f, 28.4781f, 175.5986f);
			func_133(39.4909f, -1015.097f, 28.484f, 175.5986f);
			break;
		
		case 94:
			func_133(45.0033f, 2784.392f, 56.8782f, 103.5999f);
			func_133(43.316f, 2785.903f, 56.8782f, 103.5999f);
			func_133(41.6126f, 2787.36f, 56.8782f, 103.5999f);
			func_133(39.9584f, 2788.773f, 56.8782f, 103.5999f);
			func_133(35.2347f, 2792.135f, 56.8781f, 208.7997f);
			func_133(33.7771f, 2790.379f, 56.8781f, 208.7997f);
			func_133(30.7578f, 2786.8f, 56.8781f, 208.7997f);
			func_133(29.3121f, 2785.045f, 56.8745f, 208.7997f);
			break;
		
		case 95:
			func_133(-332.5679f, 6069.145f, 30.2175f, 152.9999f);
			func_133(-334.2811f, 6070.787f, 30.2212f, 152.9999f);
			func_133(-335.9948f, 6072.454f, 30.2455f, 152.9999f);
			func_133(-337.675f, 6074.252f, 30.2727f, 152.9999f);
			func_133(-339.3682f, 6075.904f, 30.3074f, 152.9999f);
			func_133(-341.0913f, 6077.729f, 30.3114f, 152.9999f);
			func_133(-342.9239f, 6079.522f, 30.3122f, 152.9999f);
			func_133(-344.6985f, 6081.302f, 30.3097f, 152.9999f);
			break;
		
		case 96:
			func_133(1738.422f, 3716.779f, 33.0787f, 6.9999f);
			func_133(1736.207f, 3715.989f, 33.094f, 6.9999f);
			func_133(1748.442f, 3714.17f, 33.0889f, 39.399f);
			func_133(1750.475f, 3715.007f, 33.1067f, 39.399f);
			func_133(1747.18f, 3721.102f, 33.007f, 95.199f);
			func_133(1746.413f, 3723.255f, 32.9738f, 95.199f);
			func_133(1740.67f, 3717.613f, 33.0616f, 8.199f);
			func_133(1733.937f, 3715.08f, 33.1236f, 8.199f);
			break;
		
		case 97:
			func_133(947.9371f, -1452.737f, 30.143f, 331.5991f);
			func_133(950.2141f, -1452.826f, 30.1364f, 331.5991f);
			func_133(952.4588f, -1452.882f, 30.129f, 331.5991f);
			func_133(954.6608f, -1452.869f, 30.1303f, 331.5991f);
			func_133(935.1006f, -1452.701f, 30.1907f, 316.999f);
			func_133(932.5459f, -1452.579f, 30.2194f, 316.999f);
			func_133(929.9319f, -1452.567f, 30.2647f, 316.999f);
			func_133(927.4857f, -1452.446f, 30.3167f, 316.999f);
			break;
		
		case 98:
			func_133(186.6051f, 306.8702f, 104.389f, 162.3999f);
			func_133(184.3881f, 306.7666f, 104.3845f, 162.3999f);
			func_133(182.1681f, 306.6823f, 104.375f, 162.3999f);
			func_133(183.3219f, 296.2871f, 104.3707f, 350.7995f);
			func_133(180.9933f, 296.3411f, 104.3704f, 350.7995f);
			func_133(178.6569f, 296.4709f, 104.3701f, 350.7995f);
			func_133(195.1475f, 304.4284f, 104.4644f, 77.3989f);
			func_133(195.0814f, 301.8218f, 104.5287f, 77.3989f);
			break;
		
		case 99:
			func_133(-31.2801f, -200.3394f, 51.3551f, 5.3995f);
			func_133(-33.3895f, -199.7716f, 51.355f, 5.3995f);
			func_133(-35.4307f, -199.1125f, 51.3549f, 5.3995f);
			func_133(-37.5545f, -198.5244f, 51.3549f, 5.3995f);
			func_133(-17.9628f, -206.2525f, 51.3702f, 29.399f);
			func_133(-14.8043f, -207.5648f, 51.4707f, 29.399f);
			func_133(-11.8482f, -208.6405f, 51.5633f, 29.399f);
			func_133(-9.1304f, -209.4894f, 51.6472f, 29.399f);
			break;
		
		case 100:
			func_133(2478.52f, 4082.137f, 36.8208f, 227.5999f);
			func_133(2477.557f, 4079.946f, 36.8014f, 227.5999f);
			func_133(2465.123f, 4081.35f, 37.0655f, 167.4f);
			func_133(2463.017f, 4082.271f, 37.0653f, 167.4f);
			func_133(2467.7f, 4080.332f, 37.0649f, 167.4f);
			func_133(2469.587f, 4079.538f, 37.061f, 167.4f);
			func_133(2481.354f, 4088.553f, 36.9131f, 209.4f);
			func_133(2482.442f, 4091.023f, 36.9472f, 209.4f);
			break;
		
		case 101:
			func_133(-32.1085f, 6407.398f, 30.4903f, 291.1999f);
			func_133(-29.4917f, 6404.578f, 30.4903f, 291.1999f);
			func_133(-26.4319f, 6401.523f, 30.4903f, 291.1999f);
			func_133(-23.3427f, 6398.638f, 30.4903f, 291.1999f);
			func_133(-20.7035f, 6395.76f, 30.4885f, 291.1999f);
			func_133(-23.7283f, 6412.838f, 30.4904f, 176.5999f);
			func_133(-20.5405f, 6409.805f, 30.4905f, 176.5999f);
			func_133(-17.3045f, 6406.66f, 30.4904f, 176.5999f);
			break;
		
		case 102:
			func_133(-1138.057f, -1572.18f, 3.4157f, 125.9996f);
			func_133(-1142.03f, -1574.983f, 3.4133f, 125.9996f);
			func_133(-1145.05f, -1592.81f, 3.3855f, 306.5991f);
			func_133(-1139.933f, -1589.211f, 3.3978f, 306.5991f);
			func_133(-1124.295f, -1578.776f, 3.3854f, 306.5991f);
			func_133(-1119.954f, -1575.551f, 3.3852f, 306.5991f);
			func_133(-1124.942f, -1562.985f, 3.2916f, 168.9988f);
			func_133(-1127.039f, -1564.395f, 3.292f, 168.9988f);
			break;
		
		default:
			break;
	}
}

void func_133(struct<3> Param0, float fParam3)
{
	if (Global_2404993.f_1683 < 32)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2404993.f_1684[Global_2404993.f_1683 /*4*/] = { Param0 };
		Global_2404993.f_1684[Global_2404993.f_1683 /*4*/].f_3 = fParam3;
		Global_2404993.f_1683++;
	}
}

int func_134(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (Param0.f_2 <= 0f)
		{
			Param0.f_2 = ((Global_2410907[iVar0 /*7*/].f_2 + Global_2410907[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_105(Param0, &(Global_2410907[iVar0 /*7*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_135()
{
	if (unk_0x08BA6DD398CA197C(Global_1626500.f_13, 0) && !Global_2443212.f_5930)
	{
		return 0;
	}
	return 0;
}

void func_136()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_2404993.f_2255[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_137(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Var1.f_2 <= 0f)
		{
			Var1.f_2 = ((Global_2410863[iVar0 /*7*/].f_2 + Global_2410863[iVar0 /*7*/].f_3.f_2) * 0.5f);
		}
		if (func_105(Var1, &(Global_2410863[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_115(&Var1, Global_2410863[iVar0 /*7*/], Global_2410863[iVar0 /*7*/].f_3, Global_2410863[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_138(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2404993.f_494)
	{
		if (!Global_2404993.f_43.f_309)
		{
			if (!func_142(unk_0x0C1D3C552325765B(), 1))
			{
				return 1;
			}
			if (!func_141(Param0, 1008981770))
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
				iVar0 = func_140(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_139(&(Global_2404993.f_43[iVar0 /*12*/])) };
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
	}
	return 0;
}

Vector3 func_139(var uParam0)
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

int func_140(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404993.f_43[iVar0 /*12*/].f_9)
		{
			if (func_109(Param0, &(Global_2404993.f_43[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_141(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2404993.f_43[iVar0 /*12*/].f_9)
		{
			if (func_109(Param0, &(Global_2404993.f_43[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_142(int iParam0, bool bParam1)
{
	if (Global_1312443 != 0)
	{
		return func_143(iParam0) != 0;
	}
	return func_90(iParam0, bParam1);
}

int func_143(int iParam0)
{
	if (func_1122(iParam0, 0, 1))
	{
		return Global_2421327[iParam0 /*353*/].f_1;
	}
	return 0;
}

void func_144()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_2404993.f_1684[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2404993.f_1683 = 0;
}

void func_145()
{
	if (unk_0xD4F93C8B74AF0B32(Global_2404993.f_632))
	{
		unk_0xEADC755C72CA1A07(Global_2404993.f_632);
	}
	Global_2404993.f_632 = -1;
}

int func_146(bool bParam0)
{
	if (unk_0x2C22E7D1C80A53EF())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

int func_147(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x08BA6DD398CA197C(Global_2432628.f_1, iParam0);
	}
	return 1;
}

Vector3 func_148(struct<3> Param0, float fParam3, float fParam4)
{
	struct<3> Var0;
	
	Var0 = { 0f, 1f, 0f };
	func_149(Var0, fParam3);
	Var0.f_0 = (Var0.f_0 * fParam4);
	Var0.f_1 = (Var0.f_1 * fParam4);
	Var0.f_2 = (Var0.f_2 * fParam4);
	Var0 = { Var0 + Param0 };
	return Var0;
}

Vector3 func_149(struct<3> Param0, float fParam3)
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

void func_150(int iParam0)
{
	if (!func_371())
	{
		switch (Local_99.f_195)
		{
			case 0:
				unk_0x15E5515C105AB6C8(iParam0, 0);
				break;
			
			case 1:
				unk_0x15E5515C105AB6C8(iParam0, 2);
				break;
			
			case 2:
				break;
		}
	}
	else
	{
		unk_0x728045E0733945FD(iParam0, 15, 1);
		unk_0xE491F8C2C2A96483(iParam0, 0, 156);
	}
}

int func_151(var uParam0, int iParam1, struct<3> Param2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	int iVar0;
	
	if (!unk_0xD28B39973EB5D6B4(1))
	{
		return 0;
	}
	if (bParam11)
	{
		unk_0xD74B8343DB9FEFD5(Param2, 1f, 0, 0, 1, 1, 1);
	}
	iVar0 = unk_0xE044C77D0FC9DB66(iParam1, Param2, uParam5, iParam7, iParam6);
	*uParam0 = unk_0xDD3500FFBBCB3F3B(iVar0);
	if (unk_0x0E091C9F3918F674(*uParam0))
	{
		unk_0xB16B53F6FE1ADDB6(iVar0, iParam10);
		if (unk_0x6B8DF4084A1CD2DC(iVar0))
		{
			if (bParam8)
			{
				unk_0x748B0DC6DACDF341(*uParam0, 1);
			}
			else
			{
				unk_0x748B0DC6DACDF341(*uParam0, 0);
			}
		}
		unk_0x4BA36C8825F6A05D(iVar0, iParam9);
		if (bParam12)
		{
			unk_0xFC40CBF7B90CA77C(iVar0);
			unk_0xF463117DBF0348D6(iVar0, 5, 5, 1f);
		}
		return 1;
	}
	return 0;
}

int func_152()
{
	int iVar0;
	
	switch (Local_99.f_195)
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

void func_153()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xD9E8CA806A80203D())
	{
		return;
	}
	if (func_371())
	{
		return;
	}
	if (Local_99.f_209 != 0)
	{
		return;
	}
	if (!func_11(&(Local_99.f_230)))
	{
		func_10(&(Local_99.f_230), 0, 0);
	}
	iVar1 = func_155();
	if (!func_6(&(Local_99.f_230), 15000, 0))
	{
		iVar0 = 0;
		while (iVar0 < func_154())
		{
			iVar2 = 0;
			if (!unk_0x3CF373660FCFAFCE(Local_99.f_199[iVar0]))
			{
				if (unk_0xD28B39973EB5D6B4(1))
				{
					if (func_60(iVar1))
					{
						if (!func_59(Local_99.f_179[iVar0 /*5*/], 0f, 0f, 0f, 0))
						{
							if (func_48(Local_99.f_179[iVar0 /*5*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
							{
								if (!unk_0x08BA6DD398CA197C(Local_99.f_211, iVar0))
								{
									unk_0x0B17BC5D018E224B(Local_99.f_179[iVar0 /*5*/], 5f, 1, 0, 0, 1);
									unk_0x88B0F0DC270164B7(&(Local_99.f_211), iVar0);
								}
								if (func_151(&(Local_99.f_199[iVar0]), iVar1, Local_99.f_179[iVar0 /*5*/], Local_99.f_179[iVar0 /*5*/].f_3, 1, 1, 1, 0, 1, 1, 0))
								{
									unk_0x58046B46E2D18640(unk_0x15F0E6D5AC2852F1(Local_99.f_199[iVar0]), 1);
									func_150(unk_0x15F0E6D5AC2852F1(Local_99.f_199[iVar0]));
								}
							}
							else
							{
								if (unk_0x916C9DBA707424D8(Local_99.f_179[iVar0 /*5*/], 6f))
								{
									iVar2 = 1;
								}
								else if (unk_0xD5723D169730DAAD(Local_99.f_179[iVar0 /*5*/], Local_99.f_179[iVar0 /*5*/].f_1, (Local_99.f_179[iVar0 /*5*/].f_2 + 1f), 1f) || unk_0xD5723D169730DAAD(Local_99.f_179[iVar0 /*5*/], 1f))
								{
									iVar2 = 1;
								}
								if (iVar2 == 1)
								{
									if (!unk_0x08BA6DD398CA197C(Local_99.f_211, iVar0))
									{
										unk_0x0B17BC5D018E224B(Local_99.f_179[iVar0 /*5*/], 6f, 1, 0, 0, 1);
										unk_0x88B0F0DC270164B7(&(Local_99.f_211), iVar0);
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

int func_154()
{
	switch (Local_99.f_197)
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

int func_155()
{
	int iVar0;
	
	switch (Local_99.f_195)
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

void func_156()
{
	if (unk_0x08BA6DD398CA197C(Local_99.f_1, 12))
	{
		return;
	}
	switch (Local_99.f_197)
	{
		case 0:
			Local_99.f_261 = unk_0x6A173E5A316F6DE8(31.1862f, -2594.657f, -50f, 68.0247f, -2551.956f, 50f, 1, 1, 1, 1);
			break;
		
		case 1:
			Local_99.f_261 = unk_0x6A173E5A316F6DE8(-1109.664f, -1297.61f, -50f, -1074.653f, -1223.725f, 50f, 1, 1, 1, 1);
			break;
		
		case 2:
			Local_99.f_261 = unk_0x6A173E5A316F6DE8(859.394f, -1082.382f, -50f, 914.3219f, -1008.526f, 50f, 1, 1, 1, 1);
			break;
		
		case 3:
			Local_99.f_261 = unk_0x6A173E5A316F6DE8(240.8218f, -1997.975f, -50f, 243.8696f, -1933.894f, 50f, 1, 1, 1, 1);
			break;
		
		case 4:
			Local_99.f_261 = unk_0x6A173E5A316F6DE8(-451.6602f, 171.9769f, -50f, -397.3188f, 222.9419f, 50f, 1, 1, 1, 1);
			break;
		
		case 5:
			Local_99.f_261 = unk_0x6A173E5A316F6DE8(-1059.294f, -2044.054f, -50f, -1011.896f, -1884.057f, 140.3546f, 1, 1, 1, 1);
			break;
		
		case 6:
			Local_99.f_261 = unk_0x6A173E5A316F6DE8(-1284.743f, -836.3273f, -50f, -1246.317f, -774.2995f, 50f, 1, 1, 1, 1);
			break;
		
		case 7:
			Local_99.f_261 = unk_0x6A173E5A316F6DE8(-924.5807f, -2758.87f, -50.9462f, -789.014f, -2731.518f, 112.94f, 1, 1, 1, 1);
			break;
		
		case 8:
			Local_99.f_261 = unk_0x6A173E5A316F6DE8(253.779f, -3039.713f, -50f, 308.8536f, -2986.068f, 50f, 1, 1, 1, 1);
			break;
		
		case 9:
			Local_99.f_261 = unk_0x6A173E5A316F6DE8(1515.631f, -2191.266f, -50f, 1597.112f, -2059.625f, 150f, 1, 1, 1, 1);
			break;
		
		case 10:
			Local_99.f_261 = unk_0x6A173E5A316F6DE8(-348.6945f, -2731.759f, -50f, -230.5551f, -2670.349f, 50.0003f, 1, 1, 1, 1);
			break;
		
		case 11:
			Local_99.f_261 = unk_0x6A173E5A316F6DE8(464.591f, -669.6168f, -50f, 598.1423f, -499.8008f, 50f, 1, 1, 1, 1);
			break;
		
		case 12:
			Local_99.f_261 = unk_0x6A173E5A316F6DE8(-564.2241f, -1836.488f, -50f, -498.0586f, -1768.227f, 50f, 1, 1, 1, 1);
			break;
		
		case 13:
			Local_99.f_261 = unk_0x6A173E5A316F6DE8(-357.3719f, -1413.902f, -50f, -287.5592f, -1320.63f, 50f, 1, 1, 1, 1);
			break;
		
		case 14:
			Local_99.f_261 = unk_0x6A173E5A316F6DE8(302.4282f, 333.8127f, -50f, 359.9608f, 361.1776f, 150f, 1, 1, 1, 1);
			break;
		
		case 15:
			Local_99.f_261 = unk_0x6A173E5A316F6DE8(883.963f, -1600.535f, -50f, 980.0828f, -1532.579f, 50f, 1, 1, 1, 1);
			break;
		
		case 16:
			Local_99.f_261 = unk_0x6A173E5A316F6DE8(691.8906f, -946.6288f, -50f, 792.8187f, -856.2645f, 50f, 1, 1, 1, 1);
			break;
		
		case 17:
			Local_99.f_261 = unk_0x6A173E5A316F6DE8(931.0925f, -2203.321f, -50f, 1054.687f, -2104.696f, 50f, 1, 1, 1, 1);
			break;
		
		case 18:
			Local_99.f_261 = unk_0x6A173E5A316F6DE8(909.5201f, -2548.777f, -50f, 1079.576f, -2480.221f, 50f, 1, 1, 1, 1);
			break;
		
		case 19:
			Local_99.f_261 = unk_0x6A173E5A316F6DE8(-285.6858f, 169.6409f, -50f, -231.663f, 249.5953f, 150f, 1, 1, 1, 1);
			break;
		
		case 20:
			Local_99.f_261 = unk_0x6A173E5A316F6DE8(490.689f, -2005.857f, -50f, 557.8708f, -1886.362f, 124.4746f, 1, 1, 1, 1);
			break;
		
		case 21:
			Local_99.f_261 = unk_0x6A173E5A316F6DE8(88.2044f, -2235.053f, -50f, 199.7525f, -2183.485f, 50f, 1, 1, 1, 1);
			break;
	}
	unk_0x88B0F0DC270164B7(&(Local_99.f_1), 12);
}

void func_157()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (Local_99.f_223 == 0)
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0) };
		Var3 = { func_158() };
		fVar6 = unk_0x999A157665D69393(Var0, Var3, 0);
		if (fVar6 > 2500f)
		{
			Local_99.f_223 = Global_262145.f_14016;
		}
		else if (fVar6 > 2000f)
		{
			Local_99.f_223 = Global_262145.f_14017;
		}
		else if (fVar6 > 1500f)
		{
			Local_99.f_223 = Global_262145.f_14018;
		}
		else if (fVar6 > 1000f)
		{
			Local_99.f_223 = Global_262145.f_14019;
		}
		else
		{
			Local_99.f_223 = Global_262145.f_14020;
		}
	}
}

Vector3 func_158()
{
	switch (Local_99.f_197)
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

void func_159()
{
	int iVar0;
	
	if (!func_59(Local_99.f_103[0 /*5*/], 0f, 0f, 0f, 0))
	{
		return;
	}
	func_160();
	iVar0 = func_1046();
	switch (iVar0)
	{
		case 99:
			switch (Local_99.f_197)
			{
				case 0:
					Local_99.f_2[0 /*10*/].f_5 = { 81.7918f, -2554.375f, 5f };
					Local_99.f_2[0 /*10*/].f_8 = 268.2536f;
					break;
				
				case 1:
					Local_99.f_2[0 /*10*/].f_5 = { -1065.693f, -1275.444f, 4.9818f };
					Local_99.f_2[0 /*10*/].f_8 = 120.7465f;
					break;
				
				case 2:
					Local_99.f_2[0 /*10*/].f_5 = { 905.6629f, -1003.347f, 33.8966f };
					Local_99.f_2[0 /*10*/].f_8 = 271.0984f;
					break;
				
				case 3:
					Local_99.f_2[0 /*10*/].f_5 = { 231.9853f, -1935.578f, 22.4437f };
					Local_99.f_2[0 /*10*/].f_8 = 322.2929f;
					break;
				
				case 4:
					Local_99.f_2[0 /*10*/].f_5 = { -399.3887f, 230.6774f, 82.492f };
					Local_99.f_2[0 /*10*/].f_8 = 270.2787f;
					break;
				
				case 5:
					Local_99.f_2[0 /*10*/].f_5 = { -1086.639f, -2005.462f, 12.0063f };
					Local_99.f_2[0 /*10*/].f_8 = 11.8952f;
					break;
				
				case 6:
					Local_99.f_2[0 /*10*/].f_5 = { -1244.429f, -884.493f, 11.165f };
					Local_99.f_2[0 /*10*/].f_8 = 126.962f;
					break;
				
				case 7:
					Local_99.f_2[0 /*10*/].f_5 = { -835.0118f, -2630.999f, 12.9249f };
					Local_99.f_2[0 /*10*/].f_8 = 328.7649f;
					break;
				
				case 8:
					Local_99.f_2[0 /*10*/].f_5 = { 296.2087f, -3013.953f, 4.9212f };
					Local_99.f_2[0 /*10*/].f_8 = 0.24f;
					break;
				
				case 9:
					Local_99.f_2[0 /*10*/].f_5 = { 1413.249f, -1954.944f, 64.6238f };
					Local_99.f_2[0 /*10*/].f_8 = 326.5977f;
					break;
				
				case 10:
					Local_99.f_2[0 /*10*/].f_5 = { -318.5519f, -2671.678f, 5.0502f };
					Local_99.f_2[0 /*10*/].f_8 = 318.3914f;
					break;
				
				case 11:
					Local_99.f_2[0 /*10*/].f_5 = { 504.8237f, -711.9799f, 23.9127f };
					Local_99.f_2[0 /*10*/].f_8 = 177.966f;
					break;
				
				case 12:
					Local_99.f_2[0 /*10*/].f_5 = { -524.3798f, -1770.964f, 20.3834f };
					Local_99.f_2[0 /*10*/].f_8 = 245.3696f;
					break;
				
				case 13:
					Local_99.f_2[0 /*10*/].f_5 = { -286.5591f, -1359.238f, 30.3043f };
					Local_99.f_2[0 /*10*/].f_8 = 180.1492f;
					break;
				
				case 14:
					Local_99.f_2[0 /*10*/].f_5 = { 343.9299f, 321.1165f, 103.4987f };
					Local_99.f_2[0 /*10*/].f_8 = 75.8829f;
					break;
				
				case 15:
					Local_99.f_2[0 /*10*/].f_5 = { 974.6287f, -1540.746f, 29.4172f };
					Local_99.f_2[0 /*10*/].f_8 = 4.069f;
					break;
				
				case 16:
					Local_99.f_2[0 /*10*/].f_5 = { 777.0914f, -937.4927f, 24.7044f };
					Local_99.f_2[0 /*10*/].f_8 = 186.7581f;
					break;
				
				case 17:
					Local_99.f_2[0 /*10*/].f_5 = { 997.4642f, -2087.759f, 30.2136f };
					Local_99.f_2[0 /*10*/].f_8 = 275.8696f;
					break;
				
				case 18:
					Local_99.f_2[0 /*10*/].f_5 = { 987.9297f, -2461.676f, 27.3773f };
					Local_99.f_2[0 /*10*/].f_8 = 85.6201f;
					break;
				
				case 19:
					Local_99.f_2[0 /*10*/].f_5 = { -227.6549f, 188.3366f, 78.676f };
					Local_99.f_2[0 /*10*/].f_8 = 178.634f;
					break;
				
				case 20:
					Local_99.f_2[0 /*10*/].f_5 = { 460.4135f, -1932.892f, 23.6765f };
					Local_99.f_2[0 /*10*/].f_8 = 295.2699f;
					break;
				
				case 21:
					Local_99.f_2[0 /*10*/].f_5 = { 241.4945f, -2093.446f, 16.3114f };
					Local_99.f_2[0 /*10*/].f_8 = 225.7471f;
					break;
				
				default:
					Local_99.f_2[0 /*10*/].f_5 = { 974.6287f, -1540.746f, 29.4172f };
					Local_99.f_2[0 /*10*/].f_8 = 4.069f;
					break;
			}
			break;
		
		case 0:
			switch (Local_99.f_197)
			{
				case 0:
					Local_99.f_103[0 /*5*/] = { 48.6581f, -2562.141f, 5f };
					Local_99.f_103[0 /*5*/].f_3 = 18.2728f;
					Local_99.f_103[1 /*5*/] = { 51.6031f, -2571.123f, 5.0046f };
					Local_99.f_103[1 /*5*/].f_3 = 345.3663f;
					Local_99.f_103[2 /*5*/] = { 56.6838f, -2564.757f, 5.0641f };
					Local_99.f_103[2 /*5*/].f_3 = 55.4785f;
					Local_99.f_103[3 /*5*/] = { 62.9447f, -2585.068f, 5.0046f };
					Local_99.f_103[3 /*5*/].f_3 = 271.0223f;
					Local_99.f_103[4 /*5*/] = { 65.0669f, -2563.442f, 5f };
					Local_99.f_103[4 /*5*/].f_3 = 316.6382f;
					Local_99.f_103[5 /*5*/] = { 47.7942f, -2575.388f, 9.0407f };
					Local_99.f_103[5 /*5*/].f_3 = 37.4409f;
					Local_99.f_179[0 /*5*/] = { 61.478f, -2560.506f, 5f };
					Local_99.f_179[0 /*5*/].f_3 = 238.6826f;
					Local_99.f_179[1 /*5*/] = { 49.6015f, -2564.766f, 5.0046f };
					Local_99.f_179[1 /*5*/].f_3 = 154.2891f;
					break;
				
				case 1:
					Local_99.f_103[0 /*5*/] = { -1078.744f, -1271.7f, 9.5625f };
					Local_99.f_103[0 /*5*/].f_3 = 274.4253f;
					Local_99.f_103[1 /*5*/] = { -1087.233f, -1257.104f, 9.5625f };
					Local_99.f_103[1 /*5*/].f_3 = 354.2453f;
					Local_99.f_103[2 /*5*/] = { -1072.724f, -1267.841f, 4.9577f };
					Local_99.f_103[2 /*5*/].f_3 = 193.2412f;
					Local_99.f_103[3 /*5*/] = { -1085.99f, -1254.825f, 4.431f };
					Local_99.f_103[3 /*5*/].f_3 = 304.0791f;
					Local_99.f_103[4 /*5*/] = { -1081.952f, -1259.029f, 4.5607f };
					Local_99.f_103[4 /*5*/].f_3 = 251.1138f;
					Local_99.f_103[5 /*5*/] = { -1063.538f, -1257.842f, 5.0206f };
					Local_99.f_103[5 /*5*/].f_3 = 31.8546f;
					Local_99.f_179[0 /*5*/] = { -1063.267f, -1260.492f, 5.0582f };
					Local_99.f_179[0 /*5*/].f_3 = 134.6062f;
					Local_99.f_179[1 /*5*/] = { -1080.071f, -1255.526f, 4.4927f };
					Local_99.f_179[1 /*5*/].f_3 = 282.3716f;
					break;
				
				case 2:
					Local_99.f_103[0 /*5*/] = { 902.5689f, -1021.511f, 33.9664f };
					Local_99.f_103[0 /*5*/].f_3 = 337.3475f;
					Local_99.f_103[1 /*5*/] = { 894.0451f, -1020.726f, 33.9665f };
					Local_99.f_103[1 /*5*/].f_3 = 303.745f;
					Local_99.f_103[2 /*5*/] = { 901.3245f, -1033.82f, 33.9661f };
					Local_99.f_103[2 /*5*/].f_3 = 343.5762f;
					Local_99.f_103[3 /*5*/] = { 909.4354f, -1035.19f, 33.9662f };
					Local_99.f_103[3 /*5*/].f_3 = 175.276f;
					Local_99.f_103[4 /*5*/] = { 900.9361f, -1044.508f, 38.9808f };
					Local_99.f_103[4 /*5*/].f_3 = 150.7164f;
					Local_99.f_103[5 /*5*/] = { 894.3841f, -1032.681f, 38.9808f };
					Local_99.f_103[5 /*5*/].f_3 = 327.9728f;
					Local_99.f_179[0 /*5*/] = { 900.9302f, -1019.053f, 33.967f };
					Local_99.f_179[0 /*5*/].f_3 = 294.1935f;
					Local_99.f_179[1 /*5*/] = { 905.7681f, -1034.471f, 33.9661f };
					Local_99.f_179[1 /*5*/].f_3 = 222.0787f;
					break;
				
				case 3:
					Local_99.f_103[0 /*5*/] = { 241.6933f, -1941.756f, 22.6063f };
					Local_99.f_103[0 /*5*/].f_3 = 54.0685f;
					Local_99.f_103[1 /*5*/] = { 247.0794f, -1955.052f, 22.2033f };
					Local_99.f_103[1 /*5*/].f_3 = 350.0075f;
					Local_99.f_103[2 /*5*/] = { 260.179f, -1959.165f, 22.0967f };
					Local_99.f_103[2 /*5*/].f_3 = 284.5439f;
					Local_99.f_103[3 /*5*/] = { 258.183f, -1967.262f, 21.487f };
					Local_99.f_103[3 /*5*/].f_3 = 173.9707f;
					Local_99.f_103[4 /*5*/] = { 248.7987f, -1959.507f, 27.2402f };
					Local_99.f_103[4 /*5*/].f_3 = 231.9236f;
					Local_99.f_103[5 /*5*/] = { 233.8911f, -1946.98f, 27.2402f };
					Local_99.f_103[5 /*5*/].f_3 = 342.0352f;
					Local_99.f_179[0 /*5*/] = { 260.5989f, -1964.07f, 21.7532f };
					Local_99.f_179[0 /*5*/].f_3 = 147.0433f;
					Local_99.f_179[1 /*5*/] = { 241.5964f, -1944.464f, 22.3678f };
					Local_99.f_179[1 /*5*/].f_3 = 73.2698f;
					break;
				
				case 4:
					Local_99.f_103[0 /*5*/] = { -405.6343f, 182.3138f, 79.2232f };
					Local_99.f_103[0 /*5*/].f_3 = 306.9303f;
					Local_99.f_103[1 /*5*/] = { -420.0244f, 184.8413f, 79.6851f };
					Local_99.f_103[1 /*5*/].f_3 = 228.321f;
					Local_99.f_103[2 /*5*/] = { -428.4716f, 185.8607f, 79.7578f };
					Local_99.f_103[2 /*5*/].f_3 = 44.5389f;
					Local_99.f_103[3 /*5*/] = { -435.6789f, 179.3023f, 74.3213f };
					Local_99.f_103[3 /*5*/].f_3 = 85.0906f;
					Local_99.f_103[4 /*5*/] = { -399.305f, 190.302f, 80.5987f };
					Local_99.f_103[4 /*5*/].f_3 = 85.1506f;
					Local_99.f_103[5 /*5*/] = { -438.713f, 183.3993f, 74.2764f };
					Local_99.f_103[5 /*5*/].f_3 = 351.0685f;
					Local_99.f_179[0 /*5*/] = { -436.8526f, 183.3829f, 74.3109f };
					Local_99.f_179[0 /*5*/].f_3 = 7.2644f;
					Local_99.f_179[1 /*5*/] = { -405.3793f, 187.1801f, 79.9864f };
					Local_99.f_179[1 /*5*/].f_3 = 354.7918f;
					break;
				
				case 5:
					Local_99.f_103[0 /*5*/] = { -1069.206f, -2014.558f, 12.1616f };
					Local_99.f_103[0 /*5*/].f_3 = 201.0558f;
					Local_99.f_103[1 /*5*/] = { -1063.069f, -2014.715f, 12.1616f };
					Local_99.f_103[1 /*5*/].f_3 = 141.4469f;
					Local_99.f_103[2 /*5*/] = { -1067.427f, -2023.773f, 12.2027f };
					Local_99.f_103[2 /*5*/].f_3 = 197.023f;
					Local_99.f_103[3 /*5*/] = { -1060.439f, -2024.766f, 12.1616f };
					Local_99.f_103[3 /*5*/].f_3 = 152.4942f;
					Local_99.f_103[4 /*5*/] = { -1052.16f, -2022.239f, 12.1616f };
					Local_99.f_103[4 /*5*/].f_3 = 146.7409f;
					Local_99.f_103[5 /*5*/] = { -1051.755f, -2029.141f, 12.1616f };
					Local_99.f_103[5 /*5*/].f_3 = 82.1706f;
					Local_99.f_103[6 /*5*/] = { -1073.135f, -2011.029f, 12.6172f };
					Local_99.f_103[6 /*5*/].f_3 = 214.1918f;
					Local_99.f_103[7 /*5*/] = { -1071.441f, -2002.931f, 14.7905f };
					Local_99.f_103[7 /*5*/].f_3 = 187.3056f;
					Local_99.f_179[0 /*5*/] = { -1052.354f, -2025.611f, 12.1616f };
					Local_99.f_179[0 /*5*/].f_3 = 358.8676f;
					Local_99.f_179[1 /*5*/] = { -1066.611f, -2016.299f, 12.1616f };
					Local_99.f_179[1 /*5*/].f_3 = 280.333f;
					Local_99.f_179[2 /*5*/] = { -1063.965f, -2024.623f, 12.1831f };
					Local_99.f_179[2 /*5*/].f_3 = 269.67f;
					break;
				
				case 6:
					Local_99.f_103[0 /*5*/] = { -1280.076f, -805.8421f, 16.508f };
					Local_99.f_103[0 /*5*/].f_3 = 57.9953f;
					Local_99.f_103[1 /*5*/] = { -1286.231f, -811.6383f, 16.4521f };
					Local_99.f_103[1 /*5*/].f_3 = 35.4979f;
					Local_99.f_103[2 /*5*/] = { -1277.371f, -821.9402f, 16.1003f };
					Local_99.f_103[2 /*5*/].f_3 = 239.3392f;
					Local_99.f_103[3 /*5*/] = { -1267.488f, -824.3138f, 16.0992f };
					Local_99.f_103[3 /*5*/].f_3 = 144.6389f;
					Local_99.f_103[4 /*5*/] = { -1262.181f, -824.9617f, 16.0996f };
					Local_99.f_103[4 /*5*/].f_3 = 39.795f;
					Local_99.f_103[5 /*5*/] = { -1287.23f, -791.7753f, 16.5858f };
					Local_99.f_103[5 /*5*/].f_3 = 140.3937f;
					Local_99.f_179[0 /*5*/] = { -1273.327f, -823.6479f, 16.0992f };
					Local_99.f_179[0 /*5*/].f_3 = 254.419f;
					Local_99.f_179[1 /*5*/] = { -1285.171f, -807.566f, 16.5295f };
					Local_99.f_179[1 /*5*/].f_3 = 146.8347f;
					break;
				
				case 7:
					Local_99.f_103[0 /*5*/] = { -886.5272f, -2713.691f, 12.8285f };
					Local_99.f_103[0 /*5*/].f_3 = 330.9706f;
					Local_99.f_103[1 /*5*/] = { -876.2014f, -2718.661f, 12.9446f };
					Local_99.f_103[1 /*5*/].f_3 = 335.853f;
					Local_99.f_103[2 /*5*/] = { -882.2947f, -2732.553f, 12.8285f };
					Local_99.f_103[2 /*5*/].f_3 = 33.564f;
					Local_99.f_103[3 /*5*/] = { -884.4581f, -2724.486f, 12.8285f };
					Local_99.f_103[3 /*5*/].f_3 = 22.4268f;
					Local_99.f_103[4 /*5*/] = { -887.4197f, -2737.267f, 12.8285f };
					Local_99.f_103[4 /*5*/].f_3 = 356.0724f;
					Local_99.f_103[5 /*5*/] = { -894.7762f, -2736.815f, 12.8285f };
					Local_99.f_103[5 /*5*/].f_3 = 164.3784f;
					Local_99.f_103[6 /*5*/] = { -897.211f, -2750.013f, 12.9445f };
					Local_99.f_103[6 /*5*/].f_3 = 321.2128f;
					Local_99.f_103[7 /*5*/] = { -882.6691f, -2745.853f, 12.9362f };
					Local_99.f_103[7 /*5*/].f_3 = 64.3587f;
					Local_99.f_103[8 /*5*/] = { -907.6017f, -2749.353f, 12.9445f };
					Local_99.f_103[8 /*5*/].f_3 = 335.7514f;
					Local_99.f_103[9 /*5*/] = { -869.9126f, -2715.025f, 12.9446f };
					Local_99.f_103[9 /*5*/].f_3 = 8.2036f;
					Local_99.f_179[0 /*5*/] = { -882.8745f, -2713.687f, 12.8285f };
					Local_99.f_179[0 /*5*/].f_3 = 239.8798f;
					Local_99.f_179[1 /*5*/] = { -883.874f, -2728.786f, 12.8285f };
					Local_99.f_179[1 /*5*/].f_3 = 201.2263f;
					Local_99.f_179[2 /*5*/] = { -891.2535f, -2737.411f, 12.8285f };
					Local_99.f_179[2 /*5*/].f_3 = 92.5365f;
					break;
				
				case 8:
					Local_99.f_103[0 /*5*/] = { 258.4958f, -3019.888f, 4.7612f };
					Local_99.f_103[0 /*5*/].f_3 = 190.0675f;
					Local_99.f_103[1 /*5*/] = { 273.9505f, -3013.159f, 4.7016f };
					Local_99.f_103[1 /*5*/].f_3 = 68.4427f;
					Local_99.f_103[2 /*5*/] = { 273.0544f, -3016.924f, 4.7049f };
					Local_99.f_103[2 /*5*/].f_3 = 136.0059f;
					Local_99.f_103[3 /*5*/] = { 274.0455f, -2995.704f, 4.7009f };
					Local_99.f_103[3 /*5*/].f_3 = 145.0681f;
					Local_99.f_103[4 /*5*/] = { 277.7727f, -3020.606f, 10.5614f };
					Local_99.f_103[4 /*5*/].f_3 = 59.5107f;
					Local_99.f_103[5 /*5*/] = { 277.1279f, -3034.719f, 10.5614f };
					Local_99.f_103[5 /*5*/].f_3 = 113.9025f;
					Local_99.f_179[0 /*5*/] = { 266.3998f, -3022.136f, 4.7302f };
					Local_99.f_179[0 /*5*/].f_3 = 14.1592f;
					Local_99.f_179[1 /*5*/] = { 270.9944f, -2999.383f, 4.7128f };
					Local_99.f_179[1 /*5*/].f_3 = 145.314f;
					break;
				
				case 9:
					Local_99.f_103[0 /*5*/] = { 1546.335f, -2124.289f, 76.1382f };
					Local_99.f_103[0 /*5*/].f_3 = 17.7805f;
					Local_99.f_103[1 /*5*/] = { 1554.385f, -2125.222f, 76.3125f };
					Local_99.f_103[1 /*5*/].f_3 = 10.9741f;
					Local_99.f_103[2 /*5*/] = { 1558.224f, -2118.532f, 76.3765f };
					Local_99.f_103[2 /*5*/].f_3 = 15.6854f;
					Local_99.f_103[3 /*5*/] = { 1547.75f, -2143.708f, 76.4844f };
					Local_99.f_103[3 /*5*/].f_3 = 154.3238f;
					Local_99.f_103[4 /*5*/] = { 1552.05f, -2147.172f, 76.5383f };
					Local_99.f_103[4 /*5*/].f_3 = 147.9245f;
					Local_99.f_103[5 /*5*/] = { 1563.341f, -2138.102f, 76.5841f };
					Local_99.f_103[5 /*5*/].f_3 = 149.5447f;
					Local_99.f_103[6 /*5*/] = { 1561.244f, -2133.029f, 76.4828f };
					Local_99.f_103[6 /*5*/].f_3 = 76.8144f;
					Local_99.f_103[7 /*5*/] = { 1569.277f, -2130.628f, 77.3351f };
					Local_99.f_103[7 /*5*/].f_3 = 112.2364f;
					Local_99.f_179[0 /*5*/] = { 1550.601f, -2145.957f, 76.5271f };
					Local_99.f_179[0 /*5*/].f_3 = 296.1894f;
					Local_99.f_179[1 /*5*/] = { 1563.138f, -2135.943f, 76.5206f };
					Local_99.f_179[1 /*5*/].f_3 = 260.3118f;
					Local_99.f_179[2 /*5*/] = { 1550.38f, -2123.159f, 76.2165f };
					Local_99.f_179[2 /*5*/].f_3 = 235.2799f;
					break;
				
				case 10:
					Local_99.f_103[0 /*5*/] = { -307.7643f, -2684.145f, 5.0079f };
					Local_99.f_103[0 /*5*/].f_3 = 10.2057f;
					Local_99.f_103[1 /*5*/] = { -298.4151f, -2685.329f, 5.1595f };
					Local_99.f_103[1 /*5*/].f_3 = 34.7011f;
					Local_99.f_103[2 /*5*/] = { -309.9699f, -2692.377f, 5.1532f };
					Local_99.f_103[2 /*5*/].f_3 = 231.6414f;
					Local_99.f_103[3 /*5*/] = { -315.5637f, -2698.447f, 6.55f };
					Local_99.f_103[3 /*5*/].f_3 = 279.1803f;
					Local_99.f_103[4 /*5*/] = { -307.4792f, -2699.072f, 5.0003f };
					Local_99.f_103[4 /*5*/].f_3 = 2.2931f;
					Local_99.f_103[5 /*5*/] = { -304.3626f, -2700.868f, 5.0003f };
					Local_99.f_103[5 /*5*/].f_3 = 253.2487f;
					Local_99.f_103[6 /*5*/] = { -306.5913f, -2707.836f, 5.1532f };
					Local_99.f_103[6 /*5*/].f_3 = 313.0547f;
					Local_99.f_103[7 /*5*/] = { -303.2011f, -2711.413f, 5.0003f };
					Local_99.f_103[7 /*5*/].f_3 = 288.4283f;
					Local_99.f_179[0 /*5*/] = { -304.9815f, -2709.62f, 5.0003f };
					Local_99.f_179[0 /*5*/].f_3 = 135.5251f;
					Local_99.f_179[1 /*5*/] = { -305.7259f, -2696.407f, 5.0003f };
					Local_99.f_179[1 /*5*/].f_3 = 207.3978f;
					Local_99.f_179[2 /*5*/] = { -303.8944f, -2685.304f, 5.0003f };
					Local_99.f_179[2 /*5*/].f_3 = 255.2084f;
					break;
				
				case 11:
					Local_99.f_103[0 /*5*/] = { 518.3859f, -657.3704f, 23.7512f };
					Local_99.f_103[0 /*5*/].f_3 = 138.1634f;
					Local_99.f_103[1 /*5*/] = { 519.1835f, -649.9944f, 23.7512f };
					Local_99.f_103[1 /*5*/].f_3 = 17.4978f;
					Local_99.f_103[2 /*5*/] = { 495.9756f, -648.6689f, 31.7074f };
					Local_99.f_103[2 /*5*/].f_3 = 283.3737f;
					Local_99.f_103[3 /*5*/] = { 504.1287f, -641.0121f, 23.7369f };
					Local_99.f_103[3 /*5*/].f_3 = 303.125f;
					Local_99.f_103[4 /*5*/] = { 498.1048f, -638.1683f, 23.9727f };
					Local_99.f_103[4 /*5*/].f_3 = 289.9783f;
					Local_99.f_103[5 /*5*/] = { 499.259f, -630.4283f, 23.7512f };
					Local_99.f_103[5 /*5*/].f_3 = 194.1317f;
					Local_99.f_103[6 /*5*/] = { 508.6016f, -626.3681f, 23.7571f };
					Local_99.f_103[6 /*5*/].f_3 = 343.9152f;
					Local_99.f_103[7 /*5*/] = { 497.44f, -661.5337f, 27.617f };
					Local_99.f_103[7 /*5*/].f_3 = 199.5863f;
					Local_99.f_179[0 /*5*/] = { 517.3517f, -654.2748f, 23.7512f };
					Local_99.f_179[0 /*5*/].f_3 = 150.2542f;
					Local_99.f_179[1 /*5*/] = { 505.3363f, -645.2184f, 23.7512f };
					Local_99.f_179[1 /*5*/].f_3 = 23.9108f;
					Local_99.f_179[2 /*5*/] = { 508.3529f, -630.1296f, 23.7512f };
					Local_99.f_179[2 /*5*/].f_3 = 127.1383f;
					break;
				
				case 12:
					Local_99.f_103[0 /*5*/] = { -546.3519f, -1769.694f, 20.5902f };
					Local_99.f_103[0 /*5*/].f_3 = 277.4846f;
					Local_99.f_103[1 /*5*/] = { -541.7958f, -1776.458f, 20.5973f };
					Local_99.f_103[1 /*5*/].f_3 = 356.3462f;
					Local_99.f_103[2 /*5*/] = { -534.571f, -1772.565f, 20.4432f };
					Local_99.f_103[2 /*5*/].f_3 = 23.1421f;
					Local_99.f_103[3 /*5*/] = { -527.7571f, -1776.274f, 20.367f };
					Local_99.f_103[3 /*5*/].f_3 = 255.9772f;
					Local_99.f_103[4 /*5*/] = { -531.6744f, -1781.516f, 20.4994f };
					Local_99.f_103[4 /*5*/].f_3 = 295.9945f;
					Local_99.f_103[5 /*5*/] = { -555.2966f, -1799.182f, 21.5471f };
					Local_99.f_103[5 /*5*/].f_3 = 327.6154f;
					Local_99.f_103[6 /*5*/] = { -549.1064f, -1786.567f, 21.012f };
					Local_99.f_103[6 /*5*/].f_3 = 334.4709f;
					Local_99.f_103[7 /*5*/] = { -518.8139f, -1785.754f, 20.6425f };
					Local_99.f_103[7 /*5*/].f_3 = 206.6088f;
					Local_99.f_179[0 /*5*/] = { -556.8245f, -1795.383f, 21.5195f };
					Local_99.f_179[0 /*5*/].f_3 = 204.3955f;
					Local_99.f_179[1 /*5*/] = { -531.0875f, -1774.35f, 20.4042f };
					Local_99.f_179[1 /*5*/].f_3 = 77.9003f;
					Local_99.f_179[2 /*5*/] = { -548.1949f, -1767.868f, 20.6224f };
					Local_99.f_179[2 /*5*/].f_3 = 102.3641f;
					break;
				
				case 13:
					Local_99.f_103[0 /*5*/] = { -295.7925f, -1366.301f, 30.3114f };
					Local_99.f_103[0 /*5*/].f_3 = 200.7773f;
					Local_99.f_103[1 /*5*/] = { -294.7914f, -1361.439f, 30.3099f };
					Local_99.f_103[1 /*5*/].f_3 = 280.8006f;
					Local_99.f_103[2 /*5*/] = { -294.8237f, -1355.167f, 30.3168f };
					Local_99.f_103[2 /*5*/].f_3 = 223.8718f;
					Local_99.f_103[3 /*5*/] = { -291.4968f, -1352.201f, 30.2753f };
					Local_99.f_103[3 /*5*/].f_3 = 205.2611f;
					Local_99.f_103[4 /*5*/] = { -294.7546f, -1345.713f, 30.3095f };
					Local_99.f_103[4 /*5*/].f_3 = 323.2399f;
					Local_99.f_103[5 /*5*/] = { -291.2322f, -1339.262f, 30.2775f };
					Local_99.f_103[5 /*5*/].f_3 = 257.2056f;
					Local_99.f_103[6 /*5*/] = { -295.7278f, -1331.49f, 30.3084f };
					Local_99.f_103[6 /*5*/].f_3 = 75.2552f;
					Local_99.f_103[7 /*5*/] = { -293.849f, -1328.756f, 30.2182f };
					Local_99.f_103[7 /*5*/].f_3 = 328.9491f;
					Local_99.f_179[0 /*5*/] = { -292.8152f, -1332.385f, 30.1537f };
					Local_99.f_179[0 /*5*/].f_3 = 29.6972f;
					Local_99.f_179[1 /*5*/] = { -291.6872f, -1348.131f, 30.282f };
					Local_99.f_179[1 /*5*/].f_3 = 166.5207f;
					Local_99.f_179[2 /*5*/] = { -295.23f, -1364.201f, 30.3097f };
					Local_99.f_179[2 /*5*/].f_3 = 108.2429f;
					break;
				
				case 14:
					Local_99.f_103[0 /*5*/] = { 344.5797f, 336.7456f, 104.1594f };
					Local_99.f_103[0 /*5*/].f_3 = 346.2658f;
					Local_99.f_103[1 /*5*/] = { 342.3423f, 332.3715f, 103.7572f };
					Local_99.f_103[1 /*5*/].f_3 = 102.4295f;
					Local_99.f_103[2 /*5*/] = { 341.1604f, 310.392f, 103.4193f };
					Local_99.f_103[2 /*5*/].f_3 = 61.0026f;
					Local_99.f_103[3 /*5*/] = { 346.6567f, 309.6925f, 103.1454f };
					Local_99.f_103[3 /*5*/].f_3 = 257.871f;
					Local_99.f_103[4 /*5*/] = { 350.7382f, 328.2918f, 103.2696f };
					Local_99.f_103[4 /*5*/].f_3 = 117.8644f;
					Local_99.f_103[5 /*5*/] = { 354.2978f, 327.3369f, 103.0974f };
					Local_99.f_103[5 /*5*/].f_3 = 177.6163f;
					Local_99.f_103[6 /*5*/] = { 366.9816f, 326.3944f, 102.6179f };
					Local_99.f_103[6 /*5*/].f_3 = 201.951f;
					Local_99.f_103[7 /*5*/] = { 363.9641f, 322.1239f, 102.6943f };
					Local_99.f_103[7 /*5*/].f_3 = 243.2871f;
					Local_99.f_179[0 /*5*/] = { 343.0425f, 312.0052f, 103.3437f };
					Local_99.f_179[0 /*5*/].f_3 = 258.1888f;
					Local_99.f_179[1 /*5*/] = { 360.5493f, 322.6658f, 102.7946f };
					Local_99.f_179[1 /*5*/].f_3 = 286.3943f;
					Local_99.f_179[2 /*5*/] = { 343.9996f, 332.1288f, 103.7176f };
					Local_99.f_179[2 /*5*/].f_3 = 7.4532f;
					break;
				
				case 15:
					Local_99.f_103[0 /*5*/] = { 962.8411f, -1572.776f, 29.5579f };
					Local_99.f_103[0 /*5*/].f_3 = 198.1588f;
					Local_99.f_103[1 /*5*/] = { 958.9659f, -1572.392f, 29.6097f };
					Local_99.f_103[1 /*5*/].f_3 = 93.0019f;
					Local_99.f_103[2 /*5*/] = { 974.9329f, -1566.858f, 29.5658f };
					Local_99.f_103[2 /*5*/].f_3 = 171.6639f;
					Local_99.f_103[3 /*5*/] = { 977.1616f, -1563.333f, 29.6385f };
					Local_99.f_103[3 /*5*/].f_3 = 4.8635f;
					Local_99.f_103[4 /*5*/] = { 961.7667f, -1559.233f, 29.8001f };
					Local_99.f_103[4 /*5*/].f_3 = 241.449f;
					Local_99.f_103[5 /*5*/] = { 961.8814f, -1556.363f, 29.807f };
					Local_99.f_103[5 /*5*/].f_3 = 275.0858f;
					Local_99.f_103[6 /*5*/] = { 968.3688f, -1552.087f, 29.6598f };
					Local_99.f_103[6 /*5*/].f_3 = 176.2653f;
					Local_99.f_103[7 /*5*/] = { 965.8116f, -1547.661f, 29.6223f };
					Local_99.f_103[7 /*5*/].f_3 = 333.7709f;
					Local_99.f_103[8 /*5*/] = { 957.9225f, -1553.855f, 33.7974f };
					Local_99.f_103[8 /*5*/].f_3 = 308.3917f;
					Local_99.f_103[9 /*5*/] = { 957.7077f, -1566.216f, 33.7974f };
					Local_99.f_103[9 /*5*/].f_3 = 219.3558f;
					Local_99.f_179[0 /*5*/] = { 965.2025f, -1549.952f, 29.6078f };
					Local_99.f_179[0 /*5*/].f_3 = 41.5896f;
					Local_99.f_179[1 /*5*/] = { 974.5963f, -1564.88f, 29.5937f };
					Local_99.f_179[1 /*5*/].f_3 = 251.9554f;
					Local_99.f_179[2 /*5*/] = { 960.7539f, -1572.775f, 29.6016f };
					Local_99.f_179[2 /*5*/].f_3 = 322.5412f;
					break;
				
				case 16:
					Local_99.f_103[0 /*5*/] = { 764.532f, -917.6445f, 24.3477f };
					Local_99.f_103[0 /*5*/].f_3 = 200.6824f;
					Local_99.f_103[1 /*5*/] = { 757.4073f, -914.5825f, 24.2703f };
					Local_99.f_103[1 /*5*/].f_3 = 268.7243f;
					Local_99.f_103[2 /*5*/] = { 763.8087f, -928.9955f, 24.4204f };
					Local_99.f_103[2 /*5*/].f_3 = 359.3907f;
					Local_99.f_103[3 /*5*/] = { 762.9298f, -935.2947f, 24.4307f };
					Local_99.f_103[3 /*5*/].f_3 = 337.1544f;
					Local_99.f_103[4 /*5*/] = { 720.5742f, -888.9393f, 23.2796f };
					Local_99.f_103[4 /*5*/].f_3 = 301.5278f;
					Local_99.f_103[5 /*5*/] = { 763.72f, -888.6782f, 24.0956f };
					Local_99.f_103[5 /*5*/].f_3 = 196.7567f;
					Local_99.f_103[6 /*5*/] = { 763.0903f, -884.3161f, 23.9395f };
					Local_99.f_103[6 /*5*/].f_3 = 321.9963f;
					Local_99.f_103[7 /*5*/] = { 743.7985f, -872.6409f, 24.0443f };
					Local_99.f_103[7 /*5*/].f_3 = 251.8575f;
					Local_99.f_103[8 /*5*/] = { 741.907f, -881.8726f, 24.0428f };
					Local_99.f_103[8 /*5*/].f_3 = 268.2814f;
					Local_99.f_103[9 /*5*/] = { 752.8027f, -884.268f, 24.1054f };
					Local_99.f_103[9 /*5*/].f_3 = 282.8442f;
					Local_99.f_179[0 /*5*/] = { 763.8987f, -886.4079f, 24.0887f };
					Local_99.f_179[0 /*5*/].f_3 = 85.7335f;
					Local_99.f_179[1 /*5*/] = { 744.0313f, -877.4133f, 24.0497f };
					Local_99.f_179[1 /*5*/].f_3 = 152.0251f;
					Local_99.f_179[2 /*5*/] = { 763.1165f, -916.4111f, 24.3315f };
					Local_99.f_179[2 /*5*/].f_3 = 133.3755f;
					break;
				
				case 17:
					Local_99.f_103[0 /*5*/] = { 1003.053f, -2149.714f, 37.3448f };
					Local_99.f_103[0 /*5*/].f_3 = 182.3138f;
					Local_99.f_103[1 /*5*/] = { 1010.169f, -2135.276f, 29.5516f };
					Local_99.f_103[1 /*5*/].f_3 = 349.7712f;
					Local_99.f_103[2 /*5*/] = { 1011.614f, -2142.546f, 29.5516f };
					Local_99.f_103[2 /*5*/].f_3 = 2.675f;
					Local_99.f_103[3 /*5*/] = { 1018.429f, -2145.479f, 29.5994f };
					Local_99.f_103[3 /*5*/].f_3 = 263.1569f;
					Local_99.f_103[4 /*5*/] = { 1020.569f, -2148.083f, 30.5334f };
					Local_99.f_103[4 /*5*/].f_3 = 259.3002f;
					Local_99.f_103[5 /*5*/] = { 1011.448f, -2146.674f, 29.5516f };
					Local_99.f_103[5 /*5*/].f_3 = 139.4625f;
					Local_99.f_103[6 /*5*/] = { 1013.688f, -2150.349f, 30.5334f };
					Local_99.f_103[6 /*5*/].f_3 = 91.3056f;
					Local_99.f_103[7 /*5*/] = { 1011.563f, -2153.055f, 29.5516f };
					Local_99.f_103[7 /*5*/].f_3 = 44.0468f;
					Local_99.f_103[8 /*5*/] = { 1008.21f, -2156.475f, 29.5516f };
					Local_99.f_103[8 /*5*/].f_3 = 347.5848f;
					Local_99.f_103[9 /*5*/] = { 1007.324f, -2161.736f, 29.5516f };
					Local_99.f_103[9 /*5*/].f_3 = 172.5634f;
					Local_99.f_179[0 /*5*/] = { 1007.872f, -2138.394f, 29.5516f };
					Local_99.f_179[0 /*5*/].f_3 = 139.8753f;
					Local_99.f_179[1 /*5*/] = { 1013.982f, -2145.138f, 29.5516f };
					Local_99.f_179[1 /*5*/].f_3 = 259.47f;
					Local_99.f_179[2 /*5*/] = { 1008.767f, -2160.593f, 29.5516f };
					Local_99.f_179[2 /*5*/].f_3 = 200.1719f;
					break;
				
				case 18:
					Local_99.f_103[0 /*5*/] = { 1016.825f, -2498.752f, 27.3493f };
					Local_99.f_103[0 /*5*/].f_3 = 61.8849f;
					Local_99.f_103[1 /*5*/] = { 996.0087f, -2540.799f, 27.3073f };
					Local_99.f_103[1 /*5*/].f_3 = 3.7927f;
					Local_99.f_103[2 /*5*/] = { 1017.77f, -2493.367f, 27.3879f };
					Local_99.f_103[2 /*5*/].f_3 = 88.4198f;
					Local_99.f_103[3 /*5*/] = { 1012.715f, -2506.288f, 27.302f };
					Local_99.f_103[3 /*5*/].f_3 = 27.7498f;
					Local_99.f_103[4 /*5*/] = { 996.7639f, -2512.485f, 27.302f };
					Local_99.f_103[4 /*5*/].f_3 = 40.6136f;
					Local_99.f_103[5 /*5*/] = { 1015.915f, -2514.646f, 27.3035f };
					Local_99.f_103[5 /*5*/].f_3 = 56.6315f;
					Local_99.f_103[6 /*5*/] = { 1011.236f, -2524.491f, 27.3083f };
					Local_99.f_103[6 /*5*/].f_3 = 15.7729f;
					Local_99.f_103[7 /*5*/] = { 1006.954f, -2527.826f, 27.3043f };
					Local_99.f_103[7 /*5*/].f_3 = 101.1154f;
					Local_99.f_103[8 /*5*/] = { 999.3998f, -2523.023f, 27.302f };
					Local_99.f_103[8 /*5*/].f_3 = 354.1063f;
					Local_99.f_103[9 /*5*/] = { 994.9509f, -2527.176f, 27.302f };
					Local_99.f_103[9 /*5*/].f_3 = 125.381f;
					Local_99.f_179[0 /*5*/] = { 1012.638f, -2502.169f, 27.302f };
					Local_99.f_179[0 /*5*/].f_3 = 316.6046f;
					Local_99.f_179[1 /*5*/] = { 1013.986f, -2523.53f, 27.3055f };
					Local_99.f_179[1 /*5*/].f_3 = 240.5153f;
					Local_99.f_179[2 /*5*/] = { 996.9083f, -2523.664f, 27.302f };
					Local_99.f_179[2 /*5*/].f_3 = 164.8845f;
					break;
				
				case 19:
					Local_99.f_103[0 /*5*/] = { -266.5881f, 190.2768f, 84.3252f };
					Local_99.f_103[0 /*5*/].f_3 = 121.811f;
					Local_99.f_103[1 /*5*/] = { -271.8751f, 195.5884f, 84.6149f };
					Local_99.f_103[1 /*5*/].f_3 = 274.2204f;
					Local_99.f_103[2 /*5*/] = { -265.1418f, 201.9027f, 84.4806f };
					Local_99.f_103[2 /*5*/].f_3 = 181.8879f;
					Local_99.f_103[3 /*5*/] = { -261.9281f, 201.8817f, 84.2857f };
					Local_99.f_103[3 /*5*/].f_3 = 253.3033f;
					Local_99.f_103[4 /*5*/] = { -260.6143f, 186.3196f, 84.0337f };
					Local_99.f_103[4 /*5*/].f_3 = 4.0892f;
					Local_99.f_103[5 /*5*/] = { -255.9788f, 194.8307f, 83.7181f };
					Local_99.f_103[5 /*5*/].f_3 = 103.808f;
					Local_99.f_103[6 /*5*/] = { -252.9307f, 192.114f, 82.7736f };
					Local_99.f_103[6 /*5*/].f_3 = 262.768f;
					Local_99.f_103[7 /*5*/] = { -242.0461f, 190.5416f, 79.3582f };
					Local_99.f_103[7 /*5*/].f_3 = 200.5955f;
					Local_99.f_103[8 /*5*/] = { -241.619f, 202.893f, 82.2432f };
					Local_99.f_103[8 /*5*/].f_3 = 209.8882f;
					Local_99.f_103[9 /*5*/] = { -235.1685f, 202.9628f, 82.1429f };
					Local_99.f_103[9 /*5*/].f_3 = 338.4766f;
					Local_99.f_179[0 /*5*/] = { -237.4442f, 203.1399f, 82.1887f };
					Local_99.f_179[0 /*5*/].f_3 = 159.4961f;
					Local_99.f_179[1 /*5*/] = { -251.6716f, 193.9603f, 82.6293f };
					Local_99.f_179[1 /*5*/].f_3 = 87.8942f;
					Local_99.f_179[2 /*5*/] = { -266.8874f, 193.015f, 84.3937f };
					Local_99.f_179[2 /*5*/].f_3 = 65.6299f;
					break;
				
				case 20:
					Local_99.f_103[0 /*5*/] = { 534.4465f, -1941.385f, 30.2292f };
					Local_99.f_103[0 /*5*/].f_3 = 311.177f;
					Local_99.f_103[1 /*5*/] = { 558.1476f, -1927.909f, 23.7833f };
					Local_99.f_103[1 /*5*/].f_3 = 342.9807f;
					Local_99.f_103[2 /*5*/] = { 546.3505f, -1928.6f, 23.8219f };
					Local_99.f_103[2 /*5*/].f_3 = 311.7955f;
					Local_99.f_103[3 /*5*/] = { 547.1193f, -1947.377f, 23.9851f };
					Local_99.f_103[3 /*5*/].f_3 = 250.7509f;
					Local_99.f_103[4 /*5*/] = { 572.5258f, -1930.575f, 23.7494f };
					Local_99.f_103[4 /*5*/].f_3 = 346.9088f;
					Local_99.f_103[5 /*5*/] = { 539.3912f, -1923.777f, 23.9851f };
					Local_99.f_103[5 /*5*/].f_3 = 316.7842f;
					Local_99.f_103[6 /*5*/] = { 563.26f, -1920.301f, 23.7598f };
					Local_99.f_103[6 /*5*/].f_3 = 325.4008f;
					Local_99.f_103[7 /*5*/] = { 533.5303f, -1938.4f, 23.9851f };
					Local_99.f_103[7 /*5*/].f_3 = 309.4188f;
					Local_99.f_179[0 /*5*/] = { 548.8199f, -1930.106f, 23.8175f };
					Local_99.f_179[0 /*5*/].f_3 = 159.5928f;
					Local_99.f_179[1 /*5*/] = { 551.0328f, -1946.83f, 23.9851f };
					Local_99.f_179[1 /*5*/].f_3 = 84.4521f;
					Local_99.f_179[2 /*5*/] = { 561.5193f, -1927.552f, 23.7627f };
					Local_99.f_179[2 /*5*/].f_3 = 80.685f;
					break;
				
				case 21:
					Local_99.f_103[0 /*5*/] = { 110.1075f, -2228.434f, 5.1712f };
					Local_99.f_103[0 /*5*/].f_3 = 265.3441f;
					Local_99.f_103[1 /*5*/] = { 109.2036f, -2234.949f, 5.0633f };
					Local_99.f_103[1 /*5*/].f_3 = 271.2665f;
					Local_99.f_103[2 /*5*/] = { 92.4692f, -2228.285f, 5.0333f };
					Local_99.f_103[2 /*5*/].f_3 = 246.2804f;
					Local_99.f_103[3 /*5*/] = { 89.8902f, -2221.848f, 5.0483f };
					Local_99.f_103[3 /*5*/].f_3 = 77.5276f;
					Local_99.f_103[4 /*5*/] = { 119.3045f, -2188.549f, 4.9608f };
					Local_99.f_103[4 /*5*/].f_3 = 260.6882f;
					Local_99.f_103[5 /*5*/] = { 135.5824f, -2185.041f, 5.0909f };
					Local_99.f_103[5 /*5*/].f_3 = 248.253f;
					Local_99.f_103[6 /*5*/] = { 102.5402f, -2183.203f, 4.953f };
					Local_99.f_103[6 /*5*/].f_3 = 254.5778f;
					Local_99.f_103[7 /*5*/] = { 93.2016f, -2199.761f, 5.0431f };
					Local_99.f_103[7 /*5*/].f_3 = 178.9871f;
					Local_99.f_103[8 /*5*/] = { 95.4634f, -2193.558f, 5.0313f };
					Local_99.f_103[8 /*5*/].f_3 = 283.6666f;
					Local_99.f_103[9 /*5*/] = { 99.6321f, -2203.004f, 5.181f };
					Local_99.f_103[9 /*5*/].f_3 = 312.4828f;
					Local_99.f_179[0 /*5*/] = { 95.909f, -2196.279f, 5.0431f };
					Local_99.f_179[0 /*5*/].f_3 = 139.258f;
					Local_99.f_179[1 /*5*/] = { 120.4857f, -2191.816f, 5.0209f };
					Local_99.f_179[1 /*5*/].f_3 = 159.3418f;
					Local_99.f_179[2 /*5*/] = { 109.2645f, -2231.557f, 5.0333f };
					Local_99.f_179[2 /*5*/].f_3 = 62.2714f;
					break;
				
				default:
					Local_99.f_103[0 /*5*/] = { 968.5941f, -1557.899f, 29.6842f };
					Local_99.f_103[0 /*5*/].f_3 = 114.28f;
					Local_99.f_103[1 /*5*/] = { 965.9659f, -1571.214f, 29.5878f };
					Local_99.f_103[1 /*5*/].f_3 = 62.3577f;
					Local_99.f_103[2 /*5*/] = { 951.7892f, -1575.491f, 29.434f };
					Local_99.f_103[2 /*5*/].f_3 = 41.1548f;
					Local_99.f_103[3 /*5*/] = { 939.3943f, -1575.787f, 29.345f };
					Local_99.f_103[3 /*5*/].f_3 = 85.4368f;
					Local_99.f_103[4 /*5*/] = { 928.4522f, -1577.374f, 29.4239f };
					Local_99.f_103[4 /*5*/].f_3 = 336.8404f;
					Local_99.f_103[5 /*5*/] = { 921.6147f, -1573.96f, 29.6373f };
					Local_99.f_103[5 /*5*/].f_3 = 337.606f;
					Local_99.f_103[6 /*5*/] = { 920.303f, -1564.142f, 29.7523f };
					Local_99.f_103[6 /*5*/].f_3 = 52.3963f;
					Local_99.f_103[7 /*5*/] = { 918.5511f, -1552.143f, 29.7808f };
					Local_99.f_103[7 /*5*/].f_3 = 244.4705f;
					Local_99.f_103[8 /*5*/] = { 922.5096f, -1543.686f, 29.8074f };
					Local_99.f_103[8 /*5*/].f_3 = 8.0474f;
					Local_99.f_103[9 /*5*/] = { 910.6829f, -1547.757f, 29.6528f };
					Local_99.f_103[9 /*5*/].f_3 = 217.9933f;
					Local_99.f_103[10 /*5*/] = { 910.2541f, -1557.902f, 29.7034f };
					Local_99.f_103[10 /*5*/].f_3 = 237.5501f;
					Local_99.f_103[11 /*5*/] = { 909.9764f, -1572.07f, 29.791f };
					Local_99.f_103[11 /*5*/].f_3 = 287.341f;
					Local_99.f_179[0 /*5*/] = { 912.0468f, -1562.435f, 29.7522f };
					Local_99.f_179[0 /*5*/].f_3 = 305.0547f;
					Local_99.f_179[1 /*5*/] = { 903.5677f, -1559.325f, 29.6796f };
					Local_99.f_179[1 /*5*/].f_3 = 301.2764f;
					Local_99.f_179[2 /*5*/] = { 970.6998f, -1558.555f, 29.6813f };
					Local_99.f_179[2 /*5*/].f_3 = 43.0116f;
					break;
			}
			break;
	}
}

var func_160()
{
	if (Local_99.f_195 != -1)
	{
		return Local_99.f_195;
	}
	Local_99.f_195 = unk_0xB5BF1B58C833F7A9(0, 3);
	return Local_99.f_195;
}

int func_161(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_162(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xD9E8CA806A80203D())
		{
			func_10(uParam0, 0, 0);
		}
	}
}

void func_163()
{
	char* sVar0;
	
	func_168();
	if (unk_0x08BA6DD398CA197C(iLocal_723, 9))
	{
		return;
	}
	if (func_1048())
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_723, 0))
		{
			unk_0x0756AF366187C194("DisableFlightMusic", 1);
			unk_0x0756AF366187C194("WantedMusicDisabled", 1);
			unk_0x88B0F0DC270164B7(&iLocal_723, 0);
		}
		if (!unk_0x08BA6DD398CA197C(iLocal_723, 1))
		{
			if (!func_371())
			{
				sVar0 = "EXEC1_UNDER_ATTACK_START";
			}
			else
			{
				sVar0 = "EXEC1_DEFEND_FLEEING_START";
			}
			if (unk_0xB49DAD10DC051295(sVar0))
			{
				unk_0x88B0F0DC270164B7(&iLocal_723, 1);
			}
		}
		if (!func_371())
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_723, 3))
			{
				if (unk_0x08BA6DD398CA197C(Local_99.f_1, 13))
				{
					if (unk_0xB49DAD10DC051295("EXEC1_UNDER_ATTACK_ARRIVE_SMA"))
					{
						unk_0x88B0F0DC270164B7(&iLocal_723, 3);
					}
				}
			}
		}
		if (!func_371())
		{
			if (unk_0x08BA6DD398CA197C(Local_99.f_1, 1))
			{
				if (!unk_0x08BA6DD398CA197C(iLocal_723, 4))
				{
					if (unk_0xB49DAD10DC051295("EXEC1_UNDER_ATTACK_STOP"))
					{
						unk_0x88B0F0DC270164B7(&iLocal_723, 4);
					}
				}
			}
		}
		if (!unk_0x08BA6DD398CA197C(iLocal_723, 6))
		{
			if ((((unk_0x08BA6DD398CA197C(Local_99.f_1, 3) || unk_0x08BA6DD398CA197C(Local_99.f_1, 15)) || unk_0x08BA6DD398CA197C(Local_99.f_1, 5)) || unk_0x08BA6DD398CA197C(Local_99.f_1, 9)) || unk_0x08BA6DD398CA197C(Local_99.f_1, 8))
			{
				if (unk_0xB49DAD10DC051295("EXEC1_UNDER_ATTACK_FAIL"))
				{
					unk_0x88B0F0DC270164B7(&iLocal_723, 6);
				}
			}
		}
		if (func_371())
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_723, 16))
			{
				if (Local_99.f_215 == -1)
				{
					if (func_164("DCONTRA_OBJ4"))
					{
						if (unk_0xB49DAD10DC051295("EXEC1_DEFEND_FLEEING_RETRIEVE_SMA"))
						{
							unk_0x88B0F0DC270164B7(&iLocal_723, 16);
						}
					}
				}
			}
			if (!unk_0x08BA6DD398CA197C(iLocal_723, 17))
			{
				if (Local_99.f_215 != -1)
				{
					if (unk_0xB49DAD10DC051295("EXEC1_DEFEND_FLEEING_RETURN_SMA"))
					{
						unk_0x88B0F0DC270164B7(&iLocal_723, 17);
					}
				}
			}
			if (!unk_0x08BA6DD398CA197C(iLocal_723, 18))
			{
				if (unk_0x08BA6DD398CA197C(Local_99.f_1, 4))
				{
					if (unk_0xB49DAD10DC051295("EXEC1_DEFEND_FLEEING_STOP"))
					{
						unk_0x88B0F0DC270164B7(&iLocal_723, 18);
					}
				}
			}
		}
	}
}

int func_164(char* sParam0)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	if (!func_167())
	{
		return 0;
	}
	if (Global_1312571 == 11)
	{
		if (unk_0x8BC27E98D5626ED8(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return 0;
	}
	return func_165(sParam0);
}

bool func_165(char* sParam0)
{
	if (!func_167())
	{
		return 0;
	}
	if (Global_1312571 == 11)
	{
		return func_166(sParam0);
	}
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_12));
}

bool func_166(char* sParam0)
{
	if (!func_167())
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_16));
}

int func_167()
{
	if (Global_1312571 == 20)
	{
		return 0;
	}
	return 1;
}

void func_168()
{
	if (unk_0x08BA6DD398CA197C(iLocal_723, 8))
	{
		if (unk_0x08BA6DD398CA197C(iLocal_723, 9))
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_723, 10))
			{
				if (unk_0x08BA6DD398CA197C(iLocal_723, 11))
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_723, 12))
					{
						unk_0x5A6B86444D23FCA8(1);
						unk_0x0756AF366187C194("AllowScoreAndRadio", 0);
					}
				}
				if (!unk_0x08BA6DD398CA197C(iLocal_723, 15))
				{
					if (unk_0xB49DAD10DC051295("APT_COUNTDOWN_30S_KILL"))
					{
						unk_0x88B0F0DC270164B7(&iLocal_723, 15);
					}
				}
				if (unk_0x08BA6DD398CA197C(iLocal_723, 15))
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_723, 13))
					{
						if (unk_0xB49DAD10DC051295("APT_FADE_IN_RADIO"))
						{
							unk_0x88B0F0DC270164B7(&iLocal_723, 13);
						}
					}
					if (unk_0x08BA6DD398CA197C(iLocal_723, 13))
					{
						unk_0x88B0F0DC270164B7(&iLocal_723, 10);
					}
				}
			}
		}
	}
}

void func_169()
{
	struct<3> Var0;
	float fVar3;
	
	if (!func_1048() && !func_369())
	{
		return;
	}
	if (unk_0x08BA6DD398CA197C(iLocal_722, 15))
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_722, 16))
		{
			if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
			{
				if (unk_0x34E98013CA352B7E() == 0)
				{
					unk_0xCF03D9C8A7F1577C(5);
					unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), 2, 0);
					unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
					unk_0x88B0F0DC270164B7(&iLocal_722, 16);
				}
			}
		}
		return;
	}
	if (func_371())
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_2[0 /*10*/].f_2))
		{
			Var0 = { unk_0xC59DF10B4FC39DF8(unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2), 0) };
		}
	}
	else
	{
		Var0 = { func_40() };
	}
	fVar3 = unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Var0);
	if (!unk_0x08BA6DD398CA197C(iLocal_722, 17))
	{
		if (fVar3 < 250000f)
		{
			unk_0xCF03D9C8A7F1577C(0);
			unk_0x88B0F0DC270164B7(&iLocal_722, 17);
		}
	}
	else if (fVar3 > 360000f)
	{
		unk_0xCF03D9C8A7F1577C(5);
		unk_0x09C86C0C5CA26B1E(&iLocal_722, 17);
	}
}

void func_170()
{
	struct<3> Var0;
	
	if (!func_1048() && !func_369())
	{
		return;
	}
	if (func_371())
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_2[0 /*10*/].f_2))
		{
			Var0 = { unk_0xC59DF10B4FC39DF8(unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2), 0) };
		}
	}
	else
	{
		Var0 = { func_40() };
	}
	if (!func_59(Var0, 0f, 0f, 0f, 0))
	{
		func_171(169, Var0, &uLocal_837, 1140457472, 1144750080, 0);
	}
}

void func_171(int iParam0, struct<3> Param1, var uParam4, float fParam5, float fParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	
	if (((func_220(unk_0x0C1D3C552325765B()) && !func_219(unk_0x0C1D3C552325765B())) && !unk_0x08BA6DD398CA197C(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1, 8)) && (func_218(unk_0x0C1D3C552325765B()) || func_217(unk_0x0C1D3C552325765B())))
	{
		return;
	}
	Global_1750560 = { Param1 };
	fVar0 = unk_0x2A488C176D52CCA5(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Param1);
	func_215(iParam0, fVar0);
	if (unk_0x84C71F36E7D97756() && unk_0xAD490CD811854704() == 15)
	{
		if (func_214(unk_0x0C1D3C552325765B()) || func_212(unk_0x0C1D3C552325765B()))
		{
			if (!unk_0x7645014AAA2B6DDF(1344549371))
			{
				unk_0xB3D65EB851744F28(1344549371);
			}
		}
		else if (unk_0x7645014AAA2B6DDF(1344549371))
		{
			unk_0x2099DD912801B1F4(1344549371);
		}
	}
	if (fVar0 < fParam5)
	{
		if (!func_211(unk_0x0C1D3C552325765B(), 21))
		{
			func_210(Param1, 1, 0);
		}
		if (!*uParam4 && func_1122(unk_0x0C1D3C552325765B(), 1, 1))
		{
			*uParam4 = 1;
			if (func_209(iParam0))
			{
				unk_0xACD6D334FD769B0C(func_208(iParam0));
				if (func_207(iParam0, -1))
				{
					unk_0xCF03D9C8A7F1577C(0);
					if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0)
					{
						unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), 0, 1);
						unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 1);
					}
					unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 0);
				}
			}
			if (func_206(iParam0))
			{
				fVar1 = func_205(iParam0);
				if (fVar1 != 1f)
				{
					func_202(fVar1);
					unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 1);
				}
			}
			if (!Global_2391043)
			{
				if (func_201(iParam0) && func_214(unk_0x0C1D3C552325765B()))
				{
					func_199(1);
					func_198(2);
				}
			}
			func_197(19);
		}
	}
	else
	{
		if (fVar0 > fParam6)
		{
			if (func_196(unk_0x0C1D3C552325765B(), 19))
			{
				func_195(19);
			}
		}
		if (*uParam4 && func_1122(unk_0x0C1D3C552325765B(), 1, 1))
		{
			*uParam4 = 0;
			if (func_209(iParam0))
			{
				if (unk_0x08BA6DD398CA197C(Global_1750560.f_3, 0))
				{
					unk_0xACD6D334FD769B0C(1f);
					unk_0xCF03D9C8A7F1577C(5);
					unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 0);
				}
			}
			if (func_206(iParam0))
			{
				func_194();
				unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 1);
			}
			if (iParam7 && !func_220(unk_0x0C1D3C552325765B()))
			{
				if (func_192(unk_0x0C1D3C552325765B()) != 152)
				{
					func_174();
				}
			}
			if (func_173(2))
			{
				func_199(0);
				func_172(2);
			}
		}
	}
}

void func_172(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4698.f_22), iParam0);
}

bool func_173(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_2482149.f_4698.f_22, iParam0);
}

void func_174()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_24), &Global_2408520, 2);
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_26), &Global_2408522, 17);
	func_190();
	func_177(1, 1);
	func_175();
}

void func_175()
{
	func_176(0, 0);
}

void func_176(int iParam0, int iParam1)
{
	Global_2404993.f_22 = iParam0;
	Global_2404993.f_23 = iParam1;
}

void func_177(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_43), &Global_2408539, 310);
	}
	else
	{
		Global_2404993.f_43 = { Global_2408539 };
		Global_2404993.f_43.f_49 = { Global_2408539.f_49 };
		Global_2404993.f_43.f_52 = Global_2408539.f_52;
		Global_2404993.f_43.f_53 = Global_2408539.f_53;
	}
	if (bParam0)
	{
		func_189();
	}
	func_180(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	func_179(0);
	func_178();
}

void func_178()
{
	struct<4> Var0;
	
	if (Global_2404993.f_475.f_1 == unk_0xEAE20F1125B83888())
	{
		Global_2404993.f_475 = { Var0 };
	}
}

void func_179(bool bParam0)
{
	if (bParam0)
	{
		Global_2404993.f_648 = 0;
	}
	else
	{
		Global_2404993.f_648 = 1;
	}
}

void func_180(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_188())
		{
			func_187();
		}
		Global_2404993.f_649.f_504 = iParam1;
		Global_2404993.f_649.f_505 = iParam2;
		Global_2404993.f_649.f_506 = iParam10;
		func_185();
		func_184(8, 0, 0);
		Global_2404993.f_649.f_507 = iParam11;
		Global_2404993.f_649.f_510 = iParam3;
		Global_2404993.f_649.f_511 = iParam4;
		Global_2404993.f_649.f_508 = iParam5;
		Global_2404993.f_649.f_509 = iParam6;
		Global_2404993.f_649.f_512 = iParam7;
		Global_2404993.f_649.f_513 = iParam8;
		Global_2404993.f_649.f_514 = iParam9;
		Global_2404993.f_1682 = 1;
	}
	else
	{
		func_181();
	}
}

void func_181()
{
	if (func_188() && !func_183())
	{
		func_187();
	}
	if (func_183())
	{
		func_182();
	}
	else
	{
		func_185();
		func_184(0, 0, 0);
		Global_2404993.f_1682 = 0;
		Global_2404993.f_1681 = 0;
	}
}

void func_182()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_649), &(Global_2404993.f_1165), 516);
	Global_2404993.f_475 = { Global_2404993.f_479 };
	if (unk_0xEAE20F1125B83888() == Global_2404993.f_649.f_515)
	{
		Global_2404993.f_1681 = 0;
	}
}

int func_183()
{
	if ((Global_2404993.f_1681 && !unk_0xEAE20F1125B83888() == Global_2404993.f_1165.f_515) && unk_0x96549B1C2E196049(Global_2404993.f_1165.f_515))
	{
		return 1;
	}
	return 0;
}

void func_184(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2411307 = 0;
	}
	Global_2404993.f_475 = iParam0;
	Global_2404993.f_475.f_1 = unk_0xEAE20F1125B83888();
	Global_2404993.f_475.f_2 = iParam1;
	Global_2404993.f_475.f_3 = iParam2;
}

void func_185()
{
	if (func_188() && !func_183())
	{
		func_187();
	}
	func_186();
	Global_2404993.f_649 = 0;
}

void func_186()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404993.f_649.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_187()
{
	if (func_183())
	{
		if (Global_2404993.f_649.f_515 == Global_2404993.f_1165.f_515)
		{
			return;
		}
	}
	if (!unk_0xEAE20F1125B83888() == Global_2404993.f_649.f_515)
	{
		unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_1165), &(Global_2404993.f_649), 516);
		Global_2404993.f_479 = { Global_2404993.f_475 };
		Global_2404993.f_1681 = 1;
	}
}

int func_188()
{
	if ((Global_2404993.f_1682 && !unk_0xEAE20F1125B83888() == Global_2404993.f_649.f_515) && unk_0x96549B1C2E196049(Global_2404993.f_649.f_515))
	{
		return 1;
	}
	return 0;
}

void func_189()
{
	unk_0x213AEB2B90CBA7AC(&(Global_2404993.f_353), &Global_2408849, 121);
}

void func_190()
{
	func_191();
	Global_2404993.f_1813 = 0;
}

void func_191()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2404993.f_1814[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

int func_192(int iParam0)
{
	if (func_193(iParam0, 0))
	{
		return Global_1614576[iParam0 /*324*/].f_10.f_32;
	}
	return -1;
}

int func_193(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/].f_10.f_32 != -1 || (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_31 != -1))
	{
		return 1;
	}
	return 0;
}

void func_194()
{
	if (unk_0x96549B1C2E196049(Global_2482149.f_4694))
	{
		if (!Global_2482149.f_4694 == unk_0xEAE20F1125B83888() && Global_2482149.f_4693 < 1f)
		{
			return;
		}
	}
	Global_2482149.f_4694 = -1;
	Global_2482149.f_4693 = 1f;
}

void func_195(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_4), iParam0);
}

bool func_196(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_10.f_4, iParam1);
}

void func_197(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_4), iParam0);
}

void func_198(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_4698.f_22), iParam0);
}

void func_199(int iParam0)
{
	if (func_200() && iParam0)
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

int func_200()
{
	if ((((Global_978175 != -1 && Global_978175 != 33) && Global_978175 != 35) && Global_978175 != 37) && Global_978175 != 21)
	{
		return 1;
	}
	return 0;
}

int func_201(int iParam0)
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

void func_202(float fParam0)
{
	float fVar0;
	
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_203())
	{
		return;
	}
	fVar0 = (Global_2482149.f_4693 - fParam0);
	if (unk_0x96549B1C2E196049(Global_2482149.f_4694))
	{
		if (!Global_2482149.f_4694 == unk_0xEAE20F1125B83888() && unk_0x7466327978A6A24C(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2482149.f_4693 = fParam0;
	Global_2482149.f_4694 = unk_0xEAE20F1125B83888();
}

int func_203()
{
	switch (func_204())
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

int func_204()
{
	return Global_25185;
}

float func_205(int iParam0)
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
			return 0f;
		
		default:
	}
	return 1f;
}

int func_206(int iParam0)
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
			return 1;
		
		default:
	}
	return 0;
}

int func_207(int iParam0, int iParam1)
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

float func_208(int iParam0)
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
		
		case 185:
			return 0f;
		
		default:
	}
	return 1f;
}

int func_209(int iParam0)
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
			return 1;
		
		default:
	}
	return 0;
}

void func_210(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2404993.f_43.f_49 = { Param0 };
	Global_2404993.f_43.f_52 = iParam3;
	Global_2404993.f_43.f_53 = iParam4;
}

bool func_211(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_208, iParam1);
}

int func_212(int iParam0)
{
	if (func_213(iParam0))
	{
		if (func_214(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_213(int iParam0)
{
	if (iParam0 != func_55())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_55())
		{
			return Global_1614576[iParam0 /*324*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_214(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_196(iParam0, 9);
	}
	return 0;
}

void func_215(int iParam0, float fParam1)
{
	int iVar0;
	
	iVar0 = func_216(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (fParam1 < IntToFloat(iVar0))
	{
		func_1029();
	}
}

int func_216(int iParam0)
{
	switch (iParam0)
	{
		case 152:
			return Global_262145.f_10954;
		
		case 142:
			return Global_262145.f_10942;
		
		case 157:
			return Global_262145.f_10909;
		
		case 159:
			return Global_262145.f_10892;
		
		case 162:
			return Global_262145.f_11003;
		
		case 173:
			return 100;
		
		case 170:
			return 100;
		
		default:
	}
	return -1;
}

int func_217(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_1614576[iVar0 /*324*/].f_1, 0);
	}
	return 0;
}

int func_218(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x08BA6DD398CA197C(Global_1614576[iVar0 /*324*/].f_1, 7);
	}
	return 0;
}

bool func_219(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 2);
}

int func_220(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1614576[iVar0 /*324*/] != -1;
	}
	return 0;
}

void func_221()
{
	if (!func_371())
	{
		return;
	}
	if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 4))
	{
		return;
	}
	if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 18))
	{
		return;
	}
	if (unk_0x08BA6DD398CA197C(Local_99.f_1, 17))
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_2[0 /*10*/].f_2) && unk_0xB480350E4250D92A(Local_99.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_99.f_2[0 /*10*/].f_2))
			{
				if (!unk_0x374C36A4A2089997(unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2)))
				{
					func_225(&(Local_99.f_2[0 /*10*/].f_2));
				}
			}
		}
		return;
	}
	if (unk_0x08BA6DD398CA197C(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1, 15))
	{
		return;
	}
	if (unk_0x3CF373660FCFAFCE(Local_99.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_99.f_2[0 /*10*/].f_2))
		{
			if (func_222(Local_99.f_2[0 /*10*/].f_2))
			{
				if (unk_0xB480350E4250D92A(Local_99.f_2[0 /*10*/].f_2))
				{
					unk_0x3E5EC048A1245FD5(unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2), 1, 1);
					unk_0x88B0F0DC270164B7(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1), 15);
				}
			}
		}
	}
}

int func_222(var uParam0)
{
	if (unk_0x2042D9774DF3D324(uParam0))
	{
		return 1;
	}
	if (func_223(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_223(var uParam0)
{
	if (!unk_0xD9E8CA806A80203D())
	{
		return 0;
	}
	if (!unk_0x3CF373660FCFAFCE(uParam0))
	{
		return 0;
	}
	if (func_224(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_224(var uParam0)
{
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		unk_0xDC64FA270C733B30(uParam0);
		return unk_0xB480350E4250D92A(uParam0);
	}
	return 0;
}

void func_225(var uParam0)
{
	var uVar0;
	
	if (unk_0x0E091C9F3918F674(*uParam0))
	{
		if (!unk_0xB480350E4250D92A(*uParam0))
		{
		}
	}
	if (unk_0x3CF373660FCFAFCE(*uParam0))
	{
		uVar0 = unk_0x63CE7A3848B84093(*uParam0);
		unk_0xFFB39FA225A945DB(&uVar0);
	}
}

void func_226(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	
	if (func_359(iParam2))
	{
		return;
	}
	fVar45 = -1f;
	iVar46 = -1;
	iVar47 = -1;
	iVar49 = 0;
	iVar50 = 0;
	uParam3->f_36 = 0;
	if (func_357() || iParam2 == 24)
	{
		if (func_307(uParam1, iParam2, uParam3, Global_1573696, 0, func_355()))
		{
			func_306(1);
			if ((!func_304() && !func_302()) || unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 1))
			{
				if (func_301())
				{
					func_298();
				}
				else
				{
					unk_0xCF4C2CE3511D92EA(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_297(1);
						Global_1573696 = 0;
						iVar54 = -1;
						if (Global_1573844 != 1)
						{
							func_296(uParam1);
							if (unk_0x08BA6DD398CA197C(uParam3->f_33, 7))
							{
								unk_0x09C86C0C5CA26B1E(&(uParam3->f_33), 7);
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
								if (func_1122(unk_0x81C85E54237F8A2E(iVar52), 0, 1))
								{
									iVar35 = unk_0x81C85E54237F8A2E(iVar52);
									if (!func_34(iVar35, 0))
									{
										if ((unk_0x0C67E8DCA323B26C(iVar35, unk_0x0C1D3C552325765B()) || Global_2421327[iVar35 /*353*/].f_235 != -1) || func_295(iVar35))
										{
											iVar44 = iVar35;
											if (func_213(iVar35))
											{
												iVar1[iVar44] = iVar55;
												iVar55++;
												iVar0++;
												func_292(&iVar1, iVar35, &iVar55, &iVar0);
											}
										}
									}
								}
								iVar52++;
							}
						}
						if (!func_289(unk_0x0C1D3C552325765B(), 0))
						{
							bVar34 = iVar0 > 0;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							if (func_287())
							{
								if (func_1122(unk_0x81C85E54237F8A2E(iVar52), 0, 1))
								{
									iVar35 = unk_0x81C85E54237F8A2E(iVar52);
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
							if ((func_286(iVar35) && func_281(iVar35, iParam2)) && func_1122(iVar35, 0, 1))
							{
								iVar44 = iVar35;
								iVar42 = Global_1588660[iVar44 /*532*/].f_201.f_6;
								Var38 = { func_276(iVar35) };
								if (iVar35 == unk_0x0C1D3C552325765B())
								{
									uParam3->f_35 = iVar53;
								}
								StringCopy(&(uParam3->f_1), unk_0xCF66111B26743875(iVar35), 64);
								*(uParam4[iVar52 /*13*/]) = { func_57(iVar35) };
								iVar37 = func_270(iVar35);
								sVar36 = "";
								if (iVar37 != 0)
								{
									sVar36 = unk_0x17F6632C0BD7F15A(iVar37);
								}
								Global_1573696++;
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
									if (!func_287())
									{
										iVar50 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_265(&iVar43, &fVar45, (uParam0[iVar52 /*49*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_264(iParam5, 1, 0, 0), 16);
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
								iVar51 = func_258(iVar35, 0);
								if (bVar34)
								{
									if (func_257(iVar35, 1) && iVar1[iVar44] != -1)
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
								if (func_256(iParam5))
								{
									func_255(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar43, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								else
								{
									func_255(iVar35, uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar43, iVar51, iVar50, fVar45, iVar46, iVar47, &((uParam0[iVar52 /*49*/])->f_39), &((uParam0[iVar52 /*49*/])->f_43), (uParam0[iVar52 /*49*/])->f_47, iVar48, bParam6);
								}
								unk_0x88B0F0DC270164B7(&iVar49, iVar35);
								iVar53++;
							}
							iVar52++;
						}
						iVar52 = 0;
						while (iVar52 < 32)
						{
							iVar35 = unk_0x81C85E54237F8A2E(iVar52);
							if (func_1122(iVar35, 0, 1) && !unk_0x08BA6DD398CA197C(iVar49, iVar35))
							{
								iVar35 = unk_0x81C85E54237F8A2E(iVar52);
							}
							else
							{
								iVar35 = func_55();
							}
							if (func_286(iVar35))
							{
								if (func_1122(unk_0x81C85E54237F8A2E(iVar52), 0, 1))
								{
									iVar44 = iVar35;
									iVar42 = Global_1588660[iVar44 /*532*/].f_201.f_6;
									Var38 = { func_276(iVar35) };
									*(uParam4[iVar52 /*13*/]) = { func_57(iVar35) };
									iVar37 = func_270(iVar35);
									sVar36 = "";
									if (iVar37 != 0)
									{
										sVar36 = unk_0x17F6632C0BD7F15A(iVar37);
									}
									Global_1573696++;
									iVar51 = func_258(iVar35, 1);
									if (bVar34)
									{
										if (func_257(iVar35, 1))
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
									func_239(iVar35, unk_0xCF66111B26743875(iVar35), uParam1, uParam3, iVar53, Var38, sVar36, iVar42, iVar51, iVar50);
									iVar53++;
								}
							}
							iVar52++;
						}
						if (unk_0x08BA6DD398CA197C(uParam3->f_33, 11))
						{
							func_236(uParam3, uParam1);
						}
						func_9(&(uParam3->f_21));
						func_235();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0x08BA6DD398CA197C(uParam3->f_33, 7))
						{
							func_234(uParam3, uParam1);
							func_233(uParam1, 0, 1);
							unk_0x88B0F0DC270164B7(&(uParam3->f_33), 7);
						}
						func_234(uParam3, uParam1);
						if (!unk_0x08BA6DD398CA197C(uParam3->f_33, 11))
						{
							unk_0x88B0F0DC270164B7(&(uParam3->f_33), 11);
						}
						if (func_229(uParam3))
						{
							Global_1573844 = 1;
						}
						func_227(uParam3);
						if (Global_1573844 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1573844 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x1E3F61C2C1E29520(*uParam1))
					{
						unk_0x1373E5003F76E429(7);
						unk_0x04F50370A3D0809C(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x1373E5003F76E429(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_235();
			func_297(0);
			if (unk_0x08BA6DD398CA197C(uParam3->f_33, 7))
			{
				unk_0x09C86C0C5CA26B1E(&(uParam3->f_33), 7);
			}
			if (unk_0x08BA6DD398CA197C(uParam3->f_33, 10))
			{
				unk_0x09C86C0C5CA26B1E(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x9AA8EEC80385B281();
}

void func_227(var uParam0)
{
	if (!func_11(&(uParam0->f_21)))
	{
		func_10(&(uParam0->f_21), 0, 0);
	}
	else if (func_6(&(uParam0->f_21), 250, 0))
	{
		func_9(&(uParam0->f_21));
		func_228(0);
	}
}

void func_228(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573844 != 2)
		{
			Global_1573844 = 2;
		}
	}
	else
	{
		switch (Global_1573844)
		{
			case 0:
				Global_1573844 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_229(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_37;
	iVar15 = unk_0x81C85E54237F8A2E(uParam0->f_37);
	if (iVar15 != func_55() && func_1122(iVar15, 0, 1))
	{
		Var2 = { func_57(iVar15) };
		iVar1 = func_232(uParam0, uParam0->f_37);
		if (func_231(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xA25BF6B301600C75(&Var2))
					{
						if (unk_0x0E815ECD60F5CF3E(&Var2))
						{
							iVar16 = 1;
							func_230(uParam0, iVar0, 2);
						}
					}
					else if (unk_0xBB824ACC814BB18A(&Var2))
					{
						iVar16 = 1;
						func_230(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xA25BF6B301600C75(&Var2))
					{
						if (!unk_0x0E815ECD60F5CF3E(&Var2))
						{
							iVar16 = 1;
							func_230(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_230(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xA25BF6B301600C75(&Var2))
					{
						if (!unk_0xBB824ACC814BB18A(&Var2))
						{
							iVar16 = 1;
							func_230(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0xBB824ACC814BB18A(&Var2))
					{
						iVar16 = 1;
						func_230(uParam0, iVar0, 0);
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

void func_230(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_231(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xD478D67F6AAE84CA(&uParam0, 13);
}

var func_232(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_233(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xB9D4F4DE7E7EC038(*uParam0, "COLLAPSE"))
	{
		unk_0x5CC02BB872FEF340(iParam1);
		unk_0xE73340DA551C95E1();
	}
	if (iParam2 == 1)
	{
		if (unk_0xB9D4F4DE7E7EC038(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xE73340DA551C95E1();
		}
	}
}

void func_234(var uParam0, var uParam1)
{
	if (!unk_0x08BA6DD398CA197C(uParam0->f_33, 10))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam1, "SET_HIGHLIGHT");
		unk_0x7CBFB9F4AF33C67E(uParam0->f_35);
		unk_0xE73340DA551C95E1();
		unk_0x88B0F0DC270164B7(&(uParam0->f_33), 10);
	}
}

void func_235()
{
	if (Global_1573844 != 0)
	{
		Global_1573844 = 0;
	}
}

void func_236(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x81C85E54237F8A2E(iVar0);
		if (iVar2 != func_55())
		{
			if (func_1122(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_238(uParam0->f_38[iVar0 /*2*/], 0);
					func_237(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1588660[iVar0 /*532*/].f_201.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_237(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		if (unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_ICON"))
		{
			unk_0x7CBFB9F4AF33C67E(iParam1);
			unk_0x7CBFB9F4AF33C67E(iParam2);
			if (iParam2 == 65)
			{
				unk_0x7CBFB9F4AF33C67E(iParam3);
			}
			unk_0xE73340DA551C95E1();
		}
	}
}

int func_238(int iParam0, bool bParam1)
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

void func_239(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_254() && iParam4 < func_253())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1573698)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573844 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xB9D4F4DE7E7EC038(*uParam2, sVar1))
		{
			unk_0x7CBFB9F4AF33C67E(iParam4);
			if (unk_0x08BA6DD398CA197C(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_252("");
			}
			else
			{
				unk_0x7CBFB9F4AF33C67E(iParam10);
			}
			func_252(sParam1);
			unk_0x7CBFB9F4AF33C67E(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_252("");
			}
			else
			{
				unk_0x7CBFB9F4AF33C67E(65);
			}
			unk_0x7CBFB9F4AF33C67E(-1);
			func_252("");
			if (uParam3->f_108 == 6)
			{
				func_252("");
			}
			else
			{
				func_252(&sParam5);
			}
			func_244(uParam3, iParam0);
			unk_0x256E5E9EBF5975E9(sParam9);
			unk_0x256E5E9EBF5975E9(sParam9);
			if (func_243(uParam3))
			{
				func_242("DPAD_FRIEND");
			}
			else if (func_241(uParam3))
			{
				func_242("DPAD_FRIEND");
			}
			else if (func_240(uParam3))
			{
				func_242("DPAD_CREW");
			}
			else
			{
				func_242("");
			}
			unk_0xE73340DA551C95E1();
		}
	}
}

bool func_240(var uParam0)
{
	return unk_0x08BA6DD398CA197C(uParam0->f_33, 6);
}

bool func_241(var uParam0)
{
	return unk_0x08BA6DD398CA197C(uParam0->f_33, 5);
}

void func_242(char* sParam0)
{
	unk_0x709662CF2BD061A4(sParam0);
	unk_0x1E77BE8F4283FA05();
}

int func_243(var uParam0)
{
	if (func_241(uParam0) && func_240(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_244(var uParam0, int iParam1)
{
	if (func_251(iParam1))
	{
		unk_0x7CBFB9F4AF33C67E(121);
	}
	else if (func_245(iParam1))
	{
		unk_0x7CBFB9F4AF33C67E(122);
	}
	else
	{
		unk_0x5CC02BB872FEF340(uParam0->f_36);
	}
}

int func_245(int iParam0)
{
	if ((func_1122(iParam0, 0, 1) && func_249()) && func_246(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_246(int iParam0, bool bParam1)
{
	return func_247(iParam0, bParam1, 1);
}

int func_247(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_248(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1614576[iParam0 /*324*/].f_10;
	if (iVar0 != func_55() && Global_1614576[iVar0 /*324*/].f_10.f_234 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_248(int iParam0, int iParam1)
{
	if (iParam0 != func_55())
	{
		if (Global_1614576[iParam0 /*324*/].f_10 != func_55())
		{
			if (Global_1614576[iParam0 /*324*/].f_10 == iParam0 && Global_1614576[iParam0 /*324*/].f_10.f_234 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_249()
{
	if (func_220(unk_0x0C1D3C552325765B()) || func_250())
	{
		return 0;
	}
	return 1;
}

int func_250()
{
	switch (func_192(unk_0x0C1D3C552325765B()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
			return 1;
		
		default:
	}
	return 0;
}

int func_251(int iParam0)
{
	if ((func_1122(iParam0, 0, 1) && func_249()) && func_248(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_252(char* sParam0)
{
	unk_0x481EA0389B099920(sParam0);
}

int func_253()
{
	int iVar0;
	
	if (Global_1573698)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_254()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573698)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_255(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, char* sParam17, int iParam18, int iParam19, bool bParam20)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_254() && iParam3 < func_253())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1573698)
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
		if (Global_1573844 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x1E3F61C2C1E29520(*uParam1))
		{
			if (unk_0xB9D4F4DE7E7EC038(*uParam1, sVar1))
			{
				unk_0x7CBFB9F4AF33C67E(iParam3);
				if (unk_0x08BA6DD398CA197C(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_252("");
				}
				else
				{
					unk_0x7CBFB9F4AF33C67E(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x509383441597090D(sParam16))
				{
					func_242(sParam16);
				}
				else
				{
					func_252(&(uParam2->f_1));
				}
				unk_0x7CBFB9F4AF33C67E(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_252("");
				}
				else
				{
					unk_0x7CBFB9F4AF33C67E(65);
				}
				if (iParam12 == 1)
				{
					unk_0x7CBFB9F4AF33C67E(iVar0);
				}
				else
				{
					unk_0x7CBFB9F4AF33C67E(-1);
				}
				if (func_287())
				{
					func_252("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x509383441597090D(sParam16))
				{
					unk_0x709662CF2BD061A4("FM_AE_ONE_INT");
					unk_0xBDE6EEC5F6BDC060(sParam16);
					unk_0x3F9D1B882EC0B8AF(iParam18);
					unk_0x1E77BE8F4283FA05();
				}
				else if (uParam2->f_108 == 5 && !unk_0x509383441597090D(sParam16))
				{
					unk_0x709662CF2BD061A4("FM_AE_ONE_INT");
					unk_0xBDE6EEC5F6BDC060(sParam16);
					unk_0x3F9D1B882EC0B8AF(iParam18);
					unk_0x1E77BE8F4283FA05();
				}
				else if ((uParam2->f_108 == 7 && !unk_0x509383441597090D(sParam16)) && !unk_0x509383441597090D(sParam17))
				{
					unk_0x709662CF2BD061A4("FM_AE_TWO_INT");
					unk_0xBDE6EEC5F6BDC060(sParam16);
					unk_0xBDE6EEC5F6BDC060(sParam17);
					unk_0x3F9D1B882EC0B8AF(iParam18);
					unk_0x1E77BE8F4283FA05();
				}
				else if (uParam2->f_108 == 8 && !unk_0x509383441597090D(&(uParam2->f_104)))
				{
					unk_0x709662CF2BD061A4("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x63A04EB63F481124(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x3F9D1B882EC0B8AF(iParam10);
					}
					unk_0xBDE6EEC5F6BDC060(&(uParam2->f_104));
					unk_0x1E77BE8F4283FA05();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0x709662CF2BD061A4("FM_AE_CASH");
					unk_0xBEC4DE8C7D72AD8A(iParam10, 1);
					unk_0x1E77BE8F4283FA05();
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x509383441597090D(&(uParam2->f_104)))
					{
						func_242(&(uParam2->f_104));
					}
					else
					{
						func_252("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0x709662CF2BD061A4("STRING");
					unk_0x37F0707A16E921F7(iParam14, 6);
					unk_0x1E77BE8F4283FA05();
				}
				else if (fParam13 != -1f)
				{
					unk_0x709662CF2BD061A4("NUMBER");
					unk_0x63A04EB63F481124(fParam13, 1);
					unk_0x1E77BE8F4283FA05();
				}
				else if (iParam10 != -1)
				{
					unk_0x7CBFB9F4AF33C67E(iParam10);
				}
				else
				{
					func_252("");
				}
				if (uParam2->f_108 == 6)
				{
					func_252("");
				}
				else
				{
					func_252(&sParam4);
				}
				func_244(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x509383441597090D(sParam8))
				{
					func_252("");
					func_252("");
				}
				else
				{
					unk_0x256E5E9EBF5975E9(sParam8);
					unk_0x256E5E9EBF5975E9(sParam8);
				}
				if (func_243(uParam2))
				{
					func_242("DPAD_FRIEND");
				}
				else if (func_241(uParam2))
				{
					func_242("DPAD_FRIEND");
				}
				else if (func_240(uParam2))
				{
					func_242("DPAD_CREW");
				}
				else
				{
					func_242("");
				}
				unk_0xE73340DA551C95E1();
			}
		}
	}
}

int func_256(int iParam0)
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

bool func_257(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_213(iParam0))
		{
			return 0;
		}
	}
	return Global_1614576[iParam0 /*324*/].f_10 != func_55();
}

int func_258(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_220(iParam0)) && !func_263(iParam0))
	{
		iVar0 = func_262();
	}
	iVar1 = func_261(iParam0);
	if (!iVar1 == -1)
	{
		return func_259(iVar1);
	}
	return iVar0;
}

int func_259(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_260(iParam0);
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

var func_260(int iParam0)
{
	return Global_2415586.f_1946.f_44[iParam0 /*2*/].f_1;
}

int func_261(int iParam0)
{
	if (!iParam0 == func_55())
	{
		if (func_257(iParam0, 1))
		{
			return Global_2415586.f_1946.f_11[func_56(iParam0)];
		}
	}
	return -1;
}

int func_262()
{
	return 21;
}

bool func_263(int iParam0)
{
	return func_196(iParam0, 20);
}

char* func_264(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0xAE52C62FC0BBB14E())
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
			if (unk_0xAE52C62FC0BBB14E())
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

int func_265(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_269(iParam3))
	{
		*fParam1 = (func_266(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_256(iParam3))
	{
		*fParam1 = (func_266(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_266(int iParam0, int iParam1)
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
			if (unk_0xAE52C62FC0BBB14E())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_268(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xAE52C62FC0BBB14E())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_267(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_267(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_268(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_269(int iParam0)
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

int func_270(int iParam0)
{
	int iVar0;
	
	iVar0 = func_273(iParam0);
	if (iVar0 == -1)
	{
		func_271(iParam0, 1);
		return 0;
	}
	Global_1353135[iVar0 /*5*/].f_4 = 1;
	return Global_1353135[iVar0 /*5*/].f_2;
}

void func_271(int iParam0, bool bParam1)
{
	if (!func_1122(iParam0, 0, 1))
	{
		return;
	}
	if (func_273(iParam0) != -1)
	{
		return;
	}
	if (Global_1353298)
	{
		if (iParam0 == Global_1353298.f_1)
		{
			return;
		}
	}
	if (func_272(iParam0))
	{
		return;
	}
	if (Global_1353336 >= 32)
	{
		return;
	}
	Global_1353303[Global_1353336] = iParam0;
	Global_1353336++;
	if (bParam1)
	{
	}
}

int func_272(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1353336)
	{
		if (Global_1353303[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_273(int iParam0)
{
	int iVar0;
	
	if (!func_1122(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1353296 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1353296)
	{
		if (Global_1353135[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x8AFD1D34F9842BB9(Global_1353135[iVar0 /*5*/].f_2) && unk_0x70FC8DD858474636(Global_1353135[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_274(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_274(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1353296)
	{
		return;
	}
	if (unk_0x8AFD1D34F9842BB9(Global_1353135[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1353135[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0x17F6632C0BD7F15A(Global_1353135[iParam0 /*5*/].f_2), 64);
			unk_0xCF5D3892606E7989(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0xB360DA2AE12FCC02(Global_1353135[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1353296)
	{
		Global_1353135[iVar32 /*5*/] = { Global_1353135[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_275(&(Global_1353135[iVar32 /*5*/]));
	Global_1353296 = (Global_1353296 - 1);
}

void func_275(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_55();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0xA86CA03D9749EEB3())
	{
		uParam0->f_3 = unk_0x4B50AAB32FBE0483();
	}
}

struct<4> func_276(int iParam0)
{
	struct<4> Var0;
	
	if (func_1122(iParam0, 0, 1))
	{
		Global_2471194 = { func_57(iParam0) };
		if (unk_0x15B0CAB107CFCDE1())
		{
			if (func_231(Global_2471194))
			{
				if (!unk_0x6F4E1F8D329BC4EC(&Global_2471194))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xED4DB0F2EFE02B37(0))
		{
			return Var0;
		}
		if (func_280(&Global_2471194))
		{
			Global_2471124 = { func_278(iParam0) };
			func_277(&Global_2471124, &Var0);
		}
	}
	return Var0;
}

void func_277(var uParam0, var uParam1)
{
	unk_0x05F539CDDCE2A2C6(uParam0, 35, uParam1);
}

struct<35> func_278(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_279(iParam0))
	{
		return Global_1315261[unk_0x0C1D3C552325765B() /*35*/];
	}
	Var0 = { func_57(iParam0) };
	unk_0x0ADE2D0C6811DC70(&Var13, 35, &Var0);
	return Var13;
}

int func_279(int iParam0)
{
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		return 1;
	}
	return 0;
}

int func_280(var uParam0)
{
	if (unk_0xA264814CF83E3B89())
	{
		if (unk_0x46E4D0D0168391A1() && unk_0xC1B41A655437AD93(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_281(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		if ((func_219(iParam0) || func_285(iParam0)) || func_284(iParam0))
		{
			return 0;
		}
	}
	if (!func_283(iParam0))
	{
		return 0;
	}
	if ((!func_282(iParam0) && Global_2421327[iParam0 /*353*/].f_235 == -1) && !func_295(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_282(int iParam0)
{
	if (func_1122(iParam0, 0, 1))
	{
		if (func_1122(unk_0x0C1D3C552325765B(), 0, 1))
		{
			if (unk_0x0C67E8DCA323B26C(iParam0, unk_0x0C1D3C552325765B()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_283(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_137, 22);
}

bool func_284(int iParam0)
{
	if (func_219(iParam0))
	{
		return 1;
	}
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 8);
}

int func_285(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 10) || unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 9));
	}
	return 0;
}

int func_286(int iParam0)
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
		if (unk_0x08BA6DD398CA197C(Global_1588660[iVar0 /*532*/].f_137, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_287()
{
	switch (func_192(unk_0x0C1D3C552325765B()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 188:
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
	switch (func_288(unk_0x0C1D3C552325765B()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_263(unk_0x0C1D3C552325765B()))
	{
		switch (func_192(unk_0x0C1D3C552325765B()))
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

int func_288(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1614576[iVar0 /*324*/];
	}
	return -1;
}

int func_289(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/].f_10.f_32 != -1 && func_290(Global_1614576[iParam0 /*324*/].f_10.f_32))
	{
		return 1;
	}
	if (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_31 != -1)
	{
		if (func_290(Global_1614576[iParam0 /*324*/].f_10.f_31))
		{
			return 1;
		}
	}
	return 0;
}

int func_290(int iParam0)
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
	return func_291(iParam0, 0);
	return 0;
}

int func_291(int iParam0, int iParam1)
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

void func_292(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1122(unk_0x81C85E54237F8A2E(iVar0), 0, 1))
		{
			iVar1 = unk_0x81C85E54237F8A2E(iVar0);
			if (!func_34(iVar1, 0))
			{
				if ((unk_0x0C67E8DCA323B26C(iVar1, unk_0x0C1D3C552325765B()) || Global_2421327[iVar1 /*353*/].f_235 != -1) || func_295(iVar1))
				{
					if (func_293(iVar1, iParam1, 0))
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

int func_293(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_55())
	{
		if (!bParam2)
		{
			if (func_294(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1614576[iParam0 /*324*/].f_10 != func_55())
		{
			return iParam1 == Global_1614576[iParam0 /*324*/].f_10;
		}
	}
	return 0;
}

int func_294(int iParam0, int iParam1)
{
	if (iParam1 != func_55())
	{
		if (iParam0 != func_55())
		{
			if (Global_1614576[iParam0 /*324*/].f_10 != func_55())
			{
				if (Global_1614576[iParam0 /*324*/].f_10 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_295(int iParam0)
{
	return Global_1588660[iParam0 /*532*/].f_186 != 0;
}

void func_296(var uParam0)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x7CBFB9F4AF33C67E(0);
		unk_0xE73340DA551C95E1();
	}
}

void func_297(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1342780.f_2 == 0)
		{
			Global_1342780.f_2 = 1;
		}
	}
	else if (Global_1342780.f_2 == 1)
	{
		Global_1342780.f_2 = 0;
	}
}

void func_298()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 1))
	{
		if (func_300())
		{
			func_299();
		}
	}
}

void func_299()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2432628.f_2198[iVar0 /*72*/].f_2 != 0)
		{
			Global_2432628.f_2198[iVar0 /*72*/].f_2 = 5;
			unk_0x88B0F0DC270164B7(&(Global_2432628.f_2198[iVar0 /*72*/].f_63), 0);
		}
		iVar0++;
	}
}

bool func_300()
{
	return Global_2432628.f_2198[0 /*72*/].f_1 != 0;
}

int func_301()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 0) && func_300())
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 1) && func_300())
	{
		return 1;
	}
	return 0;
}

int func_302()
{
	if (func_300())
	{
		if (func_303(Global_2432628.f_2198[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_303(int iParam0)
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
		case 99:
			return 1;
		
		default:
	}
	return 0;
}

int func_304()
{
	if (func_300())
	{
		if (func_305(Global_2432628.f_2198[0 /*72*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_305(int iParam0)
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

void func_306(int iParam0)
{
	Global_1342780.f_1 = Global_1342780;
	Global_1342780 = iParam0;
}

int func_307(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	char* sVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	int iVar8;
	
	StringCopy(&Var0, "", 16);
	bVar6 = func_354(iParam1);
	if (iParam1 == 17)
	{
		bVar5 = true;
	}
	fVar7 = func_353();
	if (iParam1 == 23 || iParam1 == 24)
	{
		if (func_352())
		{
			if (func_351() > 0 && Global_1573698)
			{
				unk_0x6EDFAF353D332BBF();
				unk_0xDA81B130FA38800A(fVar7);
				unk_0x7ABD1B29E6C2963D(18);
				if (unk_0x598A9E990F05F82C())
				{
					unk_0x8D2BC9240C67A1F4();
				}
				unk_0x7ABD1B29E6C2963D(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_339())
		{
			func_338(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4442, 26))
	{
		func_338(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_11(&(uParam2->f_19)))
	{
		if (func_351() == 1)
		{
			func_337(bVar6, uParam0, 0);
			func_10(&(uParam2->f_19), 0, 0);
			func_338(uParam0, uParam2, 0);
		}
	}
	if (func_11(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0x598A9E990F05F82C())
		{
			unk_0x8D2BC9240C67A1F4();
		}
		unk_0x7ABD1B29E6C2963D(10);
		if (func_6(&(uParam2->f_19), 10000, 0) || (func_351() == 0 && !bParam5))
		{
			func_338(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar5 == 0)
			{
				func_336();
				if (iParam1 == 23 || iParam1 == 24)
				{
					unk_0x6EDFAF353D332BBF();
				}
				unk_0x7ABD1B29E6C2963D(18);
			}
			if (unk_0x08BA6DD398CA197C(uParam2->f_33, 0))
			{
				Global_1573696 = uParam3;
				Global_1573695 = 1;
				unk_0xDA81B130FA38800A(fVar7);
				if (bVar5)
				{
					if (uParam2->f_34 != Global_1573697)
					{
						unk_0x09C86C0C5CA26B1E(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar5 == 0)
				{
					func_336();
					if (iParam1 == 23 || iParam1 == 24)
					{
						unk_0x6EDFAF353D332BBF();
					}
					unk_0x7ABD1B29E6C2963D(18);
				}
				unk_0xDA81B130FA38800A(fVar7);
				if (func_337(bVar6, uParam0, 0))
				{
					func_296(uParam0);
					sVar4 = func_334(iParam1, &(Global_1626500.f_83874), bParam4);
					if (bParam4)
					{
						func_331(uParam0, sVar4, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_324(uParam0, func_328(uParam2), func_325(uParam2), -1);
					}
					else if (iParam1 == 24)
					{
						func_315(uParam0, func_317(), func_316(), -1);
					}
					else if (bVar5)
					{
						uParam2->f_34 = Global_1573697;
						func_331(uParam0, sVar4, "", 0, -1, Global_1573697, 1);
					}
					else
					{
						Var0 = { func_313(iParam1) };
						iVar8 = func_308(iParam1);
						func_331(uParam0, sVar4, &Var0, 1, iVar8, -1, 1);
					}
					unk_0x88B0F0DC270164B7(&(uParam2->f_33), 0);
				}
			}
		}
	}
	return 0;
}

int func_308(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_312())
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
			if (func_311(unk_0x0C1D3C552325765B()))
			{
				iVar0 = 20;
			}
			if (func_310(unk_0x0C1D3C552325765B()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_309(unk_0x0C1D3C552325765B()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_309(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 4;
}

bool func_310(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 7;
}

bool func_311(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 2;
}

bool func_312()
{
	return Global_1626500.f_1 == 0;
}

struct<4> func_313(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_314(unk_0x0C1D3C552325765B()) || func_309(unk_0x0C1D3C552325765B()))
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
			StringIntConCat(&Var0, Global_1626500.f_25, 16);
			break;
	}
	return Var0;
}

bool func_314(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 5;
}

void func_315(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_TITLE");
		if (unk_0x509383441597090D(sParam2))
		{
			func_242(sParam1);
		}
		else
		{
			unk_0x709662CF2BD061A4("FM_AE_BRACKT");
			unk_0xBDE6EEC5F6BDC060(sParam1);
			unk_0xBDE6EEC5F6BDC060(sParam2);
			unk_0x1E77BE8F4283FA05();
		}
		func_242("");
		if (iParam3 != -1)
		{
			unk_0x7CBFB9F4AF33C67E(iParam3);
		}
		unk_0xE73340DA551C95E1();
	}
}

char* func_316()
{
	switch (func_192(unk_0x0C1D3C552325765B()))
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

char* func_317()
{
	switch (func_192(unk_0x0C1D3C552325765B()))
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
			if (func_320())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_319(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_319(1))
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
			if (func_318(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_172))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_318(int iParam0)
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

bool func_319(bool bParam0)
{
	return func_246(unk_0x0C1D3C552325765B(), bParam0);
}

bool func_320()
{
	return (func_323() && func_321(func_322()));
}

bool func_321(int iParam0)
{
	return func_248(iParam0, 1);
}

int func_322()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_34;
}

bool func_323()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 148;
}

void func_324(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_TITLE");
		if (unk_0x509383441597090D(sParam2))
		{
			func_242(sParam1);
		}
		else if (func_288(unk_0x0C1D3C552325765B()) == 133)
		{
			unk_0x709662CF2BD061A4("FM_AE_BRACKT_C");
			unk_0xBDE6EEC5F6BDC060(sParam1);
			unk_0xBDE6EEC5F6BDC060(sParam2);
			unk_0x1E77BE8F4283FA05();
		}
		else
		{
			unk_0x709662CF2BD061A4("FM_AE_BRACKT");
			unk_0xBDE6EEC5F6BDC060(sParam1);
			unk_0xBDE6EEC5F6BDC060(sParam2);
			unk_0x1E77BE8F4283FA05();
		}
		func_242("");
		if (iParam3 != -1)
		{
			unk_0x7CBFB9F4AF33C67E(iParam3);
		}
		unk_0xE73340DA551C95E1();
	}
}

char* func_325(var uParam0)
{
	int iVar0;
	
	iVar0 = func_288(unk_0x0C1D3C552325765B());
	if (func_327())
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
			switch (func_326())
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

int func_326()
{
	if (func_288(unk_0x0C1D3C552325765B()) == 133)
	{
		return Global_2482149.f_4685;
	}
	return -1;
}

bool func_327()
{
	return Global_1588659;
}

char* func_328(var uParam0)
{
	int iVar0;
	
	iVar0 = func_288(unk_0x0C1D3C552325765B());
	if (func_327())
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
			if (func_330() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_330() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_326())
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
			if (func_329() == 1)
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

int func_329()
{
	return Global_2482149.f_4688;
}

int func_330()
{
	if (func_288(unk_0x0C1D3C552325765B()) == 132)
	{
		return Global_2482149.f_4683;
	}
	return -1;
}

void func_331(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xB9D4F4DE7E7EC038(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_252(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x709662CF2BD061A4(sParam1);
			unk_0x3F9D1B882EC0B8AF(iParam5);
			unk_0x1E77BE8F4283FA05();
		}
		else
		{
			func_242(sParam1);
		}
		if (func_352() && iParam6)
		{
			if (func_333())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x709662CF2BD061A4("LBD_DPD_CNT");
			unk_0x3F9D1B882EC0B8AF(iVar0);
			unk_0x3F9D1B882EC0B8AF(iVar1);
			unk_0x1E77BE8F4283FA05();
		}
		else
		{
			func_242(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x7CBFB9F4AF33C67E(iParam4);
			if (func_332(unk_0x0C1D3C552325765B()))
			{
				unk_0x7CBFB9F4AF33C67E(166);
			}
		}
		unk_0xE73340DA551C95E1();
	}
}

int func_332(int iParam0)
{
	if (func_311(iParam0) || func_310(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_333()
{
	return Global_1573698;
}

char* func_334(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_335();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573862 == 0)
		{
			Global_1573862 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x509383441597090D(sParam1))
	{
		if (Global_1573862 == 1)
		{
			Global_1573862 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573862 == 0)
		{
			Global_1573862 = 1;
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

char* func_335()
{
	if (unk_0x01F6BD16E5956BB1())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x779C4262BB31C063())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x364521DB2DFEAA2D())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x4E1E7050584F0E5B())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_336()
{
	Global_36678 = 1;
}

bool func_337(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x474309DF4921072A("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x474309DF4921072A("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x474309DF4921072A("mp_matchmaking_card");
	}
	return unk_0x1E3F61C2C1E29520(*uParam1);
}

void func_338(var uParam0, var uParam1, bool bParam2)
{
	unk_0x09C86C0C5CA26B1E(&(uParam1->f_33), 7);
	Global_1573696 = 0;
	func_235();
	Global_1573695 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_11(&(uParam1->f_19)))
		{
			func_9(&(uParam1->f_19));
		}
	}
	if (unk_0x1E3F61C2C1E29520(*uParam0))
	{
		unk_0xA12A0D38735CCBF2(uParam0);
	}
	if (unk_0x08BA6DD398CA197C(uParam1->f_33, 0))
	{
		unk_0x09C86C0C5CA26B1E(&(uParam1->f_33), 0);
	}
	unk_0xDA81B130FA38800A(0f);
}

int func_339()
{
	if (func_350())
	{
		return 0;
	}
	if (func_349())
	{
		return 0;
	}
	if (!func_347())
	{
		return 0;
	}
	if (!func_345())
	{
		return 0;
	}
	if (func_344(8, -1))
	{
		return 0;
	}
	if (func_351() == 2)
	{
		return 0;
	}
	if (Global_2482149.f_4405)
	{
		return 0;
	}
	if (func_343())
	{
		return 0;
	}
	else if (!func_90(unk_0x0C1D3C552325765B(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_342(1) || func_340(1)) || Global_17151.f_124) || Global_17151)
	{
		return 0;
	}
	if (unk_0x84C71F36E7D97756())
	{
		return 0;
	}
	if (func_93(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (Global_1738544)
	{
		return 0;
	}
	if (Global_1738547)
	{
		return 0;
	}
	if (func_173(0))
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_9, 4))
	{
		return 0;
	}
	return 1;
}

int func_340(bool bParam0)
{
	if (unk_0x4A315CB706AE736B())
	{
		if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			if (func_341(unk_0xA0081090911D13E5()))
			{
				if (unk_0x7F6103BD34B839B0(0, 25) || unk_0x7F6103BD34B839B0(0, 68))
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
	if (unk_0x7F6103BD34B839B0(0, 19) || (!bParam0 && unk_0xFEB2816B7220E998(0, 19)))
	{
		return 1;
	}
	if (unk_0x955B8C8F89CC3AC0())
	{
		if (((unk_0x7F6103BD34B839B0(0, 166) || unk_0x7F6103BD34B839B0(0, 167)) || unk_0x7F6103BD34B839B0(0, 168)) || unk_0x7F6103BD34B839B0(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xFEB2816B7220E998(0, 166) || unk_0xFEB2816B7220E998(0, 167)) || unk_0xFEB2816B7220E998(0, 168)) || unk_0xFEB2816B7220E998(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_341(int iParam0)
{
	int iVar0;
	
	if (unk_0xE228E561BF27BBD0())
	{
		if (!unk_0xEB361B4BD195A4D3(iParam0))
		{
			unk_0x79DEFA3570360EAF(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_342(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17151.f_4 && Global_17151.f_104 == 4);
	}
	return Global_17151.f_4;
}

bool func_343()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_186 != 0;
}

bool func_344(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1342783.f_203[iParam1];
			}
			break;
	}
	return unk_0x08BA6DD398CA197C(Global_1342783.f_982, iParam0);
}

int func_345()
{
	if (func_346() == 0)
	{
		return 1;
	}
	return 0;
}

int func_346()
{
	return Global_1312462.f_18;
}

int func_347()
{
	if (func_348())
	{
		return 1;
	}
	if (unk_0x2C22E7D1C80A53EF())
	{
		return 0;
	}
	if (unk_0x44F90FBF2C1E8021() || unk_0x9AB98132476504BC())
	{
		return 0;
	}
	if (unk_0x72D1F5A29BD70129())
	{
		return 0;
	}
	return 1;
}

bool func_348()
{
	return Global_1312434;
}

bool func_349()
{
	return Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 5;
}

bool func_350()
{
	return unk_0xDF658EB6CA91DFBC() <= Global_17290.f_5745 + 100;
}

int func_351()
{
	return Global_1342783.f_68;
}

int func_352()
{
	if (Global_1573697 > 16)
	{
		return 1;
	}
	return 0;
}

float func_353()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x005F4304A67F7593()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_354(int iParam0)
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

int func_355()
{
	if (func_356(unk_0x0C1D3C552325765B()))
	{
		return Global_1318162;
	}
	return 0;
}

int func_356(int iParam0)
{
	if (unk_0xA86CA03D9749EEB3())
	{
		if (func_34(iParam0, 0))
		{
			return unk_0x82A9B289A654EBFD(iParam0);
		}
	}
	return 0;
}

int func_357()
{
	if (func_355())
	{
		return 1;
	}
	if (func_284(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_327())
	{
		return 1;
	}
	if (func_220(unk_0x0C1D3C552325765B()))
	{
		switch (func_288(unk_0x0C1D3C552325765B()))
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
				if (!func_358(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_358(unk_0x0C1D3C552325765B()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_358(unk_0x0C1D3C552325765B()))
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

bool func_358(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 4);
}

int func_359(int iParam0)
{
	if ((iParam0 == 24 && func_220(unk_0x0C1D3C552325765B())) && !func_263(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	if (iParam0 == 23)
	{
		if (func_193(unk_0x0C1D3C552325765B(), 0) && func_263(unk_0x0C1D3C552325765B()))
		{
			return 1;
		}
		if (func_360(unk_0x0C1D3C552325765B()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_360(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_220(iParam0) && !func_219(iParam0)) && !unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_1, 8));
	bVar2 = func_263(iParam0);
	uVar3 = func_368();
	uVar4 = func_362();
	if ((bVar1 && (func_218(iParam0) || func_217(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_214(iParam0)) && !func_361(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2482149.f_4698.f_26 != iVar0)
	{
		Global_2482149.f_4698.f_26 = iVar0;
	}
	return iVar0;
}

bool func_361(int iParam0)
{
	return func_196(iParam0, 19);
}

int func_362()
{
	if ((func_196(unk_0x0C1D3C552325765B(), 21) || func_196(unk_0x0C1D3C552325765B(), 22)) || func_365())
	{
		return 1;
	}
	if (func_363())
	{
		func_197(22);
		return 1;
	}
	return 0;
}

int func_363()
{
	if (func_193(unk_0x0C1D3C552325765B(), 0))
	{
		if ((func_368() && !func_364()) || func_211(unk_0x0C1D3C552325765B(), 21))
		{
			if (!func_196(unk_0x0C1D3C552325765B(), 27))
			{
				return 1;
			}
		}
		else
		{
			func_195(27);
		}
	}
	return 0;
}

bool func_364()
{
	return Global_1312412.f_1;
}

bool func_365()
{
	return func_366(286, -1);
}

int func_366(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2506009[iParam0 /*3*/][func_367(iParam1)];
	if (unk_0x80FB5712A7C4B4B8(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_367(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_36();
		if (iVar1 > -1)
		{
			Global_2491182 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2491182 = 1;
		}
	}
	return iVar0;
}

bool func_368()
{
	return Global_1312412;
}

int func_369()
{
	int iVar0;
	
	iVar0 = -1;
	if (!func_34(unk_0x0C1D3C552325765B(), 0))
	{
		iVar0 = unk_0x848AF823A8EA3C62();
	}
	else
	{
		iVar0 = func_370();
	}
	if (iVar0 != -1)
	{
		return unk_0x08BA6DD398CA197C(Local_369[iVar0 /*11*/].f_1, 1);
	}
	return 0;
}

int func_370()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_434;
	if (unk_0xCB129F9A01D14082(iVar1))
	{
		if (unk_0x3F3C7C3B52DD0ECA(iVar1))
		{
			iVar2 = unk_0x9259DE19D910276C(iVar1);
			iVar0 = iVar2;
		}
	}
	return iVar0;
}

bool func_371()
{
	return Local_99.f_196 == 99;
}

void func_372()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x18088877E109A757(1))
	{
		iVar1 = unk_0xA1A2C3AC0F629413(1, iVar0);
		switch (iVar1)
		{
			case 179:
				func_373(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_373(int iParam0)
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
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 10))
	{
		iVar29 = 0;
		while (iVar29 < 10)
		{
			if (!unk_0x08BA6DD398CA197C(Local_99.f_209, iVar29))
			{
				if (!unk_0x08BA6DD398CA197C(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_6, iVar29))
				{
					if (unk_0xD3FACCDA4D66AEAD(Var0.f_0))
					{
						if (unk_0x264883409423C6C3(Var0.f_0))
						{
							if (!unk_0x08BA6DD398CA197C(Local_99.f_205, iVar29))
							{
								if (!unk_0x08BA6DD398CA197C(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_5, iVar29))
								{
									if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar29 /*10*/].f_2))
									{
										if (unk_0xD3FACCDA4D66AEAD(unk_0x15F0E6D5AC2852F1(Local_99.f_2[iVar29 /*10*/].f_2)))
										{
											if (unk_0x5293F3C38E4842B3(Var0.f_0) == unk_0x15F0E6D5AC2852F1(Local_99.f_2[iVar29 /*10*/].f_2))
											{
												if (unk_0xD3FACCDA4D66AEAD(Var0.f_1))
												{
													if (unk_0x60F161681C368C4E(Var0.f_1))
													{
														if (unk_0x90897FA118314142(Var0.f_1) == unk_0xA0081090911D13E5())
														{
															if (func_1049() == Local_99.f_218)
															{
																unk_0x88B0F0DC270164B7(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_5), iVar29);
															}
														}
														else if (unk_0x54F0AEFB11EA090A(unk_0x90897FA118314142(Var0.f_1)))
														{
															iVar30 = unk_0xA43666ACD375E339(unk_0x90897FA118314142(Var0.f_1));
															if (!unk_0x3F3C7C3B52DD0ECA(iVar30))
															{
																unk_0x88B0F0DC270164B7(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_5), iVar29);
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
						else if (unk_0x60F161681C368C4E(Var0.f_0))
						{
							iVar11 = unk_0x90897FA118314142(Var0.f_0);
							if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar29 /*10*/].f_1))
							{
								if (iVar11 == unk_0x564EAE6038A81C07(Local_99.f_2[iVar29 /*10*/].f_1))
								{
									if (unk_0xD3FACCDA4D66AEAD(Var0.f_1))
									{
										if (unk_0x60F161681C368C4E(Var0.f_1))
										{
											iVar10 = unk_0x90897FA118314142(Var0.f_1);
											if (unk_0x54F0AEFB11EA090A(iVar10))
											{
												iVar13 = unk_0xA43666ACD375E339(iVar10);
												if (unk_0x3F3C7C3B52DD0ECA(iVar13))
												{
													if (Var0.f_3)
													{
														if (iVar13 == unk_0x0C1D3C552325765B())
														{
															unk_0x88B0F0DC270164B7(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_6), iVar29);
															if (!func_371())
															{
																Var15.f_2 = 206;
																Var15.f_10 = unk_0x0C1D3C552325765B();
																func_379(Var15, func_380(0));
															}
														}
													}
												}
												else if (!unk_0x08BA6DD398CA197C(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_7, iVar29))
												{
													if (Var0.f_3)
													{
														unk_0x88B0F0DC270164B7(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_7), iVar29);
													}
												}
											}
											else if (!unk_0x08BA6DD398CA197C(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_8, iVar29))
											{
												if (Var0.f_3)
												{
													unk_0x88B0F0DC270164B7(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_8), iVar29);
												}
											}
										}
										else if (!unk_0x08BA6DD398CA197C(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_8, iVar29))
										{
											if (Var0.f_3)
											{
												unk_0x88B0F0DC270164B7(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_8), iVar29);
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
		if (!unk_0x08BA6DD398CA197C(iLocal_722, 15))
		{
			if (unk_0xD3FACCDA4D66AEAD(Var0.f_0))
			{
				if (unk_0x60F161681C368C4E(Var0.f_0))
				{
					iVar11 = unk_0x90897FA118314142(Var0.f_0);
					if (func_378(unk_0x705BC1BB91F530B5(iVar11)))
					{
						unk_0x88B0F0DC270164B7(&iLocal_722, 15);
					}
				}
				else if (unk_0x264883409423C6C3(Var0.f_0))
				{
					if (func_377(unk_0x705BC1BB91F530B5(Var0.f_0)))
					{
						if (!func_376(unk_0xA0081090911D13E5(), unk_0x5293F3C38E4842B3(Var0.f_0), 0))
						{
							if (!func_375(unk_0x5293F3C38E4842B3(Var0.f_0), 0))
							{
								unk_0x88B0F0DC270164B7(&iLocal_722, 15);
							}
						}
					}
				}
			}
		}
	}
	if (func_369())
	{
		if (!func_196(unk_0x0C1D3C552325765B(), 20))
		{
			if (unk_0xD3FACCDA4D66AEAD(Var0.f_0))
			{
				if (unk_0x60F161681C368C4E(Var0.f_0))
				{
					iVar11 = unk_0x90897FA118314142(Var0.f_0);
					if (unk_0x54F0AEFB11EA090A(iVar11))
					{
						iVar12 = unk_0xA43666ACD375E339(iVar11);
						if (unk_0xD3FACCDA4D66AEAD(Var0.f_1))
						{
							if (unk_0x60F161681C368C4E(Var0.f_1))
							{
								iVar10 = unk_0x90897FA118314142(Var0.f_1);
								if (unk_0x54F0AEFB11EA090A(iVar10))
								{
									iVar13 = unk_0xA43666ACD375E339(iVar10);
									if (iVar13 == unk_0x0C1D3C552325765B())
									{
										if (unk_0x3F3C7C3B52DD0ECA(iVar12))
										{
											if (func_257(iVar12, 1))
											{
												if (Local_99.f_218 > -1)
												{
													iVar14 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(Local_99.f_218));
													if (func_293(iVar12, iVar14, 1))
													{
														func_374(0);
														func_1029();
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

void func_374(int iParam0)
{
	if (!func_263(unk_0x0C1D3C552325765B()))
	{
		if (iParam0 || func_360(unk_0x0C1D3C552325765B()) != 0)
		{
			func_197(20);
			if (func_220(unk_0x0C1D3C552325765B()))
			{
				if (!unk_0x08BA6DD398CA197C(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1, 8))
				{
					unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 8);
				}
			}
		}
	}
}

int func_375(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x8EF0E5E933BE561D(iParam0) + 1;
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!unk_0x6315EBE95A97CADF(iParam0, (iVar0 - 1), 0))
			{
				iVar2 = unk_0x8FD32443A080784B(iParam0, (iVar0 - 1), 0);
				if (bParam1)
				{
					if (unk_0xD3FACCDA4D66AEAD(iVar2))
					{
						if (unk_0x54F0AEFB11EA090A(iVar2))
						{
							return 1;
						}
					}
				}
				else if (!unk_0xEB361B4BD195A4D3(iVar2))
				{
					if (unk_0x54F0AEFB11EA090A(iVar2))
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

int func_376(int iParam0, int iParam1, int iParam2)
{
	if (unk_0xD3FACCDA4D66AEAD(iParam0) && !unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		if (unk_0xD3FACCDA4D66AEAD(iParam1) && !unk_0x912AD5A10E7633F0(iParam1, 0))
		{
			if (unk_0x1FD87E888EB4FC00(iParam0, iParam1, iParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_377(int iParam0)
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

int func_378(int iParam0)
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

void func_379(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0x0C1D3C552325765B();
	if (!iParam14 == 0)
	{
		unk_0x8E36889D76C8D4FA(1, &Param0, 14, iParam14);
	}
}

int func_380(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xE5697AB254094B0D())
	{
		if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar1)))
		{
			iVar2 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar1));
			if (func_1122(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x0C1D3C552325765B() || iParam0)
				{
					unk_0x88B0F0DC270164B7(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_381()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (!func_34(unk_0x0C1D3C552325765B(), 0))
	{
		if (unk_0x08BA6DD398CA197C(iLocal_722, 10))
		{
			unk_0x09C86C0C5CA26B1E(&iLocal_722, 10);
		}
		return;
	}
	iVar0 = Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_434;
	if (!unk_0x08BA6DD398CA197C(iLocal_722, 10))
	{
		if (Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1 != 0)
		{
			Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1 = 0;
		}
		unk_0x88B0F0DC270164B7(&iLocal_722, 10);
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_722, 11))
	{
		unk_0x88B0F0DC270164B7(&iLocal_722, 11);
		func_776();
	}
	if (unk_0xCB129F9A01D14082(iVar0))
	{
		if (unk_0x3F3C7C3B52DD0ECA(iVar0))
		{
			uVar1 = unk_0x9259DE19D910276C(iVar0);
			iVar2 = uVar1;
			iVar3 = Local_369[iVar2 /*11*/].f_9;
			switch (iVar3)
			{
				case 0:
					func_671();
					func_656();
					func_647();
					func_382();
					break;
				
				case 2:
					func_382();
					break;
				
				case 3:
					func_1062();
					break;
				}
			}
	}
}

void func_382()
{
	struct<10> Var0;
	int iVar13;
	char* sVar14;
	var uVar15;
	int iVar16;
	int iVar17;
	
	Var0.f_2 = 1065353216;
	Var0.f_3 = 1065353216;
	Var0.f_4 = 1;
	Var0.f_9 = -1;
	iVar13 = func_55();
	iVar16 = unk_0x848AF823A8EA3C62();
	iVar17 = unk_0x0C1D3C552325765B();
	if (func_34(unk_0x0C1D3C552325765B(), 0))
	{
		iVar16 = func_370();
		iVar17 = Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_434;
	}
	if (!unk_0x08BA6DD398CA197C(Local_369[iVar16 /*11*/].f_1, 4))
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_722, 3))
		{
			if (unk_0x08BA6DD398CA197C(Local_99.f_1, 1))
			{
				if (iVar16 == Local_99.f_218 || func_1049() == Local_99.f_218)
				{
					if (func_360(unk_0x0C1D3C552325765B()) >= 2)
					{
						sVar14 = func_641(iVar17);
						uVar15 = func_640(iVar17);
						func_638(86, "BIGM_DEFENDED", "BIGM_CONTRAS", sVar14, uVar15, 0, -1, -1, -1, 2, -1);
					}
					if (iVar17 == unk_0x0C1D3C552325765B())
					{
						if (!unk_0x08BA6DD398CA197C(iLocal_722, 6))
						{
							func_625(1, 1, 0, 0, -1, -1, -1, -1);
							unk_0x88B0F0DC270164B7(&iLocal_722, 6);
						}
						func_505(169, 1, &Var0, 0);
						unk_0x1BD6EE6C1F72D17E(unk_0x0C1D3C552325765B());
					}
				}
				else if (func_369())
				{
				}
				iLocal_731 = func_20();
				iLocal_732 = (func_20() - func_504(&(Local_99.f_226), 0, 0));
				unk_0x88B0F0DC270164B7(&iLocal_722, 3);
			}
			else if (unk_0x08BA6DD398CA197C(Local_99.f_1, 4))
			{
				if (unk_0x08BA6DD398CA197C(Local_369[iVar16 /*11*/].f_1, 14))
				{
					if (Local_99.f_221 >= 0)
					{
						iVar13 = unk_0x81C85E54237F8A2E(Local_99.f_221);
						if (iVar13 == iVar17)
						{
							func_484(86, "BIGM_SECURED", "BIGM_CONTRAYR", 1, -1, 2);
						}
						else if (func_360(iVar17) >= 2)
						{
							sVar14 = func_641(iVar17);
							uVar15 = func_640(iVar17);
							func_638(86, "BIGM_SECURED", "BIGM_CONTRAGR", sVar14, uVar15, 0, -1, -1, -1, 2, -1);
						}
					}
					if (iVar17 == unk_0x0C1D3C552325765B())
					{
						if (!unk_0x08BA6DD398CA197C(iLocal_722, 6))
						{
							func_625(1, 1, 0, 0, -1, -1, -1, -1);
							unk_0x88B0F0DC270164B7(&iLocal_722, 6);
						}
						func_505(169, 1, &Var0, 0);
						unk_0x1BD6EE6C1F72D17E(unk_0x0C1D3C552325765B());
					}
					iLocal_731 = func_20();
					iLocal_732 = (func_20() - func_504(&(Local_99.f_226), 0, 0));
					unk_0x88B0F0DC270164B7(&iLocal_722, 3);
				}
			}
			else if (unk_0x08BA6DD398CA197C(Local_99.f_1, 3))
			{
				if (unk_0x848AF823A8EA3C62() == Local_99.f_218 || func_1049() == Local_99.f_218)
				{
					if (func_360(iVar17) >= 2)
					{
						sVar14 = func_641(iVar17);
						uVar15 = func_640(unk_0x0C1D3C552325765B());
						func_638(87, "BIGM_DCLOST", "BIGM_CONTRAFD", sVar14, uVar15, 0, -1, -1, -1, 2, -1);
					}
					if (iVar17 == unk_0x0C1D3C552325765B())
					{
						if (!unk_0x08BA6DD398CA197C(iLocal_722, 6))
						{
							func_625(0, 2, 0, 0, -1, -1, -1, -1);
							unk_0x88B0F0DC270164B7(&iLocal_722, 6);
						}
						func_505(169, 0, &Var0, 0);
					}
				}
				iLocal_731 = func_20();
				iLocal_732 = (func_20() - func_504(&(Local_99.f_226), 0, 0));
				unk_0x88B0F0DC270164B7(&iLocal_722, 3);
			}
			else if (unk_0x08BA6DD398CA197C(Local_99.f_1, 9))
			{
				if (func_467())
				{
					if (func_360(iVar17) >= 2)
					{
						sVar14 = func_641(iVar17);
						uVar15 = func_640(iVar17);
						func_638(87, "BIGM_DCLOST", "BIGM_CONTRALS", sVar14, uVar15, 0, -1, -1, -1, 2, -1);
					}
				}
				if (iVar17 == unk_0x0C1D3C552325765B())
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_722, 6))
					{
						func_625(0, 2, 0, 0, -1, -1, -1, -1);
						unk_0x88B0F0DC270164B7(&iLocal_722, 6);
					}
					func_505(169, 0, &Var0, 0);
				}
				iLocal_731 = func_20();
				iLocal_732 = (func_20() - func_504(&(Local_99.f_226), 0, 0));
				unk_0x88B0F0DC270164B7(&iLocal_722, 3);
			}
			else if (unk_0x08BA6DD398CA197C(Local_99.f_1, 8))
			{
				if (func_467())
				{
					if (func_360(iVar17) >= 2)
					{
						sVar14 = func_641(iVar17);
						uVar15 = func_640(iVar17);
						func_638(87, "BIGM_DCLOST", "BIGM_CONTRALS", sVar14, uVar15, 0, -1, -1, -1, 2, -1);
					}
				}
				if (iVar17 == unk_0x0C1D3C552325765B())
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_722, 6))
					{
						func_625(0, 2, 0, 0, -1, -1, -1, -1);
						unk_0x88B0F0DC270164B7(&iLocal_722, 6);
					}
					func_505(169, 0, &Var0, 0);
				}
				iLocal_731 = func_20();
				iLocal_732 = (func_20() - func_504(&(Local_99.f_226), 0, 0));
				unk_0x88B0F0DC270164B7(&iLocal_722, 3);
			}
			else if (unk_0x08BA6DD398CA197C(Local_99.f_1, 15))
			{
				if (func_467())
				{
					if (func_360(iVar17) >= 2)
					{
						sVar14 = func_641(iVar17);
						uVar15 = func_640(iVar17);
						func_638(87, "BIGM_DCLOST", "BIGM_CONTRALS", sVar14, uVar15, 0, -1, -1, -1, 2, -1);
					}
				}
				if (iVar17 == unk_0x0C1D3C552325765B())
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_722, 6))
					{
						func_625(0, 2, 0, 0, -1, -1, -1, -1);
						unk_0x88B0F0DC270164B7(&iLocal_722, 6);
					}
					func_505(169, 0, &Var0, 0);
				}
				iLocal_731 = func_20();
				iLocal_732 = (func_20() - func_504(&(Local_99.f_226), 0, 0));
				unk_0x88B0F0DC270164B7(&iLocal_722, 3);
			}
			else if (unk_0x08BA6DD398CA197C(Local_99.f_1, 5))
			{
				if (func_467())
				{
					if (func_1048())
					{
						if (func_360(iVar17) >= 2)
						{
						}
					}
					else if (func_360(iVar17) >= 2)
					{
						func_484(87, "GB_WORK_OVER", "BIGM_HUNTRBQ", 1, -1, 2);
					}
				}
				if (iVar17 == unk_0x0C1D3C552325765B())
				{
					if (!unk_0x08BA6DD398CA197C(iLocal_722, 6))
					{
						func_625(0, 8, 0, 0, -1, -1, -1, -1);
						unk_0x88B0F0DC270164B7(&iLocal_722, 6);
					}
					func_505(169, 0, &Var0, 0);
				}
				unk_0x88B0F0DC270164B7(&iLocal_722, 3);
			}
		}
		if (unk_0x08BA6DD398CA197C(iLocal_722, 3))
		{
			func_776();
			if (unk_0x848AF823A8EA3C62() == Local_99.f_218)
			{
				if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 16) && !unk_0x08BA6DD398CA197C(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1, 13))
				{
					if ((((unk_0x08BA6DD398CA197C(Local_99.f_1, 15) || unk_0x08BA6DD398CA197C(Local_99.f_1, 8)) || unk_0x08BA6DD398CA197C(Local_99.f_1, 3)) || func_11(&(Local_99.f_226))) || (func_371() && unk_0x08BA6DD398CA197C(Local_99.f_1, 9)))
					{
						func_413();
					}
					else
					{
						unk_0x88B0F0DC270164B7(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1), 13);
						if (!func_412(38))
						{
							func_411(38);
						}
					}
					if (iLocal_733 == 2)
					{
						unk_0x88B0F0DC270164B7(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1), 13);
					}
					if (iLocal_733 == 3)
					{
						unk_0x88B0F0DC270164B7(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1), 13);
					}
				}
			}
			if (!unk_0x08BA6DD398CA197C(iLocal_723, 8))
			{
				func_409();
				func_407();
				unk_0x88B0F0DC270164B7(&iLocal_723, 8);
			}
			if (!unk_0x08BA6DD398CA197C(iLocal_722, 7))
			{
				if (Local_99.f_219 != -1)
				{
					if (unk_0x08BA6DD398CA197C(iLocal_722, 5))
					{
						if (unk_0xCB129F9A01D14082(unk_0x81C85E54237F8A2E(Local_99.f_219)))
						{
							func_405(unk_0x81C85E54237F8A2E(Local_99.f_219), 432, 0);
							func_403(unk_0x81C85E54237F8A2E(Local_99.f_219), 1, 0);
							func_402(unk_0x81C85E54237F8A2E(Local_99.f_219), 0, 0);
							func_401(unk_0x81C85E54237F8A2E(Local_99.f_219), 0);
							func_400(unk_0x81C85E54237F8A2E(Local_99.f_219), Global_262145.f_10787, 0);
							unk_0x88B0F0DC270164B7(&iLocal_722, 7);
						}
					}
				}
			}
			if (func_383(&uLocal_734, 1, 0) && (unk_0x08BA6DD398CA197C(Local_99.f_1, 16) || unk_0x08BA6DD398CA197C(Local_99.f_1, 5)))
			{
				if (iVar16 == unk_0x848AF823A8EA3C62())
				{
					unk_0x88B0F0DC270164B7(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1), 4);
				}
			}
		}
	}
}

int func_383(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	
	func_197(29);
	if ((*uParam0 > 0 && !func_300()) && func_360(unk_0x0C1D3C552325765B()) != 0)
	{
		if (!func_397())
		{
			func_396();
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
				unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 2);
				if (bParam1)
				{
					unk_0x88B0F0DC270164B7(&(Global_2482149.f_4439), 0);
					func_10(&(uParam0->f_5), 0, 0);
				}
				func_10(&(uParam0->f_1), 0, 0);
				func_395(uParam0, 1);
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
				func_390(iParam2);
				func_395(uParam0, 2);
			}
			break;
		
		case 2:
			func_390(0);
			if (func_6(&(uParam0->f_1), 15000, 0))
			{
				if (func_384(func_385(0)))
				{
					unk_0x94724F7C938EBE34(1);
				}
				func_395(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_6(&(uParam0->f_1), 23500, 0))
			{
				unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 1);
				unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 2);
				func_395(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 1);
			unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 2);
			return 1;
	}
	return 0;
}

bool func_384(char* sParam0)
{
	unk_0xA277242E6FB38513(sParam0);
	return unk_0x52387FFD63E8D8FC(0);
}

char* func_385(int iParam0)
{
	if (((func_388(unk_0x0C1D3C552325765B()) || func_387(unk_0x0C1D3C552325765B())) || func_320()) || iParam0)
	{
		if (func_387(unk_0x0C1D3C552325765B()))
		{
			return "BG_LBD_HELP";
		}
		return "BG_LBD_HELPW";
	}
	if (func_290(func_386()))
	{
		return "GB_LBD_HELP";
	}
	return "GB_LBD_HELPW";
}

int func_386()
{
	return Global_1624945;
}

bool func_387(int iParam0)
{
	return func_291(func_192(iParam0), 0);
}

bool func_388(int iParam0)
{
	return func_389(func_192(iParam0));
}

int func_389(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 180:
		case 148:
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
		
		default:
	}
	return 0;
}

void func_390(int iParam0)
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4439, 0))
	{
		if (((((((((!unk_0x0893ED56F523F729() && !unk_0x08BA6DD398CA197C(Global_2482149.f_743, 2)) && func_1122(unk_0x0C1D3C552325765B(), 1, 1)) && !Global_68125) && !Global_52997) && !unk_0x2C22E7D1C80A53EF()) && !func_196(unk_0x0C1D3C552325765B(), 22)) && func_360(unk_0x0C1D3C552325765B()) != 0) && !func_393(func_394())) && !func_388(unk_0x0C1D3C552325765B()))
		{
			unk_0x88B0F0DC270164B7(&(Global_2482149.f_4439), 1);
			func_392(func_385(iParam0), -1);
			func_391(1);
			unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4439), 0);
		}
	}
}

void func_391(int iParam0)
{
	char* sVar0;
	
	sVar0 = "GTAO_Boss_Goons_FM_Soundset";
	if (func_319(1))
	{
		sVar0 = "GTAO_Biker_FM_Soundset";
	}
	if (iParam0 && !func_300())
	{
		unk_0xAB16AADE80707D47(-1, "Boss_Message_Orange", sVar0, 0);
	}
}

void func_392(char* sParam0, int iParam1)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0x85AE92859C5AADE3(0, 0, 0, iParam1);
}

int func_393(int iParam0)
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

int func_394()
{
	var uVar0;
	
	uVar0 = unk_0x367152330DB70D69();
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_ASSAULT"))
	{
		return 159;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BELLYBEAST"))
	{
		return 157;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_DEATHMATCH"))
	{
		return 148;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_HUNT_THE_BOSS"))
	{
		return 164;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_SIGHTSEER"))
	{
		return 142;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_YACHT_ROB"))
	{
		return 152;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_CARJACKING"))
	{
		return 163;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_COLLECT_MONEY"))
	{
		return 155;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_FINDERSKEEPERS"))
	{
		return 160;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_FIVESTAR"))
	{
		return 153;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_POINT_TO_POINT"))
	{
		return 162;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_ROB_SHOP"))
	{
		return 154;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_HEADHUNTER"))
	{
		return 166;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_CONTRABAND_BUY"))
	{
		return 167;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_CONTRABAND_SELL"))
	{
		return 168;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_CONTRABAND_DEFEND"))
	{
		return 169;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_AIRFREIGHT"))
	{
		return 170;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_CASHING_OUT"))
	{
		return 171;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_SALVAGE"))
	{
		return 172;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_FRAGILE_GOODS"))
	{
		return 173;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_JOUST"))
	{
		return 179;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
		return 180;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_BAD_DEAL"))
	{
		return 182;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
		return 183;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_LAST_RESPECTS"))
	{
		return 185;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
		return 186;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_RACE_P2P"))
	{
		return 189;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
		return 190;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
		return 191;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
		return 192;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
		return 193;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
		return 194;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_FREE_PRISONER"))
	{
		return 197;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_SAFECRACKER"))
	{
		return 198;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_STEAL_BIKES"))
	{
		return 195;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
		return 199;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "AM_PENNED_IN"))
	{
		return 200;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
		return 201;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
		return 205;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_DESTROY_VANS"))
	{
		return 207;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_BURN_ASSETS"))
	{
		return 208;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_SHUTTLE"))
	{
		return 209;
	}
	else if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
		return 210;
	}
	return 0;
}

void func_395(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_396()
{
	Global_2453273 = 1;
}

int func_397()
{
	if (func_192(unk_0x0C1D3C552325765B()) == 170)
	{
		return 1;
	}
	if (func_398(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	return 0;
}

int func_398(int iParam0)
{
	if (iParam0 != func_55())
	{
		if (func_1122(iParam0, 1, 1))
		{
			if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
			{
				return func_399(Global_2421327[iParam0 /*353*/].f_308.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_399(int iParam0)
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
			return 3;
			break;
	}
	return -1;
}

void func_400(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return;
	}
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_203())
	{
		return;
	}
	iVar0 = iParam0;
	if (!unk_0x96549B1C2E196049(Global_2414657.f_700[iParam0]) || Global_2414657.f_700[iParam0] == unk_0xEAE20F1125B83888())
	{
		if (bParam2)
		{
			unk_0x88B0F0DC270164B7(&(Global_2414657.f_388), iVar0);
			Global_2414657.f_502[iVar0] = uParam1;
			Global_2414657.f_700[iParam0] = unk_0xEAE20F1125B83888();
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_388), iVar0);
			Global_2414657.f_700[iParam0] = -1;
		}
	}
}

void func_401(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x88B0F0DC270164B7(&(Global_2414657.f_365), iParam0);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_365), iParam0);
	}
	if (unk_0x16833EFAA58E63DB(Global_2414657[iParam0]))
	{
		if (bParam1)
		{
			unk_0x9ABFD60B4E082992(Global_2414657[iParam0], 0);
		}
		else
		{
			unk_0x9ABFD60B4E082992(Global_2414657[iParam0], 1);
		}
	}
}

void func_402(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_1122(iParam0, 1, 1))
		{
			Global_2414657.f_634[iParam0] = unk_0xEAE20F1125B83888();
			unk_0x88B0F0DC270164B7(&(Global_2414657.f_364), iParam0);
			func_401(iParam0, bParam2);
		}
	}
	else
	{
		func_401(iParam0, bParam2);
		unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_364), iParam0);
		Global_2414657.f_634[iParam0] = -1;
	}
}

void func_403(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return;
	}
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_203())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_404(iParam0))
	{
		if (bParam2)
		{
			unk_0x88B0F0DC270164B7(&(Global_2414657.f_386), iVar0);
			Global_2414657.f_568[iParam0] = unk_0xEAE20F1125B83888();
			Global_2414657.f_436[iVar0] = iParam1;
		}
		else
		{
			unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_386), iVar0);
			Global_2414657.f_568[iParam0] = -1;
		}
	}
}

int func_404(int iParam0)
{
	if (!unk_0x96549B1C2E196049(Global_2414657.f_568[iParam0]) || Global_2414657.f_568[iParam0] == unk_0xEAE20F1125B83888())
	{
		return 1;
	}
	return 0;
}

void func_405(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 == func_55())
	{
		return;
	}
	if (unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == func_203())
	{
		return;
	}
	iVar0 = iParam0;
	uVar1 = iParam1;
	if (!unk_0x96549B1C2E196049(Global_2414657.f_535[iParam0]) || Global_2414657.f_535[iParam0] == unk_0xEAE20F1125B83888())
	{
		if (bParam2)
		{
			if (!unk_0x08BA6DD398CA197C(Global_2414657.f_385, iVar0))
			{
				func_406();
			}
			unk_0x88B0F0DC270164B7(&(Global_2414657.f_385), iVar0);
			Global_2414657.f_403[iVar0] = uVar1;
			Global_2414657.f_535[iParam0] = unk_0xEAE20F1125B83888();
		}
		else
		{
			if (unk_0x08BA6DD398CA197C(Global_2414657.f_385, iVar0))
			{
				func_406();
			}
			unk_0x09C86C0C5CA26B1E(&(Global_2414657.f_385), iVar0);
			Global_2414657.f_535[iParam0] = -1;
		}
	}
}

void func_406()
{
	Global_2414657.f_923 = 1;
}

void func_407()
{
	int iVar0;
	int iVar1;
	
	if (!func_371())
	{
		return;
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_722, 9))
	{
		unk_0x88B0F0DC270164B7(&iLocal_722, 9);
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x81C85E54237F8A2E(iVar0);
			if (unk_0xCB129F9A01D14082(iVar1))
			{
				if (iVar1 != unk_0x0C1D3C552325765B())
				{
					func_405(iVar1, 478, 0);
					func_403(iVar1, func_408(iLocal_836), 0);
				}
			}
			iVar0++;
		}
	}
}

int func_408(int iParam0)
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
	unk_0x29F530EB20218AC0(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_409()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x16833EFAA58E63DB(uLocal_822[iVar0]))
		{
			unk_0x0B57C567D698C373(&(uLocal_822[iVar0]));
		}
		iVar0++;
	}
	if (unk_0x16833EFAA58E63DB(uLocal_835))
	{
		unk_0x0B57C567D698C373(&uLocal_835);
	}
	if (unk_0x16833EFAA58E63DB(uLocal_833))
	{
		unk_0x0B57C567D698C373(&uLocal_833);
	}
	if (unk_0x16833EFAA58E63DB(uLocal_834))
	{
		unk_0x0B57C567D698C373(&uLocal_834);
	}
	if (unk_0x08BA6DD398CA197C(iLocal_722, 12))
	{
		unk_0x15761381A3072BFA(uLocal_730);
		unk_0x29B0EFEB2715365C("ALARM_BELL_02");
		unk_0x09C86C0C5CA26B1E(&iLocal_722, 12);
	}
	if (((func_384("DCONTRA_HLP1") || func_384("DCONTRA_HLP2")) || func_384("DCONTRA_HLPVCR")) || func_384("DCONTRA_HLPCR"))
	{
		unk_0x94724F7C938EBE34(1);
	}
	func_410();
}

void func_410()
{
	if (unk_0x08BA6DD398CA197C(iLocal_722, 14))
	{
		func_185();
		func_180(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
		unk_0x09C86C0C5CA26B1E(&iLocal_722, 14);
	}
}

void func_411(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x88B0F0DC270164B7(&(Global_2482149.f_4698.f_7[iVar0]), iVar1);
}

bool func_412(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x08BA6DD398CA197C(Global_2482149.f_4698.f_7[iVar0], iVar1);
}

void func_413()
{
	float fVar0;
	
	if (func_371())
	{
		if (unk_0x08BA6DD398CA197C(Local_99.f_1, 9) || unk_0x08BA6DD398CA197C(Local_99.f_1, 8))
		{
			func_414(func_466());
			if (!func_412(36))
			{
				func_411(36);
			}
		}
	}
	else if (func_11(&(Local_99.f_226)))
	{
		if (iLocal_732 <= 0)
		{
			func_414(func_466());
			if (!func_412(36))
			{
				func_411(36);
			}
		}
		else
		{
			fVar0 = (unk_0xBBDA792448DB5A89((iLocal_731 - iLocal_732)) / unk_0xBBDA792448DB5A89(iLocal_731));
			fVar0 = (fVar0 * 0.5f);
			func_414(fVar0);
			if (!func_412(37))
			{
				func_411(37);
			}
		}
	}
}

void func_414(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Local_99.f_197 + 1;
	iVar1 = func_465(iVar0);
	if (iVar1 > 0)
	{
		iVar2 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * fParam0));
		if (unk_0xBBDA792448DB5A89(iVar2) > (unk_0xBBDA792448DB5A89(iVar1) / 2f))
		{
			iVar2 = (iVar2 - 1);
		}
		func_415(iVar0, iVar2, 0, 0, &iLocal_733, 0);
	}
	else
	{
		unk_0x88B0F0DC270164B7(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1), 13);
	}
}

void func_415(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5)
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
	iVar0 = func_465(iParam0);
	iVar1 = func_464(iParam0);
	if (!func_463())
	{
		if (iVar1 >= 0 && iVar0 >= iParam1)
		{
			iVar2 = (func_465(iParam0) - iParam1);
			iVar3 = 0;
			if (bParam5)
			{
				iVar3 = iParam1;
			}
			func_449(iParam0, iVar1, iVar2, iVar3, 0, 11);
			func_447(func_448(iVar1), iVar2, -1, 1);
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_72[iVar1 /*2*/].f_1 = iVar2;
			if (iVar3 != 0)
			{
				func_443(iParam0, iVar3);
				func_439(iParam0, iVar3);
			}
			if (unk_0x1504F110F2576375())
			{
				unk_0x42CE919A0064BD98(10);
			}
			func_436(10, 0);
			*uParam4 = 2;
		}
		else
		{
			*uParam4 = 3;
		}
	}
	else if (iVar1 >= 0 && iVar0 >= iParam1)
	{
		iVar4 = (func_465(iParam0) - iParam1);
		iVar5 = 0;
		if (bParam5)
		{
			iVar5 = iParam1;
		}
		if (func_416(iVar1, iParam1, iVar5, iParam2, iParam3, uParam4))
		{
			if (*uParam4 == 2)
			{
				func_449(iParam0, iVar1, iVar4, iVar5, 0, 11);
				func_447(func_448(iVar1), iVar4, -1, 1);
				Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_72[iVar1 /*2*/].f_1 = iVar4;
				if (iVar5 != 0)
				{
					func_439(iParam0, iVar5);
				}
				if (unk_0x1504F110F2576375())
				{
					unk_0x42CE919A0064BD98(10);
				}
				func_436(10, 0);
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

bool func_416(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
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
			iVar0 = func_435(iParam0);
			uVar1 = func_433(0, iParam1, 0, -1);
			iVar2 = func_432(iParam0);
			uVar3 = func_431(iParam0);
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
			if (iParam4 == 0 || func_427(78225582, -1799524201, uVar1, -788753717, 1, 0, 1, 4, iVar0, 3))
			{
				if (func_427(78225582, 69656641, iVar2, -788753717, iParam1, 0, 1, 4, 0, 3))
				{
					if (iParam2 == 0 || func_427(78225582, 69656641, uVar3, -788753717, iParam2, 0, 1, 4, 0, 3))
					{
						if (func_427(78225582, -739932302, iVar4, -788753717, 1, iParam3, 0, 4, iVar2, 3))
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
			if (*uParam5 == 1 && func_425())
			{
			}
			else
			{
				*uParam5 = 3;
				func_419(func_423());
			}
			break;
		
		case 1:
			if (func_418(func_423()))
			{
				if (func_417(func_423()) == 2)
				{
					*uParam5 = 2;
					func_419(func_423());
				}
				else
				{
					*uParam5 = 3;
					func_419(func_423());
				}
			}
			break;
	}
	return *uParam5 != 1;
}

int func_417(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2572880[iParam0 /*73*/].f_2;
	}
	return 0;
}

int func_418(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2572880[iParam0 /*73*/].f_2 != 1;
	}
	return 0;
}

void func_419(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_463())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_422(iParam0))
		{
			if (!bVar0)
			{
				unk_0xC06B96599589EBBA();
			}
		}
		else if (!bVar0)
		{
			unk_0xF107756B7C40D5BD(Global_2572880[iParam0 /*73*/]);
		}
		func_420(&(Global_2572880[iParam0 /*73*/]));
	}
}

void func_420(var uParam0)
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
	func_421(&(uParam0->f_8.f_3));
	func_421(&(uParam0->f_8.f_16));
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

void func_421(var uParam0)
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

int func_422(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2572880[iParam0 /*73*/].f_5 == 1;
	}
	return 0;
}

int func_423()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_424(iVar0) != 2147483647)
		{
			if (func_422(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_424(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2572880[iParam0 /*73*/];
	}
	return -1;
}

int func_425()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	if (!func_463())
	{
		bVar0 = true;
	}
	iVar1 = func_423();
	if (iVar1 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0xFCE85827D6C3F47A(func_36()) || unk_0x474B3F20E92EE4B9())
		{
			if (func_426(Global_2572880[iVar1 /*73*/].f_6, Global_2572880[iVar1 /*73*/].f_4, Global_2572880[iVar1 /*73*/].f_1) == 1)
			{
				Global_2573372 = 1;
			}
			return 0;
		}
		if (Global_2452901)
		{
			if (Global_2572880[iVar1 /*73*/].f_6 == 1067618600 || Global_2572880[iVar1 /*73*/].f_6 == -1303831698)
			{
				Global_2573373 = 1;
				return 0;
			}
		}
	}
	iVar2 = func_424(iVar1);
	if (iVar2 != 2147483647)
	{
		if (bVar0 || unk_0x1AF42FD94171E81B(iVar2))
		{
			if (bVar0)
			{
				Global_2572880[iVar1 /*73*/].f_66 = 1;
			}
			Global_2572880[iVar1 /*73*/].f_72 = 0;
			Global_2573362 = 1;
			return 1;
		}
	}
	return 0;
}

int func_426(int iParam0, int iParam1, int iParam2)
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

int func_427(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_463())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xFCE85827D6C3F47A(func_36()) || unk_0x474B3F20E92EE4B9())
		{
			Global_2573372 = 1;
			return 0;
		}
		if (Global_2452901)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_2573373 = 1;
				return 0;
			}
		}
	}
	iVar1 = func_423();
	if (iVar1 == -1)
	{
		if (!func_429(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_428(iParam1))
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
		Global_2572880[iVar1 /*73*/].f_70 = Var2.f_0;
		Global_2572880[iVar1 /*73*/].f_71 = Var2.f_1;
		if (bVar0 || unk_0x2C3EC0DA35B5E83F(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_428(int iParam0)
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
			return 1;
			break;
	}
	return 0;
}

int func_429(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_463())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xFCE85827D6C3F47A(func_36()) || unk_0x474B3F20E92EE4B9())
		{
			Global_2573372 = 1;
			return 0;
		}
		if (Global_2452901)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_2573373 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2572880[iVar1 /*73*/].f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_2572880[iVar1 /*73*/].f_5 == 1)
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
		if (unk_0xEA242F92316777F2())
		{
			unk_0xC06B96599589EBBA();
		}
	}
	if (bVar0 || unk_0x1AEB0F4B80342C09(&iVar3, iParam2, uParam3, uParam4))
	{
		*iParam0 = func_430(iVar3, uParam1, -2085313189, uParam3, iParam2, 0, 1, uParam4, uParam5);
		return 1;
	}
	return 0;
}

int func_430(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2572880[iVar0 /*73*/].f_2 == 0)
		{
			if (!func_463())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2572880[iVar0 /*73*/].f_2 = 1;
			Global_2572880[iVar0 /*73*/].f_1 = iParam5;
			Global_2572880[iVar0 /*73*/].f_3 = uParam1;
			Global_2572880[iVar0 /*73*/].f_4 = iParam2;
			Global_2572880[iVar0 /*73*/].f_7 = uParam3;
			Global_2572880[iVar0 /*73*/].f_5 = 0;
			Global_2572880[iVar0 /*73*/] = iParam0;
			Global_2572880[iVar0 /*73*/].f_6 = iParam4;
			Global_2572880[iVar0 /*73*/].f_69 = uParam8;
			Global_2572880[iVar0 /*73*/].f_68 = uParam7;
			Global_2572880[iVar0 /*73*/].f_72 = 0;
			Global_2573362 = 0;
			if (bParam6)
			{
				Global_2572880[iVar0 /*73*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_431(int iParam0)
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
	if (unk_0x509383441597090D(&cVar0))
	{
		return -1;
	}
	return unk_0x3BB8D1C5FAAB25B3(&cVar0);
}

int func_432(int iParam0)
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
	if (unk_0x509383441597090D(&cVar0))
	{
		return -1;
	}
	return unk_0x3BB8D1C5FAAB25B3(&cVar0);
}

int func_433(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	
	func_434(&sVar0, bParam0, iParam1, bParam2, iParam3);
	return unk_0x3BB8D1C5FAAB25B3(&sVar0);
}

void func_434(char* sParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
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

int func_435(int iParam0)
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
	if (unk_0x509383441597090D(&cVar0))
	{
		return -1;
	}
	return unk_0x3BB8D1C5FAAB25B3(&cVar0);
}

void func_436(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_438(iParam0, iParam1))
	{
		iVar0 = func_437();
		Global_2451682[iVar0] = iParam0;
	}
}

int func_437()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2451682[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_438(int iParam0, var uParam1)
{
	if (Global_1315217)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315229) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_439(int iParam0, int iParam1)
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
			if (Global_1751750[iVar0] == iParam0)
			{
				Global_1751743[iVar0] = 0;
				Global_1751750[iVar0] = 0;
				iVar1++;
			}
		}
		iVar0 = (iVar0 + -1);
	}
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_1751750[iVar0] == 0)
		{
			if (iVar2 == -1)
			{
				iVar2 = 0;
			}
		}
		else if (iVar2 != -1)
		{
			Global_1751743[iVar2] = Global_1751743[iVar0];
			Global_1751750[iVar2] = Global_1751750[iVar0];
			Global_1751743[iVar0] = 0;
			Global_1751750[iVar0] = 0;
			iVar2++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_441(func_442(iVar0), Global_1751743[iVar0], -1, 1);
		func_441(func_440(iVar0), Global_1751750[iVar0], -1, 1);
		iVar0++;
	}
}

int func_440(int iParam0)
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

var func_441(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - unk_0x19A1C45894374F65((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - unk_0x19A1C45894374F65((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - unk_0x19A1C45894374F65((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - unk_0x19A1C45894374F65((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x8312E74D8EF16836((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - unk_0x19A1C45894374F65((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x8312E74D8EF16836((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - unk_0x19A1C45894374F65((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - unk_0x19A1C45894374F65((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - unk_0x19A1C45894374F65((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - unk_0x19A1C45894374F65((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - unk_0x19A1C45894374F65((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - unk_0x19A1C45894374F65((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - unk_0x19A1C45894374F65((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - unk_0x19A1C45894374F65((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - unk_0x19A1C45894374F65((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = unk_0xD0BD93DA65E5EE25(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

int func_442(int iParam0)
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

void func_443(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_446(func_464(iParam0));
	iVar1 = func_445(iVar0, -1, 0);
	if (iVar1 >= iParam1)
	{
		func_444(iVar0, (iVar1 - iParam1), -1, 1, 0);
	}
}

void func_444(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2491469[iParam0 /*3*/][func_367(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
}

int func_445(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2491469[iParam0 /*3*/][func_367(iParam1)];
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_446(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3626;
	}
	else if (iParam0 == 1)
	{
		return 3627;
	}
	else if (iParam0 == 2)
	{
		return 3628;
	}
	else if (iParam0 == 3)
	{
		return 3629;
	}
	else if (iParam0 == 4)
	{
		return 3630;
	}
	return 3626;
}

void func_447(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2491469[iParam0 /*3*/][func_367(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 780:
			Global_1352283[func_367(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1352289[func_367(iParam2)] = iParam1;
			break;
		
		case 782:
			Global_1352295[func_367(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1352301[func_367(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1352259[func_367(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1352265[func_367(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1352271[func_367(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1352277[func_367(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1352235[func_367(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1352241[func_367(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1352247[func_367(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1352253[func_367(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1352307[func_367(iParam2)] = iParam1;
			break;
		
		case 751:
			Global_1352313[func_367(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1352319[func_367(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1352325[func_367(iParam2)] = iParam1;
			break;
		
		case 1296:
			Global_1352331[func_367(iParam2)] = iParam1;
			break;
		
		case 632:
			Global_1352337[func_367(iParam2)] = iParam1;
			break;
		
		case 1271:
			Global_1352343[func_367(iParam2)] = iParam1;
			break;
		
		case 1868:
			Global_2507705[0 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 2259:
			Global_2507705[1 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 2909:
			Global_2507705[2 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3038:
			Global_2507705[3 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 4481:
			Global_2507752[func_367(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1352349[func_367(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1352355[func_367(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1352361[func_367(iParam2)] = iParam1;
			break;
		
		case 1229:
			Global_1352367[func_367(iParam2)] = iParam1;
			break;
		
		case 3033:
			Global_2507727[0 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3034:
			Global_2507727[1 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3035:
			Global_2507727[2 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3036:
			Global_2507727[3 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3037:
			Global_2507727[4 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3616:
			Global_2507755[0 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3617:
			Global_2507755[1 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3618:
			Global_2507755[2 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3619:
			Global_2507755[3 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3620:
			Global_2507755[4 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3621:
			Global_2507771[0 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3622:
			Global_2507771[1 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3623:
			Global_2507771[2 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3624:
			Global_2507771[3 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2507771[4 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3201:
			Global_2507727[5 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3207:
			Global_2507705[4 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2507787[func_367(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2507796[func_367(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2507790[func_367(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2507799[func_367(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2507793[func_367(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2507802[func_367(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2507805[func_367(iParam2)] = iParam1;
			break;
		
		case 3209:
			Global_2507727[6 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2507705[5 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3214:
			Global_2507727[7 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		case 3212:
			Global_2507705[6 /*3*/][func_367(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_448(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3621;
		
		case 1:
			return 3622;
		
		case 2:
			return 3623;
		
		case 3:
			return 3624;
		
		case 4:
			return 3625;
		
		default:
	}
	return 4617;
}

void func_449(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
		iVar0 = func_465(iParam0);
		while (iVar0 <= (iParam2 - 1))
		{
			if (iVar0 < func_462(iParam0))
			{
				if (iVar2 < iParam3)
				{
					if (func_460(func_461(iParam0), iVar0))
					{
						iVar3 = func_459(iParam5);
						func_457(iParam1, iVar0, func_458(iVar3), 1, -1);
						iVar2++;
					}
					else
					{
						iVar4 = 0;
						while (iVar4 <= (iParam2 - 1))
						{
							if (func_460(func_461(iParam0), iVar4))
							{
								if (!func_454(func_455(func_456(iParam1, iVar4, -1, -1))))
								{
									iVar5 = func_456(iParam1, iVar4, -1, -1);
									iVar6 = func_459(iParam5);
									func_457(iParam1, iVar4, func_458(iVar6), 1, -1);
									func_457(iParam1, (iParam2 - 1), iVar5, 1, -1);
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
					iVar8 = func_451(iParam0, iVar0, iParam5);
					if (iVar0 > 0 && !func_450(func_461(iParam0), iVar0))
					{
						while (iVar8 == func_455(func_456(iParam1, (iVar0 - 1), -1, -1)) && iVar7 < 10)
						{
							iVar8 = func_451(iParam0, iVar0, iParam5);
							iVar7++;
						}
					}
					if (iVar8 != 0)
					{
						if (func_456(iParam1, iVar0, -1, -1) == 0)
						{
							func_457(iParam1, iVar0, func_458(iVar8), 1, -1);
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
		while (iVar0 <= (func_465(iParam0) - 1))
		{
			if (iVar0 < func_462(iParam0))
			{
				if (iParam3 > 0)
				{
					iVar1 = 0;
					while (iVar1 <= (func_465(iParam0) - 1))
					{
						if (func_454(func_455(func_456(iParam1, iVar1, -1, -1))))
						{
							if (!func_454(func_455(func_456(iParam1, iVar0, -1, -1))))
							{
								iVar10 = func_456(iParam1, iVar1, -1, -1);
								func_457(iParam1, iVar1, func_456(iParam1, iVar0, -1, -1), 1, -1);
								func_457(iParam1, iVar0, iVar10, 1, -1);
							}
						}
						iVar1++;
					}
				}
				else if (func_454(func_455(func_456(iParam1, iVar0, -1, -1))))
				{
					bVar9 = false;
					iVar1 = 0;
					while (iVar1 <= 5)
					{
						if (!bVar9)
						{
							if (iParam2 >= iVar1)
							{
								if (func_460(func_461(iParam0), iVar1))
								{
									if (!func_454(func_455(func_456(iParam1, iVar1, -1, -1))))
									{
										iVar11 = func_456(iParam1, iVar1, -1, -1);
										func_457(iParam1, iVar1, func_456(iParam1, iVar0, -1, -1), 1, -1);
										func_457(iParam1, iVar0, iVar11, 1, -1);
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
		while (iVar0 <= (func_465(iParam0) - 1))
		{
			if (iVar0 < func_462(iParam0))
			{
				func_457(iParam1, iVar0, func_458(0), 1, -1);
			}
			iVar0++;
		}
	}
	Global_1751873 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1751869[iVar0] = 0;
		iVar0++;
	}
}

int func_450(int iParam0, int iParam1)
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

int func_451(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	
	iVar0 = unk_0xB5BF1B58C833F7A9(0, 2);
	if (func_450(func_461(iParam0), iParam1))
	{
		iVar0 = unk_0xB5BF1B58C833F7A9(0, 4);
	}
	bVar1 = false;
	if ((iVar0 == 1 || iVar0 == 2) || iVar0 == 3)
	{
		bVar1 = true;
	}
	uVar2 = func_453(func_461(iParam0), iParam1);
	return func_452(uParam2, uVar2, bVar1);
}

int func_452(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0xB5BF1B58C833F7A9(0, 2);
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
			iVar0 = unk_0xB5BF1B58C833F7A9(0, 3);
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

int func_453(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return unk_0xB5BF1B58C833F7A9(0, 2);
		
		case 2:
			if (((((((iParam1 > 13 && iParam1 < 21) || (iParam1 > 34 && iParam1 < 42)) || (iParam1 > 55 && iParam1 < 63)) || (iParam1 > 76 && iParam1 < 84)) || (iParam1 > 89 && iParam1 < 93)) || (iParam1 > 98 && iParam1 < 102)) || (iParam1 > 107 && iParam1 < 109))
			{
				return 1;
			}
			else
			{
				return unk_0xB5BF1B58C833F7A9(0, 2);
			}
			break;
	}
	return -1;
}

int func_454(int iParam0)
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

int func_455(int iParam0)
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

int func_456(int iParam0, int iParam1, int iParam2, int iParam3)
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
	iVar18 = unk_0x3BB8D1C5FAAB25B3(&cVar2);
	iVar19 = (8 * (iParam1 % 8));
	if (0 != iVar18)
	{
		if (!unk_0x43577EDB73960877(iVar18, &iVar0, iVar19, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

var func_457(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
	iVar18 = unk_0x3BB8D1C5FAAB25B3(&cVar2);
	iVar19 = (8 * (iParam1 % 8));
	if (iParam2 < 0)
	{
		iParam2 = 255;
	}
	if (0 != iVar18)
	{
		uVar0 = unk_0xD0BD93DA65E5EE25(iVar18, iParam2, iVar19, 8, iParam3);
	}
	return uVar0;
}

int func_458(int iParam0)
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

int func_459(var uParam0)
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

int func_460(int iParam0, int iParam1)
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

int func_461(int iParam0)
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

int func_462(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = func_461(iParam0);
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

int func_463()
{
	if (unk_0x955B8C8F89CC3AC0())
	{
		return 1;
	}
	return 0;
}

int func_464(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_72[iVar0 /*2*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_465(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam0 == Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_72[iVar0 /*2*/])
			{
				return Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_72[iVar0 /*2*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

float func_466()
{
	if (!func_371())
	{
		return (unk_0xBBDA792448DB5A89(Global_262145.f_14014) * 0.01f);
	}
	return (unk_0xBBDA792448DB5A89(Global_262145.f_14015) * 0.01f);
}

int func_467()
{
	int iVar0;
	
	if (!func_34(unk_0x0C1D3C552325765B(), 0))
	{
		if (!func_468(1))
		{
			if (unk_0x08BA6DD398CA197C(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1, 12))
			{
				unk_0x09C86C0C5CA26B1E(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1), 12);
			}
			return 0;
		}
		if (func_362())
		{
			if (unk_0x08BA6DD398CA197C(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1, 12))
			{
				unk_0x09C86C0C5CA26B1E(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1), 12);
			}
			return 0;
		}
		if (!unk_0x08BA6DD398CA197C(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1, 12))
		{
			unk_0x88B0F0DC270164B7(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1), 12);
		}
	}
	else
	{
		iVar0 = func_370();
		if (iVar0 == -1)
		{
			return 0;
		}
		if (!unk_0x08BA6DD398CA197C(Local_369[iVar0 /*11*/].f_1, 12))
		{
			return 0;
		}
	}
	return 1;
}

int func_468(bool bParam0)
{
	if (func_211(unk_0x0C1D3C552325765B(), 21))
	{
		return 0;
	}
	if (unk_0x8188FDE7090D3AF6())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0xA012E3A84A2B2F1A())
		{
			return 0;
		}
	}
	if (func_483(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_482())
	{
		return 0;
	}
	if (func_349())
	{
		return 0;
	}
	if (func_481())
	{
		return 0;
	}
	if (func_343())
	{
		return 0;
	}
	if (unk_0x1504F110F2576375())
	{
		return 0;
	}
	if (func_91(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (!func_345())
	{
		return 0;
	}
	if (func_211(unk_0x0C1D3C552325765B(), 0) || func_211(unk_0x0C1D3C552325765B(), 3))
	{
		return 0;
	}
	if ((func_211(unk_0x0C1D3C552325765B(), 12) || func_211(unk_0x0C1D3C552325765B(), 14)) || func_211(unk_0x0C1D3C552325765B(), 13))
	{
		return 0;
	}
	if (func_480(unk_0x0C1D3C552325765B(), 0, 0, 0))
	{
		if (!func_474())
		{
			return 0;
		}
	}
	if (func_473())
	{
		return 0;
	}
	if (Global_1738544)
	{
		return 0;
	}
	if (func_472(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_471())
	{
		return 0;
	}
	if (func_470(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_469(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	return 1;
}

int func_469(int iParam0)
{
	if (Global_2421327[iParam0 /*353*/].f_260.f_4 != 0 || Global_2421327[iParam0 /*353*/].f_260.f_5)
	{
		return 1;
	}
	return 0;
}

int func_470(int iParam0)
{
	if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 14))
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 11))
	{
		return 1;
	}
	return 0;
}

int func_471()
{
	if (Global_2567282.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_472(int iParam0)
{
	if (!func_1122(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1588660[iParam0 /*532*/].f_35;
}

bool func_473()
{
	return Global_91458.f_304 > 0;
}

int func_474()
{
	int iVar0;
	
	iVar0 = func_192(unk_0x0C1D3C552325765B());
	if (func_479(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_11) || func_478(unk_0x0C1D3C552325765B()))
	{
		if (iVar0 == 167 || iVar0 == 168)
		{
			return 1;
		}
	}
	if (func_477(unk_0x0C1D3C552325765B()))
	{
		if (func_476(iVar0) || func_475(iVar0))
		{
			return 1;
		}
	}
	if (func_398(unk_0x0C1D3C552325765B()))
	{
		if (func_475(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_475(int iParam0)
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

int func_476(int iParam0)
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

int func_477(int iParam0)
{
	if (func_129(Global_1588660[iParam0 /*532*/].f_256.f_11, -1))
	{
		return 1;
	}
	return 0;
}

int func_478(int iParam0)
{
	if (iParam0 != func_55())
	{
		if (func_1122(iParam0, 1, 1))
		{
			if (Global_2421327[iParam0 /*353*/].f_308.f_1 != -1)
			{
				return func_399(Global_2421327[iParam0 /*353*/].f_308.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_479(int iParam0)
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

int func_480(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (Global_1588660[iParam0 /*532*/].f_256.f_11 > 0)
	{
		if (bParam1)
		{
			if (unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 0))
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
		if (func_478(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_398(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_481()
{
	return Global_1315229;
}

bool func_482()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 0);
}

int func_483(int iParam0)
{
	if (func_90(iParam0, 1))
	{
		if (Global_1588660[iParam0 /*532*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_484(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	func_503(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_485(&Var0);
}

int func_485(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2432628.f_2488)
		{
			return 0;
		}
	}
	func_488(uParam0, uParam0->f_16);
	func_487(uParam0);
	if (func_486(uParam0->f_1))
	{
		if (Global_2432628.f_2198[0 /*72*/].f_2 == 0)
		{
			Global_2432628.f_2198[0 /*72*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2432628.f_2198[0 /*72*/].f_1 == 13 || Global_2432628.f_2198[0 /*72*/].f_1 == 52) || Global_2432628.f_2198[0 /*72*/].f_1 == 53) || Global_2432628.f_2198[0 /*72*/].f_1 == 57)
		{
			Global_2432628.f_2198[0 /*72*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2432628.f_2198[iVar0 + 1 /*72*/] = { Global_2432628.f_2198[iVar0 /*72*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2432628.f_2198[1 /*72*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2432628.f_2198[iVar0 /*72*/].f_2 == 0)
		{
			Global_2432628.f_2198[iVar0 /*72*/] = { *uParam0 };
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				unk_0x88B0F0DC270164B7(&(Global_2432628.f_2198[iVar0 /*72*/].f_63), 1);
				Global_2432628.f_2198[iVar0 /*72*/].f_2 = 5;
			}
			if (uParam0->f_1 == 85)
			{
				if (func_303(Global_2432628.f_2198[iVar0 /*72*/].f_1))
				{
					Global_2432628.f_2198[iVar0 /*72*/].f_2 = 5;
					unk_0x88B0F0DC270164B7(&(Global_2432628.f_2198[iVar0 /*72*/].f_63), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_486(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_487(var uParam0)
{
	if (func_305(uParam0->f_1))
	{
		uParam0->f_66 = func_262();
	}
}

void func_488(var uParam0, int iParam1)
{
	if (func_305(uParam0->f_1))
	{
		uParam0->f_67 = 1;
	}
	if (iParam1 == func_55())
	{
		return;
	}
	if (func_303(uParam0->f_1))
	{
		if (uParam0->f_65 == 1)
		{
			uParam0->f_67 = func_489(iParam1, -2, 0, 0);
		}
	}
}

int func_489(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	var uVar1;
	
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
	if (iParam1 == -2)
	{
		iVar0 = unk_0x10B1B072E9514664(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1626500.f_80279[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (func_93(unk_0x0C1D3C552325765B()) || (func_502() && func_501()))
	{
		uVar1 = func_500();
		if (unk_0xD3FACCDA4D66AEAD(uVar1))
		{
			if (unk_0x54F0AEFB11EA090A(iVar1))
			{
				if (unk_0xA43666ACD375E339(iVar1) != -1)
				{
					if (func_1122(unk_0xA43666ACD375E339(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
						{
							if (Global_1626500.f_80279[iParam1] != -1)
							{
								return func_499(iParam1, iParam0, 0);
							}
							else
							{
								return func_496(iParam0, unk_0xA43666ACD375E339(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_496(iParam0, unk_0xA43666ACD375E339(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
			{
				if (Global_1626500.f_80279[iParam1] != -1)
				{
					return func_499(iParam1, iParam0, 0);
				}
				else
				{
					return func_490(0, -1, 0);
				}
			}
			else
			{
				return func_490(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0x1504F110F2576375()) && iParam1 < 4)
	{
		if (Global_1626500.f_80279[iParam1] != -1)
		{
			return func_499(iParam1, iParam0, 0);
		}
		else
		{
			return func_496(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
		}
	}
	return func_496(iParam0, unk_0x0C1D3C552325765B(), iParam1, bParam2, bParam3);
}

int func_490(bool bParam0, int iParam1, bool bParam2)
{
	return func_491(unk_0x0C1D3C552325765B(), bParam0, iParam1, bParam2);
}

int func_491(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x10B1B072E9514664(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_89(iVar0, iParam2, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_495(1);
				}
				else
				{
					return func_495(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_4, 20))
			{
				return func_492(iVar0, iParam2, 1);
			}
			else
			{
				return func_492(iVar0, iParam2, 0);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_495(1);
	}
	return func_495(0);
}

int func_492(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_494(iParam0, iParam1);
	if (func_493(Global_1626500.f_83867))
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

int func_493(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_7751[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_494(int iParam0, int iParam1)
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

int func_495(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_496(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x10B1B072E9514664(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1588660[iVar2 /*532*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if ((func_498(iParam1, iParam0, iVar0, 0) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)) || ((func_89(unk_0x10B1B072E9514664(iParam1), unk_0x10B1B072E9514664(iParam0), 0) && unk_0x08BA6DD398CA197C(Global_1626500.f_15, 23)) && !unk_0x08BA6DD398CA197C(Global_1626500.f_15, 18)))
			{
				return func_495(1);
			}
			else if (unk_0x08BA6DD398CA197C(Global_1626500.f_15, 26))
			{
				return func_497(1);
			}
			else
			{
				return func_491(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1573848 || Global_1573839) || Global_1588660[iParam0 /*532*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1573848 == 1 && Global_1573858 == 0))
			{
				return func_495(1);
			}
			else
			{
				return func_491(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1573843 && Global_1573418.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar3 = func_261(iParam0);
	if (!iVar3 == -1)
	{
		return func_259(iVar3);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_497(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_498(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x10B1B072E9514664(iParam0) == -1 && unk_0x10B1B072E9514664(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x10B1B072E9514664(iParam0) == unk_0x10B1B072E9514664(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x10B1B072E9514664(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x10B1B072E9514664(iParam0) == iParam2;
	}
	return unk_0x10B1B072E9514664(iParam0) == iParam2;
}

int func_499(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (Global_1626500.f_80279[iParam0] != -1 && Global_1626500.f_80279[iParam0] <= 4)
	{
		if (Global_1626500.f_80279[iParam0] == 0)
		{
			iVar0 = 15;
		}
		else if (Global_1626500.f_80279[iParam0] == 1)
		{
			iVar0 = 18;
		}
		else if (Global_1626500.f_80279[iParam0] == 2)
		{
			iVar0 = 24;
		}
		else if (Global_1626500.f_80279[iParam0] == 4)
		{
			if (unk_0x08BA6DD398CA197C(Global_1626500.f_15, 29))
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
			iVar0 = Global_1626500.f_80279[iParam0];
		}
	}
	else
	{
		iVar0 = func_491(iParam1, !bParam2, iParam0, 0);
	}
	return iVar0;
}

var func_500()
{
	return Global_2359301.f_2;
}

bool func_501()
{
	return unk_0x08BA6DD398CA197C(Global_2359301, 4);
}

bool func_502()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_18, 14);
}

void func_503(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
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

int func_504(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xA86CA03D9749EEB3() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xDDEA1623E4BFD71B(unk_0x4B50AAB32FBE0483(), *uParam0);
		}
		else
		{
			return unk_0xDDEA1623E4BFD71B(unk_0xB3FCCA0C64473451(), *uParam0);
		}
	}
	return unk_0xDDEA1623E4BFD71B(unk_0xDF658EB6CA91DFBC(), *uParam0);
}

void func_505(int iParam0, bool bParam1, var uParam2, int iParam3)
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
	
	func_623(iParam0, &fVar2, &fVar3);
	if (uParam2->f_6 == 0)
	{
		iVar1 = (iVar1 + uParam2->f_1);
		iVar0 = (iVar0 + *uParam2);
	}
	if (bParam1)
	{
		if (iParam3 == 0)
		{
			iVar1 = (iVar1 + func_622(iParam0));
		}
		else
		{
			iVar1 = (iVar1 + Global_262145.f_16146);
		}
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		if (iParam3 == 0)
		{
			iVar0 = (iVar0 + func_621(iParam0));
		}
		else
		{
			iVar0 = (iVar0 + Global_262145.f_16145);
		}
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	else if (iParam0 == 185)
	{
		iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * fVar3));
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iVar1) * uParam2->f_3));
		iVar0 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar0) / unk_0xBBDA792448DB5A89(uParam2->f_4)));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * fVar2));
		iVar0 = unk_0xF2DB717A73826179((IntToFloat(iVar0) * uParam2->f_2));
	}
	if (func_192(unk_0x0C1D3C552325765B()) == 167 || func_192(unk_0x0C1D3C552325765B()) == 168)
	{
		if (bParam1)
		{
			if (func_620(unk_0x0C1D3C552325765B()) > 0)
			{
				func_619();
			}
			else
			{
				func_618();
			}
		}
		else
		{
			func_617();
		}
	}
	func_592(iParam0, bParam1, uParam2, &iVar0, &uVar4);
	func_581(iParam0, uParam2, &iVar0, &uVar5);
	iVar6 = func_322();
	if (iVar6 != func_55() && iParam0 != 148)
	{
		if (func_257(unk_0x0C1D3C552325765B(), 0))
		{
			if (!func_293(unk_0x0C1D3C552325765B(), iVar6, 1))
			{
				func_568(&iVar0, 1);
			}
		}
	}
	func_564(iParam0, &iVar7, &iVar8);
	iVar1 = (iVar1 + iVar7);
	iVar0 = (iVar0 + iVar8);
	if (iVar1 > 0)
	{
		Global_1750569.f_10 = iVar1;
		func_563();
		func_525(0, unk_0xA0081090911D13E5(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
	}
	if (iVar0 > 0)
	{
		Global_1750569.f_9 = iVar0;
		iVar11 = func_524();
		if (iVar11 != func_55())
		{
			func_523(iVar11, &uVar9, &uVar10);
		}
		bVar12 = !func_522(1);
		if (iParam0 == 168)
		{
			if (!func_463())
			{
				unk_0x68D326E42C98E875(iVar0, uVar4);
			}
		}
		else if (iParam0 == 190)
		{
			if (func_521())
			{
				if (!func_463())
				{
					unk_0x68D326E42C98E875(iVar0, uVar5);
				}
			}
			else if (func_463())
			{
				func_517(-856006867, iVar0, &iVar13, 0, 1, 0);
				Global_2572880[iVar13 /*73*/].f_8.f_54 = uVar9;
				Global_2572880[iVar13 /*73*/].f_8.f_55 = uVar10;
				Global_2572880[iVar13 /*73*/].f_8.f_56 = bVar12;
			}
			else
			{
				unk_0x68D326E42C98E875(iVar0, uVar5);
			}
		}
		else if (func_463())
		{
			func_517(-856006867, iVar0, &iVar14, 0, 1, 0);
			Global_2572880[iVar14 /*73*/].f_8.f_54 = uVar9;
			Global_2572880[iVar14 /*73*/].f_8.f_55 = uVar10;
			Global_2572880[iVar14 /*73*/].f_8.f_56 = bVar12;
		}
		else
		{
			unk_0x2C88EFEEFFB32E94(uVar9, uVar10, iVar0, bVar12);
		}
		func_516(iParam0, iVar0);
		if (func_515(iParam0))
		{
			if (func_514(iParam0) > -1)
			{
				func_513(func_514(iParam0), iVar0);
			}
		}
		Global_2453923 = iVar0;
		func_512(&Global_2452207, 0, 0);
	}
	if (func_214(unk_0x0C1D3C552325765B()) || func_263(unk_0x0C1D3C552325765B()))
	{
		func_506(iParam0);
	}
	if (func_389(iParam0))
	{
		Global_1750587.f_13 = iVar0;
		Global_1750587.f_14 = iVar1;
	}
}

void func_506(int iParam0)
{
	if (func_511(unk_0x0C1D3C552325765B()) && func_521())
	{
		if (func_476(iParam0))
		{
			func_509(4611, -1);
		}
		else if (func_508(iParam0))
		{
			func_509(4613, -1);
		}
		else if (func_291(iParam0, 1))
		{
			func_509(4614, -1);
		}
		else if (func_507(iParam0))
		{
			func_509(4615, -1);
		}
	}
}

int func_507(int iParam0)
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

int func_508(int iParam0)
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

void func_509(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_445(iParam0, func_367(iParam1), 0);
	iVar0++;
	if (!func_510(iParam0))
	{
		func_444(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_447(iParam0, iVar0, iParam1, 1);
	}
}

int func_510(int iParam0)
{
	if (Global_1352216)
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
			case 2909:
			case 3038:
			case 4481:
			case 3033:
			case 3034:
			case 3035:
			case 3036:
			case 3037:
			case 3212:
			case 3214:
			case 3616:
			case 3617:
			case 3618:
			case 3619:
			case 3620:
			case 3621:
			case 3622:
			case 3623:
			case 3624:
			case 3625:
			case 3207:
			case 3201:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3669:
			case 3210:
			case 3209:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_511(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_84, 14);
}

void func_512(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0xA86CA03D9749EEB3() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x4B50AAB32FBE0483();
		}
		else
		{
			*uParam0 = unk_0xB3FCCA0C64473451();
		}
	}
	else
	{
		*uParam0 = unk_0xDF658EB6CA91DFBC();
	}
	uParam0->f_1 = 1;
}

void func_513(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2482149.f_269 = iParam0;
		if (iParam1 > Global_262145.f_5400)
		{
			iParam1 = Global_262145.f_5400;
		}
		Global_2482149.f_270 = iParam1;
		Global_2482149.f_271 = 0;
	}
}

int func_514(int iParam0)
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

int func_515(int iParam0)
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

void func_516(int iParam0, int iParam1)
{
	if (func_511(unk_0x0C1D3C552325765B()) && func_521())
	{
		if (func_476(iParam0) && iParam1 > 0)
		{
			func_444(4612, (func_445(4612, -1, 0) + iParam1), -1, 1, 0);
		}
	}
}

void func_517(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_463())
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
			if (iParam1 > 0)
			{
				func_518(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_518(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_518(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_463())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xFCE85827D6C3F47A(func_36()) || unk_0x474B3F20E92EE4B9())
		{
			Global_2573372 = 1;
			return 0;
		}
		if (Global_2452901)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2573373 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2572880[iVar1 /*73*/].f_2 == 0)
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
	if (bVar0 || unk_0x6B7B1963D4E447A1(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x1AF42FD94171E81B(iVar3))
		{
			*uParam0 = func_430(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2572880[*uParam0 /*73*/].f_66 = 1;
				}
			}
			Global_2573362 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2573371 = 1;
			Global_2573374 = iParam4;
			Global_2573376 = iParam3;
			Global_2573377 = 1;
			Global_2573375 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2573374 = iParam4;
			Global_2573376 = iParam3;
			Global_2573377 = 1;
			Global_2573375 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_520(1, iParam4);
			Global_2573371 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_519(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_519(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0x88B0F0DC270164B7(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_123.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_419(iParam0);
	}
}

void func_520(int iParam0, var uParam1)
{
	Global_2454055 = uParam1;
	Global_2454054 = iParam0;
}

bool func_521()
{
	return func_321(unk_0x0C1D3C552325765B());
}

bool func_522(bool bParam0)
{
	return func_257(unk_0x0C1D3C552325765B(), bParam0);
}

void func_523(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = Global_1614576[iParam0 /*324*/].f_10.f_7[0];
	*uParam2 = Global_1614576[iParam0 /*324*/].f_10.f_7[1];
}

int func_524()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10;
}

int func_525(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_526(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_526(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_536(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xD3FACCDA4D66AEAD(iParam1))
		{
			if (unk_0x60F161681C368C4E(iParam1))
			{
				uVar1 = unk_0x90897FA118314142(iParam1);
				func_532(unk_0x7560B9B6FB83879C(uVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_527(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_527(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_530(iParam0, 1) };
	if (iParam0 == func_529(unk_0xA0081090911D13E5()))
	{
		func_528(1);
	}
	func_532(Var0, iParam1, 0, sParam2, iParam3);
}

void func_528(int iParam0)
{
	Global_2432628.f_1381 = iParam0;
}

int func_529(int iParam0)
{
	return iParam0;
}

Vector3 func_530(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (unk_0x76E840F466FECF8E())
	{
		Var3 = { unk_0x6A24DA4D96755021(2) };
	}
	if (iParam0 == func_531(unk_0xA0081090911D13E5()) && unk_0x819C3E64C255229B(unk_0xCCC8FE2C71D0E93E()) == 4)
	{
		Var0 = { unk_0x2E01486DB8218E16(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xC59DF10B4FC39DF8(iParam0, 0) };
	}
	fVar6 = 0f;
	if (!unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		fVar6 = unk_0x5E6FDC4F3A8C8EDE(iParam0);
		if (unk_0x819C3E64C255229B(unk_0xCCC8FE2C71D0E93E()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	unk_0xA27A0E75635DD922(unk_0x705BC1BB91F530B5(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0.18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0.18f);
	}
	Var0 = { unk_0x8461D93FE2207D3A(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_531(int iParam0)
{
	return iParam0;
}

void func_532(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2432628.f_780[iVar0 /*30*/].f_6 == 0 || Global_2432628.f_780[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2432628.f_780[iVar1 /*30*/] = { Param0 };
			Global_2432628.f_780[iVar1 /*30*/].f_6 = 1;
			Global_2432628.f_780[iVar1 /*30*/].f_4 = func_535(Global_2432628.f_780[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2432628.f_780[iVar1 /*30*/].f_7 = unk_0x4B50AAB32FBE0483();
			Global_2432628.f_780[iVar1 /*30*/].f_3 = iParam3;
			Global_2432628.f_780[iVar1 /*30*/].f_8 = iParam4;
			Global_2432628.f_780[iVar1 /*30*/].f_9 = func_534();
			Global_2432628.f_780[iVar1 /*30*/].f_10 = func_533();
			StringCopy(&(Global_2432628.f_780[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2432628.f_780[iVar1 /*30*/].f_26 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), iParam6);
		}
	}
}

int func_533()
{
	if (Global_2432628.f_1381)
	{
		Global_2432628.f_1381 = 0;
		return 1;
	}
	Global_2432628.f_1381 = 0;
	return 0;
}

var func_534()
{
	var uVar0;
	
	uVar0 = Global_2432628.f_1383;
	Global_2432628.f_1383 = 1;
	return uVar0;
}

float func_535(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x999A157665D69393(unk_0xACDF5DE746C18841(), Param0, 1);
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

var func_536(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_537(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_537(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_562(unk_0x0C1D3C552325765B()) || func_561(unk_0x0C1D3C552325765B()))
	{
		if (Global_262145.f_8088 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_8088;
		}
	}
	else if (Global_262145.f_5451 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5451;
	}
	if (func_560(uParam2))
	{
	}
	if (func_559())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_557(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_556(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_554(0, &iVar1);
					break;
				
				case 3:
					func_554(1, &iVar1);
					break;
				
				case 1:
					func_552(&iVar1);
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
			func_551(1157, iVar1, -1);
			if (iParam1 == 0)
			{
				func_547((func_550(unk_0x0C1D3C552325765B()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x726276BAB6518437(iVar1, iParam8, iParam9);
				if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_39.f_2 != -1)
				{
					func_551(1158, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_542(iVar1);
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
				func_538((func_540(unk_0x0C1D3C552325765B()) + iVar1));
			}
			else
			{
				func_538((func_540(unk_0x0C1D3C552325765B()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_538(int iParam0)
{
	if (func_559())
	{
		Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_5 = iParam0;
		func_539(joaat("mpply_globalxp"), iParam0);
	}
}

void func_539(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, uParam1, 1);
	}
}

int func_540(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_1122(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return func_541(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_5;
			}
		}
		else
		{
			return func_541(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_541(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x8A3351ECF43DB941(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_542(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_57(unk_0x0C1D3C552325765B()) };
	if (unk_0x46E4D0D0168391A1())
	{
		if (unk_0xC1B41A655437AD93(&Var0))
		{
			iVar13 = func_545(func_546(&Var0));
			if (iVar13 == 0)
			{
				func_544(&Global_1352222, iParam0);
				func_543(joaat("mpply_crew_local_xp_0"), Global_1352222);
			}
			else if (iVar13 == 1)
			{
				func_544(&Global_1352223, iParam0);
				func_543(joaat("mpply_crew_local_xp_1"), Global_1352223);
			}
			else if (iVar13 == 2)
			{
				func_544(&Global_1352224, iParam0);
				func_543(joaat("mpply_crew_local_xp_2"), Global_1352224);
			}
			else if (iVar13 == 3)
			{
				func_544(&Global_1352225, iParam0);
				func_543(joaat("mpply_crew_local_xp_3"), Global_1352225);
			}
			else if (iVar13 == 4)
			{
				func_544(&Global_1352226, iParam0);
				func_543(joaat("mpply_crew_local_xp_4"), Global_1352226);
			}
		}
	}
}

void func_543(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x10CE8769EE2626C7(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1352217 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1352219 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1352219 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1352220 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1352221 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1352222 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1352223 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1352224 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1352225 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1352226 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1352227 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1352228 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1352229 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1352230 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1352231 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1352232 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1352233 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_544(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_545(int iParam0)
{
	if (iParam0 == Global_1352217)
	{
		return 0;
	}
	else if (iParam0 == Global_1352218)
	{
		return 1;
	}
	else if (iParam0 == Global_1352219)
	{
		return 2;
	}
	else if (iParam0 == Global_1352220)
	{
		return 3;
	}
	else if (iParam0 == Global_1352221)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_546(var uParam0)
{
	if (unk_0x46E4D0D0168391A1())
	{
		if (unk_0xC1B41A655437AD93(uParam0))
		{
			return Global_2451705;
		}
	}
	return Global_2451705;
}

void func_547(int iParam0, int iParam1, int iParam2)
{
	if (func_559())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8058 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1352337[func_367(-1)])
				{
					unk_0x726276BAB6518437(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1352337[func_367(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8057 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x726276BAB6518437(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8057 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x726276BAB6518437(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_147(unk_0x0C1D3C552325765B()))
		{
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_1 = iParam0;
			Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_201.f_6 = func_548(iParam0, 1);
		}
		func_447(632, iParam0, -1, 1);
		func_444(633, func_548(iParam0, 1), -1, 1, 0);
		Global_1352337[func_367(-1)] = iParam0;
		func_436(7, 0);
	}
}

int func_548(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_549(iParam0, 0);
}

int func_549(int iParam0, int iParam1)
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
		if (Global_278713[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_278713[iVar3] < iParam0)
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

int func_550(int iParam0)
{
	if (Global_1312462.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x0C1D3C552325765B())
			{
				return Global_1352337[func_367(-1)];
			}
			else if (func_147(iParam0))
			{
				return Global_1588660[iParam0 /*532*/].f_201.f_1;
			}
		}
	}
	else
	{
		return Global_1352337[func_367(-1)];
	}
	return 0;
}

void func_551(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_445(iParam0, func_367(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_510(iParam0))
	{
		func_444(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_447(iParam0, iVar0, iParam2, 1);
	}
}

void func_552(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x10B1B072E9514664(unk_0x0C1D3C552325765B());
	iVar0 = 0;
	while (iVar0 < unk_0xE5697AB254094B0D())
	{
		iVar4 = unk_0x81C7A2950EF11C8A(iVar0);
		if (unk_0x1489FFC2CBA39486(iVar4))
		{
			iVar5 = unk_0xF3B8A064D228878B(iVar4);
			if (unk_0x10B1B072E9514664(iVar5) != -1)
			{
				if (unk_0x10B1B072E9514664(iVar5) == iVar1 || func_89(unk_0x10B1B072E9514664(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x0C1D3C552325765B())
					{
						if (func_58(unk_0x0C1D3C552325765B(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_553(*iParam0, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_553(*iParam0, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_553(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_554(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0xE5697AB254094B0D())
		{
			iVar3 = iVar0;
			if (unk_0x1489FFC2CBA39486(iVar3))
			{
				iVar4 = unk_0xF3B8A064D228878B(iVar3);
				if (func_1122(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x0C1D3C552325765B())
					{
						iVar1++;
						if (func_58(unk_0x0C1D3C552325765B(), iVar4))
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
			if (func_1122(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x0C1D3C552325765B())
				{
					if (func_555(unk_0x0C1D3C552325765B(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_58(unk_0x0C1D3C552325765B(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_553(*iParam1, 100) * (10f * Global_262145.f_4215)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_553(*iParam1, 100) * (20f * Global_262145.f_4208)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_555(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_51(iParam0), func_51(iParam1));
	return 0f;
}

int func_556(int iParam0)
{
	int iVar0;
	
	if (unk_0x666918BF44D91346() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_553(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_557(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x9ABCEFB6E400C9FB(iParam0) > func_550(unk_0x0C1D3C552325765B()))
		{
			iParam0 = -func_550(unk_0x0C1D3C552325765B());
		}
	}
	if (func_558(8000, 0, 0) > 0)
	{
		if (func_558(8000, 0, 0) < (iParam0 + func_550(unk_0x0C1D3C552325765B())))
		{
			iParam0 = (func_558(8000, 0, 0) - func_550(unk_0x0C1D3C552325765B()));
		}
	}
	return iParam0;
}

int func_558(int iParam0, bool bParam1, int iParam2)
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
	return Global_278713[iParam0];
}

int func_559()
{
	return 1;
}

int func_560(var uParam0)
{
	if (unk_0xD28EDDD3F7264249(uParam0))
	{
		return 1;
	}
	else if (unk_0x28C1B9853548BD8E(uParam0, "") || unk_0x28C1B9853548BD8E(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_561(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 2;
}

bool func_562(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 7;
}

void func_563()
{
	Global_2453272 = 1;
}

void func_564(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	*uParam1 = 0;
	*uParam2 = 0;
	if (!func_173(7))
	{
		return;
	}
	iVar0 = func_566(iParam0);
	iVar1 = func_565(iParam0);
	iVar2 = unk_0x9ABCEFB6E400C9FB(unk_0xDDEA1623E4BFD71B(Global_2482149.f_4698.f_75, unk_0x4B50AAB32FBE0483()));
	if (iParam0 == 190)
	{
		if (iVar2 > Global_262145.f_16348)
		{
			iVar2 = Global_262145.f_16348;
		}
	}
	else if (iParam0 == 191)
	{
		if (iVar2 > Global_262145.f_16349)
		{
			iVar2 = Global_262145.f_16349;
		}
	}
	else if (iParam0 == 192)
	{
		if (iVar2 > Global_262145.f_16347)
		{
			iVar2 = Global_262145.f_16347;
		}
	}
	else if (func_476(iParam0))
	{
		if (iVar2 > Global_262145.f_16350)
		{
			iVar2 = Global_262145.f_16350;
		}
	}
	else if (func_291(iParam0, 0) || func_508(iParam0))
	{
		if (iVar2 > Global_262145.f_16351)
		{
			iVar2 = Global_262145.f_16351;
		}
	}
	else if (iVar2 > Global_262145.f_10827)
	{
		iVar2 = Global_262145.f_10827;
	}
	iVar3 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar2) / (1000f * 60f)));
	if (iVar3 < 1)
	{
		iVar3 = 1;
	}
	*uParam1 = (iVar3 * iVar1);
	*uParam2 = (iVar3 * iVar0);
}

int func_565(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10918;
		
		case 152:
			return Global_262145.f_10953;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10941;
		
		case 157:
			return Global_262145.f_10908;
		
		case 159:
			return Global_262145.f_10891;
		
		case 164:
			return Global_262145.f_10931;
		
		case 160:
			return Global_262145.f_10981;
		
		case 162:
			return Global_262145.f_11001;
		
		case 163:
			return Global_262145.f_10966;
		
		case 154:
			return Global_262145.f_11036;
		
		case 155:
			return Global_262145.f_11026;
		
		case 153:
			return Global_262145.f_10990;
		
		case 170:
			return Global_262145.f_12877;
		
		case 171:
			return Global_262145.f_12936;
		
		case 172:
			return Global_262145.f_12954;
		
		case 173:
			return Global_262145.f_12895;
		
		case 166:
			return Global_262145.f_12910;
		
		case 167:
			return Global_262145.f_13001;
		
		case 169:
			return Global_262145.f_12973;
		
		case 168:
			return Global_262145.f_12966;
		
		case 179:
			return Global_262145.f_16230;
		
		case 180:
			return Global_262145.f_16009;
		
		case 182:
			return Global_262145.f_16009;
		
		case 183:
			return Global_262145.f_16009;
		
		case 185:
			return Global_262145.f_16009;
		
		case 186:
			return Global_262145.f_16009;
		
		case 189:
			return Global_262145.f_16230;
		
		case 190:
			return Global_262145.f_15885;
		
		case 191:
			return Global_262145.f_15976;
		
		case 192:
			return Global_262145.f_15770;
		
		case 193:
			return Global_262145.f_16230;
		
		case 194:
			return Global_262145.f_16230;
		
		case 195:
			return Global_262145.f_16009;
		
		case 197:
			return Global_262145.f_16009;
		
		case 198:
			return Global_262145.f_16009;
		
		case 199:
			return Global_262145.f_16230;
		
		case 200:
			return Global_262145.f_16230;
		
		case 201:
			return Global_262145.f_16230;
		
		case 205:
			return Global_262145.f_16230;
		
		case 207:
			return Global_262145.f_16009;
		
		case 208:
			return Global_262145.f_16009;
		
		case 209:
			return Global_262145.f_16009;
		
		case 210:
			return Global_262145.f_16230;
		
		case 211:
			return Global_262145.f_16230;
		
		default:
	}
	return 0;
}

int func_566(int iParam0)
{
	switch (iParam0)
	{
		case 148:
			return Global_262145.f_10917;
		
		case 152:
			return Global_262145.f_10952;
		
		case 151:
			return 0;
		
		case 142:
			return Global_262145.f_10940;
		
		case 157:
			return Global_262145.f_10907;
		
		case 159:
			return Global_262145.f_10890;
		
		case 164:
			return Global_262145.f_10930;
		
		case 160:
			return Global_262145.f_10980;
		
		case 162:
			return Global_262145.f_11000;
		
		case 163:
			return Global_262145.f_10965;
		
		case 154:
			return Global_262145.f_11035;
		
		case 155:
			return Global_262145.f_11025;
		
		case 153:
			return Global_262145.f_10989;
		
		case 170:
			return Global_262145.f_12876;
		
		case 171:
			return Global_262145.f_12935;
		
		case 172:
			return Global_262145.f_12953;
		
		case 173:
			return Global_262145.f_12894;
		
		case 166:
			return Global_262145.f_12909;
		
		case 179:
			return Global_262145.f_16229;
		
		case 180:
			return Global_262145.f_16008;
		
		case 182:
			return Global_262145.f_16008;
		
		case 183:
			return Global_262145.f_16008;
		
		case 185:
			return Global_262145.f_16008;
		
		case 186:
			return Global_262145.f_16008;
		
		case 189:
			return Global_262145.f_16229;
		
		case 193:
			return Global_262145.f_16229;
		
		case 194:
			return Global_262145.f_16229;
		
		case 195:
			return Global_262145.f_16008;
		
		case 197:
			return Global_262145.f_16008;
		
		case 198:
			return Global_262145.f_16008;
		
		case 199:
			return Global_262145.f_16229;
		
		case 200:
			return Global_262145.f_16229;
		
		case 201:
			return Global_262145.f_16229;
		
		case 205:
			return Global_262145.f_16229;
		
		case 207:
			return Global_262145.f_16008;
		
		case 208:
			return Global_262145.f_16008;
		
		case 209:
			return Global_262145.f_16008;
		
		case 210:
			return Global_262145.f_16229;
		
		case 211:
			return Global_262145.f_16229;
		
		case 190:
			if (!func_567())
			{
				return Global_262145.f_15884;
			}
			else
			{
				return 0;
			}
			break;
		
		case 191:
			if (!func_567())
			{
				return Global_262145.f_15975;
			}
			else
			{
				return 0;
			}
			break;
		
		case 192:
			if (!func_567())
			{
				return Global_262145.f_15769;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

bool func_567()
{
	return func_213(unk_0x0C1D3C552325765B());
}

void func_568(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_567())
		{
			if (func_522(0))
			{
				if (!func_319(0))
				{
					if (unk_0xCB129F9A01D14082(func_524()))
					{
						if (func_580() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_580());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_578(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_571("GB_BCUT_TICK1", func_524(), iVar0, 0, 0, 1, 1);
						}
						func_411(20);
						func_569(func_524(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_569(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	if (func_1122(iParam0, 0, 1))
	{
		Var0.f_0 = 460;
		Var0.f_1 = unk_0x0C1D3C552325765B();
		Var0.f_2 = iParam1;
		Var0.f_3 = iParam2;
		unk_0x8E36889D76C8D4FA(1, &Var0, 5, func_570(iParam0));
	}
}

int func_570(int iParam0)
{
	var uVar0;
	
	unk_0x88B0F0DC270164B7(&uVar0, iParam0);
	return uVar0;
}

int func_571(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0xCF66111B26743875(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0xCF66111B26743875(iParam1), 64);
		}
		unk_0x754E61FE98961B39(sParam0);
		unk_0x212C24688D441F9E(func_489(iParam1, -2, 1, 0));
		unk_0xDA35BDB37E728640(func_576(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x212C24688D441F9E(iParam3);
		}
		unk_0x3F9D1B882EC0B8AF(iParam2);
		iVar0 = unk_0xBCD67D962E393B66(0, 1);
		func_572(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_572(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_575() || !unk_0x1504F110F2576375()) || !func_34(unk_0x0C1D3C552325765B(), 0))
	{
		return;
	}
	iVar0 = func_573(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1747376.f_5[iVar0 /*53*/] = iParam0;
		Global_1747376.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1747376.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1747376.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1747376.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1747376.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1747376.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1747376.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_573(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1747376 - 1))
	{
		if (iParam0 > Global_1747376.f_5[iVar0 /*53*/].f_1)
		{
			func_574(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1747376++;
	if (Global_1747376 > 5)
	{
		Global_1747376 = 5;
		return Global_1747376;
	}
	return (Global_1747376 - 1);
}

void func_574(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1747376.f_5[iVar0 /*53*/] = { Global_1747376.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_575()
{
	return unk_0x6E373DDF41F95D44(-1762644250);
}

var func_576(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_577(&cVar0);
}

var func_577(char[4] cParam0)
{
	return cParam0;
}

void func_578(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_579(1);
	}
	else
	{
		iVar1 = func_579(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_579(bool bParam0)
{
	if (bParam0)
	{
		return unk_0xF2DB717A73826179((0.05f * 100f));
	}
	return Global_262145.f_10822;
}

int func_580()
{
	return Global_262145.f_10821;
}

void func_581(int iParam0, var uParam1, int iParam2, var uParam3)
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
			if (func_521())
			{
				Var0 = { func_591() };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (func_590(unk_0x0C1D3C552325765B(), Var0.f_0) + uParam1->f_8);
				}
				else
				{
					fVar2 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar3 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar4 = ((fVar2 / fVar3) * 100f);
					iVar5 = (func_590(unk_0x0C1D3C552325765B(), Var0.f_0) + uParam1->f_8);
					fVar6 = ((IntToFloat(iVar5) / 100f) * fVar4);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar6);
				}
				iVar7 = func_584(unk_0x0C1D3C552325765B(), Var0.f_0, *uParam3);
				if (Var0.f_1 == 1)
				{
					fVar8 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_16459);
					iVar7 = unk_0xF2DB717A73826179(fVar8);
				}
				else
				{
					fVar9 = (unk_0xBBDA792448DB5A89(iVar7) * Global_262145.f_16458);
					iVar7 = unk_0xF2DB717A73826179(fVar9);
				}
				*iParam2 = (*iParam2 + iVar7);
				iVar11 = func_583(&uVar10);
				iVar12 = unk_0xF2DB717A73826179(Global_262145.f_16449);
				if (iVar11 > iVar12)
				{
					iVar11 = iVar12;
				}
				iVar13 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar11) * Global_262145.f_16448));
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
					func_411(88);
				}
				Global_2482149.f_4698.f_186 = *iParam2;
			}
			else if (func_319(0))
			{
				Var15 = { func_582(func_524()) };
				if (uParam1->f_10 == uParam1->f_11)
				{
					*uParam3 = (func_590(func_524(), Var15.f_0) + uParam1->f_8);
				}
				else
				{
					fVar17 = unk_0xBBDA792448DB5A89(uParam1->f_10);
					fVar18 = unk_0xBBDA792448DB5A89(uParam1->f_11);
					fVar19 = ((fVar17 / fVar18) * 100f);
					iVar20 = (func_590(func_524(), Var15.f_0) + uParam1->f_8);
					fVar21 = ((IntToFloat(iVar20) / 100f) * fVar19);
					*uParam3 = unk_0x11E019C8F43ACC8A(fVar21);
				}
				iVar22 = func_584(func_524(), Var15.f_0, *uParam3);
				if (Var15.f_1 == 1)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_16459));
				}
				else if (Var15.f_1 == 0)
				{
					iVar22 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar22) * Global_262145.f_16458));
				}
				*iParam2 = (*iParam2 + iVar22);
				fVar23 = Global_262145.f_16498;
				iVar24 = unk_0x11E019C8F43ACC8A((IntToFloat(*iParam2) * fVar23));
				*iParam2 = iVar24;
				iVar25 = Global_262145.f_16499;
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

struct<2> func_582(int iParam0)
{
	return Global_1614576[iParam0 /*324*/].f_10.f_177;
}

int func_583(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xCB129F9A01D14082(unk_0x81C85E54237F8A2E(iVar0)))
		{
			iVar2 = unk_0x81C85E54237F8A2E(iVar0);
			if (!func_34(iVar2, 0) && !func_293(iVar2, unk_0x0C1D3C552325765B(), 1))
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

int func_584(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_589(iParam1);
	if (func_588(iParam1))
	{
		switch (iVar1)
		{
			case 1:
				iVar0 = Global_262145.f_14838;
				if (func_585(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14843);
				}
				if (func_585(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14848);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 3:
				iVar0 = Global_262145.f_14837;
				if (func_585(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14842);
				}
				if (func_585(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14847);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 4:
				iVar0 = Global_262145.f_14836;
				if (func_585(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14841);
				}
				if (func_585(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14846);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 0:
				iVar0 = Global_262145.f_14834;
				if (func_585(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14839);
				}
				if (func_585(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14844);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			
			case 2:
				iVar0 = Global_262145.f_14835;
				if (func_585(iParam0, iParam1, 0))
				{
					iVar0 = (iVar0 + Global_262145.f_14840);
				}
				if (func_585(iParam0, iParam1, 1))
				{
					iVar0 = (iVar0 + Global_262145.f_14845);
				}
				iVar0 = (iVar0 * iParam2);
				break;
			}
	}
	return iVar0;
}

int func_585(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_587(iParam0, iParam1))
	{
		iVar0 = func_586(iParam0, iParam1);
		return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_5, iParam2);
	}
	return 0;
}

int func_586(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_588(iParam1) && iParam0 != func_55())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_587(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_588(iParam1) && iParam0 != func_55())
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_588(int iParam0)
{
	if (iParam0 == 21 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_589(int iParam0)
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
		
		default:
	}
	return -1;
}

int func_590(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return 0;
	}
	if (func_588(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

struct<2> func_591()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_177;
}

void func_592(int iParam0, bool bParam1, var uParam2, int iParam3, var uParam4)
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
		if (func_213(unk_0x0C1D3C552325765B()))
		{
			if (bParam1)
			{
				func_616();
			}
			func_615();
		}
	}
	else if (iParam0 == 168)
	{
		if (bParam1)
		{
			if (func_213(unk_0x0C1D3C552325765B()))
			{
				if (uParam2->f_5)
				{
					*iParam3 = (*iParam3 + func_610(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_173));
				}
				else
				{
					*uParam4 = uParam2->f_7;
					if (uParam2->f_8 > 0)
					{
						*uParam4 = (*uParam4 + uParam2->f_8);
					}
					iVar0 = func_609(*uParam4);
					iVar1 = (iVar0 * *uParam4);
					*iParam3 = (*iParam3 + iVar1);
					iVar3 = func_583(&uVar2);
					iVar4 = Global_262145.f_14023;
					if (iVar3 > iVar4)
					{
						iVar3 = iVar4;
					}
					iVar5 = unk_0x11E019C8F43ACC8A((IntToFloat(iVar3) * Global_262145.f_13232));
					iVar6 = ((*iParam3 / 100) * iVar5);
					*iParam3 = (*iParam3 + iVar6);
					if (uParam2->f_6)
					{
						*iParam3 = (*iParam3 + *uParam2);
					}
					if (iVar3 > 0 && uParam2->f_9 != 4)
					{
						func_411(44);
					}
				}
				func_604(*iParam3);
				func_603();
				Global_2482149.f_4698.f_186 = *iParam3;
				iVar7 = 0;
				while (iVar7 < unk_0xE5697AB254094B0D())
				{
					iVar8 = iVar7;
					if (unk_0x1489FFC2CBA39486(iVar8))
					{
						iVar9 = unk_0xF3B8A064D228878B(iVar8);
						if (func_602(iVar9))
						{
							func_594(iVar9, 1);
						}
					}
					iVar7++;
				}
			}
		}
		if (func_213(unk_0x0C1D3C552325765B()))
		{
			func_593();
		}
	}
}

void func_593()
{
	int iVar0;
	
	iVar0 = Global_2507793[func_36()];
	iVar0++;
	func_447(3647, iVar0, -1, 1);
}

void func_594(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_596(iParam0);
	func_595(iParam0, uVar0, iParam1);
}

void func_595(int iParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0.f_0 = 457;
	Var0.f_1 = unk_0x0C1D3C552325765B();
	Var0.f_2 = uParam1;
	Var0.f_3 = uParam2;
	if (iParam0 != func_55())
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			unk_0x8E36889D76C8D4FA(1, &Var0, 4, func_570(iParam0));
		}
	}
}

int func_596(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_601();
	iVar0 = func_599(iParam0, iVar0);
	iVar1 = Global_1614576[func_524() /*324*/].f_10.f_233;
	iVar0 = (iVar0 + (iVar1 * Global_262145.f_12837));
	if (iVar0 < func_598())
	{
		iVar0 = func_598();
	}
	if (iVar0 > func_597())
	{
		iVar0 = func_597();
	}
	return iVar0;
}

int func_597()
{
	return Global_262145.f_12838;
}

int func_598()
{
	return Global_262145.f_14013;
}

int func_599(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (func_620(iParam0) * func_600());
	iParam1 = (iParam1 - iVar0);
	return iParam1;
}

int func_600()
{
	return Global_262145.f_14012;
}

var func_601()
{
	return Global_262145.f_10813;
}

int func_602(int iParam0)
{
	if (unk_0xCB129F9A01D14082(iParam0))
	{
		if (iParam0 != unk_0x0C1D3C552325765B())
		{
			if (func_293(iParam0, unk_0x0C1D3C552325765B(), 0))
			{
				if (!func_196(iParam0, 26))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_603()
{
	int iVar0;
	
	iVar0 = Global_2507799[func_36()];
	iVar0++;
	func_447(3646, iVar0, -1, 1);
}

void func_604(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = Global_2507802[func_36()];
	iVar0 = (iVar0 + iParam0);
	func_447(3648, iVar0, -1, 1);
	if (func_606(7666, -1, -1) < 24)
	{
		iVar1 = 1;
		while (iVar1 <= 24)
		{
			if (iVar0 >= func_605(iVar1))
			{
				iVar2 = iVar1;
			}
			iVar1++;
		}
		func_441(7666, iVar2, -1, 1);
	}
}

int func_605(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_14156;
			break;
		
		case 2:
			return Global_262145.f_14157;
			break;
		
		case 3:
			return Global_262145.f_14158;
			break;
		
		case 4:
			return Global_262145.f_14159;
			break;
		
		case 5:
			return Global_262145.f_14160;
			break;
		
		case 6:
			return Global_262145.f_14161;
			break;
		
		case 7:
			return Global_262145.f_14162;
			break;
		
		case 8:
			return Global_262145.f_14163;
			break;
		
		case 9:
			return Global_262145.f_14164;
			break;
		
		case 10:
			return Global_262145.f_14165;
			break;
		
		case 11:
			return Global_262145.f_14166;
			break;
		
		case 12:
			return Global_262145.f_14167;
			break;
		
		case 13:
			return Global_262145.f_14168;
			break;
		
		case 14:
			return Global_262145.f_14169;
			break;
		
		case 15:
			return Global_262145.f_14170;
			break;
		
		case 16:
			return Global_262145.f_14171;
			break;
		
		case 17:
			return Global_262145.f_14172;
			break;
		
		case 18:
			return Global_262145.f_14173;
			break;
		
		case 19:
			return Global_262145.f_14174;
			break;
		
		case 20:
			return Global_262145.f_14175;
			break;
		
		case 21:
			return Global_262145.f_14176;
			break;
		
		case 22:
			return Global_262145.f_14177;
			break;
		
		case 23:
			return Global_262145.f_14178;
			break;
		
		case 24:
			return Global_262145.f_14179;
			break;
	}
	return 0;
}

int func_606(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	iVar1 = func_608(iParam0, iParam1);
	uVar2 = func_607(iParam0);
	if (0 != iVar1)
	{
		if (!unk_0x43577EDB73960877(iVar1, &iVar0, uVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_607(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - unk_0x19A1C45894374F65((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - unk_0x19A1C45894374F65((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - unk_0x19A1C45894374F65((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - unk_0x19A1C45894374F65((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - unk_0x19A1C45894374F65((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - unk_0x19A1C45894374F65((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - unk_0x19A1C45894374F65((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - unk_0x19A1C45894374F65((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - unk_0x19A1C45894374F65((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - unk_0x19A1C45894374F65((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - unk_0x19A1C45894374F65((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - unk_0x19A1C45894374F65((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - unk_0x19A1C45894374F65((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - unk_0x19A1C45894374F65((iParam0 - 7641)) * 8) * 8;
	}
	return iVar0;
}

int func_608(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = unk_0xDED84488A87A6A63((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = unk_0x8312E74D8EF16836((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = unk_0x8312E74D8EF16836((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = unk_0xC32C9C14231E969A((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	return iVar0;
}

var func_609(int iParam0)
{
	if (iParam0 >= Global_262145.f_13210)
	{
		return Global_262145.f_13231;
	}
	else if (iParam0 >= Global_262145.f_13209)
	{
		return Global_262145.f_13230;
	}
	else if (iParam0 >= Global_262145.f_13208)
	{
		return Global_262145.f_13229;
	}
	else if (iParam0 >= Global_262145.f_13207)
	{
		return Global_262145.f_13228;
	}
	else if (iParam0 >= Global_262145.f_13206)
	{
		return Global_262145.f_13227;
	}
	else if (iParam0 >= Global_262145.f_13205)
	{
		return Global_262145.f_13226;
	}
	else if (iParam0 >= Global_262145.f_13204)
	{
		return Global_262145.f_13225;
	}
	else if (iParam0 >= Global_262145.f_13203)
	{
		return Global_262145.f_13224;
	}
	else if (iParam0 >= Global_262145.f_13202)
	{
		return Global_262145.f_13223;
	}
	else if (iParam0 >= Global_262145.f_13201)
	{
		return Global_262145.f_13222;
	}
	else if (iParam0 >= Global_262145.f_13200)
	{
		return Global_262145.f_13221;
	}
	else if (iParam0 >= Global_262145.f_13199)
	{
		return Global_262145.f_13220;
	}
	else if (iParam0 >= Global_262145.f_13198)
	{
		return Global_262145.f_13219;
	}
	else if (iParam0 >= Global_262145.f_13197)
	{
		return Global_262145.f_13218;
	}
	else if (iParam0 >= Global_262145.f_13196)
	{
		return Global_262145.f_13217;
	}
	else if (iParam0 >= Global_262145.f_13195)
	{
		return Global_262145.f_13216;
	}
	else if (iParam0 >= Global_262145.f_13194)
	{
		return Global_262145.f_13215;
	}
	else if (iParam0 >= Global_262145.f_13193)
	{
		return Global_262145.f_13214;
	}
	else if (iParam0 >= Global_262145.f_13192)
	{
		return Global_262145.f_13213;
	}
	else if (iParam0 >= Global_262145.f_13191)
	{
		return Global_262145.f_13212;
	}
	return Global_262145.f_13211;
}

int func_610(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_614(iParam0))
	{
		iVar2 = 1;
		while (iVar2 <= 6)
		{
			iVar3 = iVar2;
			if (func_613(iParam0, iVar3))
			{
				iVar0 = (iVar0 + func_612(iVar3));
				iVar1++;
			}
			iVar2++;
		}
		if (iVar1 < func_611(iParam0))
		{
			iVar2 = 0;
			while (iVar2 <= (func_611(iParam0) - iVar1))
			{
				iVar0 = (iVar0 + func_612(unk_0xB5BF1B58C833F7A9(1, 6)));
				iVar2++;
			}
		}
	}
	return iVar0;
}

int func_611(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = func_446(func_464(iParam0));
		return func_445(iVar0, -1, 0);
	}
	return 0;
}

int func_612(int iParam0)
{
	if (iParam0 == 1)
	{
		return Global_262145.f_13410;
	}
	else if (iParam0 == 2)
	{
		return Global_262145.f_13408;
	}
	else if (iParam0 == 3)
	{
		return Global_262145.f_13412;
	}
	else if (iParam0 == 4)
	{
		return Global_262145.f_13406;
	}
	else if (iParam0 == 5)
	{
		return Global_262145.f_13404;
	}
	else if (iParam0 == 6)
	{
		return Global_262145.f_13414;
	}
	return 0;
}

int func_613(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			if (Global_1751743[iVar0] == iParam1 && Global_1751750[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_614(int iParam0)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_72[iVar0 /*2*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_615()
{
	int iVar0;
	
	iVar0 = Global_2507790[func_36()];
	iVar0++;
	Global_2507790[func_36()] = iVar0;
	func_447(3645, iVar0, -1, 1);
}

void func_616()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Global_2507787[func_36()];
	iVar1 = Global_2507796[func_36()];
	iVar0++;
	iVar1++;
	Global_2507787[func_36()] = iVar0;
	Global_2507796[func_36()] = iVar1;
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_89 = iVar1;
	func_447(3643, iVar0, -1, 1);
	func_447(3644, iVar1, -1, 1);
}

void func_617()
{
	if (func_567())
	{
		Global_2443212.f_3065.f_134 = 0;
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_233 = Global_2443212.f_3065.f_134;
	}
}

void func_618()
{
	if (func_567())
	{
		if (Global_2443212.f_3065.f_134 < 10)
		{
			Global_2443212.f_3065.f_134++;
			Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_233 = Global_2443212.f_3065.f_134;
		}
	}
}

void func_619()
{
	if (func_567())
	{
		if (Global_2443212.f_3065.f_134 > 0)
		{
			Global_2443212.f_3065.f_134 = (Global_2443212.f_3065.f_134 - 1);
			Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_233 = Global_2443212.f_3065.f_134;
		}
	}
}

int func_620(int iParam0)
{
	return Global_1614576[iParam0 /*324*/].f_10.f_27;
}

int func_621(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10938) * Global_262145.f_10943));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10888) * Global_262145.f_10893));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10915) * Global_262145.f_10919));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10928) * Global_262145.f_10932));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10950) * Global_262145.f_10955));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11112) * Global_262145.f_11113));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11118) * Global_262145.f_11119));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11116) * Global_262145.f_11117));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11110) * Global_262145.f_11111));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11114) * Global_262145.f_11115));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11108) * Global_262145.f_11109));
		
		case 170:
			return 0;
		
		case 171:
			return Global_262145.f_12933;
		
		case 172:
			return Global_262145.f_12949;
		
		case 173:
			return Global_262145.f_12892;
		
		case 166:
			return 0;
		
		case 179:
			return Global_262145.f_16153;
		
		case 180:
			return Global_262145.f_16029;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16037;
		
		case 185:
			return Global_262145.f_16046;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16241;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16258;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16106;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16289;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16167;
		
		case 205:
			return Global_262145.f_16276;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16134;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16271;
		
		case 211:
			return Global_262145.f_16235;
		
		default:
	}
	return 0;
}

int func_622(int iParam0)
{
	switch (iParam0)
	{
		case 142:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10939) * Global_262145.f_10944));
		
		case 157:
			return 0;
		
		case 159:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10889) * Global_262145.f_10894));
		
		case 151:
			return 0;
		
		case 148:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10916) * Global_262145.f_10920));
		
		case 164:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10929) * Global_262145.f_10933));
		
		case 152:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10951) * Global_262145.f_10956));
		
		case 153:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10988) * Global_262145.f_10991));
		
		case 154:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11034) * Global_262145.f_11037));
		
		case 155:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_11024) * Global_262145.f_11027));
		
		case 160:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10979) * Global_262145.f_10982));
		
		case 162:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10999) * Global_262145.f_11004));
		
		case 163:
			return unk_0xF2DB717A73826179((IntToFloat(Global_262145.f_10964) * Global_262145.f_10967));
		
		case 170:
			return Global_262145.f_12875;
		
		case 171:
			return Global_262145.f_12934;
		
		case 172:
			return Global_262145.f_12950;
		
		case 173:
			return Global_262145.f_12893;
		
		case 166:
			return 0;
		
		case 167:
			return Global_262145.f_14967;
		
		case 168:
			return Global_262145.f_14966;
		
		case 179:
			return Global_262145.f_16154;
		
		case 180:
			return Global_262145.f_16030;
		
		case 182:
			return 0;
		
		case 183:
			return Global_262145.f_16038;
		
		case 185:
			return Global_262145.f_16047;
		
		case 186:
			return 0;
		
		case 189:
			return Global_262145.f_16242;
		
		case 190:
			return 0;
		
		case 191:
			return 0;
		
		case 192:
			return 0;
		
		case 193:
			return Global_262145.f_16259;
		
		case 194:
			return 0;
		
		case 195:
			return 0;
		
		case 197:
			return Global_262145.f_16107;
		
		case 198:
			return 0;
		
		case 199:
			return Global_262145.f_16290;
		
		case 200:
			return 0;
		
		case 201:
			return Global_262145.f_16168;
		
		case 205:
			return Global_262145.f_16277;
		
		case 207:
			return 0;
		
		case 208:
			return Global_262145.f_16135;
		
		case 209:
			return 0;
		
		case 210:
			return Global_262145.f_16272;
		
		case 211:
			return Global_262145.f_16236;
		
		default:
	}
	return 0;
}

void func_623(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	if (iParam0 == 157)
	{
		*uParam1 = 1f;
		*uParam2 = 1f;
		return;
	}
	if (func_624(iParam0))
	{
		if (!func_567())
		{
			*uParam1 = 1f;
			*uParam2 = Global_262145.f_10832;
		}
		else
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
		return;
	}
	if (func_389(iParam0))
	{
		*uParam1 = (Global_262145.f_16007 / 100f);
		*uParam2 = (Global_262145.f_16007 / 100f);
	}
	else
	{
		*uParam1 = Global_262145.f_10831;
		*uParam2 = Global_262145.f_10830;
	}
	if (func_389(iParam0))
	{
		if (func_257(unk_0x0C1D3C552325765B(), 1))
		{
			*uParam1 = (Global_262145.f_16006 / 100f);
			*uParam2 = (Global_262145.f_16006 / 100f);
		}
	}
	else if (func_257(unk_0x0C1D3C552325765B(), 1))
	{
		*uParam1 = Global_262145.f_10829;
		*uParam2 = Global_262145.f_10828;
	}
	iVar0 = func_322();
	if (iVar0 != func_55())
	{
		if (func_293(unk_0x0C1D3C552325765B(), iVar0, 1))
		{
			*uParam1 = 1f;
			*uParam2 = 1f;
		}
	}
}

int func_624(int iParam0)
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

void func_625(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	iVar0 = func_192(unk_0x0C1D3C552325765B());
	if (func_389(iVar0))
	{
		Global_1750587.f_2 = func_637();
		Global_1750587.f_3 = func_636();
		Global_1750587.f_50 = iParam4;
		Global_1750587.f_51 = iParam5;
		Global_1750587.f_10 = unk_0x39E54E7BC7452169();
		Global_1750587.f_20 = (Global_1750587.f_10 - Global_1750587.f_9);
		Global_1750587.f_12 = iParam1;
		Global_1750587.f_19 = func_630(iVar0, bParam0, func_635(bParam3));
		if (bParam0)
		{
			Global_1750587.f_11 = 1;
		}
		else
		{
			Global_1750587.f_11 = 0;
		}
		if ((func_214(unk_0x0C1D3C552325765B()) || func_361(unk_0x0C1D3C552325765B())) || func_263(unk_0x0C1D3C552325765B()))
		{
			Global_1750587.f_8 = 1;
		}
		else
		{
			Global_1750587.f_8 = 0;
		}
		if (iParam2 != 0)
		{
			Global_1750587.f_43 = 0;
			Global_1750587.f_45 = func_629(func_524(), iParam2);
			Global_1750587.f_47 = iParam7;
			Global_1750587.f_46 = iParam6;
			Global_1750587.f_52 = func_628(func_524(), iParam2);
		}
		func_626();
	}
	else
	{
		Global_1750569.f_6 = unk_0x39E54E7BC7452169();
		if (bParam0)
		{
			Global_1750569.f_7 = 1;
		}
		else
		{
			Global_1750569.f_7 = 0;
		}
		Global_1750569.f_8 = iParam1;
		if (Global_1750569.f_4 == 0)
		{
			if ((func_214(unk_0x0C1D3C552325765B()) || func_361(unk_0x0C1D3C552325765B())) || func_263(unk_0x0C1D3C552325765B()))
			{
				Global_1750569.f_4 = 1;
			}
		}
	}
}

void func_626()
{
	var uVar0;
	
	uVar0 = unk_0x367152330DB70D69();
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_SEARCH_AND_DESTROY"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_RIPPIN_IT_UP"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_DRIVEBY_ASSASSIN"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_WHEELIE_RIDER"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CRIMINAL_MISCHIEF"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_FIVESTAR"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_RACE_P2P"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_STAND_YOUR_GROUND"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "AM_PENNED_IN"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_UNLOAD_WEAPONS"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_RESCUE_CONTACT"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_LAST_RESPECTS"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_BAD_DEAL"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CONTRACT_KILLING"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_SAFECRACKER"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_FREE_PRISONER"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_DESTROY_VANS"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_SHUTTLE"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_BURN_ASSETS"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_STEAL_BIKES"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_ILLICIT_GOODS_RESUPPLY"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CONTRABAND_SELL"))
	{
	}
	if (unk_0x28C1B9853548BD8E(uVar0, "GB_BIKER_CONTRABAND_DEFEND"))
	{
	}
	unk_0xBF371CD2B64212FD(&Global_1750587);
	func_627();
}

void func_627()
{
	struct<53> Var0;
	
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
	Global_1750587 = { Var0 };
	Global_1750587.f_29 = 0;
	Global_1750587.f_30 = 0;
	Global_1750587.f_17 = 0;
}

int func_628(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	
	bVar0 = func_585(iParam0, iParam1, 2);
	bVar1 = func_585(iParam0, iParam1, 1);
	bVar2 = func_585(iParam0, iParam1, 0);
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

int func_629(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return 0;
	}
	if (func_588(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_630(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_476(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_15564;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_15563;
		}
		else
		{
			iVar0 = Global_262145.f_15545;
		}
		iVar1 = 19;
	}
	else if (func_475(iParam0))
	{
		iVar0 = 6;
		iVar1 = 24;
	}
	else if (func_291(iParam0, 0))
	{
		if (bParam1)
		{
			iVar0 = Global_262145.f_15544;
			iVar1 = 20;
		}
	}
	else if (func_389(iParam0))
	{
		if (!bParam1 && bParam2)
		{
			iVar0 = Global_262145.f_15564;
		}
		else if (!bParam2)
		{
			iVar0 = Global_262145.f_15563;
		}
		else
		{
			iVar0 = Global_262145.f_15545;
		}
		iVar1 = 18;
	}
	if (iVar0 != 0)
	{
		unk_0x501478855A6074CE(func_634(func_524()), func_633(func_524()), func_637(), func_636(), iVar1, iVar0);
	}
	func_632(iVar0);
	func_631(iVar0);
	return iVar0;
}

void func_631(int iParam0)
{
	int iVar0;
	
	iVar0 = func_445(3936, -1, 0);
	iVar0 = (iVar0 + iParam0);
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (iVar0 > 9999)
	{
		iVar0 = 9999;
	}
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_274 = iVar0;
	func_444(3936, iVar0, -1, 1, 0);
}

void func_632(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	Global_1614576[iVar0 /*324*/].f_10.f_273 = (Global_1614576[iVar0 /*324*/].f_10.f_273 + iParam0);
	if (Global_1614576[iVar0 /*324*/].f_10.f_273 < -9999)
	{
		Global_1614576[iVar0 /*324*/].f_10.f_273 = 9999;
	}
	else if (Global_1614576[iVar0 /*324*/].f_10.f_273 > 9999)
	{
		Global_1614576[iVar0 /*324*/].f_10.f_273 = 9999;
	}
}

int func_633(int iParam0)
{
	if (iParam0 == func_55())
	{
		return -1;
	}
	return Global_1614576[iParam0 /*324*/].f_10.f_7[1];
}

int func_634(int iParam0)
{
	if (iParam0 == func_55())
	{
		return -1;
	}
	return Global_1614576[iParam0 /*324*/].f_10.f_7[0];
}

int func_635(bool bParam0)
{
	if (bParam0)
	{
		return 0;
	}
	if (func_214(unk_0x0C1D3C552325765B()) || func_263(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	return 0;
}

int func_636()
{
	if (Global_1750569.f_3 != 0)
	{
		return Global_1750569.f_3;
	}
	return -1;
}

int func_637()
{
	if (Global_1750569.f_2 != 0)
	{
		return Global_1750569.f_2;
	}
	return -1;
}

int func_638(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_55();
	iVar1 = func_55();
	iVar2 = func_55();
	return func_639(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10);
}

int func_639(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13)
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
	func_503(uParam0, &Var0, iParam9, sParam2, sParam1);
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
	unk_0x88B0F0DC270164B7(&(Var0.f_63), 2);
	return func_485(&Var0);
}

int func_640(int iParam0)
{
	int iVar0;
	
	iVar0 = func_261(iParam0);
	if (iVar0 != -1)
	{
		return func_259(iVar0);
	}
	return 1;
}

char* func_641(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0x0C1D3C552325765B())
	{
		sVar0 = func_646(&(Global_1614576[iParam0 /*324*/].f_10.f_97));
		return sVar0;
	}
	if (Global_1614576[iParam0 /*324*/].f_10.f_113 != Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_113)
	{
		sVar0 = func_644(iParam0, 0);
		return sVar0;
	}
	if (((func_196(iParam0, 28) || func_196(unk_0x0C1D3C552325765B(), 28)) || func_643(iParam0)) && !func_642(iParam0))
	{
		return func_644(iParam0, 0);
	}
	iVar1 = func_56(iParam0);
	if (iVar1 != func_55())
	{
		if (iVar1 != unk_0x0C1D3C552325765B())
		{
			if (!unk_0x9584C2F535471638(0, -1, 1))
			{
				return func_644(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_55())
	{
		sVar0 = func_646(&(Global_1614576[iVar1 /*324*/].f_10.f_97));
		if (unk_0x509383441597090D(sVar0))
		{
			return func_644(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_642(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_57(iParam0) };
	if (unk_0x15B0CAB107CFCDE1() && unk_0x6F4E1F8D329BC4EC(&Var0))
	{
		return 1;
	}
	return 0;
}

int func_643(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_57(iParam0) };
	if (unk_0xD95D58B9AAC86D55() || unk_0x955B8C8F89CC3AC0())
	{
		if (unk_0xED4DB0F2EFE02B37(0))
		{
			return 0;
		}
	}
	else if (unk_0x15B0CAB107CFCDE1())
	{
		if (unk_0x6F4E1F8D329BC4EC(&Var0))
		{
			return 0;
		}
	}
	return 1;
}

var func_644(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_246(iParam0, 1))
		{
			return func_645();
		}
	}
	return unk_0xFFC9DE7E93AEAE21("GB_REST_ACC");
}

var func_645()
{
	return unk_0xFFC9DE7E93AEAE21("GB_REST_ACCM");
}

var func_646(var uParam0)
{
	return uParam0;
}

void func_647()
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
	if (func_371())
	{
		if (func_11(&(Local_99.f_238)))
		{
			iVar1 = (func_18() - 300000);
			bVar0 = func_6(&(Local_99.f_238), iVar1, 0);
			if (bVar0)
			{
				func_655();
				if ((func_18() - func_504(&(Local_99.f_238), 0, 0)) > 0)
				{
					if ((func_18() - func_504(&(Local_99.f_238), 0, 0)) > 30000)
					{
						func_654((func_18() - func_504(&(Local_99.f_238), 0, 0)), "GB_WORK_END", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0);
					}
					else
					{
						func_654((func_18() - func_504(&(Local_99.f_238), 0, 0)), "GB_WORK_END", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
					}
				}
				else
				{
					func_654(0, "GB_WORK_END", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
				}
			}
		}
		return;
	}
	if (!func_1048() && !func_369())
	{
		return;
	}
	if (!func_467())
	{
		return;
	}
	iVar2 = unk_0x0C1D3C552325765B();
	if (func_34(unk_0x0C1D3C552325765B(), 0))
	{
		iVar2 = Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_434;
	}
	iVar3 = func_360(iVar2);
	if (iVar3 < 3)
	{
		return;
	}
	iVar4 = (func_30() - Local_99.f_213);
	if (unk_0x08BA6DD398CA197C(Local_99.f_1, 13))
	{
		func_651(iVar4, "DCONTRA_HUD1", -1, 1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (func_11(&(Local_99.f_226)))
	{
		iVar5 = func_20();
		iVar6 = (func_20() - func_504(&(Local_99.f_226), 0, 0));
		func_648(iVar6, iVar5, "DCONTRA_HUD2", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0);
	}
	else
	{
		iVar5 = func_20();
		iVar6 = func_20();
		func_648(iVar6, iVar5, "DCONTRA_HUD2", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0);
	}
}

void func_648(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_650(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1344178.f_1 = 1;
		func_649(0, iVar0);
		Global_1344178.f_946[iVar0] = iParam0;
		Global_1344178.f_946.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1344178.f_946.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1344178.f_946.f_194[iVar0] = iParam3;
		Global_1344178.f_946.f_183[iVar0] = iParam4;
		Global_1344178.f_946.f_216[iVar0] = iParam5;
		Global_1344178.f_946.f_227[iVar0 /*3*/] = iParam6;
		Global_1344178.f_946.f_227[iVar0 /*3*/].f_1 = iParam7;
		Global_1344178.f_946.f_258[iVar0] = iParam8;
		Global_1344178.f_946.f_269[iVar0] = iParam9;
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

void func_649(int iParam0, int iParam1)
{
	unk_0x88B0F0DC270164B7(&(Global_1344178.f_5139[iParam0]), iParam1);
}

bool func_650(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1344178.f_5139[iParam0], iParam1);
}

void func_651(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18)
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
			if (func_650(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1344178.f_1 = 1;
		func_649(6, iVar0);
		Global_1344178.f_3579[iVar0] = iParam0;
		StringCopy(&(Global_1344178.f_3579.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1344178.f_3579.f_183[iVar0] = iParam3;
		Global_1344178.f_3579.f_172[iVar0] = iParam2;
		Global_1344178.f_3579.f_260[iVar0] = iParam4;
		Global_1344178.f_3579.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1344178.f_3579.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1344178.f_3579.f_443[iVar0] = iParam7;
		Global_1344178.f_3579.f_454[iVar0] = iParam8;
		Global_1344178.f_3579.f_497[iVar0] = iParam9;
		Global_1344178.f_3579.f_508[iVar0] = iParam10;
		Global_1344178.f_3579.f_205[iVar0] = iParam11;
		Global_1344178.f_3579.f_216[iVar0] = iParam12;
		Global_1344178.f_3579.f_227[iVar0] = iParam13;
		Global_1344178.f_3579.f_238[iVar0] = iParam14;
		Global_1344178.f_3579.f_249[iVar0] = iParam15;
		Global_1344178.f_3579.f_519[iVar0] = iParam16;
		Global_1344178.f_3579.f_530[iVar0] = iParam17;
		Global_1344178.f_3579.f_541[iVar0] = iParam18;
		if (iParam15 == 4 && func_653())
		{
			Global_1344178.f_941 = 1;
		}
		if (unk_0x955B8C8F89CC3AC0())
		{
			iVar2 = 0;
			unk_0x28EBEB55C44FD509(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1344178.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1344178.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1344178.f_941 = 1;
			}
			if (func_652())
			{
				Global_1344178.f_945 = 1;
			}
		}
	}
}

int func_652()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x955B8C8F89CC3AC0())
	{
		unk_0x28EBEB55C44FD509(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_653()
{
	if ((unk_0x70C239EC67257485() == 8 || unk_0x70C239EC67257485() == 9) || unk_0x70C239EC67257485() == 10)
	{
		return 1;
	}
	return 0;
}

void func_654(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_650(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1344178.f_1 = 1;
		func_649(7, iVar0);
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

void func_655()
{
	Global_1344178.f_942 = 1;
}

void func_656()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar3 = unk_0x0C1D3C552325765B();
	iVar4 = unk_0x848AF823A8EA3C62();
	if (!unk_0x08BA6DD398CA197C(iLocal_722, 1))
	{
		return;
	}
	if (func_34(unk_0x0C1D3C552325765B(), 0))
	{
		iVar4 = func_370();
		iVar3 = Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_434;
	}
	iVar5 = func_360(iVar3);
	if (!func_467())
	{
		if (func_164("DCONTRA_OBJ"))
		{
			func_776();
		}
		if (func_164("DCONTRA_OBJ2"))
		{
			func_776();
		}
		if (func_164("DCONTRA_OBJ3"))
		{
			func_776();
		}
		if (func_164("DCONTRA_OBJ4"))
		{
			func_776();
		}
		if (func_164("DCONTRA_TOBJ"))
		{
			func_776();
		}
		if (func_164("DCONTRA_TOBJ2"))
		{
			func_776();
		}
		if (func_164("DCONTRA_TOBJ3"))
		{
			func_776();
		}
		if (func_164("DCONTRA_WOBJ"))
		{
			func_776();
		}
		return;
	}
	if (iVar5 < 3)
	{
		if (func_164("DCONTRA_OBJ"))
		{
			func_776();
		}
		if (func_164("DCONTRA_OBJ2"))
		{
			func_776();
		}
		if (func_164("DCONTRA_OBJ3"))
		{
			func_776();
		}
		if (func_164("DCONTRA_OBJ4"))
		{
			func_776();
		}
		if (func_164("DCONTRA_TOBJ"))
		{
			func_776();
		}
		if (func_164("DCONTRA_TOBJ2"))
		{
			func_776();
		}
		if (func_164("DCONTRA_TOBJ3"))
		{
			func_776();
		}
		if (func_164("DCONTRA_WOBJ"))
		{
			func_776();
		}
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!func_371())
	{
		if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 13) && !unk_0x08BA6DD398CA197C(Local_369[iVar4 /*11*/].f_1, 11))
		{
			if (!func_164("DCONTRA_WOBJ"))
			{
				func_670("DCONTRA_WOBJ", 0);
			}
		}
		else if (iVar4 == Local_99.f_218)
		{
			if (!func_164("DCONTRA_OBJ"))
			{
				func_670("DCONTRA_OBJ", 0);
			}
		}
		else if (func_1049() == Local_99.f_218)
		{
			if (!func_164("DCONTRA_OBJ"))
			{
				func_670("DCONTRA_OBJ", 0);
			}
		}
	}
	else if (func_669())
	{
		if (iVar4 == Local_99.f_218)
		{
			if (!func_164("DCONTRA_OBJ2"))
			{
				func_670("DCONTRA_OBJ2", 0);
			}
		}
		else if (func_1049() == Local_99.f_218)
		{
			if (!func_164("DCONTRA_OBJ2"))
			{
				func_670("DCONTRA_OBJ2", 0);
			}
		}
	}
	else
	{
		if (func_164("DCONTRA_OBJ2"))
		{
			func_776();
		}
		if (func_164("DCONTRA_TOBJ2"))
		{
			func_776();
		}
		if (Local_99.f_216 < 0)
		{
			if (!func_164("DCONTRA_OBJ4"))
			{
				func_670("DCONTRA_OBJ4", 0);
			}
		}
		else
		{
			iVar2 = func_668();
			if (iVar2 != func_55())
			{
				if (unk_0x3F3C7C3B52DD0ECA(iVar2))
				{
					if (iVar2 == iVar3)
					{
						if (!func_164("DCONTRA_OBJ3"))
						{
							func_670("DCONTRA_OBJ3", 0);
						}
					}
					else if (!func_164("DCONTRA_TOBJ3"))
					{
						iVar0 = func_261(iVar2);
						if (iVar0 > -1)
						{
							iVar1 = func_259(iVar0);
							func_657("DCONTRA_TOBJ3", "DCONTRA_CBAND", iVar1, 0);
						}
					}
				}
			}
		}
	}
}

void func_657(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_658(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1312571 = 19;
		Global_1312571.f_56 = iParam2;
	}
}

int func_658(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam1))
	{
		return 0;
	}
	if (func_667(sParam0, sParam1) && Global_1312571.f_56 == Global_1312571.f_58)
	{
		return 0;
	}
	func_662();
	Global_1312571 = 3;
	StringCopy(&(Global_1312571.f_1), unk_0x367152330DB70D69(), 32);
	Global_1312571.f_9 = unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	StringCopy(&(Global_1312571.f_16), sParam1, 64);
	Global_1312571.f_58 = uParam3;
	Global_1312571.f_56 = uParam3;
	func_661();
	func_660(bParam2);
	func_659();
	return 1;
}

void func_659()
{
	unk_0x88B0F0DC270164B7(&(Global_1312571.f_59), 1);
}

void func_660(bool bParam0)
{
	if (bParam0)
	{
		unk_0x88B0F0DC270164B7(&(Global_1312571.f_59), 0);
		return;
	}
	unk_0x09C86C0C5CA26B1E(&(Global_1312571.f_59), 0);
}

void func_661()
{
	Global_1312571.f_10 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), 86400000);
	Global_1312571.f_11 = unk_0x4B50AAB32FBE0483();
}

void func_662()
{
	func_664();
	func_663(0);
}

void func_663(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0xA86CA03D9749EEB3();
	Global_1312571 = 20;
	StringCopy(&(Global_1312571.f_1), "", 32);
	Global_1312571.f_9 = 0;
	if (bVar0)
	{
		Global_1312571.f_10 = unk_0x4B50AAB32FBE0483();
		Global_1312571.f_11 = unk_0x4B50AAB32FBE0483();
	}
	StringCopy(&(Global_1312571.f_12), "", 16);
	StringCopy(&(Global_1312571.f_16), "", 64);
	StringCopy(&(Global_1312571.f_32), "", 64);
	Global_1312571.f_52 = 0;
	Global_1312571.f_53 = 0;
	Global_1312571.f_54 = 0;
	Global_1312571.f_55 = -1;
	Global_1312571.f_56 = 0;
	Global_1312571.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_664()
{
	if (!func_666())
	{
	}
	if (func_167())
	{
		unk_0x775C13C3833376FE(&(Global_1312571.f_12));
		func_665();
		unk_0x953FDEB57BB0D276();
	}
}

void func_665()
{
	switch (Global_1312571)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_52);
			return;
		
		case 2:
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_52);
			unk_0x3F9D1B882EC0B8AF(Global_1312571.f_53);
			return;
		
		case 3:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 4:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 5:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 6:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 7:
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 8:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 9:
			unk_0xCEA56CB39AFA838F(&(Global_1312571.f_16));
			return;
		
		case 10:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			return;
		
		case 12:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 13:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_57);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 11:
			unk_0xCEA56CB39AFA838F(&(Global_1312571.f_16));
			return;
		
		case 14:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 15:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_57);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_32));
			return;
		
		case 17:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_48));
			return;
		
		case 16:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			return;
		
		case 19:
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_16));
			return;
		
		case 18:
			unk_0xDA35BDB37E728640(&(Global_1312571.f_16));
			unk_0x212C24688D441F9E(Global_1312571.f_56);
			unk_0xBDE6EEC5F6BDC060(&(Global_1312571.f_48));
			unk_0xDA35BDB37E728640(&(Global_1312571.f_32));
			return;
		
		default:
	}
}

int func_666()
{
	if (!func_167())
	{
		return 0;
	}
	unk_0xD6B5839441DD3BED(&(Global_1312571.f_12));
	func_665();
	return unk_0x7A2AFC1B08BD3742();
}

bool func_667(char* sParam0, char* sParam1)
{
	if (!func_167())
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam0))
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam1))
	{
		return 0;
	}
	if (!unk_0x3BB8D1C5FAAB25B3(sParam0) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_12)))
	{
		return 0;
	}
	return unk_0x3BB8D1C5FAAB25B3(sParam1) == unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_16));
}

int func_668()
{
	int iVar0;
	
	iVar0 = func_55();
	if (Local_99.f_216 > -1)
	{
		iVar0 = unk_0x81C85E54237F8A2E(Local_99.f_216);
	}
	return iVar0;
}

int func_669()
{
	var uVar0;
	int iVar1;
	
	if (unk_0x3CF373660FCFAFCE(Local_99.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_99.f_2[0 /*10*/].f_2))
		{
			uVar0 = unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2);
			if (unk_0x3CF373660FCFAFCE(Local_99.f_2[0 /*10*/].f_1))
			{
				if (!func_24(Local_99.f_2[0 /*10*/].f_1))
				{
					iVar1 = unk_0x564EAE6038A81C07(Local_99.f_2[0 /*10*/].f_1);
					if (unk_0x1FD87E888EB4FC00(iVar1, uVar0, 0))
					{
						return 1;
					}
				}
			}
			if (unk_0x3CF373660FCFAFCE(Local_99.f_2[1 /*10*/].f_1))
			{
				if (!func_24(Local_99.f_2[1 /*10*/].f_1))
				{
					iVar1 = unk_0x564EAE6038A81C07(Local_99.f_2[1 /*10*/].f_1);
					if (unk_0x1FD87E888EB4FC00(iVar1, iVar0, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_670(char* sParam0, bool bParam1)
{
	if (unk_0x509383441597090D(sParam0))
	{
		return;
	}
	if (unk_0x8BC27E98D5626ED8(sParam0) > 23)
	{
		return;
	}
	if (func_165(sParam0))
	{
		return;
	}
	func_662();
	Global_1312571 = 0;
	StringCopy(&(Global_1312571.f_1), unk_0x367152330DB70D69(), 32);
	Global_1312571.f_9 = unk_0x3BB8D1C5FAAB25B3(&(Global_1312571.f_1));
	StringCopy(&(Global_1312571.f_12), sParam0, 16);
	func_661();
	func_660(bParam1);
	func_659();
}

void func_671()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_1048() && !func_369())
	{
		return;
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_722, 18))
	{
		iVar0 = func_360(unk_0x0C1D3C552325765B());
		if (iVar0 >= 2)
		{
			unk_0x88B0F0DC270164B7(&iLocal_722, 18);
			func_773(-1, 0, 0, -1);
		}
	}
	if (!func_467())
	{
		return;
	}
	iVar1 = unk_0x848AF823A8EA3C62();
	iVar2 = unk_0x0C1D3C552325765B();
	if (func_34(unk_0x0C1D3C552325765B(), 0))
	{
		iVar1 = func_370();
		iVar2 = Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_434;
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_722, 1))
	{
		iVar0 = func_360(iVar2);
		if (iVar0 >= 2)
		{
			if (iVar1 == Local_99.f_218)
			{
				if (func_371())
				{
					if (func_694())
					{
						func_484(85, "BIGM_DEFEND", "BIGM_DEFEND3", 1, -1, 2);
						unk_0x88B0F0DC270164B7(&iLocal_722, 1);
					}
				}
				else if (func_694())
				{
					func_484(85, "BIGM_DEFEND", "BIGM_DEFEND2", 1, -1, 2);
					unk_0x88B0F0DC270164B7(&iLocal_722, 1);
				}
				if (unk_0x08BA6DD398CA197C(iLocal_722, 1))
				{
					if (iVar2 == unk_0x0C1D3C552325765B())
					{
						func_693(1);
					}
				}
			}
			else if (func_1049() == Local_99.f_218)
			{
				if (func_371())
				{
					if (func_672(func_689(1), "DCONTRA_TXT2", 2, 0, 0, 0, 0, 1, 0, 1))
					{
						func_484(85, "BIGM_DEFEND", "BIGM_DEFEND3", 1, -1, 2);
					}
				}
				else if (func_672(func_689(1), "DCONTRA_TXT1", 2, 0, 0, 0, 0, 1, 0, 1))
				{
					func_484(85, "BIGM_DEFEND", "BIGM_DEFEND4", 1, -1, 2);
				}
				if (iVar2 == unk_0x0C1D3C552325765B())
				{
					func_693(1);
				}
				unk_0x88B0F0DC270164B7(&iLocal_722, 1);
			}
			else
			{
				unk_0x88B0F0DC270164B7(&iLocal_722, 1);
			}
		}
		else
		{
			unk_0x88B0F0DC270164B7(&iLocal_722, 1);
		}
	}
}

int func_672(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	unk_0x09C86C0C5CA26B1E(&Global_2313, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_673(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			Global_2923[3 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			unk_0x88B0F0DC270164B7(&Global_2313, 1);
			unk_0x88B0F0DC270164B7(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_673(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x28C1B9853548BD8E(sParam14, sParam15))
	{
	}
	func_683();
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
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if (unk_0x2CCFE2A750B8D80F(unk_0xA0081090911D13E5()))
			{
				return 0;
			}
		}
		if (Global_101553.f_12906[Global_14443 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_682() == 0)
	{
		func_680();
		return 0;
	}
	func_679(Global_16812);
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/]), sParam1, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_101553.f_12996[Global_16812 /*104*/].f_24 = iParam2;
	}
	Global_101553.f_12996[Global_16812 /*104*/].f_25 = iParam7;
	Global_101553.f_12996[Global_16812 /*104*/].f_26 = uParam8;
	Global_101553.f_12996[Global_16812 /*104*/].f_29 = uParam9;
	Global_101553.f_12996[Global_16812 /*104*/].f_30 = uParam12;
	Global_101553.f_12996[Global_16812 /*104*/].f_31 = uParam11;
	Global_101553.f_12996[Global_16812 /*104*/].f_28 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_33), sParam4, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_50), sParam5, 64);
	Global_101553.f_12996[Global_16812 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_101553.f_12996[Global_16812 /*104*/].f_83), sParam15, 64);
	if (unk_0x08BA6DD398CA197C(Global_2313, 10))
	{
		Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 1;
		Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 1;
		Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 1;
		Global_3019 = 4;
		func_678(0);
		func_678(2);
		func_678(1);
	}
	else
	{
		func_683();
		switch (iParam16)
		{
			case 3:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[Global_14443] = 1;
				break;
			
			case 0:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14443)
			{
				case 0:
					func_678(0);
					Global_3019 = 0;
					break;
				
				case 1:
					func_678(1);
					Global_3019 = 1;
					break;
				
				case 2:
					func_678(2);
					Global_3019 = 2;
					break;
				
				case 3:
					func_678(3);
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
		if (unk_0x08BA6DD398CA197C(Global_2313, 10))
		{
			Global_101553.f_12906[0 /*20*/].f_17 = 1;
			Global_101553.f_12906[1 /*20*/].f_17 = 1;
			Global_101553.f_12906[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_101553.f_12906[Global_14443 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_101553.f_12906[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_101553.f_12906[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_101553.f_12906[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16814[Global_16812] = 0;
	if (bParam10)
	{
		func_683();
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
			if (!func_481())
			{
				unk_0xAB16AADE80707D47(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_677(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_674(1);
			func_677(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_674(int iParam0)
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
		if (func_676(14))
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
								if (unk_0x08BA6DD398CA197C(Global_2314, 3))
								{
									iVar2 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14608 = 0;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_242(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar2);
								unk_0xE73340DA551C95E1();
							}
							if (Global_2451773)
							{
								if (iVar1 == 14)
								{
									func_675(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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
									if (Global_101553.f_12996[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_101553.f_12996[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_101553.f_12996[iVar3 /*104*/].f_99[Global_14443] == 1)
											{
												Global_16813++;
											}
										}
									}
									iVar3++;
								}
								func_675(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_69617)
								{
									iVar4 = 0;
									iVar4 = Global_2576655;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_2576656[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_2576656[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_2576656[iVar5 /*104*/].f_99[Global_14443] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_675(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14443)
									{
										case 0:
											iVar6 = Global_36911;
											break;
										
										case 1:
											iVar6 = Global_36912;
											break;
										
										case 2:
											iVar6 = Global_36913;
											break;
										
										default:
											break;
									}
									func_675(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_675(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_242(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(Global_2319);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 2)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_242(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar7);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 3)
							{
								if (unk_0x08BA6DD398CA197C(Global_2314, 3))
								{
									iVar8 = 42;
									Global_14608 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14608 = 0;
								}
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_242(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(iVar8);
								unk_0xE73340DA551C95E1();
							}
							else if (iVar1 == 8)
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_242(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if ((iVar1 == 23 && unk_0x28C1B9853548BD8E(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x08BA6DD398CA197C(Global_2314, 6))
							{
								unk_0xB9D4F4DE7E7EC038(Global_14424, "SET_DATA_SLOT");
								unk_0x7CBFB9F4AF33C67E(1);
								unk_0x7CBFB9F4AF33C67E(iVar0);
								unk_0x7CBFB9F4AF33C67E(Global_2320[iVar1 /*15*/].f_10);
								unk_0x7CBFB9F4AF33C67E(0);
								func_242(&(Global_2320[iVar1 /*15*/]));
								unk_0x7CBFB9F4AF33C67E(42);
								unk_0xE73340DA551C95E1();
							}
							else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1613316.f_1;
								func_675(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_675(Global_14424, "SET_DATA_SLOT", unk_0xBBDA792448DB5A89(1), unk_0xBBDA792448DB5A89(iVar0), unk_0xBBDA792448DB5A89(Global_2320[iVar1 /*15*/].f_10), unk_0xBBDA792448DB5A89(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_675(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	if (!unk_0x509383441597090D(sParam7))
	{
		func_242(sParam7);
	}
	if (!unk_0x509383441597090D(sParam8))
	{
		func_242(sParam8);
	}
	if (!unk_0x509383441597090D(sParam9))
	{
		func_242(sParam9);
	}
	if (!unk_0x509383441597090D(sParam10))
	{
		func_242(sParam10);
	}
	if (!unk_0x509383441597090D(sParam11))
	{
		func_242(sParam11);
	}
	unk_0xE73340DA551C95E1();
}

bool func_676(int iParam0)
{
	return Global_35775 == iParam0;
}

void func_677(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	unk_0xB9D4F4DE7E7EC038(uParam0, sParam1);
	unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam2));
	if (fParam3 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam3));
	}
	if (fParam4 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam4));
	}
	if (fParam5 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam5));
	}
	if (fParam6 != -1f)
	{
		unk_0x7CBFB9F4AF33C67E(unk_0xF2DB717A73826179(fParam6));
	}
	unk_0xE73340DA551C95E1();
}

void func_678(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_101553.f_12906[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_679(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x8A1006B6887A61DE();
	uVar1 = unk_0x4A29A51562AC24A5();
	uVar2 = unk_0x7C42343912622BB6();
	uVar3 = unk_0x5EE1E0D1EBF5F7F6();
	uVar4 = unk_0x55ED786EB10EA740() + 1;
	uVar5 = unk_0x3258DF33389FB224();
	Global_101553.f_12996[iParam0 /*104*/].f_18 = uVar0;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_101553.f_12996[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_680()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69617)
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
	Global_101553.f_12996[Global_16812 /*104*/].f_18 = -1;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_681(Global_101553.f_12996[iVar2 /*104*/].f_18, Global_101553.f_12996[Global_16812 /*104*/].f_18))
		{
			Global_16812 = iVar2;
		}
		iVar2++;
	}
	Global_101553.f_12996[Global_16812 /*104*/].f_24 = 1;
}

int func_681(struct<6> Param0, struct<6> Param6)
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

int func_682()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_69617)
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
		if (Global_101553.f_12996[iVar2 /*104*/].f_24 == 0)
		{
			Global_16812 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16812 = 34;
	Global_101553.f_12996[Global_16812 /*104*/].f_18 = -1;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_1 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_2 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_3 = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_101553.f_12996[iVar2 /*104*/].f_24 == 0 || Global_101553.f_12996[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_681(Global_101553.f_12996[iVar2 /*104*/].f_18, Global_101553.f_12996[Global_16812 /*104*/].f_18))
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
	Global_101553.f_12996[Global_16812 /*104*/].f_99[0] = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_99[1] = 0;
	Global_101553.f_12996[Global_16812 /*104*/].f_99[2] = 0;
	return 1;
}

void func_683()
{
	if (func_676(14))
	{
		if (!unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()) == Global_101553.f_32740[2 /*29*/])
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
		Global_14443 = func_684();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69617)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

var func_684()
{
	func_685();
	return Global_101553.f_1991.f_539.f_3549;
}

void func_685()
{
	int iVar0;
	
	if (unk_0xD3FACCDA4D66AEAD(unk_0xA0081090911D13E5()))
	{
		if (func_688(Global_101553.f_1991.f_539.f_3549) != unk_0x705BC1BB91F530B5(unk_0xA0081090911D13E5()))
		{
			iVar0 = func_687(unk_0xA0081090911D13E5());
			if (func_686(iVar0) && (!func_676(14) || Global_100505))
			{
				if (Global_101553.f_1991.f_539.f_3549 != iVar0 && func_686(Global_101553.f_1991.f_539.f_3549))
				{
					Global_101553.f_1991.f_539.f_3550 = Global_101553.f_1991.f_539.f_3549;
				}
				Global_101553.f_1991.f_539.f_3551 = iVar0;
				Global_101553.f_1991.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101553.f_1991.f_539.f_3549 != 145)
			{
				Global_101553.f_1991.f_539.f_3551 = Global_101553.f_1991.f_539.f_3549;
			}
			return;
		}
	}
	Global_101553.f_1991.f_539.f_3549 = 145;
}

bool func_686(int iParam0)
{
	return iParam0 < 3;
}

int func_687(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		iVar1 = unk_0x705BC1BB91F530B5(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_688(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_688(int iParam0)
{
	if (func_686(iParam0))
	{
		return Global_101553.f_32740[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_689(bool bParam0)
{
	if (func_691(bParam0))
	{
		if (bParam0 && func_690())
		{
			Global_101553.f_32740[22 /*29*/].f_24[Global_14443] = 1;
			return 22;
		}
		else
		{
			return 75;
		}
	}
	if (bParam0 && func_690())
	{
		Global_101553.f_32740[22 /*29*/].f_24[Global_14443] = 1;
		return 22;
	}
	return 74;
}

int func_690()
{
	int iVar0;
	
	iVar0 = func_56(unk_0x0C1D3C552325765B());
	if (((iVar0 != unk_0x0C1D3C552325765B() && iVar0 != func_55()) && unk_0xCB129F9A01D14082(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

bool func_691(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		iVar0 = func_56(unk_0x0C1D3C552325765B());
		if (func_690())
		{
			if (func_692(iVar0))
			{
				return 1;
			}
			return 0;
		}
	}
	return func_445(3202, -1, 0) != 0;
}

bool func_692(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 29);
}

void func_693(bool bParam0)
{
	if (bParam0)
	{
		if (!func_196(unk_0x0C1D3C552325765B(), 9))
		{
			if (func_360(unk_0x0C1D3C552325765B()) != 0)
			{
				func_197(9);
			}
		}
	}
	else if (func_196(unk_0x0C1D3C552325765B(), 9))
	{
		func_195(9);
	}
}

int func_694()
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_689(1);
	switch (iLocal_838)
	{
		case 0:
			sLocal_839 = func_772();
			if (func_691(1))
			{
				func_771(&uLocal_840, 3, 0, "EXECPA_MALE", 0, 1);
			}
			else
			{
				func_771(&uLocal_840, 2, 0, "EXECPA_FEMALE", 0, 1);
			}
			iLocal_838++;
			break;
		
		case 1:
			if (func_765(0, 1, 0, 1))
			{
				unk_0x88B0F0DC270164B7(&uVar1, 4);
				if (func_695(&uLocal_840, iVar0, "EXCALAU", sLocal_839, uVar1, 0))
				{
					iLocal_838++;
					return 1;
				}
			}
			break;
		
		case 2:
			break;
	}
	return 0;
}

int func_695(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_763())
	{
		return 0;
	}
	if (func_762())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_696(uParam0, iParam1, sParam2, sParam3, 1, iParam5, uParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_696(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, int iParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x509383441597090D(sParam2))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam2) > 7)
	{
		return 0;
	}
	if (unk_0x509383441597090D(sParam3))
	{
		return 0;
	}
	if (unk_0x8BC27E98D5626ED8(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69());
	iVar1 = func_761(sParam2, sParam3);
	iVar2 = 0;
	if (!unk_0x509383441597090D(iParam7))
	{
		iVar2 = unk_0x3BB8D1C5FAAB25B3(iParam7);
	}
	if (func_760(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_755(uParam6))
	{
		return 0;
	}
	if (func_752(iVar0, iVar1, iVar2))
	{
		if (func_751())
		{
			return 0;
		}
		func_750();
		return func_703(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, iParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_702(iParam4))
	{
		return 0;
	}
	func_697(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_697(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1336446.f_40.f_1 = iParam0;
	Global_1336446.f_40.f_2 = iParam1;
	Global_1336446.f_40.f_3 = iParam2;
	StringCopy(&(Global_1336446.f_40.f_4), sParam3, 16);
	Global_1336446.f_40.f_8 = iParam4;
	Global_1336446.f_40.f_9 = iParam5;
	Global_1336446.f_40.f_14 = uParam6;
	func_698(iParam4);
	func_750();
	Global_1336446.f_40.f_13 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), 7000);
}

void func_698(int iParam0)
{
	if (func_701(iParam0))
	{
		func_700();
		return;
	}
	func_699();
}

void func_699()
{
	Global_1336446.f_40.f_10 = 0;
}

void func_700()
{
	Global_1336446.f_40.f_10 = 1;
}

int func_701(int iParam0)
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

bool func_702(int iParam0)
{
	return iParam0 > Global_1336446.f_40.f_8;
}

int func_703(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, var uParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_749();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_746(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_743(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_746(uParam0, sParam3, sParam4);
		}
		return func_727(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_726(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_722(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_721(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_704(iParam1, iParam2, sParam4, uParam7, uParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_704(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_720();
	bVar0 = true;
	if (func_706(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_705(120000);
		return 1;
	}
	return 0;
}

void func_705(int iParam0)
{
	Global_1336446.f_40.f_11 = unk_0x992BA56254396683(unk_0x4B50AAB32FBE0483(), iParam0);
	Global_1336446.f_40.f_12 = 1;
}

int func_706(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
		sVar2 = unk_0xCF66111B26743875(iVar0);
		iVar1 = func_270(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xC099AB04552E978B(unk_0x4B50AAB32FBE0483(), Global_1336446.f_40.f_13))
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
	sVar4 = func_719(uParam5, bParam6, &iVar3);
	uVar5 = func_717(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x509383441597090D(sParam8))
	{
		iVar6++;
		if (!unk_0x509383441597090D(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x28C1B9853548BD8E(sVar4, " "))
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
		if (unk_0x08BA6DD398CA197C(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x509383441597090D(sVar2))
	{
		bVar12 = func_716(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_710(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(iParam4, 0))
	{
		func_709();
	}
	func_720();
	func_708();
	func_707();
	return 1;
}

void func_707()
{
	Global_1336446.f_57 = 0;
	Global_1336446.f_57.f_1 = 0;
}

void func_708()
{
	Global_1336446.f_40 = 3;
}

void func_709()
{
	unk_0x88B0F0DC270164B7(&Global_2313, 8);
}

int func_710(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	if (func_711(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3020 = iParam6;
			unk_0x88B0F0DC270164B7(&Global_2577921, 0);
		}
		return 1;
	}
	return 0;
}

int func_711(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (unk_0x28C1B9853548BD8E(sParam14, sParam15))
	{
	}
	func_683();
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
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if (unk_0x2CCFE2A750B8D80F(unk_0xA0081090911D13E5()))
			{
				return 0;
			}
		}
		if (Global_2577906 == 1)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (unk_0xA96867DD0A63C62C(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_715() == 0)
	{
		func_713();
		return 0;
	}
	func_712(Global_2577905);
	StringCopy(&(Global_2576656[Global_2577905 /*104*/]), sParam1, 64);
	Global_2576656[Global_2577905 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2576656[Global_2577905 /*104*/].f_24 = iParam2;
	}
	Global_2576656[Global_2577905 /*104*/].f_25 = iParam7;
	Global_2576656[Global_2577905 /*104*/].f_26 = uParam8;
	Global_2576656[Global_2577905 /*104*/].f_29 = uParam9;
	Global_2576656[Global_2577905 /*104*/].f_30 = uParam12;
	Global_2576656[Global_2577905 /*104*/].f_31 = uParam11;
	Global_2576656[Global_2577905 /*104*/].f_28 = 0;
	Global_2576656[Global_2577905 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_33), sParam4, 64);
	Global_2576656[Global_2577905 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_50), sParam5, 64);
	Global_2576656[Global_2577905 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2576656[Global_2577905 /*104*/].f_83), sParam15, 64);
	func_683();
	switch (iParam16)
	{
		case 3:
			Global_2576656[Global_2577905 /*104*/].f_99[Global_14443] = 1;
			break;
		
		case 0:
			Global_2576656[Global_2577905 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2576656[Global_2577905 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2576656[Global_2577905 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14443)
		{
			case 0:
				func_678(0);
				break;
			
			case 1:
				func_678(1);
				break;
			
			case 2:
				func_678(2);
				break;
			
			case 3:
				func_678(3);
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
				Global_2577906 = 1;
				break;
			
			case 0:
				Global_2577906 = 1;
				break;
			
			case 2:
				Global_2577906 = 1;
				break;
			
			case 1:
				Global_2577906 = 1;
				break;
			}
	}
	Global_16814[Global_2577905] = 0;
	if (bParam10)
	{
		func_683();
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
			if (!func_481())
			{
				unk_0xAB16AADE80707D47(-1, "Text_Arrive_Tone", &Global_14432, 1);
			}
		}
	}
	if (!Global_14605)
	{
		if (Global_14443.f_1 == 6)
		{
			func_677(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_674(1);
			func_677(Global_14424, "DISPLAY_VIEW", 1f, unk_0xBBDA792448DB5A89(Global_14423), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_712(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = unk_0x8A1006B6887A61DE();
	uVar1 = unk_0x4A29A51562AC24A5();
	uVar2 = unk_0x7C42343912622BB6();
	uVar3 = unk_0x5EE1E0D1EBF5F7F6();
	uVar4 = unk_0x55ED786EB10EA740() + 1;
	uVar5 = unk_0x3258DF33389FB224();
	Global_2576656[iParam0 /*104*/].f_18 = uVar0;
	Global_2576656[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2576656[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2576656[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2576656[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2576656[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_713()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2577905 = 11;
	Global_2576656[Global_2577905 /*104*/].f_18 = -1;
	Global_2576656[Global_2577905 /*104*/].f_18.f_1 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_2 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_3 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_714(Global_2576656[iVar2 /*104*/].f_18, Global_2576656[Global_2577905 /*104*/].f_18))
		{
			Global_2577905 = iVar2;
		}
		iVar2++;
	}
	Global_2576656[Global_2577905 /*104*/].f_24 = 1;
}

int func_714(struct<6> Param0, struct<6> Param6)
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

int func_715()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2576656[iVar2 /*104*/].f_24 == 0)
		{
			Global_2577905 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2577905 = 11;
	Global_2576656[Global_2577905 /*104*/].f_18 = -1;
	Global_2576656[Global_2577905 /*104*/].f_18.f_1 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_2 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_3 = 0;
	Global_2576656[Global_2577905 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2576656[iVar2 /*104*/].f_24 == 0 || Global_2576656[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_714(Global_2576656[iVar2 /*104*/].f_18, Global_2576656[Global_2577905 /*104*/].f_18))
			{
				Global_2577905 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2577905 == 11)
	{
		return 0;
	}
	Global_2576656[Global_2577905 /*104*/].f_99[0] = 0;
	Global_2576656[Global_2577905 /*104*/].f_99[1] = 0;
	Global_2576656[Global_2577905 /*104*/].f_99[2] = 0;
	return 1;
}

int func_716(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_711(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			unk_0x88B0F0DC270164B7(&Global_2577921, 0);
		}
		return 1;
	}
	return 0;
}

int func_717(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_718(2, iParam1);
	return iParam0;
}

void func_718(int iParam0, var uParam1)
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

var func_719(char* sParam0, bool bParam1, int iParam2)
{
	if (unk_0x509383441597090D(uParam0))
	{
		return sLocal_18;
	}
	if (unk_0x28C1B9853548BD8E(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_718(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return unk_0xFFC9DE7E93AEAE21(sParam0);
}

void func_720()
{
	Global_1336446.f_40.f_9 = 4;
}

int func_721(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_720();
	bVar0 = false;
	return func_706(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_722(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_723(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_723(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, var uParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
		sVar2 = unk_0xCF66111B26743875(iVar0);
		iVar1 = func_270(iVar0);
		if (iVar1 == 0)
		{
			if (unk_0xC099AB04552E978B(unk_0x4B50AAB32FBE0483(), Global_1336446.f_40.f_13))
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
	sVar4 = func_719(uParam5, bParam6, &iVar3);
	uVar5 = func_717(iParam7, &iVar3);
	iVar6 = 0;
	if (!unk_0x509383441597090D(sParam8))
	{
		iVar6++;
		if (!unk_0x509383441597090D(sParam9))
		{
			iVar6++;
		}
	}
	if (unk_0x28C1B9853548BD8E(sVar4, " "))
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
		if (unk_0x08BA6DD398CA197C(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !unk_0x509383441597090D(sVar2))
	{
		bVar12 = func_725(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_672(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (unk_0x08BA6DD398CA197C(iParam4, 0))
	{
		func_709();
	}
	func_724();
	func_708();
	func_707();
	return 1;
}

void func_724()
{
	Global_1336446.f_40.f_9 = 3;
}

int func_725(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	unk_0x09C86C0C5CA26B1E(&Global_2313, 10);
	iVar0 = 3;
	if (func_673(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3020 = iParam10;
			Global_2923[3 /*6*/] = { Global_101553.f_32740[iParam0 /*29*/].f_3 };
			Global_3000 = iParam0;
			StringCopy(&Global_3001, sParam5, 64);
			unk_0x88B0F0DC270164B7(&Global_2313, 1);
			unk_0x88B0F0DC270164B7(&Global_2313, 7);
		}
		return 1;
	}
	return 0;
}

int func_726(int iParam0, int iParam1, char* sParam2, var uParam3, var uParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
	}
	if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
	{
		return 0;
	}
	func_724();
	bVar0 = true;
	if (func_723(iParam0, iParam1, sParam2, bVar0, uParam3, uParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_705(120000);
		return 1;
	}
	return 0;
}

int func_727(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (unk_0x08BA6DD398CA197C(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (unk_0x08BA6DD398CA197C(iParam4, 4))
	{
		bVar0 = func_742(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_733(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (unk_0x08BA6DD398CA197C(iParam4, 3))
		{
			func_732(1);
		}
		if (unk_0x08BA6DD398CA197C(iParam4, 5))
		{
			func_731(1);
		}
		func_730();
		func_708();
		func_729();
		func_728();
		return 1;
	}
	return 0;
}

void func_728()
{
	Global_2489614 = 0;
}

void func_729()
{
	Global_1336446.f_57 = 1;
	Global_1336446.f_57.f_1 = 0;
}

void func_730()
{
	Global_1336446.f_40.f_9 = 1;
}

void func_731(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2315, 0);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2315, 0);
	}
}

void func_732(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x88B0F0DC270164B7(&Global_2313, 20);
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&Global_2313, 20);
	}
}

int func_733(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_741(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_734(sParam3, iParam4, bParam7);
}

int func_734(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x588D9B1F6CF36C3C(0);
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
					func_740();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE80581DE0ACF1F8A())
		{
			return 0;
		}
		if (func_344(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_739();
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
			unk_0x09C86C0C5CA26B1E(&Global_2313, 20);
			unk_0x09C86C0C5CA26B1E(&Global_2314, 17);
			unk_0x09C86C0C5CA26B1E(&Global_2315, 0);
			if (bParam2)
			{
				func_683();
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
			if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
			{
				if (unk_0x7B5A014A9AC61FB3(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (func_738())
				{
					return 0;
				}
				if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xFFE4F37124DBE6D9(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xAE4B87F710B7DE76(unk_0xA0081090911D13E5()))
				{
					return 0;
				}
				if (unk_0xB057BAEE46DEDD89(unk_0xA0081090911D13E5(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69617)
				{
					if (unk_0xB46E03E529421E99(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x2FFAB3D2307F1BA7(unk_0x0C1D3C552325765B()))
					{
						return 0;
					}
					if (unk_0x7DF282A008F6DC55(unk_0xA0081090911D13E5()))
					{
						return 0;
					}
					if (unk_0x7B09C8C1D3D1F427(unk_0x0C1D3C552325765B()))
					{
						return 0;
					}
				}
			}
			if (func_737())
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
				if (unk_0x08BA6DD398CA197C(Global_2313, 9))
				{
					return 0;
				}
			}
			func_736();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_735();
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
		func_740();
	}
	return 0;
}

void func_735()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x588D9B1F6CF36C3C(0);
	Global_15745 = 1;
}

void func_736()
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
	unk_0x09C86C0C5CA26B1E(&Global_2314, 16);
}

int func_737()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_738()
{
	int iVar0;
	int iVar1;
	
	if (Global_69617)
	{
		iVar0 = 0;
		unk_0x79DEFA3570360EAF(unk_0xA0081090911D13E5(), &iVar1, 1);
		if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x62B4986EA88E929B() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xC0691D80D21C989D(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x8B99D63EA8B2E230(unk_0xA0081090911D13E5(), 78, 1))
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

void func_739()
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

void func_740()
{
	unk_0x8C620099CBB45602();
	Global_16756 = 0;
	if ((unk_0xC6CB0C1523C73C77() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x588D9B1F6CF36C3C(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0xE80581DE0ACF1F8A())
	{
		unk_0x588D9B1F6CF36C3C(1);
		Global_15745 = 6;
		return;
	}
}

void func_741(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

int func_742(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_741(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_734(sParam3, iParam4, bParam7);
}

int func_743(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
	}
	if (unk_0x8E30A8C5F10F6DD2(unk_0xA0081090911D13E5()))
	{
		return 0;
	}
	if (func_745(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_744();
		func_730();
		func_708();
		func_729();
		func_728();
		return 1;
	}
	return 0;
}

void func_744()
{
	Global_16763 = 0;
}

bool func_745(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_741(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_734(sParam3, iParam4, bParam8);
}

int func_746(var uParam0, char* sParam1, char* sParam2)
{
	if (func_748(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_747();
		func_708();
		func_729();
		return 1;
	}
	return 0;
}

void func_747()
{
	Global_1336446.f_40.f_9 = 2;
}

bool func_748(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_741(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_734(sParam2, iParam3, 0);
}

void func_749()
{
	Global_1336446.f_55 = Global_1336446.f_40.f_1;
	Global_1336446.f_55.f_1 = Global_1336446.f_40.f_10;
}

void func_750()
{
	Global_1336446.f_40 = 1;
}

bool func_751()
{
	return Global_1336446.f_40 == 1;
}

int func_752(int iParam0, int iParam1, int iParam2)
{
	if (!func_753(iParam0))
	{
		return 0;
	}
	if (Global_1336446.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1336446.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_753(int iParam0)
{
	if (!func_754())
	{
		return 0;
	}
	if (!Global_1336446.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_754()
{
	if (Global_1336446.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_755(int iParam0)
{
	if (func_759())
	{
		return 0;
	}
	if (func_758())
	{
		return 0;
	}
	if (func_757(0))
	{
		return 0;
	}
	if (Global_1312462.f_18 != 0)
	{
		return 0;
	}
	if (Global_1738544 || func_471())
	{
		return 0;
	}
	if (!unk_0x08BA6DD398CA197C(uParam0, 6))
	{
		if (func_756())
		{
			return 0;
		}
	}
	return 1;
}

bool func_756()
{
	return unk_0xC099AB04552E978B(unk_0x4B50AAB32FBE0483(), Global_1352032);
}

int func_757(int iParam0)
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

bool func_758()
{
	return Global_1336446.f_40 == 3;
}

bool func_759()
{
	return func_737();
}

int func_760(int iParam0, int iParam1, int iParam2)
{
	if (!func_758())
	{
		return 0;
	}
	return func_752(iParam0, iParam1, iParam2);
}

int func_761(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return unk_0x3BB8D1C5FAAB25B3(&cVar0);
}

bool func_762()
{
	return Global_2487434.f_1;
}

int func_763()
{
	if (Global_1336634.f_2)
	{
		return 1;
	}
	return func_764();
}

bool func_764()
{
	return func_759();
}

int func_765(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0x598A9E990F05F82C())
	{
		return 0;
	}
	if (func_770())
	{
		return 0;
	}
	if (!unk_0xB20CA7A3EE29687A())
	{
		return 0;
	}
	if (func_350())
	{
		return 0;
	}
	if (func_482())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_90(unk_0x0C1D3C552325765B(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_769(unk_0x0C1D3C552325765B()))
		{
			return 0;
		}
	}
	if (func_768())
	{
		return 0;
	}
	if (unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		return 0;
	}
	if (unk_0x84C71F36E7D97756())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0xDC48E9E2CC7437D3(unk_0x0C1D3C552325765B()))
		{
			return 0;
		}
	}
	if (Global_1573695)
	{
		return 0;
	}
	if (func_767())
	{
		return 0;
	}
	if (func_766())
	{
		return 0;
	}
	if (func_343())
	{
		return 0;
	}
	if (Global_68125)
	{
		return 0;
	}
	if (Global_2490098)
	{
		return 0;
	}
	return 1;
}

bool func_766()
{
	return Global_2442442.f_569;
}

bool func_767()
{
	return Global_2442442.f_721;
}

bool func_768()
{
	return Global_2432628.f_2489.f_585;
}

int func_769(int iParam0)
{
	if (Global_2421327[iParam0 /*353*/].f_208 == 0)
	{
		return 0;
	}
	return 1;
}

int func_770()
{
	if (Global_15745 != 0 || unk_0xE80581DE0ACF1F8A())
	{
		return 1;
	}
	return 0;
}

void func_771(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69617)
	{
		if (!unk_0xEB361B4BD195A4D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xD20DF430E654B489(iParam2, 0);
			}
			else
			{
				unk_0xD20DF430E654B489(iParam2, 1);
			}
		}
		if (!unk_0xEB361B4BD195A4D3(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xD69C027BC6C4334F(iParam2, 0);
			}
			else
			{
				unk_0xD69C027BC6C4334F(iParam2, 1);
			}
		}
	}
}

char* func_772()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = !func_691(1);
	iVar1 = unk_0xB5BF1B58C833F7A9(0, 3);
	if (!func_371())
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

void func_773(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_192(unk_0x0C1D3C552325765B());
	if (iParam2 || func_389(iVar0))
	{
		if (iParam3 != -1 && iParam2)
		{
			iVar0 = iParam3;
		}
		Global_1750587 = iVar0;
		if (func_476(iVar0))
		{
			Global_1750587.f_1 = 4;
		}
		else if (func_475(iVar0))
		{
			Global_1750587.f_1 = 5;
		}
		else if (func_291(iVar0, 0))
		{
			Global_1750587.f_1 = 2;
			if (func_507(iVar0))
			{
				Global_1750587.f_1 = 3;
			}
		}
		else
		{
			Global_1750587.f_1 = 1;
		}
		if (func_524() != func_55())
		{
			Global_1750587.f_4 = func_634(func_524());
			Global_1750587.f_5 = func_633(func_524());
		}
		if (func_322() != func_55())
		{
			func_523(func_322(), &(Global_1750587.f_6), &(Global_1750587.f_7));
		}
		Global_1750587.f_9 = unk_0x39E54E7BC7452169();
		if (iVar0 == 148 || iVar0 == 179)
		{
			Global_1750587.f_27 = 1;
			Global_1750587.f_28 = 1;
		}
		if (iParam0 != -1)
		{
			Global_1750587.f_26 = iParam0;
		}
		if (iParam1 != 0)
		{
			Global_1750587.f_40 = func_589(iParam1);
			Global_1750587.f_41 = func_775();
			Global_1750587.f_42 = func_590(unk_0x0C1D3C552325765B(), iParam1);
			Global_1750587.f_44 = func_629(unk_0x0C1D3C552325765B(), iParam1);
		}
	}
	else
	{
		if (func_524() != func_55())
		{
			Global_1750569 = func_634(func_524());
			Global_1750569.f_1 = func_633(func_524());
		}
		Global_1750569.f_5 = unk_0x39E54E7BC7452169();
		Global_1750569.f_13 = func_774();
		Global_1750569.f_15 = 0;
		if (func_522(1))
		{
			if (func_322() == func_524())
			{
				Global_1750569.f_15 = 1;
			}
		}
	}
}

int func_774()
{
	int iVar0;
	
	iVar0 = func_524();
	if (iVar0 != func_55())
	{
		return Global_1614576[iVar0 /*324*/].f_10.f_91;
	}
	return 0;
}

var func_775()
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (func_587(unk_0x0C1D3C552325765B(), iVar0))
		{
			unk_0x88B0F0DC270164B7(&uVar1, iVar0);
		}
		iVar0++;
	}
	return uVar1;
}

void func_776()
{
	if (!func_167())
	{
		return;
	}
	if (!unk_0x3BB8D1C5FAAB25B3(unk_0x367152330DB70D69()) == Global_1312571.f_9)
	{
		return;
	}
	func_662();
}

void func_777()
{
	if (func_34(unk_0x0C1D3C552325765B(), 0))
	{
		return;
	}
	switch (Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_9)
	{
		case 0:
			func_991();
			func_382();
			if (Local_99.f_214 == 2)
			{
				Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_9 = 2;
			}
			else if (Local_99.f_214 == 3)
			{
				Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_9 = 3;
			}
			break;
		
		case 2:
			func_778();
			func_382();
			if (Local_99.f_214 == 3)
			{
				Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_9 = 3;
			}
			break;
		
		case 3:
			func_1062();
			break;
	}
}

void func_778()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	iVar0 = unk_0x848AF823A8EA3C62();
	iVar1 = Local_99.f_197 + 1;
	if (func_34(unk_0x0C1D3C552325765B(), 0))
	{
		iVar0 = func_370();
	}
	if (!func_371())
	{
		if (!unk_0x08BA6DD398CA197C(Local_369[iVar0 /*11*/].f_1, 14))
		{
			unk_0x88B0F0DC270164B7(&(Local_369[iVar0 /*11*/].f_1), 14);
		}
		return;
	}
	if (!func_989())
	{
		if (!unk_0x08BA6DD398CA197C(Local_369[iVar0 /*11*/].f_1, 14))
		{
			unk_0x88B0F0DC270164B7(&(Local_369[iVar0 /*11*/].f_1), 14);
		}
		return;
	}
	if (unk_0x3CF373660FCFAFCE(Local_99.f_2[0 /*10*/].f_2))
	{
		if (func_13(Local_99.f_2[0 /*10*/].f_2))
		{
			if (unk_0x1FD87E888EB4FC00(unk_0xA0081090911D13E5(), unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2), 0))
			{
				return;
			}
		}
	}
	if (!unk_0x08BA6DD398CA197C(Local_369[iVar0 /*11*/].f_1, 14))
	{
		if (!func_793(iVar1, unk_0x848AF823A8EA3C62()))
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_722, 13))
			{
				if (func_791(unk_0x0C1D3C552325765B(), iVar1))
				{
					unk_0x88B0F0DC270164B7(&iLocal_722, 13);
				}
			}
			else
			{
				bVar4 = true;
				iVar2 = 0;
				while (iVar2 < unk_0xE5697AB254094B0D())
				{
					if (unk_0x1489FFC2CBA39486(unk_0x81C7A2950EF11C8A(iVar2)))
					{
						iVar3 = unk_0xF3B8A064D228878B(unk_0x81C7A2950EF11C8A(iVar2));
						if (func_791(iVar3, iVar1))
						{
							if (!func_786(iVar3, iVar1))
							{
								bVar4 = false;
							}
						}
					}
					iVar2++;
				}
				if (bVar4)
				{
					func_779();
				}
			}
		}
		else
		{
			unk_0x88B0F0DC270164B7(&(Local_369[iVar0 /*11*/].f_1), 14);
		}
	}
}

void func_779()
{
	func_780();
}

void func_780()
{
	int iVar0;
	
	if (func_785(unk_0x0C1D3C552325765B()))
	{
		iVar0 = func_784(unk_0x0C1D3C552325765B());
		if (!func_783(3, iVar0))
		{
			func_781(3, iVar0);
		}
	}
}

void func_781(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	func_782(iParam1, &iVar0, &iVar1);
	switch (iParam0)
	{
		case 0:
			unk_0x88B0F0DC270164B7(&(Global_1751948.f_192[iVar0]), iVar1);
			return;
			break;
		
		case 1:
			unk_0x88B0F0DC270164B7(&(Global_1751948.f_195[iVar0]), iVar1);
			return;
			break;
		
		case 2:
			unk_0x88B0F0DC270164B7(&(Global_1751948.f_198[iVar0]), iVar1);
			return;
			break;
		
		case 3:
			unk_0x88B0F0DC270164B7(&(Global_1751948.f_431[iVar0]), iVar1);
			return;
			break;
		
		case 4:
			unk_0x88B0F0DC270164B7(&(Global_1751948.f_434[iVar0]), iVar1);
			return;
			break;
		
		case 5:
			unk_0x88B0F0DC270164B7(&(Global_1751948.f_585[iVar0]), iVar1);
			return;
			break;
		
		case 6:
			unk_0x88B0F0DC270164B7(&(Global_1751948.f_588[iVar0]), iVar1);
			return;
			break;
		
		case 7:
			unk_0x88B0F0DC270164B7(&(Global_1751948.f_591[iVar0]), iVar1);
			return;
			break;
		
		case 8:
			unk_0x88B0F0DC270164B7(&(Global_1751948.f_594[iVar0]), iVar1);
			return;
			break;
		
		case 9:
			unk_0x88B0F0DC270164B7(&(Global_1751948.f_597[iVar0]), iVar1);
			return;
			break;
		
		case 10:
			unk_0x88B0F0DC270164B7(&(Global_1751948.f_437[iVar0]), iVar1);
			return;
			break;
	}
}

void func_782(int iParam0, var uParam1, var uParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iParam0) / 32f));
	*uParam2 = (iParam0 - *uParam1 * 32);
}

int func_783(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	func_782(iParam1, &iVar0, &iVar1);
	switch (iParam0)
	{
		case 0:
			return unk_0x08BA6DD398CA197C(Global_1751948.f_192[iVar0], iVar1);
			break;
		
		case 1:
			return unk_0x08BA6DD398CA197C(Global_1751948.f_195[iVar0], iVar1);
			break;
		
		case 2:
			return unk_0x08BA6DD398CA197C(Global_1751948.f_198[iVar0], iVar1);
			break;
		
		case 3:
			return unk_0x08BA6DD398CA197C(Global_1751948.f_431[iVar0], iVar1);
			break;
		
		case 4:
			return unk_0x08BA6DD398CA197C(Global_1751948.f_434[iVar0], iVar1);
			break;
		
		case 5:
			return unk_0x08BA6DD398CA197C(Global_1751948.f_585[iVar0], iVar1);
			break;
		
		case 6:
			return unk_0x08BA6DD398CA197C(Global_1751948.f_588[iVar0], iVar1);
			break;
		
		case 7:
			return unk_0x08BA6DD398CA197C(Global_1751948.f_591[iVar0], iVar1);
			break;
		
		case 8:
			return unk_0x08BA6DD398CA197C(Global_1751948.f_594[iVar0], iVar1);
			break;
		
		case 9:
			return unk_0x08BA6DD398CA197C(Global_1751948.f_597[iVar0], iVar1);
			break;
		
		case 10:
			return unk_0x08BA6DD398CA197C(Global_1751948.f_437[iVar0], iVar1);
			break;
	}
	return 0;
}

int func_784(int iParam0)
{
	if (iParam0 != func_55())
	{
		return Global_2421327[iParam0 /*353*/].f_308.f_4;
	}
	return -1;
}

int func_785(int iParam0)
{
	bool bVar0;
	
	if (iParam0 != func_55() && func_1122(iParam0, 1, 1))
	{
		bVar0 = unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_308, 1);
		return bVar0;
	}
	return 0;
}

bool func_786(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_789(iParam1);
	return func_787(iParam0, iVar0);
}

int func_787(int iParam0, int iParam1)
{
	if (iParam0 != func_55() && func_1122(iParam0, 1, 1))
	{
		if (func_785(iParam0))
		{
			if (func_784(iParam0) == iParam1)
			{
				if (func_788(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_788(int iParam0)
{
	return unk_0x08BA6DD398CA197C(Global_2421327[iParam0 /*353*/].f_308, 2);
}

int func_789(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 57)
	{
		if (func_790(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_790(int iParam0)
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

bool func_791(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_789(iParam1);
	return func_792(iParam0, iVar0);
}

int func_792(int iParam0, int iParam1)
{
	if (iParam0 != func_55() && func_1122(iParam0, 1, 1))
	{
		if (func_785(iParam0))
		{
			if (func_784(iParam0) == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_793(int iParam0, int iParam1)
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	
	iVar0 = func_789(iParam0);
	if (func_783(4, iVar0))
	{
		return 1;
	}
	else if (!func_988(iVar0))
	{
		if (func_987(iParam0, iParam1, &Var1, &uVar4))
		{
			func_794(iVar0, 1, 1, Var1, uVar4, 0, 0);
		}
		else
		{
			func_794(iVar0, 1, 0, Var1, 0, 0, 0);
		}
	}
	return 0;
}

int func_794(int iParam0, bool bParam1, bool bParam2, struct<3> Param3, int iParam6, bool bParam7, bool bParam8)
{
	bParam7 = true;
	if (func_785(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (!bParam7)
	{
		if (!(func_986(iParam0) || func_800(iParam0, 0)))
		{
			func_798(iParam0);
			return 0;
		}
	}
	else if (!func_986(iParam0))
	{
		func_781(2, iParam0);
	}
	if (func_783(0, iParam0))
	{
		return 0;
	}
	func_781(0, iParam0);
	func_797(4, iParam0);
	func_796(iParam0);
	if (bParam2)
	{
		func_781(1, iParam0);
		Global_1751948.f_201[iParam0 /*3*/] = { Param3 };
		Global_1751948.f_373[iParam0] = iParam6;
	}
	else
	{
		func_797(1, iParam0);
		Global_1751948.f_201[iParam0 /*3*/] = { 0f, 0f, 0f };
		Global_1751948.f_373[iParam0] = 0f;
	}
	if (bParam1)
	{
		func_797(3, iParam0);
	}
	else
	{
		func_781(3, iParam0);
	}
	func_797(10, iParam0);
	if (bParam8)
	{
		func_781(10, iParam0);
	}
	func_795(1, iParam0);
	return 1;
}

void func_795(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!unk_0x08BA6DD398CA197C(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_308, 1))
		{
			unk_0x88B0F0DC270164B7(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_308), 1);
			unk_0x09C86C0C5CA26B1E(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_308), 2);
			Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_308.f_4 = iParam1;
			func_512(&(Global_1751948.f_441), 0, 0);
		}
	}
	else
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_308), 1);
		func_781(4, iParam1);
		Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_308.f_4 = -1;
		func_9(&(Global_1751948.f_441));
	}
}

void func_796(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x02056DA113641E74(unk_0xA0081090911D13E5());
	if (iVar0 != 0)
	{
		if (!unk_0x912AD5A10E7633F0(iVar0, 0) && !unk_0x912AD5A10E7633F0(unk_0xA0081090911D13E5(), 0))
		{
			if (unk_0x8FD32443A080784B(iVar0, -1, 0) == unk_0xA0081090911D13E5())
			{
				Global_1751948.f_510 = iParam0;
				Global_1751948.f_511 = iVar0;
				func_512(&(Global_1751948.f_512), 0, 0);
				Global_1751948.f_514 = 0;
			}
		}
	}
}

void func_797(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	func_782(iParam1, &iVar0, &iVar1);
	switch (iParam0)
	{
		case 0:
			unk_0x09C86C0C5CA26B1E(&(Global_1751948.f_192[iVar0]), iVar1);
			return;
			break;
		
		case 1:
			unk_0x09C86C0C5CA26B1E(&(Global_1751948.f_195[iVar0]), iVar1);
			return;
			break;
		
		case 2:
			unk_0x09C86C0C5CA26B1E(&(Global_1751948.f_198[iVar0]), iVar1);
			return;
			break;
		
		case 3:
			unk_0x09C86C0C5CA26B1E(&(Global_1751948.f_431[iVar0]), iVar1);
			return;
			break;
		
		case 4:
			unk_0x09C86C0C5CA26B1E(&(Global_1751948.f_434[iVar0]), iVar1);
			return;
			break;
		
		case 5:
			unk_0x09C86C0C5CA26B1E(&(Global_1751948.f_585[iVar0]), iVar1);
			return;
			break;
		
		case 6:
			unk_0x09C86C0C5CA26B1E(&(Global_1751948.f_588[iVar0]), iVar1);
			return;
			break;
		
		case 7:
			unk_0x09C86C0C5CA26B1E(&(Global_1751948.f_591[iVar0]), iVar1);
			return;
			break;
		
		case 8:
			unk_0x09C86C0C5CA26B1E(&(Global_1751948.f_594[iVar0]), iVar1);
			return;
			break;
		
		case 9:
			unk_0x09C86C0C5CA26B1E(&(Global_1751948.f_597[iVar0]), iVar1);
			return;
			break;
		
		case 10:
			unk_0x09C86C0C5CA26B1E(&(Global_1751948.f_437[iVar0]), iVar1);
			return;
			break;
	}
}

void func_798(int iParam0)
{
	if (!func_799(iParam0))
	{
		return;
	}
	func_797(0, iParam0);
	func_797(1, iParam0);
	func_797(2, iParam0);
	func_797(3, iParam0);
	func_797(4, iParam0);
	func_797(10, iParam0);
	Global_1751948.f_201[iParam0 /*3*/] = { 0f, 0f, 0f };
	Global_1751948.f_373[iParam0] = 0f;
	if (Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_308.f_4 == iParam0)
	{
		Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_308.f_4 = -1;
		unk_0x09C86C0C5CA26B1E(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_308), 2);
		unk_0x09C86C0C5CA26B1E(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_308), 1);
	}
}

int func_799(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 57)
	{
		return 1;
	}
	return 0;
}

int func_800(int iParam0, int iParam1)
{
	if (func_1122(unk_0x0C1D3C552325765B(), 1, 1) && !func_985())
	{
		if (Global_1751948.f_618 == iParam0)
		{
			return 0;
		}
		if (func_802(iParam0))
		{
			return 1;
		}
		else if (iParam1 && func_801(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_801(int iParam0)
{
	if (func_988(iParam0))
	{
		return func_783(2, iParam0);
	}
	return 0;
}

bool func_802(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 210;
	func_803(iParam0, &Var1);
	return unk_0x999A157665D69393(func_51(unk_0x0C1D3C552325765B()), Var1, 1) <= IntToFloat(iVar0);
}

void func_803(int iParam0, var uParam1)
{
	struct<6> Var0;
	
	func_804(iParam0, &Var0, 5);
	Stack.Push(iParam0);
	Stack.Push(uParam1);
	Call_Loc(Var0.f_5);
}

void func_804(int iParam0, var uParam1, int iParam2)
{
	switch (func_399(iParam0))
	{
		case 0:
			func_933(uParam1, iParam2);
			break;
		
		case 2:
			func_849(uParam1, iParam2);
			break;
		
		case 3:
			func_805(uParam1, iParam2);
			break;
	}
}

void func_805(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 149581;
			break;
		
		case 1:
			uParam0->f_1 = 148665;
			break;
		
		case 2:
			uParam0->f_2 = 148652;
			break;
		
		case 3:
			uParam0->f_3 = 148395;
			break;
		
		case 4:
			uParam0->f_4 = 148387;
			break;
		
		case 5:
			uParam0->f_5 = 148018;
			break;
		
		case 6:
			uParam0->f_6 = 148010;
			break;
		
		case 7:
			uParam0->f_7 = 148001;
			break;
		
		case 8:
			uParam0->f_8 = 147992;
			break;
		
		case 9:
			uParam0->f_9 = 147982;
			break;
		
		case 10:
			uParam0->f_10 = 147973;
			break;
		
		case 11:
			uParam0->f_11 = 147964;
			break;
		
		case 12:
			uParam0->f_12 = 147956;
			break;
		
		case 13:
			uParam0->f_13 = 147948;
			break;
		
		case 14:
			uParam0->f_14 = 147580;
			break;
		
		case 15:
			uParam0->f_15 = 147570;
			break;
		
		case 16:
			uParam0->f_16 = 147562;
			break;
		
		case 17:
			uParam0->f_17 = 147553;
			break;
		
		case 18:
			uParam0->f_18 = 137693;
			break;
		
		case 19:
			uParam0->f_19 = 137684;
			break;
		
		case 20:
			uParam0->f_20 = 137675;
			break;
		
		case 21:
			uParam0->f_21 = 137667;
			break;
		
		case 22:
			uParam0->f_22 = 137658;
			break;
		
		case 23:
			uParam0->f_23 = 137649;
			break;
		
		case 24:
			uParam0->f_24 = 137640;
			break;
		
		case 25:
			uParam0->f_25 = 137631;
			break;
		
		case 26:
			uParam0->f_26 = 137620;
			break;
		
		case 27:
			uParam0->f_27 = 137612;
			break;
		
		case 28:
			uParam0->f_28 = 137603;
			break;
		
		case 29:
			uParam0->f_29 = 137592;
			break;
		
		case 30:
			uParam0->f_30 = 137584;
			break;
		
		case 31:
			uParam0->f_31 = 137576;
			break;
		
		case 32:
			uParam0->f_32 = 137568;
			break;
		
		case 33:
			uParam0->f_33 = 137560;
			break;
		
		case 34:
			uParam0->f_34 = 137551;
			break;
		
		case 35:
			uParam0->f_35 = 137542;
			break;
		
		case 36:
			uParam0->f_36 = 137530;
			break;
		
		case 37:
			uParam0->f_37 = 137521;
			break;
		
		case 38:
			uParam0->f_38 = 137509;
			break;
	}
}

void func_806(var uParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam1 = 0;
}

int func_807(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return 0;
}

void func_808(var uParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam1 = 0;
}

int func_809(var uParam0)
{
	return 0;
}

int func_810(var uParam0)
{
	return 0;
}

void func_811(var uParam0, var uParam1)
{
}

void func_812(var uParam0, var uParam1)
{
}

void func_813(var uParam0, var uParam1)
{
}

void func_814(var uParam0, var uParam1, var uParam2)
{
}

Vector3 func_815(var uParam0)
{
	return 0f, 0f, 0f;
}

int func_816(var uParam0)
{
	return 0;
}

void func_817(var uParam0, var uParam1, var uParam2, var uParam3)
{
}

Vector3 func_818(var uParam0)
{
	return 0f, 0f, 0f;
}

int func_819(var uParam0)
{
	return -1;
}

int func_820(var uParam0)
{
	return 0;
}

int func_821(var uParam0)
{
	return 0;
}

int func_822(var uParam0)
{
	return 0;
}

void func_823(var uParam0, var uParam1, var uParam2, var uParam3)
{
}

int func_824(var uParam0)
{
	return -1;
}

int func_825(var uParam0)
{
	return -1;
}

int func_826(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 42:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 429.3781f, -980.3966f, 29.7103f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 429.3781f, -978.6966f, 29.7103f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 429.3781f, -982.0966f, 29.7103f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 429.3781f, -976.9966f, 29.7103f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 429.3781f, -983.7966f, 29.7105f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 429.3781f, -975.2966f, 29.7103f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 429.3781f, -985.4966f, 29.7115f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 429.3781f, -973.5966f, 29.7102f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 427.6781f, -980.3966f, 29.7101f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 427.6781f, -978.6966f, 29.7101f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 427.6781f, -982.0966f, 29.7101f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 427.6781f, -976.9966f, 29.71f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 427.6781f, -983.7966f, 29.7103f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 427.6781f, -975.2966f, 29.71f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 427.6781f, -985.4966f, 29.7112f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 427.6781f, -973.5966f, 29.7099f };
					*uParam3 = 90f;
					return 1;
					break;
			}
			break;
		
		case 43:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 983.8605f, -106.4136f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 982.5178f, -107.6124f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 981.175f, -108.8113f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 979.8323f, -110.0101f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 978.4896f, -111.2089f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 977.1469f, -112.4077f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 975.8042f, -113.6065f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 973.5518f, -117.3196f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 971.1783f, -113.1865f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 970.9462f, -116.8811f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 968.7961f, -118.7222f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 964.718f, -122.2837f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 985.0593f, -107.7563f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 983.7166f, -108.9551f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 982.3738f, -110.154f, 73.3307f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 981.0311f, -111.3528f, 73.353f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 979.6884f, -112.5516f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 978.3457f, -113.7504f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 977.003f, -114.9492f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 970.8889f, -119.5405f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 972.5797f, -114.7977f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 968.2349f, -116.0944f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 964.1705f, -119.8535f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 966.7084f, -120.6235f, 73.3531f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 987.6689f, -107.8862f, 73.3005f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 984.1547f, -110.9573f, 73.2074f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 983.6035f, -112.7345f, 73.0674f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 982.2299f, -112.6955f, 73.0982f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 980.8872f, -113.8943f, 73.1507f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 979.5445f, -115.0931f, 73.186f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 978.2018f, -116.2919f, 73.2293f };
					*uParam3 = 221.76f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 986.3215f, -109.7017f, 73.2253f };
					*uParam3 = 221.76f;
					return 1;
					break;
			}
			break;
		
		case 44:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1215.664f, -325.1803f, 36.6849f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -1213.925f, -323.9582f, 36.7309f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -1217.903f, -326.2084f, 36.6413f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -1211.726f, -322.8159f, 36.7714f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -1220.386f, -327.5189f, 36.5898f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -1216.292f, -323.328f, 36.6777f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -1213.984f, -321.7677f, 36.7277f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -1219.155f, -324.5487f, 36.6111f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -1211.721f, -320.7764f, 36.7536f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -1221.718f, -325.9073f, 36.5833f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -1216.695f, -321.2399f, 36.6911f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -1214.371f, -319.8024f, 36.7339f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -1218.999f, -321.9746f, 36.6385f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -1211.881f, -318.9889f, 36.76f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -1220.796f, -322.8924f, 36.5952f };
					*uParam3 = 27.72f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -1222.944f, -328.6745f, 36.5402f };
					*uParam3 = 27.72f;
					return 1;
					break;
			}
			break;
		
		case 45:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 151.4384f, -1035.981f, 28.3392f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 153.2689f, -1036.787f, 28.3161f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 149.6079f, -1035.176f, 28.3414f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 155.2534f, -1037.082f, 28.2587f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 147.5222f, -1034.461f, 28.3437f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 156.8904f, -1038.244f, 28.2397f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 145.2194f, -1033.411f, 28.3462f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 159.547f, -1039.091f, 28.2464f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 152.8388f, -1033.798f, 28.3386f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 154.629f, -1034.607f, 28.3289f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 150.2166f, -1033.243f, 28.3416f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 158.7213f, -1036.816f, 28.2003f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 148.5833f, -1032.539f, 28.3434f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 157.9804f, -1035.026f, 28.2005f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 143.0873f, -1032.483f, 28.3485f };
					*uParam3 = 336.24f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 160.3382f, -1035.83f, 28.2271f };
					*uParam3 = 336.24f;
					return 1;
					break;
			}
			break;
		
		case 46:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 315.6395f, -274.488f, 52.9226f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 317.8872f, -275.3293f, 52.9186f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 313.3918f, -273.6467f, 52.9266f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 320.1349f, -276.1705f, 52.9147f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 311.1441f, -272.8054f, 52.9294f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 322.3827f, -277.0118f, 52.9107f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 308.8964f, -271.9641f, 52.942f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 324.6304f, -277.8531f, 52.9378f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 316.4808f, -272.2403f, 52.9162f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 318.7285f, -273.0815f, 52.9139f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 314.2331f, -271.399f, 52.9166f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 320.9762f, -273.9228f, 52.91f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 311.9854f, -270.5577f, 52.9283f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 323.2239f, -274.7641f, 52.9073f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 309.7377f, -269.7164f, 52.9409f };
					*uParam3 = 339.48f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 325.4716f, -275.6054f, 52.9378f };
					*uParam3 = 339.48f;
					return 1;
					break;
			}
			break;
		
		case 47:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -349.6055f, -45.4561f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -347.3325f, -46.2263f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -351.8786f, -44.6858f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -345.0594f, -46.9966f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -354.1516f, -43.9155f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -342.7864f, -47.7669f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -356.0054f, -42.3063f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -340.5134f, -48.5371f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -350.1007f, -42.1019f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -346.5622f, -43.9533f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -351.6116f, -41.6252f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -338.396f, -48.7175f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -354.761f, -40.4781f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -336.5751f, -49.0537f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -356.2777f, -39.9838f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -340.8749f, -46.6425f, 48.0418f };
					*uParam3 = 341.28f;
					return 1;
					break;
			}
			break;
		
		case 48:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -114.8783f, 6458.876f, 30.4685f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -116.5539f, 6460.594f, 30.4685f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -113.2027f, 6457.158f, 30.4685f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -120.7331f, 6463.364f, 30.4685f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -110.671f, 6453.426f, 30.4648f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -116.5966f, 6457.2f, 30.4505f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -118.7085f, 6458.272f, 30.4339f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -114.9378f, 6454.339f, 30.4313f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -119.9478f, 6460.637f, 30.4518f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -112.9718f, 6453.279f, 30.4458f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -118.4263f, 6455.031f, 30.3868f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -121.0131f, 6457.11f, 30.3968f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -116.2802f, 6452.077f, 30.4043f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -122.554f, 6459.299f, 30.389f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -114.129f, 6451.374f, 30.397f };
					*uParam3 = 134.28f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -121.178f, 6454.305f, 30.4685f };
					*uParam3 = 134.28f;
					return 1;
					break;
			}
			break;
		
		case 49:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1175.162f, 2702.59f, 37.1778f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 1172.929f, 2702.168f, 37.1794f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 1177.414f, 2702.496f, 37.1761f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 1172.372f, 2697.427f, 36.9604f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 1174.931f, 2697.345f, 36.9799f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 1169.422f, 2697.394f, 36.897f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 1177.693f, 2697.39f, 36.981f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 1166.641f, 2697.207f, 36.8853f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 1181.822f, 2696.861f, 36.9742f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 1174.858f, 2694.826f, 36.9156f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 1172.459f, 2694.886f, 36.8525f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 1177.257f, 2694.765f, 36.9442f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 1170.059f, 2694.946f, 36.8091f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 1179.657f, 2694.705f, 36.9442f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 1166.986f, 2694.72f, 36.8146f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 1182.574f, 2694.467f, 36.9398f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 1164.385f, 2696.048f, 36.8095f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 1184.799f, 2695.899f, 36.9541f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 1177.067f, 2692.313f, 36.8877f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 1171.899f, 2692.599f, 36.8748f };
					*uParam3 = 178.56f;
					return 1;
					break;
			}
			break;
		
		case 50:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -2968.502f, 482.859f, 14.4687f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -2968.406f, 485.0569f, 14.4687f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -2968.599f, 480.6612f, 14.4687f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -2968.309f, 487.2548f, 14.4687f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -2968.696f, 478.4633f, 14.4687f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -2968.212f, 489.4527f, 14.4277f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -2968.792f, 476.2654f, 14.4687f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -2968.116f, 491.6505f, 14.3001f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -2968.889f, 474.0675f, 14.4687f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -2970.7f, 482.9558f, 14.454f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -2970.604f, 485.1537f, 14.4542f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -2970.797f, 480.7579f, 14.4542f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -2970.507f, 487.3515f, 14.4555f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -2970.894f, 478.56f, 14.4464f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -2970.41f, 489.5494f, 14.3552f };
					*uParam3 = 87.48f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -2970.99f, 476.3622f, 14.4453f };
					*uParam3 = 87.48f;
					return 1;
					break;
			}
			break;
		
		case 51:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -564.774f, 274.1477f, 82.0197f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -567.7444f, 273.9719f, 82.0197f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -561.5562f, 273.0459f, 82.0197f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -569.4955f, 274.2109f, 81.9751f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -559.7354f, 272.8479f, 82.0197f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -571.3306f, 274.4099f, 81.9203f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -557.8665f, 272.9491f, 82.0197f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -573.0443f, 274.0808f, 81.8704f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -555.9487f, 272.6297f, 82.0141f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -565.772f, 272.2206f, 82.0197f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -568.3514f, 272.1779f, 82.0143f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -564.2276f, 271.7412f, 82.0197f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -570.3973f, 272.4509f, 81.953f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -561.945f, 271.4072f, 82.0197f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -572.3325f, 272.437f, 81.8957f };
					*uParam3 = 174.24f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -557.6672f, 271.1332f, 82.0197f };
					*uParam3 = 174.24f;
					return 1;
					break;
			}
			break;
		
		case 52:
		case 53:
		case 54:
		case 55:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -72.7471f, 6268.503f, 30.3551f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -71.252f, 6269.506f, 30.3381f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -74.2422f, 6267.501f, 30.3655f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -69.757f, 6270.508f, 30.3211f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -75.7373f, 6266.499f, 30.3661f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -65.7448f, 6272.877f, 30.3366f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -73.7495f, 6269.999f, 30.3692f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -71.3678f, 6271.286f, 30.3678f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -75.2446f, 6268.996f, 30.3698f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -69.2828f, 6272.988f, 30.3674f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -77.1063f, 6267.988f, 30.3709f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -66.3738f, 6274.839f, 30.3656f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -75.0776f, 6272.224f, 30.3753f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -72.6832f, 6272.561f, 30.3721f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -76.2469f, 6270.491f, 30.374f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -70.6463f, 6274.261f, 30.3719f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { -78.2708f, 6269.236f, 30.375f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { -68.138f, 6275.899f, 30.3704f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { -76.0953f, 6274.172f, 30.3855f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { -74.2592f, 6273.991f, 30.3771f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { -77.5563f, 6272.694f, 30.3797f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { -72.7641f, 6274.994f, 30.3766f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { -79.0887f, 6271.026f, 30.3795f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { -70.7195f, 6275.979f, 30.375f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { -77.6445f, 6275.719f, 30.4466f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { -75.889f, 6276.884f, 30.4382f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { -79.4104f, 6274.128f, 30.415f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { -73.7665f, 6276.489f, 30.3905f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { -80.4614f, 6271.917f, 30.3759f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { -72.2714f, 6277.491f, 30.3836f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { -81.9975f, 6273.217f, 30.3915f };
					*uParam3 = 33.84f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { -74.5183f, 6278.968f, 30.4459f };
					*uParam3 = 33.84f;
					return 1;
					break;
			}
			break;
		
		case 56:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2449.992f, 4996.175f, 44.9741f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 2451.792f, 4996.175f, 44.9628f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 2448.192f, 4996.175f, 44.9928f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 2453.592f, 4996.175f, 45.0961f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 2445.453f, 4994.827f, 44.8929f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 2443.447f, 4994.624f, 44.9117f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 2448.743f, 4998.16f, 45.0098f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 2451.125f, 4998.125f, 44.9975f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 2446.477f, 4998.319f, 44.8937f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 2453.592f, 4997.975f, 45.0223f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 2443.211f, 4997.464f, 44.8304f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 2456.785f, 4997.438f, 45.1597f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 2448.787f, 4999.9f, 44.9323f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 2451.372f, 5000.234f, 44.9962f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 2446.619f, 4999.952f, 44.927f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 2453.592f, 4999.775f, 45.0573f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 2444.414f, 4999.121f, 44.8859f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 2459.168f, 4999.514f, 45.0061f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 2449.68f, 5002.222f, 44.8187f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 2451.792f, 5001.575f, 44.9703f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 2448.192f, 5001.575f, 44.87f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 2453.592f, 5001.575f, 44.9638f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 2446.392f, 5001.575f, 44.9074f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 2456.798f, 5001.825f, 44.9865f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 2449.49f, 5004.314f, 44.784f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 2451.262f, 5003.836f, 44.7497f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 2451.437f, 5006.339f, 44.6852f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 2453.592f, 5003.375f, 44.8513f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 2446.392f, 5003.375f, 44.8731f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 2456.092f, 5005.15f, 44.7275f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 2448.938f, 5006.702f, 44.8182f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 2454.077f, 5005.971f, 44.5968f };
					*uParam3 = 0f;
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_827(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return 0;
}

void func_828(var uParam0, var uParam1)
{
}

char* func_829(var uParam0, var uParam1, var uParam2)
{
	return "";
}

int func_830(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 42:
			return unk_0x08BA6DD398CA197C(Global_1752575.f_17, 0);
			break;
		
		case 43:
			return unk_0x08BA6DD398CA197C(Global_1752575.f_17, 1);
			break;
		
		case 44:
			return unk_0x08BA6DD398CA197C(Global_1752575.f_17, 2);
			break;
		
		case 45:
			return unk_0x08BA6DD398CA197C(Global_1752575.f_17, 3);
			break;
		
		case 46:
			return unk_0x08BA6DD398CA197C(Global_1752575.f_17, 4);
			break;
		
		case 47:
			return unk_0x08BA6DD398CA197C(Global_1752575.f_17, 5);
			break;
		
		case 48:
			return unk_0x08BA6DD398CA197C(Global_1752575.f_17, 6);
			break;
		
		case 49:
			return unk_0x08BA6DD398CA197C(Global_1752575.f_17, 7);
			break;
		
		case 50:
			return unk_0x08BA6DD398CA197C(Global_1752575.f_17, 8);
			break;
		
		case 51:
			return unk_0x08BA6DD398CA197C(Global_1752575.f_17, 9);
			break;
		
		case 52:
			return unk_0x08BA6DD398CA197C(Global_1752575.f_17, 10);
			break;
		
		case 53:
			return unk_0x08BA6DD398CA197C(Global_1752575.f_17, 11);
			break;
		
		case 54:
			return unk_0x08BA6DD398CA197C(Global_1752575.f_17, 12);
			break;
		
		case 55:
			return unk_0x08BA6DD398CA197C(Global_1752575.f_17, 13);
			break;
		
		case 56:
			return unk_0x08BA6DD398CA197C(Global_1752575.f_17, 14);
			break;
	}
	return 0;
}

void func_831(var uParam0, var uParam1)
{
}

void func_832(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
}

int func_833(var uParam0, var uParam1)
{
	return 0;
}

int func_834(var uParam0, var uParam1)
{
	return 0;
}

char* func_835(var uParam0, var uParam1)
{
	return "";
}

int func_836(var uParam0, var uParam1)
{
	return 0;
}

int func_837(var uParam0)
{
	return 1;
}

void func_838(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
}

void func_839(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 42:
			*uParam1 = { 429.3781f, -980.3966f, 29.7103f };
			break;
		
		case 43:
			*uParam1 = { 2447.739f, 4990.434f, 45.5476f };
			break;
		
		case 44:
			*uParam1 = { -1214.839f, -326.6806f, 36.6732f };
			break;
		
		case 45:
			*uParam1 = { 151.2385f, -1035.917f, 28.3395f };
			break;
		
		case 46:
			*uParam1 = { 315.4561f, -274.3907f, 52.9229f };
			break;
		
		case 47:
			*uParam1 = { -349.5591f, -44.8894f, 48.0418f };
			break;
		
		case 48:
			*uParam1 = { -110.9303f, 6462.298f, 30.6408f };
			break;
		
		case 49:
			*uParam1 = { 1175.11f, 2702.038f, 37.1778f };
			break;
		
		case 50:
			*uParam1 = { -2966.651f, 482.9674f, 14.6977f };
			break;
		
		case 51:
			*uParam1 = { -564.5693f, 274.6833f, 82.0197f };
			break;
		
		case 52:
		case 53:
		case 54:
		case 55:
			*uParam1 = { -72.7412f, 6268.026f, 30.3276f };
			break;
		
		case 56:
			*uParam1 = { 2447.739f, 4990.434f, 45.5476f };
			break;
	}
}

void func_840(var uParam0, var uParam1)
{
}

char* func_841(int iParam0)
{
	switch (iParam0)
	{
		case 42:
			return "RST_INT_POLICE_ST";
			break;
		
		case 43:
			return "RST_INT_CLUBHOUSE";
			break;
		
		case 44:
			return "RST_INT_B_ROCKFORD";
			break;
		
		case 45:
			return "RST_INT_B_PILLBOX";
			break;
		
		case 46:
			return "RST_INT_B_ALTA";
			break;
		
		case 47:
			return "RST_INT_B_BURTON";
			break;
		
		case 48:
			return "RST_INT_B_PALETO";
			break;
		
		case 49:
			return "RST_INT_B_GRAND_SENORA";
			break;
		
		case 50:
			return "RST_INT_B_CHUMASH";
			break;
		
		case 51:
			return "RST_INT_ROCKCLUB";
			break;
		
		case 52:
			return "RST_INT_CHICKEN1";
			break;
		
		case 53:
			return "RST_INT_CHICKEN2";
			break;
		
		case 54:
			return "RST_INT_CHICKEN3";
			break;
		
		case 55:
			return "RST_INT_CHICKEN4";
			break;
		
		case 56:
			return "RST_INT_FARM";
			break;
	}
	return "";
}

void func_842(var uParam0, var uParam1)
{
	uParam1->f_3 = 1;
}

void func_843(int iParam0, char* sParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_846(iParam0);
	if (iVar0 != -1)
	{
		*uParam2 = { func_845(iVar0) };
		StringCopy(sParam1, func_844(iVar0), 64);
	}
}

char* func_844(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "bkr_biker_dlc_int_03";
		
		case 0:
			return "hei_heist_police_dlc";
		
		case 2:
			return "v_genbank";
		
		case 3:
			return "v_genbank";
		
		case 4:
			return "v_genbank";
		
		case 5:
			return "v_genbank";
		
		case 6:
			return "v_bank4";
		
		case 7:
			return "v_genbank";
		
		case 8:
			return "hei_generic_bank_dlc";
		
		case 9:
			return "v_rockclub";
		
		case 10:
			return "v_factory1";
		
		case 11:
			return "v_factory2";
		
		case 12:
			return "v_factory3";
		
		case 13:
			return "v_factory4";
		
		case 14:
			return "v_farmhouse";
		
		default:
	}
	return "";
}

Vector3 func_845(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 984.1552f, -95.3662f, 75.9326f;
		
		case 0:
			return 443.2281f, -984.0744f, 29.6896f;
		
		case 2:
			return -1216.762f, -333.0008f, 36.8508f;
		
		case 3:
			return 145.4168f, -1039.277f, 28.4379f;
		
		case 4:
			return 309.7465f, -277.6442f, 53.2346f;
		
		case 5:
			return -355.4359f, -48.5326f, 48.1064f;
		
		case 6:
			return -109.4503f, 6467.768f, 30.4388f;
		
		case 7:
			return 1179.745f, 2706.985f, 37.1578f;
		
		case 8:
			return -2962.591f, 478.238f, 14.7669f;
		
		case 9:
			return -556.5089f, 286.3181f, 81.1763f;
		
		case 10:
			return -76.6618f, 6222.191f, 32.2412f;
		
		case 11:
			return -100.7106f, 6205.7f, 30.0499f;
		
		case 12:
			return -125.6972f, 6172.923f, 30.0499f;
		
		case 13:
			return -162.4785f, 6155.384f, 30.0499f;
		
		case 14:
			return 2449.785f, 4983.825f, 45.8106f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_846(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_399(iParam0) == 3)
	{
		iVar0 = 0;
		while (iVar0 < 15)
		{
			iVar1 = iVar0;
			if (func_847(iVar1) == iParam0)
			{
				return iVar1;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_847(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 42;
			break;
		
		case 1:
			return 43;
			break;
		
		case 2:
			return 44;
			break;
		
		case 3:
			return 45;
			break;
		
		case 4:
			return 46;
			break;
		
		case 5:
			return 47;
			break;
		
		case 6:
			return 48;
			break;
		
		case 7:
			return 49;
			break;
		
		case 8:
			return 50;
			break;
		
		case 9:
			return 51;
			break;
		
		case 10:
			return 52;
			break;
		
		case 11:
			return 53;
			break;
		
		case 12:
			return 54;
			break;
		
		case 13:
			return 55;
			break;
		
		case 14:
			return 56;
			break;
	}
	return -1;
}

int func_848(int iParam0)
{
	if (unk_0x1504F110F2576375())
	{
		return 0;
	}
	switch (iParam0)
	{
		case 42:
			if (unk_0x08BA6DD398CA197C(Global_1752575.f_17, 0))
			{
				return 1;
			}
			break;
		
		case 43:
			if (unk_0x08BA6DD398CA197C(Global_1752575.f_17, 1))
			{
				return 1;
			}
			break;
		
		case 44:
			if (unk_0x08BA6DD398CA197C(Global_1752575.f_17, 2))
			{
				return 1;
			}
			break;
		
		case 45:
			if (unk_0x08BA6DD398CA197C(Global_1752575.f_17, 3))
			{
				return 1;
			}
			break;
		
		case 46:
			if (unk_0x08BA6DD398CA197C(Global_1752575.f_17, 4))
			{
				return 1;
			}
			break;
		
		case 47:
			if (unk_0x08BA6DD398CA197C(Global_1752575.f_17, 5))
			{
				return 1;
			}
			break;
		
		case 48:
			if (unk_0x08BA6DD398CA197C(Global_1752575.f_17, 6))
			{
				return 1;
			}
			break;
		
		case 49:
			if (unk_0x08BA6DD398CA197C(Global_1752575.f_17, 7))
			{
				return 1;
			}
			break;
		
		case 50:
			if (unk_0x08BA6DD398CA197C(Global_1752575.f_17, 8))
			{
				return 1;
			}
			break;
		
		case 51:
			if (unk_0x08BA6DD398CA197C(Global_1752575.f_17, 9))
			{
				return 1;
			}
			break;
		
		case 52:
			if (unk_0x08BA6DD398CA197C(Global_1752575.f_17, 10))
			{
				return 1;
			}
			break;
		
		case 53:
			if (unk_0x08BA6DD398CA197C(Global_1752575.f_17, 11))
			{
				return 1;
			}
			break;
		
		case 54:
			if (unk_0x08BA6DD398CA197C(Global_1752575.f_17, 12))
			{
				return 1;
			}
			break;
		
		case 55:
			if (unk_0x08BA6DD398CA197C(Global_1752575.f_17, 13))
			{
				return 1;
			}
			break;
		
		case 56:
			if (unk_0x08BA6DD398CA197C(Global_1752575.f_17, 14))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_849(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 192880;
			break;
		
		case 1:
			uParam0->f_1 = 192575;
			break;
		
		case 2:
			uParam0->f_2 = 187756;
			break;
		
		case 3:
			uParam0->f_3 = 187567;
			break;
		
		case 4:
			uParam0->f_4 = 187217;
			break;
		
		case 5:
			uParam0->f_5 = 186642;
			break;
		
		case 6:
			uParam0->f_6 = 186620;
			break;
		
		case 7:
			uParam0->f_7 = 184862;
			break;
		
		case 8:
			uParam0->f_8 = 184778;
			break;
		
		case 9:
			uParam0->f_9 = 184344;
			break;
		
		case 10:
			uParam0->f_10 = 184262;
			break;
		
		case 11:
			uParam0->f_11 = 184218;
			break;
		
		case 12:
			uParam0->f_12 = 183983;
			break;
		
		case 13:
			uParam0->f_13 = 183385;
			break;
		
		case 14:
			uParam0->f_14 = 183243;
			break;
		
		case 15:
			uParam0->f_15 = 182815;
			break;
		
		case 16:
			uParam0->f_16 = 182146;
			break;
		
		case 17:
			uParam0->f_17 = 179540;
			break;
		
		case 18:
			uParam0->f_18 = 153699;
			break;
		
		case 19:
			uParam0->f_19 = 153471;
			break;
		
		case 20:
			uParam0->f_20 = 153295;
			break;
		
		case 21:
			uParam0->f_21 = 153062;
			break;
		
		case 22:
			uParam0->f_22 = 153026;
			break;
		
		case 23:
			uParam0->f_23 = 152833;
			break;
		
		case 24:
			uParam0->f_24 = 152824;
			break;
		
		case 25:
			uParam0->f_25 = 152641;
			break;
		
		case 26:
			uParam0->f_26 = 152621;
			break;
		
		case 27:
			uParam0->f_27 = 152390;
			break;
		
		case 28:
			uParam0->f_28 = 152325;
			break;
		
		case 29:
			uParam0->f_29 = 151614;
			break;
		
		case 30:
			uParam0->f_30 = 151606;
			break;
		
		case 31:
			uParam0->f_31 = 151598;
			break;
		
		case 32:
			uParam0->f_32 = 151537;
			break;
		
		case 33:
			uParam0->f_33 = 151520;
			break;
		
		case 34:
			uParam0->f_34 = 151511;
			break;
		
		case 35:
			uParam0->f_35 = 151502;
			break;
		
		case 36:
			uParam0->f_36 = 150998;
			break;
		
		case 37:
			uParam0->f_37 = 150742;
			break;
		
		case 38:
			uParam0->f_38 = 150697;
			break;
	}
}

void func_850(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 38)
	{
		*uParam1 = 1;
		*uParam2 = { 135.4647f, -2474.173f, 5f };
		*uParam3 = 5f;
		return;
	}
	*uParam1 = 0;
}

int func_851(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 38:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 144.5453f, -2486.429f, 6.1636f };
					*uParam3 = 4f;
					*uParam4 = joaat("prop_fnclink_04gate1");
					return 1;
					break;
			}
			break;
		
		case 34:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 375.9739f, 3586.175f, 32.3049f };
					*uParam3 = 4f;
					*uParam4 = joaat("prop_rub_chassis_01");
					return 1;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2876.753f, 4457.728f, 47.5327f };
					*uParam3 = 4f;
					*uParam4 = joaat("prop_woodpile_01c");
					return 1;
					break;
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -181.1744f, 6315.724f, 30.4581f };
					*uParam3 = 2f;
					*uParam4 = joaat("prop_dumpster_02a");
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_852(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 23)
	{
		*uParam2 = { 416.2334f, 6526.307f, 26.178f };
		*uParam3 = { 425.155f, 6537.515f, 30.0163f };
		*uParam1 = 1;
		return;
	}
	else if (iParam0 == 24)
	{
		*uParam2 = { 58.1605f, 6463.741f, 29.8964f };
		*uParam3 = { 71.6159f, 6473.882f, 33.6967f };
		*uParam1 = 1;
		return;
	}
	else if (iParam0 == 25)
	{
		*uParam2 = { -420.1546f, 6147.26f, 29.8735f };
		*uParam3 = { -397.088f, 6185.627f, 34.9226f };
		*uParam1 = 1;
		return;
	}
	else if (iParam0 == 30)
	{
		*uParam2 = { -1181.309f, -1391.505f, 3.497f };
		*uParam3 = { -1168.151f, -1370.608f, 8.047f };
		*uParam1 = 1;
		return;
	}
	else if (iParam0 == 31)
	{
		*uParam2 = { 297.8819f, -706.9392f, 27.3973f };
		*uParam3 = { 321.2971f, -689.0288f, 32.2224f };
		*uParam1 = 1;
		return;
	}
	else if (iParam0 == 32)
	{
		*uParam2 = { 202.1808f, 2454.896f, 54.6059f };
		*uParam3 = { 212.2262f, 2464.708f, 59.9501f };
		*uParam1 = 1;
		return;
	}
	else if (iParam0 == 35)
	{
		*uParam2 = { 640.6338f, 2771.818f, 40.4589f };
		*uParam3 = { 653.1158f, 2794.839f, 45.5267f };
		*uParam1 = 1;
		return;
	}
	else if (iParam0 == 36)
	{
		*uParam2 = { 1658.091f, 4851.492f, 40.5298f };
		*uParam3 = { 1665.266f, 4864.598f, 44.0774f };
		*uParam1 = 1;
		return;
	}
	else if (iParam0 == 41)
	{
		*uParam2 = { -341.0086f, -2789.826f, 3.5734f };
		*uParam3 = { -331.4757f, -2772.298f, 7.5039f };
		*uParam1 = 1;
		return;
	}
	*uParam1 = 0;
}

int func_853(var uParam0)
{
	return 1;
}

int func_854(var uParam0)
{
	return 1;
}

void func_855(var uParam0, var uParam1)
{
	unk_0x09C86C0C5CA26B1E(&(uParam0->f_98), 1);
}

void func_856(var uParam0, var uParam1)
{
	if (!unk_0x08BA6DD398CA197C(uParam0->f_98, 1))
	{
		if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0)
		{
			unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), 0, 0);
			unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
		}
		unk_0x88B0F0DC270164B7(&(uParam0->f_98), 1);
	}
}

void func_857(var uParam0, var uParam1)
{
}

void func_858(var uParam0, var uParam1, var uParam2)
{
}

Vector3 func_859(int iParam0)
{
	switch (func_860(iParam0))
	{
		case 1:
			return 22.9f, 6307.98f, 0f;
		
		case 2:
			return 410.88f, 6515.83f, 0f;
		
		case 3:
			return 31.28f, 6466.3f, 0f;
		
		case 4:
			return -417.89f, 6152.75f, 0f;
		
		case 5:
			return -167.33f, 6326.04f, 0f;
		
		case 6:
			return 1447.56f, -1666.12f, 0f;
		
		case 7:
			return 121.81f, 187.86f, 0f;
		
		case 8:
			return -1477.83f, -379.04f, 0f;
		
		case 9:
			return -1159.31f, -1381.69f, 0f;
		
		case 10:
			return 268.15f, -726.74f, 0f;
		
		case 11:
			return 195.23f, 2467.11f, 0f;
		
		case 12:
			return 2861.52f, 4453.81f, 0f;
		
		case 13:
			return 385.99f, 3575.13f, 0f;
		
		case 14:
			return 628.56f, 2798.91f, 0f;
		
		case 15:
			return 1652.13f, 4843.88f, 0f;
		
		case 16:
			return 1212.35f, -3145.12f, 0f;
		
		case 17:
			return 129.28f, -2469.72f, 0f;
		
		case 18:
			return -227.57f, -2586.04f, 0f;
		
		case 19:
			return 678.49f, -2680.5f, 0f;
		
		case 20:
			return -306.09f, -2780.97f, 0f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_860(int iParam0)
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
	}
	return 0;
}

int func_861(var uParam0)
{
	int iVar0;
	
	if (func_521())
	{
		return func_408(func_640(unk_0x0C1D3C552325765B()));
	}
	else if (func_246(unk_0x0C1D3C552325765B(), 0))
	{
		iVar0 = func_524();
		return func_408(func_640(iVar0));
	}
	return 4;
}

void func_862(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 22:
		case 27:
		case 32:
		case 37:
			unk_0x6F18BFEFE84565FF(*uParam1, "BIKER_WH_1B");
			return;
			break;
		
		case 23:
		case 28:
		case 33:
		case 38:
			unk_0x6F18BFEFE84565FF(*uParam1, "BIKER_WH_2B");
			return;
			break;
		
		case 24:
		case 29:
		case 34:
		case 39:
			unk_0x6F18BFEFE84565FF(*uParam1, "BIKER_WH_3B");
			return;
			break;
		
		case 25:
		case 30:
		case 35:
		case 40:
			unk_0x6F18BFEFE84565FF(*uParam1, "BIKER_WH_4B");
			return;
			break;
		
		case 26:
		case 31:
		case 36:
		case 41:
			unk_0x6F18BFEFE84565FF(*uParam1, "BIKER_WH_5B");
			return;
			break;
	}
	unk_0x6F18BFEFE84565FF(*uParam1, "BIKER_WH_1B");
}

Vector3 func_863(int iParam0)
{
	struct<3> Var0;
	
	func_922(iParam0, &Var0);
	return Var0;
}

int func_864(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 27:
		case 32:
		case 37:
			return 499;
			break;
		
		case 23:
		case 28:
		case 33:
		case 38:
			return 496;
			break;
		
		case 24:
		case 29:
		case 34:
		case 39:
			return 497;
			break;
		
		case 25:
		case 30:
		case 35:
		case 40:
			return 500;
			break;
		
		case 26:
		case 31:
		case 36:
		case 41:
			return 498;
			break;
	}
	return 473;
}

int func_865(var uParam0)
{
	return 1;
}

int func_866(int iParam0)
{
	if (func_868(unk_0x0C1D3C552325765B(), 1))
	{
		return 0;
	}
	if (func_867() == iParam0)
	{
		return 0;
	}
	if (func_900(unk_0x0C1D3C552325765B(), iParam0))
	{
		if (!func_901(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_867()
{
	return Global_1751948.f_1;
}

int func_868(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_91(iParam0))
		{
			return 1;
		}
	}
	if ((((Global_1588660[iParam0 /*532*/] == 2 || Global_1588660[iParam0 /*532*/] == 1) || Global_1588660[iParam0 /*532*/] == 0) || Global_1588660[iParam0 /*532*/] == 3) || Global_1588660[iParam0 /*532*/] == 8)
	{
		return 1;
	}
	return 0;
}

bool func_869(var uParam0)
{
	return (unk_0x08BA6DD398CA197C(Global_1751948.f_2, 2) || unk_0x08BA6DD398CA197C(Global_1751948.f_2, 0));
}

void func_870(int iParam0, char* sParam1, var uParam2, var uParam3)
{
	if (*uParam2 != 3)
	{
		return;
	}
	switch (iParam0)
	{
		case 22:
		case 27:
		case 32:
		case 37:
			StringCopy(sParam1, "BIKER_WH_1", 64);
			break;
		
		case 23:
		case 28:
		case 33:
		case 38:
			StringCopy(sParam1, "BIKER_WH_2", 64);
			break;
		
		case 24:
		case 29:
		case 34:
		case 39:
			StringCopy(sParam1, "BIKER_WH_3", 64);
			break;
		
		case 25:
		case 30:
		case 35:
		case 40:
			StringCopy(sParam1, "BIKER_WH_4", 64);
			break;
		
		case 26:
		case 31:
		case 36:
		case 41:
			StringCopy(sParam1, "BIKER_WH_5", 64);
			break;
		
		default:
			StringCopy(sParam1, "MP_WHOUSE_EXIT", 64);
			break;
	}
	*uParam3 = 2;
	(*uParam2)[0] = "BIKER_WH_EXITa";
	(*uParam2)[1] = "BIKER_WH_EXITb";
}

int func_871(int iParam0)
{
	switch (iParam0)
	{
		case 24:
		case 29:
		case 34:
		case 39:
			return 20;
			break;
		
		case 22:
		case 27:
		case 32:
		case 37:
			return 21;
			break;
		
		case 23:
		case 28:
		case 33:
		case 38:
			return 22;
			break;
		
		case 26:
		case 31:
		case 36:
		case 41:
			return 23;
			break;
		
		case 25:
		case 30:
		case 35:
		case 40:
			return 24;
			break;
	}
	return -1;
}

int func_872(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 0;
		
		case 24:
			return 1;
		
		case 23:
			return 2;
		
		case 26:
			return 3;
		
		case 25:
			return 4;
		
		case 27:
			return 5;
		
		case 29:
			return 6;
		
		case 28:
			return 7;
		
		case 31:
			return 8;
		
		case 30:
			return 9;
		
		case 32:
			return 10;
		
		case 34:
			return 11;
		
		case 33:
			return 12;
		
		case 36:
			return 13;
		
		case 35:
			return 14;
		
		case 37:
			return 15;
		
		case 39:
			return 16;
		
		case 38:
			return 17;
		
		case 41:
			return 18;
		
		case 40:
			return 19;
		
		default:
	}
	return -1;
}

int func_873(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 22:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 52.388f, 6339.683f, 30.3747f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 50.1165f, 6337.813f, 30.384f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 54.0991f, 6340.208f, 30.3764f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 51.8118f, 6341.783f, 30.2274f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 49.7982f, 6340.145f, 30.2268f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 47.4055f, 6338.755f, 30.2268f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 47.6714f, 6340.622f, 30.2282f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 49.0308f, 6342.47f, 30.229f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 51.3454f, 6344.165f, 30.2295f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 44.6926f, 6338.974f, 30.2282f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 46.1017f, 6335.087f, 30.3673f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 44.0519f, 6336.876f, 30.2269f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 48.0841f, 6336.146f, 30.3725f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 39.6178f, 6338.012f, 30.2306f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 44.4416f, 6342.616f, 30.2314f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 45.2101f, 6345.039f, 30.2329f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 34.4321f, 6336.621f, 30.2325f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 48.1278f, 6344.589f, 30.2312f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 41.9482f, 6340.101f, 30.2309f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 44.3521f, 6333.985f, 30.3641f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 41.746f, 6336.983f, 30.2284f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 36.4916f, 6335.406f, 30.2301f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 34.1285f, 6334.083f, 30.2302f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 38.9609f, 6341.643f, 30.234f };
					*uParam3 = 29.88f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 47.4673f, 6351.268f, 30.2368f };
					*uParam3 = 29.3628f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 42.0324f, 6348.333f, 30.2377f };
					*uParam3 = 31.1542f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 42.5469f, 6353.747f, 30.2398f };
					*uParam3 = 31.3772f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 44.7897f, 6349.863f, 30.2372f };
					*uParam3 = 29.4159f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 39.3478f, 6346.885f, 30.2382f };
					*uParam3 = 27.0972f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 40.0027f, 6349.93f, 30.2398f };
					*uParam3 = 30.9198f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 42.4919f, 6351.123f, 30.2397f };
					*uParam3 = 24.4507f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 44.7628f, 6353.019f, 30.2398f };
					*uParam3 = 29.3117f;
					return 1;
					break;
			}
			break;
		
		case 23:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 418.0156f, 6520.585f, 26.7163f };
					*uParam3 = 262.7964f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 417.1376f, 6518.758f, 26.6879f };
					*uParam3 = 263.9654f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 417.9884f, 6523.124f, 26.7372f };
					*uParam3 = 266.4f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 419.6446f, 6523.709f, 26.7372f };
					*uParam3 = 263.9875f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 416.5636f, 6516.738f, 26.6779f };
					*uParam3 = 266.4f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 417.7757f, 6525.219f, 26.7372f };
					*uParam3 = 264.3846f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 417.9008f, 6527.285f, 26.7276f };
					*uParam3 = 261.9809f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 416.3594f, 6514.406f, 26.7113f };
					*uParam3 = 260.7525f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 419.2861f, 6525.891f, 26.7306f };
					*uParam3 = 266.4f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 416.8679f, 6513.06f, 26.7013f };
					*uParam3 = 266.4f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 418.0652f, 6512.123f, 26.6896f };
					*uParam3 = 266.4f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 416.257f, 6508.136f, 26.7295f };
					*uParam3 = 266.4f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 431.1201f, 6526.12f, 26.7967f };
					*uParam3 = 255.1485f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 418.6536f, 6532.174f, 26.7355f };
					*uParam3 = 262.3797f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 418.713f, 6510.063f, 26.7268f };
					*uParam3 = 266.4f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 431.0089f, 6513.548f, 27.2204f };
					*uParam3 = 244.2593f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 432.3376f, 6515.709f, 27.3426f };
					*uParam3 = 257.6375f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 419.1826f, 6507.287f, 26.7564f };
					*uParam3 = 266.4f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 430.5198f, 6527.896f, 26.7518f };
					*uParam3 = 262.7752f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 421.3478f, 6504.809f, 26.794f };
					*uParam3 = 266.4f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 421.5699f, 6508.405f, 26.7834f };
					*uParam3 = 264.1678f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 433.3055f, 6526.468f, 26.8483f };
					*uParam3 = 256.7643f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 418.1842f, 6529.817f, 26.7083f };
					*uParam3 = 264.4763f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 430.1514f, 6516.169f, 27.2395f };
					*uParam3 = 266.4f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 419.2933f, 6534.477f, 26.7172f };
					*uParam3 = 266.4f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 423.4145f, 6506.8f, 26.7148f };
					*uParam3 = 266.4f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 419.1189f, 6536.776f, 26.7062f };
					*uParam3 = 266.4f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 433.2409f, 6511.621f, 27.3255f };
					*uParam3 = 255.6953f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 429.1526f, 6524.431f, 26.7881f };
					*uParam3 = 251.0102f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 431.9196f, 6523.929f, 26.9157f };
					*uParam3 = 254.524f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 430.4885f, 6511.412f, 27.136f };
					*uParam3 = 266.0406f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 429.3159f, 6510.02f, 26.999f };
					*uParam3 = 265.8243f;
					return 1;
					break;
			}
			break;
		
		case 24:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 52.8118f, 6487.269f, 30.4277f };
					*uParam3 = 314.8f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 54.1165f, 6486.113f, 30.4375f };
					*uParam3 = 314.8f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 51.2639f, 6489.289f, 30.4253f };
					*uParam3 = 314.8f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 55.2892f, 6484.654f, 30.4396f };
					*uParam3 = 314.8f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 49.5078f, 6490.429f, 30.4253f };
					*uParam3 = 314.8f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 56.8959f, 6483.366f, 30.4337f };
					*uParam3 = 314.8f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 47.6963f, 6491.771f, 30.4253f };
					*uParam3 = 314.8f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 57.9225f, 6481.851f, 30.4253f };
					*uParam3 = 314.8f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 46.8138f, 6493.486f, 30.4253f };
					*uParam3 = 314.8f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 59.4133f, 6480.662f, 30.4253f };
					*uParam3 = 314.8f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 45.524f, 6495.441f, 30.4253f };
					*uParam3 = 314.8f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 60.7123f, 6479.036f, 30.4253f };
					*uParam3 = 314.8f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 64.8422f, 6477.992f, 30.4036f };
					*uParam3 = 222.6826f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 62.6797f, 6477.982f, 30.4253f };
					*uParam3 = 224.6725f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 62.4855f, 6475.445f, 30.4253f };
					*uParam3 = 224.7985f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 66.4212f, 6476.019f, 30.4253f };
					*uParam3 = 224.5524f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 64.1202f, 6473.007f, 30.4253f };
					*uParam3 = 224.6458f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 59.7233f, 6473.501f, 30.4253f };
					*uParam3 = 222.6271f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 57.7166f, 6471.576f, 30.4253f };
					*uParam3 = 226.4074f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 58.7126f, 6469.368f, 30.4253f };
					*uParam3 = 222.7943f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 61.6103f, 6471.206f, 30.4253f };
					*uParam3 = 225.0653f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 55.6494f, 6469.501f, 30.4253f };
					*uParam3 = 226.0485f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 53.146f, 6466.72f, 30.4253f };
					*uParam3 = 224.9646f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 56.6075f, 6466.801f, 30.4253f };
					*uParam3 = 225.9164f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 55.9495f, 6459.095f, 30.3096f };
					*uParam3 = 228.6592f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 52.8952f, 6459.534f, 30.3907f };
					*uParam3 = 222.7136f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 54.2541f, 6464.741f, 30.4253f };
					*uParam3 = 223.3415f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 52.6959f, 6462.1f, 30.4253f };
					*uParam3 = 220.9931f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 49.7192f, 6462.789f, 30.4253f };
					*uParam3 = 222.8229f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 55.956f, 6461.751f, 30.3767f };
					*uParam3 = 222.0971f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 58.3004f, 6461.146f, 30.3021f };
					*uParam3 = 223.8293f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 57.7972f, 6464.848f, 30.3991f };
					*uParam3 = 225.385f;
					return 1;
					break;
			}
			break;
		
		case 25:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -412.4298f, 6173.216f, 30.4782f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -413.8248f, 6175.07f, 30.4782f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -410.8973f, 6171.76f, 30.4782f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -411.1946f, 6174.484f, 30.4782f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -412.5322f, 6176.398f, 30.4782f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -409.6077f, 6172.763f, 30.4782f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -409.3319f, 6174.633f, 30.4782f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -411.1761f, 6176.618f, 30.4782f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -406.7141f, 6168.102f, 30.4883f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -408.5953f, 6170.129f, 30.4782f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -404.8738f, 6170.248f, 30.4822f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -403.139f, 6168.077f, 30.5356f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -401.1759f, 6164.867f, 30.4927f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -404.189f, 6165.712f, 30.5369f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -414.0832f, 6181.135f, 30.4741f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -412.0959f, 6179.132f, 30.4782f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { -411.8097f, 6181.141f, 30.4755f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { -412.8681f, 6182.492f, 30.4661f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { -410.0663f, 6179.785f, 30.4782f };
					*uParam3 = 311.3212f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { -397.1739f, 6162.219f, 30.4782f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { -407.1871f, 6172.572f, 30.4782f };
					*uParam3 = 315.36f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { -396.5909f, 6156.809f, 30.4781f };
					*uParam3 = 314.766f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { -398.2342f, 6158.764f, 30.4782f };
					*uParam3 = 314.7355f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { -395.816f, 6159.344f, 30.4782f };
					*uParam3 = 315.2863f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { -402.5583f, 6170.364f, 30.5126f };
					*uParam3 = 314.6432f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { -399.8426f, 6166.365f, 30.4975f };
					*uParam3 = 314.5009f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { -402.4862f, 6172.542f, 30.5286f };
					*uParam3 = 316.1572f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { -398.1165f, 6166.726f, 30.4913f };
					*uParam3 = 317.543f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { -399.0388f, 6168.903f, 30.524f };
					*uParam3 = 316.466f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { -400.4666f, 6170.731f, 30.5366f };
					*uParam3 = 315.4282f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { -398.9958f, 6171.111f, 30.5404f };
					*uParam3 = 315.2344f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { -397.4542f, 6169.569f, 30.5168f };
					*uParam3 = 316.3151f;
					return 1;
					break;
			}
			break;
		
		case 26:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -162.7138f, 6335.422f, 30.5808f };
					*uParam3 = 316.2f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -161.2702f, 6334.038f, 30.5808f };
					*uParam3 = 316.2f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -164.1573f, 6336.807f, 30.5626f };
					*uParam3 = 316.2f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -159.8267f, 6332.654f, 30.5808f };
					*uParam3 = 316.2f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -166.2008f, 6338.791f, 30.5626f };
					*uParam3 = 316.2f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -158.3832f, 6331.27f, 30.5808f };
					*uParam3 = 316.2f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -168.2722f, 6340.881f, 30.5716f };
					*uParam3 = 316.2f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -156.9397f, 6329.885f, 30.5808f };
					*uParam3 = 316.2f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -169.9879f, 6342.459f, 30.5709f };
					*uParam3 = 316.2f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -155.4961f, 6328.501f, 30.577f };
					*uParam3 = 316.2f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -153.8149f, 6326.972f, 30.5826f };
					*uParam3 = 312.3233f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -152.4129f, 6325.558f, 30.592f };
					*uParam3 = 316.8614f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -151.112f, 6324.219f, 30.5903f };
					*uParam3 = 313.0286f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -158.1136f, 6333.082f, 30.5808f };
					*uParam3 = 314.6399f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -156.4287f, 6331.466f, 30.5786f };
					*uParam3 = 313.975f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -153.77f, 6328.693f, 30.5647f };
					*uParam3 = 314.0734f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { -152.0941f, 6327.271f, 30.5874f };
					*uParam3 = 314.2164f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { -168.2417f, 6342.539f, 30.5417f };
					*uParam3 = 314.5307f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { -170.3239f, 6344.085f, 30.4945f };
					*uParam3 = 314.582f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { -164.5036f, 6339.226f, 30.5626f };
					*uParam3 = 314.6957f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { -150.6437f, 6325.632f, 30.5976f };
					*uParam3 = 314.7346f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { -149.4043f, 6322.155f, 30.5716f };
					*uParam3 = 318.0889f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { -147.9739f, 6321.735f, 30.5777f };
					*uParam3 = 314.7053f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { -151.1501f, 6346.464f, 30.4964f };
					*uParam3 = 314.7262f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { -149.613f, 6344.94f, 30.495f };
					*uParam3 = 314.7279f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { -148.0372f, 6343.497f, 30.4983f };
					*uParam3 = 317.556f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { -149.0959f, 6347.406f, 30.5813f };
					*uParam3 = 314.9833f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { -147.2622f, 6345.805f, 30.5732f };
					*uParam3 = 314.9387f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { -145.3534f, 6344.006f, 30.5673f };
					*uParam3 = 321.887f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { -145.9914f, 6347.854f, 30.4908f };
					*uParam3 = 315.0452f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { -143.9613f, 6345.565f, 30.4904f };
					*uParam3 = 319.548f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { -147.8938f, 6350.029f, 30.4906f };
					*uParam3 = 317.3596f;
					return 1;
					break;
			}
			break;
		
		case 27:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1452.719f, -1652.544f, 65.2531f };
					*uParam3 = 98.64f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 1451.333f, -1652.834f, 64.9894f };
					*uParam3 = 98.64f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 1449.816f, -1653.092f, 64.8421f };
					*uParam3 = 98.863f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 1452.28f, -1651.06f, 65.1814f };
					*uParam3 = 10.2482f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 1451.025f, -1651.371f, 64.941f };
					*uParam3 = 12.1956f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 1456.226f, -1650.368f, 65.9188f };
					*uParam3 = 18.2891f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 1456.02f, -1649.107f, 65.9818f };
					*uParam3 = 18.7175f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 1454.017f, -1650.298f, 65.5237f };
					*uParam3 = 15.4597f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 1447.564f, -1650.199f, 64.2262f };
					*uParam3 = 71.9062f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 1446.07f, -1651.007f, 63.9286f };
					*uParam3 = 66.5926f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 1446.232f, -1649.501f, 63.9114f };
					*uParam3 = 43.6699f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 1446.438f, -1647.77f, 63.9483f };
					*uParam3 = 37.6348f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 1457.156f, -1645.79f, 66.3903f };
					*uParam3 = 23.0193f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 1458.786f, -1645.725f, 66.5759f };
					*uParam3 = 20.6023f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 1442.882f, -1651.725f, 63.3199f };
					*uParam3 = 83.5109f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 1446.105f, -1646.13f, 63.8255f };
					*uParam3 = 8.64f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 1445.773f, -1644.384f, 63.7196f };
					*uParam3 = 15.5516f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 1458.601f, -1644.558f, 66.69f };
					*uParam3 = 22.6359f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 1440.681f, -1652.548f, 62.9604f };
					*uParam3 = 83.0081f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 1459.531f, -1640.55f, 67.0141f };
					*uParam3 = 25.0443f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 1457.636f, -1641.712f, 66.5973f };
					*uParam3 = 22.3606f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 1457.773f, -1639.663f, 66.7683f };
					*uParam3 = 24.7135f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 1459.767f, -1638.281f, 67.2359f };
					*uParam3 = 22.7005f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 1455.612f, -1640.781f, 66.2886f };
					*uParam3 = 27.0112f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 1461.824f, -1639.323f, 67.5361f };
					*uParam3 = 24.0778f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 1461.577f, -1641.665f, 67.3225f };
					*uParam3 = 27.3296f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 1448.751f, -1637.309f, 64.8495f };
					*uParam3 = 17.9649f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 1446.172f, -1638.34f, 63.9024f };
					*uParam3 = 25.5326f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 1446.776f, -1636.319f, 64.1259f };
					*uParam3 = 20.7213f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 1443.154f, -1638.178f, 62.7794f };
					*uParam3 = 21.0717f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 1443.623f, -1636.057f, 62.9685f };
					*uParam3 = 21.0154f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 1440.251f, -1636.594f, 61.9508f };
					*uParam3 = 19.6392f;
					return 1;
					break;
			}
			break;
		
		case 28:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 101.5573f, 173.0707f, 103.5805f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 99.9892f, 172.3697f, 103.5692f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 102.7886f, 171.4459f, 103.5708f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 98.2435f, 171.3624f, 103.5405f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 104.9318f, 170.9161f, 103.591f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 100.6276f, 169.956f, 103.5367f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 96.9907f, 173.0015f, 103.5679f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 103.1269f, 169.1342f, 103.5354f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 95.1155f, 171.9109f, 103.5497f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 105.859f, 167.5653f, 103.5429f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 99.1158f, 167.4283f, 103.5265f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 96.9644f, 170.1569f, 103.5273f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 103.071f, 166.3546f, 103.5148f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 95.0259f, 168.7767f, 103.5041f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 106.9227f, 165.0326f, 103.5053f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 93.1757f, 171.0423f, 103.5259f };
					*uParam3 = 160.92f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 108.61f, 169.3952f, 103.6018f };
					*uParam3 = 159.1532f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 109.1702f, 167.1929f, 103.554f };
					*uParam3 = 161.1016f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 112.4778f, 166.7766f, 103.5676f };
					*uParam3 = 157.8632f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 114.8762f, 165.8928f, 103.5475f };
					*uParam3 = 157.9706f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 113.3156f, 164.4082f, 103.519f };
					*uParam3 = 159.3387f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 110.8967f, 165.1313f, 103.5308f };
					*uParam3 = 157.22f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 115.8458f, 163.4454f, 103.5133f };
					*uParam3 = 163.3644f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 117.1773f, 165.1345f, 103.5553f };
					*uParam3 = 160.3933f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 105.6983f, 160.9647f, 103.557f };
					*uParam3 = 157.5239f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 106.9749f, 159.3869f, 103.5674f };
					*uParam3 = 156.8706f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 106.3755f, 162.8573f, 103.5192f };
					*uParam3 = 158.1008f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 103.5319f, 160.535f, 103.5865f };
					*uParam3 = 154.9452f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 104.8679f, 158.522f, 103.6038f };
					*uParam3 = 154.552f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 102.2848f, 158.1931f, 103.6371f };
					*uParam3 = 156.7726f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 106.0865f, 156.3622f, 103.6289f };
					*uParam3 = 156.8518f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 103.6108f, 155.3809f, 103.6755f };
					*uParam3 = 154.5688f;
					return 1;
					break;
			}
			break;
		
		case 29:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1461.316f, -383.0153f, 37.7268f };
					*uParam3 = 225.36f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -1463.09f, -385.0027f, 37.7036f };
					*uParam3 = 225.36f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -1459.539f, -381.5134f, 37.7274f };
					*uParam3 = 228.159f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -1464.899f, -386.8547f, 37.688f };
					*uParam3 = 214.9657f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -1457.15f, -379.1012f, 37.7661f };
					*uParam3 = 235.8638f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -1467.111f, -388.6677f, 37.6901f };
					*uParam3 = 215.2533f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -1459.713f, -385.0891f, 37.5678f };
					*uParam3 = 230.9921f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -1461.699f, -386.8681f, 37.5623f };
					*uParam3 = 225.36f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -1457.593f, -383.0095f, 37.49f };
					*uParam3 = 237.436f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -1463.357f, -388.8349f, 37.5195f };
					*uParam3 = 216.8518f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -1455.444f, -380.7431f, 37.6032f };
					*uParam3 = 235.9487f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -1465.916f, -390.8907f, 37.5321f };
					*uParam3 = 211.4971f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -1457.433f, -386.4548f, 37.3415f };
					*uParam3 = 218.5163f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -1459.873f, -388.7091f, 37.2991f };
					*uParam3 = 225.36f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -1454.954f, -383.96f, 37.405f };
					*uParam3 = 239.7925f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -1463.277f, -391.4753f, 37.2504f };
					*uParam3 = 214.9716f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { -1452.903f, -382.2585f, 37.4333f };
					*uParam3 = 237.7314f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { -1453.037f, -380.0698f, 37.5405f };
					*uParam3 = 253.6929f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { -1451.658f, -378.0233f, 37.5819f };
					*uParam3 = 269.331f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { -1449.144f, -378.839f, 37.4439f };
					*uParam3 = 274.8042f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { -1447.038f, -377.604f, 37.419f };
					*uParam3 = 268.6497f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { -1444.701f, -377.2707f, 37.3457f };
					*uParam3 = 273.1105f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { -1450.947f, -381.1693f, 37.4067f };
					*uParam3 = 272.5679f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { -1448.948f, -381.5771f, 37.2669f };
					*uParam3 = 276.7779f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { -1446.962f, -380.8906f, 37.212f };
					*uParam3 = 270.8792f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { -1444.161f, -379.8249f, 37.2053f };
					*uParam3 = 276.637f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { -1469.515f, -391.0861f, 37.6714f };
					*uParam3 = 137.0645f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { -1471.164f, -392.9117f, 37.6507f };
					*uParam3 = 139.6607f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { -1473.057f, -394.7888f, 37.4064f };
					*uParam3 = 133.1182f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { -1466.647f, -393.5308f, 37.3348f };
					*uParam3 = 138.4943f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { -1468.701f, -395.0844f, 37.3885f };
					*uParam3 = 139.4162f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { -1471.295f, -396.2152f, 37.2593f };
					*uParam3 = 141.8664f;
					return 1;
					break;
			}
			break;
		
		case 30:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1171.805f, -1379.76f, 3.9672f };
					*uParam3 = 28.8f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -1173.838f, -1380.151f, 3.9449f };
					*uParam3 = 34.8391f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -1175.041f, -1381.724f, 3.9085f };
					*uParam3 = 34.0448f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -1176.415f, -1380.98f, 3.8931f };
					*uParam3 = 35.2419f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -1177.865f, -1379.634f, 3.8829f };
					*uParam3 = 37.6581f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -1173.285f, -1377.579f, 3.965f };
					*uParam3 = 31.6187f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -1175.538f, -1378.475f, 3.9343f };
					*uParam3 = 36.0438f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -1177.294f, -1383.397f, 3.8535f };
					*uParam3 = 35.2433f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -1179.252f, -1381.587f, 3.839f };
					*uParam3 = 28.8f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -1181.668f, -1382.966f, 3.7598f };
					*uParam3 = 32.418f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -1174.404f, -1375.134f, 3.9656f };
					*uParam3 = 28.8f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -1176.593f, -1376.374f, 3.9386f };
					*uParam3 = 35.2438f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -1178.595f, -1377.787f, 3.89f };
					*uParam3 = 28.8f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -1181.006f, -1378.982f, 3.8361f };
					*uParam3 = 46.9055f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -1183.386f, -1380.777f, 3.7525f };
					*uParam3 = 45.7085f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -1175.85f, -1372.542f, 3.9618f };
					*uParam3 = 34.033f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { -1178.036f, -1374.119f, 3.9377f };
					*uParam3 = 36.0408f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { -1180.405f, -1375.35f, 3.8842f };
					*uParam3 = 50.9507f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { -1183.326f, -1378.028f, 3.7992f };
					*uParam3 = 48.1209f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { -1185.884f, -1376.692f, 3.752f };
					*uParam3 = 25.1088f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { -1188.024f, -1377.72f, 3.6766f };
					*uParam3 = 27.3524f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { -1186.94f, -1375.037f, 3.7478f };
					*uParam3 = 25.1048f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { -1188.937f, -1375.94f, 3.6766f };
					*uParam3 = 25.3466f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { -1183.088f, -1375.363f, 3.8374f };
					*uParam3 = 77.3209f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { -1186.302f, -1380.486f, 3.6784f };
					*uParam3 = 35.8389f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { -1184.508f, -1383.379f, 3.676f };
					*uParam3 = 41.7869f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { -1176.627f, -1389.754f, 3.7946f };
					*uParam3 = 178.9759f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { -1178.76f, -1387.746f, 3.7692f };
					*uParam3 = 169.5914f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { -1174.506f, -1387.742f, 3.8554f };
					*uParam3 = 177.9477f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { -1176.679f, -1386.119f, 3.8363f };
					*uParam3 = 176.9071f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { -1179.857f, -1384.373f, 3.7852f };
					*uParam3 = 31.5586f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { -1182.702f, -1385.31f, 3.6949f };
					*uParam3 = 32.5507f;
					return 1;
					break;
			}
			break;
		
		case 31:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 300.8729f, -760.0483f, 28.3163f };
					*uParam3 = 249.84f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 301.644f, -761.9394f, 28.3147f };
					*uParam3 = 249.84f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 302.4963f, -759.5029f, 28.3146f };
					*uParam3 = 249.84f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 303.1685f, -761.8504f, 28.3129f };
					*uParam3 = 249.84f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 303.9147f, -758.1395f, 28.3135f };
					*uParam3 = 249.84f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 304.0247f, -759.9157f, 28.3126f };
					*uParam3 = 252.2312f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 301.4713f, -768.2782f, 28.3135f };
					*uParam3 = 251.8442f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 299.8669f, -768.9089f, 28.314f };
					*uParam3 = 251.4297f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 305.3434f, -753.3583f, 28.3635f };
					*uParam3 = 249.84f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 300.4586f, -770.4727f, 28.3138f };
					*uParam3 = 249.84f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 305.8705f, -751.4041f, 28.3331f };
					*uParam3 = 249.84f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 299.1807f, -771.0784f, 28.314f };
					*uParam3 = 249.84f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 304.6257f, -755.8135f, 28.3591f };
					*uParam3 = 250.0491f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 305.9816f, -754.7924f, 28.3666f };
					*uParam3 = 252.1873f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 305.3565f, -757.1442f, 28.3391f };
					*uParam3 = 252.1794f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 299.5625f, -772.7739f, 28.3129f };
					*uParam3 = 250.2665f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 298.1895f, -773.267f, 28.3143f };
					*uParam3 = 250.9776f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 306.5619f, -749.6814f, 28.3606f };
					*uParam3 = 249.635f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 296.4447f, -776.8649f, 28.315f };
					*uParam3 = 252.7087f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 298.3273f, -775.4174f, 28.3133f };
					*uParam3 = 252.8287f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 296.6829f, -779.392f, 28.3137f };
					*uParam3 = 252.3917f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 305.3011f, -746.433f, 28.3706f };
					*uParam3 = 249.7762f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 306.2274f, -743.625f, 28.3274f };
					*uParam3 = 250.7082f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 307.8594f, -745.611f, 28.3304f };
					*uParam3 = 250.6613f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 331.7643f, -776.8928f, 28.2729f };
					*uParam3 = 250.5341f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 333.6688f, -777.0743f, 28.2705f };
					*uParam3 = 253.4692f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 332.628f, -774.4262f, 28.2728f };
					*uParam3 = 250.8592f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 333.502f, -771.8655f, 28.2728f };
					*uParam3 = 250.0925f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 334.3142f, -769.5931f, 28.2727f };
					*uParam3 = 251.0598f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 334.5899f, -774.5726f, 28.2704f };
					*uParam3 = 252.1623f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 335.3888f, -771.9819f, 28.3202f };
					*uParam3 = 252.317f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 336.2341f, -769.4737f, 28.3241f };
					*uParam3 = 252.485f;
					return 1;
					break;
			}
			break;
		
		case 32:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 202.4384f, 2460.56f, 54.7008f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 200.3708f, 2459.569f, 54.6941f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 204.7798f, 2461.436f, 54.7382f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 197.7557f, 2458.807f, 54.6885f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 209.0087f, 2462.064f, 54.995f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 195.4143f, 2457.931f, 54.6845f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 203.0973f, 2458.117f, 54.9177f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 200.5146f, 2457.358f, 54.8638f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 205.6361f, 2459.034f, 55.0299f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 197.6831f, 2456.498f, 54.8015f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 207.8435f, 2459.915f, 55.1618f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 193.8811f, 2455.494f, 54.7618f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 204.2549f, 2455.907f, 55.4142f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 201.4144f, 2454.887f, 55.3609f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 206.5325f, 2456.753f, 55.4914f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 198.5998f, 2454.434f, 55.1941f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 189.0531f, 2456.218f, 54.7092f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 191.8886f, 2457.324f, 54.709f };
					*uParam3 = 200.52f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 205.7044f, 2454.345f, 55.8587f };
					*uParam3 = 199.802f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 208.7682f, 2448.124f, 56.7242f };
					*uParam3 = 176.6295f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 208.8698f, 2445.941f, 57.0429f };
					*uParam3 = 183.8303f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 208.921f, 2443.548f, 57.4307f };
					*uParam3 = 179.1214f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 210.8099f, 2446.077f, 57.0055f };
					*uParam3 = 179.0752f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 210.5056f, 2443.579f, 57.3852f };
					*uParam3 = 183.8073f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 210.0111f, 2441.083f, 57.7527f };
					*uParam3 = 182.8844f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 221.9835f, 2454.827f, 55.568f };
					*uParam3 = 220.7026f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 223.9979f, 2453.906f, 55.5964f };
					*uParam3 = 227.0621f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 225.4343f, 2451.767f, 55.7987f };
					*uParam3 = 222.8667f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 220.6236f, 2451.92f, 55.8987f };
					*uParam3 = 225.7103f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 222.4546f, 2451.069f, 55.9536f };
					*uParam3 = 218.0795f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 221.9027f, 2447.982f, 56.3041f };
					*uParam3 = 217.9536f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 224.5778f, 2449.227f, 56.1253f };
					*uParam3 = 219.4924f;
					return 1;
					break;
			}
			break;
		
		case 33:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 2847.011f, 4449.605f, 47.5172f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 2846.22f, 4451.674f, 47.5096f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 2847.621f, 4447.38f, 47.529f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 2845.616f, 4453.821f, 47.5014f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 2848.194f, 4445.377f, 47.5537f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 2844.906f, 4457.252f, 47.4885f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 2849.178f, 4442.182f, 47.5871f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 2844.703f, 4448.757f, 47.5378f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 2843.825f, 4451.375f, 47.5253f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 2845.385f, 4445.729f, 47.5674f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 2843.141f, 4454.131f, 47.5126f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 2846.374f, 4443.369f, 47.5935f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 2842.426f, 4456.444f, 47.5007f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 2847.056f, 4441.097f, 47.6161f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 2842.095f, 4447.47f, 47.6063f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 2841.025f, 4450.271f, 47.5853f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 2842.696f, 4444.979f, 47.6291f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 2840.147f, 4452.853f, 47.5646f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 2843.544f, 4442.544f, 47.649f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 2839.571f, 4456.108f, 47.5255f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 2844.417f, 4439.53f, 47.6648f };
					*uParam3 = 106.56f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 2831.779f, 4448.949f, 47.5968f };
					*uParam3 = 105.5845f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 2829.416f, 4450.412f, 47.5575f };
					*uParam3 = 105.9704f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 2827.845f, 4448.272f, 47.552f };
					*uParam3 = 104.7238f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 2832.682f, 4445.754f, 47.6294f };
					*uParam3 = 108.1589f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 2830.632f, 4446.065f, 47.6127f };
					*uParam3 = 103.9698f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 2827.994f, 4445.047f, 47.5886f };
					*uParam3 = 106.2889f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 2833.556f, 4442.959f, 47.6539f };
					*uParam3 = 106.5517f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 2832.181f, 4441.663f, 47.6564f };
					*uParam3 = 107.0118f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 2829.993f, 4442.253f, 47.6317f };
					*uParam3 = 105.3059f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 2834.319f, 4440.601f, 47.6694f };
					*uParam3 = 104.0414f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 2831.103f, 4451.938f, 47.5644f };
					*uParam3 = 102.0362f;
					return 1;
					break;
			}
			break;
		
		case 34:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 387.7582f, 3586.302f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 389.9273f, 3586.018f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 385.6169f, 3586.83f, 32.2922f };
					*uParam3 = 349.6432f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 392.1504f, 3585.552f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 382.9557f, 3587.489f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 395.2194f, 3585.07f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 379.778f, 3587.25f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 388.1639f, 3588.267f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 390.6552f, 3588.206f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 385.3867f, 3589.329f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 393.0392f, 3587.84f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 382.7778f, 3589.277f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 395.886f, 3587.45f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 380.7386f, 3589.377f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 399.8047f, 3585.266f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 397.985f, 3586.353f, 32.2922f };
					*uParam3 = 349.6487f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 382.2252f, 3591.336f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 393.1277f, 3589.675f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 377.7317f, 3589.697f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 397.7258f, 3584.719f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 377.1271f, 3587.714f, 32.2922f };
					*uParam3 = 348.84f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 370.688f, 3590.446f, 32.3428f };
					*uParam3 = 80.5106f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 368.9077f, 3591.223f, 32.3838f };
					*uParam3 = 79.9337f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 366.2635f, 3591.062f, 32.3747f };
					*uParam3 = 79.9504f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 368.8419f, 3589.05f, 32.3662f };
					*uParam3 = 98.6671f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 366.4835f, 3589.114f, 32.3813f };
					*uParam3 = 99.6186f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 367.3917f, 3587.067f, 32.3844f };
					*uParam3 = 103.9887f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 399.0821f, 3582.831f, 32.2922f };
					*uParam3 = 274.5721f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 397.9359f, 3580.618f, 32.2922f };
					*uParam3 = 270.0849f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 399.5165f, 3578.161f, 32.2922f };
					*uParam3 = 277.0565f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 397.8492f, 3576.081f, 32.2922f };
					*uParam3 = 271.5672f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 400.1925f, 3574.599f, 32.2922f };
					*uParam3 = 268.6003f;
					return 1;
					break;
			}
			break;
		
		case 35:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 636.7584f, 2783.901f, 41.0148f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 638.9577f, 2784.131f, 41.003f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 635.178f, 2783.435f, 41.0234f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 641.8049f, 2784.373f, 40.9789f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 636.0968f, 2781.423f, 41.0241f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 638.8647f, 2782.25f, 41.004f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 641.239f, 2782.813f, 40.985f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 642.4758f, 2780.234f, 40.9586f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 635.9471f, 2778.688f, 41.0091f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 638.3111f, 2778.367f, 40.9891f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 639.8527f, 2779.901f, 40.9842f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 642.0136f, 2778.263f, 40.9502f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 636.3226f, 2775.713f, 40.9935f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 638.4607f, 2775.839f, 40.9691f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 640.7181f, 2776.25f, 40.9585f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 643.416f, 2776.179f, 40.9373f };
					*uParam3 = 183.6f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 642.2759f, 2774.281f, 40.9994f };
					*uParam3 = 183.1321f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 637.4537f, 2773.959f, 40.9926f };
					*uParam3 = 181.1902f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 656.7316f, 2779.76f, 40.0253f };
					*uParam3 = 253.9082f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 658.9734f, 2779.85f, 39.8517f };
					*uParam3 = 247.4577f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 661.2719f, 2778.294f, 39.7406f };
					*uParam3 = 255.4666f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 657.0626f, 2782.89f, 40.0158f };
					*uParam3 = 257.8912f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 659.4348f, 2783.219f, 39.9377f };
					*uParam3 = 255.5625f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 661.8536f, 2781.601f, 39.7951f };
					*uParam3 = 256.4716f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 655.9114f, 2776.721f, 40.1675f };
					*uParam3 = 246.769f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 658.294f, 2775.655f, 39.9362f };
					*uParam3 = 250.3359f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 649.8104f, 2758.113f, 40.9581f };
					*uParam3 = 202.1911f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 646.8809f, 2756.072f, 40.9894f };
					*uParam3 = 202.1923f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 649.9106f, 2755.5f, 40.9632f };
					*uParam3 = 207.6483f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 647.5277f, 2754.009f, 40.9975f };
					*uParam3 = 205.1322f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 650.2255f, 2753f, 40.9791f };
					*uParam3 = 202.3729f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 648.0262f, 2751.444f, 41.0162f };
					*uParam3 = 202.3873f;
					return 1;
					break;
			}
			break;
		
		case 36:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1658.15f, 4851.813f, 40.9708f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 1658.276f, 4849.651f, 40.9736f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 1657.758f, 4853.26f, 40.9753f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 1658.989f, 4847.902f, 40.9602f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 1657.325f, 4856.115f, 40.9769f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 1658.927f, 4846.244f, 40.9731f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 1658.239f, 4854.739f, 40.9618f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 1659.074f, 4844.279f, 40.9916f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 1656.942f, 4859.155f, 40.9766f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 1660.003f, 4843.225f, 41.0006f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 1656.722f, 4861.201f, 40.9912f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 1659.172f, 4841.862f, 41.0267f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 1656.601f, 4864.011f, 40.9918f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 1660.069f, 4840.661f, 41.0395f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 1655.703f, 4865.665f, 40.9903f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 1659.643f, 4838.247f, 41.0387f };
					*uParam3 = 278.64f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 1660.14f, 4832.996f, 41.0229f };
					*uParam3 = 275.2459f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 1659.794f, 4835.752f, 41.0141f };
					*uParam3 = 278.0196f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 1661.941f, 4833.776f, 41.1119f };
					*uParam3 = 277.7381f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 1661.549f, 4836.435f, 41.0244f };
					*uParam3 = 274.7514f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 1661.489f, 4838.759f, 41.0411f };
					*uParam3 = 278.8962f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 1655.315f, 4867.271f, 41.0049f };
					*uParam3 = 273.6084f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 1657.146f, 4867.461f, 41.0091f };
					*uParam3 = 273.1697f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 1677.777f, 4856.469f, 41.0667f };
					*uParam3 = 280.4979f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 1679.346f, 4856.758f, 41.0701f };
					*uParam3 = 279.477f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 1678.172f, 4853.408f, 41.0605f };
					*uParam3 = 278.9321f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 1679.721f, 4853.639f, 41.0629f };
					*uParam3 = 279.0437f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 1678.836f, 4851.5f, 41.0594f };
					*uParam3 = 279.2171f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 1680.66f, 4851.491f, 41.062f };
					*uParam3 = 275.0026f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 1679.089f, 4848.174f, 41.0677f };
					*uParam3 = 277.5333f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 1681.196f, 4848.414f, 41.1096f };
					*uParam3 = 277.1605f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 1679.284f, 4845.882f, 41.0752f };
					*uParam3 = 277.2397f;
					return 1;
					break;
			}
			break;
		
		case 37:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1180.008f, -3113.941f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 1180.328f, -3115.91f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 1180.166f, -3111.903f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 1178.831f, -3112.848f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 1180.209f, -3117.869f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 1179.133f, -3118.838f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 1178.594f, -3116.678f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 1178.323f, -3114.968f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 1179.49f, -3110.066f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 1177.179f, -3118.62f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 1176.903f, -3116.352f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 1175.861f, -3117.51f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 1178.662f, -3108.719f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 1173.319f, -3101.817f, 4.871f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 1177.55f, -3111.437f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 1173.209f, -3105.283f, 4.8668f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 1175.919f, -3106.486f, 5.028f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 1173.226f, -3103.663f, 4.8676f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 1159.645f, -3121.636f, 4.9002f };
					*uParam3 = 97.9578f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 1157.716f, -3121.728f, 4.9002f };
					*uParam3 = 97.0644f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 1158.568f, -3123.692f, 4.8998f };
					*uParam3 = 122.424f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 1157.51f, -3125.975f, 4.8998f };
					*uParam3 = 107.9816f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 1155.896f, -3123.952f, 4.8998f };
					*uParam3 = 105.6486f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 1154.774f, -3126.999f, 4.8998f };
					*uParam3 = 103.6211f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 1153.393f, -3124.778f, 4.8998f };
					*uParam3 = 101.0198f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 1158.288f, -3102.878f, 4.9902f };
					*uParam3 = 77.9229f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 1158.517f, -3100.299f, 4.9546f };
					*uParam3 = 79.1152f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 1156.171f, -3103.662f, 4.9685f };
					*uParam3 = 75.0904f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 1156.371f, -3100.193f, 4.9431f };
					*uParam3 = 74.7444f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 1153.777f, -3103.074f, 4.9603f };
					*uParam3 = 73.65f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 1153.44f, -3099.459f, 4.8484f };
					*uParam3 = 75.6482f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 1151.632f, -3100.848f, 4.8632f };
					*uParam3 = 79.6286f;
					return 1;
					break;
			}
			break;
		
		case 38:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 138.0663f, -2473.504f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 136.3854f, -2475.245f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 139.1002f, -2471.585f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 138.6979f, -2476.101f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 140.4441f, -2473.812f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 137.2626f, -2478.607f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 141.969f, -2473.219f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 140.0273f, -2478.052f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 141.3555f, -2475.992f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 139.7461f, -2480.466f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 142.5122f, -2478.598f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 135.1875f, -2480.385f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 143.2373f, -2476.152f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 132.9111f, -2480.146f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 134.4167f, -2478.11f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 140.5661f, -2468.9f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 142.0223f, -2482.411f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 145.7824f, -2475.572f, 5f };
					*uParam3 = 234.36f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 145.0857f, -2481.146f, 5f };
					*uParam3 = 241.0637f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 149.7415f, -2483.427f, 4.9946f };
					*uParam3 = 233.5104f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 151.0793f, -2481.512f, 4.9918f };
					*uParam3 = 237.4624f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 150.278f, -2485.416f, 4.9934f };
					*uParam3 = 231.6367f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 151.9404f, -2483.232f, 4.9899f };
					*uParam3 = 236.0939f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 152.8993f, -2479.957f, 4.9879f };
					*uParam3 = 237.5987f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 133.5043f, -2488.922f, 5f };
					*uParam3 = 188.3722f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 129.2173f, -2487.895f, 5f };
					*uParam3 = 190.1083f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 131.1706f, -2489.566f, 5f };
					*uParam3 = 190.6198f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 128.6361f, -2490.336f, 5f };
					*uParam3 = 189.1775f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 131.2855f, -2486.54f, 5f };
					*uParam3 = 178.5667f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 164.5286f, -2503.107f, 4.9877f };
					*uParam3 = 210.2661f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 166.7715f, -2502.821f, 4.9877f };
					*uParam3 = 222.8792f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 166.6136f, -2500.656f, 4.9877f };
					*uParam3 = 224.8715f;
					return 1;
					break;
			}
			break;
		
		case 39:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -254.7741f, -2591.237f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -254.2472f, -2589.173f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -255.9361f, -2589.8f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -256.4702f, -2591.925f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -255.5893f, -2587.77f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -257.3896f, -2588.713f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -254.1175f, -2586.838f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -258.2581f, -2591.568f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -257.0626f, -2586.202f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -254.7318f, -2583.701f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -256.1104f, -2581.662f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -256.0175f, -2578.75f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -260.2751f, -2592.114f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -259.7165f, -2588.463f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -260.1514f, -2584.909f, 5.0006f };
					*uParam3 = 87.0548f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -258.7704f, -2582.351f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { -259.4825f, -2577.276f, 5.0006f };
					*uParam3 = 85.035f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { -256.7663f, -2576.331f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { -262.3983f, -2590.654f, 5.0006f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { -262.6156f, -2586.526f, 5.0006f };
					*uParam3 = 89.4713f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { -262.3634f, -2579.592f, 5.0006f };
					*uParam3 = 86.8199f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { -261.7182f, -2574.861f, 5.0006f };
					*uParam3 = 86.2061f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { -267.5555f, -2577.93f, 5.0006f };
					*uParam3 = 83.4103f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { -267.5865f, -2581.382f, 5.0006f };
					*uParam3 = 87.6697f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { -267.617f, -2584.89f, 5.0006f };
					*uParam3 = 87.6113f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { -269.2955f, -2579.781f, 5.0006f };
					*uParam3 = 85.1179f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { -269.4418f, -2583.528f, 5.0006f };
					*uParam3 = 91.6965f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { -269.4679f, -2587.305f, 5.0006f };
					*uParam3 = 85.5674f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { -267.6761f, -2588.577f, 5.0006f };
					*uParam3 = 93.8343f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { -267.8046f, -2592.208f, 5.0006f };
					*uParam3 = 87.5751f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { -269.5222f, -2591.366f, 5.0006f };
					*uParam3 = 81.9741f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { -268.9472f, -2576.6f, 5.0006f };
					*uParam3 = 75.5813f;
					return 1;
					break;
			}
			break;
		
		case 40:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 669.7007f, -2667.473f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 669.231f, -2665.484f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 669.0834f, -2669.401f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 668.0314f, -2663.945f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 667.9921f, -2671.486f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 666.2173f, -2670.253f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 666.6612f, -2667.444f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 665.793f, -2664.566f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 661.1834f, -2676.746f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 666.8834f, -2661.508f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 668.1364f, -2674.156f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 665.6526f, -2659.557f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 663.9605f, -2667.421f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 662.535f, -2664.509f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 664.0994f, -2672.019f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 664.0226f, -2661.625f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { 664.3822f, -2675.418f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { 662.1806f, -2658.619f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { 660.0225f, -2667.873f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { 660.0655f, -2660.887f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { 661.6735f, -2670.785f, 5.0812f };
					*uParam3 = 91.08f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { 656.705f, -2676.673f, 5.0812f };
					*uParam3 = 100.8788f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { 656.0792f, -2673.96f, 5.0812f };
					*uParam3 = 99.2975f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { 655.5352f, -2670.899f, 5.0812f };
					*uParam3 = 99.1658f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { 653.8568f, -2676.434f, 5.0812f };
					*uParam3 = 97.2009f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { 653.2253f, -2672.987f, 5.0812f };
					*uParam3 = 97.3717f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { 652.6971f, -2669.823f, 5.0813f };
					*uParam3 = 97.5774f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { 654.711f, -2667.657f, 5.0812f };
					*uParam3 = 95.4195f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { 650.9651f, -2662.287f, 5.0812f };
					*uParam3 = 83.2365f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { 649.9758f, -2659.71f, 5.0812f };
					*uParam3 = 86.645f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { 648.4595f, -2662.943f, 5.0812f };
					*uParam3 = 83.3265f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { 647.6133f, -2660.099f, 5.0812f };
					*uParam3 = 83.2693f;
					return 1;
					break;
			}
			break;
		
		case 41:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -334.7377f, -2778.969f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -332.9008f, -2777.119f, 4.1404f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -332.8945f, -2780.276f, 4.1404f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -335.8614f, -2781f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -332.6457f, -2783.388f, 4.1419f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -332.4783f, -2773.841f, 4.1427f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -336.0079f, -2776.739f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -337.6867f, -2778.881f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -334.9099f, -2773.802f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -335.4647f, -2783.445f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -337.251f, -2774.992f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -337.6528f, -2782.365f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -334.2122f, -2771.273f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -335.373f, -2786.233f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -339.5327f, -2779.679f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -340.4634f, -2776.157f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 16:
					*uParam2 = { -349.4742f, -2775.465f, 4.2003f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 17:
					*uParam2 = { -338.7712f, -2771.949f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 18:
					*uParam2 = { -348.5268f, -2773.766f, 4.2003f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 19:
					*uParam2 = { -338.1402f, -2768.364f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 20:
					*uParam2 = { -338.4236f, -2786.433f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 21:
					*uParam2 = { -335.0887f, -2768.659f, 4.0002f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 22:
					*uParam2 = { -347.0583f, -2771.73f, 4.2003f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 23:
					*uParam2 = { -332.9932f, -2787.717f, 4.1432f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 24:
					*uParam2 = { -342.6335f, -2762.514f, 4.6528f };
					*uParam3 = 49.6019f;
					return 1;
					break;
				
				case 25:
					*uParam2 = { -343.9058f, -2764.623f, 4.5421f };
					*uParam3 = 51.5582f;
					return 1;
					break;
				
				case 26:
					*uParam2 = { -346.0114f, -2766.939f, 4.5172f };
					*uParam3 = 47.8237f;
					return 1;
					break;
				
				case 27:
					*uParam2 = { -347.4135f, -2765.141f, 4.9457f };
					*uParam3 = 44.168f;
					return 1;
					break;
				
				case 28:
					*uParam2 = { -345.9332f, -2762.928f, 5.0394f };
					*uParam3 = 44.4418f;
					return 1;
					break;
				
				case 29:
					*uParam2 = { -344.9213f, -2760.781f, 5.037f };
					*uParam3 = 44.0803f;
					return 1;
					break;
				
				case 30:
					*uParam2 = { -349.189f, -2763.793f, 5.0415f };
					*uParam3 = 43.7607f;
					return 1;
					break;
				
				case 31:
					*uParam2 = { -347.8954f, -2761.332f, 5.0404f };
					*uParam3 = 43.9496f;
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_874(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 22:
		case 27:
		case 32:
		case 37:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -11.5018f, -3.771f, 1.1068f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -11.1996f, -4.8818f, 1.1068f };
					*uParam3 = 0f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -11.9667f, 0.9038f, 0.1068f };
					*uParam3 = 271.44f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -8.3604f, 0.5366f, -1.4932f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -6.5717f, 0.5698f, -1.4932f };
					*uParam3 = 270.36f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -6.5812f, -1.554f, -1.4932f };
					*uParam3 = 266.04f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -4.9359f, 0.5994f, -1.4932f };
					*uParam3 = 267.84f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -5.4576f, -2.2556f, -1.4932f };
					*uParam3 = 267.12f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -2.1296f, -3.4199f, -1.4932f };
					*uParam3 = 271.44f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -3.3931f, 0.6641f, -1.4932f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -1.6493f, 0.6008f, -1.4932f };
					*uParam3 = 271.08f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -0.5912f, -3.447f, -1.4932f };
					*uParam3 = 269.28f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -0.137f, 0.7095f, -1.4932f };
					*uParam3 = 268.92f;
					return 1;
					break;
			}
			break;
		
		case 23:
		case 28:
		case 33:
		case 38:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 15.873f, 13.3074f, -1.6635f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 15.7094f, 14.8108f, -1.6626f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 15.2938f, 11.9883f, -1.6642f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 14.5515f, 13.0491f, -1.6634f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 14.457f, 14.3352f, -1.6628f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 13.9866f, 11.9121f, -1.6643f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 12.744f, 13.7371f, -1.6637f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 12.646f, 12.427f, -1.6638f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 12.5011f, 11.0618f, -1.6648f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 11.52f, 14.1372f, -1.6645f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 11.495f, 12.7761f, -1.6645f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 11.2906f, 11.1682f, -1.6647f };
					*uParam3 = 180f;
					return 1;
					break;
			}
			break;
		
		case 24:
		case 29:
		case 34:
		case 39:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -4.8052f, 8.3174f, -1.4935f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -5.0101f, 7.2205f, -1.4935f };
					*uParam3 = 178.2258f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -4.9868f, 5.7422f, -1.4935f };
					*uParam3 = 181.7104f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -5.0342f, 3.6167f, -1.4935f };
					*uParam3 = 255.7617f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -4.1292f, 3.5083f, -1.4935f };
					*uParam3 = 260.0012f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -5.9457f, 2.7358f, -1.4935f };
					*uParam3 = 183.243f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -5.99f, 0.7227f, -1.4935f };
					*uParam3 = 226.1079f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -5.9446f, -1.4463f, -1.4935f };
					*uParam3 = 271.2191f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -4.1721f, -1.4917f, -1.4935f };
					*uParam3 = 268.175f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -1.9153f, -1.5291f, -1.4935f };
					*uParam3 = 268.2025f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -1.8743f, 3.0684f, -1.4935f };
					*uParam3 = 264.3273f;
					return 1;
					break;
			}
			break;
		
		case 25:
		case 30:
		case 35:
		case 40:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 13.2156f, -1.9326f, -2.1607f };
					*uParam3 = 357.8796f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 12.1537f, -0.2056f, -2.1607f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 13.3557f, 1.7976f, -2.8962f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 12.0094f, 1.9473f, -2.8996f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 10.7483f, -0.1853f, -2.1607f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 10.3102f, 1.7913f, -2.9005f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 9.3082f, -0.1772f, -2.1607f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 5.1066f, 1.8057f, -2.9004f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 8.5474f, 2.2549f, -2.8977f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 7.9846f, -0.1001f, -2.1607f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 6.8645f, 0.0144f, -2.1607f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 5.4856f, -0.0378f, -2.1607f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 3.1495f, 1.7048f, -2.901f };
					*uParam3 = 90f;
					return 1;
					break;
			}
			break;
		
		case 26:
		case 31:
		case 36:
		case 41:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 8.1375f, 0.041f, -1.808f };
					*uParam3 = 90.5126f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 7.4933f, -1.6084f, -1.808f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 7.8275f, 1.4553f, -1.808f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 6.1877f, -1.5391f, -1.808f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 6.6771f, 1.4951f, -1.808f };
					*uParam3 = 87.6196f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 4.8105f, 1.9807f, -1.808f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 3.0282f, -1.584f, -1.808f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 2.5529f, 1.9456f, -1.808f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 0.3383f, 2.2065f, -1.808f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 0.8707f, -2.1997f, -1.808f };
					*uParam3 = 90f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -1.0348f, 2.189f, -1.808f };
					*uParam3 = 90f;
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_875(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_308.f_3 = 0;
	if (func_246(unk_0x0C1D3C552325765B(), 1))
	{
		if (func_321(unk_0x0C1D3C552325765B()))
		{
			unk_0x88B0F0DC270164B7(&(Global_1751948.f_2), 0);
			unk_0x88B0F0DC270164B7(&(Global_1751948.f_2), 10);
		}
		else
		{
			unk_0x88B0F0DC270164B7(&(Global_1751948.f_2), 1);
			switch (func_880(unk_0x0C1D3C552325765B()))
			{
				case -1:
					unk_0x88B0F0DC270164B7(&(Global_1751948.f_2), 14);
					break;
				
				case 0:
					unk_0x88B0F0DC270164B7(&(Global_1751948.f_2), 11);
					break;
				
				case 1:
					unk_0x88B0F0DC270164B7(&(Global_1751948.f_2), 12);
					break;
				
				case 2:
					unk_0x88B0F0DC270164B7(&(Global_1751948.f_2), 13);
					break;
				
				case 3:
					unk_0x88B0F0DC270164B7(&(Global_1751948.f_2), 15);
					break;
				}
		}
		iVar0 = func_56(unk_0x0C1D3C552325765B());
		if (iVar0 != func_55() && iVar0 != unk_0x0C1D3C552325765B())
		{
			unk_0x88B0F0DC270164B7(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_308.f_3), iVar0);
		}
		iVar2 = 0;
		while (iVar2 < 32)
		{
			iVar1 = unk_0x81C85E54237F8A2E(iVar2);
			if ((iVar1 != func_55() && iVar1 != unk_0x0C1D3C552325765B()) && iVar1 != iVar0)
			{
				if (func_1122(iVar1, 1, 1))
				{
					if (func_876(iVar1, iVar0, 1))
					{
						unk_0x88B0F0DC270164B7(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_308.f_3), iVar1);
					}
				}
			}
			iVar2++;
		}
	}
	else if (func_587(unk_0x0C1D3C552325765B(), func_860(iParam0)))
	{
		unk_0x88B0F0DC270164B7(&(Global_1751948.f_2), 2);
	}
}

bool func_876(int iParam0, int iParam1, bool bParam2)
{
	return func_877(iParam0, iParam1, bParam2, 1);
}

int func_877(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (iParam1 != func_55() && iParam0 != func_55())
	{
		if (!bParam2)
		{
			if (func_879(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_1614576[iParam0 /*324*/].f_10 != func_55())
		{
			if (iParam1 == Global_1614576[iParam0 /*324*/].f_10)
			{
				return func_878(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_878(int iParam0, int iParam1)
{
	if (func_213(iParam0))
	{
		return Global_1614576[iParam0 /*324*/].f_10.f_234 == iParam1;
	}
	return 0;
}

int func_879(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_55())
	{
		if (iParam0 != func_55())
		{
			if (Global_1614576[iParam0 /*324*/].f_10 != func_55())
			{
				if (Global_1614576[iParam0 /*324*/].f_10 == iParam0)
				{
					if (Global_1614576[iParam0 /*324*/].f_10.f_234 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

int func_880(int iParam0)
{
	if (func_257(iParam0, 1))
	{
		return Global_1614576[iParam0 /*324*/].f_10.f_235;
	}
	return -1;
}

char* func_881(var uParam0, char* sParam1, var uParam2)
{
	if (Global_1751948.f_516)
	{
		Global_1751948.f_516 = 0;
		return "MP_FACTORY_KICKe";
	}
	if (Global_1751948.f_2 == 0)
	{
		return "MP_FACTORY_KICKc";
	}
	if (unk_0x08BA6DD398CA197C(Global_1751948.f_2, 1))
	{
		if (!func_246(unk_0x0C1D3C552325765B(), 0))
		{
			return "MP_FACTORY_KICKb";
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_1751948.f_2, 0))
	{
		if (func_246(unk_0x0C1D3C552325765B(), 0) || (func_257(unk_0x0C1D3C552325765B(), 1) && !func_246(unk_0x0C1D3C552325765B(), 1)))
		{
			return "MP_FACTORY_KICKa";
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_1751948.f_2, 0) || unk_0x08BA6DD398CA197C(Global_1751948.f_2, 2))
	{
		if (func_246(unk_0x0C1D3C552325765B(), 0))
		{
			StringCopy(sParam1, func_882(unk_0x0C1D3C552325765B(), 0), 64);
			return "MP_FACTORY_KICKd";
		}
	}
	return "";
}

char* func_882(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_246(iParam0, 1))
		{
			if (func_321(iParam0))
			{
				return "PI_BIK_PR_T";
			}
			else
			{
				switch (func_880(iParam0))
				{
					case 0:
						return "PI_BIK_V_T";
					
					case 1:
						return "PI_BIK_R_T";
					
					case 2:
						return "PI_BIK_S_T";
					
					case 3:
						return "PI_BIK_E_T";
					
					default:
				}
				return "PI_BIK_P_T";
			}
		}
	}
	else if (func_246(iParam0, 1))
	{
		if (func_321(iParam0))
		{
			return "PI_BIK_PR";
		}
		else
		{
			switch (func_880(iParam0))
			{
				case 0:
					return "PI_BIK_V";
				
				case 1:
					return "PI_BIK_R";
				
				case 2:
					return "PI_BIK_S";
				
				case 3:
					return "PI_BIK_E";
				
				default:
			}
			return "PI_BIK_P";
		}
	}
	return "";
}

bool func_883(int iParam0, var uParam1)
{
	if (Global_1751948.f_2 == 0)
	{
		return 1;
	}
	if (func_257(unk_0x0C1D3C552325765B(), 1) && !func_246(unk_0x0C1D3C552325765B(), 1))
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Global_1751948.f_2, 1))
	{
		if (!func_246(unk_0x0C1D3C552325765B(), 0))
		{
			return 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_1751948.f_2, 0) || unk_0x08BA6DD398CA197C(Global_1751948.f_2, 2))
	{
		if (func_246(unk_0x0C1D3C552325765B(), 0))
		{
			return 1;
		}
	}
	return !func_900(unk_0x0C1D3C552325765B(), iParam0);
}

void func_884(int iParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (func_321(unk_0x0C1D3C552325765B()) && func_895(unk_0x0C1D3C552325765B(), iParam0))
	{
		func_922(iParam0, &Var0);
		Var0.f_2 = 0f;
		iVar8 = 0;
		while (iVar8 < func_891())
		{
			iVar6 = func_890(unk_0x0C1D3C552325765B(), iVar8);
			if ((iVar6 != func_55() && iVar6 != unk_0x0C1D3C552325765B()) && func_1122(iVar6, 1, 1))
			{
				Var3 = { func_51(iVar6) };
				Var3.f_2 = 0f;
				if (unk_0x2A488C176D52CCA5(Var3, Var0) <= IntToFloat(func_889(iParam0)))
				{
					iVar7++;
				}
			}
			iVar8++;
		}
		if (iVar7 == 0)
		{
			func_887(uParam1, 1, 0);
		}
		else
		{
			func_887(uParam1, 1, 1);
		}
		if (func_886(1, uParam1))
		{
			if (iVar7 > 0)
			{
				func_885(unk_0x0C1D3C552325765B(), func_860(iParam0));
			}
			Global_1751948.f_1 = -1;
			Global_1751948.f_610 = 1;
			Global_1751948.f_611 = iParam0;
			Global_1751948.f_612 = 0;
			Global_1751948.f_617 = 1;
		}
	}
	else
	{
		func_887(uParam1, 1, 0);
	}
}

void func_885(int iParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;
	
	Var0.f_0 = 512;
	Var0.f_3 = iParam0;
	Var0.f_2 = iParam1;
	iVar4 = func_77(1, 1);
	if (!iVar4 == 0)
	{
		unk_0x8E36889D76C8D4FA(1, &Var0, 4, iVar4);
	}
}

int func_886(int iParam0, var uParam1)
{
	if (unk_0x08BA6DD398CA197C(uParam1->f_2, 1))
	{
		return uParam1->f_4 == iParam0;
	}
	return 0;
}

void func_887(var uParam0, int iParam1, bool bParam2)
{
	if (func_888(uParam0, iParam1))
	{
		if (bParam2)
		{
			if (!unk_0x08BA6DD398CA197C(uParam0->f_3, iParam1))
			{
				unk_0x88B0F0DC270164B7(&(uParam0->f_3), iParam1);
				uParam0->f_1 = 0;
				unk_0x09C86C0C5CA26B1E(&(uParam0->f_2), 0);
			}
		}
		else if (unk_0x08BA6DD398CA197C(uParam0->f_3, iParam1))
		{
			unk_0x09C86C0C5CA26B1E(&(uParam0->f_3), iParam1);
			uParam0->f_1 = 0;
			unk_0x09C86C0C5CA26B1E(&(uParam0->f_2), 0);
		}
	}
}

bool func_888(var uParam0, int iParam1)
{
	return (iParam1 > -1 && iParam1 < uParam0->f_5);
}

int func_889(int iParam0)
{
	return 20;
}

int func_890(int iParam0, int iParam1)
{
	if (func_213(iParam0))
	{
		if (iParam1 > -1 && iParam1 < 7)
		{
			return Global_1614576[iParam0 /*324*/].f_10.f_10[iParam1];
		}
	}
	return func_55();
}

int func_891()
{
	if (func_524() == func_55())
	{
		return 0;
	}
	return func_892(func_524());
}

var func_892(int iParam0)
{
	return Global_1614576[iParam0 /*324*/].f_10.f_18;
}

void func_893(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 22:
		case 27:
		case 32:
		case 37:
			StringCopy(sParam1, "BIKER_WH_1", 64);
			break;
		
		case 23:
		case 28:
		case 33:
		case 38:
			StringCopy(sParam1, "BIKER_WH_2", 64);
			break;
		
		case 24:
		case 29:
		case 34:
		case 39:
			StringCopy(sParam1, "BIKER_WH_3", 64);
			break;
		
		case 25:
		case 30:
		case 35:
		case 40:
			StringCopy(sParam1, "BIKER_WH_4", 64);
			break;
		
		case 26:
		case 31:
		case 36:
		case 41:
			StringCopy(sParam1, "BIKER_WH_5", 64);
			break;
		
		default:
			StringCopy(sParam1, "MP_WHOUSE_EXIT", 64);
			break;
	}
	(*uParam2)[0] = "BWH_ENTRM_ALONE";
	(*uParam3)[0] = 3;
	(*uParam2)[1] = "BWH_ENTRM_GANG";
	(*uParam3)[1] = 3;
	*uParam4 = 2;
}

int func_894(int iParam0, int iParam1)
{
	if (func_246(iParam0, 0) && func_587(func_56(iParam0), func_860(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_895(int iParam0, int iParam1)
{
	if (func_321(iParam0) && func_587(iParam0, func_860(iParam1)))
	{
		if (func_193(iParam0, 0))
		{
			if (func_896(unk_0x0C1D3C552325765B()))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

bool func_896(int iParam0)
{
	return func_475(func_192(iParam0));
}

char* func_897(int iParam0, char* sParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (func_587(unk_0x0C1D3C552325765B(), func_860(iParam0)))
	{
		if (func_257(unk_0x0C1D3C552325765B(), 1))
		{
			if (!func_246(unk_0x0C1D3C552325765B(), 1))
			{
				if (func_213(unk_0x0C1D3C552325765B()))
				{
					if (func_899(unk_0x0C1D3C552325765B()))
					{
						return "BWH_MC_BLOCK_EXEb";
					}
					else
					{
						return "BWH_MC_BLOCK_EXEa";
					}
				}
				else if (func_899(func_56(unk_0x0C1D3C552325765B())))
				{
					return "BWH_MC_BLOCK_EXEd";
				}
				else
				{
					return "BWH_MC_BLOCK_EXEc";
				}
			}
			else if (!func_321(unk_0x0C1D3C552325765B()) && !func_587(func_56(unk_0x0C1D3C552325765B()), func_860(iParam0)))
			{
				StringCopy(sParam1, func_882(unk_0x0C1D3C552325765B(), 0), 64);
				return "BWH_MC_BLOCK_BKRa";
			}
		}
	}
	if (func_246(unk_0x0C1D3C552325765B(), 1) && func_193(unk_0x0C1D3C552325765B(), 0))
	{
		if (func_896(unk_0x0C1D3C552325765B()))
		{
			if (func_192(unk_0x0C1D3C552325765B()) == 192)
			{
				iVar0 = func_56(unk_0x0C1D3C552325765B());
				if (iVar0 != func_55())
				{
					Var1 = { Global_1614576[iVar0 /*324*/].f_10.f_177 };
					if (func_860(iParam0) != Var1.f_0)
					{
						if (func_898(iVar0, Var1.f_0))
						{
							return "BWH_MC_BLOCK_BKRc";
						}
						else
						{
							return "BWH_MC_BLOCK_BKRb";
						}
					}
				}
			}
		}
	}
	return "";
}

int func_898(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_587(iParam0, iParam1))
	{
		iVar0 = func_586(iParam0, iParam1);
		if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_4 > 0 && Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

bool func_899(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_256.f_9, 26);
}

int func_900(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_860(iParam1);
	if (iParam0 != func_55())
	{
		if (func_246(iParam0, 1))
		{
			return func_587(func_56(iParam0), iVar0);
		}
		else if (func_587(iParam0, iVar0) && !func_257(unk_0x0C1D3C552325765B(), 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_901(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	bool bVar4;
	
	if (Global_1572925 && !func_896(unk_0x0C1D3C552325765B()))
	{
		return 1;
	}
	if (unk_0x1504F110F2576375())
	{
		return 1;
	}
	bVar0 = false;
	if (func_257(unk_0x0C1D3C552325765B(), 1) && func_193(unk_0x0C1D3C552325765B(), 0))
	{
		if (func_896(unk_0x0C1D3C552325765B()))
		{
			if (func_192(unk_0x0C1D3C552325765B()) == 192)
			{
				iVar1 = func_56(unk_0x0C1D3C552325765B());
				if (iVar1 != -1)
				{
					Var2 = { Global_1614576[iVar1 /*324*/].f_10.f_177 };
					if (func_860(iParam0) != Var2.f_0)
					{
						return 1;
					}
					else
					{
						bVar0 = true;
					}
				}
			}
			else
			{
				return 1;
			}
		}
	}
	if (!func_908(1) && !bVar0)
	{
		return 1;
	}
	bVar4 = false;
	if (func_902(bVar4, 4))
	{
		return 1;
	}
	return 0;
}

int func_902(bool bParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	bVar1 = false;
	if (iParam1 == 1)
	{
		bVar1 = true;
	}
	else if (iParam1 == 2)
	{
		bVar0 = true;
	}
	if (Global_1572926 != 0)
	{
		if (!bVar0 && iParam1 != 4)
		{
			if (bParam0)
			{
			}
			return 1;
		}
		else if (bVar0)
		{
			iVar2 = Global_1572926;
			unk_0x09C86C0C5CA26B1E(&iVar2, 4);
			if (iVar2 > 0)
			{
				if (bParam0)
				{
				}
				return 1;
			}
		}
		else if (iParam1 == 4)
		{
			iVar3 = Global_1572926;
			unk_0x09C86C0C5CA26B1E(&iVar3, 5);
			if (iVar3 > 0)
			{
				if (bParam0)
				{
				}
				return 1;
			}
		}
	}
	if (((func_907(unk_0x0C1D3C552325765B()) && !func_905()) && !(iParam1 == 4 && func_896(unk_0x0C1D3C552325765B()))) && !(iParam1 == 3 && func_903()))
	{
		return 1;
	}
	if (func_211(unk_0x0C1D3C552325765B(), 21))
	{
		return 1;
	}
	if (bVar1)
	{
		if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 9)
		{
			if (bParam0)
			{
			}
			return 1;
		}
		if (Global_262145.f_13235)
		{
			if (bParam0)
			{
			}
			return 1;
		}
		if (func_311(unk_0x0C1D3C552325765B()) || func_310(unk_0x0C1D3C552325765B()))
		{
			if (bParam0)
			{
			}
			return 1;
		}
	}
	return 0;
}

int func_903()
{
	return func_904(unk_0x0C1D3C552325765B());
}

int func_904(int iParam0)
{
	if (func_193(iParam0, 0))
	{
		if (func_476(func_192(iParam0)))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

bool func_905()
{
	return func_906(unk_0x0C1D3C552325765B());
}

int func_906(int iParam0)
{
	if ((func_192(iParam0) == 167 || func_192(iParam0) == 168) || func_192(iParam0) == 190)
	{
		return 1;
	}
	return 0;
}

int func_907(int iParam0)
{
	if (func_217(iParam0))
	{
		return 1;
	}
	if (func_214(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_908(bool bParam0)
{
	if (!func_913(60, 0, 0) && !bParam0)
	{
		return 0;
	}
	if (func_314(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_912(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_309(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	if (func_349())
	{
		return 0;
	}
	if (func_323())
	{
		return 0;
	}
	if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 1 || Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 3)
	{
		return 0;
	}
	if (Global_1588660[unk_0x0C1D3C552325765B() /*532*/] == 32)
	{
		return 0;
	}
	if (func_911(unk_0x0C1D3C552325765B(), 124))
	{
		return 1;
	}
	if (func_90(unk_0x0C1D3C552325765B(), 1))
	{
		return 0;
	}
	if (func_910())
	{
		return 0;
	}
	if (func_482())
	{
		return 0;
	}
	if (Global_1573882)
	{
		return 0;
	}
	if (func_909())
	{
		return 0;
	}
	if (func_93(unk_0x0C1D3C552325765B()))
	{
		return 0;
	}
	return 1;
}

bool func_909()
{
	return Global_1315206;
}

int func_910()
{
	int iVar0;
	
	iVar0 = Global_2432628;
	if (unk_0x08BA6DD398CA197C(Global_1613455[iVar0 /*35*/].f_13, 0) && Global_1613455[iVar0 /*35*/].f_22 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_911(int iParam0, int iParam1)
{
	return iParam1 == func_143(iParam0);
}

bool func_912(int iParam0)
{
	return Global_2421327[iParam0 /*353*/].f_116 == 6;
}

bool func_913(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6500 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_917(unk_0x0C1D3C552325765B(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4874 == 1)
		{
			return 1;
		}
	}
	if (func_916() || func_915())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_914())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return unk_0x08BA6DD398CA197C(Global_1573912[iVar1], iVar0);
}

int func_914()
{
	int iVar0;
	
	if (Global_1312442)
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_1638, 23))
	{
		return 1;
	}
	if (func_916())
	{
		return 1;
	}
	if (func_915())
	{
		return 1;
	}
	iVar0 = Global_1352331[func_367(-1)];
	if (unk_0x08BA6DD398CA197C(iVar0, 7))
	{
		unk_0x88B0F0DC270164B7(&(Global_2482149.f_1638), 23);
		return 1;
	}
	return 0;
}

bool func_915()
{
	return Global_1315217;
}

bool func_916()
{
	return Global_1315219;
}

bool func_917(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_920())
	{
		return 0;
	}
	if (func_919())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_918(iParam1);
	iVar1 = uVar0;
	return unk_0x08BA6DD398CA197C(Global_1588660[iParam0 /*532*/].f_424, iVar1);
}

int func_918(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		default:
	}
	return 1;
}

bool func_919()
{
	return unk_0x08BA6DD398CA197C(Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_141, 3);
}

int func_920()
{
	if (Global_1312442)
	{
		return 1;
	}
	if (func_916())
	{
		return 1;
	}
	if (func_915())
	{
		return 1;
	}
	return func_366(120, -1);
}

void func_921(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	unk_0x29F530EB20218AC0(9, uParam1, uParam2, uParam3, uParam4);
}

void func_922(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 22:
			*uParam1 = { 52.903f, 6338.585f, 30.35f };
			break;
		
		case 23:
			*uParam1 = { 416.7524f, 6520.753f, 26.7121f };
			break;
		
		case 24:
			*uParam1 = { 51.7653f, 6486.163f, 30.428f };
			break;
		
		case 25:
			*uParam1 = { -413.6606f, 6171.938f, 30.4782f };
			break;
		
		case 26:
			*uParam1 = { -163.6828f, 6334.845f, 30.5808f };
			break;
		
		case 27:
			*uParam1 = { 1454.671f, -1651.986f, 66f };
			break;
		
		case 28:
			*uParam1 = { 102.14f, 175.26f, 103.56f };
			break;
		
		case 29:
			*uParam1 = { -1462.622f, -381.826f, 37.802f };
			break;
		
		case 30:
			*uParam1 = { -1171.005f, -1380.922f, 3.937f };
			break;
		
		case 31:
			*uParam1 = { 299.071f, -759.072f, 28.333f };
			break;
		
		case 32:
			*uParam1 = { 201.8909f, 2461.782f, 54.6885f };
			break;
		
		case 33:
			*uParam1 = { 2848.369f, 4450.147f, 47.5139f };
			break;
		
		case 34:
			*uParam1 = { 387.5332f, 3585.042f, 32.2922f };
			break;
		
		case 35:
			*uParam1 = { 636.6344f, 2785.126f, 41.0111f };
			break;
		
		case 36:
			*uParam1 = { 1657.066f, 4851.732f, 40.9882f };
			break;
		
		case 37:
			*uParam1 = { 1181.44f, -3113.82f, 5.03f };
			break;
		
		case 38:
			*uParam1 = { 136.973f, -2472.795f, 4.98f };
			break;
		
		case 39:
			*uParam1 = { -253.31f, -2591.15f, 4.97f };
			break;
		
		case 40:
			*uParam1 = { 671.451f, -2667.502f, 5.0812f };
			break;
		
		case 41:
			*uParam1 = { -331.52f, -2778.97f, 4.12f };
			break;
	}
}

void func_923(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 22:
		case 27:
		case 32:
		case 37:
			*uParam1 = { 992.9876f, -3203.402f, -40.4781f };
			uParam1->f_3 = { 1019.888f, -3192.728f, -32.2875f };
			break;
		
		case 23:
		case 28:
		case 33:
		case 38:
			*uParam1 = { 1029.689f, -3209.573f, -40.485f };
			uParam1->f_3 = { 1071.916f, -3179.999f, -33.487f };
			break;
		
		case 24:
		case 29:
		case 34:
		case 39:
			*uParam1 = { 1084.857f, -3200.893f, -40.493f };
			uParam1->f_3 = { 1104.715f, -3182.607f, -35.253f };
			break;
		
		case 25:
		case 30:
		case 35:
		case 40:
			*uParam1 = { 1114.766f, -3204.229f, -41.563f };
			uParam1->f_3 = { 1145.767f, -3191.791f, -32.698f };
			break;
		
		case 26:
		case 31:
		case 36:
		case 41:
			*uParam1 = { 1155f, -3200.515f, -40.05f };
			uParam1->f_3 = { 1176.79f, -3189.532f, -34.785f };
			break;
	}
}

char* func_924(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 27:
		case 32:
		case 37:
			return "BWH_METH";
			break;
		
		case 23:
		case 28:
		case 33:
		case 38:
			return "BWH_WEED";
			break;
		
		case 24:
		case 29:
		case 34:
		case 39:
			return "BWH_CRACK";
			break;
		
		case 25:
		case 30:
		case 35:
		case 40:
			return "BWH_MONEY";
			break;
		
		case 26:
		case 31:
		case 36:
		case 41:
			return "BWH_DOCUMENTS";
			break;
	}
	return "MISSING";
}

void func_925(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 22:
			func_930(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 50.8801f, 6336.875f, 32.139f };
			uParam1->f_22.f_9 = { -0.7937f, 0f, -63.3392f };
			uParam1->f_22.f_12 = 40.1256f;
			uParam1->f_22.f_14 = { 53.457f, 6337.362f, 30.641f };
			uParam1->f_22.f_17 = { 0f, 0f, -150.84f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 59.6936f, 6359.301f, 36.3307f };
			uParam1->f_22.f_43 = { -1.8386f, 0f, 163.8716f };
			uParam1->f_22.f_46 = 42.6393f;
			break;
		
		case 23:
			func_929(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 416.6734f, 6524.713f, 28.1782f };
			uParam1->f_22.f_9 = { 0.8228f, 0f, 172.1154f };
			uParam1->f_22.f_12 = 30.8437f;
			uParam1->f_22.f_14 = { 415.99f, 6520.941f, 26.755f };
			uParam1->f_22.f_17 = { 0f, 0f, 87.48f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 435.9453f, 6546.208f, 36.2606f };
			uParam1->f_22.f_43 = { -7.4123f, 0f, 132.5485f };
			uParam1->f_22.f_46 = 45.7557f;
			break;
		
		case 24:
			func_928(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 49.1174f, 6487.856f, 32.0173f };
			uParam1->f_22.f_9 = { -2.8312f, 0f, -130.0002f };
			uParam1->f_22.f_12 = 33.4542f;
			uParam1->f_22.f_14 = { 51.26f, 6485.603f, 30.428f };
			uParam1->f_22.f_17 = { 0f, 0f, 136.44f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 67.5147f, 6496.154f, 37.7476f };
			uParam1->f_22.f_43 = { -6.3943f, 0f, 136.1353f };
			uParam1->f_22.f_46 = 44.9118f;
			break;
		
		case 25:
			func_927(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -415.9254f, 6173.274f, 32.269f };
			uParam1->f_22.f_9 = { -3.4101f, 0f, -137.4814f };
			uParam1->f_22.f_12 = 32.1246f;
			uParam1->f_22.f_14 = { -414.329f, 6171.476f, 30.681f };
			uParam1->f_22.f_17 = { 0f, 0f, 136.44f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -415.8688f, 6186.694f, 36.3816f };
			uParam1->f_22.f_43 = { -7.4606f, 0f, -177.6217f };
			uParam1->f_22.f_46 = 46.3689f;
			break;
		
		case 26:
			func_926(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -165.6212f, 6335.806f, 32.2612f };
			uParam1->f_22.f_9 = { -2.5946f, 0f, -137.973f };
			uParam1->f_22.f_12 = 39.2599f;
			uParam1->f_22.f_14 = { -164.324f, 6334.336f, 30.63f };
			uParam1->f_22.f_17 = { 0f, 0f, 136.44f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -164.562f, 6348.686f, 35.2535f };
			uParam1->f_22.f_43 = { -6.5189f, 0f, 178.7005f };
			uParam1->f_22.f_46 = 45.7449f;
			break;
		
		case 27:
			func_930(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_r";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 1457.592f, -1650.822f, 67.654f };
			uParam1->f_22.f_9 = { -3.3824f, 0f, 113.9872f };
			uParam1->f_22.f_12 = 37.8183f;
			uParam1->f_22.f_14 = { 1455.009f, -1652.797f, 66.112f };
			uParam1->f_22.f_17 = { 0f, 0f, 22.32f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 1459.165f, -1638.333f, 70.7996f };
			uParam1->f_22.f_43 = { -6.9346f, 0f, 158.3002f };
			uParam1->f_22.f_46 = 47.2229f;
			break;
		
		case 28:
			func_929(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 105.3636f, 174.3149f, 105.0667f };
			uParam1->f_22.f_9 = { -1.6998f, 0f, 68.1162f };
			uParam1->f_22.f_12 = 29.473f;
			uParam1->f_22.f_14 = { 102.675f, 176.192f, 103.716f };
			uParam1->f_22.f_17 = { 0f, 0f, -18.72f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 113.2985f, 159.4081f, 111.833f };
			uParam1->f_22.f_43 = { -2.2889f, 0.0155f, 12.6091f };
			uParam1->f_22.f_46 = 59.9445f;
			break;
		
		case 29:
			func_928(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -1459.941f, -378.7752f, 39.5714f };
			uParam1->f_22.f_9 = { -2.458f, -0.018f, 135.8305f };
			uParam1->f_22.f_12 = 16.3865f;
			uParam1->f_22.f_14 = { -1463.153f, -381.244f, 37.881f };
			uParam1->f_22.f_17 = { 0f, 0f, 45.36f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -1450.232f, -383.0981f, 43.335f };
			uParam1->f_22.f_43 = { -8.0395f, 0f, 86.8152f };
			uParam1->f_22.f_46 = 50f;
			uParam1->f_22.f_23 = 0.15f;
			break;
		
		case 30:
			func_927(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -1174.645f, -1383.43f, 5.4953f };
			uParam1->f_22.f_9 = { -4.6114f, 0f, -56.2161f };
			uParam1->f_22.f_12 = 27.2213f;
			uParam1->f_22.f_14 = { -1170.636f, -1381.263f, 3.971f };
			uParam1->f_22.f_17 = { 0f, 0f, -146.52f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -1192.8f, -1378.188f, 12.4331f };
			uParam1->f_22.f_43 = { -2.6181f, 0f, -91.6741f };
			uParam1->f_22.f_46 = 54.9572f;
			break;
		
		case 31:
			func_926(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 302.1353f, -754.5077f, 29.8027f };
			uParam1->f_22.f_9 = { -1.6792f, -0.0393f, 148.3184f };
			uParam1->f_22.f_12 = 16.2107f;
			uParam1->f_22.f_14 = { 298.479f, -759.137f, 28.393f };
			uParam1->f_22.f_17 = { 0f, 0f, 71.64f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 326.6581f, -788.2607f, 43.2081f };
			uParam1->f_22.f_43 = { 1.1232f, 0f, 45.8093f };
			uParam1->f_22.f_46 = 60.7032f;
			break;
		
		case 32:
			func_930(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 205.12f, 2463.722f, 56.3782f };
			uParam1->f_22.f_9 = { -0.1022f, 0f, 112.1192f };
			uParam1->f_22.f_12 = 35.4509f;
			uParam1->f_22.f_14 = { 201.659f, 2462.738f, 54.911f };
			uParam1->f_22.f_17 = { 0f, 0f, 21.24f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 219.5281f, 2451.271f, 61.5476f };
			uParam1->f_22.f_43 = { -3.9251f, 0f, 55.1454f };
			uParam1->f_22.f_46 = 54.4082f;
			break;
		
		case 33:
			func_929(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 2850.734f, 4444.569f, 49.1442f };
			uParam1->f_22.f_9 = { -2.0858f, 0.0143f, 18.4628f };
			uParam1->f_22.f_12 = 13.338f;
			uParam1->f_22.f_14 = { 2849.022f, 4450.232f, 47.513f };
			uParam1->f_22.f_17 = { 0f, 0f, -71.64f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 2841.437f, 4433.785f, 53.9355f };
			uParam1->f_22.f_43 = { -7.5539f, -0.0693f, -33.7803f };
			uParam1->f_22.f_46 = 54.4386f;
			break;
		
		case 34:
			func_928(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 377.3802f, 3587.126f, 33.718f };
			uParam1->f_22.f_9 = { -0.7974f, -0.0177f, -104.6024f };
			uParam1->f_22.f_12 = 7.7303f;
			uParam1->f_22.f_23 = 0.1f;
			uParam1->f_22.f_14 = { 387.316f, 3584.326f, 32.292f };
			uParam1->f_22.f_17 = { 0f, 0f, 168.12f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 376.6257f, 3595.871f, 38.3613f };
			uParam1->f_22.f_43 = { -9.8226f, 0f, -153.9853f };
			uParam1->f_22.f_46 = 57.3618f;
			break;
		
		case 35:
			func_927(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 643.5591f, 2786.015f, 42.6034f };
			uParam1->f_22.f_9 = { -2.6917f, 0.0192f, 89.5651f };
			uParam1->f_22.f_12 = 16.9015f;
			uParam1->f_22.f_14 = { 636.7f, 2786.34f, 41.007f };
			uParam1->f_22.f_17 = { 0f, 0f, 5.4f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 647.7792f, 2771.441f, 47.9368f };
			uParam1->f_22.f_43 = { -7.6509f, 0f, 30.7713f };
			uParam1->f_22.f_46 = 46.6686f;
			break;
		
		case 36:
			func_926(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_r";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 1658.32f, 4846.629f, 42.6674f };
			uParam1->f_22.f_9 = { -4.8756f, 0f, 15.9561f };
			uParam1->f_22.f_12 = 18.0966f;
			uParam1->f_22.f_14 = { 1656.189f, 4851.706f, 40.982f };
			uParam1->f_22.f_17 = { 0f, 0f, -80.64f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 1666.537f, 4863.845f, 45.2812f };
			uParam1->f_22.f_43 = { -1.6989f, 0.0463f, 137.917f };
			uParam1->f_22.f_46 = 54.403f;
			break;
		
		case 37:
			func_930(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 1181.679f, -3117.107f, 6.4817f };
			uParam1->f_22.f_9 = { -1.1632f, 0f, -0.0485f };
			uParam1->f_22.f_12 = 36.1378f;
			uParam1->f_22.f_14 = { 1182.073f, -3113.992f, 5.028f };
			uParam1->f_22.f_17 = { 0f, 0f, -89.28f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 1168.492f, -3096.343f, 13.8698f };
			uParam1->f_22.f_43 = { -9.51f, 0f, -138.0643f };
			uParam1->f_22.f_46 = 56.6217f;
			break;
		
		case 38:
			func_929(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 139.9231f, -2467.325f, 7.1163f };
			uParam1->f_22.f_9 = { -5.3337f, 0f, 143.5151f };
			uParam1->f_22.f_12 = 27.4251f;
			uParam1->f_22.f_14 = { 136.286f, -2472.12f, 5.1f };
			uParam1->f_22.f_17 = { 0f, 0f, 54.72f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 149.1082f, -2470.175f, 9.8266f };
			uParam1->f_22.f_43 = { -6.4047f, -0.0392f, 93.1629f };
			uParam1->f_22.f_46 = 55.1036f;
			break;
		
		case 39:
			func_928(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_r";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -252.4981f, -2587.985f, 6.6929f };
			uParam1->f_22.f_9 = { -5.436f, 0f, 173.3827f };
			uParam1->f_22.f_12 = 36.7304f;
			uParam1->f_22.f_14 = { -252.278f, -2591.029f, 5.001f };
			uParam1->f_22.f_17 = { 0f, 0f, 93.6f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -268.2111f, -2573.399f, 10.5836f };
			uParam1->f_22.f_43 = { -5.2092f, 0f, -121.5472f };
			uParam1->f_22.f_46 = 56.0837f;
			break;
		
		case 40:
			func_927(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 671.8454f, -2670f, 6.6823f };
			uParam1->f_22.f_9 = { -0.1395f, 0f, -1.6591f };
			uParam1->f_22.f_12 = 39.835f;
			uParam1->f_22.f_14 = { 672.404f, -2667.674f, 5.293f };
			uParam1->f_22.f_17 = { 0f, 0f, -86.4f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 655.1423f, -2667.567f, 10.4512f };
			uParam1->f_22.f_43 = { -3.5482f, 0f, -89.9837f };
			uParam1->f_22.f_46 = 56.0817f;
			break;
		
		case 41:
			func_926(uParam1);
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -331.7401f, -2781f, 8.1884f };
			uParam1->f_22.f_9 = { -53.2973f, 0f, -18.3202f };
			uParam1->f_22.f_12 = 43.6043f;
			uParam1->f_22.f_14 = { -330.313f, -2779.079f, 4.332f };
			uParam1->f_22.f_17 = { 0f, 0f, -86.4f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -351.9045f, -2762.355f, 7.6078f };
			uParam1->f_22.f_43 = { 3.1248f, 0f, -125.7847f };
			uParam1->f_22.f_46 = 55.3918f;
			break;
	}
}

void func_926(var uParam0)
{
	uParam0->f_21 = "AM_MP_BIKER_WAREHOUSE";
	uParam0->f_84.f_1 = { 9.752f, 0.021f, 0.793f };
	uParam0->f_84.f_4 = { 7.958f, 0.021f, -1.85f };
	uParam0->f_84.f_7 = 2.13f;
	uParam0->f_84 = 270f;
	uParam0->f_22.f_49[0] = "PUSH";
	uParam0->f_22.f_49[1] = "LIMIT";
	uParam0->f_22.f_52[0] = 0.271f;
	uParam0->f_22.f_52[1] = 0.411f;
	uParam0->f_22.f_55 = "GTAO_EXEC_WH_DOOR_GENERIC_SOUNDS";
}

void func_927(var uParam0)
{
	uParam0->f_21 = "AM_MP_BIKER_WAREHOUSE";
	uParam0->f_84.f_1 = { 13.54f, -2.89f, 0.356f };
	uParam0->f_84.f_4 = { 13.54f, -0.53f, -3f };
	uParam0->f_84.f_7 = 2.548f;
	uParam0->f_84 = 180f;
	uParam0->f_22.f_49[0] = "PUSH";
	uParam0->f_22.f_49[1] = "LIMIT";
	uParam0->f_22.f_52[0] = 0.271f;
	uParam0->f_22.f_52[1] = 0.411f;
	uParam0->f_22.f_55 = "GTAO_EXEC_WH_DOOR_GENERIC_SOUNDS";
}

void func_928(var uParam0)
{
	uParam0->f_21 = "AM_MP_BIKER_WAREHOUSE";
	uParam0->f_84.f_1 = { -6.445f, 9.43f, 0.785f };
	uParam0->f_84.f_4 = { -3.475f, 9.43f, -1.47f };
	uParam0->f_84.f_7 = 3.06f;
	uParam0->f_84 = 0f;
	uParam0->f_22.f_49[0] = "PUSH";
	uParam0->f_22.f_49[1] = "LIMIT";
	uParam0->f_22.f_52[0] = 0.271f;
	uParam0->f_22.f_52[1] = 0.411f;
	uParam0->f_22.f_55 = "GTAO_EXEC_WH_DOOR_GENERIC_SOUNDS";
}

void func_929(var uParam0)
{
	uParam0->f_21 = "AM_MP_BIKER_WAREHOUSE";
	uParam0->f_84.f_1 = { 17.635f, 13.228f, 1.148f };
	uParam0->f_84.f_4 = { 14.985f, 13.228f, -1.725f };
	uParam0->f_84.f_7 = 2.13f;
	uParam0->f_84 = 270f;
	uParam0->f_22.f_49[0] = "PUSH";
	uParam0->f_22.f_49[1] = "LIMIT";
	uParam0->f_22.f_52[0] = 0.271f;
	uParam0->f_22.f_52[1] = 0.411f;
	uParam0->f_22.f_55 = "GTAO_EXEC_WH_DOOR_GENERIC_SOUNDS";
}

void func_930(var uParam0)
{
	uParam0->f_21 = "AM_MP_BIKER_WAREHOUSE";
	uParam0->f_84.f_1 = { -13.148f, -4.12f, 0.84f };
	uParam0->f_84.f_4 = { -10.838f, -4.12f, 3.758f };
	uParam0->f_84.f_7 = 3.611f;
	uParam0->f_84 = 90f;
	uParam0->f_22.f_49[0] = "PUSH";
	uParam0->f_22.f_49[1] = "LIMIT";
	uParam0->f_22.f_52[0] = 0.271f;
	uParam0->f_22.f_52[1] = 0.411f;
	uParam0->f_22.f_55 = "GTAO_EXEC_WH_DOOR_GENERIC_SOUNDS";
}

void func_931(int iParam0, char* sParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 22:
		case 27:
		case 32:
		case 37:
			*uParam2 = { 1009.5f, -3196.6f, -38.5f };
			*uParam3 = 0f;
			StringCopy(sParam1, "bkr_biker_dlc_int_ware01", 64);
			break;
		
		case 23:
		case 28:
		case 33:
		case 38:
			*uParam2 = { 1049.6f, -3196.6f, -38.5f };
			*uParam3 = 0f;
			StringCopy(sParam1, "bkr_biker_dlc_int_ware02", 64);
			break;
		
		case 24:
		case 29:
		case 34:
		case 39:
			*uParam2 = { 1093.6f, -3196.6f, -38.5f };
			*uParam3 = 0f;
			StringCopy(sParam1, "bkr_biker_dlc_int_ware03", 64);
			break;
		
		case 25:
		case 30:
		case 35:
		case 40:
			*uParam2 = { 1124.6f, -3196.6f, -38.5f };
			*uParam3 = 0f;
			StringCopy(sParam1, "bkr_biker_dlc_int_ware04", 64);
			break;
		
		case 26:
		case 31:
		case 36:
		case 41:
			*uParam2 = { 1165f, -3196.6f, -38.2f };
			*uParam3 = 0f;
			StringCopy(sParam1, "bkr_biker_dlc_int_ware05", 64);
			break;
	}
}

int func_932(var uParam0)
{
	return 1;
}

void func_933(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 219425;
			break;
		
		case 1:
			uParam0->f_1 = 219282;
			break;
		
		case 2:
			uParam0->f_2 = 214173;
			break;
		
		case 3:
			uParam0->f_3 = 213786;
			break;
		
		case 4:
			uParam0->f_4 = 213616;
			break;
		
		case 5:
			uParam0->f_5 = 212960;
			break;
		
		case 6:
			uParam0->f_6 = 212938;
			break;
		
		case 7:
			uParam0->f_7 = 212752;
			break;
		
		case 8:
			uParam0->f_8 = 212664;
			break;
		
		case 9:
			uParam0->f_9 = 212515;
			break;
		
		case 10:
			uParam0->f_10 = 212506;
			break;
		
		case 11:
			uParam0->f_11 = 212497;
			break;
		
		case 12:
			uParam0->f_12 = 212489;
			break;
		
		case 13:
			uParam0->f_13 = 212481;
			break;
		
		case 14:
			uParam0->f_14 = 212354;
			break;
		
		case 15:
			uParam0->f_15 = 212112;
			break;
		
		case 16:
			uParam0->f_16 = 211879;
			break;
		
		case 17:
			uParam0->f_17 = 209895;
			break;
		
		case 18:
			uParam0->f_18 = 195446;
			break;
		
		case 19:
			uParam0->f_19 = 195437;
			break;
		
		case 20:
			uParam0->f_20 = 195428;
			break;
		
		case 21:
			uParam0->f_21 = 195380;
			break;
		
		case 22:
			uParam0->f_22 = 195344;
			break;
		
		case 23:
			uParam0->f_23 = 195215;
			break;
		
		case 24:
			uParam0->f_24 = 195206;
			break;
		
		case 25:
			uParam0->f_25 = 195195;
			break;
		
		case 26:
			uParam0->f_26 = 195175;
			break;
		
		case 27:
			uParam0->f_27 = 194689;
			break;
		
		case 28:
			uParam0->f_28 = 194589;
			break;
		
		case 29:
			uParam0->f_29 = 194575;
			break;
		
		case 30:
			uParam0->f_30 = 194022;
			break;
		
		case 31:
			uParam0->f_31 = 193791;
			break;
		
		case 32:
			uParam0->f_32 = 193739;
			break;
		
		case 33:
			uParam0->f_33 = 193722;
			break;
		
		case 34:
			uParam0->f_34 = 193713;
			break;
		
		case 35:
			uParam0->f_35 = 193704;
			break;
		
		case 36:
			uParam0->f_36 = 193587;
			break;
		
		case 37:
			uParam0->f_37 = 193578;
			break;
		
		case 38:
			uParam0->f_38 = 193566;
			break;
	}
}

void func_934(var uParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam1 = 0;
}

int func_935(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return 0;
}

void func_936(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 == 3)
	{
		*uParam2 = { 238.6076f, -1980.373f, 19.7774f };
		*uParam3 = { 262.0809f, -1954.533f, 28.2874f };
		*uParam1 = 1;
		return;
	}
	else if (iParam0 == 4)
	{
		*uParam2 = { -416.9828f, 175.1209f, 78.2398f };
		*uParam3 = { -404.4813f, 188.327f, 85.6049f };
		*uParam1 = 1;
		return;
	}
	*uParam1 = 0;
}

int func_937(var uParam0)
{
	return 1;
}

int func_938(var uParam0)
{
	return 1;
}

void func_939(var uParam0, var uParam1)
{
	unk_0x09C86C0C5CA26B1E(&(uParam0->f_98), 1);
}

void func_940(var uParam0, var uParam1)
{
	if (!unk_0x08BA6DD398CA197C(uParam0->f_98, 1))
	{
		if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0)
		{
			unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), 0, 0);
		}
		unk_0x88B0F0DC270164B7(&(uParam0->f_98), 1);
	}
}

void func_941(var uParam0, int iParam1)
{
	if (iParam1 == 20)
	{
	}
	func_942(uParam0, iParam1);
}

void func_942(var uParam0, int iParam1)
{
	if (unk_0x08BA6DD398CA197C(uParam0->f_98, 3))
	{
		if (iParam1 == 18)
		{
			unk_0xAF5EF2A48AF80C3A(996.4036f, -2481.757f, 28.8007f, 4f, joaat("prop_facgate_04_l"), 0);
			unk_0xAF5EF2A48AF80C3A(985.8288f, -2480.68f, 28.8007f, 4f, joaat("prop_facgate_04_r"), 0);
			unk_0xAF5EF2A48AF80C3A(996.5616f, -2481.773f, 28.8807f, 2f, joaat("prop_facgate_03post"), 0);
			unk_0xAF5EF2A48AF80C3A(985.6758f, -2480.667f, 28.8807f, 2f, joaat("prop_facgate_03post"), 0);
			unk_0x09C86C0C5CA26B1E(&(uParam0->f_98), 3);
		}
		if (iParam1 == 12)
		{
			unk_0xAF5EF2A48AF80C3A(-550.8629f, -1772.796f, 22.3438f, 4f, joaat("prop_facgate_03b_r"), 0);
			unk_0xAF5EF2A48AF80C3A(-542.201f, -1777.798f, 22.1771f, 4f, joaat("prop_facgate_03b_l"), 0);
			unk_0x09C86C0C5CA26B1E(&(uParam0->f_98), 3);
		}
	}
}

void func_943(var uParam0, int iParam1, var uParam2)
{
	struct<3> Var0;
	int iVar3;
	
	if (iParam1 == 20)
	{
		Var0 = { 550.9767f, -1896.741f, 24.1463f };
		if (unk_0x08BA6DD398CA197C(uParam0->f_98, 2))
		{
			if (unk_0x2A488C176D52CCA5(func_51(unk_0x0C1D3C552325765B()), Var0) > 70f)
			{
				unk_0x09C86C0C5CA26B1E(&(uParam0->f_98), 2);
			}
		}
		else if (unk_0x2A488C176D52CCA5(func_51(unk_0x0C1D3C552325765B()), Var0) <= 70f)
		{
			if (!unk_0xA8ADF74E95459895(Var0, joaat("prop_facgate_01"), &iVar3))
			{
				iVar3 = unk_0x3BB8D1C5FAAB25B3("WHOUSE_DOOR_RANCHO_2A");
				if (!unk_0x7B0208FFAEF67EF9(iVar3))
				{
					unk_0x2B4DFB0E79980B43(iVar3, joaat("prop_facgate_01"), Var0, 0, 0, 0);
				}
			}
			unk_0xED71B6E985126065(iVar3, 1f, 0, 0);
			unk_0x6A7EBBBF8B647A25(iVar3, 0, 0, 0);
			Var0 = { 539.9537f, -1901.956f, 24.2126f };
			if (!unk_0xA8ADF74E95459895(Var0, joaat("prop_facgate_01b"), &iVar3))
			{
				iVar3 = unk_0x3BB8D1C5FAAB25B3("WHOUSE_DOOR_RANCHO_2B");
				if (!unk_0x7B0208FFAEF67EF9(iVar3))
				{
					unk_0x2B4DFB0E79980B43(iVar3, joaat("prop_facgate_01b"), Var0, 0, 0, 0);
				}
			}
			unk_0xED71B6E985126065(iVar3, -1f, 0, 0);
			unk_0x6A7EBBBF8B647A25(iVar3, 0, 0, 0);
			unk_0x88B0F0DC270164B7(&(uParam0->f_98), 2);
		}
	}
	if (!func_944())
	{
		if (iParam1 == 18 && !unk_0x08BA6DD398CA197C(uParam0->f_98, 3))
		{
			unk_0x9FFBF9D6DD13FE0B(996.4036f, -2481.757f, 28.8007f, 4f, joaat("prop_facgate_04_l"), 0);
			unk_0x9FFBF9D6DD13FE0B(985.8288f, -2480.68f, 28.8007f, 4f, joaat("prop_facgate_04_r"), 0);
			unk_0x9FFBF9D6DD13FE0B(996.5616f, -2481.773f, 28.8807f, 2f, joaat("prop_facgate_03post"), 0);
			unk_0x9FFBF9D6DD13FE0B(985.6758f, -2480.667f, 28.8807f, 2f, joaat("prop_facgate_03post"), 0);
			unk_0x88B0F0DC270164B7(&(uParam0->f_98), 3);
		}
		if (iParam1 == 12 && !unk_0x08BA6DD398CA197C(uParam0->f_98, 3))
		{
			unk_0x9FFBF9D6DD13FE0B(-550.8629f, -1772.796f, 22.3438f, 4f, joaat("prop_facgate_03b_r"), 0);
			unk_0x9FFBF9D6DD13FE0B(-542.201f, -1777.798f, 22.1771f, 4f, joaat("prop_facgate_03b_l"), 0);
			unk_0x88B0F0DC270164B7(&(uParam0->f_98), 3);
		}
	}
	else if (unk_0x08BA6DD398CA197C(uParam0->f_98, 3))
	{
		func_942(uParam0, iParam1);
	}
}

bool func_944()
{
	return Global_1751948.f_1 != -1;
}

Vector3 func_945(int iParam0)
{
	return func_951(iParam0);
}

int func_946(var uParam0)
{
	int iVar0;
	
	if (func_947(0))
	{
		return func_408(func_640(unk_0x0C1D3C552325765B()));
	}
	else if (func_247(unk_0x0C1D3C552325765B(), 0, 0))
	{
		iVar0 = func_524();
		return func_408(func_640(iVar0));
	}
	return 4;
}

int func_947(int iParam0)
{
	if (func_213(unk_0x0C1D3C552325765B()))
	{
		return func_878(unk_0x0C1D3C552325765B(), iParam0);
	}
	return 0;
}

void func_948(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	bool bVar1;
	struct<16> Var2;
	
	iVar0 = func_790(iParam0);
	bVar1 = false;
	if (func_257(unk_0x0C1D3C552325765B(), 1))
	{
		if (*uParam2 != 1)
		{
			bVar1 = true;
		}
		Var2 = { func_950(unk_0x0C1D3C552325765B()) };
		if (!bVar1)
		{
			if (!unk_0x509383441597090D(&Var2) && unk_0x3BB8D1C5FAAB25B3(&Var2) != *uParam3)
			{
				bVar1 = true;
			}
		}
		if (bVar1)
		{
			unk_0x940E74834C801A79("MP_WHOUSE_BLP2");
			unk_0xDA35BDB37E728640(&Var2);
			unk_0x61C3F79E9ECF289E(*uParam1);
			*uParam3 = unk_0x3BB8D1C5FAAB25B3(&Var2);
			*uParam2 = 1;
			return;
		}
	}
	else
	{
		if (*uParam2 != 2)
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			if (func_949(unk_0x0C1D3C552325765B(), iVar0))
			{
				unk_0x6F18BFEFE84565FF(*uParam1, "MP_WHOUSE_BLP0");
				*uParam2 = 2;
				return;
			}
		}
	}
	if (*uParam2 == 0)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		unk_0x6F18BFEFE84565FF(*uParam1, "MP_WHOUSE_BLP1");
		*uParam2 = 3;
	}
}

int func_949(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_42(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_72[iVar0 /*2*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

struct<16> func_950(int iParam0)
{
	struct<16> Var0;
	int iVar16;
	
	if (Global_1614576[iParam0 /*324*/].f_10.f_113 != Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_113)
	{
		StringCopy(&Var0, func_644(iParam0, 0), 64);
		return Var0;
	}
	if (((func_196(iParam0, 28) || func_196(unk_0x0C1D3C552325765B(), 28)) || func_643(iParam0)) && !func_642(iParam0))
	{
		StringCopy(&Var0, func_644(iParam0, 0), 64);
		return Var0;
	}
	iVar16 = func_56(iParam0);
	if (iVar16 != unk_0x0C1D3C552325765B())
	{
		if (!unk_0x9584C2F535471638(0, -1, 1))
		{
			StringCopy(&Var0, func_644(iParam0, 0), 64);
			return Var0;
		}
	}
	if (iVar16 != func_55())
	{
		return Global_1614576[iVar16 /*324*/].f_10.f_97;
	}
	StringCopy(&Var0, "", 64);
	return Var0;
}

Vector3 func_951(int iParam0)
{
	struct<3> Var0;
	
	func_973(iParam0, &Var0);
	return Var0;
}

int func_952(var uParam0)
{
	return 473;
}

int func_953(var uParam0)
{
	return 1;
}

int func_954(int iParam0)
{
	int iVar0;
	
	if (func_868(unk_0x0C1D3C552325765B(), 1))
	{
		return 0;
	}
	if (func_246(unk_0x0C1D3C552325765B(), 1))
	{
		return 0;
	}
	iVar0 = func_790(iParam0);
	if (func_257(unk_0x0C1D3C552325765B(), 1))
	{
		if (func_213(unk_0x0C1D3C552325765B()))
		{
			if (func_949(unk_0x0C1D3C552325765B(), iVar0))
			{
				return 1;
			}
		}
		else if (func_949(func_524(), iVar0))
		{
			return 1;
		}
	}
	else if (func_949(unk_0x0C1D3C552325765B(), iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_955(var uParam0)
{
	return (unk_0x08BA6DD398CA197C(Global_1751948.f_2, 2) || unk_0x08BA6DD398CA197C(Global_1751948.f_2, 0));
}

void func_956(var uParam0, char* sParam1, var uParam2, var uParam3)
{
	if (*uParam2 != 3)
	{
		return;
	}
	StringCopy(sParam1, "MP_WHOUSE_EXITT", 64);
	*uParam3 = 2;
	(*uParam2)[0] = "MP_WHOUSE_EXITa";
	(*uParam2)[1] = "MP_WHOUSE_EXITb";
}

int func_957(var uParam0)
{
	return -1;
}

int func_958(var uParam0)
{
	return -1;
}

int func_959(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 53.5655f, -2569.264f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 53.3032f, -2566.764f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 53.2278f, -2570.463f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 53.3409f, -2564.764f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 51.2658f, -2568.726f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 51.3035f, -2566.726f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 51.8281f, -2569.926f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 51.3412f, -2564.727f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 49.2662f, -2568.688f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 49.3039f, -2566.689f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 54.6285f, -2565.288f, 5.2087f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 49.3416f, -2564.689f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 47.2666f, -2568.651f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 47.3042f, -2566.651f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 52.3289f, -2563.151f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 47.3419f, -2564.651f, 5.0046f };
					*uParam3 = 88.92f;
					return 1;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1082.37f, -1261.376f, 4.6112f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -1080.826f, -1263.949f, 4.6936f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -1083.913f, -1258.803f, 4.4974f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -1079.283f, -1266.521f, 4.7761f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -1085.456f, -1256.231f, 4.4452f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -1079.797f, -1259.833f, 4.6507f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -1078.254f, -1262.405f, 4.7587f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -1081.34f, -1257.26f, 4.5154f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -1076.71f, -1264.978f, 4.8411f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -1082.884f, -1254.688f, 4.4188f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -1077.224f, -1258.289f, 4.6669f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -1075.681f, -1260.862f, 4.7941f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -1078.768f, -1255.717f, 4.5341f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -1074.138f, -1263.435f, 4.8505f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -1080.311f, -1253.144f, 4.4313f };
					*uParam3 = 300.96f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -1074.652f, -1256.746f, 4.6728f };
					*uParam3 = 300.96f;
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 896.2726f, -1035.337f, 34.1073f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 898.7726f, -1035.337f, 34.1073f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 901.2726f, -1035.337f, 34.1073f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 903.7726f, -1035.337f, 34.1073f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 896.2726f, -1032.837f, 33.9666f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 898.7726f, -1032.837f, 33.9662f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 901.2726f, -1032.837f, 33.9661f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 903.7726f, -1032.837f, 33.9661f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 896.2726f, -1030.337f, 33.9666f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 898.7726f, -1030.337f, 33.9666f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 901.2726f, -1030.337f, 33.9666f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 903.7726f, -1030.337f, 33.9666f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 896.2726f, -1027.837f, 33.9666f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 898.7726f, -1027.837f, 33.9666f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 901.2726f, -1027.837f, 33.9666f };
					*uParam3 = 360f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 903.7726f, -1027.837f, 33.9666f };
					*uParam3 = 360f;
					return 1;
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 247.8323f, -1956.504f, 22.1788f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 249.5188f, -1958.068f, 22.1585f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 246.1458f, -1954.94f, 22.2111f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 251.2053f, -1959.632f, 22.1202f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 244.4594f, -1953.377f, 22.251f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 249.3962f, -1954.818f, 22.1503f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 251.0827f, -1956.382f, 22.1042f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 247.7097f, -1953.254f, 22.1978f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 252.7692f, -1957.945f, 22.0476f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 246.0232f, -1951.69f, 22.2508f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 250.9601f, -1953.131f, 22.0426f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 252.6466f, -1954.695f, 21.9945f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 249.2736f, -1951.567f, 22.0914f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 254.3331f, -1956.259f, 21.9397f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 247.5871f, -1950.004f, 22.1449f };
					*uParam3 = 317.16f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 243.824f, -1951.445f, 22.26f };
					*uParam3 = 317.16f;
					return 1;
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -424.8701f, 185.5529f, 79.7918f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -421.9708f, 184.8951f, 79.7919f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -420.2715f, 184.8373f, 79.7612f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -417.9722f, 185.4795f, 79.7288f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -415.6729f, 185.4217f, 79.6811f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -413.3736f, 185.3639f, 79.6331f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -424.9279f, 183.2536f, 79.627f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -422.6286f, 183.1958f, 79.5531f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -420.3293f, 183.138f, 79.4768f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -418.03f, 183.4802f, 79.4155f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -415.7307f, 183.3224f, 79.3917f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -413.4314f, 183.2646f, 79.3209f };
					*uParam3 = 178.56f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -424.3857f, 181.2543f, 79.617f };
					*uParam3 = 265.56f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -426.886f, 185.0965f, 79.5167f };
					*uParam3 = 88.56f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -417.0871f, 181.4387f, 79.4749f };
					*uParam3 = 270.56f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -414.4878f, 181.3809f, 79.406f };
					*uParam3 = 271.56f;
					return 1;
					break;
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1042.974f, -2022.881f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -1044.941f, -2024.766f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -1046.607f, -2026.351f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -1048.274f, -2027.936f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -1044.859f, -2021.514f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -1046.526f, -2023.099f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -1048.192f, -2024.684f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -1049.859f, -2026.269f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -1046.444f, -2019.847f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -1048.111f, -2021.432f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -1049.777f, -2023.017f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -1051.444f, -2024.602f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -1048.029f, -2018.181f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -1049.696f, -2019.766f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -1051.362f, -2021.351f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -1053.029f, -2022.936f, 12.1616f };
					*uParam3 = 43.56f;
					return 1;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1268.466f, -812.4496f, 16.1077f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -1269.998f, -810.4742f, 16.1168f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -1266.933f, -814.425f, 16.0992f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -1271.53f, -808.4988f, 16.1253f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -1265.401f, -816.4004f, 16.0992f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -1270.441f, -813.9819f, 16.1078f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -1271.973f, -812.0065f, 16.1169f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -1268.909f, -815.9573f, 16.0992f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -1273.505f, -810.0311f, 16.1253f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -1267.377f, -817.9327f, 16.0992f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -1272.416f, -815.5142f, 16.1078f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -1273.949f, -813.5388f, 16.1169f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -1270.884f, -817.4896f, 16.0992f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -1275.481f, -811.5634f, 16.1253f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -1269.352f, -819.465f, 16.0992f };
					*uParam3 = 127.8f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -1274.392f, -817.0464f, 16.1222f };
					*uParam3 = 127.8f;
					return 1;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -874.0634f, -2734.716f, 12.9095f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -872.7773f, -2732.572f, 12.9109f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -875.3495f, -2736.86f, 12.9053f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -871.4913f, -2730.428f, 12.9083f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -876.6356f, -2739.004f, 12.9029f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -876.2072f, -2733.43f, 12.8285f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -874.9211f, -2731.286f, 12.8285f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -877.4933f, -2735.574f, 12.8285f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -873.6351f, -2729.142f, 12.8285f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -878.7794f, -2737.718f, 12.8285f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -878.351f, -2732.144f, 12.8285f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -877.0649f, -2730f, 12.8285f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -879.6371f, -2734.288f, 12.8285f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -875.7789f, -2727.856f, 12.8285f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -880.9232f, -2736.431f, 12.8285f };
					*uParam3 = 59.04f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -880.4948f, -2730.858f, 12.8285f };
					*uParam3 = 59.04f;
					return 1;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 274.3696f, -3015.411f, 4.6999f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 274.4167f, -3012.911f, 4.6995f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 274.3225f, -3017.91f, 4.7001f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 274.4639f, -3010.412f, 4.6994f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 274.2754f, -3020.41f, 4.7003f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 271.8701f, -3015.364f, 4.7094f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 271.9172f, -3012.864f, 4.7092f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 271.823f, -3017.863f, 4.7096f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 271.9643f, -3010.365f, 4.709f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 271.7758f, -3020.363f, 4.7097f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 269.3705f, -3015.316f, 4.7188f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 269.4177f, -3012.817f, 4.7196f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 269.3234f, -3017.816f, 4.7189f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 269.4648f, -3010.317f, 4.7188f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 269.2763f, -3020.315f, 4.7191f };
					*uParam3 = 88.92f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 266.871f, -3015.269f, 4.7284f };
					*uParam3 = 88.92f;
					return 1;
					break;
			}
			break;
		
		case 9:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1569.859f, -2130.302f, 77.3351f };
					*uParam3 = 105.84f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 1568.416f, -2130.711f, 77.3351f };
					*uParam3 = 105.84f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 1566.973f, -2131.121f, 76.8952f };
					*uParam3 = 105.84f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 1566.092f, -2133.605f, 76.6096f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 1563.592f, -2133.605f, 76.5872f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 1568.592f, -2133.605f, 76.6408f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 1566.092f, -2136.105f, 76.5637f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 1563.592f, -2136.105f, 76.5312f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 1568.592f, -2136.105f, 76.6043f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 1566.092f, -2138.605f, 76.6349f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 1563.592f, -2138.605f, 76.602f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 1568.592f, -2138.605f, 76.6595f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 1566.092f, -2141.105f, 76.6486f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 1563.592f, -2141.105f, 76.6264f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 1568.592f, -2141.105f, 76.6633f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 1566.092f, -2143.605f, 76.638f };
					*uParam3 = 180f;
					return 1;
					break;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -315.0531f, -2698.236f, 6.5502f };
					*uParam3 = 315.72f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -314.0059f, -2697.162f, 6.3438f };
					*uParam3 = 315.72f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -312.9586f, -2696.088f, 5.951f };
					*uParam3 = 315.72f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -311.9114f, -2695.014f, 5.5625f };
					*uParam3 = 315.72f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -310.8642f, -2693.94f, 5.1789f };
					*uParam3 = 315.72f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -309.8169f, -2692.866f, 5.1532f };
					*uParam3 = 315.72f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -308.7697f, -2691.792f, 5.0003f };
					*uParam3 = 315.72f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -307.7224f, -2690.718f, 5.0003f };
					*uParam3 = 315.72f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -314.0204f, -2699.495f, 6.5486f };
					*uParam3 = 225f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -312.9597f, -2700.555f, 6.5465f };
					*uParam3 = 225f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -311.899f, -2701.616f, 6.0171f };
					*uParam3 = 225f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -310.8384f, -2702.677f, 5.3512f };
					*uParam3 = 225f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -309.7777f, -2703.737f, 5.1532f };
					*uParam3 = 225f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -308.717f, -2704.798f, 5.1532f };
					*uParam3 = 225f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -307.6564f, -2705.858f, 5.1532f };
					*uParam3 = 225f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -306.5957f, -2706.919f, 5.1532f };
					*uParam3 = 225f;
					return 1;
					break;
			}
			break;
		
		case 11:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 500.513f, -652.0776f, 23.9102f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 500.1997f, -654.5579f, 23.9046f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 500.8264f, -649.5973f, 23.7512f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 499.8864f, -657.0381f, 23.899f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 501.1397f, -647.117f, 23.7512f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 502.9933f, -652.3909f, 23.7512f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 502.68f, -654.8712f, 23.7512f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 503.3066f, -649.9106f, 23.7512f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 502.3667f, -657.3515f, 23.7512f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 503.62f, -647.4304f, 23.7512f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 505.4736f, -652.7043f, 23.7512f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 505.1603f, -655.1846f, 23.7512f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 505.7869f, -650.224f, 23.7512f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 504.847f, -657.6649f, 23.7512f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 506.1003f, -647.7437f, 23.7512f };
					*uParam3 = 262.8f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 507.9539f, -653.0176f, 23.7512f };
					*uParam3 = 262.8f;
					return 1;
					break;
			}
			break;
		
		case 12:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -527.8182f, -1783.653f, 20.5241f };
					*uParam3 = 331.56f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -530.0165f, -1782.462f, 20.5136f };
					*uParam3 = 331.56f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -532.2148f, -1781.272f, 20.4936f };
					*uParam3 = 322.56f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -526.6276f, -1781.455f, 20.3953f };
					*uParam3 = 331.56f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -528.8259f, -1780.264f, 20.3978f };
					*uParam3 = 331.56f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -531.0242f, -1779.073f, 20.4048f };
					*uParam3 = 325.56f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -525.437f, -1779.556f, 20.3393f };
					*uParam3 = 331.56f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -527.6353f, -1778.366f, 20.362f };
					*uParam3 = 331.56f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -531.9336f, -1776.875f, 20.3854f };
					*uParam3 = 331.56f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -525.7464f, -1777.658f, 20.3332f };
					*uParam3 = 325.56f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -527.9447f, -1776.468f, 20.3559f };
					*uParam3 = 325.56f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -529.543f, -1777.077f, 20.3792f };
					*uParam3 = 331.56f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -522.1558f, -1779.36f, 20.1963f };
					*uParam3 = 322.56f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -520.1541f, -1780.869f, 20.225f };
					*uParam3 = 316.56f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -523.2524f, -1780.879f, 20.2515f };
					*uParam3 = 331.56f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -521.8652f, -1782.562f, 20.3421f };
					*uParam3 = 331.56f;
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -294.8197f, -1353.221f, 30.3182f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -294.8982f, -1355.72f, 30.3161f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -294.7412f, -1350.722f, 30.3066f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -293.1767f, -1357.019f, 30.3098f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -294.6627f, -1348.224f, 30.3058f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -295.0553f, -1360.718f, 30.3097f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -294.5841f, -1345.725f, 30.3098f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -295.1338f, -1363.216f, 30.3097f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -292.9209f, -1351.8f, 30.317f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -292.9994f, -1354.598f, 30.3113f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -293.1424f, -1349.601f, 30.3154f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -292.778f, -1358.897f, 30.3111f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -293.0639f, -1347.102f, 30.307f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -293.1565f, -1360.796f, 30.3111f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -292.9854f, -1344.303f, 30.3044f };
					*uParam3 = 268.2f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -293.235f, -1363.295f, 30.3111f };
					*uParam3 = 268.2f;
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 349.8802f, 328.4255f, 103.3104f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 352.3017f, 327.8038f, 103.1931f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 354.7231f, 327.182f, 103.0763f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 357.1446f, 326.5603f, 102.9681f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 359.566f, 325.9386f, 102.8674f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 361.9875f, 325.3168f, 102.771f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 364.4089f, 324.6951f, 102.7018f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 366.8304f, 324.0734f, 102.6326f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 348.0585f, 327.5041f, 103.3091f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 350.78f, 326.2823f, 103.1918f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 353.5014f, 325.6606f, 103.075f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 356.2229f, 324.7389f, 102.9793f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 358.6443f, 324.1171f, 102.8786f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 361.0658f, 323.4954f, 102.7693f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 363.1872f, 322.8737f, 102.7001f };
					*uParam3 = 165.6f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 365.9086f, 322.2519f, 102.6309f };
					*uParam3 = 165.6f;
					return 1;
					break;
			}
			break;
		
		case 15:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 925.6405f, -1560.243f, 29.7406f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 925.6606f, -1557.043f, 29.8954f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 925.6204f, -1563.443f, 29.8634f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 925.6807f, -1553.843f, 29.8012f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 925.6003f, -1566.642f, 29.6487f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 922.4406f, -1560.222f, 29.7553f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 922.4606f, -1557.022f, 29.775f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 922.4205f, -1563.422f, 29.7366f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 922.4807f, -1553.823f, 29.7882f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 922.4004f, -1566.622f, 29.704f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 919.2406f, -1560.202f, 29.7592f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 919.2607f, -1557.002f, 29.7694f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 919.2205f, -1563.402f, 29.76f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 919.2808f, -1553.802f, 29.779f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 919.2004f, -1566.602f, 29.744f };
					*uParam3 = 89.64f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 916.0406f, -1560.182f, 29.7456f };
					*uParam3 = 89.64f;
					return 1;
					break;
			}
			break;
		
		case 16:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 760.1638f, -909.4731f, 24.2546f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 760.1839f, -906.2732f, 24.249f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 760.204f, -903.0732f, 24.2297f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 760.2241f, -899.8733f, 24.2069f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 760.2441f, -896.6733f, 24.1849f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 760.2642f, -893.4734f, 24.1641f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 760.2843f, -890.2734f, 24.1432f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 760.6044f, -911.6735f, 24.1212f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 762.1638f, -909.4932f, 24.2505f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 762.1839f, -906.2933f, 24.2306f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 762.2039f, -903.0933f, 24.1944f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 762.224f, -899.8934f, 24.1655f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 762.2441f, -896.6934f, 24.1417f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 762.2642f, -893.4935f, 24.1227f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 762.2843f, -890.2935f, 24.1055f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 762.3043f, -911.9936f, 24.0937f };
					*uParam3 = 269.64f;
					return 1;
					break;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1038.552f, -2173.207f, 30.5259f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 1038.311f, -2176.398f, 30.5213f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 1038.793f, -2170.016f, 30.5306f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 1038.07f, -2179.589f, 30.5189f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 1039.034f, -2166.825f, 30.533f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 1037.829f, -2182.78f, 30.5083f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 1041.743f, -2173.448f, 30.4763f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 1041.502f, -2176.639f, 30.4677f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 1041.984f, -2170.257f, 30.5075f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 1041.261f, -2179.83f, 30.4313f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 1042.225f, -2167.066f, 30.5287f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 1041.02f, -2183.021f, 30.4238f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 1044.934f, -2173.689f, 30.453f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 1044.693f, -2176.88f, 30.422f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 1045.175f, -2170.498f, 30.4845f };
					*uParam3 = 265.68f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 1044.452f, -2180.071f, 30.3856f };
					*uParam3 = 265.68f;
					return 1;
					break;
			}
			break;
		
		case 18:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 1018.338f, -2511.65f, 27.4777f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 1017.937f, -2516.668f, 27.302f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 1018.138f, -2514.375f, 27.302f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 1017.736f, -2519.862f, 27.302f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 1014.542f, -2519.661f, 27.3058f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 1014.743f, -2516.468f, 27.3049f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 1014.944f, -2513.274f, 27.3037f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 1015.145f, -2510.08f, 27.3024f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 1011.348f, -2519.46f, 27.3077f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 1011.549f, -2516.267f, 27.3062f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 1011.75f, -2513.073f, 27.3048f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 1011.951f, -2509.879f, 27.3034f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 1008.155f, -2519.259f, 27.3043f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 1008.356f, -2516.066f, 27.302f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 1008.557f, -2512.872f, 27.302f };
					*uParam3 = 86.4f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 1008.757f, -2509.678f, 27.302f };
					*uParam3 = 86.4f;
					return 1;
					break;
			}
			break;
		
		case 19:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -245.497f, 202.4499f, 82.7567f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -247.9962f, 202.387f, 83.0061f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -250.4954f, 202.3242f, 83.2191f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -252.9946f, 202.2614f, 83.5141f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -245.4342f, 199.9507f, 82.2888f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -247.9334f, 199.8878f, 82.6439f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -250.4326f, 199.825f, 82.9599f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -252.9318f, 199.7622f, 83.3373f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -245.3714f, 197.4514f, 81.7634f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -247.8706f, 197.3886f, 82.2527f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -250.3698f, 197.3258f, 82.6763f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -252.869f, 197.263f, 83.1381f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -245.3085f, 194.9522f, 81.3477f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -247.8077f, 194.8894f, 81.9302f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -250.3069f, 194.8266f, 82.4314f };
					*uParam3 = 181.44f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -252.8062f, 194.7638f, 82.9539f };
					*uParam3 = 181.44f;
					return 1;
					break;
			}
			break;
		
		case 20:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 540.8308f, -1944.671f, 23.9851f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 542.1703f, -1946.782f, 23.9845f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 539.4913f, -1942.561f, 23.9851f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 543.5099f, -1948.893f, 23.9824f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 538.1517f, -1940.45f, 23.9851f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 544.8494f, -1951.004f, 23.9803f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 542.9417f, -1943.332f, 23.9851f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 544.2812f, -1945.443f, 23.9851f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 541.6021f, -1941.221f, 23.9851f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 545.6207f, -1947.553f, 23.9851f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 540.2626f, -1939.11f, 23.9851f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 546.9603f, -1949.664f, 23.9838f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 545.0525f, -1941.992f, 23.9851f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 546.392f, -1944.103f, 23.9851f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 543.713f, -1939.881f, 23.9851f };
					*uParam3 = 302.4f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 547.7316f, -1946.214f, 23.9851f };
					*uParam3 = 302.4f;
					return 1;
					break;
			}
			break;
		
		case 21:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { 95.663f, -2216.311f, 5.1712f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { 95.6473f, -2213.811f, 5.1787f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { 95.6787f, -2218.811f, 5.1712f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { 95.6316f, -2211.311f, 5.0431f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { 95.6945f, -2221.311f, 5.1712f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { 95.6159f, -2208.811f, 5.0431f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { 93.1631f, -2216.326f, 5.0333f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { 93.1474f, -2213.826f, 5.0368f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { 93.1788f, -2218.826f, 5.0333f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { 93.1317f, -2211.326f, 5.0431f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { 93.1945f, -2221.326f, 5.0333f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { 93.116f, -2208.826f, 5.0431f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { 90.6631f, -2216.342f, 5.0373f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { 90.6474f, -2213.842f, 5.0409f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { 90.6788f, -2218.842f, 5.0371f };
					*uParam3 = 90.36f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { 90.6317f, -2211.342f, 5.0468f };
					*uParam3 = 90.36f;
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_960(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	switch (func_461(func_790(iParam0)))
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -6.3318f, 5.2695f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -6.339f, 4.1196f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -6.3246f, 6.4194f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -5.1818f, 5.2622f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -5.189f, 4.1123f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -5.1746f, 6.4121f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -4.0317f, 5.2549f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -4.0389f, 4.105f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -4.0245f, 6.4048f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -2.8817f, 5.2476f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -2.8889f, 4.0977f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -2.8745f, 6.3975f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -1.7317f, 5.2402f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -1.7389f, 4.0903f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -1.7245f, 6.3901f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -0.5817f, 5.2329f, 0.0001f };
					*uParam3 = 269.64f;
					return 1;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -7.2566f, 8.0942f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -6.8567f, 6.594f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -6.5566f, 5.094f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -6.9567f, 0.8938f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -6.9567f, -0.6062f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -5.7566f, 8.0942f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -5.7566f, 6.5942f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -4.8567f, 5.2939f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -4.5566f, 0.6238f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -4.5566f, -1.8062f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -4.2566f, 8.0942f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -0.6566f, 6.5942f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -2.7567f, 5.3938f, 0f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -2.7567f, 0.6238f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -2.4567f, -1.8062f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -2.7566f, 8.0942f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -13.3667f, 4.2373f, 0.0001f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 1:
					*uParam2 = { -13.6667f, 2.2373f, 0.0001f };
					*uParam3 = 180f;
					return 1;
					break;
				
				case 2:
					*uParam2 = { -13.1667f, -0.2207f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 3:
					*uParam2 = { -10.7667f, -0.2207f, 0f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 4:
					*uParam2 = { -9.3663f, -0.1626f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 5:
					*uParam2 = { -8.6663f, 6.2373f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 6:
					*uParam2 = { -8.3663f, 4.6375f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 7:
					*uParam2 = { -9.2663f, 1.5374f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 8:
					*uParam2 = { -10.1663f, -2.4626f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 9:
					*uParam2 = { -8.3663f, -2.2629f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 10:
					*uParam2 = { -6.7667f, 2.9373f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 11:
					*uParam2 = { -6.7667f, 1.6375f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 12:
					*uParam2 = { -8.5663f, -4.1626f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 13:
					*uParam2 = { -9.4663f, -1.2629f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 14:
					*uParam2 = { -7.0663f, -3.1626f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
				
				case 15:
					*uParam2 = { -9.9667f, -4.1626f, 0.0001f };
					*uParam3 = 270f;
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_961(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_308.f_3 = 0;
	if (func_257(unk_0x0C1D3C552325765B(), 1))
	{
		if (func_213(unk_0x0C1D3C552325765B()))
		{
			unk_0x88B0F0DC270164B7(&(Global_1751948.f_2), 0);
		}
		else
		{
			unk_0x88B0F0DC270164B7(&(Global_1751948.f_2), 1);
		}
		iVar0 = func_56(unk_0x0C1D3C552325765B());
		if (iVar0 != func_55() && iVar0 != unk_0x0C1D3C552325765B())
		{
			unk_0x88B0F0DC270164B7(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_308.f_3), iVar0);
		}
		iVar2 = 0;
		while (iVar2 < func_891())
		{
			iVar1 = func_890(iVar0, iVar2);
			if (iVar1 != func_55() && iVar1 != unk_0x0C1D3C552325765B())
			{
				unk_0x88B0F0DC270164B7(&(Global_2421327[unk_0x0C1D3C552325765B() /*353*/].f_308.f_3), iVar1);
			}
			iVar2++;
		}
	}
	else if (func_949(unk_0x0C1D3C552325765B(), func_790(iParam0)))
	{
		unk_0x88B0F0DC270164B7(&(Global_1751948.f_2), 2);
	}
}

char* func_962(var uParam0, char* sParam1, var uParam2)
{
	if (Global_1751948.f_516)
	{
		Global_1751948.f_516 = 0;
		return "MP_WHOUSE_KICKe";
	}
	if (Global_1751948.f_2 == 0)
	{
		return "MP_WHOUSE_KICKc";
	}
	if (unk_0x08BA6DD398CA197C(Global_1751948.f_2, 1))
	{
		if (func_246(unk_0x0C1D3C552325765B(), 1))
		{
			if (func_321(unk_0x0C1D3C552325765B()))
			{
				return "MP_WHOUSE_KICKf";
			}
			else
			{
				StringCopy(sParam1, func_882(unk_0x0C1D3C552325765B(), 0), 64);
				return "MP_WHOUSE_KICKg";
			}
		}
		if (!func_257(unk_0x0C1D3C552325765B(), 0))
		{
			return "MP_WHOUSE_KICKb";
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_1751948.f_2, 0) || unk_0x08BA6DD398CA197C(Global_1751948.f_2, 2))
	{
		if (func_246(unk_0x0C1D3C552325765B(), 1))
		{
			if (func_321(unk_0x0C1D3C552325765B()))
			{
				return "MP_WHOUSE_KICKf";
			}
			else
			{
				StringCopy(sParam1, func_882(unk_0x0C1D3C552325765B(), 0), 64);
				return "MP_WHOUSE_KICKg";
			}
		}
		if (func_257(unk_0x0C1D3C552325765B(), 0))
		{
			return "MP_WHOUSE_KICKd";
		}
	}
	return "";
}

bool func_963(int iParam0, var uParam1)
{
	if (Global_1751948.f_2 == 0)
	{
		return 1;
	}
	if (func_246(unk_0x0C1D3C552325765B(), 1))
	{
		return 1;
	}
	if (unk_0x08BA6DD398CA197C(Global_1751948.f_2, 1))
	{
		if (!func_257(unk_0x0C1D3C552325765B(), 0))
		{
			return 1;
		}
	}
	if (unk_0x08BA6DD398CA197C(Global_1751948.f_2, 0) || unk_0x08BA6DD398CA197C(Global_1751948.f_2, 2))
	{
		if (func_257(unk_0x0C1D3C552325765B(), 0))
		{
			return 1;
		}
	}
	return !func_969(unk_0x0C1D3C552325765B(), iParam0);
}

void func_964(var uParam0, var uParam1)
{
}

void func_965(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
}

int func_966(var uParam0, var uParam1)
{
	return 0;
}

int func_967(var uParam0, var uParam1)
{
	return 0;
}

char* func_968(int iParam0, char* sParam1)
{
	int iVar0;
	
	if (func_949(unk_0x0C1D3C552325765B(), func_790(iParam0)))
	{
		if (func_246(unk_0x0C1D3C552325765B(), 1))
		{
			if (func_321(unk_0x0C1D3C552325765B()))
			{
				return "WHOUSE_MC_BLOCK_P";
			}
			else
			{
				StringCopy(sParam1, func_882(unk_0x0C1D3C552325765B(), 0), 64);
				return "WHOUSE_MC_BLOCK_M";
			}
		}
		else if (func_257(unk_0x0C1D3C552325765B(), 0))
		{
			iVar0 = func_56(unk_0x0C1D3C552325765B());
			if (!func_949(iVar0, func_790(iParam0)))
			{
				if (func_899(func_524()))
				{
					return "WHOUSE_GOONHLP1C";
				}
				else
				{
					return "WHOUSE_GOON_HLP1";
				}
			}
		}
	}
	return "";
}

int func_969(int iParam0, int iParam1)
{
	if (Global_262145.f_13240)
	{
		return 0;
	}
	if (func_246(iParam0, 1))
	{
		return 0;
	}
	if (func_257(iParam0, 1))
	{
		return func_949(func_56(iParam0), func_790(iParam1));
	}
	else if (func_949(iParam0, func_790(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_970(var uParam0)
{
	bool bVar0;
	
	if (Global_262145.f_13240)
	{
		return 1;
	}
	if (!func_908(1))
	{
		return 1;
	}
	if (!func_971(unk_0x0C1D3C552325765B()) && Global_1572925)
	{
		return 1;
	}
	if (func_193(unk_0x0C1D3C552325765B(), 0))
	{
		if (func_192(unk_0x0C1D3C552325765B()) == 168 && !unk_0x08BA6DD398CA197C(Global_1750560.f_3, 4))
		{
			return 1;
		}
		else if (func_192(unk_0x0C1D3C552325765B()) == 167)
		{
			if (unk_0x7DC70BB637724B43(unk_0x0C1D3C552325765B()) > 0)
			{
				return 1;
			}
		}
	}
	if (unk_0x1504F110F2576375())
	{
		return 1;
	}
	bVar0 = false;
	if (func_902(bVar0, 2))
	{
		return 1;
	}
	return 0;
}

bool func_971(int iParam0)
{
	return func_393(func_192(iParam0));
}

void func_972(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	unk_0x29F530EB20218AC0(9, uParam1, uParam2, uParam3, uParam4);
}

void func_973(int iParam0, var uParam1)
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

void func_974(int iParam0, var uParam1)
{
	switch (func_461(func_790(iParam0)))
	{
		case 0:
			*uParam1 = { 1086.836f, -3103.88f, -41f };
			uParam1->f_3 = { 1105.807f, -3094.803f, -36.0099f };
			break;
		
		case 1:
			*uParam1 = { 1047.356f, -3112.175f, -41f };
			uParam1->f_3 = { 1074.308f, -3092.826f, -33.7074f };
			break;
		
		case 2:
			*uParam1 = { 990.5693f, -3113.382f, -41f };
			uParam1->f_3 = { 1030.264f, -3088.479f, -28.7216f };
			break;
	}
}

var func_975(int iParam0)
{
	return func_976(func_790(iParam0));
}

char* func_976(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_WHOUSE_0";
			break;
		
		case 2:
			return "MP_WHOUSE_1";
			break;
		
		case 3:
			return "MP_WHOUSE_2";
			break;
		
		case 4:
			return "MP_WHOUSE_3";
			break;
		
		case 5:
			return "MP_WHOUSE_4";
			break;
		
		case 6:
			return "MP_WHOUSE_5";
			break;
		
		case 7:
			return "MP_WHOUSE_6";
			break;
		
		case 8:
			return "MP_WHOUSE_7";
			break;
		
		case 9:
			return "MP_WHOUSE_8";
			break;
		
		case 10:
			return "MP_WHOUSE_9";
			break;
		
		case 11:
			return "MP_WHOUSE_10";
			break;
		
		case 12:
			return "MP_WHOUSE_11";
			break;
		
		case 13:
			return "MP_WHOUSE_12";
			break;
		
		case 14:
			return "MP_WHOUSE_13";
			break;
		
		case 15:
			return "MP_WHOUSE_14";
			break;
		
		case 16:
			return "MP_WHOUSE_15";
			break;
		
		case 17:
			return "MP_WHOUSE_16";
			break;
		
		case 18:
			return "MP_WHOUSE_17";
			break;
		
		case 19:
			return "MP_WHOUSE_18";
			break;
		
		case 20:
			return "MP_WHOUSE_19";
			break;
		
		case 21:
			return "MP_WHOUSE_20";
			break;
		
		case 22:
			return "MP_WHOUSE_21";
			break;
	}
	return "";
}

void func_977(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_790(iParam0);
	switch (func_461(iVar0))
	{
		case 0:
			func_982(uParam1);
			break;
		
		case 1:
			func_981(uParam1);
			break;
		
		case 2:
			func_980(uParam1);
			break;
	}
	func_974(iParam0, &(uParam1->f_92));
	func_979(iParam0, uParam1);
	uParam1->f_21 = "AM_MP_WAREHOUSE";
	switch (iParam0)
	{
		case 0:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_r";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 55.6698f, -2562.517f, 9.7216f };
			uParam1->f_22.f_9 = { -26.9934f, 0f, 158.2394f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { 55.173f, -2569.18f, 5.005f };
			uParam1->f_22.f_17 = { 0f, 0f, 88.92f };
			uParam1->f_22.f_20 = 0.185f;
			uParam1->f_22.f_21 = 0.45f;
			uParam1->f_22.f_40 = { 47.462f, -2556.352f, 9.3575f };
			uParam1->f_22.f_43 = { -3.9405f, 0f, -159.8518f };
			uParam1->f_22.f_46 = 60.9384f;
			break;
		
		case 1:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -1085.303f, -1258.34f, 6.2175f };
			uParam1->f_22.f_9 = { -8.7714f, 0f, -149.6619f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { -1083.55f, -1262.168f, 4.584f };
			uParam1->f_22.f_17 = { 0f, 0f, 120f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -1076.223f, -1243.307f, 10.6771f };
			uParam1->f_22.f_43 = { -9.2423f, 0f, 147.7254f };
			uParam1->f_22.f_46 = 51.5371f;
			uParam1->f_22.f_24 = joaat("prop_damdoor_01");
			uParam1->f_22.f_25 = { -1083.314f, -1262.911f, 6.048f };
			uParam1->f_22.f_28 = { 0f, 0f, 120f };
			uParam1->f_22.f_32 = joaat("prop_damdoor_01");
			uParam1->f_22.f_33 = { -1083.289f, -1262.854f, 3.742f };
			uParam1->f_22.f_36 = { 0f, 0f, 120f };
			break;
		
		case 2:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 894.9501f, -1036.63f, 35.7994f };
			uParam1->f_22.f_9 = { -6.6207f, 0f, -74.3905f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { 896.377f, -1036.943f, 34.114f };
			uParam1->f_22.f_17 = { 0f, 0f, -176.04f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 905.355f, -1022.531f, 39.7356f };
			uParam1->f_22.f_43 = { -11.3208f, 0f, 143.5729f };
			uParam1->f_22.f_46 = 57.37f;
			break;
		
		case 3:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_r";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 249.927f, -1959.511f, 23.9722f };
			uParam1->f_22.f_9 = { 0.0683f, 0f, 47.4904f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { 246.915f, -1957.426f, 22.234f };
			uParam1->f_22.f_17 = { 0f, 0f, -41.4f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 245.938f, -1938.42f, 27.6721f };
			uParam1->f_22.f_43 = { -7.5442f, 0f, 159.4763f };
			uParam1->f_22.f_46 = 59.7297f;
			break;
		
		case 4:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -422.9159f, 186.277f, 81.3179f };
			uParam1->f_22.f_9 = { 0.2632f, 0f, 96.0908f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { -424.77f, 186.591f, 79.806f };
			uParam1->f_22.f_17 = { 0f, 0f, 6.84f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -408.0694f, 174.6422f, 86.9432f };
			uParam1->f_22.f_43 = { -13.2642f, 0f, 28.3935f };
			uParam1->f_22.f_46 = 52.4348f;
			break;
		
		case 5:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_r";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -1040.969f, -2022.84f, 13.8865f };
			uParam1->f_22.f_9 = { -4.3062f, 0f, 128.7958f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { -1041.771f, -2024.093f, 12.262f };
			uParam1->f_22.f_17 = { 0f, 0f, 48.6f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -1085.943f, -2028.454f, 24.7947f };
			uParam1->f_22.f_43 = { -1.2216f, 0f, -90.0273f };
			uParam1->f_22.f_46 = 55.8325f;
			break;
		
		case 6:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_r";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -1269.049f, -810.1869f, 17.6841f };
			uParam1->f_22.f_9 = { -5.2284f, 0f, -154.3061f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { -1267.408f, -811.694f, 16.108f };
			uParam1->f_22.f_17 = { 0f, 0f, 129.24f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -1275.577f, -830.3143f, 21.4835f };
			uParam1->f_22.f_43 = { -1.8344f, 0f, -30.0049f };
			uParam1->f_22.f_46 = 54.6851f;
			break;
		
		case 7:
			uParam1->f_22.f_3 = "anim@apt_trans@garage";
			uParam1->f_22.f_4 = "gar_open_1_left";
			uParam1->f_22.f_14 = { -873.02f, -2736.37f, 12.96f };
			uParam1->f_22.f_17 = { 0f, 0f, -1.44f };
			uParam1->f_22.f_20 = 0f;
			uParam1->f_22.f_21 = 0.45f;
			uParam1->f_22.f_40 = { -900.0779f, -2719.921f, 22.445f };
			uParam1->f_22.f_43 = { 2.7476f, 0f, -120.3092f };
			uParam1->f_22.f_46 = 74.842f;
			func_978(&(uParam1->f_22));
			break;
		
		case 8:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_r";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 275.3322f, -3009.54f, 10.6753f };
			uParam1->f_22.f_9 = { -38.649f, 0f, 167.1707f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { 276.13f, -3015.219f, 5.299f };
			uParam1->f_22.f_17 = { 0f, 0f, 89.64f };
			uParam1->f_22.f_20 = 0.22f;
			uParam1->f_22.f_21 = 0.48f;
			uParam1->f_22.f_40 = { 258.2233f, -3009.183f, 8.997f };
			uParam1->f_22.f_43 = { -1.9814f, 0f, -115.932f };
			uParam1->f_22.f_46 = 51.7418f;
			uParam1->f_22.f_24 = joaat("prop_damdoor_01");
			uParam1->f_22.f_25 = { 276.161f, -3016.038f, 6.4456f };
			uParam1->f_22.f_28 = { 0f, 0f, 90f };
			break;
		
		case 9:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 1575.451f, -2129.365f, 80.8606f };
			uParam1->f_22.f_9 = { -16.8649f, 0f, 103.5603f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { 1569.734f, -2129.194f, 77.335f };
			uParam1->f_22.f_17 = { 0f, 0f, 15.48f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 1581.396f, -2133.452f, 81.8751f };
			uParam1->f_22.f_43 = { -6.7888f, 0f, 56.6227f };
			uParam1->f_22.f_46 = 62.3286f;
			uParam1->f_22.f_24 = joaat("prop_damdoor_01");
			uParam1->f_22.f_25 = { 1568.861f, -2129.332f, 78.573f };
			uParam1->f_22.f_28 = { 0f, 0f, 15.3f };
			break;
		
		case 10:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -307.5915f, -2705.994f, 11.3516f };
			uParam1->f_22.f_9 = { -13.9349f, 0f, 44.8217f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { -316.077f, -2698.804f, 6.55f };
			uParam1->f_22.f_17 = { 0f, 0f, 134.28f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -291.8181f, -2701.502f, 11.8306f };
			uParam1->f_22.f_43 = { -7.1218f, 0f, 90.1946f };
			uParam1->f_22.f_46 = 51.9229f;
			break;
		
		case 11:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 501.5328f, -645.445f, 28.0574f };
			uParam1->f_22.f_9 = { -22.2649f, 0f, 160.9995f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { 499.179f, -651.811f, 23.909f };
			uParam1->f_22.f_17 = { 0f, 0f, 84.24f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 512.1525f, -636.3975f, 28.448f };
			uParam1->f_22.f_43 = { -1.2414f, 0f, 122.172f };
			uParam1->f_22.f_46 = 53.7499f;
			break;
		
		case 12:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -539.1638f, -1778.434f, 23.8737f };
			uParam1->f_22.f_9 = { -9.2253f, 0f, -119.9646f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { -528.827f, -1784.887f, 20.598f };
			uParam1->f_22.f_17 = { 0f, 0f, 149.04f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -539.6097f, -1759.142f, 27.4026f };
			uParam1->f_22.f_43 = { -5.2881f, 0f, -171.1322f };
			uParam1->f_22.f_46 = 53.8715f;
			break;
		
		case 13:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_r";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -294.106f, -1359.92f, 32.7505f };
			uParam1->f_22.f_9 = { -4.7499f, 0f, -0.9732f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { -296.605f, -1353.023f, 30.308f };
			uParam1->f_22.f_17 = { 0f, 0f, -89.64f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -277.6619f, -1368.544f, 35.1506f };
			uParam1->f_22.f_43 = { -1.3521f, 0f, 55.7123f };
			uParam1->f_22.f_46 = 50.9305f;
			break;
		
		case 14:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 356.1015f, 326.3331f, 107.5898f };
			uParam1->f_22.f_9 = { -18.8627f, 0f, 59.592f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { 350.351f, 330.055f, 103.445f };
			uParam1->f_22.f_17 = { 0f, 0f, -13.68f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 360.9772f, 310.175f, 109.4587f };
			uParam1->f_22.f_43 = { -2.4531f, 0f, 12.6192f };
			uParam1->f_22.f_46 = 51.9772f;
			break;
		
		case 15:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 925.8218f, -1564.616f, 34.3633f };
			uParam1->f_22.f_9 = { -32.8521f, 0f, -19.6456f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { 927.6f, -1560.443f, 29.943f };
			uParam1->f_22.f_17 = { 0f, 0f, -90.72f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 913.1396f, -1575.709f, 34.2933f };
			uParam1->f_22.f_43 = { 3.1582f, 0f, -58.1463f };
			uParam1->f_22.f_46 = 53.8629f;
			uParam1->f_22.f_24 = joaat("prop_damdoor_01");
			uParam1->f_22.f_25 = { 927.711f, -1559.567f, 31.094f };
			uParam1->f_22.f_28 = { 0f, 0f, -90f };
			break;
		
		case 16:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 759.1849f, -906.91f, 26.0423f };
			uParam1->f_22.f_9 = { -1.1809f, 0f, -179.4534f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { 758.631f, -909.267f, 24.438f };
			uParam1->f_22.f_17 = { 0f, 0f, 91.44f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 777.9869f, -877.492f, 33.0619f };
			uParam1->f_22.f_43 = { -7.513f, 0f, 129.5847f };
			uParam1->f_22.f_46 = 50.8783f;
			break;
		
		case 17:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 1038f, -2170.053f, 32.9912f };
			uParam1->f_22.f_9 = { -22.5347f, 0f, 175.7987f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { 1037.014f, -2172.944f, 30.55f };
			uParam1->f_22.f_17 = { 0f, 0f, 84.96f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 1061.911f, -2157.021f, 35.0165f };
			uParam1->f_22.f_43 = { -2.572f, 0f, 111.921f };
			uParam1->f_22.f_46 = 58.6139f;
			break;
		
		case 18:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 1017.937f, -2517.583f, 30.4418f };
			uParam1->f_22.f_9 = { -18.4157f, 0f, -15.4654f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { 1019.739f, -2511.918f, 27.445f };
			uParam1->f_22.f_17 = { 0f, 0f, -96.12f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 1000.552f, -2529.795f, 32.7126f };
			uParam1->f_22.f_43 = { -5.7162f, 0f, -73.9334f };
			uParam1->f_22.f_46 = 55.0288f;
			break;
		
		case 19:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { -248.4653f, 203.9834f, 86.8847f };
			uParam1->f_22.f_9 = { -36.3135f, 0f, -102.8081f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { -245.054f, 204.085f, 83f };
			uParam1->f_22.f_17 = { 0f, 0f, -3.6f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { -270.0336f, 183.7648f, 90.1035f };
			uParam1->f_22.f_43 = { -1.7739f, 0f, -22.3539f };
			uParam1->f_22.f_46 = 62.3599f;
			break;
		
		case 20:
			uParam1->f_22.f_3 = "anim@apt_trans@garage";
			uParam1->f_22.f_4 = "gar_open_1_right";
			uParam1->f_22.f_14 = { 539.003f, -1945.851f, 23.984f };
			uParam1->f_22.f_17 = { 0f, 0f, -131.04f };
			uParam1->f_22.f_20 = 0f;
			uParam1->f_22.f_21 = 0.45f;
			uParam1->f_22.f_40 = { 545.4655f, -1926.31f, 30.7424f };
			uParam1->f_22.f_43 = { -6.6888f, 0f, 152.7569f };
			uParam1->f_22.f_46 = 52.6655f;
			func_978(&(uParam1->f_22));
			break;
		
		case 21:
			uParam1->f_22.f_3 = "anim@apt_trans@hinge_l";
			uParam1->f_22.f_4 = "ext_player";
			uParam1->f_22.f_6 = { 97.0925f, -2218.317f, 6.9921f };
			uParam1->f_22.f_9 = { -1.0588f, 0f, -3.5294f };
			uParam1->f_22.f_12 = 40f;
			uParam1->f_22.f_14 = { 97.293f, -2215.945f, 5.502f };
			uParam1->f_22.f_17 = { 0f, 0f, -88.2f };
			uParam1->f_22.f_20 = 0.2f;
			uParam1->f_22.f_21 = 0.46f;
			uParam1->f_22.f_40 = { 82.9859f, -2232.355f, 9.8449f };
			uParam1->f_22.f_43 = { -1.3436f, 0f, -57.1714f };
			uParam1->f_22.f_46 = 55.5776f;
			break;
	}
}

void func_978(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	float fVar12;
	struct<3> Var13;
	float fVar16;
	
	Var0 = { func_149(231.848f, -1006.707f, -99.992f, 63.36f) };
	Var3 = { 0f, 0f, -63.36f };
	Var6 = { func_149(233.2975f, -1005.81f, -98.5457f, 63.36f) };
	Var9 = { -26.8902f, -0.038f, 129.5137f };
	fVar12 = 30.3982f;
	Var13 = { Var6 - Var0 };
	fVar16 = (Var9.f_2 - Var3.f_2);
	uParam0->f_6 = { func_149(func_149(uParam0->f_14, (-1f * uParam0->f_17.f_2)) + Var13, uParam0->f_17.f_2) };
	uParam0->f_9 = { Var9 };
	uParam0->f_9.f_2 = (uParam0->f_17.f_2 + fVar16);
	uParam0->f_12 = fVar12;
}

void func_979(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = func_790(iParam0);
	if (iVar0 == 8 || iVar0 == 21)
	{
		uParam1->f_22.f_57 = "GTAO_EXEC_WH_GARAGE_DOOR_SOUNDS";
		uParam1->f_22.f_56 = "Door_Open";
		uParam1->f_22.f_59 = "GTAO_EXEC_WH_GARAGE_DOOR_SOUNDS";
		uParam1->f_22.f_58 = "Door_Close";
	}
	else
	{
		uParam1->f_22.f_49[0] = "PUSH";
		uParam1->f_22.f_49[1] = "LIMIT";
		uParam1->f_22.f_52[0] = 0.271f;
		uParam1->f_22.f_52[1] = 0.411f;
		uParam1->f_22.f_55 = "GTAO_EXEC_WH_DOOR_GENERIC_SOUNDS";
		uParam1->f_22.f_59 = "GTAO_EXEC_WH_DOOR_GENERIC_SOUNDS";
		uParam1->f_22.f_58 = "Closed";
	}
}

void func_980(var uParam0)
{
	uParam0->f_84.f_1 = { -15.091f, 2.575f, 0f };
	uParam0->f_84.f_4 = { -15.091f, 5.875f, 2.2f };
	uParam0->f_84.f_7 = 3.86f;
	uParam0->f_84 = 90f;
}

void func_981(var uParam0)
{
	uParam0->f_84.f_1 = { -8.78f, 6.917f, 0f };
	uParam0->f_84.f_4 = { -8.78f, 10f, 2.2f };
	uParam0->f_84.f_7 = 3.86f;
	uParam0->f_84 = 90f;
}

void func_982(var uParam0)
{
	uParam0->f_84.f_1 = { -7.911f, 4.559f, 0f };
	uParam0->f_84.f_4 = { -7.911f, 6.989f, 2.2f };
	uParam0->f_84.f_7 = 3.86f;
	uParam0->f_84 = 90f;
}

void func_983(int iParam0, char* sParam1, var uParam2, var uParam3)
{
	switch (func_461(func_790(iParam0)))
	{
		case 0:
			*uParam2 = { 1094.988f, -3104.776f, -40f };
			*uParam3 = 0f;
			StringCopy(sParam1, "ex_int_warehouse_s_dlc", 64);
			break;
		
		case 1:
			*uParam2 = { 1056.488f, -3105.724f, -40f };
			*uParam3 = 0f;
			StringCopy(sParam1, "ex_int_warehouse_m_dlc", 64);
			break;
		
		case 2:
			*uParam2 = { 1007.135f, -3102.079f, -40f };
			*uParam3 = 0f;
			StringCopy(sParam1, "ex_int_warehouse_l_dlc", 64);
			break;
	}
}

int func_984(var uParam0)
{
	return 1;
}

bool func_985()
{
	int iVar0;
	
	iVar0 = unk_0xA96867DD0A63C62C(joaat("am_mp_smpl_interior_int"));
	return (iVar0 > 0 || unk_0x712B9E0F5CC8AE72("AM_MP_SMPL_INTERIOR_INT", Global_1751948.f_523, 1, 0));
}

int func_986(int iParam0)
{
	if (unk_0x05D53E8262695692(unk_0x0C1D3C552325765B(), "AM_MP_SMPL_INTERIOR_EXT", iParam0) || unk_0x712B9E0F5CC8AE72("AM_MP_SMPL_INTERIOR_EXT", iParam0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_987(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (func_461(iParam0))
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

bool func_988(int iParam0)
{
	return func_783(0, iParam0);
}

int func_989()
{
	if (unk_0x08BA6DD398CA197C(iLocal_722, 13))
	{
		return 1;
	}
	if (unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		return 0;
	}
	if (unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), func_990(Local_99.f_197 + 1), 1) > 100f)
	{
		return 0;
	}
	return 1;
}

Vector3 func_990(int iParam0)
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

void func_991()
{
	func_1017();
	func_671();
	func_1016();
	func_1015();
	func_656();
	func_1012();
	func_996();
	func_993();
	func_647();
	func_992();
}

void func_992()
{
}

void func_993()
{
	struct<3> Var0;
	float fVar3;
	
	if (func_371())
	{
		return;
	}
	if (func_28())
	{
		return;
	}
	Var0 = { func_990(Local_99.f_197 + 1) };
	fVar3 = unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Var0);
	if (fVar3 < 62500f)
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_722, 14))
		{
			func_180(1, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
			func_994();
			unk_0x88B0F0DC270164B7(&iLocal_722, 14);
		}
	}
	else if (fVar3 > 250000f)
	{
		func_410();
	}
}

void func_994()
{
	int iVar0;
	
	if (func_371())
	{
		return;
	}
	iVar0 = Local_99.f_197 + 1;
	switch (iVar0)
	{
		case 1:
			func_995(93.9801f, -2532.177f, 5.0778f, 124.1404f, 1065353216);
			func_995(96.7817f, -2536.936f, 5f, 121.982f, 1065353216);
			func_995(106.1278f, -2539.717f, 5.0003f, 111.4201f, 1065353216);
			func_995(7.7245f, -2598.042f, 5.0075f, 283.2584f, 1065353216);
			func_995(13.7512f, -2602.234f, 5.0069f, 290.8908f, 1065353216);
			func_995(113.3588f, -2586.112f, 5.0121f, 88.5573f, 1065353216);
			func_995(111.6119f, -2592.456f, 5.0229f, 78.4188f, 1065353216);
			func_995(8.5363f, -2518.204f, 5.0163f, 213.3867f, 1065353216);
			break;
		
		case 2:
			func_995(-1150.759f, -1273.248f, 5.7478f, 282.4241f, 1065353216);
			func_995(-1019.696f, -1323.524f, 4.9009f, 45.7692f, 1065353216);
			func_995(-1012.756f, -1319.543f, 4.9001f, 43.138f, 1065353216);
			func_995(-1005.033f, -1315.236f, 4.941f, 58.4519f, 1065353216);
			func_995(-1014.173f, -1307.516f, 5.2364f, 52.7034f, 1065353216);
			func_995(-1022.801f, -1245.642f, 5.014f, 106.8874f, 1065353216);
			func_995(-1112.947f, -1296.568f, 4.258f, 298.12f, 1065353216);
			func_995(-1118.264f, -1218.13f, 1.5169f, 188.9163f, 1065353216);
			break;
		
		case 3:
			func_995(856.3708f, -1013.008f, 28.4203f, 271.5768f, 1065353216);
			func_995(863.5153f, -993.5998f, 29.2774f, 239.646f, 1065353216);
			func_995(933.4873f, -990.8866f, 37.0241f, 127.1206f, 1065353216);
			func_995(932.2711f, -1007.077f, 36.7075f, 90.5105f, 1065353216);
			func_995(867.5297f, -1076.188f, 27.7798f, 268.1065f, 1065353216);
			func_995(868.5233f, -1092.591f, 27.7269f, 302.3375f, 1065353216);
			func_995(927.5185f, -1092.741f, 33.1574f, 50.444f, 1065353216);
			func_995(936.7908f, -1078.382f, 34.7149f, 77.3112f, 1065353216);
			break;
		
		case 4:
			func_995(243.2832f, -1999.028f, 18.8177f, 341.0091f, 1065353216);
			func_995(273.1573f, -2010.138f, 18.6668f, 29.2809f, 1065353216);
			func_995(171.7093f, -1951.986f, 18.7677f, 286.1576f, 1065353216);
			func_995(186.7918f, -1911.818f, 21.7781f, 235.4626f, 1065353216);
			func_995(201.1726f, -1898.231f, 23.2412f, 220.1641f, 1065353216);
			func_995(223.3617f, -1889.273f, 24.4098f, 178.0541f, 1065353216);
			func_995(260.1144f, -1909.984f, 24.8323f, 142.8378f, 1065353216);
			func_995(289.037f, -1933.327f, 24.3999f, 148.1186f, 1065353216);
			break;
		
		case 5:
			func_995(-444.3442f, 229.0294f, 82.0416f, 232.9779f, 1065353216);
			func_995(-446.8376f, 224.1595f, 82.0175f, 236.8468f, 1065353216);
			func_995(-398.6772f, 227.0964f, 82.593f, 160.9651f, 1065353216);
			func_995(-412.1818f, 224.1092f, 82.5148f, 207.9725f, 1065353216);
			func_995(-368.4009f, 193.0408f, 82.6566f, 97.3058f, 1065353216);
			func_995(-471.0459f, 153.4937f, 77.0803f, 301.4885f, 1065353216);
			func_995(-492.4609f, 191.0608f, 69.9316f, 260.3055f, 1065353216);
			func_995(-492.152f, 185.6411f, 69.9316f, 267.4302f, 1065353216);
			break;
		
		case 6:
			func_995(-1119.86f, -2022.411f, 12.2297f, 292.6461f, 1065353216);
			func_995(-1102.049f, -1983.884f, 12.1406f, 223.9062f, 1065353216);
			func_995(-1084.243f, -1968.423f, 12.1514f, 204.0761f, 1065353216);
			func_995(-1033.419f, -2068.45f, 12.4615f, 33.9101f, 1065353216);
			func_995(-1037.025f, -2088.586f, 12.6459f, 21.4939f, 1065353216);
			func_995(-1056.915f, -2088.188f, 12.2919f, 8.2791f, 1065353216);
			func_995(-1020.213f, -2077.749f, 12.7601f, 40.6275f, 1065353216);
			func_995(-1032.6f, -2101.71f, 12.6309f, 20.9321f, 1065353216);
			break;
		
		case 7:
			func_995(-1323.561f, -801.4799f, 16.5991f, 309.0983f, 1065353216);
			func_995(-1334.537f, -788.2323f, 18.9061f, 263.1596f, 1065353216);
			func_995(-1333.08f, -758.4105f, 19.367f, 226.0109f, 1065353216);
			func_995(-1326.314f, -754.1177f, 19.367f, 215.8053f, 1065353216);
			func_995(-1252.46f, -880.908f, 11.1188f, 6.1107f, 1065353216);
			func_995(-1234.162f, -868.6242f, 11.821f, 83.8965f, 1065353216);
			func_995(-1234.714f, -903.713f, 11.0757f, 22.5172f, 1065353216);
			func_995(-1274.141f, -860.0457f, 11.2177f, 313.1372f, 1065353216);
			break;
		
		case 8:
			func_995(-954.9498f, -2765.854f, 12.9446f, 300.864f, 1065353216);
			func_995(-967.7481f, -2758.093f, 12.8166f, 282.6459f, 1065353216);
			func_995(-974.1952f, -2721.633f, 12.7566f, 258.5829f, 1065353216);
			func_995(-956.0557f, -2704.292f, 12.831f, 242.288f, 1065353216);
			func_995(-900.7191f, -2652.238f, 12.7618f, 177.695f, 1065353216);
			func_995(-870.0709f, -2643.078f, 12.9495f, 171.6949f, 1065353216);
			func_995(-837.4813f, -2697.67f, 12.8121f, 98.2582f, 1065353216);
			func_995(-830.3173f, -2716.68f, 12.9445f, 57.01767f, 1065353216);
			break;
		
		case 9:
			func_995(246.686f, -2954.608f, 4.8465f, 201.0552f, 1065353216);
			func_995(237.4989f, -2960.046f, 4.8401f, 219.4444f, 1065353216);
			func_995(278.0732f, -2933.848f, 4.6858f, 173.7103f, 1065353216);
			func_995(305.2663f, -2953.124f, 4.9916f, 152.1779f, 1065353216);
			func_995(306.9686f, -3051.72f, 4.8569f, 73.9139f, 1065353216);
			func_995(290.1032f, -3067.022f, 4.9168f, 22.2414f, 1065353216);
			func_995(248.4644f, -3081.733f, 4.8082f, 5.7888f, 1065353216);
			func_995(213.5583f, -3006.335f, 4.8585f, 281.9704f, 1065353216);
			break;
		
		case 10:
			func_995(1533.422f, -2207.716f, 76.5674f, 341.3423f, 1065353216);
			func_995(1518.683f, -2197.165f, 76.0905f, 323.85f, 1065353216);
			func_995(1505.83f, -2149.169f, 76.2134f, 287.7332f, 1065353216);
			func_995(1517.668f, -2071.069f, 76.2881f, 218.4776f, 1065353216);
			func_995(1513.971f, -2047.472f, 76.3438f, 229.7462f, 1065353216);
			func_995(1562.546f, -2050.737f, 76.4175f, 158.5163f, 1065353216);
			func_995(1571.823f, -2065.519f, 76.0999f, 139.3434f, 1065353216);
			func_995(1559.668f, -2212.969f, 77.2272f, 30.3786f, 1065353216);
			break;
		
		case 11:
			func_995(-244.4574f, -2679.464f, 5.0003f, 115.7166f, 1065353216);
			func_995(-247.8431f, -2669.538f, 5.0003f, 137.3239f, 1065353216);
			func_995(-273.936f, -2646.584f, 5.1595f, 138.4986f, 1065353216);
			func_995(-283.7866f, -2643.465f, 5.1536f, 145.8487f, 1065353216);
			func_995(-338.5266f, -2716.292f, 5.0016f, 353.4592f, 1065353216);
			func_995(-340.0283f, -2721.088f, 5.0015f, 349.123f, 1065353216);
			func_995(-284.5308f, -2623.301f, 5.0382f, 150.473f, 1065353216);
			func_995(-257.3565f, -2632.506f, 5.0221f, 131.679f, 1065353216);
			break;
		
		case 12:
			func_995(515.9905f, -720.5799f, 23.8387f, 5.6255f, 1065353216);
			func_995(497.1281f, -728.9662f, 23.8776f, 343.3149f, 1065353216);
			func_995(447.638f, -685.7243f, 27.4277f, 285.8884f, 1065353216);
			func_995(449.3201f, -668.7817f, 27.3296f, 271.4846f, 1065353216);
			func_995(498.4707f, -568.4258f, 23.747f, 193.0118f, 1065353216);
			func_995(514.7365f, -562.4415f, 23.7507f, 158.6247f, 1065353216);
			func_995(527.8929f, -562.6914f, 23.7997f, 164.4089f, 1065353216);
			func_995(544.1755f, -594.525f, 23.7432f, 152.6498f, 1065353216);
			break;
		
		case 13:
			func_995(-518.2458f, -1828.47f, 21.5839f, 6.9263f, 1065353216);
			func_995(-493.7525f, -1823.626f, 21.8486f, 29.4302f, 1065353216);
			func_995(-450.3873f, -1794.818f, 20.7743f, 85.0772f, 1065353216);
			func_995(-597.9962f, -1729.797f, 22.139f, 232.3263f, 1065353216);
			func_995(-581.0703f, -1718.014f, 21.9858f, 214.5117f, 1065353216);
			func_995(-449.3808f, -1766.115f, 19.5349f, 112.1522f, 1065353216);
			func_995(-541.6173f, -1821.735f, 21.9225f, 317.0811f, 1065353216);
			func_995(-618.6395f, -1711.974f, 23.0683f, 235.603f, 1065353216);
			break;
		
		case 14:
			func_995(-291.3686f, -1274.791f, 29.4583f, 184.0252f, 1065353216);
			func_995(-260.6114f, -1286.958f, 30.0291f, 148.6145f, 1065353216);
			func_995(-245.4854f, -1358.204f, 30.606f, 97.9413f, 1065353216);
			func_995(-258.2249f, -1408.08f, 30.2904f, 46.1851f, 1065353216);
			func_995(-293.8492f, -1408.819f, 30.2952f, 0.4148f, 1065353216);
			func_995(-335.4179f, -1371.286f, 30.2957f, 304.5049f, 1065353216);
			func_995(-337.6552f, -1333.524f, 30.3008f, 289.5995f, 1065353216);
			func_995(-339.4502f, -1311.185f, 30.2086f, 224.0032f, 1065353216);
			break;
		
		case 15:
			func_995(296.9105f, 339.6927f, 104.52f, 250.3169f, 1065353216);
			func_995(286.231f, 324.1514f, 104.6652f, 267.2802f, 1065353216);
			func_995(314.8456f, 295.4021f, 104.543f, 341.0804f, 1065353216);
			func_995(356.8475f, 275.1253f, 102.1478f, 349.9545f, 1065353216);
			func_995(403.6933f, 290.7596f, 101.9871f, 47.5594f, 1065353216);
			func_995(416.5997f, 309.7407f, 101.987f, 69.7807f, 1065353216);
			func_995(388.4496f, 357.7741f, 101.479f, 81.7557f, 1065353216);
			func_995(323.6804f, 367.7533f, 104.3807f, 251.082f, 1065353216);
			break;
		
		case 16:
			func_995(983.1635f, -1507.116f, 30.4318f, 115.3138f, 1065353216);
			func_995(976.6813f, -1462.792f, 30.4421f, 170.1272f, 1065353216);
			func_995(965.1019f, -1457.18f, 30.1302f, 187.7104f, 1065353216);
			func_995(954.3276f, -1500.289f, 29.9441f, 234.0993f, 1065353216);
			func_995(967.4816f, -1632.333f, 29.1107f, 353.4453f, 1065353216);
			func_995(890.0863f, -1572.723f, 29.84f, 281.6886f, 1065353216);
			func_995(905.2548f, -1543.512f, 29.5311f, 219.2688f, 1065353216);
			func_995(922.9328f, -1544.217f, 29.8062f, 181.6137f, 1065353216);
			break;
		
		case 17:
			func_995(754.465f, -835.6287f, 24.8675f, 202.5404f, 1065353216);
			func_995(760.689f, -821.2197f, 25.2721f, 185.6987f, 1065353216);
			func_995(799.4153f, -825.4905f, 25.19f, 155.4635f, 1065353216);
			func_995(833.3179f, -912.5907f, 24.5379f, 96.2594f, 1065353216);
			func_995(836.246f, -921.1563f, 25.0122f, 86.3203f, 1065353216);
			func_995(798.7469f, -975.9729f, 25.1518f, 41.5425f, 1065353216);
			func_995(753.8427f, -972.2688f, 23.9505f, 340.2511f, 1065353216);
			func_995(737.0633f, -940.94f, 23.8394f, 264.3263f, 1065353216);
			break;
		
		case 18:
			func_995(1021.727f, -2096.922f, 29.9949f, 131.5094f, 1065353216);
			func_995(1004.22f, -2097.619f, 30.1617f, 218.0245f, 1065353216);
			func_995(1048.305f, -2162.876f, 31.0285f, 17.1583f, 1065353216);
			func_995(1053.165f, -2138.979f, 31.6269f, 138.5871f, 1065353216);
			func_995(992.7523f, -2239.598f, 29.5519f, 335.4291f, 1065353216);
			func_995(975.8146f, -2201.123f, 29.5516f, 290.5504f, 1065353216);
			func_995(1035.371f, -2203.133f, 30.8934f, 77.8725f, 1065353216);
			func_995(1040.114f, -2203.875f, 30.8934f, 62.6027f, 1065353216);
			break;
		
		case 19:
			func_995(957.4448f, -2452.676f, 27.553f, 231.7168f, 1065353216);
			func_995(957.0999f, -2474.014f, 27.4957f, 267.1929f, 1065353216);
			func_995(945.7234f, -2497.031f, 27.453f, 256.6793f, 1065353216);
			func_995(946.9409f, -2478.706f, 27.3433f, 233.4717f, 1065353216);
			func_995(932.4327f, -2534.006f, 27.3027f, 231.8695f, 1065353216);
			func_995(900.2678f, -2552.213f, 27.4211f, 283.9405f, 1065353216);
			func_995(1028.407f, -2477.004f, 27.5034f, 91.0284f, 1065353216);
			func_995(1021.066f, -2459.521f, 27.5462f, 131.3309f, 1065353216);
			break;
		
		case 20:
			func_995(-237.7643f, 248.6469f, 91.0445f, 196.7769f, 1065353216);
			func_995(-202.8588f, 245.9139f, 91.0419f, 127.8667f, 1065353216);
			func_995(-199.1134f, 179.474f, 76.6409f, 79.199f, 1065353216);
			func_995(-217.1594f, 141.0364f, 68.6993f, 21.5726f, 1065353216);
			func_995(-240.5069f, 139.3272f, 68.6369f, 352.6409f, 1065353216);
			func_995(-280.1349f, 153.3907f, 74.2578f, 344.9672f, 1065353216);
			func_995(-177.5456f, 215.1789f, 87.8734f, 101.2481f, 1065353216);
			func_995(-174.6252f, 206.0641f, 87.426f, 84.7397f, 1065353216);
			break;
		
		case 21:
			func_995(578.9037f, -1883.818f, 24.4357f, 190.9878f, 1065353216);
			func_995(601.1657f, -1872.286f, 23.7783f, 136.6622f, 1065353216);
			func_995(573.7683f, -1869.375f, 24.1791f, 138.5911f, 1065353216);
			func_995(531.532f, -1858.341f, 24.332f, 211.7805f, 1065353216);
			func_995(542.208f, -1844.02f, 24.332f, 187.9743f, 1065353216);
			func_995(502.1498f, -1917.516f, 24.3684f, 289.8235f, 1065353216);
			func_995(512.4601f, -1985.896f, 23.9851f, 299.9174f, 1065353216);
			func_995(479.1975f, -1908.422f, 24.2436f, 282.8994f, 1065353216);
			break;
		
		case 22:
			func_995(172.8245f, -2183.052f, 5.0294f, 116.2516f, 1065353216);
			func_995(173.7597f, -2198.917f, 5.171f, 72.2949f, 1065353216);
			func_995(173.7982f, -2224.849f, 5.171f, 126.6793f, 1065353216);
			func_995(181.6316f, -2238.538f, 5.0035f, 61.6889f, 1065353216);
			func_995(147.6168f, -2252.883f, 5.0856f, 63.8371f, 1065353216);
			func_995(147.2348f, -2244.339f, 5.0856f, 70.1362f, 1065353216);
			func_995(178.0549f, -2206.273f, 5.0238f, 38.9746f, 1065353216);
			func_995(176.9219f, -2223.301f, 5.0329f, 133.7211f, 1065353216);
			break;
	}
}

void func_995(struct<3> Param0, float fParam3, int iParam4)
{
	if (!Global_2404993.f_1682)
	{
	}
	if (Global_2404993.f_649 < 100)
	{
		if (unk_0x652D2EEEF1D3E62C(Param0) <= 0.01f)
		{
			return;
		}
		Global_2404993.f_649.f_1[Global_2404993.f_649 /*5*/] = { Param0 };
		Global_2404993.f_649.f_1[Global_2404993.f_649 /*5*/].f_3 = fParam3;
		Global_2404993.f_649.f_1[Global_2404993.f_649 /*5*/].f_4 = iParam4;
		Global_2404993.f_649++;
	}
}

void func_996()
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	
	if (!func_371())
	{
		return;
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_722, 19))
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_99.f_2[0 /*10*/].f_2))
			{
				unk_0x4824CA3A165ECF77(unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2), 0, 0);
				unk_0x88B0F0DC270164B7(&iLocal_722, 19);
			}
		}
	}
	if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 8))
	{
		if (!unk_0x08BA6DD398CA197C(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1, 9))
		{
			if (unk_0x3CF373660FCFAFCE(Local_99.f_2[0 /*10*/].f_2))
			{
				if (!func_13(Local_99.f_2[0 /*10*/].f_2))
				{
					unk_0x88B0F0DC270164B7(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1), 9);
				}
			}
		}
	}
	if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 6))
	{
		if (!unk_0x08BA6DD398CA197C(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1, 7))
		{
			if (unk_0x3CF373660FCFAFCE(Local_99.f_2[0 /*10*/].f_2))
			{
				Var1 = { unk_0xC59DF10B4FC39DF8(unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2), 0) };
				if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Var1) < 90000f)
				{
					unk_0x88B0F0DC270164B7(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1), 7);
				}
			}
		}
	}
	if (iLocal_725 == -2)
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_99.f_2[0 /*10*/].f_2))
			{
				if (!unk_0x08BA6DD398CA197C(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1, 8))
				{
					if (func_1011(unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2)))
					{
						unk_0x88B0F0DC270164B7(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1), 8);
					}
				}
				else if (!func_1011(unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2)))
				{
					unk_0x09C86C0C5CA26B1E(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1), 8);
				}
			}
		}
	}
	if (!unk_0x08BA6DD398CA197C(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1, 2) && !unk_0x08BA6DD398CA197C(Local_99.f_1, 4))
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_2[0 /*10*/].f_2))
		{
			iVar0 = unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2);
			if (unk_0x1F1B2B6E500380C5(iVar0, 0))
			{
				if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
				{
					if (unk_0x4745637EEB85132D(unk_0xA0081090911D13E5()))
					{
						if (unk_0xF8DB47D339B8B953(unk_0xA0081090911D13E5(), 0) == iVar0)
						{
							if (unk_0x8FD32443A080784B(iVar0, -1, 0) == unk_0xA0081090911D13E5())
							{
								if (!unk_0x08BA6DD398CA197C(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1, 3))
								{
									unk_0x88B0F0DC270164B7(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1), 3);
								}
							}
							else if (unk_0x08BA6DD398CA197C(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1, 3))
							{
								unk_0x09C86C0C5CA26B1E(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1), 3);
							}
						}
						else if (unk_0x08BA6DD398CA197C(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1, 3))
						{
							unk_0x09C86C0C5CA26B1E(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1), 3);
						}
					}
					else if (unk_0x08BA6DD398CA197C(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1, 3))
					{
						unk_0x09C86C0C5CA26B1E(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1), 3);
					}
				}
				else if (unk_0x08BA6DD398CA197C(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1, 3))
				{
					unk_0x09C86C0C5CA26B1E(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1), 3);
				}
			}
		}
	}
	iVar4 = func_55();
	iVar5 = func_55();
	if (iLocal_725 != Local_99.f_215)
	{
		if (!func_28())
		{
			if (!func_669())
			{
				if (unk_0x16833EFAA58E63DB(uLocal_835))
				{
					unk_0x0B57C567D698C373(&uLocal_835);
				}
				if (Local_99.f_215 == unk_0x848AF823A8EA3C62())
				{
					func_1010(1);
				}
				else if (Local_99.f_215 > -1)
				{
					iVar4 = func_1009();
					if (iVar4 != func_55())
					{
						if (func_522(1))
						{
							iVar5 = func_524();
							if (iVar5 != func_55())
							{
								if (func_293(iVar4, iVar5, 1))
								{
									func_405(iVar4, 478, 1);
									func_403(iVar4, func_408(iLocal_836), 1);
									func_1010(1);
								}
							}
						}
						func_1007("DCONTRA_TCKV", iVar4, 0, 0, 0, 1, 1, 0);
					}
				}
				else if (Local_99.f_215 == -1)
				{
					if (unk_0x16833EFAA58E63DB(uLocal_833))
					{
						unk_0x0B57C567D698C373(&uLocal_833);
					}
					iVar4 = func_1006();
					if (iVar4 != func_55())
					{
						func_405(iVar4, 478, 0);
						func_403(iVar4, func_408(iLocal_836), 0);
					}
					func_1005(3, 1);
				}
				iLocal_725 = Local_99.f_215;
			}
			else
			{
				func_1005(1, 0);
			}
		}
	}
	func_1004();
	func_1002(0);
	func_997();
}

void func_997()
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	
	iVar0 = func_1009();
	Var1 = { func_40() };
	if (unk_0x16833EFAA58E63DB(uLocal_833))
	{
		unk_0x29F530EB20218AC0(12, &uVar4, &uVar5, &uVar6, &uVar7);
		unk_0xA75B05D6DFDD8308(1, Var1, 0f, 0f, 0f, 0f, 0f, 0f, 0.6f, 0.6f, 1f, uVar4, uVar5, uVar6, 100, 0, 0, 2, 0, 0, 0, 0);
	}
	if (unk_0x3CF373660FCFAFCE(Local_99.f_2[0 /*10*/].f_2))
	{
		if (unk_0xB480350E4250D92A(Local_99.f_2[0 /*10*/].f_2))
		{
			if (!unk_0x08BA6DD398CA197C(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1, 2))
			{
				if (iVar0 == unk_0x0C1D3C552325765B())
				{
					if (!unk_0xEB361B4BD195A4D3(unk_0x21F191D9AFF98B5E(iVar0)))
					{
						if (unk_0x6E07DBF03F3AC258(unk_0x21F191D9AFF98B5E(iVar0), Var1, 6f, 6f, 2f, 0, 1, 0))
						{
							func_998(unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2), 0, 1);
							if (unk_0x775F8FFC8E29F525(unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2)))
							{
								unk_0x58046B46E2D18640(unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2), 1);
							}
							unk_0x88B0F0DC270164B7(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1), 2);
						}
					}
				}
			}
		}
	}
}

int func_998(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (!func_1000(iParam0, 1, 1, 0, 0, 0, 1, 0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = unk_0x81C85E54237F8A2E(iVar0);
			if (func_1122(iVar1, 0, 1))
			{
				if (unk_0x1FD87E888EB4FC00(unk_0x21F191D9AFF98B5E(iVar1), iParam0, 0))
				{
					func_999(func_570(iVar1), 0, 0f, 0, 0, 0);
				}
			}
			iVar0++;
		}
	}
	else if (!unk_0x775F8FFC8E29F525(iParam0))
	{
		unk_0x33E20212DBE504C2(iParam0);
	}
	else
	{
		if (bParam2)
		{
			unk_0x58046B46E2D18640(iParam0, 1);
		}
		unk_0xBB21B5C3111E5F85(iParam0, 0);
		if (bParam1)
		{
			unk_0x39800A40136ECF37(iParam0, 1);
		}
		return 1;
	}
	return 0;
}

void func_999(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	struct<7> Var0;
	
	Var0.f_0 = 59;
	Var0.f_1 = unk_0x0C1D3C552325765B();
	Var0.f_4 = iParam1;
	Var0.f_5 = iParam4;
	Var0.f_2 = fParam2;
	Var0.f_3 = iParam3;
	Var0.f_6 = iParam5;
	if (!iParam0 == 0)
	{
		unk_0x8E36889D76C8D4FA(1, &Var0, 7, iParam0);
	}
}

int func_1000(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = unk_0x8EF0E5E933BE561D(iParam0) + 1;
	if (iParam4 || !unk_0x912AD5A10E7633F0(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_1001(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0xD3FACCDA4D66AEAD(iVar2))
			{
				if (iParam3 && iVar2 == unk_0xA0081090911D13E5())
				{
				}
				else if (bParam2)
				{
					if (!unk_0xEB361B4BD195A4D3(iVar2))
					{
						if (unk_0x54F0AEFB11EA090A(iVar2))
						{
							if (unk_0x7DC70BB637724B43(unk_0xA43666ACD375E339(iVar2)) == 0)
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
				else if (!unk_0xEB361B4BD195A4D3(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_1001(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0x6315EBE95A97CADF(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x8FD32443A080784B(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0xD3FACCDA4D66AEAD(iVar0) && !unk_0x912AD5A10E7633F0(iParam0, 0))
		{
			iVar0 = unk_0xA89799E38057BB0B(iParam0, iParam1);
			if (!unk_0x912AD5A10E7633F0(iVar0, 0))
			{
				if (unk_0x21178DF77817BF39(iVar0, 451360105) == 1 || unk_0x21178DF77817BF39(iVar0, -828834893) == 1)
				{
					if (unk_0x2A488C176D52CCA5(unk_0xC59DF10B4FC39DF8(iParam0, 0), unk_0xC59DF10B4FC39DF8(iVar0, 0)) < 10f)
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

void func_1002(int iParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (func_2())
	{
		return;
	}
	if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*10*/].f_2))
	{
		if (func_13(Local_99.f_2[iParam0 /*10*/].f_2))
		{
			if (unk_0x16833EFAA58E63DB(uLocal_835))
			{
				if (Local_99.f_216 > -1)
				{
					unk_0x29F530EB20218AC0(9, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				else if (iLocal_725 == -2)
				{
					unk_0x29F530EB20218AC0(6, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				else
				{
					unk_0x29F530EB20218AC0(9, &uVar0, &uVar1, &uVar2, &uVar3);
				}
				func_1003(unk_0x15F0E6D5AC2852F1(Local_99.f_2[iParam0 /*10*/].f_2), uVar0, uVar1, uVar2);
			}
		}
	}
}

void func_1003(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	
	fVar6 = 0.5f;
	unk_0xA27A0E75635DD922(unk_0x705BC1BB91F530B5(uParam0), &Var0, &Var3);
	fVar7 = ((Var3.f_2 - Var0.f_2) / 2f);
	fVar8 = (Var3.f_2 - fVar7);
	if (fVar6 <= (fVar8 + 0.1f))
	{
		fVar6 = (fVar8 + 0.4f);
	}
	unk_0xA75B05D6DFDD8308(2, unk_0xC59DF10B4FC39DF8(iParam0, 1) + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar6), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, uParam1, uParam2, uParam3, 100, 1, 1, 2, 0, 0, 0, 0);
}

void func_1004()
{
	if (iLocal_725 == -2)
	{
		if (unk_0x16833EFAA58E63DB(uLocal_835))
		{
			if (iLocal_726 != Local_99.f_222)
			{
				iLocal_726 = Local_99.f_222;
				unk_0x9F80CD84AD2B3DA4(uLocal_835, iLocal_726);
			}
		}
	}
	else if (iLocal_726 != 255)
	{
		iLocal_726 = 255;
	}
}

void func_1005(int iParam0, bool bParam1)
{
	if (!unk_0x16833EFAA58E63DB(uLocal_835))
	{
		if (unk_0x3CF373660FCFAFCE(Local_99.f_2[0 /*10*/].f_2))
		{
			if (func_13(Local_99.f_2[0 /*10*/].f_2))
			{
				uLocal_835 = unk_0x91B4D18C6AFDC14C(unk_0x15F0E6D5AC2852F1(Local_99.f_2[0 /*10*/].f_2));
				unk_0x420759DE4A6A9555(uLocal_835, 12);
				unk_0x32479C670EB9962F(uLocal_835, 478);
				unk_0x77804F3DCBA01DB5(uLocal_835, iParam0);
				if (bParam1)
				{
					unk_0x71E206F83114C3D2(uLocal_835, 1);
				}
			}
		}
	}
}

int func_1006()
{
	int iVar0;
	
	iVar0 = func_55();
	if (iLocal_725 < 0)
	{
		return iVar0;
	}
	if (unk_0xCB129F9A01D14082(unk_0x81C85E54237F8A2E(iLocal_725)))
	{
		iVar0 = unk_0x81C85E54237F8A2E(iLocal_725);
	}
	return iVar0;
}

int func_1007(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar18;
	int iVar19;
	
	iVar0 = -1;
	iVar1 = unk_0x10B1B072E9514664(iParam1);
	if (unk_0x0C67E8DCA323B26C(unk_0x0C1D3C552325765B(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, unk_0xCF66111B26743875(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, unk_0xCF66111B26743875(iParam1), 64);
		}
		unk_0x754E61FE98961B39(sParam0);
		if ((iVar1 != -1 && unk_0x1504F110F2576375()) && iVar1 < 4)
		{
			if (Global_1626500.f_80279[iVar1] != -1)
			{
				unk_0x212C24688D441F9E(func_499(iVar1, iParam1, 0));
			}
			else
			{
				unk_0x212C24688D441F9E(func_489(iParam1, -2, 1, 0));
			}
		}
		else
		{
			unk_0x212C24688D441F9E(func_489(iParam1, -2, 1, 0));
		}
		unk_0xDA35BDB37E728640(func_576(&Var2));
		if (!bParam4)
		{
			iVar0 = unk_0xBCD67D962E393B66(0, 1);
		}
		else
		{
			Global_2471194 = { func_57(iParam1) };
			if (unk_0x0ADE2D0C6811DC70(&Global_2471124, 35, &Global_2471194))
			{
				iVar18 = 0;
				if (unk_0x28C1B9853548BD8E(&(Global_2471124.f_22), "Leader") && Global_2471124.f_30 == 0)
				{
					iVar18 = 1;
				}
				if (Global_2471124.f_21 > 0)
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
						Var2 = { func_1008(&Var2) };
					}
					iVar0 = unk_0xF02E9753777E6C9C(iVar19, unk_0xF337AAE985EE065E(&Global_2471124, 35), &(Global_2471124.f_17), Global_2471124.f_30, iVar18, 0, Global_2471124, &Var2, Global_1316386, Global_1316387, Global_1316388);
				}
				else
				{
					iVar0 = unk_0x44B40096A9C3C3F9(iVar19, unk_0xF337AAE985EE065E(&Global_2471124, 35), &(Global_2471124.f_17), Global_2471124.f_30, iVar18, 0, Global_2471124, Global_1316386, Global_1316387, Global_1316388);
				}
			}
			else
			{
				iVar0 = unk_0xBCD67D962E393B66(0, 1);
			}
		}
		func_572(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_1008(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

int func_1009()
{
	int iVar0;
	
	iVar0 = func_55();
	if (Local_99.f_216 > -1)
	{
		if (unk_0xCB129F9A01D14082(unk_0x81C85E54237F8A2E(Local_99.f_216)))
		{
			iVar0 = unk_0x81C85E54237F8A2E(Local_99.f_216);
		}
	}
	return iVar0;
}

void func_1010(bool bParam0)
{
	struct<3> Var0;
	
	if (!unk_0x16833EFAA58E63DB(uLocal_833))
	{
		Var0 = { func_40() };
		uLocal_833 = unk_0x52CE8C31DD5898E7(Var0);
		if (bParam0)
		{
			unk_0x71E206F83114C3D2(uLocal_833, 1);
		}
	}
}

int func_1011(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
	{
		return 0;
	}
	Var0 = { unk_0xC59DF10B4FC39DF8(uParam0, 0) };
	if (unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), Var0, 0) < 50f)
	{
		return 1;
	}
	if (unk_0x7DB334F5F834726A(iParam0))
	{
		if (unk_0xE514F14357BDEECF(Var0, 1f))
		{
			if (unk_0x25138A378B1DA64B(unk_0xA0081090911D13E5(), iParam0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1012()
{
	int iVar0;
	
	if (!func_467())
	{
		if (func_384("DCONTRA_HLP1"))
		{
			unk_0x94724F7C938EBE34(1);
		}
		if (func_384("DCONTRA_HLP2"))
		{
			unk_0x94724F7C938EBE34(1);
		}
		if (func_384("DCONTRA_HLPCR"))
		{
			unk_0x94724F7C938EBE34(1);
		}
		if (func_384("DCONTRA_HLPVCR"))
		{
			unk_0x94724F7C938EBE34(1);
		}
		return;
	}
	iVar0 = func_360(unk_0x0C1D3C552325765B());
	if (iVar0 < 2)
	{
		if (func_384("DCONTRA_HLP1"))
		{
			unk_0x94724F7C938EBE34(1);
		}
		if (func_384("DCONTRA_HLP2"))
		{
			unk_0x94724F7C938EBE34(1);
		}
		if (func_384("DCONTRA_HLPVCR"))
		{
			unk_0x94724F7C938EBE34(1);
		}
		if (func_384("DCONTRA_HLPCR"))
		{
			unk_0x94724F7C938EBE34(1);
		}
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_722, 1))
	{
		return;
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_722, 2))
	{
		if (!func_1014(85))
		{
			if (func_765(0, 1, 1, 1))
			{
				if (unk_0x848AF823A8EA3C62() == Local_99.f_218)
				{
					if (func_371())
					{
						func_392("DCONTRA_HLP3", -1);
					}
					else
					{
						func_392("DCONTRA_HLP1", -1);
					}
					func_391(1);
					unk_0x88B0F0DC270164B7(&iLocal_722, 2);
				}
				else if (func_1049() == Local_99.f_218)
				{
					if (func_371())
					{
						func_392("DCONTRA_HLP4", -1);
					}
					else
					{
						func_392("DCONTRA_HLP2", -1);
					}
					func_391(1);
					unk_0x88B0F0DC270164B7(&iLocal_722, 2);
				}
			}
		}
	}
	else if (!unk_0x08BA6DD398CA197C(iLocal_722, 8))
	{
		if (!func_371())
		{
			if (func_765(0, 1, 1, 1))
			{
				if (func_567())
				{
					func_392("DCONTRA_HLPVCR", -1);
				}
				else
				{
					func_392("DCONTRA_HLPCR", -1);
				}
				func_391(1);
				unk_0x88B0F0DC270164B7(&iLocal_722, 8);
			}
		}
	}
	if (func_371())
	{
		if (unk_0x08BA6DD398CA197C(iLocal_722, 2))
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_722, 4))
			{
				if (func_765(0, 1, 1, 1))
				{
					func_1013("DCONTRA_HLPLS", "DCONTRA_VBLP", -1);
					func_391(1);
					unk_0x88B0F0DC270164B7(&iLocal_722, 4);
					unk_0x88B0F0DC270164B7(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1), 10);
				}
			}
		}
	}
}

void func_1013(char* sParam0, char* sParam1, int iParam2)
{
	unk_0x55B5433015A91E85(sParam0);
	unk_0xBDE6EEC5F6BDC060(sParam1);
	unk_0x85AE92859C5AADE3(0, 0, 0, iParam2);
}

bool func_1014(int iParam0)
{
	return Global_2432628.f_2198[0 /*72*/].f_1 == iParam0;
}

void func_1015()
{
	struct<3> Var0;
	
	if (!unk_0x08BA6DD398CA197C(iLocal_722, 12))
	{
		if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
		{
			Var0 = { func_951(func_789(Local_99.f_197 + 1)) };
			if (unk_0x999A157665D69393(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 1), Var0, 1) <= 200f)
			{
				uLocal_730 = unk_0x2657E29E0DD8087E();
				unk_0xCEFFD0ED686CCBA0(uLocal_730, "Bell_02", Var0, "ALARMS_SOUNDSET", 0, 0, 0);
				unk_0x88B0F0DC270164B7(&iLocal_722, 12);
			}
		}
	}
}

void func_1016()
{
	struct<3> Var0;
	
	if (func_371())
	{
		return;
	}
	if (func_28())
	{
		return;
	}
	if (!unk_0x08BA6DD398CA197C(iLocal_722, 1))
	{
		return;
	}
	if (!unk_0x08BA6DD398CA197C(Local_99.f_1, 13))
	{
		if (!unk_0x08BA6DD398CA197C(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1, 11))
		{
			Var0 = { func_40() };
			if (unk_0xB7A628320EFF8E47(unk_0xC59DF10B4FC39DF8(unk_0xA0081090911D13E5(), 0), Var0) < 22500f)
			{
				unk_0x88B0F0DC270164B7(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1), 11);
			}
		}
		if (func_467())
		{
			if (!unk_0x16833EFAA58E63DB(uLocal_834))
			{
				uLocal_834 = unk_0x52CE8C31DD5898E7(func_40());
				unk_0x71E206F83114C3D2(uLocal_834, 1);
			}
		}
		else if (unk_0x16833EFAA58E63DB(uLocal_834))
		{
			unk_0x0B57C567D698C373(&uLocal_834);
		}
	}
	else if (unk_0x16833EFAA58E63DB(uLocal_834))
	{
		unk_0x0B57C567D698C373(&uLocal_834);
	}
}

void func_1017()
{
	if (!unk_0x08BA6DD398CA197C(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1, 1))
	{
		if (!func_1048())
		{
			if (unk_0x08BA6DD398CA197C(Local_99.f_1, 6))
			{
				func_199(1);
				unk_0x88B0F0DC270164B7(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_1), 1);
			}
		}
	}
}

void func_1018()
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (func_28())
	{
		return;
	}
	iVar3 = 0;
	while (iVar3 < 10)
	{
		if (func_371())
		{
			if (!unk_0x08BA6DD398CA197C(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_2, iVar3))
			{
				if (!unk_0x08BA6DD398CA197C(Local_99.f_206, iVar3))
				{
					if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar3 /*10*/].f_1))
					{
						if (!func_24(Local_99.f_2[iVar3 /*10*/].f_1))
						{
							if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
							{
								if (func_1049() == Local_99.f_218)
								{
									if (func_1024(unk_0x564EAE6038A81C07(Local_99.f_2[iVar3 /*10*/].f_1)))
									{
										unk_0x88B0F0DC270164B7(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_2), iVar3);
									}
								}
							}
						}
					}
				}
			}
			if (!unk_0x08BA6DD398CA197C(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_3, iVar3))
			{
				if (!unk_0x08BA6DD398CA197C(Local_99.f_208, iVar3))
				{
					if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar3 /*10*/].f_2))
					{
						if (func_1023(iVar3))
						{
							unk_0x88B0F0DC270164B7(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_3), iVar3);
						}
					}
				}
			}
			if (!unk_0x08BA6DD398CA197C(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_4, iVar3))
			{
				if (!unk_0x08BA6DD398CA197C(Local_99.f_207, iVar3))
				{
					if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar3 /*10*/].f_1))
					{
						if (!func_24(Local_99.f_2[iVar3 /*10*/].f_1))
						{
							if (unk_0xB53CC268A7051C62(unk_0xC59DF10B4FC39DF8(unk_0x564EAE6038A81C07(Local_99.f_2[iVar3 /*10*/].f_1), 1), 10f, 1))
							{
								unk_0x88B0F0DC270164B7(&(Local_369[unk_0x848AF823A8EA3C62() /*11*/].f_4), iVar3);
							}
						}
					}
				}
			}
		}
		if (func_467())
		{
			if (!func_371())
			{
				if (unk_0x08BA6DD398CA197C(Local_99.f_1, 13))
				{
					func_1020(Local_99.f_2[iVar3 /*10*/].f_1, &(Local_741[iVar3 /*8*/]), -1082130432, 0, 1, 0, 0, -1, -1, 1);
				}
			}
			else if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar3 /*10*/].f_1))
			{
				if (!func_24(Local_99.f_2[iVar3 /*10*/].f_1))
				{
					if (!unk_0x39FEE545B315414E(unk_0x564EAE6038A81C07(Local_99.f_2[iVar3 /*10*/].f_1), 0))
					{
						func_1020(Local_99.f_2[iVar3 /*10*/].f_1, &(Local_741[iVar3 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
					}
				}
				else
				{
					func_1020(Local_99.f_2[iVar3 /*10*/].f_1, &(Local_741[iVar3 /*8*/]), -1082130432, 0, 0, 0, 0, -1, -1, 1);
				}
			}
		}
		switch (Local_99.f_2[iVar3 /*10*/].f_9)
		{
			case 1:
				if (unk_0xD9E8CA806A80203D())
				{
					if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar3 /*10*/].f_2))
					{
						if (func_13(Local_99.f_2[iVar3 /*10*/].f_2))
						{
							if (!func_24(Local_99.f_2[iVar3 /*10*/].f_1))
							{
								if (unk_0x72550A6F2BC0E12B(unk_0x564EAE6038A81C07(Local_99.f_2[iVar3 /*10*/].f_1), unk_0x15F0E6D5AC2852F1(Local_99.f_2[iVar3 /*10*/].f_2)))
								{
									iVar5 = unk_0x564EAE6038A81C07(Local_99.f_2[iVar3 /*10*/].f_1);
									if (func_27(&iVar5))
									{
										if (unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_2[iVar3 /*10*/].f_1), -258271821) != 1 && unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_2[iVar3 /*10*/].f_1), -258271821) != 0)
										{
											unk_0x1F1428EF73399830(unk_0x564EAE6038A81C07(Local_99.f_2[iVar3 /*10*/].f_1), unk_0x15F0E6D5AC2852F1(Local_99.f_2[iVar3 /*10*/].f_2), 25f, 786603);
										}
									}
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (unk_0xD9E8CA806A80203D())
				{
					if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar3 /*10*/].f_2))
					{
						if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar3 /*10*/].f_1))
						{
							if (func_13(Local_99.f_2[iVar3 /*10*/].f_2))
							{
								if (!func_24(Local_99.f_2[iVar3 /*10*/].f_1))
								{
									if (unk_0x72550A6F2BC0E12B(unk_0x564EAE6038A81C07(Local_99.f_2[iVar3 /*10*/].f_1), unk_0x15F0E6D5AC2852F1(Local_99.f_2[iVar3 /*10*/].f_2)))
									{
										if ((unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_2[iVar3 /*10*/].f_1), -258271821) != 1 && unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_2[iVar3 /*10*/].f_1), -258271821) != 0) || unk_0x08BA6DD398CA197C(Local_99.f_204, iVar3))
										{
											unk_0x1F1428EF73399830(unk_0x564EAE6038A81C07(Local_99.f_2[iVar3 /*10*/].f_1), unk_0x15F0E6D5AC2852F1(Local_99.f_2[iVar3 /*10*/].f_2), 30f, 786469);
											if (unk_0x08BA6DD398CA197C(Local_99.f_204, iVar3))
											{
												unk_0x09C86C0C5CA26B1E(&(Local_99.f_204), iVar3);
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
				if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar3 /*10*/].f_1))
				{
					if (!func_24(Local_99.f_2[iVar3 /*10*/].f_1))
					{
						iVar4 = unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_2[iVar3 /*10*/].f_1), -828834893);
						if (iVar4 != 1 && iVar4 != 0)
						{
							if (func_222(Local_99.f_2[iVar3 /*10*/].f_1))
							{
								unk_0xFF5CE2ECB4FBD4A8(unk_0x564EAE6038A81C07(Local_99.f_2[iVar3 /*10*/].f_1), 1);
								unk_0x8474D2383AC8AF53(unk_0x564EAE6038A81C07(Local_99.f_2[iVar3 /*10*/].f_1), 0, 0);
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
				if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar3 /*10*/].f_1))
				{
					if (!func_24(Local_99.f_2[iVar3 /*10*/].f_1))
					{
						iVar4 = unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_2[iVar3 /*10*/].f_1), -1442466670);
						if (iVar4 != 1 && iVar4 != 0)
						{
							if (func_222(Local_99.f_2[iVar3 /*10*/].f_1))
							{
								if (unk_0xB480350E4250D92A(Local_99.f_2[iVar3 /*10*/].f_1))
								{
									unk_0xFF5CE2ECB4FBD4A8(unk_0x564EAE6038A81C07(Local_99.f_2[iVar3 /*10*/].f_1), 0);
									unk_0x336610737255D8A5(unk_0x564EAE6038A81C07(Local_99.f_2[iVar3 /*10*/].f_1), 299f, 0);
								}
							}
						}
					}
				}
				break;
			
			case 6:
				if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iVar3 /*10*/].f_1))
				{
					if (!func_24(Local_99.f_2[iVar3 /*10*/].f_1))
					{
						iVar4 = unk_0x21178DF77817BF39(unk_0x564EAE6038A81C07(Local_99.f_2[iVar3 /*10*/].f_1), 1120685857);
						if (iVar4 != 1 && iVar4 != 0)
						{
							unk_0xFF5CE2ECB4FBD4A8(unk_0x564EAE6038A81C07(Local_99.f_2[iVar3 /*10*/].f_1), 0);
							Var0 = { func_158() };
							unk_0xAE807E955DB1ACA2(unk_0x564EAE6038A81C07(Local_99.f_2[iVar3 /*10*/].f_1), Var0, 250f, 0);
						}
					}
				}
				break;
		}
		iVar3++;
	}
	func_1019();
}

void func_1019()
{
	if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iLocal_1006 /*10*/].f_1))
	{
		if (!func_24(Local_99.f_2[iLocal_1006 /*10*/].f_1))
		{
			if (!unk_0x08BA6DD398CA197C(uLocal_1005, iLocal_1006))
			{
				unk_0xDDA2B67F3860CB4F(Local_99.f_2[iLocal_1006 /*10*/].f_1, 1);
				unk_0x88B0F0DC270164B7(&iLocal_1005, iLocal_1006);
			}
		}
	}
	iLocal_1006++;
	if (iLocal_1006 == 10)
	{
		iLocal_1006 = 0;
	}
}

void func_1020(var uParam0, var uParam1, float fParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0x0E091C9F3918F674(uParam0))
	{
		if (func_909())
		{
			Global_2432628 = unk_0x0C1D3C552325765B();
		}
		if (bParam3)
		{
			func_1022(unk_0x564EAE6038A81C07(uParam0), uParam1, 1, Global_2432628, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_1022(unk_0x564EAE6038A81C07(uParam0), uParam1, -1, Global_2432628, iParam4, iParam5, fParam2, iParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0x16833EFAA58E63DB(*uParam1))
	{
		func_1021(uParam1);
	}
}

void func_1021(var uParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x16833EFAA58E63DB(*uParam0))
	{
		unk_0x0B57C567D698C373(uParam0);
		bVar0 = true;
	}
	if (unk_0x16833EFAA58E63DB(uParam0->f_1))
	{
		unk_0x0B57C567D698C373(&(uParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xD3FACCDA4D66AEAD(uParam0->f_7))
	{
		if (!unk_0xEB361B4BD195A4D3(uParam0->f_7))
		{
			if (unk_0x86998240179B9048(uParam0->f_7))
			{
				unk_0x2E0880CA20A96DBE(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_1022(int iParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x4A0FB18E33FE5805();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xEB361B4BD195A4D3(iParam0))
	{
		if (!unk_0x86998240179B9048(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x2E0880CA20A96DBE(iParam0, 1);
			}
			else
			{
				unk_0x57C2F08BE587ABD2(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0xE632D58AA6B26F2D(iParam0, iParam2);
			unk_0xB1EB57004481ED5D(iParam0, fParam6);
			if (unk_0x16833EFAA58E63DB(*uParam1))
			{
				unk_0x420759DE4A6A9555(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0xFCFACD0DB9D7A57D(iParam0, iParam9);
		}
		unk_0xC6458FBC206C61F2(iParam0, uParam4);
		unk_0x71CB3379ED1310DF(iParam0, uParam5);
		*uParam1 = unk_0x968B07E3B24F8761(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x16833EFAA58E63DB(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x77804F3DCBA01DB5(*uParam1, iParam8);
				}
				unk_0x940E74834C801A79("STRING");
				if (bParam10)
				{
					unk_0xDA35BDB37E728640(uParam7);
				}
				else
				{
					unk_0xBDE6EEC5F6BDC060(uParam7);
				}
				unk_0x61C3F79E9ECF289E(*uParam1);
				unk_0x420759DE4A6A9555(*uParam1, 7);
			}
		}
		if (!unk_0x08BA6DD398CA197C(uParam1->f_6, 2))
		{
			if (unk_0x16833EFAA58E63DB(*uParam1))
			{
				if (!unk_0x509383441597090D(sParam7))
				{
					unk_0x940E74834C801A79("STRING");
					if (bParam10)
					{
						unk_0xDA35BDB37E728640(sParam7);
					}
					else
					{
						unk_0xBDE6EEC5F6BDC060(sParam7);
					}
					unk_0x61C3F79E9ECF289E(*uParam1);
				}
				unk_0x88B0F0DC270164B7(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x39FEE545B315414E(iParam0, 0))
		{
			uParam1->f_1 = unk_0x165B5F1F7F703B2D(iParam0);
			if (!unk_0x08BA6DD398CA197C(uParam1->f_6, 3))
			{
				if (unk_0x16833EFAA58E63DB(uParam1->f_1))
				{
					unk_0x420759DE4A6A9555(uParam1->f_1, 7);
					unk_0x88B0F0DC270164B7(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0x16833EFAA58E63DB(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x09C86C0C5CA26B1E(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_1023(int iParam0)
{
	if (unk_0x3CF373660FCFAFCE(Local_99.f_2[iParam0 /*10*/].f_2))
	{
		if (func_13(Local_99.f_2[iParam0 /*10*/].f_2))
		{
			if (unk_0x9E7343C699F331A6(unk_0x15F0E6D5AC2852F1(Local_99.f_2[iParam0 /*10*/].f_2), 0, 7000) || unk_0x9E7343C699F331A6(unk_0x15F0E6D5AC2852F1(Local_99.f_2[iParam0 /*10*/].f_2), 1, 40000))
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

int func_1024(var uParam0)
{
	var uVar0;
	var uVar1;
	
	if (unk_0x352F748C85BFEDC5(unk_0x0C1D3C552325765B(), uParam0))
	{
		return 1;
	}
	if (unk_0x97209242946B9B9F(unk_0x0C1D3C552325765B(), uParam0))
	{
		return 1;
	}
	if (func_1025())
	{
		if (unk_0xA6804C0975090D0A(unk_0x0C1D3C552325765B(), &uVar0))
		{
			if (unk_0x60F161681C368C4E(uVar0))
			{
				uVar1 = unk_0x90897FA118314142(iVar0);
				if (unk_0xD3FACCDA4D66AEAD(uVar1))
				{
					if (!unk_0x912AD5A10E7633F0(iVar1, 0))
					{
						if (unk_0x39FEE545B315414E(iVar1, 0))
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

bool func_1025()
{
	return Global_1573842;
}

int func_1026()
{
	if (func_1027(1))
	{
		return 1;
	}
	if (Global_2482149.f_4698.f_18)
	{
		Global_2482149.f_4698.f_18 = 0;
		return 1;
	}
	if (func_322() == func_55() || !func_1122(func_322(), 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_1027(bool bParam0)
{
	bool bVar0;
	
	if (!func_522(1))
	{
		bVar0 = false;
		if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55 != func_55())
		{
			if (func_1122(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55, 0, 1))
			{
				if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_23 == 4 || Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_23 == 8)
				{
					bVar0 = true;
				}
			}
		}
		else if (func_1028(func_192(unk_0x0C1D3C552325765B())) == 0)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			if (bParam0)
			{
				func_411(31);
				if (func_389(func_192(unk_0x0C1D3C552325765B())))
				{
					func_411(83);
				}
				if (unk_0xCB129F9A01D14082(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55))
				{
					Global_1613160 = func_489(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55, -2, 0, 0);
					if (!func_321(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55))
					{
						func_411(90);
					}
				}
				else
				{
					Global_1613160 = 1;
				}
				Global_1613144 = { Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_97 };
			}
			return 1;
		}
	}
	return 0;
}

int func_1028(int iParam0)
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
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
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
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

void func_1029()
{
	if (!func_1030(unk_0x0C1D3C552325765B()))
	{
		func_197(25);
	}
}

bool func_1030(int iParam0)
{
	return func_196(iParam0, 25);
}

void func_1031()
{
	int iVar0;
	
	iVar0 = func_261(unk_0x0C1D3C552325765B());
	iLocal_836 = func_259(iVar0);
}

void func_1032(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;
	
	if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 != iParam0)
	{
		func_1045(-1);
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 = iParam0;
		if (func_1044() != -1)
		{
			func_1043(-1);
		}
		if (func_1042() != -1)
		{
			func_1041(-1);
		}
		func_1040(iParam2);
		func_1038(iParam0);
		if (!func_206(iParam0))
		{
			fVar0 = func_205(iParam0);
			if (fVar0 != 1f)
			{
				func_202(fVar0);
				unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 1);
			}
		}
		if (!func_209(iParam0))
		{
			if (func_207(iParam0, iParam2) && iParam3 == 1)
			{
				unk_0xCF03D9C8A7F1577C(0);
				if (!unk_0xEB361B4BD195A4D3(unk_0xA0081090911D13E5()))
				{
					unk_0x00684761770DCBF1(unk_0x0C1D3C552325765B(), 0, 0);
					unk_0xA3ED6851314A3DDB(unk_0x0C1D3C552325765B(), 0);
				}
				unk_0x88B0F0DC270164B7(&(Global_1750560.f_3), 0);
			}
			else if (unk_0x34E98013CA352B7E() < 5)
			{
				unk_0xACD6D334FD769B0C(1f);
				unk_0xCF03D9C8A7F1577C(5);
			}
		}
		if (func_368())
		{
			func_197(27);
		}
		if (bParam1)
		{
			if (!func_362())
			{
				func_199(1);
			}
		}
		if ((((((iParam0 == 159 || iParam0 == 157) || iParam0 == 153) || iParam0 == 154) || iParam0 == 164) || iParam0 == 155) || iParam0 == 171)
		{
			if ((unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 1) || unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 4)) || unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 0))
			{
				func_411(6);
			}
			func_1037();
		}
		if (iParam0 == 164 || iParam0 == 208)
		{
			unk_0x806DACE5511E6771(3, 0);
			unk_0x806DACE5511E6771(5, 0);
		}
		if (func_220(unk_0x0C1D3C552325765B()) && func_214(unk_0x0C1D3C552325765B()))
		{
			unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_1), 8);
		}
		func_1033();
	}
}

void func_1033()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	uVar3 = func_1036();
	iVar2 = func_56(unk_0x0C1D3C552325765B());
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = unk_0x81C85E54237F8A2E(iVar0);
		if (unk_0xCB129F9A01D14082(iVar1))
		{
			if (func_293(iVar1, iVar2, 1) || func_1034(iVar1, unk_0x0C1D3C552325765B()))
			{
				unk_0x5EB0EEC362B46453(unk_0x0C1D3C552325765B(), iVar1, uVar3);
				unk_0x5EB0EEC362B46453(iVar1, unk_0x0C1D3C552325765B(), uVar3);
			}
		}
		iVar0++;
	}
}

int func_1034(int iParam0, int iParam1)
{
	if (func_257(iParam0, 1) && func_257(iParam1, 1))
	{
		return (func_1035(iParam0) == func_56(iParam1) || func_1035(iParam1) == func_56(iParam0));
	}
	return 0;
}

int func_1035(int iParam0)
{
	if (func_257(iParam0, 1))
	{
		return Global_1614576[func_56(iParam0) /*324*/].f_10.f_268;
	}
	return func_55();
}

int func_1036()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_524();
	if (iVar0 != func_55())
	{
		if (func_1122(iVar0, 0, 1))
		{
			iVar1 = iVar0;
			if (iVar1 != -1)
			{
				return unk_0x08BA6DD398CA197C(Global_1614576[iVar1 /*324*/].f_1, 16);
			}
		}
	}
	return 0;
}

void func_1037()
{
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 1))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 1);
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 4))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 4);
	}
	if (unk_0x08BA6DD398CA197C(Global_2482149.f_4416, 6))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 6);
	}
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 0);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4416), 2);
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_444 = 0;
	if (Global_2482149.f_4418 > 0)
	{
		unk_0xCF03D9C8A7F1577C(Global_2482149.f_4418);
	}
	Global_2482149.f_4417 = 0;
}

void func_1038(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_445(3759, -1, 0);
	iVar1 = func_1039(iParam0);
	if (iVar1 != -1)
	{
		unk_0x88B0F0DC270164B7(&iVar0, iVar1);
		func_444(3759, iVar0, -1, 1, 0);
	}
}

int func_1039(int iParam0)
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

void func_1040(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x0C1D3C552325765B();
	if (Global_1614576[iVar0 /*324*/].f_10.f_172 != iParam0)
	{
		Global_1614576[iVar0 /*324*/].f_10.f_172 = iParam0;
	}
}

void func_1041(int iParam0)
{
	if (Global_2482149.f_4698.f_146 != iParam0)
	{
		Global_2482149.f_4698.f_146 = iParam0;
	}
}

int func_1042()
{
	return Global_2482149.f_4698.f_146;
}

void func_1043(int iParam0)
{
	if (Global_2482149.f_4698.f_145 != iParam0)
	{
		Global_2482149.f_4698.f_145 = iParam0;
	}
}

int func_1044()
{
	return Global_2482149.f_4698.f_145;
}

void func_1045(int iParam0)
{
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_31 = iParam0;
}

int func_1046()
{
	struct<4> Var0;
	int iVar4;
	
	if (Local_99.f_196 != -1)
	{
		return Local_99.f_196;
	}
	Var0 = { func_1047() };
	Local_99.f_198 = func_465(Var0.f_0);
	Local_99.f_197 = (Var0.f_0 - 1);
	if (Local_99.f_197 < 0)
	{
		Local_99.f_197 = 0;
	}
	if (Local_99.f_196 == -1)
	{
		iVar4 = unk_0xB5BF1B58C833F7A9(0, 10);
		if (iVar4 > 7)
		{
			Local_99.f_196 = 99;
		}
		else
		{
			Local_99.f_196 = 0;
		}
		if (Global_262145.f_13101 && Local_99.f_196 == 0)
		{
			Local_99.f_196 = 99;
		}
		else if (Global_262145.f_13100 && Local_99.f_196 == 99)
		{
			Local_99.f_196 = 0;
		}
	}
	return Local_99.f_196;
}

struct<4> func_1047()
{
	return Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_173;
}

int func_1048()
{
	int iVar0;
	
	iVar0 = func_1049();
	if (iVar0 > -1)
	{
		if (Local_99.f_218 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_1049()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x848AF823A8EA3C62();
	iVar1 = unk_0x0C1D3C552325765B();
	if (func_34(unk_0x0C1D3C552325765B(), 0))
	{
		iVar0 = func_370();
		iVar1 = Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_434;
	}
	if (Local_369[iVar0 /*11*/].f_10 != -1)
	{
		return Local_369[iVar0 /*11*/].f_10;
	}
	if (func_213(iVar1))
	{
		Local_369[iVar0 /*11*/].f_10 = iVar0;
		if (iVar0 == Local_99.f_218)
		{
			func_693(1);
		}
	}
	else if (func_257(iVar1, 1))
	{
		iVar2 = func_524();
		if (iVar2 != func_55())
		{
			if (unk_0x3F3C7C3B52DD0ECA(iVar2))
			{
				Local_369[iVar0 /*11*/].f_10 = unk_0x9259DE19D910276C(iVar2);
			}
		}
	}
	return Local_369[iVar0 /*11*/].f_10;
}

int func_1050()
{
	if (func_371())
	{
		if (!func_63())
		{
			return 0;
		}
	}
	return 1;
}

int func_1051()
{
	return Local_99.f_0;
}

int func_1052(int iParam0)
{
	return Local_369[iParam0 /*11*/];
}

int func_1053()
{
	bool bVar0;
	var uVar1;
	
	func_1058(&bVar0, &uVar1);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315206 == 0)
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			return 1;
		}
	}
	if (func_1057())
	{
		return 1;
	}
	if (Global_2453962)
	{
		return 1;
	}
	if (func_1056())
	{
		return 1;
	}
	if (func_1055(157))
	{
		if (!func_1054())
		{
			return 1;
		}
	}
	if (func_1055(155))
	{
		return 1;
	}
	if (!unk_0x98C339BD475B043D())
	{
		return 1;
	}
	if (func_203() != 0)
	{
		if (unk_0xA96867DD0A63C62C(func_203()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1054()
{
	return Global_2442442.f_576;
}

int func_1055(int iParam0)
{
	if (unk_0xA8A2C6421DCDE504(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1056()
{
	return Global_2451777;
}

bool func_1057()
{
	return Global_2442442.f_571;
}

void func_1058(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x18088877E109A757(1))
	{
		iVar1 = unk_0xA1A2C3AC0F629413(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x4FD5256AFF6E50B7(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 351:
					func_1059(iVar0);
					break;
				
				case 2:
					unk_0x4FD5256AFF6E50B7(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 55)
					{
						*uParam0 = 1;
					}
					else if (Var4.f_2 == 32)
					{
						*uParam1 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_1059(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x4FD5256AFF6E50B7(1, iParam0, &Var0, 3))
	{
		if (func_1122(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0x21F191D9AFF98B5E(Var0.f_1);
			if (unk_0xD3FACCDA4D66AEAD(uVar3))
			{
				if (unk_0x39FEE545B315414E(iVar3, 0))
				{
					uVar4 = unk_0xF8DB47D339B8B953(iVar3, 0);
					if (unk_0x0840C5452268553B(uVar4, Var0.f_2) && unk_0x391BEA92ECF1B445())
					{
						if (func_1060(uVar4, &bVar5))
						{
							unk_0x67ECF96D21F44820(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x615DE34FC732CF11(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_1060(int iParam0, var uParam1)
{
	if (unk_0xD3FACCDA4D66AEAD(uParam0))
	{
		if (!unk_0x18C670321BC98FDA(iParam0))
		{
			if (unk_0x7DF3EE9F5A826186(iParam0))
			{
				unk_0x7B17650F15A8876D(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x687CB62D355FD7FD(iParam0, 0))
		{
			if (unk_0x775F8FFC8E29F525(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1061()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_1062()
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
	
	if (!func_34(unk_0x0C1D3C552325765B(), 0))
	{
		if (unk_0x08BA6DD398CA197C(iLocal_722, 18))
		{
			if (!unk_0x08BA6DD398CA197C(iLocal_722, 6))
			{
				if (unk_0xA86CA03D9749EEB3())
				{
					if (func_1048() || func_369())
					{
						func_625(0, 4, 0, 0, -1, -1, -1, -1);
						unk_0x88B0F0DC270164B7(&iLocal_722, 6);
					}
				}
			}
			uVar0 = Local_99.f_196;
			iVar1 = -1;
			iVar2 = -1;
			iVar3 = Local_99.f_197 + 1;
			iVar4 = Local_99.f_198;
			iVar5 = -1;
			bVar6 = !func_371();
			iVar7 = -1;
			iVar8 = 0;
			iVar9 = 0;
			iVar5 = Local_99.f_213;
			if (unk_0x08BA6DD398CA197C(Local_99.f_1, 1) || unk_0x08BA6DD398CA197C(Local_99.f_1, 4))
			{
				iVar7 = 2;
			}
			else if (unk_0x08BA6DD398CA197C(Local_99.f_1, 8))
			{
				iVar7 = 1;
			}
			else if (((unk_0x08BA6DD398CA197C(Local_99.f_1, 3) || unk_0x08BA6DD398CA197C(Local_99.f_1, 9)) || unk_0x08BA6DD398CA197C(Local_99.f_1, 15)) || unk_0x08BA6DD398CA197C(Local_99.f_1, 5))
			{
				iVar7 = 0;
			}
			if (unk_0xA86CA03D9749EEB3())
			{
				Global_1750569.f_2 = Local_99.f_267;
				Global_1750569.f_3 = Local_99.f_268;
				func_1100(uVar0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar7, iVar8, iVar9, bVar6);
			}
		}
	}
	func_410();
	if (unk_0x0EAE41B4E693BA70(unk_0xA0081090911D13E5()) == iLocal_727)
	{
		unk_0x65889F26F311FC55(unk_0xA0081090911D13E5(), uLocal_729);
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		if (unk_0xD9E8CA806A80203D())
		{
			unk_0x322323456FCFAB4D(Local_99.f_261, 1);
		}
		func_407();
	}
	func_1099();
	if (Local_99.f_219 != -1)
	{
		if (unk_0x08BA6DD398CA197C(iLocal_722, 5))
		{
			if (unk_0xCB129F9A01D14082(unk_0x81C85E54237F8A2E(Local_99.f_219)))
			{
				func_405(unk_0x81C85E54237F8A2E(Local_99.f_219), 432, 0);
				func_403(unk_0x81C85E54237F8A2E(Local_99.f_219), 1, 0);
				func_402(unk_0x81C85E54237F8A2E(Local_99.f_219), 0, 0);
				func_401(unk_0x81C85E54237F8A2E(Local_99.f_219), 0);
				func_400(unk_0x81C85E54237F8A2E(Local_99.f_219), Global_262145.f_10787, 0);
			}
		}
	}
	if (func_173(0))
	{
		func_172(0);
	}
	if (unk_0x08BA6DD398CA197C(iLocal_723, 0))
	{
		if (!unk_0x08BA6DD398CA197C(iLocal_723, 2))
		{
			unk_0x0756AF366187C194("DisableFlightMusic", 0);
			unk_0x0756AF366187C194("WantedMusicDisabled", 0);
		}
	}
	unk_0x88B0F0DC270164B7(&iLocal_723, 8);
	func_168();
	unk_0x671810EE85FFCDFC(1);
	func_693(0);
	func_1098(&(Local_99.f_269));
	func_1064(1, 0);
	if (!func_34(unk_0x0C1D3C552325765B(), 0))
	{
		unk_0xCF03D9C8A7F1577C(5);
	}
	func_1063();
}

void func_1063()
{
	unk_0x78C587487CD40B92();
}

void func_1064(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_1332731.f_1.f_108 != 0)
	{
		Global_1332731.f_1.f_108 = 0;
	}
	if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 167 || Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 168)
	{
		func_1096();
		unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 4);
	}
	if ((func_521() && iParam1 != 0) && Global_262145.f_14857)
	{
		if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 190 || Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 192)
		{
			func_1082(unk_0x0C1D3C552325765B(), iParam1);
		}
	}
	if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 164 || Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 == 208)
	{
		unk_0x806DACE5511E6771(3, 1);
		unk_0x806DACE5511E6771(5, 1);
	}
	if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 != -1)
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_32 = -1;
		if (!unk_0x08BA6DD398CA197C(Global_1573924.f_1, 14) && !func_220(unk_0x0C1D3C552325765B()))
		{
			func_199(0);
		}
	}
	else if (func_1080(unk_0x0C1D3C552325765B()) != -1)
	{
		func_1045(-1);
	}
	func_1079(func_55());
	if (func_173(16))
	{
		func_172(16);
	}
	func_1075(0);
	func_1040(-1);
	func_1074();
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_1072(iVar0);
		iVar0++;
	}
	if (unk_0x08BA6DD398CA197C(Global_1750560.f_3, 0))
	{
		unk_0xACD6D334FD769B0C(1f);
		unk_0xCF03D9C8A7F1577C(5);
		unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 0);
	}
	if (unk_0x08BA6DD398CA197C(Global_1750560.f_3, 5))
	{
		unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 5);
	}
	iVar1 = func_394();
	if ((func_290(iVar1) || iVar1 == 205) || iVar1 == 210)
	{
		func_1071(-1);
	}
	else if (((iVar1 == 201 || iVar1 == 200) || iVar1 == 179) || func_476(iVar1))
	{
		func_1067(-1, 1);
	}
	else if (func_393(iVar1) || func_1066(iVar1))
	{
	}
	else
	{
		func_1067(-1, 1);
	}
	func_195(19);
	func_195(20);
	func_195(21);
	func_195(22);
	func_195(27);
	func_172(3);
	func_172(4);
	func_172(7);
	func_1065();
	if (func_214(unk_0x0C1D3C552325765B()))
	{
		func_693(0);
	}
	func_195(29);
	Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55 = func_55();
	if (Global_2482149.f_4698.f_18 != 0)
	{
		Global_2482149.f_4698.f_18 = 0;
	}
	if (bParam0)
	{
		func_174();
	}
	if (!func_220(unk_0x0C1D3C552325765B()))
	{
		func_194();
		unk_0x09C86C0C5CA26B1E(&(Global_1750560.f_3), 1);
	}
}

void func_1065()
{
	if (func_1030(unk_0x0C1D3C552325765B()))
	{
		func_195(25);
	}
}

int func_1066(int iParam0)
{
	if ((iParam0 == 191 || iParam0 == 190) || iParam0 == 192)
	{
		return 1;
	}
	return 0;
}

void func_1067(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_394();
	}
	if (iParam0 > 0)
	{
		if (func_524() != func_55())
		{
			if (func_1070(unk_0x0C1D3C552325765B()) == unk_0x0C1D3C552325765B())
			{
				Global_2471291.f_77[func_1069(iParam0)] = 1;
			}
		}
		iVar0 = func_1069(159);
		if (func_1068(iVar0, Global_262145.f_11038, bParam1))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(157);
		if (func_1068(iVar0, Global_262145.f_11038, bParam1))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(148);
		if (func_1068(iVar0, Global_262145.f_11038, bParam1))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(164);
		if (func_1068(iVar0, Global_262145.f_11038, bParam1))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(142);
		if (func_1068(iVar0, Global_262145.f_11038, bParam1))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(152);
		if (func_1068(iVar0, Global_262145.f_11038, bParam1))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(166);
		if (func_1068(iVar0, Global_262145.f_11038, bParam1))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(170);
		if (func_1068(iVar0, Global_262145.f_11038, bParam1))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(173);
		if (func_1068(iVar0, Global_262145.f_11038, bParam1))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(179);
		if (func_1068(iVar0, Global_262145.f_11038, bParam1))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(200);
		if (func_1068(iVar0, Global_262145.f_11038, bParam1))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(201);
		if (func_1068(iVar0, Global_262145.f_11038, bParam1))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(182);
		if (func_1068(iVar0, Global_262145.f_11039, 0))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(183);
		if (func_1068(iVar0, Global_262145.f_11039, 0))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(185);
		if (func_1068(iVar0, Global_262145.f_11039, 0))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(186);
		if (func_1068(iVar0, Global_262145.f_11039, 0))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(180);
		if (func_1068(iVar0, Global_262145.f_11039, 0))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(195);
		if (func_1068(iVar0, Global_262145.f_11039, 0))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(197);
		if (func_1068(iVar0, Global_262145.f_11039, 0))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(198);
		if (func_1068(iVar0, Global_262145.f_11039, 0))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(207);
		if (func_1068(iVar0, Global_262145.f_11039, 0))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(208);
		if (func_1068(iVar0, Global_262145.f_11039, 0))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(209);
		if (func_1068(iVar0, Global_262145.f_11039, 0))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
	}
}

int func_1068(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if ((!func_196(unk_0x0C1D3C552325765B(), 19) && !func_196(unk_0x0C1D3C552325765B(), 20)) && !func_196(unk_0x0C1D3C552325765B(), 9))
		{
			return 0;
		}
	}
	if (Global_2471291.f_77[iParam0] == 1 && func_11(&(Global_2471291[iParam0 /*2*/])))
	{
		if (func_504(&(Global_2471291[iParam0 /*2*/]), 1, 0) < iParam1)
		{
			Global_2471291.f_77[iParam0] = 0;
			return 1;
		}
		return 0;
	}
	return 1;
}

int func_1069(int iParam0)
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
		
		case 179:
			return 17;
		
		case 189:
			return 18;
		
		case 193:
			return 19;
		
		case 194:
			return 20;
		
		case 199:
			return 21;
		
		case 201:
			return 22;
		
		case 200:
			return 23;
		
		case 205:
			return 24;
		
		case 210:
			return 25;
		
		case 182:
			return 26;
		
		case 183:
			return 27;
		
		case 185:
			return 28;
		
		case 186:
			return 29;
		
		case 180:
			return 30;
		
		case 195:
			return 31;
		
		case 197:
			return 32;
		
		case 198:
			return 33;
		
		case 207:
			return 34;
		
		case 208:
			return 35;
		
		case 209:
			return 36;
		
		case 211:
			return 37;
		
		default:
	}
	return -1;
}

int func_1070(int iParam0)
{
	return Global_1614576[iParam0 /*324*/].f_10.f_34;
}

void func_1071(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_394();
	}
	if (iParam0 > 0)
	{
		if (func_524() != func_55())
		{
			Global_2471291.f_77[func_1069(iParam0)] = 1;
		}
		iVar0 = func_1069(155);
		if (func_1068(iVar0, Global_262145.f_11039, 0))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(163);
		if (func_1068(iVar0, Global_262145.f_11039, 0))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(160);
		if (func_1068(iVar0, Global_262145.f_11039, 0))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(153);
		if (func_1068(iVar0, Global_262145.f_11039, 0))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(162);
		if (func_1068(iVar0, Global_262145.f_11039, 0))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(154);
		if (func_1068(iVar0, Global_262145.f_11039, 0))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(171);
		if (func_1068(iVar0, Global_262145.f_11039, 0))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(172);
		if (func_1068(iVar0, Global_262145.f_11039, 0))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(199);
		if (func_1068(iVar0, Global_262145.f_11039, 0))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(194);
		if (func_1068(iVar0, Global_262145.f_11039, 0))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(193);
		if (func_1068(iVar0, Global_262145.f_11039, 0))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(210);
		if (func_1068(iVar0, Global_262145.f_11039, 0))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(205);
		if (func_1068(iVar0, Global_262145.f_11039, 0))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(189);
		if (func_1068(iVar0, Global_262145.f_11039, 0))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
		iVar0 = func_1069(211);
		if (func_1068(iVar0, Global_262145.f_11039, 0))
		{
			func_9(&(Global_2471291[iVar0 /*2*/]));
			func_10(&(Global_2471291[iVar0 /*2*/]), 1, 0);
		}
	}
}

void func_1072(int iParam0)
{
	if (!func_59(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_143[iParam0 /*3*/], func_1073(), 0))
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_143[iParam0 /*3*/] = { func_1073() };
	}
	if (!func_59(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_118[iParam0 /*3*/], func_1073(), 0))
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_118[iParam0 /*3*/] = { func_1073() };
	}
}

Vector3 func_1073()
{
	struct<3> Var0;
	
	return Var0;
}

void func_1074()
{
	struct<20> Var0;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Global_1573418 = { Var0 };
	Global_1573418.f_13 = func_55();
	if (unk_0x08BA6DD398CA197C(Global_1572926, 3))
	{
		unk_0x09C86C0C5CA26B1E(&Global_1572926, 3);
	}
}

void func_1075(bool bParam0)
{
	if (bParam0)
	{
		if (!func_1078(unk_0x0C1D3C552325765B(), 10))
		{
			func_1077(10);
		}
	}
	else if (func_1078(unk_0x0C1D3C552325765B(), 10))
	{
		func_1076(10);
	}
}

void func_1076(int iParam0)
{
	unk_0x09C86C0C5CA26B1E(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_5), iParam0);
}

void func_1077(int iParam0)
{
	unk_0x88B0F0DC270164B7(&(Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_5), iParam0);
}

bool func_1078(int iParam0, int iParam1)
{
	return unk_0x08BA6DD398CA197C(Global_1614576[iParam0 /*324*/].f_10.f_5, iParam1);
}

void func_1079(int iParam0)
{
	if (func_213(unk_0x0C1D3C552325765B()))
	{
		if (unk_0x0C1D3C552325765B() != iParam0)
		{
			if (Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_268 != iParam0)
			{
				Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_268 = iParam0;
				if (iParam0 != func_55())
				{
				}
			}
		}
	}
}

int func_1080(int iParam0)
{
	if (func_1081(iParam0, 0))
	{
		return Global_1614576[iParam0 /*324*/].f_10.f_31;
	}
	return -1;
}

int func_1081(int iParam0, int iParam1)
{
	if (Global_1614576[iParam0 /*324*/].f_10.f_31 != -1 || (iParam1 && Global_1614576[iParam0 /*324*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_1082(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_587(iParam0, iParam1) && func_898(iParam0, iParam1))
	{
		iVar0 = func_586(iParam0, iParam1);
		func_1086(iVar0);
		func_1083(iVar0, 1);
	}
}

void func_1083(int iParam0, int iParam1)
{
	func_1084(func_1085(iParam0), iParam1, -1, 1);
	Global_1588660[unk_0x0C1D3C552325765B() /*532*/].f_256.f_90[iParam0 /*11*/].f_6 = iParam1;
}

int func_1084(int iParam0, var uParam1, int iParam2, int iParam3)
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
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	if (iParam2 == -1)
	{
		iParam2 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x344F27C22302C47F((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x192746D863D6540E((iParam0 - 0)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar2, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x344F27C22302C47F((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x192746D863D6540E((iParam0 - 192)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar3, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x344F27C22302C47F((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x192746D863D6540E((iParam0 - 513)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar4, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x344F27C22302C47F((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x192746D863D6540E((iParam0 - 705)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar5, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x2E64726ED5C96D3A((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x192746D863D6540E((iParam0 - 3111)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar6, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x2E64726ED5C96D3A((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x192746D863D6540E((iParam0 - 2919)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar7, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x04FF7BB1F97500D5((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x192746D863D6540E((iParam0 - 4207)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar8, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x04FF7BB1F97500D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x192746D863D6540E((iParam0 - 4335)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar9, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x04FF7BB1F97500D5((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x192746D863D6540E((iParam0 - 6029)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar10, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x04FF7BB1F97500D5((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x192746D863D6540E((iParam0 - 7385)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar11, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x04FF7BB1F97500D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x192746D863D6540E((iParam0 - 7321)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar12, uParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		iVar13 = unk_0x04FF7BB1F97500D5((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x192746D863D6540E((iParam0 - 9361)) * 64);
		iVar0 = unk_0x12CAB63E316BE0B5(iVar13, uParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_1085(int iParam0)
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
		
		default:
	}
	return 7628;
}

void func_1086(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	
	iVar1 = func_1095(unk_0x0C1D3C552325765B(), iParam0);
	Global_2471285[iParam0] = 0;
	if (func_1091(func_1094(iParam0), -1, -1))
	{
		iVar0 = func_1090(iVar1);
		iVar2 = func_629(unk_0x0C1D3C552325765B(), iVar1);
		iVar3 = func_1089(iVar1);
		iVar4 = func_1090(iVar1);
		fVar5 = (unk_0xBBDA792448DB5A89(iVar4) / unk_0xBBDA792448DB5A89(iVar3));
		iVar0 = (iVar0 - unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar2) * fVar5)));
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
		Global_2471285[iParam0] = iVar0;
	}
	else
	{
		iVar0 = (func_1090(iVar1) / func_1088(unk_0x0C1D3C552325765B(), iVar1) + 1);
	}
	func_1087(unk_0x0C1D3C552325765B(), iVar1, iVar0);
}

void func_1087(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return;
	}
	if (func_588(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_9 = iParam2;
			}
			iVar0++;
		}
	}
}

int func_1088(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == func_55())
	{
		return 0;
	}
	if (func_588(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/] == iParam1)
			{
				return Global_1588660[iParam0 /*532*/].f_256.f_90[iVar0 /*11*/].f_8;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_1089(int iParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_589(iParam0);
	switch (iVar1)
	{
		case 1:
			uVar0 = Global_262145.f_14828;
			if (func_585(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14833;
			}
			break;
		
		case 3:
			uVar0 = Global_262145.f_14827;
			if (func_585(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14832;
			}
			break;
		
		case 4:
			uVar0 = Global_262145.f_14826;
			if (func_585(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14831;
			}
			break;
		
		case 0:
			uVar0 = Global_262145.f_14824;
			if (func_585(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14829;
			}
			break;
		
		case 2:
			uVar0 = Global_262145.f_14825;
			if (func_585(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				uVar0 = Global_262145.f_14830;
			}
			break;
	}
	return uVar0;
}

int func_1090(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_589(iParam0);
	switch (iVar1)
	{
		case 1:
			iVar0 = Global_262145.f_14809;
			if (func_585(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14818);
			}
			if (func_585(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14823);
			}
			break;
		
		case 3:
			iVar0 = Global_262145.f_14810;
			if (func_585(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14817);
			}
			if (func_585(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14822);
			}
			break;
		
		case 4:
			iVar0 = Global_262145.f_14811;
			if (func_585(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14816);
			}
			if (func_585(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14821);
			}
			break;
		
		case 0:
			iVar0 = Global_262145.f_14812;
			if (func_585(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14814);
			}
			if (func_585(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14819);
			}
			break;
		
		case 2:
			iVar0 = Global_262145.f_14813;
			if (func_585(unk_0x0C1D3C552325765B(), iParam0, 0))
			{
				iVar0 = (iVar0 - Global_262145.f_14815);
			}
			if (func_585(unk_0x0C1D3C552325765B(), iParam0, 1))
			{
				iVar0 = (iVar0 - Global_262145.f_14820);
			}
			break;
	}
	return iVar0;
}

int func_1091(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar1 = func_1093(iParam0, iParam1);
	uVar2 = func_1092(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0xFC12D914F6DEEF7B(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_1092(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x192746D863D6540E((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x192746D863D6540E((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x192746D863D6540E((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x192746D863D6540E((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x192746D863D6540E((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x192746D863D6540E((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x192746D863D6540E((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x192746D863D6540E((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x192746D863D6540E((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x192746D863D6540E((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x192746D863D6540E((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x192746D863D6540E((iParam0 - 9361)) * 64);
	}
	return iVar0;
}

int func_1093(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x344F27C22302C47F((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x2E64726ED5C96D3A((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x2E64726ED5C96D3A((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9489)
	{
		iVar0 = unk_0x04FF7BB1F97500D5((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	return iVar0;
}

int func_1094(int iParam0)
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
		
		default:
	}
	return 9416;
}

int func_1095(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_55())
	{
		return 0;
	}
	if (func_588(Global_1588660[iParam0 /*532*/].f_256.f_90[iParam1 /*11*/]))
	{
		uVar0 = Global_1588660[iParam0 /*532*/].f_256.f_90[iParam1 /*11*/];
	}
	return uVar0;
}

void func_1096()
{
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_1643), 28);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_1643), 29);
	func_1097(24);
}

void func_1097(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4698.f_7[iVar0]), iVar1);
}

void func_1098(var uParam0)
{
	if (unk_0xAF4258F870009059(*uParam0))
	{
		unk_0x86D46E473BB96D2A(*uParam0, 1);
	}
}

void func_1099()
{
	unk_0x17BC7AF21106B65E(iLocal_728);
	unk_0x17BC7AF21106B65E(iLocal_727);
}

void func_1100(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	var uVar0;
	struct<23> Var1;
	int iVar24;
	struct<24> Var25;
	struct<24> Var49;
	struct<25> Var73;
	
	uVar0 = unk_0x367152330DB70D69();
	iVar24 = func_56(unk_0x0C1D3C552325765B());
	Var1.f_0 = Global_1750569;
	Var1.f_1 = Global_1750569.f_1;
	Var1.f_4 = Global_1750569.f_4;
	Var1.f_5 = Global_1750569.f_5;
	Var1.f_6 = Global_1750569.f_6;
	Var1.f_7 = Global_1750569.f_7;
	Var1.f_8 = Global_1750569.f_8;
	Var1.f_9 = Global_1750569.f_9;
	Var1.f_10 = Global_1750569.f_10;
	Var1.f_2 = Global_1750569.f_2;
	Var1.f_3 = Global_1750569.f_3;
	Var1.f_11 = iParam3;
	Var1.f_12 = iParam2;
	Var1.f_13 = uParam0;
	Var1.f_14 = func_1106();
	Var1.f_16 = iParam1;
	Var1.f_21 = iParam7;
	Var1.f_22 = iParam8;
	if (iVar24 != func_55() && unk_0xCB129F9A01D14082(iVar24))
	{
		Var1.f_17 = iParam4;
		Var1.f_18 = func_1105(iVar24, iParam3);
		Var1.f_19 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iParam4) / unk_0xBBDA792448DB5A89(func_462(iParam3))) * 100f));
		Var1.f_20 = (100 - unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(func_1103(iParam3, iVar24)) / unk_0xBBDA792448DB5A89(func_462(iParam3))) * 100f)));
		Var1.f_15 = func_1102(iVar24);
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		if (unk_0x28C1B9853548BD8E(uVar0, "GB_CONTRABAND_SELL"))
		{
			Var25 = { Var1 };
			Var25.f_23 = iParam5;
			unk_0x9F9BA71691D8BDE0(&Var25);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_CONTRABAND_BUY"))
		{
			unk_0xFDBA507FF328986C(&Var1);
		}
		else if (unk_0x28C1B9853548BD8E(sVar0, "GB_CONTRABAND_DEFEND"))
		{
			if (bParam9 == 1)
			{
				Var49 = { Var1 };
				Var49.f_23 = iParam5;
				unk_0x915937238F9810F8(&Var49);
			}
			else
			{
				Var73 = { Var1 };
				Var73.f_23 = iParam5;
				Var73.f_24 = iParam6;
				unk_0x345FA78B461D40DA(&Var73);
			}
		}
	}
	func_1101();
}

void func_1101()
{
	struct<18> Var0;
	
	Global_1750569 = { Var0 };
}

int func_1102(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1588660[iParam0 /*532*/].f_256.f_72[iVar0 /*2*/] > 0 && Global_1588660[iParam0 /*532*/].f_256.f_72[iVar0 /*2*/] <= 22)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_1103(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_949(iParam1, iParam0))
	{
		iVar0 = func_1104(iParam0, iParam1);
		iVar1 = func_461(iParam0);
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

int func_1104(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_42(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam0 == Global_1588660[iParam1 /*532*/].f_256.f_72[iVar0 /*2*/])
			{
				return Global_1588660[iParam1 /*532*/].f_256.f_72[iVar0 /*2*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1105(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_42(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam1 == Global_1588660[iParam0 /*532*/].f_256.f_72[iVar0 /*2*/])
			{
				return Global_1588660[iParam0 /*532*/].f_256.f_72[iVar0 /*2*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

var func_1106()
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_56(unk_0x0C1D3C552325765B());
	if (iVar2 != func_55())
	{
		iVar1 = 1;
		while (iVar1 <= 22)
		{
			if (func_949(iVar2, iVar1))
			{
				unk_0x88B0F0DC270164B7(&uVar0, iVar1);
			}
			iVar1++;
		}
	}
	return uVar0;
}

void func_1107(struct<20> Param0)
{
	func_1120(func_1121(Param0.f_0), Param0);
	unk_0xF2797029E839595C(10);
	unk_0x23DFD22869618226(3);
	func_1119(0, -1, 0);
	unk_0x4331DF6C42BE352E(&Local_99, 270);
	unk_0xCCA45C9E00D2BC01(&Local_369, 353);
	if (!func_1118())
	{
		func_1062();
	}
	if (unk_0xA86CA03D9749EEB3())
	{
		unk_0x401559486BCA4D9B(0);
		if (unk_0xD9E8CA806A80203D())
		{
		}
		func_1115();
		func_1108(0, 0);
		Local_369[unk_0x848AF823A8EA3C62() /*11*/] = 0;
	}
	else
	{
		func_1062();
	}
}

void func_1108(int iParam0, int iParam1)
{
	func_1114();
	func_1111(1);
	if ((iParam0 != 0 && unk_0xCB129F9A01D14082(iParam1)) && func_1110(iParam1, 1))
	{
		switch (iParam0)
		{
			case 157:
				unk_0x88B0F0DC270164B7(&Global_1750555, 0);
				break;
			}
	}
	if (!func_567() && !func_257(unk_0x0C1D3C552325765B(), 1))
	{
		if (func_365())
		{
			func_198(3);
		}
		func_198(4);
	}
	if (func_522(0))
	{
		Global_1614576[unk_0x0C1D3C552325765B() /*324*/].f_10.f_55 = func_524();
	}
	if (func_389(iParam0))
	{
		func_627();
		Global_1750587.f_18 = func_880(func_322());
	}
	func_1109();
}

void func_1109()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1332731.f_527[iVar0 /*49*/].f_1 = func_55();
		Global_1332731.f_527[iVar0 /*49*/].f_9 = 0;
		iVar0++;
	}
}

int func_1110(int iParam0, bool bParam1)
{
	return func_293(unk_0x0C1D3C552325765B(), iParam0, bParam1);
}

void func_1111(bool bParam0)
{
	int iVar0;
	
	func_1097(33);
	func_1097(34);
	func_1097(35);
	func_1097(36);
	func_1097(37);
	func_1097(38);
	func_1097(39);
	func_1097(40);
	func_1097(43);
	func_1097(41);
	func_1097(54);
	func_1097(42);
	func_1097(47);
	func_1113(23);
	func_1113(24);
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2482149.f_4698.f_11[iVar0] = 0;
			iVar0++;
		}
	}
	else if (func_1112(3))
	{
		func_1113(3);
	}
	else if (func_1112(4))
	{
		func_1113(4);
	}
	else if (func_1112(5))
	{
		func_1113(5);
	}
	else if (func_1112(6))
	{
		func_1113(6);
	}
	else if (func_1112(7))
	{
		func_1113(7);
	}
	else if (((((((((((((((((func_1112(0) || func_1112(1)) || func_1112(2)) || func_1112(8)) || func_1112(9)) || func_1112(10)) || func_1112(11)) || func_1112(12)) || func_1112(13)) || func_1112(14)) || func_1112(15)) || func_1112(16)) || func_1112(17)) || func_1112(18)) || func_1112(19)) || func_1112(20)) || func_1112(21)) || func_1112(22))
	{
		func_1113(8);
		func_1113(0);
		func_1113(1);
		func_1113(2);
		func_1113(9);
		func_1113(10);
		func_1113(11);
		func_1113(12);
		func_1113(13);
		func_1113(14);
		func_1113(15);
		func_1113(16);
		func_1113(17);
		func_1113(18);
		func_1113(19);
		func_1113(20);
		func_1113(21);
		func_1113(22);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Global_2482149.f_4698.f_11[iVar0] = 0;
			iVar0++;
		}
	}
}

bool func_1112(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return unk_0x08BA6DD398CA197C(Global_2482149.f_4698.f_11[iVar0], iVar1);
}

void func_1113(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0x09C86C0C5CA26B1E(&(Global_2482149.f_4698.f_11[iVar0]), iVar1);
}

void func_1114()
{
	struct<14> Var0;
	
	Global_1750569 = { Var0 };
	Global_1750569.f_14 = 0;
	Global_1750569.f_15 = 0;
}

void func_1115()
{
	int iVar0;
	
	unk_0xD8C3303D0A49D05B("relDefendPlayer", &iLocal_727);
	unk_0xD8C3303D0A49D05B("relDefendAI", &iLocal_728);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		unk_0xFDDE2C1A05E64390(1, Global_1574240[iVar0], iLocal_727);
		unk_0xFDDE2C1A05E64390(1, iLocal_727, Global_1574240[iVar0]);
		unk_0xFDDE2C1A05E64390(1, Global_1574240[iVar0], iLocal_728);
		unk_0xFDDE2C1A05E64390(1, iLocal_728, Global_1574240[iVar0]);
		unk_0xFDDE2C1A05E64390(1, iLocal_727, joaat("COP"));
		unk_0xFDDE2C1A05E64390(1, joaat("COP"), iLocal_727);
		unk_0xFDDE2C1A05E64390(1, iLocal_727, Global_1574284[5]);
		unk_0xFDDE2C1A05E64390(1, Global_1574284[5], iLocal_727);
		unk_0xFDDE2C1A05E64390(1, iLocal_727, Global_1574273);
		unk_0xFDDE2C1A05E64390(1, Global_1574273, iLocal_727);
		iVar0++;
	}
	unk_0xFDDE2C1A05E64390(5, iLocal_727, iLocal_728);
	unk_0xFDDE2C1A05E64390(5, iLocal_728, iLocal_727);
	unk_0xFDDE2C1A05E64390(1, 2017343592, iLocal_728);
	unk_0xFDDE2C1A05E64390(5, 2017343592, iLocal_727);
	func_1117(1, &iLocal_728);
	func_1116(&iLocal_728);
	func_1116(&iLocal_727);
}

void func_1116(int iParam0)
{
	unk_0xFDDE2C1A05E64390(1, -1865950624, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, -1865950624);
	unk_0xFDDE2C1A05E64390(1, 296331235, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, 296331235);
	unk_0xFDDE2C1A05E64390(1, 1166638144, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, 1166638144);
	unk_0xFDDE2C1A05E64390(1, 2037579709, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, 2037579709);
	unk_0xFDDE2C1A05E64390(1, 2017343592, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, 2017343592);
	unk_0xFDDE2C1A05E64390(1, -1821475077, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, -1821475077);
	unk_0xFDDE2C1A05E64390(1, 1782292358, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, 1782292358);
	unk_0xFDDE2C1A05E64390(1, -1033021910, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, -1033021910);
	unk_0xFDDE2C1A05E64390(1, -1285976420, *iParam0);
	unk_0xFDDE2C1A05E64390(1, *iParam0, -1285976420);
}

void func_1117(int iParam0, int iParam1)
{
	unk_0xFDDE2C1A05E64390(iParam0, joaat("COP"), *iParam1);
	unk_0xFDDE2C1A05E64390(iParam0, *iParam1, joaat("COP"));
	unk_0xFDDE2C1A05E64390(iParam0, joaat("army"), *iParam1);
	unk_0xFDDE2C1A05E64390(iParam0, *iParam1, joaat("army"));
	unk_0xFDDE2C1A05E64390(iParam0, -183807561, *iParam1);
	unk_0xFDDE2C1A05E64390(iParam0, *iParam1, -183807561);
}

int func_1118()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0xA86CA03D9749EEB3())
		{
			return 0;
		}
		if (unk_0x7DEEE0ED76EAAD72())
		{
			return 1;
		}
		if (func_1057())
		{
			return 0;
		}
		if (func_1055(155))
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

int func_1119(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xF30F4D3B526CD5C2();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_1063();
			}
			else
			{
				return 0;
			}
		}
		if (!func_909())
		{
			if (iParam0 == 0)
			{
				if (!unk_0xA86CA03D9749EEB3())
				{
					if (!bParam2)
					{
						func_1063();
					}
					else
					{
						return 0;
					}
				}
				if (func_1057())
				{
					if (!bParam2)
					{
						func_1063();
					}
					else
					{
						return 0;
					}
				}
				if (func_1055(155))
				{
					if (!bParam2)
					{
						func_1063();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0xBB81832DD12D2E73())
			{
				if (!bParam2)
				{
					func_1063();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0xF30F4D3B526CD5C2();
	}
	if (iParam1 > -1)
	{
		Global_1312496 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0xA86CA03D9749EEB3())
		{
			if (!bParam2)
			{
				func_1063();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0xBB81832DD12D2E73())
	{
		if (!bParam2)
		{
			func_1063();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_1120(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0xA86CA03D9749EEB3())
	{
		func_1063();
	}
	unk_0x786FDD765D4157F4(uParam0, 0, Param1.f_16);
}

int func_1121(int iParam0)
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
		
		case 74:
			return 32;
		
		case 73:
			return 32;
		
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
			return 8;
		
		case 81:
			return 32;
		
		case 82:
			return 8;
		
		case 83:
			return 8;
		
		case 91:
			return 8;
		
		case 84:
			return 8;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 8;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 92:
			return 32;
		
		case 93:
			return 32;
		
		case 94:
			return 32;
		
		case 95:
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
		
		case 96:
			return 32;
		
		case 97:
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
		
		case 108:
			return 32;
		
		case 109:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 32;
		
		case 103:
			return 32;
		
		case 101:
			return 32;
		
		case 102:
			return 32;
		
		case 106:
			return 32;
		
		case 107:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 110:
			return 32;
		
		case 111:
			return 32;
		
		case 112:
			return 32;
		
		case 113:
			return 32;
		
		case 114:
			return 2;
		
		case 119:
			return 1;
		
		case 115:
			return 2;
		
		case 116:
			return 4;
		
		case 117:
			return 2;
		
		case 118:
			return 2;
		
		case 100:
			return 1;
		
		case 120:
			return 2;
		
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
			return 0;
		
		case 130:
			return 1;
		
		case 127:
			return 4;
		
		case 128:
			return 16;
		
		case 129:
			return 32;
		
		default:
	}
	return 0;
}

int func_1122(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xCB129F9A01D14082(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xC0691D80D21C989D(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2432628.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

