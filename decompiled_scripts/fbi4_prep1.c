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
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	bool bLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	struct<4> Local_37[10];
	bool bLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	struct<27> Local_81 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_108 = 0;
	var uLocal_109 = 0;
	struct<11> Local_110[2];
	struct<25> Local_133[21];
	float fLocal_659 = 0f;
	int iLocal_660 = 0;
	bool bLocal_661 = 0;
	bool bLocal_662 = 0;
	bool bLocal_663 = 0;
	bool bLocal_664 = 0;
	int iLocal_665 = 0;
	struct<3> Local_666 = { 0, 0, 0 } ;
	int iLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = -1;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 1000;
	var uLocal_680 = 1000;
	var uLocal_681 = 0;
	int iLocal_682 = 0;
	int iLocal_683 = 0;
	int iLocal_684 = 0;
	int iLocal_685 = 0;
	var uLocal_686 = 0;
	struct<8> Local_687[3];
	var uLocal_712 = 15;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 15;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	int iLocal_816 = 0;
	char* sLocal_817 = NULL;
	char* sLocal_818 = NULL;
	int iLocal_819 = 0;
	int iLocal_820 = 0;
	int iLocal_821 = 0;
	var uLocal_822 = 0;
	struct<3> Local_823 = { 0, 0, 0 } ;
	struct<3> Local_826 = { 0, 0, 0 } ;
	int iLocal_829 = 0;
	int iLocal_830 = 0;
	int iLocal_831 = 0;
	bool bLocal_832 = 0;
	int iLocal_833 = 0;
	int iLocal_834 = 0;
	int iLocal_835 = 0;
	int iLocal_836 = 0;
	int iLocal_837 = 0;
	int iLocal_838 = 0;
	struct<14> Local_839 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_853 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_867 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	int iLocal_876 = 0;
	char[] cLocal_877[8] = 0;
	var uLocal_878 = 16;
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
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	char[] cLocal_1043[8] = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	int iLocal_1047[3] = { 0, 0, 0 };
	int iLocal_1051 = 0;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_80 = 21;
	fLocal_659 = -1f;
	Local_666 = { 0f, 0f, 0f };
	iLocal_669 = -1;
	sLocal_818 = "FBIPRA";
	Local_823 = { 0f, 0f, 0f };
	Local_826 = { 1381.472f, -2072.245f, 50.9981f };
	cLocal_877 = "FIBP1AU";
	iLocal_1051 = -1;
	unk_0xAE2A9FD3EEF99954(1);
	if (unk_0x8D841F1DD3FA555F(19))
	{
		sLocal_817 = 0;
		func_367();
		func_355();
	}
	func_338();
	if (func_337())
	{
		func_336(918.8851f, -269.789f, 67.2145f, 68.2149f, 1, 0);
	}
	func_322();
	while (true)
	{
		unk_0x36137B7A77318822("M_TrT", 0);
		if (func_321(unk_0x81873881071CD9FE()))
		{
			func_317();
			func_313();
			unk_0x5DFA9D9EFD236763(unk_0x1329891157A54C63());
			unk_0xCDE668E40D482687(0.8f);
			switch (iLocal_682)
			{
				case 0:
					func_256();
					break;
				
				case 1:
					func_232();
					break;
				
				case 2:
					func_214();
					break;
				
				case 3:
					func_101();
					break;
				
				case 4:
					func_38();
					break;
				
				case 5:
					func_1();
					break;
			}
			if (iLocal_682 != 5)
			{
				if (iLocal_682 >= 0 && !bLocal_27)
				{
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	int iVar0;
	
	switch (iLocal_683)
	{
		case 0:
			unk_0xD1C83BD797927DD5();
			unk_0xB8BB626315D394F5(1);
			func_37();
			if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
				if (func_36(iVar0) && unk_0x14B7103DBD149FFE(iVar0) == joaat("towtruck"))
				{
					func_35(iVar0, 2);
				}
			}
			if (!unk_0xB318FDA0D1ABDB20(sLocal_817))
			{
				func_33(sLocal_817);
			}
			else
			{
				func_18(0);
			}
			iLocal_683 = 1;
			break;
		
		case 1:
			if (func_17())
			{
				if (func_16())
				{
					func_11();
				}
				func_2();
				unk_0x7C6BF0CD5D7454C9(unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 30f, 1, 0, 0, 0);
				func_355();
			}
			break;
	}
}

void func_2()
{
	func_9(&Local_867);
	func_9(&uLocal_874);
	func_9(&iLocal_873);
	func_8(&Local_839);
	func_8(&Local_853);
	func_9(&uLocal_875);
	func_3();
}

void func_3()
{
	func_7(&(Local_110[0 /*11*/].f_4));
	func_7(&(Local_110[1 /*11*/].f_4));
	func_6(&iLocal_108);
	func_5(&(Local_110[0 /*11*/]), 1, 0, 1);
	func_5(&(Local_110[1 /*11*/]), 1, 0, 1);
	func_4(&(Local_133[iLocal_660 /*25*/].f_17), 0);
	unk_0x4BF7FC7E9DBAB99B(uLocal_79);
	unk_0xD8323B49BAE93D80("missfbi4prepp1");
	unk_0x37A7AA0EB4518D08("missfbi4prepp1_garbageman");
}

void func_4(var uParam0, bool bParam1)
{
	if (unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		if (unk_0xE482770A8B024982(*uParam0))
		{
			unk_0xD88DD5B581458979(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0xB5713813CBD9E79F(uParam0);
		}
		else
		{
			unk_0xD196F3B2D5DF4AC3(*uParam0);
		}
	}
}

void func_5(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		if (!unk_0x5FEB513A4402FD59(*uParam0))
		{
			unk_0x3B7AFF7DCE22C1CF(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x4191220706130B86(*uParam0);
			}
			unk_0x6CB332CB31E9FA96(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x1D15D99A10A15334(*uParam0, false);
			}
		}
		unk_0x71A8BCA218722FA1(uParam0);
	}
}

void func_6(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		unk_0x930F8FBB8E9537CC(*uParam0);
		if (unk_0xE86442941AE40E75(*uParam0) && unk_0x46AE53A47E5D03D5(*uParam0, 1))
		{
			unk_0xE0913C01F5C0CC3D(uParam0);
		}
	}
}

void func_7(int iParam0)
{
	if (unk_0xFBACB273AA628CC5(*iParam0))
	{
		unk_0x116FDB7E27590C7F(*iParam0, 0);
		unk_0x0A8175F24237A3D4(iParam0);
	}
}

void func_8(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(*iParam0))
	{
		if (!unk_0x930F8FBB8E9537CC(*iParam0))
		{
			unk_0x3B7AFF7DCE22C1CF(*iParam0, 0);
		}
		if (!unk_0xE86442941AE40E75(*iParam0))
		{
			unk_0xD768713E73165208(*iParam0, 1, 0);
		}
		unk_0xF210D34D7F7152ED(iParam0);
	}
}

void func_9(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		if (!unk_0xE86442941AE40E75(*uParam0))
		{
			unk_0xD768713E73165208(*uParam0, 1, 0);
		}
		if (func_36(*uParam0))
		{
			if (unk_0xE86442941AE40E75(*uParam0) && unk_0x46AE53A47E5D03D5(*uParam0, 1))
			{
				if (func_10(unk_0x81873881071CD9FE()))
				{
					if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), *uParam0, 0))
					{
						unk_0xE0913C01F5C0CC3D(uParam0);
						return;
					}
				}
				unk_0x5D00E836B6BE8693(uParam0);
			}
		}
		else
		{
			if (func_10(unk_0x81873881071CD9FE()))
			{
				if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), *uParam0, 0))
				{
					unk_0xE0913C01F5C0CC3D(uParam0);
					return;
				}
			}
			unk_0x5D00E836B6BE8693(uParam0);
		}
	}
}

int func_10(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		if (!unk_0x930F8FBB8E9537CC(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_11()
{
	func_14(918.8851f, -269.789f, 67.2145f, 325.9081f);
	func_12(917.5291f, -263.8595f, 67.3489f, 188.0605f);
}

void func_12(struct<3> Param0, float fParam3)
{
	func_13(&(Global_94997.f_2311), Param0, fParam3);
}

void func_13(var uParam0, struct<3> Param1, var uParam4)
{
	*uParam0 = { Param1 };
	uParam0->f_6 = uParam4;
}

void func_14(struct<3> Param0, float fParam3)
{
	if (func_15(Global_69260, 0f, 0f, 0f, 0))
	{
		Global_69260 = { Param0 };
		Global_69263 = fParam3;
	}
}

bool func_15(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_16()
{
	if (Global_90809 == 7)
	{
		return 1;
	}
	return 0;
}

int func_17()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_90809 == 7 || Global_90809 == 8)
	{
		return 1;
	}
	return 0;
}

void func_18(int iParam0)
{
	int iVar0;
	
	if (Global_98931.f_7699 || func_32(0))
	{
		iVar0 = func_31();
		if (!func_19(iVar0))
		{
			return;
		}
		unk_0xF3148AAF69AF9CBC(&(Global_81894[iVar0 /*5*/].f_1), 5);
		Global_90845 = iParam0;
	}
}

int func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_24();
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		unk_0x4F3A07F7DCB0EB80(5000);
	}
	iVar0 = Global_81894[iParam0 /*5*/];
	iVar1 = Global_69289.f_109[iVar0 /*4*/];
	func_23(iVar1, 1);
	unk_0x46C84B7D00FF3624(unk_0x1329891157A54C63());
	unk_0xA4DB0275D854F239(unk_0x1329891157A54C63());
	func_20(&(Global_98931.f_1750.f_539), iVar1);
	if (Global_85317 == Global_90846)
	{
		Global_98931.f_7699.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0x236D8AD7EE179F46(Global_81930[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			unk_0x3937B60F47657E06(0);
		}
	}
	Global_98931.f_7699.f_330[iVar1 /*6*/].f_2++;
	Global_85317 = Global_90846;
	if (iParam0 == -1)
	{
		if (Global_98931.f_7699)
		{
		}
		return 0;
	}
	if (unk_0x236D8AD7EE179F46(Global_81894[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0x236D8AD7EE179F46(Global_81894[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_20(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar5;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_98931.f_17147[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0x236D8AD7EE179F46(Global_98931.f_7699.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_22(Global_98931.f_17147[iVar0], &Var2, &fVar5))
			{
				Global_98931.f_17147[iVar0] = 318;
				func_21(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_88532[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_88532[iVar0 /*29*/].f_9 = 0f;
				Global_88532[iVar0 /*29*/].f_12 = 0f;
				Global_88532[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_88532[iVar0 /*29*/].f_10 = 0f;
				Global_88532[iVar0 /*29*/].f_13 = 0f;
				Global_88532[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_88532[iVar0 /*29*/].f_11 = 0f;
				Global_88532[iVar0 /*29*/].f_14 = 0f;
				Global_88532[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_88532[iVar0 /*29*/].f_26 = 0f;
				Global_88532[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_88532[iVar0 /*29*/].f_27 = 0f;
				Global_88532[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_88532[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_21(var uParam0)
{
	*uParam0 = -15;
}

int func_22(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_22(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_22(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_23(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85127[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85127[iParam0 /*2*/] = 0;
	}
}

void func_24()
{
	Global_90844 = 1;
	if (unk_0x375975027050A891(unk_0x1329891157A54C63(), 1))
	{
		if (unk_0xB318FDA0D1ABDB20(&Global_69252))
		{
			switch (func_25())
			{
				case 0:
					StringCopy(&Global_69252, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_69252, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_69252, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_69256, "", 16);
		}
		Global_90844 = 0;
	}
	else if (!unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0xB318FDA0D1ABDB20(&Global_69252))
		{
			switch (func_25())
			{
				case 0:
					StringCopy(&Global_69252, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_69252, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_69252, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_69256, "", 16);
		}
		Global_90844 = 0;
		unk_0xF3148AAF69AF9CBC(&(Global_90809.f_20), 25);
	}
}

int func_25()
{
	func_26();
	return Global_98931.f_1750.f_539.f_3549;
}

void func_26()
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
	{
		if (func_30(Global_98931.f_1750.f_539.f_3549) != unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()))
		{
			iVar0 = func_29(unk_0x81873881071CD9FE());
			if (func_28(iVar0) && (!func_27(14) || Global_97883))
			{
				if (Global_98931.f_1750.f_539.f_3549 != iVar0 && func_28(Global_98931.f_1750.f_539.f_3549))
				{
					Global_98931.f_1750.f_539.f_3550 = Global_98931.f_1750.f_539.f_3549;
				}
				Global_98931.f_1750.f_539.f_3551 = iVar0;
				Global_98931.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_98931.f_1750.f_539.f_3549 != 145)
			{
				Global_98931.f_1750.f_539.f_3551 = Global_98931.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_98931.f_1750.f_539.f_3549 = 145;
}

bool func_27(int iParam0)
{
	return Global_35443 == iParam0;
}

bool func_28(int iParam0)
{
	return iParam0 < 3;
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		iVar1 = unk_0x14B7103DBD149FFE(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_30(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_30(int iParam0)
{
	if (func_28(iParam0))
	{
		return Global_98931.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_31()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0x236D8AD7EE179F46(Global_81894[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_32(bool bParam0)
{
	if (!bParam0 && unk_0x968BF1C2C695B61A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_69268, 0);
}

void func_33(char* sParam0)
{
	func_34(sParam0);
	func_18(0);
}

void func_34(char* sParam0)
{
	if (!unk_0xB318FDA0D1ABDB20(sParam0))
	{
		if (unk_0xF36D646FEBEFB165(sParam0) <= 16)
		{
			StringCopy(&Global_69252, sParam0, 16);
			StringCopy(&Global_69256, "", 16);
			if (unk_0xFF43EABF617B213F())
			{
				unk_0x2CC6DA9D250332DA();
			}
		}
	}
}

void func_35(int iParam0, int iParam1)
{
	Global_90809.f_22[iParam1] = iParam0;
}

int func_36(int iParam0)
{
	if (func_10(iParam0))
	{
		if (unk_0x7404950238A154C2(iParam0, 0))
		{
			if (!unk_0x2D2289DC6C760F31(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_37()
{
	func_7(&iLocal_820);
}

void func_38()
{
	int iVar0;
	
	switch (iLocal_683)
	{
		case 0:
			iLocal_683 = 1;
			break;
		
		case 1:
			if (!func_100(unk_0x81873881071CD9FE(), Local_826, 270f))
			{
				iLocal_683 = 2;
			}
			else if (!func_99("PRA_LEVAREA", 0, 0))
			{
				func_98("PRA_LEVAREA", 60000, 0);
			}
			break;
		
		case 2:
			iVar0 = func_25();
			if (func_99("PRA_LEVAREA", 0, 0))
			{
				unk_0xD1C83BD797927DD5();
			}
			if (iVar0 == 0)
			{
				if (func_65(&uLocal_686, &cLocal_1043, &uLocal_878))
				{
					func_61();
					func_56();
				}
			}
			else
			{
				func_51(func_55(iVar0), -621899663, -621899663, 5, 0, iVar0, func_54(iVar0), 0, 6000, 6000, -1, 0, 0);
				func_61();
				func_56();
			}
			break;
		
		case 3:
			func_39(1, 1, 1);
			iLocal_683 = 2;
			break;
	}
}

void func_39(int iParam0, int iParam1, int iParam2)
{
	func_41(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		unk_0xEAB527164AD92BF3(0f, 1065353216);
		unk_0x270066FDBAF3A458(0f);
	}
	if (iParam1 == 1)
	{
		func_40(500, 0);
	}
}

void func_40(int iParam0, bool bParam1)
{
	if (unk_0x29AFA2493D7C23D0() || unk_0xC584A413BCB2AA39())
	{
		if (!unk_0xC11AD1609CFCCCE1())
		{
			unk_0xAE2B1C30F8A0B67C(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0xECDEA377354CBDA4())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xEC537F0C0E8265EE();
	unk_0x0B8AC09F18292E35(uVar0, 0);
	unk_0x034205BA180B4E43(uVar0, iParam3, 0);
	func_42(0, 1, 0, 0);
	if (iParam2 == 1)
	{
		unk_0x3BF4F473786B0150(1);
		unk_0xF1BC58601CA4A5C7(1);
	}
	unk_0xB8BB626315D394F5(1);
	if (iParam0 == 1)
	{
		unk_0x1448B1808E373DDE(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_36 != 0 && iLocal_36 != joaat("object")) && iLocal_36 != joaat("gadget_parachute"))
		{
			if (func_10(unk_0x81873881071CD9FE()))
			{
				if (unk_0xE27746D8DF950073(unk_0x81873881071CD9FE(), iLocal_36, 0))
				{
					unk_0x649CF94A4282A7FD(unk_0x81873881071CD9FE(), iLocal_36, 0);
				}
			}
		}
	}
	if (func_321(unk_0x81873881071CD9FE()))
	{
		unk_0x90F3625CF1678F30(unk_0x81873881071CD9FE(), 0, 0);
	}
}

void func_42(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xA01309A4CCECDBBE(unk_0x1329891157A54C63());
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 1);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 1);
		func_50(1);
		unk_0x314942833427CBA3();
		unk_0xDF12B8D7DEE2158B();
		if (Global_14394.f_1 > 3)
		{
			if (unk_0xE0A43912E369FFA5())
			{
				unk_0x9E95048D8C96C1EA(0);
			}
			if (!func_49())
			{
				Global_14394.f_1 = 3;
			}
			Global_15693 = 5;
		}
		func_48(1, iParam3, iParam2, 0);
		Global_55408 = 1;
		Global_67713 = 1;
		Global_69018 = 1;
	}
	else
	{
		func_50(0);
		unk_0x6246FB0D4AFA25CC();
		Global_55408 = 0;
		if (bParam1)
		{
			unk_0x5A01C8176534B756();
		}
		unk_0x334B670F8C2E871D(unk_0x1329891157A54C63(), 0);
		unk_0x302581C7F63C3DAF(unk_0x1329891157A54C63(), 0);
		func_48(0, iParam3, iParam2, 0);
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && !func_43(unk_0x1329891157A54C63()))
		{
			unk_0x210A4A0B257F8433(unk_0x81873881071CD9FE(), 0);
		}
		Global_69018 = 0;
	}
}

int func_43(int iParam0)
{
	if (func_45(iParam0, 0))
	{
		return 1;
	}
	if (func_44())
	{
		if (iParam0 == unk_0x1329891157A54C63())
		{
			return 1;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_44()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

bool func_45(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_46(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1585045[iParam0 /*400*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xA89AE5060232966A(iParam0))
		{
			bVar0 = unk_0xCCFDB2B968281FE8(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_46(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_47();
	}
	if (Global_1315870[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312723[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_47()
{
	return Global_1312729;
}

int func_48(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (unk_0x5FB5CC66497A76D2() != iParam0 && uParam2)
		{
			unk_0xCC69602716E0A325(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_49()
{
	if (Global_14394.f_1 == 1 || Global_14394.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_50(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 13);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 13);
	}
}

int func_51(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_32(0))
	{
		return 0;
	}
	if (iParam8 < 0)
	{
		return 0;
	}
	if (iParam9 < 0)
	{
		return 0;
	}
	if (iParam10 == 76)
	{
		return 0;
	}
	if (iParam11 == 235)
	{
		return 0;
	}
	if (iParam6 == iParam5)
	{
		return 0;
	}
	if (((iParam5 != 144 && iParam5 != 0) && iParam5 != 1) && iParam5 != 2)
	{
		return 0;
	}
	if (Global_98931.f_6302.f_136 < 9)
	{
		Var0.f_0 = uParam0;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_9 = iParam3;
		if (Global_98931.f_6302.f_911 == Var0.f_0)
		{
			Global_98931.f_6302.f_911 = -1;
		}
		Var0.f_3 = func_53(iParam4);
		Var0.f_5 = iParam9;
		Var0.f_4 = (unk_0x48E480685981C7D4() + iParam8);
		Var0.f_1 = iParam12;
		iVar15 = 0;
		unk_0xF3148AAF69AF9CBC(&iVar15, iParam5);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam6;
		Var0.f_14 = iParam7;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		unk_0xF3148AAF69AF9CBC(&(Var0.f_1), 0);
		unk_0xF3148AAF69AF9CBC(&(Var0.f_1), 13);
		unk_0xC69E84EBBD7166E6(&(Var0.f_1), 1);
		if (iParam4 == 0)
		{
			unk_0xF3148AAF69AF9CBC(&(Var0.f_1), 10);
		}
		Global_98931.f_6302[Global_98931.f_6302.f_136 /*15*/] = { Var0 };
		Global_98931.f_6302.f_136++;
		func_52(iParam5);
		return 1;
	}
	return 0;
}

void func_52(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_28(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_98931.f_6302.f_136)
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_6302[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_98931.f_6302[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_98931.f_6302[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_98931.f_6302.f_764)
	{
		if (unk_0x236D8AD7EE179F46(Global_98931.f_6302.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_98931.f_6302.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_98931.f_6302.f_919[iParam0] = iVar1;
}

int func_53(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_54(int iParam0)
{
	if (iParam0 == 1)
	{
		return 9;
	}
	return 8;
}

int func_55(int iParam0)
{
	if (iParam0 == 1)
	{
		return -714760066;
	}
	return -1198055521;
}

void func_56()
{
	unk_0xD1C83BD797927DD5();
	func_59();
	func_57(0, 0);
	func_355();
}

void func_57(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55404)
	{
		Global_55404 = iParam1;
	}
	if (bParam0)
	{
		if ((func_32(0) && Global_69266.f_1 == 1) && func_58(Global_69266))
		{
		}
		else
		{
			Global_55402 = 1;
		}
	}
	if (Global_98931.f_7699 || func_32(0))
	{
		iVar0 = func_31();
		iVar1 = Global_81894[iVar0 /*5*/];
		uVar2 = Global_69289.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_98931.f_7699)
			{
			}
			return;
		}
		if (unk_0x236D8AD7EE179F46(Global_81894[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0x236D8AD7EE179F46(Global_81894[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xF3148AAF69AF9CBC(&(Global_81894[iVar0 /*5*/].f_1), 4);
		unk_0xF3148AAF69AF9CBC(&Global_69268, 1);
		Global_69284 = uVar2;
		Global_69285 = unk_0x48E480685981C7D4();
	}
}

int func_58(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_59()
{
	Global_14559 = 0;
	func_60();
}

void func_60()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if ((unk_0xE0A43912E369FFA5() || Global_14394.f_1 == 9) || Global_14393 == 1)
	{
		unk_0x9E95048D8C96C1EA(0);
		Global_15693 = 6;
		Global_14394.f_1 = 3;
		return;
	}
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(1);
		Global_15693 = 6;
		return;
	}
}

void func_61()
{
	func_64(0, -1);
	func_63(0, 318);
	func_62(1, 320);
}

void func_62(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_55410)
	{
	}
	Global_55410 = 0;
	if (bParam0)
	{
		Global_55411 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67497)
		{
			if (Global_55627[Global_67498[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_67498[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_67497)
		{
			if (Global_67498[iVar0 /*9*/] > 0)
			{
				if (Global_67498[iVar0 /*9*/] == iParam1)
				{
					Global_67498[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_63(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55415 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67497)
	{
		if (iParam1 == -1 || Global_67498[iVar0 /*9*/] == iParam1)
		{
			if (Global_67498[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67498[iVar0 /*9*/].f_6 = iParam0;
				Global_67498[iVar0 /*9*/].f_7 = 1;
				Global_67498[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_64(int iParam0, int iParam1)
{
	Global_55413 = iParam0;
	Global_55414 = iParam1;
}

int func_65(var uParam0, char* sParam1, var uParam2)
{
	switch (*uParam0)
	{
		case 0:
			if (func_96())
			{
				if ((func_95(74) || func_95(75)) && func_94())
				{
					if (func_25() == 0)
					{
						func_93(1);
						func_92(46, 1);
						*uParam0 = 4;
					}
					else
					{
						func_91(uParam2, 0, 0, "MICHAEL", 0, 1);
						if (func_80(uParam2, func_90(), func_25(), "FBIPRAU", func_89(), 9, 1, 0, 0, 0))
						{
							*sParam1 = { func_79(1) };
							func_92(46, 1);
							*uParam0 = 1;
						}
					}
				}
				else if (func_25() == 0)
				{
					func_93(0);
					*uParam0 = 4;
				}
				else
				{
					func_91(uParam2, 0, 0, "MICHAEL", 0, 1);
					if (func_80(uParam2, func_90(), func_25(), "FBIPRAU", func_89(), 9, 1, 0, 0, 0))
					{
						*sParam1 = { func_79(0) };
						*uParam0 = 1;
					}
				}
			}
			else
			{
				func_72();
				*uParam0 = 4;
			}
			break;
		
		case 1:
			if (func_71())
			{
				if (unk_0x21C9C1BDAA5B68B1() >= 0)
				{
					func_70("FBIPRAU", sParam1);
					func_69(1);
					*uParam0 = 3;
				}
			}
			if (func_68())
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_71())
			{
				if (!func_67(0))
				{
					if (!func_95(3) && func_96())
					{
						func_66(50, 0);
					}
					return 1;
				}
			}
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_66(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_98931.f_7227[iParam0] = 1;
	Global_98931.f_7227.f_236[iParam0] = (unk_0x48E480685981C7D4() + iParam1);
}

int func_67(int iParam0)
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

int func_68()
{
	if (Global_15742 == 1 || Global_16709 == 1)
	{
		return 1;
	}
	return 0;
}

void func_69(bool bParam0)
{
	unk_0x9E95048D8C96C1EA(bParam0);
	if (bParam0)
	{
	}
}

void func_70(char* sParam0, char* sParam1)
{
	if (unk_0xE0A43912E369FFA5())
	{
		Global_15750 = 1;
		StringCopy(&Global_15757, sParam0, 24);
		StringCopy(&Global_15751, sParam1, 24);
	}
}

int func_71()
{
	if (Global_15693 == 4)
	{
		if (unk_0xE0A43912E369FFA5())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_72()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_77(iVar0);
		if (!unk_0x5FEB513A4402FD59(iVar1))
		{
			if (func_76(iVar1, 0))
			{
				return;
			}
		}
		iVar0++;
	}
	func_73(func_74(), 0, func_25(), func_90(), 9, 6000, 6000, -1, 0, -1, 0);
}

int func_73(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_32(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == iParam2)
	{
		return 0;
	}
	if (((iParam2 != 144 && iParam2 != 0) && iParam2 != 1) && iParam2 != 2)
	{
		return 0;
	}
	if (Global_98931.f_6302.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_98931.f_6302.f_911 == Var0.f_0)
		{
			Global_98931.f_6302.f_911 = -1;
		}
		Var0.f_3 = func_53(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (unk_0x48E480685981C7D4() + iParam5);
		Var0.f_1 = iParam10;
		iVar15 = 0;
		unk_0xF3148AAF69AF9CBC(&iVar15, iParam2);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		unk_0xF3148AAF69AF9CBC(&(Var0.f_1), 0);
		unk_0xC69E84EBBD7166E6(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			unk_0xF3148AAF69AF9CBC(&(Var0.f_1), 10);
		}
		Global_98931.f_6302[Global_98931.f_6302.f_136 /*15*/] = { Var0 };
		Global_98931.f_6302.f_136++;
		func_52(iParam2);
		return 1;
	}
	return 0;
}

int func_74()
{
	switch (func_75())
	{
		case 33:
			switch (func_25())
			{
				case 0:
					return -1847734803;
					break;
				
				case 1:
					return -714760066;
					break;
				
				case 2:
					return -1198055521;
					break;
			}
			break;
		
		case 34:
			switch (func_25())
			{
				case 0:
					return 1374342572;
					break;
				
				case 1:
					return 530956160;
					break;
				
				case 2:
					return 240475766;
					break;
			}
			break;
		
		case 36:
			switch (func_25())
			{
				case 0:
					return 580731697;
					break;
				
				case 1:
					return 728176806;
					break;
				
				case 2:
					return 910240872;
					break;
			}
			break;
		
		case 37:
			switch (func_25())
			{
				case 0:
					return 74540475;
					break;
				
				case 1:
					return -1200353264;
					break;
				
				case 2:
					return 801340541;
					break;
			}
			break;
	}
	return -1;
}

int func_75()
{
	return Global_69282;
}

int func_76(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0x5FEB513A4402FD59(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_77(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x81873881071CD9FE())
			{
				return 0;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_86995, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_77(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_25())
	{
		return unk_0x81873881071CD9FE();
	}
	return Global_88620[func_78(iParam0)];
}

int func_78(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

struct<4> func_79(bool bParam0)
{
	struct<4> Var0;
	
	if (bParam0)
	{
		switch (func_25())
		{
			case 1:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_ISAGO", 16);
				break;
		}
	}
	else
	{
		switch (func_25())
		{
			case 1:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			
			case 2:
				StringCopy(&Var0, "FBI4_THATSIT", 16);
				break;
			}
	}
	return Var0;
}

bool func_80(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	func_88(uParam0, iParam1, sParam3, iParam7, iParam8, 0);
	Global_1582 = iParam2;
	Global_15741 = 0;
	Global_15700 = 1;
	Global_15707 = 0;
	Global_15702 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_15707 = 0;
	Global_15698 = 1;
	Global_15745 = 0;
	Global_15747 = 0;
	if (iParam6 == 1)
	{
		Global_15705 = 1;
	}
	else
	{
		Global_15705 = 0;
	}
	Global_2621441 = 0;
	return func_81(sParam4, iParam5, bParam9);
}

int func_81(char* sParam0, int iParam1, bool bParam2)
{
	Global_15694 = 0;
	if (Global_15693 == 0 || Global_15695 == 2)
	{
		if (Global_15693 != 0)
		{
			if (iParam1 > Global_15695)
			{
				if (Global_15700 == 0)
				{
					unk_0x9E95048D8C96C1EA(false);
					Global_14394.f_1 = 3;
					Global_15693 = 0;
					Global_15694 = 1;
					Global_15746 = 0;
					Global_15689 = 0;
					Global_15690 = 0;
					Global_15704 = 0;
					Global_15703 = 0;
					Global_14393 = 0;
				}
				else
				{
					func_60();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xE1772957381F609F())
		{
			return 0;
		}
		if (func_87(8, -1))
		{
			return 0;
		}
		Global_15769 = { Global_15763 };
		func_86();
		Global_14982 = { Global_15147 };
		Global_15699 = Global_15700;
		Global_15706 = Global_15707;
		Global_2621442 = Global_2621441;
		Global_15708 = { Global_15724 };
		Global_15701 = Global_15702;
		Global_16683 = Global_16684;
		Global_16691 = { Global_16697 };
		Global_16685 = Global_16686;
		Global_16687 = Global_16688;
		Global_16689 = Global_16690;
		Global_15312.f_370 = Global_16682;
		Global_15312.f_368 = Global_16680;
		Global_15312.f_369 = Global_16681;
		Global_15689 = Global_15690;
		if (Global_15699)
		{
			unk_0xC69E84EBBD7166E6(&Global_2264, 20);
			unk_0xC69E84EBBD7166E6(&Global_2265, 17);
			unk_0xC69E84EBBD7166E6(&Global_2266, 0);
			if (bParam2)
			{
				func_85();
				if (Global_3069[Global_14394 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14394.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14360 == 1)
			{
				return 0;
			}
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (func_84())
				{
					return 0;
				}
				if (unk_0xE8CA5AAF4928DD46(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xD81BC0FD4D47CC04(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0x326033AAF1073AF3(unk_0x81873881071CD9FE()))
				{
					return 0;
				}
				if (unk_0xEAF6063E5F7E0DD4(unk_0x81873881071CD9FE(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69020)
				{
					if (unk_0x2C237D28F05F0008(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x1E73DDF10071C453(unk_0x1329891157A54C63()))
					{
						return 0;
					}
					if (unk_0x2881A00480A747EC(unk_0x81873881071CD9FE()))
					{
						return 0;
					}
					if (unk_0x2C3A6C25D061092B(unk_0x1329891157A54C63()))
					{
						return 0;
					}
				}
			}
			if (func_49())
			{
				return 0;
			}
			else
			{
				switch (Global_14394.f_1)
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
				if (unk_0x236D8AD7EE179F46(Global_2264, 9))
				{
					return 0;
				}
			}
			func_83();
			Global_15703 = bParam2;
		}
		Global_15695 = iParam1;
		StringCopy(&Global_15312, sParam0, 24);
		Global_14559 = 0;
		func_82();
		return 1;
	}
	if (Global_15693 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15695 || iParam1 == Global_15695)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_60();
	}
	return 0;
}

void func_82()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14561[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x9E95048D8C96C1EA(false);
	Global_15693 = 1;
}

void func_83()
{
	Global_15746 = Global_15745;
	Global_15740 = Global_15741;
	Global_15787 = { Global_15775 };
	Global_15793 = { Global_15781 };
	Global_15748 = Global_15747;
	Global_15817 = { Global_15799 };
	Global_15823 = { Global_15805 };
	Global_15829 = { Global_15811 };
	Global_15835 = { Global_15841 };
	Global_1579 = Global_1580;
	Global_1581 = Global_1582;
	Global_15704 = Global_15705;
	Global_15706 = Global_15707;
	Global_15708 = { Global_15724 };
	Global_15697 = Global_15698;
	Global_16709 = 0;
	Global_15742 = 0;
	Global_15743 = 0;
	unk_0xC69E84EBBD7166E6(&Global_2265, 16);
}

int func_84()
{
	int iVar0;
	int iVar1;
	
	if (Global_69020)
	{
		iVar0 = 0;
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar1, 1);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x52946741890858CC() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
	{
		if (unk_0x99E8A1E54746EF15(unk_0x81873881071CD9FE(), 78, 1))
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

void func_85()
{
	if (func_27(14))
	{
		if (!unk_0x930F8FBB8E9537CC(unk_0x81873881071CD9FE()))
		{
			if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[0 /*29*/])
			{
				Global_14394 = 0;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[1 /*29*/])
			{
				Global_14394 = 1;
			}
			else if (unk_0x14B7103DBD149FFE(unk_0x81873881071CD9FE()) == Global_98931.f_32499[2 /*29*/])
			{
				Global_14394 = 2;
			}
			else
			{
				Global_14394 = 0;
			}
		}
	}
	else
	{
		Global_14394 = func_25();
		if (Global_14394 == 145)
		{
			Global_14394 = 3;
		}
		if (Global_69020)
		{
			Global_14394 = 3;
		}
		if (Global_14394 > 3)
		{
			Global_14394 = 3;
		}
	}
}

void func_86()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14982[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14982[iVar0 /*10*/].f_1), "", 24);
		Global_14982[iVar0 /*10*/].f_7 = 0;
		Global_14982[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14982.f_161 = -99;
	Global_14982.f_162 = { 0f, 0f, 0f };
}

bool func_87(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1334766.f_203[iParam1];
			}
			break;
	}
	return unk_0x236D8AD7EE179F46(Global_1334766.f_949, iParam0);
}

void func_88(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15147 = { *uParam0 };
	Global_1580 = iParam1;
	StringCopy(&Global_15763, sParam2, 24);
	Global_16682 = iParam5;
	if (iParam3 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16681 = 1;
		Global_16679 = 0;
	}
	else
	{
		Global_16681 = 0;
		Global_16679 = 1;
	}
}

char* func_89()
{
	char* sVar0;
	
	switch (func_75())
	{
		case 33:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP1_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP1_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP1_TENDC";
					break;
			}
			break;
		
		case 34:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP2_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP2_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP2_TENDC";
					break;
			}
			break;
		
		case 36:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP4_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP4_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP4_TENDC";
					break;
			}
			break;
		
		case 37:
			switch (func_25())
			{
				case 0:
					sVar0 = "FBIP5_MENDC";
					break;
				
				case 1:
					sVar0 = "FBIP5_FENDC";
					break;
				
				case 2:
					sVar0 = "FBIP5_TENDC";
					break;
			}
			break;
	}
	return sVar0;
}

int func_90()
{
	int iVar0;
	
	switch (func_25())
	{
		case 0:
			iVar0 = 5;
			break;
		
		case 1:
			iVar0 = 9;
			break;
		
		case 2:
			iVar0 = 8;
			break;
	}
	return iVar0;
}

void func_91(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69020)
	{
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 0);
			}
			else
			{
				unk_0xE814EBF9E6A3FB47(iParam2, 1);
			}
		}
		if (!unk_0x5FEB513A4402FD59(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xA7ED59066FB82067(iParam2, 0);
			}
			else
			{
				unk_0xA7ED59066FB82067(iParam2, 1);
			}
		}
	}
}

void func_92(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_98931.f_7699.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_98931.f_7699.f_99.f_58[iParam0] = iParam1;
}

void func_93(bool bParam0)
{
	if (bParam0)
	{
		func_73(1527885205, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
	else if (!func_95(3))
	{
		func_73(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 50, -1, 0);
	}
	else
	{
		func_73(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
}

int func_94()
{
	if ((func_95(41) && func_95(3)) && func_95(21))
	{
		return 1;
	}
	return 0;
}

int func_95(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_98931.f_7699.f_330[iParam0 /*6*/];
}

int func_96()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 33;
	while (iVar1 <= 37)
	{
		if (func_95(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (func_97(45))
	{
		iVar0++;
	}
	if (iVar0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_97(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_98931.f_7699.f_99.f_58[iParam0];
}

void func_98(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x645DF34C4E038370(sParam0);
	unk_0x16885CADDEC73B2E(iParam1, 1);
}

bool func_99(char* sParam0, int iParam1, int iParam2)
{
	unk_0x35C3DC3A3BE08CC1(sParam0);
	if (iParam1 == 1)
	{
		unk_0x072D7B028D6C7A05(iParam2);
	}
	return unk_0x8BF06EFC37AF94F0();
}

bool func_100(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

void func_101()
{
	func_208(&iLocal_873, &uLocal_874, &iLocal_685, &iLocal_821, &iLocal_820, Local_826, Local_867.f_0, 0, 1090519040);
	func_207();
	func_148();
	switch (iLocal_683)
	{
		case 0:
			if (func_115(iLocal_682, bLocal_27))
			{
				if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 0)
				{
					if (func_36(iLocal_873))
					{
						if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_873, 0))
						{
							func_114("PRA_LEVVEH", &iLocal_819);
						}
					}
				}
				iLocal_683 = 1;
			}
			break;
		
		case 1:
			func_113(&iLocal_820, Local_826, &iLocal_684, iLocal_685, &iLocal_819, &iLocal_837);
			if (func_106(iLocal_873, Local_826, &iLocal_820, iLocal_685, iLocal_684, &iLocal_835, &iLocal_838, &iLocal_834, &iLocal_833, &iLocal_819, 1090519040))
			{
				if (!func_105())
				{
					if (func_65(&uLocal_686, &cLocal_1043, &uLocal_878))
					{
						func_61();
						func_56();
					}
				}
				else
				{
					func_92(46, 1);
					func_61();
					func_103(0);
				}
			}
			break;
		
		case 3:
			if (func_36(Local_867.f_0))
			{
				if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), Local_867.f_0, 0))
				{
					unk_0xDC81A805934C85CD(unk_0x81873881071CD9FE(), Local_867.f_0, -1);
				}
				else
				{
					func_102(Local_867.f_0, Local_826, 126.0705f, 0, 1);
					func_39(1, 1, 1);
					iLocal_683 = 1;
				}
			}
			break;
	}
}

int func_102(int iParam0, struct<3> Param1, float fParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_10(iParam0))
	{
		if (bParam5 == 1)
		{
			fVar1 = 0f;
			bVar0 = unk_0x84426D0C9AE7A434(Param1, &fVar1, 0);
			if (bVar0)
			{
				Param1.f_2 = fVar1;
			}
		}
		unk_0xB067093BBAF0A747(iParam0, Param1, 1, 0, 0, iParam6);
		unk_0xC24172029826A66F(iParam0, fParam4);
		if (bParam5)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

void func_103(bool bParam0)
{
	func_104(iLocal_682);
	iLocal_816 = iLocal_682;
	if (!bParam0)
	{
		iLocal_682 = iLocal_816 + 1;
	}
	else if (iLocal_816 > 0)
	{
		iLocal_682 = (iLocal_816 - 1);
	}
	iLocal_819 = 0;
	iLocal_683 = 0;
}

void func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
	}
}

int func_105()
{
	if (func_96())
	{
		if ((func_95(74) || func_95(75)) && func_94())
		{
			return 1;
		}
	}
	return 0;
}

int func_106(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	float fVar0;
	
	if ((iParam5 == 1 || iParam5 == 2) || iParam5 == 3)
	{
		if (iParam6 == 0)
		{
			if (func_36(iParam0))
			{
				if (!unk_0x69F59C68E86FDF3D(iParam0))
				{
					func_114(func_112(func_75()), iParam11);
				}
			}
			if (!unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Param1, fParam12, fParam12, 2f, 0, 1, 2))
			{
				unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Param1, fParam12, fParam12, 2f, 1, 1, 2);
				if (func_99(func_112(func_75()), 0, 0))
				{
					unk_0xAC6C9BCDC1EB8365(func_112(func_75()));
				}
				*iParam7 = 1;
				func_110(iParam4, Param1, 1);
			}
			else
			{
				if (*iParam7)
				{
					fVar0 = (fParam12 / 2f);
					if (func_100(unk_0x81873881071CD9FE(), Param1, fVar0))
					{
						*iParam7 = 0;
						func_109(1077936128, 1);
					}
				}
				func_7(iParam4);
			}
		}
	}
	else if (unk_0x515B65C19A5CA9B1(iParam0, Param1, fParam12, fParam12, 2f, 0, 1, 2))
	{
		if (*iParam9 == -1)
		{
			unk_0xC390A6485FB80923(iParam0, 2);
			return 1;
		}
		if (!*iParam10)
		{
			if (func_99(func_112(func_75()), 0, 0))
			{
				unk_0xD1C83BD797927DD5();
			}
			*iParam9 = unk_0x48E480685981C7D4();
			*iParam10 = 1;
			unk_0xC390A6485FB80923(iParam0, 2);
		}
		else if ((unk_0x48E480685981C7D4() - *iParam9) > 3000)
		{
			return 1;
		}
	}
	else
	{
		if (unk_0x4AC847D90EBAFAEE(iParam0) == 2)
		{
			unk_0xC390A6485FB80923(iParam0, 1);
		}
		if (!*iParam8)
		{
			if (func_99(func_108(func_75(), 0), 0, 0))
			{
				unk_0xAC6C9BCDC1EB8365(func_108(func_75(), 0));
			}
			if (!func_99(func_107(func_75()), 0, 0))
			{
				func_98(func_107(func_75()), 7500, 0);
				*iParam8 = 1;
			}
		}
		*iParam7 = 1;
	}
	return 0;
}

char* func_107(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_RETVEH";
			break;
		
		case 34:
			sVar0 = "PRB_RETVEH";
			break;
		
		case 78:
			sVar0 = "PR_RETVEH";
			break;
		
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_RETVEH";
			break;
	}
	return sVar0;
}

char* func_108(int iParam0, bool bParam1)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_TAKBACK";
			break;
		
		case 34:
			sVar0 = "PRB_TAKBACK";
			break;
		
		case 78:
			sVar0 = "PR_TAKBACK";
			break;
		
		case 80:
		case 81:
		case 82:
			if (!bParam1)
			{
				sVar0 = "PRF_TAKBACK";
			}
			else
			{
				sVar0 = "PRF_GARAGE";
			}
			break;
	}
	return sVar0;
}

int func_109(float fParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		return 1;
	}
	iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
	if (unk_0x7404950238A154C2(iVar0, 0))
	{
		if (unk_0xB0B9E53CEFDB16AA(iVar0, -1) == unk_0x81873881071CD9FE())
		{
			if (!unk_0x01C5771BE1D8ECE5(iVar0))
			{
				unk_0xE4DF2496E641851E(iVar0, fParam0, iParam1, 0);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0x7E0C455D8C091153(unk_0x81873881071CD9FE()))
	{
		return 1;
	}
	if (unk_0x7404950238A154C2(iVar0, 0))
	{
		if (unk_0x01C5771BE1D8ECE5(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_110(int iParam0, struct<3> Param1, int iParam4)
{
	if (!unk_0xFBACB273AA628CC5(*iParam0))
	{
		*iParam0 = func_111(Param1, 5, iParam4);
	}
}

int func_111(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = unk_0xA949BE56543040D2(Param0);
	unk_0xCB015C3E2E01CA1C(iVar0, iParam3);
	unk_0xD6DF56BB9537BCC5(iVar0, 1f);
	unk_0x116FDB7E27590C7F(iVar0, iParam4);
	return iVar0;
}

char* func_112(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 33:
			sVar0 = "PRA_LEVVEH";
			break;
		
		case 34:
			sVar0 = "PRB_LEVVEH";
			break;
		
		case 78:
			sVar0 = "PR_LEVVEH";
			break;
		
		case 80:
		case 81:
		case 82:
			sVar0 = "PRF_LEAVE";
			break;
	}
	return sVar0;
}

void func_113(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	switch (*iParam4)
	{
		case 0:
			if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0)
			{
				*iParam4 = 1;
			}
			break;
		
		case 1:
			func_7(iParam0);
			if ((iParam5 == 1 || iParam5 == 2) || iParam5 == 3)
			{
				unk_0xD1C83BD797927DD5();
				func_98("LOSE_WANTED", 7500, 0);
				*iParam4 = 2;
			}
			break;
		
		case 2:
			if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 0)
			{
				unk_0xD1C83BD797927DD5();
				if ((iParam5 == 1 || iParam5 == 2) || iParam5 == 3)
				{
					func_114(func_108(func_75(), 0), iParam6);
					func_110(iParam0, Param1, 1);
				}
				else if (iParam5 == 0 && !*iParam7)
				{
					func_98(func_107(func_75()), 7500, 0);
					*iParam7 = 1;
				}
				*iParam4 = 0;
			}
			break;
	}
}

void func_114(char* sParam0, int iParam1)
{
	if (!*iParam1)
	{
		func_98(sParam0, 7500, 0);
		*iParam1 = 1;
	}
}

int func_115(int iParam0, bool bParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				bLocal_27 = false;
				func_39(1, 1, 1);
			}
			else if (func_142(1, Local_823, 0))
			{
				if (func_141())
				{
					func_140(33);
					unk_0xB5A91586385F755B(joaat("trash"), 1);
					unk_0xB5A91586385F755B(joaat("towtruck"), 1);
					unk_0xB5A91586385F755B(joaat("s_m_y_garbage"), 1);
					iLocal_682 = 2;
					func_7(&iLocal_820);
					func_138(&uLocal_670, 0, 0);
					func_137(190, 1244.338f, -339.3197f, 68.0823f);
					func_135();
					unk_0xC904C30D9B70F037("DRIVE", 0);
					unk_0xC904C30D9B70F037("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0xC904C30D9B70F037("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0xC904C30D9B70F037("WORLD_VEHICLE_DRIVE_SOLO", 0);
					return 1;
				}
				else if (((func_142(2, Local_867.f_1, Local_867.f_4) && func_142(3, Local_839.f_1, Local_839.f_4)) && func_142(4, Local_853.f_1, Local_853.f_4)) && func_134(0))
				{
					func_135();
					func_140(33);
					if (func_321(Local_839.f_0))
					{
						func_133(Local_839.f_0);
					}
					if (func_321(Local_853.f_0))
					{
						func_132(Local_853.f_0);
					}
					func_131(Local_867.f_0);
					if (func_321(Local_853.f_0) && func_321(Local_839.f_0))
					{
						func_120(iLocal_829, 1, 0, 1);
					}
					unk_0xB5A91586385F755B(joaat("trash"), 1);
					unk_0xB5A91586385F755B(joaat("towtruck"), 1);
					unk_0xB5A91586385F755B(joaat("s_m_y_garbage"), 1);
					if (unk_0x4770B4BC52820FF1(Local_867.f_0) != 0)
					{
						iVar0 = unk_0x4770B4BC52820FF1(Local_867.f_0);
						unk_0x2A69072B23BDFD07(1);
						func_7(&iVar0);
						unk_0x2A69072B23BDFD07(0);
					}
					func_118(&iLocal_820, Local_867.f_0, 1);
					func_137(190, 1244.338f, -339.3197f, 68.0823f);
					unk_0xC904C30D9B70F037("DRIVE", 0);
					unk_0xC904C30D9B70F037("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0xC904C30D9B70F037("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0xC904C30D9B70F037("WORLD_VEHICLE_DRIVE_SOLO", 0);
					return 1;
				}
			}
			break;
		
		case 1:
			if (bParam1)
			{
				if ((func_142(2, Local_867.f_1, Local_867.f_4) && func_142(3, Local_839.f_1, Local_839.f_4)) && func_142(4, Local_853.f_1, Local_853.f_4))
				{
					func_117(unk_0x81873881071CD9FE(), 1197.861f, -353.011f, 68.0929f, 278.9647f);
					func_116();
					bLocal_27 = false;
					unk_0xC904C30D9B70F037("DRIVE", 0);
					unk_0xC904C30D9B70F037("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0xC904C30D9B70F037("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0xC904C30D9B70F037("WORLD_VEHICLE_DRIVE_SOLO", 0);
					func_39(1, 1, 1);
				}
			}
			else
			{
				func_135();
				return 1;
			}
			break;
		
		case 2:
			if (bParam1)
			{
				if (func_142(2, Local_867.f_1, Local_867.f_4))
				{
					func_116();
					func_135();
					unk_0xDC81A805934C85CD(unk_0x81873881071CD9FE(), Local_867.f_0, -1);
					bLocal_27 = false;
					func_39(1, 1, 1);
				}
			}
			else
			{
				return 1;
			}
			break;
		
		case 3:
			if (bParam1)
			{
				if (func_142(2, Local_826, Local_867.f_4))
				{
					func_116();
					unk_0xDC81A805934C85CD(unk_0x81873881071CD9FE(), Local_867.f_0, -1);
					func_135();
					bLocal_27 = false;
					func_39(1, 1, 1);
				}
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_116()
{
	if (iLocal_682 == 1)
	{
		func_133(Local_839.f_0);
		func_132(Local_853.f_0);
		func_131(Local_867.f_0);
		func_120(iLocal_829, 1, 0, 1);
	}
	iLocal_876 = 0;
	iLocal_837 = 0;
	iLocal_838 = 0;
	iLocal_833 = 0;
	iLocal_834 = 0;
	iLocal_835 = 0;
}

void func_117(int iParam0, struct<3> Param1, float fParam4)
{
	if (func_321(uParam0))
	{
		unk_0x27CC98B7C879C320(uParam0);
	}
	func_102(iParam0, Param1, fParam4, 0, 1);
}

void func_118(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0xFBACB273AA628CC5(*iParam0))
	{
		*iParam0 = func_119(iParam1, iParam2, 5);
	}
}

int func_119(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_10(uParam0))
	{
		iVar0 = unk_0xE122DDAE9E94767B(uParam0);
		unk_0xD5CD0E7173F858FF(iVar0, uParam1);
		unk_0xCB015C3E2E01CA1C(iVar0, iParam2);
		unk_0xD6DF56BB9537BCC5(iVar0, 1f);
	}
	return iVar0;
}

void func_120(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iLocal_80 = iParam0;
	bLocal_662 = iParam1;
	bLocal_661 = iParam2;
	bLocal_663 = iParam3;
	Local_110[0 /*11*/].f_1 = 0;
	Local_110[1 /*11*/].f_1 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_80 - 1))
	{
		Local_133[iVar0 /*25*/].f_18 = 0;
		iVar0++;
	}
	fLocal_659 = 0f;
	func_122();
	Local_110[1 /*11*/].f_7 = 3;
	Local_110[1 /*11*/].f_5 = 0;
	Local_110[1 /*11*/].f_10 = 1;
	Local_110[1 /*11*/].f_2 = 1500;
	Local_110[1 /*11*/].f_3 = 500;
	Local_110[0 /*11*/].f_5 = 0;
	Local_110[0 /*11*/].f_10 = 0;
	Local_110[0 /*11*/].f_2 = 1000;
	Local_110[0 /*11*/].f_3 = 100;
	unk_0x4865E80F793024CE("Enemies", &uLocal_79);
	unk_0x506A601663C5417C(Local_110[0 /*11*/], uLocal_79);
	unk_0x506A601663C5417C(Local_110[1 /*11*/], uLocal_79);
	unk_0xA0E2C72EEFBD5858(Local_110[0 /*11*/], 1, 0);
	unk_0xA0E2C72EEFBD5858(Local_110[1 /*11*/], 1, 0);
	func_121(1.9f, 1.9f, 8f, 0f, 0f, 0f);
}

void func_121(struct<3> Param0, struct<3> Param3)
{
	Local_81.f_8 = { Param0 };
	Local_81.f_11 = { Param3 };
	Local_81.f_1 = 4;
}

void func_122()
{
	if (!unk_0x04C377C10639B842(Local_110[0 /*11*/], iLocal_108, 0))
	{
		unk_0xD91194CE3D1E1D77(Local_110[0 /*11*/], unk_0xB07F27EC3B05E4EA(iLocal_108, func_130(1)), 1f, -1, 1048576000, 0, 1193033728);
		Local_110[0 /*11*/].f_7 = 1;
	}
	else
	{
		func_123(1);
	}
}

void func_123(bool bParam0)
{
	if (!unk_0xBEB00EB4ADDC2A33(iLocal_108, 0))
	{
		func_124(bParam0);
		if (iLocal_660 != (iLocal_80 - 1))
		{
			if (iLocal_660 == 4)
			{
				unk_0x336AE5D1AAA9A5F5(Local_110[0 /*11*/], iLocal_108, Local_133[iLocal_660 /*25*/], 15f, 2883755, Local_133[iLocal_660 /*25*/].f_6);
			}
			else
			{
				unk_0x1ABA8A919187E144(Local_110[0 /*11*/], iLocal_108, Local_133[iLocal_660 /*25*/], 15f, 0, 0, 2883755, Local_133[iLocal_660 /*25*/].f_6, Local_133[iLocal_660 /*25*/].f_7);
			}
			Local_110[0 /*11*/].f_8 = Local_110[0 /*11*/].f_7;
			Local_110[0 /*11*/].f_7 = 4;
		}
		else
		{
			unk_0x2D7E8CD6F4101CAB(Local_110[0 /*11*/], iLocal_108, 15f, 786599);
			Local_110[0 /*11*/].f_8 = Local_110[0 /*11*/].f_7;
			Local_110[0 /*11*/].f_7 = 10;
		}
	}
	else
	{
		Local_110[0 /*11*/].f_8 = Local_110[0 /*11*/].f_7;
		Local_110[0 /*11*/].f_7 = 7;
	}
}

void func_124(bool bParam0)
{
	if (iLocal_660 != -1)
	{
		if (!func_129(Local_133[iLocal_660 /*25*/].f_11) && !func_129(Local_133[iLocal_660 /*25*/].f_14))
		{
			unk_0x3DD1ED742E99F292(Local_133[iLocal_660 /*25*/].f_11 - Local_133[iLocal_660 /*25*/].f_14, Local_133[iLocal_660 /*25*/].f_11 + Local_133[iLocal_660 /*25*/].f_14, 1, 1);
		}
	}
	if (!bParam0)
	{
		func_127();
	}
	else
	{
		iLocal_660 = func_125();
	}
	if (iLocal_660 != -1)
	{
		if (!func_129(Local_133[iLocal_660 /*25*/].f_11) && !func_129(Local_133[iLocal_660 /*25*/].f_14))
		{
			unk_0x3DD1ED742E99F292(Local_133[iLocal_660 /*25*/].f_11 - Local_133[iLocal_660 /*25*/].f_14, Local_133[iLocal_660 /*25*/].f_11 + Local_133[iLocal_660 /*25*/].f_14, 0, 1);
		}
	}
}

int func_125()
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	float fVar6[21];
	float fVar28;
	float fVar29;
	float fVar30;
	int iVar31;
	
	if (func_36(iLocal_108))
	{
		Var1 = { unk_0xB6AE0DAE06D56288(iLocal_108, 1) };
		iVar4 = 0;
		while (iVar4 <= (iLocal_80 - 1))
		{
			fVar28 = unk_0x0D6E79537424BACE(Var1, Local_133[iVar4 /*25*/], 1);
			if (!func_129(Local_133[iVar4 /*25*/]) && fVar28 > 25f)
			{
				fVar6[iVar4] = fVar28;
			}
			else
			{
				fVar6[iVar4] = -1f;
			}
			iVar4++;
		}
		fVar29 = fVar6[0];
		iVar4 = 0;
		while (iVar4 <= (iLocal_80 - 1))
		{
			if (fVar6[iVar4] != -1f)
			{
				if (fVar6[iVar4] < fVar29)
				{
					fVar29 = fVar6[iVar4];
					iVar0 = iVar4;
				}
			}
			iVar4++;
		}
		fVar30 = func_126(Local_133[iVar0 /*25*/] - Var1, unk_0xC99223BD7E489FC6(iLocal_108));
		iVar5 = iVar0;
		iVar31 = 0;
		while (fVar30 < 0f && iVar31 < 40)
		{
			iVar5++;
			if (iVar5 >= 21)
			{
				iVar5 = 0;
			}
			Var1 = { unk_0xB6AE0DAE06D56288(iLocal_108, 1) };
			fVar30 = func_126(Local_133[iVar5 /*25*/] - Var1, unk_0xC99223BD7E489FC6(iLocal_108));
			iVar31++;
		}
		if (iVar31 >= 40)
		{
			iVar5 = (iLocal_80 - 1);
		}
	}
	iVar0 = iVar5;
	return iVar0;
}

float func_126(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

void func_127()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (bLocal_662)
	{
		while (Local_133[iLocal_660 /*25*/].f_18 && iVar0 != -1)
		{
			iLocal_660++;
			if (iLocal_660 >= (iLocal_80 - 1))
			{
				iVar0 = -1;
				iLocal_660 = (iLocal_80 - 1);
			}
		}
		if (iLocal_660 == (iLocal_80 - 1))
		{
			if (bLocal_661)
			{
				iLocal_660 = 0;
				iVar0 = 0;
				while (iVar0 <= (iLocal_80 - 1))
				{
					Local_133[iVar0 /*25*/].f_18 = 0;
					iVar0++;
				}
			}
			else
			{
				iLocal_660 = (iLocal_80 - 1);
				return;
			}
		}
	}
	else
	{
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 <= (iLocal_80 - 1))
		{
			if (Local_133[iVar0 /*25*/].f_18)
			{
				iVar1++;
			}
			iVar0++;
		}
		if (iVar1 == (iLocal_80 - 1))
		{
			iLocal_660 = (iLocal_80 - 1);
		}
		else if (iVar1 == iLocal_80)
		{
			if (bLocal_661)
			{
				iVar0 = 0;
				while (iVar0 <= (iLocal_80 - 1))
				{
					Local_133[iVar0 /*25*/].f_18 = 0;
					iVar0++;
				}
				iLocal_660 = func_128();
			}
			else
			{
				iLocal_660 = -1;
				return;
			}
		}
		else
		{
			iLocal_660 = func_128();
		}
	}
}

int func_128()
{
	int iVar0;
	
	iVar0 = unk_0x2E0A9E3291F398E3(0, (iLocal_80 - 1));
	while (Local_133[iVar0 /*25*/].f_18)
	{
		iVar0 = unk_0x2E0A9E3291F398E3(0, (iLocal_80 - 1));
	}
	return iVar0;
}

int func_129(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_130(bool bParam0)
{
	struct<3> Var0;
	var uVar3;
	
	if (!bParam0)
	{
		uVar3 = unk_0x2430739394FC68FC(iLocal_108, "wheel_rf");
	}
	else
	{
		uVar3 = unk_0x2430739394FC68FC(iLocal_108, "wheel_lf");
	}
	Var0 = { unk_0xDE2CF83C47088189(iLocal_108, uVar3) };
	Var0 = { unk_0xFF603DE3EBE2C5F9(iLocal_108, Var0) };
	if (!bParam0)
	{
		Var0 = { Var0 + Vector(0.5f, 0f, 1f) };
	}
	else
	{
		Var0 = { Var0 + Vector(0.5f, 0f, -1f) };
	}
	return Var0;
}

void func_131(int iParam0)
{
	if (func_36(iParam0))
	{
		iLocal_108 = iParam0;
	}
}

void func_132(var uParam0)
{
	if (func_321(uParam0))
	{
		Local_110[1 /*11*/] = uParam0;
	}
}

void func_133(var uParam0)
{
	if (func_321(uParam0))
	{
		Local_110[0 /*11*/] = uParam0;
	}
}

int func_134(bool bParam0)
{
	unk_0x295DC04FC13E025B("missfbi4prepp1");
	unk_0x84DD60B32678925A("missfbi4prepp1_garbageman");
	if (bParam0)
	{
		while (!unk_0x8E8B546E1A81D27F("missfbi4prepp1") && !unk_0xF8EE0045B0C60677("missfbi4prepp1_garbageman"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		return 1;
	}
	else if (unk_0x8E8B546E1A81D27F("missfbi4prepp1") && unk_0xF8EE0045B0C60677("missfbi4prepp1_garbageman"))
	{
		return 1;
	}
	return 0;
}

void func_135()
{
	func_136(&uLocal_878);
}

void func_136(var uParam0)
{
	int iVar0;
	char* sVar1;
	
	switch (func_25())
	{
		case 0:
			iVar0 = 0;
			sVar1 = "MICHAEL";
			break;
		
		case 1:
			iVar0 = 1;
			sVar1 = "FRANKLIN";
			break;
		
		case 2:
			iVar0 = 2;
			sVar1 = "TREVOR";
			break;
	}
	func_91(uParam0, iVar0, unk_0x81873881071CD9FE(), sVar1, 0, 1);
}

void func_137(int iParam0, struct<3> Param1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if ((Param1.f_0 == Global_25250[iVar0 /*23*/][0 /*3*/] && Param1.f_1 == Global_25250[iVar0 /*23*/][0 /*3*/].f_1) && Param1.f_2 == Global_25250[iVar0 /*23*/][0 /*3*/].f_2)
	{
		return;
	}
	Global_25247 = 1;
	unk_0xF3148AAF69AF9CBC(&(Global_25250[iVar0 /*23*/].f_11), 18);
	Global_25250[iVar0 /*23*/][0 /*3*/] = { Param1 };
	Global_31300 = 1;
}

void func_138(var uParam0, int iParam1, int iParam2)
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
		if (func_139(uParam0->f_3))
		{
			unk_0xB8BB626315D394F5(1);
		}
	}
	if (!unk_0x4357449749A521B1(sVar0))
	{
		if (func_139(sVar0))
		{
			unk_0xB8BB626315D394F5(1);
		}
	}
}

bool func_139(char* sParam0)
{
	unk_0xF7F787102FC9BCAC(sParam0);
	return unk_0xEF468B98099969A5(0);
}

void func_140(int iParam0)
{
	if (Global_88064 != -1)
	{
		if (iParam0 == Global_88064)
		{
			Global_88068 = 1;
			return;
		}
	}
}

int func_141()
{
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (unk_0xCC6B00B8460CDA0E(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), joaat("trash")))
		{
			unk_0xD768713E73165208(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0), 1, 0);
			iLocal_873 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
			if (func_36(iLocal_873))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_142(int iParam0, struct<3> Param1, float fParam4)
{
	switch (iParam0)
	{
		case 0:
			if (func_147(Param1, Local_823, 1056964608, 0) && fParam4 == 0f)
			{
				return 1;
			}
			break;
		
		case 1:
			unk_0x86B83C54AF71BD12(sLocal_818, 0);
			if (unk_0xCD8DA898314F3016(0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_36(Global_87639[0]))
			{
				unk_0xD768713E73165208(Global_87639[0], 1, 1);
				Local_867.f_0 = Global_87639[0];
				if (func_36(Local_867.f_0))
				{
					func_35(Local_867.f_0, 0);
					unk_0x50C9C2E3327FDF31(Local_867.f_0, 1);
					unk_0xEA89E72C99125D9C(Local_867.f_0, 1);
					return 1;
				}
			}
			else if (func_146(&Local_867, Local_867.f_5, Local_867.f_1, Local_867.f_4, 1))
			{
				func_35(Local_867.f_0, 0);
				unk_0x50C9C2E3327FDF31(Local_867.f_0, 1);
				unk_0xEA89E72C99125D9C(Local_867.f_0, 1);
				return 1;
			}
			break;
		
		case 3:
			if (unk_0x86CCCD2FAE9D5E65(Global_87639.f_9[0]))
			{
				if (!unk_0x82F01138B895DCE6(Global_87639.f_9[0], 1))
				{
					unk_0xD768713E73165208(Global_87639.f_9[0], 1, 1);
					Local_839.f_0 = Global_87639.f_9[0];
					if (func_321(Local_839.f_0))
					{
						unk_0x1D15D99A10A15334(Local_839.f_0, true);
						unk_0xCE566DBDCACD245E(Local_839.f_0, 170, 0);
						unk_0x7F5F0D37173E518C(Local_839.f_0, 65536, 1);
						unk_0x4B9FA68A3AC8C29D(Local_839.f_0, 50, 1);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_143(&Local_839, Local_839.f_5, Local_839.f_1, Local_839.f_4, 1, 0, 1, 1))
			{
				if (func_36(Local_867.f_0))
				{
					unk_0xDC81A805934C85CD(Local_839.f_0, Local_867.f_0, -1);
					unk_0x1D15D99A10A15334(Local_839.f_0, true);
					unk_0xCE566DBDCACD245E(Local_839.f_0, 170, 0);
					unk_0x7F5F0D37173E518C(Local_839.f_0, 65536, 1);
					unk_0x4B9FA68A3AC8C29D(Local_839.f_0, 50, 1);
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0x86CCCD2FAE9D5E65(Global_87639.f_9[1]))
			{
				if (!unk_0x82F01138B895DCE6(Global_87639.f_9[1], 1))
				{
					unk_0xD768713E73165208(Global_87639.f_9[1], 1, 1);
					Local_853.f_0 = Global_87639.f_9[1];
					if (func_321(Local_853.f_0))
					{
						unk_0xCE566DBDCACD245E(Local_853.f_0, 170, 0);
						unk_0x7F5F0D37173E518C(Local_853.f_0, 65536, 1);
						unk_0x4B9FA68A3AC8C29D(Local_853.f_0, 50, 1);
						unk_0x1D15D99A10A15334(Local_853.f_0, true);
						unk_0x3B7AFF7DCE22C1CF(Local_853.f_0, 1);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_143(&Local_853, Local_853.f_5, Local_853.f_1, Local_853.f_4, 1, 0, 1, 1))
			{
				if (func_36(Local_867.f_0))
				{
					unk_0xDC81A805934C85CD(Local_853.f_0, Local_867.f_0, 0);
					unk_0xCE566DBDCACD245E(Local_853.f_0, 170, 0);
					unk_0x7F5F0D37173E518C(Local_853.f_0, 65536, 1);
					unk_0x4B9FA68A3AC8C29D(Local_853.f_0, 50, 1);
					unk_0x1D15D99A10A15334(Local_853.f_0, true);
					unk_0x3B7AFF7DCE22C1CF(Local_853.f_0, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_143(var uParam0, var uParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		if (func_145(uParam1, "Loading", 0))
		{
			*uParam0 = unk_0x206897C6DBC12488(26, uParam1, Param2, uParam5, 1, 1);
			if (func_321(*uParam0))
			{
				if (bParam7)
				{
					unk_0xA8F22633ACC22189(*uParam0, 1);
				}
				if (bParam8)
				{
					unk_0x1D15D99A10A15334(*uParam0, bParam8);
				}
				if (!bParam9)
				{
					unk_0x33B1E568CEF14B0D(*uParam0, bParam9);
				}
				if (bParam6)
				{
					func_144(uParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_321(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_144(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (unk_0x33ACB874CECA2D4B(uParam0))
		{
			unk_0x887F4488DA99FD21(uParam0);
		}
	}
	else
	{
		unk_0x887F4488DA99FD21(uParam0);
	}
}

int func_145(var uParam0, char* sParam1, int iParam2)
{
	unk_0x32A12757CBF48A33(uParam0);
	if (!unk_0xB318FDA0D1ABDB20(sParam1) && iParam2 != -1)
	{
	}
	if (unk_0x33ACB874CECA2D4B(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_146(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (!unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		if (func_145(iParam1, "Loading", 0))
		{
			*uParam0 = unk_0xE00F8DEA9778FC87(iParam1, Param2, fParam5, 1, 1);
			if (unk_0x86CCCD2FAE9D5E65(*uParam0))
			{
				if (!unk_0xE86442941AE40E75(*uParam0))
				{
					unk_0xD768713E73165208(*uParam0, 1, 0);
				}
				unk_0x5CC9D6711FE01F0D(*uParam0);
				if (bParam6)
				{
					func_144(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (func_36(*uParam0))
		{
			unk_0xB067093BBAF0A747(*uParam0, Param2, 1, 0, 0, 1);
			unk_0xC24172029826A66F(*uParam0, fParam5);
		}
		if (!unk_0xE86442941AE40E75(*uParam0))
		{
			unk_0xD768713E73165208(*uParam0, 1, 0);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_147(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
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

void func_148()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		func_149(&(Local_110[iVar0 /*11*/]), iVar0);
		iVar0++;
	}
}

void func_149(var uParam0, int iParam1)
{
	if (func_321(*uParam0))
	{
		func_195(uParam0, iParam1, 0);
		if (unk_0x0BAE7BE122182FA8(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 3))
		{
			if (unk_0xC00796CF40447CA8(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man") >= 0.172f)
			{
				if (func_10(Local_133[iLocal_660 /*25*/].f_17) && unk_0xCB8B9E751036ECB2(Local_133[iLocal_660 /*25*/].f_17))
				{
					unk_0x2288F0F0680B6992(*uParam0, 1048576000);
					unk_0xE5A10141D270658C(*uParam0);
					if (iLocal_660 <= 20 && iLocal_660 != -1)
					{
						Local_133[iLocal_660 /*25*/].f_18 = 1;
						uParam0->f_9 = 0;
					}
					unk_0xD88DD5B581458979(Local_133[iLocal_660 /*25*/].f_17, 1, 0);
					unk_0xAF760DE7720D6EAE(Local_133[iLocal_660 /*25*/].f_17, 1, unk_0xC99223BD7E489FC6(*uParam0), 0, 1, 1, 0);
				}
			}
		}
		switch (uParam0->f_5)
		{
			case 0:
				if (iParam1 == 0)
				{
					func_192();
					func_191(uParam0);
				}
				func_178(uParam0);
				break;
			
			case 1:
				func_151(uParam0);
				break;
		}
	}
	else
	{
		if (func_10(Local_133[iLocal_660 /*25*/].f_17))
		{
			if (unk_0xCB8B9E751036ECB2(Local_133[iLocal_660 /*25*/].f_17))
			{
				unk_0xD88DD5B581458979(Local_133[iLocal_660 /*25*/].f_17, 1, 0);
				unk_0xAF760DE7720D6EAE(Local_133[iLocal_660 /*25*/].f_17, 1, unk_0xC99223BD7E489FC6(*uParam0), 0, 1, 1, 0);
			}
		}
		func_7(&(uParam0->f_4));
		if (unk_0x86CCCD2FAE9D5E65(*uParam0))
		{
			if (!func_150(unk_0x81873881071CD9FE(), *uParam0, 150f) && !bLocal_664)
			{
				func_5(uParam0, 1, 0, 1);
			}
		}
	}
}

bool func_150(int iParam0, int iParam1, float fParam2)
{
	return unk_0xB7A628320EFF8E47(unk_0xB6AE0DAE06D56288(iParam0, 1), unk_0xB6AE0DAE06D56288(iParam1, 1)) <= (fParam2 * fParam2);
}

void func_151(var uParam0)
{
	var uVar0;
	var uVar1;
	
	switch (uParam0->f_6)
	{
		case 5:
			if ((unk_0x48E480685981C7D4() - uParam0->f_1) > uParam0->f_3)
			{
				if (func_177(*uParam0, 780511057))
				{
					unk_0x27CC98B7C879C320(*uParam0);
				}
				unk_0x754376E2234CBB4A(*uParam0, unk_0x81873881071CD9FE(), 30f, -1, 0, 0);
				uParam0->f_6 = 6;
				uParam0->f_1 = unk_0x48E480685981C7D4();
			}
			break;
		
		case 21:
			if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
			{
				if (func_170(*uParam0, unk_0x81873881071CD9FE(), 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 1);
					return;
				}
			}
			if ((unk_0x48E480685981C7D4() - uParam0->f_1) > uParam0->f_3)
			{
				if (!unk_0xE5AB05962FA1FF3F(*uParam0, 0))
				{
					unk_0xD5742D713B66CC75(*uParam0, unk_0x81873881071CD9FE(), 8f, -1f, 10f, 0);
				}
				else
				{
					unk_0xEAD984C2869B8B7C(&uVar0);
					unk_0x98046F3D16B9CF76(0, 0, 0);
					unk_0x633A554EB6BC4E71(0, unk_0x81873881071CD9FE(), 0, 16);
					unk_0x56D9ED1541046AF6(uVar0);
					unk_0xC65002CAA1212AF9(*uParam0, uVar0);
					unk_0xA3561415EB3DA3A3(&uVar0);
				}
				if (!unk_0xFBACB273AA628CC5(uParam0->f_4))
				{
					uParam0->f_4 = func_166(*uParam0, 1, 145);
				}
				uParam0->f_6 = 22;
				uParam0->f_1 = unk_0x48E480685981C7D4();
			}
			break;
		
		case 10:
			if ((unk_0x48E480685981C7D4() - uParam0->f_1) > uParam0->f_3)
			{
				if (unk_0xE5AB05962FA1FF3F(*uParam0, 0))
				{
					unk_0x0B895A812F665A52(*uParam0, 120, 1);
					uParam0->f_6 = 12;
					uParam0->f_1 = unk_0x48E480685981C7D4();
				}
				else if (!func_177(*uParam0, 474215631))
				{
					if (func_177(*uParam0, 780511057))
					{
						unk_0x27CC98B7C879C320(*uParam0);
					}
					unk_0x492E306B5A7C779A(*uParam0, -1);
					uParam0->f_6 = 12;
					uParam0->f_1 = unk_0x48E480685981C7D4();
				}
			}
			break;
		
		case 3:
			if ((unk_0x48E480685981C7D4() - uParam0->f_1) > uParam0->f_3)
			{
				unk_0xA0E7F565B88CC79B(*uParam0, 1, 1);
				unk_0x754376E2234CBB4A(*uParam0, unk_0x81873881071CD9FE(), 500f, -1, 0, 1);
				uParam0->f_1 = unk_0x48E480685981C7D4();
				uParam0->f_6 = 4;
				uParam0->f_5 = 1;
			}
			break;
		
		case 11:
			func_165(uParam0);
			if ((unk_0x48E480685981C7D4() - uParam0->f_1) > 5000)
			{
				if (!func_177(*uParam0, 713668775))
				{
					if (unk_0x86CCCD2FAE9D5E65(Local_110[func_164(uParam0->f_10) /*11*/]))
					{
						unk_0xD91194CE3D1E1D77(*uParam0, Local_666, 1f, -1, 2f, 0, 1193033728);
					}
				}
				uParam0->f_1 = unk_0x48E480685981C7D4();
				uParam0->f_6 = 23;
				uParam0->f_5 = 1;
			}
			break;
		
		case 18:
			if (!func_177(*uParam0, -2017877118))
			{
				unk_0xEAD984C2869B8B7C(&uVar1);
				if (func_163(unk_0xB6AE0DAE06D56288(*uParam0, 1), unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1)) > 1.5f)
				{
					unk_0xBF7CD5D6793CA1E8(0, unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1), 0);
				}
				unk_0x0E13137B34FB5F45(0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				unk_0x56D9ED1541046AF6(uVar1);
				unk_0xC65002CAA1212AF9(*uParam0, uVar1);
				unk_0xA3561415EB3DA3A3(&uVar1);
				uParam0->f_5 = 1;
				uParam0->f_6 = 20;
				uParam0->f_1 = unk_0x48E480685981C7D4();
			}
			break;
		
		case 19:
			func_165(uParam0);
			if (!func_177(*uParam0, -2017877118))
			{
				unk_0x0E13137B34FB5F45(*uParam0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				uParam0->f_5 = 1;
				uParam0->f_6 = 20;
				uParam0->f_1 = unk_0x48E480685981C7D4();
			}
			break;
		
		case 1:
			if (!unk_0x04C377C10639B842(*uParam0, iLocal_108, 0))
			{
				func_161(uParam0);
			}
			break;
		
		case 2:
			if (!unk_0x86F7E6A693F6370F(*uParam0) && (unk_0x48E480685981C7D4() - uParam0->f_1) > 3000)
			{
				func_161(uParam0);
			}
			break;
		
		case 4:
			if ((unk_0x48E480685981C7D4() - uParam0->f_1) > 8000)
			{
				unk_0x754376E2234CBB4A(*uParam0, unk_0x81873881071CD9FE(), 500f, -1, 0, 0);
				if (!iLocal_665)
				{
					if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 0)
					{
						unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 2, 0);
						unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
						iLocal_665 = 1;
					}
				}
				unk_0xA0E7F565B88CC79B(*uParam0, 0, 1);
				uParam0->f_1 = unk_0x48E480685981C7D4();
				uParam0->f_6 = 8;
			}
			else if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 1)
			{
				unk_0xA0E7F565B88CC79B(*uParam0, 0, 1);
				uParam0->f_1 = unk_0x48E480685981C7D4();
				uParam0->f_6 = 8;
			}
			break;
		
		case 6:
			if ((unk_0x48E480685981C7D4() - uParam0->f_1) > uParam0->f_2)
			{
				if (!func_150(*uParam0, unk_0x81873881071CD9FE(), 15f))
				{
					func_7(&(uParam0->f_4));
					uParam0->f_6 = 7;
					uParam0->f_1 = unk_0x48E480685981C7D4();
				}
			}
			break;
		
		case 7:
			if (unk_0x04C377C10639B842(*uParam0, iLocal_108, 1))
			{
				if (uParam0->f_6 != 4 && uParam0->f_6 != 1)
				{
					if (func_159())
					{
						if (func_321(*uParam0))
						{
							unk_0x27CC98B7C879C320(*uParam0);
							unk_0x754376E2234CBB4A(*uParam0, unk_0x81873881071CD9FE(), 500f, -1, 0, 1);
							uParam0->f_6 = 1;
						}
					}
				}
				if (!func_150(*uParam0, unk_0x81873881071CD9FE(), 120f))
				{
					func_5(uParam0, 1, 0, 1);
				}
			}
			else
			{
				func_161(uParam0);
			}
			break;
		
		case 8:
			if (!func_150(*uParam0, unk_0x81873881071CD9FE(), 120f))
			{
				func_5(uParam0, 1, 0, 1);
			}
			break;
		
		case 9:
			if (unk_0x70847137E3B37A59(*uParam0))
			{
				func_169(uParam0, 1);
				return;
			}
			if ((unk_0x48E480685981C7D4() - uParam0->f_1) > uParam0->f_2 || !func_177(*uParam0, 2104565373))
			{
				func_156(uParam0);
			}
			break;
		
		case 12:
			if ((unk_0x48E480685981C7D4() - uParam0->f_1) >= uParam0->f_2)
			{
				unk_0x754376E2234CBB4A(*uParam0, unk_0x81873881071CD9FE(), 500f, -1, 0, 1);
				uParam0->f_6 = 5;
			}
			else
			{
				unk_0x0B895A812F665A52(*uParam0, 120, 1);
			}
			break;
		
		case 13:
			if ((unk_0x48E480685981C7D4() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_150(*uParam0, unk_0x81873881071CD9FE(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = unk_0x48E480685981C7D4();
				}
				else if (func_170(Local_110[func_164(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 0);
				}
				else
				{
					func_155(uParam0);
					uParam0->f_1 = unk_0x48E480685981C7D4();
				}
			}
			break;
		
		case 15:
			if ((unk_0x48E480685981C7D4() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_150(*uParam0, unk_0x81873881071CD9FE(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = unk_0x48E480685981C7D4();
				}
				else if (func_170(Local_110[func_164(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 0);
				}
				else
				{
					func_155(uParam0);
					uParam0->f_1 = unk_0x48E480685981C7D4();
				}
			}
			break;
		
		case 16:
			if (unk_0x70847137E3B37A59(*uParam0))
			{
				func_169(uParam0, 1);
				return;
			}
			if ((unk_0x48E480685981C7D4() - iLocal_669) >= 9000)
			{
				if (!func_154(uParam0))
				{
					func_156(uParam0);
					uParam0->f_1 = unk_0x48E480685981C7D4();
				}
				else
				{
					uParam0->f_1 = unk_0x48E480685981C7D4();
					uParam0->f_5 = 1;
					uParam0->f_6 = 16;
				}
			}
			else if ((unk_0x48E480685981C7D4() - iLocal_669) >= 5000 && (unk_0x48E480685981C7D4() - iLocal_669) <= 5500)
			{
				if (unk_0xE5AB05962FA1FF3F(*uParam0, 0))
				{
					if (unk_0x7868E1AF9F657DA1(*uParam0))
					{
						unk_0x4E8171E1088583F8(*uParam0);
					}
				}
			}
			break;
		
		case 14:
			if ((unk_0x48E480685981C7D4() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_150(*uParam0, unk_0x81873881071CD9FE(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = unk_0x48E480685981C7D4();
				}
				else if (func_170(Local_110[func_164(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 0);
				}
				else
				{
					func_155(uParam0);
					uParam0->f_1 = unk_0x48E480685981C7D4();
				}
			}
			break;
		
		case 17:
			if ((unk_0x48E480685981C7D4() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_150(*uParam0, unk_0x81873881071CD9FE(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = unk_0x48E480685981C7D4();
				}
				else if (func_170(Local_110[func_164(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 0);
				}
				else
				{
					func_155(uParam0);
					uParam0->f_1 = unk_0x48E480685981C7D4();
				}
			}
			break;
		
		case 20:
			if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6) && !unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				if (func_170(*uParam0, unk_0x81873881071CD9FE(), 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 1);
					return;
				}
			}
			if ((unk_0x48E480685981C7D4() - uParam0->f_1) >= 6000)
			{
				if (!unk_0xD1FFD959917D4ED8(*uParam0, unk_0xB07F27EC3B05E4EA(iLocal_108, 5f, 0f, -2f), unk_0xB6AE0DAE06D56288(iLocal_108, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
				{
					func_156(uParam0);
				}
				else
				{
					func_161(uParam0);
					func_161(&(Local_110[func_164(uParam0->f_10) /*11*/]));
				}
				uParam0->f_1 = unk_0x48E480685981C7D4();
			}
			func_165(uParam0);
			break;
		
		case 22:
			if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
			{
				if (func_170(*uParam0, unk_0x81873881071CD9FE(), 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 1);
					return;
				}
			}
			if ((unk_0x48E480685981C7D4() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_150(*uParam0, unk_0x81873881071CD9FE(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = unk_0x48E480685981C7D4();
					return;
				}
				else
				{
					func_155(uParam0);
					uParam0->f_1 = unk_0x48E480685981C7D4();
				}
			}
			break;
		
		case 23:
			func_195(uParam0, uParam0->f_10, 1);
			func_165(uParam0);
			if (func_100(*uParam0, Local_666, 2f))
			{
				if (func_152(*uParam0, Local_666, 1126825984, 0))
				{
					unk_0x27CC98B7C879C320(*uParam0);
					uParam0->f_6 = 19;
					uParam0->f_5 = 1;
					uParam0->f_1 = unk_0x48E480685981C7D4();
				}
			}
			break;
	}
}

int func_152(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_153(Param1 - unk_0xB6AE0DAE06D56288(iParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0xC99223BD7E489FC6(iParam0) };
	}
	else
	{
		Var3 = { func_153(unk_0xC91EFAB304EB7DE6(iParam0, 31086, 0f, 5f, 0f) - unk_0xC91EFAB304EB7DE6(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_126(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

Vector3 func_153(struct<3> Param0)
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

int func_154(var uParam0)
{
	if (unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), unk_0xB07F27EC3B05E4EA(iLocal_108, 0f, 10f, -2f), unk_0xB07F27EC3B05E4EA(iLocal_108, 0f, 3f, 2f), 5f, 0, 1, 0) && unk_0x7E0C455D8C091153(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_155(var uParam0)
{
	int iVar0;
	
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		if (func_36(iVar0))
		{
			if (!unk_0xA6D65D92671E7012(*uParam0, iVar0, -1, 0, 0))
			{
				uParam0->f_6 = 18;
				uParam0->f_1 = unk_0x48E480685981C7D4();
			}
		}
	}
}

void func_156(var uParam0)
{
	unk_0xF8E77F310A5B6EAB(2, uLocal_79, joaat("player"));
	switch (uParam0->f_8)
	{
		case 4:
			break;
		
		case 10:
			break;
		
		case 8:
			func_122();
			break;
		
		case 3:
			if (!func_177(*uParam0, 242628503))
			{
				if (iLocal_660 <= 20 && iLocal_660 != -1)
				{
					Local_133[iLocal_660 /*25*/].f_18 = 1;
				}
				if (!unk_0x04C377C10639B842(*uParam0, iLocal_108, 0))
				{
					if (uParam0->f_10 == 0)
					{
						unk_0xD91194CE3D1E1D77(*uParam0, unk_0xB07F27EC3B05E4EA(iLocal_108, func_130(1)), 1f, -1, 1048576000, 0, 1193033728);
						uParam0->f_7 = 1;
					}
					else
					{
						unk_0xD91194CE3D1E1D77(*uParam0, unk_0xB07F27EC3B05E4EA(iLocal_108, func_130(0)), 1f, -1, 1048576000, 0, 1193033728);
						uParam0->f_7 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x04C377C10639B842(*uParam0, iLocal_108, 0))
			{
				if (uParam0->f_10 == 0)
				{
					unk_0xD91194CE3D1E1D77(*uParam0, unk_0xB07F27EC3B05E4EA(iLocal_108, func_130(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					unk_0xD91194CE3D1E1D77(*uParam0, unk_0xB07F27EC3B05E4EA(iLocal_108, func_130(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			break;
		
		case 9:
			if (!Local_133[iLocal_660 /*25*/].f_18)
			{
				if (uParam0->f_9 == 1)
				{
					func_157(uParam0);
				}
				else if (uParam0->f_10 == 0)
				{
					unk_0xD91194CE3D1E1D77(*uParam0, unk_0xB07F27EC3B05E4EA(iLocal_108, func_130(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					unk_0xD91194CE3D1E1D77(*uParam0, unk_0xB07F27EC3B05E4EA(iLocal_108, func_130(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			else if (!unk_0x04C377C10639B842(*uParam0, iLocal_108, 0))
			{
				if (uParam0->f_10 == 0)
				{
					unk_0xD91194CE3D1E1D77(*uParam0, unk_0xB07F27EC3B05E4EA(iLocal_108, func_130(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					unk_0xD91194CE3D1E1D77(*uParam0, unk_0xB07F27EC3B05E4EA(iLocal_108, func_130(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			break;
		
		default:
			break;
	}
	uParam0->f_1 = unk_0x48E480685981C7D4();
	uParam0->f_5 = 0;
}

void func_157(var uParam0)
{
	if (!func_177(*uParam0, -71340211))
	{
		if (Local_133[iLocal_660 /*25*/].f_23 != 0)
		{
			if (func_10(Local_133[iLocal_660 /*25*/].f_17))
			{
				unk_0x99939707E05657F9(*uParam0, Local_133[iLocal_660 /*25*/].f_17, -1, 0f, 180f, 1f, 0);
			}
		}
		else
		{
			unk_0xD91194CE3D1E1D77(*uParam0, Local_133[iLocal_660 /*25*/].f_19, 1f, 20000, -1f, 0, func_158(Local_133[iLocal_660 /*25*/].f_19, unk_0xB6AE0DAE06D56288(*uParam0, 1), 1));
		}
		if (func_36(iLocal_108))
		{
			unk_0x4DBA43D6DE677017(iLocal_108, 5, 0, 0);
		}
		uParam0->f_8 = uParam0->f_7;
		uParam0->f_7 = 9;
		uParam0->f_9 = 1;
	}
}

float func_158(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x43A2E703A9A654DB(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_159()
{
	if (func_36(iLocal_108) && func_321(unk_0x81873881071CD9FE()))
	{
		if (unk_0xBBEF8270CE27C0EE(iLocal_108, unk_0x81873881071CD9FE(), 1))
		{
			unk_0xD24EA1F9FB501BB5(iLocal_108);
			if (func_160() || unk_0x4DC6EF945236C0F7(iLocal_108) < 851)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_160()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0x2A87B5EC03992FB8(iLocal_108, iVar0, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_161(var uParam0)
{
	if (uParam0->f_6 != 3 && uParam0->f_6 != 4)
	{
		func_162(uParam0);
		uParam0->f_1 = unk_0x48E480685981C7D4();
		uParam0->f_6 = 3;
		uParam0->f_5 = 1;
	}
}

void func_162(var uParam0)
{
	if (uParam0->f_7 == 9)
	{
		if (uParam0->f_9 >= 2)
		{
			if (!unk_0x5FEB513A4402FD59(*uParam0))
			{
				unk_0x2288F0F0680B6992(*uParam0, 1048576000);
				unk_0xE5A10141D270658C(*uParam0);
				unk_0x31C1393E4ACFD794(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 8f, -8f, -1, 56, 0, 0, 0, 0);
			}
		}
	}
}

float func_163(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0x097CA9356FED843D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_164(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_165(var uParam0)
{
	if (func_36(iLocal_108) && (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_108, 0) && !unk_0x04C377C10639B842(*uParam0, iLocal_108, 0)))
	{
		if (unk_0xA04824262F150982(iLocal_108) > 0f)
		{
			uParam0->f_1 = unk_0x48E480685981C7D4();
			uParam0->f_8 = uParam0->f_7;
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
		}
	}
}

var func_166(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_167(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0xFBACB273AA628CC5(uVar0)) && unk_0x7281387C8D4EC316(&(Global_98931.f_32499[iParam2 /*29*/].f_3)))
	{
		unk_0x2AB7C42FF2AF476D(uVar0, &(Global_98931.f_32499[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_167(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x86CCCD2FAE9D5E65(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xE122DDAE9E94767B(iParam0);
	if (unk_0xCF8AA94BAD0F766A(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(iVar0, func_168(unk_0x1C6DF6AD69BE853E(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD5CD0E7173F858FF(iVar0, bParam1);
		}
		else
		{
			unk_0x1B86E7A8766EA6B4(iVar0, 2);
		}
	}
	else if (unk_0xCF0C46D719D5302C(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(iVar0, func_168(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
		unk_0xD5CD0E7173F858FF(iVar0, bParam1);
	}
	else if (unk_0x9F76B19299294A0E(iParam0))
	{
		unk_0xD6DF56BB9537BCC5(iVar0, func_168(unk_0x1C6DF6AD69BE853E(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_168(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_169(var uParam0, int iParam1)
{
	func_162(uParam0);
	if ((unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6) || iParam1) || uParam0->f_6 == 23)
	{
		if (!func_150(unk_0x81873881071CD9FE(), *uParam0, 10f))
		{
			if (!func_177(*uParam0, 1805844857))
			{
				uParam0->f_6 = 5;
				uParam0->f_5 = 1;
				uParam0->f_1 = unk_0x48E480685981C7D4();
			}
		}
		else
		{
			uParam0->f_6 = 10;
			uParam0->f_5 = 1;
			uParam0->f_1 = unk_0x48E480685981C7D4();
		}
	}
	else if (uParam0->f_5 != 1)
	{
		if (!func_177(*uParam0, 780511057) && !func_177(*uParam0, -71340211))
		{
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
			uParam0->f_1 = unk_0x48E480685981C7D4();
		}
	}
}

bool func_170(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_176(iParam0, iParam1);
	if (!func_10(iParam0) || !func_10(iParam1))
	{
		if (iVar4 != -1)
		{
			func_175(&(Local_37[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_174(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_173();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_37[iVar4 /*4*/].f_1 = iParam0;
		Local_37[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0xC91EFAB304EB7DE6(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_171(&(Local_37[iVar4 /*4*/]), Var1, iParam1, &(Local_37[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x48E480685981C7D4() - Local_37[iVar4 /*4*/].f_3) < iParam4);
}

int func_171(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!func_10(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_172(iParam4, iParam7) };
		*uParam0 = unk_0x68D61DC7116FF797(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0x26CECBCADF60693F(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0xCF0C46D719D5302C(iVar7))
	{
		func_10(iVar7);
		if (unk_0x8F1CCE5AF629C4D3(iVar7) == iParam4)
		{
			if (bLocal_78)
			{
				unk_0xADE6A92F477E3034(Param1, unk_0xB6AE0DAE06D56288(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x48E480685981C7D4();
			return 1;
		}
		return 0;
	}
	if (unk_0xCF8AA94BAD0F766A(iVar7))
	{
		func_10(iVar7);
		if (unk_0xE5AB05962FA1FF3F(iParam4, 0))
		{
			if (unk_0x522C7043B2B961F9(iVar7) == unk_0xE68E6B44DABA9C05(iParam4, 0))
			{
				if (bLocal_78)
				{
					unk_0xADE6A92F477E3034(Param1, unk_0xB6AE0DAE06D56288(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x48E480685981C7D4();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_172(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x2E0A9E3291F398E3(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xB6AE0DAE06D56288(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0xC91EFAB304EB7DE6(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0xC91EFAB304EB7DE6(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0xC91EFAB304EB7DE6(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0xC91EFAB304EB7DE6(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0xC91EFAB304EB7DE6(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0xC91EFAB304EB7DE6(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xB6AE0DAE06D56288(iParam0, 1);
}

int func_173()
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

int func_174(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_153(unk_0xB6AE0DAE06D56288(iParam1, 1) - unk_0xB6AE0DAE06D56288(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0xC99223BD7E489FC6(iParam0) };
	}
	else
	{
		Var3 = { func_153(unk_0xC91EFAB304EB7DE6(iParam0, 31086, 0f, 5f, 0f) - unk_0xC91EFAB304EB7DE6(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_126(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

void func_175(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_176(int iParam0, int iParam1)
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

int func_177(int iParam0, int iParam1)
{
	if (func_321(uParam0))
	{
		if (unk_0xFA1212DE7C455679(uParam0, iParam1) == 1 || unk_0xFA1212DE7C455679(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_178(var uParam0)
{
	float fVar0;
	
	if (uParam0->f_9 == 0 && uParam0->f_10 == 1)
	{
	}
	switch (uParam0->f_7)
	{
		case 1:
			if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_108, 1))
			{
				func_169(uParam0, 0);
				return;
			}
			if (uParam0->f_10 == 0)
			{
				func_189(uParam0, 1);
			}
			else
			{
				func_189(uParam0, 0);
			}
			break;
		
		case 2:
			if (unk_0x58A69336FE7307D8(*uParam0, iLocal_108))
			{
				if (!func_177(*uParam0, -1794415470))
				{
					if (uParam0->f_10 == 0)
					{
						func_123(0);
					}
					else
					{
						uParam0->f_7 = 3;
					}
				}
			}
			else if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_108, 1))
			{
				func_169(uParam0, 0);
				return;
			}
			break;
		
		case 3:
			if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_108, 1))
			{
				func_169(uParam0, 0);
				return;
			}
			if (bLocal_663)
			{
				if (iLocal_660 <= 20 && iLocal_660 != -1)
				{
					if (!Local_133[iLocal_660 /*25*/].f_18)
					{
						if (func_100(*uParam0, Local_133[iLocal_660 /*25*/], 20f))
						{
							if (Local_133[iLocal_660 /*25*/].f_9 && unk_0x01C5771BE1D8ECE5(iLocal_108))
							{
								func_188();
							}
						}
					}
				}
				else
				{
					uParam0->f_7 = 10;
				}
			}
			break;
		
		case 4:
			if (func_100(*uParam0, Local_133[iLocal_660 /*25*/], 25f))
			{
				if (Local_133[iLocal_660 /*25*/].f_9)
				{
					func_187(uParam0);
				}
				else
				{
					Local_133[iLocal_660 /*25*/].f_18 = 1;
					func_123(0);
				}
			}
			break;
		
		case 5:
			if (func_36(iLocal_108))
			{
				unk_0xE4DF2496E641851E(iLocal_108, 25f, 10, 0);
				fVar0 = unk_0xA04824262F150982(iLocal_108);
				if (fVar0 < 8f)
				{
					func_187(uParam0);
				}
			}
			break;
		
		case 6:
			if (!func_177(*uParam0, 242628503) && unk_0x01C5771BE1D8ECE5(iLocal_108))
			{
				if (bLocal_663)
				{
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 7;
				}
				else
				{
					unk_0x98046F3D16B9CF76(*uParam0, 0, 0);
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 8;
				}
			}
			break;
		
		case 7:
			if (func_321(Local_110[1 /*11*/]))
			{
				if (unk_0x04C377C10639B842(Local_110[1 /*11*/], iLocal_108, 0) && Local_110[1 /*11*/].f_7 == 3)
				{
					func_123(0);
				}
			}
			break;
		
		case 8:
			if (!unk_0x04C377C10639B842(*uParam0, iLocal_108, 0))
			{
				func_157(uParam0);
			}
			break;
		
		case 9:
			func_179(uParam0);
			break;
	}
}

void func_179(var uParam0)
{
	var uVar0;
	var uVar1;
	
	if (uParam0->f_9 >= 1 && uParam0->f_9 != 0)
	{
	}
	switch (uParam0->f_9)
	{
		case 1:
			if (!func_177(*uParam0, -2015108952))
			{
				unk_0xEAD984C2869B8B7C(&uVar0);
				if (func_163(unk_0xB6AE0DAE06D56288(*uParam0, 1), Local_133[iLocal_660 /*25*/].f_19) > 1.5f)
				{
					unk_0xBF7CD5D6793CA1E8(0, Local_133[iLocal_660 /*25*/].f_19, 0);
				}
				unk_0x31C1393E4ACFD794(0, "missfbi4prepp1", "_bag_pickup_garbage_man", 8f, -16f, -1, 528384, 0, 0, 0, 0);
				unk_0x56D9ED1541046AF6(uVar0);
				unk_0xC65002CAA1212AF9(*uParam0, uVar0);
				unk_0xA3561415EB3DA3A3(&uVar0);
				uParam0->f_9 = 2;
			}
			else if (func_184(Local_133[iLocal_660 /*25*/].f_19, *uParam0, 1f, 1f, 8f))
			{
				func_183(uParam0);
				return;
			}
			unk_0x650879C8A673A7D9(*uParam0, 0.2f);
			break;
		
		case 2:
			if (func_177(*uParam0, 242628503))
			{
				if (unk_0x0BAE7BE122182FA8(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man", 3))
				{
					if (unk_0xC00796CF40447CA8(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man") >= 0.333f)
					{
						unk_0x350B20EBD616FAD8(*uParam0, "missfbi4prepp1_garbageman", 0f);
						unk_0x4AA63E48994C4A78(*uParam0, "missfbi4prepp1_garbageman");
						if (func_10(Local_133[iLocal_660 /*25*/].f_17) && !unk_0xCB8B9E751036ECB2(Local_133[iLocal_660 /*25*/].f_17))
						{
							unk_0x75F9EE7629363312(Local_133[iLocal_660 /*25*/].f_17, *uParam0, unk_0xDED1B3B1138F742B(*uParam0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
						}
					}
				}
				if (func_184(Local_133[iLocal_660 /*25*/].f_19, *uParam0, 1f, 1f, 8f))
				{
					func_183(uParam0);
					return;
				}
			}
			else if (!func_177(*uParam0, 713668775))
			{
				if (func_36(iLocal_108))
				{
					unk_0xD91194CE3D1E1D77(*uParam0, unk_0xB07F27EC3B05E4EA(iLocal_108, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, unk_0x3306AAAFE3B25098(iLocal_108));
				}
				uParam0->f_9 = 3;
			}
			unk_0x650879C8A673A7D9(*uParam0, 0.2f);
			break;
		
		case 3:
			if (func_36(iLocal_108))
			{
				if (!func_184(unk_0xB07F27EC3B05E4EA(iLocal_108, 0f, -5.5f, 0f), iLocal_108, 1.9f, 1.9f, 8f))
				{
					if (unk_0x515B65C19A5CA9B1(*uParam0, unk_0xB07F27EC3B05E4EA(iLocal_108, 0f, -5.5f, 0f), 0.9f, 0.9f, 2f, 0, 1, 0))
					{
						if (!func_177(*uParam0, 713668775))
						{
							unk_0xEAD984C2869B8B7C(&uVar1);
							if (func_163(unk_0xB6AE0DAE06D56288(*uParam0, 1), unk_0xB6AE0DAE06D56288(iLocal_108, 1)) > 3f)
							{
								unk_0x5D5CFD0EDDA0BC90(0, unk_0x3306AAAFE3B25098(iLocal_108), 0);
							}
							unk_0x31C1393E4ACFD794(0, "missfbi4prepp1", "_bag_throw_garbage_man", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x56D9ED1541046AF6(uVar1);
							unk_0xC65002CAA1212AF9(*uParam0, uVar1);
							unk_0xA3561415EB3DA3A3(&uVar1);
							uParam0->f_9 = 4;
						}
					}
					else if (!func_177(*uParam0, 713668775))
					{
						unk_0xD91194CE3D1E1D77(*uParam0, unk_0xB07F27EC3B05E4EA(iLocal_108, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, unk_0x3306AAAFE3B25098(iLocal_108));
					}
				}
				else
				{
					func_181(uParam0);
				}
			}
			break;
		
		case 4:
			if (!func_184(unk_0xB07F27EC3B05E4EA(iLocal_108, 0f, -5.5f, 0f), *uParam0, 1.9f, 1.9f, 8f))
			{
				if (func_177(*uParam0, 242628503))
				{
					if (unk_0x0BAE7BE122182FA8(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man", 3))
					{
						if (unk_0xC00796CF40447CA8(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man") >= 0.391f)
						{
							if (func_10(Local_133[iLocal_660 /*25*/].f_17))
							{
								if (unk_0xCB8B9E751036ECB2(Local_133[iLocal_660 /*25*/].f_17))
								{
									unk_0x2288F0F0680B6992(*uParam0, 1048576000);
									unk_0xE5A10141D270658C(*uParam0);
									unk_0xD88DD5B581458979(Local_133[iLocal_660 /*25*/].f_17, 1, 0);
									unk_0xD854DB7AEEBA7DFC(Local_133[iLocal_660 /*25*/].f_17, 2f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1082130432, -1082130432, -1082130432);
									unk_0xAF760DE7720D6EAE(Local_133[iLocal_660 /*25*/].f_17, 1, unk_0xC99223BD7E489FC6(*uParam0), 0, 1, 1, 0);
								}
								if (unk_0xB454AC819016CE5E(Local_133[iLocal_660 /*25*/].f_17, iLocal_108))
								{
									func_180(&(Local_133[iLocal_660 /*25*/].f_17));
								}
							}
						}
					}
				}
				else
				{
					uParam0->f_9 = 0;
					if (func_36(iLocal_108))
					{
						unk_0x9523562C21915B31(iLocal_108, 5, 0);
						func_180(&(Local_133[iLocal_660 /*25*/].f_17));
					}
					func_156(uParam0);
				}
			}
			else
			{
				func_181(uParam0);
			}
			break;
		
		case 5:
			break;
	}
}

void func_180(var uParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		if (unk_0xE482770A8B024982(*uParam0))
		{
			unk_0xD88DD5B581458979(*uParam0, 1, 1);
		}
		unk_0xAB6AFD52AD641D70(uParam0);
	}
}

void func_181(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0xF8E77F310A5B6EAB(5, uLocal_79, joaat("player"));
	func_162(uParam0);
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (!unk_0xE5AB05962FA1FF3F(*uParam0, 0))
		{
			unk_0xD5742D713B66CC75(*uParam0, unk_0x81873881071CD9FE(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0xEAD984C2869B8B7C(&uVar0);
			unk_0x98046F3D16B9CF76(0, 0, 0);
			unk_0x633A554EB6BC4E71(0, unk_0x81873881071CD9FE(), 0, 16);
			unk_0x56D9ED1541046AF6(uVar0);
			unk_0xC65002CAA1212AF9(*uParam0, uVar0);
			unk_0xA3561415EB3DA3A3(&uVar0);
		}
	}
	else
	{
		unk_0xEAD984C2869B8B7C(&uVar1);
		unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
		unk_0x633A554EB6BC4E71(0, unk_0x81873881071CD9FE(), 0, 16);
		unk_0x56D9ED1541046AF6(uVar1);
		unk_0xC65002CAA1212AF9(*uParam0, uVar1);
		unk_0xA3561415EB3DA3A3(&uVar1);
	}
	unk_0x2288F0F0680B6992(*uParam0, 1048576000);
	unk_0xE5A10141D270658C(*uParam0);
	func_182();
	if (!unk_0xFBACB273AA628CC5(uParam0->f_4))
	{
		uParam0->f_4 = func_166(*uParam0, 1, 145);
	}
	uParam0->f_1 = unk_0x48E480685981C7D4();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 15;
}

void func_182()
{
	Local_81.f_0 = 0;
	Local_81.f_26 = 0;
	Local_81.f_18 = 0;
}

void func_183(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0xF8E77F310A5B6EAB(5, uLocal_79, joaat("player"));
	func_162(uParam0);
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (!unk_0xE5AB05962FA1FF3F(*uParam0, 0))
		{
			unk_0xD5742D713B66CC75(*uParam0, unk_0x81873881071CD9FE(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0xEAD984C2869B8B7C(&uVar0);
			unk_0x98046F3D16B9CF76(0, 0, 0);
			unk_0x633A554EB6BC4E71(0, unk_0x81873881071CD9FE(), 0, 16);
			unk_0x56D9ED1541046AF6(uVar0);
			unk_0xC65002CAA1212AF9(*uParam0, uVar0);
			unk_0xA3561415EB3DA3A3(&uVar0);
		}
	}
	else
	{
		unk_0xEAD984C2869B8B7C(&uVar1);
		unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
		unk_0x633A554EB6BC4E71(0, unk_0x81873881071CD9FE(), 0, 16);
		unk_0x56D9ED1541046AF6(uVar1);
		unk_0xC65002CAA1212AF9(*uParam0, uVar1);
		unk_0xA3561415EB3DA3A3(&uVar1);
	}
	unk_0x2288F0F0680B6992(*uParam0, 1048576000);
	unk_0xE5A10141D270658C(*uParam0);
	func_182();
	if (!unk_0xFBACB273AA628CC5(uParam0->f_4))
	{
		uParam0->f_4 = func_166(*uParam0, 1, 145);
	}
	uParam0->f_1 = unk_0x48E480685981C7D4();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 14;
}

int func_184(struct<3> Param0, int iParam3, struct<3> Param4)
{
	Local_81.f_2 = { Param0 };
	Local_81.f_8 = { Param4 };
	func_185(&Local_81, iParam3);
	if (Local_81.f_26)
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			if (unk_0xCF8AA94BAD0F766A(Local_81.f_18))
			{
				if (func_10(Local_81.f_18))
				{
					if (unk_0x522C7043B2B961F9(Local_81.f_18) == unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 1))
					{
						return 1;
					}
				}
			}
		}
		else if (unk_0xCF0C46D719D5302C(Local_81.f_18))
		{
			if (func_10(Local_81.f_18))
			{
				if (unk_0x8F1CCE5AF629C4D3(Local_81.f_18) == unk_0x81873881071CD9FE())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_185(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x26CECBCADF60693F(*uParam0, &iVar0, &(uParam0->f_20), &(uParam0->f_23), &(uParam0->f_18));
	uParam0->f_19 = 2 == iVar1;
	if (uParam0->f_19)
	{
		if (0 == iVar0)
		{
			uParam0->f_26 = 0;
		}
		else
		{
			uParam0->f_26 = 1;
		}
	}
	if (iVar1 != 1)
	{
		func_186(uParam0, uParam1);
	}
}

void func_186(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 0:
			break;
		
		case 1:
			*uParam0 = unk_0x68D61DC7116FF797(uParam0->f_2, uParam0->f_5, 511, uParam1, 7);
			break;
		
		case 2:
			*uParam0 = unk_0xF7E84FA38150BC1D(uParam0->f_17, 511, 4);
			break;
		
		case 3:
			*uParam0 = unk_0xB0E9BFF15C7DCDE6(uParam0->f_17, 511, 4);
			break;
		
		case 4:
			*uParam0 = unk_0x6FB85B6AB53A9667(uParam0->f_2, uParam0->f_8, uParam0->f_11, uParam0->f_14, 6, iParam1, 4);
			break;
		
		case 5:
			*uParam0 = unk_0x751FA16E55F0A171(uParam0->f_2, uParam0->f_5, uParam0->f_15, 511, iParam1, 4);
			break;
	}
	uParam0->f_16 = *uParam0 != 0;
}

void func_187(var uParam0)
{
	var uVar0;
	
	if (func_36(iLocal_108))
	{
		unk_0xEAD984C2869B8B7C(&uVar0);
		unk_0x1ABA8A919187E144(0, iLocal_108, Local_133[iLocal_660 /*25*/].f_3, 8f, 0, joaat("trash"), 786469, 10f, 15f);
		unk_0xB5583B79BBC50AC9(0, iLocal_108, Local_133[iLocal_660 /*25*/].f_3, Local_133[iLocal_660 /*25*/].f_8, Local_133[iLocal_660 /*25*/].f_10, 5f, 1);
		unk_0x56D9ED1541046AF6(uVar0);
		unk_0xC65002CAA1212AF9(*uParam0, uVar0);
		unk_0xA3561415EB3DA3A3(&uVar0);
		uParam0->f_7 = 6;
	}
}

void func_188()
{
	func_157(&(Local_110[1 /*11*/]));
}

void func_189(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (func_184(unk_0xB07F27EC3B05E4EA(iLocal_108, func_130(bParam1)), iLocal_108, 1.9f, 1.9f, 8f))
	{
		if (unk_0xD1FFD959917D4ED8(*uParam0, unk_0xB07F27EC3B05E4EA(iLocal_108, 5f, 0f, -2f), unk_0xB6AE0DAE06D56288(iLocal_108, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0) && unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), unk_0xB07F27EC3B05E4EA(iLocal_108, 5f, 0f, -2f), unk_0xB6AE0DAE06D56288(iLocal_108, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
		{
			func_190(uParam0);
		}
		else if (!func_177(*uParam0, 1227113341) && unk_0xD1FFD959917D4ED8(unk_0x81873881071CD9FE(), unk_0xB07F27EC3B05E4EA(iLocal_108, 5f, 0f, -2f), unk_0xB6AE0DAE06D56288(iLocal_108, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
		{
			unk_0x27CC98B7C879C320(*uParam0);
			unk_0x65C82688BA49CA39(*uParam0, unk_0x81873881071CD9FE(), -1, 4f, 1f, 1073741824, 0);
		}
	}
	else if (func_100(*uParam0, unk_0xB07F27EC3B05E4EA(iLocal_108, func_130(bParam1)), 5f))
	{
		iVar0 = -1;
		if (!bParam1)
		{
			iVar0 = 0;
		}
		unk_0x3C3A95141D01773E(*uParam0, iLocal_108, -1, iVar0, 1f, 8388609, 0);
		uParam0->f_7 = 2;
	}
}

void func_190(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0xF8E77F310A5B6EAB(5, uLocal_79, joaat("player"));
	func_162(uParam0);
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		if (!unk_0xE5AB05962FA1FF3F(*uParam0, 0))
		{
			unk_0xD5742D713B66CC75(*uParam0, unk_0x81873881071CD9FE(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0xEAD984C2869B8B7C(&uVar0);
			unk_0x98046F3D16B9CF76(0, 0, 0);
			unk_0x633A554EB6BC4E71(0, unk_0x81873881071CD9FE(), 0, 16);
			unk_0x56D9ED1541046AF6(uVar0);
			unk_0xC65002CAA1212AF9(*uParam0, uVar0);
			unk_0xA3561415EB3DA3A3(&uVar0);
		}
	}
	else
	{
		unk_0xEAD984C2869B8B7C(&uVar1);
		unk_0xF88735A9354A45F3(0, unk_0x81873881071CD9FE(), 0);
		unk_0x633A554EB6BC4E71(0, unk_0x81873881071CD9FE(), 0, 16);
		unk_0x56D9ED1541046AF6(uVar1);
		unk_0xC65002CAA1212AF9(*uParam0, uVar1);
		unk_0xA3561415EB3DA3A3(&uVar1);
	}
	unk_0x2288F0F0680B6992(*uParam0, 1048576000);
	unk_0xE5A10141D270658C(*uParam0);
	func_182();
	uParam0->f_1 = unk_0x48E480685981C7D4();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 13;
}

void func_191(var uParam0)
{
	if (uParam0->f_5 != 1)
	{
		if (func_36(iLocal_108) && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			if (!func_177(*uParam0, 2104565373) && unk_0x04C377C10639B842(*uParam0, iLocal_108, 0))
			{
				if (func_150(unk_0x81873881071CD9FE(), iLocal_108, 10f))
				{
					if (unk_0xB454AC819016CE5E(iLocal_108, unk_0x81873881071CD9FE()))
					{
						unk_0x8A0CA59A6D4D119B(*uParam0, unk_0x81873881071CD9FE(), 0, 0f, 0f, 0f, 10f, 100, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
						uParam0->f_1 = unk_0x48E480685981C7D4();
						uParam0->f_6 = 9;
					}
				}
			}
		}
	}
}

void func_192()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_80 - 1))
	{
		if (Local_133[iVar0 /*25*/].f_23 != 0)
		{
			if (Local_133[iVar0 /*25*/].f_24)
			{
				if ((iVar0 != iLocal_660 && func_10(Local_133[iVar0 /*25*/].f_17)) && func_194(Local_133[iVar0 /*25*/].f_17, unk_0x81873881071CD9FE(), 1) > 200f)
				{
					unk_0xAB6AFD52AD641D70(&(Local_133[iVar0 /*25*/].f_17));
					Local_133[iVar0 /*25*/].f_24 = 0;
				}
			}
			else if (Local_133[iVar0 /*25*/].f_23 != 0)
			{
				if (func_100(unk_0x81873881071CD9FE(), Local_133[iVar0 /*25*/], 100f) || func_100(Local_110[0 /*11*/], Local_133[iVar0 /*25*/], 120f))
				{
					Local_133[iVar0 /*25*/].f_24 = func_193(&(Local_133[iVar0 /*25*/].f_17), Local_133[iVar0 /*25*/].f_23, Local_133[iVar0 /*25*/].f_19, Local_133[iVar0 /*25*/].f_22, 1);
				}
			}
		}
		iVar0++;
	}
}

int func_193(var uParam0, var uParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (!unk_0x86CCCD2FAE9D5E65(*uParam0))
	{
		if (func_145(uParam1, "Loading", 0))
		{
			*uParam0 = unk_0xF364195A57BB7AE3(uParam1, Param2, 1, 1, 0);
			if (unk_0x86CCCD2FAE9D5E65(*uParam0))
			{
				unk_0xC24172029826A66F(*uParam0, uParam5);
				unk_0x3729EADD1945A108(*uParam0);
				if (bParam6)
				{
					func_144(uParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_10(*uParam0))
	{
		return 1;
	}
	return 0;
}

float func_194(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	}
	if (!unk_0x930F8FBB8E9537CC(iParam1))
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 0) };
	}
	return unk_0x0D6E79537424BACE(Var0, Var3, iParam2);
}

void func_195(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_5 != 1 || iParam2)
	{
		if (!func_321(Local_110[func_164(iParam1) /*11*/]))
		{
			if (!bLocal_664)
			{
				if (unk_0x86CCCD2FAE9D5E65(Local_110[func_164(iParam1) /*11*/]))
				{
					if (func_174(*uParam0, Local_110[func_164(iParam1) /*11*/], 140f, 0) || func_150(Local_110[func_164(iParam1) /*11*/], *uParam0, 3f))
					{
						func_169(uParam0, 0);
						bLocal_664 = true;
						return;
					}
					else
					{
						Local_666 = { unk_0xB6AE0DAE06D56288(Local_110[func_164(iParam1) /*11*/], 1) };
						uParam0->f_1 = unk_0x48E480685981C7D4();
						uParam0->f_8 = uParam0->f_7;
						uParam0->f_5 = 1;
						uParam0->f_6 = 11;
					}
				}
				else
				{
					func_169(uParam0, 0);
				}
			}
		}
		else if (Local_110[func_164(iParam1) /*11*/].f_6 == 22)
		{
			if (func_174(*uParam0, Local_110[func_164(iParam1) /*11*/], 140f, 0) && func_150(Local_110[func_164(iParam1) /*11*/], unk_0x81873881071CD9FE(), 15f))
			{
				uParam0->f_5 = 1;
				uParam0->f_6 = 21;
			}
		}
		else if (Local_110[func_164(iParam1) /*11*/].f_6 == 5 || Local_110[func_164(iParam1) /*11*/].f_6 == 7)
		{
			if (func_150(Local_110[func_164(iParam1) /*11*/], *uParam0, 10f))
			{
				func_169(uParam0, 0);
			}
		}
		if (func_206(*uParam0))
		{
			func_162(uParam0);
			uParam0->f_1 = unk_0x48E480685981C7D4();
			uParam0->f_8 = uParam0->f_7;
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
		}
		if (uParam0->f_10 == 0 && uParam0->f_7 == 4)
		{
			if (func_154(uParam0))
			{
				if (unk_0x04C377C10639B842(*uParam0, iLocal_108, 0))
				{
					unk_0x8A0CA59A6D4D119B(*uParam0, unk_0x81873881071CD9FE(), 0, 0f, 0f, 0f, 10f, 100, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
					unk_0x92D9FFAC30C80F4C(iLocal_108, 2000f);
					iLocal_669 = unk_0x48E480685981C7D4();
					uParam0->f_1 = unk_0x48E480685981C7D4();
					uParam0->f_6 = 16;
					uParam0->f_5 = 1;
				}
			}
		}
		if (func_197(*uParam0, 1, 70f, 170f, 0, 1, 0, 0) && !func_196(uParam0))
		{
			if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
			{
				if (func_36(iLocal_108))
				{
					if (unk_0x04C377C10639B842(*uParam0, iLocal_108, 0))
					{
						if (unk_0xA04824262F150982(iLocal_108) > 5f)
						{
							if (iParam1 == 0)
							{
								unk_0xEFACB1875068FA30(*uParam0, iLocal_108, unk_0x81873881071CD9FE(), 8, 30f, 786469, 300f, 2f, 1);
								uParam0->f_6 = 7;
								unk_0x492E306B5A7C779A(Local_110[func_164(iParam1) /*11*/], -1);
								Local_110[func_164(iParam1) /*11*/].f_6 = 10;
								Local_110[func_164(iParam1) /*11*/].f_5 = 1;
								uParam0->f_5 = 1;
								uParam0->f_1 = unk_0x48E480685981C7D4();
								Local_110[func_164(iParam1) /*11*/].f_1 = unk_0x48E480685981C7D4();
							}
							else
							{
								unk_0x492E306B5A7C779A(*uParam0, -1);
								uParam0->f_6 = 12;
								unk_0xEFACB1875068FA30(Local_110[func_164(iParam1) /*11*/], iLocal_108, unk_0x81873881071CD9FE(), 8, 30f, 786469, 300f, 2f, 1);
								Local_110[func_164(iParam1) /*11*/].f_6 = 5;
								Local_110[func_164(iParam1) /*11*/].f_5 = 1;
								uParam0->f_5 = 1;
								uParam0->f_1 = unk_0x48E480685981C7D4();
								Local_110[func_164(iParam1) /*11*/].f_1 = unk_0x48E480685981C7D4();
							}
						}
						else
						{
							func_169(uParam0, 0);
							if (unk_0x86CCCD2FAE9D5E65(Local_110[func_164(iParam1) /*11*/]))
							{
								if (func_174(Local_110[func_164(iParam1) /*11*/], unk_0x81873881071CD9FE(), 1126825984, 0))
								{
									func_169(&(Local_110[func_164(iParam1) /*11*/]), 0);
								}
							}
						}
						unk_0xD24EA1F9FB501BB5(*uParam0);
					}
					else
					{
						func_169(uParam0, 0);
						if (unk_0x86CCCD2FAE9D5E65(Local_110[func_164(iParam1) /*11*/]))
						{
							if (func_170(Local_110[func_164(iParam1) /*11*/], *uParam0, 1126825984, 1, 250, 7))
							{
								func_169(&(Local_110[func_164(iParam1) /*11*/]), 0);
							}
						}
					}
				}
			}
			else
			{
				uParam0->f_1 = unk_0x48E480685981C7D4();
				uParam0->f_8 = uParam0->f_7;
				uParam0->f_5 = 1;
				uParam0->f_6 = 21;
				unk_0xD24EA1F9FB501BB5(*uParam0);
				if (func_170(Local_110[func_164(iParam1) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					Local_110[func_164(iParam1) /*11*/].f_1 = unk_0x48E480685981C7D4();
					Local_110[func_164(iParam1) /*11*/].f_8 = uParam0->f_7;
					Local_110[func_164(iParam1) /*11*/].f_5 = 1;
					Local_110[func_164(iParam1) /*11*/].f_6 = 21;
					unk_0xD24EA1F9FB501BB5(Local_110[func_164(iParam1) /*11*/]);
				}
			}
			uParam0->f_5 = 1;
		}
		else if (unk_0x70847137E3B37A59(*uParam0))
		{
			func_162(uParam0);
			unk_0x754376E2234CBB4A(*uParam0, unk_0x81873881071CD9FE(), 500f, -1, 0, 1);
			uParam0->f_6 = 2;
			uParam0->f_5 = 1;
			uParam0->f_1 = unk_0x48E480685981C7D4();
		}
		if (unk_0xD81BC0FD4D47CC04(*uParam0))
		{
			if (func_10(Local_133[iLocal_660 /*25*/].f_17))
			{
				if (unk_0xCB8B9E751036ECB2(Local_133[iLocal_660 /*25*/].f_17))
				{
					unk_0xD88DD5B581458979(Local_133[iLocal_660 /*25*/].f_17, 1, 0);
					unk_0xAF760DE7720D6EAE(Local_133[iLocal_660 /*25*/].f_17, 1, unk_0xC99223BD7E489FC6(*uParam0), 0, 1, 1, 0);
				}
			}
		}
	}
	if (uParam0->f_5 != 1)
	{
		if (func_321(Local_110[func_164(iParam1) /*11*/]))
		{
			if (unk_0x70847137E3B37A59(Local_110[func_164(iParam1) /*11*/]))
			{
				func_162(uParam0);
				unk_0x754376E2234CBB4A(*uParam0, unk_0x81873881071CD9FE(), 120f, -1, 0, 0);
				uParam0->f_1 = unk_0x48E480685981C7D4();
				uParam0->f_6 = 7;
				uParam0->f_5 = 1;
			}
		}
	}
}

int func_196(var uParam0)
{
	if ((unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), unk_0xB07F27EC3B05E4EA(*uParam0, 0f, -2f, 0f), 2f, 3f, 2f, 0, 1, 0) && !unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6)) && unk_0x603F76C0CB05572F(unk_0x81873881071CD9FE()))
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_10(unk_0x81873881071CD9FE()) && func_10(iParam0))
	{
		if (unk_0xBBEF8270CE27C0EE(iParam0, unk_0x81873881071CD9FE(), 1))
		{
			return 1;
		}
		if (func_202(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
		{
			if (unk_0xF371669B2D6B4C8E(unk_0x81873881071CD9FE()))
			{
				Var0 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) - unk_0xB6AE0DAE06D56288(iParam0, 1) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_201(unk_0x81873881071CD9FE(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_198(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_198(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_10(unk_0x81873881071CD9FE()) && func_10(iParam0))
	{
		if (func_200(iParam0) || unk_0x2449A722A5E85855(unk_0x1329891157A54C63(), iParam0))
		{
			if (unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_199(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_199(int iParam0, float fParam1)
{
	return func_170(iParam0, unk_0x81873881071CD9FE(), fParam1, 1, 250, 7);
}

int func_200(int iParam0)
{
	if (unk_0xE8039CE2181EACCB(unk_0x1329891157A54C63(), iParam0) && unk_0x2B738BBCCA41F260(unk_0x81873881071CD9FE(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_201(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xC99223BD7E489FC6(iParam0) };
	Var3 = { unk_0xB6AE0DAE06D56288(iParam1, 1) - unk_0xB6AE0DAE06D56288(iParam0, 1) };
	return (((Var0.f_0 * Var3.f_0) + (Var0.f_1 * Var3.f_1)) / unk_0x2A488C176D52CCA5(Var3, 0f, 0f, 0f)) > unk_0xD0FFB162F40A139C(fParam2);
}

int func_202(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_10(unk_0x81873881071CD9FE()) && func_10(iParam0))
	{
		unk_0x5F446E70DA9B8122(unk_0x81873881071CD9FE(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_205(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_203(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0xC0DEC39E5B9D1886(unk_0x81873881071CD9FE()))
			{
				if (unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()))
				{
					if (unk_0x544121698BDAB87E(unk_0xB6AE0DAE06D56288(iParam0, 1), fVar0, 1))
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
				if (func_205(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_203(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_203(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x2DB0F20FA993D041(unk_0xB6AE0DAE06D56288(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x2DB0F20FA993D041(unk_0xB6AE0DAE06D56288(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x2DB0F20FA993D041(unk_0xB6AE0DAE06D56288(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x2DB0F20FA993D041(unk_0xB6AE0DAE06D56288(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_204(iParam0, fParam1))
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
			if (func_204(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x6DF2A27FBC647AEC(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_204(int iParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0xEDD0C1C7B35A1DBA(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0xEDD0C1C7B35A1DBA(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0xEDD0C1C7B35A1DBA(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0xEDD0C1C7B35A1DBA(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0xEDD0C1C7B35A1DBA(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_152(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_205(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0xADBE95599A01932F(unk_0x81873881071CD9FE()))
		{
			if (unk_0x8D28631AAAEFC957(unk_0x81873881071CD9FE(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x544121698BDAB87E(unk_0xB6AE0DAE06D56288(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_206(int iParam0)
{
	if (func_150(uParam0, unk_0x81873881071CD9FE(), 6f))
	{
		if (!unk_0xE5AB05962FA1FF3F(uParam0, 0))
		{
			if (unk_0xB454AC819016CE5E(iParam0, unk_0x81873881071CD9FE()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_207()
{
	if (func_36(Local_867.f_0))
	{
		if (func_150(unk_0x81873881071CD9FE(), Local_867.f_0, 100f) && !iLocal_836)
		{
			unk_0xEE7F8F35078C057B(joaat("trash"), 3);
			if (!unk_0x518D7D5175AEE673(joaat("trash")))
			{
				iLocal_836 = 1;
			}
		}
		else if (!func_150(unk_0x81873881071CD9FE(), Local_867.f_0, 120f) && iLocal_836)
		{
			unk_0x0EA17CCD2F60A8C4(joaat("trash"));
			iLocal_836 = 0;
		}
	}
}

void func_208(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, struct<3> Param5, int iParam8, bool bParam9, int iParam10)
{
	if (func_36(*iParam0))
	{
		switch (*iParam2)
		{
			case 0:
				if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), *iParam0, 0))
				{
					func_7(iParam3);
					if (func_99(func_107(func_75()), 0, 0))
					{
						unk_0xAC6C9BCDC1EB8365(func_107(func_75()));
					}
					if (*iParam0 == iParam8)
					{
						*iParam2 = 1;
					}
					else
					{
						*iParam2 = 2;
					}
				}
				else if (func_213(*iParam0) || func_212(*iParam0))
				{
					func_7(iParam3);
					if (func_99(func_107(func_75()), 0, 0))
					{
						unk_0xAC6C9BCDC1EB8365(func_107(func_75()));
					}
					*iParam2 = 3;
				}
				else
				{
					if (func_99(func_108(func_75(), bParam9), 0, 0))
					{
						unk_0xAC6C9BCDC1EB8365(func_108(func_75(), bParam9));
					}
					if (func_75() != 33)
					{
						func_210(iParam0);
					}
					else
					{
						func_209(iParam0, uParam1);
					}
				}
				break;
			
			case 2:
			case 1:
				if ((!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), *iParam0, 0) && !func_213(*iParam0)) && !func_212(*iParam0))
				{
					func_7(iParam4);
					if (!unk_0x515B65C19A5CA9B1(*iParam0, Param5, iParam10, iParam10, 2f, 0, 1, 2))
					{
						func_118(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
			
			case 3:
				if (!func_213(*iParam0) && !func_212(*iParam0))
				{
					func_7(iParam4);
					if (!unk_0x515B65C19A5CA9B1(*iParam0, Param5, iParam10, iParam10, 2f, 0, 1, 2))
					{
						func_118(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
		}
	}
	else if (func_75() != 33)
	{
		func_210(iParam0);
	}
	else
	{
		func_209(iParam0, uParam1);
	}
}

void func_209(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!bLocal_27)
	{
		if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
		{
			iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
			if (iVar0 != *uParam0)
			{
				if (func_36(iVar0))
				{
					iVar1 = unk_0x14B7103DBD149FFE(iVar0);
					if (iVar1 == joaat("trash"))
					{
						*uParam1 = *uParam0;
						func_6(uParam0);
						*uParam0 = iVar0;
						func_35(*uParam0, 1);
						func_35(*uParam1, 3);
						if (!unk_0xE86442941AE40E75(*uParam0))
						{
							unk_0xD768713E73165208(*uParam0, 1, 1);
						}
					}
					else if (iVar1 == joaat("towtruck"))
					{
						uVar2 = unk_0x9C486101C4BCBD61(unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0));
						if (func_10(uVar2))
						{
							iVar0 = unk_0x522C7043B2B961F9(uVar2);
							if (unk_0x14B7103DBD149FFE(iVar0) == joaat("trash"))
							{
								*uParam1 = *uParam0;
								func_6(uParam0);
								*uParam0 = iVar0;
								func_35(*uParam0, 1);
								func_35(*uParam1, 3);
								if (!unk_0xE86442941AE40E75(*uParam0))
								{
									unk_0xD768713E73165208(*uParam0, 1, 1);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_210(var uParam0)
{
	int iVar0;
	
	if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
	{
		iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
		if (iVar0 != *uParam0)
		{
			if (func_36(iVar0))
			{
				if (unk_0x14B7103DBD149FFE(iVar0) == func_211(func_75()))
				{
					func_6(uParam0);
					*uParam0 = iVar0;
					func_35(*uParam0, 1);
					unk_0xD768713E73165208(*uParam0, 1, 1);
				}
			}
		}
	}
}

int func_211(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 33:
			iVar0 = joaat("trash");
			break;
		
		case 34:
			iVar0 = joaat("towtruck");
			break;
		
		case 78:
			iVar0 = 0;
			break;
		
		case 80:
		case 81:
		case 82:
			iVar0 = joaat("gauntlet");
			break;
	}
	return iVar0;
}

int func_212(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((func_321(unk_0x81873881071CD9FE()) && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0)) && func_36(iParam0))
	{
		iVar0 = unk_0x2ADE2CEED2637E95();
		if (func_36(iVar0))
		{
			iVar1 = unk_0x14B7103DBD149FFE(iVar0);
			if ((iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2")) || iVar1 == joaat("cargobob3"))
			{
				if (unk_0x388B7B30D92821E4(iVar0))
				{
					if (unk_0xA8B0AD2AFC9FBA7E(iVar0, iParam0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_213(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((func_321(unk_0x81873881071CD9FE()) && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0)) && func_36(iParam0))
	{
		iVar0 = unk_0x2ADE2CEED2637E95();
		if (func_36(iVar0))
		{
			iVar1 = unk_0x14B7103DBD149FFE(iVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2"))
			{
				if (unk_0x6AD274E515B19C02(iVar0, iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_214()
{
	func_208(&iLocal_873, &uLocal_874, &iLocal_685, &iLocal_821, &iLocal_820, Local_826, Local_867.f_0, 0, 1090519040);
	func_148();
	func_231();
	func_207();
	switch (iLocal_683)
	{
		case 0:
			if (func_115(iLocal_682, bLocal_27))
			{
				if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 0 && !func_230())
				{
					func_110(&iLocal_820, Local_826, 1);
					func_114("PRA_TAKBACK", &iLocal_819);
				}
				iLocal_683 = 1;
			}
			break;
		
		case 1:
			func_113(&iLocal_820, Local_826, &iLocal_684, iLocal_685, &iLocal_819, &iLocal_837);
			func_220();
			if (func_218(iLocal_873, Local_826, &iLocal_820, iLocal_684, iLocal_685, &iLocal_819, &iLocal_838, 0, 0, 1086324736))
			{
				unk_0x2CEC5A597B1DFFE1(8f, 5f, 4);
				iLocal_683 = 2;
			}
			break;
		
		case 2:
			func_215();
			func_7(&iLocal_820);
			func_7(&iLocal_821);
			if (func_109(1077936128, 1))
			{
				func_103(0);
			}
			break;
		
		case 3:
			if (func_36(iLocal_873))
			{
				if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_873, 0))
				{
					unk_0xDC81A805934C85CD(unk_0x81873881071CD9FE(), iLocal_873, -1);
				}
				else
				{
					func_102(iLocal_873, Local_826, 146.5443f, 0, 1);
					func_39(1, 1, 1);
					iLocal_683 = 1;
				}
			}
			break;
	}
}

void func_215()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_77(iVar0);
		if (!unk_0x5FEB513A4402FD59(iVar1))
		{
			if (func_217(iVar1))
			{
				func_216(iVar1);
			}
		}
		iVar0++;
	}
}

int func_216(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0x5FEB513A4402FD59(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_77(iVar0) != iParam0)
		{
			return 0;
		}
		if (!unk_0x236D8AD7EE179F46(Global_86996, iVar0))
		{
			return 0;
		}
		unk_0xC69E84EBBD7166E6(&Global_86996, iVar0);
		return 1;
	}
	return 0;
}

int func_217(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0x5FEB513A4402FD59(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_77(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0x236D8AD7EE179F46(Global_86996, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_218(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, float fParam11)
{
	if ((iParam6 == 1 || iParam6 == 2) || iParam6 == 3)
	{
		if (iParam5 == 0)
		{
			func_110(iParam4, Param1, 1);
			if (!bParam10)
			{
				if (func_36(iParam0))
				{
					if (unk_0x515B65C19A5CA9B1(iParam0, Param1, fParam11, fParam11, 2f, 1, 1, 0))
					{
						return 1;
					}
				}
			}
			else if (unk_0x515B65C19A5CA9B1(unk_0x81873881071CD9FE(), Param1, fParam11, fParam11, 2f, 1, 1, 2))
			{
				return 1;
			}
			if (func_99(func_107(func_75()), 0, 0))
			{
				unk_0xAC6C9BCDC1EB8365(func_107(func_75()));
			}
			if (!func_219())
			{
				func_114(func_108(func_75(), bParam9), iParam7);
			}
		}
	}
	else if (iParam5 == 0)
	{
		if (!*iParam8)
		{
			if (func_99(func_108(func_75(), 0), 0, 0))
			{
				unk_0xAC6C9BCDC1EB8365(func_108(func_75(), 0));
			}
			func_98(func_107(func_75()), 7500, 0);
			*iParam8 = 1;
		}
	}
	return 0;
}

bool func_219()
{
	return Global_90861.f_296 > 0;
}

void func_220()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar2 = func_77(iVar0);
		if (!unk_0x5FEB513A4402FD59(iVar2))
		{
			if (func_76(iVar2, 0))
			{
				if (!bVar1)
				{
					if (func_150(unk_0x81873881071CD9FE(), iVar2, 5f))
					{
						if (!func_230())
						{
							func_225(iVar0);
							bVar1 = true;
						}
					}
				}
				if (!iLocal_1047[iVar0])
				{
					if (iVar0 == 0)
					{
						func_91(&uLocal_878, iVar0, iVar2, "MICHAEL", 0, 1);
					}
					else if (iVar0 == 1)
					{
						func_91(&uLocal_878, iVar0, iVar2, "FRANKLIN", 0, 1);
					}
					else if (iVar0 == 2)
					{
						func_91(&uLocal_878, iVar0, iVar2, "TREVOR", 0, 1);
					}
					iLocal_1047[iVar0] = 1;
				}
			}
			if (!func_217(iVar2))
			{
				if (func_76(iVar2, 0))
				{
					if (func_224(iVar2) || func_222(iVar2))
					{
						if (func_221(iVar2, 0))
						{
							unk_0xD768713E73165208(iVar2, 1, 1);
							unk_0x1D15D99A10A15334(iVar2, true);
							unk_0x27CC98B7C879C320(iVar2);
						}
					}
				}
			}
			else if (unk_0x46AE53A47E5D03D5(iVar2, 1))
			{
				if (func_224(iVar2))
				{
					if (unk_0xFA1212DE7C455679(iVar2, -1273030092) != 1 && unk_0xFA1212DE7C455679(iVar2, -1273030092) != 0)
					{
						if (unk_0x70666954168CD2BD(623.3781f, -172.26f, 1700.732f, -2115.843f))
						{
							unk_0x1ABA8A919187E144(iVar2, unk_0xE68E6B44DABA9C05(iVar2, 0), Local_826, 20f, 0, 0, 34340901, 2f, 10f);
						}
						else
						{
							unk_0xCF95B143971C4F42(623.3781f, -172.26f, 1700.732f, -2115.843f);
						}
					}
				}
				else if (func_222(iVar2))
				{
					if (func_36(Local_867.f_0))
					{
						if (!func_150(iVar2, Local_867.f_0, 17f))
						{
							if (unk_0xFA1212DE7C455679(iVar2, -1273030092) != 1 && unk_0xFA1212DE7C455679(iVar2, -1273030092) != 0)
							{
								unk_0x31F198965149F7F4(iVar2, unk_0xE68E6B44DABA9C05(iVar2, 0), Local_867.f_0, 3, 20f, 786468, 2f, 0.5f, 1);
							}
						}
					}
				}
				else
				{
					func_216(iVar2);
				}
			}
		}
		iVar0++;
	}
}

int func_221(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0x5FEB513A4402FD59(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_77(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0x236D8AD7EE179F46(Global_86996, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x81873881071CD9FE())
			{
				return 0;
			}
		}
		if (unk_0x236D8AD7EE179F46(Global_86995, iVar0))
		{
			unk_0xA1D790F5D65EE81D(iParam0, 0, 0);
			unk_0x3B7AFF7DCE22C1CF(iParam0, 0);
			unk_0xF3148AAF69AF9CBC(&Global_86996, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_222(int iParam0)
{
	int iVar0;
	
	if (!func_223())
	{
		if ((!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0)) && unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 0)
		{
			iVar0 = unk_0xE68E6B44DABA9C05(unk_0x81873881071CD9FE(), 0);
			if (func_36(iVar0))
			{
				if (unk_0xCC6B00B8460CDA0E(iVar0, joaat("trash")))
				{
					return 0;
				}
				if (unk_0x04C377C10639B842(iParam0, iVar0, 0) && unk_0xB0B9E53CEFDB16AA(iVar0, -1) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_223()
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		return Global_88620.f_44 == 1;
	}
	return 0;
}

int func_224(int iParam0)
{
	if (!func_223())
	{
		if ((unk_0x86CCCD2FAE9D5E65(Local_867.f_0) && unk_0x7404950238A154C2(Local_867.f_0, 0)) && !unk_0x515B65C19A5CA9B1(Local_867.f_0, Local_826, 2f, 2f, 2f, 0, 1, 0))
		{
			if ((!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()) && unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), Local_867.f_0, 0)) && unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 0)
			{
				if (unk_0x04C377C10639B842(iParam0, Local_867.f_0, 0) && unk_0xB0B9E53CEFDB16AA(Local_867.f_0, -1) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_225(int iParam0)
{
	if (iLocal_682 > 1)
	{
		if (iLocal_684 > 0)
		{
			if (!unk_0x236D8AD7EE179F46(Local_687[iParam0 /*8*/].f_7, 0) && iLocal_685 == 1)
			{
				if (!unk_0xDBD19E93A4D01117())
				{
					if (func_229(&uLocal_878, cLocal_877, Local_687[iParam0 /*8*/][0], 8, 0, 0, 0))
					{
						unk_0xF3148AAF69AF9CBC(&(Local_687[iParam0 /*8*/].f_7), 0);
					}
				}
			}
		}
		else
		{
			if ((unk_0x236D8AD7EE179F46(Local_687[iParam0 /*8*/].f_7, 0) && !unk_0x236D8AD7EE179F46(Local_687[iParam0 /*8*/].f_7, 1)) && iLocal_685 == 1)
			{
				if (!unk_0xDBD19E93A4D01117())
				{
					if (func_229(&uLocal_878, cLocal_877, Local_687[iParam0 /*8*/][1], 7, 0, 0, 0))
					{
						unk_0xF3148AAF69AF9CBC(&(Local_687[iParam0 /*8*/].f_7), 1);
					}
				}
			}
			if (!unk_0x236D8AD7EE179F46(Local_687[iParam0 /*8*/].f_7, 5))
			{
				if (func_228(iLocal_873, Local_826, 1) < 15f && iLocal_685 == 1)
				{
					if (!unk_0xDBD19E93A4D01117())
					{
						if (func_229(&uLocal_878, cLocal_877, Local_687[iParam0 /*8*/][5], 7, 0, 0, 0))
						{
							unk_0xF3148AAF69AF9CBC(&(Local_687[iParam0 /*8*/].f_7), 5);
						}
					}
				}
			}
			switch (func_29(unk_0x81873881071CD9FE()))
			{
				case 0:
					if (iParam0 == 1)
					{
						if (!func_227(2))
						{
							func_226(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_227(4))
						{
							func_226(iParam0, 4);
						}
					}
					break;
				
				case 1:
					if (iParam0 == 0)
					{
						if (!func_227(2))
						{
							func_226(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_227(3))
						{
							func_226(iParam0, 3);
						}
					}
					break;
				
				case 2:
					if (iParam0 == 1)
					{
						if (!func_227(3))
						{
							func_226(iParam0, 3);
						}
					}
					else if (iParam0 == 0)
					{
						if (!func_227(4))
						{
							func_226(iParam0, 4);
						}
					}
					break;
				}
			}
	}
}

void func_226(int iParam0, int iParam1)
{
	if (!unk_0x236D8AD7EE179F46(Local_687[iParam0 /*8*/].f_7, iParam1))
	{
		if (iLocal_1051 != -1)
		{
			if (!unk_0xDBD19E93A4D01117())
			{
				if (func_229(&uLocal_878, cLocal_877, Local_687[iParam0 /*8*/][iParam1], 7, 0, 0, 0))
				{
					unk_0xF3148AAF69AF9CBC(&(Local_687[iParam0 /*8*/].f_7), iParam1);
				}
			}
		}
		else if (!func_230() && !unk_0xDBD19E93A4D01117())
		{
			iLocal_1051 = unk_0x48E480685981C7D4();
		}
		else
		{
			iLocal_1051 = -1;
		}
	}
}

int func_227(int iParam0)
{
	if ((unk_0x236D8AD7EE179F46(Local_687[0 /*8*/].f_7, iParam0) || unk_0x236D8AD7EE179F46(Local_687[1 /*8*/].f_7, iParam0)) || unk_0x236D8AD7EE179F46(Local_687[2 /*8*/].f_7, iParam0))
	{
		return 1;
	}
	return 0;
}

float func_228(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	}
	return unk_0x0D6E79537424BACE(Var0, Param1, iParam4);
}

bool func_229(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15700 = 0;
	Global_15702 = 0;
	Global_15707 = 0;
	Global_16684 = 0;
	Global_16686 = 0;
	Global_16690 = 0;
	Global_2621441 = 0;
	return func_81(sParam2, iParam3, 0);
}

int func_230()
{
	if (Global_15693 != 0 || unk_0xE1772957381F609F())
	{
		return 1;
	}
	return 0;
}

void func_231()
{
	if (func_100(unk_0x81873881071CD9FE(), Local_826, 220f))
	{
		if (!iLocal_876 && !func_100(unk_0x81873881071CD9FE(), Local_826, 100f))
		{
			iLocal_876 = func_146(&uLocal_875, joaat("cavalcade2"), 1370.912f, -2060.055f, 50.9983f, 312.8686f, 1);
		}
	}
	else if (func_100(unk_0x81873881071CD9FE(), Local_826, 240f))
	{
		if (iLocal_876)
		{
			func_6(&uLocal_875);
			iLocal_876 = 0;
		}
	}
}

void func_232()
{
	func_208(&iLocal_873, &uLocal_874, &iLocal_685, &iLocal_821, &iLocal_820, Local_826, Local_867.f_0, 0, 1090519040);
	func_207();
	func_148();
	switch (iLocal_683)
	{
		case 0:
			if (func_115(iLocal_682, bLocal_27))
			{
				func_118(&iLocal_820, Local_867.f_0, 1);
				func_114("PRA_GOVAN", &iLocal_819);
				iLocal_683 = 1;
			}
			break;
		
		case 1:
			func_220();
			if (func_36(Local_867.f_0))
			{
				func_235(&uLocal_670, Local_867.f_0, 0, 0, 1, 1, 1);
			}
			if (!bLocal_832)
			{
				if (func_321(Local_839.f_0) && unk_0x70847137E3B37A59(Local_839.f_0))
				{
					func_234();
				}
				if (func_321(Local_853.f_0) && unk_0x70847137E3B37A59(Local_853.f_0))
				{
					func_234();
				}
			}
			if (func_36(iLocal_873))
			{
				if ((iLocal_685 == 1 || iLocal_685 == 2) || iLocal_685 == 3)
				{
					unk_0x2CEC5A597B1DFFE1(5f, 5f, 4);
					iLocal_683 = 2;
				}
			}
			break;
		
		case 2:
			func_7(&iLocal_820);
			func_138(&uLocal_670, 0, 0);
			func_103(0);
			break;
		
		case 3:
			func_8(&Local_839);
			func_8(&Local_853);
			if (func_36(Local_867.f_0))
			{
				unk_0xDC81A805934C85CD(unk_0x81873881071CD9FE(), Local_867.f_0, -1);
			}
			func_233(1);
			func_39(1, 1, 1);
			iLocal_683 = 1;
			break;
	}
}

void func_233(bool bParam0)
{
	unk_0xCF03502D0A0CF8C3(1, bParam0);
	unk_0xCF03502D0A0CF8C3(2, bParam0);
	unk_0xCF03502D0A0CF8C3(3, bParam0);
	unk_0xCF03502D0A0CF8C3(4, bParam0);
	unk_0xCF03502D0A0CF8C3(5, bParam0);
	if (bParam0)
	{
		unk_0x5B6D37392F5991C3(1f);
		unk_0x9BAE0FF806E5C2E5(5);
	}
	else
	{
		unk_0x9BAE0FF806E5C2E5(0);
		unk_0x5B6D37392F5991C3(0f);
	}
}

void func_234()
{
	char* sVar0;
	
	switch (func_25())
	{
		case 0:
			sVar0 = "FBI4_JACKSM";
			break;
		
		case 1:
			sVar0 = "FBI4_JACKSF";
			break;
		
		case 2:
			sVar0 = "FBI4_JACKST";
			break;
	}
	bLocal_832 = func_229(&uLocal_878, "FBIPRAU", sVar0, 7, 0, 0, 0);
	if (bLocal_832)
	{
		unk_0x2CEC5A597B1DFFE1(8f, 8f, 4);
	}
}

void func_235(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_236(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_236(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	func_237(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_237(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
	{
		func_138(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_238(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_238(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
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
	if (func_139(iVar0))
	{
		func_255();
	}
	if (func_254(iParam1) && unk_0x1DB417C2D78C2390(iParam1))
	{
		iVar1 = 0;
		if (unk_0xCF0C46D719D5302C(iParam1))
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
			if (func_249(uParam0, bParam7, bParam9, 0))
			{
				func_246(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_243(iVar0))
				{
					if ((unk_0x4357449749A521B1(uParam0->f_3) && !unk_0x4357449749A521B1(iVar0)) && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
					{
						if ((iVar1 && !unk_0xA83A609D74168B30()) && uParam8)
						{
							if (!func_139(iVar0))
							{
								func_242(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xD994929E13CC1ED5("CMN_HINT", iVar0))
								{
									func_241(1);
								}
							}
						}
					}
				}
			}
			else if (func_243(iVar0))
			{
				if (unk_0x4357449749A521B1(uParam0->f_3) && !unk_0x4357449749A521B1(iVar0))
				{
					if (((unk_0x331E7ACCFD0869AD(iParam1) && iVar1) && !unk_0xA83A609D74168B30()) && uParam8)
					{
						if (!func_139(iVar0))
						{
							func_242(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xD994929E13CC1ED5("CMN_HINT", iVar0))
							{
								func_241(1);
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
				if (func_139(sParam5))
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
						func_138(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF8F0C55E476A5A81(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(6) == 3 || unk_0x7FCE6803A3D23268(6) == 4)
					{
						func_138(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x25B75802E65C5545(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(4) == 3 || unk_0x7FCE6803A3D23268(4) == 4)
					{
						func_138(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8B66743C57DF7AAA(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(5) == 3 || unk_0x7FCE6803A3D23268(5) == 4)
					{
						func_138(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xA5E670E54C660F1A(unk_0x81873881071CD9FE()))
				{
					if (unk_0x7FCE6803A3D23268(2) == 3 || unk_0x7FCE6803A3D23268(2) == 4)
					{
						func_138(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF18003343B2E8EE9() == 3 || unk_0xF18003343B2E8EE9() == 4)
				{
					func_138(uParam0, iVar0, 1);
				}
			}
			if (!func_249(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_240(uParam0))
				{
					func_239(uParam0);
				}
			}
		}
	}
	else
	{
		func_138(uParam0, iVar0, 0);
	}
}

void func_239(var uParam0)
{
	if (func_254(unk_0x81873881071CD9FE()))
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

int func_240(var uParam0)
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

int func_241(bool bParam0)
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

void func_242(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 1, iParam1);
}

int func_243(char* sParam0)
{
	if (!func_244(1, 1, 0))
	{
		if ((!unk_0xB318FDA0D1ABDB20(sParam0) && func_139(sParam0)) || func_139("CMN_HINT"))
		{
			unk_0xB8BB626315D394F5(1);
		}
		return 0;
	}
	switch (Global_35443)
	{
		case 0:
		case 3:
			if (func_241(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_241(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_241(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_244(bool bParam0, bool bParam1, bool bParam2)
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
	if (func_67(0))
	{
		return 0;
	}
	if (func_245())
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

bool func_245()
{
	return unk_0x48E480685981C7D4() <= Global_17238.f_5630 + 100;
}

void func_246(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x930F8FBB8E9537CC(iParam1))
	{
		func_138(uParam0, 0, 0);
	}
	if (func_15(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0xCF0C46D719D5302C(iParam1))
		{
			iVar0 = unk_0x8F1CCE5AF629C4D3(iParam1);
			if (!unk_0xE5AB05962FA1FF3F(iVar0, 0))
			{
				if (unk_0x0452D5BF20AD945A(iVar0))
				{
					if (!func_247())
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

bool func_247()
{
	return func_248(unk_0x1329891157A54C63());
}

int func_248(int iParam0)
{
	if (unk_0x14B7103DBD149FFE(unk_0xE495E987CB2BE7EF(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_249(var uParam0, bool bParam1, bool bParam2, bool bParam3)
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
					if (func_253(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_252(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_252(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_253(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x48E480685981C7D4();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_240(uParam0))
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
						if (!func_253(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x48E480685981C7D4();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_252(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_252(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x48E480685981C7D4();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_253(bParam1, bParam2, bParam3))
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
					if (!func_253(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_252(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_252(bParam1, bParam2, bParam3) || unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1))
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
				else if (!func_253(bParam1, bParam2, bParam3))
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
						if (func_251(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_250(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 1) || func_250(bParam1, bParam2, bParam3))
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
					else if (func_251(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_240(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_244(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_255();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_250(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_244(bParam0, bParam1, bParam2))
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

int func_251(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_244(bParam0, bParam1, bParam2))
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

int func_252(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_244(bParam0, bParam1, bParam2))
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

int func_253(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_244(bParam0, bParam1, bParam2))
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

int func_254(int iParam0)
{
	if (unk_0x86CCCD2FAE9D5E65(iParam0))
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

void func_255()
{
	unk_0xF3148AAF69AF9CBC(&Global_2265, 4);
}

void func_256()
{
	switch (iLocal_683)
	{
		case 0:
			if (func_115(iLocal_682, 0))
			{
				func_268();
				func_266(33);
				unk_0x9BAE0FF806E5C2E5(2);
				unk_0x5B6D37392F5991C3(0.1f);
				if (func_337())
				{
					func_263(0, -1, 1);
					func_40(500, 1);
					iLocal_683 = 2;
				}
				else
				{
					if (func_32(0))
					{
						func_117(unk_0x81873881071CD9FE(), 1228.635f, -348.4277f, 68.0929f, 86.7244f);
						func_258(1228.635f, -348.4277f, 68.0929f, 1112014848, 12, 5000, 0, 0);
						func_40(500, 1);
					}
					func_257();
					if (iLocal_682 == 2)
					{
						iLocal_683 = 0;
					}
					else
					{
						iLocal_683 = 2;
					}
				}
			}
			break;
		
		case 2:
			func_103(0);
			break;
	}
}

void func_257()
{
}

void func_258(struct<3> Param0, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0xD591652D9F0E72D7(Param0, iParam3, iParam4, 127);
	if (unk_0xA15F4145FFFDF88C(uVar0))
	{
		iVar1 = (unk_0x48E480685981C7D4() + iParam5);
		while (!unk_0xDE0AAECEBA83F86E(uVar0) && unk_0x48E480685981C7D4() < iVar1)
		{
			if (bParam7)
			{
				func_260();
			}
			if (bParam6)
			{
				func_259();
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		if (unk_0x48E480685981C7D4() < iVar1)
		{
		}
		unk_0xE112003C3132147E(uVar0);
	}
}

void func_259()
{
	Global_17099.f_6 = 1;
}

void func_260()
{
	if (!Global_14394.f_1 == 1)
	{
		if (func_67(0))
		{
			func_261(0);
		}
		unk_0xF3148AAF69AF9CBC(&Global_2265, 2);
	}
}

void func_261(int iParam0)
{
	if (Global_14552)
	{
		func_262(0, 0);
	}
	if (Global_14394.f_1 == 10 || Global_14394.f_1 == 9)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2265, 16);
	}
	if (unk_0xE0A43912E369FFA5())
	{
		unk_0x9E95048D8C96C1EA(false);
	}
	Global_15693 = 5;
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&Global_2264, 30);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&Global_2264, 30);
	}
	if (!func_49())
	{
		Global_14394.f_1 = 3;
	}
}

void func_262(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_67(0))
		{
			Global_14552 = 1;
			if (bParam1)
			{
				unk_0x2B4380FBF49E1B71(&Global_14331);
			}
			Global_14322 = { Global_14340[Global_14339 /*3*/] };
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
	else if (Global_14552 == 1)
	{
		Global_14552 = 0;
		Global_14322 = { Global_14347[Global_14339 /*3*/] };
		if (bParam1)
		{
			unk_0xB30AC22133A50DEE(Global_14331);
		}
		else
		{
			unk_0xB30AC22133A50DEE(Global_14322);
		}
	}
}

void func_263(int iParam0, int iParam1, int iParam2)
{
	if (func_337() && func_265())
	{
		while (Global_90804 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xD338B0444EFB8C65(0);
		if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				unk_0x59DEC64833EB09EA(unk_0x81873881071CD9FE());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
			{
				if (unk_0x86CCCD2FAE9D5E65(iParam0))
				{
					if (unk_0x7404950238A154C2(iParam0, 0))
					{
						if (!unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iParam0, 0))
						{
							unk_0xDC81A805934C85CD(unk_0x81873881071CD9FE(), iParam0, iParam1);
							unk_0xEAB527164AD92BF3(0f, 1065353216);
							unk_0x270066FDBAF3A458(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
			{
				unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
			}
		}
		unk_0xCF8607B89BD34049();
		func_264(0);
	}
}

void func_264(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_90809.f_20), 13);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_90809.f_20), 13);
	}
}

bool func_265()
{
	return unk_0x236D8AD7EE179F46(Global_90809.f_20, 13);
}

void func_266(int iParam0)
{
	Global_86997 = 0;
	switch (iParam0)
	{
		case 72:
			func_267(2);
			func_267(4);
			break;
		
		case 73:
			func_267(0);
			func_267(1);
			func_267(7);
			break;
		
		case 92:
			func_267(10);
			func_267(9);
			func_267(13);
			func_267(6);
			break;
		
		case 68:
			func_267(11);
			break;
		
		case 78:
			func_267(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_267(3);
			break;
		
		default:
			break;
	}
}

void func_267(int iParam0)
{
	unk_0xF3148AAF69AF9CBC(&Global_86997, iParam0);
}

void func_268()
{
	int iVar0;
	
	iVar0 = unk_0x2ADE2CEED2637E95();
	if (unk_0x86CCCD2FAE9D5E65(iVar0))
	{
		if (unk_0x7404950238A154C2(iVar0, 0))
		{
			func_269(iVar0, unk_0xB6AE0DAE06D56288(iVar0, 1), unk_0x3306AAAFE3B25098(iVar0), 24, 0);
		}
	}
}

void func_269(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x86CCCD2FAE9D5E65(iParam0) && unk_0x7404950238A154C2(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_484[25]) && unk_0x7404950238A154C2(Global_67889.f_484[25], 0))
			{
				if (Global_67889.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x8807D8929DF94A13(iParam0) || unk_0x14B7103DBD149FFE(iParam0) == joaat("bus")) || unk_0x14B7103DBD149FFE(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_312(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_308(iParam0, &Var0);
		if (func_15(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xB6AE0DAE06D56288(iParam0, 1) };
			uParam4 = unk_0x3306AAAFE3B25098(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x8DAF7A748E41AD46(unk_0x11CA2334E341B424()) != joaat("vehicle_gen_controller"))
			{
				Global_68877 = unk_0x8DAF7A748E41AD46(unk_0x11CA2334E341B424());
			}
		}
		func_301(iParam5, &Var0, Param1, uParam4, func_307(iParam0));
		func_270(iParam5, iParam0, 0);
	}
}

void func_270(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_298(&(Global_67889.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0x236D8AD7EE179F46(Global_67889.f_555[0 /*21*/].f_9, 12) && !unk_0x236D8AD7EE179F46(Global_67889.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_67889.f_555[0 /*21*/].f_4 != unk_0x14B7103DBD149FFE(iParam1))
		{
			return;
		}
	}
	if (Global_68796 != -1 && Global_68796 != iParam0)
	{
		return;
	}
	if (unk_0x86CCCD2FAE9D5E65(iParam1))
	{
		if (unk_0x7404950238A154C2(iParam1, 0))
		{
			if (!unk_0xE86442941AE40E75(iParam1))
			{
				unk_0xD768713E73165208(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_98931.f_18731.f_4801 = func_287();
			}
			if (iParam1 != Global_67889.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_286(iParam0);
					if ((unk_0x86CCCD2FAE9D5E65(iVar0) && unk_0x7404950238A154C2(iVar0, 0)) && iParam1 != iVar0)
					{
						func_271(iVar0, 145);
					}
				}
				Global_68795 = iParam1;
				Global_68796 = iParam0;
				Global_68797 = iParam2;
			}
		}
	}
}

void func_271(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_272(iParam0))
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
	func_308(iParam0, &(Global_98931.f_18731.f_5510));
}

int func_272(int iParam0)
{
	if ((((((((((!unk_0x86CCCD2FAE9D5E65(iParam0) || !unk_0x7404950238A154C2(iParam0, 0)) || func_284(iParam0, 0, 0)) || func_284(iParam0, 1, 0)) || func_284(iParam0, 2, 0)) || func_307(iParam0) != 145) || func_283(iParam0)) || func_282(iParam0)) || func_281(iParam0)) || func_280(iParam0)) || !func_273(unk_0x14B7103DBD149FFE(iParam0)))
	{
		if (func_282(iParam0))
		{
		}
		if (func_282(iParam0))
		{
		}
		if (func_284(iParam0, 0, 0))
		{
		}
		if (func_284(iParam0, 1, 0))
		{
		}
		if (func_284(iParam0, 2, 0))
		{
		}
		if (func_307(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_273(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_274(iParam0))
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

int func_274(int iParam0)
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
		if (!func_279())
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
		if ((((!func_278() && !func_277()) && !func_276()) && !func_275()) && !func_279())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x3F0C224D3CC05EF2() || unk_0x913B1C01C1BA6C6F()) || unk_0xEC209B562C5EFDB2())
		{
		}
		else if (!func_276())
		{
			return 0;
		}
	}
	return 1;
}

int func_275()
{
	return 0;
}

int func_276()
{
	return 1;
}

int func_277()
{
	return 1;
}

int func_278()
{
	if (unk_0x2D6859674806FDCE(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_279()
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

int func_280(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x14B7103DBD149FFE(iParam0);
	sVar1 = unk_0xE0DCE5625B61B0CC(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xD994929E13CC1ED5(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_274(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_281(int iParam0)
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

int func_282(int iParam0)
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

int func_283(int iParam0)
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

int func_284(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x86CCCD2FAE9D5E65(iParam0) || !unk_0x7404950238A154C2(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_285(iParam1, iVar0, &sVar1, &iVar9))
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

int func_285(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_286(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_67889.f_139[iParam0];
}

var func_287()
{
	var uVar0;
	
	func_297(&uVar0, unk_0xBF0A1447DA6AE4B5());
	func_296(&uVar0, unk_0x25B31B877207A3A9());
	func_295(&uVar0, unk_0x0C937048CF6952B5());
	func_290(&uVar0, unk_0x8B6B3DD84CE74978());
	func_289(&uVar0, unk_0x02DC618B9A1DB8D1());
	func_288(&uVar0, unk_0x57E483B654EDD986());
	return uVar0;
}

void func_288(var uParam0, int iParam1)
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

void func_289(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_290(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_294(*uParam0);
	iVar1 = func_292(*uParam0);
	if (iParam1 < 1 || iParam1 > func_291(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_291(int iParam0, int iParam1)
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

var func_292(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_293(unk_0x236D8AD7EE179F46(iParam0, 31), -1, 1)) + 2011;
}

int func_293(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_294(var uParam0)
{
	return uParam0 & 15;
}

void func_295(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_296(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_297(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_298(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_299(0, 1);
			uParam0->f_12 = 0;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_299(0, 1);
			uParam0->f_12 = 0;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_299(1, 1);
			uParam0->f_12 = 1;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_299(1, 2);
			uParam0->f_12 = 1;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 19);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_299(1, 1);
			uParam0->f_12 = 1;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_299(1, 2);
			uParam0->f_12 = 1;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 19);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_299(2, 1);
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_299(2, 1);
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_299(2, 1);
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 20);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 22);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 22);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 22);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 24);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 24);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 14);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 24);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 28);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 27);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 24);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 27);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 24);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 7);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 27);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 24);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 11);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 13);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 10);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 11);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 13);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 9);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 9);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 2);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 30);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 2);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 22);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_279())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 13);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 2);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 1);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_279())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 13);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 2);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 1);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 0);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 21);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 30);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 30);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 23);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x236D8AD7EE179F46(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_98931.f_18731.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_15(Global_98931.f_18731.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_98931.f_18731.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_98931.f_18731.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_98931.f_18731.f_1934[uParam0->f_14];
		}
	}
	if (unk_0x236D8AD7EE179F46(uParam0->f_9, 19))
	{
		if (!func_15(Global_98931.f_1750.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_98931.f_1750.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_98931.f_1750.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x236D8AD7EE179F46(uParam0->f_9, 20))
	{
		if (!func_15(Global_98931.f_1750.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_98931.f_1750.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_98931.f_1750.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_299(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_28(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_300(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_300(int iParam0, var uParam1, int iParam2)
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
			if (Global_98931.f_7699.f_99.f_58[128] && !Global_98931.f_7699.f_99.f_58[131])
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
					if (Global_98931.f_7699.f_99.f_58[119])
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
			else if (Global_98931.f_7699.f_99.f_58[118])
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

void func_301(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_298(&(Global_67889.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x236D8AD7EE179F46(Global_67889.f_555[0 /*21*/].f_9, 10))
		{
			func_306(iParam0);
			func_305(uParam1, &(Global_98931.f_18731.f_69[Global_67889.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0x236D8AD7EE179F46(Global_67889.f_555[0 /*21*/].f_9, 11))
			{
				Global_98931.f_18731.f_1864[Global_67889.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_98931.f_18731.f_1934[Global_67889.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_98931.f_18731.f_1864[Global_67889.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_98931.f_18731.f_1934[Global_67889.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_98931.f_18731.f_1958[Global_67889.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_302(iParam0, 1);
		}
	}
}

void func_302(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_304(iParam0, 0))
		{
			func_303(iParam0, 1, 0);
			func_303(iParam0, 2, 0);
			func_303(iParam0, 3, 0);
			func_303(iParam0, 4, 0);
			func_303(iParam0, 0, 1);
			Global_67889[iParam0] = 1;
		}
	}
	else
	{
		func_303(iParam0, 0, 0);
	}
}

void func_303(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_18731[iParam0]), iParam1);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_18731[iParam0]), iParam1);
	}
}

bool func_304(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x236D8AD7EE179F46(Global_98931.f_18731[iParam0], iParam1);
}

void func_305(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_306(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_298(&(Global_67889.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x86CCCD2FAE9D5E65(Global_67889.f_139[iParam0]))
		{
			unk_0xD768713E73165208(Global_67889.f_139[iParam0], 1, 1);
			unk_0xE0913C01F5C0CC3D(&(Global_67889.f_139[iParam0]));
			Global_67889.f_139[iParam0] = 0;
		}
		if (unk_0x236D8AD7EE179F46(Global_67889.f_555[0 /*21*/].f_9, 13))
		{
			func_302(iParam0, 0);
		}
	}
}

int func_307(int iParam0)
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

void func_308(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x7404950238A154C2(iParam0, 0))
	{
		func_311(uParam1);
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
		func_310(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x5CBBEE14743C3376(iParam0, iVar0 + 1))
			{
				unk_0xF3148AAF69AF9CBC(&(uParam1->f_77), func_309(iVar0 + 1));
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

int func_309(int iParam0)
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

int func_310(int iParam0, var uParam1, var uParam2)
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

void func_311(var uParam0)
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

void func_312(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_306(iParam0);
	func_302(iParam0, 0);
}

void func_313()
{
	func_316();
	func_314();
}

void func_314()
{
	if (!iLocal_830)
	{
		if (func_36(iLocal_873))
		{
			if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_873, 0))
			{
				func_64(iLocal_873, -1);
				func_63(iLocal_873, 318);
				iLocal_830 = 1;
			}
		}
	}
	if (!iLocal_831)
	{
		if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) > 0)
		{
			func_315(320, 0);
			iLocal_831 = 1;
		}
	}
	else if (unk_0xF730A9A61F7B0EC2(unk_0x1329891157A54C63()) == 0)
	{
		func_62(0, 320);
		iLocal_831 = 0;
	}
}

void func_315(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_55412 = iParam0;
	if (!Global_55410)
	{
		Global_55410 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67497)
		{
			if (Global_67498[iVar0 /*9*/] == iParam0)
			{
				Global_67498[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_316()
{
}

void func_317()
{
	if (!bLocal_27 && iLocal_682 != 5)
	{
		if (iLocal_682 > 0)
		{
			func_318();
		}
	}
}

void func_318()
{
	float fVar0;
	int iVar1;
	
	fVar0 = 600f;
	if (!func_36(iLocal_873))
	{
		if (!func_36(uLocal_874) && !func_36(Local_867.f_0))
		{
			func_320(1);
			return;
		}
		if (func_36(Local_867.f_0) && !func_150(unk_0x81873881071CD9FE(), Local_867.f_0, fVar0))
		{
			func_320(2);
		}
	}
	else
	{
		iVar1 = 0;
		if (!func_150(unk_0x81873881071CD9FE(), iLocal_873, fVar0))
		{
			iVar1++;
		}
		if (func_36(uLocal_874))
		{
			if (!func_150(unk_0x81873881071CD9FE(), uLocal_874, fVar0))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_36(Local_867.f_0))
		{
			if (!func_150(unk_0x81873881071CD9FE(), Local_867.f_0, fVar0))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 3)
		{
			func_320(2);
			return;
		}
		iVar1 = 0;
		if (func_319(iLocal_873))
		{
			iVar1++;
		}
		if (func_36(uLocal_874))
		{
			if (func_319(uLocal_874))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_36(Local_867.f_0))
		{
			if (func_319(Local_867.f_0))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (iVar1 >= 3)
		{
			func_320(3);
			return;
		}
	}
}

int func_319(var uParam0)
{
	if (func_36(uParam0))
	{
		if (((unk_0x088B9F587DA37464(uParam0, 0, 7000) || unk_0x088B9F587DA37464(uParam0, 3, 30000)) || unk_0x088B9F587DA37464(uParam0, 2, 30000)) || unk_0x088B9F587DA37464(uParam0, 1, 40000))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_320(int iParam0)
{
	unk_0xD1C83BD797927DD5();
	func_59();
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			sLocal_817 = "PRA_FWRECK";
			break;
		
		case 2:
			sLocal_817 = "PRA_FFAR";
			break;
		
		case 3:
			sLocal_817 = "PRA_FSTUCK";
			break;
	}
	iLocal_682 = 5;
	iLocal_683 = 0;
}

int func_321(int iParam0)
{
	if (func_10(iParam0))
	{
		if (!unk_0x5FEB513A4402FD59(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_322()
{
	if (!func_95(36))
	{
		func_323(21, 0, 0);
	}
}

void func_323(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_335(iParam0, 0, 0))
		{
			if (iParam2 && Global_90861.f_17[iParam0])
			{
				if (func_334(iParam0) == 3 && !func_333(iParam0))
				{
					func_332(iParam0);
					func_331(iParam0, 0, 0);
					func_325(iParam0, 1, 0);
					func_324(iParam0);
				}
				else
				{
					func_331(iParam0, 1, 0);
					func_324(iParam0);
				}
			}
			else
			{
				func_331(iParam0, 0, 0);
				func_325(iParam0, 1, 0);
				func_324(iParam0);
			}
		}
		else
		{
			func_325(iParam0, 1, 0);
			func_324(iParam0);
		}
	}
	else if (func_335(iParam0, 0, 0))
	{
		func_325(iParam0, 0, 0);
		func_325(iParam0, 1, 0);
		func_324(iParam0);
	}
}

void func_324(int iParam0)
{
	Global_90861.f_156[iParam0] = 1;
	Global_90861.f_155 = 1;
}

void func_325(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xC69E84EBBD7166E6(&(Global_90861.f_1279[iParam0]), iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_330() == 0)
		{
			uVar0 = func_328(func_329(iParam0), -1, 0);
			unk_0xC69E84EBBD7166E6(&uVar0, iParam1);
			func_326(func_329(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_98931.f_668[iParam0]), iParam1);
	}
}

void func_326(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_327(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, uParam1, iParam3);
	}
}

int func_327(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_47();
		if (iVar1 > -1)
		{
			Global_2459480 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2459480 = 1;
		}
	}
	return iVar0;
}

int func_328(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2459767[iParam0 /*5*/][func_327(iParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_329(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 817;
			break;
		
		case 1:
			return 818;
			break;
		
		case 2:
			return 819;
			break;
		
		case 3:
			return 820;
			break;
		
		case 4:
			return 821;
			break;
		
		case 5:
			return 822;
			break;
		
		case 6:
			return 823;
			break;
		
		case 7:
			return 824;
			break;
		
		case 8:
			return 825;
			break;
		
		case 9:
			return 826;
			break;
		
		case 10:
			return 827;
			break;
		
		case 11:
			return 828;
			break;
		
		case 12:
			return 829;
			break;
		
		case 13:
			return 830;
			break;
		
		case 14:
			return 831;
			break;
		
		case 15:
			return 833;
			break;
		
		case 16:
			return 834;
			break;
		
		case 17:
			return 835;
			break;
		
		case 18:
			return 836;
			break;
		
		case 19:
			return 837;
			break;
		
		case 20:
			return 838;
			break;
		
		case 21:
			return 839;
			break;
		
		case 22:
			return 840;
			break;
		
		case 23:
			return 841;
			break;
		
		case 24:
			return 842;
			break;
		
		case 25:
			return 843;
			break;
		
		case 26:
			return 844;
			break;
		
		case 27:
			return 845;
			break;
		
		case 28:
			return 846;
			break;
		
		case 29:
			return 847;
			break;
		
		case 30:
			return 848;
			break;
		
		case 31:
			return 849;
			break;
		
		case 32:
			return 850;
			break;
		
		case 33:
			return 851;
			break;
		
		case 34:
			return 852;
			break;
		
		case 35:
			return 853;
			break;
		
		case 36:
			return 854;
			break;
		
		case 37:
			return 855;
			break;
		
		case 38:
			return 856;
			break;
		
		case 39:
			return 857;
			break;
		
		case 40:
			return 861;
			break;
		
		case 41:
			return 862;
			break;
		
		case 42:
			return 863;
			break;
		
		case 43:
			return 864;
			break;
		
		case 44:
			return 3422;
			break;
		
		default:
			break;
	}
	return 3438;
}

int func_330()
{
	return Global_24946;
}

void func_331(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_90861.f_1279[iParam0]), iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_330() == 0)
		{
			uVar0 = func_328(func_329(iParam0), -1, 0);
			unk_0xF3148AAF69AF9CBC(&uVar0, iParam1);
			func_326(func_329(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xF3148AAF69AF9CBC(&(Global_98931.f_668[iParam0]), iParam1);
	}
}

void func_332(int iParam0)
{
	if (Global_90861.f_17[iParam0])
	{
		func_331(iParam0, 10, 1);
		func_331(iParam0, 19, 1);
	}
}

bool func_333(int iParam0)
{
	return func_335(iParam0, 5, 1);
}

int func_334(int iParam0)
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

int func_335(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x236D8AD7EE179F46(Global_90861.f_1279[iParam0], iParam1);
	}
	else if (unk_0x1C6DF6AD69BE853E())
	{
		if (func_330() == 0)
		{
			return unk_0x236D8AD7EE179F46(func_328(func_329(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x236D8AD7EE179F46(Global_98931.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_336(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_337())
	{
		unk_0xE6E19E3BBABCBC24(0);
		unk_0xC69E84EBBD7166E6(&(Global_90809.f_20), 2);
		unk_0xD338B0444EFB8C65(1);
		if (unk_0x7DF7DE8C76D7F346(unk_0x1329891157A54C63()))
		{
			unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 0, 0);
		}
		Global_90805 = { Param0 };
		Global_90808 = fParam3;
		Global_90804 = 1;
		if (iParam4 == 1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_90809.f_20), 14);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(Global_90809.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_90809.f_20), 24);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(Global_90809.f_20), 24);
		}
		func_264(1);
	}
}

int func_337()
{
	if (Global_90809 == 10 || Global_90809 == 9)
	{
		return 1;
	}
	return 0;
}

void func_338()
{
	func_353();
	func_351();
	func_344();
	func_341();
	func_339();
}

void func_339()
{
	iLocal_1047[0] = 0;
	iLocal_1047[1] = 0;
	iLocal_1047[2] = 0;
	Local_687[0 /*8*/] = { func_340("FP1_WANTM", "FP1_LOSTM", "FP1_THEREM", "FP1_CHATFM", "", "FP1_CHATTM") };
	Local_687[1 /*8*/] = { func_340("FP1_WANTT", "FP1_LOSTT", "FP1_THERET", "FP1_CHATFM", "FP1_CHATFT", "") };
	Local_687[2 /*8*/] = { func_340("FP1_WANTF", "FP1_LOSTF", "FP1_THEREF", "", "FP1_CHATFT", "FP1_CHATTM") };
}

struct<8> func_340(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	struct<8> Var0;
	
	Var0 = 6;
	Var0[0] = sParam0;
	Var0[1] = sParam1;
	Var0[5] = sParam2;
	Var0[2] = sParam3;
	Var0[3] = sParam4;
	Var0[4] = sParam5;
	return Var0;
}

void func_341()
{
	Local_133[0 /*25*/] = { func_343(1203.146f, -337.3543f, 67.9314f, 1245.118f, -348.5059f, 68.2099f, 253.1908f, 0) };
	func_342(&(Local_133[0 /*25*/]), Local_823, 0, 15f, 5f, 270f, 3, 1192.006f, -631.4703f, 61.6972f, 10f, 10f, 5f);
	Local_133[1 /*25*/] = { func_343(1215.084f, -339.3139f, 68.1323f, 964.9214f, -555.212f, 58.0211f, 39.645f, 0) };
	func_342(&(Local_133[1 /*25*/]), Local_823, 0, 15f, 10f, 270f, 3, 1103.29f, -764.532f, 56.633f, 10f, 10f, 5f);
	Local_133[2 /*25*/] = { func_343(1179.533f, -361.3286f, 67.4559f, 929.8701f, -619.4534f, 56.4632f, 164.3631f, 0) };
	func_342(&(Local_133[2 /*25*/]), Local_823, 0, 15f, 10f, 270f, 3, 933.3745f, -615.9453f, 56.3041f, 10f, 10f, 5f);
	Local_133[3 /*25*/] = { func_343(1107.674f, -364.0569f, 65.9581f, 1099.266f, -775.0809f, 57.3525f, 178.2038f, 0) };
	func_342(&(Local_133[3 /*25*/]), Local_823, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_133[4 /*25*/] = { func_343(1069.279f, -393.5795f, 66.0262f, 1065.364f, -389.9561f, 66.1504f, 220.1611f, 0) };
	func_342(&(Local_133[4 /*25*/]), Local_823, 0, 5f, 30f, 128.1732f, 3, 1069.718f, -393.9912f, 66.0261f, 10f, 10f, 5f);
	Local_133[5 /*25*/] = { func_343(1031.673f, -424.599f, 64.5439f, 1027.179f, -420.6656f, 64.6268f, 178.2038f, joaat("p_binbag_01_s")) };
	func_342(&(Local_133[5 /*25*/]), 1028.201f, -428.3677f, 64.3571f, 1, 15f, 2f, 128.3915f, 1, 1027.179f, -420.6656f, 64.6268f, 10f, 10f, 5f);
	Local_133[6 /*25*/] = { func_343(942.1528f, -488.8956f, 59.3129f, 932.0198f, -489.3886f, 58.9212f, 202.5785f, joaat("p_binbag_01_s")) };
	func_342(&(Local_133[6 /*25*/]), 930.7186f, -494.9253f, 58.616f, 1, 15f, 2f, 119.6518f, 1, 952.9781f, -482.5082f, 60.0003f, 10f, 10f, 5f);
	Local_133[7 /*25*/] = { func_343(868.2734f, -529.5473f, 56.2071f, 865.0042f, -522.4746f, 56.3363f, 241.9711f, joaat("p_binbag_01_s")) };
	func_342(&(Local_133[7 /*25*/]), 865.2349f, -535.8759f, 56.1574f, 1, 15f, 2f, 162.7219f, 1, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_133[8 /*25*/] = { func_343(874.8076f, -571.2073f, 56.2987f, 983.125f, -541.9902f, 58.5929f, 49.7653f, 0) };
	func_342(&(Local_133[8 /*25*/]), Local_823, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_133[9 /*25*/] = { func_343(931.5218f, -614.2144f, 56.3119f, 928.6471f, -620.711f, 56.4611f, -108.06f, joaat("p_binbag_01_s")) };
	func_342(&(Local_133[9 /*25*/]), 940.4086f, -622.1787f, 56.3003f, 1, 15f, 2f, 228.1176f, 1, 918.6716f, -602.9258f, 56.3395f, 10f, 10f, 5f);
	Local_133[10 /*25*/] = { func_343(964.9758f, -645.9614f, 56.4465f, 927.1033f, -575.4162f, 56.5329f, 55.9317f, 0) };
	func_342(&(Local_133[10 /*25*/]), Local_823, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_133[11 /*25*/] = { func_343(983.4438f, -683.1442f, 56.4087f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_342(&(Local_133[11 /*25*/]), Local_823, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_133[12 /*25*/] = { func_343(1016.261f, -731.546f, 56.555f, 1011.801f, -733.0652f, 56.7435f, 314.5626f, joaat("p_binbag_01_s")) };
	func_342(&(Local_133[12 /*25*/]), 1020.251f, -736.815f, 56.6235f, 1, 15f, 2f, 220.7804f, 1, 1011.238f, -724.7085f, 56.5183f, 10f, 10f, 5f);
	Local_133[13 /*25*/] = { func_343(1164.126f, -762.2866f, 56.6656f, 1099.342f, -775.4273f, 57.3525f, 177.5729f, 0) };
	func_342(&(Local_133[13 /*25*/]), Local_823, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_133[14 /*25*/] = { func_343(1199.339f, -678.0995f, 59.9051f, 1205.415f, -672.1282f, 60.1445f, 105.2374f, 0) };
	func_342(&(Local_133[14 /*25*/]), Local_823, 0, 15f, 2f, 12.1103f, 3, 1199.339f, -678.0995f, 59.9051f, 10f, 10f, 5f);
	Local_133[15 /*25*/] = { func_343(1183.445f, -582.9476f, 63.0962f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_342(&(Local_133[15 /*25*/]), Local_823, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_133[16 /*25*/] = { func_343(1192.479f, -485.1086f, 64.7195f, 1264.359f, -719.084f, 63.328f, 65.0519f, 0) };
	func_342(&(Local_133[16 /*25*/]), Local_823, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_133[17 /*25*/] = { func_343(1212.693f, -400.0532f, 67.0971f, 1284.109f, -676.728f, 65.0225f, 69.9898f, 0) };
	func_342(&(Local_133[17 /*25*/]), Local_823, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_133[18 /*25*/] = { func_343(1114.573f, -232.3706f, 68.0949f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_342(&(Local_133[18 /*25*/]), Local_823, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	iLocal_829 = 19;
}

void func_342(var uParam0, struct<3> Param1, int iParam4, float fParam5, float fParam6, float fParam7, int iParam8, struct<3> Param9, struct<3> Param12)
{
	uParam0->f_3 = { Param1 };
	uParam0->f_6 = fParam5;
	uParam0->f_7 = fParam6;
	uParam0->f_8 = fParam7;
	uParam0->f_9 = iParam4;
	uParam0->f_10 = iParam8;
	uParam0->f_11 = { Param9 };
	uParam0->f_14 = { Param12 };
}

struct<25> func_343(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
{
	struct<25> Var0;
	
	Var0.f_9 = 1;
	Var0.f_10 = 3;
	Var0 = { Param0 };
	Var0.f_19 = { Param3 };
	Var0.f_22 = fParam6;
	Var0.f_23 = iParam7;
	return Var0;
}

void func_344()
{
	struct<3> Var0[6];
	
	Var0[0 /*3*/] = { 1251.308f, -400.6231f, 68.0926f };
	Var0[1 /*3*/] = { 1183.993f, -403.3443f, 66.8734f };
	Var0[2 /*3*/] = { 1161.54f, -372.6073f, 66.6034f };
	Var0[3 /*3*/] = { 1167.644f, -273.7987f, 67.9705f };
	Var0[4 /*3*/] = { 1252.362f, -247.353f, 77.5631f };
	Var0[5 /*3*/] = { 1330.062f, -341.0342f, 100.3476f };
	func_345(&Var0, 6);
}

void func_345(var uParam0, int iParam1)
{
	int iVar0;
	
	func_350(&uLocal_712);
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		func_349(&uLocal_712, *(uParam0[iVar0 /*3*/]));
		iVar0++;
	}
	func_348(&uLocal_712);
	func_346(&uLocal_764, &uLocal_712, 50f);
}

void func_346(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	
	if (uParam1->f_46 < 3)
	{
	}
	iVar0 = (uParam1->f_46 - 1);
	iVar1 = 0;
	iVar2 = 1;
	uParam0->f_46 = uParam1->f_46;
	while (iVar1 < uParam1->f_46)
	{
		Var3 = { *(uParam1[iVar1 /*3*/]) - *(uParam1[iVar0 /*3*/]) };
		Var6 = { *(uParam1[iVar2 /*3*/]) - *(uParam1[iVar1 /*3*/]) };
		Var3 = { Var3 / FtoV(unk_0x71D93B57D07F9804(((Var3.f_0 * Var3.f_0) + (Var3.f_1 * Var3.f_1)))) };
		Var6 = { Var6 / FtoV(unk_0x71D93B57D07F9804(((Var6.f_0 * Var6.f_0) + (Var6.f_1 * Var6.f_1)))) };
		Var9 = { Var3 - Var6 };
		Var9 = { Var9 / FtoV(unk_0x71D93B57D07F9804(((Var9.f_0 * Var9.f_0) + (Var9.f_1 * Var9.f_1)))) };
		if (func_347(uParam1, *(uParam1[iVar1 /*3*/]) + Var9))
		{
			Var9 = { -Var9 };
		}
		*(uParam0[iVar1 /*3*/]) = { *(uParam1[iVar1 /*3*/]) + Var9 * Vector(fParam2, fParam2, fParam2) };
		iVar0 = iVar1;
		iVar1++;
		iVar2 = (iVar2 + 1 % uParam1->f_46);
	}
}

bool func_347(var uParam0, struct<2> Param1, Vector3 vParam3)
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

void func_348(var uParam0)
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

void func_349(var uParam0, struct<3> Param1)
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

void func_350(var uParam0)
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

void func_351()
{
	Local_839 = { func_352(1200.61f, -344.2721f, 68.0424f, 269.2015f, joaat("s_m_y_garbage")) };
	Local_853 = { func_352(1202.42f, -341.6034f, 67.9378f, 273.1125f, joaat("s_m_y_garbage")) };
}

struct<14> func_352(struct<3> Param0, float fParam3, int iParam4)
{
	struct<14> Var0;
	
	Var0.f_1 = { Param0 };
	Var0.f_4 = fParam3;
	Var0.f_5 = iParam4;
	return Var0;
}

void func_353()
{
	Local_867 = { func_354(1203.146f, -337.3543f, 67.9314f, 189.7047f, joaat("trash")) };
}

struct<6> func_354(struct<3> Param0, float fParam3, int iParam4)
{
	struct<6> Var0;
	
	Var0.f_1 = { Param0 };
	Var0.f_4 = fParam3;
	Var0.f_5 = iParam4;
	return Var0;
}

void func_355()
{
	func_233(1);
	func_366(1);
	unk_0xB5A91586385F755B(joaat("trash"), 0);
	unk_0xB5A91586385F755B(joaat("towtruck"), 0);
	unk_0xB5A91586385F755B(joaat("s_m_y_garbage"), 0);
	func_61();
	func_365();
	func_364();
	func_356(0);
	unk_0xC23A229F78DAD92A();
}

void func_356(bool bParam0)
{
	struct<3> Var0;
	
	if (bParam0)
	{
	}
	unk_0x034205BA180B4E43(unk_0x1329891157A54C63(), 1, 0);
	unk_0xC904C30D9B70F037("DRIVE", 1);
	unk_0xC904C30D9B70F037("WORLD_VEHICLE_ATTRACTOR", 1);
	unk_0xC904C30D9B70F037("WORLD_VEHICLE_DRIVE_PASSENGERS", 1);
	unk_0xC904C30D9B70F037("WORLD_VEHICLE_DRIVE_SOLO", 1);
	func_37();
	func_363();
	func_362();
	func_361();
	func_360();
	func_215();
	if (bParam0)
	{
		if (unk_0x86CCCD2FAE9D5E65(iLocal_873))
		{
			if (unk_0x86CCCD2FAE9D5E65(unk_0x81873881071CD9FE()))
			{
				if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
				{
					if (unk_0x04C377C10639B842(unk_0x81873881071CD9FE(), iLocal_873, 0))
					{
						Var0 = { unk_0xB6AE0DAE06D56288(unk_0x81873881071CD9FE(), 1) };
						unk_0xB067093BBAF0A747(unk_0x81873881071CD9FE(), Var0, 1, 0, 0, 1);
					}
				}
			}
		}
		func_358();
		unk_0xD1C83BD797927DD5();
		func_2();
	}
	else
	{
		func_357();
	}
	unk_0xD327B3F9D26CFBBC(0);
	func_138(&uLocal_670, 0, 0);
	if (unk_0x42E36F2D658EB2FF(uLocal_822))
	{
		unk_0xFEBF3DDE5E4DC5C5(0, 0, 3000, 1, 0, 0);
		unk_0x35B958B469415A23(uLocal_822, 0);
	}
}

void func_357()
{
	func_3();
	func_6(&Local_867);
	func_6(&uLocal_874);
	func_6(&iLocal_873);
	func_5(&Local_839, 1, 0, 1);
	func_5(&Local_853, 1, 0, 1);
	func_6(&uLocal_875);
}

void func_358()
{
	Global_14559 = 0;
	func_359();
}

void func_359()
{
	unk_0xE1BF98267C70D822();
	Global_16704 = 0;
	if (unk_0xE1772957381F609F())
	{
		unk_0x9E95048D8C96C1EA(false);
		Global_15693 = 6;
	}
}

void func_360()
{
}

void func_361()
{
	if (iLocal_836)
	{
		unk_0x0EA17CCD2F60A8C4(joaat("trash"));
	}
}

void func_362()
{
}

void func_363()
{
	unk_0x887F4488DA99FD21(Local_867.f_5);
}

void func_364()
{
	func_323(21, 1, 0);
}

void func_365()
{
	Global_86997 = 0;
}

void func_366(int iParam0)
{
	Global_88448 = iParam0;
}

void func_367()
{
	int iVar0;
	
	if (unk_0x06D4A1BE3DF77306("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_98931.f_7699 || func_32(0))
	{
		if (!func_368())
		{
			iVar0 = func_31();
			if (iVar0 != -1)
			{
				if (!func_19(iVar0))
				{
					return;
				}
				unk_0xF3148AAF69AF9CBC(&(Global_81894[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_24();
		}
	}
}

int func_368()
{
	if (((Global_90809 == 13 || Global_90809 == 10) || Global_90809 == 11) || Global_90809 == 12)
	{
		return 0;
	}
	return 1;
}

