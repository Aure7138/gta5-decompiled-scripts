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
	unk_0x52A56383568A954B(1);
	if (unk_0x2170E7BC25114A22(19))
	{
		sLocal_818 = 0;
		func_371();
		func_359();
	}
	func_342();
	if (func_341())
	{
		func_340(918.8851f, -269.789f, 67.2145f, 68.2149f, 1, 0);
	}
	func_326();
	while (true)
	{
		unk_0xC60972F08795B988("M_TrT", 0);
		if (func_325(unk_0xD5A676B97920D126()))
		{
			func_321();
			func_317();
			unk_0x3F931C10896E8434(unk_0xFB6B3EEFAB2DD12C());
			unk_0x43C5A23247934BA2(0.8f);
			switch (iLocal_683)
			{
				case 0:
					func_257();
					break;
				
				case 1:
					func_233();
					break;
				
				case 2:
					func_215();
					break;
				
				case 3:
					func_102();
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
			unk_0x59C0D363E5A5B548();
			unk_0x04890EB0282525A5(1);
			func_37();
			if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
			{
				iVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
				if (func_36(iVar0) && unk_0xA0A4DA31DEDFAC4F(iVar0) == joaat("towtruck"))
				{
					func_35(iVar0, 2);
				}
			}
			if (!unk_0xC55B9553B3EDADE9(sLocal_818))
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
				unk_0x500FFA49AC5ABB1D(unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 30f, 1, 0, 0, 0);
				func_359();
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
	unk_0xA402A00DD48EB3E9(uLocal_80);
	unk_0x6989DACCC7A558AE("missfbi4prepp1");
	unk_0x0777D86BAF5F15EC("missfbi4prepp1_garbageman");
}

void func_4(var uParam0, bool bParam1)
{
	if (unk_0x7887B64A08364778(*uParam0))
	{
		if (unk_0xE5C2BF941108FCCE(*uParam0))
		{
			unk_0x4FE8E15113ECBFEF(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x523D268641392C22(uParam0);
		}
		else
		{
			unk_0x11CD27A2A18805E7(*uParam0);
		}
	}
}

void func_5(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x7887B64A08364778(*uParam0))
	{
		if (!unk_0x00B5B0B68211D89B(*uParam0))
		{
			unk_0x6D20A3AA82585D8C(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0xB42E7901B9B18D2A(*uParam0);
			}
			unk_0x7D99F00F48D15ADB(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x5457695C257D1470(*uParam0, false);
			}
		}
		unk_0xD4B3FF1E63C36391(uParam0);
	}
}

void func_6(var uParam0)
{
	if (unk_0x7887B64A08364778(*uParam0))
	{
		unk_0xB529B2A4B7C64D6D(*uParam0, 0);
		if (unk_0x2A29BF08180E7ADF(*uParam0) && unk_0x67F42C4B7B64C593(*uParam0, 1))
		{
			unk_0xB24D3BF5DABD13AA(uParam0);
		}
	}
}

void func_7(int iParam0)
{
	if (unk_0x6901135DDCC4904D(*iParam0))
	{
		unk_0xD947D2F43FD7F6D7(*iParam0, 0);
		unk_0x8A3D7569826A325D(iParam0);
	}
}

void func_8(int iParam0)
{
	if (unk_0x7887B64A08364778(*iParam0))
	{
		if (!unk_0xB529B2A4B7C64D6D(*iParam0, 0))
		{
			unk_0x6D20A3AA82585D8C(*iParam0, 0);
		}
		if (!unk_0x2A29BF08180E7ADF(*iParam0))
		{
			unk_0xC53606C390BE2727(*iParam0, 1, 0);
		}
		unk_0xA2AC407F9132DD0B(iParam0);
	}
}

void func_9(var uParam0)
{
	if (unk_0x7887B64A08364778(*uParam0))
	{
		if (!unk_0x2A29BF08180E7ADF(*uParam0))
		{
			unk_0xC53606C390BE2727(*uParam0, 1, 0);
		}
		if (func_36(*uParam0))
		{
			if (unk_0x2A29BF08180E7ADF(*uParam0) && unk_0x67F42C4B7B64C593(*uParam0, 1))
			{
				if (func_10(unk_0xD5A676B97920D126()))
				{
					if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), *uParam0, 0))
					{
						unk_0xB24D3BF5DABD13AA(uParam0);
						return;
					}
				}
				unk_0xAA8D7DFFDAAB903E(uParam0);
			}
		}
		else
		{
			if (func_10(unk_0xD5A676B97920D126()))
			{
				if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), *uParam0, 0))
				{
					unk_0xB24D3BF5DABD13AA(uParam0);
					return;
				}
			}
			unk_0xAA8D7DFFDAAB903E(uParam0);
		}
	}
}

int func_10(int iParam0)
{
	if (unk_0x7887B64A08364778(iParam0))
	{
		if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
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
	func_13(&(Global_95993.f_2311), Param0, fParam3);
}

void func_13(var uParam0, struct<3> Param1, var uParam4)
{
	*uParam0 = { Param1 };
	uParam0->f_6 = uParam4;
}

void func_14(struct<3> Param0, float fParam3)
{
	if (func_15(Global_69937, 0f, 0f, 0f, 0))
	{
		Global_69937 = { Param0 };
		Global_69940 = fParam3;
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
	if (Global_91486 == 7)
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
	if (Global_91486 == 7 || Global_91486 == 8)
	{
		return 1;
	}
	return 0;
}

void func_18(int iParam0)
{
	int iVar0;
	
	if (Global_101652.f_8028 || func_32(0))
	{
		iVar0 = func_31();
		if (!func_19(iVar0))
		{
			return;
		}
		unk_0xB8A73E7DA87B2968(&(Global_82571[iVar0 /*5*/].f_1), 5);
		Global_91522 = iParam0;
	}
}

int func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_24();
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		unk_0xAF433BF9CD4B48B6(5000);
	}
	iVar0 = Global_82571[iParam0 /*5*/];
	iVar1 = Global_69966.f_109[iVar0 /*4*/];
	func_23(iVar1, 1);
	unk_0x991BBF1AA54F8B25(unk_0xFB6B3EEFAB2DD12C());
	unk_0x8F9B28E7FCF099E4(unk_0xFB6B3EEFAB2DD12C());
	func_20(&(Global_101652.f_2079.f_539), iVar1);
	if (Global_85994 == Global_91523)
	{
		Global_101652.f_8028.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xF44A5E894FE76438(Global_82607[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0xE044321D40979D1A(0);
		}
	}
	Global_101652.f_8028.f_330[iVar1 /*6*/].f_2++;
	Global_85994 = Global_91523;
	if (iParam0 == -1)
	{
		if (Global_101652.f_8028)
		{
		}
		return 0;
	}
	if (unk_0xF44A5E894FE76438(Global_82571[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xF44A5E894FE76438(Global_82571[iParam0 /*5*/].f_1, 5))
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
		iVar1 = Global_101652.f_17476[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xF44A5E894FE76438(Global_101652.f_8028.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_22(Global_101652.f_17476[iVar0], &Var2, &fVar5))
			{
				Global_101652.f_17476[iVar0] = 318;
				func_21(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_89209[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_89209[iVar0 /*29*/].f_9 = 0f;
				Global_89209[iVar0 /*29*/].f_12 = 0f;
				Global_89209[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_89209[iVar0 /*29*/].f_10 = 0f;
				Global_89209[iVar0 /*29*/].f_13 = 0f;
				Global_89209[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_89209[iVar0 /*29*/].f_11 = 0f;
				Global_89209[iVar0 /*29*/].f_14 = 0f;
				Global_89209[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_89209[iVar0 /*29*/].f_26 = 0f;
				Global_89209[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_89209[iVar0 /*29*/].f_27 = 0f;
				Global_89209[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_89209[iVar0 /*29*/].f_28 = 0f;
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
			Global_85804[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85804[iParam0 /*2*/] = 0;
	}
}

void func_24()
{
	Global_91521 = 1;
	if (unk_0x6F49D44BC97A2171(unk_0xFB6B3EEFAB2DD12C(), 1))
	{
		if (unk_0xC55B9553B3EDADE9(&Global_69929))
		{
			switch (func_25())
			{
				case 0:
					StringCopy(&Global_69929, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_69929, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_69929, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_69933, "", 16);
		}
		Global_91521 = 0;
	}
	else if (!unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0xC55B9553B3EDADE9(&Global_69929))
		{
			switch (func_25())
			{
				case 0:
					StringCopy(&Global_69929, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_69929, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_69929, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_69933, "", 16);
		}
		Global_91521 = 0;
		unk_0xB8A73E7DA87B2968(&(Global_91486.f_20), 25);
	}
}

int func_25()
{
	func_26();
	return Global_101652.f_2079.f_539.f_3549;
}

void func_26()
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
	{
		if (func_30(Global_101652.f_2079.f_539.f_3549) != unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()))
		{
			iVar0 = func_29(unk_0xD5A676B97920D126());
			if (func_28(iVar0) && (!func_27(14) || Global_100604))
			{
				if (Global_101652.f_2079.f_539.f_3549 != iVar0 && func_28(Global_101652.f_2079.f_539.f_3549))
				{
					Global_101652.f_2079.f_539.f_3550 = Global_101652.f_2079.f_539.f_3549;
				}
				Global_101652.f_2079.f_539.f_3551 = iVar0;
				Global_101652.f_2079.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101652.f_2079.f_539.f_3549 != 145)
			{
				Global_101652.f_2079.f_539.f_3551 = Global_101652.f_2079.f_539.f_3549;
			}
			return;
		}
	}
	Global_101652.f_2079.f_539.f_3549 = 145;
}

bool func_27(int iParam0)
{
	return Global_35777 == iParam0;
}

bool func_28(int iParam0)
{
	return iParam0 < 3;
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7887B64A08364778(iParam0))
	{
		iVar1 = unk_0xA0A4DA31DEDFAC4F(iParam0);
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
		return Global_101652.f_26993[iParam0 /*29*/];
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
		if (unk_0xF44A5E894FE76438(Global_82571[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_32(bool bParam0)
{
	if (!bParam0 && unk_0xAB964FCFAC3C767A(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF44A5E894FE76438(Global_69945, 0);
}

void func_33(char* sParam0)
{
	func_34(sParam0);
	func_18(0);
}

void func_34(char* sParam0)
{
	if (!unk_0xC55B9553B3EDADE9(sParam0))
	{
		if (unk_0xA65764871521D4D8(sParam0) <= 16)
		{
			StringCopy(&Global_69929, sParam0, 16);
			StringCopy(&Global_69933, "", 16);
			if (unk_0x48FF43A84774B0F5())
			{
				unk_0x3B2F2432D225195E();
			}
		}
	}
}

void func_35(int iParam0, int iParam1)
{
	Global_91486.f_22[iParam1] = iParam0;
}

int func_36(int iParam0)
{
	if (func_10(iParam0))
	{
		if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
		{
			if (!unk_0xF60B0BCAFB1D30FF(iParam0))
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
			if (!func_101(unk_0xD5A676B97920D126(), Local_827, 270f))
			{
				iLocal_684 = 2;
			}
			else if (!func_100("PRA_LEVAREA", 0, 0))
			{
				func_99("PRA_LEVAREA", 60000, 0);
			}
			break;
		
		case 2:
			iVar0 = func_25();
			if (func_100("PRA_LEVAREA", 0, 0))
			{
				unk_0x59C0D363E5A5B548();
			}
			if (iVar0 == 0)
			{
				if (func_66(&uLocal_687, &cLocal_1044, &uLocal_879))
				{
					func_62();
					func_57();
				}
			}
			else
			{
				func_52(func_56(iVar0), -621899663, -621899663, 5, 0, iVar0, func_55(iVar0), 0, 6000, 6000, -1, 0, 0);
				func_62();
				func_57();
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
		unk_0xCA3B54980FA9D86F(0f, 1065353216);
		unk_0xB6AE7C18ADC0F901(0f);
	}
	if (iParam1 == 1)
	{
		func_40(500, 0);
	}
}

void func_40(int iParam0, bool bParam1)
{
	if (unk_0x7E3640C27B17457C() || unk_0x83D6BCB493FCFCBA())
	{
		if (!unk_0xF9B8AB338DC56ADD())
		{
			unk_0xFF11D473E95357D3(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x8AFBC859AA63D3D7())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0xF3F8195C98263BF5();
	unk_0x3C8949482F2DCB04(uVar0, 0);
	unk_0x0AB2B0C7DAE9FF05(uVar0, iParam3, 0);
	func_42(0, 1, 0, 0);
	if (iParam2 == 1)
	{
		unk_0xFE3C4806D54DF474(1);
		unk_0x6FAE7F32571B33E3(1);
	}
	unk_0x04890EB0282525A5(1);
	if (iParam0 == 1)
	{
		unk_0xB8A949B886F6079B(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_37 != 0 && iLocal_37 != joaat("object")) && iLocal_37 != joaat("gadget_parachute"))
		{
			if (func_10(unk_0xD5A676B97920D126()))
			{
				if (unk_0xE5A6095B39C65EBC(unk_0xD5A676B97920D126(), iLocal_37, 0))
				{
					unk_0xA3174F7B13DEACD1(unk_0xD5A676B97920D126(), iLocal_37, 0);
				}
			}
		}
	}
	if (func_325(unk_0xD5A676B97920D126()))
	{
		unk_0x6EA1885B7EF8C3AB(unk_0xD5A676B97920D126(), 0, 0);
	}
}

void func_42(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xED2B6BABD1851525(unk_0xFB6B3EEFAB2DD12C());
		unk_0x9988C652FB1151C9(unk_0xFB6B3EEFAB2DD12C(), 1);
		unk_0xE452A86AC6E00AA9(unk_0xFB6B3EEFAB2DD12C(), 1);
		func_51(1);
		unk_0xA66D8B0C391B7E6A();
		unk_0x8D4260E505305DB8();
		if (Global_14443.f_1 > 3)
		{
			if (unk_0x982007D3EB9D85D2())
			{
				unk_0x73998CD31AEFA620(0);
			}
			if (!func_50())
			{
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_49(1, iParam3, iParam2, 0);
		Global_55824 = 1;
		Global_68130 = 1;
		Global_69695 = 1;
	}
	else
	{
		func_51(0);
		unk_0xEC2FD1C3670ADE14();
		Global_55824 = 0;
		if (bParam1)
		{
			unk_0xBD0FB22CD565973B();
		}
		unk_0x9988C652FB1151C9(unk_0xFB6B3EEFAB2DD12C(), 0);
		unk_0xE452A86AC6E00AA9(unk_0xFB6B3EEFAB2DD12C(), 0);
		func_49(0, iParam3, iParam2, 0);
		if (unk_0x1995B52453EF6537())
		{
			if (((!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()) && !func_47(unk_0xFB6B3EEFAB2DD12C())) && !func_44(unk_0xFB6B3EEFAB2DD12C(), 0)) && !func_43())
			{
				unk_0x0A924F4E6E826379(unk_0xD5A676B97920D126(), 0);
			}
		}
		else if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()) && !func_47(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x0A924F4E6E826379(unk_0xD5A676B97920D126(), 0);
		}
		Global_69695 = 0;
	}
}

bool func_43()
{
	return unk_0xF44A5E894FE76438(Global_1589933[unk_0xFB6B3EEFAB2DD12C() /*601*/].f_39.f_18, 14);
}

bool func_44(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
	{
		bVar0 = func_45(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589933[iParam0 /*601*/].f_202 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x1E0256D6F1052B31(iParam0))
		{
			bVar0 = unk_0x2A7336F1C6B39623(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_45(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_46();
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

int func_46()
{
	return Global_1312731;
}

int func_47(int iParam0)
{
	if (func_44(iParam0, 0))
	{
		return 1;
	}
	if (func_48())
	{
		if (iParam0 == unk_0xFB6B3EEFAB2DD12C())
		{
			return 1;
		}
	}
	if (unk_0xF44A5E894FE76438(Global_2421621[iParam0 /*358*/].f_198, 2))
	{
		return 1;
	}
	return 0;
}

bool func_48()
{
	return unk_0xF44A5E894FE76438(Global_2359301, 3);
}

int func_49(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x2D337DD29A7ABD30())
	{
		if (unk_0xD1F53A5D24CA94D7() != iParam0 && uParam2)
		{
			unk_0x8AA8D29EBC93F521(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_50()
{
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_51(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2313, 13);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2313, 13);
	}
}

int func_52(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
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
	if (Global_101652.f_6631.f_136 < 9)
	{
		Var0.f_0 = uParam0;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_9 = iParam3;
		if (Global_101652.f_6631.f_911 == Var0.f_0)
		{
			Global_101652.f_6631.f_911 = -1;
		}
		Var0.f_3 = func_54(iParam4);
		Var0.f_5 = iParam9;
		Var0.f_4 = (unk_0x84A97C70FFDEC0C8() + iParam8);
		Var0.f_1 = iParam12;
		iVar15 = 0;
		unk_0xB8A73E7DA87B2968(&iVar15, iParam5);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam6;
		Var0.f_14 = iParam7;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		unk_0xB8A73E7DA87B2968(&(Var0.f_1), 0);
		unk_0xB8A73E7DA87B2968(&(Var0.f_1), 13);
		unk_0x4EA098C870B73AB7(&(Var0.f_1), 1);
		if (iParam4 == 0)
		{
			unk_0xB8A73E7DA87B2968(&(Var0.f_1), 10);
		}
		Global_101652.f_6631[Global_101652.f_6631.f_136 /*15*/] = { Var0 };
		Global_101652.f_6631.f_136++;
		func_53(iParam5);
		return 1;
	}
	return 0;
}

void func_53(int iParam0)
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
	while (iVar0 < Global_101652.f_6631.f_136)
	{
		if (unk_0xF44A5E894FE76438(Global_101652.f_6631[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_101652.f_6631[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_101652.f_6631[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_101652.f_6631.f_764)
	{
		if (unk_0xF44A5E894FE76438(Global_101652.f_6631.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_101652.f_6631.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_101652.f_6631.f_919[iParam0] = iVar1;
}

int func_54(int iParam0)
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

int func_55(int iParam0)
{
	if (iParam0 == 1)
	{
		return 9;
	}
	return 8;
}

int func_56(int iParam0)
{
	if (iParam0 == 1)
	{
		return -714760066;
	}
	return -1198055521;
}

void func_57()
{
	unk_0x59C0D363E5A5B548();
	func_60();
	func_58(0, 0);
	func_359();
}

void func_58(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55820)
	{
		Global_55820 = iParam1;
	}
	if (bParam0)
	{
		if ((func_32(0) && Global_69943.f_1 == 1) && func_59(Global_69943))
		{
		}
		else
		{
			Global_55818 = 1;
		}
	}
	if (Global_101652.f_8028 || func_32(0))
	{
		iVar0 = func_31();
		iVar1 = Global_82571[iVar0 /*5*/];
		uVar2 = Global_69966.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_101652.f_8028)
			{
			}
			return;
		}
		if (unk_0xF44A5E894FE76438(Global_82571[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xF44A5E894FE76438(Global_82571[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xB8A73E7DA87B2968(&(Global_82571[iVar0 /*5*/].f_1), 4);
		unk_0xB8A73E7DA87B2968(&Global_69945, 1);
		Global_69961 = uVar2;
		Global_69962 = unk_0x84A97C70FFDEC0C8();
	}
}

int func_59(int iParam0)
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

void func_60()
{
	Global_14611 = 0;
	func_61();
}

void func_61()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if ((unk_0x982007D3EB9D85D2() || Global_14443.f_1 == 9) || Global_14442 == 1)
	{
		unk_0x73998CD31AEFA620(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(1);
		Global_15745 = 6;
		return;
	}
}

void func_62()
{
	func_65(0, -1);
	func_64(0, 318);
	func_63(1, 320);
}

void func_63(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_55826)
	{
	}
	Global_55826 = 0;
	if (bParam0)
	{
		Global_55827 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67913)
		{
			if (Global_56043[Global_67914[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_67914[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_67913)
		{
			if (Global_67914[iVar0 /*9*/] > 0)
			{
				if (Global_67914[iVar0 /*9*/] == iParam1)
				{
					Global_67914[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55831 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67913)
	{
		if (iParam1 == -1 || Global_67914[iVar0 /*9*/] == iParam1)
		{
			if (Global_67914[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67914[iVar0 /*9*/].f_6 = iParam0;
				Global_67914[iVar0 /*9*/].f_7 = 1;
				Global_67914[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_65(int iParam0, int iParam1)
{
	Global_55829 = iParam0;
	Global_55830 = iParam1;
}

int func_66(var uParam0, char* sParam1, var uParam2)
{
	switch (*uParam0)
	{
		case 0:
			if (func_97())
			{
				if ((func_96(74) || func_96(75)) && func_95())
				{
					if (func_25() == 0)
					{
						func_94(1);
						func_93(46, 1);
						*uParam0 = 4;
					}
					else
					{
						func_92(uParam2, 0, 0, "MICHAEL", 0, 1);
						if (func_81(uParam2, func_91(), func_25(), "FBIPRAU", func_90(), 9, 1, 0, 0, 0))
						{
							*sParam1 = { func_80(1) };
							func_93(46, 1);
							*uParam0 = 1;
						}
					}
				}
				else if (func_25() == 0)
				{
					func_94(0);
					*uParam0 = 4;
				}
				else
				{
					func_92(uParam2, 0, 0, "MICHAEL", 0, 1);
					if (func_81(uParam2, func_91(), func_25(), "FBIPRAU", func_90(), 9, 1, 0, 0, 0))
					{
						*sParam1 = { func_80(0) };
						*uParam0 = 1;
					}
				}
			}
			else
			{
				func_73();
				*uParam0 = 4;
			}
			break;
		
		case 1:
			if (func_72())
			{
				if (unk_0xF29A0451BC42EF27() >= 0)
				{
					func_71("FBIPRAU", sParam1);
					func_70(1);
					*uParam0 = 3;
				}
			}
			if (func_69())
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_72())
			{
				if (!func_68(0))
				{
					if (!func_96(3) && func_97())
					{
						func_67(50, 0);
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

void func_67(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_101652.f_7556[iParam0] = 1;
	Global_101652.f_7556.f_236[iParam0] = (unk_0x84A97C70FFDEC0C8() + iParam1);
}

int func_68(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14443.f_1 > 3)
		{
			if (unk_0xF44A5E894FE76438(Global_2313, 14))
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
	if (unk_0xAB964FCFAC3C767A(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14443.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_69()
{
	if (Global_15794 == 1 || Global_16761 == 1)
	{
		return 1;
	}
	return 0;
}

void func_70(bool bParam0)
{
	unk_0x73998CD31AEFA620(bParam0);
	if (bParam0)
	{
	}
}

void func_71(char* sParam0, char* sParam1)
{
	if (unk_0x982007D3EB9D85D2())
	{
		Global_15802 = 1;
		StringCopy(&Global_15809, sParam0, 24);
		StringCopy(&Global_15803, sParam1, 24);
	}
}

int func_72()
{
	if (Global_15745 == 4)
	{
		if (unk_0x982007D3EB9D85D2())
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

void func_73()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_78(iVar0);
		if (!unk_0x00B5B0B68211D89B(iVar1))
		{
			if (func_77(iVar1, 0))
			{
				return;
			}
		}
		iVar0++;
	}
	func_74(func_75(), 0, func_25(), func_91(), 9, 6000, 6000, -1, 0, -1, 0);
}

int func_74(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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
	if (Global_101652.f_6631.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_101652.f_6631.f_911 == Var0.f_0)
		{
			Global_101652.f_6631.f_911 = -1;
		}
		Var0.f_3 = func_54(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (unk_0x84A97C70FFDEC0C8() + iParam5);
		Var0.f_1 = iParam10;
		iVar15 = 0;
		unk_0xB8A73E7DA87B2968(&iVar15, iParam2);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		unk_0xB8A73E7DA87B2968(&(Var0.f_1), 0);
		unk_0x4EA098C870B73AB7(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			unk_0xB8A73E7DA87B2968(&(Var0.f_1), 10);
		}
		Global_101652.f_6631[Global_101652.f_6631.f_136 /*15*/] = { Var0 };
		Global_101652.f_6631.f_136++;
		func_53(iParam2);
		return 1;
	}
	return 0;
}

int func_75()
{
	switch (func_76())
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

int func_76()
{
	return Global_69959;
}

int func_77(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0x00B5B0B68211D89B(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_78(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0xD5A676B97920D126())
			{
				return 0;
			}
		}
		if (unk_0xF44A5E894FE76438(Global_87672, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_78(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_25())
	{
		return unk_0xD5A676B97920D126();
	}
	return Global_89297[func_79(iParam0)];
}

int func_79(int iParam0)
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

struct<4> func_80(bool bParam0)
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

bool func_81(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	func_89(uParam0, iParam1, sParam3, iParam7, iParam8, 0);
	Global_1631 = iParam2;
	Global_15793 = 0;
	Global_15752 = 1;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_15759 = 0;
	Global_15750 = 1;
	Global_15797 = 0;
	Global_15799 = 0;
	if (iParam6 == 1)
	{
		Global_15757 = 1;
	}
	else
	{
		Global_15757 = 0;
	}
	Global_2621441 = 0;
	return func_82(sParam4, iParam5, bParam9);
}

int func_82(char* sParam0, int iParam1, bool bParam2)
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
					unk_0x73998CD31AEFA620(false);
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
					func_61();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x33688D334D224255())
		{
			return 0;
		}
		if (func_88(8, -1))
		{
			return 0;
		}
		Global_15821 = { Global_15815 };
		func_87();
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
			unk_0x4EA098C870B73AB7(&Global_2313, 20);
			unk_0x4EA098C870B73AB7(&Global_2314, 17);
			unk_0x4EA098C870B73AB7(&Global_2315, 0);
			if (bParam2)
			{
				func_86();
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
			if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
			{
				if (unk_0x534EC97E12C7FCD5(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (func_85())
				{
					return 0;
				}
				if (unk_0x7F86121C9448A9C2(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x9B0C8A2FC23E64AB(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0x4FF49E77780A0047(unk_0xD5A676B97920D126()))
				{
					return 0;
				}
				if (unk_0xC3B01B2627F47C9C(unk_0xD5A676B97920D126(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69697)
				{
					if (unk_0x3ACA21A90E0A949C(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0xB7FE4CCB71F0CA65(unk_0xFB6B3EEFAB2DD12C()))
					{
						return 0;
					}
					if (unk_0xCF3CEB67F1DDCB15(unk_0xD5A676B97920D126()))
					{
						return 0;
					}
					if (unk_0x6E0061F15FB0EC61(unk_0xFB6B3EEFAB2DD12C()))
					{
						return 0;
					}
				}
			}
			if (func_50())
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
				if (unk_0xF44A5E894FE76438(Global_2313, 9))
				{
					return 0;
				}
			}
			func_84();
			Global_15755 = bParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_83();
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
		func_61();
	}
	return 0;
}

void func_83()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x73998CD31AEFA620(false);
	Global_15745 = 1;
}

void func_84()
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
	unk_0x4EA098C870B73AB7(&Global_2314, 16);
}

int func_85()
{
	int iVar0;
	int iVar1;
	
	if (Global_69697)
	{
		iVar0 = 0;
		unk_0x2F29BEC857E6C0AC(unk_0xD5A676B97920D126(), &iVar1, 1);
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x8D80E88CDF0930A8() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
	{
		if (unk_0x59701A6EECDD5EEA(unk_0xD5A676B97920D126(), 78, 1))
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

void func_86()
{
	if (func_27(14))
	{
		if (!unk_0xB529B2A4B7C64D6D(unk_0xD5A676B97920D126(), 0))
		{
			if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[0 /*29*/])
			{
				Global_14443 = 0;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[1 /*29*/])
			{
				Global_14443 = 1;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(unk_0xD5A676B97920D126()) == Global_101652.f_26993[2 /*29*/])
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
		Global_14443 = func_25();
		if (Global_14443 == 145)
		{
			Global_14443 = 3;
		}
		if (Global_69697)
		{
			Global_14443 = 3;
		}
		if (Global_14443 > 3)
		{
			Global_14443 = 3;
		}
	}
}

void func_87()
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

bool func_88(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1352862.f_203[iParam1];
			}
			break;
	}
	return unk_0xF44A5E894FE76438(Global_1352862.f_1015, iParam0);
}

void func_89(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

char* func_90()
{
	char* sVar0;
	
	switch (func_76())
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

int func_91()
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

void func_92(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_69697)
	{
		if (!unk_0x00B5B0B68211D89B(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xF2B008953E08940C(iParam2, 0);
			}
			else
			{
				unk_0xF2B008953E08940C(iParam2, 1);
			}
		}
		if (!unk_0x00B5B0B68211D89B(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x59E3D56D355C62DB(iParam2, 0);
			}
			else
			{
				unk_0x59E3D56D355C62DB(iParam2, 1);
			}
		}
	}
}

void func_93(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_101652.f_8028.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_101652.f_8028.f_99.f_58[iParam0] = iParam1;
}

void func_94(bool bParam0)
{
	if (bParam0)
	{
		func_74(1527885205, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
	else if (!func_96(3))
	{
		func_74(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 50, -1, 0);
	}
	else
	{
		func_74(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
}

int func_95()
{
	if ((func_96(41) && func_96(3)) && func_96(21))
	{
		return 1;
	}
	return 0;
}

int func_96(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101652.f_8028.f_330[iParam0 /*6*/];
}

int func_97()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 33;
	while (iVar1 <= 37)
	{
		if (func_96(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (func_98(45))
	{
		iVar0++;
	}
	if (iVar0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_98(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101652.f_8028.f_99.f_58[iParam0];
}

void func_99(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x47C7D6CDCDD9966C(sParam0);
	unk_0x9C51EFE6A55E70E2(iParam1, 1);
}

bool func_100(char* sParam0, int iParam1, int iParam2)
{
	unk_0xC450F7ACA7F40F98(sParam0);
	if (iParam1 == 1)
	{
		unk_0xB1953EBEF4D6BD85(iParam2);
	}
	return unk_0x1B1A26465DF20C87();
}

bool func_101(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

void func_102()
{
	func_209(&iLocal_874, &uLocal_875, &iLocal_686, &iLocal_822, &iLocal_821, Local_827, Local_868.f_0, 0, 1090519040);
	func_208();
	func_149();
	switch (iLocal_684)
	{
		case 0:
			if (func_116(iLocal_683, bLocal_28))
			{
				if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 0)
				{
					if (func_36(iLocal_874))
					{
						if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_874, 0))
						{
							func_115("PRA_LEVVEH", &iLocal_820);
						}
					}
				}
				iLocal_684 = 1;
			}
			break;
		
		case 1:
			func_114(&iLocal_821, Local_827, &iLocal_685, iLocal_686, &iLocal_820, &iLocal_838);
			if (func_107(iLocal_874, Local_827, &iLocal_821, iLocal_686, iLocal_685, &iLocal_836, &iLocal_839, &iLocal_835, &iLocal_834, &iLocal_820, 1090519040))
			{
				if (!func_106())
				{
					if (func_66(&uLocal_687, &cLocal_1044, &uLocal_879))
					{
						func_62();
						func_57();
					}
				}
				else
				{
					func_93(46, 1);
					func_62();
					func_104(0);
				}
			}
			break;
		
		case 3:
			if (func_36(Local_868.f_0))
			{
				if (!unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), Local_868.f_0, 0))
				{
					unk_0x5467EF651716201E(unk_0xD5A676B97920D126(), Local_868.f_0, -1);
				}
				else
				{
					func_103(Local_868.f_0, Local_827, 126.0705f, 0, 1);
					func_39(1, 1, 1);
					iLocal_684 = 1;
				}
			}
			break;
	}
}

int func_103(int iParam0, struct<3> Param1, float fParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_10(iParam0))
	{
		if (bParam5 == 1)
		{
			fVar1 = 0f;
			bVar0 = unk_0x87AA1B4BA52B1360(Param1, &fVar1, 0);
			if (bVar0)
			{
				Param1.f_2 = fVar1;
			}
		}
		unk_0xBB9A2DB94A862D7A(iParam0, Param1, 1, 0, 0, iParam6);
		unk_0x99569FEC2425586D(iParam0, fParam4);
		if (bParam5)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

void func_104(bool bParam0)
{
	func_105(iLocal_683);
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

void func_105(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
	}
}

int func_106()
{
	if (func_97())
	{
		if ((func_96(74) || func_96(75)) && func_95())
		{
			return 1;
		}
	}
	return 0;
}

int func_107(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	float fVar0;
	
	if ((iParam5 == 1 || iParam5 == 2) || iParam5 == 3)
	{
		if (iParam6 == 0)
		{
			if (func_36(iParam0))
			{
				if (!unk_0x04B02215CFC8E89F(iParam0))
				{
					func_115(func_113(func_76()), iParam11);
				}
			}
			if (!unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), Param1, fParam12, fParam12, 2f, 0, 1, 2))
			{
				unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), Param1, fParam12, fParam12, 2f, 1, 1, 2);
				if (func_100(func_113(func_76()), 0, 0))
				{
					unk_0x0CA19C427F18E80B(func_113(func_76()));
				}
				*iParam7 = 1;
				func_111(iParam4, Param1, 1);
			}
			else
			{
				if (*iParam7)
				{
					fVar0 = (fParam12 / 2f);
					if (func_101(unk_0xD5A676B97920D126(), Param1, fVar0))
					{
						*iParam7 = 0;
						func_110(1077936128, 1);
					}
				}
				func_7(iParam4);
			}
		}
	}
	else if (unk_0x1AAFFE4111587B35(iParam0, Param1, fParam12, fParam12, 2f, 0, 1, 2))
	{
		if (*iParam9 == -1)
		{
			unk_0xAFC3B32426D08964(iParam0, 2);
			return 1;
		}
		if (!*iParam10)
		{
			if (func_100(func_113(func_76()), 0, 0))
			{
				unk_0x59C0D363E5A5B548();
			}
			*iParam9 = unk_0x84A97C70FFDEC0C8();
			*iParam10 = 1;
			unk_0xAFC3B32426D08964(iParam0, 2);
		}
		else if ((unk_0x84A97C70FFDEC0C8() - *iParam9) > 3000)
		{
			return 1;
		}
	}
	else
	{
		if (unk_0xF7E41E4E5E67E2CB(iParam0) == 2)
		{
			unk_0xAFC3B32426D08964(iParam0, 1);
		}
		if (!*iParam8)
		{
			if (func_100(func_109(func_76(), 0), 0, 0))
			{
				unk_0x0CA19C427F18E80B(func_109(func_76(), 0));
			}
			if (!func_100(func_108(func_76()), 0, 0))
			{
				func_99(func_108(func_76()), 7500, 0);
				*iParam8 = 1;
			}
		}
		*iParam7 = 1;
	}
	return 0;
}

char* func_108(int iParam0)
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

char* func_109(int iParam0, bool bParam1)
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

int func_110(float fParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		return 1;
	}
	iVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
	if (unk_0xA4DB44DF73EF4FE5(iVar0, 0))
	{
		if (unk_0x98BE504E8B389665(iVar0, -1, 0) == unk_0xD5A676B97920D126())
		{
			if (!unk_0x0700B6EAA7894D54(iVar0))
			{
				unk_0xF351193474DA13BB(iVar0, fParam0, iParam1, 0);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0x4BF9154155FB7938(unk_0xD5A676B97920D126()))
	{
		return 1;
	}
	if (unk_0xA4DB44DF73EF4FE5(iVar0, 0))
	{
		if (unk_0x0700B6EAA7894D54(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_111(int iParam0, struct<3> Param1, int iParam4)
{
	if (!unk_0x6901135DDCC4904D(*iParam0))
	{
		*iParam0 = func_112(Param1, 5, iParam4);
	}
}

int func_112(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = unk_0x6678F4628618607C(Param0);
	unk_0x0D792BA553E57B27(iVar0, iParam3);
	unk_0xF563C3AC64885E69(iVar0, 1f);
	unk_0xD947D2F43FD7F6D7(iVar0, iParam4);
	return iVar0;
}

char* func_113(int iParam0)
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

void func_114(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	switch (*iParam4)
	{
		case 0:
			if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0)
			{
				*iParam4 = 1;
			}
			break;
		
		case 1:
			func_7(iParam0);
			if ((iParam5 == 1 || iParam5 == 2) || iParam5 == 3)
			{
				unk_0x59C0D363E5A5B548();
				func_99("LOSE_WANTED", 7500, 0);
				*iParam4 = 2;
			}
			break;
		
		case 2:
			if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 0)
			{
				unk_0x59C0D363E5A5B548();
				if ((iParam5 == 1 || iParam5 == 2) || iParam5 == 3)
				{
					func_115(func_109(func_76(), 0), iParam6);
					func_111(iParam0, Param1, 1);
				}
				else if (iParam5 == 0 && !*iParam7)
				{
					func_99(func_108(func_76()), 7500, 0);
					*iParam7 = 1;
				}
				*iParam4 = 0;
			}
			break;
	}
}

void func_115(char* sParam0, int iParam1)
{
	if (!*iParam1)
	{
		func_99(sParam0, 7500, 0);
		*iParam1 = 1;
	}
}

int func_116(int iParam0, bool bParam1)
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
			else if (func_143(1, Local_824, 0))
			{
				if (func_142())
				{
					func_141(33);
					unk_0xFA03BA297FE81584(joaat("trash"), 1);
					unk_0xFA03BA297FE81584(joaat("towtruck"), 1);
					unk_0xFA03BA297FE81584(joaat("s_m_y_garbage"), 1);
					iLocal_683 = 2;
					func_7(&iLocal_821);
					func_139(&uLocal_671, 0, 0);
					func_138(190, 1244.338f, -339.3197f, 68.0823f);
					func_136();
					unk_0xF39E1A7DF38A7326("DRIVE", 0);
					unk_0xF39E1A7DF38A7326("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0xF39E1A7DF38A7326("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0xF39E1A7DF38A7326("WORLD_VEHICLE_DRIVE_SOLO", 0);
					return 1;
				}
				else if (((func_143(2, Local_868.f_1, Local_868.f_4) && func_143(3, Local_840.f_1, Local_840.f_4)) && func_143(4, Local_854.f_1, Local_854.f_4)) && func_135(0))
				{
					func_136();
					func_141(33);
					if (func_325(Local_840.f_0))
					{
						func_134(Local_840.f_0);
					}
					if (func_325(Local_854.f_0))
					{
						func_133(Local_854.f_0);
					}
					func_132(Local_868.f_0);
					if (func_325(Local_854.f_0) && func_325(Local_840.f_0))
					{
						func_121(iLocal_830, 1, 0, 1);
					}
					unk_0xFA03BA297FE81584(joaat("trash"), 1);
					unk_0xFA03BA297FE81584(joaat("towtruck"), 1);
					unk_0xFA03BA297FE81584(joaat("s_m_y_garbage"), 1);
					if (unk_0x03D9D7E6074E96B7(Local_868.f_0) != 0)
					{
						iVar0 = unk_0x03D9D7E6074E96B7(Local_868.f_0);
						unk_0x9CCF2EC98D9063CB(1);
						func_7(&iVar0);
						unk_0x9CCF2EC98D9063CB(0);
					}
					func_119(&iLocal_821, Local_868.f_0, 1);
					func_138(190, 1244.338f, -339.3197f, 68.0823f);
					unk_0xF39E1A7DF38A7326("DRIVE", 0);
					unk_0xF39E1A7DF38A7326("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0xF39E1A7DF38A7326("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0xF39E1A7DF38A7326("WORLD_VEHICLE_DRIVE_SOLO", 0);
					return 1;
				}
			}
			break;
		
		case 1:
			if (bParam1)
			{
				if ((func_143(2, Local_868.f_1, Local_868.f_4) && func_143(3, Local_840.f_1, Local_840.f_4)) && func_143(4, Local_854.f_1, Local_854.f_4))
				{
					func_118(unk_0xD5A676B97920D126(), 1197.861f, -353.011f, 68.0929f, 278.9647f);
					func_117();
					bLocal_28 = false;
					unk_0xF39E1A7DF38A7326("DRIVE", 0);
					unk_0xF39E1A7DF38A7326("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0xF39E1A7DF38A7326("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0xF39E1A7DF38A7326("WORLD_VEHICLE_DRIVE_SOLO", 0);
					func_39(1, 1, 1);
				}
			}
			else
			{
				func_136();
				return 1;
			}
			break;
		
		case 2:
			if (bParam1)
			{
				if (func_143(2, Local_868.f_1, Local_868.f_4))
				{
					func_117();
					func_136();
					unk_0x5467EF651716201E(unk_0xD5A676B97920D126(), Local_868.f_0, -1);
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
				if (func_143(2, Local_827, Local_868.f_4))
				{
					func_117();
					unk_0x5467EF651716201E(unk_0xD5A676B97920D126(), Local_868.f_0, -1);
					func_136();
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

void func_117()
{
	if (iLocal_683 == 1)
	{
		func_134(Local_840.f_0);
		func_133(Local_854.f_0);
		func_132(Local_868.f_0);
		func_121(iLocal_830, 1, 0, 1);
	}
	iLocal_877 = 0;
	iLocal_838 = 0;
	iLocal_839 = 0;
	iLocal_834 = 0;
	iLocal_835 = 0;
	iLocal_836 = 0;
}

void func_118(int iParam0, struct<3> Param1, float fParam4)
{
	if (func_325(uParam0))
	{
		unk_0x37338B7B7C4982DC(uParam0);
	}
	func_103(iParam0, Param1, fParam4, 0, 1);
}

void func_119(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x6901135DDCC4904D(*iParam0))
	{
		*iParam0 = func_120(iParam1, iParam2, 5);
	}
}

int func_120(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_10(uParam0))
	{
		iVar0 = unk_0x890C68C377CE0CA4(uParam0);
		unk_0x1BDDADB5ACDFD382(iVar0, uParam1);
		unk_0x0D792BA553E57B27(iVar0, iParam2);
		unk_0xF563C3AC64885E69(iVar0, 1f);
	}
	return iVar0;
}

void func_121(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_123();
	Local_111[1 /*11*/].f_7 = 3;
	Local_111[1 /*11*/].f_5 = 0;
	Local_111[1 /*11*/].f_10 = 1;
	Local_111[1 /*11*/].f_2 = 1500;
	Local_111[1 /*11*/].f_3 = 500;
	Local_111[0 /*11*/].f_5 = 0;
	Local_111[0 /*11*/].f_10 = 0;
	Local_111[0 /*11*/].f_2 = 1000;
	Local_111[0 /*11*/].f_3 = 100;
	unk_0x5CF7BD3BFEB33582("Enemies", &uLocal_80);
	unk_0x417BCC1ECC12E9A2(Local_111[0 /*11*/], uLocal_80);
	unk_0x417BCC1ECC12E9A2(Local_111[1 /*11*/], uLocal_80);
	unk_0x9B099BCCBD872090(Local_111[0 /*11*/], 1, 0);
	unk_0x9B099BCCBD872090(Local_111[1 /*11*/], 1, 0);
	func_122(1.9f, 1.9f, 8f, 0f, 0f, 0f);
}

void func_122(struct<3> Param0, struct<3> Param3)
{
	Local_82.f_8 = { Param0 };
	Local_82.f_11 = { Param3 };
	Local_82.f_1 = 4;
}

void func_123()
{
	if (!unk_0x04D83291EB9DE51D(Local_111[0 /*11*/], iLocal_109, 0))
	{
		unk_0x1D2CBA8F2F00D745(Local_111[0 /*11*/], unk_0x7E140C583F91AE2B(iLocal_109, func_131(1)), 1f, -1, 1048576000, 0, 1193033728);
		Local_111[0 /*11*/].f_7 = 1;
	}
	else
	{
		func_124(1);
	}
}

void func_124(bool bParam0)
{
	if (!unk_0x06F2E112EBC0C4FB(iLocal_109, 0, 0))
	{
		func_125(bParam0);
		if (iLocal_661 != (iLocal_81 - 1))
		{
			if (iLocal_661 == 4)
			{
				unk_0xFE840CDBAB53752C(Local_111[0 /*11*/], iLocal_109, Local_134[iLocal_661 /*25*/], 15f, 2883755, Local_134[iLocal_661 /*25*/].f_6);
			}
			else
			{
				unk_0xCE8917A47B1D85F4(Local_111[0 /*11*/], iLocal_109, Local_134[iLocal_661 /*25*/], 15f, 0, 0, 2883755, Local_134[iLocal_661 /*25*/].f_6, Local_134[iLocal_661 /*25*/].f_7);
			}
			Local_111[0 /*11*/].f_8 = Local_111[0 /*11*/].f_7;
			Local_111[0 /*11*/].f_7 = 4;
		}
		else
		{
			unk_0xB192238F4F854097(Local_111[0 /*11*/], iLocal_109, 15f, 786599);
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

void func_125(bool bParam0)
{
	if (iLocal_661 != -1)
	{
		if (!func_130(Local_134[iLocal_661 /*25*/].f_11) && !func_130(Local_134[iLocal_661 /*25*/].f_14))
		{
			unk_0xE6C975AE756267A4(Local_134[iLocal_661 /*25*/].f_11 - Local_134[iLocal_661 /*25*/].f_14, Local_134[iLocal_661 /*25*/].f_11 + Local_134[iLocal_661 /*25*/].f_14, 1, 1);
		}
	}
	if (!bParam0)
	{
		func_128();
	}
	else
	{
		iLocal_661 = func_126();
	}
	if (iLocal_661 != -1)
	{
		if (!func_130(Local_134[iLocal_661 /*25*/].f_11) && !func_130(Local_134[iLocal_661 /*25*/].f_14))
		{
			unk_0xE6C975AE756267A4(Local_134[iLocal_661 /*25*/].f_11 - Local_134[iLocal_661 /*25*/].f_14, Local_134[iLocal_661 /*25*/].f_11 + Local_134[iLocal_661 /*25*/].f_14, 0, 1);
		}
	}
}

int func_126()
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
		Var1 = { unk_0xC086F8D75730FA3A(iLocal_109, 1) };
		iVar4 = 0;
		while (iVar4 <= (iLocal_81 - 1))
		{
			fVar28 = unk_0x8E92CDAEB8357ABD(Var1, Local_134[iVar4 /*25*/], 1);
			if (!func_130(Local_134[iVar4 /*25*/]) && fVar28 > 25f)
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
		fVar30 = func_127(Local_134[iVar0 /*25*/] - Var1, unk_0xF42BD66111346ACC(iLocal_109));
		iVar5 = iVar0;
		iVar31 = 0;
		while (fVar30 < 0f && iVar31 < 40)
		{
			iVar5++;
			if (iVar5 >= 21)
			{
				iVar5 = 0;
			}
			Var1 = { unk_0xC086F8D75730FA3A(iLocal_109, 1) };
			fVar30 = func_127(Local_134[iVar5 /*25*/] - Var1, unk_0xF42BD66111346ACC(iLocal_109));
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

float func_127(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

void func_128()
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
				iLocal_661 = func_129();
			}
			else
			{
				iLocal_661 = -1;
				return;
			}
		}
		else
		{
			iLocal_661 = func_129();
		}
	}
}

int func_129()
{
	int iVar0;
	
	iVar0 = unk_0x7BC26452241AC7C9(0, (iLocal_81 - 1));
	while (Local_134[iVar0 /*25*/].f_18)
	{
		iVar0 = unk_0x7BC26452241AC7C9(0, (iLocal_81 - 1));
	}
	return iVar0;
}

int func_130(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_131(bool bParam0)
{
	struct<3> Var0;
	var uVar3;
	
	if (!bParam0)
	{
		uVar3 = unk_0x96C78339A82E0B67(iLocal_109, "wheel_rf");
	}
	else
	{
		uVar3 = unk_0x96C78339A82E0B67(iLocal_109, "wheel_lf");
	}
	Var0 = { unk_0xA277059EBE3B154A(iLocal_109, uVar3) };
	Var0 = { unk_0x483D90C99A690DBF(iLocal_109, Var0) };
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

void func_132(int iParam0)
{
	if (func_36(iParam0))
	{
		iLocal_109 = iParam0;
	}
}

void func_133(var uParam0)
{
	if (func_325(uParam0))
	{
		Local_111[1 /*11*/] = uParam0;
	}
}

void func_134(var uParam0)
{
	if (func_325(uParam0))
	{
		Local_111[0 /*11*/] = uParam0;
	}
}

int func_135(bool bParam0)
{
	unk_0x49E996A1E39EAAD7("missfbi4prepp1");
	unk_0x34868F78B53C7F66("missfbi4prepp1_garbageman");
	if (bParam0)
	{
		while (!unk_0xD7669BF035CDA5F6("missfbi4prepp1") && !unk_0x7F2866878D364099("missfbi4prepp1_garbageman"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		return 1;
	}
	else if (unk_0xD7669BF035CDA5F6("missfbi4prepp1") && unk_0x7F2866878D364099("missfbi4prepp1_garbageman"))
	{
		return 1;
	}
	return 0;
}

void func_136()
{
	func_137(&uLocal_879);
}

void func_137(var uParam0)
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
	func_92(uParam0, iVar0, unk_0xD5A676B97920D126(), sVar1, 0, 1);
}

void func_138(int iParam0, struct<3> Param1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if ((Param1.f_0 == Global_25497[iVar0 /*23*/][0 /*3*/] && Param1.f_1 == Global_25497[iVar0 /*23*/][0 /*3*/].f_1) && Param1.f_2 == Global_25497[iVar0 /*23*/][0 /*3*/].f_2)
	{
		return;
	}
	Global_25494 = 1;
	unk_0xB8A73E7DA87B2968(&(Global_25497[iVar0 /*23*/].f_11), 18);
	Global_25497[iVar0 /*23*/][0 /*3*/] = { Param1 };
	Global_31547 = 1;
}

void func_139(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x1995B52453EF6537())
	{
		if (unk_0xF44A5E894FE76438(Global_2494149.f_4449, 26))
		{
			return;
		}
	}
	if (unk_0x96F8C2C945A9B758())
	{
		unk_0x6125B94865C458A0(iParam2);
		unk_0x044DCEA35050EC01("FocusIn");
		unk_0xB3C38A4B84C152BF("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xAAD655F2351CC4B7("FocusOut", 0, 0);
			unk_0xA93E75A5493862BD(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x33E4179F57B9F232(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x1C079483C9D16F36(sVar0))
	{
		if (!unk_0x1995B52453EF6537())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x1C079483C9D16F36(uParam0->f_3))
	{
		if (func_140(uParam0->f_3))
		{
			unk_0x04890EB0282525A5(1);
		}
	}
	if (!unk_0x1C079483C9D16F36(sVar0))
	{
		if (func_140(sVar0))
		{
			unk_0x04890EB0282525A5(1);
		}
	}
}

bool func_140(char* sParam0)
{
	unk_0xB57C4257E4B22B1A(sParam0);
	return unk_0x39EEBD00DF395566(0);
}

void func_141(int iParam0)
{
	if (Global_88741 != -1)
	{
		if (iParam0 == Global_88741)
		{
			Global_88745 = 1;
			return;
		}
	}
}

int func_142()
{
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		if (unk_0x960985BE189C5A3B(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), joaat("trash")))
		{
			unk_0xC53606C390BE2727(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0), 1, 0);
			iLocal_874 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
			if (func_36(iLocal_874))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_143(int iParam0, struct<3> Param1, float fParam4)
{
	switch (iParam0)
	{
		case 0:
			if (func_148(Param1, Local_824, 1056964608, 0) && fParam4 == 0f)
			{
				return 1;
			}
			break;
		
		case 1:
			unk_0x68A99AC5778ED123(sLocal_819, 0);
			if (unk_0x4A980428C9937F4E(0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_36(Global_88316[0]))
			{
				unk_0xC53606C390BE2727(Global_88316[0], 1, 1);
				Local_868.f_0 = Global_88316[0];
				if (func_36(Local_868.f_0))
				{
					func_35(Local_868.f_0, 0);
					unk_0x70057AC4F7A58052(Local_868.f_0, 1);
					unk_0x0BD3F78CDD5346A8(Local_868.f_0, 1);
					return 1;
				}
			}
			else if (func_147(&Local_868, Local_868.f_5, Local_868.f_1, Local_868.f_4, 1))
			{
				func_35(Local_868.f_0, 0);
				unk_0x70057AC4F7A58052(Local_868.f_0, 1);
				unk_0x0BD3F78CDD5346A8(Local_868.f_0, 1);
				return 1;
			}
			break;
		
		case 3:
			if (unk_0x7887B64A08364778(Global_88316.f_9[0]))
			{
				if (!unk_0x1250D50E38843DBF(Global_88316.f_9[0], 1))
				{
					unk_0xC53606C390BE2727(Global_88316.f_9[0], 1, 1);
					Local_840.f_0 = Global_88316.f_9[0];
					if (func_325(Local_840.f_0))
					{
						unk_0x5457695C257D1470(Local_840.f_0, true);
						unk_0x237B0CFB6EEBD3BA(Local_840.f_0, 170, 0);
						unk_0x738326127C161284(Local_840.f_0, 65536, 1);
						unk_0x77E24C0B92B4FC24(Local_840.f_0, 50, 1);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_144(&Local_840, Local_840.f_5, Local_840.f_1, Local_840.f_4, 1, 0, 1, 1))
			{
				if (func_36(Local_868.f_0))
				{
					unk_0x5467EF651716201E(Local_840.f_0, Local_868.f_0, -1);
					unk_0x5457695C257D1470(Local_840.f_0, true);
					unk_0x237B0CFB6EEBD3BA(Local_840.f_0, 170, 0);
					unk_0x738326127C161284(Local_840.f_0, 65536, 1);
					unk_0x77E24C0B92B4FC24(Local_840.f_0, 50, 1);
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0x7887B64A08364778(Global_88316.f_9[1]))
			{
				if (!unk_0x1250D50E38843DBF(Global_88316.f_9[1], 1))
				{
					unk_0xC53606C390BE2727(Global_88316.f_9[1], 1, 1);
					Local_854.f_0 = Global_88316.f_9[1];
					if (func_325(Local_854.f_0))
					{
						unk_0x237B0CFB6EEBD3BA(Local_854.f_0, 170, 0);
						unk_0x738326127C161284(Local_854.f_0, 65536, 1);
						unk_0x77E24C0B92B4FC24(Local_854.f_0, 50, 1);
						unk_0x5457695C257D1470(Local_854.f_0, true);
						unk_0x6D20A3AA82585D8C(Local_854.f_0, 1);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_144(&Local_854, Local_854.f_5, Local_854.f_1, Local_854.f_4, 1, 0, 1, 1))
			{
				if (func_36(Local_868.f_0))
				{
					unk_0x5467EF651716201E(Local_854.f_0, Local_868.f_0, 0);
					unk_0x237B0CFB6EEBD3BA(Local_854.f_0, 170, 0);
					unk_0x738326127C161284(Local_854.f_0, 65536, 1);
					unk_0x77E24C0B92B4FC24(Local_854.f_0, 50, 1);
					unk_0x5457695C257D1470(Local_854.f_0, true);
					unk_0x6D20A3AA82585D8C(Local_854.f_0, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_144(var uParam0, var uParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!unk_0x7887B64A08364778(*uParam0))
	{
		if (func_146(uParam1, "Loading", 0))
		{
			*uParam0 = unk_0x8C855D8124E955CE(26, uParam1, Param2, uParam5, 1, 1);
			if (func_325(*uParam0))
			{
				if (bParam7)
				{
					unk_0xBBAF4B768DDB7572(*uParam0, 1);
				}
				if (bParam8)
				{
					unk_0x5457695C257D1470(*uParam0, bParam8);
				}
				if (!bParam9)
				{
					unk_0x74084690B489CA8D(*uParam0, bParam9);
				}
				if (bParam6)
				{
					func_145(uParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_325(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_145(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (unk_0x7AD0E9452821C95D(uParam0))
		{
			unk_0x8188DB74546FF484(uParam0);
		}
	}
	else
	{
		unk_0x8188DB74546FF484(uParam0);
	}
}

int func_146(var uParam0, char* sParam1, int iParam2)
{
	unk_0x4ACD1E4CBA159ED1(uParam0);
	if (!unk_0xC55B9553B3EDADE9(sParam1) && iParam2 != -1)
	{
	}
	if (unk_0x7AD0E9452821C95D(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_147(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (!unk_0x7887B64A08364778(*uParam0))
	{
		if (func_146(iParam1, "Loading", 0))
		{
			*uParam0 = unk_0xDE8A46A23FDCBBFE(iParam1, Param2, fParam5, 1, 1);
			if (unk_0x7887B64A08364778(*uParam0))
			{
				if (!unk_0x2A29BF08180E7ADF(*uParam0))
				{
					unk_0xC53606C390BE2727(*uParam0, 1, 0);
				}
				unk_0x2D739561304957CC(*uParam0, 1084227584);
				if (bParam6)
				{
					func_145(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (func_36(*uParam0))
		{
			unk_0xBB9A2DB94A862D7A(*uParam0, Param2, 1, 0, 0, 1);
			unk_0x99569FEC2425586D(*uParam0, fParam5);
		}
		if (!unk_0x2A29BF08180E7ADF(*uParam0))
		{
			unk_0xC53606C390BE2727(*uParam0, 1, 0);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_148(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0xC3D3EC28F0EB3C6D((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0xC3D3EC28F0EB3C6D((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0xC3D3EC28F0EB3C6D((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0xC3D3EC28F0EB3C6D((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0xC3D3EC28F0EB3C6D((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_149()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		func_150(&(Local_111[iVar0 /*11*/]), iVar0);
		iVar0++;
	}
}

void func_150(var uParam0, int iParam1)
{
	if (func_325(*uParam0))
	{
		func_196(uParam0, iParam1, 0);
		if (unk_0xEBA40DFF7CCE3511(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 3))
		{
			if (unk_0x1F2CF2B9307EAB08(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man") >= 0.172f)
			{
				if (func_10(Local_134[iLocal_661 /*25*/].f_17) && unk_0x4FAD9D28DF12811B(Local_134[iLocal_661 /*25*/].f_17))
				{
					unk_0xF0C989F97C26A641(*uParam0, 1048576000);
					unk_0x63CCF298723C4BD4(*uParam0);
					if (iLocal_661 <= 20 && iLocal_661 != -1)
					{
						Local_134[iLocal_661 /*25*/].f_18 = 1;
						uParam0->f_9 = 0;
					}
					unk_0x4FE8E15113ECBFEF(Local_134[iLocal_661 /*25*/].f_17, 1, 0);
					unk_0xD69AF588CB946574(Local_134[iLocal_661 /*25*/].f_17, 1, unk_0xF42BD66111346ACC(*uParam0), 0, 1, 1, 0);
				}
			}
		}
		switch (uParam0->f_5)
		{
			case 0:
				if (iParam1 == 0)
				{
					func_193();
					func_192(uParam0);
				}
				func_179(uParam0);
				break;
			
			case 1:
				func_152(uParam0);
				break;
		}
	}
	else
	{
		if (func_10(Local_134[iLocal_661 /*25*/].f_17))
		{
			if (unk_0x4FAD9D28DF12811B(Local_134[iLocal_661 /*25*/].f_17))
			{
				unk_0x4FE8E15113ECBFEF(Local_134[iLocal_661 /*25*/].f_17, 1, 0);
				unk_0xD69AF588CB946574(Local_134[iLocal_661 /*25*/].f_17, 1, unk_0xF42BD66111346ACC(*uParam0), 0, 1, 1, 0);
			}
		}
		func_7(&(uParam0->f_4));
		if (unk_0x7887B64A08364778(*uParam0))
		{
			if (!func_151(unk_0xD5A676B97920D126(), *uParam0, 150f, 1) && !bLocal_665)
			{
				func_5(uParam0, 1, 0, 1);
			}
		}
	}
}

bool func_151(int iParam0, int iParam1, float fParam2, int iParam3)
{
	return unk_0xB7A628320EFF8E47(unk_0xC086F8D75730FA3A(iParam0, iParam3), unk_0xC086F8D75730FA3A(iParam1, iParam3)) <= (fParam2 * fParam2);
}

void func_152(var uParam0)
{
	var uVar0;
	var uVar1;
	
	switch (uParam0->f_6)
	{
		case 5:
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_1) > uParam0->f_3)
			{
				if (func_178(*uParam0, 780511057))
				{
					unk_0x37338B7B7C4982DC(*uParam0);
				}
				unk_0xBB8F1D58B7578137(*uParam0, unk_0xD5A676B97920D126(), 30f, -1, 0, 0);
				uParam0->f_6 = 6;
				uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
			}
			break;
		
		case 21:
			if (unk_0xB3EED8E53275CA90(unk_0xD5A676B97920D126(), 6))
			{
				if (func_171(*uParam0, unk_0xD5A676B97920D126(), 1126825984, 1, 250, 7))
				{
					func_170(uParam0, 1);
					return;
				}
			}
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_1) > uParam0->f_3)
			{
				if (!unk_0x6A0583ECFCCECC9B(*uParam0, 0))
				{
					unk_0x79B03047C710A12F(*uParam0, unk_0xD5A676B97920D126(), 8f, -1f, 10f, 0);
				}
				else
				{
					unk_0x456121A0AAC868D4(&uVar0);
					unk_0xE9148EE8AA200B60(0, 0, 0);
					unk_0x182DAF81B229194E(0, unk_0xD5A676B97920D126(), 0, 16);
					unk_0xCFE67FBB69F1C410(uVar0);
					unk_0x8B06B801B92CEC2D(*uParam0, uVar0);
					unk_0x873418BFBF9A6780(&uVar0);
				}
				if (!unk_0x6901135DDCC4904D(uParam0->f_4))
				{
					uParam0->f_4 = func_167(*uParam0, 1, 145);
				}
				uParam0->f_6 = 22;
				uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
			}
			break;
		
		case 10:
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_1) > uParam0->f_3)
			{
				if (unk_0x6A0583ECFCCECC9B(*uParam0, 0))
				{
					unk_0x12A60388636C9B1C(*uParam0, 120, 1);
					uParam0->f_6 = 12;
					uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
				}
				else if (!func_178(*uParam0, 474215631))
				{
					if (func_178(*uParam0, 780511057))
					{
						unk_0x37338B7B7C4982DC(*uParam0);
					}
					unk_0xD4BBFF77570A437F(*uParam0, -1);
					uParam0->f_6 = 12;
					uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
				}
			}
			break;
		
		case 3:
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_1) > uParam0->f_3)
			{
				unk_0x98C09947D5F3B817(*uParam0, 1, 1);
				unk_0xBB8F1D58B7578137(*uParam0, unk_0xD5A676B97920D126(), 500f, -1, 0, 1);
				uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
				uParam0->f_6 = 4;
				uParam0->f_5 = 1;
			}
			break;
		
		case 11:
			func_166(uParam0);
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_1) > 5000)
			{
				if (!func_178(*uParam0, 713668775))
				{
					if (unk_0x7887B64A08364778(Local_111[func_165(uParam0->f_10) /*11*/]))
					{
						unk_0x1D2CBA8F2F00D745(*uParam0, Local_667, 1f, -1, 2f, 0, 1193033728);
					}
				}
				uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
				uParam0->f_6 = 23;
				uParam0->f_5 = 1;
			}
			break;
		
		case 18:
			if (!func_178(*uParam0, -2017877118))
			{
				unk_0x456121A0AAC868D4(&uVar1);
				if (func_164(unk_0xC086F8D75730FA3A(*uParam0, 1), unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1)) > 1.5f)
				{
					unk_0x27102CF7EA2E2000(0, unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1), 0);
				}
				unk_0x8D0CDF4F245C8BE9(0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				unk_0xCFE67FBB69F1C410(uVar1);
				unk_0x8B06B801B92CEC2D(*uParam0, uVar1);
				unk_0x873418BFBF9A6780(&uVar1);
				uParam0->f_5 = 1;
				uParam0->f_6 = 20;
				uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
			}
			break;
		
		case 19:
			func_166(uParam0);
			if (!func_178(*uParam0, -2017877118))
			{
				unk_0x8D0CDF4F245C8BE9(*uParam0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				uParam0->f_5 = 1;
				uParam0->f_6 = 20;
				uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
			}
			break;
		
		case 1:
			if (!unk_0x04D83291EB9DE51D(*uParam0, iLocal_109, 0))
			{
				func_162(uParam0);
			}
			break;
		
		case 2:
			if (!unk_0x81C4995860081BC3(*uParam0) && (unk_0x84A97C70FFDEC0C8() - uParam0->f_1) > 3000)
			{
				func_162(uParam0);
			}
			break;
		
		case 4:
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_1) > 8000)
			{
				unk_0xBB8F1D58B7578137(*uParam0, unk_0xD5A676B97920D126(), 500f, -1, 0, 0);
				if (!iLocal_666)
				{
					if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 0)
					{
						unk_0xD333A6376EE57D56(unk_0xFB6B3EEFAB2DD12C(), 2, 0);
						unk_0xB765EEE9B2DD5EC5(unk_0xFB6B3EEFAB2DD12C(), 0);
						iLocal_666 = 1;
					}
				}
				unk_0x98C09947D5F3B817(*uParam0, 0, 1);
				uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
				uParam0->f_6 = 8;
			}
			else if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 1)
			{
				unk_0x98C09947D5F3B817(*uParam0, 0, 1);
				uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
				uParam0->f_6 = 8;
			}
			break;
		
		case 6:
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_1) > uParam0->f_2)
			{
				if (!func_151(*uParam0, unk_0xD5A676B97920D126(), 15f, 1))
				{
					func_7(&(uParam0->f_4));
					uParam0->f_6 = 7;
					uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
				}
			}
			break;
		
		case 7:
			if (unk_0x04D83291EB9DE51D(*uParam0, iLocal_109, 1))
			{
				if (uParam0->f_6 != 4 && uParam0->f_6 != 1)
				{
					if (func_160())
					{
						if (func_325(*uParam0))
						{
							unk_0x37338B7B7C4982DC(*uParam0);
							unk_0xBB8F1D58B7578137(*uParam0, unk_0xD5A676B97920D126(), 500f, -1, 0, 1);
							uParam0->f_6 = 1;
						}
					}
				}
				if (!func_151(*uParam0, unk_0xD5A676B97920D126(), 120f, 1))
				{
					func_5(uParam0, 1, 0, 1);
				}
			}
			else
			{
				func_162(uParam0);
			}
			break;
		
		case 8:
			if (!func_151(*uParam0, unk_0xD5A676B97920D126(), 120f, 1))
			{
				func_5(uParam0, 1, 0, 1);
			}
			break;
		
		case 9:
			if (unk_0x63F7D2743457E11D(*uParam0))
			{
				func_170(uParam0, 1);
				return;
			}
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_1) > uParam0->f_2 || !func_178(*uParam0, 2104565373))
			{
				func_157(uParam0);
			}
			break;
		
		case 12:
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_1) >= uParam0->f_2)
			{
				unk_0xBB8F1D58B7578137(*uParam0, unk_0xD5A676B97920D126(), 500f, -1, 0, 1);
				uParam0->f_6 = 5;
			}
			else
			{
				unk_0x12A60388636C9B1C(*uParam0, 120, 1);
			}
			break;
		
		case 13:
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_151(*uParam0, unk_0xD5A676B97920D126(), 15f, 1))
				{
					func_157(uParam0);
					uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
				}
				else if (func_171(Local_111[func_165(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_170(uParam0, 0);
				}
				else
				{
					func_156(uParam0);
					uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
				}
			}
			break;
		
		case 15:
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_151(*uParam0, unk_0xD5A676B97920D126(), 15f, 1))
				{
					func_157(uParam0);
					uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
				}
				else if (func_171(Local_111[func_165(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_170(uParam0, 0);
				}
				else
				{
					func_156(uParam0);
					uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
				}
			}
			break;
		
		case 16:
			if (unk_0x63F7D2743457E11D(*uParam0))
			{
				func_170(uParam0, 1);
				return;
			}
			if ((unk_0x84A97C70FFDEC0C8() - iLocal_670) >= 9000)
			{
				if (!func_155(uParam0))
				{
					func_157(uParam0);
					uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
				}
				else
				{
					uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
					uParam0->f_5 = 1;
					uParam0->f_6 = 16;
				}
			}
			else if ((unk_0x84A97C70FFDEC0C8() - iLocal_670) >= 5000 && (unk_0x84A97C70FFDEC0C8() - iLocal_670) <= 5500)
			{
				if (unk_0x6A0583ECFCCECC9B(*uParam0, 0))
				{
					if (unk_0x4F26164685F66EB2(*uParam0))
					{
						unk_0x9FBF7F1A9290C3D2(*uParam0);
					}
				}
			}
			break;
		
		case 14:
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_151(*uParam0, unk_0xD5A676B97920D126(), 15f, 1))
				{
					func_157(uParam0);
					uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
				}
				else if (func_171(Local_111[func_165(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_170(uParam0, 0);
				}
				else
				{
					func_156(uParam0);
					uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
				}
			}
			break;
		
		case 17:
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_151(*uParam0, unk_0xD5A676B97920D126(), 15f, 1))
				{
					func_157(uParam0);
					uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
				}
				else if (func_171(Local_111[func_165(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_170(uParam0, 0);
				}
				else
				{
					func_156(uParam0);
					uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
				}
			}
			break;
		
		case 20:
			if (unk_0xB3EED8E53275CA90(unk_0xD5A676B97920D126(), 6) && !unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
			{
				if (func_171(*uParam0, unk_0xD5A676B97920D126(), 1126825984, 1, 250, 7))
				{
					func_170(uParam0, 1);
					return;
				}
			}
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_1) >= 6000)
			{
				if (!unk_0x1AC9C20D51EE6DC3(*uParam0, unk_0x7E140C583F91AE2B(iLocal_109, 5f, 0f, -2f), unk_0xC086F8D75730FA3A(iLocal_109, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
				{
					func_157(uParam0);
				}
				else
				{
					func_162(uParam0);
					func_162(&(Local_111[func_165(uParam0->f_10) /*11*/]));
				}
				uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
			}
			func_166(uParam0);
			break;
		
		case 22:
			if (unk_0xB3EED8E53275CA90(unk_0xD5A676B97920D126(), 6))
			{
				if (func_171(*uParam0, unk_0xD5A676B97920D126(), 1126825984, 1, 250, 7))
				{
					func_170(uParam0, 1);
					return;
				}
			}
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_151(*uParam0, unk_0xD5A676B97920D126(), 15f, 1))
				{
					func_157(uParam0);
					uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
					return;
				}
				else
				{
					func_156(uParam0);
					uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
				}
			}
			break;
		
		case 23:
			func_196(uParam0, uParam0->f_10, 1);
			func_166(uParam0);
			if (func_101(*uParam0, Local_667, 2f))
			{
				if (func_153(*uParam0, Local_667, 1126825984, 0))
				{
					unk_0x37338B7B7C4982DC(*uParam0);
					uParam0->f_6 = 19;
					uParam0->f_5 = 1;
					uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
				}
			}
			break;
	}
}

int func_153(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_154(Param1 - unk_0xC086F8D75730FA3A(iParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0xF42BD66111346ACC(iParam0) };
	}
	else
	{
		Var3 = { func_154(unk_0x6DE9A8183DA7678E(iParam0, 31086, 0f, 5f, 0f) - unk_0x6DE9A8183DA7678E(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_127(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

Vector3 func_154(struct<3> Param0)
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

int func_155(var uParam0)
{
	if (unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), unk_0x7E140C583F91AE2B(iLocal_109, 0f, 10f, -2f), unk_0x7E140C583F91AE2B(iLocal_109, 0f, 3f, 2f), 5f, 0, 1, 0) && unk_0x4BF9154155FB7938(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_156(var uParam0)
{
	int iVar0;
	
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		iVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
		if (func_36(iVar0))
		{
			if (!unk_0xD1E7D11D552B5D62(*uParam0, iVar0, -1, 0, 0))
			{
				uParam0->f_6 = 18;
				uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
			}
		}
	}
}

void func_157(var uParam0)
{
	unk_0x42AFB71D42AF78EA(2, uLocal_80, joaat("player"));
	switch (uParam0->f_8)
	{
		case 4:
			break;
		
		case 10:
			break;
		
		case 8:
			func_123();
			break;
		
		case 3:
			if (!func_178(*uParam0, 242628503))
			{
				if (iLocal_661 <= 20 && iLocal_661 != -1)
				{
					Local_134[iLocal_661 /*25*/].f_18 = 1;
				}
				if (!unk_0x04D83291EB9DE51D(*uParam0, iLocal_109, 0))
				{
					if (uParam0->f_10 == 0)
					{
						unk_0x1D2CBA8F2F00D745(*uParam0, unk_0x7E140C583F91AE2B(iLocal_109, func_131(1)), 1f, -1, 1048576000, 0, 1193033728);
						uParam0->f_7 = 1;
					}
					else
					{
						unk_0x1D2CBA8F2F00D745(*uParam0, unk_0x7E140C583F91AE2B(iLocal_109, func_131(0)), 1f, -1, 1048576000, 0, 1193033728);
						uParam0->f_7 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x04D83291EB9DE51D(*uParam0, iLocal_109, 0))
			{
				if (uParam0->f_10 == 0)
				{
					unk_0x1D2CBA8F2F00D745(*uParam0, unk_0x7E140C583F91AE2B(iLocal_109, func_131(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					unk_0x1D2CBA8F2F00D745(*uParam0, unk_0x7E140C583F91AE2B(iLocal_109, func_131(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			break;
		
		case 9:
			if (!Local_134[iLocal_661 /*25*/].f_18)
			{
				if (uParam0->f_9 == 1)
				{
					func_158(uParam0);
				}
				else if (uParam0->f_10 == 0)
				{
					unk_0x1D2CBA8F2F00D745(*uParam0, unk_0x7E140C583F91AE2B(iLocal_109, func_131(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					unk_0x1D2CBA8F2F00D745(*uParam0, unk_0x7E140C583F91AE2B(iLocal_109, func_131(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			else if (!unk_0x04D83291EB9DE51D(*uParam0, iLocal_109, 0))
			{
				if (uParam0->f_10 == 0)
				{
					unk_0x1D2CBA8F2F00D745(*uParam0, unk_0x7E140C583F91AE2B(iLocal_109, func_131(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					unk_0x1D2CBA8F2F00D745(*uParam0, unk_0x7E140C583F91AE2B(iLocal_109, func_131(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			break;
		
		default:
			break;
	}
	uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
	uParam0->f_5 = 0;
}

void func_158(var uParam0)
{
	if (!func_178(*uParam0, -71340211))
	{
		if (Local_134[iLocal_661 /*25*/].f_23 != 0)
		{
			if (func_10(Local_134[iLocal_661 /*25*/].f_17))
			{
				unk_0x8B7988F835ACA7D9(*uParam0, Local_134[iLocal_661 /*25*/].f_17, -1, 0f, 180f, 1f, 0);
			}
		}
		else
		{
			unk_0x1D2CBA8F2F00D745(*uParam0, Local_134[iLocal_661 /*25*/].f_19, 1f, 20000, -1f, 0, func_159(Local_134[iLocal_661 /*25*/].f_19, unk_0xC086F8D75730FA3A(*uParam0, 1), 1));
		}
		if (func_36(iLocal_109))
		{
			unk_0x634DE7718387A63C(iLocal_109, 5, 0, 0);
		}
		uParam0->f_8 = uParam0->f_7;
		uParam0->f_7 = 9;
		uParam0->f_9 = 1;
	}
}

float func_159(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x2047800436E7B1E2(fVar1, fVar2);
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

int func_160()
{
	if (func_36(iLocal_109) && func_325(unk_0xD5A676B97920D126()))
	{
		if (unk_0x7D720C677145C91C(iLocal_109, unk_0xD5A676B97920D126(), 1))
		{
			unk_0x3C05FE2296BF5F53(iLocal_109);
			if (func_161() || unk_0xB38A470B669AC00B(iLocal_109) < 851)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_161()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0xA53003F5B0019FFC(iLocal_109, iVar0, 0))
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

void func_162(var uParam0)
{
	if (uParam0->f_6 != 3 && uParam0->f_6 != 4)
	{
		func_163(uParam0);
		uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
		uParam0->f_6 = 3;
		uParam0->f_5 = 1;
	}
}

void func_163(var uParam0)
{
	if (uParam0->f_7 == 9)
	{
		if (uParam0->f_9 >= 2)
		{
			if (!unk_0x00B5B0B68211D89B(*uParam0))
			{
				unk_0xF0C989F97C26A641(*uParam0, 1048576000);
				unk_0x63CCF298723C4BD4(*uParam0);
				unk_0x290A57C93304EF16(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 8f, -8f, -1, 56, 0, 0, 0, 0);
			}
		}
	}
}

float func_164(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0x1467106C5D2966B9((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_165(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_166(var uParam0)
{
	if (func_36(iLocal_109) && (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_109, 0) && !unk_0x04D83291EB9DE51D(*uParam0, iLocal_109, 0)))
	{
		if (unk_0x78D3CDB884C74FEB(iLocal_109) > 0f)
		{
			uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
			uParam0->f_8 = uParam0->f_7;
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
		}
	}
}

var func_167(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_168(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x6901135DDCC4904D(uVar0)) && unk_0xA6AD4206830E160C(&(Global_101652.f_26993[iParam2 /*29*/].f_3)))
	{
		unk_0x2EDAF851B28036F0(uVar0, &(Global_101652.f_26993[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_168(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x7887B64A08364778(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x890C68C377CE0CA4(iParam0);
	if (unk_0x8041FE602D4689B1(iParam0))
	{
		unk_0xF563C3AC64885E69(iVar0, func_169(unk_0x1995B52453EF6537(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x1BDDADB5ACDFD382(iVar0, bParam1);
		}
		else
		{
			unk_0x4F095059F1C175D5(iVar0, 2);
		}
	}
	else if (unk_0x6DA4D1391A7B813F(iParam0))
	{
		unk_0xF563C3AC64885E69(iVar0, func_169(unk_0x1995B52453EF6537(), 0.7f, 0.7f));
		unk_0x1BDDADB5ACDFD382(iVar0, bParam1);
	}
	else if (unk_0x8E0E23664261A6B9(iParam0))
	{
		unk_0xF563C3AC64885E69(iVar0, func_169(unk_0x1995B52453EF6537(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_169(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_170(var uParam0, int iParam1)
{
	func_163(uParam0);
	if ((unk_0xB3EED8E53275CA90(unk_0xD5A676B97920D126(), 6) || iParam1) || uParam0->f_6 == 23)
	{
		if (!func_151(unk_0xD5A676B97920D126(), *uParam0, 10f, 1))
		{
			if (!func_178(*uParam0, 1805844857))
			{
				uParam0->f_6 = 5;
				uParam0->f_5 = 1;
				uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
			}
		}
		else
		{
			uParam0->f_6 = 10;
			uParam0->f_5 = 1;
			uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
		}
	}
	else if (uParam0->f_5 != 1)
	{
		if (!func_178(*uParam0, 780511057) && !func_178(*uParam0, -71340211))
		{
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
			uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
		}
	}
}

bool func_171(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_177(iParam0, iParam1);
	if (!func_10(iParam0) || !func_10(iParam1))
	{
		if (iVar4 != -1)
		{
			func_176(&(Local_38[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_175(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_174();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_38[iVar4 /*4*/].f_1 = iParam0;
		Local_38[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x6DE9A8183DA7678E(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_172(&(Local_38[iVar4 /*4*/]), Var1, iParam1, &(Local_38[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x84A97C70FFDEC0C8() - Local_38[iVar4 /*4*/].f_3) < iParam4);
}

int func_172(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
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
		Var1 = { func_173(iParam4, iParam7) };
		*uParam0 = unk_0xE819DF1A8AD7E307(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0xEE7715D6C4A7B1F2(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0x6DA4D1391A7B813F(iVar7))
	{
		func_10(iVar7);
		if (unk_0x36B702E1B6552B8A(iVar7) == iParam4)
		{
			if (bLocal_79)
			{
				unk_0xD9F91573B5BD0A2A(Param1, unk_0xC086F8D75730FA3A(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x84A97C70FFDEC0C8();
			return 1;
		}
		return 0;
	}
	if (unk_0x8041FE602D4689B1(iVar7))
	{
		func_10(iVar7);
		if (unk_0x6A0583ECFCCECC9B(iParam4, 0))
		{
			if (unk_0x9A1EB82BF4C4844D(iVar7) == unk_0x0DBD8FE531FD620D(iParam4, 0))
			{
				if (bLocal_79)
				{
					unk_0xD9F91573B5BD0A2A(Param1, unk_0xC086F8D75730FA3A(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x84A97C70FFDEC0C8();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_173(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x7BC26452241AC7C9(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xC086F8D75730FA3A(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x6DE9A8183DA7678E(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x6DE9A8183DA7678E(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x6DE9A8183DA7678E(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x6DE9A8183DA7678E(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x6DE9A8183DA7678E(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x6DE9A8183DA7678E(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xC086F8D75730FA3A(iParam0, 1);
}

int func_174()
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

int func_175(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_154(unk_0xC086F8D75730FA3A(iParam1, 1) - unk_0xC086F8D75730FA3A(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0xF42BD66111346ACC(iParam0) };
	}
	else
	{
		Var3 = { func_154(unk_0x6DE9A8183DA7678E(iParam0, 31086, 0f, 5f, 0f) - unk_0x6DE9A8183DA7678E(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_127(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

void func_176(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_177(int iParam0, int iParam1)
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

int func_178(int iParam0, int iParam1)
{
	if (func_325(uParam0))
	{
		if (unk_0x1774A68441553185(uParam0, iParam1) == 1 || unk_0x1774A68441553185(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_179(var uParam0)
{
	float fVar0;
	
	if (uParam0->f_9 == 0 && uParam0->f_10 == 1)
	{
	}
	switch (uParam0->f_7)
	{
		case 1:
			if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_109, 1))
			{
				func_170(uParam0, 0);
				return;
			}
			if (uParam0->f_10 == 0)
			{
				func_190(uParam0, 1);
			}
			else
			{
				func_190(uParam0, 0);
			}
			break;
		
		case 2:
			if (unk_0xE4133A0C3C6C74A7(*uParam0, iLocal_109))
			{
				if (!func_178(*uParam0, -1794415470))
				{
					if (uParam0->f_10 == 0)
					{
						func_124(0);
					}
					else
					{
						uParam0->f_7 = 3;
					}
				}
			}
			else if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_109, 1))
			{
				func_170(uParam0, 0);
				return;
			}
			break;
		
		case 3:
			if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_109, 1))
			{
				func_170(uParam0, 0);
				return;
			}
			if (bLocal_664)
			{
				if (iLocal_661 <= 20 && iLocal_661 != -1)
				{
					if (!Local_134[iLocal_661 /*25*/].f_18)
					{
						if (func_101(*uParam0, Local_134[iLocal_661 /*25*/], 20f))
						{
							if (Local_134[iLocal_661 /*25*/].f_9 && unk_0x0700B6EAA7894D54(iLocal_109))
							{
								func_189();
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
			if (func_101(*uParam0, Local_134[iLocal_661 /*25*/], 25f))
			{
				if (Local_134[iLocal_661 /*25*/].f_9)
				{
					func_188(uParam0);
				}
				else
				{
					Local_134[iLocal_661 /*25*/].f_18 = 1;
					func_124(0);
				}
			}
			break;
		
		case 5:
			if (func_36(iLocal_109))
			{
				unk_0xF351193474DA13BB(iLocal_109, 25f, 10, 0);
				fVar0 = unk_0x78D3CDB884C74FEB(iLocal_109);
				if (fVar0 < 8f)
				{
					func_188(uParam0);
				}
			}
			break;
		
		case 6:
			if (!func_178(*uParam0, 242628503) && unk_0x0700B6EAA7894D54(iLocal_109))
			{
				if (bLocal_664)
				{
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 7;
				}
				else
				{
					unk_0xE9148EE8AA200B60(*uParam0, 0, 0);
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 8;
				}
			}
			break;
		
		case 7:
			if (func_325(Local_111[1 /*11*/]))
			{
				if (unk_0x04D83291EB9DE51D(Local_111[1 /*11*/], iLocal_109, 0) && Local_111[1 /*11*/].f_7 == 3)
				{
					func_124(0);
				}
			}
			break;
		
		case 8:
			if (!unk_0x04D83291EB9DE51D(*uParam0, iLocal_109, 0))
			{
				func_158(uParam0);
			}
			break;
		
		case 9:
			func_180(uParam0);
			break;
	}
}

void func_180(var uParam0)
{
	var uVar0;
	var uVar1;
	
	if (uParam0->f_9 >= 1 && uParam0->f_9 != 0)
	{
	}
	switch (uParam0->f_9)
	{
		case 1:
			if (!func_178(*uParam0, -2015108952))
			{
				unk_0x456121A0AAC868D4(&uVar0);
				if (func_164(unk_0xC086F8D75730FA3A(*uParam0, 1), Local_134[iLocal_661 /*25*/].f_19) > 1.5f)
				{
					unk_0x27102CF7EA2E2000(0, Local_134[iLocal_661 /*25*/].f_19, 0);
				}
				unk_0x290A57C93304EF16(0, "missfbi4prepp1", "_bag_pickup_garbage_man", 8f, -16f, -1, 528384, 0, 0, 0, 0);
				unk_0xCFE67FBB69F1C410(uVar0);
				unk_0x8B06B801B92CEC2D(*uParam0, uVar0);
				unk_0x873418BFBF9A6780(&uVar0);
				uParam0->f_9 = 2;
			}
			else if (func_185(Local_134[iLocal_661 /*25*/].f_19, *uParam0, 1f, 1f, 8f))
			{
				func_184(uParam0);
				return;
			}
			unk_0x4021274D40F03ABB(*uParam0, 0.2f);
			break;
		
		case 2:
			if (func_178(*uParam0, 242628503))
			{
				if (unk_0xEBA40DFF7CCE3511(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man", 3))
				{
					if (unk_0x1F2CF2B9307EAB08(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man") >= 0.333f)
					{
						unk_0x0501413236B03301(*uParam0, "missfbi4prepp1_garbageman", 0f);
						unk_0xA14ECBA790322506(*uParam0, "missfbi4prepp1_garbageman");
						if (func_10(Local_134[iLocal_661 /*25*/].f_17) && !unk_0x4FAD9D28DF12811B(Local_134[iLocal_661 /*25*/].f_17))
						{
							unk_0xD157F7C56C5A2FCC(Local_134[iLocal_661 /*25*/].f_17, *uParam0, unk_0xF9F732E1B7BD0FE4(*uParam0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
						}
					}
				}
				if (func_185(Local_134[iLocal_661 /*25*/].f_19, *uParam0, 1f, 1f, 8f))
				{
					func_184(uParam0);
					return;
				}
			}
			else if (!func_178(*uParam0, 713668775))
			{
				if (func_36(iLocal_109))
				{
					unk_0x1D2CBA8F2F00D745(*uParam0, unk_0x7E140C583F91AE2B(iLocal_109, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, unk_0x714F015B4D2DE1DC(iLocal_109));
				}
				uParam0->f_9 = 3;
			}
			unk_0x4021274D40F03ABB(*uParam0, 0.2f);
			break;
		
		case 3:
			if (func_36(iLocal_109))
			{
				if (!func_185(unk_0x7E140C583F91AE2B(iLocal_109, 0f, -5.5f, 0f), iLocal_109, 1.9f, 1.9f, 8f))
				{
					if (unk_0x1AAFFE4111587B35(*uParam0, unk_0x7E140C583F91AE2B(iLocal_109, 0f, -5.5f, 0f), 0.9f, 0.9f, 2f, 0, 1, 0))
					{
						if (!func_178(*uParam0, 713668775))
						{
							unk_0x456121A0AAC868D4(&uVar1);
							if (func_164(unk_0xC086F8D75730FA3A(*uParam0, 1), unk_0xC086F8D75730FA3A(iLocal_109, 1)) > 3f)
							{
								unk_0xA7D2EDC881768869(0, unk_0x714F015B4D2DE1DC(iLocal_109), 0);
							}
							unk_0x290A57C93304EF16(0, "missfbi4prepp1", "_bag_throw_garbage_man", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0xCFE67FBB69F1C410(uVar1);
							unk_0x8B06B801B92CEC2D(*uParam0, uVar1);
							unk_0x873418BFBF9A6780(&uVar1);
							uParam0->f_9 = 4;
						}
					}
					else if (!func_178(*uParam0, 713668775))
					{
						unk_0x1D2CBA8F2F00D745(*uParam0, unk_0x7E140C583F91AE2B(iLocal_109, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, unk_0x714F015B4D2DE1DC(iLocal_109));
					}
				}
				else
				{
					func_182(uParam0);
				}
			}
			break;
		
		case 4:
			if (!func_185(unk_0x7E140C583F91AE2B(iLocal_109, 0f, -5.5f, 0f), *uParam0, 1.9f, 1.9f, 8f))
			{
				if (func_178(*uParam0, 242628503))
				{
					if (unk_0xEBA40DFF7CCE3511(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man", 3))
					{
						if (unk_0x1F2CF2B9307EAB08(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man") >= 0.391f)
						{
							if (func_10(Local_134[iLocal_661 /*25*/].f_17))
							{
								if (unk_0x4FAD9D28DF12811B(Local_134[iLocal_661 /*25*/].f_17))
								{
									unk_0xF0C989F97C26A641(*uParam0, 1048576000);
									unk_0x63CCF298723C4BD4(*uParam0);
									unk_0x4FE8E15113ECBFEF(Local_134[iLocal_661 /*25*/].f_17, 1, 0);
									unk_0xE057610C6D8476EA(Local_134[iLocal_661 /*25*/].f_17, 2f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1082130432, -1082130432, -1082130432);
									unk_0xD69AF588CB946574(Local_134[iLocal_661 /*25*/].f_17, 1, unk_0xF42BD66111346ACC(*uParam0), 0, 1, 1, 0);
								}
								if (unk_0xC85EEB48C05E2A8A(Local_134[iLocal_661 /*25*/].f_17, iLocal_109))
								{
									func_181(&(Local_134[iLocal_661 /*25*/].f_17));
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
						unk_0x53D0F09DE1A526F7(iLocal_109, 5, 0);
						func_181(&(Local_134[iLocal_661 /*25*/].f_17));
					}
					func_157(uParam0);
				}
			}
			else
			{
				func_182(uParam0);
			}
			break;
		
		case 5:
			break;
	}
}

void func_181(var uParam0)
{
	if (unk_0x7887B64A08364778(*uParam0))
	{
		if (unk_0xE5C2BF941108FCCE(*uParam0))
		{
			unk_0x4FE8E15113ECBFEF(*uParam0, 1, 1);
		}
		unk_0x77CEDAB7C44BFD4E(uParam0);
	}
}

void func_182(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0x42AFB71D42AF78EA(5, uLocal_80, joaat("player"));
	func_163(uParam0);
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		if (!unk_0x6A0583ECFCCECC9B(*uParam0, 0))
		{
			unk_0x79B03047C710A12F(*uParam0, unk_0xD5A676B97920D126(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0x456121A0AAC868D4(&uVar0);
			unk_0xE9148EE8AA200B60(0, 0, 0);
			unk_0x182DAF81B229194E(0, unk_0xD5A676B97920D126(), 0, 16);
			unk_0xCFE67FBB69F1C410(uVar0);
			unk_0x8B06B801B92CEC2D(*uParam0, uVar0);
			unk_0x873418BFBF9A6780(&uVar0);
		}
	}
	else
	{
		unk_0x456121A0AAC868D4(&uVar1);
		unk_0xBE29918F5B8EC2EF(0, unk_0xD5A676B97920D126(), 0);
		unk_0x182DAF81B229194E(0, unk_0xD5A676B97920D126(), 0, 16);
		unk_0xCFE67FBB69F1C410(uVar1);
		unk_0x8B06B801B92CEC2D(*uParam0, uVar1);
		unk_0x873418BFBF9A6780(&uVar1);
	}
	unk_0xF0C989F97C26A641(*uParam0, 1048576000);
	unk_0x63CCF298723C4BD4(*uParam0);
	func_183();
	if (!unk_0x6901135DDCC4904D(uParam0->f_4))
	{
		uParam0->f_4 = func_167(*uParam0, 1, 145);
	}
	uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 15;
}

void func_183()
{
	Local_82.f_0 = 0;
	Local_82.f_26 = 0;
	Local_82.f_18 = 0;
}

void func_184(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0x42AFB71D42AF78EA(5, uLocal_80, joaat("player"));
	func_163(uParam0);
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		if (!unk_0x6A0583ECFCCECC9B(*uParam0, 0))
		{
			unk_0x79B03047C710A12F(*uParam0, unk_0xD5A676B97920D126(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0x456121A0AAC868D4(&uVar0);
			unk_0xE9148EE8AA200B60(0, 0, 0);
			unk_0x182DAF81B229194E(0, unk_0xD5A676B97920D126(), 0, 16);
			unk_0xCFE67FBB69F1C410(uVar0);
			unk_0x8B06B801B92CEC2D(*uParam0, uVar0);
			unk_0x873418BFBF9A6780(&uVar0);
		}
	}
	else
	{
		unk_0x456121A0AAC868D4(&uVar1);
		unk_0xBE29918F5B8EC2EF(0, unk_0xD5A676B97920D126(), 0);
		unk_0x182DAF81B229194E(0, unk_0xD5A676B97920D126(), 0, 16);
		unk_0xCFE67FBB69F1C410(uVar1);
		unk_0x8B06B801B92CEC2D(*uParam0, uVar1);
		unk_0x873418BFBF9A6780(&uVar1);
	}
	unk_0xF0C989F97C26A641(*uParam0, 1048576000);
	unk_0x63CCF298723C4BD4(*uParam0);
	func_183();
	if (!unk_0x6901135DDCC4904D(uParam0->f_4))
	{
		uParam0->f_4 = func_167(*uParam0, 1, 145);
	}
	uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 14;
}

int func_185(struct<3> Param0, int iParam3, struct<3> Param4)
{
	Local_82.f_2 = { Param0 };
	Local_82.f_8 = { Param4 };
	func_186(&Local_82, iParam3);
	if (Local_82.f_26)
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			if (unk_0x8041FE602D4689B1(Local_82.f_18))
			{
				if (func_10(Local_82.f_18))
				{
					if (unk_0x9A1EB82BF4C4844D(Local_82.f_18) == unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 1))
					{
						return 1;
					}
				}
			}
		}
		else if (unk_0x6DA4D1391A7B813F(Local_82.f_18))
		{
			if (func_10(Local_82.f_18))
			{
				if (unk_0x36B702E1B6552B8A(Local_82.f_18) == unk_0xD5A676B97920D126())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_186(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0xEE7715D6C4A7B1F2(*uParam0, &iVar0, &(uParam0->f_20), &(uParam0->f_23), &(uParam0->f_18));
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
		func_187(uParam0, uParam1);
	}
}

void func_187(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 0:
			break;
		
		case 1:
			*uParam0 = unk_0xE819DF1A8AD7E307(uParam0->f_2, uParam0->f_5, 511, uParam1, 7);
			break;
		
		case 2:
			*uParam0 = unk_0x0032C9AA051022A6(uParam0->f_17, 511, 4);
			break;
		
		case 3:
			*uParam0 = unk_0x932AB56A577B5F8F(uParam0->f_17, 511, 4);
			break;
		
		case 4:
			*uParam0 = unk_0xDB895465068AE7F2(uParam0->f_2, uParam0->f_8, uParam0->f_11, uParam0->f_14, 6, iParam1, 4);
			break;
		
		case 5:
			*uParam0 = unk_0xF9A18E213C1E726D(uParam0->f_2, uParam0->f_5, uParam0->f_15, 511, iParam1, 4);
			break;
	}
	uParam0->f_16 = *uParam0 != 0;
}

void func_188(var uParam0)
{
	var uVar0;
	
	if (func_36(iLocal_109))
	{
		unk_0x456121A0AAC868D4(&uVar0);
		unk_0xCE8917A47B1D85F4(0, iLocal_109, Local_134[iLocal_661 /*25*/].f_3, 8f, 0, joaat("trash"), 786469, 10f, 15f);
		unk_0xB19F1873A6D9D2CB(0, iLocal_109, Local_134[iLocal_661 /*25*/].f_3, Local_134[iLocal_661 /*25*/].f_8, Local_134[iLocal_661 /*25*/].f_10, 5f, 1);
		unk_0xCFE67FBB69F1C410(uVar0);
		unk_0x8B06B801B92CEC2D(*uParam0, uVar0);
		unk_0x873418BFBF9A6780(&uVar0);
		uParam0->f_7 = 6;
	}
}

void func_189()
{
	func_158(&(Local_111[1 /*11*/]));
}

void func_190(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (func_185(unk_0x7E140C583F91AE2B(iLocal_109, func_131(bParam1)), iLocal_109, 1.9f, 1.9f, 8f))
	{
		if (unk_0x1AC9C20D51EE6DC3(*uParam0, unk_0x7E140C583F91AE2B(iLocal_109, 5f, 0f, -2f), unk_0xC086F8D75730FA3A(iLocal_109, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0) && unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), unk_0x7E140C583F91AE2B(iLocal_109, 5f, 0f, -2f), unk_0xC086F8D75730FA3A(iLocal_109, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
		{
			func_191(uParam0);
		}
		else if (!func_178(*uParam0, 1227113341) && unk_0x1AC9C20D51EE6DC3(unk_0xD5A676B97920D126(), unk_0x7E140C583F91AE2B(iLocal_109, 5f, 0f, -2f), unk_0xC086F8D75730FA3A(iLocal_109, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
		{
			unk_0x37338B7B7C4982DC(*uParam0);
			unk_0xCB0FCE80F8D19186(*uParam0, unk_0xD5A676B97920D126(), -1, 4f, 1f, 1073741824, 0);
		}
	}
	else if (func_101(*uParam0, unk_0x7E140C583F91AE2B(iLocal_109, func_131(bParam1)), 5f))
	{
		iVar0 = -1;
		if (!bParam1)
		{
			iVar0 = 0;
		}
		unk_0x87D70F1F81DB77D3(*uParam0, iLocal_109, -1, iVar0, 1f, 8388609, 0);
		uParam0->f_7 = 2;
	}
}

void func_191(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0x42AFB71D42AF78EA(5, uLocal_80, joaat("player"));
	func_163(uParam0);
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		if (!unk_0x6A0583ECFCCECC9B(*uParam0, 0))
		{
			unk_0x79B03047C710A12F(*uParam0, unk_0xD5A676B97920D126(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0x456121A0AAC868D4(&uVar0);
			unk_0xE9148EE8AA200B60(0, 0, 0);
			unk_0x182DAF81B229194E(0, unk_0xD5A676B97920D126(), 0, 16);
			unk_0xCFE67FBB69F1C410(uVar0);
			unk_0x8B06B801B92CEC2D(*uParam0, uVar0);
			unk_0x873418BFBF9A6780(&uVar0);
		}
	}
	else
	{
		unk_0x456121A0AAC868D4(&uVar1);
		unk_0xBE29918F5B8EC2EF(0, unk_0xD5A676B97920D126(), 0);
		unk_0x182DAF81B229194E(0, unk_0xD5A676B97920D126(), 0, 16);
		unk_0xCFE67FBB69F1C410(uVar1);
		unk_0x8B06B801B92CEC2D(*uParam0, uVar1);
		unk_0x873418BFBF9A6780(&uVar1);
	}
	unk_0xF0C989F97C26A641(*uParam0, 1048576000);
	unk_0x63CCF298723C4BD4(*uParam0);
	func_183();
	uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 13;
}

void func_192(var uParam0)
{
	if (uParam0->f_5 != 1)
	{
		if (func_36(iLocal_109) && unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			if (!func_178(*uParam0, 2104565373) && unk_0x04D83291EB9DE51D(*uParam0, iLocal_109, 0))
			{
				if (func_151(unk_0xD5A676B97920D126(), iLocal_109, 10f, 1))
				{
					if (unk_0xC85EEB48C05E2A8A(iLocal_109, unk_0xD5A676B97920D126()))
					{
						unk_0x71908EDA6E89A925(*uParam0, unk_0xD5A676B97920D126(), 0, 0f, 0f, 0f, 10f, 100, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
						uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_6 = 9;
					}
				}
			}
		}
	}
}

void func_193()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_81 - 1))
	{
		if (Local_134[iVar0 /*25*/].f_23 != 0)
		{
			if (Local_134[iVar0 /*25*/].f_24)
			{
				if ((iVar0 != iLocal_661 && func_10(Local_134[iVar0 /*25*/].f_17)) && func_195(Local_134[iVar0 /*25*/].f_17, unk_0xD5A676B97920D126(), 1) > 200f)
				{
					unk_0x77CEDAB7C44BFD4E(&(Local_134[iVar0 /*25*/].f_17));
					Local_134[iVar0 /*25*/].f_24 = 0;
				}
			}
			else if (Local_134[iVar0 /*25*/].f_23 != 0)
			{
				if (func_101(unk_0xD5A676B97920D126(), Local_134[iVar0 /*25*/], 100f) || func_101(Local_111[0 /*11*/], Local_134[iVar0 /*25*/], 120f))
				{
					Local_134[iVar0 /*25*/].f_24 = func_194(&(Local_134[iVar0 /*25*/].f_17), Local_134[iVar0 /*25*/].f_23, Local_134[iVar0 /*25*/].f_19, Local_134[iVar0 /*25*/].f_22, 1);
				}
			}
		}
		iVar0++;
	}
}

int func_194(var uParam0, var uParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (!unk_0x7887B64A08364778(*uParam0))
	{
		if (func_146(uParam1, "Loading", 0))
		{
			*uParam0 = unk_0xF21B698F4FCCA3D3(uParam1, Param2, 1, 1, 0);
			if (unk_0x7887B64A08364778(*uParam0))
			{
				unk_0x99569FEC2425586D(*uParam0, uParam5);
				unk_0x7D326D5F253C92C7(*uParam0);
				if (bParam6)
				{
					func_145(uParam1, 1);
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

float func_195(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 0) };
	}
	if (!unk_0xB529B2A4B7C64D6D(iParam1, 0))
	{
		Var3 = { unk_0xC086F8D75730FA3A(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xC086F8D75730FA3A(iParam1, 0) };
	}
	return unk_0x8E92CDAEB8357ABD(Var0, Var3, iParam2);
}

void func_196(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_5 != 1 || iParam2)
	{
		if (!func_325(Local_111[func_165(iParam1) /*11*/]))
		{
			if (!bLocal_665)
			{
				if (unk_0x7887B64A08364778(Local_111[func_165(iParam1) /*11*/]))
				{
					if (func_175(*uParam0, Local_111[func_165(iParam1) /*11*/], 140f, 0) || func_151(Local_111[func_165(iParam1) /*11*/], *uParam0, 3f, 1))
					{
						func_170(uParam0, 0);
						bLocal_665 = true;
						return;
					}
					else
					{
						Local_667 = { unk_0xC086F8D75730FA3A(Local_111[func_165(iParam1) /*11*/], 1) };
						uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_8 = uParam0->f_7;
						uParam0->f_5 = 1;
						uParam0->f_6 = 11;
					}
				}
				else
				{
					func_170(uParam0, 0);
				}
			}
		}
		else if (Local_111[func_165(iParam1) /*11*/].f_6 == 22)
		{
			if (func_175(*uParam0, Local_111[func_165(iParam1) /*11*/], 140f, 0) && func_151(Local_111[func_165(iParam1) /*11*/], unk_0xD5A676B97920D126(), 15f, 1))
			{
				uParam0->f_5 = 1;
				uParam0->f_6 = 21;
			}
		}
		else if (Local_111[func_165(iParam1) /*11*/].f_6 == 5 || Local_111[func_165(iParam1) /*11*/].f_6 == 7)
		{
			if (func_151(Local_111[func_165(iParam1) /*11*/], *uParam0, 10f, 1))
			{
				func_170(uParam0, 0);
			}
		}
		if (func_207(*uParam0))
		{
			func_163(uParam0);
			uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
			uParam0->f_8 = uParam0->f_7;
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
		}
		if (uParam0->f_10 == 0 && uParam0->f_7 == 4)
		{
			if (func_155(uParam0))
			{
				if (unk_0x04D83291EB9DE51D(*uParam0, iLocal_109, 0))
				{
					unk_0x71908EDA6E89A925(*uParam0, unk_0xD5A676B97920D126(), 0, 0f, 0f, 0f, 10f, 100, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
					unk_0x10E74AF34F25FCFD(iLocal_109, 2000f);
					iLocal_670 = unk_0x84A97C70FFDEC0C8();
					uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
					uParam0->f_6 = 16;
					uParam0->f_5 = 1;
				}
			}
		}
		if (func_198(*uParam0, 1, 70f, 170f, 0, 1, 0, 0) && !func_197(uParam0))
		{
			if (unk_0xB3EED8E53275CA90(unk_0xD5A676B97920D126(), 6))
			{
				if (func_36(iLocal_109))
				{
					if (unk_0x04D83291EB9DE51D(*uParam0, iLocal_109, 0))
					{
						if (unk_0x78D3CDB884C74FEB(iLocal_109) > 5f)
						{
							if (iParam1 == 0)
							{
								unk_0x1DC0501F19F1A583(*uParam0, iLocal_109, unk_0xD5A676B97920D126(), 8, 30f, 786469, 300f, 2f, 1);
								uParam0->f_6 = 7;
								unk_0xD4BBFF77570A437F(Local_111[func_165(iParam1) /*11*/], -1);
								Local_111[func_165(iParam1) /*11*/].f_6 = 10;
								Local_111[func_165(iParam1) /*11*/].f_5 = 1;
								uParam0->f_5 = 1;
								uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
								Local_111[func_165(iParam1) /*11*/].f_1 = unk_0x84A97C70FFDEC0C8();
							}
							else
							{
								unk_0xD4BBFF77570A437F(*uParam0, -1);
								uParam0->f_6 = 12;
								unk_0x1DC0501F19F1A583(Local_111[func_165(iParam1) /*11*/], iLocal_109, unk_0xD5A676B97920D126(), 8, 30f, 786469, 300f, 2f, 1);
								Local_111[func_165(iParam1) /*11*/].f_6 = 5;
								Local_111[func_165(iParam1) /*11*/].f_5 = 1;
								uParam0->f_5 = 1;
								uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
								Local_111[func_165(iParam1) /*11*/].f_1 = unk_0x84A97C70FFDEC0C8();
							}
						}
						else
						{
							func_170(uParam0, 0);
							if (unk_0x7887B64A08364778(Local_111[func_165(iParam1) /*11*/]))
							{
								if (func_175(Local_111[func_165(iParam1) /*11*/], unk_0xD5A676B97920D126(), 1126825984, 0))
								{
									func_170(&(Local_111[func_165(iParam1) /*11*/]), 0);
								}
							}
						}
						unk_0x3C05FE2296BF5F53(*uParam0);
					}
					else
					{
						func_170(uParam0, 0);
						if (unk_0x7887B64A08364778(Local_111[func_165(iParam1) /*11*/]))
						{
							if (func_171(Local_111[func_165(iParam1) /*11*/], *uParam0, 1126825984, 1, 250, 7))
							{
								func_170(&(Local_111[func_165(iParam1) /*11*/]), 0);
							}
						}
					}
				}
			}
			else
			{
				uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
				uParam0->f_8 = uParam0->f_7;
				uParam0->f_5 = 1;
				uParam0->f_6 = 21;
				unk_0x3C05FE2296BF5F53(*uParam0);
				if (func_171(Local_111[func_165(iParam1) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					Local_111[func_165(iParam1) /*11*/].f_1 = unk_0x84A97C70FFDEC0C8();
					Local_111[func_165(iParam1) /*11*/].f_8 = uParam0->f_7;
					Local_111[func_165(iParam1) /*11*/].f_5 = 1;
					Local_111[func_165(iParam1) /*11*/].f_6 = 21;
					unk_0x3C05FE2296BF5F53(Local_111[func_165(iParam1) /*11*/]);
				}
			}
			uParam0->f_5 = 1;
		}
		else if (unk_0x63F7D2743457E11D(*uParam0))
		{
			func_163(uParam0);
			unk_0xBB8F1D58B7578137(*uParam0, unk_0xD5A676B97920D126(), 500f, -1, 0, 1);
			uParam0->f_6 = 2;
			uParam0->f_5 = 1;
			uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
		}
		if (unk_0x9B0C8A2FC23E64AB(*uParam0))
		{
			if (func_10(Local_134[iLocal_661 /*25*/].f_17))
			{
				if (unk_0x4FAD9D28DF12811B(Local_134[iLocal_661 /*25*/].f_17))
				{
					unk_0x4FE8E15113ECBFEF(Local_134[iLocal_661 /*25*/].f_17, 1, 0);
					unk_0xD69AF588CB946574(Local_134[iLocal_661 /*25*/].f_17, 1, unk_0xF42BD66111346ACC(*uParam0), 0, 1, 1, 0);
				}
			}
		}
	}
	if (uParam0->f_5 != 1)
	{
		if (func_325(Local_111[func_165(iParam1) /*11*/]))
		{
			if (unk_0x63F7D2743457E11D(Local_111[func_165(iParam1) /*11*/]))
			{
				func_163(uParam0);
				unk_0xBB8F1D58B7578137(*uParam0, unk_0xD5A676B97920D126(), 120f, -1, 0, 0);
				uParam0->f_1 = unk_0x84A97C70FFDEC0C8();
				uParam0->f_6 = 7;
				uParam0->f_5 = 1;
			}
		}
	}
}

int func_197(var uParam0)
{
	if ((unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), unk_0x7E140C583F91AE2B(*uParam0, 0f, -2f, 0f), 2f, 3f, 2f, 0, 1, 0) && !unk_0xB3EED8E53275CA90(unk_0xD5A676B97920D126(), 6)) && unk_0x647033B3E673624A(unk_0xD5A676B97920D126()))
	{
		return 1;
	}
	return 0;
}

int func_198(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_10(unk_0xD5A676B97920D126()) && func_10(iParam0))
	{
		if (unk_0x7D720C677145C91C(iParam0, unk_0xD5A676B97920D126(), 1))
		{
			return 1;
		}
		if (func_203(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0xB3EED8E53275CA90(unk_0xD5A676B97920D126(), 6))
		{
			if (unk_0x534EC97E12C7FCD5(unk_0xD5A676B97920D126()))
			{
				Var0 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) - unk_0xC086F8D75730FA3A(iParam0, 1) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_202(unk_0xD5A676B97920D126(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_199(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_199(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_10(unk_0xD5A676B97920D126()) && func_10(iParam0))
	{
		if (func_201(iParam0) || unk_0x982AB85BDD884D31(unk_0xFB6B3EEFAB2DD12C(), iParam0))
		{
			if (unk_0xB3EED8E53275CA90(unk_0xD5A676B97920D126(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_200(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_200(int iParam0, float fParam1)
{
	return func_171(iParam0, unk_0xD5A676B97920D126(), fParam1, 1, 250, 7);
}

int func_201(int iParam0)
{
	if (unk_0xF84188B3D9E24D81(unk_0xFB6B3EEFAB2DD12C(), iParam0) && unk_0xB3EED8E53275CA90(unk_0xD5A676B97920D126(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_202(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xF42BD66111346ACC(iParam0) };
	Var3 = { unk_0xC086F8D75730FA3A(iParam1, 1) - unk_0xC086F8D75730FA3A(iParam0, 1) };
	return (((Var0.f_0 * Var3.f_0) + (Var0.f_1 * Var3.f_1)) / unk_0x2A488C176D52CCA5(Var3, 0f, 0f, 0f)) > unk_0xD0FFB162F40A139C(fParam2);
}

int func_203(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_10(unk_0xD5A676B97920D126()) && func_10(iParam0))
	{
		unk_0x2F29BEC857E6C0AC(unk_0xD5A676B97920D126(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_206(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_204(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0xAB3AA0F867F67480(unk_0xD5A676B97920D126()))
			{
				if (unk_0x515E262CBF491958(unk_0xD5A676B97920D126()))
				{
					if (unk_0x1DEB1994A3C25E35(unk_0xC086F8D75730FA3A(iParam0, 1), fVar0, 1))
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
				if (func_206(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_204(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_204(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xC086F8D75730FA3A(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x94831A9ACDA94EDA(unk_0xC086F8D75730FA3A(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x94831A9ACDA94EDA(unk_0xC086F8D75730FA3A(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x94831A9ACDA94EDA(unk_0xC086F8D75730FA3A(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x94831A9ACDA94EDA(unk_0xC086F8D75730FA3A(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_205(iParam0, fParam1))
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
			if (func_205(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x4B16FF7207D89FDF(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_205(int iParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x0234C7F3E199BB93(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x0234C7F3E199BB93(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x0234C7F3E199BB93(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x0234C7F3E199BB93(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x0234C7F3E199BB93(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_153(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_206(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x515E262CBF491958(unk_0xD5A676B97920D126()))
		{
			if (unk_0x108650178993C477(unk_0xD5A676B97920D126(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x1DEB1994A3C25E35(unk_0xC086F8D75730FA3A(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_207(int iParam0)
{
	if (func_151(uParam0, unk_0xD5A676B97920D126(), 6f, 1))
	{
		if (!unk_0x6A0583ECFCCECC9B(uParam0, 0))
		{
			if (unk_0xC85EEB48C05E2A8A(iParam0, unk_0xD5A676B97920D126()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_208()
{
	if (func_36(Local_868.f_0))
	{
		if (func_151(unk_0xD5A676B97920D126(), Local_868.f_0, 100f, 1) && !iLocal_837)
		{
			unk_0xD4A0A19150A63589(joaat("trash"), 3);
			if (!unk_0xD58DA2C9C0B3826B(joaat("trash")))
			{
				iLocal_837 = 1;
			}
		}
		else if (!func_151(unk_0xD5A676B97920D126(), Local_868.f_0, 120f, 1) && iLocal_837)
		{
			unk_0xF704C514612D7CA3(joaat("trash"));
			iLocal_837 = 0;
		}
	}
}

void func_209(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, struct<3> Param5, int iParam8, bool bParam9, int iParam10)
{
	if (func_36(*iParam0))
	{
		switch (*iParam2)
		{
			case 0:
				if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), *iParam0, 0))
				{
					func_7(iParam3);
					if (func_100(func_108(func_76()), 0, 0))
					{
						unk_0x0CA19C427F18E80B(func_108(func_76()));
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
				else if (func_214(*iParam0) || func_213(*iParam0))
				{
					func_7(iParam3);
					if (func_100(func_108(func_76()), 0, 0))
					{
						unk_0x0CA19C427F18E80B(func_108(func_76()));
					}
					*iParam2 = 3;
				}
				else
				{
					if (func_100(func_109(func_76(), bParam9), 0, 0))
					{
						unk_0x0CA19C427F18E80B(func_109(func_76(), bParam9));
					}
					if (func_76() != 33)
					{
						func_211(iParam0);
					}
					else
					{
						func_210(iParam0, uParam1);
					}
				}
				break;
			
			case 2:
			case 1:
				if ((!unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), *iParam0, 0) && !func_214(*iParam0)) && !func_213(*iParam0))
				{
					func_7(iParam4);
					if (!unk_0x1AAFFE4111587B35(*iParam0, Param5, iParam10, iParam10, 2f, 0, 1, 2))
					{
						func_119(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
			
			case 3:
				if (!func_214(*iParam0) && !func_213(*iParam0))
				{
					func_7(iParam4);
					if (!unk_0x1AAFFE4111587B35(*iParam0, Param5, iParam10, iParam10, 2f, 0, 1, 2))
					{
						func_119(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
		}
	}
	else if (func_76() != 33)
	{
		func_211(iParam0);
	}
	else
	{
		func_210(iParam0, uParam1);
	}
}

void func_210(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!bLocal_28)
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
		{
			iVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
			if (iVar0 != *uParam0)
			{
				if (func_36(iVar0))
				{
					iVar1 = unk_0xA0A4DA31DEDFAC4F(iVar0);
					if (iVar1 == joaat("trash"))
					{
						*uParam1 = *uParam0;
						func_6(uParam0);
						*uParam0 = iVar0;
						func_35(*uParam0, 1);
						func_35(*uParam1, 3);
						if (!unk_0x2A29BF08180E7ADF(*uParam0))
						{
							unk_0xC53606C390BE2727(*uParam0, 1, 1);
						}
					}
					else if (iVar1 == joaat("towtruck"))
					{
						uVar2 = unk_0x96255C1B982B521A(unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0));
						if (func_10(uVar2))
						{
							iVar0 = unk_0x9A1EB82BF4C4844D(uVar2);
							if (unk_0xA0A4DA31DEDFAC4F(iVar0) == joaat("trash"))
							{
								*uParam1 = *uParam0;
								func_6(uParam0);
								*uParam0 = iVar0;
								func_35(*uParam0, 1);
								func_35(*uParam1, 3);
								if (!unk_0x2A29BF08180E7ADF(*uParam0))
								{
									unk_0xC53606C390BE2727(*uParam0, 1, 1);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_211(var uParam0)
{
	int iVar0;
	
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		iVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
		if (iVar0 != *uParam0)
		{
			if (func_36(iVar0))
			{
				if (unk_0xA0A4DA31DEDFAC4F(iVar0) == func_212(func_76()))
				{
					func_6(uParam0);
					*uParam0 = iVar0;
					func_35(*uParam0, 1);
					unk_0xC53606C390BE2727(*uParam0, 1, 1);
				}
			}
		}
	}
}

int func_212(int iParam0)
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

int func_213(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((func_325(unk_0xD5A676B97920D126()) && unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0)) && func_36(iParam0))
	{
		iVar0 = unk_0x80AA649904BB5788();
		if (func_36(iVar0))
		{
			iVar1 = unk_0xA0A4DA31DEDFAC4F(iVar0);
			if ((iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2")) || iVar1 == joaat("cargobob3"))
			{
				if (unk_0x6C1EB91B51905F06(iVar0))
				{
					if (unk_0xF7C279382FE9EFF2(iVar0, iParam0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_214(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((func_325(unk_0xD5A676B97920D126()) && unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0)) && func_36(iParam0))
	{
		iVar0 = unk_0x80AA649904BB5788();
		if (func_36(iVar0))
		{
			iVar1 = unk_0xA0A4DA31DEDFAC4F(iVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2"))
			{
				if (unk_0x4D0C2D4CC4868449(iVar0, iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_215()
{
	func_209(&iLocal_874, &uLocal_875, &iLocal_686, &iLocal_822, &iLocal_821, Local_827, Local_868.f_0, 0, 1090519040);
	func_149();
	func_232();
	func_208();
	switch (iLocal_684)
	{
		case 0:
			if (func_116(iLocal_683, bLocal_28))
			{
				if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 0 && !func_231())
				{
					func_111(&iLocal_821, Local_827, 1);
					func_115("PRA_TAKBACK", &iLocal_820);
				}
				iLocal_684 = 1;
			}
			break;
		
		case 1:
			func_114(&iLocal_821, Local_827, &iLocal_685, iLocal_686, &iLocal_820, &iLocal_838);
			func_221();
			if (func_219(iLocal_874, Local_827, &iLocal_821, iLocal_685, iLocal_686, &iLocal_820, &iLocal_839, 0, 0, 1086324736))
			{
				unk_0x24A6C3D7D286F02F(8f, 5f, 4);
				iLocal_684 = 2;
			}
			break;
		
		case 2:
			func_216();
			func_7(&iLocal_821);
			func_7(&iLocal_822);
			if (func_110(1077936128, 1))
			{
				func_104(0);
			}
			break;
		
		case 3:
			if (func_36(iLocal_874))
			{
				if (!unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_874, 0))
				{
					unk_0x5467EF651716201E(unk_0xD5A676B97920D126(), iLocal_874, -1);
				}
				else
				{
					func_103(iLocal_874, Local_827, 146.5443f, 0, 1);
					func_39(1, 1, 1);
					iLocal_684 = 1;
				}
			}
			break;
	}
}

void func_216()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_78(iVar0);
		if (!unk_0x00B5B0B68211D89B(iVar1))
		{
			if (func_218(iVar1))
			{
				func_217(iVar1);
			}
		}
		iVar0++;
	}
}

int func_217(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0x00B5B0B68211D89B(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_78(iVar0) != iParam0)
		{
			return 0;
		}
		if (!unk_0xF44A5E894FE76438(Global_87673, iVar0))
		{
			return 0;
		}
		unk_0x4EA098C870B73AB7(&Global_87673, iVar0);
		return 1;
	}
	return 0;
}

int func_218(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0x00B5B0B68211D89B(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_78(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0xF44A5E894FE76438(Global_87673, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_219(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, float fParam11)
{
	if ((iParam6 == 1 || iParam6 == 2) || iParam6 == 3)
	{
		if (iParam5 == 0)
		{
			func_111(iParam4, Param1, 1);
			if (!bParam10)
			{
				if (func_36(iParam0))
				{
					if (unk_0x1AAFFE4111587B35(iParam0, Param1, fParam11, fParam11, 2f, 1, 1, 0))
					{
						return 1;
					}
				}
			}
			else if (unk_0x1AAFFE4111587B35(unk_0xD5A676B97920D126(), Param1, fParam11, fParam11, 2f, 1, 1, 2))
			{
				return 1;
			}
			if (func_100(func_108(func_76()), 0, 0))
			{
				unk_0x0CA19C427F18E80B(func_108(func_76()));
			}
			if (!func_220())
			{
				func_115(func_109(func_76(), bParam9), iParam7);
			}
		}
	}
	else if (iParam5 == 0)
	{
		if (!*iParam8)
		{
			if (func_100(func_109(func_76(), 0), 0, 0))
			{
				unk_0x0CA19C427F18E80B(func_109(func_76(), 0));
			}
			func_99(func_108(func_76()), 7500, 0);
			*iParam8 = 1;
		}
	}
	return 0;
}

bool func_220()
{
	return Global_91538.f_303 > 0;
}

void func_221()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar2 = func_78(iVar0);
		if (!unk_0x00B5B0B68211D89B(iVar2))
		{
			if (func_77(iVar2, 0))
			{
				if (!bVar1)
				{
					if (func_151(unk_0xD5A676B97920D126(), iVar2, 5f, 1))
					{
						if (!func_231())
						{
							func_226(iVar0);
							bVar1 = true;
						}
					}
				}
				if (!iLocal_1048[iVar0])
				{
					if (iVar0 == 0)
					{
						func_92(&uLocal_879, iVar0, iVar2, "MICHAEL", 0, 1);
					}
					else if (iVar0 == 1)
					{
						func_92(&uLocal_879, iVar0, iVar2, "FRANKLIN", 0, 1);
					}
					else if (iVar0 == 2)
					{
						func_92(&uLocal_879, iVar0, iVar2, "TREVOR", 0, 1);
					}
					iLocal_1048[iVar0] = 1;
				}
			}
			if (!func_218(iVar2))
			{
				if (func_77(iVar2, 0))
				{
					if (func_225(iVar2) || func_223(iVar2))
					{
						if (func_222(iVar2, 0))
						{
							unk_0xC53606C390BE2727(iVar2, 1, 1);
							unk_0x5457695C257D1470(iVar2, true);
							unk_0x37338B7B7C4982DC(iVar2);
						}
					}
				}
			}
			else if (unk_0x67F42C4B7B64C593(iVar2, 1))
			{
				if (func_225(iVar2))
				{
					if (unk_0x1774A68441553185(iVar2, -1273030092) != 1 && unk_0x1774A68441553185(iVar2, -1273030092) != 0)
					{
						if (unk_0x5AF533059A5816BC(623.3781f, -172.26f, 1700.732f, -2115.843f))
						{
							unk_0xCE8917A47B1D85F4(iVar2, unk_0x0DBD8FE531FD620D(iVar2, 0), Local_827, 20f, 0, 0, 34340901, 2f, 10f);
						}
						else
						{
							unk_0x491763F024B284EB(623.3781f, -172.26f, 1700.732f, -2115.843f);
						}
					}
				}
				else if (func_223(iVar2))
				{
					if (func_36(Local_868.f_0))
					{
						if (!func_151(iVar2, Local_868.f_0, 17f, 1))
						{
							if (unk_0x1774A68441553185(iVar2, -1273030092) != 1 && unk_0x1774A68441553185(iVar2, -1273030092) != 0)
							{
								unk_0xAFB9178F82948856(iVar2, unk_0x0DBD8FE531FD620D(iVar2, 0), Local_868.f_0, 3, 20f, 786468, 2f, 0.5f, 1);
							}
						}
					}
				}
				else
				{
					func_217(iVar2);
				}
			}
		}
		iVar0++;
	}
}

int func_222(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0x00B5B0B68211D89B(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_78(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0xF44A5E894FE76438(Global_87673, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0xD5A676B97920D126())
			{
				return 0;
			}
		}
		if (unk_0xF44A5E894FE76438(Global_87672, iVar0))
		{
			unk_0xF1929E6F0E5E10C5(iParam0, 0, 0);
			unk_0x6D20A3AA82585D8C(iParam0, 0);
			unk_0xB8A73E7DA87B2968(&Global_87673, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_223(int iParam0)
{
	int iVar0;
	
	if (!func_224())
	{
		if ((!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()) && unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0)) && unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 0)
		{
			iVar0 = unk_0x0DBD8FE531FD620D(unk_0xD5A676B97920D126(), 0);
			if (func_36(iVar0))
			{
				if (unk_0x960985BE189C5A3B(iVar0, joaat("trash")))
				{
					return 0;
				}
				if (unk_0x04D83291EB9DE51D(iParam0, iVar0, 0) && unk_0x98BE504E8B389665(iVar0, -1, 0) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_224()
{
	if (!unk_0x1995B52453EF6537())
	{
		return Global_89297.f_44 == 1;
	}
	return 0;
}

int func_225(int iParam0)
{
	if (!func_224())
	{
		if ((unk_0x7887B64A08364778(Local_868.f_0) && unk_0xA4DB44DF73EF4FE5(Local_868.f_0, 0)) && !unk_0x1AAFFE4111587B35(Local_868.f_0, Local_827, 2f, 2f, 2f, 0, 1, 0))
		{
			if ((!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()) && unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), Local_868.f_0, 0)) && unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 0)
			{
				if (unk_0x04D83291EB9DE51D(iParam0, Local_868.f_0, 0) && unk_0x98BE504E8B389665(Local_868.f_0, -1, 0) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_226(int iParam0)
{
	if (iLocal_683 > 1)
	{
		if (iLocal_685 > 0)
		{
			if (!unk_0xF44A5E894FE76438(Local_688[iParam0 /*8*/].f_7, 0) && iLocal_686 == 1)
			{
				if (!unk_0xE7C48EF8F50001B1())
				{
					if (func_230(&uLocal_879, cLocal_878, Local_688[iParam0 /*8*/][0], 8, 0, 0, 0))
					{
						unk_0xB8A73E7DA87B2968(&(Local_688[iParam0 /*8*/].f_7), 0);
					}
				}
			}
		}
		else
		{
			if ((unk_0xF44A5E894FE76438(Local_688[iParam0 /*8*/].f_7, 0) && !unk_0xF44A5E894FE76438(Local_688[iParam0 /*8*/].f_7, 1)) && iLocal_686 == 1)
			{
				if (!unk_0xE7C48EF8F50001B1())
				{
					if (func_230(&uLocal_879, cLocal_878, Local_688[iParam0 /*8*/][1], 7, 0, 0, 0))
					{
						unk_0xB8A73E7DA87B2968(&(Local_688[iParam0 /*8*/].f_7), 1);
					}
				}
			}
			if (!unk_0xF44A5E894FE76438(Local_688[iParam0 /*8*/].f_7, 5))
			{
				if (func_229(iLocal_874, Local_827, 1) < 15f && iLocal_686 == 1)
				{
					if (!unk_0xE7C48EF8F50001B1())
					{
						if (func_230(&uLocal_879, cLocal_878, Local_688[iParam0 /*8*/][5], 7, 0, 0, 0))
						{
							unk_0xB8A73E7DA87B2968(&(Local_688[iParam0 /*8*/].f_7), 5);
						}
					}
				}
			}
			switch (func_29(unk_0xD5A676B97920D126()))
			{
				case 0:
					if (iParam0 == 1)
					{
						if (!func_228(2))
						{
							func_227(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_228(4))
						{
							func_227(iParam0, 4);
						}
					}
					break;
				
				case 1:
					if (iParam0 == 0)
					{
						if (!func_228(2))
						{
							func_227(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_228(3))
						{
							func_227(iParam0, 3);
						}
					}
					break;
				
				case 2:
					if (iParam0 == 1)
					{
						if (!func_228(3))
						{
							func_227(iParam0, 3);
						}
					}
					else if (iParam0 == 0)
					{
						if (!func_228(4))
						{
							func_227(iParam0, 4);
						}
					}
					break;
				}
			}
	}
}

void func_227(int iParam0, int iParam1)
{
	if (!unk_0xF44A5E894FE76438(Local_688[iParam0 /*8*/].f_7, iParam1))
	{
		if (iLocal_1052 != -1)
		{
			if (!unk_0xE7C48EF8F50001B1())
			{
				if (func_230(&uLocal_879, cLocal_878, Local_688[iParam0 /*8*/][iParam1], 7, 0, 0, 0))
				{
					unk_0xB8A73E7DA87B2968(&(Local_688[iParam0 /*8*/].f_7), iParam1);
				}
			}
		}
		else if (!func_231() && !unk_0xE7C48EF8F50001B1())
		{
			iLocal_1052 = unk_0x84A97C70FFDEC0C8();
		}
		else
		{
			iLocal_1052 = -1;
		}
	}
}

int func_228(int iParam0)
{
	if ((unk_0xF44A5E894FE76438(Local_688[0 /*8*/].f_7, iParam0) || unk_0xF44A5E894FE76438(Local_688[1 /*8*/].f_7, iParam0)) || unk_0xF44A5E894FE76438(Local_688[2 /*8*/].f_7, iParam0))
	{
		return 1;
	}
	return 0;
}

float func_229(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xB529B2A4B7C64D6D(iParam0, 0))
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xC086F8D75730FA3A(iParam0, 0) };
	}
	return unk_0x8E92CDAEB8357ABD(Var0, Param1, iParam4);
}

bool func_230(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_89(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_82(sParam2, iParam3, 0);
}

int func_231()
{
	if (Global_15745 != 0 || unk_0x33688D334D224255())
	{
		return 1;
	}
	return 0;
}

void func_232()
{
	if (func_101(unk_0xD5A676B97920D126(), Local_827, 220f))
	{
		if (!iLocal_877 && !func_101(unk_0xD5A676B97920D126(), Local_827, 100f))
		{
			iLocal_877 = func_147(&uLocal_876, joaat("cavalcade2"), 1370.912f, -2060.055f, 50.9983f, 312.8686f, 1);
		}
	}
	else if (func_101(unk_0xD5A676B97920D126(), Local_827, 240f))
	{
		if (iLocal_877)
		{
			func_6(&uLocal_876);
			iLocal_877 = 0;
		}
	}
}

void func_233()
{
	func_209(&iLocal_874, &uLocal_875, &iLocal_686, &iLocal_822, &iLocal_821, Local_827, Local_868.f_0, 0, 1090519040);
	func_208();
	func_149();
	switch (iLocal_684)
	{
		case 0:
			if (func_116(iLocal_683, bLocal_28))
			{
				func_119(&iLocal_821, Local_868.f_0, 1);
				func_115("PRA_GOVAN", &iLocal_820);
				iLocal_684 = 1;
			}
			break;
		
		case 1:
			func_221();
			if (func_36(Local_868.f_0))
			{
				func_236(&uLocal_671, Local_868.f_0, 0, 0, 1, 1, 1);
			}
			if (!bLocal_833)
			{
				if (func_325(Local_840.f_0) && unk_0x63F7D2743457E11D(Local_840.f_0))
				{
					func_235();
				}
				if (func_325(Local_854.f_0) && unk_0x63F7D2743457E11D(Local_854.f_0))
				{
					func_235();
				}
			}
			if (func_36(iLocal_874))
			{
				if ((iLocal_686 == 1 || iLocal_686 == 2) || iLocal_686 == 3)
				{
					unk_0x24A6C3D7D286F02F(5f, 5f, 4);
					iLocal_684 = 2;
				}
			}
			break;
		
		case 2:
			func_7(&iLocal_821);
			func_139(&uLocal_671, 0, 0);
			func_104(0);
			break;
		
		case 3:
			func_8(&Local_840);
			func_8(&Local_854);
			if (func_36(Local_868.f_0))
			{
				unk_0x5467EF651716201E(unk_0xD5A676B97920D126(), Local_868.f_0, -1);
			}
			func_234(1);
			func_39(1, 1, 1);
			iLocal_684 = 1;
			break;
	}
}

void func_234(bool bParam0)
{
	unk_0x0AF219B759EA8670(1, bParam0);
	unk_0x0AF219B759EA8670(2, bParam0);
	unk_0x0AF219B759EA8670(3, bParam0);
	unk_0x0AF219B759EA8670(4, bParam0);
	unk_0x0AF219B759EA8670(5, bParam0);
	if (bParam0)
	{
		unk_0xFA5E84DCAE200259(1f);
		unk_0x028AA922F2B17B2A(5);
	}
	else
	{
		unk_0x028AA922F2B17B2A(0);
		unk_0xFA5E84DCAE200259(0f);
	}
}

void func_235()
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
	bLocal_833 = func_230(&uLocal_879, "FBIPRAU", sVar0, 7, 0, 0, 0);
	if (bLocal_833)
	{
		unk_0x24A6C3D7D286F02F(8f, 8f, 4);
	}
}

void func_236(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_237(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_237(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	func_238(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_238(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
	{
		func_139(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_239(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_239(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x96F8C2C945A9B758())
	{
		if (unk_0x84A97C70FFDEC0C8() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x1C079483C9D16F36(iVar0))
	{
		if (!unk_0x1995B52453EF6537())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_140(iVar0))
	{
		func_256();
	}
	if (func_255(iParam1) && unk_0xA3E7DE487D314279(iParam1))
	{
		iVar1 = 0;
		if (unk_0x6DA4D1391A7B813F(iParam1))
		{
			unk_0x5C5EA29ED298B14F(unk_0x36B702E1B6552B8A(iParam1));
			unk_0x8E5A2F0D57C1DF15(unk_0x36B702E1B6552B8A(iParam1), 1);
			if (unk_0x33853ED448B52835(unk_0x36B702E1B6552B8A(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8041FE602D4689B1(iParam1))
		{
			unk_0x5362ADB0E848B600(unk_0x9A1EB82BF4C4844D(iParam1));
			if (unk_0xF39AD11288893C1D(unk_0x9A1EB82BF4C4844D(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8E0E23664261A6B9(iParam1))
		{
			unk_0xAA8FA16ED286C065(unk_0x028455DF6C933604(iParam1));
			if (unk_0xE5C01F114CB61F98(unk_0x028455DF6C933604(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x96F8C2C945A9B758())
		{
			if (func_250(uParam0, bParam7, bParam9, 0))
			{
				func_247(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_244(iVar0))
				{
					if ((unk_0x1C079483C9D16F36(uParam0->f_3) && !unk_0x1C079483C9D16F36(iVar0)) && unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
					{
						if ((iVar1 && !unk_0xA14FC57CB26C2B67()) && uParam8)
						{
							if (!func_140(iVar0))
							{
								func_243(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xCC257DA11A122B5F("CMN_HINT", iVar0))
								{
									func_242(1);
								}
							}
						}
					}
				}
			}
			else if (func_244(iVar0))
			{
				if (unk_0x1C079483C9D16F36(uParam0->f_3) && !unk_0x1C079483C9D16F36(iVar0))
				{
					if (((unk_0xBB5DD90D4926F21A(iParam1) && iVar1) && !unk_0xA14FC57CB26C2B67()) && uParam8)
					{
						if (!func_140(iVar0))
						{
							func_243(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xCC257DA11A122B5F("CMN_HINT", iVar0))
							{
								func_242(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x1C079483C9D16F36(sParam5))
			{
				if (func_140(sParam5))
				{
					unk_0x04890EB0282525A5(1);
				}
			}
			if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
			{
				if (unk_0x666F2AA1973AB0E0(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(3) == 3 || unk_0x730196602471217D(3) == 4)
					{
						func_139(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xEDC11DB270927D92(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(6) == 3 || unk_0x730196602471217D(6) == 4)
					{
						func_139(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD6E13289C5649502(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(4) == 3 || unk_0x730196602471217D(4) == 4)
					{
						func_139(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x33F00B055E38CEEC(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(5) == 3 || unk_0x730196602471217D(5) == 4)
					{
						func_139(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8D5C67C7C2819A57(unk_0xD5A676B97920D126()))
				{
					if (unk_0x730196602471217D(2) == 3 || unk_0x730196602471217D(2) == 4)
					{
						func_139(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x0358A1756A003263() == 3 || unk_0x0358A1756A003263() == 4)
				{
					func_139(uParam0, iVar0, 1);
				}
			}
			if (!func_250(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_241(uParam0))
				{
					func_240(uParam0);
				}
			}
		}
	}
	else
	{
		func_139(uParam0, iVar0, 0);
	}
}

void func_240(var uParam0)
{
	if (func_255(unk_0xD5A676B97920D126()))
	{
		unk_0x0565F5F2EE81A23F(unk_0xD5A676B97920D126());
	}
	if (unk_0x96F8C2C945A9B758())
	{
		unk_0x33E4179F57B9F232(1);
		unk_0x6125B94865C458A0(0);
		unk_0xB3C38A4B84C152BF("HINT_CAM_SCENE");
		unk_0x044DCEA35050EC01("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xAAD655F2351CC4B7("FocusOut", 0, 0);
			unk_0xA93E75A5493862BD(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_241(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x84A97C70FFDEC0C8()
		{
			return 1;
		}
	}
	return 0;
}

int func_242(bool bParam0)
{
	switch (Global_35777)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_101652.f_8992.f_100++;
			}
			return Global_101652.f_8992.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_101652.f_8992.f_101++;
			}
			return Global_101652.f_8992.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_101652.f_8992.f_102++;
			}
			return Global_101652.f_8992.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_243(char* sParam0, int iParam1)
{
	unk_0xA97D81951B964419(sParam0);
	unk_0x6F67ABEECD80675B(0, 0, 1, iParam1);
}

int func_244(char* sParam0)
{
	if (!func_245(1, 1, 0))
	{
		if ((!unk_0xC55B9553B3EDADE9(sParam0) && func_140(sParam0)) || func_140("CMN_HINT"))
		{
			unk_0x04890EB0282525A5(1);
		}
		return 0;
	}
	switch (Global_35777)
	{
		case 0:
		case 3:
			if (func_242(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_242(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_242(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_245(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x0E4A3783CD75D9CE(unk_0xFB6B3EEFAB2DD12C()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xB0D174BA6F10DF7B())
	{
		return 0;
	}
	if (func_68(0))
	{
		return 0;
	}
	if (func_246())
	{
		return 0;
	}
	if (unk_0x976A3E0B7A766593())
	{
		return 0;
	}
	if (Global_68127)
	{
		return 0;
	}
	if (unk_0xAB964FCFAC3C767A(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52999)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
		{
			if (unk_0x666F2AA1973AB0E0(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(3) == 3 || unk_0x730196602471217D(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xEDC11DB270927D92(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(6) == 3 || unk_0x730196602471217D(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD6E13289C5649502(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(4) == 3 || unk_0x730196602471217D(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x33F00B055E38CEEC(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(5) == 3 || unk_0x730196602471217D(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8D5C67C7C2819A57(unk_0xD5A676B97920D126()))
			{
				if (unk_0x730196602471217D(2) == 3 || unk_0x730196602471217D(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x0358A1756A003263() == 3 || unk_0x0358A1756A003263() == 4)
			{
				return 0;
			}
			if (unk_0x2AD8D2893EF54BC3())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_246()
{
	return unk_0x84A97C70FFDEC0C8() <= Global_17290.f_5745 + 100;
}

void func_247(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xB529B2A4B7C64D6D(iParam1, 0))
	{
		func_139(uParam0, 0, 0);
	}
	if (func_15(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x6DA4D1391A7B813F(iParam1))
		{
			iVar0 = unk_0x36B702E1B6552B8A(iParam1);
			if (!unk_0x6A0583ECFCCECC9B(iVar0, 0))
			{
				if (unk_0xBEC34BF6B72C417A(iVar0))
				{
					if (!func_248())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x300B1E56EE76D45C(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x33E4179F57B9F232(0);
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
	unk_0x218CB9DF4F72DD01(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x0988FFC0C75637DF(unk_0xD5A676B97920D126(), iParam1, -1, iVar3, iVar4);
	unk_0xAAD655F2351CC4B7("FocusIn", 0, 0);
	unk_0xE3E53903AE9B5BD5("HINT_CAM_SCENE");
	unk_0xA93E75A5493862BD(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x84A97C70FFDEC0C8();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_248()
{
	return func_249(unk_0xFB6B3EEFAB2DD12C());
}

int func_249(int iParam0)
{
	if (unk_0xA0A4DA31DEDFAC4F(unk_0x4572B13EE70C8F52(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_250(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x84A97C70FFDEC0C8() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
				{
					if (func_254(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_253(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_253(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_254(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_241(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
					{
						if (!func_254(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_253(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_253(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_254(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x84A97C70FFDEC0C8();
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
				if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
				{
					if (!func_254(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_253(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_253(bParam1, bParam2, bParam3) || unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1) || unk_0xBA4F32114F8D8E97(unk_0xD5A676B97920D126(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_254(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x84A97C70FFDEC0C8() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1))
					{
						if (func_252(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_251(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1) || func_251(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 1) || unk_0xBA4F32114F8D8E97(unk_0xD5A676B97920D126(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_252(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_241(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_245(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_256();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_251(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_245(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		if (!unk_0xBF841545FCAAE5A2(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x2A29D86854DC4BC0(0, 140, 1);
			unk_0x2A29D86854DC4BC0(0, 80, 1);
			if (unk_0xBCCED7DE90D60F92(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_252(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_245(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		unk_0x2A29D86854DC4BC0(0, 80, 1);
		if (unk_0xE496DD0841EBDD66())
		{
			if (unk_0xBCCED7DE90D60F92(0, 80))
			{
				unk_0x33E4179F57B9F232(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_253(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_245(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		if (!unk_0xBF841545FCAAE5A2(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x2A29D86854DC4BC0(0, 140, 1);
			unk_0x2A29D86854DC4BC0(0, 80, 1);
			if (unk_0xD464BA52FA359903(0, 80) && unk_0x84A97C70FFDEC0C8() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_254(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_245(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x6A0583ECFCCECC9B(unk_0xD5A676B97920D126(), 0))
	{
		unk_0x2A29D86854DC4BC0(0, 80, 1);
		if (unk_0xE496DD0841EBDD66())
		{
			if (unk_0xD464BA52FA359903(0, 80) && unk_0x84A97C70FFDEC0C8() > Global_116)
			{
				unk_0x33E4179F57B9F232(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_255(int iParam0)
{
	if (unk_0x7887B64A08364778(iParam0))
	{
		if (unk_0x8041FE602D4689B1(iParam0))
		{
			if (unk_0xA4DB44DF73EF4FE5(unk_0x9A1EB82BF4C4844D(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x6DA4D1391A7B813F(iParam0))
		{
			if (!unk_0x00B5B0B68211D89B(unk_0x36B702E1B6552B8A(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x8E0E23664261A6B9(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_256()
{
	unk_0xB8A73E7DA87B2968(&Global_2314, 4);
}

void func_257()
{
	switch (iLocal_684)
	{
		case 0:
			if (func_116(iLocal_683, 0))
			{
				func_269();
				func_267(33);
				unk_0x028AA922F2B17B2A(2);
				unk_0xFA5E84DCAE200259(0.1f);
				if (func_341())
				{
					func_264(0, -1, 1);
					func_40(500, 1);
					iLocal_684 = 2;
				}
				else
				{
					if (func_32(0))
					{
						func_118(unk_0xD5A676B97920D126(), 1228.635f, -348.4277f, 68.0929f, 86.7244f);
						func_259(1228.635f, -348.4277f, 68.0929f, 1112014848, 12, 5000, 0, 0);
						func_40(500, 1);
					}
					func_258();
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
			func_104(0);
			break;
	}
}

void func_258()
{
}

void func_259(struct<3> Param0, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0xC8CFC6E14D9BA068(Param0, iParam3, iParam4, 127);
	if (unk_0x54E901179EE643BE(uVar0))
	{
		iVar1 = (unk_0x84A97C70FFDEC0C8() + iParam5);
		while (!unk_0x22C1A315D07D9606(uVar0) && unk_0x84A97C70FFDEC0C8() < iVar1)
		{
			if (bParam7)
			{
				func_261();
			}
			if (bParam6)
			{
				func_260();
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		if (unk_0x84A97C70FFDEC0C8() < iVar1)
		{
		}
		unk_0x7DE9A6B403CB786D(uVar0);
	}
}

void func_260()
{
	Global_17151.f_6 = 1;
}

void func_261()
{
	if (!Global_14443.f_1 == 1)
	{
		if (func_68(0))
		{
			func_262(0);
		}
		unk_0xB8A73E7DA87B2968(&Global_2314, 2);
	}
}

void func_262(int iParam0)
{
	if (Global_14604)
	{
		func_263(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9)
	{
		unk_0xB8A73E7DA87B2968(&Global_2314, 16);
	}
	if (unk_0x982007D3EB9D85D2())
	{
		unk_0x73998CD31AEFA620(false);
	}
	Global_15745 = 5;
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&Global_2313, 30);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&Global_2313, 30);
	}
	if (!func_50())
	{
		Global_14443.f_1 = 3;
	}
}

void func_263(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_68(0))
		{
			Global_14604 = 1;
			if (bParam1)
			{
				unk_0x74432D08D4A512AA(&Global_14380);
			}
			Global_14371 = { Global_14389[Global_14388 /*3*/] };
			unk_0x91DA9180A91C7947(Global_14371);
		}
	}
	else if (Global_14604 == 1)
	{
		Global_14604 = 0;
		Global_14371 = { Global_14396[Global_14388 /*3*/] };
		if (bParam1)
		{
			unk_0x91DA9180A91C7947(Global_14380);
		}
		else
		{
			unk_0x91DA9180A91C7947(Global_14371);
		}
	}
}

void func_264(int iParam0, int iParam1, int iParam2)
{
	if (func_341() && func_266())
	{
		while (Global_91481 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xFD1B7FD28DB51A48(0);
		if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
		{
			if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
			{
				unk_0xC521961CC9DBD0D1(unk_0xD5A676B97920D126());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
			{
				if (unk_0x7887B64A08364778(iParam0))
				{
					if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
					{
						if (!unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iParam0, 0))
						{
							unk_0x5467EF651716201E(unk_0xD5A676B97920D126(), iParam0, iParam1);
							unk_0xCA3B54980FA9D86F(0f, 1065353216);
							unk_0xB6AE7C18ADC0F901(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
			{
				unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
			}
		}
		unk_0x1244B062D0C812FD();
		func_265(0);
	}
}

void func_265(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xB8A73E7DA87B2968(&(Global_91486.f_20), 13);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&(Global_91486.f_20), 13);
	}
}

bool func_266()
{
	return unk_0xF44A5E894FE76438(Global_91486.f_20, 13);
}

void func_267(int iParam0)
{
	Global_87674 = 0;
	switch (iParam0)
	{
		case 72:
			func_268(2);
			func_268(4);
			break;
		
		case 73:
			func_268(0);
			func_268(1);
			func_268(7);
			break;
		
		case 92:
			func_268(10);
			func_268(9);
			func_268(13);
			func_268(6);
			break;
		
		case 68:
			func_268(11);
			break;
		
		case 78:
			func_268(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_268(3);
			break;
		
		default:
			break;
	}
}

void func_268(int iParam0)
{
	unk_0xB8A73E7DA87B2968(&Global_87674, iParam0);
}

void func_269()
{
	int iVar0;
	
	iVar0 = unk_0x80AA649904BB5788();
	if (unk_0x7887B64A08364778(iVar0))
	{
		if (unk_0xA4DB44DF73EF4FE5(iVar0, 0))
		{
			func_270(iVar0, unk_0xC086F8D75730FA3A(iVar0, 1), unk_0x714F015B4D2DE1DC(iVar0), 24, 0);
		}
	}
}

void func_270(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x7887B64A08364778(iParam0) && unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x7887B64A08364778(Global_68526.f_484[25]) && unk_0xA4DB44DF73EF4FE5(Global_68526.f_484[25], 0))
			{
				if (Global_68526.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x2116DC64F00A4D05(iParam0) || unk_0xA0A4DA31DEDFAC4F(iParam0) == joaat("bus")) || unk_0xA0A4DA31DEDFAC4F(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_316(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_312(iParam0, &Var0);
		if (func_15(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xC086F8D75730FA3A(iParam0, 1) };
			uParam4 = unk_0x714F015B4D2DE1DC(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F()) != joaat("vehicle_gen_controller"))
			{
				Global_69514 = unk_0x6D9FF4C899CD785F(unk_0x0FBCE11007AF301F());
			}
		}
		func_305(iParam5, &Var0, Param1, uParam4, func_311(iParam0));
		func_271(iParam5, iParam0, 0);
	}
}

void func_271(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_302(&(Global_68526.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xF44A5E894FE76438(Global_68526.f_555[0 /*21*/].f_9, 12) && !unk_0xF44A5E894FE76438(Global_68526.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68526.f_555[0 /*21*/].f_4 != unk_0xA0A4DA31DEDFAC4F(iParam1))
		{
			return;
		}
	}
	if (Global_69433 != -1 && Global_69433 != iParam0)
	{
		return;
	}
	if (unk_0x7887B64A08364778(iParam1))
	{
		if (unk_0xA4DB44DF73EF4FE5(iParam1, 0))
		{
			if (!unk_0x2A29BF08180E7ADF(iParam1))
			{
				unk_0xC53606C390BE2727(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_101652.f_31373.f_4801 = func_291();
			}
			if (iParam1 != Global_68526.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_290(iParam0);
					if ((unk_0x7887B64A08364778(iVar0) && unk_0xA4DB44DF73EF4FE5(iVar0, 0)) && iParam1 != iVar0)
					{
						func_272(iVar0, 145);
					}
				}
				Global_69432 = iParam1;
				Global_69433 = iParam0;
				Global_69434 = iParam2;
			}
		}
	}
}

void func_272(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_273(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x98BE504E8B389665(iParam0, -1, 0);
		if (!unk_0x7887B64A08364778(iVar0))
		{
			iVar0 = unk_0x517A852AA8FDFD63(iParam0, -1);
		}
		if (unk_0x7887B64A08364778(iVar0) && !unk_0x00B5B0B68211D89B(iVar0))
		{
			if (unk_0xA0A4DA31DEDFAC4F(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0xA0A4DA31DEDFAC4F(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101652.f_2079.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0xA0A4DA31DEDFAC4F(iParam0) == Global_101652.f_31373.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xC55B9553B3EDADE9(&(Global_101652.f_31373.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xCC257DA11A122B5F(unk_0x2CC6A8460C4261C6(iParam0), &(Global_101652.f_31373.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101652.f_31373.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101652.f_31373.f_5592[iVar1] = iVar2;
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
		if (unk_0xA0A4DA31DEDFAC4F(iParam0) == Global_101652.f_31373.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xC55B9553B3EDADE9(&(Global_101652.f_31373.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xCC257DA11A122B5F(unk_0x2CC6A8460C4261C6(iParam0), &(Global_101652.f_31373.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101652.f_31373.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101652.f_31373.f_5590 = iParam1;
	Global_69431 = iParam0;
	Global_101652.f_31373.f_5588 = 1;
	func_312(iParam0, &(Global_101652.f_31373.f_5510));
}

int func_273(int iParam0)
{
	if ((((((((((!unk_0x7887B64A08364778(iParam0) || !unk_0xA4DB44DF73EF4FE5(iParam0, 0)) || func_288(iParam0, 0, 0)) || func_288(iParam0, 1, 0)) || func_288(iParam0, 2, 0)) || func_311(iParam0) != 145) || func_287(iParam0)) || func_286(iParam0)) || func_285(iParam0)) || func_284(iParam0)) || !func_274(unk_0xA0A4DA31DEDFAC4F(iParam0)))
	{
		if (func_286(iParam0))
		{
		}
		if (func_286(iParam0))
		{
		}
		if (func_288(iParam0, 0, 0))
		{
		}
		if (func_288(iParam0, 1, 0))
		{
		}
		if (func_288(iParam0, 2, 0))
		{
		}
		if (func_311(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_274(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_275(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xDA82A890460AACEE(iParam0) || unk_0x825416FB822BF706(iParam0)) || unk_0x4B09D3321F53E524(iParam0)) || unk_0x8F8A0D55EBDCBE44(iParam0))
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

int func_275(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x5B8C6C17DBDB0252(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x1995B52453EF6537())) || (iParam0 == joaat("buffalo3") && !unk_0x1995B52453EF6537())) || (iParam0 == joaat("gauntlet2") && !unk_0x1995B52453EF6537())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x1995B52453EF6537())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_283())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x8858A4ECC3790CBC())
		{
			if (unk_0xAC7E4897AB3A644C(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x68410A55F20AE7A5(Var1.f_0))
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
		if ((((!func_282() && !func_281()) && !func_280()) && !func_279()) && !func_283())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xF1A016B51831B87B() || unk_0x2D337DD29A7ABD30()) || unk_0x603D621ED5E06CB0())
		{
		}
		else if (!func_280())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_278(iParam0))
		{
			return 0;
		}
	}
	if (!func_276(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_276(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_277())
	{
		return 1;
	}
	unk_0x157A3D4FE52A3BBF(&iVar0, &uVar1);
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
	if (!unk_0x0E4E21380596D57E(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_277()
{
	if (unk_0x2D337DD29A7ABD30())
	{
		return 1;
	}
	return 0;
}

int func_278(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2482045)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x632066A9E8CB2C4D();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5431 && !Global_262145.f_11409) && iVar1 < Global_262145.f_11410)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_12221 && iVar1 < Global_262145.f_12233)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_12217 && iVar1 < Global_262145.f_12229)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_12218 && iVar1 < Global_262145.f_12230)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_12219 && iVar1 < Global_262145.f_12231)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_12220 && iVar1 < Global_262145.f_12232)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_12222 && iVar1 < Global_262145.f_12234)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_12223 && iVar1 < Global_262145.f_12226)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_12224 && iVar1 < Global_262145.f_12227)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_12225 && iVar1 < Global_262145.f_12228)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_14848 && iVar1 < Global_262145.f_14813)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_14843 && iVar1 < Global_262145.f_14808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_14847 && iVar1 < Global_262145.f_14812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_14846 && iVar1 < Global_262145.f_14811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_14840 && iVar1 < Global_262145.f_14805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_14841 && iVar1 < Global_262145.f_14806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_14844 && iVar1 < Global_262145.f_14809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_14845 && iVar1 < Global_262145.f_14810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_14842 && iVar1 < Global_262145.f_14807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_14850 && iVar1 < Global_262145.f_14815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_14851 && iVar1 < Global_262145.f_14816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_14839 && iVar1 < Global_262145.f_14804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_14838 && iVar1 < Global_262145.f_14803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_14837 && iVar1 < Global_262145.f_14802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_14849 && iVar1 < Global_262145.f_14814)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_14852 && iVar1 < Global_262145.f_14817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_14853 && iVar1 < Global_262145.f_14818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_14854 && iVar1 < Global_262145.f_14819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_14855 && iVar1 < Global_262145.f_14820)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_15000 && iVar1 < Global_262145.f_15022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_15001 && iVar1 < Global_262145.f_15023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_15002 && iVar1 < Global_262145.f_15024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_15003 && iVar1 < Global_262145.f_15025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_15004 && iVar1 < Global_262145.f_15026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_15005 && iVar1 < Global_262145.f_15027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_15007 && iVar1 < Global_262145.f_15028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_15008 && iVar1 < Global_262145.f_15029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_15009 && iVar1 < Global_262145.f_15030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_15010 && iVar1 < Global_262145.f_15031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_15011 && iVar1 < Global_262145.f_15032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_15012 && iVar1 < Global_262145.f_15033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_15013 && iVar1 < Global_262145.f_15034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_15019 && iVar1 < Global_262145.f_15041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_15016 && iVar1 < Global_262145.f_15037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_15017 && iVar1 < Global_262145.f_15038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_15018 && iVar1 < Global_262145.f_15039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_15006 && iVar1 < Global_262145.f_15040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_15020 && iVar1 < Global_262145.f_15042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_15014 && iVar1 < Global_262145.f_15035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_15015 && iVar1 < Global_262145.f_15036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_15021 && iVar1 < Global_262145.f_15043)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_16649 && iVar1 < Global_262145.f_16690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_16650 && iVar1 < Global_262145.f_16691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_16651 && iVar1 < Global_262145.f_16692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_16652 && iVar1 < Global_262145.f_16693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_16653 && iVar1 < Global_262145.f_16694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_16654 && iVar1 < Global_262145.f_16695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_16655 && iVar1 < Global_262145.f_16696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_16656 && iVar1 < Global_262145.f_16697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_16657 && iVar1 < Global_262145.f_16698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_16658 && iVar1 < Global_262145.f_16699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_16659 && iVar1 < Global_262145.f_16700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_16660 && iVar1 < Global_262145.f_16701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_16661 && iVar1 < Global_262145.f_16702)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_16662 && iVar1 < Global_262145.f_16703)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_16663 && iVar1 < Global_262145.f_16704)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_16664 && iVar1 < Global_262145.f_16705)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_16665 && iVar1 < Global_262145.f_16706)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_16666 && iVar1 < Global_262145.f_16707)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_16667 && iVar1 < Global_262145.f_16708)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_16668 && iVar1 < Global_262145.f_16709)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_16669 && iVar1 < Global_262145.f_16710)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_16670 && iVar1 < Global_262145.f_16711)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_16671 && iVar1 < Global_262145.f_16712)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_16672 && iVar1 < Global_262145.f_16713)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_16673 && iVar1 < Global_262145.f_16714)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_279()
{
	return 0;
}

int func_280()
{
	return 1;
}

int func_281()
{
	return 1;
}

int func_282()
{
	if (unk_0xF14C5BAFFF8F4CB7(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_283()
{
	var uVar0;
	
	if (unk_0x52F8BF27157D00A2())
	{
		if (unk_0xA65719DC666C97C3())
		{
			if (unk_0x65D57B279D4CB27E())
			{
				unk_0x5BC7B5709E38CBE0(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xB8A73E7DA87B2968(&uVar0, 2);
				unk_0xB8A73E7DA87B2968(&uVar0, 4);
				unk_0xB8A73E7DA87B2968(&uVar0, 6);
				unk_0xB8A73E7DA87B2968(&Global_25, 2);
				unk_0xB8A73E7DA87B2968(&Global_25, 4);
				unk_0xB8A73E7DA87B2968(&Global_25, 6);
				unk_0xB924315F0872835A(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xE0A03D8892BEF6BB())
				{
					uVar0 = unk_0x2428688746A375BE(866);
					unk_0xB8A73E7DA87B2968(&uVar0, 0);
					unk_0xC0F82A66B119B68A(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_139115 == 2)
	{
		return 1;
	}
	else if (Global_139115 == 3)
	{
		return 0;
	}
	if (unk_0xE0A03D8892BEF6BB())
	{
		if (unk_0xF44A5E894FE76438(unk_0x2428688746A375BE(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_284(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0xA0A4DA31DEDFAC4F(iParam0);
	sVar1 = unk_0x2CC6A8460C4261C6(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xCC257DA11A122B5F(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_275(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_285(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x7887B64A08364778(Global_89180[iVar0]))
		{
			if (Global_89180[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_286(int iParam0)
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(iParam0) && unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x7887B64A08364778(Global_89150[iVar0]) && unk_0xA4DB44DF73EF4FE5(Global_89150[iVar0], 0))
			{
				if (Global_89150[iVar0] == iParam0 && unk_0xA0A4DA31DEDFAC4F(Global_89150[iVar0]) == unk_0xA0A4DA31DEDFAC4F(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_287(int iParam0)
{
	int iVar0;
	
	if (unk_0x7887B64A08364778(Global_68526.f_484[24]))
	{
		if (iParam0 == Global_68526.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x7887B64A08364778(Global_68526.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68526.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_288(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x7887B64A08364778(iParam0) || !unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_289(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xF44A5E894FE76438(Global_101652.f_6172[iVar9], 0))
		{
			if (unk_0x2C1F463EB409D0B0(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_289(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_290(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68526.f_139[iParam0];
}

var func_291()
{
	var uVar0;
	
	func_301(&uVar0, unk_0xABA05E2C283C3D5F());
	func_300(&uVar0, unk_0xF72CA3D5BA977203());
	func_299(&uVar0, unk_0x83D6515EE2CBF18C());
	func_294(&uVar0, unk_0x3D13C79BF80EB767());
	func_293(&uVar0, unk_0xA93FEF8677A8AF58());
	func_292(&uVar0, unk_0xAC9128C6933DA69B());
	return uVar0;
}

void func_292(var uParam0, int iParam1)
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

void func_293(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_294(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_298(*uParam0);
	iVar1 = func_296(*uParam0);
	if (iParam1 < 1 || iParam1 > func_295(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_295(int iParam0, int iParam1)
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

var func_296(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_297(unk_0xF44A5E894FE76438(iParam0, 31), -1, 1)) + 2011;
}

int func_297(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_298(var uParam0)
{
	return uParam0 & 15;
}

void func_299(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_300(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_301(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_302(var uParam0, int iParam1)
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
			uParam0->f_4 = func_303(0, 1);
			uParam0->f_12 = 0;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 20);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_303(0, 1);
			uParam0->f_12 = 0;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 20);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_303(1, 1);
			uParam0->f_12 = 1;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 20);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_303(1, 2);
			uParam0->f_12 = 1;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 19);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_303(1, 1);
			uParam0->f_12 = 1;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 20);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_303(1, 2);
			uParam0->f_12 = 1;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 19);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_303(2, 1);
			uParam0->f_12 = 2;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 20);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_303(2, 1);
			uParam0->f_12 = 2;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 20);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_303(2, 1);
			uParam0->f_12 = 2;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 20);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 22);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 22);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 22);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 24);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 24);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 14);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 24);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 28);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 29);
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
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 27);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 24);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 29);
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
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 27);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 24);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 29);
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
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 7);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 27);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 24);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 11);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 13);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 10);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 11);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 13);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 9);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 9);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 8);
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
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 2);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 30);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 2);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 22);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
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
			if (func_283())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 13);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 2);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 1);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_283())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 13);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 2);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 1);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 0);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 21);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 30);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 30);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 23);
			unk_0xB8A73E7DA87B2968(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xF44A5E894FE76438(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_101652.f_31373.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_15(Global_101652.f_31373.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101652.f_31373.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_101652.f_31373.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_101652.f_31373.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xF44A5E894FE76438(uParam0->f_9, 19))
	{
		if (!func_15(Global_101652.f_2079.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101652.f_2079.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101652.f_2079.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xF44A5E894FE76438(uParam0->f_9, 20))
	{
		if (!func_15(Global_101652.f_2079.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101652.f_2079.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101652.f_2079.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_303(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_28(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_304(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_304(int iParam0, var uParam1, int iParam2)
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
			if (Global_101652.f_8028.f_99.f_58[128] && !Global_101652.f_8028.f_99.f_58[131])
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
					if (Global_101652.f_8028.f_99.f_58[119])
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
			else if (Global_101652.f_8028.f_99.f_58[118])
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

void func_305(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_302(&(Global_68526.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xF44A5E894FE76438(Global_68526.f_555[0 /*21*/].f_9, 10))
		{
			func_310(iParam0);
			func_309(uParam1, &(Global_101652.f_31373.f_69[Global_68526.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xF44A5E894FE76438(Global_68526.f_555[0 /*21*/].f_9, 11))
			{
				Global_101652.f_31373.f_1864[Global_68526.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_101652.f_31373.f_1934[Global_68526.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_101652.f_31373.f_1864[Global_68526.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_101652.f_31373.f_1934[Global_68526.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_101652.f_31373.f_1958[Global_68526.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_306(iParam0, 1);
		}
	}
}

void func_306(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_308(iParam0, 0))
		{
			func_307(iParam0, 1, 0);
			func_307(iParam0, 2, 0);
			func_307(iParam0, 3, 0);
			func_307(iParam0, 4, 0);
			func_307(iParam0, 0, 1);
			Global_68526[iParam0] = 1;
		}
	}
	else
	{
		func_307(iParam0, 0, 0);
	}
}

void func_307(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xB8A73E7DA87B2968(&(Global_101652.f_31373[iParam0]), iParam1);
	}
	else
	{
		unk_0x4EA098C870B73AB7(&(Global_101652.f_31373[iParam0]), iParam1);
	}
}

bool func_308(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xF44A5E894FE76438(Global_101652.f_31373[iParam0], iParam1);
}

void func_309(var uParam0, var uParam1)
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

void func_310(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_302(&(Global_68526.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x7887B64A08364778(Global_68526.f_139[iParam0]))
		{
			unk_0xC53606C390BE2727(Global_68526.f_139[iParam0], 1, 1);
			unk_0xB24D3BF5DABD13AA(&(Global_68526.f_139[iParam0]));
			Global_68526.f_139[iParam0] = 0;
		}
		if (unk_0xF44A5E894FE76438(Global_68526.f_555[0 /*21*/].f_9, 13))
		{
			func_306(iParam0, 0);
		}
	}
}

int func_311(int iParam0)
{
	int iVar0;
	
	if (!unk_0x7887B64A08364778(iParam0))
	{
		return 145;
	}
	if (!unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x7887B64A08364778(Global_89150[iVar0]))
		{
			if (Global_89150[iVar0] == iParam0)
			{
				return Global_89160[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_312(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xA4DB44DF73EF4FE5(iParam0, 0))
	{
		func_315(uParam1);
		uParam1->f_66 = unk_0xA0A4DA31DEDFAC4F(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x2CC6A8460C4261C6(iParam0), 16);
		*uParam1 = unk_0x643D0787FF300BE8(iParam0);
		unk_0xAB44311BC9F89232(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xCFF130F4559BF748(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x43FF1E5EC4917728(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xEF0C3A770E8892FA(iParam0);
		uParam1->f_67 = unk_0x49CCC8B15830B17D(iParam0);
		uParam1->f_69 = unk_0x65E205594044F652(iParam0);
		uParam1->f_70 = unk_0xF7E41E4E5E67E2CB(iParam0);
		unk_0x956FB9F729445ED6(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0xF69AB637A0DAC546(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x1150CC5330ABD6DF(iParam0, 2))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 28);
		}
		if (unk_0x1150CC5330ABD6DF(iParam0, 3))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 29);
		}
		if (unk_0x1150CC5330ABD6DF(iParam0, 0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 30);
		}
		if (unk_0x1150CC5330ABD6DF(iParam0, 1))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xEF9CF6170A8C90B7(iParam0, 0))
		{
			uParam1->f_68 = unk_0x80F6A1A9BF0E38FD(iParam0);
		}
		if (unk_0x825416FB822BF706(uParam1->f_66))
		{
			if (unk_0x93B92294DAD9D50D(iParam0))
			{
				switch (unk_0xB230881064F01DEF(iParam0))
				{
					case 2:
					case 0:
						unk_0x4EA098C870B73AB7(&(uParam1->f_77), 23);
						unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x4EA098C870B73AB7(&(uParam1->f_77), 23);
						unk_0x4EA098C870B73AB7(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xAB35C8D69EA2E6B5(iParam0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 9);
		}
		if (unk_0x7E2FFDDA80D69669(iParam0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 10);
		}
		if (unk_0x826C510E26394C33(iParam0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 13);
			unk_0xD31BD28E3DFD0487(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x5451EB0FF6AB9E17(iParam0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 12);
		}
		func_314(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x90ECFFEFD5446B32(iParam0, iVar0 + 1))
			{
				unk_0xB8A73E7DA87B2968(&(uParam1->f_77), func_313(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x0A330F7918C05F13(iParam0, 0))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(uParam1->f_77), 11);
		}
		if (unk_0xA438D75809973A56(iParam0, "IgnoredByQuickSave") && unk_0x79945CA981E4560A(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xB8A73E7DA87B2968(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(uParam1->f_77), 27);
		}
	}
}

int func_313(int iParam0)
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

int func_314(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xA4DB44DF73EF4FE5(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x83608391BBAB09A9(*iParam0) == 0)
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
			if (unk_0xFA1526FE26DC997C(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xFFB080E19B6AD134(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x54352EF465143135(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x54352EF465143135(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_315(var uParam0)
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

void func_316(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_310(iParam0);
	func_306(iParam0, 0);
}

void func_317()
{
	func_320();
	func_318();
}

void func_318()
{
	if (!iLocal_831)
	{
		if (func_36(iLocal_874))
		{
			if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_874, 0))
			{
				func_65(iLocal_874, -1);
				func_64(iLocal_874, 318);
				iLocal_831 = 1;
			}
		}
	}
	if (!iLocal_832)
	{
		if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) > 0)
		{
			func_319(320, 0);
			iLocal_832 = 1;
		}
	}
	else if (unk_0xAA5B10AEB58EAA13(unk_0xFB6B3EEFAB2DD12C()) == 0)
	{
		func_63(0, 320);
		iLocal_832 = 0;
	}
}

void func_319(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_55828 = iParam0;
	if (!Global_55826)
	{
		Global_55826 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_67913)
		{
			if (Global_67914[iVar0 /*9*/] == iParam0)
			{
				Global_67914[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_320()
{
}

void func_321()
{
	if (!bLocal_28 && iLocal_683 != 5)
	{
		if (iLocal_683 > 0)
		{
			func_322();
		}
	}
}

void func_322()
{
	float fVar0;
	int iVar1;
	
	fVar0 = 600f;
	if (!func_36(iLocal_874))
	{
		if (!func_36(uLocal_875) && !func_36(Local_868.f_0))
		{
			func_324(1);
			return;
		}
		if (func_36(Local_868.f_0) && !func_151(unk_0xD5A676B97920D126(), Local_868.f_0, fVar0, 1))
		{
			func_324(2);
		}
	}
	else
	{
		iVar1 = 0;
		if (!func_151(unk_0xD5A676B97920D126(), iLocal_874, fVar0, 1))
		{
			iVar1++;
		}
		if (func_36(uLocal_875))
		{
			if (!func_151(unk_0xD5A676B97920D126(), uLocal_875, fVar0, 1))
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
			if (!func_151(unk_0xD5A676B97920D126(), Local_868.f_0, fVar0, 1))
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
			func_324(2);
			return;
		}
		iVar1 = 0;
		if (func_323(iLocal_874))
		{
			iVar1++;
		}
		if (func_36(uLocal_875))
		{
			if (func_323(uLocal_875))
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
			if (func_323(Local_868.f_0))
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
			func_324(3);
			return;
		}
	}
}

int func_323(var uParam0)
{
	if (func_36(uParam0))
	{
		if (((unk_0x4EC2DD24B6F44441(uParam0, 0, 7000) || unk_0x4EC2DD24B6F44441(uParam0, 3, 30000)) || unk_0x4EC2DD24B6F44441(uParam0, 2, 30000)) || unk_0x4EC2DD24B6F44441(uParam0, 1, 40000))
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

void func_324(int iParam0)
{
	unk_0x59C0D363E5A5B548();
	func_60();
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

int func_325(int iParam0)
{
	if (func_10(iParam0))
	{
		if (!unk_0x00B5B0B68211D89B(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_326()
{
	if (!func_96(36))
	{
		func_327(21, 0, 0);
	}
}

void func_327(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_339(iParam0, 0, 0))
		{
			if (iParam2 && Global_91538.f_18[iParam0])
			{
				if (func_338(iParam0) == 3 && !func_337(iParam0))
				{
					func_336(iParam0);
					func_335(iParam0, 0, 0);
					func_329(iParam0, 1, 0);
					func_328(iParam0);
				}
				else
				{
					func_335(iParam0, 1, 0);
					func_328(iParam0);
				}
			}
			else
			{
				func_335(iParam0, 0, 0);
				func_329(iParam0, 1, 0);
				func_328(iParam0);
			}
		}
		else
		{
			func_329(iParam0, 1, 0);
			func_328(iParam0);
		}
	}
	else if (func_339(iParam0, 0, 0))
	{
		func_329(iParam0, 0, 0);
		func_329(iParam0, 1, 0);
		func_328(iParam0);
	}
}

void func_328(int iParam0)
{
	Global_91538.f_160[iParam0] = 1;
	Global_91538.f_159 = 1;
}

void func_329(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x4EA098C870B73AB7(&(Global_91538.f_1308[iParam0]), iParam1);
	}
	else if (unk_0x1995B52453EF6537())
	{
		if (func_334() == 0)
		{
			uVar0 = func_332(func_333(iParam0), -1, 0);
			unk_0x4EA098C870B73AB7(&uVar0, iParam1);
			func_330(func_333(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x4EA098C870B73AB7(&(Global_101652.f_668[iParam0]), iParam1);
	}
}

void func_330(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2503773[iParam0 /*3*/][func_331(iParam2)];
	if (iVar0 != 0)
	{
		unk_0xB924315F0872835A(iVar0, uParam1, iParam3);
	}
}

int func_331(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_46();
		if (iVar1 > -1)
		{
			Global_2503486 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2503486 = 1;
		}
	}
	return iVar0;
}

int func_332(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2503773[iParam0 /*3*/][func_331(iParam1)];
	if (unk_0x5BC7B5709E38CBE0(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_333(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 822;
			break;
		
		case 1:
			return 823;
			break;
		
		case 2:
			return 824;
			break;
		
		case 3:
			return 825;
			break;
		
		case 4:
			return 826;
			break;
		
		case 5:
			return 827;
			break;
		
		case 6:
			return 828;
			break;
		
		case 7:
			return 829;
			break;
		
		case 8:
			return 830;
			break;
		
		case 9:
			return 831;
			break;
		
		case 10:
			return 832;
			break;
		
		case 11:
			return 833;
			break;
		
		case 12:
			return 834;
			break;
		
		case 13:
			return 835;
			break;
		
		case 14:
			return 836;
			break;
		
		case 15:
			return 838;
			break;
		
		case 16:
			return 839;
			break;
		
		case 17:
			return 840;
			break;
		
		case 18:
			return 841;
			break;
		
		case 19:
			return 842;
			break;
		
		case 20:
			return 843;
			break;
		
		case 21:
			return 844;
			break;
		
		case 22:
			return 845;
			break;
		
		case 23:
			return 846;
			break;
		
		case 24:
			return 847;
			break;
		
		case 25:
			return 848;
			break;
		
		case 26:
			return 849;
			break;
		
		case 27:
			return 850;
			break;
		
		case 28:
			return 851;
			break;
		
		case 29:
			return 852;
			break;
		
		case 30:
			return 853;
			break;
		
		case 31:
			return 854;
			break;
		
		case 32:
			return 855;
			break;
		
		case 33:
			return 856;
			break;
		
		case 34:
			return 857;
			break;
		
		case 35:
			return 858;
			break;
		
		case 36:
			return 859;
			break;
		
		case 37:
			return 860;
			break;
		
		case 38:
			return 861;
			break;
		
		case 39:
			return 862;
			break;
		
		case 40:
			return 866;
			break;
		
		case 41:
			return 867;
			break;
		
		case 42:
			return 868;
			break;
		
		case 43:
			return 869;
			break;
		
		case 44:
			return 5847;
			break;
		
		case 45:
			return 3780;
			break;
		
		default:
			break;
	}
	return 6022;
}

int func_334()
{
	return Global_25185;
}

void func_335(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xB8A73E7DA87B2968(&(Global_91538.f_1308[iParam0]), iParam1);
	}
	else if (unk_0x1995B52453EF6537())
	{
		if (func_334() == 0)
		{
			uVar0 = func_332(func_333(iParam0), -1, 0);
			unk_0xB8A73E7DA87B2968(&uVar0, iParam1);
			func_330(func_333(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xB8A73E7DA87B2968(&(Global_101652.f_668[iParam0]), iParam1);
	}
}

void func_336(int iParam0)
{
	if (Global_91538.f_18[iParam0])
	{
		func_335(iParam0, 10, 1);
		func_335(iParam0, 19, 1);
	}
}

bool func_337(int iParam0)
{
	return func_339(iParam0, 5, 1);
}

int func_338(int iParam0)
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
	}
	return 6;
}

int func_339(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0xF44A5E894FE76438(Global_91538.f_1308[iParam0], iParam1);
	}
	else if (unk_0x1995B52453EF6537())
	{
		if (func_334() == 0)
		{
			return unk_0xF44A5E894FE76438(func_332(func_333(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xF44A5E894FE76438(Global_101652.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_340(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_341())
	{
		unk_0x7E85CEE862B85A74(0);
		unk_0x4EA098C870B73AB7(&(Global_91486.f_20), 2);
		unk_0xFD1B7FD28DB51A48(1);
		if (unk_0x9BA2465846EC8271(unk_0xFB6B3EEFAB2DD12C()))
		{
			unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 0, 0);
		}
		Global_91482 = { Param0 };
		Global_91485 = fParam3;
		Global_91481 = 1;
		if (iParam4 == 1)
		{
			unk_0xB8A73E7DA87B2968(&(Global_91486.f_20), 14);
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(Global_91486.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xB8A73E7DA87B2968(&(Global_91486.f_20), 24);
		}
		else
		{
			unk_0x4EA098C870B73AB7(&(Global_91486.f_20), 24);
		}
		func_265(1);
	}
}

int func_341()
{
	if (Global_91486 == 10 || Global_91486 == 9)
	{
		return 1;
	}
	return 0;
}

void func_342()
{
	func_357();
	func_355();
	func_348();
	func_345();
	func_343();
}

void func_343()
{
	iLocal_1048[0] = 0;
	iLocal_1048[1] = 0;
	iLocal_1048[2] = 0;
	Local_688[0 /*8*/] = { func_344("FP1_WANTM", "FP1_LOSTM", "FP1_THEREM", "FP1_CHATFM", "", "FP1_CHATTM") };
	Local_688[1 /*8*/] = { func_344("FP1_WANTT", "FP1_LOSTT", "FP1_THERET", "FP1_CHATFM", "FP1_CHATFT", "") };
	Local_688[2 /*8*/] = { func_344("FP1_WANTF", "FP1_LOSTF", "FP1_THEREF", "", "FP1_CHATFT", "FP1_CHATTM") };
}

struct<8> func_344(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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

void func_345()
{
	Local_134[0 /*25*/] = { func_347(1203.146f, -337.3543f, 67.9314f, 1245.118f, -348.5059f, 68.2099f, 253.1908f, 0) };
	func_346(&(Local_134[0 /*25*/]), Local_824, 0, 15f, 5f, 270f, 3, 1192.006f, -631.4703f, 61.6972f, 10f, 10f, 5f);
	Local_134[1 /*25*/] = { func_347(1215.084f, -339.3139f, 68.1323f, 964.9214f, -555.212f, 58.0211f, 39.645f, 0) };
	func_346(&(Local_134[1 /*25*/]), Local_824, 0, 15f, 10f, 270f, 3, 1103.29f, -764.532f, 56.633f, 10f, 10f, 5f);
	Local_134[2 /*25*/] = { func_347(1179.533f, -361.3286f, 67.4559f, 929.8701f, -619.4534f, 56.4632f, 164.3631f, 0) };
	func_346(&(Local_134[2 /*25*/]), Local_824, 0, 15f, 10f, 270f, 3, 933.3745f, -615.9453f, 56.3041f, 10f, 10f, 5f);
	Local_134[3 /*25*/] = { func_347(1107.674f, -364.0569f, 65.9581f, 1099.266f, -775.0809f, 57.3525f, 178.2038f, 0) };
	func_346(&(Local_134[3 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_134[4 /*25*/] = { func_347(1069.279f, -393.5795f, 66.0262f, 1065.364f, -389.9561f, 66.1504f, 220.1611f, 0) };
	func_346(&(Local_134[4 /*25*/]), Local_824, 0, 5f, 30f, 128.1732f, 3, 1069.718f, -393.9912f, 66.0261f, 10f, 10f, 5f);
	Local_134[5 /*25*/] = { func_347(1031.673f, -424.599f, 64.5439f, 1027.179f, -420.6656f, 64.6268f, 178.2038f, joaat("p_binbag_01_s")) };
	func_346(&(Local_134[5 /*25*/]), 1028.201f, -428.3677f, 64.3571f, 1, 15f, 2f, 128.3915f, 1, 1027.179f, -420.6656f, 64.6268f, 10f, 10f, 5f);
	Local_134[6 /*25*/] = { func_347(942.1528f, -488.8956f, 59.3129f, 932.0198f, -489.3886f, 58.9212f, 202.5785f, joaat("p_binbag_01_s")) };
	func_346(&(Local_134[6 /*25*/]), 930.7186f, -494.9253f, 58.616f, 1, 15f, 2f, 119.6518f, 1, 952.9781f, -482.5082f, 60.0003f, 10f, 10f, 5f);
	Local_134[7 /*25*/] = { func_347(868.2734f, -529.5473f, 56.2071f, 865.0042f, -522.4746f, 56.3363f, 241.9711f, joaat("p_binbag_01_s")) };
	func_346(&(Local_134[7 /*25*/]), 865.2349f, -535.8759f, 56.1574f, 1, 15f, 2f, 162.7219f, 1, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_134[8 /*25*/] = { func_347(874.8076f, -571.2073f, 56.2987f, 983.125f, -541.9902f, 58.5929f, 49.7653f, 0) };
	func_346(&(Local_134[8 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_134[9 /*25*/] = { func_347(931.5218f, -614.2144f, 56.3119f, 928.6471f, -620.711f, 56.4611f, -108.06f, joaat("p_binbag_01_s")) };
	func_346(&(Local_134[9 /*25*/]), 940.4086f, -622.1787f, 56.3003f, 1, 15f, 2f, 228.1176f, 1, 918.6716f, -602.9258f, 56.3395f, 10f, 10f, 5f);
	Local_134[10 /*25*/] = { func_347(964.9758f, -645.9614f, 56.4465f, 927.1033f, -575.4162f, 56.5329f, 55.9317f, 0) };
	func_346(&(Local_134[10 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_134[11 /*25*/] = { func_347(983.4438f, -683.1442f, 56.4087f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_346(&(Local_134[11 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[12 /*25*/] = { func_347(1016.261f, -731.546f, 56.555f, 1011.801f, -733.0652f, 56.7435f, 314.5626f, joaat("p_binbag_01_s")) };
	func_346(&(Local_134[12 /*25*/]), 1020.251f, -736.815f, 56.6235f, 1, 15f, 2f, 220.7804f, 1, 1011.238f, -724.7085f, 56.5183f, 10f, 10f, 5f);
	Local_134[13 /*25*/] = { func_347(1164.126f, -762.2866f, 56.6656f, 1099.342f, -775.4273f, 57.3525f, 177.5729f, 0) };
	func_346(&(Local_134[13 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[14 /*25*/] = { func_347(1199.339f, -678.0995f, 59.9051f, 1205.415f, -672.1282f, 60.1445f, 105.2374f, 0) };
	func_346(&(Local_134[14 /*25*/]), Local_824, 0, 15f, 2f, 12.1103f, 3, 1199.339f, -678.0995f, 59.9051f, 10f, 10f, 5f);
	Local_134[15 /*25*/] = { func_347(1183.445f, -582.9476f, 63.0962f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_346(&(Local_134[15 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[16 /*25*/] = { func_347(1192.479f, -485.1086f, 64.7195f, 1264.359f, -719.084f, 63.328f, 65.0519f, 0) };
	func_346(&(Local_134[16 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[17 /*25*/] = { func_347(1212.693f, -400.0532f, 67.0971f, 1284.109f, -676.728f, 65.0225f, 69.9898f, 0) };
	func_346(&(Local_134[17 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[18 /*25*/] = { func_347(1114.573f, -232.3706f, 68.0949f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_346(&(Local_134[18 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	iLocal_830 = 19;
}

void func_346(var uParam0, struct<3> Param1, int iParam4, float fParam5, float fParam6, float fParam7, int iParam8, struct<3> Param9, struct<3> Param12)
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

struct<25> func_347(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
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

void func_348()
{
	struct<3> Var0[6];
	
	Var0[0 /*3*/] = { 1251.308f, -400.6231f, 68.0926f };
	Var0[1 /*3*/] = { 1183.993f, -403.3443f, 66.8734f };
	Var0[2 /*3*/] = { 1161.54f, -372.6073f, 66.6034f };
	Var0[3 /*3*/] = { 1167.644f, -273.7987f, 67.9705f };
	Var0[4 /*3*/] = { 1252.362f, -247.353f, 77.5631f };
	Var0[5 /*3*/] = { 1330.062f, -341.0342f, 100.3476f };
	func_349(&Var0, 6);
}

void func_349(var uParam0, int iParam1)
{
	int iVar0;
	
	func_354(&uLocal_713);
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		func_353(&uLocal_713, *(uParam0[iVar0 /*3*/]));
		iVar0++;
	}
	func_352(&uLocal_713);
	func_350(&uLocal_765, &uLocal_713, 50f);
}

void func_350(var uParam0, var uParam1, float fParam2)
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
		if (func_351(uParam1, *(uParam1[iVar1 /*3*/]) + Var9))
		{
			Var9 = { -Var9 };
		}
		*(uParam0[iVar1 /*3*/]) = { *(uParam1[iVar1 /*3*/]) + Var9 * Vector(fParam2, fParam2, fParam2) };
		iVar0 = iVar1;
		iVar1++;
		iVar2 = (iVar2 + 1 % uParam1->f_46);
	}
}

bool func_351(var uParam0, struct<2> Param1, Vector3 vParam3)
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

void func_352(var uParam0)
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

void func_353(var uParam0, struct<3> Param1)
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

void func_354(var uParam0)
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

void func_355()
{
	Local_840 = { func_356(1200.61f, -344.2721f, 68.0424f, 269.2015f, joaat("s_m_y_garbage")) };
	Local_854 = { func_356(1202.42f, -341.6034f, 67.9378f, 273.1125f, joaat("s_m_y_garbage")) };
}

struct<14> func_356(struct<3> Param0, float fParam3, int iParam4)
{
	struct<14> Var0;
	
	Var0.f_1 = { Param0 };
	Var0.f_4 = fParam3;
	Var0.f_5 = iParam4;
	return Var0;
}

void func_357()
{
	Local_868 = { func_358(1203.146f, -337.3543f, 67.9314f, 189.7047f, joaat("trash")) };
}

struct<6> func_358(struct<3> Param0, float fParam3, int iParam4)
{
	struct<6> Var0;
	
	Var0.f_1 = { Param0 };
	Var0.f_4 = fParam3;
	Var0.f_5 = iParam4;
	return Var0;
}

void func_359()
{
	func_234(1);
	func_370(1);
	unk_0xFA03BA297FE81584(joaat("trash"), 0);
	unk_0xFA03BA297FE81584(joaat("towtruck"), 0);
	unk_0xFA03BA297FE81584(joaat("s_m_y_garbage"), 0);
	func_62();
	func_369();
	func_368();
	func_360(0);
	unk_0x01DFCA3621B68C4A();
}

void func_360(bool bParam0)
{
	struct<3> Var0;
	
	if (bParam0)
	{
	}
	unk_0x0AB2B0C7DAE9FF05(unk_0xFB6B3EEFAB2DD12C(), 1, 0);
	unk_0xF39E1A7DF38A7326("DRIVE", 1);
	unk_0xF39E1A7DF38A7326("WORLD_VEHICLE_ATTRACTOR", 1);
	unk_0xF39E1A7DF38A7326("WORLD_VEHICLE_DRIVE_PASSENGERS", 1);
	unk_0xF39E1A7DF38A7326("WORLD_VEHICLE_DRIVE_SOLO", 1);
	func_37();
	func_367();
	func_366();
	func_365();
	func_364();
	func_216();
	if (bParam0)
	{
		if (unk_0x7887B64A08364778(iLocal_874))
		{
			if (unk_0x7887B64A08364778(unk_0xD5A676B97920D126()))
			{
				if (!unk_0x00B5B0B68211D89B(unk_0xD5A676B97920D126()))
				{
					if (unk_0x04D83291EB9DE51D(unk_0xD5A676B97920D126(), iLocal_874, 0))
					{
						Var0 = { unk_0xC086F8D75730FA3A(unk_0xD5A676B97920D126(), 1) };
						unk_0xBB9A2DB94A862D7A(unk_0xD5A676B97920D126(), Var0, 1, 0, 0, 1);
					}
				}
			}
		}
		func_362();
		unk_0x59C0D363E5A5B548();
		func_2();
	}
	else
	{
		func_361();
	}
	unk_0x905724898AD77C0C(0);
	func_139(&uLocal_671, 0, 0);
	if (unk_0xE7E9CC62D1C4C0A8(uLocal_823))
	{
		unk_0xD08D9B79AF63C59F(0, 0, 3000, 1, 0, 0);
		unk_0xAF191D67F49B35C9(uLocal_823, 0);
	}
}

void func_361()
{
	func_3();
	func_6(&Local_868);
	func_6(&uLocal_875);
	func_6(&iLocal_874);
	func_5(&Local_840, 1, 0, 1);
	func_5(&Local_854, 1, 0, 1);
	func_6(&uLocal_876);
}

void func_362()
{
	Global_14611 = 0;
	func_363();
}

void func_363()
{
	unk_0xB6A622037A2FE913();
	Global_16756 = 0;
	if (unk_0x33688D334D224255())
	{
		unk_0x73998CD31AEFA620(false);
		Global_15745 = 6;
	}
}

void func_364()
{
}

void func_365()
{
	if (iLocal_837)
	{
		unk_0xF704C514612D7CA3(joaat("trash"));
	}
}

void func_366()
{
}

void func_367()
{
	unk_0x8188DB74546FF484(Local_868.f_5);
}

void func_368()
{
	func_327(21, 1, 0);
}

void func_369()
{
	Global_87674 = 0;
}

void func_370(int iParam0)
{
	Global_89125 = iParam0;
}

void func_371()
{
	int iVar0;
	
	if (unk_0x4AAFD43C0AFB7A1A("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_101652.f_8028 || func_32(0))
	{
		if (!func_372())
		{
			iVar0 = func_31();
			if (iVar0 != -1)
			{
				if (!func_19(iVar0))
				{
					return;
				}
				unk_0xB8A73E7DA87B2968(&(Global_82571[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_24();
		}
	}
}

int func_372()
{
	if (((Global_91486 == 13 || Global_91486 == 10) || Global_91486 == 11) || Global_91486 == 12)
	{
		return 0;
	}
	return 1;
}

