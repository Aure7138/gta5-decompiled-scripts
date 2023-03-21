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
	unk_0x1A41D12A38E6D79F(1);
	if (unk_0xD4BE58A7E3E102AC(19))
	{
		sLocal_818 = 0;
		func_387();
		func_375();
	}
	func_358();
	if (func_357())
	{
		func_356(918.8851f, -269.789f, 67.2145f, 68.2149f, 1, 0);
	}
	func_342();
	while (true)
	{
		unk_0x643E26919A174002("M_TrT", 0);
		if (func_341(unk_0x0FA8183DAD2B3203()))
		{
			func_337();
			func_333();
			unk_0x3EF8C80DD57B551F(unk_0x7C7787D2D7139A85());
			unk_0xAC5263AEA7D6AA8A(0.8f);
			switch (iLocal_683)
			{
				case 0:
					func_270();
					break;
				
				case 1:
					func_239();
					break;
				
				case 2:
					func_221();
					break;
				
				case 3:
					func_108();
					break;
				
				case 4:
					func_39();
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
			unk_0x1C9DBC28A851F0A6();
			unk_0x0D23E3918F7AF11B(1);
			func_38();
			if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
			{
				iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
				if (func_37(iVar0) && unk_0x7F375072508F738F(iVar0) == joaat("towtruck"))
				{
					func_36(iVar0, 2);
				}
			}
			if (!unk_0x9591DE0F00127F2A(sLocal_818))
			{
				func_34(sLocal_818);
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
				unk_0xB82DC93528F8603C(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), 30f, 1, 0, 0, 0);
				func_375();
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
	unk_0x7A9453C2EDBAFB80(uLocal_80);
	unk_0x7D74D6A091150B86("missfbi4prepp1");
	unk_0xCDDBA3BC7181375A("missfbi4prepp1_garbageman");
}

void func_4(var uParam0, bool bParam1)
{
	if (unk_0xD4B321D9096B01FC(*uParam0))
	{
		if (unk_0x0671DB6A34EE14AA(*uParam0))
		{
			unk_0x363E2170E626A00A(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x86A9549BD3D71664(uParam0);
		}
		else
		{
			unk_0x7F871504FE14865C(*uParam0);
		}
	}
}

void func_5(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xD4B321D9096B01FC(*uParam0))
	{
		if (!unk_0x2BF5E63466422C38(*uParam0))
		{
			unk_0xDA778D908FD69EEE(*uParam0, 0, 1);
			if (iParam3 == 0)
			{
				unk_0xB46600A5F9F79CE8(*uParam0);
			}
			unk_0x7D81B41B134BD6F2(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0xCC94EE23853F38E4(*uParam0, false);
			}
		}
		unk_0x0FFB05DA97E810B5(uParam0);
	}
}

void func_6(var uParam0)
{
	if (unk_0xD4B321D9096B01FC(*uParam0))
	{
		unk_0xF4B969E0807E76C7(*uParam0, 0);
		if (unk_0x00123AB82C5FAC28(*uParam0) && unk_0x532AFD85DAA91F63(*uParam0, 1))
		{
			unk_0xF25956700ADFD77F(uParam0);
		}
	}
}

void func_7(int iParam0)
{
	if (unk_0x39A01A052D9B5FF0(*iParam0))
	{
		unk_0x925BD1075D119B45(*iParam0, 0);
		unk_0xAA2276003B2ADF1B(iParam0);
	}
}

void func_8(int iParam0)
{
	if (unk_0xD4B321D9096B01FC(*iParam0))
	{
		if (!unk_0xF4B969E0807E76C7(*iParam0, 0))
		{
			unk_0xDA778D908FD69EEE(*iParam0, 0, 1);
		}
		if (!unk_0x00123AB82C5FAC28(*iParam0))
		{
			unk_0xE5C667CF3B4642D2(*iParam0, 1, 0);
		}
		unk_0x4F058F27442031CC(iParam0);
	}
}

void func_9(var uParam0)
{
	if (unk_0xD4B321D9096B01FC(*uParam0))
	{
		if (!unk_0x00123AB82C5FAC28(*uParam0))
		{
			unk_0xE5C667CF3B4642D2(*uParam0, 1, 0);
		}
		if (func_37(*uParam0))
		{
			if (unk_0x00123AB82C5FAC28(*uParam0) && unk_0x532AFD85DAA91F63(*uParam0, 1))
			{
				if (func_10(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), *uParam0, 0))
					{
						unk_0xF25956700ADFD77F(uParam0);
						return;
					}
				}
				unk_0xBD22862A2C5FD6DF(uParam0);
			}
		}
		else
		{
			if (func_10(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), *uParam0, 0))
				{
					unk_0xF25956700ADFD77F(uParam0);
					return;
				}
			}
			unk_0xBD22862A2C5FD6DF(uParam0);
		}
	}
}

int func_10(int iParam0)
{
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		if (!unk_0xF4B969E0807E76C7(iParam0, 0))
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
	func_13(&(Global_105109.f_2890), Param0, fParam3);
}

void func_13(var uParam0, struct<3> Param1, var uParam4)
{
	*uParam0 = { Param1 };
	uParam0->f_6 = uParam4;
}

void func_14(struct<3> Param0, float fParam3)
{
	if (func_15(Global_76817, 0f, 0f, 0f, 0))
	{
		Global_76817 = { Param0 };
		Global_76820 = fParam3;
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
	if (Global_98669 == 7)
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
	if (Global_98669 == 7 || Global_98669 == 8)
	{
		return 1;
	}
	return 0;
}

void func_18(int iParam0)
{
	int iVar0;
	
	if (Global_111560.f_9080 || func_33(0))
	{
		iVar0 = func_32();
		if (!func_19(iVar0))
		{
			return;
		}
		unk_0xA1E7A40E1F56E511(&(Global_89451[iVar0 /*5*/].f_1), 5);
		Global_98705 = iParam0;
	}
}

int func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_24();
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		unk_0x33B887A7E419BCB6(5000);
	}
	iVar0 = Global_89451[iParam0 /*5*/];
	iVar1 = Global_76846.f_109[iVar0 /*4*/];
	func_23(iVar1, 1);
	unk_0x2AE4EAB17A9DD19A(unk_0x7C7787D2D7139A85());
	unk_0x341977E77C118EB1(unk_0x7C7787D2D7139A85());
	func_20(&(Global_111560.f_2358.f_539), iVar1);
	if (Global_92874 == Global_98706)
	{
		Global_111560.f_9080.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xA2BC31158C8CEFD2(Global_89487[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
		{
			unk_0xECBD7388D13DBB07(0);
		}
	}
	Global_111560.f_9080.f_330[iVar1 /*6*/].f_2++;
	Global_92874 = Global_98706;
	if (iParam0 == -1)
	{
		if (Global_111560.f_9080)
		{
		}
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_89451[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_89451[iParam0 /*5*/].f_1, 5))
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
		iVar1 = Global_111560.f_18528[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xA2BC31158C8CEFD2(Global_111560.f_9080.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_22(Global_111560.f_18528[iVar0], &Var2, &fVar5))
			{
				Global_111560.f_18528[iVar0] = 318;
				func_21(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_96089[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_96089[iVar0 /*29*/].f_9 = 0f;
				Global_96089[iVar0 /*29*/].f_12 = 0f;
				Global_96089[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_96089[iVar0 /*29*/].f_10 = 0f;
				Global_96089[iVar0 /*29*/].f_13 = 0f;
				Global_96089[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_96089[iVar0 /*29*/].f_11 = 0f;
				Global_96089[iVar0 /*29*/].f_14 = 0f;
				Global_96089[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_96089[iVar0 /*29*/].f_26 = 0f;
				Global_96089[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_96089[iVar0 /*29*/].f_27 = 0f;
				Global_96089[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_96089[iVar0 /*29*/].f_28 = 0f;
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
			Global_92684[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_92684[iParam0 /*2*/] = 0;
	}
}

void func_24()
{
	Global_98704 = 1;
	if (unk_0x75C4B855B2F44375(unk_0x7C7787D2D7139A85(), 1))
	{
		if (unk_0x9591DE0F00127F2A(&Global_76809))
		{
			switch (func_25())
			{
				case 0:
					StringCopy(&Global_76809, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_76809, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_76809, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_76813, "", 16);
		}
		Global_98704 = 0;
	}
	else if (!unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0x9591DE0F00127F2A(&Global_76809))
		{
			switch (func_25())
			{
				case 0:
					StringCopy(&Global_76809, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_76809, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_76809, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_76813, "", 16);
		}
		Global_98704 = 0;
		unk_0xA1E7A40E1F56E511(&(Global_98669.f_20), 25);
	}
}

int func_25()
{
	func_26();
	return Global_111560.f_2358.f_539.f_4321;
}

void func_26()
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
	{
		if (func_30(Global_111560.f_2358.f_539.f_4321) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
		{
			iVar0 = func_29(unk_0x0FA8183DAD2B3203());
			if (func_28(iVar0) && (!func_27(14) || Global_110511))
			{
				if (Global_111560.f_2358.f_539.f_4321 != iVar0 && func_28(Global_111560.f_2358.f_539.f_4321))
				{
					Global_111560.f_2358.f_539.f_4322 = Global_111560.f_2358.f_539.f_4321;
				}
				Global_111560.f_2358.f_539.f_4323 = iVar0;
				Global_111560.f_2358.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111560.f_2358.f_539.f_4321 != 145)
			{
				Global_111560.f_2358.f_539.f_4323 = Global_111560.f_2358.f_539.f_4321;
			}
			return;
		}
	}
	Global_111560.f_2358.f_539.f_4321 = 145;
}

bool func_27(int iParam0)
{
	return Global_41396 == iParam0;
}

bool func_28(int iParam0)
{
	return iParam0 < 3;
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		iVar1 = unk_0x7F375072508F738F(iParam0);
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
		return func_31(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_31(int iParam0)
{
	return Global_1798[iParam0 /*29*/];
}

int func_32()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xA2BC31158C8CEFD2(Global_89451[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_33(bool bParam0)
{
	if (!bParam0 && unk_0x222F76006659B0EB(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA2BC31158C8CEFD2(Global_76825, 0);
}

void func_34(char* sParam0)
{
	func_35(sParam0);
	func_18(0);
}

void func_35(char* sParam0)
{
	if (!unk_0x9591DE0F00127F2A(sParam0))
	{
		if (unk_0xF0B71FD2BDA4E5B7(sParam0) <= 16)
		{
			StringCopy(&Global_76809, sParam0, 16);
			StringCopy(&Global_76813, "", 16);
			if (unk_0xB9AB61E108CF483B())
			{
				unk_0xE153599BDDE03B01();
			}
		}
	}
}

void func_36(int iParam0, int iParam1)
{
	Global_98669.f_22[iParam1] = iParam0;
}

int func_37(int iParam0)
{
	if (func_10(iParam0))
	{
		if (unk_0xD960230552BC4165(iParam0, 0))
		{
			if (!unk_0xCFBE5B663F1567A7(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_38()
{
	func_7(&iLocal_821);
}

void func_39()
{
	int iVar0;
	
	switch (iLocal_684)
	{
		case 0:
			iLocal_684 = 1;
			break;
		
		case 1:
			if (!func_107(unk_0x0FA8183DAD2B3203(), Local_827, 270f))
			{
				iLocal_684 = 2;
			}
			else if (!func_106("PRA_LEVAREA", 0, 0))
			{
				func_105("PRA_LEVAREA", 60000, 0);
			}
			break;
		
		case 2:
			iVar0 = func_25();
			if (func_106("PRA_LEVAREA", 0, 0))
			{
				unk_0x1C9DBC28A851F0A6();
			}
			if (iVar0 == 0)
			{
				if (func_67(&uLocal_687, &cLocal_1044, &uLocal_879))
				{
					func_63();
					func_58();
				}
			}
			else
			{
				func_53(func_57(iVar0), -621899663, -621899663, 5, 0, iVar0, func_56(iVar0), 0, 6000, 6000, -1, 0, 0);
				func_63();
				func_58();
			}
			break;
		
		case 3:
			func_40(1, 1, 1);
			iLocal_684 = 2;
			break;
	}
}

void func_40(int iParam0, int iParam1, int iParam2)
{
	func_42(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		unk_0xA291E27354439AE9(0f, 1065353216);
		unk_0xB489E71A45CDC02F(0f);
	}
	if (iParam1 == 1)
	{
		func_41(500, 0);
	}
}

void func_41(int iParam0, bool bParam1)
{
	if (unk_0x260395BA7F0C83CB() || unk_0xA710300CD13D2877())
	{
		if (!unk_0xC862E94A8ABC89B8())
		{
			unk_0xCF33E56642B34516(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0xBF28CCACDDFF5346())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

void func_42(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x7A8732CFB5113E77();
	unk_0x7385F0BCDE320A17(uVar0, 0);
	unk_0x3D0DE925C0536CA0(uVar0, iParam3, 0);
	func_43(0, 1, 0, 0, 0, 0);
	if (iParam2 == 1)
	{
		unk_0x4BEE8AE599A4A300(1);
		unk_0x5AC8A91A3FD00B39(1);
	}
	unk_0x0D23E3918F7AF11B(1);
	if (iParam0 == 1)
	{
		unk_0x85417D6445C532FC(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_37 != 0 && iLocal_37 != joaat("object")) && iLocal_37 != joaat("gadget_parachute"))
		{
			if (func_10(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x980642D66B4A4C61(unk_0x0FA8183DAD2B3203(), iLocal_37, 0))
				{
					unk_0xE5DAA5553A176799(unk_0x0FA8183DAD2B3203(), iLocal_37, 0);
				}
			}
		}
	}
	if (func_341(unk_0x0FA8183DAD2B3203()))
	{
		unk_0x1C2AC11A8D8E19DD(unk_0x0FA8183DAD2B3203(), 0, 0);
	}
}

void func_43(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		unk_0x7FFD059D4FA38133(unk_0x7C7787D2D7139A85());
		unk_0xB3414892E3E6016F(unk_0x7C7787D2D7139A85(), 1);
		unk_0xD5BB07C763F1D1D9(unk_0x7C7787D2D7139A85(), 1);
		func_52(1);
		unk_0x0C90AD17B16DE260();
		unk_0x695A752EE2ABAEDE();
		if (Global_19486.f_1 > 3)
		{
			if (unk_0x31634D65216B86B6())
			{
				unk_0x623942A4F366F9BB(0);
			}
			if (!func_51())
			{
				Global_19486.f_1 = 3;
			}
			Global_20805 = 5;
		}
		func_50(1, iParam3, iParam2, 0);
		Global_61477 = 1;
		Global_73787 = 1;
		Global_76575 = 1;
	}
	else
	{
		func_52(0);
		unk_0x418A0C9B89A8D0B1();
		Global_61477 = 0;
		if (bParam1)
		{
			unk_0x0BDD50D0AE4552F2();
		}
		unk_0xB3414892E3E6016F(unk_0x7C7787D2D7139A85(), 0);
		unk_0xD5BB07C763F1D1D9(unk_0x7C7787D2D7139A85(), 0);
		func_50(0, iParam3, iParam2, 0);
		if (unk_0x393E9918BC37548A())
		{
			if (((((!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) && !func_48(unk_0x7C7787D2D7139A85())) && !func_45(unk_0x7C7787D2D7139A85(), 0)) && !func_44()) && !bParam4) && !bParam5)
			{
				unk_0x04F5A8AA60EC662B(unk_0x0FA8183DAD2B3203(), 0);
			}
		}
		else if (((!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) && !func_48(unk_0x7C7787D2D7139A85())) && !bParam4) && !bParam5)
		{
			unk_0x04F5A8AA60EC662B(unk_0x0FA8183DAD2B3203(), 0);
		}
		Global_76575 = 0;
	}
}

bool func_44()
{
	return unk_0xA2BC31158C8CEFD2(Global_1590446[unk_0x7C7787D2D7139A85() /*871*/].f_39.f_18, 14);
}

bool func_45(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x7C7787D2D7139A85())
	{
		bVar0 = func_46(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590446[iParam0 /*871*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD56C8C2B75BF9665(iParam0))
		{
			bVar0 = unk_0xC69A85EEB9CA3B95(iParam0) == 8;
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
	if (Global_1312853[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_47()
{
	return Global_1312745;
}

int func_48(int iParam0)
{
	if (func_45(iParam0, 0))
	{
		return 1;
	}
	if (func_49())
	{
		if (iParam0 == unk_0x7C7787D2D7139A85())
		{
			return 1;
		}
	}
	if (unk_0xA2BC31158C8CEFD2(Global_2424073[iParam0 /*421*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_49()
{
	return unk_0xA2BC31158C8CEFD2(Global_2359302, 3);
}

int func_50(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xE434AB6E3DE89861())
	{
		if (unk_0xC4741D7AA5AAF9B6() != iParam0 && uParam2)
		{
			unk_0x0696366AB240E4CD(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_51()
{
	if (Global_19486.f_1 == 1 || Global_19486.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_52(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xA1E7A40E1F56E511(&Global_7356, 13);
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_7356, 13);
	}
}

int func_53(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_33(0))
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
	if (Global_111560.f_7683.f_136 < 9)
	{
		Var0.f_0 = uParam0;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_9 = iParam3;
		if (Global_111560.f_7683.f_911 == Var0.f_0)
		{
			Global_111560.f_7683.f_911 = -1;
		}
		Var0.f_3 = func_55(iParam4);
		Var0.f_5 = iParam9;
		Var0.f_4 = (unk_0x9B35D07DCD0F0B43() + iParam8);
		Var0.f_1 = iParam12;
		iVar15 = 0;
		unk_0xA1E7A40E1F56E511(&iVar15, iParam5);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam6;
		Var0.f_14 = iParam7;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		unk_0xA1E7A40E1F56E511(&(Var0.f_1), 0);
		unk_0xA1E7A40E1F56E511(&(Var0.f_1), 13);
		unk_0x3B76114EC84D5812(&(Var0.f_1), 1);
		if (iParam4 == 0)
		{
			unk_0xA1E7A40E1F56E511(&(Var0.f_1), 10);
		}
		Global_111560.f_7683[Global_111560.f_7683.f_136 /*15*/] = { Var0 };
		Global_111560.f_7683.f_136++;
		func_54(iParam5);
		return 1;
	}
	return 0;
}

void func_54(int iParam0)
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
	while (iVar0 < Global_111560.f_7683.f_136)
	{
		if (unk_0xA2BC31158C8CEFD2(Global_111560.f_7683[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_111560.f_7683[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_111560.f_7683[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_111560.f_7683.f_764)
	{
		if (unk_0xA2BC31158C8CEFD2(Global_111560.f_7683.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_111560.f_7683.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_111560.f_7683.f_919[iParam0] = iVar1;
}

int func_55(int iParam0)
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

int func_56(int iParam0)
{
	if (iParam0 == 1)
	{
		return 9;
	}
	return 8;
}

int func_57(int iParam0)
{
	if (iParam0 == 1)
	{
		return -714760066;
	}
	return -1198055521;
}

void func_58()
{
	unk_0x1C9DBC28A851F0A6();
	func_61();
	func_59(0, 0);
	func_375();
}

void func_59(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_61473)
	{
		Global_61473 = iParam1;
	}
	if (bParam0)
	{
		if ((func_33(0) && Global_76823.f_1 == 1) && func_60(Global_76823))
		{
		}
		else
		{
			Global_61471 = 1;
		}
	}
	if (Global_111560.f_9080 || func_33(0))
	{
		iVar0 = func_32();
		iVar1 = Global_89451[iVar0 /*5*/];
		uVar2 = Global_76846.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_111560.f_9080)
			{
			}
			return;
		}
		if (unk_0xA2BC31158C8CEFD2(Global_89451[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xA2BC31158C8CEFD2(Global_89451[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xA1E7A40E1F56E511(&(Global_89451[iVar0 /*5*/].f_1), 4);
		unk_0xA1E7A40E1F56E511(&Global_76825, 1);
		Global_76841 = uVar2;
		Global_76842 = unk_0x9B35D07DCD0F0B43();
	}
}

int func_60(int iParam0)
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

void func_61()
{
	Global_19671 = 0;
	func_62();
}

void func_62()
{
	unk_0xE4F88BFF8FB3D84C();
	Global_21816 = 0;
	if ((unk_0x31634D65216B86B6() || Global_19486.f_1 == 9) || Global_19485 == 1)
	{
		unk_0x623942A4F366F9BB(0);
		Global_20805 = 6;
		Global_19486.f_1 = 3;
		return;
	}
	if (unk_0x04C7A9862FF737E9())
	{
		unk_0x623942A4F366F9BB(1);
		Global_20805 = 6;
		return;
	}
}

void func_63()
{
	func_66(0, -1);
	func_65(0, 318);
	func_64(1, 320);
}

void func_64(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_61479)
	{
	}
	Global_61479 = 0;
	if (bParam0)
	{
		Global_61480 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_73566)
		{
			if (Global_61696[Global_73567[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_73567[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_73566)
		{
			if (Global_73567[iVar0 /*9*/] > 0)
			{
				if (Global_73567[iVar0 /*9*/] == iParam1)
				{
					Global_73567[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

void func_65(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_61484 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_73566)
	{
		if (iParam1 == -1 || Global_73567[iVar0 /*9*/] == iParam1)
		{
			if (Global_73567[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_73567[iVar0 /*9*/].f_6 = iParam0;
				Global_73567[iVar0 /*9*/].f_7 = 1;
				Global_73567[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_66(int iParam0, int iParam1)
{
	Global_61482 = iParam0;
	Global_61483 = iParam1;
}

int func_67(var uParam0, char* sParam1, var uParam2)
{
	switch (*uParam0)
	{
		case 0:
			if (func_103())
			{
				if ((func_102(74) || func_102(75)) && func_101())
				{
					if (func_25() == 0)
					{
						func_100(1);
						func_99(46, 1);
						*uParam0 = 4;
					}
					else
					{
						func_98(uParam2, 0, 0, "MICHAEL", 0, 1);
						if (func_82(uParam2, func_97(), func_25(), "FBIPRAU", func_96(), 9, 1, 0, 0, 0))
						{
							*sParam1 = { func_81(1) };
							func_99(46, 1);
							*uParam0 = 1;
						}
					}
				}
				else if (func_25() == 0)
				{
					func_100(0);
					*uParam0 = 4;
				}
				else
				{
					func_98(uParam2, 0, 0, "MICHAEL", 0, 1);
					if (func_82(uParam2, func_97(), func_25(), "FBIPRAU", func_96(), 9, 1, 0, 0, 0))
					{
						*sParam1 = { func_81(0) };
						*uParam0 = 1;
					}
				}
			}
			else
			{
				func_74();
				*uParam0 = 4;
			}
			break;
		
		case 1:
			if (func_73())
			{
				if (unk_0x8CD683A755F4B25E() >= 0)
				{
					func_72("FBIPRAU", sParam1);
					func_71(1);
					*uParam0 = 3;
				}
			}
			if (func_70())
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			if (!func_73())
			{
				if (!func_69(0))
				{
					if (!func_102(3) && func_103())
					{
						func_68(50, 0);
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

void func_68(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_111560.f_8608[iParam0] = 1;
	Global_111560.f_8608.f_236[iParam0] = (unk_0x9B35D07DCD0F0B43() + iParam1);
}

int func_69(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19486.f_1 > 3)
		{
			if (unk_0xA2BC31158C8CEFD2(Global_7356, 14))
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
	if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19486.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_70()
{
	if (Global_20854 == 1 || Global_21821 == 1)
	{
		return 1;
	}
	return 0;
}

void func_71(bool bParam0)
{
	unk_0x623942A4F366F9BB(bParam0);
	if (bParam0)
	{
	}
}

void func_72(char* sParam0, char* sParam1)
{
	if (unk_0x31634D65216B86B6())
	{
		Global_20862 = 1;
		StringCopy(&Global_20869, sParam0, 24);
		StringCopy(&Global_20863, sParam1, 24);
	}
}

int func_73()
{
	if (Global_20805 == 4)
	{
		if (unk_0x31634D65216B86B6())
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

void func_74()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_79(iVar0);
		if (!unk_0x2BF5E63466422C38(iVar1))
		{
			if (func_78(iVar1, 0))
			{
				return;
			}
		}
		iVar0++;
	}
	func_75(func_76(), 0, func_25(), func_97(), 9, 6000, 6000, -1, 0, -1, 0);
}

int func_75(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<15> Var0;
	int iVar15;
	
	if (func_33(0))
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
	if (Global_111560.f_7683.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_111560.f_7683.f_911 == Var0.f_0)
		{
			Global_111560.f_7683.f_911 = -1;
		}
		Var0.f_3 = func_55(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (unk_0x9B35D07DCD0F0B43() + iParam5);
		Var0.f_1 = iParam10;
		iVar15 = 0;
		unk_0xA1E7A40E1F56E511(&iVar15, iParam2);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		unk_0xA1E7A40E1F56E511(&(Var0.f_1), 0);
		unk_0x3B76114EC84D5812(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			unk_0xA1E7A40E1F56E511(&(Var0.f_1), 10);
		}
		Global_111560.f_7683[Global_111560.f_7683.f_136 /*15*/] = { Var0 };
		Global_111560.f_7683.f_136++;
		func_54(iParam2);
		return 1;
	}
	return 0;
}

int func_76()
{
	switch (func_77())
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

int func_77()
{
	return Global_76839;
}

int func_78(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_79(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x0FA8183DAD2B3203())
			{
				return 0;
			}
		}
		if (unk_0xA2BC31158C8CEFD2(Global_94552, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_79(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_25())
	{
		return unk_0x0FA8183DAD2B3203();
	}
	return Global_96177[func_80(iParam0)];
}

int func_80(int iParam0)
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

struct<4> func_81(bool bParam0)
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

bool func_82(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	func_95(uParam0, iParam1, sParam3, iParam7, iParam8, 0);
	Global_6674 = iParam2;
	Global_20853 = 0;
	Global_20812 = 1;
	Global_20819 = 0;
	Global_20814 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_20819 = 0;
	Global_20810 = 1;
	Global_20857 = 0;
	Global_20859 = 0;
	if (iParam6 == 1)
	{
		Global_20817 = 1;
	}
	else
	{
		Global_20817 = 0;
	}
	Global_2621441 = 0;
	return func_83(sParam4, iParam5, bParam9);
}

int func_83(char* sParam0, int iParam1, bool bParam2)
{
	Global_20806 = 0;
	if (Global_20805 == 0 || Global_20807 == 2)
	{
		if (Global_20805 != 0)
		{
			if (iParam1 > Global_20807)
			{
				if (Global_20812 == 0)
				{
					unk_0x623942A4F366F9BB(false);
					Global_19486.f_1 = 3;
					Global_20805 = 0;
					Global_20806 = 1;
					Global_20858 = 0;
					Global_20801 = 0;
					Global_20802 = 0;
					Global_20816 = 0;
					Global_20815 = 0;
					Global_19485 = 0;
				}
				else
				{
					func_62();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x04C7A9862FF737E9())
		{
			return 0;
		}
		if (func_94(8, -1))
		{
			return 0;
		}
		Global_20881 = { Global_20875 };
		func_93();
		Global_20094 = { Global_20259 };
		Global_20811 = Global_20812;
		Global_20818 = Global_20819;
		Global_2621442 = Global_2621441;
		Global_20820 = { Global_20836 };
		Global_20813 = Global_20814;
		Global_21795 = Global_21796;
		Global_21803 = { Global_21809 };
		Global_21797 = Global_21798;
		Global_21799 = Global_21800;
		Global_21801 = Global_21802;
		Global_20424.f_370 = Global_21794;
		Global_20424.f_368 = Global_21792;
		Global_20424.f_369 = Global_21793;
		Global_20801 = Global_20802;
		if (Global_20811)
		{
			unk_0x3B76114EC84D5812(&Global_7356, 20);
			unk_0x3B76114EC84D5812(&Global_7357, 17);
			unk_0x3B76114EC84D5812(&Global_7358, 0);
			if (bParam2)
			{
				func_92();
				if (Global_8161[Global_19486 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19486.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19452 == 1)
			{
				return 0;
			}
			if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
			{
				if (unk_0x132DF66D50A7DE4E(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (func_91())
				{
					return 0;
				}
				if (unk_0x6B6CB57338FA0319(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0x604F402D213D3BE5(unk_0x0FA8183DAD2B3203()))
				{
					return 0;
				}
				if (unk_0xA6DAB995F3A28615(unk_0x0FA8183DAD2B3203(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76577)
				{
					if (unk_0xE294A1321110B3E9(unk_0x0FA8183DAD2B3203()))
					{
						return 0;
					}
					if (unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85()))
					{
						return 0;
					}
					if (unk_0x7E1657C6CCABF258(unk_0x0FA8183DAD2B3203()))
					{
						return 0;
					}
					if (unk_0xD2E3AF497D091872(unk_0x7C7787D2D7139A85()))
					{
						return 0;
					}
				}
			}
			if (func_51())
			{
				return 0;
			}
			else
			{
				switch (Global_19486.f_1)
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
				if (unk_0xA2BC31158C8CEFD2(Global_7356, 9))
				{
					return 0;
				}
			}
			func_90();
			Global_20815 = bParam2;
		}
		Global_20807 = iParam1;
		StringCopy(&Global_20424, sParam0, 24);
		Global_19671 = 0;
		func_89();
		func_84();
		return 1;
	}
	if (Global_20805 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_20807 || iParam1 == Global_20807)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_62();
	}
	return 0;
}

void func_84()
{
	if (!func_85())
	{
		return;
	}
	if (Global_20811)
	{
		MemCopy(&(Global_1703200.f_1), {Global_20424}, 4);
		Global_1703200 = Global_6671;
		Global_1703200.f_6 = Global_20815;
	}
}

int func_85()
{
	if (!Global_262145.f_28013)
	{
		return 0;
	}
	if (!Global_76577)
	{
		return 0;
	}
	if (unk_0x7C7787D2D7139A85() == func_88())
	{
		return 0;
	}
	if (func_86(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	if (unk_0xA2BC31158C8CEFD2(Global_1628955[unk_0x7C7787D2D7139A85() /*614*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xA51CBC95AC3A4B14())
	{
		return 0;
	}
	return 1;
}

bool func_86(int iParam0)
{
	return func_87(iParam0, 20);
}

bool func_87(int iParam0, int iParam1)
{
	return unk_0xA2BC31158C8CEFD2(Global_1628955[iParam0 /*614*/].f_11.f_4, iParam1);
}

int func_88()
{
	return -1;
}

void func_89()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19673[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0x623942A4F366F9BB(false);
	Global_20805 = 1;
}

void func_90()
{
	Global_20858 = Global_20857;
	Global_20852 = Global_20853;
	Global_20899 = { Global_20887 };
	Global_20905 = { Global_20893 };
	Global_20860 = Global_20859;
	Global_20929 = { Global_20911 };
	Global_20935 = { Global_20917 };
	Global_20941 = { Global_20923 };
	Global_20947 = { Global_20953 };
	Global_6671 = Global_6672;
	Global_6673 = Global_6674;
	Global_20816 = Global_20817;
	Global_20818 = Global_20819;
	Global_20820 = { Global_20836 };
	Global_20809 = Global_20810;
	Global_21821 = 0;
	Global_20854 = 0;
	Global_20855 = 0;
	unk_0x3B76114EC84D5812(&Global_7357, 16);
}

int func_91()
{
	int iVar0;
	int iVar1;
	
	if (Global_76577)
	{
		iVar0 = 0;
		unk_0x63EA4FAF7CDEFEC7(unk_0x0FA8183DAD2B3203(), &iVar1, 1);
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x9044F3A001B2AC43() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
	{
		if (unk_0xB99AB40226A0C08E(unk_0x0FA8183DAD2B3203(), 78, 1))
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

void func_92()
{
	if (func_27(14))
	{
		if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[0 /*29*/])
			{
				Global_19486 = 0;
			}
			else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[1 /*29*/])
			{
				Global_19486 = 1;
			}
			else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_111560.f_28045[2 /*29*/])
			{
				Global_19486 = 2;
			}
			else
			{
				Global_19486 = 0;
			}
		}
	}
	else
	{
		Global_19486 = func_25();
		if (Global_19486 == 145)
		{
			Global_19486 = 3;
		}
		if (Global_76577)
		{
			Global_19486 = 3;
		}
		if (Global_19486 > 3)
		{
			Global_19486 = 3;
		}
	}
}

void func_93()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20094[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20094[iVar0 /*10*/].f_1), "", 24);
		Global_20094[iVar0 /*10*/].f_7 = 0;
		Global_20094[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20094.f_161 = -99;
	Global_20094.f_162 = { 0f, 0f, 0f };
}

bool func_94(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1373500.f_203[iParam1];
			}
			break;
	}
	return unk_0xA2BC31158C8CEFD2(Global_1373500.f_1048, iParam0);
}

void func_95(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20259 = { *uParam0 };
	Global_6672 = iParam1;
	StringCopy(&Global_20875, sParam2, 24);
	Global_21794 = iParam5;
	if (iParam3 == 0)
	{
		Global_21792 = 1;
		Global_21790 = 0;
	}
	else
	{
		Global_21792 = 0;
		Global_21790 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21793 = 1;
		Global_21791 = 0;
	}
	else
	{
		Global_21793 = 0;
		Global_21791 = 1;
	}
}

char* func_96()
{
	char* sVar0;
	
	switch (func_77())
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

int func_97()
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

void func_98(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76577)
	{
		if (!unk_0x2BF5E63466422C38(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x773434A2783CA924(iParam2, 0);
			}
			else
			{
				unk_0x773434A2783CA924(iParam2, 1);
			}
		}
		if (!unk_0x2BF5E63466422C38(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xB35478A1AA54EA1A(iParam2, 0);
			}
			else
			{
				unk_0xB35478A1AA54EA1A(iParam2, 1);
			}
		}
	}
}

void func_99(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_111560.f_9080.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_111560.f_9080.f_99.f_58[iParam0] = iParam1;
}

void func_100(bool bParam0)
{
	if (bParam0)
	{
		func_75(1527885205, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
	else if (!func_102(3))
	{
		func_75(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 50, -1, 0);
	}
	else
	{
		func_75(-224691627, 0, func_25(), 23, 3, 6000, 6000, -1, 0, -1, 0);
	}
}

int func_101()
{
	if ((func_102(41) && func_102(3)) && func_102(21))
	{
		return 1;
	}
	return 0;
}

int func_102(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111560.f_9080.f_330[iParam0 /*6*/];
}

int func_103()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 33;
	while (iVar1 <= 37)
	{
		if (func_102(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	if (func_104(45))
	{
		iVar0++;
	}
	if (iVar0 == 4)
	{
		return 1;
	}
	return 0;
}

int func_104(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111560.f_9080.f_99.f_58[iParam0];
}

void func_105(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xE1A3A3468E806677(sParam0);
	unk_0x743C4524DF783B2F(iParam1, 1);
}

bool func_106(char* sParam0, int iParam1, int iParam2)
{
	unk_0xC1A9801A23F32F8F(sParam0);
	if (iParam1 == 1)
	{
		unk_0x0AC9F8E1AFCEC860(iParam2);
	}
	return unk_0xCDD0AB887E3F6532();
}

bool func_107(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

void func_108()
{
	func_215(&iLocal_874, &uLocal_875, &iLocal_686, &iLocal_822, &iLocal_821, Local_827, Local_868.f_0, 0, 1090519040);
	func_214();
	func_155();
	switch (iLocal_684)
	{
		case 0:
			if (func_122(iLocal_683, bLocal_28))
			{
				if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) == 0)
				{
					if (func_37(iLocal_874))
					{
						if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_874, 0))
						{
							func_121("PRA_LEVVEH", &iLocal_820);
						}
					}
				}
				iLocal_684 = 1;
			}
			break;
		
		case 1:
			func_120(&iLocal_821, Local_827, &iLocal_685, iLocal_686, &iLocal_820, &iLocal_838);
			if (func_113(iLocal_874, Local_827, &iLocal_821, iLocal_686, iLocal_685, &iLocal_836, &iLocal_839, &iLocal_835, &iLocal_834, &iLocal_820, 1090519040))
			{
				if (!func_112())
				{
					if (func_67(&uLocal_687, &cLocal_1044, &uLocal_879))
					{
						func_63();
						func_58();
					}
				}
				else
				{
					func_99(46, 1);
					func_63();
					func_110(0);
				}
			}
			break;
		
		case 3:
			if (func_37(Local_868.f_0))
			{
				if (!unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), Local_868.f_0, 0))
				{
					unk_0xB425E338F85508A5(unk_0x0FA8183DAD2B3203(), Local_868.f_0, -1);
				}
				else
				{
					func_109(Local_868.f_0, Local_827, 126.0705f, 0, 1);
					func_40(1, 1, 1);
					iLocal_684 = 1;
				}
			}
			break;
	}
}

int func_109(int iParam0, struct<3> Param1, float fParam4, bool bParam5, int iParam6)
{
	bool bVar0;
	float fVar1;
	
	bVar0 = false;
	if (func_10(iParam0))
	{
		if (bParam5 == 1)
		{
			fVar1 = 0f;
			bVar0 = unk_0xDF956C4106F1E9C5(Param1, &fVar1, 0, 0);
			if (bVar0)
			{
				Param1.f_2 = fVar1;
			}
		}
		unk_0xCB3446C6A91D1A78(iParam0, Param1, 1, 0, 0, iParam6);
		unk_0x5A2B7C446C0CF087(iParam0, fParam4);
		if (bParam5)
		{
			return bVar0;
		}
		return 1;
	}
	return 0;
}

void func_110(bool bParam0)
{
	func_111(iLocal_683);
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

void func_111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
	}
}

int func_112()
{
	if (func_103())
	{
		if ((func_102(74) || func_102(75)) && func_101())
		{
			return 1;
		}
	}
	return 0;
}

int func_113(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	float fVar0;
	
	if ((iParam5 == 1 || iParam5 == 2) || iParam5 == 3)
	{
		if (iParam6 == 0)
		{
			if (func_37(iParam0))
			{
				if (!unk_0xF0B9188ED2464C51(iParam0))
				{
					func_121(func_119(func_77()), iParam11);
				}
			}
			if (!unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), Param1, fParam12, fParam12, 2f, 0, 1, 2))
			{
				unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), Param1, fParam12, fParam12, 2f, 1, 1, 2);
				if (func_106(func_119(func_77()), 0, 0))
				{
					unk_0x38C6C3B6F4074898(func_119(func_77()));
				}
				*iParam7 = 1;
				func_117(iParam4, Param1, 1);
			}
			else
			{
				if (*iParam7)
				{
					fVar0 = (fParam12 / 2f);
					if (func_107(unk_0x0FA8183DAD2B3203(), Param1, fVar0))
					{
						*iParam7 = 0;
						func_116(1077936128, 1);
					}
				}
				func_7(iParam4);
			}
		}
	}
	else if (unk_0xC49563EAE7AACA6C(iParam0, Param1, fParam12, fParam12, 2f, 0, 1, 2))
	{
		if (*iParam9 == -1)
		{
			unk_0x54B5C3A13D3588F0(iParam0, 2);
			return 1;
		}
		if (!*iParam10)
		{
			if (func_106(func_119(func_77()), 0, 0))
			{
				unk_0x1C9DBC28A851F0A6();
			}
			*iParam9 = unk_0x9B35D07DCD0F0B43();
			*iParam10 = 1;
			unk_0x54B5C3A13D3588F0(iParam0, 2);
		}
		else if ((unk_0x9B35D07DCD0F0B43() - *iParam9) > 3000)
		{
			return 1;
		}
	}
	else
	{
		if (unk_0x53B8ABE899D7A6D5(iParam0) == 2)
		{
			unk_0x54B5C3A13D3588F0(iParam0, 1);
		}
		if (!*iParam8)
		{
			if (func_106(func_115(func_77(), 0), 0, 0))
			{
				unk_0x38C6C3B6F4074898(func_115(func_77(), 0));
			}
			if (!func_106(func_114(func_77()), 0, 0))
			{
				func_105(func_114(func_77()), 7500, 0);
				*iParam8 = 1;
			}
		}
		*iParam7 = 1;
	}
	return 0;
}

char* func_114(int iParam0)
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

char* func_115(int iParam0, bool bParam1)
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

int func_116(float fParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		return 1;
	}
	iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
	if (unk_0xD960230552BC4165(iVar0, 0))
	{
		if (unk_0x300C62F79A4441EB(iVar0, -1, 0) == unk_0x0FA8183DAD2B3203())
		{
			if (!unk_0xACA46879E999E35C(iVar0))
			{
				unk_0x784753B14715F27F(iVar0, fParam0, iParam1, 0);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0x8BCE526DCE6D7629(unk_0x0FA8183DAD2B3203()))
	{
		return 1;
	}
	if (unk_0xD960230552BC4165(iVar0, 0))
	{
		if (unk_0xACA46879E999E35C(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_117(int iParam0, struct<3> Param1, int iParam4)
{
	if (!unk_0x39A01A052D9B5FF0(*iParam0))
	{
		*iParam0 = func_118(Param1, 5, iParam4);
	}
}

int func_118(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = unk_0xACAD99314B51277E(Param0);
	unk_0x6089156CDC87FE4B(iVar0, iParam3);
	unk_0xBC0D06064C5B5413(iVar0, 1f);
	unk_0x925BD1075D119B45(iVar0, iParam4);
	return iVar0;
}

char* func_119(int iParam0)
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

void func_120(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, int iParam7)
{
	switch (*iParam4)
	{
		case 0:
			if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 0)
			{
				*iParam4 = 1;
			}
			break;
		
		case 1:
			func_7(iParam0);
			if ((iParam5 == 1 || iParam5 == 2) || iParam5 == 3)
			{
				unk_0x1C9DBC28A851F0A6();
				func_105("LOSE_WANTED", 7500, 0);
				*iParam4 = 2;
			}
			break;
		
		case 2:
			if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) == 0)
			{
				unk_0x1C9DBC28A851F0A6();
				if ((iParam5 == 1 || iParam5 == 2) || iParam5 == 3)
				{
					func_121(func_115(func_77(), 0), iParam6);
					func_117(iParam0, Param1, 1);
				}
				else if (iParam5 == 0 && !*iParam7)
				{
					func_105(func_114(func_77()), 7500, 0);
					*iParam7 = 1;
				}
				*iParam4 = 0;
			}
			break;
	}
}

void func_121(char* sParam0, int iParam1)
{
	if (!*iParam1)
	{
		func_105(sParam0, 7500, 0);
		*iParam1 = 1;
	}
}

int func_122(int iParam0, bool bParam1)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				bLocal_28 = false;
				func_40(1, 1, 1);
			}
			else if (func_149(1, Local_824, 0))
			{
				if (func_148())
				{
					func_147(33);
					unk_0x0A43D5D11052D038(joaat("trash"), 1);
					unk_0x0A43D5D11052D038(joaat("towtruck"), 1);
					unk_0x0A43D5D11052D038(joaat("s_m_y_garbage"), 1);
					iLocal_683 = 2;
					func_7(&iLocal_821);
					func_145(&uLocal_671, 0, 0);
					func_144(190, 1244.338f, -339.3197f, 68.0823f);
					func_142();
					unk_0x8EB1E7594B0F5A9C("DRIVE", 0);
					unk_0x8EB1E7594B0F5A9C("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0x8EB1E7594B0F5A9C("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0x8EB1E7594B0F5A9C("WORLD_VEHICLE_DRIVE_SOLO", 0);
					return 1;
				}
				else if (((func_149(2, Local_868.f_1, Local_868.f_4) && func_149(3, Local_840.f_1, Local_840.f_4)) && func_149(4, Local_854.f_1, Local_854.f_4)) && func_141(0))
				{
					func_142();
					func_147(33);
					if (func_341(Local_840.f_0))
					{
						func_140(Local_840.f_0);
					}
					if (func_341(Local_854.f_0))
					{
						func_139(Local_854.f_0);
					}
					func_138(Local_868.f_0);
					if (func_341(Local_854.f_0) && func_341(Local_840.f_0))
					{
						func_127(iLocal_830, 1, 0, 1);
					}
					unk_0x0A43D5D11052D038(joaat("trash"), 1);
					unk_0x0A43D5D11052D038(joaat("towtruck"), 1);
					unk_0x0A43D5D11052D038(joaat("s_m_y_garbage"), 1);
					if (unk_0xA184209820DF81B4(Local_868.f_0) != 0)
					{
						iVar0 = unk_0xA184209820DF81B4(Local_868.f_0);
						unk_0xDD4C465128988283(1);
						func_7(&iVar0);
						unk_0xDD4C465128988283(0);
					}
					func_125(&iLocal_821, Local_868.f_0, 1);
					func_144(190, 1244.338f, -339.3197f, 68.0823f);
					unk_0x8EB1E7594B0F5A9C("DRIVE", 0);
					unk_0x8EB1E7594B0F5A9C("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0x8EB1E7594B0F5A9C("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0x8EB1E7594B0F5A9C("WORLD_VEHICLE_DRIVE_SOLO", 0);
					return 1;
				}
			}
			break;
		
		case 1:
			if (bParam1)
			{
				if ((func_149(2, Local_868.f_1, Local_868.f_4) && func_149(3, Local_840.f_1, Local_840.f_4)) && func_149(4, Local_854.f_1, Local_854.f_4))
				{
					func_124(unk_0x0FA8183DAD2B3203(), 1197.861f, -353.011f, 68.0929f, 278.9647f);
					func_123();
					bLocal_28 = false;
					unk_0x8EB1E7594B0F5A9C("DRIVE", 0);
					unk_0x8EB1E7594B0F5A9C("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0x8EB1E7594B0F5A9C("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0x8EB1E7594B0F5A9C("WORLD_VEHICLE_DRIVE_SOLO", 0);
					func_40(1, 1, 1);
				}
			}
			else
			{
				func_142();
				return 1;
			}
			break;
		
		case 2:
			if (bParam1)
			{
				if (func_149(2, Local_868.f_1, Local_868.f_4))
				{
					func_123();
					func_142();
					unk_0xB425E338F85508A5(unk_0x0FA8183DAD2B3203(), Local_868.f_0, -1);
					bLocal_28 = false;
					func_40(1, 1, 1);
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
				if (func_149(2, Local_827, Local_868.f_4))
				{
					func_123();
					unk_0xB425E338F85508A5(unk_0x0FA8183DAD2B3203(), Local_868.f_0, -1);
					func_142();
					bLocal_28 = false;
					func_40(1, 1, 1);
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

void func_123()
{
	if (iLocal_683 == 1)
	{
		func_140(Local_840.f_0);
		func_139(Local_854.f_0);
		func_138(Local_868.f_0);
		func_127(iLocal_830, 1, 0, 1);
	}
	iLocal_877 = 0;
	iLocal_838 = 0;
	iLocal_839 = 0;
	iLocal_834 = 0;
	iLocal_835 = 0;
	iLocal_836 = 0;
}

void func_124(int iParam0, struct<3> Param1, float fParam4)
{
	if (func_341(uParam0))
	{
		unk_0xC6612209077465DD(uParam0);
	}
	func_109(iParam0, Param1, fParam4, 0, 1);
}

void func_125(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0x39A01A052D9B5FF0(*iParam0))
	{
		*iParam0 = func_126(iParam1, iParam2, 5);
	}
}

int func_126(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_10(uParam0))
	{
		iVar0 = unk_0xADA89D4F1A58FCBA(uParam0);
		unk_0x14C335BB2F079BD4(iVar0, uParam1);
		unk_0x6089156CDC87FE4B(iVar0, iParam2);
		unk_0xBC0D06064C5B5413(iVar0, 1f);
	}
	return iVar0;
}

void func_127(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_129();
	Local_111[1 /*11*/].f_7 = 3;
	Local_111[1 /*11*/].f_5 = 0;
	Local_111[1 /*11*/].f_10 = 1;
	Local_111[1 /*11*/].f_2 = 1500;
	Local_111[1 /*11*/].f_3 = 500;
	Local_111[0 /*11*/].f_5 = 0;
	Local_111[0 /*11*/].f_10 = 0;
	Local_111[0 /*11*/].f_2 = 1000;
	Local_111[0 /*11*/].f_3 = 100;
	unk_0x8CBD7ED64E4A522F("Enemies", &uLocal_80);
	unk_0xDB889DCC8B0139E6(Local_111[0 /*11*/], uLocal_80);
	unk_0xDB889DCC8B0139E6(Local_111[1 /*11*/], uLocal_80);
	unk_0xD35ECDBE422E2361(Local_111[0 /*11*/], 1, 0);
	unk_0xD35ECDBE422E2361(Local_111[1 /*11*/], 1, 0);
	func_128(1.9f, 1.9f, 8f, 0f, 0f, 0f);
}

void func_128(struct<3> Param0, struct<3> Param3)
{
	Local_82.f_8 = { Param0 };
	Local_82.f_11 = { Param3 };
	Local_82.f_1 = 4;
}

void func_129()
{
	if (!unk_0x95ED3BD0F52D542A(Local_111[0 /*11*/], iLocal_109, 0))
	{
		unk_0xD06C31EF9A42C2B4(Local_111[0 /*11*/], unk_0xC12F91346EA13947(iLocal_109, func_137(1)), 1f, -1, 1048576000, 0, 1193033728);
		Local_111[0 /*11*/].f_7 = 1;
	}
	else
	{
		func_130(1);
	}
}

void func_130(bool bParam0)
{
	if (!unk_0xBAA38708D7439CA7(iLocal_109, 0, 0))
	{
		func_131(bParam0);
		if (iLocal_661 != (iLocal_81 - 1))
		{
			if (iLocal_661 == 4)
			{
				unk_0xA9E735418EEFEEEF(Local_111[0 /*11*/], iLocal_109, Local_134[iLocal_661 /*25*/], 15f, 2883755, Local_134[iLocal_661 /*25*/].f_6);
			}
			else
			{
				unk_0xD67C82BBC9A488A6(Local_111[0 /*11*/], iLocal_109, Local_134[iLocal_661 /*25*/], 15f, 0, 0, 2883755, Local_134[iLocal_661 /*25*/].f_6, Local_134[iLocal_661 /*25*/].f_7);
			}
			Local_111[0 /*11*/].f_8 = Local_111[0 /*11*/].f_7;
			Local_111[0 /*11*/].f_7 = 4;
		}
		else
		{
			unk_0x24BD9CEBA5D40F00(Local_111[0 /*11*/], iLocal_109, 15f, 786599);
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

void func_131(bool bParam0)
{
	if (iLocal_661 != -1)
	{
		if (!func_136(Local_134[iLocal_661 /*25*/].f_11) && !func_136(Local_134[iLocal_661 /*25*/].f_14))
		{
			unk_0x80BCF42B42433CEB(Local_134[iLocal_661 /*25*/].f_11 - Local_134[iLocal_661 /*25*/].f_14, Local_134[iLocal_661 /*25*/].f_11 + Local_134[iLocal_661 /*25*/].f_14, 1, 1);
		}
	}
	if (!bParam0)
	{
		func_134();
	}
	else
	{
		iLocal_661 = func_132();
	}
	if (iLocal_661 != -1)
	{
		if (!func_136(Local_134[iLocal_661 /*25*/].f_11) && !func_136(Local_134[iLocal_661 /*25*/].f_14))
		{
			unk_0x80BCF42B42433CEB(Local_134[iLocal_661 /*25*/].f_11 - Local_134[iLocal_661 /*25*/].f_14, Local_134[iLocal_661 /*25*/].f_11 + Local_134[iLocal_661 /*25*/].f_14, 0, 1);
		}
	}
}

int func_132()
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
	
	if (func_37(iLocal_109))
	{
		Var1 = { unk_0xACE5E491FC1B0D37(iLocal_109, 1) };
		iVar4 = 0;
		while (iVar4 <= (iLocal_81 - 1))
		{
			fVar28 = unk_0xD34AF93E9BCF12F0(Var1, Local_134[iVar4 /*25*/], 1);
			if (!func_136(Local_134[iVar4 /*25*/]) && fVar28 > 25f)
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
		fVar30 = func_133(Local_134[iVar0 /*25*/] - Var1, unk_0xDF29CF810DF94B60(iLocal_109));
		iVar5 = iVar0;
		iVar31 = 0;
		while (fVar30 < 0f && iVar31 < 40)
		{
			iVar5++;
			if (iVar5 >= 21)
			{
				iVar5 = 0;
			}
			Var1 = { unk_0xACE5E491FC1B0D37(iLocal_109, 1) };
			fVar30 = func_133(Local_134[iVar5 /*25*/] - Var1, unk_0xDF29CF810DF94B60(iLocal_109));
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

float func_133(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

void func_134()
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
				iLocal_661 = func_135();
			}
			else
			{
				iLocal_661 = -1;
				return;
			}
		}
		else
		{
			iLocal_661 = func_135();
		}
	}
}

int func_135()
{
	int iVar0;
	
	iVar0 = unk_0xBAC643F143880136(0, (iLocal_81 - 1));
	while (Local_134[iVar0 /*25*/].f_18)
	{
		iVar0 = unk_0xBAC643F143880136(0, (iLocal_81 - 1));
	}
	return iVar0;
}

int func_136(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_137(bool bParam0)
{
	struct<3> Var0;
	var uVar3;
	
	if (!bParam0)
	{
		uVar3 = unk_0xCC77DF450B31521D(iLocal_109, "wheel_rf");
	}
	else
	{
		uVar3 = unk_0xCC77DF450B31521D(iLocal_109, "wheel_lf");
	}
	Var0 = { unk_0x0DBA551C06A14723(iLocal_109, uVar3) };
	Var0 = { unk_0x28B05FCF3D725FED(iLocal_109, Var0) };
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

void func_138(int iParam0)
{
	if (func_37(iParam0))
	{
		iLocal_109 = iParam0;
	}
}

void func_139(var uParam0)
{
	if (func_341(uParam0))
	{
		Local_111[1 /*11*/] = uParam0;
	}
}

void func_140(var uParam0)
{
	if (func_341(uParam0))
	{
		Local_111[0 /*11*/] = uParam0;
	}
}

int func_141(bool bParam0)
{
	unk_0x36B659209EBDD366("missfbi4prepp1");
	unk_0xF6DFA802A541589A("missfbi4prepp1_garbageman");
	if (bParam0)
	{
		while (!unk_0xB25A0D192C6A0A5B("missfbi4prepp1") && !unk_0x477937527657D0EE("missfbi4prepp1_garbageman"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		return 1;
	}
	else if (unk_0xB25A0D192C6A0A5B("missfbi4prepp1") && unk_0x477937527657D0EE("missfbi4prepp1_garbageman"))
	{
		return 1;
	}
	return 0;
}

void func_142()
{
	func_143(&uLocal_879);
}

void func_143(var uParam0)
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
	func_98(uParam0, iVar0, unk_0x0FA8183DAD2B3203(), sVar1, 0, 1);
}

void func_144(int iParam0, struct<3> Param1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if ((Param1.f_0 == Global_31111[iVar0 /*23*/][0 /*3*/] && Param1.f_1 == Global_31111[iVar0 /*23*/][0 /*3*/].f_1) && Param1.f_2 == Global_31111[iVar0 /*23*/][0 /*3*/].f_2)
	{
		return;
	}
	Global_31108 = 1;
	unk_0xA1E7A40E1F56E511(&(Global_31111[iVar0 /*23*/].f_11), 18);
	Global_31111[iVar0 /*23*/][0 /*3*/] = { Param1 };
	Global_37161 = 1;
}

void func_145(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x393E9918BC37548A())
	{
		if (unk_0xA2BC31158C8CEFD2(Global_2531497.f_4591, 26))
		{
			return;
		}
	}
	if (unk_0xE5409F09171D0BEE())
	{
		unk_0xAB681892AAC7844A(iParam2);
		unk_0xF530F03252D7AEE0("FocusIn");
		unk_0x8E3496DF5BF7F24D("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x3E5A3FD805488EB9("FocusOut", 0, 0);
			unk_0x9964F5BBD9415AB7(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x538F8D7D228037B6(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x79FCE4565761C974(sVar0))
	{
		if (!unk_0x393E9918BC37548A())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x79FCE4565761C974(uParam0->f_3))
	{
		if (func_146(uParam0->f_3))
		{
			unk_0x0D23E3918F7AF11B(1);
		}
	}
	if (!unk_0x79FCE4565761C974(sVar0))
	{
		if (func_146(sVar0))
		{
			unk_0x0D23E3918F7AF11B(1);
		}
	}
}

bool func_146(char* sParam0)
{
	unk_0x1EF54B101C71E009(sParam0);
	return unk_0xFA637652FFB4E2E5(0);
}

void func_147(int iParam0)
{
	if (Global_95621 != -1)
	{
		if (iParam0 == Global_95621)
		{
			Global_95625 = 1;
			return;
		}
	}
}

int func_148()
{
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (unk_0x759DEE4D113EC07E(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0), joaat("trash")))
		{
			unk_0xE5C667CF3B4642D2(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0), 1, 0);
			iLocal_874 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
			if (func_37(iLocal_874))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_149(int iParam0, struct<3> Param1, float fParam4)
{
	switch (iParam0)
	{
		case 0:
			if (func_154(Param1, Local_824, 1056964608, 0) && fParam4 == 0f)
			{
				return 1;
			}
			break;
		
		case 1:
			unk_0x9F815D4FA0C47F97(sLocal_819, 0);
			if (unk_0xA3D567B14856EDE1(0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_37(Global_95196[0]))
			{
				unk_0xE5C667CF3B4642D2(Global_95196[0], 1, 1);
				Local_868.f_0 = Global_95196[0];
				if (func_37(Local_868.f_0))
				{
					func_36(Local_868.f_0, 0);
					unk_0x4BA8ED9D4B9825B8(Local_868.f_0, 1);
					unk_0x9D3FE4786B8925D2(Local_868.f_0, 1);
					return 1;
				}
			}
			else if (func_153(&Local_868, Local_868.f_5, Local_868.f_1, Local_868.f_4, 1))
			{
				func_36(Local_868.f_0, 0);
				unk_0x4BA8ED9D4B9825B8(Local_868.f_0, 1);
				unk_0x9D3FE4786B8925D2(Local_868.f_0, 1);
				return 1;
			}
			break;
		
		case 3:
			if (unk_0xD4B321D9096B01FC(Global_95196.f_9[0]))
			{
				if (!unk_0xFBEFCFA19C9FF74E(Global_95196.f_9[0], 1))
				{
					unk_0xE5C667CF3B4642D2(Global_95196.f_9[0], 1, 1);
					Local_840.f_0 = Global_95196.f_9[0];
					if (func_341(Local_840.f_0))
					{
						unk_0xCC94EE23853F38E4(Local_840.f_0, true);
						unk_0x1DB66BD2267055C0(Local_840.f_0, 170, 0);
						unk_0x3A6FD57A8EC62253(Local_840.f_0, 65536, 1);
						unk_0xDEB0AA30ABFDCF48(Local_840.f_0, 50, 1);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_150(&Local_840, Local_840.f_5, Local_840.f_1, Local_840.f_4, 1, 0, 1, 1))
			{
				if (func_37(Local_868.f_0))
				{
					unk_0xB425E338F85508A5(Local_840.f_0, Local_868.f_0, -1);
					unk_0xCC94EE23853F38E4(Local_840.f_0, true);
					unk_0x1DB66BD2267055C0(Local_840.f_0, 170, 0);
					unk_0x3A6FD57A8EC62253(Local_840.f_0, 65536, 1);
					unk_0xDEB0AA30ABFDCF48(Local_840.f_0, 50, 1);
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0xD4B321D9096B01FC(Global_95196.f_9[1]))
			{
				if (!unk_0xFBEFCFA19C9FF74E(Global_95196.f_9[1], 1))
				{
					unk_0xE5C667CF3B4642D2(Global_95196.f_9[1], 1, 1);
					Local_854.f_0 = Global_95196.f_9[1];
					if (func_341(Local_854.f_0))
					{
						unk_0x1DB66BD2267055C0(Local_854.f_0, 170, 0);
						unk_0x3A6FD57A8EC62253(Local_854.f_0, 65536, 1);
						unk_0xDEB0AA30ABFDCF48(Local_854.f_0, 50, 1);
						unk_0xCC94EE23853F38E4(Local_854.f_0, true);
						unk_0xDA778D908FD69EEE(Local_854.f_0, 1, 1);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_150(&Local_854, Local_854.f_5, Local_854.f_1, Local_854.f_4, 1, 0, 1, 1))
			{
				if (func_37(Local_868.f_0))
				{
					unk_0xB425E338F85508A5(Local_854.f_0, Local_868.f_0, 0);
					unk_0x1DB66BD2267055C0(Local_854.f_0, 170, 0);
					unk_0x3A6FD57A8EC62253(Local_854.f_0, 65536, 1);
					unk_0xDEB0AA30ABFDCF48(Local_854.f_0, 50, 1);
					unk_0xCC94EE23853F38E4(Local_854.f_0, true);
					unk_0xDA778D908FD69EEE(Local_854.f_0, 1, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_150(var uParam0, var uParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!unk_0xD4B321D9096B01FC(*uParam0))
	{
		if (func_152(uParam1, "Loading", 0))
		{
			*uParam0 = unk_0xB983F26E7AFB47BF(26, uParam1, Param2, uParam5, 1, 1);
			if (func_341(*uParam0))
			{
				if (bParam7)
				{
					unk_0x860A5CC30A0EF207(*uParam0, 1);
				}
				if (bParam8)
				{
					unk_0xCC94EE23853F38E4(*uParam0, bParam8);
				}
				if (!bParam9)
				{
					unk_0x6E712A176E3EEFA8(*uParam0, bParam9);
				}
				if (bParam6)
				{
					func_151(uParam1, 1);
				}
				return 1;
			}
		}
	}
	else if (func_341(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_151(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (unk_0x6DF9C43E3CC645BC(uParam0))
		{
			unk_0xE0AC40EF164A2569(uParam0);
		}
	}
	else
	{
		unk_0xE0AC40EF164A2569(uParam0);
	}
}

int func_152(var uParam0, char* sParam1, int iParam2)
{
	unk_0x6BB2B1818CAE531E(uParam0);
	if (!unk_0x9591DE0F00127F2A(sParam1) && iParam2 != -1)
	{
	}
	if (unk_0x6DF9C43E3CC645BC(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_153(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (!unk_0xD4B321D9096B01FC(*uParam0))
	{
		if (func_152(iParam1, "Loading", 0))
		{
			*uParam0 = unk_0x847817A65E16621A(iParam1, Param2, fParam5, 1, 1, 0);
			if (unk_0xD4B321D9096B01FC(*uParam0))
			{
				if (!unk_0x00123AB82C5FAC28(*uParam0))
				{
					unk_0xE5C667CF3B4642D2(*uParam0, 1, 0);
				}
				unk_0x1ECAE5FB4DE78CF8(*uParam0, 1084227584);
				if (bParam6)
				{
					func_151(iParam1, 1);
				}
				return 1;
			}
		}
	}
	else
	{
		if (func_37(*uParam0))
		{
			unk_0xCB3446C6A91D1A78(*uParam0, Param2, 1, 0, 0, 1);
			unk_0x5A2B7C446C0CF087(*uParam0, fParam5);
		}
		if (!unk_0x00123AB82C5FAC28(*uParam0))
		{
			unk_0xE5C667CF3B4642D2(*uParam0, 1, 0);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_154(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x01CBD71E072E9F33((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x01CBD71E072E9F33((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x01CBD71E072E9F33((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x01CBD71E072E9F33((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x01CBD71E072E9F33((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_155()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		func_156(&(Local_111[iVar0 /*11*/]), iVar0);
		iVar0++;
	}
}

void func_156(var uParam0, int iParam1)
{
	if (func_341(*uParam0))
	{
		func_202(uParam0, iParam1, 0);
		if (unk_0xF6FD8019402CF03B(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 3))
		{
			if (unk_0x79825B919DB9FB1C(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man") >= 0.172f)
			{
				if (func_10(Local_134[iLocal_661 /*25*/].f_17) && unk_0xCA7317DE7E0F89E9(Local_134[iLocal_661 /*25*/].f_17))
				{
					unk_0x2AF3CF45011CC65F(*uParam0, 1048576000);
					unk_0xB7F42BA261BF985E(*uParam0);
					if (iLocal_661 <= 20 && iLocal_661 != -1)
					{
						Local_134[iLocal_661 /*25*/].f_18 = 1;
						uParam0->f_9 = 0;
					}
					unk_0x363E2170E626A00A(Local_134[iLocal_661 /*25*/].f_17, 1, 0);
					unk_0xEF4C0B3A167109AB(Local_134[iLocal_661 /*25*/].f_17, 1, unk_0xDF29CF810DF94B60(*uParam0), 0, 1, 1, 0);
				}
			}
		}
		switch (uParam0->f_5)
		{
			case 0:
				if (iParam1 == 0)
				{
					func_199();
					func_198(uParam0);
				}
				func_185(uParam0);
				break;
			
			case 1:
				func_158(uParam0);
				break;
		}
	}
	else
	{
		if (func_10(Local_134[iLocal_661 /*25*/].f_17))
		{
			if (unk_0xCA7317DE7E0F89E9(Local_134[iLocal_661 /*25*/].f_17))
			{
				unk_0x363E2170E626A00A(Local_134[iLocal_661 /*25*/].f_17, 1, 0);
				unk_0xEF4C0B3A167109AB(Local_134[iLocal_661 /*25*/].f_17, 1, unk_0xDF29CF810DF94B60(*uParam0), 0, 1, 1, 0);
			}
		}
		func_7(&(uParam0->f_4));
		if (unk_0xD4B321D9096B01FC(*uParam0))
		{
			if (!func_157(unk_0x0FA8183DAD2B3203(), *uParam0, 150f, 1) && !bLocal_665)
			{
				func_5(uParam0, 1, 0, 1);
			}
		}
	}
}

bool func_157(int iParam0, int iParam1, float fParam2, int iParam3)
{
	return unk_0xB7A628320EFF8E47(unk_0xACE5E491FC1B0D37(iParam0, iParam3), unk_0xACE5E491FC1B0D37(iParam1, iParam3)) <= (fParam2 * fParam2);
}

void func_158(var uParam0)
{
	var uVar0;
	var uVar1;
	
	switch (uParam0->f_6)
	{
		case 5:
			if ((unk_0x9B35D07DCD0F0B43() - uParam0->f_1) > uParam0->f_3)
			{
				if (func_184(*uParam0, 780511057))
				{
					unk_0xC6612209077465DD(*uParam0);
				}
				unk_0xF0E9590A910B74BE(*uParam0, unk_0x0FA8183DAD2B3203(), 30f, -1, 0, 0);
				uParam0->f_6 = 6;
				uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
			}
			break;
		
		case 21:
			if (unk_0x9DCEF22792B5C15C(unk_0x0FA8183DAD2B3203(), 6))
			{
				if (func_177(*uParam0, unk_0x0FA8183DAD2B3203(), 1126825984, 1, 250, 7))
				{
					func_176(uParam0, 1);
					return;
				}
			}
			if ((unk_0x9B35D07DCD0F0B43() - uParam0->f_1) > uParam0->f_3)
			{
				if (!unk_0x5294582CE404D3F4(*uParam0, 0))
				{
					unk_0xDE9B79772DA7CA7A(*uParam0, unk_0x0FA8183DAD2B3203(), 8f, -1f, 10f, 0);
				}
				else
				{
					unk_0xA12E1659DEF57244(&uVar0);
					unk_0x2DCF88AC859255F3(0, 0, 0);
					unk_0xF827FEB33E873F71(0, unk_0x0FA8183DAD2B3203(), 0, 16);
					unk_0x15A7B753872B3CE3(uVar0);
					unk_0xC544A8E1032AC1CF(*uParam0, uVar0);
					unk_0x78829A259A6975CD(&uVar0);
				}
				if (!unk_0x39A01A052D9B5FF0(uParam0->f_4))
				{
					uParam0->f_4 = func_173(*uParam0, 1, 145);
				}
				uParam0->f_6 = 22;
				uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
			}
			break;
		
		case 10:
			if ((unk_0x9B35D07DCD0F0B43() - uParam0->f_1) > uParam0->f_3)
			{
				if (unk_0x5294582CE404D3F4(*uParam0, 0))
				{
					unk_0x70CBCB37A00F34A2(*uParam0, 120, 1);
					uParam0->f_6 = 12;
					uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
				}
				else if (!func_184(*uParam0, 474215631))
				{
					if (func_184(*uParam0, 780511057))
					{
						unk_0xC6612209077465DD(*uParam0);
					}
					unk_0x5D865B9E32556997(*uParam0, -1);
					uParam0->f_6 = 12;
					uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
				}
			}
			break;
		
		case 3:
			if ((unk_0x9B35D07DCD0F0B43() - uParam0->f_1) > uParam0->f_3)
			{
				unk_0xDD91C0502D7C4DFF(*uParam0, 1, 1);
				unk_0xF0E9590A910B74BE(*uParam0, unk_0x0FA8183DAD2B3203(), 500f, -1, 0, 1);
				uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
				uParam0->f_6 = 4;
				uParam0->f_5 = 1;
			}
			break;
		
		case 11:
			func_172(uParam0);
			if ((unk_0x9B35D07DCD0F0B43() - uParam0->f_1) > 5000)
			{
				if (!func_184(*uParam0, 713668775))
				{
					if (unk_0xD4B321D9096B01FC(Local_111[func_171(uParam0->f_10) /*11*/]))
					{
						unk_0xD06C31EF9A42C2B4(*uParam0, Local_667, 1f, -1, 2f, 0, 1193033728);
					}
				}
				uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
				uParam0->f_6 = 23;
				uParam0->f_5 = 1;
			}
			break;
		
		case 18:
			if (!func_184(*uParam0, -2017877118))
			{
				unk_0xA12E1659DEF57244(&uVar1);
				if (func_170(unk_0xACE5E491FC1B0D37(*uParam0, 1), unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1)) > 1.5f)
				{
					unk_0xD65F7D9CC109BCC8(0, unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), 0);
				}
				unk_0x40BF84B2C3F30631(0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				unk_0x15A7B753872B3CE3(uVar1);
				unk_0xC544A8E1032AC1CF(*uParam0, uVar1);
				unk_0x78829A259A6975CD(&uVar1);
				uParam0->f_5 = 1;
				uParam0->f_6 = 20;
				uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
			}
			break;
		
		case 19:
			func_172(uParam0);
			if (!func_184(*uParam0, -2017877118))
			{
				unk_0x40BF84B2C3F30631(*uParam0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				uParam0->f_5 = 1;
				uParam0->f_6 = 20;
				uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
			}
			break;
		
		case 1:
			if (!unk_0x95ED3BD0F52D542A(*uParam0, iLocal_109, 0))
			{
				func_168(uParam0);
			}
			break;
		
		case 2:
			if (!unk_0xA2DB82364F08360E(*uParam0) && (unk_0x9B35D07DCD0F0B43() - uParam0->f_1) > 3000)
			{
				func_168(uParam0);
			}
			break;
		
		case 4:
			if ((unk_0x9B35D07DCD0F0B43() - uParam0->f_1) > 8000)
			{
				unk_0xF0E9590A910B74BE(*uParam0, unk_0x0FA8183DAD2B3203(), 500f, -1, 0, 0);
				if (!iLocal_666)
				{
					if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) == 0)
					{
						unk_0x31EBACD75CD1F9EC(unk_0x7C7787D2D7139A85(), 2, 0);
						unk_0xF1E958D9BB4D1EF6(unk_0x7C7787D2D7139A85(), 0);
						iLocal_666 = 1;
					}
				}
				unk_0xDD91C0502D7C4DFF(*uParam0, 0, 1);
				uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
				uParam0->f_6 = 8;
			}
			else if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 1)
			{
				unk_0xDD91C0502D7C4DFF(*uParam0, 0, 1);
				uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
				uParam0->f_6 = 8;
			}
			break;
		
		case 6:
			if ((unk_0x9B35D07DCD0F0B43() - uParam0->f_1) > uParam0->f_2)
			{
				if (!func_157(*uParam0, unk_0x0FA8183DAD2B3203(), 15f, 1))
				{
					func_7(&(uParam0->f_4));
					uParam0->f_6 = 7;
					uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
				}
			}
			break;
		
		case 7:
			if (unk_0x95ED3BD0F52D542A(*uParam0, iLocal_109, 1))
			{
				if (uParam0->f_6 != 4 && uParam0->f_6 != 1)
				{
					if (func_166())
					{
						if (func_341(*uParam0))
						{
							unk_0xC6612209077465DD(*uParam0);
							unk_0xF0E9590A910B74BE(*uParam0, unk_0x0FA8183DAD2B3203(), 500f, -1, 0, 1);
							uParam0->f_6 = 1;
						}
					}
				}
				if (!func_157(*uParam0, unk_0x0FA8183DAD2B3203(), 120f, 1))
				{
					func_5(uParam0, 1, 0, 1);
				}
			}
			else
			{
				func_168(uParam0);
			}
			break;
		
		case 8:
			if (!func_157(*uParam0, unk_0x0FA8183DAD2B3203(), 120f, 1))
			{
				func_5(uParam0, 1, 0, 1);
			}
			break;
		
		case 9:
			if (unk_0xCFE0D93B7A6809C1(*uParam0))
			{
				func_176(uParam0, 1);
				return;
			}
			if ((unk_0x9B35D07DCD0F0B43() - uParam0->f_1) > uParam0->f_2 || !func_184(*uParam0, 2104565373))
			{
				func_163(uParam0);
			}
			break;
		
		case 12:
			if ((unk_0x9B35D07DCD0F0B43() - uParam0->f_1) >= uParam0->f_2)
			{
				unk_0xF0E9590A910B74BE(*uParam0, unk_0x0FA8183DAD2B3203(), 500f, -1, 0, 1);
				uParam0->f_6 = 5;
			}
			else
			{
				unk_0x70CBCB37A00F34A2(*uParam0, 120, 1);
			}
			break;
		
		case 13:
			if ((unk_0x9B35D07DCD0F0B43() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_157(*uParam0, unk_0x0FA8183DAD2B3203(), 15f, 1))
				{
					func_163(uParam0);
					uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
				}
				else if (func_177(Local_111[func_171(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_176(uParam0, 0);
				}
				else
				{
					func_162(uParam0);
					uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
				}
			}
			break;
		
		case 15:
			if ((unk_0x9B35D07DCD0F0B43() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_157(*uParam0, unk_0x0FA8183DAD2B3203(), 15f, 1))
				{
					func_163(uParam0);
					uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
				}
				else if (func_177(Local_111[func_171(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_176(uParam0, 0);
				}
				else
				{
					func_162(uParam0);
					uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
				}
			}
			break;
		
		case 16:
			if (unk_0xCFE0D93B7A6809C1(*uParam0))
			{
				func_176(uParam0, 1);
				return;
			}
			if ((unk_0x9B35D07DCD0F0B43() - iLocal_670) >= 9000)
			{
				if (!func_161(uParam0))
				{
					func_163(uParam0);
					uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
				}
				else
				{
					uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
					uParam0->f_5 = 1;
					uParam0->f_6 = 16;
				}
			}
			else if ((unk_0x9B35D07DCD0F0B43() - iLocal_670) >= 5000 && (unk_0x9B35D07DCD0F0B43() - iLocal_670) <= 5500)
			{
				if (unk_0x5294582CE404D3F4(*uParam0, 0))
				{
					if (unk_0xC1DE23AF7092A700(*uParam0))
					{
						unk_0x581A042E32B3FC32(*uParam0);
					}
				}
			}
			break;
		
		case 14:
			if ((unk_0x9B35D07DCD0F0B43() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_157(*uParam0, unk_0x0FA8183DAD2B3203(), 15f, 1))
				{
					func_163(uParam0);
					uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
				}
				else if (func_177(Local_111[func_171(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_176(uParam0, 0);
				}
				else
				{
					func_162(uParam0);
					uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
				}
			}
			break;
		
		case 17:
			if ((unk_0x9B35D07DCD0F0B43() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_157(*uParam0, unk_0x0FA8183DAD2B3203(), 15f, 1))
				{
					func_163(uParam0);
					uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
				}
				else if (func_177(Local_111[func_171(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_176(uParam0, 0);
				}
				else
				{
					func_162(uParam0);
					uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
				}
			}
			break;
		
		case 20:
			if (unk_0x9DCEF22792B5C15C(unk_0x0FA8183DAD2B3203(), 6) && !unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
			{
				if (func_177(*uParam0, unk_0x0FA8183DAD2B3203(), 1126825984, 1, 250, 7))
				{
					func_176(uParam0, 1);
					return;
				}
			}
			if ((unk_0x9B35D07DCD0F0B43() - uParam0->f_1) >= 6000)
			{
				if (!unk_0x42A24CB7B8A08E11(*uParam0, unk_0xC12F91346EA13947(iLocal_109, 5f, 0f, -2f), unk_0xACE5E491FC1B0D37(iLocal_109, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
				{
					func_163(uParam0);
				}
				else
				{
					func_168(uParam0);
					func_168(&(Local_111[func_171(uParam0->f_10) /*11*/]));
				}
				uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
			}
			func_172(uParam0);
			break;
		
		case 22:
			if (unk_0x9DCEF22792B5C15C(unk_0x0FA8183DAD2B3203(), 6))
			{
				if (func_177(*uParam0, unk_0x0FA8183DAD2B3203(), 1126825984, 1, 250, 7))
				{
					func_176(uParam0, 1);
					return;
				}
			}
			if ((unk_0x9B35D07DCD0F0B43() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_157(*uParam0, unk_0x0FA8183DAD2B3203(), 15f, 1))
				{
					func_163(uParam0);
					uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
					return;
				}
				else
				{
					func_162(uParam0);
					uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
				}
			}
			break;
		
		case 23:
			func_202(uParam0, uParam0->f_10, 1);
			func_172(uParam0);
			if (func_107(*uParam0, Local_667, 2f))
			{
				if (func_159(*uParam0, Local_667, 1126825984, 0))
				{
					unk_0xC6612209077465DD(*uParam0);
					uParam0->f_6 = 19;
					uParam0->f_5 = 1;
					uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
				}
			}
			break;
	}
}

int func_159(int iParam0, struct<3> Param1, float fParam4, int iParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_160(Param1 - unk_0xACE5E491FC1B0D37(iParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0xDF29CF810DF94B60(iParam0) };
	}
	else
	{
		Var3 = { func_160(unk_0x0E516C24C87F5D0C(iParam0, 31086, 0f, 5f, 0f) - unk_0x0E516C24C87F5D0C(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_133(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam4 / 2f)))
	{
		return 0;
	}
	return 1;
}

Vector3 func_160(struct<3> Param0)
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

int func_161(var uParam0)
{
	if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), unk_0xC12F91346EA13947(iLocal_109, 0f, 10f, -2f), unk_0xC12F91346EA13947(iLocal_109, 0f, 3f, 2f), 5f, 0, 1, 0) && unk_0x8BCE526DCE6D7629(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_162(var uParam0)
{
	int iVar0;
	
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
		if (func_37(iVar0))
		{
			if (!unk_0x6C7A7AC0F0B0B1C0(*uParam0, iVar0, -1, 0, 0))
			{
				uParam0->f_6 = 18;
				uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
			}
		}
	}
}

void func_163(var uParam0)
{
	unk_0x9B54A3CCAAB4F5FB(2, uLocal_80, joaat("player"));
	switch (uParam0->f_8)
	{
		case 4:
			break;
		
		case 10:
			break;
		
		case 8:
			func_129();
			break;
		
		case 3:
			if (!func_184(*uParam0, 242628503))
			{
				if (iLocal_661 <= 20 && iLocal_661 != -1)
				{
					Local_134[iLocal_661 /*25*/].f_18 = 1;
				}
				if (!unk_0x95ED3BD0F52D542A(*uParam0, iLocal_109, 0))
				{
					if (uParam0->f_10 == 0)
					{
						unk_0xD06C31EF9A42C2B4(*uParam0, unk_0xC12F91346EA13947(iLocal_109, func_137(1)), 1f, -1, 1048576000, 0, 1193033728);
						uParam0->f_7 = 1;
					}
					else
					{
						unk_0xD06C31EF9A42C2B4(*uParam0, unk_0xC12F91346EA13947(iLocal_109, func_137(0)), 1f, -1, 1048576000, 0, 1193033728);
						uParam0->f_7 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x95ED3BD0F52D542A(*uParam0, iLocal_109, 0))
			{
				if (uParam0->f_10 == 0)
				{
					unk_0xD06C31EF9A42C2B4(*uParam0, unk_0xC12F91346EA13947(iLocal_109, func_137(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					unk_0xD06C31EF9A42C2B4(*uParam0, unk_0xC12F91346EA13947(iLocal_109, func_137(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			break;
		
		case 9:
			if (!Local_134[iLocal_661 /*25*/].f_18)
			{
				if (uParam0->f_9 == 1)
				{
					func_164(uParam0);
				}
				else if (uParam0->f_10 == 0)
				{
					unk_0xD06C31EF9A42C2B4(*uParam0, unk_0xC12F91346EA13947(iLocal_109, func_137(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					unk_0xD06C31EF9A42C2B4(*uParam0, unk_0xC12F91346EA13947(iLocal_109, func_137(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			else if (!unk_0x95ED3BD0F52D542A(*uParam0, iLocal_109, 0))
			{
				if (uParam0->f_10 == 0)
				{
					unk_0xD06C31EF9A42C2B4(*uParam0, unk_0xC12F91346EA13947(iLocal_109, func_137(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					unk_0xD06C31EF9A42C2B4(*uParam0, unk_0xC12F91346EA13947(iLocal_109, func_137(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			break;
		
		default:
			break;
	}
	uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
	uParam0->f_5 = 0;
}

void func_164(var uParam0)
{
	if (!func_184(*uParam0, -71340211))
	{
		if (Local_134[iLocal_661 /*25*/].f_23 != 0)
		{
			if (func_10(Local_134[iLocal_661 /*25*/].f_17))
			{
				unk_0xB6F4E45198AAFC12(*uParam0, Local_134[iLocal_661 /*25*/].f_17, -1, 0f, 180f, 1f, 0);
			}
		}
		else
		{
			unk_0xD06C31EF9A42C2B4(*uParam0, Local_134[iLocal_661 /*25*/].f_19, 1f, 20000, -1f, 0, func_165(Local_134[iLocal_661 /*25*/].f_19, unk_0xACE5E491FC1B0D37(*uParam0, 1), 1));
		}
		if (func_37(iLocal_109))
		{
			unk_0x6A99D1F228E18F5B(iLocal_109, 5, 0, 0);
		}
		uParam0->f_8 = uParam0->f_7;
		uParam0->f_7 = 9;
		uParam0->f_9 = 1;
	}
}

float func_165(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3.f_0 - Param0.f_0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = unk_0x68862EAA0B66897C(fVar1, fVar2);
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

int func_166()
{
	if (func_37(iLocal_109) && func_341(unk_0x0FA8183DAD2B3203()))
	{
		if (unk_0x3656B691E303FDE0(iLocal_109, unk_0x0FA8183DAD2B3203(), 1))
		{
			unk_0x7FF38BFB318C1A86(iLocal_109);
			if (func_167() || unk_0x35D31BEBAFD53DE6(iLocal_109) < 851)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_167()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (unk_0x82C6A64BFC7E5440(iLocal_109, iVar0, 0))
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

void func_168(var uParam0)
{
	if (uParam0->f_6 != 3 && uParam0->f_6 != 4)
	{
		func_169(uParam0);
		uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
		uParam0->f_6 = 3;
		uParam0->f_5 = 1;
	}
}

void func_169(var uParam0)
{
	if (uParam0->f_7 == 9)
	{
		if (uParam0->f_9 >= 2)
		{
			if (!unk_0x2BF5E63466422C38(*uParam0))
			{
				unk_0x2AF3CF45011CC65F(*uParam0, 1048576000);
				unk_0xB7F42BA261BF985E(*uParam0);
				unk_0x5D672CB011E20B28(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 8f, -8f, -1, 56, 0, 0, 0, 0);
			}
		}
	}
}

float func_170(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0x3BA2E0B9E14A8025((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_171(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_172(var uParam0)
{
	if (func_37(iLocal_109) && (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_109, 0) && !unk_0x95ED3BD0F52D542A(*uParam0, iLocal_109, 0)))
	{
		if (unk_0xB8D4A2BAA78AB950(iLocal_109) > 0f)
		{
			uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
			uParam0->f_8 = uParam0->f_7;
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
		}
	}
}

var func_173(int iParam0, bool bParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_174(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x39A01A052D9B5FF0(uVar0)) && unk_0x005AF94672136563(&(Global_1798[iParam2 /*29*/].f_3)))
	{
		unk_0x058B6969CEED705F(uVar0, &(Global_1798[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_174(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xD4B321D9096B01FC(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xADA89D4F1A58FCBA(iParam0);
	if (unk_0x905FBA24E7FA8D23(iParam0))
	{
		unk_0xBC0D06064C5B5413(iVar0, func_175(unk_0x393E9918BC37548A(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x14C335BB2F079BD4(iVar0, bParam1);
		}
		else
		{
			unk_0x088577CF98F96D05(iVar0, 2);
		}
	}
	else if (unk_0x4625051E51BA911B(iParam0))
	{
		unk_0xBC0D06064C5B5413(iVar0, func_175(unk_0x393E9918BC37548A(), 0.7f, 0.7f));
		unk_0x14C335BB2F079BD4(iVar0, bParam1);
	}
	else if (unk_0x0F100E7952E44923(iParam0))
	{
		unk_0xBC0D06064C5B5413(iVar0, func_175(unk_0x393E9918BC37548A(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_175(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_176(var uParam0, int iParam1)
{
	func_169(uParam0);
	if ((unk_0x9DCEF22792B5C15C(unk_0x0FA8183DAD2B3203(), 6) || iParam1) || uParam0->f_6 == 23)
	{
		if (!func_157(unk_0x0FA8183DAD2B3203(), *uParam0, 10f, 1))
		{
			if (!func_184(*uParam0, 1805844857))
			{
				uParam0->f_6 = 5;
				uParam0->f_5 = 1;
				uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
			}
		}
		else
		{
			uParam0->f_6 = 10;
			uParam0->f_5 = 1;
			uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
		}
	}
	else if (uParam0->f_5 != 1)
	{
		if (!func_184(*uParam0, 780511057) && !func_184(*uParam0, -71340211))
		{
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
			uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
		}
	}
}

bool func_177(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_183(iParam0, iParam1);
	if (!func_10(iParam0) || !func_10(iParam1))
	{
		if (iVar4 != -1)
		{
			func_182(&(Local_38[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!func_181(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_180();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_38[iVar4 /*4*/].f_1 = iParam0;
		Local_38[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x0E516C24C87F5D0C(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_178(&(Local_38[iVar4 /*4*/]), Var1, iParam1, &(Local_38[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x9B35D07DCD0F0B43() - Local_38[iVar4 /*4*/].f_3) < iParam4);
}

int func_178(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)
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
		Var1 = { func_179(iParam4, iParam7) };
		*uParam0 = unk_0xE595A27685A9E166(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0x19D3834206AE7960(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0x4625051E51BA911B(iVar7))
	{
		func_10(iVar7);
		if (unk_0x3D464779B732760F(iVar7) == iParam4)
		{
			if (bLocal_79)
			{
				unk_0x7C20DD165B7C40CB(Param1, unk_0xACE5E491FC1B0D37(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0x9B35D07DCD0F0B43();
			return 1;
		}
		return 0;
	}
	if (unk_0x905FBA24E7FA8D23(iVar7))
	{
		func_10(iVar7);
		if (unk_0x5294582CE404D3F4(iParam4, 0))
		{
			if (unk_0xD05B0DA3866791D0(iVar7) == unk_0x4D57D3E5ECE15A41(iParam4, 0))
			{
				if (bLocal_79)
				{
					unk_0x7C20DD165B7C40CB(Param1, unk_0xACE5E491FC1B0D37(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0x9B35D07DCD0F0B43();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_179(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0xBAC643F143880136(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xACE5E491FC1B0D37(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0x0E516C24C87F5D0C(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x0E516C24C87F5D0C(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x0E516C24C87F5D0C(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x0E516C24C87F5D0C(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x0E516C24C87F5D0C(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x0E516C24C87F5D0C(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xACE5E491FC1B0D37(iParam0, 1);
}

int func_180()
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

int func_181(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { func_160(unk_0xACE5E491FC1B0D37(iParam1, 1) - unk_0xACE5E491FC1B0D37(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0xDF29CF810DF94B60(iParam0) };
	}
	else
	{
		Var3 = { func_160(unk_0x0E516C24C87F5D0C(iParam0, 31086, 0f, 5f, 0f) - unk_0x0E516C24C87F5D0C(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar6 = func_133(Var3, Var0);
	if (fVar6 <= unk_0xD0FFB162F40A139C((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

void func_182(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_183(int iParam0, int iParam1)
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

int func_184(int iParam0, int iParam1)
{
	if (func_341(uParam0))
	{
		if (unk_0x411C065ADB822CD9(uParam0, iParam1) == 1 || unk_0x411C065ADB822CD9(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_185(var uParam0)
{
	float fVar0;
	
	if (uParam0->f_9 == 0 && uParam0->f_10 == 1)
	{
	}
	switch (uParam0->f_7)
	{
		case 1:
			if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_109, 1))
			{
				func_176(uParam0, 0);
				return;
			}
			if (uParam0->f_10 == 0)
			{
				func_196(uParam0, 1);
			}
			else
			{
				func_196(uParam0, 0);
			}
			break;
		
		case 2:
			if (unk_0x7E6F0519746C2295(*uParam0, iLocal_109))
			{
				if (!func_184(*uParam0, -1794415470))
				{
					if (uParam0->f_10 == 0)
					{
						func_130(0);
					}
					else
					{
						uParam0->f_7 = 3;
					}
				}
			}
			else if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_109, 1))
			{
				func_176(uParam0, 0);
				return;
			}
			break;
		
		case 3:
			if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_109, 1))
			{
				func_176(uParam0, 0);
				return;
			}
			if (bLocal_664)
			{
				if (iLocal_661 <= 20 && iLocal_661 != -1)
				{
					if (!Local_134[iLocal_661 /*25*/].f_18)
					{
						if (func_107(*uParam0, Local_134[iLocal_661 /*25*/], 20f))
						{
							if (Local_134[iLocal_661 /*25*/].f_9 && unk_0xACA46879E999E35C(iLocal_109))
							{
								func_195();
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
			if (func_107(*uParam0, Local_134[iLocal_661 /*25*/], 25f))
			{
				if (Local_134[iLocal_661 /*25*/].f_9)
				{
					func_194(uParam0);
				}
				else
				{
					Local_134[iLocal_661 /*25*/].f_18 = 1;
					func_130(0);
				}
			}
			break;
		
		case 5:
			if (func_37(iLocal_109))
			{
				unk_0x784753B14715F27F(iLocal_109, 25f, 10, 0);
				fVar0 = unk_0xB8D4A2BAA78AB950(iLocal_109);
				if (fVar0 < 8f)
				{
					func_194(uParam0);
				}
			}
			break;
		
		case 6:
			if (!func_184(*uParam0, 242628503) && unk_0xACA46879E999E35C(iLocal_109))
			{
				if (bLocal_664)
				{
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 7;
				}
				else
				{
					unk_0x2DCF88AC859255F3(*uParam0, 0, 0);
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 8;
				}
			}
			break;
		
		case 7:
			if (func_341(Local_111[1 /*11*/]))
			{
				if (unk_0x95ED3BD0F52D542A(Local_111[1 /*11*/], iLocal_109, 0) && Local_111[1 /*11*/].f_7 == 3)
				{
					func_130(0);
				}
			}
			break;
		
		case 8:
			if (!unk_0x95ED3BD0F52D542A(*uParam0, iLocal_109, 0))
			{
				func_164(uParam0);
			}
			break;
		
		case 9:
			func_186(uParam0);
			break;
	}
}

void func_186(var uParam0)
{
	var uVar0;
	var uVar1;
	
	if (uParam0->f_9 >= 1 && uParam0->f_9 != 0)
	{
	}
	switch (uParam0->f_9)
	{
		case 1:
			if (!func_184(*uParam0, -2015108952))
			{
				unk_0xA12E1659DEF57244(&uVar0);
				if (func_170(unk_0xACE5E491FC1B0D37(*uParam0, 1), Local_134[iLocal_661 /*25*/].f_19) > 1.5f)
				{
					unk_0xD65F7D9CC109BCC8(0, Local_134[iLocal_661 /*25*/].f_19, 0);
				}
				unk_0x5D672CB011E20B28(0, "missfbi4prepp1", "_bag_pickup_garbage_man", 8f, -16f, -1, 528384, 0, 0, 0, 0);
				unk_0x15A7B753872B3CE3(uVar0);
				unk_0xC544A8E1032AC1CF(*uParam0, uVar0);
				unk_0x78829A259A6975CD(&uVar0);
				uParam0->f_9 = 2;
			}
			else if (func_191(Local_134[iLocal_661 /*25*/].f_19, *uParam0, 1f, 1f, 8f))
			{
				func_190(uParam0);
				return;
			}
			unk_0x216F49BC95110ED2(*uParam0, 0.2f);
			break;
		
		case 2:
			if (func_184(*uParam0, 242628503))
			{
				if (unk_0xF6FD8019402CF03B(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man", 3))
				{
					if (unk_0x79825B919DB9FB1C(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man") >= 0.333f)
					{
						unk_0x9C3314BBA5EDB2F9(*uParam0, "missfbi4prepp1_garbageman", 0f);
						unk_0xFE32E7362E20992B(*uParam0, "missfbi4prepp1_garbageman");
						if (func_10(Local_134[iLocal_661 /*25*/].f_17) && !unk_0xCA7317DE7E0F89E9(Local_134[iLocal_661 /*25*/].f_17))
						{
							unk_0x01DF2D3988024DB4(Local_134[iLocal_661 /*25*/].f_17, *uParam0, unk_0xDD454299E9E58208(*uParam0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
						}
					}
				}
				if (func_191(Local_134[iLocal_661 /*25*/].f_19, *uParam0, 1f, 1f, 8f))
				{
					func_190(uParam0);
					return;
				}
			}
			else if (!func_184(*uParam0, 713668775))
			{
				if (func_37(iLocal_109))
				{
					unk_0xD06C31EF9A42C2B4(*uParam0, unk_0xC12F91346EA13947(iLocal_109, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, unk_0xD2809C7F7FD79247(iLocal_109));
				}
				uParam0->f_9 = 3;
			}
			unk_0x216F49BC95110ED2(*uParam0, 0.2f);
			break;
		
		case 3:
			if (func_37(iLocal_109))
			{
				if (!func_191(unk_0xC12F91346EA13947(iLocal_109, 0f, -5.5f, 0f), iLocal_109, 1.9f, 1.9f, 8f))
				{
					if (unk_0xC49563EAE7AACA6C(*uParam0, unk_0xC12F91346EA13947(iLocal_109, 0f, -5.5f, 0f), 0.9f, 0.9f, 2f, 0, 1, 0))
					{
						if (!func_184(*uParam0, 713668775))
						{
							unk_0xA12E1659DEF57244(&uVar1);
							if (func_170(unk_0xACE5E491FC1B0D37(*uParam0, 1), unk_0xACE5E491FC1B0D37(iLocal_109, 1)) > 3f)
							{
								unk_0xF671F163E3851D8B(0, unk_0xD2809C7F7FD79247(iLocal_109), 0);
							}
							unk_0x5D672CB011E20B28(0, "missfbi4prepp1", "_bag_throw_garbage_man", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x15A7B753872B3CE3(uVar1);
							unk_0xC544A8E1032AC1CF(*uParam0, uVar1);
							unk_0x78829A259A6975CD(&uVar1);
							uParam0->f_9 = 4;
						}
					}
					else if (!func_184(*uParam0, 713668775))
					{
						unk_0xD06C31EF9A42C2B4(*uParam0, unk_0xC12F91346EA13947(iLocal_109, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, unk_0xD2809C7F7FD79247(iLocal_109));
					}
				}
				else
				{
					func_188(uParam0);
				}
			}
			break;
		
		case 4:
			if (!func_191(unk_0xC12F91346EA13947(iLocal_109, 0f, -5.5f, 0f), *uParam0, 1.9f, 1.9f, 8f))
			{
				if (func_184(*uParam0, 242628503))
				{
					if (unk_0xF6FD8019402CF03B(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man", 3))
					{
						if (unk_0x79825B919DB9FB1C(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man") >= 0.391f)
						{
							if (func_10(Local_134[iLocal_661 /*25*/].f_17))
							{
								if (unk_0xCA7317DE7E0F89E9(Local_134[iLocal_661 /*25*/].f_17))
								{
									unk_0x2AF3CF45011CC65F(*uParam0, 1048576000);
									unk_0xB7F42BA261BF985E(*uParam0);
									unk_0x363E2170E626A00A(Local_134[iLocal_661 /*25*/].f_17, 1, 0);
									unk_0x04E8EF0987C19334(Local_134[iLocal_661 /*25*/].f_17, 2f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1082130432, -1082130432, -1082130432);
									unk_0xEF4C0B3A167109AB(Local_134[iLocal_661 /*25*/].f_17, 1, unk_0xDF29CF810DF94B60(*uParam0), 0, 1, 1, 0);
								}
								if (unk_0x7A10CED38342D31F(Local_134[iLocal_661 /*25*/].f_17, iLocal_109))
								{
									func_187(&(Local_134[iLocal_661 /*25*/].f_17));
								}
							}
						}
					}
				}
				else
				{
					uParam0->f_9 = 0;
					if (func_37(iLocal_109))
					{
						unk_0x0B4387FBA5326E78(iLocal_109, 5, 0);
						func_187(&(Local_134[iLocal_661 /*25*/].f_17));
					}
					func_163(uParam0);
				}
			}
			else
			{
				func_188(uParam0);
			}
			break;
		
		case 5:
			break;
	}
}

void func_187(var uParam0)
{
	if (unk_0xD4B321D9096B01FC(*uParam0))
	{
		if (unk_0x0671DB6A34EE14AA(*uParam0))
		{
			unk_0x363E2170E626A00A(*uParam0, 1, 1);
		}
		unk_0x377C9F2989832369(uParam0);
	}
}

void func_188(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0x9B54A3CCAAB4F5FB(5, uLocal_80, joaat("player"));
	func_169(uParam0);
	if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (!unk_0x5294582CE404D3F4(*uParam0, 0))
		{
			unk_0xDE9B79772DA7CA7A(*uParam0, unk_0x0FA8183DAD2B3203(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0xA12E1659DEF57244(&uVar0);
			unk_0x2DCF88AC859255F3(0, 0, 0);
			unk_0xF827FEB33E873F71(0, unk_0x0FA8183DAD2B3203(), 0, 16);
			unk_0x15A7B753872B3CE3(uVar0);
			unk_0xC544A8E1032AC1CF(*uParam0, uVar0);
			unk_0x78829A259A6975CD(&uVar0);
		}
	}
	else
	{
		unk_0xA12E1659DEF57244(&uVar1);
		unk_0x845704CC8ADF1918(0, unk_0x0FA8183DAD2B3203(), 0);
		unk_0xF827FEB33E873F71(0, unk_0x0FA8183DAD2B3203(), 0, 16);
		unk_0x15A7B753872B3CE3(uVar1);
		unk_0xC544A8E1032AC1CF(*uParam0, uVar1);
		unk_0x78829A259A6975CD(&uVar1);
	}
	unk_0x2AF3CF45011CC65F(*uParam0, 1048576000);
	unk_0xB7F42BA261BF985E(*uParam0);
	func_189();
	if (!unk_0x39A01A052D9B5FF0(uParam0->f_4))
	{
		uParam0->f_4 = func_173(*uParam0, 1, 145);
	}
	uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 15;
}

void func_189()
{
	Local_82.f_0 = 0;
	Local_82.f_26 = 0;
	Local_82.f_18 = 0;
}

void func_190(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0x9B54A3CCAAB4F5FB(5, uLocal_80, joaat("player"));
	func_169(uParam0);
	if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (!unk_0x5294582CE404D3F4(*uParam0, 0))
		{
			unk_0xDE9B79772DA7CA7A(*uParam0, unk_0x0FA8183DAD2B3203(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0xA12E1659DEF57244(&uVar0);
			unk_0x2DCF88AC859255F3(0, 0, 0);
			unk_0xF827FEB33E873F71(0, unk_0x0FA8183DAD2B3203(), 0, 16);
			unk_0x15A7B753872B3CE3(uVar0);
			unk_0xC544A8E1032AC1CF(*uParam0, uVar0);
			unk_0x78829A259A6975CD(&uVar0);
		}
	}
	else
	{
		unk_0xA12E1659DEF57244(&uVar1);
		unk_0x845704CC8ADF1918(0, unk_0x0FA8183DAD2B3203(), 0);
		unk_0xF827FEB33E873F71(0, unk_0x0FA8183DAD2B3203(), 0, 16);
		unk_0x15A7B753872B3CE3(uVar1);
		unk_0xC544A8E1032AC1CF(*uParam0, uVar1);
		unk_0x78829A259A6975CD(&uVar1);
	}
	unk_0x2AF3CF45011CC65F(*uParam0, 1048576000);
	unk_0xB7F42BA261BF985E(*uParam0);
	func_189();
	if (!unk_0x39A01A052D9B5FF0(uParam0->f_4))
	{
		uParam0->f_4 = func_173(*uParam0, 1, 145);
	}
	uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 14;
}

int func_191(struct<3> Param0, int iParam3, struct<3> Param4)
{
	Local_82.f_2 = { Param0 };
	Local_82.f_8 = { Param4 };
	func_192(&Local_82, iParam3);
	if (Local_82.f_26)
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (unk_0x905FBA24E7FA8D23(Local_82.f_18))
			{
				if (func_10(Local_82.f_18))
				{
					if (unk_0xD05B0DA3866791D0(Local_82.f_18) == unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 1))
					{
						return 1;
					}
				}
			}
		}
		else if (unk_0x4625051E51BA911B(Local_82.f_18))
		{
			if (func_10(Local_82.f_18))
			{
				if (unk_0x3D464779B732760F(Local_82.f_18) == unk_0x0FA8183DAD2B3203())
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_192(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x19D3834206AE7960(*uParam0, &iVar0, &(uParam0->f_20), &(uParam0->f_23), &(uParam0->f_18));
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
		func_193(uParam0, uParam1);
	}
}

void func_193(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 0:
			break;
		
		case 1:
			*uParam0 = unk_0xE595A27685A9E166(uParam0->f_2, uParam0->f_5, 511, uParam1, 7);
			break;
		
		case 2:
			*uParam0 = unk_0xF0E0A94D7F083ABC(uParam0->f_17, 511, 4);
			break;
		
		case 3:
			*uParam0 = unk_0x340D74FA1993A782(uParam0->f_17, 511, 4);
			break;
		
		case 4:
			*uParam0 = unk_0xEF29B0EF09B74555(uParam0->f_2, uParam0->f_8, uParam0->f_11, uParam0->f_14, 6, iParam1, 4);
			break;
		
		case 5:
			*uParam0 = unk_0x370A50EE38672923(uParam0->f_2, uParam0->f_5, uParam0->f_15, 511, iParam1, 4);
			break;
	}
	uParam0->f_16 = *uParam0 != 0;
}

void func_194(var uParam0)
{
	var uVar0;
	
	if (func_37(iLocal_109))
	{
		unk_0xA12E1659DEF57244(&uVar0);
		unk_0xD67C82BBC9A488A6(0, iLocal_109, Local_134[iLocal_661 /*25*/].f_3, 8f, 0, joaat("trash"), 786469, 10f, 15f);
		unk_0x1C9790213C8C7FC4(0, iLocal_109, Local_134[iLocal_661 /*25*/].f_3, Local_134[iLocal_661 /*25*/].f_8, Local_134[iLocal_661 /*25*/].f_10, 5f, 1);
		unk_0x15A7B753872B3CE3(uVar0);
		unk_0xC544A8E1032AC1CF(*uParam0, uVar0);
		unk_0x78829A259A6975CD(&uVar0);
		uParam0->f_7 = 6;
	}
}

void func_195()
{
	func_164(&(Local_111[1 /*11*/]));
}

void func_196(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (func_191(unk_0xC12F91346EA13947(iLocal_109, func_137(bParam1)), iLocal_109, 1.9f, 1.9f, 8f))
	{
		if (unk_0x42A24CB7B8A08E11(*uParam0, unk_0xC12F91346EA13947(iLocal_109, 5f, 0f, -2f), unk_0xACE5E491FC1B0D37(iLocal_109, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0) && unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), unk_0xC12F91346EA13947(iLocal_109, 5f, 0f, -2f), unk_0xACE5E491FC1B0D37(iLocal_109, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
		{
			func_197(uParam0);
		}
		else if (!func_184(*uParam0, 1227113341) && unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), unk_0xC12F91346EA13947(iLocal_109, 5f, 0f, -2f), unk_0xACE5E491FC1B0D37(iLocal_109, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
		{
			unk_0xC6612209077465DD(*uParam0);
			unk_0x5AE2110219317C16(*uParam0, unk_0x0FA8183DAD2B3203(), -1, 4f, 1f, 1073741824, 0);
		}
	}
	else if (func_107(*uParam0, unk_0xC12F91346EA13947(iLocal_109, func_137(bParam1)), 5f))
	{
		iVar0 = -1;
		if (!bParam1)
		{
			iVar0 = 0;
		}
		unk_0x31A7662B885C7549(*uParam0, iLocal_109, -1, iVar0, 1f, 8388609, 0);
		uParam0->f_7 = 2;
	}
}

void func_197(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0x9B54A3CCAAB4F5FB(5, uLocal_80, joaat("player"));
	func_169(uParam0);
	if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (!unk_0x5294582CE404D3F4(*uParam0, 0))
		{
			unk_0xDE9B79772DA7CA7A(*uParam0, unk_0x0FA8183DAD2B3203(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0xA12E1659DEF57244(&uVar0);
			unk_0x2DCF88AC859255F3(0, 0, 0);
			unk_0xF827FEB33E873F71(0, unk_0x0FA8183DAD2B3203(), 0, 16);
			unk_0x15A7B753872B3CE3(uVar0);
			unk_0xC544A8E1032AC1CF(*uParam0, uVar0);
			unk_0x78829A259A6975CD(&uVar0);
		}
	}
	else
	{
		unk_0xA12E1659DEF57244(&uVar1);
		unk_0x845704CC8ADF1918(0, unk_0x0FA8183DAD2B3203(), 0);
		unk_0xF827FEB33E873F71(0, unk_0x0FA8183DAD2B3203(), 0, 16);
		unk_0x15A7B753872B3CE3(uVar1);
		unk_0xC544A8E1032AC1CF(*uParam0, uVar1);
		unk_0x78829A259A6975CD(&uVar1);
	}
	unk_0x2AF3CF45011CC65F(*uParam0, 1048576000);
	unk_0xB7F42BA261BF985E(*uParam0);
	func_189();
	uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 13;
}

void func_198(var uParam0)
{
	if (uParam0->f_5 != 1)
	{
		if (func_37(iLocal_109) && unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			if (!func_184(*uParam0, 2104565373) && unk_0x95ED3BD0F52D542A(*uParam0, iLocal_109, 0))
			{
				if (func_157(unk_0x0FA8183DAD2B3203(), iLocal_109, 10f, 1))
				{
					if (unk_0x7A10CED38342D31F(iLocal_109, unk_0x0FA8183DAD2B3203()))
					{
						unk_0x2B43009F97DE1D72(*uParam0, unk_0x0FA8183DAD2B3203(), 0, 0f, 0f, 0f, 10f, 100, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
						uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
						uParam0->f_6 = 9;
					}
				}
			}
		}
	}
}

void func_199()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_81 - 1))
	{
		if (Local_134[iVar0 /*25*/].f_23 != 0)
		{
			if (Local_134[iVar0 /*25*/].f_24)
			{
				if ((iVar0 != iLocal_661 && func_10(Local_134[iVar0 /*25*/].f_17)) && func_201(Local_134[iVar0 /*25*/].f_17, unk_0x0FA8183DAD2B3203(), 1) > 200f)
				{
					unk_0x377C9F2989832369(&(Local_134[iVar0 /*25*/].f_17));
					Local_134[iVar0 /*25*/].f_24 = 0;
				}
			}
			else if (Local_134[iVar0 /*25*/].f_23 != 0)
			{
				if (func_107(unk_0x0FA8183DAD2B3203(), Local_134[iVar0 /*25*/], 100f) || func_107(Local_111[0 /*11*/], Local_134[iVar0 /*25*/], 120f))
				{
					Local_134[iVar0 /*25*/].f_24 = func_200(&(Local_134[iVar0 /*25*/].f_17), Local_134[iVar0 /*25*/].f_23, Local_134[iVar0 /*25*/].f_19, Local_134[iVar0 /*25*/].f_22, 1);
				}
			}
		}
		iVar0++;
	}
}

int func_200(var uParam0, var uParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (!unk_0xD4B321D9096B01FC(*uParam0))
	{
		if (func_152(uParam1, "Loading", 0))
		{
			*uParam0 = unk_0x7187764DB5121FC9(uParam1, Param2, 1, 1, 0);
			if (unk_0xD4B321D9096B01FC(*uParam0))
			{
				unk_0x5A2B7C446C0CF087(*uParam0, uParam5);
				unk_0x2CF873D4DD55E9B7(*uParam0);
				if (bParam6)
				{
					func_151(uParam1, 1);
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

float func_201(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 0) };
	}
	if (!unk_0xF4B969E0807E76C7(iParam1, 0))
	{
		Var3 = { unk_0xACE5E491FC1B0D37(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xACE5E491FC1B0D37(iParam1, 0) };
	}
	return unk_0xD34AF93E9BCF12F0(Var0, Var3, iParam2);
}

void func_202(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_5 != 1 || iParam2)
	{
		if (!func_341(Local_111[func_171(iParam1) /*11*/]))
		{
			if (!bLocal_665)
			{
				if (unk_0xD4B321D9096B01FC(Local_111[func_171(iParam1) /*11*/]))
				{
					if (func_181(*uParam0, Local_111[func_171(iParam1) /*11*/], 140f, 0) || func_157(Local_111[func_171(iParam1) /*11*/], *uParam0, 3f, 1))
					{
						func_176(uParam0, 0);
						bLocal_665 = true;
						return;
					}
					else
					{
						Local_667 = { unk_0xACE5E491FC1B0D37(Local_111[func_171(iParam1) /*11*/], 1) };
						uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
						uParam0->f_8 = uParam0->f_7;
						uParam0->f_5 = 1;
						uParam0->f_6 = 11;
					}
				}
				else
				{
					func_176(uParam0, 0);
				}
			}
		}
		else if (Local_111[func_171(iParam1) /*11*/].f_6 == 22)
		{
			if (func_181(*uParam0, Local_111[func_171(iParam1) /*11*/], 140f, 0) && func_157(Local_111[func_171(iParam1) /*11*/], unk_0x0FA8183DAD2B3203(), 15f, 1))
			{
				uParam0->f_5 = 1;
				uParam0->f_6 = 21;
			}
		}
		else if (Local_111[func_171(iParam1) /*11*/].f_6 == 5 || Local_111[func_171(iParam1) /*11*/].f_6 == 7)
		{
			if (func_157(Local_111[func_171(iParam1) /*11*/], *uParam0, 10f, 1))
			{
				func_176(uParam0, 0);
			}
		}
		if (func_213(*uParam0))
		{
			func_169(uParam0);
			uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
			uParam0->f_8 = uParam0->f_7;
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
		}
		if (uParam0->f_10 == 0 && uParam0->f_7 == 4)
		{
			if (func_161(uParam0))
			{
				if (unk_0x95ED3BD0F52D542A(*uParam0, iLocal_109, 0))
				{
					unk_0x2B43009F97DE1D72(*uParam0, unk_0x0FA8183DAD2B3203(), 0, 0f, 0f, 0f, 10f, 100, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
					unk_0xD7CAAEF12080F831(iLocal_109, 2000f);
					iLocal_670 = unk_0x9B35D07DCD0F0B43();
					uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
					uParam0->f_6 = 16;
					uParam0->f_5 = 1;
				}
			}
		}
		if (func_204(*uParam0, 1, 70f, 170f, 0, 1, 0, 0) && !func_203(uParam0))
		{
			if (unk_0x9DCEF22792B5C15C(unk_0x0FA8183DAD2B3203(), 6))
			{
				if (func_37(iLocal_109))
				{
					if (unk_0x95ED3BD0F52D542A(*uParam0, iLocal_109, 0))
					{
						if (unk_0xB8D4A2BAA78AB950(iLocal_109) > 5f)
						{
							if (iParam1 == 0)
							{
								unk_0x12038E5513D763A5(*uParam0, iLocal_109, unk_0x0FA8183DAD2B3203(), 8, 30f, 786469, 300f, 2f, 1);
								uParam0->f_6 = 7;
								unk_0x5D865B9E32556997(Local_111[func_171(iParam1) /*11*/], -1);
								Local_111[func_171(iParam1) /*11*/].f_6 = 10;
								Local_111[func_171(iParam1) /*11*/].f_5 = 1;
								uParam0->f_5 = 1;
								uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
								Local_111[func_171(iParam1) /*11*/].f_1 = unk_0x9B35D07DCD0F0B43();
							}
							else
							{
								unk_0x5D865B9E32556997(*uParam0, -1);
								uParam0->f_6 = 12;
								unk_0x12038E5513D763A5(Local_111[func_171(iParam1) /*11*/], iLocal_109, unk_0x0FA8183DAD2B3203(), 8, 30f, 786469, 300f, 2f, 1);
								Local_111[func_171(iParam1) /*11*/].f_6 = 5;
								Local_111[func_171(iParam1) /*11*/].f_5 = 1;
								uParam0->f_5 = 1;
								uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
								Local_111[func_171(iParam1) /*11*/].f_1 = unk_0x9B35D07DCD0F0B43();
							}
						}
						else
						{
							func_176(uParam0, 0);
							if (unk_0xD4B321D9096B01FC(Local_111[func_171(iParam1) /*11*/]))
							{
								if (func_181(Local_111[func_171(iParam1) /*11*/], unk_0x0FA8183DAD2B3203(), 1126825984, 0))
								{
									func_176(&(Local_111[func_171(iParam1) /*11*/]), 0);
								}
							}
						}
						unk_0x7FF38BFB318C1A86(*uParam0);
					}
					else
					{
						func_176(uParam0, 0);
						if (unk_0xD4B321D9096B01FC(Local_111[func_171(iParam1) /*11*/]))
						{
							if (func_177(Local_111[func_171(iParam1) /*11*/], *uParam0, 1126825984, 1, 250, 7))
							{
								func_176(&(Local_111[func_171(iParam1) /*11*/]), 0);
							}
						}
					}
				}
			}
			else
			{
				uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
				uParam0->f_8 = uParam0->f_7;
				uParam0->f_5 = 1;
				uParam0->f_6 = 21;
				unk_0x7FF38BFB318C1A86(*uParam0);
				if (func_177(Local_111[func_171(iParam1) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					Local_111[func_171(iParam1) /*11*/].f_1 = unk_0x9B35D07DCD0F0B43();
					Local_111[func_171(iParam1) /*11*/].f_8 = uParam0->f_7;
					Local_111[func_171(iParam1) /*11*/].f_5 = 1;
					Local_111[func_171(iParam1) /*11*/].f_6 = 21;
					unk_0x7FF38BFB318C1A86(Local_111[func_171(iParam1) /*11*/]);
				}
			}
			uParam0->f_5 = 1;
		}
		else if (unk_0xCFE0D93B7A6809C1(*uParam0))
		{
			func_169(uParam0);
			unk_0xF0E9590A910B74BE(*uParam0, unk_0x0FA8183DAD2B3203(), 500f, -1, 0, 1);
			uParam0->f_6 = 2;
			uParam0->f_5 = 1;
			uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
		}
		if (unk_0x3DAA08BFD9A801FD(*uParam0))
		{
			if (func_10(Local_134[iLocal_661 /*25*/].f_17))
			{
				if (unk_0xCA7317DE7E0F89E9(Local_134[iLocal_661 /*25*/].f_17))
				{
					unk_0x363E2170E626A00A(Local_134[iLocal_661 /*25*/].f_17, 1, 0);
					unk_0xEF4C0B3A167109AB(Local_134[iLocal_661 /*25*/].f_17, 1, unk_0xDF29CF810DF94B60(*uParam0), 0, 1, 1, 0);
				}
			}
		}
	}
	if (uParam0->f_5 != 1)
	{
		if (func_341(Local_111[func_171(iParam1) /*11*/]))
		{
			if (unk_0xCFE0D93B7A6809C1(Local_111[func_171(iParam1) /*11*/]))
			{
				func_169(uParam0);
				unk_0xF0E9590A910B74BE(*uParam0, unk_0x0FA8183DAD2B3203(), 120f, -1, 0, 0);
				uParam0->f_1 = unk_0x9B35D07DCD0F0B43();
				uParam0->f_6 = 7;
				uParam0->f_5 = 1;
			}
		}
	}
}

int func_203(var uParam0)
{
	if ((unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), unk_0xC12F91346EA13947(*uParam0, 0f, -2f, 0f), 2f, 3f, 2f, 0, 1, 0) && !unk_0x9DCEF22792B5C15C(unk_0x0FA8183DAD2B3203(), 6)) && unk_0x4DFA158E3F06774B(unk_0x0FA8183DAD2B3203()))
	{
		return 1;
	}
	return 0;
}

int func_204(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_10(unk_0x0FA8183DAD2B3203()) && func_10(iParam0))
	{
		if (unk_0x3656B691E303FDE0(iParam0, unk_0x0FA8183DAD2B3203(), 1))
		{
			return 1;
		}
		if (func_209(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x9DCEF22792B5C15C(unk_0x0FA8183DAD2B3203(), 6))
		{
			if (unk_0x132DF66D50A7DE4E(unk_0x0FA8183DAD2B3203()))
			{
				Var0 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) - unk_0xACE5E491FC1B0D37(iParam0, 1) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_208(unk_0x0FA8183DAD2B3203(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_205(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_205(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_10(unk_0x0FA8183DAD2B3203()) && func_10(iParam0))
	{
		if (func_207(iParam0) || unk_0x4412340828EC2614(unk_0x7C7787D2D7139A85(), iParam0))
		{
			if (unk_0x9DCEF22792B5C15C(unk_0x0FA8183DAD2B3203(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_206(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_206(int iParam0, float fParam1)
{
	return func_177(iParam0, unk_0x0FA8183DAD2B3203(), fParam1, 1, 250, 7);
}

int func_207(int iParam0)
{
	if (unk_0x2A06948F22A49FC3(unk_0x7C7787D2D7139A85(), iParam0) && unk_0x9DCEF22792B5C15C(unk_0x0FA8183DAD2B3203(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_208(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xDF29CF810DF94B60(iParam0) };
	Var3 = { unk_0xACE5E491FC1B0D37(iParam1, 1) - unk_0xACE5E491FC1B0D37(iParam0, 1) };
	return (((Var0.f_0 * Var3.f_0) + (Var0.f_1 * Var3.f_1)) / unk_0x2A488C176D52CCA5(Var3, 0f, 0f, 0f)) > unk_0xD0FFB162F40A139C(fParam2);
}

int func_209(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
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
	if (func_10(unk_0x0FA8183DAD2B3203()) && func_10(iParam0))
	{
		unk_0x63EA4FAF7CDEFEC7(unk_0x0FA8183DAD2B3203(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_212(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_210(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0x64F825FCEFC07239(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x90D8021D13215A35(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x6C979EE77983FC04(unk_0xACE5E491FC1B0D37(iParam0, 1), fVar0, 1))
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
				if (func_212(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_210(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_210(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0xC6596EAF5F50B53A(unk_0xACE5E491FC1B0D37(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0xC6596EAF5F50B53A(unk_0xACE5E491FC1B0D37(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0xC6596EAF5F50B53A(unk_0xACE5E491FC1B0D37(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0xC6596EAF5F50B53A(unk_0xACE5E491FC1B0D37(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_211(iParam0, fParam1))
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
			if (func_211(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x6E611F4ABF5BABF1(Var0, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_211(int iParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x6267AE5438BF1CCD(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x6267AE5438BF1CCD(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x6267AE5438BF1CCD(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x6267AE5438BF1CCD(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x6267AE5438BF1CCD(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_159(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_212(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x90D8021D13215A35(unk_0x0FA8183DAD2B3203()))
		{
			if (unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x6C979EE77983FC04(unk_0xACE5E491FC1B0D37(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_213(int iParam0)
{
	if (func_157(uParam0, unk_0x0FA8183DAD2B3203(), 6f, 1))
	{
		if (!unk_0x5294582CE404D3F4(uParam0, 0))
		{
			if (unk_0x7A10CED38342D31F(iParam0, unk_0x0FA8183DAD2B3203()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_214()
{
	if (func_37(Local_868.f_0))
	{
		if (func_157(unk_0x0FA8183DAD2B3203(), Local_868.f_0, 100f, 1) && !iLocal_837)
		{
			unk_0x1CF6B9198AECD5B1(joaat("trash"), 3);
			if (!unk_0xC697561B7CE4A050(joaat("trash")))
			{
				iLocal_837 = 1;
			}
		}
		else if (!func_157(unk_0x0FA8183DAD2B3203(), Local_868.f_0, 120f, 1) && iLocal_837)
		{
			unk_0xE9C4BD5E64C76842(joaat("trash"));
			iLocal_837 = 0;
		}
	}
}

void func_215(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, struct<3> Param5, int iParam8, bool bParam9, int iParam10)
{
	if (func_37(*iParam0))
	{
		switch (*iParam2)
		{
			case 0:
				if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), *iParam0, 0))
				{
					func_7(iParam3);
					if (func_106(func_114(func_77()), 0, 0))
					{
						unk_0x38C6C3B6F4074898(func_114(func_77()));
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
				else if (func_220(*iParam0) || func_219(*iParam0))
				{
					func_7(iParam3);
					if (func_106(func_114(func_77()), 0, 0))
					{
						unk_0x38C6C3B6F4074898(func_114(func_77()));
					}
					*iParam2 = 3;
				}
				else
				{
					if (func_106(func_115(func_77(), bParam9), 0, 0))
					{
						unk_0x38C6C3B6F4074898(func_115(func_77(), bParam9));
					}
					if (func_77() != 33)
					{
						func_217(iParam0);
					}
					else
					{
						func_216(iParam0, uParam1);
					}
				}
				break;
			
			case 2:
			case 1:
				if ((!unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), *iParam0, 0) && !func_220(*iParam0)) && !func_219(*iParam0))
				{
					func_7(iParam4);
					if (!unk_0xC49563EAE7AACA6C(*iParam0, Param5, iParam10, iParam10, 2f, 0, 1, 2))
					{
						func_125(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
			
			case 3:
				if (!func_220(*iParam0) && !func_219(*iParam0))
				{
					func_7(iParam4);
					if (!unk_0xC49563EAE7AACA6C(*iParam0, Param5, iParam10, iParam10, 2f, 0, 1, 2))
					{
						func_125(iParam3, *iParam0, 1);
					}
					*iParam2 = 0;
				}
				break;
		}
	}
	else if (func_77() != 33)
	{
		func_217(iParam0);
	}
	else
	{
		func_216(iParam0, uParam1);
	}
}

void func_216(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!bLocal_28)
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
			if (iVar0 != *uParam0)
			{
				if (func_37(iVar0))
				{
					iVar1 = unk_0x7F375072508F738F(iVar0);
					if (iVar1 == joaat("trash"))
					{
						*uParam1 = *uParam0;
						func_6(uParam0);
						*uParam0 = iVar0;
						func_36(*uParam0, 1);
						func_36(*uParam1, 3);
						if (!unk_0x00123AB82C5FAC28(*uParam0))
						{
							unk_0xE5C667CF3B4642D2(*uParam0, 1, 1);
						}
					}
					else if (iVar1 == joaat("towtruck"))
					{
						uVar2 = unk_0x0F29830D95BB6281(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0));
						if (func_10(uVar2))
						{
							iVar0 = unk_0xD05B0DA3866791D0(uVar2);
							if (unk_0x7F375072508F738F(iVar0) == joaat("trash"))
							{
								*uParam1 = *uParam0;
								func_6(uParam0);
								*uParam0 = iVar0;
								func_36(*uParam0, 1);
								func_36(*uParam1, 3);
								if (!unk_0x00123AB82C5FAC28(*uParam0))
								{
									unk_0xE5C667CF3B4642D2(*uParam0, 1, 1);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_217(var uParam0)
{
	int iVar0;
	
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
		if (iVar0 != *uParam0)
		{
			if (func_37(iVar0))
			{
				if (unk_0x7F375072508F738F(iVar0) == func_218(func_77()))
				{
					func_6(uParam0);
					*uParam0 = iVar0;
					func_36(*uParam0, 1);
					unk_0xE5C667CF3B4642D2(*uParam0, 1, 1);
				}
			}
		}
	}
}

int func_218(int iParam0)
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

int func_219(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((func_341(unk_0x0FA8183DAD2B3203()) && unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0)) && func_37(iParam0))
	{
		iVar0 = unk_0x9B79A29933E4A8FA();
		if (func_37(iVar0))
		{
			iVar1 = unk_0x7F375072508F738F(iVar0);
			if ((iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2")) || iVar1 == joaat("cargobob3"))
			{
				if (unk_0x22454982A21AAA64(iVar0))
				{
					if (unk_0xEB9697D8AE8576CD(iVar0, iParam0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_220(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if ((func_341(unk_0x0FA8183DAD2B3203()) && unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0)) && func_37(iParam0))
	{
		iVar0 = unk_0x9B79A29933E4A8FA();
		if (func_37(iVar0))
		{
			iVar1 = unk_0x7F375072508F738F(iVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2"))
			{
				if (unk_0x36495ECD675662F3(iVar0, iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_221()
{
	func_215(&iLocal_874, &uLocal_875, &iLocal_686, &iLocal_822, &iLocal_821, Local_827, Local_868.f_0, 0, 1090519040);
	func_155();
	func_238();
	func_214();
	switch (iLocal_684)
	{
		case 0:
			if (func_122(iLocal_683, bLocal_28))
			{
				if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) == 0 && !func_237())
				{
					func_117(&iLocal_821, Local_827, 1);
					func_121("PRA_TAKBACK", &iLocal_820);
				}
				iLocal_684 = 1;
			}
			break;
		
		case 1:
			func_120(&iLocal_821, Local_827, &iLocal_685, iLocal_686, &iLocal_820, &iLocal_838);
			func_227();
			if (func_225(iLocal_874, Local_827, &iLocal_821, iLocal_685, iLocal_686, &iLocal_820, &iLocal_839, 0, 0, 1086324736))
			{
				unk_0xE9A303771BF0C29A(8f, 5f, 4);
				iLocal_684 = 2;
			}
			break;
		
		case 2:
			func_222();
			func_7(&iLocal_821);
			func_7(&iLocal_822);
			if (func_116(1077936128, 1))
			{
				func_110(0);
			}
			break;
		
		case 3:
			if (func_37(iLocal_874))
			{
				if (!unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_874, 0))
				{
					unk_0xB425E338F85508A5(unk_0x0FA8183DAD2B3203(), iLocal_874, -1);
				}
				else
				{
					func_109(iLocal_874, Local_827, 146.5443f, 0, 1);
					func_40(1, 1, 1);
					iLocal_684 = 1;
				}
			}
			break;
	}
}

void func_222()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_79(iVar0);
		if (!unk_0x2BF5E63466422C38(iVar1))
		{
			if (func_224(iVar1))
			{
				func_223(iVar1);
			}
		}
		iVar0++;
	}
}

int func_223(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_79(iVar0) != iParam0)
		{
			return 0;
		}
		if (!unk_0xA2BC31158C8CEFD2(Global_94553, iVar0))
		{
			return 0;
		}
		unk_0x3B76114EC84D5812(&Global_94553, iVar0);
		return 1;
	}
	return 0;
}

int func_224(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_79(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0xA2BC31158C8CEFD2(Global_94553, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_225(int iParam0, struct<3> Param1, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, float fParam11)
{
	if ((iParam6 == 1 || iParam6 == 2) || iParam6 == 3)
	{
		if (iParam5 == 0)
		{
			func_117(iParam4, Param1, 1);
			if (!bParam10)
			{
				if (func_37(iParam0))
				{
					if (unk_0xC49563EAE7AACA6C(iParam0, Param1, fParam11, fParam11, 2f, 1, 1, 0))
					{
						return 1;
					}
				}
			}
			else if (unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), Param1, fParam11, fParam11, 2f, 1, 1, 2))
			{
				return 1;
			}
			if (func_106(func_114(func_77()), 0, 0))
			{
				unk_0x38C6C3B6F4074898(func_114(func_77()));
			}
			if (!func_226())
			{
				func_121(func_115(func_77(), bParam9), iParam7);
			}
		}
	}
	else if (iParam5 == 0)
	{
		if (!*iParam8)
		{
			if (func_106(func_115(func_77(), 0), 0, 0))
			{
				unk_0x38C6C3B6F4074898(func_115(func_77(), 0));
			}
			func_105(func_114(func_77()), 7500, 0);
			*iParam8 = 1;
		}
	}
	return 0;
}

bool func_226()
{
	return Global_98721.f_345 > 0;
}

void func_227()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar2 = func_79(iVar0);
		if (!unk_0x2BF5E63466422C38(iVar2))
		{
			if (func_78(iVar2, 0))
			{
				if (!bVar1)
				{
					if (func_157(unk_0x0FA8183DAD2B3203(), iVar2, 5f, 1))
					{
						if (!func_237())
						{
							func_232(iVar0);
							bVar1 = true;
						}
					}
				}
				if (!iLocal_1048[iVar0])
				{
					if (iVar0 == 0)
					{
						func_98(&uLocal_879, iVar0, iVar2, "MICHAEL", 0, 1);
					}
					else if (iVar0 == 1)
					{
						func_98(&uLocal_879, iVar0, iVar2, "FRANKLIN", 0, 1);
					}
					else if (iVar0 == 2)
					{
						func_98(&uLocal_879, iVar0, iVar2, "TREVOR", 0, 1);
					}
					iLocal_1048[iVar0] = 1;
				}
			}
			if (!func_224(iVar2))
			{
				if (func_78(iVar2, 0))
				{
					if (func_231(iVar2) || func_229(iVar2))
					{
						if (func_228(iVar2, 0))
						{
							unk_0xE5C667CF3B4642D2(iVar2, 1, 1);
							unk_0xCC94EE23853F38E4(iVar2, true);
							unk_0xC6612209077465DD(iVar2);
						}
					}
				}
			}
			else if (unk_0x532AFD85DAA91F63(iVar2, 1))
			{
				if (func_231(iVar2))
				{
					if (unk_0x411C065ADB822CD9(iVar2, -1273030092) != 1 && unk_0x411C065ADB822CD9(iVar2, -1273030092) != 0)
					{
						if (unk_0x535C1E10CE002C3D(623.3781f, -172.26f, 1700.732f, -2115.843f))
						{
							unk_0xD67C82BBC9A488A6(iVar2, unk_0x4D57D3E5ECE15A41(iVar2, 0), Local_827, 20f, 0, 0, 34340901, 2f, 10f);
						}
						else
						{
							unk_0x960CDFA3CBFD7760(623.3781f, -172.26f, 1700.732f, -2115.843f);
						}
					}
				}
				else if (func_229(iVar2))
				{
					if (func_37(Local_868.f_0))
					{
						if (!func_157(iVar2, Local_868.f_0, 17f, 1))
						{
							if (unk_0x411C065ADB822CD9(iVar2, -1273030092) != 1 && unk_0x411C065ADB822CD9(iVar2, -1273030092) != 0)
							{
								unk_0xF7D74EF517BDB7D0(iVar2, unk_0x4D57D3E5ECE15A41(iVar2, 0), Local_868.f_0, 3, 20f, 786468, 2f, 0.5f, 1);
							}
						}
					}
				}
				else
				{
					func_223(iVar2);
				}
			}
		}
		iVar0++;
	}
}

int func_228(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		iVar0 = func_29(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_79(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0xA2BC31158C8CEFD2(Global_94553, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x0FA8183DAD2B3203())
			{
				return 0;
			}
		}
		if (unk_0xA2BC31158C8CEFD2(Global_94552, iVar0))
		{
			unk_0xE4A2B85AD2F9993F(iParam0, 0, 0);
			unk_0xDA778D908FD69EEE(iParam0, 0, 1);
			unk_0xA1E7A40E1F56E511(&Global_94553, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_229(int iParam0)
{
	int iVar0;
	
	if (!func_230())
	{
		if ((!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) && unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0)) && unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) == 0)
		{
			iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
			if (func_37(iVar0))
			{
				if (unk_0x759DEE4D113EC07E(iVar0, joaat("trash")))
				{
					return 0;
				}
				if (unk_0x95ED3BD0F52D542A(iParam0, iVar0, 0) && unk_0x300C62F79A4441EB(iVar0, -1, 0) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_230()
{
	if (!unk_0x393E9918BC37548A())
	{
		return Global_96177.f_44 == 1;
	}
	return 0;
}

int func_231(int iParam0)
{
	if (!func_230())
	{
		if ((unk_0xD4B321D9096B01FC(Local_868.f_0) && unk_0xD960230552BC4165(Local_868.f_0, 0)) && !unk_0xC49563EAE7AACA6C(Local_868.f_0, Local_827, 2f, 2f, 2f, 0, 1, 0))
		{
			if ((!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) && unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), Local_868.f_0, 0)) && unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) == 0)
			{
				if (unk_0x95ED3BD0F52D542A(iParam0, Local_868.f_0, 0) && unk_0x300C62F79A4441EB(Local_868.f_0, -1, 0) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_232(int iParam0)
{
	if (iLocal_683 > 1)
	{
		if (iLocal_685 > 0)
		{
			if (!unk_0xA2BC31158C8CEFD2(Local_688[iParam0 /*8*/].f_7, 0) && iLocal_686 == 1)
			{
				if (!unk_0xA99E47125B44409B())
				{
					if (func_236(&uLocal_879, cLocal_878, Local_688[iParam0 /*8*/][0], 8, 0, 0, 0))
					{
						unk_0xA1E7A40E1F56E511(&(Local_688[iParam0 /*8*/].f_7), 0);
					}
				}
			}
		}
		else
		{
			if ((unk_0xA2BC31158C8CEFD2(Local_688[iParam0 /*8*/].f_7, 0) && !unk_0xA2BC31158C8CEFD2(Local_688[iParam0 /*8*/].f_7, 1)) && iLocal_686 == 1)
			{
				if (!unk_0xA99E47125B44409B())
				{
					if (func_236(&uLocal_879, cLocal_878, Local_688[iParam0 /*8*/][1], 7, 0, 0, 0))
					{
						unk_0xA1E7A40E1F56E511(&(Local_688[iParam0 /*8*/].f_7), 1);
					}
				}
			}
			if (!unk_0xA2BC31158C8CEFD2(Local_688[iParam0 /*8*/].f_7, 5))
			{
				if (func_235(iLocal_874, Local_827, 1) < 15f && iLocal_686 == 1)
				{
					if (!unk_0xA99E47125B44409B())
					{
						if (func_236(&uLocal_879, cLocal_878, Local_688[iParam0 /*8*/][5], 7, 0, 0, 0))
						{
							unk_0xA1E7A40E1F56E511(&(Local_688[iParam0 /*8*/].f_7), 5);
						}
					}
				}
			}
			switch (func_29(unk_0x0FA8183DAD2B3203()))
			{
				case 0:
					if (iParam0 == 1)
					{
						if (!func_234(2))
						{
							func_233(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_234(4))
						{
							func_233(iParam0, 4);
						}
					}
					break;
				
				case 1:
					if (iParam0 == 0)
					{
						if (!func_234(2))
						{
							func_233(iParam0, 2);
						}
					}
					else if (iParam0 == 2)
					{
						if (!func_234(3))
						{
							func_233(iParam0, 3);
						}
					}
					break;
				
				case 2:
					if (iParam0 == 1)
					{
						if (!func_234(3))
						{
							func_233(iParam0, 3);
						}
					}
					else if (iParam0 == 0)
					{
						if (!func_234(4))
						{
							func_233(iParam0, 4);
						}
					}
					break;
				}
			}
	}
}

void func_233(int iParam0, int iParam1)
{
	if (!unk_0xA2BC31158C8CEFD2(Local_688[iParam0 /*8*/].f_7, iParam1))
	{
		if (iLocal_1052 != -1)
		{
			if (!unk_0xA99E47125B44409B())
			{
				if (func_236(&uLocal_879, cLocal_878, Local_688[iParam0 /*8*/][iParam1], 7, 0, 0, 0))
				{
					unk_0xA1E7A40E1F56E511(&(Local_688[iParam0 /*8*/].f_7), iParam1);
				}
			}
		}
		else if (!func_237() && !unk_0xA99E47125B44409B())
		{
			iLocal_1052 = unk_0x9B35D07DCD0F0B43();
		}
		else
		{
			iLocal_1052 = -1;
		}
	}
}

int func_234(int iParam0)
{
	if ((unk_0xA2BC31158C8CEFD2(Local_688[0 /*8*/].f_7, iParam0) || unk_0xA2BC31158C8CEFD2(Local_688[1 /*8*/].f_7, iParam0)) || unk_0xA2BC31158C8CEFD2(Local_688[2 /*8*/].f_7, iParam0))
	{
		return 1;
	}
	return 0;
}

float func_235(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xF4B969E0807E76C7(iParam0, 0))
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xACE5E491FC1B0D37(iParam0, 0) };
	}
	return unk_0xD34AF93E9BCF12F0(Var0, Param1, iParam4);
}

bool func_236(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_95(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_20812 = 0;
	Global_20814 = 0;
	Global_20819 = 0;
	Global_21796 = 0;
	Global_21798 = 0;
	Global_21802 = 0;
	Global_2621441 = 0;
	return func_83(sParam2, iParam3, 0);
}

int func_237()
{
	if (Global_20805 != 0 || unk_0x04C7A9862FF737E9())
	{
		return 1;
	}
	return 0;
}

void func_238()
{
	if (func_107(unk_0x0FA8183DAD2B3203(), Local_827, 220f))
	{
		if (!iLocal_877 && !func_107(unk_0x0FA8183DAD2B3203(), Local_827, 100f))
		{
			iLocal_877 = func_153(&uLocal_876, joaat("cavalcade2"), 1370.912f, -2060.055f, 50.9983f, 312.8686f, 1);
		}
	}
	else if (func_107(unk_0x0FA8183DAD2B3203(), Local_827, 240f))
	{
		if (iLocal_877)
		{
			func_6(&uLocal_876);
			iLocal_877 = 0;
		}
	}
}

void func_239()
{
	func_215(&iLocal_874, &uLocal_875, &iLocal_686, &iLocal_822, &iLocal_821, Local_827, Local_868.f_0, 0, 1090519040);
	func_214();
	func_155();
	switch (iLocal_684)
	{
		case 0:
			if (func_122(iLocal_683, bLocal_28))
			{
				func_125(&iLocal_821, Local_868.f_0, 1);
				func_121("PRA_GOVAN", &iLocal_820);
				iLocal_684 = 1;
			}
			break;
		
		case 1:
			func_227();
			if (func_37(Local_868.f_0))
			{
				func_242(&uLocal_671, Local_868.f_0, 0, 0, 1, 1, 1);
			}
			if (!bLocal_833)
			{
				if (func_341(Local_840.f_0) && unk_0xCFE0D93B7A6809C1(Local_840.f_0))
				{
					func_241();
				}
				if (func_341(Local_854.f_0) && unk_0xCFE0D93B7A6809C1(Local_854.f_0))
				{
					func_241();
				}
			}
			if (func_37(iLocal_874))
			{
				if ((iLocal_686 == 1 || iLocal_686 == 2) || iLocal_686 == 3)
				{
					unk_0xE9A303771BF0C29A(5f, 5f, 4);
					iLocal_684 = 2;
				}
			}
			break;
		
		case 2:
			func_7(&iLocal_821);
			func_145(&uLocal_671, 0, 0);
			func_110(0);
			break;
		
		case 3:
			func_8(&Local_840);
			func_8(&Local_854);
			if (func_37(Local_868.f_0))
			{
				unk_0xB425E338F85508A5(unk_0x0FA8183DAD2B3203(), Local_868.f_0, -1);
			}
			func_240(1);
			func_40(1, 1, 1);
			iLocal_684 = 1;
			break;
	}
}

void func_240(bool bParam0)
{
	unk_0x31A175F9EC8E421C(1, bParam0);
	unk_0x31A175F9EC8E421C(2, bParam0);
	unk_0x31A175F9EC8E421C(3, bParam0);
	unk_0x31A175F9EC8E421C(4, bParam0);
	unk_0x31A175F9EC8E421C(5, bParam0);
	if (bParam0)
	{
		unk_0xB7F4DA52DE3AAF24(1f);
		unk_0x60F310C72311BCA8(5);
	}
	else
	{
		unk_0x60F310C72311BCA8(0);
		unk_0xB7F4DA52DE3AAF24(0f);
	}
}

void func_241()
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
	bLocal_833 = func_236(&uLocal_879, "FBIPRAU", sVar0, 7, 0, 0, 0);
	if (bLocal_833)
	{
		unk_0xE9A303771BF0C29A(8f, 8f, 4);
	}
}

void func_242(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_243(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_243(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	func_244(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_244(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
	{
		func_145(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_245(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_245(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xE5409F09171D0BEE())
	{
		if (unk_0x9B35D07DCD0F0B43() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x79FCE4565761C974(iVar0))
	{
		if (!unk_0x393E9918BC37548A())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_146(iVar0))
	{
		func_269();
	}
	if (func_268(iParam1) && unk_0x0975E9E48EA2CC7B(iParam1))
	{
		iVar1 = 0;
		if (unk_0x4625051E51BA911B(iParam1))
		{
			unk_0x82A2F38195C2E953(unk_0x3D464779B732760F(iParam1));
			unk_0x443D0DA3964A4371(unk_0x3D464779B732760F(iParam1), 1);
			if (unk_0x9DEA7CC8D17DB89A(unk_0x3D464779B732760F(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x905FBA24E7FA8D23(iParam1))
		{
			unk_0x374DFF939ADCCC9A(unk_0xD05B0DA3866791D0(iParam1));
			if (unk_0x2C7F1A82D57EBB18(unk_0xD05B0DA3866791D0(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x0F100E7952E44923(iParam1))
		{
			unk_0xA0CB3588697ABD83(unk_0xF0EFBC96AEA7ABA1(iParam1));
			if (unk_0xB12EB2EC44BBAC6B(unk_0xF0EFBC96AEA7ABA1(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xE5409F09171D0BEE())
		{
			if (func_263(uParam0, bParam7, bParam9, 0))
			{
				func_260(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_250(iVar0))
				{
					if ((unk_0x79FCE4565761C974(uParam0->f_3) && !unk_0x79FCE4565761C974(iVar0)) && unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
					{
						if ((iVar1 && !unk_0x0945988C02AF3025()) && uParam8)
						{
							if (!func_146(iVar0))
							{
								func_249(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x2553916E420E8EF0("CMN_HINT", iVar0))
								{
									func_248(1);
								}
							}
						}
					}
				}
			}
			else if (func_250(iVar0))
			{
				if (unk_0x79FCE4565761C974(uParam0->f_3) && !unk_0x79FCE4565761C974(iVar0))
				{
					if (((unk_0x62E95D2FED28E41C(iParam1) && iVar1) && !unk_0x0945988C02AF3025()) && uParam8)
					{
						if (!func_146(iVar0))
						{
							func_249(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x2553916E420E8EF0("CMN_HINT", iVar0))
							{
								func_248(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x79FCE4565761C974(sParam5))
			{
				if (func_146(sParam5))
				{
					unk_0x0D23E3918F7AF11B(1);
				}
			}
			if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
			{
				if (unk_0xE6B36186AADE8F35(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x328DC5757076B0D5(3) == 3 || unk_0x328DC5757076B0D5(3) == 4)
					{
						func_145(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x328DC5757076B0D5(6) == 3 || unk_0x328DC5757076B0D5(6) == 4)
					{
						func_145(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x328DC5757076B0D5(4) == 3 || unk_0x328DC5757076B0D5(4) == 4)
					{
						func_145(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x15B60611100CF0E3(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x328DC5757076B0D5(5) == 3 || unk_0x328DC5757076B0D5(5) == 4)
					{
						func_145(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xFE3D760E77944F94(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x328DC5757076B0D5(2) == 3 || unk_0x328DC5757076B0D5(2) == 4)
					{
						func_145(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xC7EAF5DCD508410E() == 3 || unk_0xC7EAF5DCD508410E() == 4)
				{
					func_145(uParam0, iVar0, 1);
				}
			}
			if (!func_263(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_247(uParam0))
				{
					func_246(uParam0);
				}
			}
		}
	}
	else
	{
		func_145(uParam0, iVar0, 0);
	}
}

void func_246(var uParam0)
{
	if (func_268(unk_0x0FA8183DAD2B3203()))
	{
		unk_0xECC035CAE5B59E06(unk_0x0FA8183DAD2B3203());
	}
	if (unk_0xE5409F09171D0BEE())
	{
		unk_0x538F8D7D228037B6(1);
		unk_0xAB681892AAC7844A(0);
		unk_0x8E3496DF5BF7F24D("HINT_CAM_SCENE");
		unk_0xF530F03252D7AEE0("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x3E5A3FD805488EB9("FocusOut", 0, 0);
			unk_0x9964F5BBD9415AB7(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_247(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x9B35D07DCD0F0B43()
		{
			return 1;
		}
	}
	return 0;
}

int func_248(bool bParam0)
{
	switch (Global_41396)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_111560.f_10044.f_100++;
			}
			return Global_111560.f_10044.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_111560.f_10044.f_101++;
			}
			return Global_111560.f_10044.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_111560.f_10044.f_102++;
			}
			return Global_111560.f_10044.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_249(char* sParam0, int iParam1)
{
	unk_0xD95C12E1062B7D5E(sParam0);
	unk_0x40DC0B0D5BD91E06(0, 0, 1, iParam1);
}

int func_250(char* sParam0)
{
	if (!func_251(1, 1, 0))
	{
		if ((!unk_0x9591DE0F00127F2A(sParam0) && func_146(sParam0)) || func_146("CMN_HINT"))
		{
			unk_0x0D23E3918F7AF11B(1);
		}
		return 0;
	}
	switch (Global_41396)
	{
		case 0:
		case 3:
			if (func_248(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_248(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_248(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_251(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x16587C6F71675106())
	{
		return 0;
	}
	if (func_69(0))
	{
		return 0;
	}
	if (func_259())
	{
		return 0;
	}
	if (unk_0x4ABA84DE907E0474())
	{
		return 0;
	}
	if (Global_73784)
	{
		return 0;
	}
	if (unk_0x222F76006659B0EB(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_58652)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
		{
			if (unk_0xE6B36186AADE8F35(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x328DC5757076B0D5(3) == 3 || unk_0x328DC5757076B0D5(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x328DC5757076B0D5(6) == 3 || unk_0x328DC5757076B0D5(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x328DC5757076B0D5(4) == 3 || unk_0x328DC5757076B0D5(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x15B60611100CF0E3(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x328DC5757076B0D5(5) == 3 || unk_0x328DC5757076B0D5(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xFE3D760E77944F94(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0x328DC5757076B0D5(2) == 3 || unk_0x328DC5757076B0D5(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xC7EAF5DCD508410E() == 3 || unk_0xC7EAF5DCD508410E() == 4)
			{
				return 0;
			}
			if (unk_0x9522187D5FDEA6E4())
			{
				return 0;
			}
		}
	}
	if ((func_258() || func_257(Global_4456448.f_190930)) || func_256())
	{
		if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
		{
			iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
			iVar1 = func_255(unk_0x0FA8183DAD2B3203(), 0);
			if (((unk_0x2068C310844A89D8(iVar0, iVar1) || (unk_0x7F375072508F738F(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x7F375072508F738F(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x7F375072508F738F(iVar0) == joaat("riot2") && iVar1 == 0) && func_254(iVar0, 10)) && unk_0xF05B9E4C6631EA28(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1686915)
	{
		return 0;
	}
	if (func_252(unk_0x7C7787D2D7139A85()))
	{
		return 0;
	}
	return 1;
}

int func_252(int iParam0)
{
	if (iParam0 != func_88())
	{
		if (func_253(iParam0, 1, 1))
		{
			return Global_2424073[iParam0 /*421*/].f_309.f_5 != -1;
		}
		else if ((Global_1312873 && iParam0 == unk_0x7C7787D2D7139A85()) && func_253(iParam0, 1, 0))
		{
			return Global_2424073[iParam0 /*421*/].f_309.f_5 != -1;
		}
	}
	return 0;
}

int func_253(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xD56C8C2B75BF9665(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0xD699DB8EAB756F25(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437549.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_254(int iParam0, int iParam1)
{
	if (unk_0xD960230552BC4165(iParam0, 0))
	{
		if (unk_0x6AA7F87D45193D03(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0x94FA12918F306658(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_255(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x2BF5E63466422C38(iParam0))
	{
		if (unk_0x5294582CE404D3F4(iParam0, iParam1))
		{
			iVar0 = unk_0x4D57D3E5ECE15A41(iParam0, iParam1);
			if (unk_0xD4B321D9096B01FC(iVar0))
			{
				iVar1 = unk_0x26BC048DC7E3F551(unk_0x7F375072508F738F(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xBAA38708D7439CA7(iVar0, iVar3, 0))
					{
						if (unk_0x300C62F79A4441EB(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_256()
{
	return Global_2448961.f_17;
}

bool func_257(int iParam0)
{
	return iParam0 == 51;
}

var func_258()
{
	return Global_2448961.f_16;
}

bool func_259()
{
	return unk_0x9B35D07DCD0F0B43() <= Global_22350.f_5878 + 100;
}

void func_260(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1319113 == 1)
	{
		return;
	}
	if (unk_0xF4B969E0807E76C7(iParam1, 0))
	{
		func_145(uParam0, 0, 0);
	}
	if (func_15(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x4625051E51BA911B(iParam1))
		{
			iVar0 = unk_0x3D464779B732760F(iParam1);
			if (!unk_0x5294582CE404D3F4(iVar0, 0))
			{
				if (unk_0x7FA2061748BA645E(iVar0))
				{
					if (!func_261())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x0F81A86FA23D44FA(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x538F8D7D228037B6(0);
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
	unk_0xFFFB9D39E6C8D02D(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x6E2920E14F5F962C(unk_0x0FA8183DAD2B3203(), iParam1, -1, iVar3, iVar4);
	unk_0x3E5A3FD805488EB9("FocusIn", 0, 0);
	unk_0x7D17F1A2E0EEDBB9("HINT_CAM_SCENE");
	unk_0x9964F5BBD9415AB7(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x9B35D07DCD0F0B43();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_261()
{
	return func_262(unk_0x7C7787D2D7139A85());
}

int func_262(int iParam0)
{
	if (unk_0x7F375072508F738F(unk_0x23625FE58BACEBFD(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_263(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x9B35D07DCD0F0B43() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
				{
					if (func_267(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_266(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_266(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_267(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_247(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x9B35D07DCD0F0B43() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
					{
						if (!func_267(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_266(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_266(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_267(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9B35D07DCD0F0B43();
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
				if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
				{
					if (!func_267(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_266(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_266(bParam1, bParam2, bParam3) || unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1) || unk_0x5AFC77A2CEA0DE1E(unk_0x0FA8183DAD2B3203(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_267(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x9B35D07DCD0F0B43() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1))
					{
						if (func_265(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_264(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1) || func_264(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 1) || unk_0x5AFC77A2CEA0DE1E(unk_0x0FA8183DAD2B3203(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_265(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_247(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_251(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_269();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_264(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_251(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (!unk_0x5F5EDE61626C58B9(unk_0x7C7787D2D7139A85()))
		{
			unk_0x572062A62138FBA2(0, 140, 1);
			unk_0x572062A62138FBA2(0, 80, 1);
			if (unk_0x38CEC20C56D8586B(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_265(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_251(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x572062A62138FBA2(0, 80, 1);
		if (unk_0xD04F46D3CD9D946F())
		{
			if (unk_0x38CEC20C56D8586B(0, 80))
			{
				unk_0x538F8D7D228037B6(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_266(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_251(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		if (!unk_0x5F5EDE61626C58B9(unk_0x7C7787D2D7139A85()))
		{
			unk_0x572062A62138FBA2(0, 140, 1);
			unk_0x572062A62138FBA2(0, 80, 1);
			if (unk_0x0B6782DED1C4B3B1(0, 80) && unk_0x9B35D07DCD0F0B43() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_267(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_251(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
	{
		unk_0x572062A62138FBA2(0, 80, 1);
		if (unk_0xD04F46D3CD9D946F())
		{
			if (unk_0x0B6782DED1C4B3B1(0, 80) && unk_0x9B35D07DCD0F0B43() > Global_116)
			{
				unk_0x538F8D7D228037B6(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_268(int iParam0)
{
	if (unk_0xD4B321D9096B01FC(iParam0))
	{
		if (unk_0x905FBA24E7FA8D23(iParam0))
		{
			if (unk_0xD960230552BC4165(unk_0xD05B0DA3866791D0(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x4625051E51BA911B(iParam0))
		{
			if (!unk_0x2BF5E63466422C38(unk_0x3D464779B732760F(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x0F100E7952E44923(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_269()
{
	unk_0xA1E7A40E1F56E511(&Global_7357, 4);
}

void func_270()
{
	switch (iLocal_684)
	{
		case 0:
			if (func_122(iLocal_683, 0))
			{
				func_284();
				func_282(33);
				unk_0x60F310C72311BCA8(2);
				unk_0xB7F4DA52DE3AAF24(0.1f);
				if (func_357())
				{
					func_279(0, -1, 1);
					func_41(500, 1);
					iLocal_684 = 2;
				}
				else
				{
					if (func_33(0))
					{
						func_124(unk_0x0FA8183DAD2B3203(), 1228.635f, -348.4277f, 68.0929f, 86.7244f);
						func_272(1228.635f, -348.4277f, 68.0929f, 1112014848, 12, 5000, 0, 0);
						func_41(500, 1);
					}
					func_271();
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
			func_110(0);
			break;
	}
}

void func_271()
{
}

void func_272(struct<3> Param0, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	var uVar0;
	int iVar1;
	
	uVar0 = unk_0xB455EDED5B2FA6ED(Param0, iParam3, iParam4, 127);
	if (unk_0x257687A186581E55(uVar0))
	{
		iVar1 = (unk_0x9B35D07DCD0F0B43() + iParam5);
		while (!unk_0xF3F9A773BB9105E8(uVar0) && unk_0x9B35D07DCD0F0B43() < iVar1)
		{
			if (bParam7)
			{
				func_274(0);
			}
			if (bParam6)
			{
				func_273();
			}
			unk_0x4EDE34FBADD967A6(0);
		}
		if (unk_0x9B35D07DCD0F0B43() < iVar1)
		{
		}
		unk_0xD28D0A0B38E43BAC(uVar0);
	}
}

void func_273()
{
	Global_22211.f_6 = 1;
}

void func_274(int iParam0)
{
	if (func_278())
	{
		return;
	}
	if (!Global_19486.f_1 == 1)
	{
		if (func_69(0))
		{
			func_275(iParam0);
		}
		unk_0xA1E7A40E1F56E511(&Global_7357, 2);
	}
}

void func_275(int iParam0)
{
	if (func_278())
	{
		return;
	}
	if (Global_19664)
	{
		if (func_277())
		{
			func_276(1, 1);
		}
		else
		{
			func_276(0, 0);
		}
	}
	if (Global_19486.f_1 == 10 || Global_19486.f_1 == 9)
	{
		unk_0xA1E7A40E1F56E511(&Global_7357, 16);
	}
	if (unk_0x31634D65216B86B6())
	{
		unk_0x623942A4F366F9BB(false);
	}
	Global_20805 = 5;
	if (iParam0 == 1)
	{
		unk_0xA1E7A40E1F56E511(&Global_7356, 30);
	}
	else
	{
		unk_0x3B76114EC84D5812(&Global_7356, 30);
	}
	if (!func_51())
	{
		Global_19486.f_1 = 3;
	}
}

void func_276(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_69(0))
		{
			Global_19664 = 1;
			if (bParam1)
			{
				unk_0xB1B52CCC3333E09F(&Global_19423);
			}
			Global_19414 = { Global_19432[Global_19431 /*3*/] };
			unk_0x4577629BF7B43F7F(Global_19414);
		}
	}
	else if (Global_19664 == 1)
	{
		Global_19664 = 0;
		Global_19414 = { Global_19439[Global_19431 /*3*/] };
		if (bParam1)
		{
			unk_0x4577629BF7B43F7F(Global_19423);
		}
		else
		{
			unk_0x4577629BF7B43F7F(Global_19414);
		}
	}
}

bool func_277()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 5);
}

bool func_278()
{
	return unk_0xA2BC31158C8CEFD2(Global_1687880, 19);
}

void func_279(int iParam0, int iParam1, int iParam2)
{
	if (func_357() && func_281())
	{
		while (Global_98664 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x269298D09D57BFCF(0);
		if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
		{
			if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
			{
				unk_0x2D93ABBD68F7B1FF(unk_0x0FA8183DAD2B3203());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
			{
				if (unk_0xD4B321D9096B01FC(iParam0))
				{
					if (unk_0xD960230552BC4165(iParam0, 0))
					{
						if (!unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iParam0, 0))
						{
							unk_0xB425E338F85508A5(unk_0x0FA8183DAD2B3203(), iParam0, iParam1);
							unk_0xA291E27354439AE9(0f, 1065353216);
							unk_0xB489E71A45CDC02F(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
			{
				unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), 1, 0);
			}
		}
		unk_0x743D1F9F153AE1CB();
		func_280(0);
	}
}

void func_280(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xA1E7A40E1F56E511(&(Global_98669.f_20), 13);
	}
	else
	{
		unk_0x3B76114EC84D5812(&(Global_98669.f_20), 13);
	}
}

bool func_281()
{
	return unk_0xA2BC31158C8CEFD2(Global_98669.f_20, 13);
}

void func_282(int iParam0)
{
	Global_94554 = 0;
	switch (iParam0)
	{
		case 72:
			func_283(2);
			func_283(4);
			break;
		
		case 73:
			func_283(0);
			func_283(1);
			func_283(7);
			break;
		
		case 92:
			func_283(10);
			func_283(9);
			func_283(13);
			func_283(6);
			break;
		
		case 68:
			func_283(11);
			break;
		
		case 78:
			func_283(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_283(3);
			break;
		
		default:
			break;
	}
}

void func_283(int iParam0)
{
	unk_0xA1E7A40E1F56E511(&Global_94554, iParam0);
}

void func_284()
{
	int iVar0;
	
	iVar0 = unk_0x9B79A29933E4A8FA();
	if (unk_0xD4B321D9096B01FC(iVar0))
	{
		if (unk_0xD960230552BC4165(iVar0, 0))
		{
			func_285(iVar0, unk_0xACE5E491FC1B0D37(iVar0, 1), unk_0xD2809C7F7FD79247(iVar0), 24, 0);
		}
	}
}

void func_285(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0xD4B321D9096B01FC(iParam0) && unk_0xD960230552BC4165(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0xD4B321D9096B01FC(Global_75396.f_484[25]) && unk_0xD960230552BC4165(Global_75396.f_484[25], 0))
			{
				if (Global_75396.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x01412376937BFF5B(iParam0) || unk_0x7F375072508F738F(iParam0) == joaat("bus")) || unk_0x7F375072508F738F(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_332(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_327(iParam0, &Var0);
		if (func_15(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xACE5E491FC1B0D37(iParam0, 1) };
			uParam4 = unk_0xD2809C7F7FD79247(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0xA8C462EF7D9DC564(unk_0x0037AFCBDC61F351()) != joaat("vehicle_gen_controller"))
			{
				Global_76384 = unk_0xA8C462EF7D9DC564(unk_0x0037AFCBDC61F351());
			}
		}
		func_320(iParam5, &Var0, Param1, uParam4, func_326(iParam0));
		func_286(iParam5, iParam0, 0);
	}
}

void func_286(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_317(&(Global_75396.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xA2BC31158C8CEFD2(Global_75396.f_555[0 /*21*/].f_9, 12) && !unk_0xA2BC31158C8CEFD2(Global_75396.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_75396.f_555[0 /*21*/].f_4 != unk_0x7F375072508F738F(iParam1))
		{
			return;
		}
	}
	if (Global_76303 != -1 && Global_76303 != iParam0)
	{
		return;
	}
	if (unk_0xD4B321D9096B01FC(iParam1))
	{
		if (unk_0xD960230552BC4165(iParam1, 0))
		{
			if (!unk_0x00123AB82C5FAC28(iParam1))
			{
				unk_0xE5C667CF3B4642D2(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_111560.f_32744.f_4801 = func_306();
			}
			if (iParam1 != Global_75396.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_305(iParam0);
					if ((unk_0xD4B321D9096B01FC(iVar0) && unk_0xD960230552BC4165(iVar0, 0)) && iParam1 != iVar0)
					{
						func_287(iVar0, 145);
					}
				}
				Global_76302 = iParam1;
				Global_76303 = iParam0;
				Global_76304 = iParam2;
			}
		}
	}
}

void func_287(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_288(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x300C62F79A4441EB(iParam0, -1, 0);
		if (!unk_0xD4B321D9096B01FC(iVar0))
		{
			iVar0 = unk_0x30766BC434AF2797(iParam0, -1);
		}
		if (unk_0xD4B321D9096B01FC(iVar0) && !unk_0x2BF5E63466422C38(iVar0))
		{
			if (unk_0x7F375072508F738F(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x7F375072508F738F(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x7F375072508F738F(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_111560.f_2358.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x7F375072508F738F(iParam0) == Global_111560.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x9591DE0F00127F2A(&(Global_111560.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x2553916E420E8EF0(unk_0x8D762F81855E767B(iParam0), &(Global_111560.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_111560.f_32744.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_111560.f_32744.f_5592[iVar1] = iVar2;
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
		if (unk_0x7F375072508F738F(iParam0) == Global_111560.f_32744.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x9591DE0F00127F2A(&(Global_111560.f_32744.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x2553916E420E8EF0(unk_0x8D762F81855E767B(iParam0), &(Global_111560.f_32744.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_111560.f_32744.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_111560.f_32744.f_5590 = iParam1;
	Global_76301 = iParam0;
	Global_111560.f_32744.f_5588 = 1;
	func_327(iParam0, &(Global_111560.f_32744.f_5510));
}

int func_288(int iParam0)
{
	if ((((((((((!unk_0xD4B321D9096B01FC(iParam0) || !unk_0xD960230552BC4165(iParam0, 0)) || func_303(iParam0, 0, 0)) || func_303(iParam0, 1, 0)) || func_303(iParam0, 2, 0)) || func_326(iParam0) != 145) || func_302(iParam0)) || func_301(iParam0)) || func_300(iParam0)) || func_299(iParam0)) || !func_289(unk_0x7F375072508F738F(iParam0)))
	{
		if (func_301(iParam0))
		{
		}
		if (func_301(iParam0))
		{
		}
		if (func_303(iParam0, 0, 0))
		{
		}
		if (func_303(iParam0, 1, 0))
		{
		}
		if (func_303(iParam0, 2, 0))
		{
		}
		if (func_326(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_289(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_290(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x5EA23EAAAD4E34BF(iParam0) || unk_0x31337ABC07783F10(iParam0)) || unk_0xDC118E11A4081E9A(iParam0)) || unk_0x89771D1B3DD40E7A(iParam0))
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

int func_290(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x7576BED9351136C1(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x393E9918BC37548A()) || (iParam0 == joaat("buffalo3") && !unk_0x393E9918BC37548A())) || (iParam0 == joaat("gauntlet2") && !unk_0x393E9918BC37548A())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x393E9918BC37548A()))
	{
		if (!func_298())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x77B48D1493D695CC())
		{
			if (unk_0x100A6954526E9D29(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xC095980A527DC92E(Var1.f_0))
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
		if ((((!func_297() && !func_296()) && !func_295()) && !func_294()) && !func_298())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x77BA37DB22C66465() || unk_0xE434AB6E3DE89861()) || unk_0x39FDED461BF385C3())
		{
		}
		else if (!func_295())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_293(iParam0))
		{
			return 0;
		}
	}
	if (!func_291(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_291(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_292())
	{
		return 1;
	}
	unk_0xF6DFB55D0FF92B17(&iVar0, &uVar1);
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
	if (!unk_0x83F1366905AB3447(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_292()
{
	if (unk_0xE434AB6E3DE89861())
	{
		return unk_0x60E2BDB67AA16B1C();
	}
	return 0;
}

int func_293(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2507711)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x71EC776E812C6A0A();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6599 && !Global_262145.f_12910) && iVar1 < Global_262145.f_12911)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14210 && iVar1 < Global_262145.f_14222)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14206 && iVar1 < Global_262145.f_14218)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14207 && iVar1 < Global_262145.f_14219)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14208 && iVar1 < Global_262145.f_14220)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14209 && iVar1 < Global_262145.f_14221)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14211 && iVar1 < Global_262145.f_14223)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14212 && iVar1 < Global_262145.f_14215)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14213 && iVar1 < Global_262145.f_14216)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14214 && iVar1 < Global_262145.f_14217)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16841 && iVar1 < Global_262145.f_16806)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16836 && iVar1 < Global_262145.f_16801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16840 && iVar1 < Global_262145.f_16805)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16839 && iVar1 < Global_262145.f_16804)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16833 && iVar1 < Global_262145.f_16798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16834 && iVar1 < Global_262145.f_16799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16837 && iVar1 < Global_262145.f_16802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16838 && iVar1 < Global_262145.f_16803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16835 && iVar1 < Global_262145.f_16800)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16843 && iVar1 < Global_262145.f_16808)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16844 && iVar1 < Global_262145.f_16809)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16832 && iVar1 < Global_262145.f_16797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16831 && iVar1 < Global_262145.f_16796)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16830 && iVar1 < Global_262145.f_16795)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16842 && iVar1 < Global_262145.f_16807)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16845 && iVar1 < Global_262145.f_16810)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16846 && iVar1 < Global_262145.f_16811)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16847 && iVar1 < Global_262145.f_16812)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16848 && iVar1 < Global_262145.f_16813)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16995 && iVar1 < Global_262145.f_17017)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16996 && iVar1 < Global_262145.f_17018)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16997 && iVar1 < Global_262145.f_17019)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16998 && iVar1 < Global_262145.f_17020)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16999 && iVar1 < Global_262145.f_17021)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17000 && iVar1 < Global_262145.f_17022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17002 && iVar1 < Global_262145.f_17023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17003 && iVar1 < Global_262145.f_17024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17004 && iVar1 < Global_262145.f_17025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17005 && iVar1 < Global_262145.f_17026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17006 && iVar1 < Global_262145.f_17027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17007 && iVar1 < Global_262145.f_17028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17008 && iVar1 < Global_262145.f_17029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17014 && iVar1 < Global_262145.f_17036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17011 && iVar1 < Global_262145.f_17032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17012 && iVar1 < Global_262145.f_17033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17013 && iVar1 < Global_262145.f_17034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17001 && iVar1 < Global_262145.f_17035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17009 && iVar1 < Global_262145.f_17030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17010 && iVar1 < Global_262145.f_17031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18647 && iVar1 < Global_262145.f_18744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18648 && iVar1 < Global_262145.f_18745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18649 && iVar1 < Global_262145.f_18746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18650 && iVar1 < Global_262145.f_18747)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18651 && iVar1 < Global_262145.f_18748)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18652 && iVar1 < Global_262145.f_18749)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18653 && iVar1 < Global_262145.f_18750)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18654 && iVar1 < Global_262145.f_18751)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18655 && iVar1 < Global_262145.f_18752)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18656 && iVar1 < Global_262145.f_18753)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18657 && iVar1 < Global_262145.f_18754)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18658 && iVar1 < Global_262145.f_18755)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18659 && iVar1 < Global_262145.f_18756)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18660 && iVar1 < Global_262145.f_18757)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18661 && iVar1 < Global_262145.f_18758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18662 && iVar1 < Global_262145.f_18759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18663 && iVar1 < Global_262145.f_18760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18664 && iVar1 < Global_262145.f_18761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18665 && iVar1 < Global_262145.f_18762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18666 && iVar1 < Global_262145.f_18763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19728 && iVar1 < Global_262145.f_19724)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19729 && iVar1 < Global_262145.f_19725)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19730 && iVar1 < Global_262145.f_19726)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19731 && iVar1 < Global_262145.f_19727)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20607 && iVar1 < Global_262145.f_20615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20608 && iVar1 < Global_262145.f_20616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20609 && iVar1 < Global_262145.f_20617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20610 && iVar1 < Global_262145.f_20618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20611 && iVar1 < Global_262145.f_20619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20612 && iVar1 < Global_262145.f_20620)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21384 && iVar1 < Global_262145.f_21404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21396 && iVar1 < Global_262145.f_21416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21387 && iVar1 < Global_262145.f_21407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21397 && iVar1 < Global_262145.f_21417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21385 && iVar1 < Global_262145.f_21405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21401 && iVar1 < Global_262145.f_21421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21399 && iVar1 < Global_262145.f_21419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21400 && iVar1 < Global_262145.f_21420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21395 && iVar1 < Global_262145.f_21415)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21402 && iVar1 < Global_262145.f_21422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21398 && iVar1 < Global_262145.f_21418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21394 && iVar1 < Global_262145.f_21414)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21386 && iVar1 < Global_262145.f_21406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21388 && iVar1 < Global_262145.f_21408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21389 && iVar1 < Global_262145.f_21409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21390 && iVar1 < Global_262145.f_21410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21391 && iVar1 < Global_262145.f_21411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21392 && iVar1 < Global_262145.f_21412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21393 && iVar1 < Global_262145.f_21413)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22345 && iVar1 < Global_262145.f_22373)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22346 && iVar1 < Global_262145.f_22374)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22347 && iVar1 < Global_262145.f_22375)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22348 && iVar1 < Global_262145.f_22376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22349 && iVar1 < Global_262145.f_22377)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22350 && iVar1 < Global_262145.f_22378)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22351 && iVar1 < Global_262145.f_22379)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22352 && iVar1 < Global_262145.f_22380)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22353 && iVar1 < Global_262145.f_22381)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22354 && iVar1 < Global_262145.f_22382)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22355 && iVar1 < Global_262145.f_22383)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22356 && iVar1 < Global_262145.f_22384)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22357 && iVar1 < Global_262145.f_22385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22358 && iVar1 < Global_262145.f_22386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22359 && iVar1 < Global_262145.f_22387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22360 && iVar1 < Global_262145.f_22388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22361 && iVar1 < Global_262145.f_22389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22362 && iVar1 < Global_262145.f_22390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22363 && iVar1 < Global_262145.f_22391)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22364 && iVar1 < Global_262145.f_22392)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22365 && iVar1 < Global_262145.f_22393)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22366 && iVar1 < Global_262145.f_22394)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22367 && iVar1 < Global_262145.f_22395)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22368 && iVar1 < Global_262145.f_22396)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22369 && iVar1 < Global_262145.f_22397)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23561 && iVar1 < Global_262145.f_23577)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23562 && iVar1 < Global_262145.f_23578)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23566 && iVar1 < Global_262145.f_23582)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23569 && iVar1 < Global_262145.f_23585)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23574 && iVar1 < Global_262145.f_23590)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23568 && iVar1 < Global_262145.f_23584)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23560 && iVar1 < Global_262145.f_23576)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23567 && iVar1 < Global_262145.f_23583)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23573 && iVar1 < Global_262145.f_23589)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23572 && iVar1 < Global_262145.f_23588)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23563 && iVar1 < Global_262145.f_23579)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23565 && iVar1 < Global_262145.f_23581)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23575 && iVar1 < Global_262145.f_23591)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23571 && iVar1 < Global_262145.f_23587)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23564 && iVar1 < Global_262145.f_23580)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23570 && iVar1 < Global_262145.f_23586)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23651 && iVar1 < Global_262145.f_23638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23652 && iVar1 < Global_262145.f_23639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23657 && iVar1 < Global_262145.f_23644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23656 && iVar1 < Global_262145.f_23643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23654 && iVar1 < Global_262145.f_23641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23660 && iVar1 < Global_262145.f_23647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23662 && iVar1 < Global_262145.f_23649)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23663 && iVar1 < Global_262145.f_23650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23661 && iVar1 < Global_262145.f_23648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23653 && iVar1 < Global_262145.f_23640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23655 && iVar1 < Global_262145.f_23642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23659 && iVar1 < Global_262145.f_23646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23658 && iVar1 < Global_262145.f_23645)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_25913 && iVar1 < Global_262145.f_25915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_24926 && iVar1 < Global_262145.f_24919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_24927 && iVar1 < Global_262145.f_24920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_24928 && iVar1 < Global_262145.f_24921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_24929 && iVar1 < Global_262145.f_24922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_25914 && iVar1 < Global_262145.f_25916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_24930 && iVar1 < Global_262145.f_24923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_24931 && iVar1 < Global_262145.f_24924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_24932 && iVar1 < Global_262145.f_24925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_24937 && iVar1 < Global_262145.f_24958)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_24938 && iVar1 < Global_262145.f_24959)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_24939 && iVar1 < Global_262145.f_24960)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_24940 && iVar1 < Global_262145.f_24961)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_24941 && iVar1 < Global_262145.f_24962)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_24942 && iVar1 < Global_262145.f_24963)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_24943 && iVar1 < Global_262145.f_24964)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_24944 && iVar1 < Global_262145.f_24965)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_24945 && iVar1 < Global_262145.f_24966)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_24946 && iVar1 < Global_262145.f_24967)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_24947 && iVar1 < Global_262145.f_24968)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_24948 && iVar1 < Global_262145.f_24969)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_24949 && iVar1 < Global_262145.f_24970)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_24950 && iVar1 < Global_262145.f_24971)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_24951 && iVar1 < Global_262145.f_24972)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_24952 && iVar1 < Global_262145.f_24973)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_24953 && iVar1 < Global_262145.f_24974)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_24954 && iVar1 < Global_262145.f_24975)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_24955 && iVar1 < Global_262145.f_24976)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_24956 && iVar1 < Global_262145.f_24977)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_24957 && iVar1 < Global_262145.f_24978)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_27748 && iVar1 < Global_262145.f_27769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_27749 && iVar1 < Global_262145.f_27770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_27750 && iVar1 < Global_262145.f_27771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_27751 && iVar1 < Global_262145.f_27772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_27752 && iVar1 < Global_262145.f_27773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_27753 && iVar1 < Global_262145.f_27774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_27754 && iVar1 < Global_262145.f_27775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_27755 && iVar1 < Global_262145.f_27776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_27756 && iVar1 < Global_262145.f_27777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_27757 && iVar1 < Global_262145.f_27778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_27758 && iVar1 < Global_262145.f_27779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_27759 && iVar1 < Global_262145.f_27780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_27760 && iVar1 < Global_262145.f_27781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_27761 && iVar1 < Global_262145.f_27782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_27762 && iVar1 < Global_262145.f_27783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_27763 && iVar1 < Global_262145.f_27784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_27764 && iVar1 < Global_262145.f_27785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_27765 && iVar1 < Global_262145.f_27786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_27766 && iVar1 < Global_262145.f_27787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_27767 && iVar1 < Global_262145.f_27788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_27768 && iVar1 < Global_262145.f_27789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_27791 && iVar1 < Global_262145.f_27792) && !Global_262145.f_27746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_27794 && iVar1 < Global_262145.f_27795) && !Global_262145.f_27747)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_27799 && iVar1 < Global_262145.f_27802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_27800 && iVar1 < Global_262145.f_27803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_27801 && iVar1 < Global_262145.f_27804)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_294()
{
	return 0;
}

int func_295()
{
	return 1;
}

int func_296()
{
	return 1;
}

int func_297()
{
	if (unk_0x9742C47C6EA02281(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_298()
{
	var uVar0;
	
	if (unk_0x543B7EB99B8B8637())
	{
		if (unk_0x6E49FBC03EADD517())
		{
			if (unk_0x9A23AF8E6095D4CF())
			{
				unk_0x367DA79FE620711B(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0xA1E7A40E1F56E511(&uVar0, 2);
				unk_0xA1E7A40E1F56E511(&uVar0, 4);
				unk_0xA1E7A40E1F56E511(&uVar0, 6);
				unk_0xA1E7A40E1F56E511(&Global_25, 2);
				unk_0xA1E7A40E1F56E511(&Global_25, 4);
				unk_0xA1E7A40E1F56E511(&Global_25, 6);
				unk_0x41410A69AD49AFCD(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0xB61D5BE0528E9538())
				{
					uVar0 = unk_0xFD4B2AAE20AA1CBB(866);
					unk_0xA1E7A40E1F56E511(&uVar0, 0);
					unk_0x553DEB79071ABB59(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150394 == 2)
	{
		return 1;
	}
	else if (Global_150394 == 3)
	{
		return 0;
	}
	if (unk_0xB61D5BE0528E9538())
	{
		if (unk_0xA2BC31158C8CEFD2(unk_0xFD4B2AAE20AA1CBB(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_299(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x7F375072508F738F(iParam0);
	sVar1 = unk_0x8D762F81855E767B(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x2553916E420E8EF0(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_290(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_300(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD4B321D9096B01FC(Global_96060[iVar0]))
		{
			if (Global_96060[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_301(int iParam0)
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(iParam0) && unk_0xD960230552BC4165(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xD4B321D9096B01FC(Global_96030[iVar0]) && unk_0xD960230552BC4165(Global_96030[iVar0], 0))
			{
				if (Global_96030[iVar0] == iParam0 && unk_0x7F375072508F738F(Global_96030[iVar0]) == unk_0x7F375072508F738F(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_302(int iParam0)
{
	int iVar0;
	
	if (unk_0xD4B321D9096B01FC(Global_75396.f_484[24]))
	{
		if (iParam0 == Global_75396.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xD4B321D9096B01FC(Global_75396.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_75396.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_303(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xD4B321D9096B01FC(iParam0) || !unk_0xD960230552BC4165(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_304(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xA2BC31158C8CEFD2(Global_111560.f_7224[iVar9], 0))
		{
			if (unk_0x89C1B63B3CB1739A(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_304(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_305(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_75396.f_139[iParam0];
}

var func_306()
{
	var uVar0;
	
	func_316(&uVar0, unk_0xCA3729F4C3A9E58A());
	func_315(&uVar0, unk_0x8F7802EF0E800F47());
	func_314(&uVar0, unk_0xA63165E74E9A042B());
	func_309(&uVar0, unk_0xFC6CBA5BA4E459A9());
	func_308(&uVar0, unk_0x4EBF6D59B95D29C2());
	func_307(&uVar0, unk_0x10CB21C87A35156F());
	return uVar0;
}

void func_307(var uParam0, int iParam1)
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

void func_308(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_309(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_313(*uParam0);
	iVar1 = func_311(*uParam0);
	if (iParam1 < 1 || iParam1 > func_310(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_310(int iParam0, int iParam1)
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

var func_311(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_312(unk_0xA2BC31158C8CEFD2(iParam0, 31), -1, 1)) + 2011;
}

int func_312(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_313(var uParam0)
{
	return uParam0 & 15;
}

void func_314(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_315(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_316(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_317(var uParam0, int iParam1)
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
			uParam0->f_4 = func_318(0, 1);
			uParam0->f_12 = 0;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 20);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_318(0, 1);
			uParam0->f_12 = 0;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 20);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_318(1, 1);
			uParam0->f_12 = 1;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 20);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_318(1, 2);
			uParam0->f_12 = 1;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 19);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_318(1, 1);
			uParam0->f_12 = 1;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 20);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_318(1, 2);
			uParam0->f_12 = 1;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 19);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_318(2, 1);
			uParam0->f_12 = 2;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 20);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_318(2, 1);
			uParam0->f_12 = 2;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 20);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_318(2, 1);
			uParam0->f_12 = 2;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 20);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 22);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 22);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 22);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 24);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 24);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 24);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 29);
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
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 27);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 24);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 29);
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
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 27);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 24);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 29);
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
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 27);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 24);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 11);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 13);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 11);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 13);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 9);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 9);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 8);
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
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 2);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 30);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 2);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 22);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
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
			if (func_298())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 13);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 2);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 1);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_298())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 13);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 2);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 1);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 30);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 30);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
			unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xA2BC31158C8CEFD2(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_111560.f_32744.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_15(Global_111560.f_32744.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111560.f_32744.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_111560.f_32744.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_111560.f_32744.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xA2BC31158C8CEFD2(uParam0->f_9, 19))
	{
		if (!func_15(Global_111560.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111560.f_2358.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111560.f_2358.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xA2BC31158C8CEFD2(uParam0->f_9, 20))
	{
		if (!func_15(Global_111560.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111560.f_2358.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111560.f_2358.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_318(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_28(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_319(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_319(int iParam0, var uParam1, int iParam2)
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
			if (Global_111560.f_9080.f_99.f_58[128] && !Global_111560.f_9080.f_99.f_58[131])
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
					if (Global_111560.f_9080.f_99.f_58[119])
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
			else if (Global_111560.f_9080.f_99.f_58[118])
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

void func_320(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_317(&(Global_75396.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xA2BC31158C8CEFD2(Global_75396.f_555[0 /*21*/].f_9, 10))
		{
			func_325(iParam0);
			func_324(uParam1, &(Global_111560.f_32744.f_69[Global_75396.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xA2BC31158C8CEFD2(Global_75396.f_555[0 /*21*/].f_9, 11))
			{
				Global_111560.f_32744.f_1864[Global_75396.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_111560.f_32744.f_1934[Global_75396.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_111560.f_32744.f_1864[Global_75396.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_111560.f_32744.f_1934[Global_75396.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_111560.f_32744.f_1958[Global_75396.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_321(iParam0, 1);
		}
	}
}

void func_321(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_323(iParam0, 0))
		{
			func_322(iParam0, 1, 0);
			func_322(iParam0, 2, 0);
			func_322(iParam0, 3, 0);
			func_322(iParam0, 4, 0);
			func_322(iParam0, 0, 1);
			Global_75396[iParam0] = 1;
		}
	}
	else
	{
		func_322(iParam0, 0, 0);
	}
}

void func_322(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xA1E7A40E1F56E511(&(Global_111560.f_32744[iParam0]), iParam1);
	}
	else
	{
		unk_0x3B76114EC84D5812(&(Global_111560.f_32744[iParam0]), iParam1);
	}
}

bool func_323(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xA2BC31158C8CEFD2(Global_111560.f_32744[iParam0], iParam1);
}

void func_324(var uParam0, var uParam1)
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

void func_325(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_317(&(Global_75396.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xD4B321D9096B01FC(Global_75396.f_139[iParam0]))
		{
			unk_0xE5C667CF3B4642D2(Global_75396.f_139[iParam0], 1, 1);
			unk_0xF25956700ADFD77F(&(Global_75396.f_139[iParam0]));
			Global_75396.f_139[iParam0] = 0;
		}
		if (unk_0xA2BC31158C8CEFD2(Global_75396.f_555[0 /*21*/].f_9, 13))
		{
			func_321(iParam0, 0);
		}
	}
}

int func_326(int iParam0)
{
	int iVar0;
	
	if (!unk_0xD4B321D9096B01FC(iParam0))
	{
		return 145;
	}
	if (!unk_0xD960230552BC4165(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD4B321D9096B01FC(Global_96030[iVar0]))
		{
			if (Global_96030[iVar0] == iParam0)
			{
				return Global_96040[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_327(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xD960230552BC4165(iParam0, 0))
	{
		func_331(uParam1);
		uParam1->f_66 = unk_0x7F375072508F738F(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x8D762F81855E767B(iParam0), 16);
		*uParam1 = unk_0x15573EDB7C261B90(iParam0);
		unk_0xA0D7A86C25861B15(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x419E9D2174D7719D(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xD71E7132121C0D3E(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xE3ED8ECBFAC24D1B(iParam0);
		uParam1->f_67 = unk_0xFAFC58D85092C270(iParam0);
		uParam1->f_69 = unk_0x20ACED1EFBCD772F(iParam0);
		uParam1->f_70 = unk_0x53B8ABE899D7A6D5(iParam0);
		unk_0xBF4B7EDAACFA006E(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x3D70A45CE998115E(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0xABAE008A600C0215(iParam0, 2))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 28);
		}
		if (unk_0xABAE008A600C0215(iParam0, 3))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 29);
		}
		if (unk_0xABAE008A600C0215(iParam0, 0))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 30);
		}
		if (unk_0xABAE008A600C0215(iParam0, 1))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_330(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x7A0A412D276E522A(iParam0, 0))
		{
			uParam1->f_68 = unk_0x331921060784BA6D(iParam0);
		}
		if (unk_0x31337ABC07783F10(uParam1->f_66))
		{
			if (unk_0x0B70023E8CF129D6(iParam0))
			{
				switch (unk_0x80560A645560481F(iParam0))
				{
					case 3:
					case 0:
						unk_0x3B76114EC84D5812(&(uParam1->f_77), 23);
						unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0x3B76114EC84D5812(&(uParam1->f_77), 23);
						unk_0x3B76114EC84D5812(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xDD2D40FFFA144057(iParam0))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 9);
		}
		if (unk_0x0064CADA7C0E1595(iParam0))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 10);
		}
		if (unk_0x2C905D7AE4F3E3EA(iParam0))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 13);
			unk_0xD6427EDEA38DA83A(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x86932E0F4CD07767(iParam0))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 12);
		}
		func_329(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x21A121AEFFBC84B4(iParam0, iVar0 + 1))
			{
				unk_0xA1E7A40E1F56E511(&(uParam1->f_77), func_328(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x7B2058C6797B2C04(iParam0, 0))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x3B76114EC84D5812(&(uParam1->f_77), 11);
		}
		if (unk_0x145DAE1A4D0EA05D(iParam0, "IgnoredByQuickSave") && unk_0x607A7A0DD7EB666D(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xA1E7A40E1F56E511(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x3B76114EC84D5812(&(uParam1->f_77), 27);
		}
	}
}

int func_328(int iParam0)
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

int func_329(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xD960230552BC4165(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x6AA7F87D45193D03(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (unk_0x8FAB2067996663AC(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0x8FAB2067996663AC(*iParam0, iVar1))
			{
				switch (unk_0xD1A3841ED22A9A4F(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xF05B9E4C6631EA28(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x627338D61F1048BA(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x627338D61F1048BA(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_330(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_331(var uParam0)
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

void func_332(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_325(iParam0);
	func_321(iParam0, 0);
}

void func_333()
{
	func_336();
	func_334();
}

void func_334()
{
	if (!iLocal_831)
	{
		if (func_37(iLocal_874))
		{
			if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_874, 0))
			{
				func_66(iLocal_874, -1);
				func_65(iLocal_874, 318);
				iLocal_831 = 1;
			}
		}
	}
	if (!iLocal_832)
	{
		if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 0)
		{
			func_335(320, 0);
			iLocal_832 = 1;
		}
	}
	else if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) == 0)
	{
		func_64(0, 320);
		iLocal_832 = 0;
	}
}

void func_335(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_61481 = iParam0;
	if (!Global_61479)
	{
		Global_61479 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_73566)
		{
			if (Global_73567[iVar0 /*9*/] == iParam0)
			{
				Global_73567[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_336()
{
}

void func_337()
{
	if (!bLocal_28 && iLocal_683 != 5)
	{
		if (iLocal_683 > 0)
		{
			func_338();
		}
	}
}

void func_338()
{
	float fVar0;
	int iVar1;
	
	fVar0 = 600f;
	if (!func_37(iLocal_874))
	{
		if (!func_37(uLocal_875) && !func_37(Local_868.f_0))
		{
			func_340(1);
			return;
		}
		if (func_37(Local_868.f_0) && !func_157(unk_0x0FA8183DAD2B3203(), Local_868.f_0, fVar0, 1))
		{
			func_340(2);
		}
	}
	else
	{
		iVar1 = 0;
		if (!func_157(unk_0x0FA8183DAD2B3203(), iLocal_874, fVar0, 1))
		{
			iVar1++;
		}
		if (func_37(uLocal_875))
		{
			if (!func_157(unk_0x0FA8183DAD2B3203(), uLocal_875, fVar0, 1))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_37(Local_868.f_0))
		{
			if (!func_157(unk_0x0FA8183DAD2B3203(), Local_868.f_0, fVar0, 1))
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
			func_340(2);
			return;
		}
		iVar1 = 0;
		if (func_339(iLocal_874))
		{
			iVar1++;
		}
		if (func_37(uLocal_875))
		{
			if (func_339(uLocal_875))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_37(Local_868.f_0))
		{
			if (func_339(Local_868.f_0))
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
			func_340(3);
			return;
		}
	}
}

int func_339(var uParam0)
{
	if (func_37(uParam0))
	{
		if (((unk_0x812D517F863583BE(uParam0, 0, 7000) || unk_0x812D517F863583BE(uParam0, 3, 30000)) || unk_0x812D517F863583BE(uParam0, 2, 30000)) || unk_0x812D517F863583BE(uParam0, 1, 40000))
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

void func_340(int iParam0)
{
	unk_0x1C9DBC28A851F0A6();
	func_61();
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

int func_341(int iParam0)
{
	if (func_10(iParam0))
	{
		if (!unk_0x2BF5E63466422C38(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_342()
{
	if (!func_102(36))
	{
		func_343(21, 0, 0);
	}
}

void func_343(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_355(iParam0, 0, 0))
		{
			if (iParam2 && Global_98721.f_18[iParam0])
			{
				if (func_354(iParam0) == 3 && !func_353(iParam0))
				{
					func_352(iParam0);
					func_351(iParam0, 0, 0);
					func_345(iParam0, 1, 0);
					func_344(iParam0);
				}
				else
				{
					func_351(iParam0, 1, 0);
					func_344(iParam0);
				}
			}
			else
			{
				func_351(iParam0, 0, 0);
				func_345(iParam0, 1, 0);
				func_344(iParam0);
			}
		}
		else
		{
			func_345(iParam0, 1, 0);
			func_344(iParam0);
		}
	}
	else if (func_355(iParam0, 0, 0))
	{
		func_345(iParam0, 0, 0);
		func_345(iParam0, 1, 0);
		func_344(iParam0);
	}
}

void func_344(int iParam0)
{
	Global_98721.f_181[iParam0] = 1;
	Global_98721.f_180 = 1;
}

void func_345(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x3B76114EC84D5812(&(Global_98721.f_1357[iParam0]), iParam1);
	}
	else if (unk_0x393E9918BC37548A())
	{
		if (func_350() == 0)
		{
			uVar0 = func_348(func_349(iParam0), -1, 0);
			unk_0x3B76114EC84D5812(&uVar0, iParam1);
			func_346(func_349(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0x3B76114EC84D5812(&(Global_111560.f_668[iParam0]), iParam1);
	}
}

void func_346(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2542527[iParam0 /*3*/][func_347(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x41410A69AD49AFCD(iVar0, uParam1, iParam3);
	}
}

int func_347(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_47();
		if (iVar1 > -1)
		{
			Global_2542240 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2542240 = 1;
		}
	}
	return iVar0;
}

int func_348(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2542527[iParam0 /*3*/][func_347(iParam1)];
	if (unk_0x367DA79FE620711B(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_349(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 9470;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		case 52:
			return 8912;
			break;
		
		case 50:
			return 8265;
			break;
		
		case 51:
			return 8267;
			break;
		
		default:
			break;
	}
	return 10999;
}

int func_350()
{
	return Global_30736;
}

void func_351(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xA1E7A40E1F56E511(&(Global_98721.f_1357[iParam0]), iParam1);
	}
	else if (unk_0x393E9918BC37548A())
	{
		if (func_350() == 0)
		{
			uVar0 = func_348(func_349(iParam0), -1, 0);
			unk_0xA1E7A40E1F56E511(&uVar0, iParam1);
			func_346(func_349(iParam0), uVar0, -1, 1, 0);
		}
	}
	else
	{
		unk_0xA1E7A40E1F56E511(&(Global_111560.f_668[iParam0]), iParam1);
	}
}

void func_352(int iParam0)
{
	if (Global_98721.f_18[iParam0])
	{
		func_351(iParam0, 10, 1);
		func_351(iParam0, 19, 1);
	}
}

bool func_353(int iParam0)
{
	return func_355(iParam0, 5, 1);
}

int func_354(int iParam0)
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
		
		case 50:
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
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
	}
	return 6;
}

int func_355(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return unk_0xA2BC31158C8CEFD2(Global_98721.f_1357[iParam0], iParam1);
	}
	else if (unk_0x393E9918BC37548A())
	{
		if (func_350() == 0)
		{
			return unk_0xA2BC31158C8CEFD2(func_348(func_349(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0xA2BC31158C8CEFD2(Global_111560.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_356(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_357())
	{
		unk_0x50E03C7D74E352C4(0);
		unk_0x3B76114EC84D5812(&(Global_98669.f_20), 2);
		unk_0x269298D09D57BFCF(1);
		if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
		{
			unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), 0, 0);
		}
		Global_98665 = { Param0 };
		Global_98668 = fParam3;
		Global_98664 = 1;
		if (iParam4 == 1)
		{
			unk_0xA1E7A40E1F56E511(&(Global_98669.f_20), 14);
		}
		else
		{
			unk_0x3B76114EC84D5812(&(Global_98669.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xA1E7A40E1F56E511(&(Global_98669.f_20), 24);
		}
		else
		{
			unk_0x3B76114EC84D5812(&(Global_98669.f_20), 24);
		}
		func_280(1);
	}
}

int func_357()
{
	if (Global_98669 == 10 || Global_98669 == 9)
	{
		return 1;
	}
	return 0;
}

void func_358()
{
	func_373();
	func_371();
	func_364();
	func_361();
	func_359();
}

void func_359()
{
	iLocal_1048[0] = 0;
	iLocal_1048[1] = 0;
	iLocal_1048[2] = 0;
	Local_688[0 /*8*/] = { func_360("FP1_WANTM", "FP1_LOSTM", "FP1_THEREM", "FP1_CHATFM", "", "FP1_CHATTM") };
	Local_688[1 /*8*/] = { func_360("FP1_WANTT", "FP1_LOSTT", "FP1_THERET", "FP1_CHATFM", "FP1_CHATFT", "") };
	Local_688[2 /*8*/] = { func_360("FP1_WANTF", "FP1_LOSTF", "FP1_THEREF", "", "FP1_CHATFT", "FP1_CHATTM") };
}

struct<8> func_360(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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

void func_361()
{
	Local_134[0 /*25*/] = { func_363(1203.146f, -337.3543f, 67.9314f, 1245.118f, -348.5059f, 68.2099f, 253.1908f, 0) };
	func_362(&(Local_134[0 /*25*/]), Local_824, 0, 15f, 5f, 270f, 3, 1192.006f, -631.4703f, 61.6972f, 10f, 10f, 5f);
	Local_134[1 /*25*/] = { func_363(1215.084f, -339.3139f, 68.1323f, 964.9214f, -555.212f, 58.0211f, 39.645f, 0) };
	func_362(&(Local_134[1 /*25*/]), Local_824, 0, 15f, 10f, 270f, 3, 1103.29f, -764.532f, 56.633f, 10f, 10f, 5f);
	Local_134[2 /*25*/] = { func_363(1179.533f, -361.3286f, 67.4559f, 929.8701f, -619.4534f, 56.4632f, 164.3631f, 0) };
	func_362(&(Local_134[2 /*25*/]), Local_824, 0, 15f, 10f, 270f, 3, 933.3745f, -615.9453f, 56.3041f, 10f, 10f, 5f);
	Local_134[3 /*25*/] = { func_363(1107.674f, -364.0569f, 65.9581f, 1099.266f, -775.0809f, 57.3525f, 178.2038f, 0) };
	func_362(&(Local_134[3 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_134[4 /*25*/] = { func_363(1069.279f, -393.5795f, 66.0262f, 1065.364f, -389.9561f, 66.1504f, 220.1611f, 0) };
	func_362(&(Local_134[4 /*25*/]), Local_824, 0, 5f, 30f, 128.1732f, 3, 1069.718f, -393.9912f, 66.0261f, 10f, 10f, 5f);
	Local_134[5 /*25*/] = { func_363(1031.673f, -424.599f, 64.5439f, 1027.179f, -420.6656f, 64.6268f, 178.2038f, joaat("p_binbag_01_s")) };
	func_362(&(Local_134[5 /*25*/]), 1028.201f, -428.3677f, 64.3571f, 1, 15f, 2f, 128.3915f, 1, 1027.179f, -420.6656f, 64.6268f, 10f, 10f, 5f);
	Local_134[6 /*25*/] = { func_363(942.1528f, -488.8956f, 59.3129f, 932.0198f, -489.3886f, 58.9212f, 202.5785f, joaat("p_binbag_01_s")) };
	func_362(&(Local_134[6 /*25*/]), 930.7186f, -494.9253f, 58.616f, 1, 15f, 2f, 119.6518f, 1, 952.9781f, -482.5082f, 60.0003f, 10f, 10f, 5f);
	Local_134[7 /*25*/] = { func_363(868.2734f, -529.5473f, 56.2071f, 865.0042f, -522.4746f, 56.3363f, 241.9711f, joaat("p_binbag_01_s")) };
	func_362(&(Local_134[7 /*25*/]), 865.2349f, -535.8759f, 56.1574f, 1, 15f, 2f, 162.7219f, 1, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_134[8 /*25*/] = { func_363(874.8076f, -571.2073f, 56.2987f, 983.125f, -541.9902f, 58.5929f, 49.7653f, 0) };
	func_362(&(Local_134[8 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_134[9 /*25*/] = { func_363(931.5218f, -614.2144f, 56.3119f, 928.6471f, -620.711f, 56.4611f, -108.06f, joaat("p_binbag_01_s")) };
	func_362(&(Local_134[9 /*25*/]), 940.4086f, -622.1787f, 56.3003f, 1, 15f, 2f, 228.1176f, 1, 918.6716f, -602.9258f, 56.3395f, 10f, 10f, 5f);
	Local_134[10 /*25*/] = { func_363(964.9758f, -645.9614f, 56.4465f, 927.1033f, -575.4162f, 56.5329f, 55.9317f, 0) };
	func_362(&(Local_134[10 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_134[11 /*25*/] = { func_363(983.4438f, -683.1442f, 56.4087f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_362(&(Local_134[11 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[12 /*25*/] = { func_363(1016.261f, -731.546f, 56.555f, 1011.801f, -733.0652f, 56.7435f, 314.5626f, joaat("p_binbag_01_s")) };
	func_362(&(Local_134[12 /*25*/]), 1020.251f, -736.815f, 56.6235f, 1, 15f, 2f, 220.7804f, 1, 1011.238f, -724.7085f, 56.5183f, 10f, 10f, 5f);
	Local_134[13 /*25*/] = { func_363(1164.126f, -762.2866f, 56.6656f, 1099.342f, -775.4273f, 57.3525f, 177.5729f, 0) };
	func_362(&(Local_134[13 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[14 /*25*/] = { func_363(1199.339f, -678.0995f, 59.9051f, 1205.415f, -672.1282f, 60.1445f, 105.2374f, 0) };
	func_362(&(Local_134[14 /*25*/]), Local_824, 0, 15f, 2f, 12.1103f, 3, 1199.339f, -678.0995f, 59.9051f, 10f, 10f, 5f);
	Local_134[15 /*25*/] = { func_363(1183.445f, -582.9476f, 63.0962f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_362(&(Local_134[15 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[16 /*25*/] = { func_363(1192.479f, -485.1086f, 64.7195f, 1264.359f, -719.084f, 63.328f, 65.0519f, 0) };
	func_362(&(Local_134[16 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[17 /*25*/] = { func_363(1212.693f, -400.0532f, 67.0971f, 1284.109f, -676.728f, 65.0225f, 69.9898f, 0) };
	func_362(&(Local_134[17 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_134[18 /*25*/] = { func_363(1114.573f, -232.3706f, 68.0949f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_362(&(Local_134[18 /*25*/]), Local_824, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	iLocal_830 = 19;
}

void func_362(var uParam0, struct<3> Param1, int iParam4, float fParam5, float fParam6, float fParam7, int iParam8, struct<3> Param9, struct<3> Param12)
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

struct<25> func_363(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7)
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

void func_364()
{
	struct<3> Var0[6];
	
	Var0[0 /*3*/] = { 1251.308f, -400.6231f, 68.0926f };
	Var0[1 /*3*/] = { 1183.993f, -403.3443f, 66.8734f };
	Var0[2 /*3*/] = { 1161.54f, -372.6073f, 66.6034f };
	Var0[3 /*3*/] = { 1167.644f, -273.7987f, 67.9705f };
	Var0[4 /*3*/] = { 1252.362f, -247.353f, 77.5631f };
	Var0[5 /*3*/] = { 1330.062f, -341.0342f, 100.3476f };
	func_365(&Var0, 6);
}

void func_365(var uParam0, int iParam1)
{
	int iVar0;
	
	func_370(&uLocal_713);
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		func_369(&uLocal_713, *(uParam0[iVar0 /*3*/]));
		iVar0++;
	}
	func_368(&uLocal_713);
	func_366(&uLocal_765, &uLocal_713, 50f);
}

void func_366(var uParam0, var uParam1, float fParam2)
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
		if (func_367(uParam1, *(uParam1[iVar1 /*3*/]) + Var9))
		{
			Var9 = { -Var9 };
		}
		*(uParam0[iVar1 /*3*/]) = { *(uParam1[iVar1 /*3*/]) + Var9 * Vector(fParam2, fParam2, fParam2) };
		iVar0 = iVar1;
		iVar1++;
		iVar2 = (iVar2 + 1 % uParam1->f_46);
	}
}

bool func_367(var uParam0, struct<2> Param1, Vector3 vParam3)
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

void func_368(var uParam0)
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

void func_369(var uParam0, struct<3> Param1)
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

void func_370(var uParam0)
{
	if (uParam0->f_51)
	{
	}
	uParam0->f_46 = 0;
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_50 = 0f;
	uParam0->f_51 = 1;
}

void func_371()
{
	Local_840 = { func_372(1200.61f, -344.2721f, 68.0424f, 269.2015f, joaat("s_m_y_garbage")) };
	Local_854 = { func_372(1202.42f, -341.6034f, 67.9378f, 273.1125f, joaat("s_m_y_garbage")) };
}

struct<14> func_372(struct<3> Param0, float fParam3, int iParam4)
{
	struct<14> Var0;
	
	Var0.f_1 = { Param0 };
	Var0.f_4 = fParam3;
	Var0.f_5 = iParam4;
	return Var0;
}

void func_373()
{
	Local_868 = { func_374(1203.146f, -337.3543f, 67.9314f, 189.7047f, joaat("trash")) };
}

struct<6> func_374(struct<3> Param0, float fParam3, int iParam4)
{
	struct<6> Var0;
	
	Var0.f_1 = { Param0 };
	Var0.f_4 = fParam3;
	Var0.f_5 = iParam4;
	return Var0;
}

void func_375()
{
	func_240(1);
	func_386(1);
	unk_0x0A43D5D11052D038(joaat("trash"), 0);
	unk_0x0A43D5D11052D038(joaat("towtruck"), 0);
	unk_0x0A43D5D11052D038(joaat("s_m_y_garbage"), 0);
	func_63();
	func_385();
	func_384();
	func_376(0);
	unk_0x9C9E32388A7886A2();
}

void func_376(bool bParam0)
{
	struct<3> Var0;
	
	if (bParam0)
	{
	}
	unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), 1, 0);
	unk_0x8EB1E7594B0F5A9C("DRIVE", 1);
	unk_0x8EB1E7594B0F5A9C("WORLD_VEHICLE_ATTRACTOR", 1);
	unk_0x8EB1E7594B0F5A9C("WORLD_VEHICLE_DRIVE_PASSENGERS", 1);
	unk_0x8EB1E7594B0F5A9C("WORLD_VEHICLE_DRIVE_SOLO", 1);
	func_38();
	func_383();
	func_382();
	func_381();
	func_380();
	func_222();
	if (bParam0)
	{
		if (unk_0xD4B321D9096B01FC(iLocal_874))
		{
			if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
			{
				if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
				{
					if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_874, 0))
					{
						Var0 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
						unk_0xCB3446C6A91D1A78(unk_0x0FA8183DAD2B3203(), Var0, 1, 0, 0, 1);
					}
				}
			}
		}
		func_378();
		unk_0x1C9DBC28A851F0A6();
		func_2();
	}
	else
	{
		func_377();
	}
	unk_0x990EDEB49BA0458D(0);
	func_145(&uLocal_671, 0, 0);
	if (unk_0xD2652A8A890B29BA(uLocal_823))
	{
		unk_0x0298C8010FD5A69E(0, 0, 3000, 1, 0, 0);
		unk_0xDC5BA18043353983(uLocal_823, 0);
	}
}

void func_377()
{
	func_3();
	func_6(&Local_868);
	func_6(&uLocal_875);
	func_6(&iLocal_874);
	func_5(&Local_840, 1, 0, 1);
	func_5(&Local_854, 1, 0, 1);
	func_6(&uLocal_876);
}

void func_378()
{
	Global_19671 = 0;
	func_379();
}

void func_379()
{
	unk_0xE4F88BFF8FB3D84C();
	Global_21816 = 0;
	if (unk_0x04C7A9862FF737E9())
	{
		unk_0x623942A4F366F9BB(false);
		Global_20805 = 6;
	}
}

void func_380()
{
}

void func_381()
{
	if (iLocal_837)
	{
		unk_0xE9C4BD5E64C76842(joaat("trash"));
	}
}

void func_382()
{
}

void func_383()
{
	unk_0xE0AC40EF164A2569(Local_868.f_5);
}

void func_384()
{
	func_343(21, 1, 0);
}

void func_385()
{
	Global_94554 = 0;
}

void func_386(int iParam0)
{
	Global_96005 = iParam0;
}

void func_387()
{
	int iVar0;
	
	if (unk_0x5F74A266852104C3("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_111560.f_9080 || func_33(0))
	{
		if (!func_388())
		{
			iVar0 = func_32();
			if (iVar0 != -1)
			{
				if (!func_19(iVar0))
				{
					return;
				}
				unk_0xA1E7A40E1F56E511(&(Global_89451[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_24();
		}
	}
}

int func_388()
{
	if (((Global_98669 == 13 || Global_98669 == 10) || Global_98669 == 11) || Global_98669 == 12)
	{
		return 0;
	}
	return 1;
}

