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
	bool bLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	struct<4> Local_38[10];
	bool bLocal_79 = 0;
	var uLocal_80 = 0;
	int iLocal_81 = 0;
	struct<27> Local_82 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_109 = 0;
	var uLocal_110 = 0;
	struct<11> Local_111[2];
	struct<25> Local_134[21];
	float fLocal_660 = 0f;
	int iLocal_661 = 0;
	bool bLocal_662 = 0;
	bool bLocal_663 = 0;
	bool bLocal_664 = 0;
	bool bLocal_665 = 0;
	int iLocal_666 = 0;
	struct<3> Local_667 = { 0, 0, 0 } ;
	int iLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = -1;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 1000;
	var uLocal_681 = 1000;
	var uLocal_682 = 0;
	int iLocal_683 = 0;
	int iLocal_684 = 0;
	int iLocal_685 = 0;
	int iLocal_686 = 0;
	var uLocal_687 = 0;
	struct<8> Local_688[3];
	var uLocal_713 = 15;
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
	var uLocal_764 = 0;
	var uLocal_765 = 15;
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
	var uLocal_816 = 0;
	int iLocal_817 = 0;
	char* sLocal_818 = NULL;
	char* sLocal_819 = NULL;
	int iLocal_820 = 0;
	int iLocal_821 = 0;
	int iLocal_822 = 0;
	var uLocal_823 = 0;
	struct<3> Local_824 = { 0, 0, 0 } ;
	struct<3> Local_827 = { 0, 0, 0 } ;
	int iLocal_830 = 0;
	int iLocal_831 = 0;
	int iLocal_832 = 0;
	bool bLocal_833 = 0;
	int iLocal_834 = 0;
	int iLocal_835 = 0;
	int iLocal_836 = 0;
	int iLocal_837 = 0;
	int iLocal_838 = 0;
	int iLocal_839 = 0;
	struct<14> Local_840 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_854 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_868 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	int iLocal_877 = 0;
	char[] cLocal_878[8] = 0;
	var uLocal_879 = 16;
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
	var uLocal_1043 = 0;
	char[] cLocal_1044[8] = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	int iLocal_1048[3] = { 0, 0, 0 };
	int iLocal_1052 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_36 = 3;
	iLocal_81 = 21;
	fLocal_660 = -1f;
	Local_667 = { 0f, 0f, 0f };
	iLocal_670 = -1;
	sLocal_819 = "FBIPRA";
	Local_824 = { 0f, 0f, 0f };
	Local_827 = { 1381.472f, -2072.245f, 50.9981f };
	cLocal_878 = "FIBP1AU";
	iLocal_1052 = -1;
	unk_0x5B0FC38A6C315E32(1);
	if (unk_0x24862A9CDC8F8874(19))
	{
		sLocal_818 = 0;
		func_368();
		func_356();
	}
	func_339();
	if (func_338())
	{
		func_337(918.8851f, -269.789f, 67.2145f, 68.2149f, 1, 0);
	}
	func_323();
	while (true)
	{
		unk_0xBB5777EE55D3B041("M_TrT", 0);
		if (func_322(unk_0xC8B93D94F8954288()))
		{
			func_318();
			func_314();
			unk_0x12CC67656ED7F3DF(unk_0xA34E7C2A5118D638());
			unk_0x4E1A302FE77F5B7A(0.8f);
			switch (iLocal_683)
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
			if (iLocal_683 != 5)
			{
				if (iLocal_683 >= 0 && !bLocal_28)
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
	
	switch (iLocal_684)
	{
		case 0:
			unk_0x7846F09C04C34C46();
			unk_0x9F4AA6F234E8A860(1);
			func_37();
			if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
			{
				iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
				if (func_36(iVar0) && unk_0x6D5BB810CC209E15(iVar0) == joaat("towtruck"))
				{
					func_35(iVar0, 2);
				}
			}
			if (!unk_0xB8A06E7E729EED0A(sLocal_818))
			{
				func_33(sLocal_818);
			}
			else
			{
				func_18(0);
			}
			iLocal_684 = 1;
			break;
		
		case 1:
			if (func_17())
			{
				if (func_16())
				{
					func_11();
				}
				func_2();
				unk_0x98371F41D43CDFA9(unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 30f, 1, 0, 0, 0);
				func_356();
			}
			break;
	}
}

void func_2()
{
	func_9(&Local_868);
	func_9(&uLocal_875);
	func_9(&iLocal_874);
	func_8(&Local_840);
	func_8(&Local_854);
	func_9(&uLocal_876);
	func_3();
}

void func_3()
{
	func_7(&(Local_111[0 /*11*/].f_4));
	func_7(&(Local_111[1 /*11*/].f_4));
	func_6(&iLocal_109);
	func_5(&(Local_111[0 /*11*/]), 1, 0, 1);
	func_5(&(Local_111[1 /*11*/]), 1, 0, 1);
	func_4(&(Local_134[iLocal_661 /*25*/].f_17), 0);
	unk_0xC2389B725A8A1CD3(uLocal_80);
	unk_0x3ECF1E41E6ED71D8("missfbi4prepp1");
	unk_0xA6045DDE5A17C533("missfbi4prepp1_garbageman");
}

void func_4(var uParam0, bool bParam1)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (unk_0xE33A9405F8300B78(*uParam0))
		{
			unk_0xB81176DFD2611E8B(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0xC2BB205CCEB68102(uParam0);
		}
		else
		{
			unk_0xFA8BA151FBE4A15B(*uParam0);
		}
	}
}

void func_5(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (!unk_0x2DC9BA2299B45EA6(*uParam0))
		{
			unk_0x05BE583DF8C6A617(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xEC466B3D55749458(*uParam0);
			}
			unk_0xF1A02DDEC7E15D6E(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xAAD662D7E0D59F4C(*uParam0, false);
			}
		}
		unk_0x459A6F82E024C891(uParam0);
	}
}

void func_6(var uParam0)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		unk_0xB6900B8CB0ABBD2B(*uParam0);
		if (unk_0xD28A89C669EAD2E4(*uParam0) && unk_0x1F59F772AA90087D(*uParam0, 1))
		{
			unk_0xEF84021B2AB5E334(uParam0);
		}
	}
}

void func_7(int iParam0)
{
	if (unk_0x6B4865E08E90ACC5(*iParam0))
	{
		unk_0x706ABF1139F36482(*iParam0, 0);
		unk_0x5356E82C1E5E0C44(iParam0);
	}
}

void func_8(int iParam0)
{
	if (unk_0x95CCECA3948CFE7B(*iParam0))
	{
		if (!unk_0xB6900B8CB0ABBD2B(*iParam0))
		{
			unk_0x05BE583DF8C6A617(*iParam0, 0);
		}
		if (!unk_0xD28A89C669EAD2E4(*iParam0))
		{
			unk_0xFD816D0E738EB817(*iParam0, 1, 0);
		}
		unk_0x26B3B761603F5232(iParam0);
	}
}

void func_9(var uParam0)
{
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (!unk_0xD28A89C669EAD2E4(*uParam0))
		{
			unk_0xFD816D0E738EB817(*uParam0, 1, 0);
		}
		if (func_36(*uParam0))
		{
			if (unk_0xD28A89C669EAD2E4(*uParam0) && unk_0x1F59F772AA90087D(*uParam0, 1))
			{
				if (func_10(unk_0xC8B93D94F8954288()))
				{
					if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), *uParam0, 0))
					{
						unk_0xEF84021B2AB5E334(uParam0);
						return;
					}
				}
				unk_0x95F5F15D238A7F1C(uParam0);
			}
		}
		else
		{
			if (func_10(unk_0xC8B93D94F8954288()))
			{
				if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), *uParam0, 0))
				{
					unk_0xEF84021B2AB5E334(uParam0);
					return;
				}
			}
			unk_0x95F5F15D238A7F1C(uParam0);
		}
	}
}

int func_10(int iParam0)
{
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		if (!unk_0xB6900B8CB0ABBD2B(iParam0))
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
	func_13(&(Global_95323.f_2311), Param0, fParam3);
}

void func_13(var uParam0, struct<3> Param1, var uParam4)
{
	*uParam0 = { Param1 };
	uParam0->f_6 = uParam4;
}

void func_14(struct<3> Param0, float fParam3)
{
	if (func_15(Global_69557, 0f, 0f, 0f, 0))
	{
		Global_69557 = { Param0 };
		Global_69560 = fParam3;
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
	if (Global_91106 == 7)
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
	if (Global_91106 == 7 || Global_91106 == 8)
	{
		return 1;
	}
	return 0;
}

void func_18(int iParam0)
{
	int iVar0;
	
	if (Global_100976.f_7719 || func_32(0))
	{
		iVar0 = func_31();
		if (!func_19(iVar0))
		{
			return;
		}
		unk_0x59A0729D503ED758(&(Global_82191[iVar0 /*5*/].f_1), 5);
		Global_91142 = iParam0;
	}
}

int func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_24();
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		unk_0xE3BB289E1C1F168E(5000);
	}
	iVar0 = Global_82191[iParam0 /*5*/];
	iVar1 = Global_69586.f_109[iVar0 /*4*/];
	func_23(iVar1, 1);
	unk_0x56A28F32E01DD318(unk_0xA34E7C2A5118D638());
	unk_0x5E70D5A5F14A2E17(unk_0xA34E7C2A5118D638());
	func_20(&(Global_100976.f_1770.f_539), iVar1);
	if (Global_85614 == Global_91143)
	{
		Global_100976.f_7719.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xDCC86F723E82125E(Global_82227[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			unk_0x0F976C80D8B6703E(0);
		}
	}
	Global_100976.f_7719.f_330[iVar1 /*6*/].f_2++;
	Global_85614 = Global_91143;
	if (iParam0 == -1)
	{
		if (Global_100976.f_7719)
		{
		}
		return 0;
	}
	if (unk_0xDCC86F723E82125E(Global_82191[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xDCC86F723E82125E(Global_82191[iParam0 /*5*/].f_1, 5))
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
		iVar1 = Global_100976.f_17167[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xDCC86F723E82125E(Global_100976.f_7719.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_22(Global_100976.f_17167[iVar0], &Var2, &fVar5))
			{
				Global_100976.f_17167[iVar0] = 318;
				func_21(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_88829[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_9 = 0f;
				Global_88829[iVar0 /*29*/].f_12 = 0f;
				Global_88829[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_10 = 0f;
				Global_88829[iVar0 /*29*/].f_13 = 0f;
				Global_88829[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_11 = 0f;
				Global_88829[iVar0 /*29*/].f_14 = 0f;
				Global_88829[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_26 = 0f;
				Global_88829[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_27 = 0f;
				Global_88829[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_88829[iVar0 /*29*/].f_28 = 0f;
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
			Global_85424[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85424[iParam0 /*2*/] = 0;
	}
}

void func_24()
{
	Global_91141 = 1;
	if (unk_0x01928D5922397075(unk_0xA34E7C2A5118D638(), 1))
	{
		if (unk_0xB8A06E7E729EED0A(&Global_69549))
		{
			switch (func_25())
			{
				case 0:
					StringCopy(&Global_69549, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_69549, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_69549, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_69553, "", 16);
		}
		Global_91141 = 0;
	}
	else if (!unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0xB8A06E7E729EED0A(&Global_69549))
		{
			switch (func_25())
			{
				case 0:
					StringCopy(&Global_69549, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_69549, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_69549, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_69553, "", 16);
		}
		Global_91141 = 0;
		unk_0x59A0729D503ED758(&(Global_91106.f_20), 25);
	}
}

int func_25()
{
	func_26();
	return Global_100976.f_1770.f_539.f_3549;
}

void func_26()
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
	{
		if (func_30(Global_100976.f_1770.f_539.f_3549) != unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()))
		{
			iVar0 = func_29(unk_0xC8B93D94F8954288());
			if (func_28(iVar0) && (!func_27(14) || Global_99928))
			{
				if (Global_100976.f_1770.f_539.f_3549 != iVar0 && func_28(Global_100976.f_1770.f_539.f_3549))
				{
					Global_100976.f_1770.f_539.f_3550 = Global_100976.f_1770.f_539.f_3549;
				}
				Global_100976.f_1770.f_539.f_3551 = iVar0;
				Global_100976.f_1770.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_100976.f_1770.f_539.f_3549 != 145)
			{
				Global_100976.f_1770.f_539.f_3551 = Global_100976.f_1770.f_539.f_3549;
			}
			return;
		}
	}
	Global_100976.f_1770.f_539.f_3549 = 145;
}

bool func_27(int iParam0)
{
	return Global_35700 == iParam0;
}

bool func_28(int iParam0)
{
	return iParam0 < 3;
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		iVar1 = unk_0x6D5BB810CC209E15(iParam0);
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
		return Global_100976.f_32519[iParam0 /*29*/];
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
		if (unk_0xDCC86F723E82125E(Global_82191[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_32(bool bParam0)
{
	if (!bParam0 && unk_0xCBC8FFE55DC722B5(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xDCC86F723E82125E(Global_69565, 0);
}

void func_33(char* sParam0)
{
	func_34(sParam0);
	func_18(0);
}

void func_34(char* sParam0)
{
	if (!unk_0xB8A06E7E729EED0A(sParam0))
	{
		if (unk_0x71F27A2B1B0287CD(sParam0) <= 16)
		{
			StringCopy(&Global_69549, sParam0, 16);
			StringCopy(&Global_69553, "", 16);
			if (unk_0xA0CEFA7178F5CDE5())
			{
				unk_0xF7588C28E8908E72();
			}
		}
	}
}

void func_35(int iParam0, int iParam1)
{
	Global_91106.f_22[iParam1] = iParam0;
}

int func_36(int iParam0)
{
	if (func_10(iParam0))
	{
		if (unk_0x5D42322C7DB888D0(iParam0, 0))
		{
			if (!unk_0x79E944054F6C9DCD(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_37()
{
	func_7(&iLocal_821);
}

void func_38()
{
	int iVar0;
	
	switch (iLocal_684)
	{
		case 0:
			iLocal_684 = 1;
			break;
		
		case 1:
			if (!func_100(unk_0xC8B93D94F8954288(), Local_827, 270f))
			{
				iLocal_684 = 2;
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
				unk_0x7846F09C04C34C46();
			}
			if (iVar0 == 0)
			{
				if (func_65(&uLocal_687, &cLocal_1044, &uLocal_879))
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
			iLocal_684 = 2;
			break;
	}
}

void func_39(int iParam0, int iParam1, int iParam2)
{
	func_41(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		unk_0x0F9FDCEB321235AB(0f, 1065353216);
		unk_0x8C67D2FDE360FBCA(0f);
	}
	if (iParam1 == 1)
	{
		func_40(500, 0);
	}
}

void func_40(int iParam0, bool bParam1)
{
	if (unk_0xD5DFCA69ACAA20E3() || unk_0xE71FCE10773CF7B0())
	{
		if (!unk_0x2230725B418B1240())
		{
			unk_0x31E6EB2040318451(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0xB66DD474AA9E764E())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x1A96BAEAC664567A();
	unk_0xCC247C9AD99422AF(uVar0, 0);
	unk_0x6C1CBBF18B93CB8E(uVar0, iParam3, 0);
	func_42(0, 1, 0, 0);
	if (iParam2 == 1)
	{
		unk_0xB7709513BF7C1AC0(1);
		unk_0xB1DF6C0157E453DE(1);
	}
	unk_0x9F4AA6F234E8A860(1);
	if (iParam0 == 1)
	{
		unk_0xFF14BCEFC40262BF(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_37 != 0 && iLocal_37 != joaat("object")) && iLocal_37 != joaat("gadget_parachute"))
		{
			if (func_10(unk_0xC8B93D94F8954288()))
			{
				if (unk_0xD6B965E92DB098CE(unk_0xC8B93D94F8954288(), iLocal_37, 0))
				{
					unk_0x80423B6A45BF05DA(unk_0xC8B93D94F8954288(), iLocal_37, 0);
				}
			}
		}
	}
	if (func_322(unk_0xC8B93D94F8954288()))
	{
		unk_0x1D9B9237CA276DAD(unk_0xC8B93D94F8954288(), 0, 0);
	}
}

void func_42(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xD693CD4BF91071EA(unk_0xA34E7C2A5118D638());
		unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 1);
		unk_0x8F9941C14FA3BF97(unk_0xA34E7C2A5118D638(), 1);
		func_50(1);
		unk_0xC0E7FF19962AE47A();
		unk_0x31592941AC9991FE();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0x44E93B894936152F())
			{
				unk_0xB518E9C8553B1D2B(0);
			}
			if (!func_49())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_48(1, iParam3, iParam2, 0);
		Global_55665 = 1;
		Global_67971 = 1;
		Global_69315 = 1;
	}
	else
	{
		func_50(0);
		unk_0x11D0AD0D13C88D1A();
		Global_55665 = 0;
		if (bParam1)
		{
			unk_0x48D86334348F315A();
		}
		unk_0xBFDE8C755DF4A1ED(unk_0xA34E7C2A5118D638(), 0);
		unk_0x8F9941C14FA3BF97(unk_0xA34E7C2A5118D638(), 0);
		func_48(0, iParam3, iParam2, 0);
		if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && !func_43(unk_0xA34E7C2A5118D638()))
		{
			unk_0xEE6504C7ECC425AB(unk_0xC8B93D94F8954288(), 0);
		}
		Global_69315 = 0;
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
		if (iParam0 == unk_0xA34E7C2A5118D638())
		{
			return 1;
		}
	}
	if (unk_0xDCC86F723E82125E(Global_2417071[iParam0 /*306*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_44()
{
	return unk_0xDCC86F723E82125E(Global_2359301, 3);
}

bool func_45(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xA34E7C2A5118D638())
	{
		bVar0 = func_46(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1587175[iParam0 /*410*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xDF73DA5E2287C499(iParam0))
		{
			bVar0 = unk_0x07CBE0ED3114C7D8(iParam0) == 8;
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
	if (Global_1315889[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312740[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_47()
{
	return Global_1312746;
}

int func_48(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x68B0A67658F2D9C2())
	{
		if (unk_0x751EF148528839D5() != iParam0 && uParam2)
		{
			unk_0xE3A1C9182C52F4F2(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_49()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_50(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&Global_2283, 13);
	}
	else
	{
		unk_0x77621132305B133B(&Global_2283, 13);
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
	if (Global_100976.f_6322.f_136 < 9)
	{
		Var0.f_0 = uParam0;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_9 = iParam3;
		if (Global_100976.f_6322.f_911 == Var0.f_0)
		{
			Global_100976.f_6322.f_911 = -1;
		}
		Var0.f_3 = func_53(iParam4);
		Var0.f_5 = iParam9;
		Var0.f_4 = (unk_0x693EBB4F13506457() + iParam8);
		Var0.f_1 = iParam12;
		iVar15 = 0;
		unk_0x59A0729D503ED758(&iVar15, iParam5);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam6;
		Var0.f_14 = iParam7;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		unk_0x59A0729D503ED758(&(Var0.f_1), 0);
		unk_0x59A0729D503ED758(&(Var0.f_1), 13);
		unk_0x77621132305B133B(&(Var0.f_1), 1);
		if (iParam4 == 0)
		{
			unk_0x59A0729D503ED758(&(Var0.f_1), 10);
		}
		Global_100976.f_6322[Global_100976.f_6322.f_136 /*15*/] = { Var0 };
		Global_100976.f_6322.f_136++;
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
	while (iVar0 < Global_100976.f_6322.f_136)
	{
		if (unk_0xDCC86F723E82125E(Global_100976.f_6322[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_100976.f_6322[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_100976.f_6322[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_100976.f_6322.f_764)
	{
		if (unk_0xDCC86F723E82125E(Global_100976.f_6322.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_100976.f_6322.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_100976.f_6322.f_919[iParam0] = iVar1;
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
	unk_0x7846F09C04C34C46();
	func_59();
	func_57(0, 0);
	func_356();
}

void func_57(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55661)
	{
		Global_55661 = iParam1;
	}
	if (bParam0)
	{
		if ((func_32(0) && Global_69563.f_1 == 1) && func_58(Global_69563))
		{
		}
		else
		{
			Global_55659 = 1;
		}
	}
	if (Global_100976.f_7719 || func_32(0))
	{
		iVar0 = func_31();
		iVar1 = Global_82191[iVar0 /*5*/];
		uVar2 = Global_69586.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_100976.f_7719)
			{
			}
			return;
		}
		if (unk_0xDCC86F723E82125E(Global_82191[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xDCC86F723E82125E(Global_82191[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x59A0729D503ED758(&(Global_82191[iVar0 /*5*/].f_1), 4);
		unk_0x59A0729D503ED758(&Global_69565, 1);
		Global_69581 = uVar2;
		Global_69582 = unk_0x693EBB4F13506457();
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
	Global_14578 = 0;
	func_60();
}

void func_60()
{
	unk_0xE9A2B98CC2F095D6();
	Global_16723 = 0;
	if ((unk_0x44E93B894936152F() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xB518E9C8553B1D2B(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x2964A62922189B93())
	{
		unk_0xB518E9C8553B1D2B(1);
		Global_15712 = 6;
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
	
	if (Global_55667)
	{
	}
	Global_55667 = 0;
	if (bParam0)
	{
		Global_55668 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67754)
		{
			if (Global_55884[Global_67755[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_67755[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_67754)
		{
			if (Global_67755[iVar0 /*9*/] > 0)
			{
				if (Global_67755[iVar0 /*9*/] == iParam1)
				{
					Global_67755[iVar0 /*9*/].f_5 = 0;
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
	
	Global_55672 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67754)
	{
		if (iParam1 == -1 || Global_67755[iVar0 /*9*/] == iParam1)
		{
			if (Global_67755[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67755[iVar0 /*9*/].f_6 = iParam0;
				Global_67755[iVar0 /*9*/].f_7 = 1;
				Global_67755[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_64(int iParam0, int iParam1)
{
	Global_55670 = iParam0;
	Global_55671 = iParam1;
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
				if (unk_0x8F37C4B2B81C98B9() >= 0)
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
	Global_100976.f_7247[iParam0] = 1;
	Global_100976.f_7247.f_236[iParam0] = (unk_0x693EBB4F13506457() + iParam1);
}

int func_67(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xDCC86F723E82125E(Global_2283, 14))
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
	if (unk_0xCBC8FFE55DC722B5(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_68()
{
	if (Global_15761 == 1 || Global_16728 == 1)
	{
		return 1;
	}
	return 0;
}

void func_69(bool bParam0)
{
	unk_0xB518E9C8553B1D2B(bParam0);
	if (bParam0)
	{
	}
}

void func_70(char* sParam0, char* sParam1)
{
	if (unk_0x44E93B894936152F())
	{
		Global_15769 = 1;
		StringCopy(&Global_15776, sParam0, 24);
		StringCopy(&Global_15770, sParam1, 24);
	}
}

int func_71()
{
	if (Global_15712 == 4)
	{
		if (unk_0x44E93B894936152F())
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
		if (!unk_0x2DC9BA2299B45EA6(iVar1))
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
	if (Global_100976.f_6322.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_100976.f_6322.f_911 == Var0.f_0)
		{
			Global_100976.f_6322.f_911 = -1;
		}
		Var0.f_3 = func_53(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (unk_0x693EBB4F13506457() + iParam5);
		Var0.f_1 = iParam10;
		iVar15 = 0;
		unk_0x59A0729D503ED758(&iVar15, iParam2);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		unk_0x59A0729D503ED758(&(Var0.f_1), 0);
		unk_0x77621132305B133B(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			unk_0x59A0729D503ED758(&(Var0.f_1), 10);
		}
		Global_100976.f_6322[Global_100976.f_6322.f_136 /*15*/] = { Var0 };
		Global_100976.f_6322.f_136++;
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
	return Global_69579;
}

int func_76(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
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
			if (iParam0 == unk_0xC8B93D94F8954288())
			{
				return 0;
			}
		}
		if (unk_0xDCC86F723E82125E(Global_87292, iVar0))
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
		return unk_0xC8B93D94F8954288();
	}
	return Global_88917[func_78(iParam0)];
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
	Global_1601 = iParam2;
	Global_15760 = 0;
	Global_15719 = 1;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_15726 = 0;
	Global_15717 = 1;
	Global_15764 = 0;
	Global_15766 = 0;
	if (iParam6 == 1)
	{
		Global_15724 = 1;
	}
	else
	{
		Global_15724 = 0;
	}
	Global_2621441 = 0;
	return func_81(sParam4, iParam5, bParam9);
}

int func_81(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xB518E9C8553B1D2B(false);
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
					func_60();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x2964A62922189B93())
		{
			return 0;
		}
		if (func_87(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_86();
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
			unk_0x77621132305B133B(&Global_2283, 20);
			unk_0x77621132305B133B(&Global_2284, 17);
			unk_0x77621132305B133B(&Global_2285, 0);
			if (bParam2)
			{
				func_85();
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
			if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
			{
				if (unk_0x7E515EEFC038658D(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (func_84())
				{
					return 0;
				}
				if (unk_0x50CB4D478D09ED89(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x770AAB67BDD9C729(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x5E161494BC10595F(unk_0xC8B93D94F8954288()))
				{
					return 0;
				}
				if (unk_0x68A7CE67BDF5E83C(unk_0xC8B93D94F8954288(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69317)
				{
					if (unk_0xEE473B4B88D6F842(unk_0xC8B93D94F8954288()))
					{
						return 0;
					}
					if (unk_0x629B1FD22BE568E4(unk_0xA34E7C2A5118D638()))
					{
						return 0;
					}
					if (unk_0x3A2AAB26205C2C37(unk_0xC8B93D94F8954288()))
					{
						return 0;
					}
					if (unk_0x4887094DDBD415E7(unk_0xA34E7C2A5118D638()))
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
				if (unk_0xDCC86F723E82125E(Global_2283, 9))
				{
					return 0;
				}
			}
			func_83();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_82();
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
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xB518E9C8553B1D2B(false);
	Global_15712 = 1;
}

void func_83()
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
	unk_0x77621132305B133B(&Global_2284, 16);
}

int func_84()
{
	int iVar0;
	int iVar1;
	
	if (Global_69317)
	{
		iVar0 = 0;
		unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar1, 1);
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xA4860063B4E6B963() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
	{
		if (unk_0x0917C1C640BB7484(unk_0xC8B93D94F8954288(), 78, 1))
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
		if (!unk_0xB6900B8CB0ABBD2B(unk_0xC8B93D94F8954288()))
		{
			if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x6D5BB810CC209E15(unk_0xC8B93D94F8954288()) == Global_100976.f_32519[2 /*29*/])
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
		Global_14413 = func_25();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69317)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

void func_86()
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

bool func_87(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338611.f_203[iParam1];
			}
			break;
	}
	return unk_0xDCC86F723E82125E(Global_1338611.f_949, iParam0);
}

void func_88(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	if (!Global_69317)
	{
		if (!unk_0x2DC9BA2299B45EA6(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x8EB9A60FB4C37A34(iParam2, 0);
			}
			else
			{
				unk_0x8EB9A60FB4C37A34(iParam2, 1);
			}
		}
		if (!unk_0x2DC9BA2299B45EA6(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7EAD9630176BD15E(iParam2, 0);
			}
			else
			{
				unk_0x7EAD9630176BD15E(iParam2, 1);
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
	if (Global_100976.f_7719.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_100976.f_7719.f_99.f_58[iParam0] = iParam1;
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
	return Global_100976.f_7719.f_330[iParam0 /*6*/];
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
	return Global_100976.f_7719.f_99.f_58[iParam0];
}

void func_98(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xBBB1F62EC5E3BBC6(sParam0);
	unk_0xEE90E717A80AA597(iParam1, 1);
}

bool func_99(char* sParam0, int iParam1, int iParam2)
{
	unk_0xF932A8699EA66642(sParam0);
	if (iParam1 == 1)
	{
		unk_0xCE59E3E42586D52D(iParam2);
	}
	return unk_0xD6AFC45B1375A9DD();
}

bool func_100(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

void func_101()
{
	func_208(&iLocal_874, &uLocal_875, &iLocal_686, &iLocal_822, &iLocal_821, Local_827, Local_868.f_0, 0, 1090519040);
	func_207();
	func_148();
	switch (iLocal_684)
	{
		case 0:
			if (func_115(iLocal_683, bLocal_28))
			{
				if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0)
				{
					if (func_36(iLocal_874))
					{
						if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_874, 0))
						{
							func_114("PRA_LEVVEH", &iLocal_820);
						}
					}
				}
				iLocal_684 = 1;
			}
			break;
		
		case 1:
			func_113(&iLocal_821, Local_827, &iLocal_685, iLocal_686, &iLocal_820, &iLocal_838);
			if (func_106(iLocal_874, Local_827, &iLocal_821, iLocal_686, iLocal_685, &iLocal_836, &iLocal_839, &iLocal_835, &iLocal_834, &iLocal_820, 1090519040))
			{
				if (!func_105())
				{
					if (func_65(&uLocal_687, &cLocal_1044, &uLocal_879))
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
			if (func_36(Local_868.f_0))
			{
				if (!unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), Local_868.f_0, 0))
				{
					unk_0x6D9DB313D50E9A0D(unk_0xC8B93D94F8954288(), Local_868.f_0, -1);
				}
				else
				{
					func_102(Local_868.f_0, Local_827, 126.0705f, 0, 1);
					func_39(1, 1, 1);
					iLocal_684 = 1;
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
			bVar0 = unk_0x32B7B9548CC32D81(Param1, &fVar1, 0);
			if (bVar0)
			{
				Param1.f_2 = fVar1;
			}
		}
		unk_0xC76B5C68AB6DC7DF(iParam0, Param1, 1, 0, 0, iParam6);
		unk_0x765E3FA65D011F03(iParam0, fParam4);
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
	func_104(iLocal_683);
	iLocal_817 = iLocal_683;
	if (!bParam0)
	{
		iLocal_683 = iLocal_817 + 1;
	}
	else if (iLocal_817 > 0)
	{
		iLocal_683 = (iLocal_817 - 1);
	}
	iLocal_820 = 0;
	iLocal_684 = 0;
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
				if (!unk_0x96EA03DFD7BAC0B4(iParam0))
				{
					func_114(func_112(func_75()), iParam11);
				}
			}
			if (!unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), Param1, fParam12, fParam12, 2f, 0, 1, 2))
			{
				unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), Param1, fParam12, fParam12, 2f, 1, 1, 2);
				if (func_99(func_112(func_75()), 0, 0))
				{
					unk_0x74F83E6AF43012A7(func_112(func_75()));
				}
				*iParam7 = 1;
				func_110(iParam4, Param1, 1);
			}
			else
			{
				if (*iParam7)
				{
					fVar0 = (fParam12 / 2f);
					if (func_100(unk_0xC8B93D94F8954288(), Param1, fVar0))
					{
						*iParam7 = 0;
						func_109(1077936128, 1);
					}
				}
				func_7(iParam4);
			}
		}
	}
	else if (unk_0xA0C23498D8E0BB93(iParam0, Param1, fParam12, fParam12, 2f, 0, 1, 2))
	{
		if (*iParam9 == -1)
		{
			unk_0x0782F0CAEA719452(iParam0, 2);
			return 1;
		}
		if (!*iParam10)
		{
			if (func_99(func_112(func_75()), 0, 0))
			{
				unk_0x7846F09C04C34C46();
			}
			*iParam9 = unk_0x693EBB4F13506457();
			*iParam10 = 1;
			unk_0x0782F0CAEA719452(iParam0, 2);
		}
		else if ((unk_0x693EBB4F13506457() - *iParam9) > 3000)
		{
			return 1;
		}
	}
	else
	{
		if (unk_0xA6BAF129343F464F(iParam0) == 2)
		{
			unk_0x0782F0CAEA719452(iParam0, 1);
		}
		if (!*iParam8)
		{
			if (func_99(func_108(func_75(), 0), 0, 0))
			{
				unk_0x74F83E6AF43012A7(func_108(func_75(), 0));
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
	
	if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		return 1;
	}
	iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
	if (unk_0x5D42322C7DB888D0(iVar0, 0))
	{
		if (unk_0xC0ADAF0814175B68(iVar0, -1) == unk_0xC8B93D94F8954288())
		{
			if (!unk_0xF624ACE12DE97FE9(iVar0))
			{
				unk_0x5C384485B80ABDBC(iVar0, fParam0, iParam1, 0);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0x2EE26A43F82C8F1B(unk_0xC8B93D94F8954288()))
	{
		return 1;
	}
	if (unk_0x5D42322C7DB888D0(iVar0, 0))
	{
		if (unk_0xF624ACE12DE97FE9(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_110(int iParam0, struct<3> Param1, int iParam4)
{
	if (!unk_0x6B4865E08E90ACC5(*iParam0))
	{
		*iParam0 = func_111(Param1, 5, iParam4);
	}
}

int func_111(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = unk_0xDF811B9EAB020A4D(Param0);
	unk_0xEB19FBC5156AAE3A(iVar0, iParam3);
	unk_0x3734DA1F207E7166(iVar0, 1f);
	unk_0x706ABF1139F36482(iVar0, iParam4);
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
			if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0)
			{
				*iParam4 = 1;
			}
			break;
		
		case 1:
			func_7(iParam0);
			if ((iParam5 == 1 || iParam5 == 2) || iParam5 == 3)
			{
				unk_0x7846F09C04C34C46();
				func_98("LOSE_WANTED", 7500, 0);
				*iParam4 = 2;
			}
			break;
		
		case 2:
			if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0)
			{
				unk_0x7846F09C04C34C46();
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
				bLocal_28 = false;
				func_39(1, 1, 1);
			}
			else if (func_142(1, Local_824, 0))
			{
				if (func_141())
				{
					func_140(33);
					unk_0xB7FAA1C591A4664F(joaat("trash"), 1);
					unk_0xB7FAA1C591A4664F(joaat("towtruck"), 1);
					unk_0xB7FAA1C591A4664F(joaat("s_m_y_garbage"), 1);
					iLocal_683 = 2;
					func_7(&iLocal_821);
					func_138(&uLocal_671, 0, 0);
					func_137(190, 1244.338f, -339.3197f, 68.0823f);
					func_135();
					unk_0x836267F7339CEF73("DRIVE", 0);
					unk_0x836267F7339CEF73("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0x836267F7339CEF73("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0x836267F7339CEF73("WORLD_VEHICLE_DRIVE_SOLO", 0);
					return 1;
				}
				else if (((func_142(2, Local_868.f_1, Local_868.f_4) && func_142(3, Local_840.f_1, Local_840.f_4)) && func_142(4, Local_854.f_1, Local_854.f_4)) && func_134(0))
				{
					func_135();
					func_140(33);
					if (func_322(Local_840.f_0))
					{
						func_133(Local_840.f_0);
					}
					if (func_322(Local_854.f_0))
					{
						func_132(Local_854.f_0);
					}
					func_131(Local_868.f_0);
					if (func_322(Local_854.f_0) && func_322(Local_840.f_0))
					{
						func_120(iLocal_830, 1, 0, 1);
					}
					unk_0xB7FAA1C591A4664F(joaat("trash"), 1);
					unk_0xB7FAA1C591A4664F(joaat("towtruck"), 1);
					unk_0xB7FAA1C591A4664F(joaat("s_m_y_garbage"), 1);
					if (unk_0x5A1CC333DD669834(Local_868.f_0) != 0)
					{
						iVar0 = unk_0x5A1CC333DD669834(Local_868.f_0);
						unk_0x8F5BCDB4D8191665(1);
						func_7(&iVar0);
						unk_0x8F5BCDB4D8191665(0);
					}
					func_118(&iLocal_821, Local_868.f_0, 1);
					func_137(190, 1244.338f, -339.3197f, 68.0823f);
					unk_0x836267F7339CEF73("DRIVE", 0);
					unk_0x836267F7339CEF73("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0x836267F7339CEF73("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0x836267F7339CEF73("WORLD_VEHICLE_DRIVE_SOLO", 0);
					return 1;
				}
			}
			break;
		
		case 1:
			if (bParam1)
			{
				if ((func_142(2, Local_868.f_1, Local_868.f_4) && func_142(3, Local_840.f_1, Local_840.f_4)) && func_142(4, Local_854.f_1, Local_854.f_4))
				{
					func_117(unk_0xC8B93D94F8954288(), 1197.861f, -353.011f, 68.0929f, 278.9647f);
					func_116();
					bLocal_28 = false;
					unk_0x836267F7339CEF73("DRIVE", 0);
					unk_0x836267F7339CEF73("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0x836267F7339CEF73("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0x836267F7339CEF73("WORLD_VEHICLE_DRIVE_SOLO", 0);
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
				if (func_142(2, Local_868.f_1, Local_868.f_4))
				{
					func_116();
					func_135();
					unk_0x6D9DB313D50E9A0D(unk_0xC8B93D94F8954288(), Local_868.f_0, -1);
					bLocal_28 = false;
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
				if (func_142(2, Local_827, Local_868.f_4))
				{
					func_116();
					unk_0x6D9DB313D50E9A0D(unk_0xC8B93D94F8954288(), Local_868.f_0, -1);
					func_135();
					bLocal_28 = false;
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
	if (iLocal_683 == 1)
	{
		func_133(Local_840.f_0);
		func_132(Local_854.f_0);
		func_131(Local_868.f_0);
		func_120(iLocal_830, 1, 0, 1);
	}
	iLocal_877 = 0;
	iLocal_838 = 0;
	iLocal_839 = 0;
	iLocal_834 = 0;
	iLocal_835 = 0;
	iLocal_836 = 0;
}

void func_117(int iParam0, struct<3> Param1, float fParam4)
{
	if (func_322(uParam0))
	{
		unk_0x5124C5FA52D2AF3E(uParam0);
	}
	func_102(iParam0, Param1, fParam4, 0, 1);
}

void func_118(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x6B4865E08E90ACC5(*iParam0))
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
		iVar0 = unk_0x361E437CE4AD5532(uParam0);
		unk_0xDDD65F4720293225(iVar0, uParam1);
		unk_0xEB19FBC5156AAE3A(iVar0, iParam2);
		unk_0x3734DA1F207E7166(iVar0, 1f);
	}
	return iVar0;
}

void func_120(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iLocal_81 = iParam0;
	bLocal_663 = iParam1;
	bLocal_662 = iParam2;
	bLocal_664 = iParam3;
	Local_111[0 /*11*/].f_1 = 0;
	Local_111[1 /*11*/].f_1 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_81 - 1))
	{
		Local_134[iVar0 /*25*/].f_18 = 0;
		iVar0++;
	}
	fLocal_660 = 0f;
	func_122();
	Local_111[1 /*11*/].f_7 = 3;
	Local_111[1 /*11*/].f_5 = 0;
	Local_111[1 /*11*/].f_10 = 1;
	Local_111[1 /*11*/].f_2 = 1500;
	Local_111[1 /*11*/].f_3 = 500;
	Local_111[0 /*11*/].f_5 = 0;
	Local_111[0 /*11*/].f_10 = 0;
	Local_111[0 /*11*/].f_2 = 1000;
	Local_111[0 /*11*/].f_3 = 100;
	unk_0x4A606A8BE6924115("Enemies", &uLocal_80);
	unk_0xCBD60E398042F554(Local_111[0 /*11*/], uLocal_80);
	unk_0xCBD60E398042F554(Local_111[1 /*11*/], uLocal_80);
	unk_0x5660CB9995F99E7B(Local_111[0 /*11*/], 1, 0);
	unk_0x5660CB9995F99E7B(Local_111[1 /*11*/], 1, 0);
	func_121(1.9f, 1.9f, 8f, 0f, 0f, 0f);
}

void func_121(struct<3> Param0, struct<3> Param3)
{
	Local_82.f_8 = { Param0 };
	Local_82.f_11 = { Param3 };
	Local_82.f_1 = 4;
}

void func_122()
{
	if (!unk_0x0C7EC810080F0459(Local_111[0 /*11*/], iLocal_109, 0))
	{
		unk_0x81333BEA4837207C(Local_111[0 /*11*/], unk_0xCC31DB73C65552D8(iLocal_109, func_130(1)), 1f, -1, 1048576000, 0, 1193033728);
		Local_111[0 /*11*/].f_7 = 1;
	}
	else
	{
		func_123(1);
	}
}

void func_123(bool bParam0)
{
	if (!unk_0x74CAAD9E721B315D(iLocal_109, 0))
	{
		func_124(bParam0);
		if (iLocal_661 != (iLocal_81 - 1))
		{
			if (iLocal_661 == 4)
			{
				unk_0x9A84724AABB52D4E(Local_111[0 /*11*/], iLocal_109, Local_134[iLocal_661 /*25*/], 15f, 2883755, Local_134[iLocal_661 /*25*/].f_6);
			}
			else
			{
				unk_0xAC59C2795E065D27(Local_111[0 /*11*/], iLocal_109, Local_134[iLocal_661 /*25*/], 15f, 0, 0, 2883755, Local_134[iLocal_661 /*25*/].f_6, Local_134[iLocal_661 /*25*/].f_7);
			}
			Local_111[0 /*11*/].f_8 = Local_111[0 /*11*/].f_7;
			Local_111[0 /*11*/].f_7 = 4;
		}
		else
		{
			unk_0x84D04CB0E2B93F55(Local_111[0 /*11*/], iLocal_109, 15f, 786599);
			Local_111[0 /*11*/].f_8 = Local_111[0 /*11*/].f_7;
			Local_111[0 /*11*/].f_7 = 10;
		}
	}
	else
	{
		Local_111[0 /*11*/].f_8 = Local_111[0 /*11*/].f_7;
		Local_111[0 /*11*/].f_7 = 7;
	}
}

void func_124(bool bParam0)
{
	if (iLocal_661 != -1)
	{
		if (!func_129(Local_134[iLocal_661 /*25*/].f_11) && !func_129(Local_134[iLocal_661 /*25*/].f_14))
		{
			unk_0xE6D99A6809A1F8CE(Local_134[iLocal_661 /*25*/].f_11 - Local_134[iLocal_661 /*25*/].f_14, Local_134[iLocal_661 /*25*/].f_11 + Local_134[iLocal_661 /*25*/].f_14, 1, 1);
		}
	}
	if (!bParam0)
	{
		func_127();
	}
	else
	{
		iLocal_661 = func_125();
	}
	if (iLocal_661 != -1)
	{
		if (!func_129(Local_134[iLocal_661 /*25*/].f_11) && !func_129(Local_134[iLocal_661 /*25*/].f_14))
		{
			unk_0xE6D99A6809A1F8CE(Local_134[iLocal_661 /*25*/].f_11 - Local_134[iLocal_661 /*25*/].f_14, Local_134[iLocal_661 /*25*/].f_11 + Local_134[iLocal_661 /*25*/].f_14, 0, 1);
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
	
	if (func_36(iLocal_109))
	{
		Var1 = { unk_0x44C17CCB85A88A1F(iLocal_109, 1) };
		iVar4 = 0;
		while (iVar4 <= (iLocal_81 - 1))
		{
			fVar28 = unk_0x4F982ED5336EA899(Var1, Local_134[iVar4 /*25*/], 1);
			if (!func_129(Local_134[iVar4 /*25*/]) && fVar28 > 25f)
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
		while (iVar4 <= (iLocal_81 - 1))
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
		fVar30 = func_126(Local_134[iVar0 /*25*/] - Var1, unk_0x2CDF65DEC17DF0F9(iLocal_109));
		iVar5 = iVar0;
		iVar31 = 0;
		while (fVar30 < 0f && iVar31 < 40)
		{
			iVar5++;
			if (iVar5 >= 21)
			{
				iVar5 = 0;
			}
			Var1 = { unk_0x44C17CCB85A88A1F(iLocal_109, 1) };
			fVar30 = func_126(Local_134[iVar5 /*25*/] - Var1, unk_0x2CDF65DEC17DF0F9(iLocal_109));
			iVar31++;
		}
		if (iVar31 >= 40)
		{
			iVar5 = (iLocal_81 - 1);
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
	if (bLocal_663)
	{
		while (Local_134[iLocal_661 /*25*/].f_18 && iVar0 != -1)
		{
			iLocal_661++;
			if (iLocal_661 >= (iLocal_81 - 1))
			{
				iVar0 = -1;
				iLocal_661 = (iLocal_81 - 1);
			}
		}
		if (iLocal_661 == (iLocal_81 - 1))
		{
			if (bLocal_662)
			{
				iLocal_661 = 0;
				iVar0 = 0;
				while (iVar0 <= (iLocal_81 - 1))
				{
					Local_134[iVar0 /*25*/].f_18 = 0;
					iVar0++;
				}
			}
			else
			{
				iLocal_661 = (iLocal_81 - 1);
				return;
			}
		}
	}
	else
	{
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 <= (iLocal_81 - 1))
		{
			if (Local_134[iVar0 /*25*/].f_18)
			{
				iVar1++;
			}
			iVar0++;
		}
		if (iVar1 == (iLocal_81 - 1))
		{
			iLocal_661 = (iLocal_81 - 1);
		}
		else if (iVar1 == iLocal_81)
		{
			if (bLocal_662)
			{
				iVar0 = 0;
				while (iVar0 <= (iLocal_81 - 1))
				{
					Local_134[iVar0 /*25*/].f_18 = 0;
					iVar0++;
				}
				iLocal_661 = func_128();
			}
			else
			{
				iLocal_661 = -1;
				return;
			}
		}
		else
		{
			iLocal_661 = func_128();
		}
	}
}

int func_128()
{
	int iVar0;
	
	iVar0 = unk_0x531444754C426278(0, (iLocal_81 - 1));
	while (Local_134[iVar0 /*25*/].f_18)
	{
		iVar0 = unk_0x531444754C426278(0, (iLocal_81 - 1));
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
		uVar3 = unk_0x71EC6CC1E45B4DF1(iLocal_109, "wheel_rf");
	}
	else
	{
		uVar3 = unk_0x71EC6CC1E45B4DF1(iLocal_109, "wheel_lf");
	}
	Var0 = { unk_0xEA9A8033D5CFC295(iLocal_109, uVar3) };
	Var0 = { unk_0xEABAE14292BF78FB(iLocal_109, Var0) };
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
		iLocal_109 = iParam0;
	}
}

void func_132(var uParam0)
{
	if (func_322(uParam0))
	{
		Local_111[1 /*11*/] = uParam0;
	}
}

void func_133(var uParam0)
{
	if (func_322(uParam0))
	{
		Local_111[0 /*11*/] = uParam0;
	}
}

int func_134(bool bParam0)
{
	unk_0xC0E8B67A4385D37D("missfbi4prepp1");
	unk_0x2A06B47BBED4FB70("missfbi4prepp1_garbageman");
	if (bParam0)
	{
		while (!unk_0xF9B86DC1728F1339("missfbi4prepp1") && !unk_0xB8DD164B85EDF0BC("missfbi4prepp1_garbageman"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		return 1;
	}
	else if (unk_0xF9B86DC1728F1339("missfbi4prepp1") && unk_0xB8DD164B85EDF0BC("missfbi4prepp1_garbageman"))
	{
		return 1;
	}
	return 0;
}

void func_135()
{
	func_136(&uLocal_879);
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
	func_91(uParam0, iVar0, unk_0xC8B93D94F8954288(), sVar1, 0, 1);
}

void func_137(int iParam0, struct<3> Param1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if ((Param1.f_0 == Global_25424[iVar0 /*23*/][0 /*3*/] && Param1.f_1 == Global_25424[iVar0 /*23*/][0 /*3*/].f_1) && Param1.f_2 == Global_25424[iVar0 /*23*/][0 /*3*/].f_2)
	{
		return;
	}
	Global_25421 = 1;
	unk_0x59A0729D503ED758(&(Global_25424[iVar0 /*23*/].f_11), 18);
	Global_25424[iVar0 /*23*/][0 /*3*/] = { Param1 };
	Global_31474 = 1;
}

void func_138(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (unk_0xDCC86F723E82125E(Global_2458121.f_4417, 26))
		{
			return;
		}
	}
	if (unk_0x000CF7FDBE12A995())
	{
		unk_0x2F309AF34613F2FA(iParam2);
		unk_0xEF8DA481DD536EEE("FocusIn");
		unk_0xDB9D78E5137EE7AD("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xD7F5001BB6D13A64("FocusOut", 0, 0);
			unk_0xC4EE38A4CFF7544C(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0xE3B1382567189443(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x544AEDB4A15228FF(sVar0))
	{
		if (!unk_0xBBAE3E0C60A8AD4B())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x544AEDB4A15228FF(uParam0->f_3))
	{
		if (func_139(uParam0->f_3))
		{
			unk_0x9F4AA6F234E8A860(1);
		}
	}
	if (!unk_0x544AEDB4A15228FF(sVar0))
	{
		if (func_139(sVar0))
		{
			unk_0x9F4AA6F234E8A860(1);
		}
	}
}

bool func_139(char* sParam0)
{
	unk_0xD90D7D16FDE685B6(sParam0);
	return unk_0x699790DC9A5E5D9A(0);
}

void func_140(int iParam0)
{
	if (Global_88361 != -1)
	{
		if (iParam0 == Global_88361)
		{
			Global_88365 = 1;
			return;
		}
	}
}

int func_141()
{
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		if (unk_0x6B89D299CB2A726F(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), joaat("trash")))
		{
			unk_0xFD816D0E738EB817(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0), 1, 0);
			iLocal_874 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
			if (func_36(iLocal_874))
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
			if (func_147(Param1, Local_824, 1056964608, 0) && fParam4 == 0f)
			{
				return 1;
			}
			break;
		
		case 1:
			unk_0xF3AC452C34BF0E13(sLocal_819, 0);
			if (unk_0xF0DCEBB4ADA5D981(0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_36(Global_87936[0]))
			{
				unk_0xFD816D0E738EB817(Global_87936[0], 1, 1);
				Local_868.f_0 = Global_87936[0];
				if (func_36(Local_868.f_0))
				{
					func_35(Local_868.f_0, 0);
					unk_0x0CE9795408B4B974(Local_868.f_0, 1);
					unk_0x3907D4738A2C8ABD(Local_868.f_0, 1);
					return 1;
				}
			}
			else if (func_146(&Local_868, Local_868.f_5, Local_868.f_1, Local_868.f_4, 1))
			{
				func_35(Local_868.f_0, 0);
				unk_0x0CE9795408B4B974(Local_868.f_0, 1);
				unk_0x3907D4738A2C8ABD(Local_868.f_0, 1);
				return 1;
			}
			break;
		
		case 3:
			if (unk_0x95CCECA3948CFE7B(Global_87936.f_9[0]))
			{
				if (!unk_0x902595DAD7718896(Global_87936.f_9[0], 1))
				{
					unk_0xFD816D0E738EB817(Global_87936.f_9[0], 1, 1);
					Local_840.f_0 = Global_87936.f_9[0];
					if (func_322(Local_840.f_0))
					{
						unk_0xAAD662D7E0D59F4C(Local_840.f_0, true);
						unk_0xC778754E36F3FFD6(Local_840.f_0, 170, 0);
						unk_0xF36EA652E4A6CED0(Local_840.f_0, 65536, 1);
						unk_0x1296D571B761D748(Local_840.f_0, 50, 1);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_143(&Local_840, Local_840.f_5, Local_840.f_1, Local_840.f_4, 1, 0, 1, 1))
			{
				if (func_36(Local_868.f_0))
				{
					unk_0x6D9DB313D50E9A0D(Local_840.f_0, Local_868.f_0, -1);
					unk_0xAAD662D7E0D59F4C(Local_840.f_0, true);
					unk_0xC778754E36F3FFD6(Local_840.f_0, 170, 0);
					unk_0xF36EA652E4A6CED0(Local_840.f_0, 65536, 1);
					unk_0x1296D571B761D748(Local_840.f_0, 50, 1);
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0x95CCECA3948CFE7B(Global_87936.f_9[1]))
			{
				if (!unk_0x902595DAD7718896(Global_87936.f_9[1], 1))
				{
					unk_0xFD816D0E738EB817(Global_87936.f_9[1], 1, 1);
					Local_854.f_0 = Global_87936.f_9[1];
					if (func_322(Local_854.f_0))
					{
						unk_0xC778754E36F3FFD6(Local_854.f_0, 170, 0);
						unk_0xF36EA652E4A6CED0(Local_854.f_0, 65536, 1);
						unk_0x1296D571B761D748(Local_854.f_0, 50, 1);
						unk_0xAAD662D7E0D59F4C(Local_854.f_0, true);
						unk_0x05BE583DF8C6A617(Local_854.f_0, 1);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_143(&Local_854, Local_854.f_5, Local_854.f_1, Local_854.f_4, 1, 0, 1, 1))
			{
				if (func_36(Local_868.f_0))
				{
					unk_0x6D9DB313D50E9A0D(Local_854.f_0, Local_868.f_0, 0);
					unk_0xC778754E36F3FFD6(Local_854.f_0, 170, 0);
					unk_0xF36EA652E4A6CED0(Local_854.f_0, 65536, 1);
					unk_0x1296D571B761D748(Local_854.f_0, 50, 1);
					unk_0xAAD662D7E0D59F4C(Local_854.f_0, true);
					unk_0x05BE583DF8C6A617(Local_854.f_0, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_143(var uParam0, var uParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (func_145(uParam1, "Loading", 0))
		{
			*uParam0 = unk_0x71DD988C1B903F5D(26, uParam1, Param2, uParam5, 1, 1);
			if (func_322(*uParam0))
			{
				if (bParam7)
				{
					unk_0xB7A2078CD1C9A82F(*uParam0, 1);
				}
				if (bParam8)
				{
					unk_0xAAD662D7E0D59F4C(*uParam0, bParam8);
				}
				if (!bParam9)
				{
					unk_0x58F516BB5E324590(*uParam0, bParam9);
				}
				if (bParam6)
				{
					func_144(uParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_322(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_144(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (unk_0x0845149A26DABBA5(uParam0))
		{
			unk_0x4BBD72565A0AF033(uParam0);
		}
	}
	else
	{
		unk_0x4BBD72565A0AF033(uParam0);
	}
}

int func_145(var uParam0, char* sParam1, int iParam2)
{
	unk_0x7567CEA8E6B5340B(uParam0);
	if (!unk_0xB8A06E7E729EED0A(sParam1) && iParam2 != -1)
	{
	}
	if (unk_0x0845149A26DABBA5(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_146(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (!unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (func_145(iParam1, "Loading", 0))
		{
			*uParam0 = unk_0xD53B4DCC7B2C8551(iParam1, Param2, fParam5, 1, 1);
			if (unk_0x95CCECA3948CFE7B(*uParam0))
			{
				if (!unk_0xD28A89C669EAD2E4(*uParam0))
				{
					unk_0xFD816D0E738EB817(*uParam0, 1, 0);
				}
				unk_0xF18809B65D87E197(*uParam0);
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
			unk_0xC76B5C68AB6DC7DF(*uParam0, Param2, 1, 0, 0, 1);
			unk_0x765E3FA65D011F03(*uParam0, fParam5);
		}
		if (!unk_0xD28A89C669EAD2E4(*uParam0))
		{
			unk_0xFD816D0E738EB817(*uParam0, 1, 0);
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
		if (unk_0xA3C5926D6E5619AE((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xA3C5926D6E5619AE((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xA3C5926D6E5619AE((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xA3C5926D6E5619AE((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xA3C5926D6E5619AE((Param0.f_1 - Param3.f_1)) <= fParam6)
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
		func_149(&(Local_111[iVar0 /*11*/]), iVar0);
		iVar0++;
	}
}

void func_149(var uParam0, int iParam1)
{
	if (func_322(*uParam0))
	{
		func_195(uParam0, iParam1, 0);
		if (unk_0xCD61E9D5CABC7E35(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 3))
		{
			if (unk_0x853B39ECA83DA242(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man") >= 0.172f)
			{
				if (func_10(Local_134[iLocal_661 /*25*/].f_17) && unk_0xB0A9B470CE75BF12(Local_134[iLocal_661 /*25*/].f_17))
				{
					unk_0x31D56B8BF9715256(*uParam0, 1048576000);
					unk_0xB0CA9024AD6266DC(*uParam0);
					if (iLocal_661 <= 20 && iLocal_661 != -1)
					{
						Local_134[iLocal_661 /*25*/].f_18 = 1;
						uParam0->f_9 = 0;
					}
					unk_0xB81176DFD2611E8B(Local_134[iLocal_661 /*25*/].f_17, 1, 0);
					unk_0x826839BB9226283E(Local_134[iLocal_661 /*25*/].f_17, 1, unk_0x2CDF65DEC17DF0F9(*uParam0), 0, 1, 1, 0);
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
		if (func_10(Local_134[iLocal_661 /*25*/].f_17))
		{
			if (unk_0xB0A9B470CE75BF12(Local_134[iLocal_661 /*25*/].f_17))
			{
				unk_0xB81176DFD2611E8B(Local_134[iLocal_661 /*25*/].f_17, 1, 0);
				unk_0x826839BB9226283E(Local_134[iLocal_661 /*25*/].f_17, 1, unk_0x2CDF65DEC17DF0F9(*uParam0), 0, 1, 1, 0);
			}
		}
		func_7(&(uParam0->f_4));
		if (unk_0x95CCECA3948CFE7B(*uParam0))
		{
			if (!func_150(unk_0xC8B93D94F8954288(), *uParam0, 150f) && !bLocal_665)
			{
				func_5(uParam0, 1, 0, 1);
			}
		}
	}
}

bool func_150(int iParam0, int iParam1, float fParam2)
{
	return unk_0xB7A628320EFF8E47(unk_0x44C17CCB85A88A1F(iParam0, 1), unk_0x44C17CCB85A88A1F(iParam1, 1)) <= (fParam2 * fParam2);
}

void func_151(var uParam0)
{
	var uVar0;
	var uVar1;
	
	switch (uParam0->f_6)
	{
		case 5:
			if ((unk_0x693EBB4F13506457() - uParam0->f_1) > uParam0->f_3)
			{
				if (func_177(*uParam0, 780511057))
				{
					unk_0x5124C5FA52D2AF3E(*uParam0);
				}
				unk_0x622E764F80DBF8B7(*uParam0, unk_0xC8B93D94F8954288(), 30f, -1, 0, 0);
				uParam0->f_6 = 6;
				uParam0->f_1 = unk_0x693EBB4F13506457();
			}
			break;
		
		case 21:
			if (unk_0x74BBB84E37C71AAC(unk_0xC8B93D94F8954288(), 6))
			{
				if (func_170(*uParam0, unk_0xC8B93D94F8954288(), 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 1);
					return;
				}
			}
			if ((unk_0x693EBB4F13506457() - uParam0->f_1) > uParam0->f_3)
			{
				if (!unk_0x277ECDA23D8CCEB4(*uParam0, 0))
				{
					unk_0x0B4BD476AC97EAFF(*uParam0, unk_0xC8B93D94F8954288(), 8f, -1f, 10f, 0);
				}
				else
				{
					unk_0x3E2E609450787FFE(&uVar0);
					unk_0xE5F6BE3F8E937ACE(0, 0, 0);
					unk_0x45EF2026AF681474(0, unk_0xC8B93D94F8954288(), 0, 16);
					unk_0x939BC11172AA1303(uVar0);
					unk_0xBFE865E3B513451B(*uParam0, uVar0);
					unk_0xA9351C9309E03069(&uVar0);
				}
				if (!unk_0x6B4865E08E90ACC5(uParam0->f_4))
				{
					uParam0->f_4 = func_166(*uParam0, 1, 145);
				}
				uParam0->f_6 = 22;
				uParam0->f_1 = unk_0x693EBB4F13506457();
			}
			break;
		
		case 10:
			if ((unk_0x693EBB4F13506457() - uParam0->f_1) > uParam0->f_3)
			{
				if (unk_0x277ECDA23D8CCEB4(*uParam0, 0))
				{
					unk_0x1F64302AA4F597A7(*uParam0, 120, 1);
					uParam0->f_6 = 12;
					uParam0->f_1 = unk_0x693EBB4F13506457();
				}
				else if (!func_177(*uParam0, 474215631))
				{
					if (func_177(*uParam0, 780511057))
					{
						unk_0x5124C5FA52D2AF3E(*uParam0);
					}
					unk_0x9F3B55DA0D0220DD(*uParam0, -1);
					uParam0->f_6 = 12;
					uParam0->f_1 = unk_0x693EBB4F13506457();
				}
			}
			break;
		
		case 3:
			if ((unk_0x693EBB4F13506457() - uParam0->f_1) > uParam0->f_3)
			{
				unk_0xD9D576FD55B4B03C(*uParam0, 1, 1);
				unk_0x622E764F80DBF8B7(*uParam0, unk_0xC8B93D94F8954288(), 500f, -1, 0, 1);
				uParam0->f_1 = unk_0x693EBB4F13506457();
				uParam0->f_6 = 4;
				uParam0->f_5 = 1;
			}
			break;
		
		case 11:
			func_165(uParam0);
			if ((unk_0x693EBB4F13506457() - uParam0->f_1) > 5000)
			{
				if (!func_177(*uParam0, 713668775))
				{
					if (unk_0x95CCECA3948CFE7B(Local_111[func_164(uParam0->f_10) /*11*/]))
					{
						unk_0x81333BEA4837207C(*uParam0, Local_667, 1f, -1, 2f, 0, 1193033728);
					}
				}
				uParam0->f_1 = unk_0x693EBB4F13506457();
				uParam0->f_6 = 23;
				uParam0->f_5 = 1;
			}
			break;
		
		case 18:
			if (!func_177(*uParam0, -2017877118))
			{
				unk_0x3E2E609450787FFE(&uVar1);
				if (func_163(unk_0x44C17CCB85A88A1F(*uParam0, 1), unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1)) > 1.5f)
				{
					unk_0x7FFE31040063EDAE(0, unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1), 0);
				}
				unk_0xFCA99C3640D1F1B5(0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				unk_0x939BC11172AA1303(uVar1);
				unk_0xBFE865E3B513451B(*uParam0, uVar1);
				unk_0xA9351C9309E03069(&uVar1);
				uParam0->f_5 = 1;
				uParam0->f_6 = 20;
				uParam0->f_1 = unk_0x693EBB4F13506457();
			}
			break;
		
		case 19:
			func_165(uParam0);
			if (!func_177(*uParam0, -2017877118))
			{
				unk_0xFCA99C3640D1F1B5(*uParam0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				uParam0->f_5 = 1;
				uParam0->f_6 = 20;
				uParam0->f_1 = unk_0x693EBB4F13506457();
			}
			break;
		
		case 1:
			if (!unk_0x0C7EC810080F0459(*uParam0, iLocal_109, 0))
			{
				func_161(uParam0);
			}
			break;
		
		case 2:
			if (!unk_0x7F13E3D2383CF15F(*uParam0) && (unk_0x693EBB4F13506457() - uParam0->f_1) > 3000)
			{
				func_161(uParam0);
			}
			break;
		
		case 4:
			if ((unk_0x693EBB4F13506457() - uParam0->f_1) > 8000)
			{
				unk_0x622E764F80DBF8B7(*uParam0, unk_0xC8B93D94F8954288(), 500f, -1, 0, 0);
				if (!iLocal_666)
				{
					if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0)
					{
						unk_0xB47D5A4E4AE9BEAD(unk_0xA34E7C2A5118D638(), 2, 0);
						unk_0x1C9B7C3360143C4C(unk_0xA34E7C2A5118D638(), 0);
						iLocal_666 = 1;
					}
				}
				unk_0xD9D576FD55B4B03C(*uParam0, 0, 1);
				uParam0->f_1 = unk_0x693EBB4F13506457();
				uParam0->f_6 = 8;
			}
			else if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 1)
			{
				unk_0xD9D576FD55B4B03C(*uParam0, 0, 1);
				uParam0->f_1 = unk_0x693EBB4F13506457();
				uParam0->f_6 = 8;
			}
			break;
		
		case 6:
			if ((unk_0x693EBB4F13506457() - uParam0->f_1) > uParam0->f_2)
			{
				if (!func_150(*uParam0, unk_0xC8B93D94F8954288(), 15f))
				{
					func_7(&(uParam0->f_4));
					uParam0->f_6 = 7;
					uParam0->f_1 = unk_0x693EBB4F13506457();
				}
			}
			break;
		
		case 7:
			if (unk_0x0C7EC810080F0459(*uParam0, iLocal_109, 1))
			{
				if (uParam0->f_6 != 4 && uParam0->f_6 != 1)
				{
					if (func_159())
					{
						if (func_322(*uParam0))
						{
							unk_0x5124C5FA52D2AF3E(*uParam0);
							unk_0x622E764F80DBF8B7(*uParam0, unk_0xC8B93D94F8954288(), 500f, -1, 0, 1);
							uParam0->f_6 = 1;
						}
					}
				}
				if (!func_150(*uParam0, unk_0xC8B93D94F8954288(), 120f))
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
			if (!func_150(*uParam0, unk_0xC8B93D94F8954288(), 120f))
			{
				func_5(uParam0, 1, 0, 1);
			}
			break;
		
		case 9:
			if (unk_0xB03AB89ABCAB2B4E(*uParam0))
			{
				func_169(uParam0, 1);
				return;
			}
			if ((unk_0x693EBB4F13506457() - uParam0->f_1) > uParam0->f_2 || !func_177(*uParam0, 2104565373))
			{
				func_156(uParam0);
			}
			break;
		
		case 12:
			if ((unk_0x693EBB4F13506457() - uParam0->f_1) >= uParam0->f_2)
			{
				unk_0x622E764F80DBF8B7(*uParam0, unk_0xC8B93D94F8954288(), 500f, -1, 0, 1);
				uParam0->f_6 = 5;
			}
			else
			{
				unk_0x1F64302AA4F597A7(*uParam0, 120, 1);
			}
			break;
		
		case 13:
			if ((unk_0x693EBB4F13506457() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_150(*uParam0, unk_0xC8B93D94F8954288(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = unk_0x693EBB4F13506457();
				}
				else if (func_170(Local_111[func_164(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 0);
				}
				else
				{
					func_155(uParam0);
					uParam0->f_1 = unk_0x693EBB4F13506457();
				}
			}
			break;
		
		case 15:
			if ((unk_0x693EBB4F13506457() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_150(*uParam0, unk_0xC8B93D94F8954288(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = unk_0x693EBB4F13506457();
				}
				else if (func_170(Local_111[func_164(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 0);
				}
				else
				{
					func_155(uParam0);
					uParam0->f_1 = unk_0x693EBB4F13506457();
				}
			}
			break;
		
		case 16:
			if (unk_0xB03AB89ABCAB2B4E(*uParam0))
			{
				func_169(uParam0, 1);
				return;
			}
			if ((unk_0x693EBB4F13506457() - iLocal_670) >= 9000)
			{
				if (!func_154(uParam0))
				{
					func_156(uParam0);
					uParam0->f_1 = unk_0x693EBB4F13506457();
				}
				else
				{
					uParam0->f_1 = unk_0x693EBB4F13506457();
					uParam0->f_5 = 1;
					uParam0->f_6 = 16;
				}
			}
			else if ((unk_0x693EBB4F13506457() - iLocal_670) >= 5000 && (unk_0x693EBB4F13506457() - iLocal_670) <= 5500)
			{
				if (unk_0x277ECDA23D8CCEB4(*uParam0, 0))
				{
					if (unk_0xB13D532555066791(*uParam0))
					{
						unk_0x1F05DFCDCCDAFCDD(*uParam0);
					}
				}
			}
			break;
		
		case 14:
			if ((unk_0x693EBB4F13506457() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_150(*uParam0, unk_0xC8B93D94F8954288(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = unk_0x693EBB4F13506457();
				}
				else if (func_170(Local_111[func_164(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 0);
				}
				else
				{
					func_155(uParam0);
					uParam0->f_1 = unk_0x693EBB4F13506457();
				}
			}
			break;
		
		case 17:
			if ((unk_0x693EBB4F13506457() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_150(*uParam0, unk_0xC8B93D94F8954288(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = unk_0x693EBB4F13506457();
				}
				else if (func_170(Local_111[func_164(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 0);
				}
				else
				{
					func_155(uParam0);
					uParam0->f_1 = unk_0x693EBB4F13506457();
				}
			}
			break;
		
		case 20:
			if (unk_0x74BBB84E37C71AAC(unk_0xC8B93D94F8954288(), 6) && !unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
			{
				if (func_170(*uParam0, unk_0xC8B93D94F8954288(), 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 1);
					return;
				}
			}
			if ((unk_0x693EBB4F13506457() - uParam0->f_1) >= 6000)
			{
				if (!unk_0x8DF850DA069BF37C(*uParam0, unk_0xCC31DB73C65552D8(iLocal_109, 5f, 0f, -2f), unk_0x44C17CCB85A88A1F(iLocal_109, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
				{
					func_156(uParam0);
				}
				else
				{
					func_161(uParam0);
					func_161(&(Local_111[func_164(uParam0->f_10) /*11*/]));
				}
				uParam0->f_1 = unk_0x693EBB4F13506457();
			}
			func_165(uParam0);
			break;
		
		case 22:
			if (unk_0x74BBB84E37C71AAC(unk_0xC8B93D94F8954288(), 6))
			{
				if (func_170(*uParam0, unk_0xC8B93D94F8954288(), 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 1);
					return;
				}
			}
			if ((unk_0x693EBB4F13506457() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_150(*uParam0, unk_0xC8B93D94F8954288(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = unk_0x693EBB4F13506457();
					return;
				}
				else
				{
					func_155(uParam0);
					uParam0->f_1 = unk_0x693EBB4F13506457();
				}
			}
			break;
		
		case 23:
			func_195(uParam0, uParam0->f_10, 1);
			func_165(uParam0);
			if (func_100(*uParam0, Local_667, 2f))
			{
				if (func_152(*uParam0, Local_667, 1126825984, 0))
				{
					unk_0x5124C5FA52D2AF3E(*uParam0);
					uParam0->f_6 = 19;
					uParam0->f_5 = 1;
					uParam0->f_1 = unk_0x693EBB4F13506457();
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
	
	Var0 = { func_153(Param1 - unk_0x44C17CCB85A88A1F(iParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0x2CDF65DEC17DF0F9(iParam0) };
	}
	else
	{
		Var3 = { func_153(unk_0xB867FC7DBA46C0F1(iParam0, 31086, 0f, 5f, 0f) - unk_0xB867FC7DBA46C0F1(iParam0, 31086, 0f, 0f, 0f)) };
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
	if (unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), unk_0xCC31DB73C65552D8(iLocal_109, 0f, 10f, -2f), unk_0xCC31DB73C65552D8(iLocal_109, 0f, 3f, 2f), 5f, 0, 1, 0) && unk_0x2EE26A43F82C8F1B(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_155(var uParam0)
{
	int iVar0;
	
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
		if (func_36(iVar0))
		{
			if (!unk_0xF6D1796681289C21(*uParam0, iVar0, -1, 0, 0))
			{
				uParam0->f_6 = 18;
				uParam0->f_1 = unk_0x693EBB4F13506457();
			}
		}
	}
}

void func_156(var uParam0)
{
	unk_0x6CCF5F545348D54E(2, uLocal_80, joaat("player"));
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
				if (iLocal_661 <= 20 && iLocal_661 != -1)
				{
					Local_134[iLocal_661 /*25*/].f_18 = 1;
				}
				if (!unk_0x0C7EC810080F0459(*uParam0, iLocal_109, 0))
				{
					if (uParam0->f_10 == 0)
					{
						unk_0x81333BEA4837207C(*uParam0, unk_0xCC31DB73C65552D8(iLocal_109, func_130(1)), 1f, -1, 1048576000, 0, 1193033728);
						uParam0->f_7 = 1;
					}
					else
					{
						unk_0x81333BEA4837207C(*uParam0, unk_0xCC31DB73C65552D8(iLocal_109, func_130(0)), 1f, -1, 1048576000, 0, 1193033728);
						uParam0->f_7 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x0C7EC810080F0459(*uParam0, iLocal_109, 0))
			{
				if (uParam0->f_10 == 0)
				{
					unk_0x81333BEA4837207C(*uParam0, unk_0xCC31DB73C65552D8(iLocal_109, func_130(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					unk_0x81333BEA4837207C(*uParam0, unk_0xCC31DB73C65552D8(iLocal_109, func_130(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			break;
		
		case 9:
			if (!Local_134[iLocal_661 /*25*/].f_18)
			{
				if (uParam0->f_9 == 1)
				{
					func_157(uParam0);
				}
				else if (uParam0->f_10 == 0)
				{
					unk_0x81333BEA4837207C(*uParam0, unk_0xCC31DB73C65552D8(iLocal_109, func_130(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					unk_0x81333BEA4837207C(*uParam0, unk_0xCC31DB73C65552D8(iLocal_109, func_130(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			else if (!unk_0x0C7EC810080F0459(*uParam0, iLocal_109, 0))
			{
				if (uParam0->f_10 == 0)
				{
					unk_0x81333BEA4837207C(*uParam0, unk_0xCC31DB73C65552D8(iLocal_109, func_130(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					unk_0x81333BEA4837207C(*uParam0, unk_0xCC31DB73C65552D8(iLocal_109, func_130(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			break;
		
		default:
			break;
	}
	uParam0->f_1 = unk_0x693EBB4F13506457();
	uParam0->f_5 = 0;
}

void func_157(var uParam0)
{
	if (!func_177(*uParam0, -71340211))
	{
		if (Local_134[iLocal_661 /*25*/].f_23 != 0)
		{
			if (func_10(Local_134[iLocal_661 /*25*/].f_17))
			{
				unk_0x9BBDD6BA2D8F2F33(*uParam0, Local_134[iLocal_661 /*25*/].f_17, -1, 0f, 180f, 1f, 0);
			}
		}
		else
		{
			unk_0x81333BEA4837207C(*uParam0, Local_134[iLocal_661 /*25*/].f_19, 1f, 20000, -1f, 0, func_158(Local_134[iLocal_661 /*25*/].f_19, unk_0x44C17CCB85A88A1F(*uParam0, 1), 1));
		}
		if (func_36(iLocal_109))
		{
			unk_0x8619CDF424980CF9(iLocal_109, 5, 0, 0);
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
		fVar0 = unk_0x77491A28B7D799AF(fVar1, fVar2);
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
	if (func_36(iLocal_109) && func_322(unk_0xC8B93D94F8954288()))
	{
		if (unk_0x87D4C731B013290A(iLocal_109, unk_0xC8B93D94F8954288(), 1))
		{
			unk_0x0CBE045BBBA5CFDE(iLocal_109);
			if (func_160() || unk_0xD3A4099D2845F152(iLocal_109) < 851)
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
		if (unk_0x984546D04F4DDFDF(iLocal_109, iVar0, 0))
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
		uParam0->f_1 = unk_0x693EBB4F13506457();
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
			if (!unk_0x2DC9BA2299B45EA6(*uParam0))
			{
				unk_0x31D56B8BF9715256(*uParam0, 1048576000);
				unk_0xB0CA9024AD6266DC(*uParam0);
				unk_0x5323F488E6A1B660(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 8f, -8f, -1, 56, 0, 0, 0, 0);
			}
		}
	}
}

float func_163(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0x949D03817D2A6977((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
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
	if (func_36(iLocal_109) && (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_109, 0) && !unk_0x0C7EC810080F0459(*uParam0, iLocal_109, 0)))
	{
		if (unk_0x9BA9222C7124CA04(iLocal_109) > 0f)
		{
			uParam0->f_1 = unk_0x693EBB4F13506457();
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
	if ((iParam2 != 145 && unk_0x6B4865E08E90ACC5(uVar0)) && unk_0xF2831232D38CD691(&(Global_100976.f_32519[iParam2 /*29*/].f_3)))
	{
		unk_0x8755DAC584918BF9(uVar0, &(Global_100976.f_32519[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_167(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x361E437CE4AD5532(iParam0);
	if (unk_0x18BDAFC0B20C2C9E(iParam0))
	{
		unk_0x3734DA1F207E7166(iVar0, func_168(unk_0xBBAE3E0C60A8AD4B(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xDDD65F4720293225(iVar0, bParam1);
		}
		else
		{
			unk_0x32546F91F646B246(iVar0, 2);
		}
	}
	else if (unk_0x96209AADF56E8FE8(iParam0))
	{
		unk_0x3734DA1F207E7166(iVar0, func_168(unk_0xBBAE3E0C60A8AD4B(), 0.7f, 0.7f));
		unk_0xDDD65F4720293225(iVar0, bParam1);
	}
	else if (unk_0x09C656419AB67926(iParam0))
	{
		unk_0x3734DA1F207E7166(iVar0, func_168(unk_0xBBAE3E0C60A8AD4B(), 0.7f, 0.7f));
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
	if ((unk_0x74BBB84E37C71AAC(unk_0xC8B93D94F8954288(), 6) || iParam1) || uParam0->f_6 == 23)
	{
		if (!func_150(unk_0xC8B93D94F8954288(), *uParam0, 10f))
		{
			if (!func_177(*uParam0, 1805844857))
			{
				uParam0->f_6 = 5;
				uParam0->f_5 = 1;
				uParam0->f_1 = unk_0x693EBB4F13506457();
			}
		}
		else
		{
			uParam0->f_6 = 10;
			uParam0->f_5 = 1;
			uParam0->f_1 = unk_0x693EBB4F13506457();
		}
	}
	else if (uParam0->f_5 != 1)
	{
		if (!func_177(*uParam0, 780511057) && !func_177(*uParam0, -71340211))
		{
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
			uParam0->f_1 = unk_0x693EBB4F13506457();
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
			func_175(&(Local_38[iVar4 /*4*/]));
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
		Local_38[iVar4 /*4*/].f_1 = iParam0;
		Local_38[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0xB867FC7DBA46C0F1(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_171(&(Local_38[iVar4 /*4*/]), Var1, iParam1, &(Local_38[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x693EBB4F13506457() - Local_38[iVar4 /*4*/].f_3) < iParam4);
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
		*uParam0 = unk_0xC4DBC378170CB508(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0x1728AE8531450BFE(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0x96209AADF56E8FE8(iVar7))
	{
		func_10(iVar7);
		if (unk_0x4D3C2AC8339BFB4F(iVar7) == iParam4)
		{
			if (bLocal_79)
			{
				unk_0x69409589C72E60FD(Param1, unk_0x44C17CCB85A88A1F(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x693EBB4F13506457();
			return 1;
		}
		return 0;
	}
	if (unk_0x18BDAFC0B20C2C9E(iVar7))
	{
		func_10(iVar7);
		if (unk_0x277ECDA23D8CCEB4(iParam4, 0))
		{
			if (unk_0xE6E6D9800E15A76C(iVar7) == unk_0x275BEBE583A163B5(iParam4, 0))
			{
				if (bLocal_79)
				{
					unk_0x69409589C72E60FD(Param1, unk_0x44C17CCB85A88A1F(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x693EBB4F13506457();
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
		iVar0 = unk_0x531444754C426278(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x44C17CCB85A88A1F(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0xB867FC7DBA46C0F1(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0xB867FC7DBA46C0F1(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0xB867FC7DBA46C0F1(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0xB867FC7DBA46C0F1(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0xB867FC7DBA46C0F1(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0xB867FC7DBA46C0F1(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x44C17CCB85A88A1F(iParam0, 1);
}

int func_173()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_38.f_0)
	{
		if ((Local_38[iVar0 /*4*/] == 0 && Local_38[iVar0 /*4*/].f_1 == 0) && Local_38[iVar0 /*4*/].f_2 == 0)
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
	
	Var0 = { func_153(unk_0x44C17CCB85A88A1F(iParam1, 1) - unk_0x44C17CCB85A88A1F(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0x2CDF65DEC17DF0F9(iParam0) };
	}
	else
	{
		Var3 = { func_153(unk_0xB867FC7DBA46C0F1(iParam0, 31086, 0f, 5f, 0f) - unk_0xB867FC7DBA46C0F1(iParam0, 31086, 0f, 0f, 0f)) };
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
	while (iVar0 < Local_38.f_0)
	{
		if (Local_38[iVar0 /*4*/].f_1 == iParam0 && Local_38[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_177(int iParam0, int iParam1)
{
	if (func_322(uParam0))
	{
		if (unk_0x090C65D5190A249D(uParam0, iParam1) == 1 || unk_0x090C65D5190A249D(iParam0, iParam1) == 0)
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
			if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_109, 1))
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
			if (unk_0x465DC424E3211BBE(*uParam0, iLocal_109))
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
			else if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_109, 1))
			{
				func_169(uParam0, 0);
				return;
			}
			break;
		
		case 3:
			if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_109, 1))
			{
				func_169(uParam0, 0);
				return;
			}
			if (bLocal_664)
			{
				if (iLocal_661 <= 20 && iLocal_661 != -1)
				{
					if (!Local_134[iLocal_661 /*25*/].f_18)
					{
						if (func_100(*uParam0, Local_134[iLocal_661 /*25*/], 20f))
						{
							if (Local_134[iLocal_661 /*25*/].f_9 && unk_0xF624ACE12DE97FE9(iLocal_109))
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
			if (func_100(*uParam0, Local_134[iLocal_661 /*25*/], 25f))
			{
				if (Local_134[iLocal_661 /*25*/].f_9)
				{
					func_187(uParam0);
				}
				else
				{
					Local_134[iLocal_661 /*25*/].f_18 = 1;
					func_123(0);
				}
			}
			break;
		
		case 5:
			if (func_36(iLocal_109))
			{
				unk_0x5C384485B80ABDBC(iLocal_109, 25f, 10, 0);
				fVar0 = unk_0x9BA9222C7124CA04(iLocal_109);
				if (fVar0 < 8f)
				{
					func_187(uParam0);
				}
			}
			break;
		
		case 6:
			if (!func_177(*uParam0, 242628503) && unk_0xF624ACE12DE97FE9(iLocal_109))
			{
				if (bLocal_664)
				{
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 7;
				}
				else
				{
					unk_0xE5F6BE3F8E937ACE(*uParam0, 0, 0);
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 8;
				}
			}
			break;
		
		case 7:
			if (func_322(Local_111[1 /*11*/]))
			{
				if (unk_0x0C7EC810080F0459(Local_111[1 /*11*/], iLocal_109, 0) && Local_111[1 /*11*/].f_7 == 3)
				{
					func_123(0);
				}
			}
			break;
		
		case 8:
			if (!unk_0x0C7EC810080F0459(*uParam0, iLocal_109, 0))
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
				unk_0x3E2E609450787FFE(&uVar0);
				if (func_163(unk_0x44C17CCB85A88A1F(*uParam0, 1), Local_134[iLocal_661 /*25*/].f_19) > 1.5f)
				{
					unk_0x7FFE31040063EDAE(0, Local_134[iLocal_661 /*25*/].f_19, 0);
				}
				unk_0x5323F488E6A1B660(0, "missfbi4prepp1", "_bag_pickup_garbage_man", 8f, -16f, -1, 528384, 0, 0, 0, 0);
				unk_0x939BC11172AA1303(uVar0);
				unk_0xBFE865E3B513451B(*uParam0, uVar0);
				unk_0xA9351C9309E03069(&uVar0);
				uParam0->f_9 = 2;
			}
			else if (func_184(Local_134[iLocal_661 /*25*/].f_19, *uParam0, 1f, 1f, 8f))
			{
				func_183(uParam0);
				return;
			}
			unk_0x319EF6018B1B83B4(*uParam0, 0.2f);
			break;
		
		case 2:
			if (func_177(*uParam0, 242628503))
			{
				if (unk_0xCD61E9D5CABC7E35(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man", 3))
				{
					if (unk_0x853B39ECA83DA242(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man") >= 0.333f)
					{
						unk_0x9740820061E05C06(*uParam0, "missfbi4prepp1_garbageman", 0f);
						unk_0xE91E6245CD2AA21E(*uParam0, "missfbi4prepp1_garbageman");
						if (func_10(Local_134[iLocal_661 /*25*/].f_17) && !unk_0xB0A9B470CE75BF12(Local_134[iLocal_661 /*25*/].f_17))
						{
							unk_0xAD318582A32CA5D2(Local_134[iLocal_661 /*25*/].f_17, *uParam0, unk_0xF2122440C667309F(*uParam0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
						}
					}
				}
				if (func_184(Local_134[iLocal_661 /*25*/].f_19, *uParam0, 1f, 1f, 8f))
				{
					func_183(uParam0);
					return;
				}
			}
			else if (!func_177(*uParam0, 713668775))
			{
				if (func_36(iLocal_109))
				{
					unk_0x81333BEA4837207C(*uParam0, unk_0xCC31DB73C65552D8(iLocal_109, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, unk_0x59DD203239FBDCAD(iLocal_109));
				}
				uParam0->f_9 = 3;
			}
			unk_0x319EF6018B1B83B4(*uParam0, 0.2f);
			break;
		
		case 3:
			if (func_36(iLocal_109))
			{
				if (!func_184(unk_0xCC31DB73C65552D8(iLocal_109, 0f, -5.5f, 0f), iLocal_109, 1.9f, 1.9f, 8f))
				{
					if (unk_0xA0C23498D8E0BB93(*uParam0, unk_0xCC31DB73C65552D8(iLocal_109, 0f, -5.5f, 0f), 0.9f, 0.9f, 2f, 0, 1, 0))
					{
						if (!func_177(*uParam0, 713668775))
						{
							unk_0x3E2E609450787FFE(&uVar1);
							if (func_163(unk_0x44C17CCB85A88A1F(*uParam0, 1), unk_0x44C17CCB85A88A1F(iLocal_109, 1)) > 3f)
							{
								unk_0x6EAFBB3A7F6ADEA9(0, unk_0x59DD203239FBDCAD(iLocal_109), 0);
							}
							unk_0x5323F488E6A1B660(0, "missfbi4prepp1", "_bag_throw_garbage_man", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x939BC11172AA1303(uVar1);
							unk_0xBFE865E3B513451B(*uParam0, uVar1);
							unk_0xA9351C9309E03069(&uVar1);
							uParam0->f_9 = 4;
						}
					}
					else if (!func_177(*uParam0, 713668775))
					{
						unk_0x81333BEA4837207C(*uParam0, unk_0xCC31DB73C65552D8(iLocal_109, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, unk_0x59DD203239FBDCAD(iLocal_109));
					}
				}
				else
				{
					func_181(uParam0);
				}
			}
			break;
		
		case 4:
			if (!func_184(unk_0xCC31DB73C65552D8(iLocal_109, 0f, -5.5f, 0f), *uParam0, 1.9f, 1.9f, 8f))
			{
				if (func_177(*uParam0, 242628503))
				{
					if (unk_0xCD61E9D5CABC7E35(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man", 3))
					{
						if (unk_0x853B39ECA83DA242(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man") >= 0.391f)
						{
							if (func_10(Local_134[iLocal_661 /*25*/].f_17))
							{
								if (unk_0xB0A9B470CE75BF12(Local_134[iLocal_661 /*25*/].f_17))
								{
									unk_0x31D56B8BF9715256(*uParam0, 1048576000);
									unk_0xB0CA9024AD6266DC(*uParam0);
									unk_0xB81176DFD2611E8B(Local_134[iLocal_661 /*25*/].f_17, 1, 0);
									unk_0xBE489D476FCCD385(Local_134[iLocal_661 /*25*/].f_17, 2f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1082130432, -1082130432, -1082130432);
									unk_0x826839BB9226283E(Local_134[iLocal_661 /*25*/].f_17, 1, unk_0x2CDF65DEC17DF0F9(*uParam0), 0, 1, 1, 0);
								}
								if (unk_0xA499226F64D3A26A(Local_134[iLocal_661 /*25*/].f_17, iLocal_109))
								{
									func_180(&(Local_134[iLocal_661 /*25*/].f_17));
								}
							}
						}
					}
				}
				else
				{
					uParam0->f_9 = 0;
					if (func_36(iLocal_109))
					{
						unk_0x3D289B1B7567CB62(iLocal_109, 5, 0);
						func_180(&(Local_134[iLocal_661 /*25*/].f_17));
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
	if (unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (unk_0xE33A9405F8300B78(*uParam0))
		{
			unk_0xB81176DFD2611E8B(*uParam0, 1, 1);
		}
		unk_0xA278ECBE30D8AE4F(uParam0);
	}
}

void func_181(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0x6CCF5F545348D54E(5, uLocal_80, joaat("player"));
	func_162(uParam0);
	if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		if (!unk_0x277ECDA23D8CCEB4(*uParam0, 0))
		{
			unk_0x0B4BD476AC97EAFF(*uParam0, unk_0xC8B93D94F8954288(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0x3E2E609450787FFE(&uVar0);
			unk_0xE5F6BE3F8E937ACE(0, 0, 0);
			unk_0x45EF2026AF681474(0, unk_0xC8B93D94F8954288(), 0, 16);
			unk_0x939BC11172AA1303(uVar0);
			unk_0xBFE865E3B513451B(*uParam0, uVar0);
			unk_0xA9351C9309E03069(&uVar0);
		}
	}
	else
	{
		unk_0x3E2E609450787FFE(&uVar1);
		unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), 0);
		unk_0x45EF2026AF681474(0, unk_0xC8B93D94F8954288(), 0, 16);
		unk_0x939BC11172AA1303(uVar1);
		unk_0xBFE865E3B513451B(*uParam0, uVar1);
		unk_0xA9351C9309E03069(&uVar1);
	}
	unk_0x31D56B8BF9715256(*uParam0, 1048576000);
	unk_0xB0CA9024AD6266DC(*uParam0);
	func_182();
	if (!unk_0x6B4865E08E90ACC5(uParam0->f_4))
	{
		uParam0->f_4 = func_166(*uParam0, 1, 145);
	}
	uParam0->f_1 = unk_0x693EBB4F13506457();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 15;
}

void func_182()
{
	Local_82.f_0 = 0;
	Local_82.f_26 = 0;
	Local_82.f_18 = 0;
}

void func_183(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0x6CCF5F545348D54E(5, uLocal_80, joaat("player"));
	func_162(uParam0);
	if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		if (!unk_0x277ECDA23D8CCEB4(*uParam0, 0))
		{
			unk_0x0B4BD476AC97EAFF(*uParam0, unk_0xC8B93D94F8954288(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0x3E2E609450787FFE(&uVar0);
			unk_0xE5F6BE3F8E937ACE(0, 0, 0);
			unk_0x45EF2026AF681474(0, unk_0xC8B93D94F8954288(), 0, 16);
			unk_0x939BC11172AA1303(uVar0);
			unk_0xBFE865E3B513451B(*uParam0, uVar0);
			unk_0xA9351C9309E03069(&uVar0);
		}
	}
	else
	{
		unk_0x3E2E609450787FFE(&uVar1);
		unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), 0);
		unk_0x45EF2026AF681474(0, unk_0xC8B93D94F8954288(), 0, 16);
		unk_0x939BC11172AA1303(uVar1);
		unk_0xBFE865E3B513451B(*uParam0, uVar1);
		unk_0xA9351C9309E03069(&uVar1);
	}
	unk_0x31D56B8BF9715256(*uParam0, 1048576000);
	unk_0xB0CA9024AD6266DC(*uParam0);
	func_182();
	if (!unk_0x6B4865E08E90ACC5(uParam0->f_4))
	{
		uParam0->f_4 = func_166(*uParam0, 1, 145);
	}
	uParam0->f_1 = unk_0x693EBB4F13506457();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 14;
}

int func_184(struct<3> Param0, int iParam3, struct<3> Param4)
{
	Local_82.f_2 = { Param0 };
	Local_82.f_8 = { Param4 };
	func_185(&Local_82, iParam3);
	if (Local_82.f_26)
	{
		if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
		{
			if (unk_0x18BDAFC0B20C2C9E(Local_82.f_18))
			{
				if (func_10(Local_82.f_18))
				{
					if (unk_0xE6E6D9800E15A76C(Local_82.f_18) == unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 1))
					{
						return 1;
					}
				}
			}
		}
		else if (unk_0x96209AADF56E8FE8(Local_82.f_18))
		{
			if (func_10(Local_82.f_18))
			{
				if (unk_0x4D3C2AC8339BFB4F(Local_82.f_18) == unk_0xC8B93D94F8954288())
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
	
	iVar1 = unk_0x1728AE8531450BFE(*uParam0, &iVar0, &(uParam0->f_20), &(uParam0->f_23), &(uParam0->f_18));
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
			*uParam0 = unk_0xC4DBC378170CB508(uParam0->f_2, uParam0->f_5, 511, uParam1, 7);
			break;
		
		case 2:
			*uParam0 = unk_0x7DEA9A555ED02466(uParam0->f_17, 511, 4);
			break;
		
		case 3:
			*uParam0 = unk_0x80C34D9839F37761(uParam0->f_17, 511, 4);
			break;
		
		case 4:
			*uParam0 = unk_0xEF53668790948821(uParam0->f_2, uParam0->f_8, uParam0->f_11, uParam0->f_14, 6, iParam1, 4);
			break;
		
		case 5:
			*uParam0 = unk_0x11D05B86BE37CF0E(uParam0->f_2, uParam0->f_5, uParam0->f_15, 511, iParam1, 4);
			break;
	}
	uParam0->f_16 = *uParam0 != 0;
}

void func_187(var uParam0)
{
	var uVar0;
	
	if (func_36(iLocal_109))
	{
		unk_0x3E2E609450787FFE(&uVar0);
		unk_0xAC59C2795E065D27(0, iLocal_109, Local_134[iLocal_661 /*25*/].f_3, 8f, 0, joaat("trash"), 786469, 10f, 15f);
		unk_0xBD14E3B051184704(0, iLocal_109, Local_134[iLocal_661 /*25*/].f_3, Local_134[iLocal_661 /*25*/].f_8, Local_134[iLocal_661 /*25*/].f_10, 5f, 1);
		unk_0x939BC11172AA1303(uVar0);
		unk_0xBFE865E3B513451B(*uParam0, uVar0);
		unk_0xA9351C9309E03069(&uVar0);
		uParam0->f_7 = 6;
	}
}

void func_188()
{
	func_157(&(Local_111[1 /*11*/]));
}

void func_189(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (func_184(unk_0xCC31DB73C65552D8(iLocal_109, func_130(bParam1)), iLocal_109, 1.9f, 1.9f, 8f))
	{
		if (unk_0x8DF850DA069BF37C(*uParam0, unk_0xCC31DB73C65552D8(iLocal_109, 5f, 0f, -2f), unk_0x44C17CCB85A88A1F(iLocal_109, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0) && unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), unk_0xCC31DB73C65552D8(iLocal_109, 5f, 0f, -2f), unk_0x44C17CCB85A88A1F(iLocal_109, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
		{
			func_190(uParam0);
		}
		else if (!func_177(*uParam0, 1227113341) && unk_0x8DF850DA069BF37C(unk_0xC8B93D94F8954288(), unk_0xCC31DB73C65552D8(iLocal_109, 5f, 0f, -2f), unk_0x44C17CCB85A88A1F(iLocal_109, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
		{
			unk_0x5124C5FA52D2AF3E(*uParam0);
			unk_0x1510D3A1E178AAEF(*uParam0, unk_0xC8B93D94F8954288(), -1, 4f, 1f, 1073741824, 0);
		}
	}
	else if (func_100(*uParam0, unk_0xCC31DB73C65552D8(iLocal_109, func_130(bParam1)), 5f))
	{
		iVar0 = -1;
		if (!bParam1)
		{
			iVar0 = 0;
		}
		unk_0x9CEFBE395E148A32(*uParam0, iLocal_109, -1, iVar0, 1f, 8388609, 0);
		uParam0->f_7 = 2;
	}
}

void func_190(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0x6CCF5F545348D54E(5, uLocal_80, joaat("player"));
	func_162(uParam0);
	if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		if (!unk_0x277ECDA23D8CCEB4(*uParam0, 0))
		{
			unk_0x0B4BD476AC97EAFF(*uParam0, unk_0xC8B93D94F8954288(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0x3E2E609450787FFE(&uVar0);
			unk_0xE5F6BE3F8E937ACE(0, 0, 0);
			unk_0x45EF2026AF681474(0, unk_0xC8B93D94F8954288(), 0, 16);
			unk_0x939BC11172AA1303(uVar0);
			unk_0xBFE865E3B513451B(*uParam0, uVar0);
			unk_0xA9351C9309E03069(&uVar0);
		}
	}
	else
	{
		unk_0x3E2E609450787FFE(&uVar1);
		unk_0xC518AECFA9CF7722(0, unk_0xC8B93D94F8954288(), 0);
		unk_0x45EF2026AF681474(0, unk_0xC8B93D94F8954288(), 0, 16);
		unk_0x939BC11172AA1303(uVar1);
		unk_0xBFE865E3B513451B(*uParam0, uVar1);
		unk_0xA9351C9309E03069(&uVar1);
	}
	unk_0x31D56B8BF9715256(*uParam0, 1048576000);
	unk_0xB0CA9024AD6266DC(*uParam0);
	func_182();
	uParam0->f_1 = unk_0x693EBB4F13506457();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 13;
}

void func_191(var uParam0)
{
	if (uParam0->f_5 != 1)
	{
		if (func_36(iLocal_109) && unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
		{
			if (!func_177(*uParam0, 2104565373) && unk_0x0C7EC810080F0459(*uParam0, iLocal_109, 0))
			{
				if (func_150(unk_0xC8B93D94F8954288(), iLocal_109, 10f))
				{
					if (unk_0xA499226F64D3A26A(iLocal_109, unk_0xC8B93D94F8954288()))
					{
						unk_0x8F3E5BF92E9D9D11(*uParam0, unk_0xC8B93D94F8954288(), 0, 0f, 0f, 0f, 10f, 100, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
						uParam0->f_1 = unk_0x693EBB4F13506457();
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
	while (iVar0 <= (iLocal_81 - 1))
	{
		if (Local_134[iVar0 /*25*/].f_23 != 0)
		{
			if (Local_134[iVar0 /*25*/].f_24)
			{
				if ((iVar0 != iLocal_661 && func_10(Local_134[iVar0 /*25*/].f_17)) && func_194(Local_134[iVar0 /*25*/].f_17, unk_0xC8B93D94F8954288(), 1) > 200f)
				{
					unk_0xA278ECBE30D8AE4F(&(Local_134[iVar0 /*25*/].f_17));
					Local_134[iVar0 /*25*/].f_24 = 0;
				}
			}
			else if (Local_134[iVar0 /*25*/].f_23 != 0)
			{
				if (func_100(unk_0xC8B93D94F8954288(), Local_134[iVar0 /*25*/], 100f) || func_100(Local_111[0 /*11*/], Local_134[iVar0 /*25*/], 120f))
				{
					Local_134[iVar0 /*25*/].f_24 = func_193(&(Local_134[iVar0 /*25*/].f_17), Local_134[iVar0 /*25*/].f_23, Local_134[iVar0 /*25*/].f_19, Local_134[iVar0 /*25*/].f_22, 1);
				}
			}
		}
		iVar0++;
	}
}

int func_193(var uParam0, var uParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (!unk_0x95CCECA3948CFE7B(*uParam0))
	{
		if (func_145(uParam1, "Loading", 0))
		{
			*uParam0 = unk_0x7C62BC1EB194D985(uParam1, Param2, 1, 1, 0);
			if (unk_0x95CCECA3948CFE7B(*uParam0))
			{
				unk_0x765E3FA65D011F03(*uParam0, uParam5);
				unk_0xE457AC24AF211ECC(*uParam0);
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
	
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 0) };
	}
	if (!unk_0xB6900B8CB0ABBD2B(iParam1))
	{
		Var3 = { unk_0x44C17CCB85A88A1F(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x44C17CCB85A88A1F(iParam1, 0) };
	}
	return unk_0x4F982ED5336EA899(Var0, Var3, iParam2);
}

void func_195(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_5 != 1 || iParam2)
	{
		if (!func_322(Local_111[func_164(iParam1) /*11*/]))
		{
			if (!bLocal_665)
			{
				if (unk_0x95CCECA3948CFE7B(Local_111[func_164(iParam1) /*11*/]))
				{
					if (func_174(*uParam0, Local_111[func_164(iParam1) /*11*/], 140f, 0) || func_150(Local_111[func_164(iParam1) /*11*/], *uParam0, 3f))
					{
						func_169(uParam0, 0);
						bLocal_665 = true;
						return;
					}
					else
					{
						Local_667 = { unk_0x44C17CCB85A88A1F(Local_111[func_164(iParam1) /*11*/], 1) };
						uParam0->f_1 = unk_0x693EBB4F13506457();
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
		else if (Local_111[func_164(iParam1) /*11*/].f_6 == 22)
		{
			if (func_174(*uParam0, Local_111[func_164(iParam1) /*11*/], 140f, 0) && func_150(Local_111[func_164(iParam1) /*11*/], unk_0xC8B93D94F8954288(), 15f))
			{
				uParam0->f_5 = 1;
				uParam0->f_6 = 21;
			}
		}
		else if (Local_111[func_164(iParam1) /*11*/].f_6 == 5 || Local_111[func_164(iParam1) /*11*/].f_6 == 7)
		{
			if (func_150(Local_111[func_164(iParam1) /*11*/], *uParam0, 10f))
			{
				func_169(uParam0, 0);
			}
		}
		if (func_206(*uParam0))
		{
			func_162(uParam0);
			uParam0->f_1 = unk_0x693EBB4F13506457();
			uParam0->f_8 = uParam0->f_7;
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
		}
		if (uParam0->f_10 == 0 && uParam0->f_7 == 4)
		{
			if (func_154(uParam0))
			{
				if (unk_0x0C7EC810080F0459(*uParam0, iLocal_109, 0))
				{
					unk_0x8F3E5BF92E9D9D11(*uParam0, unk_0xC8B93D94F8954288(), 0, 0f, 0f, 0f, 10f, 100, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
					unk_0x11E259AF76FFB0BA(iLocal_109, 2000f);
					iLocal_670 = unk_0x693EBB4F13506457();
					uParam0->f_1 = unk_0x693EBB4F13506457();
					uParam0->f_6 = 16;
					uParam0->f_5 = 1;
				}
			}
		}
		if (func_197(*uParam0, 1, 70f, 170f, 0, 1, 0, 0) && !func_196(uParam0))
		{
			if (unk_0x74BBB84E37C71AAC(unk_0xC8B93D94F8954288(), 6))
			{
				if (func_36(iLocal_109))
				{
					if (unk_0x0C7EC810080F0459(*uParam0, iLocal_109, 0))
					{
						if (unk_0x9BA9222C7124CA04(iLocal_109) > 5f)
						{
							if (iParam1 == 0)
							{
								unk_0xC2E4F4B0B73CFE01(*uParam0, iLocal_109, unk_0xC8B93D94F8954288(), 8, 30f, 786469, 300f, 2f, 1);
								uParam0->f_6 = 7;
								unk_0x9F3B55DA0D0220DD(Local_111[func_164(iParam1) /*11*/], -1);
								Local_111[func_164(iParam1) /*11*/].f_6 = 10;
								Local_111[func_164(iParam1) /*11*/].f_5 = 1;
								uParam0->f_5 = 1;
								uParam0->f_1 = unk_0x693EBB4F13506457();
								Local_111[func_164(iParam1) /*11*/].f_1 = unk_0x693EBB4F13506457();
							}
							else
							{
								unk_0x9F3B55DA0D0220DD(*uParam0, -1);
								uParam0->f_6 = 12;
								unk_0xC2E4F4B0B73CFE01(Local_111[func_164(iParam1) /*11*/], iLocal_109, unk_0xC8B93D94F8954288(), 8, 30f, 786469, 300f, 2f, 1);
								Local_111[func_164(iParam1) /*11*/].f_6 = 5;
								Local_111[func_164(iParam1) /*11*/].f_5 = 1;
								uParam0->f_5 = 1;
								uParam0->f_1 = unk_0x693EBB4F13506457();
								Local_111[func_164(iParam1) /*11*/].f_1 = unk_0x693EBB4F13506457();
							}
						}
						else
						{
							func_169(uParam0, 0);
							if (unk_0x95CCECA3948CFE7B(Local_111[func_164(iParam1) /*11*/]))
							{
								if (func_174(Local_111[func_164(iParam1) /*11*/], unk_0xC8B93D94F8954288(), 1126825984, 0))
								{
									func_169(&(Local_111[func_164(iParam1) /*11*/]), 0);
								}
							}
						}
						unk_0x0CBE045BBBA5CFDE(*uParam0);
					}
					else
					{
						func_169(uParam0, 0);
						if (unk_0x95CCECA3948CFE7B(Local_111[func_164(iParam1) /*11*/]))
						{
							if (func_170(Local_111[func_164(iParam1) /*11*/], *uParam0, 1126825984, 1, 250, 7))
							{
								func_169(&(Local_111[func_164(iParam1) /*11*/]), 0);
							}
						}
					}
				}
			}
			else
			{
				uParam0->f_1 = unk_0x693EBB4F13506457();
				uParam0->f_8 = uParam0->f_7;
				uParam0->f_5 = 1;
				uParam0->f_6 = 21;
				unk_0x0CBE045BBBA5CFDE(*uParam0);
				if (func_170(Local_111[func_164(iParam1) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					Local_111[func_164(iParam1) /*11*/].f_1 = unk_0x693EBB4F13506457();
					Local_111[func_164(iParam1) /*11*/].f_8 = uParam0->f_7;
					Local_111[func_164(iParam1) /*11*/].f_5 = 1;
					Local_111[func_164(iParam1) /*11*/].f_6 = 21;
					unk_0x0CBE045BBBA5CFDE(Local_111[func_164(iParam1) /*11*/]);
				}
			}
			uParam0->f_5 = 1;
		}
		else if (unk_0xB03AB89ABCAB2B4E(*uParam0))
		{
			func_162(uParam0);
			unk_0x622E764F80DBF8B7(*uParam0, unk_0xC8B93D94F8954288(), 500f, -1, 0, 1);
			uParam0->f_6 = 2;
			uParam0->f_5 = 1;
			uParam0->f_1 = unk_0x693EBB4F13506457();
		}
		if (unk_0x770AAB67BDD9C729(*uParam0))
		{
			if (func_10(Local_134[iLocal_661 /*25*/].f_17))
			{
				if (unk_0xB0A9B470CE75BF12(Local_134[iLocal_661 /*25*/].f_17))
				{
					unk_0xB81176DFD2611E8B(Local_134[iLocal_661 /*25*/].f_17, 1, 0);
					unk_0x826839BB9226283E(Local_134[iLocal_661 /*25*/].f_17, 1, unk_0x2CDF65DEC17DF0F9(*uParam0), 0, 1, 1, 0);
				}
			}
		}
	}
	if (uParam0->f_5 != 1)
	{
		if (func_322(Local_111[func_164(iParam1) /*11*/]))
		{
			if (unk_0xB03AB89ABCAB2B4E(Local_111[func_164(iParam1) /*11*/]))
			{
				func_162(uParam0);
				unk_0x622E764F80DBF8B7(*uParam0, unk_0xC8B93D94F8954288(), 120f, -1, 0, 0);
				uParam0->f_1 = unk_0x693EBB4F13506457();
				uParam0->f_6 = 7;
				uParam0->f_5 = 1;
			}
		}
	}
}

int func_196(var uParam0)
{
	if ((unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), unk_0xCC31DB73C65552D8(*uParam0, 0f, -2f, 0f), 2f, 3f, 2f, 0, 1, 0) && !unk_0x74BBB84E37C71AAC(unk_0xC8B93D94F8954288(), 6)) && unk_0x271A74D807F62BC0(unk_0xC8B93D94F8954288()))
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_10(unk_0xC8B93D94F8954288()) && func_10(iParam0))
	{
		if (unk_0x87D4C731B013290A(iParam0, unk_0xC8B93D94F8954288(), 1))
		{
			return 1;
		}
		if (func_202(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x74BBB84E37C71AAC(unk_0xC8B93D94F8954288(), 6))
		{
			if (unk_0x7E515EEFC038658D(unk_0xC8B93D94F8954288()))
			{
				Var0 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) - unk_0x44C17CCB85A88A1F(iParam0, 1) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_201(unk_0xC8B93D94F8954288(), iParam0, fParam2);
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
	
	if (func_10(unk_0xC8B93D94F8954288()) && func_10(iParam0))
	{
		if (func_200(iParam0) || unk_0x0BBFEAC55291063A(unk_0xA34E7C2A5118D638(), iParam0))
		{
			if (unk_0x74BBB84E37C71AAC(unk_0xC8B93D94F8954288(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
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
	return func_170(iParam0, unk_0xC8B93D94F8954288(), fParam1, 1, 250, 7);
}

int func_200(int iParam0)
{
	if (unk_0xFEDC9F0F78A56158(unk_0xA34E7C2A5118D638(), iParam0) && unk_0x74BBB84E37C71AAC(unk_0xC8B93D94F8954288(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_201(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0x2CDF65DEC17DF0F9(iParam0) };
	Var3 = { unk_0x44C17CCB85A88A1F(iParam1, 1) - unk_0x44C17CCB85A88A1F(iParam0, 1) };
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
	if (func_10(unk_0xC8B93D94F8954288()) && func_10(iParam0))
	{
		unk_0xA51F11E1DC7307BB(unk_0xC8B93D94F8954288(), &iVar2, 1);
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
			if (unk_0xBCB541CE877969BE(unk_0xC8B93D94F8954288()))
			{
				if (unk_0x1E8D3FA42E89ED72(unk_0xC8B93D94F8954288()))
				{
					if (unk_0x0592F98C32AC22CA(unk_0x44C17CCB85A88A1F(iParam0, 1), fVar0, 1))
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
	
	Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0xE9917E76DC9B84DC(unk_0x44C17CCB85A88A1F(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0xE9917E76DC9B84DC(unk_0x44C17CCB85A88A1F(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0xE9917E76DC9B84DC(unk_0x44C17CCB85A88A1F(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0xE9917E76DC9B84DC(unk_0x44C17CCB85A88A1F(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
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
		if (unk_0xEC54737A42D57DA5(Var0, Var3, 1))
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
	
	if ((((unk_0x193ED0143AC10C42(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x193ED0143AC10C42(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x193ED0143AC10C42(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x193ED0143AC10C42(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x193ED0143AC10C42(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
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
		if (unk_0x1E8D3FA42E89ED72(unk_0xC8B93D94F8954288()))
		{
			if (unk_0x5534579797ACFD77(unk_0xC8B93D94F8954288(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x0592F98C32AC22CA(unk_0x44C17CCB85A88A1F(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_206(int iParam0)
{
	if (func_150(uParam0, unk_0xC8B93D94F8954288(), 6f))
	{
		if (!unk_0x277ECDA23D8CCEB4(uParam0, 0))
		{
			if (unk_0xA499226F64D3A26A(iParam0, unk_0xC8B93D94F8954288()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_207()
{
	if (func_36(Local_868.f_0))
	{
		if (func_150(unk_0xC8B93D94F8954288(), Local_868.f_0, 100f) && !iLocal_837)
		{
			unk_0x2395C2755BB76137(joaat("trash"), 3);
			if (!unk_0xC461DA4E85A8E98B(joaat("trash")))
			{
				iLocal_837 = 1;
			}
		}
		else if (!func_150(unk_0xC8B93D94F8954288(), Local_868.f_0, 120f) && iLocal_837)
		{
			unk_0x80454CEB5BC7C46B(joaat("trash"));
			iLocal_837 = 0;
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
				if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), *iParam0, 0))
				{
					func_7(iParam3);
					if (func_99(func_107(func_75()), 0, 0))
					{
						unk_0x74F83E6AF43012A7(func_107(func_75()));
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
						unk_0x74F83E6AF43012A7(func_107(func_75()));
					}
					*iParam2 = 3;
				}
				else
				{
					if (func_99(func_108(func_75(), bParam9), 0, 0))
					{
						unk_0x74F83E6AF43012A7(func_108(func_75(), bParam9));
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
				if ((!unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), *iParam0, 0) && !func_213(*iParam0)) && !func_212(*iParam0))
				{
					func_7(iParam4);
					if (!unk_0xA0C23498D8E0BB93(*iParam0, Param5, iParam10, iParam10, 2f, 0, 1, 2))
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
					if (!unk_0xA0C23498D8E0BB93(*iParam0, Param5, iParam10, iParam10, 2f, 0, 1, 2))
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
	
	if (!bLocal_28)
	{
		if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
		{
			iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
			if (iVar0 != *uParam0)
			{
				if (func_36(iVar0))
				{
					iVar1 = unk_0x6D5BB810CC209E15(iVar0);
					if (iVar1 == joaat("trash"))
					{
						*uParam1 = *uParam0;
						func_6(uParam0);
						*uParam0 = iVar0;
						func_35(*uParam0, 1);
						func_35(*uParam1, 3);
						if (!unk_0xD28A89C669EAD2E4(*uParam0))
						{
							unk_0xFD816D0E738EB817(*uParam0, 1, 1);
						}
					}
					else if (iVar1 == joaat("towtruck"))
					{
						uVar2 = unk_0x1F6784A372BDEF23(unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0));
						if (func_10(uVar2))
						{
							iVar0 = unk_0xE6E6D9800E15A76C(uVar2);
							if (unk_0x6D5BB810CC209E15(iVar0) == joaat("trash"))
							{
								*uParam1 = *uParam0;
								func_6(uParam0);
								*uParam0 = iVar0;
								func_35(*uParam0, 1);
								func_35(*uParam1, 3);
								if (!unk_0xD28A89C669EAD2E4(*uParam0))
								{
									unk_0xFD816D0E738EB817(*uParam0, 1, 1);
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
	
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
		if (iVar0 != *uParam0)
		{
			if (func_36(iVar0))
			{
				if (unk_0x6D5BB810CC209E15(iVar0) == func_211(func_75()))
				{
					func_6(uParam0);
					*uParam0 = iVar0;
					func_35(*uParam0, 1);
					unk_0xFD816D0E738EB817(*uParam0, 1, 1);
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
	
	if ((func_322(unk_0xC8B93D94F8954288()) && unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0)) && func_36(iParam0))
	{
		iVar0 = unk_0x974516F979AD07BC();
		if (func_36(iVar0))
		{
			iVar1 = unk_0x6D5BB810CC209E15(iVar0);
			if ((iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2")) || iVar1 == joaat("cargobob3"))
			{
				if (unk_0xF256E000368EF3D9(iVar0))
				{
					if (unk_0xB25729A0F1686474(iVar0, iParam0))
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
	
	if ((func_322(unk_0xC8B93D94F8954288()) && unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0)) && func_36(iParam0))
	{
		iVar0 = unk_0x974516F979AD07BC();
		if (func_36(iVar0))
		{
			iVar1 = unk_0x6D5BB810CC209E15(iVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2"))
			{
				if (unk_0x416EAF6600782EDD(iVar0, iParam0))
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
	func_208(&iLocal_874, &uLocal_875, &iLocal_686, &iLocal_822, &iLocal_821, Local_827, Local_868.f_0, 0, 1090519040);
	func_148();
	func_231();
	func_207();
	switch (iLocal_684)
	{
		case 0:
			if (func_115(iLocal_683, bLocal_28))
			{
				if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0 && !func_230())
				{
					func_110(&iLocal_821, Local_827, 1);
					func_114("PRA_TAKBACK", &iLocal_820);
				}
				iLocal_684 = 1;
			}
			break;
		
		case 1:
			func_113(&iLocal_821, Local_827, &iLocal_685, iLocal_686, &iLocal_820, &iLocal_838);
			func_220();
			if (func_218(iLocal_874, Local_827, &iLocal_821, iLocal_685, iLocal_686, &iLocal_820, &iLocal_839, 0, 0, 1086324736))
			{
				unk_0xD810132681A9B83C(8f, 5f, 4);
				iLocal_684 = 2;
			}
			break;
		
		case 2:
			func_215();
			func_7(&iLocal_821);
			func_7(&iLocal_822);
			if (func_109(1077936128, 1))
			{
				func_103(0);
			}
			break;
		
		case 3:
			if (func_36(iLocal_874))
			{
				if (!unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_874, 0))
				{
					unk_0x6D9DB313D50E9A0D(unk_0xC8B93D94F8954288(), iLocal_874, -1);
				}
				else
				{
					func_102(iLocal_874, Local_827, 146.5443f, 0, 1);
					func_39(1, 1, 1);
					iLocal_684 = 1;
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
		if (!unk_0x2DC9BA2299B45EA6(iVar1))
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
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
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
		if (!unk_0xDCC86F723E82125E(Global_87293, iVar0))
		{
			return 0;
		}
		unk_0x77621132305B133B(&Global_87293, iVar0);
		return 1;
	}
	return 0;
}

int func_217(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
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
		if (unk_0xDCC86F723E82125E(Global_87293, iVar0))
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
					if (unk_0xA0C23498D8E0BB93(iParam0, Param1, fParam11, fParam11, 2f, 1, 1, 0))
					{
						return 1;
					}
				}
			}
			else if (unk_0xA0C23498D8E0BB93(unk_0xC8B93D94F8954288(), Param1, fParam11, fParam11, 2f, 1, 1, 2))
			{
				return 1;
			}
			if (func_99(func_107(func_75()), 0, 0))
			{
				unk_0x74F83E6AF43012A7(func_107(func_75()));
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
				unk_0x74F83E6AF43012A7(func_108(func_75(), 0));
			}
			func_98(func_107(func_75()), 7500, 0);
			*iParam8 = 1;
		}
	}
	return 0;
}

bool func_219()
{
	return Global_91158.f_296 > 0;
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
		if (!unk_0x2DC9BA2299B45EA6(iVar2))
		{
			if (func_76(iVar2, 0))
			{
				if (!bVar1)
				{
					if (func_150(unk_0xC8B93D94F8954288(), iVar2, 5f))
					{
						if (!func_230())
						{
							func_225(iVar0);
							bVar1 = true;
						}
					}
				}
				if (!iLocal_1048[iVar0])
				{
					if (iVar0 == 0)
					{
						func_91(&uLocal_879, iVar0, iVar2, "MICHAEL", 0, 1);
					}
					else if (iVar0 == 1)
					{
						func_91(&uLocal_879, iVar0, iVar2, "FRANKLIN", 0, 1);
					}
					else if (iVar0 == 2)
					{
						func_91(&uLocal_879, iVar0, iVar2, "TREVOR", 0, 1);
					}
					iLocal_1048[iVar0] = 1;
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
							unk_0xFD816D0E738EB817(iVar2, 1, 1);
							unk_0xAAD662D7E0D59F4C(iVar2, true);
							unk_0x5124C5FA52D2AF3E(iVar2);
						}
					}
				}
			}
			else if (unk_0x1F59F772AA90087D(iVar2, 1))
			{
				if (func_224(iVar2))
				{
					if (unk_0x090C65D5190A249D(iVar2, -1273030092) != 1 && unk_0x090C65D5190A249D(iVar2, -1273030092) != 0)
					{
						if (unk_0x41D85B8EF93F7B19(623.3781f, -172.26f, 1700.732f, -2115.843f))
						{
							unk_0xAC59C2795E065D27(iVar2, unk_0x275BEBE583A163B5(iVar2, 0), Local_827, 20f, 0, 0, 34340901, 2f, 10f);
						}
						else
						{
							unk_0x45A1CC0823F31402(623.3781f, -172.26f, 1700.732f, -2115.843f);
						}
					}
				}
				else if (func_222(iVar2))
				{
					if (func_36(Local_868.f_0))
					{
						if (!func_150(iVar2, Local_868.f_0, 17f))
						{
							if (unk_0x090C65D5190A249D(iVar2, -1273030092) != 1 && unk_0x090C65D5190A249D(iVar2, -1273030092) != 0)
							{
								unk_0xBA1C58C1ED9624DD(iVar2, unk_0x275BEBE583A163B5(iVar2, 0), Local_868.f_0, 3, 20f, 786468, 2f, 0.5f, 1);
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
	if (!unk_0x2DC9BA2299B45EA6(iParam0))
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
		if (unk_0xDCC86F723E82125E(Global_87293, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0xC8B93D94F8954288())
			{
				return 0;
			}
		}
		if (unk_0xDCC86F723E82125E(Global_87292, iVar0))
		{
			unk_0xD6586258E56BBD46(iParam0, 0, 0);
			unk_0x05BE583DF8C6A617(iParam0, 0);
			unk_0x59A0729D503ED758(&Global_87293, iVar0);
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
		if ((!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0)) && unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0)
		{
			iVar0 = unk_0x275BEBE583A163B5(unk_0xC8B93D94F8954288(), 0);
			if (func_36(iVar0))
			{
				if (unk_0x6B89D299CB2A726F(iVar0, joaat("trash")))
				{
					return 0;
				}
				if (unk_0x0C7EC810080F0459(iParam0, iVar0, 0) && unk_0xC0ADAF0814175B68(iVar0, -1) == iParam0)
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
	if (!unk_0xBBAE3E0C60A8AD4B())
	{
		return Global_88917.f_44 == 1;
	}
	return 0;
}

int func_224(int iParam0)
{
	if (!func_223())
	{
		if ((unk_0x95CCECA3948CFE7B(Local_868.f_0) && unk_0x5D42322C7DB888D0(Local_868.f_0, 0)) && !unk_0xA0C23498D8E0BB93(Local_868.f_0, Local_827, 2f, 2f, 2f, 0, 1, 0))
		{
			if ((!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()) && unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), Local_868.f_0, 0)) && unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0)
			{
				if (unk_0x0C7EC810080F0459(iParam0, Local_868.f_0, 0) && unk_0xC0ADAF0814175B68(Local_868.f_0, -1) == iParam0)
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
	if (iLocal_683 > 1)
	{
		if (iLocal_685 > 0)
		{
			if (!unk_0xDCC86F723E82125E(Local_688[iParam0 /*8*/].f_7, 0) && iLocal_686 == 1)
			{
				if (!unk_0xA3858ADDDBC3CB71())
				{
					if (func_229(&uLocal_879, cLocal_878, Local_688[iParam0 /*8*/][0], 8, 0, 0, 0))
					{
						unk_0x59A0729D503ED758(&(Local_688[iParam0 /*8*/].f_7), 0);
					}
				}
			}
		}
		else
		{
			if ((unk_0xDCC86F723E82125E(Local_688[iParam0 /*8*/].f_7, 0) && !unk_0xDCC86F723E82125E(Local_688[iParam0 /*8*/].f_7, 1)) && iLocal_686 == 1)
			{
				if (!unk_0xA3858ADDDBC3CB71())
				{
					if (func_229(&uLocal_879, cLocal_878, Local_688[iParam0 /*8*/][1], 7, 0, 0, 0))
					{
						unk_0x59A0729D503ED758(&(Local_688[iParam0 /*8*/].f_7), 1);
					}
				}
			}
			if (!unk_0xDCC86F723E82125E(Local_688[iParam0 /*8*/].f_7, 5))
			{
				if (func_228(iLocal_874, Local_827, 1) < 15f && iLocal_686 == 1)
				{
					if (!unk_0xA3858ADDDBC3CB71())
					{
						if (func_229(&uLocal_879, cLocal_878, Local_688[iParam0 /*8*/][5], 7, 0, 0, 0))
						{
							unk_0x59A0729D503ED758(&(Local_688[iParam0 /*8*/].f_7), 5);
						}
					}
				}
			}
			switch (func_29(unk_0xC8B93D94F8954288()))
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
	if (!unk_0xDCC86F723E82125E(Local_688[iParam0 /*8*/].f_7, iParam1))
	{
		if (iLocal_1052 != -1)
		{
			if (!unk_0xA3858ADDDBC3CB71())
			{
				if (func_229(&uLocal_879, cLocal_878, Local_688[iParam0 /*8*/][iParam1], 7, 0, 0, 0))
				{
					unk_0x59A0729D503ED758(&(Local_688[iParam0 /*8*/].f_7), iParam1);
				}
			}
		}
		else if (!func_230() && !unk_0xA3858ADDDBC3CB71())
		{
			iLocal_1052 = unk_0x693EBB4F13506457();
		}
		else
		{
			iLocal_1052 = -1;
		}
	}
}

int func_227(int iParam0)
{
	if ((unk_0xDCC86F723E82125E(Local_688[0 /*8*/].f_7, iParam0) || unk_0xDCC86F723E82125E(Local_688[1 /*8*/].f_7, iParam0)) || unk_0xDCC86F723E82125E(Local_688[2 /*8*/].f_7, iParam0))
	{
		return 1;
	}
	return 0;
}

float func_228(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xB6900B8CB0ABBD2B(iParam0))
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x44C17CCB85A88A1F(iParam0, 0) };
	}
	return unk_0x4F982ED5336EA899(Var0, Param1, iParam4);
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
	Global_15719 = 0;
	Global_15721 = 0;
	Global_15726 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 0;
	Global_2621441 = 0;
	return func_81(sParam2, iParam3, 0);
}

int func_230()
{
	if (Global_15712 != 0 || unk_0x2964A62922189B93())
	{
		return 1;
	}
	return 0;
}

void func_231()
{
	if (func_100(unk_0xC8B93D94F8954288(), Local_827, 220f))
	{
		if (!iLocal_877 && !func_100(unk_0xC8B93D94F8954288(), Local_827, 100f))
		{
			iLocal_877 = func_146(&uLocal_876, joaat("cavalcade2"), 1370.912f, -2060.055f, 50.9983f, 312.8686f, 1);
		}
	}
	else if (func_100(unk_0xC8B93D94F8954288(), Local_827, 240f))
	{
		if (iLocal_877)
		{
			func_6(&uLocal_876);
			iLocal_877 = 0;
		}
	}
}

void func_232()
{
	func_208(&iLocal_874, &uLocal_875, &iLocal_686, &iLocal_822, &iLocal_821, Local_827, Local_868.f_0, 0, 1090519040);
	func_207();
	func_148();
	switch (iLocal_684)
	{
		case 0:
			if (func_115(iLocal_683, bLocal_28))
			{
				func_118(&iLocal_821, Local_868.f_0, 1);
				func_114("PRA_GOVAN", &iLocal_820);
				iLocal_684 = 1;
			}
			break;
		
		case 1:
			func_220();
			if (func_36(Local_868.f_0))
			{
				func_235(&uLocal_671, Local_868.f_0, 0, 0, 1, 1, 1);
			}
			if (!bLocal_833)
			{
				if (func_322(Local_840.f_0) && unk_0xB03AB89ABCAB2B4E(Local_840.f_0))
				{
					func_234();
				}
				if (func_322(Local_854.f_0) && unk_0xB03AB89ABCAB2B4E(Local_854.f_0))
				{
					func_234();
				}
			}
			if (func_36(iLocal_874))
			{
				if ((iLocal_686 == 1 || iLocal_686 == 2) || iLocal_686 == 3)
				{
					unk_0xD810132681A9B83C(5f, 5f, 4);
					iLocal_684 = 2;
				}
			}
			break;
		
		case 2:
			func_7(&iLocal_821);
			func_138(&uLocal_671, 0, 0);
			func_103(0);
			break;
		
		case 3:
			func_8(&Local_840);
			func_8(&Local_854);
			if (func_36(Local_868.f_0))
			{
				unk_0x6D9DB313D50E9A0D(unk_0xC8B93D94F8954288(), Local_868.f_0, -1);
			}
			func_233(1);
			func_39(1, 1, 1);
			iLocal_684 = 1;
			break;
	}
}

void func_233(bool bParam0)
{
	unk_0x21F5FB3C8D48F7F5(1, bParam0);
	unk_0x21F5FB3C8D48F7F5(2, bParam0);
	unk_0x21F5FB3C8D48F7F5(3, bParam0);
	unk_0x21F5FB3C8D48F7F5(4, bParam0);
	unk_0x21F5FB3C8D48F7F5(5, bParam0);
	if (bParam0)
	{
		unk_0xFD62177C7242216E(1f);
		unk_0x60B57BC5E51D2074(5);
	}
	else
	{
		unk_0x60B57BC5E51D2074(0);
		unk_0xFD62177C7242216E(0f);
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
	bLocal_833 = func_229(&uLocal_879, "FBIPRAU", sVar0, 7, 0, 0, 0);
	if (bLocal_833)
	{
		unk_0xD810132681A9B83C(8f, 8f, 4);
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
	if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
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
	
	if (uParam0->f_1 && unk_0x000CF7FDBE12A995())
	{
		if (unk_0x693EBB4F13506457() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x544AEDB4A15228FF(iVar0))
	{
		if (!unk_0xBBAE3E0C60A8AD4B())
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
	if (func_254(iParam1) && unk_0xA6CD622BBD209756(iParam1))
	{
		iVar1 = 0;
		if (unk_0x96209AADF56E8FE8(iParam1))
		{
			unk_0x9CA8182BDC7D7450(unk_0x4D3C2AC8339BFB4F(iParam1));
			unk_0x6C12B62E76FE9036(unk_0x4D3C2AC8339BFB4F(iParam1), 1);
			if (unk_0xBB4ECE53D1EE4591(unk_0x4D3C2AC8339BFB4F(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x18BDAFC0B20C2C9E(iParam1))
		{
			unk_0x7C7A530079E9B9B3(unk_0xE6E6D9800E15A76C(iParam1));
			if (unk_0x6F8903E388F042E0(unk_0xE6E6D9800E15A76C(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x09C656419AB67926(iParam1))
		{
			unk_0x397ADCFB3F61354A(unk_0x9F549071D7D4F964(iParam1));
			if (unk_0xE7994FBA4D7CF174(unk_0x9F549071D7D4F964(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x000CF7FDBE12A995())
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
					if ((unk_0x544AEDB4A15228FF(uParam0->f_3) && !unk_0x544AEDB4A15228FF(iVar0)) && unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
					{
						if ((iVar1 && !unk_0xB45DF29A98EEAD5D()) && uParam8)
						{
							if (!func_139(iVar0))
							{
								func_242(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xF8D041B05C3D1FD4("CMN_HINT", iVar0))
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
				if (unk_0x544AEDB4A15228FF(uParam0->f_3) && !unk_0x544AEDB4A15228FF(iVar0))
				{
					if (((unk_0xE77F5DDBC2E96204(iParam1) && iVar1) && !unk_0xB45DF29A98EEAD5D()) && uParam8)
					{
						if (!func_139(iVar0))
						{
							func_242(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xF8D041B05C3D1FD4("CMN_HINT", iVar0))
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
			if (!unk_0x544AEDB4A15228FF(sParam5))
			{
				if (func_139(sParam5))
				{
					unk_0x9F4AA6F234E8A860(1);
				}
			}
			if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
			{
				if (unk_0x3C134D3F9397F5AD(unk_0xC8B93D94F8954288()))
				{
					if (unk_0xA9B6C2A8F9FE269A(3) == 3 || unk_0xA9B6C2A8F9FE269A(3) == 4)
					{
						func_138(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x0AE990D4D01D6BFE(unk_0xC8B93D94F8954288()))
				{
					if (unk_0xA9B6C2A8F9FE269A(6) == 3 || unk_0xA9B6C2A8F9FE269A(6) == 4)
					{
						func_138(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xBAD11A89BAC646B5(unk_0xC8B93D94F8954288()))
				{
					if (unk_0xA9B6C2A8F9FE269A(4) == 3 || unk_0xA9B6C2A8F9FE269A(4) == 4)
					{
						func_138(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x5F8B03A7AC4264A8(unk_0xC8B93D94F8954288()))
				{
					if (unk_0xA9B6C2A8F9FE269A(5) == 3 || unk_0xA9B6C2A8F9FE269A(5) == 4)
					{
						func_138(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x58917C3789C671FC(unk_0xC8B93D94F8954288()))
				{
					if (unk_0xA9B6C2A8F9FE269A(2) == 3 || unk_0xA9B6C2A8F9FE269A(2) == 4)
					{
						func_138(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xCA4987CF8AD5A394() == 3 || unk_0xCA4987CF8AD5A394() == 4)
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
	if (func_254(unk_0xC8B93D94F8954288()))
	{
		unk_0xD1FE26E80A6E2C00(unk_0xC8B93D94F8954288());
	}
	if (unk_0x000CF7FDBE12A995())
	{
		unk_0xE3B1382567189443(1);
		unk_0x2F309AF34613F2FA(0);
		unk_0xDB9D78E5137EE7AD("HINT_CAM_SCENE");
		unk_0xEF8DA481DD536EEE("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xD7F5001BB6D13A64("FocusOut", 0, 0);
			unk_0xC4EE38A4CFF7544C(-1, "FocusOut", "HintCamSounds", 1);
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
		if (uParam0->f_2 + iVar0) > unk_0x693EBB4F13506457()
		{
			return 1;
		}
	}
	return 0;
}

int func_241(bool bParam0)
{
	switch (Global_35700)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_100976.f_8683.f_100++;
			}
			return Global_100976.f_8683.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_100976.f_8683.f_101++;
			}
			return Global_100976.f_8683.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_100976.f_8683.f_102++;
			}
			return Global_100976.f_8683.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_242(char* sParam0, int iParam1)
{
	unk_0xF4A7F7324E8C92A2(sParam0);
	unk_0x31D76F87C39FB8DD(0, 0, 1, iParam1);
}

int func_243(char* sParam0)
{
	if (!func_244(1, 1, 0))
	{
		if ((!unk_0xB8A06E7E729EED0A(sParam0) && func_139(sParam0)) || func_139("CMN_HINT"))
		{
			unk_0x9F4AA6F234E8A860(1);
		}
		return 0;
	}
	switch (Global_35700)
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
		if (!unk_0x0332C5816E3E66D5(unk_0xA34E7C2A5118D638()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xA8D4B6BDCF6DE72B())
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
	if (unk_0x23F863EF7FB5E687())
	{
		return 0;
	}
	if (Global_67968)
	{
		return 0;
	}
	if (unk_0xCBC8FFE55DC722B5(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52841)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
		{
			if (unk_0x3C134D3F9397F5AD(unk_0xC8B93D94F8954288()))
			{
				if (unk_0xA9B6C2A8F9FE269A(3) == 3 || unk_0xA9B6C2A8F9FE269A(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x0AE990D4D01D6BFE(unk_0xC8B93D94F8954288()))
			{
				if (unk_0xA9B6C2A8F9FE269A(6) == 3 || unk_0xA9B6C2A8F9FE269A(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xBAD11A89BAC646B5(unk_0xC8B93D94F8954288()))
			{
				if (unk_0xA9B6C2A8F9FE269A(4) == 3 || unk_0xA9B6C2A8F9FE269A(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x5F8B03A7AC4264A8(unk_0xC8B93D94F8954288()))
			{
				if (unk_0xA9B6C2A8F9FE269A(5) == 3 || unk_0xA9B6C2A8F9FE269A(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x58917C3789C671FC(unk_0xC8B93D94F8954288()))
			{
				if (unk_0xA9B6C2A8F9FE269A(2) == 3 || unk_0xA9B6C2A8F9FE269A(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xCA4987CF8AD5A394() == 3 || unk_0xCA4987CF8AD5A394() == 4)
			{
				return 0;
			}
			if (unk_0x31D2E9F5F8505E5A())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_245()
{
	return unk_0x693EBB4F13506457() <= Global_17257.f_5745 + 100;
}

void func_246(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xB6900B8CB0ABBD2B(iParam1))
	{
		func_138(uParam0, 0, 0);
	}
	if (func_15(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x96209AADF56E8FE8(iParam1))
		{
			iVar0 = unk_0x4D3C2AC8339BFB4F(iParam1);
			if (!unk_0x277ECDA23D8CCEB4(iVar0, 0))
			{
				if (unk_0xA815CBE767EFA3CB(iVar0))
				{
					if (!func_247())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xAC281E457992D7AB(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0xE3B1382567189443(0);
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
	unk_0x4E0A15B03F32C5E5(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xE48D9147BC1F4CD7(unk_0xC8B93D94F8954288(), iParam1, -1, iVar3, iVar4);
	unk_0xD7F5001BB6D13A64("FocusIn", 0, 0);
	unk_0x925AE2E6F6E41362("HINT_CAM_SCENE");
	unk_0xC4EE38A4CFF7544C(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x693EBB4F13506457();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_247()
{
	return func_248(unk_0xA34E7C2A5118D638());
}

int func_248(int iParam0)
{
	if (unk_0x6D5BB810CC209E15(unk_0xCF4C00513A86E840(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_249(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x693EBB4F13506457() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
				{
					if (func_253(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x693EBB4F13506457();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_252(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x693EBB4F13506457();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_252(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x693EBB4F13506457();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_253(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x693EBB4F13506457();
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
			if ((unk_0x693EBB4F13506457() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
					{
						if (!func_253(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x693EBB4F13506457();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_252(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x693EBB4F13506457();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_252(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x693EBB4F13506457();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_253(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x693EBB4F13506457();
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
				if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
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
				if (!func_252(bParam1, bParam2, bParam3) || unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1) || unk_0x8ECA33F4427BCB65(unk_0xC8B93D94F8954288(), 2))
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
			if ((unk_0x693EBB4F13506457() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1))
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
					if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1) || func_250(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 1) || unk_0x8ECA33F4427BCB65(unk_0xC8B93D94F8954288(), 2))
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
	if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		if (!unk_0x58474B48103C2968(unk_0xA34E7C2A5118D638()))
		{
			unk_0x2BE3C7FA4FCCA784(0, 140, 1);
			unk_0x2BE3C7FA4FCCA784(0, 80, 1);
			if (unk_0x595DCDF66B3BBC26(0, 80))
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
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		unk_0x2BE3C7FA4FCCA784(0, 80, 1);
		if (unk_0x07CEEA6E1CE2F6C6())
		{
			if (unk_0x595DCDF66B3BBC26(0, 80))
			{
				unk_0xE3B1382567189443(0);
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
	if (!unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		if (!unk_0x58474B48103C2968(unk_0xA34E7C2A5118D638()))
		{
			unk_0x2BE3C7FA4FCCA784(0, 140, 1);
			unk_0x2BE3C7FA4FCCA784(0, 80, 1);
			if (unk_0x69ED83B6DEBA60F9(0, 80) && unk_0x693EBB4F13506457() > Global_116)
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
	if (unk_0x277ECDA23D8CCEB4(unk_0xC8B93D94F8954288(), 0))
	{
		unk_0x2BE3C7FA4FCCA784(0, 80, 1);
		if (unk_0x07CEEA6E1CE2F6C6())
		{
			if (unk_0x69ED83B6DEBA60F9(0, 80) && unk_0x693EBB4F13506457() > Global_116)
			{
				unk_0xE3B1382567189443(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_254(int iParam0)
{
	if (unk_0x95CCECA3948CFE7B(iParam0))
	{
		if (unk_0x18BDAFC0B20C2C9E(iParam0))
		{
			if (unk_0x5D42322C7DB888D0(unk_0xE6E6D9800E15A76C(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x96209AADF56E8FE8(iParam0))
		{
			if (!unk_0x2DC9BA2299B45EA6(unk_0x4D3C2AC8339BFB4F(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x09C656419AB67926(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_255()
{
	unk_0x59A0729D503ED758(&Global_2284, 4);
}

void func_256()
{
	switch (iLocal_684)
	{
		case 0:
			if (func_115(iLocal_683, 0))
			{
				func_268();
				func_266(33);
				unk_0x60B57BC5E51D2074(2);
				unk_0xFD62177C7242216E(0.1f);
				if (func_338())
				{
					func_263(0, -1, 1);
					func_40(500, 1);
					iLocal_684 = 2;
				}
				else
				{
					if (func_32(0))
					{
						func_117(unk_0xC8B93D94F8954288(), 1228.635f, -348.4277f, 68.0929f, 86.7244f);
						func_258(1228.635f, -348.4277f, 68.0929f, 1112014848, 12, 5000, 0, 0);
						func_40(500, 1);
					}
					func_257();
					if (iLocal_683 == 2)
					{
						iLocal_684 = 0;
					}
					else
					{
						iLocal_684 = 2;
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
	
	uVar0 = unk_0x8FA9C6183BE9B4B2(Param0, iParam3, iParam4, 127);
	if (unk_0xEC6DDA03EBAAF9E3(uVar0))
	{
		iVar1 = (unk_0x693EBB4F13506457() + iParam5);
		while (!unk_0x02780D176F467BED(uVar0) && unk_0x693EBB4F13506457() < iVar1)
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
		if (unk_0x693EBB4F13506457() < iVar1)
		{
		}
		unk_0xC8E91F97D49A7F09(uVar0);
	}
}

void func_259()
{
	Global_17118.f_6 = 1;
}

void func_260()
{
	if (!Global_14413.f_1 == 1)
	{
		if (func_67(0))
		{
			func_261(0);
		}
		unk_0x59A0729D503ED758(&Global_2284, 2);
	}
}

void func_261(int iParam0)
{
	if (Global_14571)
	{
		func_262(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x59A0729D503ED758(&Global_2284, 16);
	}
	if (unk_0x44E93B894936152F())
	{
		unk_0xB518E9C8553B1D2B(false);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&Global_2283, 30);
	}
	else
	{
		unk_0x77621132305B133B(&Global_2283, 30);
	}
	if (!func_49())
	{
		Global_14413.f_1 = 3;
	}
}

void func_262(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_67(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0xCE4D902766AE0E55(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xDA89C6AF8C0D7C39(Global_14350);
		}
		else
		{
			unk_0xDA89C6AF8C0D7C39(Global_14341);
		}
	}
}

void func_263(int iParam0, int iParam1, int iParam2)
{
	if (func_338() && func_265())
	{
		while (Global_91101 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x6F9EF355924EC498(0);
		if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
		{
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				unk_0x33A1196C1AC59747(unk_0xC8B93D94F8954288());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
			{
				if (unk_0x95CCECA3948CFE7B(iParam0))
				{
					if (unk_0x5D42322C7DB888D0(iParam0, 0))
					{
						if (!unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iParam0, 0))
						{
							unk_0x6D9DB313D50E9A0D(unk_0xC8B93D94F8954288(), iParam0, iParam1);
							unk_0x0F9FDCEB321235AB(0f, 1065353216);
							unk_0x8C67D2FDE360FBCA(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
			{
				unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
			}
		}
		unk_0x833155A2B2692695();
		func_264(0);
	}
}

void func_264(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x59A0729D503ED758(&(Global_91106.f_20), 13);
	}
	else
	{
		unk_0x77621132305B133B(&(Global_91106.f_20), 13);
	}
}

bool func_265()
{
	return unk_0xDCC86F723E82125E(Global_91106.f_20, 13);
}

void func_266(int iParam0)
{
	Global_87294 = 0;
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
	unk_0x59A0729D503ED758(&Global_87294, iParam0);
}

void func_268()
{
	int iVar0;
	
	iVar0 = unk_0x974516F979AD07BC();
	if (unk_0x95CCECA3948CFE7B(iVar0))
	{
		if (unk_0x5D42322C7DB888D0(iVar0, 0))
		{
			func_269(iVar0, unk_0x44C17CCB85A88A1F(iVar0, 1), unk_0x59DD203239FBDCAD(iVar0), 24, 0);
		}
	}
}

void func_269(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x95CCECA3948CFE7B(iParam0) && unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x95CCECA3948CFE7B(Global_68186.f_484[25]) && unk_0x5D42322C7DB888D0(Global_68186.f_484[25], 0))
			{
				if (Global_68186.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0xA298102257816428(iParam0) || unk_0x6D5BB810CC209E15(iParam0) == joaat("bus")) || unk_0x6D5BB810CC209E15(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_313(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_309(iParam0, &Var0);
		if (func_15(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0x44C17CCB85A88A1F(iParam0, 1) };
			uParam4 = unk_0x59DD203239FBDCAD(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4()) != joaat("vehicle_gen_controller"))
			{
				Global_69174 = unk_0x7CBED6EFED40E7EB(unk_0xC4E68AF0B559FAC4());
			}
		}
		func_302(iParam5, &Var0, Param1, uParam4, func_308(iParam0));
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
	if (!func_299(&(Global_68186.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xDCC86F723E82125E(Global_68186.f_555[0 /*21*/].f_9, 12) && !unk_0xDCC86F723E82125E(Global_68186.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68186.f_555[0 /*21*/].f_4 != unk_0x6D5BB810CC209E15(iParam1))
		{
			return;
		}
	}
	if (Global_69093 != -1 && Global_69093 != iParam0)
	{
		return;
	}
	if (unk_0x95CCECA3948CFE7B(iParam1))
	{
		if (unk_0x5D42322C7DB888D0(iParam1, 0))
		{
			if (!unk_0xD28A89C669EAD2E4(iParam1))
			{
				unk_0xFD816D0E738EB817(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_100976.f_18751.f_4801 = func_288();
			}
			if (iParam1 != Global_68186.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_287(iParam0);
					if ((unk_0x95CCECA3948CFE7B(iVar0) && unk_0x5D42322C7DB888D0(iVar0, 0)) && iParam1 != iVar0)
					{
						func_271(iVar0, 145);
					}
				}
				Global_69092 = iParam1;
				Global_69093 = iParam0;
				Global_69094 = iParam2;
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
		iVar0 = unk_0xC0ADAF0814175B68(iParam0, -1);
		if (!unk_0x95CCECA3948CFE7B(iVar0))
		{
			iVar0 = unk_0xD58C042006468C27(iParam0, -1);
		}
		if (unk_0x95CCECA3948CFE7B(iVar0) && !unk_0x2DC9BA2299B45EA6(iVar0))
		{
			if (unk_0x6D5BB810CC209E15(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x6D5BB810CC209E15(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x6D5BB810CC209E15(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_100976.f_1770.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x6D5BB810CC209E15(iParam0) == Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xB8A06E7E729EED0A(&(Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xF8D041B05C3D1FD4(unk_0xC51A0D06D98180EB(iParam0), &(Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_100976.f_18751.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_100976.f_18751.f_5592[iVar1] = iVar2;
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
		if (unk_0x6D5BB810CC209E15(iParam0) == Global_100976.f_18751.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xB8A06E7E729EED0A(&(Global_100976.f_18751.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xF8D041B05C3D1FD4(unk_0xC51A0D06D98180EB(iParam0), &(Global_100976.f_18751.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_100976.f_18751.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_100976.f_18751.f_5590 = iParam1;
	Global_69091 = iParam0;
	Global_100976.f_18751.f_5588 = 1;
	func_309(iParam0, &(Global_100976.f_18751.f_5510));
}

int func_272(int iParam0)
{
	if ((((((((((!unk_0x95CCECA3948CFE7B(iParam0) || !unk_0x5D42322C7DB888D0(iParam0, 0)) || func_285(iParam0, 0, 0)) || func_285(iParam0, 1, 0)) || func_285(iParam0, 2, 0)) || func_308(iParam0) != 145) || func_284(iParam0)) || func_283(iParam0)) || func_282(iParam0)) || func_281(iParam0)) || !func_273(unk_0x6D5BB810CC209E15(iParam0)))
	{
		if (func_283(iParam0))
		{
		}
		if (func_283(iParam0))
		{
		}
		if (func_285(iParam0, 0, 0))
		{
		}
		if (func_285(iParam0, 1, 0))
		{
		}
		if (func_285(iParam0, 2, 0))
		{
		}
		if (func_308(iParam0) != 145)
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
	if (!func_274(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x9DABB329596B1BD6(iParam0) || unk_0xE924C2C283992918(iParam0)) || unk_0xAF40E7422A6D9D80(iParam0)) || unk_0xC9E810FB9A83EF58(iParam0))
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

int func_274(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x465E33AAA0C48359(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0xBBAE3E0C60A8AD4B())) || (iParam0 == joaat("buffalo3") && !unk_0xBBAE3E0C60A8AD4B())) || (iParam0 == joaat("gauntlet2") && !unk_0xBBAE3E0C60A8AD4B())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0xBBAE3E0C60A8AD4B())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_280())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x4BE9DEC2073C9C84())
		{
			if (unk_0x0486BD07D3026E5E(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x06C32703437E5BC3(Var1.f_0))
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
		if ((((!func_279() && !func_278()) && !func_277()) && !func_276()) && !func_280())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF7FE713C9F786F8C() || unk_0x68B0A67658F2D9C2()) || unk_0x62F8BA7ED89768FB())
		{
		}
		else if (!func_277())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_275(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_275(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2457144)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x20F8506526D25CE0();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_4998 && !Global_262145.f_10806) && iVar1 < Global_262145.f_10807)
		{
			iVar0 = 0;
		}
	}
	iVar1 = unk_0x20F8506526D25CE0();
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_11360 && iVar1 < Global_262145.f_11366)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_11356 && iVar1 < Global_262145.f_11362)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_11357 && iVar1 < Global_262145.f_11363)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_11358 && iVar1 < Global_262145.f_11364)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_11359 && iVar1 < Global_262145.f_11365)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_11361 && iVar1 < Global_262145.f_11367)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_276()
{
	return 0;
}

int func_277()
{
	return 1;
}

int func_278()
{
	return 1;
}

int func_279()
{
	if (unk_0x9F37711843A20114(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_280()
{
	var uVar0;
	
	if (unk_0x964FE4B401FC8514())
	{
		if (unk_0x04A97E271BED9566())
		{
			if (unk_0x76C144FFABF149C3())
			{
				unk_0x5F0618A5FDAD55C4(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x59A0729D503ED758(&uVar0, 2);
				unk_0x59A0729D503ED758(&uVar0, 4);
				unk_0x59A0729D503ED758(&uVar0, 6);
				unk_0x59A0729D503ED758(&Global_25, 2);
				unk_0x59A0729D503ED758(&Global_25, 4);
				unk_0x59A0729D503ED758(&Global_25, 6);
				unk_0x071958EFED9481F5(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xD205A6ACC9C010D3())
				{
					uVar0 = unk_0x11BD984A2A4EF9A7(866);
					unk_0x59A0729D503ED758(&uVar0, 0);
					unk_0x1F071A4E400AAE0A(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138040 == 2)
	{
		return 1;
	}
	else if (Global_138040 == 3)
	{
		return 0;
	}
	if (unk_0xD205A6ACC9C010D3())
	{
		if (unk_0xDCC86F723E82125E(unk_0x11BD984A2A4EF9A7(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_281(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x6D5BB810CC209E15(iParam0);
	sVar1 = unk_0xC51A0D06D98180EB(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xF8D041B05C3D1FD4(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_274(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_282(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x95CCECA3948CFE7B(Global_88800[iVar0]))
		{
			if (Global_88800[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_283(int iParam0)
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(iParam0) && unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x95CCECA3948CFE7B(Global_88770[iVar0]) && unk_0x5D42322C7DB888D0(Global_88770[iVar0], 0))
			{
				if (Global_88770[iVar0] == iParam0 && unk_0x6D5BB810CC209E15(Global_88770[iVar0]) == unk_0x6D5BB810CC209E15(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_284(int iParam0)
{
	int iVar0;
	
	if (unk_0x95CCECA3948CFE7B(Global_68186.f_484[24]))
	{
		if (iParam0 == Global_68186.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x95CCECA3948CFE7B(Global_68186.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68186.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_285(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x95CCECA3948CFE7B(iParam0) || !unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_286(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xDCC86F723E82125E(Global_100976.f_5863[iVar9], 0))
		{
			if (unk_0x86C606C3A2B31739(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_286(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_287(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68186.f_139[iParam0];
}

var func_288()
{
	var uVar0;
	
	func_298(&uVar0, unk_0x4C374828FD653ECC());
	func_297(&uVar0, unk_0x44AD07D9D178F321());
	func_296(&uVar0, unk_0x342FDFC48311CCCE());
	func_291(&uVar0, unk_0x818078CDB71D3E9C());
	func_290(&uVar0, unk_0x49D01BEA8D03E892());
	func_289(&uVar0, unk_0x90D477BB666B03DB());
	return uVar0;
}

void func_289(var uParam0, int iParam1)
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

void func_290(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_291(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_295(*uParam0);
	iVar1 = func_293(*uParam0);
	if (iParam1 < 1 || iParam1 > func_292(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_292(int iParam0, int iParam1)
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

var func_293(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_294(unk_0xDCC86F723E82125E(iParam0, 31), -1, 1)) + 2011;
}

int func_294(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_295(var uParam0)
{
	return uParam0 & 15;
}

void func_296(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_297(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_298(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_299(var uParam0, int iParam1)
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
			uParam0->f_4 = func_300(0, 1);
			uParam0->f_12 = 0;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_300(0, 1);
			uParam0->f_12 = 0;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_300(1, 1);
			uParam0->f_12 = 1;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_300(1, 2);
			uParam0->f_12 = 1;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 19);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_300(1, 1);
			uParam0->f_12 = 1;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_300(1, 2);
			uParam0->f_12 = 1;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 19);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_300(2, 1);
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_300(2, 1);
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_300(2, 1);
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 20);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 22);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 22);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 22);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 24);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 24);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 14);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 24);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 28);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 29);
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
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 27);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 24);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 29);
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
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 27);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 24);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 29);
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
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 7);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 27);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 24);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 11);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 13);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 10);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 11);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 13);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 9);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 9);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 8);
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
			unk_0x59A0729D503ED758(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 2);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 30);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 2);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 22);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
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
			if (func_280())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 13);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 2);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 1);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_280())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 13);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 2);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 1);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x59A0729D503ED758(&(uParam0->f_9), 0);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 21);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 30);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x59A0729D503ED758(&(uParam0->f_9), 30);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 23);
			unk_0x59A0729D503ED758(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xDCC86F723E82125E(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_100976.f_18751.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_15(Global_100976.f_18751.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_100976.f_18751.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_100976.f_18751.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_100976.f_18751.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xDCC86F723E82125E(uParam0->f_9, 19))
	{
		if (!func_15(Global_100976.f_1770.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_100976.f_1770.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_100976.f_1770.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xDCC86F723E82125E(uParam0->f_9, 20))
	{
		if (!func_15(Global_100976.f_1770.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_100976.f_1770.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_100976.f_1770.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_300(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_28(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_301(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_301(int iParam0, var uParam1, int iParam2)
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
			if (Global_100976.f_7719.f_99.f_58[128] && !Global_100976.f_7719.f_99.f_58[131])
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
					if (Global_100976.f_7719.f_99.f_58[119])
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
			else if (Global_100976.f_7719.f_99.f_58[118])
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

void func_302(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_299(&(Global_68186.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xDCC86F723E82125E(Global_68186.f_555[0 /*21*/].f_9, 10))
		{
			func_307(iParam0);
			func_306(uParam1, &(Global_100976.f_18751.f_69[Global_68186.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xDCC86F723E82125E(Global_68186.f_555[0 /*21*/].f_9, 11))
			{
				Global_100976.f_18751.f_1864[Global_68186.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_100976.f_18751.f_1934[Global_68186.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_100976.f_18751.f_1864[Global_68186.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_100976.f_18751.f_1934[Global_68186.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_100976.f_18751.f_1958[Global_68186.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_303(iParam0, 1);
		}
	}
}

void func_303(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_305(iParam0, 0))
		{
			func_304(iParam0, 1, 0);
			func_304(iParam0, 2, 0);
			func_304(iParam0, 3, 0);
			func_304(iParam0, 4, 0);
			func_304(iParam0, 0, 1);
			Global_68186[iParam0] = 1;
		}
	}
	else
	{
		func_304(iParam0, 0, 0);
	}
}

void func_304(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x59A0729D503ED758(&(Global_100976.f_18751[iParam0]), iParam1);
	}
	else
	{
		unk_0x77621132305B133B(&(Global_100976.f_18751[iParam0]), iParam1);
	}
}

bool func_305(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xDCC86F723E82125E(Global_100976.f_18751[iParam0], iParam1);
}

void func_306(var uParam0, var uParam1)
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

void func_307(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_299(&(Global_68186.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x95CCECA3948CFE7B(Global_68186.f_139[iParam0]))
		{
			unk_0xFD816D0E738EB817(Global_68186.f_139[iParam0], 1, 1);
			unk_0xEF84021B2AB5E334(&(Global_68186.f_139[iParam0]));
			Global_68186.f_139[iParam0] = 0;
		}
		if (unk_0xDCC86F723E82125E(Global_68186.f_555[0 /*21*/].f_9, 13))
		{
			func_303(iParam0, 0);
		}
	}
}

int func_308(int iParam0)
{
	int iVar0;
	
	if (!unk_0x95CCECA3948CFE7B(iParam0))
	{
		return 145;
	}
	if (!unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x95CCECA3948CFE7B(Global_88770[iVar0]))
		{
			if (Global_88770[iVar0] == iParam0)
			{
				return Global_88780[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_309(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x5D42322C7DB888D0(iParam0, 0))
	{
		func_312(uParam1);
		uParam1->f_66 = unk_0x6D5BB810CC209E15(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xC51A0D06D98180EB(iParam0), 16);
		*uParam1 = unk_0x65979062393E9301(iParam0);
		unk_0xDDA7228DE9EEDB37(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xA968D095B4F299B6(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xD4344DD9CA88E065(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x9D206597121A7CCB(iParam0);
		uParam1->f_67 = unk_0x847A8FEE19DF1C6D(iParam0);
		uParam1->f_69 = unk_0xA57BDD31F092CE61(iParam0);
		uParam1->f_70 = unk_0xA6BAF129343F464F(iParam0);
		unk_0x06FD411B0A723EC9(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x3B7BDBECE2C4BB25(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x890D2A0FC3456199(iParam0, 2))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 28);
		}
		if (unk_0x890D2A0FC3456199(iParam0, 3))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 29);
		}
		if (unk_0x890D2A0FC3456199(iParam0, 0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 30);
		}
		if (unk_0x890D2A0FC3456199(iParam0, 1))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xDFCA441625BB8A67(iParam0, 0))
		{
			uParam1->f_68 = unk_0x0033BC594211C96E(iParam0);
		}
		if (unk_0xE924C2C283992918(uParam1->f_66))
		{
			if (unk_0x3D62C266C7E526AD(iParam0))
			{
				switch (unk_0xFF4BF4EFFE3F002D(iParam0))
				{
					case 2:
					case 0:
						unk_0x77621132305B133B(&(uParam1->f_77), 23);
						unk_0x59A0729D503ED758(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x77621132305B133B(&(uParam1->f_77), 23);
						unk_0x77621132305B133B(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x59A0729D503ED758(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x59A0729D503ED758(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x675A13D93AEAE680(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 9);
		}
		if (unk_0x4B05424C051859E9(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 10);
		}
		if (unk_0xEAF6FD6E4D109266(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 13);
			unk_0xE089902DB3FDA244(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xF518898EF441871E(iParam0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 12);
		}
		func_311(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xDB066BBA59B7D1EC(iParam0, iVar0 + 1))
			{
				unk_0x59A0729D503ED758(&(uParam1->f_77), func_310(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x40132F2ACE5F8B93(iParam0, 0))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x77621132305B133B(&(uParam1->f_77), 11);
		}
		if (unk_0x3D32B80EFC48A92D(iParam0, "IgnoredByQuickSave") && unk_0xD903CC680ECAC86A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x59A0729D503ED758(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x77621132305B133B(&(uParam1->f_77), 27);
		}
	}
}

int func_310(int iParam0)
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

int func_311(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x5D42322C7DB888D0(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x35C1534E81F87E96(*iParam0) == 0)
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
			if (unk_0x1AF9344BCD6B878A(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x342B167253E636DE(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xCABE66358519B3C4(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xCABE66358519B3C4(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_312(var uParam0)
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

void func_313(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_307(iParam0);
	func_303(iParam0, 0);
}

void func_314()
{
	func_317();
	func_315();
}

void func_315()
{
	if (!iLocal_831)
	{
		if (func_36(iLocal_874))
		{
			if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_874, 0))
			{
				func_64(iLocal_874, -1);
				func_63(iLocal_874, 318);
				iLocal_831 = 1;
			}
		}
	}
	if (!iLocal_832)
	{
		if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) > 0)
		{
			func_316(320, 0);
			iLocal_832 = 1;
		}
	}
	else if (unk_0x6338DEFCA89B8CD6(unk_0xA34E7C2A5118D638()) == 0)
	{
		func_62(0, 320);
		iLocal_832 = 0;
	}
}

void func_316(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_55669 = iParam0;
	if (!Global_55667)
	{
		Global_55667 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67754)
		{
			if (Global_67755[iVar0 /*9*/] == iParam0)
			{
				Global_67755[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_317()
{
}

void func_318()
{
	if (!bLocal_28 && iLocal_683 != 5)
	{
		if (iLocal_683 > 0)
		{
			func_319();
		}
	}
}

void func_319()
{
	float fVar0;
	int iVar1;
	
	fVar0 = 600f;
	if (!func_36(iLocal_874))
	{
		if (!func_36(uLocal_875) && !func_36(Local_868.f_0))
		{
			func_321(1);
			return;
		}
		if (func_36(Local_868.f_0) && !func_150(unk_0xC8B93D94F8954288(), Local_868.f_0, fVar0))
		{
			func_321(2);
		}
	}
	else
	{
		iVar1 = 0;
		if (!func_150(unk_0xC8B93D94F8954288(), iLocal_874, fVar0))
		{
			iVar1++;
		}
		if (func_36(uLocal_875))
		{
			if (!func_150(unk_0xC8B93D94F8954288(), uLocal_875, fVar0))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_36(Local_868.f_0))
		{
			if (!func_150(unk_0xC8B93D94F8954288(), Local_868.f_0, fVar0))
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
			func_321(2);
			return;
		}
		iVar1 = 0;
		if (func_320(iLocal_874))
		{
			iVar1++;
		}
		if (func_36(uLocal_875))
		{
			if (func_320(uLocal_875))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_36(Local_868.f_0))
		{
			if (func_320(Local_868.f_0))
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
			func_321(3);
			return;
		}
	}
}

int func_320(var uParam0)
{
	if (func_36(uParam0))
	{
		if (((unk_0x442EE710FCFD5D0D(uParam0, 0, 7000) || unk_0x442EE710FCFD5D0D(uParam0, 3, 30000)) || unk_0x442EE710FCFD5D0D(uParam0, 2, 30000)) || unk_0x442EE710FCFD5D0D(uParam0, 1, 40000))
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

void func_321(int iParam0)
{
	unk_0x7846F09C04C34C46();
	func_59();
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			sLocal_818 = "PRA_FWRECK";
			break;
		
		case 2:
			sLocal_818 = "PRA_FFAR";
			break;
		
		case 3:
			sLocal_818 = "PRA_FSTUCK";
			break;
	}
	iLocal_683 = 5;
	iLocal_684 = 0;
}

int func_322(int iParam0)
{
	if (func_10(iParam0))
	{
		if (!unk_0x2DC9BA2299B45EA6(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_323()
{
	if (!func_95(36))
	{
		func_324(21, 0, 0);
	}
}

void func_324(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_336(iParam0, 0, 0))
		{
			if (iParam2 && Global_91158.f_17[iParam0])
			{
				if (func_335(iParam0) == 3 && !func_334(iParam0))
				{
					func_333(iParam0);
					func_332(iParam0, 0, 0);
					func_326(iParam0, 1, 0);
					func_325(iParam0);
				}
				else
				{
					func_332(iParam0, 1, 0);
					func_325(iParam0);
				}
			}
			else
			{
				func_332(iParam0, 0, 0);
				func_326(iParam0, 1, 0);
				func_325(iParam0);
			}
		}
		else
		{
			func_326(iParam0, 1, 0);
			func_325(iParam0);
		}
	}
	else if (func_336(iParam0, 0, 0))
	{
		func_326(iParam0, 0, 0);
		func_326(iParam0, 1, 0);
		func_325(iParam0);
	}
}

void func_325(int iParam0)
{
	Global_91158.f_156[iParam0] = 1;
	Global_91158.f_155 = 1;
}

void func_326(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x77621132305B133B(&(Global_91158.f_1300[iParam0]), iParam1);
	}
	else if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (func_331() == 0)
		{
			uVar0 = func_329(func_330(iParam0), -1, 0);
			unk_0x77621132305B133B(&uVar0, iParam1);
			func_327(func_330(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x77621132305B133B(&(Global_100976.f_668[iParam0]), iParam1);
	}
}

void func_327(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2466774[iParam0 /*5*/][func_328(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x071958EFED9481F5(iVar0, uParam1, iParam3);
	}
}

int func_328(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_47();
		if (iVar1 > -1)
		{
			Global_2466487 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2466487 = 1;
		}
	}
	return iVar0;
}

int func_329(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2466774[iParam0 /*5*/][func_328(iParam1)];
	if (unk_0x5F0618A5FDAD55C4(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_330(int iParam0)
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
			return 3693;
			break;
		
		default:
			break;
	}
	return 3790;
}

int func_331()
{
	return Global_25115;
}

void func_332(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x59A0729D503ED758(&(Global_91158.f_1300[iParam0]), iParam1);
	}
	else if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (func_331() == 0)
		{
			uVar0 = func_329(func_330(iParam0), -1, 0);
			unk_0x59A0729D503ED758(&uVar0, iParam1);
			func_327(func_330(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x59A0729D503ED758(&(Global_100976.f_668[iParam0]), iParam1);
	}
}

void func_333(int iParam0)
{
	if (Global_91158.f_17[iParam0])
	{
		func_332(iParam0, 10, 1);
		func_332(iParam0, 19, 1);
	}
}

bool func_334(int iParam0)
{
	return func_336(iParam0, 5, 1);
}

int func_335(int iParam0)
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

int func_336(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xDCC86F723E82125E(Global_91158.f_1300[iParam0], iParam1);
	}
	else if (unk_0xBBAE3E0C60A8AD4B())
	{
		if (func_331() == 0)
		{
			return unk_0xDCC86F723E82125E(func_329(func_330(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xDCC86F723E82125E(Global_100976.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_337(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_338())
	{
		unk_0x6ECAEE4901F465A1(0);
		unk_0x77621132305B133B(&(Global_91106.f_20), 2);
		unk_0x6F9EF355924EC498(1);
		if (unk_0x06972B20E75CBE06(unk_0xA34E7C2A5118D638()))
		{
			unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 0, 0);
		}
		Global_91102 = { Param0 };
		Global_91105 = fParam3;
		Global_91101 = 1;
		if (iParam4 == 1)
		{
			unk_0x59A0729D503ED758(&(Global_91106.f_20), 14);
		}
		else
		{
			unk_0x77621132305B133B(&(Global_91106.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0x59A0729D503ED758(&(Global_91106.f_20), 24);
		}
		else
		{
			unk_0x77621132305B133B(&(Global_91106.f_20), 24);
		}
		func_264(1);
	}
}

int func_338()
{
	if (Global_91106 == 10 || Global_91106 == 9)
	{
		return 1;
	}
	return 0;
}

void func_339()
{
	func_354();
	func_352();
	func_345();
	func_342();
	func_340();
}

void func_340()
{
	iLocal_1048[0] = 0;
	iLocal_1048[1] = 0;
	iLocal_1048[2] = 0;
	Local_688[0 /*8*/] = { func_341("FP1_WANTM", "FP1_LOSTM", "FP1_THEREM", "FP1_CHATFM", "", "FP1_CHATTM") };
	Local_688[1 /*8*/] = { func_341("FP1_WANTT", "FP1_LOSTT", "FP1_THERET", "FP1_CHATFM", "FP1_CHATFT", "") };
	Local_688[2 /*8*/] = { func_341("FP1_WANTF", "FP1_LOSTF", "FP1_THEREF", "", "FP1_CHATFT", "FP1_CHATTM") };
}

struct<8> func_341(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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

void func_342()
{
	Local_134[0 /*25*/] = { func_344(1203.146f, -337.3543f, 67.9314f, 1245.118f, -348.5059f, 68.2099f, 253.1908f, 0) };
	func_343(&(Local_134[0 /*25*/]), Local_824, 0, 15f, 5f, 270f, 3, 1192.006f, -631.4703f, 61.6972f, 10f, 10f, 5f);
	Local_134[1 /*25*/] = { func_344(1215.084f, -339.3139f, 68.1323f, 964.9214f, -555.212f, 58.0211f, 39.645f, 0) };
	func_343(&(Local_134[1 /*25*/]), Local_824, 0, 15f, 10f, 270f, 3, 1103.29f, -764.532f, 56.633f, 10f, 10f, 5f);
	Local_134[2 /*25*/] = { func_344(1179.533f, -361.3286f, 67.4559f, 929.8701f, -619.4534f, 56.4632f, 164.3631f, 0) };
	func_343(&(Local_134[2 /*25*/]), Local_824, 0, 15f, 10f, 270f, 3, 933.3745f, -615.9453f, 56.3041f, 10f, 10f, 5f);
	Local_134[3 /*25*/] = { func_344(1107.674f, -364.0569f, 65.9581f, 1099.266f, -775.0809f, 57.3525f, 178.2038f, 0) };
	func_343(&(Local_134[3 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_134[4 /*25*/] = { func_344(1069.279f, -393.5795f, 66.0262f, 1065.364f, -389.9561f, 66.1504f, 220.1611f, 0) };
	func_343(&(Local_134[4 /*25*/]), Local_824, 0, 5f, 30f, 128.1732f, 3, 1069.718f, -393.9912f, 66.0261f, 10f, 10f, 5f);
	Local_134[5 /*25*/] = { func_344(1031.673f, -424.599f, 64.5439f, 1027.179f, -420.6656f, 64.6268f, 178.2038f, joaat("p_binbag_01_s")) };
	func_343(&(Local_134[5 /*25*/]), 1028.201f, -428.3677f, 64.3571f, 1, 15f, 2f, 128.3915f, 1, 1027.179f, -420.6656f, 64.6268f, 10f, 10f, 5f);
	Local_134[6 /*25*/] = { func_344(942.1528f, -488.8956f, 59.3129f, 932.0198f, -489.3886f, 58.9212f, 202.5785f, joaat("p_binbag_01_s")) };
	func_343(&(Local_134[6 /*25*/]), 930.7186f, -494.9253f, 58.616f, 1, 15f, 2f, 119.6518f, 1, 952.9781f, -482.5082f, 60.0003f, 10f, 10f, 5f);
	Local_134[7 /*25*/] = { func_344(868.2734f, -529.5473f, 56.2071f, 865.0042f, -522.4746f, 56.3363f, 241.9711f, joaat("p_binbag_01_s")) };
	func_343(&(Local_134[7 /*25*/]), 865.2349f, -535.8759f, 56.1574f, 1, 15f, 2f, 162.7219f, 1, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_134[8 /*25*/] = { func_344(874.8076f, -571.2073f, 56.2987f, 983.125f, -541.9902f, 58.5929f, 49.7653f, 0) };
	func_343(&(Local_134[8 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_134[9 /*25*/] = { func_344(931.5218f, -614.2144f, 56.3119f, 928.6471f, -620.711f, 56.4611f, -108.06f, joaat("p_binbag_01_s")) };
	func_343(&(Local_134[9 /*25*/]), 940.4086f, -622.1787f, 56.3003f, 1, 15f, 2f, 228.1176f, 1, 918.6716f, -602.9258f, 56.3395f, 10f, 10f, 5f);
	Local_134[10 /*25*/] = { func_344(964.9758f, -645.9614f, 56.4465f, 927.1033f, -575.4162f, 56.5329f, 55.9317f, 0) };
	func_343(&(Local_134[10 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_134[11 /*25*/] = { func_344(983.4438f, -683.1442f, 56.4087f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_343(&(Local_134[11 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[12 /*25*/] = { func_344(1016.261f, -731.546f, 56.555f, 1011.801f, -733.0652f, 56.7435f, 314.5626f, joaat("p_binbag_01_s")) };
	func_343(&(Local_134[12 /*25*/]), 1020.251f, -736.815f, 56.6235f, 1, 15f, 2f, 220.7804f, 1, 1011.238f, -724.7085f, 56.5183f, 10f, 10f, 5f);
	Local_134[13 /*25*/] = { func_344(1164.126f, -762.2866f, 56.6656f, 1099.342f, -775.4273f, 57.3525f, 177.5729f, 0) };
	func_343(&(Local_134[13 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[14 /*25*/] = { func_344(1199.339f, -678.0995f, 59.9051f, 1205.415f, -672.1282f, 60.1445f, 105.2374f, 0) };
	func_343(&(Local_134[14 /*25*/]), Local_824, 0, 15f, 2f, 12.1103f, 3, 1199.339f, -678.0995f, 59.9051f, 10f, 10f, 5f);
	Local_134[15 /*25*/] = { func_344(1183.445f, -582.9476f, 63.0962f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_343(&(Local_134[15 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[16 /*25*/] = { func_344(1192.479f, -485.1086f, 64.7195f, 1264.359f, -719.084f, 63.328f, 65.0519f, 0) };
	func_343(&(Local_134[16 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[17 /*25*/] = { func_344(1212.693f, -400.0532f, 67.0971f, 1284.109f, -676.728f, 65.0225f, 69.9898f, 0) };
	func_343(&(Local_134[17 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[18 /*25*/] = { func_344(1114.573f, -232.3706f, 68.0949f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_343(&(Local_134[18 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	iLocal_830 = 19;
}

void func_343(var uParam0, struct<3> Param1, int iParam4, float fParam5, float fParam6, float fParam7, int iParam8, struct<3> Param9, struct<3> Param12)
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

struct<25> func_344(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
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

void func_345()
{
	struct<3> Var0[6];
	
	Var0[0 /*3*/] = { 1251.308f, -400.6231f, 68.0926f };
	Var0[1 /*3*/] = { 1183.993f, -403.3443f, 66.8734f };
	Var0[2 /*3*/] = { 1161.54f, -372.6073f, 66.6034f };
	Var0[3 /*3*/] = { 1167.644f, -273.7987f, 67.9705f };
	Var0[4 /*3*/] = { 1252.362f, -247.353f, 77.5631f };
	Var0[5 /*3*/] = { 1330.062f, -341.0342f, 100.3476f };
	func_346(&Var0, 6);
}

void func_346(var uParam0, int iParam1)
{
	int iVar0;
	
	func_351(&uLocal_713);
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		func_350(&uLocal_713, *(uParam0[iVar0 /*3*/]));
		iVar0++;
	}
	func_349(&uLocal_713);
	func_347(&uLocal_765, &uLocal_713, 50f);
}

void func_347(var uParam0, var uParam1, float fParam2)
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
		if (func_348(uParam1, *(uParam1[iVar1 /*3*/]) + Var9))
		{
			Var9 = { -Var9 };
		}
		*(uParam0[iVar1 /*3*/]) = { *(uParam1[iVar1 /*3*/]) + Var9 * Vector(fParam2, fParam2, fParam2) };
		iVar0 = iVar1;
		iVar1++;
		iVar2 = (iVar2 + 1 % uParam1->f_46);
	}
}

bool func_348(var uParam0, struct<2> Param1, Vector3 vParam3)
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

void func_349(var uParam0)
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

void func_350(var uParam0, struct<3> Param1)
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

void func_351(var uParam0)
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

void func_352()
{
	Local_840 = { func_353(1200.61f, -344.2721f, 68.0424f, 269.2015f, joaat("s_m_y_garbage")) };
	Local_854 = { func_353(1202.42f, -341.6034f, 67.9378f, 273.1125f, joaat("s_m_y_garbage")) };
}

struct<14> func_353(struct<3> Param0, float fParam3, int iParam4)
{
	struct<14> Var0;
	
	Var0.f_1 = { Param0 };
	Var0.f_4 = fParam3;
	Var0.f_5 = iParam4;
	return Var0;
}

void func_354()
{
	Local_868 = { func_355(1203.146f, -337.3543f, 67.9314f, 189.7047f, joaat("trash")) };
}

struct<6> func_355(struct<3> Param0, float fParam3, int iParam4)
{
	struct<6> Var0;
	
	Var0.f_1 = { Param0 };
	Var0.f_4 = fParam3;
	Var0.f_5 = iParam4;
	return Var0;
}

void func_356()
{
	func_233(1);
	func_367(1);
	unk_0xB7FAA1C591A4664F(joaat("trash"), 0);
	unk_0xB7FAA1C591A4664F(joaat("towtruck"), 0);
	unk_0xB7FAA1C591A4664F(joaat("s_m_y_garbage"), 0);
	func_61();
	func_366();
	func_365();
	func_357(0);
	unk_0xA4E0D8FD51F2A6F7();
}

void func_357(bool bParam0)
{
	struct<3> Var0;
	
	if (bParam0)
	{
	}
	unk_0x6C1CBBF18B93CB8E(unk_0xA34E7C2A5118D638(), 1, 0);
	unk_0x836267F7339CEF73("DRIVE", 1);
	unk_0x836267F7339CEF73("WORLD_VEHICLE_ATTRACTOR", 1);
	unk_0x836267F7339CEF73("WORLD_VEHICLE_DRIVE_PASSENGERS", 1);
	unk_0x836267F7339CEF73("WORLD_VEHICLE_DRIVE_SOLO", 1);
	func_37();
	func_364();
	func_363();
	func_362();
	func_361();
	func_215();
	if (bParam0)
	{
		if (unk_0x95CCECA3948CFE7B(iLocal_874))
		{
			if (unk_0x95CCECA3948CFE7B(unk_0xC8B93D94F8954288()))
			{
				if (!unk_0x2DC9BA2299B45EA6(unk_0xC8B93D94F8954288()))
				{
					if (unk_0x0C7EC810080F0459(unk_0xC8B93D94F8954288(), iLocal_874, 0))
					{
						Var0 = { unk_0x44C17CCB85A88A1F(unk_0xC8B93D94F8954288(), 1) };
						unk_0xC76B5C68AB6DC7DF(unk_0xC8B93D94F8954288(), Var0, 1, 0, 0, 1);
					}
				}
			}
		}
		func_359();
		unk_0x7846F09C04C34C46();
		func_2();
	}
	else
	{
		func_358();
	}
	unk_0x3BFC6ABA90325F64(0);
	func_138(&uLocal_671, 0, 0);
	if (unk_0x844838E5D8A21336(uLocal_823))
	{
		unk_0x2544549FDE4C3A7E(0, 0, 3000, 1, 0, 0);
		unk_0x5CF5A880ED809DDA(uLocal_823, 0);
	}
}

void func_358()
{
	func_3();
	func_6(&Local_868);
	func_6(&uLocal_875);
	func_6(&iLocal_874);
	func_5(&Local_840, 1, 0, 1);
	func_5(&Local_854, 1, 0, 1);
	func_6(&uLocal_876);
}

void func_359()
{
	Global_14578 = 0;
	func_360();
}

void func_360()
{
	unk_0xE9A2B98CC2F095D6();
	Global_16723 = 0;
	if (unk_0x2964A62922189B93())
	{
		unk_0xB518E9C8553B1D2B(false);
		Global_15712 = 6;
	}
}

void func_361()
{
}

void func_362()
{
	if (iLocal_837)
	{
		unk_0x80454CEB5BC7C46B(joaat("trash"));
	}
}

void func_363()
{
}

void func_364()
{
	unk_0x4BBD72565A0AF033(Local_868.f_5);
}

void func_365()
{
	func_324(21, 1, 0);
}

void func_366()
{
	Global_87294 = 0;
}

void func_367(int iParam0)
{
	Global_88745 = iParam0;
}

void func_368()
{
	int iVar0;
	
	if (unk_0xD838CD843F6FE18B("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_100976.f_7719 || func_32(0))
	{
		if (!func_369())
		{
			iVar0 = func_31();
			if (iVar0 != -1)
			{
				if (!func_19(iVar0))
				{
					return;
				}
				unk_0x59A0729D503ED758(&(Global_82191[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_24();
		}
	}
}

int func_369()
{
	if (((Global_91106 == 13 || Global_91106 == 10) || Global_91106 == 11) || Global_91106 == 12)
	{
		return 0;
	}
	return 1;
}

