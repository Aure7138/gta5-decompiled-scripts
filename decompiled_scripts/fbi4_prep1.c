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
	struct<4> Local_36[10];
	bool bLocal_77 = 0;
	var uLocal_78 = 0;
	int iLocal_79 = 0;
	struct<27> Local_80 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	struct<11> Local_109[2];
	struct<25> Local_132[21];
	float fLocal_658 = 0f;
	int iLocal_659 = 0;
	bool bLocal_660 = 0;
	bool bLocal_661 = 0;
	bool bLocal_662 = 0;
	bool bLocal_663 = 0;
	int iLocal_664 = 0;
	struct<3> Local_665 = { 0, 0, 0 } ;
	int iLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = -1;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 1000;
	var uLocal_679 = 1000;
	var uLocal_680 = 0;
	int iLocal_681 = 0;
	int iLocal_682 = 0;
	int iLocal_683 = 0;
	int iLocal_684 = 0;
	var uLocal_685 = 0;
	struct<8> Local_686[3];
	var uLocal_711 = 15;
	var uLocal_712 = 0;
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
	var uLocal_763 = 15;
	var uLocal_764 = 0;
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
	int iLocal_815 = 0;
	char* sLocal_816 = NULL;
	char* sLocal_817 = NULL;
	int iLocal_818 = 0;
	int iLocal_819 = 0;
	int iLocal_820 = 0;
	var uLocal_821 = 0;
	struct<3> Local_822 = { 0, 0, 0 } ;
	struct<3> Local_825 = { 0, 0, 0 } ;
	int iLocal_828 = 0;
	int iLocal_829 = 0;
	int iLocal_830 = 0;
	bool bLocal_831 = 0;
	int iLocal_832 = 0;
	int iLocal_833 = 0;
	int iLocal_834 = 0;
	int iLocal_835 = 0;
	int iLocal_836 = 0;
	int iLocal_837 = 0;
	struct<14> Local_838 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_852 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_866 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	int iLocal_875 = 0;
	char[] cLocal_876[8] = 0;
	var uLocal_877 = 16;
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
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	char[] cLocal_1042[8] = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	int iLocal_1046[3] = { 0, 0, 0 };
	int iLocal_1050 = 0;
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
	iLocal_79 = 21;
	fLocal_658 = -1f;
	Local_665 = { 0f, 0f, 0f };
	iLocal_668 = -1;
	sLocal_817 = "FBIPRA";
	Local_822 = { 0f, 0f, 0f };
	Local_825 = { 1381.472f, -2072.245f, 50.9981f };
	cLocal_876 = "FIBP1AU";
	iLocal_1050 = -1;
	unk_0xA81035D922E28F10(1);
	if (unk_0x7547D7CF93115D6D(19))
	{
		sLocal_816 = 0;
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
		unk_0xC0B91B09CAEBF5AE("M_TrT", 0);
		if (func_321(unk_0x507DA4994C3D8EBD()))
		{
			func_317();
			func_313();
			unk_0x34D399ACBC6AA213(unk_0xAF65E5A58BE87D95());
			unk_0x6471EB4B59AE203B(0.8f);
			switch (iLocal_681)
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
			if (iLocal_681 != 5)
			{
				if (iLocal_681 >= 0 && !bLocal_27)
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
	
	switch (iLocal_682)
	{
		case 0:
			unk_0x3DF5706BBD8F5B5B();
			unk_0x4A4C1A1BC79EFE8F(1);
			func_37();
			if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
			{
				iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
				if (func_36(iVar0) && unk_0x26EA758C2A691D06(iVar0) == joaat("towtruck"))
				{
					func_35(iVar0, 2);
				}
			}
			if (!unk_0x8FA72E132AAFA62F(sLocal_816))
			{
				func_33(sLocal_816);
			}
			else
			{
				func_18(0);
			}
			iLocal_682 = 1;
			break;
		
		case 1:
			if (func_17())
			{
				if (func_16())
				{
					func_11();
				}
				func_2();
				unk_0x4BCBC9058A5CECE1(unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 30f, 1, 0, 0, 0);
				func_355();
			}
			break;
	}
}

void func_2()
{
	func_9(&Local_866);
	func_9(&uLocal_873);
	func_9(&iLocal_872);
	func_8(&Local_838);
	func_8(&Local_852);
	func_9(&uLocal_874);
	func_3();
}

void func_3()
{
	func_7(&(Local_109[0 /*11*/].f_4));
	func_7(&(Local_109[1 /*11*/].f_4));
	func_6(&iLocal_107);
	func_5(&(Local_109[0 /*11*/]), 1, 0, 1);
	func_5(&(Local_109[1 /*11*/]), 1, 0, 1);
	func_4(&(Local_132[iLocal_659 /*25*/].f_17), 0);
	unk_0xAF3EF4477F7346AE(uLocal_78);
	unk_0xA878656BC39BBC51("missfbi4prepp1");
	unk_0xD0522F98C595B73F("missfbi4prepp1_garbageman");
}

void func_4(var uParam0, bool bParam1)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		if (unk_0x42B70344077B22B9(*uParam0))
		{
			unk_0x5B97F41A7BE54877(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			unk_0x05DADA1340CBB893(uParam0);
		}
		else
		{
			unk_0x0D693FF0257B8CE4(*uParam0);
		}
	}
}

void func_5(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		if (!unk_0x9F94F2CFDCA78C55(*uParam0))
		{
			unk_0x3C2614E45AB2F499(*uParam0, 0);
			if (iParam3 == 0)
			{
				unk_0x1E61DAA6A0EEC652(*uParam0);
			}
			unk_0xA1E4BA3B17C6D931(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				unk_0x2DC5B31EBB810396(*uParam0, false);
			}
		}
		unk_0xCA4DD92F1F2931F3(uParam0);
	}
}

void func_6(var uParam0)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		unk_0xE5D56342B0FF1D0D(*uParam0);
		if (unk_0x73E2404DC70203CD(*uParam0) && unk_0x51BC2FF711F8CF71(*uParam0, 1))
		{
			unk_0xB67623A401171555(uParam0);
		}
	}
}

void func_7(int iParam0)
{
	if (unk_0xD361727124133DF3(*iParam0))
	{
		unk_0x43F7D508C655CBA3(*iParam0, 0);
		unk_0xA0A65B537B1F11EC(iParam0);
	}
}

void func_8(int iParam0)
{
	if (unk_0xFD68187442384158(*iParam0))
	{
		if (!unk_0xE5D56342B0FF1D0D(*iParam0))
		{
			unk_0x3C2614E45AB2F499(*iParam0, 0);
		}
		if (!unk_0x73E2404DC70203CD(*iParam0))
		{
			unk_0xBAE5DF507EEC53C8(*iParam0, 1, 0);
		}
		unk_0x8019BB3BA236A900(iParam0);
	}
}

void func_9(var uParam0)
{
	if (unk_0xFD68187442384158(*uParam0))
	{
		if (!unk_0x73E2404DC70203CD(*uParam0))
		{
			unk_0xBAE5DF507EEC53C8(*uParam0, 1, 0);
		}
		if (func_36(*uParam0))
		{
			if (unk_0x73E2404DC70203CD(*uParam0) && unk_0x51BC2FF711F8CF71(*uParam0, 1))
			{
				if (func_10(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), *uParam0, 0))
					{
						unk_0xB67623A401171555(uParam0);
						return;
					}
				}
				unk_0x10EA498723DC5A09(uParam0);
			}
		}
		else
		{
			if (func_10(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), *uParam0, 0))
				{
					unk_0xB67623A401171555(uParam0);
					return;
				}
			}
			unk_0x10EA498723DC5A09(uParam0);
		}
	}
}

int func_10(int iParam0)
{
	if (unk_0xFD68187442384158(iParam0))
	{
		if (!unk_0xE5D56342B0FF1D0D(iParam0))
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
	func_13(&(Global_93409.f_2167), Param0, fParam3);
}

void func_13(var uParam0, struct<3> Param1, var uParam4)
{
	*uParam0 = { Param1 };
	uParam0->f_6 = uParam4;
}

void func_14(struct<3> Param0, float fParam3)
{
	if (func_15(Global_68307, 0f, 0f, 0f))
	{
		Global_68307 = { Param0 };
		Global_68310 = fParam3;
	}
}

bool func_15(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_16()
{
	if (Global_89784 == 7)
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
	if (Global_89784 == 7 || Global_89784 == 8)
	{
		return 1;
	}
	return 0;
}

void func_18(int iParam0)
{
	int iVar0;
	
	if (Global_97173.f_7311 || func_32(0))
	{
		iVar0 = func_31();
		if (!func_19(iVar0))
		{
			return;
		}
		unk_0x3DBE2A7AF9E71C82(&(Global_80941[iVar0 /*5*/].f_1), 5);
		Global_89820 = iParam0;
	}
}

int func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_24();
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		unk_0x22AF53B3D19EC31A(5000);
	}
	iVar0 = Global_80941[iParam0 /*5*/];
	iVar1 = Global_68336.f_109[iVar0 /*4*/];
	func_23(iVar1, 1);
	unk_0xB263FA96BED3FA47(unk_0xAF65E5A58BE87D95());
	unk_0x781B097139B80D2A(unk_0xAF65E5A58BE87D95());
	func_20(&(Global_97173.f_1729.f_539), iVar1);
	if (Global_84364 == Global_89821)
	{
		Global_97173.f_7311.f_325[iVar1 /*6*/].f_1++;
	}
	if (!unk_0x61D8FEAF64881CDA(Global_80977[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			unk_0x842A97A1C98339FF(0);
		}
	}
	Global_97173.f_7311.f_325[iVar1 /*6*/].f_2++;
	Global_84364 = Global_89821;
	if (iParam0 == -1)
	{
		if (Global_97173.f_7311)
		{
		}
		return 0;
	}
	if (unk_0x61D8FEAF64881CDA(Global_80941[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0x61D8FEAF64881CDA(Global_80941[iParam0 /*5*/].f_1, 5))
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
		iVar1 = Global_97173.f_16754[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0x61D8FEAF64881CDA(Global_97173.f_7311.f_99.f_214[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_22(Global_97173.f_16754[iVar0], &Var2, &fVar5))
			{
				Global_97173.f_16754[iVar0] = 318;
				func_21(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_87579[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_87579[iVar0 /*29*/].f_9 = 0f;
				Global_87579[iVar0 /*29*/].f_12 = 0f;
				Global_87579[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_87579[iVar0 /*29*/].f_10 = 0f;
				Global_87579[iVar0 /*29*/].f_13 = 0f;
				Global_87579[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_87579[iVar0 /*29*/].f_11 = 0f;
				Global_87579[iVar0 /*29*/].f_14 = 0f;
				Global_87579[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_87579[iVar0 /*29*/].f_26 = 0f;
				Global_87579[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_87579[iVar0 /*29*/].f_27 = 0f;
				Global_87579[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_87579[iVar0 /*29*/].f_28 = 0f;
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
			Global_84174[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_84174[iParam0 /*2*/] = 0;
	}
}

void func_24()
{
	Global_89819 = 1;
	if (unk_0xAC33D6DDFB2C92EC(unk_0xAF65E5A58BE87D95(), 1))
	{
		if (unk_0x8FA72E132AAFA62F(&Global_68299))
		{
			switch (func_25())
			{
				case 0:
					StringCopy(&Global_68299, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_68299, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_68299, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_68303, "", 16);
		}
		Global_89819 = 0;
	}
	else if (!unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0x8FA72E132AAFA62F(&Global_68299))
		{
			switch (func_25())
			{
				case 0:
					StringCopy(&Global_68299, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_68299, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_68299, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_68303, "", 16);
		}
		Global_89819 = 0;
	}
}

int func_25()
{
	func_26();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_26()
{
	int iVar0;
	
	if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
	{
		if (func_30(Global_97173.f_1729.f_539.f_3213) != unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()))
		{
			iVar0 = func_29(unk_0x507DA4994C3D8EBD());
			if (func_28(iVar0) && (!func_27(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_28(Global_97173.f_1729.f_539.f_3213))
				{
					Global_97173.f_1729.f_539.f_3214 = Global_97173.f_1729.f_539.f_3213;
				}
				Global_97173.f_1729.f_539.f_3215 = iVar0;
				Global_97173.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97173.f_1729.f_539.f_3213 != 145)
			{
				Global_97173.f_1729.f_539.f_3215 = Global_97173.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97173.f_1729.f_539.f_3213 = 145;
}

bool func_27(int iParam0)
{
	return Global_34909 == iParam0;
}

bool func_28(int iParam0)
{
	return iParam0 < 3;
}

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFD68187442384158(iParam0))
	{
		iVar1 = unk_0x26EA758C2A691D06(iParam0);
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
		return Global_97173.f_29699[iParam0 /*29*/];
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
		if (unk_0x61D8FEAF64881CDA(Global_80941[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_32(bool bParam0)
{
	if (!bParam0 && unk_0x25531002BCF0D968(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0x61D8FEAF64881CDA(Global_68315, 0);
}

void func_33(char* sParam0)
{
	func_34(sParam0);
	func_18(0);
}

void func_34(char* sParam0)
{
	if (!unk_0x8FA72E132AAFA62F(sParam0))
	{
		if (unk_0x23955AB7E3D629F7(sParam0) <= 16)
		{
			StringCopy(&Global_68299, sParam0, 16);
			StringCopy(&Global_68303, "", 16);
			if (unk_0x0BCA771AC3E1639D())
			{
				unk_0x2DAF1B9AD39829E1();
			}
		}
	}
}

void func_35(int iParam0, int iParam1)
{
	Global_89784.f_22[iParam1] = iParam0;
}

int func_36(int iParam0)
{
	if (func_10(iParam0))
	{
		if (unk_0xCA8794CE207FC6D5(iParam0, 0))
		{
			if (!unk_0xEF57771119A32DB2(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_37()
{
	func_7(&iLocal_819);
}

void func_38()
{
	int iVar0;
	
	switch (iLocal_682)
	{
		case 0:
			iLocal_682 = 1;
			break;
		
		case 1:
			if (!func_100(unk_0x507DA4994C3D8EBD(), Local_825, 270f))
			{
				iLocal_682 = 2;
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
				unk_0x3DF5706BBD8F5B5B();
			}
			if (iVar0 == 0)
			{
				if (func_65(&uLocal_685, &cLocal_1042, &uLocal_877))
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
			iLocal_682 = 2;
			break;
	}
}

void func_39(int iParam0, int iParam1, int iParam2)
{
	func_41(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		unk_0x77CB1AAAF31275BE(0f, 1065353216);
		unk_0xBE5E0E5A454F4D6A(0f);
	}
	if (iParam1 == 1)
	{
		func_40(500, 0);
	}
}

void func_40(int iParam0, bool bParam1)
{
	if (unk_0xC2C705ED6124A7C2() || unk_0xF468278E75CA2341())
	{
		if (!unk_0xC17F446CF864854D())
		{
			unk_0x662E87A876F1069D(iParam0);
		}
	}
	if (bParam1)
	{
		while (!unk_0x8D4100BAA46EE198())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
	}
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x4D82797EF5035A9F();
	unk_0x6BF1DDDFD53FBE63(uVar0, 0);
	unk_0xFAAA53BBE1EEF174(uVar0, iParam3, 0);
	func_42(0, 1, 0, 0);
	if (iParam2 == 1)
	{
		unk_0x255259988FBEFACC(1);
		unk_0x330ABD0F05E764BB(1);
	}
	unk_0x4A4C1A1BC79EFE8F(1);
	if (iParam0 == 1)
	{
		unk_0xFA65E7A36F8CCF0A(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_35 != 0 && iLocal_35 != joaat("object")) && iLocal_35 != joaat("gadget_parachute"))
		{
			if (func_10(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0x99A28335809E4B6C(unk_0x507DA4994C3D8EBD(), iLocal_35, 0))
				{
					unk_0x0A000D03DB5B545F(unk_0x507DA4994C3D8EBD(), iLocal_35, 0);
				}
			}
		}
	}
	if (func_321(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xD14BE9B74CD80551(unk_0x507DA4994C3D8EBD(), 0, 0);
	}
}

void func_42(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0x62F999FAD28AC182(unk_0xAF65E5A58BE87D95());
		unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 1);
		unk_0xDD748F877B6C00B7(unk_0xAF65E5A58BE87D95(), 1);
		func_50(1);
		unk_0x3CD3516D9FBE0424();
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x49BDC46D7CAD9C63())
			{
				unk_0xD858EC6FECDB4B3F(0);
			}
			if (!func_49())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_48(1, iParam3, iParam2);
		Global_54578 = 1;
		Global_66883 = 1;
		Global_68065 = 1;
	}
	else
	{
		func_50(0);
		unk_0x5DC2C7ED9A68FCEF();
		Global_54578 = 0;
		if (bParam1)
		{
			unk_0x56D29F96CA2CFAC2();
		}
		unk_0x85561C2D9ACBDF0D(unk_0xAF65E5A58BE87D95(), 0);
		unk_0xDD748F877B6C00B7(unk_0xAF65E5A58BE87D95(), 0);
		func_48(0, iParam3, iParam2);
		if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && !func_43(unk_0xAF65E5A58BE87D95()))
		{
			unk_0xF732465E1FF70CE4(unk_0x507DA4994C3D8EBD(), 0);
		}
		Global_68065 = 0;
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
		if (iParam0 == unk_0xAF65E5A58BE87D95())
		{
			return 1;
		}
	}
	if (unk_0x61D8FEAF64881CDA(Global_2413868[iParam0 /*253*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_44()
{
	return unk_0x61D8FEAF64881CDA(Global_2359301, 3);
}

bool func_45(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0xAF65E5A58BE87D95())
	{
		bVar0 = func_46(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582048[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xB832D52B86777A35(iParam0))
		{
			bVar0 = unk_0x5805EAF13FC54BE6(iParam0) == 8;
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
	if (Global_1315875[iVar1] == 1)
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

int func_47()
{
	return Global_1312736;
}

int func_48(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0x80AD636AD4184F2B())
	{
		if (unk_0x9FD74BBA3650C4CD() != iParam0 && uParam2)
		{
			unk_0x889006E2EE739868(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_49()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_50(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 13);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 13);
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
	if (Global_97173.f_5944.f_136 < 9)
	{
		Var0.f_0 = uParam0;
		Var0.f_10 = iParam1;
		Var0.f_11 = iParam2;
		Var0.f_9 = iParam3;
		if (Global_97173.f_5944.f_881 == Var0.f_0)
		{
			Global_97173.f_5944.f_881 = -1;
		}
		Var0.f_3 = func_53(iParam4);
		Var0.f_5 = iParam9;
		Var0.f_4 = (unk_0xF976C624234A4AA8() + iParam8);
		Var0.f_1 = iParam12;
		iVar15 = 0;
		unk_0x3DBE2A7AF9E71C82(&iVar15, iParam5);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam6;
		Var0.f_14 = iParam7;
		Var0.f_7 = iParam10;
		Var0.f_8 = iParam11;
		unk_0x3DBE2A7AF9E71C82(&(Var0.f_1), 0);
		unk_0x3DBE2A7AF9E71C82(&(Var0.f_1), 13);
		unk_0xCD27BF29FB9012E2(&(Var0.f_1), 1);
		if (iParam4 == 0)
		{
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_1), 10);
		}
		Global_97173.f_5944[Global_97173.f_5944.f_136 /*15*/] = { Var0 };
		Global_97173.f_5944.f_136++;
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
	while (iVar0 < Global_97173.f_5944.f_136)
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_5944[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_97173.f_5944[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_97173.f_5944[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_97173.f_5944.f_764)
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_5944.f_651[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_97173.f_5944.f_651[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_97173.f_5944.f_889[iParam0] = iVar1;
}

int func_53(int iParam0)
{
	switch (iParam0)
	{
		case 0:
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
		
		case 4:
			return 5;
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
	unk_0x3DF5706BBD8F5B5B();
	func_59();
	func_57(0, 0);
	func_355();
}

void func_57(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_54574)
	{
		Global_54574 = iParam1;
	}
	if (bParam0)
	{
		if ((func_32(0) && Global_68313.f_1 == 1) && func_58(Global_68313))
		{
		}
		else
		{
			Global_54572 = 1;
		}
	}
	if (Global_97173.f_7311 || func_32(0))
	{
		iVar0 = func_31();
		iVar1 = Global_80941[iVar0 /*5*/];
		uVar2 = Global_68336.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_97173.f_7311)
			{
			}
			return;
		}
		if (unk_0x61D8FEAF64881CDA(Global_80941[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0x61D8FEAF64881CDA(Global_80941[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x3DBE2A7AF9E71C82(&(Global_80941[iVar0 /*5*/].f_1), 4);
		unk_0x3DBE2A7AF9E71C82(&Global_68315, 1);
		Global_68331 = uVar2;
		Global_68332 = unk_0xF976C624234A4AA8();
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
	Global_14558 = 0;
	func_60();
}

void func_60()
{
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if ((unk_0x49BDC46D7CAD9C63() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD858EC6FECDB4B3F(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(1);
		Global_15692 = 6;
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
	
	if (Global_54580)
	{
	}
	Global_54580 = 0;
	if (bParam0)
	{
		Global_54581 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_66667)
		{
			if (Global_54797[Global_66668[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_66668[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_66667)
		{
			if (Global_66668[iVar0 /*9*/] > 0)
			{
				if (Global_66668[iVar0 /*9*/] == iParam1)
				{
					Global_66668[iVar0 /*9*/].f_5 = 0;
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
	
	Global_54585 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_66667)
	{
		if (iParam1 == -1 || Global_66668[iVar0 /*9*/] == iParam1)
		{
			if (Global_66668[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_66668[iVar0 /*9*/].f_6 = iParam0;
				Global_66668[iVar0 /*9*/].f_7 = 1;
				Global_66668[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_64(int iParam0, int iParam1)
{
	Global_54583 = iParam0;
	Global_54584 = iParam1;
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
				if (unk_0xB578A5EEDCABA08F() >= 0)
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
	Global_97173.f_6839[iParam0] = 1;
	Global_97173.f_6839.f_236[iParam0] = (unk_0xF976C624234A4AA8() + iParam1);
}

int func_67(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (unk_0x61D8FEAF64881CDA(Global_2263, 14))
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
	if (unk_0x25531002BCF0D968(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_68()
{
	if (Global_15741 == 1 || Global_16708 == 1)
	{
		return 1;
	}
	return 0;
}

void func_69(bool bParam0)
{
	unk_0xD858EC6FECDB4B3F(bParam0);
	if (bParam0)
	{
	}
}

void func_70(char* sParam0, char* sParam1)
{
	if (unk_0x49BDC46D7CAD9C63())
	{
		Global_15749 = 1;
		StringCopy(&Global_15756, sParam0, 24);
		StringCopy(&Global_15750, sParam1, 24);
	}
}

int func_71()
{
	if (Global_15692 == 4)
	{
		if (unk_0x49BDC46D7CAD9C63())
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
		if (!unk_0x9F94F2CFDCA78C55(iVar1))
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
	if (Global_97173.f_5944.f_136 < 9)
	{
		Var0.f_0 = iParam0;
		if (Global_97173.f_5944.f_881 == Var0.f_0)
		{
			Global_97173.f_5944.f_881 = -1;
		}
		Var0.f_3 = func_53(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (unk_0xF976C624234A4AA8() + iParam5);
		Var0.f_1 = iParam10;
		iVar15 = 0;
		unk_0x3DBE2A7AF9E71C82(&iVar15, iParam2);
		Var0.f_2 = iVar15;
		Var0.f_6 = iParam3;
		Var0.f_14 = iParam4;
		Var0.f_10 = -1;
		Var0.f_11 = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		unk_0x3DBE2A7AF9E71C82(&(Var0.f_1), 0);
		unk_0xCD27BF29FB9012E2(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			unk_0x3DBE2A7AF9E71C82(&(Var0.f_1), 10);
		}
		Global_97173.f_5944[Global_97173.f_5944.f_136 /*15*/] = { Var0 };
		Global_97173.f_5944.f_136++;
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
	return Global_68329;
}

int func_76(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
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
			if (iParam0 == unk_0x507DA4994C3D8EBD())
			{
				return 0;
			}
		}
		if (unk_0x61D8FEAF64881CDA(Global_86042, iVar0))
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
		return unk_0x507DA4994C3D8EBD();
	}
	return Global_87667[func_78(iParam0)];
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
	Global_1581 = iParam2;
	Global_15740 = 0;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_15706 = 0;
	Global_15697 = 1;
	Global_15744 = 0;
	Global_15746 = 0;
	if (iParam6 == 1)
	{
		Global_15704 = 1;
	}
	else
	{
		Global_15704 = 0;
	}
	Global_2621441 = 0;
	return func_81(sParam4, iParam5, bParam9);
}

int func_81(char* sParam0, int iParam1, bool bParam2)
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					unk_0xD858EC6FECDB4B3F(false);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
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
		if (unk_0xF611D1BB58990143())
		{
			return 0;
		}
		if (func_87(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_86();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			unk_0xCD27BF29FB9012E2(&Global_2263, 20);
			unk_0xCD27BF29FB9012E2(&Global_2264, 17);
			unk_0xCD27BF29FB9012E2(&Global_2265, 0);
			if (bParam2)
			{
				func_85();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
			{
				if (unk_0x6A5400407F3E1292(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (func_84())
				{
					return 0;
				}
				if (unk_0x485BBA43A75711BE(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0x1983DA3C921BB046(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xB42AA529845BA2A3(unk_0x507DA4994C3D8EBD()))
				{
					return 0;
				}
				if (unk_0xCB79AB67F7DF0E8F(unk_0x507DA4994C3D8EBD(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0x26FE3F0A2045AA7E(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x3AA78AB1897C2B94(unk_0xAF65E5A58BE87D95()))
					{
						return 0;
					}
					if (unk_0xA43F7819FA056045(unk_0x507DA4994C3D8EBD()))
					{
						return 0;
					}
					if (unk_0x5636DF02874259EA(unk_0xAF65E5A58BE87D95()))
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
				switch (Global_14393.f_1)
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
				if (unk_0x61D8FEAF64881CDA(Global_2263, 9))
				{
					return 0;
				}
			}
			func_83();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_82();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
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
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD858EC6FECDB4B3F(false);
	Global_15692 = 1;
}

void func_83()
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	unk_0xCD27BF29FB9012E2(&Global_2264, 16);
}

int func_84()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &iVar1, 1);
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0xC0C709777CCE070F() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
	{
		if (unk_0xA7C37587D6D77CA4(unk_0x507DA4994C3D8EBD(), 78, 1))
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
		if (!unk_0xE5D56342B0FF1D0D(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x26EA758C2A691D06(unk_0x507DA4994C3D8EBD()) == Global_97173.f_29699[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_25();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68067)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

void func_86()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_87(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327591.f_203[iParam1];
			}
			break;
	}
	return unk_0x61D8FEAF64881CDA(Global_1327591.f_949, iParam0);
}

void func_88(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
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
	if (!Global_68067)
	{
		if (!unk_0x9F94F2CFDCA78C55(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xC9CD9F3D2675F791(iParam2, 0);
			}
			else
			{
				unk_0xC9CD9F3D2675F791(iParam2, 1);
			}
		}
		if (!unk_0x9F94F2CFDCA78C55(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xABDE52C59BE3C61A(iParam2, 0);
			}
			else
			{
				unk_0xABDE52C59BE3C61A(iParam2, 1);
			}
		}
	}
}

void func_92(int iParam0, int iParam1)
{
	if (iParam0 == 141 || iParam0 == -1)
	{
		return;
	}
	if (Global_97173.f_7311.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_97173.f_7311.f_99.f_58[iParam0] = iParam1;
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
	return Global_97173.f_7311.f_325[iParam0 /*6*/];
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
	if (iParam0 == 141 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97173.f_7311.f_99.f_58[iParam0];
}

void func_98(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x328FE98BE3FE17FC(sParam0);
	unk_0x6719DEAA365F81B2(iParam1, 1);
}

bool func_99(char* sParam0, int iParam1, int iParam2)
{
	unk_0x228B04C8B6530A66(sParam0);
	if (iParam1 == 1)
	{
		unk_0x923B18EB34FC2117(iParam2);
	}
	return unk_0x3EDC7EA7BB2A109E();
}

bool func_100(int iParam0, struct<3> Param1, float fParam4)
{
	return unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(iParam0, 1), Param1) <= (fParam4 * fParam4);
}

void func_101()
{
	func_208(&iLocal_872, &uLocal_873, &iLocal_684, &iLocal_820, &iLocal_819, Local_825, Local_866.f_0, 0, 1090519040);
	func_207();
	func_148();
	switch (iLocal_682)
	{
		case 0:
			if (func_115(iLocal_681, bLocal_27))
			{
				if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) == 0)
				{
					if (func_36(iLocal_872))
					{
						if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_872, 0))
						{
							func_114("PRA_LEVVEH", &iLocal_818);
						}
					}
				}
				iLocal_682 = 1;
			}
			break;
		
		case 1:
			func_113(&iLocal_819, Local_825, &iLocal_683, iLocal_684, &iLocal_818, &iLocal_836);
			if (func_106(iLocal_872, Local_825, &iLocal_819, iLocal_684, iLocal_683, &iLocal_834, &iLocal_837, &iLocal_833, &iLocal_832, &iLocal_818, 1090519040))
			{
				if (!func_105())
				{
					if (func_65(&uLocal_685, &cLocal_1042, &uLocal_877))
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
			if (func_36(Local_866.f_0))
			{
				if (!unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), Local_866.f_0, 0))
				{
					unk_0x11460EBE0487B44F(unk_0x507DA4994C3D8EBD(), Local_866.f_0, -1);
				}
				else
				{
					func_102(Local_866.f_0, Local_825, 126.0705f, 0, 1);
					func_39(1, 1, 1);
					iLocal_682 = 1;
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
			bVar0 = unk_0xBC5E1C3D489E93FD(Param1, &fVar1);
			if (bVar0)
			{
				Param1.f_2 = fVar1;
			}
		}
		unk_0xF85858E5CBF4D9F0(iParam0, Param1, 1, 0, 0, iParam6);
		unk_0x248DC16118AE5035(iParam0, fParam4);
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
	func_104(iLocal_681);
	iLocal_815 = iLocal_681;
	if (!bParam0)
	{
		iLocal_681 = iLocal_815 + 1;
	}
	else if (iLocal_815 > 0)
	{
		iLocal_681 = (iLocal_815 - 1);
	}
	iLocal_818 = 0;
	iLocal_682 = 0;
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
				if (!unk_0x932B30DC68C85A46(iParam0))
				{
					func_114(func_112(func_75()), iParam11);
				}
			}
			if (!unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Param1, fParam12, fParam12, 2f, 0, 1, 2))
			{
				unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Param1, fParam12, fParam12, 2f, 1, 1, 2);
				if (func_99(func_112(func_75()), 0, 0))
				{
					unk_0xAD91AFD429036CAB(func_112(func_75()));
				}
				*iParam7 = 1;
				func_110(iParam4, Param1, 1);
			}
			else
			{
				if (*iParam7)
				{
					fVar0 = (fParam12 / 2f);
					if (func_100(unk_0x507DA4994C3D8EBD(), Param1, fVar0))
					{
						*iParam7 = 0;
						func_109(1077936128, 1);
					}
				}
				func_7(iParam4);
			}
		}
	}
	else if (unk_0x594EB70937EC1486(iParam0, Param1, fParam12, fParam12, 2f, 0, 1, 2))
	{
		if (*iParam9 == -1)
		{
			unk_0xCDC1FD4387DA32EC(iParam0, 2);
			return 1;
		}
		if (!*iParam10)
		{
			if (func_99(func_112(func_75()), 0, 0))
			{
				unk_0x3DF5706BBD8F5B5B();
			}
			*iParam9 = unk_0xF976C624234A4AA8();
			*iParam10 = 1;
			unk_0xCDC1FD4387DA32EC(iParam0, 2);
		}
		else if ((unk_0xF976C624234A4AA8() - *iParam9) > 3000)
		{
			return 1;
		}
	}
	else
	{
		if (unk_0x407FC6F2E81C15C7(iParam0) == 2)
		{
			unk_0xCDC1FD4387DA32EC(iParam0, 1);
		}
		if (!*iParam8)
		{
			if (func_99(func_108(func_75(), 0), 0, 0))
			{
				unk_0xAD91AFD429036CAB(func_108(func_75(), 0));
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
	
	if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		return 1;
	}
	iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
	if (unk_0xCA8794CE207FC6D5(iVar0, 0))
	{
		if (unk_0xE634CB9EE7094537(iVar0, -1) == unk_0x507DA4994C3D8EBD())
		{
			if (!unk_0x2ACEA6F88B3AFFB0(iVar0))
			{
				unk_0x7674FE6F22323056(iVar0, fParam0, iParam1, 0);
				return 0;
			}
		}
		else
		{
			return 1;
		}
	}
	if (unk_0x3428BABF05B108EE(unk_0x507DA4994C3D8EBD()))
	{
		return 1;
	}
	if (unk_0xCA8794CE207FC6D5(iVar0, 0))
	{
		if (unk_0x2ACEA6F88B3AFFB0(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_110(int iParam0, struct<3> Param1, int iParam4)
{
	if (!unk_0xD361727124133DF3(*iParam0))
	{
		*iParam0 = func_111(Param1, 5, iParam4);
	}
}

int func_111(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = unk_0x7BFA7BEBF46363DE(Param0);
	unk_0xAE9EE75C62A1DACD(iVar0, iParam3);
	unk_0x1D8833C0F155BFE7(iVar0, 1f);
	unk_0x43F7D508C655CBA3(iVar0, iParam4);
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
			if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0)
			{
				*iParam4 = 1;
			}
			break;
		
		case 1:
			func_7(iParam0);
			if ((iParam5 == 1 || iParam5 == 2) || iParam5 == 3)
			{
				unk_0x3DF5706BBD8F5B5B();
				func_98("LOSE_WANTED", 7500, 0);
				*iParam4 = 2;
			}
			break;
		
		case 2:
			if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) == 0)
			{
				unk_0x3DF5706BBD8F5B5B();
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
			else if (func_142(1, Local_822, 0))
			{
				if (func_141())
				{
					func_140(33);
					unk_0x941F924D5E9C2140(joaat("trash"), 1);
					unk_0x941F924D5E9C2140(joaat("towtruck"), 1);
					unk_0x941F924D5E9C2140(joaat("s_m_y_garbage"), 1);
					iLocal_681 = 2;
					func_7(&iLocal_819);
					func_138(&uLocal_669, 0, 0);
					func_137(189, 1244.338f, -339.3197f, 68.0823f);
					func_135();
					unk_0xF81DFFDCEDAA4951("DRIVE", 0);
					unk_0xF81DFFDCEDAA4951("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0xF81DFFDCEDAA4951("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0xF81DFFDCEDAA4951("WORLD_VEHICLE_DRIVE_SOLO", 0);
					return 1;
				}
				else if (((func_142(2, Local_866.f_1, Local_866.f_4) && func_142(3, Local_838.f_1, Local_838.f_4)) && func_142(4, Local_852.f_1, Local_852.f_4)) && func_134(0))
				{
					func_135();
					func_140(33);
					if (func_321(Local_838.f_0))
					{
						func_133(Local_838.f_0);
					}
					if (func_321(Local_852.f_0))
					{
						func_132(Local_852.f_0);
					}
					func_131(Local_866.f_0);
					if (func_321(Local_852.f_0) && func_321(Local_838.f_0))
					{
						func_120(iLocal_828, 1, 0, 1);
					}
					unk_0x941F924D5E9C2140(joaat("trash"), 1);
					unk_0x941F924D5E9C2140(joaat("towtruck"), 1);
					unk_0x941F924D5E9C2140(joaat("s_m_y_garbage"), 1);
					if (unk_0x2194B07471B5E552(Local_866.f_0) != 0)
					{
						iVar0 = unk_0x2194B07471B5E552(Local_866.f_0);
						unk_0x952F8F1F0AE0C407(1);
						func_7(&iVar0);
						unk_0x952F8F1F0AE0C407(0);
					}
					func_118(&iLocal_819, Local_866.f_0, 1);
					func_137(189, 1244.338f, -339.3197f, 68.0823f);
					unk_0xF81DFFDCEDAA4951("DRIVE", 0);
					unk_0xF81DFFDCEDAA4951("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0xF81DFFDCEDAA4951("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0xF81DFFDCEDAA4951("WORLD_VEHICLE_DRIVE_SOLO", 0);
					return 1;
				}
			}
			break;
		
		case 1:
			if (bParam1)
			{
				if ((func_142(2, Local_866.f_1, Local_866.f_4) && func_142(3, Local_838.f_1, Local_838.f_4)) && func_142(4, Local_852.f_1, Local_852.f_4))
				{
					func_117(unk_0x507DA4994C3D8EBD(), 1197.861f, -353.011f, 68.0929f, 278.9647f);
					func_116();
					bLocal_27 = false;
					unk_0xF81DFFDCEDAA4951("DRIVE", 0);
					unk_0xF81DFFDCEDAA4951("WORLD_VEHICLE_ATTRACTOR", 0);
					unk_0xF81DFFDCEDAA4951("WORLD_VEHICLE_DRIVE_PASSENGERS", 0);
					unk_0xF81DFFDCEDAA4951("WORLD_VEHICLE_DRIVE_SOLO", 0);
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
				if (func_142(2, Local_866.f_1, Local_866.f_4))
				{
					func_116();
					func_135();
					unk_0x11460EBE0487B44F(unk_0x507DA4994C3D8EBD(), Local_866.f_0, -1);
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
				if (func_142(2, Local_825, Local_866.f_4))
				{
					func_116();
					unk_0x11460EBE0487B44F(unk_0x507DA4994C3D8EBD(), Local_866.f_0, -1);
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
	if (iLocal_681 == 1)
	{
		func_133(Local_838.f_0);
		func_132(Local_852.f_0);
		func_131(Local_866.f_0);
		func_120(iLocal_828, 1, 0, 1);
	}
	iLocal_875 = 0;
	iLocal_836 = 0;
	iLocal_837 = 0;
	iLocal_832 = 0;
	iLocal_833 = 0;
	iLocal_834 = 0;
}

void func_117(int iParam0, struct<3> Param1, float fParam4)
{
	if (func_321(uParam0))
	{
		unk_0xAC57FBF981AB03F4(uParam0);
	}
	func_102(iParam0, Param1, fParam4, 0, 1);
}

void func_118(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0xD361727124133DF3(*iParam0))
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
		iVar0 = unk_0xB6F075D13B917FBE(uParam0);
		unk_0x109908E4511B0839(iVar0, uParam1);
		unk_0xAE9EE75C62A1DACD(iVar0, iParam2);
		unk_0x1D8833C0F155BFE7(iVar0, 1f);
	}
	return iVar0;
}

void func_120(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iLocal_79 = iParam0;
	bLocal_661 = iParam1;
	bLocal_660 = iParam2;
	bLocal_662 = iParam3;
	Local_109[0 /*11*/].f_1 = 0;
	Local_109[1 /*11*/].f_1 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_79 - 1))
	{
		Local_132[iVar0 /*25*/].f_18 = 0;
		iVar0++;
	}
	fLocal_658 = 0f;
	func_122();
	Local_109[1 /*11*/].f_7 = 3;
	Local_109[1 /*11*/].f_5 = 0;
	Local_109[1 /*11*/].f_10 = 1;
	Local_109[1 /*11*/].f_2 = 1500;
	Local_109[1 /*11*/].f_3 = 500;
	Local_109[0 /*11*/].f_5 = 0;
	Local_109[0 /*11*/].f_10 = 0;
	Local_109[0 /*11*/].f_2 = 1000;
	Local_109[0 /*11*/].f_3 = 100;
	unk_0x46B6351EE89452C8("Enemies", &uLocal_78);
	unk_0xE440546F94B26235(Local_109[0 /*11*/], uLocal_78);
	unk_0xE440546F94B26235(Local_109[1 /*11*/], uLocal_78);
	unk_0x7AB733311E18F96E(Local_109[0 /*11*/], 1, 0);
	unk_0x7AB733311E18F96E(Local_109[1 /*11*/], 1, 0);
	func_121(1.9f, 1.9f, 8f, 0f, 0f, 0f);
}

void func_121(struct<3> Param0, struct<3> Param3)
{
	Local_80.f_8 = { Param0 };
	Local_80.f_11 = { Param3 };
	Local_80.f_1 = 4;
}

void func_122()
{
	if (!unk_0x53170344050F2301(Local_109[0 /*11*/], iLocal_107, 0))
	{
		unk_0x3F07E364A21EBC20(Local_109[0 /*11*/], unk_0x0CAFB9D38494283D(iLocal_107, func_130(1)), 1f, -1, 1048576000, 0, 1193033728);
		Local_109[0 /*11*/].f_7 = 1;
	}
	else
	{
		func_123(1);
	}
}

void func_123(bool bParam0)
{
	if (!unk_0xC51FBEBD87CFD69C(iLocal_107, 0))
	{
		func_124(bParam0);
		if (iLocal_659 != (iLocal_79 - 1))
		{
			if (iLocal_659 == 4)
			{
				unk_0x2ED12A383DB1302F(Local_109[0 /*11*/], iLocal_107, Local_132[iLocal_659 /*25*/], 15f, 2883755, Local_132[iLocal_659 /*25*/].f_6);
			}
			else
			{
				unk_0x5E44C1186E137E21(Local_109[0 /*11*/], iLocal_107, Local_132[iLocal_659 /*25*/], 15f, 0, 0, 2883755, Local_132[iLocal_659 /*25*/].f_6, Local_132[iLocal_659 /*25*/].f_7);
			}
			Local_109[0 /*11*/].f_8 = Local_109[0 /*11*/].f_7;
			Local_109[0 /*11*/].f_7 = 4;
		}
		else
		{
			unk_0xF40D4EBDC0BA2C26(Local_109[0 /*11*/], iLocal_107, 15f, 786599);
			Local_109[0 /*11*/].f_8 = Local_109[0 /*11*/].f_7;
			Local_109[0 /*11*/].f_7 = 10;
		}
	}
	else
	{
		Local_109[0 /*11*/].f_8 = Local_109[0 /*11*/].f_7;
		Local_109[0 /*11*/].f_7 = 7;
	}
}

void func_124(bool bParam0)
{
	if (iLocal_659 != -1)
	{
		if (!func_129(Local_132[iLocal_659 /*25*/].f_11) && !func_129(Local_132[iLocal_659 /*25*/].f_14))
		{
			unk_0xC198E0954F22A27D(Local_132[iLocal_659 /*25*/].f_11 - Local_132[iLocal_659 /*25*/].f_14, Local_132[iLocal_659 /*25*/].f_11 + Local_132[iLocal_659 /*25*/].f_14, 1, 1);
		}
	}
	if (!bParam0)
	{
		func_127();
	}
	else
	{
		iLocal_659 = func_125();
	}
	if (iLocal_659 != -1)
	{
		if (!func_129(Local_132[iLocal_659 /*25*/].f_11) && !func_129(Local_132[iLocal_659 /*25*/].f_14))
		{
			unk_0xC198E0954F22A27D(Local_132[iLocal_659 /*25*/].f_11 - Local_132[iLocal_659 /*25*/].f_14, Local_132[iLocal_659 /*25*/].f_11 + Local_132[iLocal_659 /*25*/].f_14, 0, 1);
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
	
	if (func_36(iLocal_107))
	{
		Var1 = { unk_0xBF1B13057E5119A4(iLocal_107, 1) };
		iVar4 = 0;
		while (iVar4 <= (iLocal_79 - 1))
		{
			fVar28 = unk_0x8FE221761D524CFE(Var1, Local_132[iVar4 /*25*/], 1);
			if (!func_129(Local_132[iVar4 /*25*/]) && fVar28 > 25f)
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
		while (iVar4 <= (iLocal_79 - 1))
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
		fVar30 = func_126(Local_132[iVar0 /*25*/] - Var1, unk_0xF260FCBA09D07146(iLocal_107));
		iVar5 = iVar0;
		iVar31 = 0;
		while (fVar30 < 0f && iVar31 < 40)
		{
			iVar5++;
			if (iVar5 >= 21)
			{
				iVar5 = 0;
			}
			Var1 = { unk_0xBF1B13057E5119A4(iLocal_107, 1) };
			fVar30 = func_126(Local_132[iVar5 /*25*/] - Var1, unk_0xF260FCBA09D07146(iLocal_107));
			iVar31++;
		}
		if (iVar31 >= 40)
		{
			iVar5 = (iLocal_79 - 1);
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
	if (bLocal_661)
	{
		while (Local_132[iLocal_659 /*25*/].f_18 && iVar0 != -1)
		{
			iLocal_659++;
			if (iLocal_659 >= (iLocal_79 - 1))
			{
				iVar0 = -1;
				iLocal_659 = (iLocal_79 - 1);
			}
		}
		if (iLocal_659 == (iLocal_79 - 1))
		{
			if (bLocal_660)
			{
				iLocal_659 = 0;
				iVar0 = 0;
				while (iVar0 <= (iLocal_79 - 1))
				{
					Local_132[iVar0 /*25*/].f_18 = 0;
					iVar0++;
				}
			}
			else
			{
				iLocal_659 = (iLocal_79 - 1);
				return;
			}
		}
	}
	else
	{
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 <= (iLocal_79 - 1))
		{
			if (Local_132[iVar0 /*25*/].f_18)
			{
				iVar1++;
			}
			iVar0++;
		}
		if (iVar1 == (iLocal_79 - 1))
		{
			iLocal_659 = (iLocal_79 - 1);
		}
		else if (iVar1 == iLocal_79)
		{
			if (bLocal_660)
			{
				iVar0 = 0;
				while (iVar0 <= (iLocal_79 - 1))
				{
					Local_132[iVar0 /*25*/].f_18 = 0;
					iVar0++;
				}
				iLocal_659 = func_128();
			}
			else
			{
				iLocal_659 = -1;
				return;
			}
		}
		else
		{
			iLocal_659 = func_128();
		}
	}
}

int func_128()
{
	int iVar0;
	
	iVar0 = unk_0x4D3E68F73B727E49(0, (iLocal_79 - 1));
	while (Local_132[iVar0 /*25*/].f_18)
	{
		iVar0 = unk_0x4D3E68F73B727E49(0, (iLocal_79 - 1));
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
		uVar3 = unk_0xD33827A2E07C4BE6(iLocal_107, "wheel_rf");
	}
	else
	{
		uVar3 = unk_0xD33827A2E07C4BE6(iLocal_107, "wheel_lf");
	}
	Var0 = { unk_0xF72E61A2DB753A80(iLocal_107, uVar3) };
	Var0 = { unk_0xC9351EFF34BB33C0(iLocal_107, Var0) };
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
		iLocal_107 = iParam0;
	}
}

void func_132(var uParam0)
{
	if (func_321(uParam0))
	{
		Local_109[1 /*11*/] = uParam0;
	}
}

void func_133(var uParam0)
{
	if (func_321(uParam0))
	{
		Local_109[0 /*11*/] = uParam0;
	}
}

int func_134(bool bParam0)
{
	unk_0x395C5D98343F0040("missfbi4prepp1");
	unk_0xC47168D93A3B223B("missfbi4prepp1_garbageman");
	if (bParam0)
	{
		while (!unk_0xCE40391AB65FE305("missfbi4prepp1") && !unk_0xB3E0182D84120379("missfbi4prepp1_garbageman"))
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		return 1;
	}
	else if (unk_0xCE40391AB65FE305("missfbi4prepp1") && unk_0xB3E0182D84120379("missfbi4prepp1_garbageman"))
	{
		return 1;
	}
	return 0;
}

void func_135()
{
	func_136(&uLocal_877);
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
	func_91(uParam0, iVar0, unk_0x507DA4994C3D8EBD(), sVar1, 0, 1);
}

void func_137(int iParam0, struct<3> Param1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((Param1.f_0 == Global_24745[iVar0 /*23*/][0 /*3*/] && Param1.f_1 == Global_24745[iVar0 /*23*/][0 /*3*/].f_1) && Param1.f_2 == Global_24745[iVar0 /*23*/][0 /*3*/].f_2)
	{
		return;
	}
	Global_24742 = 1;
	unk_0x3DBE2A7AF9E71C82(&(Global_24745[iVar0 /*23*/].f_11), 18);
	Global_24745[iVar0 /*23*/][0 /*3*/] = { Param1 };
	Global_30772 = 1;
}

void func_138(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x61D8FEAF64881CDA(Global_2446210.f_4393, 25))
		{
			return;
		}
	}
	if (unk_0x4DA2E12E0157B5A3())
	{
		unk_0x0D1C3C2B4975D8AC(iParam2);
		unk_0x33D978A3F3EC8BD3("FocusIn");
		unk_0xAB5C0FE0C680BC7F("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x8EEEED91D5DD768C("FocusOut", 0, 0);
			unk_0x84795EA8F54230A1(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x2E98407DE29E0D76(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0xD504011E20D63A81(sVar0))
	{
		if (!unk_0xD95428C8AA1DBBF2())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0xD504011E20D63A81(uParam0->f_3))
	{
		if (func_139(uParam0->f_3))
		{
			unk_0x4A4C1A1BC79EFE8F(1);
		}
	}
	if (!unk_0xD504011E20D63A81(sVar0))
	{
		if (func_139(sVar0))
		{
			unk_0x4A4C1A1BC79EFE8F(1);
		}
	}
}

bool func_139(char* sParam0)
{
	unk_0x74C587863BEFBDD0(sParam0);
	return unk_0x5D488553935013A9(0);
}

void func_140(int iParam0)
{
	if (Global_87111 != -1)
	{
		if (iParam0 == Global_87111)
		{
			Global_87115 = 1;
			return;
		}
	}
}

int func_141()
{
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		if (unk_0x40923C25A763E8E8(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), joaat("trash")))
		{
			unk_0xBAE5DF507EEC53C8(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0), 1, 0);
			iLocal_872 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
			if (func_36(iLocal_872))
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
			if (func_147(Param1, Local_822, 1056964608) && fParam4 == 0f)
			{
				return 1;
			}
			break;
		
		case 1:
			unk_0x481B0AD01AC057F7(sLocal_817, 0);
			if (unk_0x6C741637F73EA9EC(0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_36(Global_86686[0]))
			{
				unk_0xBAE5DF507EEC53C8(Global_86686[0], 1, 1);
				Local_866.f_0 = Global_86686[0];
				if (func_36(Local_866.f_0))
				{
					func_35(Local_866.f_0, 0);
					unk_0xC158AF2A8304483D(Local_866.f_0, 1);
					unk_0x5BA593EA32D0187E(Local_866.f_0, 1);
					return 1;
				}
			}
			else if (func_146(&Local_866, Local_866.f_5, Local_866.f_1, Local_866.f_4, 1))
			{
				func_35(Local_866.f_0, 0);
				unk_0xC158AF2A8304483D(Local_866.f_0, 1);
				unk_0x5BA593EA32D0187E(Local_866.f_0, 1);
				return 1;
			}
			break;
		
		case 3:
			if (unk_0xFD68187442384158(Global_86686.f_9[0]))
			{
				if (!unk_0x1F214B2198E9D98E(Global_86686.f_9[0], 1))
				{
					unk_0xBAE5DF507EEC53C8(Global_86686.f_9[0], 1, 1);
					Local_838.f_0 = Global_86686.f_9[0];
					if (func_321(Local_838.f_0))
					{
						unk_0x2DC5B31EBB810396(Local_838.f_0, true);
						unk_0x7FEDD088E489CE41(Local_838.f_0, 170, 0);
						unk_0xB2B080B88A4144B7(Local_838.f_0, 65536, 1);
						unk_0x3A1E687904400847(Local_838.f_0, 50, 1);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_143(&Local_838, Local_838.f_5, Local_838.f_1, Local_838.f_4, 1, 0, 1, 1))
			{
				if (func_36(Local_866.f_0))
				{
					unk_0x11460EBE0487B44F(Local_838.f_0, Local_866.f_0, -1);
					unk_0x2DC5B31EBB810396(Local_838.f_0, true);
					unk_0x7FEDD088E489CE41(Local_838.f_0, 170, 0);
					unk_0xB2B080B88A4144B7(Local_838.f_0, 65536, 1);
					unk_0x3A1E687904400847(Local_838.f_0, 50, 1);
					return 1;
				}
			}
			break;
		
		case 4:
			if (unk_0xFD68187442384158(Global_86686.f_9[1]))
			{
				if (!unk_0x1F214B2198E9D98E(Global_86686.f_9[1], 1))
				{
					unk_0xBAE5DF507EEC53C8(Global_86686.f_9[1], 1, 1);
					Local_852.f_0 = Global_86686.f_9[1];
					if (func_321(Local_852.f_0))
					{
						unk_0x7FEDD088E489CE41(Local_852.f_0, 170, 0);
						unk_0xB2B080B88A4144B7(Local_852.f_0, 65536, 1);
						unk_0x3A1E687904400847(Local_852.f_0, 50, 1);
						unk_0x2DC5B31EBB810396(Local_852.f_0, true);
						unk_0x3C2614E45AB2F499(Local_852.f_0, 1);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (func_143(&Local_852, Local_852.f_5, Local_852.f_1, Local_852.f_4, 1, 0, 1, 1))
			{
				if (func_36(Local_866.f_0))
				{
					unk_0x11460EBE0487B44F(Local_852.f_0, Local_866.f_0, 0);
					unk_0x7FEDD088E489CE41(Local_852.f_0, 170, 0);
					unk_0xB2B080B88A4144B7(Local_852.f_0, 65536, 1);
					unk_0x3A1E687904400847(Local_852.f_0, 50, 1);
					unk_0x2DC5B31EBB810396(Local_852.f_0, true);
					unk_0x3C2614E45AB2F499(Local_852.f_0, 1);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_143(var uParam0, var uParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!unk_0xFD68187442384158(*uParam0))
	{
		if (func_145(uParam1, "Loading", 0))
		{
			*uParam0 = unk_0x7B88529CAE3B7F15(26, uParam1, Param2, uParam5, 1, 1);
			if (func_321(*uParam0))
			{
				if (bParam7)
				{
					unk_0x479E7EEEBDEE245D(*uParam0, 1);
				}
				if (bParam8)
				{
					unk_0x2DC5B31EBB810396(*uParam0, bParam8);
				}
				if (!bParam9)
				{
					unk_0x6A750A31D18DA81A(*uParam0, bParam9);
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
		if (unk_0xD291857D0C9C7FEC(uParam0))
		{
			unk_0xFF467904A8A12BBE(uParam0);
		}
	}
	else
	{
		unk_0xFF467904A8A12BBE(uParam0);
	}
}

int func_145(var uParam0, char* sParam1, int iParam2)
{
	unk_0xCBE6AC5010E5CE5C(uParam0);
	if (!unk_0x8FA72E132AAFA62F(sParam1) && iParam2 != -1)
	{
	}
	if (unk_0xD291857D0C9C7FEC(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_146(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (!unk_0xFD68187442384158(*uParam0))
	{
		if (func_145(iParam1, "Loading", 0))
		{
			*uParam0 = unk_0x546974B676313326(iParam1, Param2, fParam5, 1, 1);
			if (unk_0xFD68187442384158(*uParam0))
			{
				if (!unk_0x73E2404DC70203CD(*uParam0))
				{
					unk_0xBAE5DF507EEC53C8(*uParam0, 1, 0);
				}
				unk_0xD90C30D269B19096(*uParam0);
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
			unk_0xF85858E5CBF4D9F0(*uParam0, Param2, 1, 0, 0, 1);
			unk_0x248DC16118AE5035(*uParam0, fParam5);
		}
		if (!unk_0x73E2404DC70203CD(*uParam0))
		{
			unk_0xBAE5DF507EEC53C8(*uParam0, 1, 0);
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_147(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (unk_0x75E01E8585722F89((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x75E01E8585722F89((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (unk_0x75E01E8585722F89((Param0.f_2 - Param3.f_2)) <= fParam6)
			{
				return 1;
			}
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
		func_149(&(Local_109[iVar0 /*11*/]), iVar0);
		iVar0++;
	}
}

void func_149(var uParam0, int iParam1)
{
	if (func_321(*uParam0))
	{
		func_195(uParam0, iParam1, 0);
		if (unk_0x22605DE2E6933CF2(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 3))
		{
			if (unk_0x5132EC78980FBED7(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man") >= 0.172f)
			{
				if (func_10(Local_132[iLocal_659 /*25*/].f_17) && unk_0xDF75DAAACD32E49E(Local_132[iLocal_659 /*25*/].f_17))
				{
					unk_0x708A5EFEB2660CE4(*uParam0, 1048576000);
					unk_0x04F7B10CA147AAAA(*uParam0);
					if (iLocal_659 <= 20 && iLocal_659 != -1)
					{
						Local_132[iLocal_659 /*25*/].f_18 = 1;
						uParam0->f_9 = 0;
					}
					unk_0x5B97F41A7BE54877(Local_132[iLocal_659 /*25*/].f_17, 1, 0);
					unk_0xCD5BFC4DFAFC3268(Local_132[iLocal_659 /*25*/].f_17, 1, unk_0xF260FCBA09D07146(*uParam0), 0, 1, 1, 0);
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
		if (func_10(Local_132[iLocal_659 /*25*/].f_17))
		{
			if (unk_0xDF75DAAACD32E49E(Local_132[iLocal_659 /*25*/].f_17))
			{
				unk_0x5B97F41A7BE54877(Local_132[iLocal_659 /*25*/].f_17, 1, 0);
				unk_0xCD5BFC4DFAFC3268(Local_132[iLocal_659 /*25*/].f_17, 1, unk_0xF260FCBA09D07146(*uParam0), 0, 1, 1, 0);
			}
		}
		func_7(&(uParam0->f_4));
		if (unk_0xFD68187442384158(*uParam0))
		{
			if (!func_150(unk_0x507DA4994C3D8EBD(), *uParam0, 150f) && !bLocal_663)
			{
				func_5(uParam0, 1, 0, 1);
			}
		}
	}
}

bool func_150(int iParam0, int iParam1, float fParam2)
{
	return unk_0xB7A628320EFF8E47(unk_0xBF1B13057E5119A4(iParam0, 1), unk_0xBF1B13057E5119A4(iParam1, 1)) <= (fParam2 * fParam2);
}

void func_151(var uParam0)
{
	var uVar0;
	var uVar1;
	
	switch (uParam0->f_6)
	{
		case 5:
			if ((unk_0xF976C624234A4AA8() - uParam0->f_1) > uParam0->f_3)
			{
				if (func_177(*uParam0, 780511057))
				{
					unk_0xAC57FBF981AB03F4(*uParam0);
				}
				unk_0xA859D289EEB2D72A(*uParam0, unk_0x507DA4994C3D8EBD(), 30f, -1, 0, 0);
				uParam0->f_6 = 6;
				uParam0->f_1 = unk_0xF976C624234A4AA8();
			}
			break;
		
		case 21:
			if (unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6))
			{
				if (func_170(*uParam0, unk_0x507DA4994C3D8EBD(), 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 1);
					return;
				}
			}
			if ((unk_0xF976C624234A4AA8() - uParam0->f_1) > uParam0->f_3)
			{
				if (!unk_0x2A24448FF232F834(*uParam0, 0))
				{
					unk_0x5BE268EEA70577CE(*uParam0, unk_0x507DA4994C3D8EBD(), 8f, -1f, 10f, 0);
				}
				else
				{
					unk_0xB5DC017AFD430D1B(&uVar0);
					unk_0x48367A1F7C9A1041(0, 0, 0);
					unk_0x247B2966C6C2A4C1(0, unk_0x507DA4994C3D8EBD(), 0, 16);
					unk_0x6EE8A5CF9AC75F12(uVar0);
					unk_0x8229311A391A4EC6(*uParam0, uVar0);
					unk_0x9F77DFFC61FCB68C(&uVar0);
				}
				if (!unk_0xD361727124133DF3(uParam0->f_4))
				{
					uParam0->f_4 = func_166(*uParam0, 1, 145);
				}
				uParam0->f_6 = 22;
				uParam0->f_1 = unk_0xF976C624234A4AA8();
			}
			break;
		
		case 10:
			if ((unk_0xF976C624234A4AA8() - uParam0->f_1) > uParam0->f_3)
			{
				if (unk_0x2A24448FF232F834(*uParam0, 0))
				{
					unk_0xE131FC34DA8AD63F(*uParam0, 120, 1);
					uParam0->f_6 = 12;
					uParam0->f_1 = unk_0xF976C624234A4AA8();
				}
				else if (!func_177(*uParam0, 474215631))
				{
					if (func_177(*uParam0, 780511057))
					{
						unk_0xAC57FBF981AB03F4(*uParam0);
					}
					unk_0x5FD5E7ABD766D498(*uParam0, -1);
					uParam0->f_6 = 12;
					uParam0->f_1 = unk_0xF976C624234A4AA8();
				}
			}
			break;
		
		case 3:
			if ((unk_0xF976C624234A4AA8() - uParam0->f_1) > uParam0->f_3)
			{
				unk_0xE2E6B3E5187DD69C(*uParam0, 1, 1);
				unk_0xA859D289EEB2D72A(*uParam0, unk_0x507DA4994C3D8EBD(), 500f, -1, 0, 1);
				uParam0->f_1 = unk_0xF976C624234A4AA8();
				uParam0->f_6 = 4;
				uParam0->f_5 = 1;
			}
			break;
		
		case 11:
			func_165(uParam0);
			if ((unk_0xF976C624234A4AA8() - uParam0->f_1) > 5000)
			{
				if (!func_177(*uParam0, 713668775))
				{
					if (unk_0xFD68187442384158(Local_109[func_164(uParam0->f_10) /*11*/]))
					{
						unk_0x3F07E364A21EBC20(*uParam0, Local_665, 1f, -1, 2f, 0, 1193033728);
					}
				}
				uParam0->f_1 = unk_0xF976C624234A4AA8();
				uParam0->f_6 = 23;
				uParam0->f_5 = 1;
			}
			break;
		
		case 18:
			if (!func_177(*uParam0, -2017877118))
			{
				unk_0xB5DC017AFD430D1B(&uVar1);
				if (func_163(unk_0xBF1B13057E5119A4(*uParam0, 1), unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1)) > 1.5f)
				{
					unk_0x211FA3DF75B31A84(0, unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1), 0);
				}
				unk_0x371C90C63129A983(0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				unk_0x6EE8A5CF9AC75F12(uVar1);
				unk_0x8229311A391A4EC6(*uParam0, uVar1);
				unk_0x9F77DFFC61FCB68C(&uVar1);
				uParam0->f_5 = 1;
				uParam0->f_6 = 20;
				uParam0->f_1 = unk_0xF976C624234A4AA8();
			}
			break;
		
		case 19:
			func_165(uParam0);
			if (!func_177(*uParam0, -2017877118))
			{
				unk_0x371C90C63129A983(*uParam0, "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 6000, 1);
				uParam0->f_5 = 1;
				uParam0->f_6 = 20;
				uParam0->f_1 = unk_0xF976C624234A4AA8();
			}
			break;
		
		case 1:
			if (!unk_0x53170344050F2301(*uParam0, iLocal_107, 0))
			{
				func_161(uParam0);
			}
			break;
		
		case 2:
			if (!unk_0x2E177F2B797A4A34(*uParam0) && (unk_0xF976C624234A4AA8() - uParam0->f_1) > 3000)
			{
				func_161(uParam0);
			}
			break;
		
		case 4:
			if ((unk_0xF976C624234A4AA8() - uParam0->f_1) > 8000)
			{
				unk_0xA859D289EEB2D72A(*uParam0, unk_0x507DA4994C3D8EBD(), 500f, -1, 0, 0);
				if (!iLocal_664)
				{
					if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) == 0)
					{
						unk_0x050E86400BAF39B2(unk_0xAF65E5A58BE87D95(), 2, 0);
						unk_0x4DFE220122919594(unk_0xAF65E5A58BE87D95(), 0);
						iLocal_664 = 1;
					}
				}
				unk_0xE2E6B3E5187DD69C(*uParam0, 0, 1);
				uParam0->f_1 = unk_0xF976C624234A4AA8();
				uParam0->f_6 = 8;
			}
			else if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 1)
			{
				unk_0xE2E6B3E5187DD69C(*uParam0, 0, 1);
				uParam0->f_1 = unk_0xF976C624234A4AA8();
				uParam0->f_6 = 8;
			}
			break;
		
		case 6:
			if ((unk_0xF976C624234A4AA8() - uParam0->f_1) > uParam0->f_2)
			{
				if (!func_150(*uParam0, unk_0x507DA4994C3D8EBD(), 15f))
				{
					func_7(&(uParam0->f_4));
					uParam0->f_6 = 7;
					uParam0->f_1 = unk_0xF976C624234A4AA8();
				}
			}
			break;
		
		case 7:
			if (unk_0x53170344050F2301(*uParam0, iLocal_107, 1))
			{
				if (uParam0->f_6 != 4 && uParam0->f_6 != 1)
				{
					if (func_159())
					{
						if (func_321(*uParam0))
						{
							unk_0xAC57FBF981AB03F4(*uParam0);
							unk_0xA859D289EEB2D72A(*uParam0, unk_0x507DA4994C3D8EBD(), 500f, -1, 0, 1);
							uParam0->f_6 = 1;
						}
					}
				}
				if (!func_150(*uParam0, unk_0x507DA4994C3D8EBD(), 120f))
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
			if (!func_150(*uParam0, unk_0x507DA4994C3D8EBD(), 120f))
			{
				func_5(uParam0, 1, 0, 1);
			}
			break;
		
		case 9:
			if (unk_0x88253E28293B8BFD(*uParam0))
			{
				func_169(uParam0, 1);
				return;
			}
			if ((unk_0xF976C624234A4AA8() - uParam0->f_1) > uParam0->f_2 || !func_177(*uParam0, 2104565373))
			{
				func_156(uParam0);
			}
			break;
		
		case 12:
			if ((unk_0xF976C624234A4AA8() - uParam0->f_1) >= uParam0->f_2)
			{
				unk_0xA859D289EEB2D72A(*uParam0, unk_0x507DA4994C3D8EBD(), 500f, -1, 0, 1);
				uParam0->f_6 = 5;
			}
			else
			{
				unk_0xE131FC34DA8AD63F(*uParam0, 120, 1);
			}
			break;
		
		case 13:
			if ((unk_0xF976C624234A4AA8() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_150(*uParam0, unk_0x507DA4994C3D8EBD(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = unk_0xF976C624234A4AA8();
				}
				else if (func_170(Local_109[func_164(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 0);
				}
				else
				{
					func_155(uParam0);
					uParam0->f_1 = unk_0xF976C624234A4AA8();
				}
			}
			break;
		
		case 15:
			if ((unk_0xF976C624234A4AA8() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_150(*uParam0, unk_0x507DA4994C3D8EBD(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = unk_0xF976C624234A4AA8();
				}
				else if (func_170(Local_109[func_164(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 0);
				}
				else
				{
					func_155(uParam0);
					uParam0->f_1 = unk_0xF976C624234A4AA8();
				}
			}
			break;
		
		case 16:
			if (unk_0x88253E28293B8BFD(*uParam0))
			{
				func_169(uParam0, 1);
				return;
			}
			if ((unk_0xF976C624234A4AA8() - iLocal_668) >= 9000)
			{
				if (!func_154(uParam0))
				{
					func_156(uParam0);
					uParam0->f_1 = unk_0xF976C624234A4AA8();
				}
				else
				{
					uParam0->f_1 = unk_0xF976C624234A4AA8();
					uParam0->f_5 = 1;
					uParam0->f_6 = 16;
				}
			}
			else if ((unk_0xF976C624234A4AA8() - iLocal_668) >= 5000 && (unk_0xF976C624234A4AA8() - iLocal_668) <= 5500)
			{
				if (unk_0x2A24448FF232F834(*uParam0, 0))
				{
					if (unk_0xEE15333D996F6258(*uParam0))
					{
						unk_0x1700E1858C4E6FB7(*uParam0);
					}
				}
			}
			break;
		
		case 14:
			if ((unk_0xF976C624234A4AA8() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_150(*uParam0, unk_0x507DA4994C3D8EBD(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = unk_0xF976C624234A4AA8();
				}
				else if (func_170(Local_109[func_164(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 0);
				}
				else
				{
					func_155(uParam0);
					uParam0->f_1 = unk_0xF976C624234A4AA8();
				}
			}
			break;
		
		case 17:
			if ((unk_0xF976C624234A4AA8() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_150(*uParam0, unk_0x507DA4994C3D8EBD(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = unk_0xF976C624234A4AA8();
				}
				else if (func_170(Local_109[func_164(uParam0->f_10) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 0);
				}
				else
				{
					func_155(uParam0);
					uParam0->f_1 = unk_0xF976C624234A4AA8();
				}
			}
			break;
		
		case 20:
			if (unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6) && !unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
			{
				if (func_170(*uParam0, unk_0x507DA4994C3D8EBD(), 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 1);
					return;
				}
			}
			if ((unk_0xF976C624234A4AA8() - uParam0->f_1) >= 6000)
			{
				if (!unk_0x9EC075F0DABF6298(*uParam0, unk_0x0CAFB9D38494283D(iLocal_107, 5f, 0f, -2f), unk_0xBF1B13057E5119A4(iLocal_107, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
				{
					func_156(uParam0);
				}
				else
				{
					func_161(uParam0);
					func_161(&(Local_109[func_164(uParam0->f_10) /*11*/]));
				}
				uParam0->f_1 = unk_0xF976C624234A4AA8();
			}
			func_165(uParam0);
			break;
		
		case 22:
			if (unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6))
			{
				if (func_170(*uParam0, unk_0x507DA4994C3D8EBD(), 1126825984, 1, 250, 7))
				{
					func_169(uParam0, 1);
					return;
				}
			}
			if ((unk_0xF976C624234A4AA8() - uParam0->f_1) >= uParam0->f_2)
			{
				if (!func_150(*uParam0, unk_0x507DA4994C3D8EBD(), 15f))
				{
					func_156(uParam0);
					uParam0->f_1 = unk_0xF976C624234A4AA8();
					return;
				}
				else
				{
					func_155(uParam0);
					uParam0->f_1 = unk_0xF976C624234A4AA8();
				}
			}
			break;
		
		case 23:
			func_195(uParam0, uParam0->f_10, 1);
			func_165(uParam0);
			if (func_100(*uParam0, Local_665, 2f))
			{
				if (func_152(*uParam0, Local_665, 1126825984, 0))
				{
					unk_0xAC57FBF981AB03F4(*uParam0);
					uParam0->f_6 = 19;
					uParam0->f_5 = 1;
					uParam0->f_1 = unk_0xF976C624234A4AA8();
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
	
	Var0 = { func_153(Param1 - unk_0xBF1B13057E5119A4(iParam0, 1)) };
	if (fParam4 < 0.1f || fParam4 > 360f)
	{
		return 1;
	}
	if (iParam5 == 0)
	{
		Var3 = { unk_0xF260FCBA09D07146(iParam0) };
	}
	else
	{
		Var3 = { func_153(unk_0xC5B1818639240D24(iParam0, 31086, 0f, 5f, 0f) - unk_0xC5B1818639240D24(iParam0, 31086, 0f, 0f, 0f)) };
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
	if (unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), unk_0x0CAFB9D38494283D(iLocal_107, 0f, 10f, -2f), unk_0x0CAFB9D38494283D(iLocal_107, 0f, 3f, 2f), 5f, 0, 1, 0) && unk_0x3428BABF05B108EE(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_155(var uParam0)
{
	int iVar0;
	
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
		if (func_36(iVar0))
		{
			if (!unk_0xCA8508992C844A64(*uParam0, iVar0, -1, 0, 0))
			{
				uParam0->f_6 = 18;
				uParam0->f_1 = unk_0xF976C624234A4AA8();
			}
		}
	}
}

void func_156(var uParam0)
{
	unk_0xCA4EA7D4F6DCCD43(2, uLocal_78, joaat("player"));
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
				if (iLocal_659 <= 20 && iLocal_659 != -1)
				{
					Local_132[iLocal_659 /*25*/].f_18 = 1;
				}
				if (!unk_0x53170344050F2301(*uParam0, iLocal_107, 0))
				{
					if (uParam0->f_10 == 0)
					{
						unk_0x3F07E364A21EBC20(*uParam0, unk_0x0CAFB9D38494283D(iLocal_107, func_130(1)), 1f, -1, 1048576000, 0, 1193033728);
						uParam0->f_7 = 1;
					}
					else
					{
						unk_0x3F07E364A21EBC20(*uParam0, unk_0x0CAFB9D38494283D(iLocal_107, func_130(0)), 1f, -1, 1048576000, 0, 1193033728);
						uParam0->f_7 = 1;
					}
				}
			}
			break;
		
		case 2:
			if (!unk_0x53170344050F2301(*uParam0, iLocal_107, 0))
			{
				if (uParam0->f_10 == 0)
				{
					unk_0x3F07E364A21EBC20(*uParam0, unk_0x0CAFB9D38494283D(iLocal_107, func_130(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					unk_0x3F07E364A21EBC20(*uParam0, unk_0x0CAFB9D38494283D(iLocal_107, func_130(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			break;
		
		case 9:
			if (!Local_132[iLocal_659 /*25*/].f_18)
			{
				if (uParam0->f_9 == 1)
				{
					func_157(uParam0);
				}
				else if (uParam0->f_10 == 0)
				{
					unk_0x3F07E364A21EBC20(*uParam0, unk_0x0CAFB9D38494283D(iLocal_107, func_130(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					unk_0x3F07E364A21EBC20(*uParam0, unk_0x0CAFB9D38494283D(iLocal_107, func_130(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			else if (!unk_0x53170344050F2301(*uParam0, iLocal_107, 0))
			{
				if (uParam0->f_10 == 0)
				{
					unk_0x3F07E364A21EBC20(*uParam0, unk_0x0CAFB9D38494283D(iLocal_107, func_130(1)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
				else
				{
					unk_0x3F07E364A21EBC20(*uParam0, unk_0x0CAFB9D38494283D(iLocal_107, func_130(0)), 1f, -1, 1048576000, 0, 1193033728);
					uParam0->f_7 = 1;
				}
			}
			break;
		
		default:
			break;
	}
	uParam0->f_1 = unk_0xF976C624234A4AA8();
	uParam0->f_5 = 0;
}

void func_157(var uParam0)
{
	if (!func_177(*uParam0, -71340211))
	{
		if (Local_132[iLocal_659 /*25*/].f_23 != 0)
		{
			if (func_10(Local_132[iLocal_659 /*25*/].f_17))
			{
				unk_0x896A419A31D7A17A(*uParam0, Local_132[iLocal_659 /*25*/].f_17, -1, 0f, 180f, 1f, 0);
			}
		}
		else
		{
			unk_0x3F07E364A21EBC20(*uParam0, Local_132[iLocal_659 /*25*/].f_19, 1f, 20000, -1f, 0, func_158(Local_132[iLocal_659 /*25*/].f_19, unk_0xBF1B13057E5119A4(*uParam0, 1), 1));
		}
		if (func_36(iLocal_107))
		{
			unk_0xE25E46198A369207(iLocal_107, 5, 0, 0);
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
		fVar0 = unk_0x1E7EBED5BB2C078C(fVar1, fVar2);
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
	if (func_36(iLocal_107) && func_321(unk_0x507DA4994C3D8EBD()))
	{
		if (unk_0x6255AE2591FE7603(iLocal_107, unk_0x507DA4994C3D8EBD(), 1))
		{
			unk_0x7CEA616AE5D86DF7(iLocal_107);
			if (func_160() || unk_0x5D422B4764FA2ACA(iLocal_107) < 851)
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
		if (unk_0xEB461363EE450DCA(iLocal_107, iVar0, 0))
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
		uParam0->f_1 = unk_0xF976C624234A4AA8();
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
			if (!unk_0x9F94F2CFDCA78C55(*uParam0))
			{
				unk_0x708A5EFEB2660CE4(*uParam0, 1048576000);
				unk_0x04F7B10CA147AAAA(*uParam0);
				unk_0xEC0A546609840086(*uParam0, "missfbi4prepp1", "_bag_drop_garbage_man", 8f, -8f, -1, 56, 0, 0, 0, 0);
			}
		}
	}
}

float func_163(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)
{
	return unk_0xA75239A5F28CBA62((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
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
	if (func_36(iLocal_107) && (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_107, 0) && !unk_0x53170344050F2301(*uParam0, iLocal_107, 0)))
	{
		if (unk_0x11F6A4A45943670E(iLocal_107) > 0f)
		{
			uParam0->f_1 = unk_0xF976C624234A4AA8();
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
	if ((iParam2 != 145 && unk_0xD361727124133DF3(uVar0)) && unk_0xD177A95825B53731(&(Global_97173.f_29699[iParam2 /*29*/].f_3)))
	{
		unk_0x2B271F66198227B7(uVar0, &(Global_97173.f_29699[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_167(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xFD68187442384158(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xB6F075D13B917FBE(iParam0);
	if (unk_0x1BA544973A67E699(iParam0))
	{
		unk_0x1D8833C0F155BFE7(iVar0, func_168(unk_0xD95428C8AA1DBBF2(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x109908E4511B0839(iVar0, bParam1);
		}
		else
		{
			unk_0xEDB3DD98D55452E4(iVar0, 2);
		}
	}
	else if (unk_0x91F594068DF4424F(iParam0))
	{
		unk_0x1D8833C0F155BFE7(iVar0, func_168(unk_0xD95428C8AA1DBBF2(), 0.7f, 0.7f));
		unk_0x109908E4511B0839(iVar0, bParam1);
	}
	else if (unk_0xBCF2529C09F7A239(iParam0))
	{
		unk_0x1D8833C0F155BFE7(iVar0, func_168(unk_0xD95428C8AA1DBBF2(), 0.7f, 0.7f));
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
	if ((unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6) || iParam1) || uParam0->f_6 == 23)
	{
		if (!func_150(unk_0x507DA4994C3D8EBD(), *uParam0, 10f))
		{
			if (!func_177(*uParam0, 1805844857))
			{
				uParam0->f_6 = 5;
				uParam0->f_5 = 1;
				uParam0->f_1 = unk_0xF976C624234A4AA8();
			}
		}
		else
		{
			uParam0->f_6 = 10;
			uParam0->f_5 = 1;
			uParam0->f_1 = unk_0xF976C624234A4AA8();
		}
	}
	else if (uParam0->f_5 != 1)
	{
		if (!func_177(*uParam0, 780511057) && !func_177(*uParam0, -71340211))
		{
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
			uParam0->f_1 = unk_0xF976C624234A4AA8();
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
			func_175(&(Local_36[iVar4 /*4*/]));
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
		Local_36[iVar4 /*4*/].f_1 = iParam0;
		Local_36[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0xC5B1818639240D24(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_171(&(Local_36[iVar4 /*4*/]), Var1, iParam1, &(Local_36[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0xF976C624234A4AA8() - Local_36[iVar4 /*4*/].f_3) < iParam4);
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
		*uParam0 = unk_0x9400A3EC34709233(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = unk_0xBFABF77FCEA8BA3F(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
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
	if (unk_0x91F594068DF4424F(iVar7))
	{
		func_10(iVar7);
		if (unk_0x274BAC44978F9161(iVar7) == iParam4)
		{
			if (bLocal_77)
			{
				unk_0x05F8C0F598573E93(Param1, unk_0xBF1B13057E5119A4(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = unk_0xF976C624234A4AA8();
			return 1;
		}
		return 0;
	}
	if (unk_0x1BA544973A67E699(iVar7))
	{
		func_10(iVar7);
		if (unk_0x2A24448FF232F834(iParam4, 0))
		{
			if (unk_0x379620F9B34A512B(iVar7) == unk_0x78AB10B64129B3D5(iParam4, 0))
			{
				if (bLocal_77)
				{
					unk_0x05F8C0F598573E93(Param1, unk_0xBF1B13057E5119A4(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = unk_0xF976C624234A4AA8();
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
		iVar0 = unk_0x4D3E68F73B727E49(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0xBF1B13057E5119A4(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return unk_0xC5B1818639240D24(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0xC5B1818639240D24(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0xC5B1818639240D24(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0xC5B1818639240D24(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0xC5B1818639240D24(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0xC5B1818639240D24(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0xBF1B13057E5119A4(iParam0, 1);
}

int func_173()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36.f_0)
	{
		if ((Local_36[iVar0 /*4*/] == 0 && Local_36[iVar0 /*4*/].f_1 == 0) && Local_36[iVar0 /*4*/].f_2 == 0)
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
	
	Var0 = { func_153(unk_0xBF1B13057E5119A4(iParam1, 1) - unk_0xBF1B13057E5119A4(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var3 = { unk_0xF260FCBA09D07146(iParam0) };
	}
	else
	{
		Var3 = { func_153(unk_0xC5B1818639240D24(iParam0, 31086, 0f, 5f, 0f) - unk_0xC5B1818639240D24(iParam0, 31086, 0f, 0f, 0f)) };
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
	while (iVar0 < Local_36.f_0)
	{
		if (Local_36[iVar0 /*4*/].f_1 == iParam0 && Local_36[iVar0 /*4*/].f_2 == iParam1)
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
		if (unk_0xEC043AB2FEE0E94F(uParam0, iParam1) == 1 || unk_0xEC043AB2FEE0E94F(iParam0, iParam1) == 0)
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
			if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_107, 1))
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
			if (unk_0x764E7360C13E7383(*uParam0, iLocal_107))
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
			else if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_107, 1))
			{
				func_169(uParam0, 0);
				return;
			}
			break;
		
		case 3:
			if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_107, 1))
			{
				func_169(uParam0, 0);
				return;
			}
			if (bLocal_662)
			{
				if (iLocal_659 <= 20 && iLocal_659 != -1)
				{
					if (!Local_132[iLocal_659 /*25*/].f_18)
					{
						if (func_100(*uParam0, Local_132[iLocal_659 /*25*/], 20f))
						{
							if (Local_132[iLocal_659 /*25*/].f_9 && unk_0x2ACEA6F88B3AFFB0(iLocal_107))
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
			if (func_100(*uParam0, Local_132[iLocal_659 /*25*/], 25f))
			{
				if (Local_132[iLocal_659 /*25*/].f_9)
				{
					func_187(uParam0);
				}
				else
				{
					Local_132[iLocal_659 /*25*/].f_18 = 1;
					func_123(0);
				}
			}
			break;
		
		case 5:
			if (func_36(iLocal_107))
			{
				unk_0x7674FE6F22323056(iLocal_107, 25f, 10, 0);
				fVar0 = unk_0x11F6A4A45943670E(iLocal_107);
				if (fVar0 < 8f)
				{
					func_187(uParam0);
				}
			}
			break;
		
		case 6:
			if (!func_177(*uParam0, 242628503) && unk_0x2ACEA6F88B3AFFB0(iLocal_107))
			{
				if (bLocal_662)
				{
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 7;
				}
				else
				{
					unk_0x48367A1F7C9A1041(*uParam0, 0, 0);
					uParam0->f_8 = uParam0->f_7;
					uParam0->f_7 = 8;
				}
			}
			break;
		
		case 7:
			if (func_321(Local_109[1 /*11*/]))
			{
				if (unk_0x53170344050F2301(Local_109[1 /*11*/], iLocal_107, 0) && Local_109[1 /*11*/].f_7 == 3)
				{
					func_123(0);
				}
			}
			break;
		
		case 8:
			if (!unk_0x53170344050F2301(*uParam0, iLocal_107, 0))
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
				unk_0xB5DC017AFD430D1B(&uVar0);
				if (func_163(unk_0xBF1B13057E5119A4(*uParam0, 1), Local_132[iLocal_659 /*25*/].f_19) > 1.5f)
				{
					unk_0x211FA3DF75B31A84(0, Local_132[iLocal_659 /*25*/].f_19, 0);
				}
				unk_0xEC0A546609840086(0, "missfbi4prepp1", "_bag_pickup_garbage_man", 8f, -16f, -1, 528384, 0, 0, 0, 0);
				unk_0x6EE8A5CF9AC75F12(uVar0);
				unk_0x8229311A391A4EC6(*uParam0, uVar0);
				unk_0x9F77DFFC61FCB68C(&uVar0);
				uParam0->f_9 = 2;
			}
			else if (func_184(Local_132[iLocal_659 /*25*/].f_19, *uParam0, 1f, 1f, 8f))
			{
				func_183(uParam0);
				return;
			}
			unk_0xE496A9A04A9A0A0E(*uParam0, 0.2f);
			break;
		
		case 2:
			if (func_177(*uParam0, 242628503))
			{
				if (unk_0x22605DE2E6933CF2(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man", 3))
				{
					if (unk_0x5132EC78980FBED7(*uParam0, "missfbi4prepp1", "_bag_pickup_garbage_man") >= 0.333f)
					{
						unk_0xC3171961272B0BF2(*uParam0, "missfbi4prepp1_garbageman", 0f);
						unk_0xEF6A678C672AD689(*uParam0, "missfbi4prepp1_garbageman");
						if (func_10(Local_132[iLocal_659 /*25*/].f_17) && !unk_0xDF75DAAACD32E49E(Local_132[iLocal_659 /*25*/].f_17))
						{
							unk_0x26030664C7D28388(Local_132[iLocal_659 /*25*/].f_17, *uParam0, unk_0xA8918EDB277FC51C(*uParam0, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
						}
					}
				}
				if (func_184(Local_132[iLocal_659 /*25*/].f_19, *uParam0, 1f, 1f, 8f))
				{
					func_183(uParam0);
					return;
				}
			}
			else if (!func_177(*uParam0, 713668775))
			{
				if (func_36(iLocal_107))
				{
					unk_0x3F07E364A21EBC20(*uParam0, unk_0x0CAFB9D38494283D(iLocal_107, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, unk_0xA9D6B28E708753B6(iLocal_107));
				}
				uParam0->f_9 = 3;
			}
			unk_0xE496A9A04A9A0A0E(*uParam0, 0.2f);
			break;
		
		case 3:
			if (func_36(iLocal_107))
			{
				if (!func_184(unk_0x0CAFB9D38494283D(iLocal_107, 0f, -5.5f, 0f), iLocal_107, 1.9f, 1.9f, 8f))
				{
					if (unk_0x594EB70937EC1486(*uParam0, unk_0x0CAFB9D38494283D(iLocal_107, 0f, -5.5f, 0f), 0.9f, 0.9f, 2f, 0, 1, 0))
					{
						if (!func_177(*uParam0, 713668775))
						{
							unk_0xB5DC017AFD430D1B(&uVar1);
							if (func_163(unk_0xBF1B13057E5119A4(*uParam0, 1), unk_0xBF1B13057E5119A4(iLocal_107, 1)) > 3f)
							{
								unk_0xDA74C6C73AFEC1F3(0, unk_0xA9D6B28E708753B6(iLocal_107), 0);
							}
							unk_0xEC0A546609840086(0, "missfbi4prepp1", "_bag_throw_garbage_man", 8f, -8f, -1, 0, 0, 0, 0, 0);
							unk_0x6EE8A5CF9AC75F12(uVar1);
							unk_0x8229311A391A4EC6(*uParam0, uVar1);
							unk_0x9F77DFFC61FCB68C(&uVar1);
							uParam0->f_9 = 4;
						}
					}
					else if (!func_177(*uParam0, 713668775))
					{
						unk_0x3F07E364A21EBC20(*uParam0, unk_0x0CAFB9D38494283D(iLocal_107, 0f, -4.8f, 0f), 1f, -1, 0.25f, 0, unk_0xA9D6B28E708753B6(iLocal_107));
					}
				}
				else
				{
					func_181(uParam0);
				}
			}
			break;
		
		case 4:
			if (!func_184(unk_0x0CAFB9D38494283D(iLocal_107, 0f, -5.5f, 0f), *uParam0, 1.9f, 1.9f, 8f))
			{
				if (func_177(*uParam0, 242628503))
				{
					if (unk_0x22605DE2E6933CF2(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man", 3))
					{
						if (unk_0x5132EC78980FBED7(*uParam0, "missfbi4prepp1", "_bag_throw_garbage_man") >= 0.391f)
						{
							if (func_10(Local_132[iLocal_659 /*25*/].f_17))
							{
								if (unk_0xDF75DAAACD32E49E(Local_132[iLocal_659 /*25*/].f_17))
								{
									unk_0x708A5EFEB2660CE4(*uParam0, 1048576000);
									unk_0x04F7B10CA147AAAA(*uParam0);
									unk_0x5B97F41A7BE54877(Local_132[iLocal_659 /*25*/].f_17, 1, 0);
									unk_0x9547DA0F3BA0C9C4(Local_132[iLocal_659 /*25*/].f_17, 2f, -1f, -1f, -1f, -1f, -1f, -1f, -1f, -1082130432, -1082130432, -1082130432);
									unk_0xCD5BFC4DFAFC3268(Local_132[iLocal_659 /*25*/].f_17, 1, unk_0xF260FCBA09D07146(*uParam0), 0, 1, 1, 0);
								}
								if (unk_0x5D0DED2275F131C9(Local_132[iLocal_659 /*25*/].f_17, iLocal_107))
								{
									func_180(&(Local_132[iLocal_659 /*25*/].f_17));
								}
							}
						}
					}
				}
				else
				{
					uParam0->f_9 = 0;
					if (func_36(iLocal_107))
					{
						unk_0x7E40829CCC49E744(iLocal_107, 5, 0);
						func_180(&(Local_132[iLocal_659 /*25*/].f_17));
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
	if (unk_0xFD68187442384158(*uParam0))
	{
		if (unk_0x42B70344077B22B9(*uParam0))
		{
			unk_0x5B97F41A7BE54877(*uParam0, 1, 1);
		}
		unk_0x4095FD029041DD48(uParam0);
	}
}

void func_181(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0xCA4EA7D4F6DCCD43(5, uLocal_78, joaat("player"));
	func_162(uParam0);
	if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		if (!unk_0x2A24448FF232F834(*uParam0, 0))
		{
			unk_0x5BE268EEA70577CE(*uParam0, unk_0x507DA4994C3D8EBD(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0xB5DC017AFD430D1B(&uVar0);
			unk_0x48367A1F7C9A1041(0, 0, 0);
			unk_0x247B2966C6C2A4C1(0, unk_0x507DA4994C3D8EBD(), 0, 16);
			unk_0x6EE8A5CF9AC75F12(uVar0);
			unk_0x8229311A391A4EC6(*uParam0, uVar0);
			unk_0x9F77DFFC61FCB68C(&uVar0);
		}
	}
	else
	{
		unk_0xB5DC017AFD430D1B(&uVar1);
		unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
		unk_0x247B2966C6C2A4C1(0, unk_0x507DA4994C3D8EBD(), 0, 16);
		unk_0x6EE8A5CF9AC75F12(uVar1);
		unk_0x8229311A391A4EC6(*uParam0, uVar1);
		unk_0x9F77DFFC61FCB68C(&uVar1);
	}
	unk_0x708A5EFEB2660CE4(*uParam0, 1048576000);
	unk_0x04F7B10CA147AAAA(*uParam0);
	func_182();
	if (!unk_0xD361727124133DF3(uParam0->f_4))
	{
		uParam0->f_4 = func_166(*uParam0, 1, 145);
	}
	uParam0->f_1 = unk_0xF976C624234A4AA8();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 15;
}

void func_182()
{
	Local_80.f_0 = 0;
	Local_80.f_26 = 0;
	Local_80.f_18 = 0;
}

void func_183(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0xCA4EA7D4F6DCCD43(5, uLocal_78, joaat("player"));
	func_162(uParam0);
	if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		if (!unk_0x2A24448FF232F834(*uParam0, 0))
		{
			unk_0x5BE268EEA70577CE(*uParam0, unk_0x507DA4994C3D8EBD(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0xB5DC017AFD430D1B(&uVar0);
			unk_0x48367A1F7C9A1041(0, 0, 0);
			unk_0x247B2966C6C2A4C1(0, unk_0x507DA4994C3D8EBD(), 0, 16);
			unk_0x6EE8A5CF9AC75F12(uVar0);
			unk_0x8229311A391A4EC6(*uParam0, uVar0);
			unk_0x9F77DFFC61FCB68C(&uVar0);
		}
	}
	else
	{
		unk_0xB5DC017AFD430D1B(&uVar1);
		unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
		unk_0x247B2966C6C2A4C1(0, unk_0x507DA4994C3D8EBD(), 0, 16);
		unk_0x6EE8A5CF9AC75F12(uVar1);
		unk_0x8229311A391A4EC6(*uParam0, uVar1);
		unk_0x9F77DFFC61FCB68C(&uVar1);
	}
	unk_0x708A5EFEB2660CE4(*uParam0, 1048576000);
	unk_0x04F7B10CA147AAAA(*uParam0);
	func_182();
	if (!unk_0xD361727124133DF3(uParam0->f_4))
	{
		uParam0->f_4 = func_166(*uParam0, 1, 145);
	}
	uParam0->f_1 = unk_0xF976C624234A4AA8();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 14;
}

int func_184(struct<3> Param0, int iParam3, struct<3> Param4)
{
	Local_80.f_2 = { Param0 };
	Local_80.f_8 = { Param4 };
	func_185(&Local_80, iParam3);
	if (Local_80.f_26)
	{
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			if (unk_0x1BA544973A67E699(Local_80.f_18))
			{
				if (func_10(Local_80.f_18))
				{
					if (unk_0x379620F9B34A512B(Local_80.f_18) == unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 1))
					{
						return 1;
					}
				}
			}
		}
		else if (unk_0x91F594068DF4424F(Local_80.f_18))
		{
			if (func_10(Local_80.f_18))
			{
				if (unk_0x274BAC44978F9161(Local_80.f_18) == unk_0x507DA4994C3D8EBD())
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
	
	iVar1 = unk_0xBFABF77FCEA8BA3F(*uParam0, &iVar0, &(uParam0->f_20), &(uParam0->f_23), &(uParam0->f_18));
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
			*uParam0 = unk_0x9400A3EC34709233(uParam0->f_2, uParam0->f_5, 511, uParam1, 7);
			break;
		
		case 2:
			*uParam0 = unk_0xA9E107B3B2ABCE55(uParam0->f_17, 511, 4);
			break;
		
		case 3:
			*uParam0 = unk_0x643CBFFDA91D4D9D(uParam0->f_17, 511, 4);
			break;
		
		case 4:
			*uParam0 = unk_0x10C1AA389D3AB1F5(uParam0->f_2, uParam0->f_8, uParam0->f_11, uParam0->f_14, 6, iParam1, 4);
			break;
		
		case 5:
			*uParam0 = unk_0x46668681EA3C2CF0(uParam0->f_2, uParam0->f_5, uParam0->f_15, 511, iParam1, 4);
			break;
	}
	uParam0->f_16 = *uParam0 != 0;
}

void func_187(var uParam0)
{
	var uVar0;
	
	if (func_36(iLocal_107))
	{
		unk_0xB5DC017AFD430D1B(&uVar0);
		unk_0x5E44C1186E137E21(0, iLocal_107, Local_132[iLocal_659 /*25*/].f_3, 8f, 0, joaat("trash"), 786469, 10f, 15f);
		unk_0x52AC38C099F0E2E2(0, iLocal_107, Local_132[iLocal_659 /*25*/].f_3, Local_132[iLocal_659 /*25*/].f_8, Local_132[iLocal_659 /*25*/].f_10, 5f, 1);
		unk_0x6EE8A5CF9AC75F12(uVar0);
		unk_0x8229311A391A4EC6(*uParam0, uVar0);
		unk_0x9F77DFFC61FCB68C(&uVar0);
		uParam0->f_7 = 6;
	}
}

void func_188()
{
	func_157(&(Local_109[1 /*11*/]));
}

void func_189(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (func_184(unk_0x0CAFB9D38494283D(iLocal_107, func_130(bParam1)), iLocal_107, 1.9f, 1.9f, 8f))
	{
		if (unk_0x9EC075F0DABF6298(*uParam0, unk_0x0CAFB9D38494283D(iLocal_107, 5f, 0f, -2f), unk_0xBF1B13057E5119A4(iLocal_107, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0) && unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), unk_0x0CAFB9D38494283D(iLocal_107, 5f, 0f, -2f), unk_0xBF1B13057E5119A4(iLocal_107, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
		{
			func_190(uParam0);
		}
		else if (!func_177(*uParam0, 1227113341) && unk_0x9EC075F0DABF6298(unk_0x507DA4994C3D8EBD(), unk_0x0CAFB9D38494283D(iLocal_107, 5f, 0f, -2f), unk_0xBF1B13057E5119A4(iLocal_107, 1) + Vector(2f, 0f, 0f), 9f, 0, 1, 0))
		{
			unk_0xAC57FBF981AB03F4(*uParam0);
			unk_0xA3C87095904A382C(*uParam0, unk_0x507DA4994C3D8EBD(), -1, 4f, 1f, 1073741824, 0);
		}
	}
	else if (func_100(*uParam0, unk_0x0CAFB9D38494283D(iLocal_107, func_130(bParam1)), 5f))
	{
		iVar0 = -1;
		if (!bParam1)
		{
			iVar0 = 0;
		}
		unk_0x36B42DB2912118E2(*uParam0, iLocal_107, -1, iVar0, 1f, 8388609, 0);
		uParam0->f_7 = 2;
	}
}

void func_190(var uParam0)
{
	var uVar0;
	var uVar1;
	
	unk_0xCA4EA7D4F6DCCD43(5, uLocal_78, joaat("player"));
	func_162(uParam0);
	if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		if (!unk_0x2A24448FF232F834(*uParam0, 0))
		{
			unk_0x5BE268EEA70577CE(*uParam0, unk_0x507DA4994C3D8EBD(), 8f, -1f, 10f, 0);
		}
		else
		{
			unk_0xB5DC017AFD430D1B(&uVar0);
			unk_0x48367A1F7C9A1041(0, 0, 0);
			unk_0x247B2966C6C2A4C1(0, unk_0x507DA4994C3D8EBD(), 0, 16);
			unk_0x6EE8A5CF9AC75F12(uVar0);
			unk_0x8229311A391A4EC6(*uParam0, uVar0);
			unk_0x9F77DFFC61FCB68C(&uVar0);
		}
	}
	else
	{
		unk_0xB5DC017AFD430D1B(&uVar1);
		unk_0xDE75E9DE5B6221E1(0, unk_0x507DA4994C3D8EBD(), 0);
		unk_0x247B2966C6C2A4C1(0, unk_0x507DA4994C3D8EBD(), 0, 16);
		unk_0x6EE8A5CF9AC75F12(uVar1);
		unk_0x8229311A391A4EC6(*uParam0, uVar1);
		unk_0x9F77DFFC61FCB68C(&uVar1);
	}
	unk_0x708A5EFEB2660CE4(*uParam0, 1048576000);
	unk_0x04F7B10CA147AAAA(*uParam0);
	func_182();
	uParam0->f_1 = unk_0xF976C624234A4AA8();
	uParam0->f_8 = uParam0->f_7;
	uParam0->f_5 = 1;
	uParam0->f_6 = 13;
}

void func_191(var uParam0)
{
	if (uParam0->f_5 != 1)
	{
		if (func_36(iLocal_107) && unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			if (!func_177(*uParam0, 2104565373) && unk_0x53170344050F2301(*uParam0, iLocal_107, 0))
			{
				if (func_150(unk_0x507DA4994C3D8EBD(), iLocal_107, 10f))
				{
					if (unk_0x5D0DED2275F131C9(iLocal_107, unk_0x507DA4994C3D8EBD()))
					{
						unk_0xE9A858D330662DC7(*uParam0, unk_0x507DA4994C3D8EBD(), 0, 0f, 0f, 0f, 10f, 100, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
						uParam0->f_1 = unk_0xF976C624234A4AA8();
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
	while (iVar0 <= (iLocal_79 - 1))
	{
		if (Local_132[iVar0 /*25*/].f_23 != 0)
		{
			if (Local_132[iVar0 /*25*/].f_24)
			{
				if ((iVar0 != iLocal_659 && func_10(Local_132[iVar0 /*25*/].f_17)) && func_194(Local_132[iVar0 /*25*/].f_17, unk_0x507DA4994C3D8EBD(), 1) > 200f)
				{
					unk_0x4095FD029041DD48(&(Local_132[iVar0 /*25*/].f_17));
					Local_132[iVar0 /*25*/].f_24 = 0;
				}
			}
			else if (Local_132[iVar0 /*25*/].f_23 != 0)
			{
				if (func_100(unk_0x507DA4994C3D8EBD(), Local_132[iVar0 /*25*/], 100f) || func_100(Local_109[0 /*11*/], Local_132[iVar0 /*25*/], 120f))
				{
					Local_132[iVar0 /*25*/].f_24 = func_193(&(Local_132[iVar0 /*25*/].f_17), Local_132[iVar0 /*25*/].f_23, Local_132[iVar0 /*25*/].f_19, Local_132[iVar0 /*25*/].f_22, 1);
				}
			}
		}
		iVar0++;
	}
}

int func_193(var uParam0, var uParam1, struct<3> Param2, float fParam5, bool bParam6)
{
	if (!unk_0xFD68187442384158(*uParam0))
	{
		if (func_145(uParam1, "Loading", 0))
		{
			*uParam0 = unk_0xCEC985247737A30E(uParam1, Param2, 1, 1, 0);
			if (unk_0xFD68187442384158(*uParam0))
			{
				unk_0x248DC16118AE5035(*uParam0, uParam5);
				unk_0x0C18E5D819BB888B(*uParam0);
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
	
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 0) };
	}
	if (!unk_0xE5D56342B0FF1D0D(iParam1))
	{
		Var3 = { unk_0xBF1B13057E5119A4(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xBF1B13057E5119A4(iParam1, 0) };
	}
	return unk_0x8FE221761D524CFE(Var0, Var3, iParam2);
}

void func_195(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_5 != 1 || iParam2)
	{
		if (!func_321(Local_109[func_164(iParam1) /*11*/]))
		{
			if (!bLocal_663)
			{
				if (unk_0xFD68187442384158(Local_109[func_164(iParam1) /*11*/]))
				{
					if (func_174(*uParam0, Local_109[func_164(iParam1) /*11*/], 140f, 0) || func_150(Local_109[func_164(iParam1) /*11*/], *uParam0, 3f))
					{
						func_169(uParam0, 0);
						bLocal_663 = true;
						return;
					}
					else
					{
						Local_665 = { unk_0xBF1B13057E5119A4(Local_109[func_164(iParam1) /*11*/], 1) };
						uParam0->f_1 = unk_0xF976C624234A4AA8();
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
		else if (Local_109[func_164(iParam1) /*11*/].f_6 == 22)
		{
			if (func_174(*uParam0, Local_109[func_164(iParam1) /*11*/], 140f, 0) && func_150(Local_109[func_164(iParam1) /*11*/], unk_0x507DA4994C3D8EBD(), 15f))
			{
				uParam0->f_5 = 1;
				uParam0->f_6 = 21;
			}
		}
		else if (Local_109[func_164(iParam1) /*11*/].f_6 == 5 || Local_109[func_164(iParam1) /*11*/].f_6 == 7)
		{
			if (func_150(Local_109[func_164(iParam1) /*11*/], *uParam0, 10f))
			{
				func_169(uParam0, 0);
			}
		}
		if (func_206(*uParam0))
		{
			func_162(uParam0);
			uParam0->f_1 = unk_0xF976C624234A4AA8();
			uParam0->f_8 = uParam0->f_7;
			uParam0->f_5 = 1;
			uParam0->f_6 = 21;
		}
		if (uParam0->f_10 == 0 && uParam0->f_7 == 4)
		{
			if (func_154(uParam0))
			{
				if (unk_0x53170344050F2301(*uParam0, iLocal_107, 0))
				{
					unk_0xE9A858D330662DC7(*uParam0, unk_0x507DA4994C3D8EBD(), 0, 0f, 0f, 0f, 10f, 100, 1, joaat("FIRING_PATTERN_FULL_AUTO"));
					unk_0x6875306F1B152679(iLocal_107, 2000f);
					iLocal_668 = unk_0xF976C624234A4AA8();
					uParam0->f_1 = unk_0xF976C624234A4AA8();
					uParam0->f_6 = 16;
					uParam0->f_5 = 1;
				}
			}
		}
		if (func_197(*uParam0, 1, 70f, 170f, 0, 1, 0, 0) && !func_196(uParam0))
		{
			if (unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6))
			{
				if (func_36(iLocal_107))
				{
					if (unk_0x53170344050F2301(*uParam0, iLocal_107, 0))
					{
						if (unk_0x11F6A4A45943670E(iLocal_107) > 5f)
						{
							if (iParam1 == 0)
							{
								unk_0x9C373E78BA27BAA4(*uParam0, iLocal_107, unk_0x507DA4994C3D8EBD(), 8, 30f, 786469, 300f, 2f, 1);
								uParam0->f_6 = 7;
								unk_0x5FD5E7ABD766D498(Local_109[func_164(iParam1) /*11*/], -1);
								Local_109[func_164(iParam1) /*11*/].f_6 = 10;
								Local_109[func_164(iParam1) /*11*/].f_5 = 1;
								uParam0->f_5 = 1;
								uParam0->f_1 = unk_0xF976C624234A4AA8();
								Local_109[func_164(iParam1) /*11*/].f_1 = unk_0xF976C624234A4AA8();
							}
							else
							{
								unk_0x5FD5E7ABD766D498(*uParam0, -1);
								uParam0->f_6 = 12;
								unk_0x9C373E78BA27BAA4(Local_109[func_164(iParam1) /*11*/], iLocal_107, unk_0x507DA4994C3D8EBD(), 8, 30f, 786469, 300f, 2f, 1);
								Local_109[func_164(iParam1) /*11*/].f_6 = 5;
								Local_109[func_164(iParam1) /*11*/].f_5 = 1;
								uParam0->f_5 = 1;
								uParam0->f_1 = unk_0xF976C624234A4AA8();
								Local_109[func_164(iParam1) /*11*/].f_1 = unk_0xF976C624234A4AA8();
							}
						}
						else
						{
							func_169(uParam0, 0);
							if (unk_0xFD68187442384158(Local_109[func_164(iParam1) /*11*/]))
							{
								if (func_174(Local_109[func_164(iParam1) /*11*/], unk_0x507DA4994C3D8EBD(), 1126825984, 0))
								{
									func_169(&(Local_109[func_164(iParam1) /*11*/]), 0);
								}
							}
						}
						unk_0x7CEA616AE5D86DF7(*uParam0);
					}
					else
					{
						func_169(uParam0, 0);
						if (unk_0xFD68187442384158(Local_109[func_164(iParam1) /*11*/]))
						{
							if (func_170(Local_109[func_164(iParam1) /*11*/], *uParam0, 1126825984, 1, 250, 7))
							{
								func_169(&(Local_109[func_164(iParam1) /*11*/]), 0);
							}
						}
					}
				}
			}
			else
			{
				uParam0->f_1 = unk_0xF976C624234A4AA8();
				uParam0->f_8 = uParam0->f_7;
				uParam0->f_5 = 1;
				uParam0->f_6 = 21;
				unk_0x7CEA616AE5D86DF7(*uParam0);
				if (func_170(Local_109[func_164(iParam1) /*11*/], *uParam0, 1126825984, 1, 250, 7))
				{
					Local_109[func_164(iParam1) /*11*/].f_1 = unk_0xF976C624234A4AA8();
					Local_109[func_164(iParam1) /*11*/].f_8 = uParam0->f_7;
					Local_109[func_164(iParam1) /*11*/].f_5 = 1;
					Local_109[func_164(iParam1) /*11*/].f_6 = 21;
					unk_0x7CEA616AE5D86DF7(Local_109[func_164(iParam1) /*11*/]);
				}
			}
			uParam0->f_5 = 1;
		}
		else if (unk_0x88253E28293B8BFD(*uParam0))
		{
			func_162(uParam0);
			unk_0xA859D289EEB2D72A(*uParam0, unk_0x507DA4994C3D8EBD(), 500f, -1, 0, 1);
			uParam0->f_6 = 2;
			uParam0->f_5 = 1;
			uParam0->f_1 = unk_0xF976C624234A4AA8();
		}
		if (unk_0x1983DA3C921BB046(*uParam0))
		{
			if (func_10(Local_132[iLocal_659 /*25*/].f_17))
			{
				if (unk_0xDF75DAAACD32E49E(Local_132[iLocal_659 /*25*/].f_17))
				{
					unk_0x5B97F41A7BE54877(Local_132[iLocal_659 /*25*/].f_17, 1, 0);
					unk_0xCD5BFC4DFAFC3268(Local_132[iLocal_659 /*25*/].f_17, 1, unk_0xF260FCBA09D07146(*uParam0), 0, 1, 1, 0);
				}
			}
		}
	}
	if (uParam0->f_5 != 1)
	{
		if (func_321(Local_109[func_164(iParam1) /*11*/]))
		{
			if (unk_0x88253E28293B8BFD(Local_109[func_164(iParam1) /*11*/]))
			{
				func_162(uParam0);
				unk_0xA859D289EEB2D72A(*uParam0, unk_0x507DA4994C3D8EBD(), 120f, -1, 0, 0);
				uParam0->f_1 = unk_0xF976C624234A4AA8();
				uParam0->f_6 = 7;
				uParam0->f_5 = 1;
			}
		}
	}
}

int func_196(var uParam0)
{
	if ((unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), unk_0x0CAFB9D38494283D(*uParam0, 0f, -2f, 0f), 2f, 3f, 2f, 0, 1, 0) && !unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6)) && unk_0x3153580B6C021741(unk_0x507DA4994C3D8EBD()))
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_10(unk_0x507DA4994C3D8EBD()) && func_10(iParam0))
	{
		if (unk_0x6255AE2591FE7603(iParam0, unk_0x507DA4994C3D8EBD(), 1))
		{
			return 1;
		}
		if (func_202(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6))
		{
			if (unk_0x6A5400407F3E1292(unk_0x507DA4994C3D8EBD()))
			{
				Var0 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) - unk_0xBF1B13057E5119A4(iParam0, 1) };
				if ((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_201(unk_0x507DA4994C3D8EBD(), iParam0, fParam2);
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
	
	if (func_10(unk_0x507DA4994C3D8EBD()) && func_10(iParam0))
	{
		if (func_200(iParam0) || unk_0x8DEF14B60C4A9D01(unk_0xAF65E5A58BE87D95(), iParam0))
		{
			if (unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
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
	return func_170(iParam0, unk_0x507DA4994C3D8EBD(), fParam1, 1, 250, 7);
}

int func_200(int iParam0)
{
	if (unk_0xB89DCD342FB7AC95(unk_0xAF65E5A58BE87D95(), iParam0) && unk_0x73741D3DABB81B29(unk_0x507DA4994C3D8EBD(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_201(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { unk_0xF260FCBA09D07146(iParam0) };
	Var3 = { unk_0xBF1B13057E5119A4(iParam1, 1) - unk_0xBF1B13057E5119A4(iParam0, 1) };
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
	if (func_10(unk_0x507DA4994C3D8EBD()) && func_10(iParam0))
	{
		unk_0xAE0CD3052D6ED1ED(unk_0x507DA4994C3D8EBD(), &iVar2, 1);
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
			if (unk_0xB6CDBC1E2904184A(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0x0982F2F40B035E77(unk_0xBF1B13057E5119A4(iParam0, 1), fVar0, 1))
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
	
	Var0 = { unk_0xBF1B13057E5119A4(iParam0, 1) };
	Var3 = { Var0 };
	Var0.f_0 = (Var0.f_0 - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var3.f_0 = (Var3.f_0 + fParam1);
	Var3.f_1 = (Var3.f_1 + fParam1);
	Var3.f_2 = (Var3.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x7EA638DAA99BFE28(unk_0xBF1B13057E5119A4(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || unk_0x7EA638DAA99BFE28(unk_0xBF1B13057E5119A4(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || unk_0x7EA638DAA99BFE28(unk_0xBF1B13057E5119A4(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x7EA638DAA99BFE28(unk_0xBF1B13057E5119A4(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
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
		if (unk_0xEE93FF4158B54B09(Var0, Var3, 1))
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
	
	if ((((unk_0x2409FBDFB6F61EB8(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x2409FBDFB6F61EB8(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x2409FBDFB6F61EB8(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x2409FBDFB6F61EB8(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x2409FBDFB6F61EB8(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
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
		if (unk_0xEB4AE93098956715(unk_0x507DA4994C3D8EBD()))
		{
			if (unk_0x2F406E91B59DB558(unk_0x507DA4994C3D8EBD(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0x0982F2F40B035E77(unk_0xBF1B13057E5119A4(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_206(int iParam0)
{
	if (func_150(uParam0, unk_0x507DA4994C3D8EBD(), 6f))
	{
		if (!unk_0x2A24448FF232F834(uParam0, 0))
		{
			if (unk_0x5D0DED2275F131C9(iParam0, unk_0x507DA4994C3D8EBD()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_207()
{
	if (func_36(Local_866.f_0))
	{
		if (func_150(unk_0x507DA4994C3D8EBD(), Local_866.f_0, 100f) && !iLocal_835)
		{
			unk_0x958003C8F1315BF5(joaat("trash"), 3);
			if (!unk_0xFA32E3333C5BD56A(joaat("trash")))
			{
				iLocal_835 = 1;
			}
		}
		else if (!func_150(unk_0x507DA4994C3D8EBD(), Local_866.f_0, 120f) && iLocal_835)
		{
			unk_0x3F5DB12BA017912F(joaat("trash"));
			iLocal_835 = 0;
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
				if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), *iParam0, 0))
				{
					func_7(iParam3);
					if (func_99(func_107(func_75()), 0, 0))
					{
						unk_0xAD91AFD429036CAB(func_107(func_75()));
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
						unk_0xAD91AFD429036CAB(func_107(func_75()));
					}
					*iParam2 = 3;
				}
				else
				{
					if (func_99(func_108(func_75(), bParam9), 0, 0))
					{
						unk_0xAD91AFD429036CAB(func_108(func_75(), bParam9));
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
				if ((!unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), *iParam0, 0) && !func_213(*iParam0)) && !func_212(*iParam0))
				{
					func_7(iParam4);
					if (!unk_0x594EB70937EC1486(*iParam0, Param5, iParam10, iParam10, 2f, 0, 1, 2))
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
					if (!unk_0x594EB70937EC1486(*iParam0, Param5, iParam10, iParam10, 2f, 0, 1, 2))
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
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
		{
			iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
			if (iVar0 != *uParam0)
			{
				if (func_36(iVar0))
				{
					iVar1 = unk_0x26EA758C2A691D06(iVar0);
					if (iVar1 == joaat("trash"))
					{
						*uParam1 = *uParam0;
						func_6(uParam0);
						*uParam0 = iVar0;
						func_35(*uParam0, 1);
						func_35(*uParam1, 3);
						if (!unk_0x73E2404DC70203CD(*uParam0))
						{
							unk_0xBAE5DF507EEC53C8(*uParam0, 1, 1);
						}
					}
					else if (iVar1 == joaat("towtruck"))
					{
						uVar2 = unk_0x0D4674B673D8048B(unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0));
						if (func_10(uVar2))
						{
							iVar0 = unk_0x379620F9B34A512B(uVar2);
							if (unk_0x26EA758C2A691D06(iVar0) == joaat("trash"))
							{
								*uParam1 = *uParam0;
								func_6(uParam0);
								*uParam0 = iVar0;
								func_35(*uParam0, 1);
								func_35(*uParam1, 3);
								if (!unk_0x73E2404DC70203CD(*uParam0))
								{
									unk_0xBAE5DF507EEC53C8(*uParam0, 1, 1);
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
	
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
		if (iVar0 != *uParam0)
		{
			if (func_36(iVar0))
			{
				if (unk_0x26EA758C2A691D06(iVar0) == func_211(func_75()))
				{
					func_6(uParam0);
					*uParam0 = iVar0;
					func_35(*uParam0, 1);
					unk_0xBAE5DF507EEC53C8(*uParam0, 1, 1);
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
	
	if ((func_321(unk_0x507DA4994C3D8EBD()) && unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0)) && func_36(iParam0))
	{
		iVar0 = unk_0xF6EA6ED8FFB5B505();
		if (func_36(iVar0))
		{
			iVar1 = unk_0x26EA758C2A691D06(iVar0);
			if ((iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2")) || iVar1 == joaat("cargobob3"))
			{
				if (unk_0x29753C26F80C767B(iVar0))
				{
					if (unk_0xA89E36906A28895D(iVar0, iParam0))
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
	
	if ((func_321(unk_0x507DA4994C3D8EBD()) && unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0)) && func_36(iParam0))
	{
		iVar0 = unk_0xF6EA6ED8FFB5B505();
		if (func_36(iVar0))
		{
			iVar1 = unk_0x26EA758C2A691D06(iVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2"))
			{
				if (unk_0x7FA9B9EC1CAEE692(iVar0, iParam0))
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
	func_208(&iLocal_872, &uLocal_873, &iLocal_684, &iLocal_820, &iLocal_819, Local_825, Local_866.f_0, 0, 1090519040);
	func_148();
	func_231();
	func_207();
	switch (iLocal_682)
	{
		case 0:
			if (func_115(iLocal_681, bLocal_27))
			{
				if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) == 0 && !func_230())
				{
					func_110(&iLocal_819, Local_825, 1);
					func_114("PRA_TAKBACK", &iLocal_818);
				}
				iLocal_682 = 1;
			}
			break;
		
		case 1:
			func_113(&iLocal_819, Local_825, &iLocal_683, iLocal_684, &iLocal_818, &iLocal_836);
			func_220();
			if (func_218(iLocal_872, Local_825, &iLocal_819, iLocal_683, iLocal_684, &iLocal_818, &iLocal_837, 0, 0, 1086324736))
			{
				unk_0x47B990AE184F491B(8f, 5f, 4);
				iLocal_682 = 2;
			}
			break;
		
		case 2:
			func_215();
			func_7(&iLocal_819);
			func_7(&iLocal_820);
			if (func_109(1077936128, 1))
			{
				func_103(0);
			}
			break;
		
		case 3:
			if (func_36(iLocal_872))
			{
				if (!unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_872, 0))
				{
					unk_0x11460EBE0487B44F(unk_0x507DA4994C3D8EBD(), iLocal_872, -1);
				}
				else
				{
					func_102(iLocal_872, Local_825, 146.5443f, 0, 1);
					func_39(1, 1, 1);
					iLocal_682 = 1;
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
		if (!unk_0x9F94F2CFDCA78C55(iVar1))
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
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
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
		if (!unk_0x61D8FEAF64881CDA(Global_86043, iVar0))
		{
			return 0;
		}
		unk_0xCD27BF29FB9012E2(&Global_86043, iVar0);
		return 1;
	}
	return 0;
}

int func_217(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
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
		if (unk_0x61D8FEAF64881CDA(Global_86043, iVar0))
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
					if (unk_0x594EB70937EC1486(iParam0, Param1, fParam11, fParam11, 2f, 1, 1, 0))
					{
						return 1;
					}
				}
			}
			else if (unk_0x594EB70937EC1486(unk_0x507DA4994C3D8EBD(), Param1, fParam11, fParam11, 2f, 1, 1, 2))
			{
				return 1;
			}
			if (func_99(func_107(func_75()), 0, 0))
			{
				unk_0xAD91AFD429036CAB(func_107(func_75()));
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
				unk_0xAD91AFD429036CAB(func_108(func_75(), 0));
			}
			func_98(func_107(func_75()), 7500, 0);
			*iParam8 = 1;
		}
	}
	return 0;
}

bool func_219()
{
	return Global_89836.f_290 > 0;
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
		if (!unk_0x9F94F2CFDCA78C55(iVar2))
		{
			if (func_76(iVar2, 0))
			{
				if (!bVar1)
				{
					if (func_150(unk_0x507DA4994C3D8EBD(), iVar2, 5f))
					{
						if (!func_230())
						{
							func_225(iVar0);
							bVar1 = true;
						}
					}
				}
				if (!iLocal_1046[iVar0])
				{
					if (iVar0 == 0)
					{
						func_91(&uLocal_877, iVar0, iVar2, "MICHAEL", 0, 1);
					}
					else if (iVar0 == 1)
					{
						func_91(&uLocal_877, iVar0, iVar2, "FRANKLIN", 0, 1);
					}
					else if (iVar0 == 2)
					{
						func_91(&uLocal_877, iVar0, iVar2, "TREVOR", 0, 1);
					}
					iLocal_1046[iVar0] = 1;
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
							unk_0xBAE5DF507EEC53C8(iVar2, 1, 1);
							unk_0x2DC5B31EBB810396(iVar2, true);
							unk_0xAC57FBF981AB03F4(iVar2);
						}
					}
				}
			}
			else if (unk_0x51BC2FF711F8CF71(iVar2, 1))
			{
				if (func_224(iVar2))
				{
					if (unk_0xEC043AB2FEE0E94F(iVar2, -1273030092) != 1 && unk_0xEC043AB2FEE0E94F(iVar2, -1273030092) != 0)
					{
						if (unk_0x65AB4C5AAF640EB0(623.3781f, -172.26f, 1700.732f, -2115.843f))
						{
							unk_0x5E44C1186E137E21(iVar2, unk_0x78AB10B64129B3D5(iVar2, 0), Local_825, 20f, 0, 0, 34340901, 2f, 10f);
						}
						else
						{
							unk_0x32BB0750E9174D6C(623.3781f, -172.26f, 1700.732f, -2115.843f);
						}
					}
				}
				else if (func_222(iVar2))
				{
					if (func_36(Local_866.f_0))
					{
						if (!func_150(iVar2, Local_866.f_0, 17f))
						{
							if (unk_0xEC043AB2FEE0E94F(iVar2, -1273030092) != 1 && unk_0xEC043AB2FEE0E94F(iVar2, -1273030092) != 0)
							{
								unk_0xD09813BDAA102212(iVar2, unk_0x78AB10B64129B3D5(iVar2, 0), Local_866.f_0, 3, 20f, 786468, 2f, 0.5f, 1);
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
	if (!unk_0x9F94F2CFDCA78C55(iParam0))
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
		if (unk_0x61D8FEAF64881CDA(Global_86043, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x507DA4994C3D8EBD())
			{
				return 0;
			}
		}
		if (unk_0x61D8FEAF64881CDA(Global_86042, iVar0))
		{
			unk_0x278C9D6141B17BA8(iParam0, 0, 0);
			unk_0x3C2614E45AB2F499(iParam0, 0);
			unk_0x3DBE2A7AF9E71C82(&Global_86043, iVar0);
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
		if ((!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0)) && unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) == 0)
		{
			iVar0 = unk_0x78AB10B64129B3D5(unk_0x507DA4994C3D8EBD(), 0);
			if (func_36(iVar0))
			{
				if (unk_0x40923C25A763E8E8(iVar0, joaat("trash")))
				{
					return 0;
				}
				if (unk_0x53170344050F2301(iParam0, iVar0, 0) && unk_0xE634CB9EE7094537(iVar0, -1) == iParam0)
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
	if (!unk_0xD95428C8AA1DBBF2())
	{
		return Global_87667.f_44 == 1;
	}
	return 0;
}

int func_224(int iParam0)
{
	if (!func_223())
	{
		if ((unk_0xFD68187442384158(Local_866.f_0) && unk_0xCA8794CE207FC6D5(Local_866.f_0, 0)) && !unk_0x594EB70937EC1486(Local_866.f_0, Local_825, 2f, 2f, 2f, 0, 1, 0))
		{
			if ((!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()) && unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), Local_866.f_0, 0)) && unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) == 0)
			{
				if (unk_0x53170344050F2301(iParam0, Local_866.f_0, 0) && unk_0xE634CB9EE7094537(Local_866.f_0, -1) == iParam0)
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
	if (iLocal_681 > 1)
	{
		if (iLocal_683 > 0)
		{
			if (!unk_0x61D8FEAF64881CDA(Local_686[iParam0 /*8*/].f_7, 0) && iLocal_684 == 1)
			{
				if (!unk_0x44057438DAE1BD45())
				{
					if (func_229(&uLocal_877, cLocal_876, Local_686[iParam0 /*8*/][0], 8, 0, 0, 0))
					{
						unk_0x3DBE2A7AF9E71C82(&(Local_686[iParam0 /*8*/].f_7), 0);
					}
				}
			}
		}
		else
		{
			if ((unk_0x61D8FEAF64881CDA(Local_686[iParam0 /*8*/].f_7, 0) && !unk_0x61D8FEAF64881CDA(Local_686[iParam0 /*8*/].f_7, 1)) && iLocal_684 == 1)
			{
				if (!unk_0x44057438DAE1BD45())
				{
					if (func_229(&uLocal_877, cLocal_876, Local_686[iParam0 /*8*/][1], 7, 0, 0, 0))
					{
						unk_0x3DBE2A7AF9E71C82(&(Local_686[iParam0 /*8*/].f_7), 1);
					}
				}
			}
			if (!unk_0x61D8FEAF64881CDA(Local_686[iParam0 /*8*/].f_7, 5))
			{
				if (func_228(iLocal_872, Local_825, 1) < 15f && iLocal_684 == 1)
				{
					if (!unk_0x44057438DAE1BD45())
					{
						if (func_229(&uLocal_877, cLocal_876, Local_686[iParam0 /*8*/][5], 7, 0, 0, 0))
						{
							unk_0x3DBE2A7AF9E71C82(&(Local_686[iParam0 /*8*/].f_7), 5);
						}
					}
				}
			}
			switch (func_29(unk_0x507DA4994C3D8EBD()))
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
	if (!unk_0x61D8FEAF64881CDA(Local_686[iParam0 /*8*/].f_7, iParam1))
	{
		if (iLocal_1050 != -1)
		{
			if (!unk_0x44057438DAE1BD45())
			{
				if (func_229(&uLocal_877, cLocal_876, Local_686[iParam0 /*8*/][iParam1], 7, 0, 0, 0))
				{
					unk_0x3DBE2A7AF9E71C82(&(Local_686[iParam0 /*8*/].f_7), iParam1);
				}
			}
		}
		else if (!func_230() && !unk_0x44057438DAE1BD45())
		{
			iLocal_1050 = unk_0xF976C624234A4AA8();
		}
		else
		{
			iLocal_1050 = -1;
		}
	}
}

int func_227(int iParam0)
{
	if ((unk_0x61D8FEAF64881CDA(Local_686[0 /*8*/].f_7, iParam0) || unk_0x61D8FEAF64881CDA(Local_686[1 /*8*/].f_7, iParam0)) || unk_0x61D8FEAF64881CDA(Local_686[2 /*8*/].f_7, iParam0))
	{
		return 1;
	}
	return 0;
}

float func_228(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0xE5D56342B0FF1D0D(iParam0))
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xBF1B13057E5119A4(iParam0, 0) };
	}
	return unk_0x8FE221761D524CFE(Var0, Param1, iParam4);
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
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_81(sParam2, iParam3, 0);
}

int func_230()
{
	if (Global_15692 != 0 || unk_0xF611D1BB58990143())
	{
		return 1;
	}
	return 0;
}

void func_231()
{
	if (func_100(unk_0x507DA4994C3D8EBD(), Local_825, 220f))
	{
		if (!iLocal_875 && !func_100(unk_0x507DA4994C3D8EBD(), Local_825, 100f))
		{
			iLocal_875 = func_146(&uLocal_874, joaat("cavalcade2"), 1370.912f, -2060.055f, 50.9983f, 312.8686f, 1);
		}
	}
	else if (func_100(unk_0x507DA4994C3D8EBD(), Local_825, 240f))
	{
		if (iLocal_875)
		{
			func_6(&uLocal_874);
			iLocal_875 = 0;
		}
	}
}

void func_232()
{
	func_208(&iLocal_872, &uLocal_873, &iLocal_684, &iLocal_820, &iLocal_819, Local_825, Local_866.f_0, 0, 1090519040);
	func_207();
	func_148();
	switch (iLocal_682)
	{
		case 0:
			if (func_115(iLocal_681, bLocal_27))
			{
				func_118(&iLocal_819, Local_866.f_0, 1);
				func_114("PRA_GOVAN", &iLocal_818);
				iLocal_682 = 1;
			}
			break;
		
		case 1:
			func_220();
			if (func_36(Local_866.f_0))
			{
				func_235(&uLocal_669, Local_866.f_0, 0, 0, 1, 1, 1);
			}
			if (!bLocal_831)
			{
				if (func_321(Local_838.f_0) && unk_0x88253E28293B8BFD(Local_838.f_0))
				{
					func_234();
				}
				if (func_321(Local_852.f_0) && unk_0x88253E28293B8BFD(Local_852.f_0))
				{
					func_234();
				}
			}
			if (func_36(iLocal_872))
			{
				if ((iLocal_684 == 1 || iLocal_684 == 2) || iLocal_684 == 3)
				{
					unk_0x47B990AE184F491B(5f, 5f, 4);
					iLocal_682 = 2;
				}
			}
			break;
		
		case 2:
			func_7(&iLocal_819);
			func_138(&uLocal_669, 0, 0);
			func_103(0);
			break;
		
		case 3:
			func_8(&Local_838);
			func_8(&Local_852);
			if (func_36(Local_866.f_0))
			{
				unk_0x11460EBE0487B44F(unk_0x507DA4994C3D8EBD(), Local_866.f_0, -1);
			}
			func_233(1);
			func_39(1, 1, 1);
			iLocal_682 = 1;
			break;
	}
}

void func_233(bool bParam0)
{
	unk_0xB8265112BB26591B(1, bParam0);
	unk_0xB8265112BB26591B(2, bParam0);
	unk_0xB8265112BB26591B(3, bParam0);
	unk_0xB8265112BB26591B(4, bParam0);
	unk_0xB8265112BB26591B(5, bParam0);
	if (bParam0)
	{
		unk_0xA54C914AEB391F49(1f);
		unk_0x53C0659721DC11EC(5);
	}
	else
	{
		unk_0x53C0659721DC11EC(0);
		unk_0xA54C914AEB391F49(0f);
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
	bLocal_831 = func_229(&uLocal_877, "FBIPRAU", sVar0, 7, 0, 0, 0);
	if (bLocal_831)
	{
		unk_0x47B990AE184F491B(8f, 8f, 4);
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
	if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
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
	
	if (uParam0->f_1 && unk_0x4DA2E12E0157B5A3())
	{
		if (unk_0xF976C624234A4AA8() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0xD504011E20D63A81(iVar0))
	{
		if (!unk_0xD95428C8AA1DBBF2())
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
	if (func_254(iParam1) && unk_0xDAB2315B565377E3(iParam1))
	{
		iVar1 = 0;
		if (unk_0x91F594068DF4424F(iParam1))
		{
			unk_0xF4127D3DAB8D011F(unk_0x274BAC44978F9161(iParam1));
			unk_0xB215D95552289435(unk_0x274BAC44978F9161(iParam1), 1);
			if (unk_0xC76769D28EAFDE03(unk_0x274BAC44978F9161(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x1BA544973A67E699(iParam1))
		{
			unk_0x54E7B67452327959(unk_0x379620F9B34A512B(iParam1));
			if (unk_0xAEFA676AB984E73A(unk_0x379620F9B34A512B(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xBCF2529C09F7A239(iParam1))
		{
			unk_0xF30B2A027AD7244C(unk_0xB7E8BD80F6126D63(iParam1));
			if (unk_0x5F6DACBDBCB51121(unk_0xB7E8BD80F6126D63(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x4DA2E12E0157B5A3())
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
					if ((unk_0xD504011E20D63A81(uParam0->f_3) && !unk_0xD504011E20D63A81(iVar0)) && unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
					{
						if ((iVar1 && !unk_0xBB51CB7A4D14453D()) && uParam8)
						{
							if (!func_139(iVar0))
							{
								func_242(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xA858564DC37EED5E("CMN_HINT", iVar0))
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
				if (unk_0xD504011E20D63A81(uParam0->f_3) && !unk_0xD504011E20D63A81(iVar0))
				{
					if (((unk_0x9226425D9E480D72(iParam1) && iVar1) && !unk_0xBB51CB7A4D14453D()) && uParam8)
					{
						if (!func_139(iVar0))
						{
							func_242(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xA858564DC37EED5E("CMN_HINT", iVar0))
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
			if (!unk_0xD504011E20D63A81(sParam5))
			{
				if (func_139(sParam5))
				{
					unk_0x4A4C1A1BC79EFE8F(1);
				}
			}
			if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
			{
				if (unk_0x70A314BA86AFCBFA(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0xD686D61A57BCB6E7(3) == 3 || unk_0xD686D61A57BCB6E7(3) == 4)
					{
						func_138(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xD7475AE87197B442(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0xD686D61A57BCB6E7(6) == 3 || unk_0xD686D61A57BCB6E7(6) == 4)
					{
						func_138(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x2910F2A2D77BD576(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0xD686D61A57BCB6E7(4) == 3 || unk_0xD686D61A57BCB6E7(4) == 4)
					{
						func_138(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x202FB250328FD056(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0xD686D61A57BCB6E7(5) == 3 || unk_0xD686D61A57BCB6E7(5) == 4)
					{
						func_138(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x9331412F1452086E(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0xD686D61A57BCB6E7(2) == 3 || unk_0xD686D61A57BCB6E7(2) == 4)
					{
						func_138(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x16F52C789EC7346D() == 3 || unk_0x16F52C789EC7346D() == 4)
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
	if (func_254(unk_0x507DA4994C3D8EBD()))
	{
		unk_0xCBA47B699F417E4D(unk_0x507DA4994C3D8EBD());
	}
	if (unk_0x4DA2E12E0157B5A3())
	{
		unk_0x2E98407DE29E0D76(1);
		unk_0x0D1C3C2B4975D8AC(0);
		unk_0xAB5C0FE0C680BC7F("HINT_CAM_SCENE");
		unk_0x33D978A3F3EC8BD3("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x8EEEED91D5DD768C("FocusOut", 0, 0);
			unk_0x84795EA8F54230A1(-1, "FocusOut", "HintCamSounds", 1);
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
		if (uParam0->f_2 + iVar0) > unk_0xF976C624234A4AA8()
		{
			return 1;
		}
	}
	return 0;
}

int func_241(bool bParam0)
{
	switch (Global_34909)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_97173.f_8270.f_100++;
			}
			return Global_97173.f_8270.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_97173.f_8270.f_101++;
			}
			return Global_97173.f_8270.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_97173.f_8270.f_102++;
			}
			return Global_97173.f_8270.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_242(char* sParam0, int iParam1)
{
	unk_0x1ACC22C365D06AAE(sParam0);
	unk_0x9F84D1B39B1E5B59(0, 0, 1, iParam1);
}

int func_243(char* sParam0)
{
	if (!func_244(1, 1, 0))
	{
		if ((!unk_0x8FA72E132AAFA62F(sParam0) && func_139(sParam0)) || func_139("CMN_HINT"))
		{
			unk_0x4A4C1A1BC79EFE8F(1);
		}
		return 0;
	}
	switch (Global_34909)
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
		if (!unk_0xA54B09EB6B49FA94(unk_0xAF65E5A58BE87D95()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xA4ADA92842355D33())
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
	if (unk_0x1B3FC52C6D531434())
	{
		return 0;
	}
	if (Global_66880)
	{
		return 0;
	}
	if (unk_0x25531002BCF0D968(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_51754)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
		{
			if (unk_0x70A314BA86AFCBFA(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xD686D61A57BCB6E7(3) == 3 || unk_0xD686D61A57BCB6E7(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xD7475AE87197B442(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xD686D61A57BCB6E7(6) == 3 || unk_0xD686D61A57BCB6E7(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x2910F2A2D77BD576(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xD686D61A57BCB6E7(4) == 3 || unk_0xD686D61A57BCB6E7(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x202FB250328FD056(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xD686D61A57BCB6E7(5) == 3 || unk_0xD686D61A57BCB6E7(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x9331412F1452086E(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xD686D61A57BCB6E7(2) == 3 || unk_0xD686D61A57BCB6E7(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x16F52C789EC7346D() == 3 || unk_0x16F52C789EC7346D() == 4)
			{
				return 0;
			}
			if (unk_0x17883A5D027318C8())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_245()
{
	return unk_0xF976C624234A4AA8() <= Global_17236.f_5130 + 100;
}

void func_246(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xE5D56342B0FF1D0D(iParam1))
	{
		func_138(uParam0, 0, 0);
	}
	if (func_15(Param2, 0f, 0f, 0f))
	{
		if (unk_0x91F594068DF4424F(iParam1))
		{
			iVar0 = unk_0x274BAC44978F9161(iParam1);
			if (!unk_0x2A24448FF232F834(iVar0, 0))
			{
				if (unk_0xBC57175ED22C698D(iVar0))
				{
					if (!func_247())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xB9DC6B81F29B0CA8(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x2E98407DE29E0D76(0);
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
	unk_0x05272DA4DFB8755D(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x8E759206778E571F(unk_0x507DA4994C3D8EBD(), iParam1, -1, iVar3, iVar4);
	unk_0x8EEEED91D5DD768C("FocusIn", 0, 0);
	unk_0xD56AC40382654643("HINT_CAM_SCENE");
	unk_0x84795EA8F54230A1(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0xF976C624234A4AA8();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_247()
{
	return func_248(unk_0xAF65E5A58BE87D95());
}

int func_248(int iParam0)
{
	if (unk_0x26EA758C2A691D06(unk_0x687D51F360787909(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_249(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0xF976C624234A4AA8() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
				{
					if (func_253(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xF976C624234A4AA8();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_252(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xF976C624234A4AA8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_252(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xF976C624234A4AA8();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_253(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0xF976C624234A4AA8();
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
			if ((unk_0xF976C624234A4AA8() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
					{
						if (!func_253(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0xF976C624234A4AA8();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_252(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xF976C624234A4AA8();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_252(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xF976C624234A4AA8();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_253(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0xF976C624234A4AA8();
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
				if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
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
				if (!func_252(bParam1, bParam2, bParam3) || unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1) || unk_0x7ECD7807CAEF4F14(unk_0x507DA4994C3D8EBD(), 2))
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
			if ((unk_0xF976C624234A4AA8() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1))
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
					if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1) || func_250(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 1) || unk_0x7ECD7807CAEF4F14(unk_0x507DA4994C3D8EBD(), 2))
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
	if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		if (!unk_0xED0A2A3FDC3E3728(unk_0xAF65E5A58BE87D95()))
		{
			unk_0x500F4CA776CEBD0A(0, 140, 1);
			unk_0x500F4CA776CEBD0A(0, 80, 1);
			if (unk_0xF34A5B7A9ABA0975(0, 80))
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
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		unk_0x500F4CA776CEBD0A(0, 80, 1);
		if (unk_0xEE3FEF5CB30FDBA9())
		{
			if (unk_0xF34A5B7A9ABA0975(0, 80))
			{
				unk_0x2E98407DE29E0D76(0);
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
	if (!unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		if (!unk_0xED0A2A3FDC3E3728(unk_0xAF65E5A58BE87D95()))
		{
			unk_0x500F4CA776CEBD0A(0, 140, 1);
			unk_0x500F4CA776CEBD0A(0, 80, 1);
			if (unk_0x25F05AE8FAE80806(0, 80) && unk_0xF976C624234A4AA8() > Global_96)
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
	if (unk_0x2A24448FF232F834(unk_0x507DA4994C3D8EBD(), 0))
	{
		unk_0x500F4CA776CEBD0A(0, 80, 1);
		if (unk_0xEE3FEF5CB30FDBA9())
		{
			if (unk_0x25F05AE8FAE80806(0, 80) && unk_0xF976C624234A4AA8() > Global_96)
			{
				unk_0x2E98407DE29E0D76(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_254(int iParam0)
{
	if (unk_0xFD68187442384158(iParam0))
	{
		if (unk_0x1BA544973A67E699(iParam0))
		{
			if (unk_0xCA8794CE207FC6D5(unk_0x379620F9B34A512B(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x91F594068DF4424F(iParam0))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0x274BAC44978F9161(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xBCF2529C09F7A239(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_255()
{
	unk_0x3DBE2A7AF9E71C82(&Global_2264, 4);
}

void func_256()
{
	switch (iLocal_682)
	{
		case 0:
			if (func_115(iLocal_681, 0))
			{
				func_268();
				func_266(33);
				unk_0x53C0659721DC11EC(2);
				unk_0xA54C914AEB391F49(0.1f);
				if (func_337())
				{
					func_263(0, -1, 1);
					func_40(500, 1);
					iLocal_682 = 2;
				}
				else
				{
					if (func_32(0))
					{
						func_117(unk_0x507DA4994C3D8EBD(), 1228.635f, -348.4277f, 68.0929f, 86.7244f);
						func_258(1228.635f, -348.4277f, 68.0929f, 1112014848, 12, 5000, 0, 0);
						func_40(500, 1);
					}
					func_257();
					if (iLocal_681 == 2)
					{
						iLocal_682 = 0;
					}
					else
					{
						iLocal_682 = 2;
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
	
	uVar0 = unk_0x67C7B526372AB1F7(Param0, iParam3, iParam4, 127);
	if (unk_0xB6507CA6AC51E37A(uVar0))
	{
		iVar1 = (unk_0xF976C624234A4AA8() + iParam5);
		while (!unk_0x08F23802DAAA26B2(uVar0) && unk_0xF976C624234A4AA8() < iVar1)
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
		if (unk_0xF976C624234A4AA8() < iVar1)
		{
		}
		unk_0x1484CB72453DE620(uVar0);
	}
}

void func_259()
{
	Global_17098.f_6 = 1;
}

void func_260()
{
	if (!Global_14393.f_1 == 1)
	{
		if (func_67(0))
		{
			func_261(0);
		}
		unk_0x3DBE2A7AF9E71C82(&Global_2264, 2);
	}
}

void func_261(int iParam0)
{
	if (Global_14551)
	{
		func_262(0, 0);
	}
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2264, 16);
	}
	if (unk_0x49BDC46D7CAD9C63())
	{
		unk_0xD858EC6FECDB4B3F(false);
	}
	Global_15692 = 5;
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&Global_2263, 30);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&Global_2263, 30);
	}
	if (!func_49())
	{
		Global_14393.f_1 = 3;
	}
}

void func_262(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_67(0))
		{
			Global_14551 = 1;
			if (bParam1)
			{
				unk_0x483F49444BC10CD1(&Global_14330);
			}
			Global_14321 = { Global_14339[Global_14338 /*3*/] };
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
	else if (Global_14551 == 1)
	{
		Global_14551 = 0;
		Global_14321 = { Global_14346[Global_14338 /*3*/] };
		if (bParam1)
		{
			unk_0x22FDA9F8AE4DE11C(Global_14330);
		}
		else
		{
			unk_0x22FDA9F8AE4DE11C(Global_14321);
		}
	}
}

void func_263(int iParam0, int iParam1, int iParam2)
{
	if (func_337() && func_265())
	{
		while (Global_89779 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x1757405122DE8566(0);
		if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				unk_0x309CA1336CB83196(unk_0x507DA4994C3D8EBD());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
			{
				if (unk_0xFD68187442384158(iParam0))
				{
					if (unk_0xCA8794CE207FC6D5(iParam0, 0))
					{
						if (!unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iParam0, 0))
						{
							unk_0x11460EBE0487B44F(unk_0x507DA4994C3D8EBD(), iParam0, iParam1);
							unk_0x77CB1AAAF31275BE(0f, 1065353216);
							unk_0xBE5E0E5A454F4D6A(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
			{
				unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 1, 0);
			}
		}
		unk_0xA18B52A0F825A53B();
		func_264(0);
	}
}

void func_264(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_89784.f_20), 13);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&(Global_89784.f_20), 13);
	}
}

bool func_265()
{
	return unk_0x61D8FEAF64881CDA(Global_89784.f_20, 13);
}

void func_266(int iParam0)
{
	Global_86044 = 0;
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
	unk_0x3DBE2A7AF9E71C82(&Global_86044, iParam0);
}

void func_268()
{
	int iVar0;
	
	iVar0 = unk_0xF6EA6ED8FFB5B505();
	if (unk_0xFD68187442384158(iVar0))
	{
		if (unk_0xCA8794CE207FC6D5(iVar0, 0))
		{
			func_269(iVar0, unk_0xBF1B13057E5119A4(iVar0, 1), unk_0xA9D6B28E708753B6(iVar0), 24, 0);
		}
	}
}

void func_269(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<54> Var0;
	
	if (unk_0xFD68187442384158(iParam0) && unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0xFD68187442384158(Global_66960.f_484[25]) && unk_0xCA8794CE207FC6D5(Global_66960.f_484[25], 0))
			{
				if (Global_66960.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x9BEA3FC192D22438(iParam0) || unk_0x26EA758C2A691D06(iParam0) == joaat("bus")) || unk_0x26EA758C2A691D06(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_312(iParam5);
		Var0.f_9 = 25;
		Var0.f_35 = 2;
		func_308(iParam0, &Var0);
		if (func_15(Param1, 0f, 0f, 0f))
		{
			Param1 = { unk_0xBF1B13057E5119A4(iParam0, 1) };
			uParam4 = unk_0xA9D6B28E708753B6(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x3BA42EA02A10243D(unk_0x3ED5FA3F61EC9E68()) != joaat("vehicle_gen_controller"))
			{
				Global_67924 = unk_0x3BA42EA02A10243D(unk_0x3ED5FA3F61EC9E68());
			}
		}
		func_301(iParam5, Var0, Param1, uParam4, func_307(iParam0));
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
	if (!func_298(&(Global_66960.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0x61D8FEAF64881CDA(Global_66960.f_555[0 /*21*/].f_9, 12) && !unk_0x61D8FEAF64881CDA(Global_66960.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_66960.f_555[0 /*21*/].f_4 != unk_0x26EA758C2A691D06(iParam1))
		{
			return;
		}
	}
	if (Global_67867 != -1 && Global_67867 != iParam0)
	{
		return;
	}
	if (unk_0xFD68187442384158(iParam1))
	{
		if (unk_0xCA8794CE207FC6D5(iParam1, 0))
		{
			if (!unk_0x73E2404DC70203CD(iParam1))
			{
				unk_0xBAE5DF507EEC53C8(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_97173.f_18338.f_4249 = func_287();
			}
			if (iParam1 != Global_66960.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_286(iParam0);
					if ((unk_0xFD68187442384158(iVar0) && unk_0xCA8794CE207FC6D5(iVar0, 0)) && iParam1 != iVar0)
					{
						func_271(iVar0, 145);
					}
				}
				Global_67866 = iParam1;
				Global_67867 = iParam0;
				Global_67868 = iParam2;
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
		iVar0 = unk_0xE634CB9EE7094537(iParam0, -1);
		if (!unk_0xFD68187442384158(iVar0))
		{
			iVar0 = unk_0xF417BF3AE09AE69A(iParam0, -1);
		}
		if (unk_0xFD68187442384158(iVar0) && !unk_0x9F94F2CFDCA78C55(iVar0))
		{
			if (unk_0x26EA758C2A691D06(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x26EA758C2A691D06(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x26EA758C2A691D06(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_97173.f_1729.f_539.f_3213;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x26EA758C2A691D06(iParam0) == Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42)
			{
				if (!unk_0x8FA72E132AAFA62F(&(Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (unk_0xA858564DC37EED5E(unk_0x3907ED4361C53248(iParam0), &(Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42 = 0;
						Global_97173.f_18338.f_4800[iVar1] = iVar2;
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
		if (unk_0x26EA758C2A691D06(iParam0) == Global_97173.f_18338.f_4808[iVar1 /*54*/].f_42)
		{
			if (!unk_0x8FA72E132AAFA62F(&(Global_97173.f_18338.f_4808[iVar1 /*54*/].f_1)))
			{
				if (unk_0xA858564DC37EED5E(unk_0x3907ED4361C53248(iParam0), &(Global_97173.f_18338.f_4808[iVar1 /*54*/].f_1)))
				{
					Global_97173.f_18338.f_4808[iVar1 /*54*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_97173.f_18338.f_4798 = iParam1;
	Global_67865 = iParam0;
	Global_97173.f_18338.f_4796 = 1;
	func_308(iParam0, &(Global_97173.f_18338.f_4742));
}

int func_272(int iParam0)
{
	if ((((((((((!unk_0xFD68187442384158(iParam0) || !unk_0xCA8794CE207FC6D5(iParam0, 0)) || func_284(iParam0, 0, 0)) || func_284(iParam0, 1, 0)) || func_284(iParam0, 2, 0)) || func_307(iParam0) != 145) || func_283(iParam0)) || func_282(iParam0)) || func_281(iParam0)) || func_280(iParam0)) || !func_273(unk_0x26EA758C2A691D06(iParam0)))
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
	if (((unk_0x9C14CED64BA9A516(iParam0) || unk_0x9652AA5F22572EA4(iParam0)) || unk_0x6149FC3B1572A5B9(iParam0)) || unk_0x0A0852014FD513B3(iParam0))
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
	if (!unk_0x4E583EB6802F4DA9(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0xD95428C8AA1DBBF2())) || (iParam0 == joaat("buffalo3") && !unk_0xD95428C8AA1DBBF2())) || (iParam0 == joaat("gauntlet2") && !unk_0xD95428C8AA1DBBF2())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0xD95428C8AA1DBBF2())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_279())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x4FC8D240D0A0F8E5())
		{
			if (unk_0x010E2F747F94CA7D(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x33C8EAC2E4509403(Var1.f_0))
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
		if ((unk_0x5D64B4BDB6FCA4F0() || unk_0x80AD636AD4184F2B()) || unk_0xA09FDB4B3C001CAB())
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
	if (unk_0xFBD0BD8E550E0625(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_279()
{
	var uVar0;
	
	if (unk_0x85B80D0F84A3F70C())
	{
		if (unk_0x61D8FEAF64881CDA(unk_0x227FB8F9C772BAFB(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0xD95428C8AA1DBBF2())
	{
		if (unk_0x61D8FEAF64881CDA(Global_97173.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131417 == 2)
	{
		return 1;
	}
	if (unk_0xA730AA29D1C70932())
	{
		if (unk_0x72B3C5483AF02F51())
		{
			if (unk_0xFA66FD5789959E48())
			{
				if (unk_0x85B80D0F84A3F70C())
				{
					uVar0 = unk_0x227FB8F9C772BAFB(866);
					unk_0x3DBE2A7AF9E71C82(&uVar0, 0);
					unk_0x6C25B3CA27EB626F(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_280(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x26EA758C2A691D06(iParam0);
	sVar1 = unk_0x3907ED4361C53248(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xA858564DC37EED5E(sVar1, "LAMAR G "))
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
		if (unk_0xFD68187442384158(Global_87550[iVar0]))
		{
			if (Global_87550[iVar0] == iParam0)
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
	
	if (unk_0xFD68187442384158(iParam0) && unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xFD68187442384158(Global_87520[iVar0]) && unk_0xCA8794CE207FC6D5(Global_87520[iVar0], 0))
			{
				if (Global_87520[iVar0] == iParam0 && unk_0x26EA758C2A691D06(Global_87520[iVar0]) == unk_0x26EA758C2A691D06(iParam0))
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
	
	if (unk_0xFD68187442384158(Global_66960.f_484[24]))
	{
		if (iParam0 == Global_66960.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xFD68187442384158(Global_66960.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_66960.f_484[iVar0])
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
	
	if (!unk_0xFD68187442384158(iParam0) || !unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_285(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0x61D8FEAF64881CDA(Global_97173.f_5486[iVar9], 0))
		{
			if (unk_0xA5A6C7F14D300E6C(&sVar1, iParam0))
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
	return Global_66960.f_139[iParam0];
}

var func_287()
{
	var uVar0;
	
	func_297(&uVar0, unk_0x2784A8234E9B4202());
	func_296(&uVar0, unk_0x06F66CEDC24218A4());
	func_295(&uVar0, unk_0xE76C684D1C903A71());
	func_290(&uVar0, unk_0xA277D6C04B4B44C8());
	func_289(&uVar0, unk_0x1285C2DD1E4945FF());
	func_288(&uVar0, unk_0xCFC08A7C99F98C5B());
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_293(unk_0x61D8FEAF64881CDA(iParam0, 31), -1, 1)) + 2011;
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
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 20);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_299(0, 1);
			uParam0->f_12 = 0;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 20);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_299(1, 1);
			uParam0->f_12 = 1;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 20);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_299(1, 2);
			uParam0->f_12 = 1;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 19);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_299(1, 1);
			uParam0->f_12 = 1;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 20);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_299(1, 2);
			uParam0->f_12 = 1;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 19);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_299(2, 1);
			uParam0->f_12 = 2;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 20);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_299(2, 1);
			uParam0->f_12 = 2;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 20);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_299(2, 1);
			uParam0->f_12 = 2;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 20);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 22);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 22);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 22);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 24);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 24);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 14);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 24);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 28);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 29);
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
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 27);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 24);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 29);
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
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 27);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 24);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 29);
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
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 7);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 27);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 24);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 11);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 13);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 10);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 11);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 13);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 9);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 9);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 8);
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
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 2);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 30);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 2);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 22);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
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
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 13);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 2);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 1);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
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
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 13);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 2);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 1);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 0);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 21);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 30);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 30);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 23);
			unk_0x3DBE2A7AF9E71C82(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0x61D8FEAF64881CDA(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_97173.f_18338.f_69[uParam0->f_14 /*54*/].f_42;
		if (iParam1 == 14)
		{
			if ((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_15(Global_97173.f_18338.f_1312[uParam0->f_14 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97173.f_18338.f_1312[uParam0->f_14 /*3*/] };
		}
		if (Global_97173.f_18338.f_1382[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_97173.f_18338.f_1382[uParam0->f_14];
		}
	}
	if (unk_0x61D8FEAF64881CDA(uParam0->f_9, 19))
	{
		if (!func_15(Global_97173.f_1729.f_539.f_2528[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97173.f_1729.f_539.f_2528[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_97173.f_1729.f_539.f_2549[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0x61D8FEAF64881CDA(uParam0->f_9, 20))
	{
		if (!func_15(Global_97173.f_1729.f_539.f_2528[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97173.f_1729.f_539.f_2528[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_97173.f_1729.f_539.f_2549[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_299(int iParam0, int iParam1)
{
	struct<58> Var0;
	
	if (func_28(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
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
	struct<74> Var1;
	
	Var1.f_11 = 12;
	Var1.f_31 = 25;
	Var1.f_57 = 2;
	Var1.f_64 = 1;
	Var1.f_60 = 255;
	Var1.f_61 = 255;
	Var1.f_62 = 255;
	Var1.f_73 = 1;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_97173.f_7311.f_99.f_58[128] && !Global_97173.f_7311.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 3f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					Var1.f_11[0] = 1;
					StringCopy(&(Var1.f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 14.9f;
					Var1.f_5 = 43;
					Var1.f_6 = 43;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 14f;
					Var1.f_5 = 32;
					Var1.f_6 = 0;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_27), "BETTY 32", 16);
					if (Global_97173.f_7311.f_99.f_58[119])
					{
						Var1.f_11[1] = 1;
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
			else if (Global_97173.f_7311.f_99.f_58[118])
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
					Var1.f_0 = iVar0;
					Var1.f_2 = 6f;
					Var1.f_5 = 53;
					Var1.f_6 = 0;
					Var1.f_7 = 59;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					Var1.f_0 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 111;
					Var1.f_6 = 111;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_10 = 1;
					StringCopy(&(Var1.f_27), "FC1988", 16);
					Var1.f_11[0] = 1;
					Var1.f_11[1] = 1;
					Var1.f_11[2] = 1;
					Var1.f_11[3] = 1;
					Var1.f_11[4] = 1;
					Var1.f_11[5] = 1;
					Var1.f_11[6] = 1;
					Var1.f_11[7] = 1;
					Var1.f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*uParam1 = { Var1 };
}

void func_301(int iParam0, struct<54> Param1, struct<3> Param55, var uParam58, int iParam59)
{
	if (func_298(&(Global_66960.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x61D8FEAF64881CDA(Global_66960.f_555[0 /*21*/].f_9, 10))
		{
			func_306(iParam0);
			func_305(Param1, &(Global_97173.f_18338.f_69[Global_66960.f_555[0 /*21*/].f_14 /*54*/]));
			if (unk_0x61D8FEAF64881CDA(Global_66960.f_555[0 /*21*/].f_9, 11))
			{
				Global_97173.f_18338.f_1312[Global_66960.f_555[0 /*21*/].f_14 /*3*/] = { Param55 };
				Global_97173.f_18338.f_1382[Global_66960.f_555[0 /*21*/].f_14] = uParam58;
			}
			else
			{
				Global_97173.f_18338.f_1312[Global_66960.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_97173.f_18338.f_1382[Global_66960.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_97173.f_18338.f_1406[Global_66960.f_555[0 /*21*/].f_14] = iParam59 + 1;
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
			Global_66960[iParam0] = 1;
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
		unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_18338[iParam0]), iParam1);
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&(Global_97173.f_18338[iParam0]), iParam1);
	}
}

bool func_304(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0x61D8FEAF64881CDA(Global_97173.f_18338[iParam0], iParam1);
}

void func_305(struct<54> Param0, var uParam54)
{
	uParam54->f_42 = Param0.f_42;
	*uParam54 = Param0.f_0;
	uParam54->f_1 = { Param0.f_1 };
	uParam54->f_5 = Param0.f_5;
	uParam54->f_6 = Param0.f_6;
	uParam54->f_7 = Param0.f_7;
	uParam54->f_8 = Param0.f_8;
	uParam54->f_9 = { Param0.f_9 };
	uParam54->f_35 = { Param0.f_35 };
	uParam54->f_38 = Param0.f_38;
	uParam54->f_39 = Param0.f_39;
	uParam54->f_40 = Param0.f_40;
	uParam54->f_41 = Param0.f_41;
	uParam54->f_53 = Param0.f_53;
	uParam54->f_43 = Param0.f_43;
	uParam54->f_45 = Param0.f_45;
	uParam54->f_44 = Param0.f_44;
	uParam54->f_47 = Param0.f_47;
	uParam54->f_48 = Param0.f_48;
	uParam54->f_49 = Param0.f_49;
	uParam54->f_50 = Param0.f_50;
	uParam54->f_51 = Param0.f_51;
	uParam54->f_52 = Param0.f_52;
}

void func_306(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_298(&(Global_66960.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xFD68187442384158(Global_66960.f_139[iParam0]))
		{
			unk_0xBAE5DF507EEC53C8(Global_66960.f_139[iParam0], 1, 1);
			unk_0xB67623A401171555(&(Global_66960.f_139[iParam0]));
			Global_66960.f_139[iParam0] = 0;
		}
		if (unk_0x61D8FEAF64881CDA(Global_66960.f_555[0 /*21*/].f_9, 13))
		{
			func_302(iParam0, 0);
		}
	}
}

int func_307(int iParam0)
{
	int iVar0;
	
	if (!unk_0xFD68187442384158(iParam0))
	{
		return 145;
	}
	if (!unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xFD68187442384158(Global_87520[iVar0]))
		{
			if (Global_87520[iVar0] == iParam0)
			{
				return Global_87530[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

void func_308(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xCA8794CE207FC6D5(iParam0, 0))
	{
		func_311(uParam1);
		uParam1->f_42 = unk_0x26EA758C2A691D06(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x3907ED4361C53248(iParam0), 16);
		*uParam1 = unk_0x19BB097358BFF0AF(iParam0);
		unk_0x1603516D6065B48F(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xA350E44A87923312(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x8239CD0D53DFB0BC(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = unk_0x0612606EF85B26EA(iParam0);
		uParam1->f_43 = unk_0x4CA0AD498EF66914(iParam0);
		uParam1->f_45 = unk_0x7650202B3E229E02(iParam0);
		uParam1->f_46 = unk_0x407FC6F2E81C15C7(iParam0);
		unk_0x5A28251CF7DB43BF(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0xF5E00BA0DEA3A55A(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (unk_0xD9DD35FE09967D1F(iParam0, 2))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 28);
		}
		if (unk_0xD9DD35FE09967D1F(iParam0, 3))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 29);
		}
		if (unk_0xD9DD35FE09967D1F(iParam0, 0))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 30);
		}
		if (unk_0xD9DD35FE09967D1F(iParam0, 1))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0x850813D10502D655(iParam0, 0))
		{
			uParam1->f_44 = unk_0x92632E4A1274BB2C(iParam0);
		}
		if (unk_0x9652AA5F22572EA4(uParam1->f_42))
		{
			if (unk_0xE72A4DAD5B1689BE(iParam0))
			{
				switch (unk_0x91068745EF3E0ADA(iParam0))
				{
					case 2:
					case 0:
						unk_0xCD27BF29FB9012E2(&(uParam1->f_53), 23);
						unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						unk_0xCD27BF29FB9012E2(&(uParam1->f_53), 23);
						unk_0xCD27BF29FB9012E2(&(uParam1->f_53), 22);
						break;
					
					case 4:
						unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 23);
			}
		}
		if (!unk_0x4FA9345A8F43BDAC(iParam0))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 9);
		}
		if (unk_0xFE579AAF18C374AC(iParam0))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 10);
		}
		if (unk_0xEC9139D75F13D0D3(iParam0))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 13);
			unk_0x036299CCFE91E283(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0x4FD71373746F04E1(iParam0))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 12);
		}
		func_310(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x64D04C2170ADD5A9(iParam0, iVar0 + 1))
			{
				unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), func_309(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0xC0D8A6AB4509755B(iParam0, 0))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 11);
		}
		else
		{
			unk_0xCD27BF29FB9012E2(&(uParam1->f_53), 11);
		}
		if (unk_0xD665B29FEC987319(iParam0, "IgnoredByQuickSave") && unk_0x44A72A39C7AE7EDD(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x3DBE2A7AF9E71C82(&(uParam1->f_53), 27);
		}
		else
		{
			unk_0xCD27BF29FB9012E2(&(uParam1->f_53), 27);
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
	
	if (!unk_0xCA8794CE207FC6D5(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xFE85A2A6EE40ADA0(*iParam0) == 0)
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
			if (unk_0x44C699E5DC7A51EA(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x892B3EDA66236D64(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x194DFCDAD36ABECC(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x194DFCDAD36ABECC(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_311(var uParam0)
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_53 = 0;
	uParam0->f_41 = 0;
	uParam0->f_38 = 0;
	uParam0->f_39 = 0;
	uParam0->f_40 = 0;
	uParam0->f_50 = 0;
	uParam0->f_51 = 0;
	uParam0->f_52 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_35[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
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
	if (!iLocal_829)
	{
		if (func_36(iLocal_872))
		{
			if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_872, 0))
			{
				func_64(iLocal_872, -1);
				func_63(iLocal_872, 318);
				iLocal_829 = 1;
			}
		}
	}
	if (!iLocal_830)
	{
		if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) > 0)
		{
			func_315(320, 0);
			iLocal_830 = 1;
		}
	}
	else if (unk_0x89D8D467C3C356CB(unk_0xAF65E5A58BE87D95()) == 0)
	{
		func_62(0, 320);
		iLocal_830 = 0;
	}
}

void func_315(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_54582 = iParam0;
	if (!Global_54580)
	{
		Global_54580 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_66667)
		{
			if (Global_66668[iVar0 /*9*/] == iParam0)
			{
				Global_66668[iVar0 /*9*/].f_1 = 0;
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
	if (!bLocal_27 && iLocal_681 != 5)
	{
		if (iLocal_681 > 0)
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
	if (!func_36(iLocal_872))
	{
		if (!func_36(uLocal_873) && !func_36(Local_866.f_0))
		{
			func_320(1);
			return;
		}
		if (func_36(Local_866.f_0) && !func_150(unk_0x507DA4994C3D8EBD(), Local_866.f_0, fVar0))
		{
			func_320(2);
		}
	}
	else
	{
		iVar1 = 0;
		if (!func_150(unk_0x507DA4994C3D8EBD(), iLocal_872, fVar0))
		{
			iVar1++;
		}
		if (func_36(uLocal_873))
		{
			if (!func_150(unk_0x507DA4994C3D8EBD(), uLocal_873, fVar0))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_36(Local_866.f_0))
		{
			if (!func_150(unk_0x507DA4994C3D8EBD(), Local_866.f_0, fVar0))
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
		if (func_319(iLocal_872))
		{
			iVar1++;
		}
		if (func_36(uLocal_873))
		{
			if (func_319(uLocal_873))
			{
				iVar1++;
			}
		}
		else
		{
			iVar1++;
		}
		if (func_36(Local_866.f_0))
		{
			if (func_319(Local_866.f_0))
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
		if (((unk_0xD803509E70F20530(uParam0, 0, 7000) || unk_0xD803509E70F20530(uParam0, 3, 30000)) || unk_0xD803509E70F20530(uParam0, 2, 30000)) || unk_0xD803509E70F20530(uParam0, 1, 40000))
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
	unk_0x3DF5706BBD8F5B5B();
	func_59();
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			sLocal_816 = "PRA_FWRECK";
			break;
		
		case 2:
			sLocal_816 = "PRA_FFAR";
			break;
		
		case 3:
			sLocal_816 = "PRA_FSTUCK";
			break;
	}
	iLocal_681 = 5;
	iLocal_682 = 0;
}

int func_321(int iParam0)
{
	if (func_10(iParam0))
	{
		if (!unk_0x9F94F2CFDCA78C55(iParam0))
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
			if (iParam2 && Global_89836.f_17[iParam0])
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
	Global_89836.f_153[iParam0] = 1;
	Global_89836.f_152 = 1;
}

void func_325(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0xCD27BF29FB9012E2(&(Global_89836.f_1267[iParam0]), iParam1);
	}
	else if (unk_0xD95428C8AA1DBBF2())
	{
		if (func_330() == 0)
		{
			uVar0 = func_328(func_329(iParam0), -1, 0);
			unk_0xCD27BF29FB9012E2(&uVar0, iParam1);
			func_326(func_329(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0xCD27BF29FB9012E2(&(Global_97173.f_668[iParam0]), iParam1);
	}
}

void func_326(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2454190[iParam0 /*6*/][func_327(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x96B68C67633472DC(iVar0, uParam1, iParam3);
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
			Global_2453903 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2453903 = 1;
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
	uVar0 = Global_2454190[iParam0 /*6*/][func_327(iParam1)];
	if (unk_0x55FFE396AA3CA77A(uVar0, &uVar1, -1))
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
			return 814;
			break;
		
		case 1:
			return 815;
			break;
		
		case 2:
			return 816;
			break;
		
		case 3:
			return 817;
			break;
		
		case 4:
			return 818;
			break;
		
		case 5:
			return 819;
			break;
		
		case 6:
			return 820;
			break;
		
		case 7:
			return 821;
			break;
		
		case 8:
			return 822;
			break;
		
		case 9:
			return 823;
			break;
		
		case 10:
			return 824;
			break;
		
		case 11:
			return 825;
			break;
		
		case 12:
			return 826;
			break;
		
		case 13:
			return 827;
			break;
		
		case 14:
			return 828;
			break;
		
		case 15:
			return 830;
			break;
		
		case 16:
			return 831;
			break;
		
		case 17:
			return 832;
			break;
		
		case 18:
			return 833;
			break;
		
		case 19:
			return 834;
			break;
		
		case 20:
			return 835;
			break;
		
		case 21:
			return 836;
			break;
		
		case 22:
			return 837;
			break;
		
		case 23:
			return 838;
			break;
		
		case 24:
			return 839;
			break;
		
		case 25:
			return 840;
			break;
		
		case 26:
			return 841;
			break;
		
		case 27:
			return 842;
			break;
		
		case 28:
			return 843;
			break;
		
		case 29:
			return 844;
			break;
		
		case 30:
			return 845;
			break;
		
		case 31:
			return 846;
			break;
		
		case 32:
			return 847;
			break;
		
		case 33:
			return 848;
			break;
		
		case 34:
			return 849;
			break;
		
		case 35:
			return 850;
			break;
		
		case 36:
			return 851;
			break;
		
		case 37:
			return 852;
			break;
		
		case 38:
			return 853;
			break;
		
		case 39:
			return 854;
			break;
		
		case 40:
			return 858;
			break;
		
		case 41:
			return 859;
			break;
		
		case 42:
			return 860;
			break;
		
		case 43:
			return 861;
			break;
		
		default:
			break;
	}
	return 2829;
}

int func_330()
{
	return Global_24444;
}

void func_331(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (bParam2)
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_89836.f_1267[iParam0]), iParam1);
	}
	else if (unk_0xD95428C8AA1DBBF2())
	{
		if (func_330() == 0)
		{
			uVar0 = func_328(func_329(iParam0), -1, 0);
			unk_0x3DBE2A7AF9E71C82(&uVar0, iParam1);
			func_326(func_329(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		unk_0x3DBE2A7AF9E71C82(&(Global_97173.f_668[iParam0]), iParam1);
	}
}

void func_332(int iParam0)
{
	if (Global_89836.f_17[iParam0])
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
	}
	return 5;
}

int func_335(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		return unk_0x61D8FEAF64881CDA(Global_89836.f_1267[iParam0], iParam1);
	}
	else if (unk_0xD95428C8AA1DBBF2())
	{
		if (func_330() == 0)
		{
			return unk_0x61D8FEAF64881CDA(func_328(func_329(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return unk_0x61D8FEAF64881CDA(Global_97173.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_336(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	if (func_337())
	{
		unk_0xB43679BBB30F1391(0);
		unk_0xCD27BF29FB9012E2(&(Global_89784.f_20), 2);
		unk_0x1757405122DE8566(1);
		if (unk_0x52A84D9C3A400EA8(unk_0xAF65E5A58BE87D95()))
		{
			unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 0, 0);
		}
		Global_89780 = { Param0 };
		Global_89783 = fParam3;
		Global_89779 = 1;
		if (iParam4 == 1)
		{
			unk_0x3DBE2A7AF9E71C82(&(Global_89784.f_20), 14);
		}
		else
		{
			unk_0xCD27BF29FB9012E2(&(Global_89784.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0x3DBE2A7AF9E71C82(&(Global_89784.f_20), 24);
		}
		else
		{
			unk_0xCD27BF29FB9012E2(&(Global_89784.f_20), 24);
		}
		func_264(1);
	}
}

int func_337()
{
	if (Global_89784 == 10 || Global_89784 == 9)
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
	iLocal_1046[0] = 0;
	iLocal_1046[1] = 0;
	iLocal_1046[2] = 0;
	Local_686[0 /*8*/] = { func_340("FP1_WANTM", "FP1_LOSTM", "FP1_THEREM", "FP1_CHATFM", "", "FP1_CHATTM") };
	Local_686[1 /*8*/] = { func_340("FP1_WANTT", "FP1_LOSTT", "FP1_THERET", "FP1_CHATFM", "FP1_CHATFT", "") };
	Local_686[2 /*8*/] = { func_340("FP1_WANTF", "FP1_LOSTF", "FP1_THEREF", "", "FP1_CHATFT", "FP1_CHATTM") };
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
	Local_132[0 /*25*/] = { func_343(1203.146f, -337.3543f, 67.9314f, 1245.118f, -348.5059f, 68.2099f, 253.1908f, 0) };
	func_342(&(Local_132[0 /*25*/]), Local_822, 0, 15f, 5f, 270f, 3, 1192.006f, -631.4703f, 61.6972f, 10f, 10f, 5f);
	Local_132[1 /*25*/] = { func_343(1215.084f, -339.3139f, 68.1323f, 964.9214f, -555.212f, 58.0211f, 39.645f, 0) };
	func_342(&(Local_132[1 /*25*/]), Local_822, 0, 15f, 10f, 270f, 3, 1103.29f, -764.532f, 56.633f, 10f, 10f, 5f);
	Local_132[2 /*25*/] = { func_343(1179.533f, -361.3286f, 67.4559f, 929.8701f, -619.4534f, 56.4632f, 164.3631f, 0) };
	func_342(&(Local_132[2 /*25*/]), Local_822, 0, 15f, 10f, 270f, 3, 933.3745f, -615.9453f, 56.3041f, 10f, 10f, 5f);
	Local_132[3 /*25*/] = { func_343(1107.674f, -364.0569f, 65.9581f, 1099.266f, -775.0809f, 57.3525f, 178.2038f, 0) };
	func_342(&(Local_132[3 /*25*/]), Local_822, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_132[4 /*25*/] = { func_343(1069.279f, -393.5795f, 66.0262f, 1065.364f, -389.9561f, 66.1504f, 220.1611f, 0) };
	func_342(&(Local_132[4 /*25*/]), Local_822, 0, 5f, 30f, 128.1732f, 3, 1069.718f, -393.9912f, 66.0261f, 10f, 10f, 5f);
	Local_132[5 /*25*/] = { func_343(1031.673f, -424.599f, 64.5439f, 1027.179f, -420.6656f, 64.6268f, 178.2038f, joaat("p_binbag_01_s")) };
	func_342(&(Local_132[5 /*25*/]), 1028.201f, -428.3677f, 64.3571f, 1, 15f, 2f, 128.3915f, 1, 1027.179f, -420.6656f, 64.6268f, 10f, 10f, 5f);
	Local_132[6 /*25*/] = { func_343(942.1528f, -488.8956f, 59.3129f, 932.0198f, -489.3886f, 58.9212f, 202.5785f, joaat("p_binbag_01_s")) };
	func_342(&(Local_132[6 /*25*/]), 930.7186f, -494.9253f, 58.616f, 1, 15f, 2f, 119.6518f, 1, 952.9781f, -482.5082f, 60.0003f, 10f, 10f, 5f);
	Local_132[7 /*25*/] = { func_343(868.2734f, -529.5473f, 56.2071f, 865.0042f, -522.4746f, 56.3363f, 241.9711f, joaat("p_binbag_01_s")) };
	func_342(&(Local_132[7 /*25*/]), 865.2349f, -535.8759f, 56.1574f, 1, 15f, 2f, 162.7219f, 1, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_132[8 /*25*/] = { func_343(874.8076f, -571.2073f, 56.2987f, 983.125f, -541.9902f, 58.5929f, 49.7653f, 0) };
	func_342(&(Local_132[8 /*25*/]), Local_822, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_132[9 /*25*/] = { func_343(931.5218f, -614.2144f, 56.3119f, 928.6471f, -620.711f, 56.4611f, -108.06f, joaat("p_binbag_01_s")) };
	func_342(&(Local_132[9 /*25*/]), 940.4086f, -622.1787f, 56.3003f, 1, 15f, 2f, 228.1176f, 1, 918.6716f, -602.9258f, 56.3395f, 10f, 10f, 5f);
	Local_132[10 /*25*/] = { func_343(964.9758f, -645.9614f, 56.4465f, 927.1033f, -575.4162f, 56.5329f, 55.9317f, 0) };
	func_342(&(Local_132[10 /*25*/]), Local_822, 0, 15f, 2f, 270f, 3, 1062.149f, -479.4801f, 62.9454f, 10f, 10f, 5f);
	Local_132[11 /*25*/] = { func_343(983.4438f, -683.1442f, 56.4087f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_342(&(Local_132[11 /*25*/]), Local_822, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_132[12 /*25*/] = { func_343(1016.261f, -731.546f, 56.555f, 1011.801f, -733.0652f, 56.7435f, 314.5626f, joaat("p_binbag_01_s")) };
	func_342(&(Local_132[12 /*25*/]), 1020.251f, -736.815f, 56.6235f, 1, 15f, 2f, 220.7804f, 1, 1011.238f, -724.7085f, 56.5183f, 10f, 10f, 5f);
	Local_132[13 /*25*/] = { func_343(1164.126f, -762.2866f, 56.6656f, 1099.342f, -775.4273f, 57.3525f, 177.5729f, 0) };
	func_342(&(Local_132[13 /*25*/]), Local_822, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_132[14 /*25*/] = { func_343(1199.339f, -678.0995f, 59.9051f, 1205.415f, -672.1282f, 60.1445f, 105.2374f, 0) };
	func_342(&(Local_132[14 /*25*/]), Local_822, 0, 15f, 2f, 12.1103f, 3, 1199.339f, -678.0995f, 59.9051f, 10f, 10f, 5f);
	Local_132[15 /*25*/] = { func_343(1183.445f, -582.9476f, 63.0962f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_342(&(Local_132[15 /*25*/]), Local_822, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_132[16 /*25*/] = { func_343(1192.479f, -485.1086f, 64.7195f, 1264.359f, -719.084f, 63.328f, 65.0519f, 0) };
	func_342(&(Local_132[16 /*25*/]), Local_822, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_132[17 /*25*/] = { func_343(1212.693f, -400.0532f, 67.0971f, 1284.109f, -676.728f, 65.0225f, 69.9898f, 0) };
	func_342(&(Local_132[17 /*25*/]), Local_822, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	Local_132[18 /*25*/] = { func_343(1114.573f, -232.3706f, 68.0949f, 929.3757f, -618.9091f, 56.4612f, 181.1844f, 0) };
	func_342(&(Local_132[18 /*25*/]), Local_822, 0, 15f, 2f, 270f, 3, 1149.136f, -981.231f, 45.0495f, 10f, 10f, 5f);
	iLocal_828 = 19;
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
	
	func_350(&uLocal_711);
	iVar0 = 0;
	while (iVar0 <= (iParam1 - 1))
	{
		func_349(&uLocal_711, *(uParam0[iVar0 /*3*/]));
		iVar0++;
	}
	func_348(&uLocal_711);
	func_346(&uLocal_763, &uLocal_711, 50f);
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
	Local_838 = { func_352(1200.61f, -344.2721f, 68.0424f, 269.2015f, joaat("s_m_y_garbage")) };
	Local_852 = { func_352(1202.42f, -341.6034f, 67.9378f, 273.1125f, joaat("s_m_y_garbage")) };
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
	Local_866 = { func_354(1203.146f, -337.3543f, 67.9314f, 189.7047f, joaat("trash")) };
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
	unk_0x941F924D5E9C2140(joaat("trash"), 0);
	unk_0x941F924D5E9C2140(joaat("towtruck"), 0);
	unk_0x941F924D5E9C2140(joaat("s_m_y_garbage"), 0);
	func_61();
	func_365();
	func_364();
	func_356(0);
	unk_0x883793591E631A3B();
}

void func_356(bool bParam0)
{
	struct<3> Var0;
	
	if (bParam0)
	{
	}
	unk_0xFAAA53BBE1EEF174(unk_0xAF65E5A58BE87D95(), 1, 0);
	unk_0xF81DFFDCEDAA4951("DRIVE", 1);
	unk_0xF81DFFDCEDAA4951("WORLD_VEHICLE_ATTRACTOR", 1);
	unk_0xF81DFFDCEDAA4951("WORLD_VEHICLE_DRIVE_PASSENGERS", 1);
	unk_0xF81DFFDCEDAA4951("WORLD_VEHICLE_DRIVE_SOLO", 1);
	func_37();
	func_363();
	func_362();
	func_361();
	func_360();
	func_215();
	if (bParam0)
	{
		if (unk_0xFD68187442384158(iLocal_872))
		{
			if (unk_0xFD68187442384158(unk_0x507DA4994C3D8EBD()))
			{
				if (!unk_0x9F94F2CFDCA78C55(unk_0x507DA4994C3D8EBD()))
				{
					if (unk_0x53170344050F2301(unk_0x507DA4994C3D8EBD(), iLocal_872, 0))
					{
						Var0 = { unk_0xBF1B13057E5119A4(unk_0x507DA4994C3D8EBD(), 1) };
						unk_0xF85858E5CBF4D9F0(unk_0x507DA4994C3D8EBD(), Var0, 1, 0, 0, 1);
					}
				}
			}
		}
		func_358();
		unk_0x3DF5706BBD8F5B5B();
		func_2();
	}
	else
	{
		func_357();
	}
	unk_0x215D5A45803F79DC(0);
	func_138(&uLocal_669, 0, 0);
	if (unk_0x17D71902CA06091B(uLocal_821))
	{
		unk_0x92931D2249E68921(0, 0, 3000, 1, 0, 0);
		unk_0x44151B6071157DDD(uLocal_821, 0);
	}
}

void func_357()
{
	func_3();
	func_6(&Local_866);
	func_6(&uLocal_873);
	func_6(&iLocal_872);
	func_5(&Local_838, 1, 0, 1);
	func_5(&Local_852, 1, 0, 1);
	func_6(&uLocal_874);
}

void func_358()
{
	Global_14558 = 0;
	func_359();
}

void func_359()
{
	unk_0xA2A4AD85BA2F7ADD();
	Global_16703 = 0;
	if (unk_0xF611D1BB58990143())
	{
		unk_0xD858EC6FECDB4B3F(false);
		Global_15692 = 6;
	}
}

void func_360()
{
}

void func_361()
{
	if (iLocal_835)
	{
		unk_0x3F5DB12BA017912F(joaat("trash"));
	}
}

void func_362()
{
}

void func_363()
{
	unk_0xFF467904A8A12BBE(Local_866.f_5);
}

void func_364()
{
	func_323(21, 1, 0);
}

void func_365()
{
	Global_86044 = 0;
}

void func_366(int iParam0)
{
	Global_87495 = iParam0;
}

void func_367()
{
	int iVar0;
	
	if (unk_0x4C903C3B660A5023("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_97173.f_7311 || func_32(0))
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
				unk_0x3DBE2A7AF9E71C82(&(Global_80941[iVar0 /*5*/].f_1), 5);
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
	if (((Global_89784 == 13 || Global_89784 == 10) || Global_89784 == 11) || Global_89784 == 12)
	{
		return 0;
	}
	return 1;
}

