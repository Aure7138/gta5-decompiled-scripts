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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
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
	var uLocal_56 = 8;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 2;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 8;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 8;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	float fLocal_86 = 0f;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	struct<53> Local_106 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<527> Local_159 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_686 = -1;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = -1082130432;
	var uLocal_708 = 3;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
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
	var uLocal_731 = -1;
	var uLocal_732 = -1;
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
	var uLocal_753 = -1082130432;
	var uLocal_754 = 3;
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
	var uLocal_777 = -1;
	var uLocal_778 = -1;
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
	var uLocal_799 = -1082130432;
	var uLocal_800 = 3;
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
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = -1;
	var uLocal_824 = -1;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = -1082130432;
	var uLocal_846 = 3;
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
	var uLocal_869 = -1;
	var uLocal_870 = -1;
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
	var uLocal_891 = -1082130432;
	var uLocal_892 = 3;
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
	var uLocal_915 = -1;
	var uLocal_916 = -1;
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
	var uLocal_937 = -1082130432;
	var uLocal_938 = 3;
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
	var uLocal_961 = -1;
	var uLocal_962 = -1;
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
	var uLocal_983 = -1082130432;
	var uLocal_984 = 3;
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
	var uLocal_1007 = -1;
	var uLocal_1008 = -1;
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
	var uLocal_1029 = -1082130432;
	var uLocal_1030 = 3;
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
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = -1;
	var uLocal_1054 = -1;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = -1082130432;
	var uLocal_1076 = 3;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = -1;
	var uLocal_1100 = -1;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = -1082130432;
	var uLocal_1122 = 3;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = -1;
	var uLocal_1146 = -1;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = -1082130432;
	var uLocal_1168 = 3;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = -1;
	var uLocal_1192 = -1;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = -1082130432;
	var uLocal_1214 = 3;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = -1;
	var uLocal_1238 = -1;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = -1082130432;
	var uLocal_1260 = 3;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = -1;
	var uLocal_1284 = -1;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = -1082130432;
	var uLocal_1306 = 3;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = -1;
	var uLocal_1330 = -1;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = -1082130432;
	var uLocal_1352 = 3;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = -1;
	var uLocal_1376 = -1;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = -1082130432;
	var uLocal_1398 = 3;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = -1;
	var uLocal_1422 = -1;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = -1082130432;
	var uLocal_1444 = 3;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = -1;
	var uLocal_1468 = -1;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = -1082130432;
	var uLocal_1490 = 3;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = -1;
	var uLocal_1514 = -1;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = -1082130432;
	var uLocal_1536 = 3;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = -1;
	var uLocal_1560 = -1;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = -1082130432;
	var uLocal_1582 = 3;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = -1;
	var uLocal_1606 = -1;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = -1082130432;
	var uLocal_1628 = 3;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = -1;
	var uLocal_1652 = -1;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = -1082130432;
	var uLocal_1674 = 3;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = -1;
	var uLocal_1698 = -1;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = -1082130432;
	var uLocal_1720 = 3;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = -1;
	var uLocal_1744 = -1;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = -1082130432;
	var uLocal_1766 = 3;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = -1;
	var uLocal_1790 = -1;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = -1082130432;
	var uLocal_1812 = 3;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = -1;
	var uLocal_1836 = -1;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = -1082130432;
	var uLocal_1858 = 3;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = -1;
	var uLocal_1882 = -1;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = -1082130432;
	var uLocal_1904 = 3;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = -1;
	var uLocal_1928 = -1;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = -1082130432;
	var uLocal_1950 = 3;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = -1;
	var uLocal_1974 = -1;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = -1082130432;
	var uLocal_1996 = 3;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = -1;
	var uLocal_2020 = -1;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = -1082130432;
	var uLocal_2042 = 3;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = -1;
	var uLocal_2066 = -1;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = -1082130432;
	var uLocal_2088 = 3;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = -1;
	var uLocal_2112 = -1;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = -1082130432;
	var uLocal_2134 = 3;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = -1;
	struct<7> Local_2158[32];
	struct<12> Local_2383 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_86 = ((0.05f + 0.275f) - 0.01f);
	iLocal_104 = -1;
	iLocal_105 = -1;
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (!func_490(ScriptParam_0))
		{
			func_463();
		}
	}
	while (true)
	{
		func_462();
		if (func_454() || func_453())
		{
			func_463();
		}
		func_434();
		switch (func_433(unk_0x065E5245E0BD74E4()))
		{
			case 0:
				if (func_432() == 1)
				{
					if (func_431())
					{
						func_430(unk_0x065E5245E0BD74E4(), 1);
					}
				}
				break;
			
			case 1:
				if (func_432() == 1)
				{
					func_37();
				}
				else if (func_432() == 3)
				{
					func_430(unk_0x065E5245E0BD74E4(), 3);
				}
				break;
			
			case 3:
				func_463();
				break;
		}
		if (unk_0xE9849174628A9C50())
		{
			switch (func_432())
			{
				case 0:
					if (func_36())
					{
						func_35(1);
					}
					break;
				
				case 1:
					if (Local_106.f_37 == 5)
					{
						func_35(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_89, 1000, 0))
					{
						func_35(3);
					}
					break;
				
				case 3:
					func_463();
					break;
				}
		}
	}
}

int func_1(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_2(uParam0, bParam2, 0);
	if (unk_0x1DAD7CE53BEE7710() && !bParam2)
	{
		if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x045E73D0141F51B4(unk_0xF001CC441E445DFD(unk_0x09560C7DE2A384BD(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1DAD7CE53BEE7710() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x519586565311459B();
			}
			else
			{
				*uParam0 = unk_0x4EAB1171B13C220B();
			}
		}
		else
		{
			*uParam0 = unk_0x09560C7DE2A384BD();
		}
		uParam0->f_1 = 1;
	}
}

void func_3()
{
	if (func_17(2, 0, 0, 0, 0))
	{
		if (!unk_0x889D01384B54BCE3(Local_106.f_1, 0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Local_106.f_1), 0);
			Local_106.f_2 = unk_0x519586565311459B();
		}
	}
	switch (Local_106.f_37)
	{
		case 0:
			func_16(1);
			break;
		
		case 1:
			if (func_1(&(Local_106.f_43), Global_262145.f_8857, 0) || unk_0x889D01384B54BCE3(Local_106.f_1, 0))
			{
				func_16(2);
			}
			break;
		
		case 2:
			Local_106.f_38 = unk_0x519586565311459B();
			func_16(3);
			break;
		
		case 3:
			if (func_1(&(Local_106.f_39), func_15(), 0) || unk_0x889D01384B54BCE3(Local_106.f_1, 0))
			{
				Local_106.f_2 = unk_0x519586565311459B();
				func_16(4);
			}
			func_11();
			func_7(&iLocal_105, &iLocal_104);
			break;
		
		case 4:
			if ((func_1(&(Local_106.f_41), 20000, 0) || Local_106.f_4[0] < 0) || func_4())
			{
				func_16(5);
			}
			break;
		
		case 5:
			break;
	}
}

int func_4()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < unk_0x3F202553F90D4442())
	{
		if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(iVar1)))
		{
			iVar2 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(iVar1));
			if (!func_5(iVar2))
			{
				if (!unk_0x889D01384B54BCE3(Local_2158[iVar1 /*7*/].f_1, 1) || Local_2158[iVar1 /*7*/].f_2 != 5)
				{
					return 0;
				}
				else if (unk_0x889D01384B54BCE3(Local_2158[iVar1 /*7*/].f_1, 0))
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_5(int iParam0)
{
	if (func_6(iParam0))
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_1602607[iParam0 /*12*/].f_1, 8);
}

bool func_6(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_1602607[iParam0 /*12*/].f_1, 2);
}

void func_7(int iParam0, int iParam1)
{
	struct<14> Var0;
	var uVar14;
	
	if (*iParam0 >= 0 && *iParam1 >= 0)
	{
		uVar14 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(*iParam0));
		if (*iParam1 == 0)
		{
			Var0.f_2 = 164;
			Var0.f_10 = uVar14;
			func_8(Var0, func_9(1));
		}
	}
	*iParam0 = -1;
	*iParam1 = -1;
}

void func_8(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 0;
	Param0.f_1 = unk_0x1788E93557766241();
	if (!iParam14 == 0)
	{
		unk_0xD311A006D41D0704(1, &Param0, 14, iParam14);
	}
}

int func_9(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x3F202553F90D4442())
	{
		if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(iVar1)))
		{
			iVar2 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(iVar1));
			if (func_10(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x1788E93557766241() || iParam0)
				{
					unk_0xD0E2BFCE93AE3ABD(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_10(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (unk_0x38FA37FE3518BA38(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x2AF80829930084FD(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422491.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_11()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x3F202553F90D4442())
	{
		if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(iVar0)))
		{
			unk_0xD0E2BFCE93AE3ABD(&iVar3, iVar0);
		}
		else
		{
			func_14(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x3F202553F90D4442())
	{
		if (unk_0x889D01384B54BCE3(iVar3, iVar0))
		{
			func_12(iVar0);
			unk_0xD0E2BFCE93AE3ABD(&(Local_106.f_45), iVar0);
			iVar1++;
			if (unk_0x889D01384B54BCE3(Local_2158[iVar0 /*7*/].f_1, 2))
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	if (iVar1 > Local_106.f_48)
	{
		Local_106.f_48 = iVar1;
	}
	else
	{
		Local_106.f_51 = (Local_106.f_48 - iVar1);
	}
	if (iVar2 > Local_106.f_52)
	{
		Local_106.f_52 = iVar2;
	}
}

void func_12(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = Local_2158[iParam0 /*7*/].f_3;
	iVar1 = Local_2158[iParam0 /*7*/].f_3.f_2;
	if (!unk_0x889D01384B54BCE3(Local_106.f_46, iParam0))
	{
		iVar2 = (Local_106.f_4[0] / 2);
		if (iVar0 >= iVar2)
		{
			Local_106.f_47++;
			unk_0xD0E2BFCE93AE3ABD(&(Local_106.f_46), iParam0);
		}
	}
	iVar4 = -2;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (Local_106.f_4[iVar3] == iParam0)
		{
			iVar3 = 32;
		}
		else if (iVar4 >= -1)
		{
			if (iVar4 >= 0)
			{
				func_13(&(Local_106.f_4[iVar3]), &iVar4);
			}
		}
		else if ((Local_106.f_4[iVar3] < 0 || iVar0 > Local_2158[Local_106.f_4[iVar3] /*7*/].f_3) || (iVar0 == Local_2158[Local_106.f_4[iVar3] /*7*/].f_3 && iVar1 > Local_2158[Local_106.f_4[iVar3] /*7*/].f_3.f_2))
		{
			iVar4 = Local_106.f_4[iVar3];
			if (iVar0 != 0)
			{
				iLocal_104 = iVar3;
				iLocal_105 = iParam0;
			}
			Local_106.f_4[iVar3] = iParam0;
			iVar5 = iVar3 + 1;
			while (iVar5 <= 31)
			{
				if (Local_106.f_4[iVar5] == iParam0)
				{
					Local_106.f_4[iVar5] = -1;
				}
				iVar5++;
			}
		}
		iVar3++;
	}
}

void func_13(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + *iParam1);
	*iParam1 = (*uParam0 - *iParam1);
	*uParam0 = (*uParam0 - *iParam1);
}

void func_14(int iParam0)
{
	int iVar0;
	
	if (unk_0x889D01384B54BCE3(Local_106.f_45, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_106.f_4[iVar0] == iParam0)
			{
				Local_106.f_4[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		unk_0x29DB79DD4D939B38(&(Local_106.f_46), iParam0);
		unk_0x29DB79DD4D939B38(&(Local_106.f_45), iParam0);
	}
}

int func_15()
{
	return Global_262145.f_8856;
}

void func_16(int iParam0)
{
	Local_106.f_37 = iParam0;
}

int func_17(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (unk_0x2E8B9FEEE576BA13() < iParam0)
	{
		if (bParam2)
		{
			func_25(sParam3, sParam4, 1);
		}
		if (func_24(26, -1))
		{
			func_21(26, -1);
		}
		return 1;
	}
	if (func_20(&(Global_1573734.f_18)))
	{
		if (!func_1(&(Global_1573734.f_18), 7500, 0))
		{
			return 0;
		}
		func_19(&(Global_1573734.f_18));
	}
	if (func_18())
	{
		if (bParam2)
		{
			func_25(sParam3, sParam4, 0);
		}
		if (func_24(26, -1))
		{
			func_21(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0x1BCC42769F2B1858() < iParam0)
	{
		if (bParam2)
		{
			func_25(sParam3, sParam4, 1);
		}
		if (func_24(26, -1))
		{
			func_21(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_18()
{
	return unk_0x889D01384B54BCE3(Global_1573734.f_1, 0);
}

void func_19(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_20(var uParam0)
{
	return uParam0->f_1;
}

void func_21(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_23();
	}
	switch (iParam0)
	{
		case 0:
			unk_0xD7E6FF46C7CE81D1(0, iParam1);
			break;
		
		default:
			uVar1 = func_22(iParam1);
			iVar0 = unk_0x7058289E8DD601D6(uVar1);
			if (unk_0x889D01384B54BCE3(iVar0, iParam0))
			{
				unk_0x29DB79DD4D939B38(&iVar0, iParam0);
				unk_0xD7E6FF46C7CE81D1(iVar0, iParam1);
			}
			break;
	}
}

int func_22(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_23();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

int func_23()
{
	return Global_1312729;
}

bool func_24(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_23();
	}
	uVar0 = func_22(iParam1);
	uVar1 = unk_0x7058289E8DD601D6(uVar0);
	return unk_0x889D01384B54BCE3(uVar1, iParam0);
}

void func_25(char* sParam0, char* sParam1, bool bParam2)
{
	if (!unk_0x889D01384B54BCE3(Global_1573734.f_1, 2) && !func_6(unk_0x1788E93557766241()))
	{
		if (unk_0x06771AF7795B3ECF(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0x06771AF7795B3ECF(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_26(65, sParam0, sParam1, 1, -1, 2);
		unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 2);
	}
}

int func_26(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<70> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_69 = -1;
	func_33(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_65 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_66 = iParam5;
	return func_27(&Var0);
}

int func_27(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2422491.f_2418)
		{
			return 0;
		}
	}
	func_32(uParam0);
	func_29(uParam0);
	if (func_28(uParam0->f_1))
	{
		if (Global_2422491.f_2136[0 /*70*/].f_2 == 0)
		{
			Global_2422491.f_2136[0 /*70*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2422491.f_2136[0 /*70*/].f_1 == 13 || Global_2422491.f_2136[0 /*70*/].f_1 == 52) || Global_2422491.f_2136[0 /*70*/].f_1 == 53) || Global_2422491.f_2136[0 /*70*/].f_1 == 57)
		{
			Global_2422491.f_2136[0 /*70*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2422491.f_2136[iVar0 + 1 /*70*/] = { Global_2422491.f_2136[iVar0 /*70*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2422491.f_2136[1 /*70*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2422491.f_2136[iVar0 /*70*/].f_2 == 0)
		{
			Global_2422491.f_2136[iVar0 /*70*/] = { *uParam0 };
			return 1;
		}
		else if (uParam0->f_1 == 1)
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_2422491.f_2136[iVar0 /*70*/].f_63), 1);
			Global_2422491.f_2136[iVar0 /*70*/].f_2 = 5;
		}
		iVar0++;
	}
	return 0;
}

int func_28(int iParam0)
{
	if ((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 55) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10)
	{
		return 1;
	}
	return 0;
}

void func_29(var uParam0)
{
	if (func_31(uParam0->f_1))
	{
		uParam0->f_66 = func_30();
	}
}

int func_30()
{
	return 21;
}

int func_31(int iParam0)
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

void func_32(var uParam0)
{
	if (func_31(uParam0->f_1))
	{
		uParam0->f_67 = 1;
	}
}

void func_33(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_34();
	uParam1->f_17 = func_34();
	uParam1->f_18 = func_34();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_19), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_65 = 1;
	uParam1->f_67 = 0;
	StringCopy(&(uParam1->f_23), "", 64);
	StringCopy(&(uParam1->f_39), "", 64);
}

int func_34()
{
	return -1;
}

void func_35(int iParam0)
{
	Local_106.f_0 = iParam0;
}

int func_36()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_106.f_4[iVar0] = -1;
		iVar0++;
	}
	func_19(&(Local_106.f_39));
	return 1;
}

void func_37()
{
	func_427();
	if (func_425())
	{
		func_335();
	}
	if (func_334(unk_0x1788E93557766241()) || func_333(unk_0x1788E93557766241()))
	{
		func_332();
	}
	if (!func_5(unk_0x1788E93557766241()))
	{
		if (func_323())
		{
			if (unk_0x889D01384B54BCE3(iLocal_92, 3))
			{
				unk_0x29DB79DD4D939B38(&iLocal_92, 3);
			}
			switch (Local_2158[unk_0x044A481E863E2F6B() /*7*/].f_2)
			{
				case 0:
					if (Local_106.f_37 > 0)
					{
						func_322(1);
						func_321(1);
					}
					break;
				
				case 1:
					if (!unk_0x889D01384B54BCE3(iLocal_103, 2))
					{
						if (!unk_0xF1F4C42EF94F5FDD())
						{
							func_320("AMBC_WARN", 30000);
							func_319(0);
							unk_0xC2E1777941B4536E(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
							unk_0xD0E2BFCE93AE3ABD(&iLocal_103, 2);
						}
					}
					if (Local_106.f_37 >= 2)
					{
						func_321(2);
					}
					func_317((Global_262145.f_8857 - func_318(&(Local_106.f_43), 0, 0)));
					func_315(func_316((Global_262145.f_8857 - func_318(&(Local_106.f_43), 0, 0)), 0), "HUD_STARTING");
					break;
				
				case 2:
					if (Local_106.f_37 > 2)
					{
						func_314();
						func_322(0);
						func_297(144, 0f, 0f, 0, 0, 0, 0);
						func_26(62, "AMBC_TITLE", "AMBC_BIG_START", func_30(), -1, func_30());
						func_321(3);
						Local_2383.f_9 = unk_0x5C7391B560C251C7();
						Local_2383.f_8 = unk_0x5C7391B560C251C7();
					}
					break;
				
				case 3:
					if (Local_106.f_37 > 3)
					{
						func_321(4);
					}
					else
					{
						if (unk_0x889D01384B54BCE3(iLocal_92, 0))
						{
							unk_0x29DB79DD4D939B38(&iLocal_92, 0);
						}
						func_295();
						func_287();
						func_271();
						if (func_269(0) && !func_268(0))
						{
							func_267();
						}
						func_266();
					}
					func_265();
					func_242();
					func_335();
					break;
				
				case 4:
					if (func_236(&uLocal_94, !unk_0x889D01384B54BCE3(Local_106.f_1, 0)) || unk_0x889D01384B54BCE3(Local_106.f_1, 0))
					{
						func_321(5);
					}
					func_229();
					func_154();
					func_242();
					func_335();
					func_153();
					break;
				
				case 5:
					break;
			}
		}
		else
		{
			func_152();
		}
	}
	else
	{
		func_332();
		func_152();
	}
	func_139();
	func_38();
}

void func_38()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x889D01384B54BCE3(iLocal_92, 4))
	{
		if (func_136())
		{
			if (!unk_0x889D01384B54BCE3(iLocal_92, 5))
			{
				unk_0xD0E2BFCE93AE3ABD(&iLocal_92, 5);
			}
		}
		else if (unk_0x889D01384B54BCE3(iLocal_92, 5))
		{
			unk_0x29DB79DD4D939B38(&iLocal_92, 5);
			unk_0x29DB79DD4D939B38(&iLocal_92, 4);
		}
	}
	if (!unk_0x889D01384B54BCE3(iLocal_92, 4))
	{
		if (func_10(unk_0x1788E93557766241(), 1, 1) && !func_134(unk_0x1788E93557766241(), 0))
		{
			iVar0 = unk_0xA16EC202D9D35357();
			iVar1 = unk_0xA609E58449080951(iVar0);
			iVar2 = (iVar2 + func_39(iVar1, iVar0, 11, -1));
			iVar2 = (iVar2 + func_39(iVar1, iVar0, 4, -1));
			iVar2 = (iVar2 + func_39(iVar1, iVar0, 6, -1));
			iVar2 = (iVar2 + func_39(iVar1, iVar0, 1, -1));
			iVar2 = (iVar2 + func_39(iVar1, iVar0, 7, -1));
			iVar2 = (iVar2 + func_39(iVar1, iVar0, 8, -1));
			iVar2 = (iVar2 + func_39(iVar1, iVar0, 14, 0));
			iVar2 = (iVar2 + func_39(iVar1, iVar0, 14, 6));
			iVar2 = (iVar2 + func_39(iVar1, iVar0, 14, 7));
			iVar2 = (iVar2 + func_39(iVar1, iVar0, 14, 1));
			iVar2 = (iVar2 + func_39(iVar1, iVar0, 14, 2));
			Local_2158[unk_0x044A481E863E2F6B() /*7*/].f_6 = iVar2;
			unk_0xD0E2BFCE93AE3ABD(&iLocal_92, 4);
		}
	}
}

int func_39(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	struct<4> Var3;
	
	iVar0 = func_111(iParam1, iParam2, iParam3);
	Global_68186[0 /*14*/] = { func_58(iParam0, iParam2, iVar0) };
	uVar1 = Global_68186[0 /*14*/].f_7;
	bVar2 = unk_0x889D01384B54BCE3(Global_68186[0 /*14*/].f_6, 6);
	Var3 = { Global_68186[0 /*14*/].f_8 };
	func_40(&Var3, &uVar1, bVar2, iParam0, iVar0, iParam2, iParam3);
	return uVar1;
}

void func_40(char* sParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = unk_0xB793F1A0B6CC4AE1(sParam0);
	func_57(iVar0, uParam1);
	func_56(iVar0, uParam1);
	func_55(iVar0, uParam1);
	func_54(iVar0, uParam1);
	func_53(iVar0, uParam1);
	func_52(iVar0, uParam1);
	func_51(iVar0, uParam1);
	func_50(iVar0, uParam1);
	func_49(iVar0, uParam1);
	func_48(iVar0, uParam1);
	func_47(iVar0, uParam1);
	if (bParam2)
	{
		switch (Global_2621445)
		{
			case joaat("CU_VAL_CLOTHES"):
				*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_4945));
				break;
			
			case joaat("CU_INDI_CLOTHES"):
				if (iParam5 == 14 && iParam6 == 0)
				{
					*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6142));
				}
				else
				{
					*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
				}
				break;
			}
	}
	switch (iParam5)
	{
		case 10:
			if (iVar0 == joaat("D_FMM_1_0"))
			{
				*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_2906));
			}
			else if (iVar0 == joaat("D_FMM_2_0"))
			{
				*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_2907));
			}
			break;
		
		case 1:
			if (iParam3 == joaat("mp_m_freemode_01"))
			{
				*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_271302.f_22));
			}
			else if (iParam3 == joaat("mp_f_freemode_01"))
			{
				*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_271302.f_29));
			}
			break;
		
		case 4:
			if (iParam3 == joaat("mp_m_freemode_01"))
			{
				*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_271302.f_15));
			}
			else if (iParam3 == joaat("mp_f_freemode_01"))
			{
				*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_271302.f_23));
			}
			break;
		
		case 6:
			if (iParam3 == joaat("mp_m_freemode_01"))
			{
				*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_271302.f_17));
			}
			else if (iParam3 == joaat("mp_f_freemode_01"))
			{
				*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_271302.f_25));
			}
			break;
		
		case 11:
		case 8:
			if (iParam3 == joaat("mp_m_freemode_01"))
			{
				*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_271302.f_16));
			}
			else if (iParam3 == joaat("mp_f_freemode_01"))
			{
				*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_271302.f_24));
			}
			break;
		
		case 7:
			if (iParam3 == joaat("mp_m_freemode_01"))
			{
				*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_271302.f_57));
			}
			else if (iParam3 == joaat("mp_f_freemode_01"))
			{
				*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_271302.f_58));
			}
			break;
		
		case 14:
			switch (iParam6)
			{
				case 1:
					if (iParam3 == joaat("mp_m_freemode_01"))
					{
						*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_271302.f_20));
					}
					else if (iParam3 == joaat("mp_f_freemode_01"))
					{
						*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_271302.f_56));
					}
					break;
				
				case 0:
					if (func_46(iParam3, iParam5, iParam4))
					{
						if (iParam3 == joaat("mp_m_freemode_01"))
						{
							*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_271302.f_19));
						}
						else if (iParam3 == joaat("mp_f_freemode_01"))
						{
							*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_271302.f_27));
						}
					}
					else if (func_41(iParam3, iParam5, iParam4))
					{
						if (iParam3 == joaat("mp_m_freemode_01"))
						{
							*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_271302.f_18));
						}
						else if (iParam3 == joaat("mp_f_freemode_01"))
						{
							*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_271302.f_26));
						}
					}
					break;
				
				case 6:
					if (iParam3 == joaat("mp_m_freemode_01"))
					{
						*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_271302.f_21));
					}
					else if (iParam3 == joaat("mp_f_freemode_01"))
					{
						*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_271302.f_28));
					}
					break;
			}
			break;
	}
	*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_62));
}

int func_41(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						return (unk_0xFC16329269277970(func_42(iParam0, iParam2, 14, 3), joaat("HAT"), 1) || unk_0xFC16329269277970(func_42(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (unk_0xFC16329269277970(func_42(iParam0, iParam2, 1, 3), joaat("HAT"), 0) || unk_0xFC16329269277970(func_42(iParam0, iParam2, 1, 3), -1842686353, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						return (unk_0xFC16329269277970(func_42(iParam0, iParam2, 14, 4), joaat("HAT"), 1) || unk_0xFC16329269277970(func_42(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (unk_0xFC16329269277970(func_42(iParam0, iParam2, 1, 4), joaat("HAT"), 0) || unk_0xFC16329269277970(func_42(iParam0, iParam2, 1, 4), -1842686353, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_42(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0xBDDDC429ACE48471(&Var0);
		iVar18 = 0;
		iVar19 = (iParam1 - func_45(iParam0));
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = unk_0x4E1A2A59E4ACC278(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			unk_0x5CB214386FBD4468(iVar17, &Var0);
			if (!unk_0xA90142E282A42D80(Var0.f_0))
			{
				if (iVar18 == iVar19)
				{
					return Var0.f_1;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0xC10C2D9EE1DAEA41(&Var21);
		iVar39 = 0;
		iVar40 = (iParam1 - func_43(iParam0, func_44(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		iVar41 = unk_0x4E1A2A59E4ACC278(iParam3, 6, -1, 0, -1, func_44(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			unk_0xA3CC695797E69C26(iVar38, &Var21);
			if (!unk_0xA90142E282A42D80(Var21.f_0))
			{
				if (iVar39 == iVar40)
				{
					return Var21.f_1;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	return -1;
}

int func_43(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

int func_46(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0xFC16329269277970(func_42(iParam0, iParam2, 14, 3), joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0xFC16329269277970(func_42(iParam0, iParam2, 14, 4), joaat("HELMET"), 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

void func_47(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case -1240410684:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8527));
			break;
		
		case -1069815270:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8528));
			break;
		
		case 1384418989:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8529));
			break;
		
		case 1555473169:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8530));
			break;
		
		case 1860650866:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8531));
			break;
		
		case 1658007398:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8532));
			break;
		
		case 1801470080:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8533));
			break;
		
		case 2120148605:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8534));
			break;
		
		case 689060833:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8535));
			break;
		
		case 938727844:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8536));
			break;
		
		case -432621986:
			if (Global_262145.f_8297 >= 0)
			{
				*uParam1 = Global_262145.f_8297;
			}
			break;
		
		case -122102934:
			if (Global_262145.f_8298 >= 0)
			{
				*uParam1 = Global_262145.f_8298;
			}
			break;
		
		case 107214528:
			if (Global_262145.f_8299 >= 0)
			{
				*uParam1 = Global_262145.f_8299;
			}
			break;
		
		case 1024975915:
			if (Global_262145.f_8300 >= 0)
			{
				*uParam1 = Global_262145.f_8300;
			}
			break;
		
		case -352239621:
			if (Global_262145.f_8301 >= 0)
			{
				*uParam1 = Global_262145.f_8301;
			}
			break;
		
		case 136584438:
			if (Global_262145.f_8302 >= 0)
			{
				*uParam1 = Global_262145.f_8302;
			}
			break;
		
		case -1111881697:
			if (Global_262145.f_8303 >= 0)
			{
				*uParam1 = Global_262145.f_8303;
			}
			break;
		
		case -458664451:
			if (Global_262145.f_8304 >= 0)
			{
				*uParam1 = Global_262145.f_8304;
			}
			break;
		
		case 871789686:
			if (Global_262145.f_8305 >= 0)
			{
				*uParam1 = Global_262145.f_8305;
			}
			break;
		
		case 581610409:
			if (Global_262145.f_8324 >= 0)
			{
				*uParam1 = Global_262145.f_8324;
			}
			break;
		
		case 878989084:
			if (Global_262145.f_8325 >= 0)
			{
				*uParam1 = Global_262145.f_8325;
			}
			break;
		
		case 1044341458:
			if (Global_262145.f_8326 >= 0)
			{
				*uParam1 = Global_262145.f_8326;
			}
			break;
		
		case -793442377:
			if (Global_262145.f_8327 >= 0)
			{
				*uParam1 = Global_262145.f_8327;
			}
			break;
		
		case -913245849:
			if (Global_262145.f_8328 >= 0)
			{
				*uParam1 = Global_262145.f_8328;
			}
			break;
		
		case 1525521442:
			if (Global_262145.f_8329 >= 0)
			{
				*uParam1 = Global_262145.f_8329;
			}
			break;
		
		case 1712501356:
			if (Global_262145.f_8330 >= 0)
			{
				*uParam1 = Global_262145.f_8330;
			}
			break;
		
		case 2010732025:
			if (Global_262145.f_8331 >= 0)
			{
				*uParam1 = Global_262145.f_8331;
			}
			break;
		
		case -2111739255:
			if (Global_262145.f_8332 >= 0)
			{
				*uParam1 = Global_262145.f_8332;
			}
			break;
		
		case 334106140:
			if (Global_262145.f_8333 >= 0)
			{
				*uParam1 = Global_262145.f_8333;
			}
			break;
		
		case 519593690:
			if (Global_262145.f_8334 >= 0)
			{
				*uParam1 = Global_262145.f_8334;
			}
			break;
		
		case 734984327:
			if (Global_262145.f_8335 >= 0)
			{
				*uParam1 = Global_262145.f_8335;
			}
			break;
		
		case 980555213:
			if (Global_262145.f_8336 >= 0)
			{
				*uParam1 = Global_262145.f_8336;
			}
			break;
		
		case 1465077647:
			if (Global_262145.f_8337 >= 0)
			{
				*uParam1 = Global_262145.f_8337;
			}
			break;
		
		case 1696852784:
			if (Global_262145.f_8338 >= 0)
			{
				*uParam1 = Global_262145.f_8338;
			}
			break;
		
		case 1453608509:
			if (Global_262145.f_8339 >= 0)
			{
				*uParam1 = Global_262145.f_8339;
			}
			break;
		
		case 1319368475:
			if (Global_262145.f_8295 >= 0)
			{
				*uParam1 = Global_262145.f_8295;
			}
			break;
		
		case -147044267:
			if (Global_262145.f_8296 >= 0)
			{
				*uParam1 = Global_262145.f_8296;
			}
			break;
		
		case -450781807:
			if (Global_262145.f_8340 >= 0)
			{
				*uParam1 = Global_262145.f_8340;
			}
			break;
		
		case 694167053:
			if (Global_262145.f_8341 >= 0)
			{
				*uParam1 = Global_262145.f_8341;
			}
			break;
		
		case -1924720002:
			if (Global_262145.f_8342 >= 0)
			{
				*uParam1 = Global_262145.f_8342;
			}
			break;
		
		case -1611022365:
			if (Global_262145.f_8343 >= 0)
			{
				*uParam1 = Global_262145.f_8343;
			}
			break;
		
		case -1122028310:
			if (Global_262145.f_8344 >= 0)
			{
				*uParam1 = Global_262145.f_8344;
			}
			break;
		
		case 201478831:
			if (Global_262145.f_8345 >= 0)
			{
				*uParam1 = Global_262145.f_8345;
			}
			break;
		
		case 1478087802:
			if (Global_262145.f_8346 >= 0)
			{
				*uParam1 = Global_262145.f_8346;
			}
			break;
		
		case 162183069:
			if (Global_262145.f_8347 >= 0)
			{
				*uParam1 = Global_262145.f_8347;
			}
			break;
		
		case -1924297703:
			if (Global_262145.f_8348 >= 0)
			{
				*uParam1 = Global_262145.f_8348;
			}
			break;
		
		case 234491248:
			if (Global_262145.f_8349 >= 0)
			{
				*uParam1 = Global_262145.f_8349;
			}
			break;
		
		case 1201832985:
			if (Global_262145.f_8350 >= 0)
			{
				*uParam1 = Global_262145.f_8350;
			}
			break;
		
		case 1442783442:
			if (Global_262145.f_8351 >= 0)
			{
				*uParam1 = Global_262145.f_8351;
			}
			break;
		
		case 1652194306:
			if (Global_262145.f_8352 >= 0)
			{
				*uParam1 = Global_262145.f_8352;
			}
			break;
		
		case 2100932992:
			if (Global_262145.f_8353 >= 0)
			{
				*uParam1 = Global_262145.f_8353;
			}
			break;
		
		case -1047471654:
			if (Global_262145.f_8354 >= 0)
			{
				*uParam1 = Global_262145.f_8354;
			}
			break;
		
		case -1285341825:
			if (Global_262145.f_8355 >= 0)
			{
				*uParam1 = Global_262145.f_8355;
			}
			break;
		
		case -227884296:
			if (Global_262145.f_8356 >= 0)
			{
				*uParam1 = Global_262145.f_8356;
			}
			break;
		
		case 531176820:
			if (Global_262145.f_8357 >= 0)
			{
				*uParam1 = Global_262145.f_8357;
			}
			break;
		
		case -196803354:
			if (Global_262145.f_8358 >= 0)
			{
				*uParam1 = Global_262145.f_8358;
			}
			break;
		
		case 510941508:
			if (Global_262145.f_8359 >= 0)
			{
				*uParam1 = Global_262145.f_8359;
			}
			break;
		
		case 388886345:
			if (Global_262145.f_8360 >= 0)
			{
				*uParam1 = Global_262145.f_8360;
			}
			break;
		
		case 1827150524:
			if (Global_262145.f_8361 >= 0)
			{
				*uParam1 = Global_262145.f_8361;
			}
			break;
		
		case 2054305232:
			if (Global_262145.f_8362 >= 0)
			{
				*uParam1 = Global_262145.f_8362;
			}
			break;
		
		case 1081229777:
			if (Global_262145.f_8363 >= 0)
			{
				*uParam1 = Global_262145.f_8363;
			}
			break;
		
		case 1575582911:
			if (Global_262145.f_8364 >= 0)
			{
				*uParam1 = Global_262145.f_8364;
			}
			break;
		
		case -1819056106:
			if (Global_262145.f_8365 >= 0)
			{
				*uParam1 = Global_262145.f_8365;
			}
			break;
		
		case -1117793421:
			if (Global_262145.f_8366 >= 0)
			{
				*uParam1 = Global_262145.f_8366;
			}
			break;
		
		case -1293500799:
			if (Global_262145.f_8367 >= 0)
			{
				*uParam1 = Global_262145.f_8367;
			}
			break;
		
		case 1068582029:
			if (Global_262145.f_8368 >= 0)
			{
				*uParam1 = Global_262145.f_8368;
			}
			break;
		
		case -862495145:
			if (Global_262145.f_8369 >= 0)
			{
				*uParam1 = Global_262145.f_8369;
			}
			break;
		
		case 1715796414:
			if (Global_262145.f_8370 >= 0)
			{
				*uParam1 = Global_262145.f_8370;
			}
			break;
		
		case 1401803856:
			if (Global_262145.f_8371 >= 0)
			{
				*uParam1 = Global_262145.f_8371;
			}
			break;
		
		case -1009858011:
			if (Global_262145.f_8372 >= 0)
			{
				*uParam1 = Global_262145.f_8372;
			}
			break;
		
		case -166941024:
			if (Global_262145.f_8373 >= 0)
			{
				*uParam1 = Global_262145.f_8373;
			}
			break;
		
		case -529431702:
			if (Global_262145.f_8374 >= 0)
			{
				*uParam1 = Global_262145.f_8374;
			}
			break;
		
		case 1591541875:
			if (Global_262145.f_8375 >= 0)
			{
				*uParam1 = Global_262145.f_8375;
			}
			break;
		
		case -1379238056:
			if (Global_262145.f_8376 >= 0)
			{
				*uParam1 = Global_262145.f_8376;
			}
			break;
		
		case 1628628466:
			if (Global_262145.f_8377 >= 0)
			{
				*uParam1 = Global_262145.f_8377;
			}
			break;
		
		case 1319256337:
			if (Global_262145.f_8378 >= 0)
			{
				*uParam1 = Global_262145.f_8378;
			}
			break;
		
		case -1268314991:
			if (Global_262145.f_8379 >= 0)
			{
				*uParam1 = Global_262145.f_8379;
			}
			break;
		
		case -1215115900:
			if (Global_262145.f_8380 >= 0)
			{
				*uParam1 = Global_262145.f_8380;
			}
			break;
		
		case -1046224474:
			if (Global_262145.f_8381 >= 0)
			{
				*uParam1 = Global_262145.f_8381;
			}
			break;
		
		case -1680271855:
			if (Global_262145.f_8382 >= 0)
			{
				*uParam1 = Global_262145.f_8382;
			}
			break;
		
		case -1506858307:
			if (Global_262145.f_8383 >= 0)
			{
				*uParam1 = Global_262145.f_8383;
			}
			break;
		
		case -2023733014:
			if (Global_262145.f_8384 >= 0)
			{
				*uParam1 = Global_262145.f_8384;
			}
			break;
		
		case 959065215:
			if (Global_262145.f_8385 >= 0)
			{
				*uParam1 = Global_262145.f_8385;
			}
			break;
		
		case -904417873:
			if (Global_262145.f_8386 >= 0)
			{
				*uParam1 = Global_262145.f_8386;
			}
			break;
		
		case -1283948431:
			if (Global_262145.f_8387 >= 0)
			{
				*uParam1 = Global_262145.f_8387;
			}
			break;
		
		case 1864956770:
			if (Global_262145.f_8388 >= 0)
			{
				*uParam1 = Global_262145.f_8388;
			}
			break;
		
		case 1552143896:
			if (Global_262145.f_8389 >= 0)
			{
				*uParam1 = Global_262145.f_8389;
			}
			break;
		
		case 981278544:
			if (Global_262145.f_8390 >= 0)
			{
				*uParam1 = Global_262145.f_8390;
			}
			break;
		
		case -1597412377:
			if (Global_262145.f_8391 >= 0)
			{
				*uParam1 = Global_262145.f_8391;
			}
			break;
		
		case -1893611368:
			if (Global_262145.f_8392 >= 0)
			{
				*uParam1 = Global_262145.f_8392;
			}
			break;
		
		case -280916393:
			if (Global_262145.f_8393 >= 0)
			{
				*uParam1 = Global_262145.f_8393;
			}
			break;
		
		case -1152047493:
			if (Global_262145.f_8394 >= 0)
			{
				*uParam1 = Global_262145.f_8394;
			}
			break;
		
		case -838448163:
			if (Global_262145.f_8395 >= 0)
			{
				*uParam1 = Global_262145.f_8395;
			}
			break;
		
		case 24121229:
			if (Global_262145.f_8396 >= 0)
			{
				*uParam1 = Global_262145.f_8396;
			}
			break;
		
		case 790162142:
			if (Global_262145.f_8397 >= 0)
			{
				*uParam1 = Global_262145.f_8397;
			}
			break;
		
		case -1448910863:
			if (Global_262145.f_8398 >= 0)
			{
				*uParam1 = Global_262145.f_8398;
			}
			break;
		
		case -1135411531:
			if (Global_262145.f_8399 >= 0)
			{
				*uParam1 = Global_262145.f_8399;
			}
			break;
		
		case -1912430059:
			if (Global_262145.f_8400 >= 0)
			{
				*uParam1 = Global_262145.f_8400;
			}
			break;
		
		case -691579011:
			if (Global_262145.f_8401 >= 0)
			{
				*uParam1 = Global_262145.f_8401;
			}
			break;
		
		case -456002670:
			if (Global_262145.f_8402 >= 0)
			{
				*uParam1 = Global_262145.f_8402;
			}
			break;
		
		case 1001361121:
			if (Global_262145.f_8403 >= 0)
			{
				*uParam1 = Global_262145.f_8403;
			}
			break;
		
		case -1350338937:
			if (Global_262145.f_8404 >= 0)
			{
				*uParam1 = Global_262145.f_8404;
			}
			break;
		
		case -2099896223:
			if (Global_262145.f_8405 >= 0)
			{
				*uParam1 = Global_262145.f_8405;
			}
			break;
		
		case 1963361474:
			if (Global_262145.f_8406 >= 0)
			{
				*uParam1 = Global_262145.f_8406;
			}
			break;
		
		case -1475548506:
			if (Global_262145.f_8407 >= 0)
			{
				*uParam1 = Global_262145.f_8407;
			}
			break;
		
		case 548153713:
			if (Global_262145.f_8408 >= 0)
			{
				*uParam1 = Global_262145.f_8408;
			}
			break;
		
		case 257558221:
			if (Global_262145.f_8409 >= 0)
			{
				*uParam1 = Global_262145.f_8409;
			}
			break;
		
		case -306953346:
			if (Global_262145.f_8410 >= 0)
			{
				*uParam1 = Global_262145.f_8410;
			}
			break;
		
		case 385753141:
			if (Global_262145.f_8411 >= 0)
			{
				*uParam1 = Global_262145.f_8411;
			}
			break;
		
		case 177899374:
			if (Global_262145.f_8412 >= 0)
			{
				*uParam1 = Global_262145.f_8412;
			}
			break;
		
		case -2025324345:
			if (Global_262145.f_8413 >= 0)
			{
				*uParam1 = Global_262145.f_8413;
			}
			break;
		
		case -1311826888:
			if (Global_262145.f_8414 >= 0)
			{
				*uParam1 = Global_262145.f_8414;
			}
			break;
		
		case 574258445:
			if (Global_262145.f_8415 >= 0)
			{
				*uParam1 = Global_262145.f_8415;
			}
			break;
		
		case 275569010:
			if (Global_262145.f_8416 >= 0)
			{
				*uParam1 = Global_262145.f_8416;
			}
			break;
		
		case -425780560:
			if (Global_262145.f_8417 >= 0)
			{
				*uParam1 = Global_262145.f_8417;
			}
			break;
		
		case 355235798:
			if (Global_262145.f_8418 >= 0)
			{
				*uParam1 = Global_262145.f_8418;
			}
			break;
		
		case -488467645:
			if (Global_262145.f_8419 >= 0)
			{
				*uParam1 = Global_262145.f_8419;
			}
			break;
		
		case 1675453571:
			if (Global_262145.f_8420 >= 0)
			{
				*uParam1 = Global_262145.f_8420;
			}
			break;
		
		case 1462455071:
			if (Global_262145.f_8421 >= 0)
			{
				*uParam1 = Global_262145.f_8421;
			}
			break;
		
		case -1987301400:
			if (Global_262145.f_8422 >= 0)
			{
				*uParam1 = Global_262145.f_8422;
			}
			break;
		
		case 1571154417:
			if (Global_262145.f_8423 >= 0)
			{
				*uParam1 = Global_262145.f_8423;
			}
			break;
		
		case -2098711435:
			if (Global_262145.f_8424 >= 0)
			{
				*uParam1 = Global_262145.f_8424;
			}
			break;
		
		case -206793192:
			if (Global_262145.f_8425 >= 0)
			{
				*uParam1 = Global_262145.f_8425;
			}
			break;
		
		case 1408495883:
			if (Global_262145.f_8426 >= 0)
			{
				*uParam1 = Global_262145.f_8426;
			}
			break;
		
		case 833727623:
			if (Global_262145.f_8427 >= 0)
			{
				*uParam1 = Global_262145.f_8427;
			}
			break;
		
		case 584781530:
			if (Global_262145.f_8428 >= 0)
			{
				*uParam1 = Global_262145.f_8428;
			}
			break;
		
		case 819585751:
			if (Global_262145.f_8312 >= 0)
			{
				*uParam1 = Global_262145.f_8312;
			}
			break;
		
		case 200775955:
			if (Global_262145.f_8313 >= 0)
			{
				*uParam1 = Global_262145.f_8313;
			}
			break;
		
		case 506805646:
			if (Global_262145.f_8314 >= 0)
			{
				*uParam1 = Global_262145.f_8314;
			}
			break;
		
		case 872976219:
			if (Global_262145.f_8315 >= 0)
			{
				*uParam1 = Global_262145.f_8315;
			}
			break;
		
		case -1602557890:
			if (Global_262145.f_8316 >= 0)
			{
				*uParam1 = Global_262145.f_8316;
			}
			break;
		
		case 1304117952:
			if (Global_262145.f_8317 >= 0)
			{
				*uParam1 = Global_262145.f_8317;
			}
			break;
		
		case 1141190484:
			if (Global_262145.f_8318 >= 0)
			{
				*uParam1 = Global_262145.f_8318;
			}
			break;
		
		case -103998747:
			if (Global_262145.f_8319 >= 0)
			{
				*uParam1 = Global_262145.f_8319;
			}
			break;
		
		case 204980154:
			if (Global_262145.f_8320 >= 0)
			{
				*uParam1 = Global_262145.f_8320;
			}
			break;
		
		case -1056593577:
			if (Global_262145.f_8321 >= 0)
			{
				*uParam1 = Global_262145.f_8321;
			}
			break;
		
		case 649950405:
			if (Global_262145.f_8322 >= 0)
			{
				*uParam1 = Global_262145.f_8322;
			}
			break;
		
		case -989244421:
			if (Global_262145.f_8323 >= 0)
			{
				*uParam1 = Global_262145.f_8323;
			}
			break;
		
		case -1484941084:
			if (Global_262145.f_8306 >= 0)
			{
				*uParam1 = Global_262145.f_8306;
			}
			break;
		
		case 431226195:
			if (Global_262145.f_8307 >= 0)
			{
				*uParam1 = Global_262145.f_8307;
			}
			break;
		
		case 128014638:
			if (Global_262145.f_8308 >= 0)
			{
				*uParam1 = Global_262145.f_8308;
			}
			break;
		
		case -105595563:
			if (Global_262145.f_8309 >= 0)
			{
				*uParam1 = Global_262145.f_8309;
			}
			break;
		
		case 1317955335:
			if (Global_262145.f_8310 >= 0)
			{
				*uParam1 = Global_262145.f_8310;
			}
			break;
		
		case 1080511161:
			if (Global_262145.f_8311 >= 0)
			{
				*uParam1 = Global_262145.f_8311;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("CLO_L2F_O_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8537));
			break;
		
		case joaat("CLO_L2F_O_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8538));
			break;
		
		case joaat("CLO_L2F_O_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8539));
			break;
		
		case joaat("CLO_L2F_O_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8540));
			break;
		
		case joaat("CLO_L2F_O_4"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8541));
			break;
		
		case joaat("CLO_L2F_O_5"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8542));
			break;
		
		case joaat("CLO_L2F_O_6"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8543));
			break;
		
		case joaat("CLO_L2F_O_7"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8544));
			break;
		
		case joaat("CLO_L2F_O_8"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8545));
			break;
		
		case joaat("CLO_L2F_O_9"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8546));
			break;
		
		case joaat("CLO_L2F_U_1_0"):
			if (Global_262145.f_8429 >= 0)
			{
				*uParam1 = Global_262145.f_8429;
			}
			break;
		
		case joaat("CLO_L2F_U_2_0"):
			if (Global_262145.f_8430 >= 0)
			{
				*uParam1 = Global_262145.f_8430;
			}
			break;
		
		case joaat("CLO_L2F_U_2_1"):
			if (Global_262145.f_8431 >= 0)
			{
				*uParam1 = Global_262145.f_8431;
			}
			break;
		
		case joaat("CLO_L2F_U_2_2"):
			if (Global_262145.f_8432 >= 0)
			{
				*uParam1 = Global_262145.f_8432;
			}
			break;
		
		case joaat("CLO_L2F_U_2_3"):
			if (Global_262145.f_8433 >= 0)
			{
				*uParam1 = Global_262145.f_8433;
			}
			break;
		
		case joaat("CLO_L2F_U_2_4"):
			if (Global_262145.f_8434 >= 0)
			{
				*uParam1 = Global_262145.f_8434;
			}
			break;
		
		case joaat("CLO_L2F_U_7_0"):
			if (Global_262145.f_8453 >= 0)
			{
				*uParam1 = Global_262145.f_8453;
			}
			break;
		
		case joaat("CLO_L2F_U_7_1"):
			if (Global_262145.f_8454 >= 0)
			{
				*uParam1 = Global_262145.f_8454;
			}
			break;
		
		case joaat("CLO_L2F_U_7_2"):
			if (Global_262145.f_8455 >= 0)
			{
				*uParam1 = Global_262145.f_8455;
			}
			break;
		
		case joaat("CLO_L2F_U_7_3"):
			if (Global_262145.f_8456 >= 0)
			{
				*uParam1 = Global_262145.f_8456;
			}
			break;
		
		case joaat("CLO_L2F_U_7_4"):
			if (Global_262145.f_8457 >= 0)
			{
				*uParam1 = Global_262145.f_8457;
			}
			break;
		
		case joaat("CLO_L2F_U_7_5"):
			if (Global_262145.f_8458 >= 0)
			{
				*uParam1 = Global_262145.f_8458;
			}
			break;
		
		case joaat("CLO_L2F_U_7_6"):
			if (Global_262145.f_8459 >= 0)
			{
				*uParam1 = Global_262145.f_8459;
			}
			break;
		
		case joaat("CLO_L2F_U_7_7"):
			if (Global_262145.f_8460 >= 0)
			{
				*uParam1 = Global_262145.f_8460;
			}
			break;
		
		case joaat("CLO_L2F_U_7_8"):
			if (Global_262145.f_8461 >= 0)
			{
				*uParam1 = Global_262145.f_8461;
			}
			break;
		
		case joaat("CLO_L2F_U_7_9"):
			if (Global_262145.f_8462 >= 0)
			{
				*uParam1 = Global_262145.f_8462;
			}
			break;
		
		case joaat("CLO_L2F_U_7_10"):
			if (Global_262145.f_8463 >= 0)
			{
				*uParam1 = Global_262145.f_8463;
			}
			break;
		
		case joaat("CLO_L2F_U_7_11"):
			if (Global_262145.f_8464 >= 0)
			{
				*uParam1 = Global_262145.f_8464;
			}
			break;
		
		case joaat("CLO_L2F_U_7_12"):
			if (Global_262145.f_8465 >= 0)
			{
				*uParam1 = Global_262145.f_8465;
			}
			break;
		
		case joaat("CLO_L2F_U_7_13"):
			if (Global_262145.f_8466 >= 0)
			{
				*uParam1 = Global_262145.f_8466;
			}
			break;
		
		case joaat("CLO_L2F_U_7_14"):
			if (Global_262145.f_8467 >= 0)
			{
				*uParam1 = Global_262145.f_8467;
			}
			break;
		
		case joaat("CLO_L2F_U_7_15"):
			if (Global_262145.f_8468 >= 0)
			{
				*uParam1 = Global_262145.f_8468;
			}
			break;
		
		case joaat("CLO_L2F_L_1_0"):
			if (Global_262145.f_8469 >= 0)
			{
				*uParam1 = Global_262145.f_8469;
			}
			break;
		
		case joaat("CLO_L2F_L_1_1"):
			if (Global_262145.f_8470 >= 0)
			{
				*uParam1 = Global_262145.f_8470;
			}
			break;
		
		case joaat("CLO_L2F_L_1_2"):
			if (Global_262145.f_8471 >= 0)
			{
				*uParam1 = Global_262145.f_8471;
			}
			break;
		
		case joaat("CLO_L2F_L_1_3"):
			if (Global_262145.f_8472 >= 0)
			{
				*uParam1 = Global_262145.f_8472;
			}
			break;
		
		case joaat("CLO_L2F_L_1_4"):
			if (Global_262145.f_8473 >= 0)
			{
				*uParam1 = Global_262145.f_8473;
			}
			break;
		
		case joaat("CLO_L2F_T_0_0"):
			if (Global_262145.f_8474 >= 0)
			{
				*uParam1 = Global_262145.f_8474;
			}
			break;
		
		case joaat("CLO_L2F_T_0_1"):
			if (Global_262145.f_8475 >= 0)
			{
				*uParam1 = Global_262145.f_8475;
			}
			break;
		
		case joaat("CLO_L2F_T_1_0"):
			if (Global_262145.f_8476 >= 0)
			{
				*uParam1 = Global_262145.f_8476;
			}
			break;
		
		case joaat("CLO_L2F_T_1_1"):
			if (Global_262145.f_8477 >= 0)
			{
				*uParam1 = Global_262145.f_8477;
			}
			break;
		
		case joaat("CLO_L2F_T_2_0"):
			if (Global_262145.f_8478 >= 0)
			{
				*uParam1 = Global_262145.f_8478;
			}
			break;
		
		case joaat("CLO_L2F_T_2_1"):
			if (Global_262145.f_8479 >= 0)
			{
				*uParam1 = Global_262145.f_8479;
			}
			break;
		
		case joaat("CLO_L2F_T_3_0"):
			if (Global_262145.f_8480 >= 0)
			{
				*uParam1 = Global_262145.f_8480;
			}
			break;
		
		case joaat("CLO_L2F_T_3_1"):
			if (Global_262145.f_8481 >= 0)
			{
				*uParam1 = Global_262145.f_8481;
			}
			break;
		
		case joaat("CLO_L2F_T_4_0"):
			if (Global_262145.f_8482 >= 0)
			{
				*uParam1 = Global_262145.f_8482;
			}
			break;
		
		case joaat("CLO_L2F_T_4_1"):
			if (Global_262145.f_8483 >= 0)
			{
				*uParam1 = Global_262145.f_8483;
			}
			break;
		
		case joaat("CLO_L2F_T_5_0"):
			if (Global_262145.f_8484 >= 0)
			{
				*uParam1 = Global_262145.f_8484;
			}
			break;
		
		case joaat("CLO_L2F_T_5_1"):
			if (Global_262145.f_8485 >= 0)
			{
				*uParam1 = Global_262145.f_8485;
			}
			break;
		
		case joaat("CLO_L2F_T_6_0"):
			if (Global_262145.f_8486 >= 0)
			{
				*uParam1 = Global_262145.f_8486;
			}
			break;
		
		case joaat("CLO_L2F_T_6_1"):
			if (Global_262145.f_8487 >= 0)
			{
				*uParam1 = Global_262145.f_8487;
			}
			break;
		
		case joaat("CLO_L2F_T_7_0"):
			if (Global_262145.f_8488 >= 0)
			{
				*uParam1 = Global_262145.f_8488;
			}
			break;
		
		case joaat("CLO_L2F_T_7_1"):
			if (Global_262145.f_8489 >= 0)
			{
				*uParam1 = Global_262145.f_8489;
			}
			break;
		
		case joaat("CLO_L2F_T_8_0"):
			if (Global_262145.f_8490 >= 0)
			{
				*uParam1 = Global_262145.f_8490;
			}
			break;
		
		case joaat("CLO_L2F_T_8_1"):
			if (Global_262145.f_8491 >= 0)
			{
				*uParam1 = Global_262145.f_8491;
			}
			break;
		
		case joaat("CLO_L2F_T_9_0"):
			if (Global_262145.f_8492 >= 0)
			{
				*uParam1 = Global_262145.f_8492;
			}
			break;
		
		case joaat("CLO_L2F_T_9_1"):
			if (Global_262145.f_8493 >= 0)
			{
				*uParam1 = Global_262145.f_8493;
			}
			break;
		
		case joaat("CLO_L2F_T_13_0"):
			if (Global_262145.f_8494 >= 0)
			{
				*uParam1 = Global_262145.f_8494;
			}
			break;
		
		case joaat("CLO_L2F_T_13_1"):
			if (Global_262145.f_8495 >= 0)
			{
				*uParam1 = Global_262145.f_8495;
			}
			break;
		
		case joaat("CLO_L2F_T_13_2"):
			if (Global_262145.f_8496 >= 0)
			{
				*uParam1 = Global_262145.f_8496;
			}
			break;
		
		case joaat("CLO_L2F_T_13_3"):
			if (Global_262145.f_8497 >= 0)
			{
				*uParam1 = Global_262145.f_8497;
			}
			break;
		
		case joaat("CLO_L2F_T_13_4"):
			if (Global_262145.f_8498 >= 0)
			{
				*uParam1 = Global_262145.f_8498;
			}
			break;
		
		case joaat("CLO_L2F_T_13_5"):
			if (Global_262145.f_8499 >= 0)
			{
				*uParam1 = Global_262145.f_8499;
			}
			break;
		
		case joaat("CLO_L2F_H_0_0"):
			if (Global_262145.f_8500 >= 0)
			{
				*uParam1 = Global_262145.f_8500;
			}
			break;
		
		case joaat("CLO_L2F_H_0_1"):
			if (Global_262145.f_8501 >= 0)
			{
				*uParam1 = Global_262145.f_8501;
			}
			break;
		
		case joaat("CLO_L2F_H_0_2"):
			if (Global_262145.f_8502 >= 0)
			{
				*uParam1 = Global_262145.f_8502;
			}
			break;
		
		case joaat("CLO_L2F_H_0_3"):
			if (Global_262145.f_8503 >= 0)
			{
				*uParam1 = Global_262145.f_8503;
			}
			break;
		
		case joaat("CLO_L2F_H_0_4"):
			if (Global_262145.f_8504 >= 0)
			{
				*uParam1 = Global_262145.f_8504;
			}
			break;
		
		case joaat("CLO_L2F_H_0_5"):
			if (Global_262145.f_8505 >= 0)
			{
				*uParam1 = Global_262145.f_8505;
			}
			break;
		
		case joaat("CLO_L2F_H_0_6"):
			if (Global_262145.f_8506 >= 0)
			{
				*uParam1 = Global_262145.f_8506;
			}
			break;
		
		case joaat("CLO_L2F_H_0_7"):
			if (Global_262145.f_8507 >= 0)
			{
				*uParam1 = Global_262145.f_8507;
			}
			break;
		
		case joaat("CLO_L2F_LW_2_0"):
			if (Global_262145.f_8508 >= 0)
			{
				*uParam1 = Global_262145.f_8508;
			}
			break;
		
		case joaat("CLO_L2F_LW_2_1"):
			if (Global_262145.f_8509 >= 0)
			{
				*uParam1 = Global_262145.f_8509;
			}
			break;
		
		case joaat("CLO_L2F_LW_2_2"):
			if (Global_262145.f_8510 >= 0)
			{
				*uParam1 = Global_262145.f_8510;
			}
			break;
		
		case joaat("CLO_L2F_LW_3_0"):
			if (Global_262145.f_8511 >= 0)
			{
				*uParam1 = Global_262145.f_8511;
			}
			break;
		
		case joaat("CLO_L2F_LW_3_1"):
			if (Global_262145.f_8512 >= 0)
			{
				*uParam1 = Global_262145.f_8512;
			}
			break;
		
		case joaat("CLO_L2F_LW_3_2"):
			if (Global_262145.f_8513 >= 0)
			{
				*uParam1 = Global_262145.f_8513;
			}
			break;
		
		case joaat("CLO_L2F_LW_4_0"):
			if (Global_262145.f_8514 >= 0)
			{
				*uParam1 = Global_262145.f_8514;
			}
			break;
		
		case joaat("CLO_L2F_LW_4_1"):
			if (Global_262145.f_8515 >= 0)
			{
				*uParam1 = Global_262145.f_8515;
			}
			break;
		
		case joaat("CLO_L2F_LW_4_2"):
			if (Global_262145.f_8516 >= 0)
			{
				*uParam1 = Global_262145.f_8516;
			}
			break;
		
		case joaat("CLO_L2F_LW_7_0"):
			if (Global_262145.f_8517 >= 0)
			{
				*uParam1 = Global_262145.f_8517;
			}
			break;
		
		case joaat("CLO_L2F_LW_7_1"):
			if (Global_262145.f_8518 >= 0)
			{
				*uParam1 = Global_262145.f_8518;
			}
			break;
		
		case joaat("CLO_L2F_LW_7_2"):
			if (Global_262145.f_8519 >= 0)
			{
				*uParam1 = Global_262145.f_8519;
			}
			break;
		
		case joaat("CLO_L2F_RW_0_0"):
			if (Global_262145.f_8520 >= 0)
			{
				*uParam1 = Global_262145.f_8520;
			}
			break;
		
		case joaat("CLO_L2F_RW_1_0"):
			if (Global_262145.f_8521 >= 0)
			{
				*uParam1 = Global_262145.f_8521;
			}
			break;
		
		case joaat("CLO_L2F_RW_2_0"):
			if (Global_262145.f_8522 >= 0)
			{
				*uParam1 = Global_262145.f_8522;
			}
			break;
		
		case joaat("CLO_L2F_RW_3_0"):
			if (Global_262145.f_8523 >= 0)
			{
				*uParam1 = Global_262145.f_8523;
			}
			break;
		
		case joaat("CLO_L2F_RW_4_0"):
			if (Global_262145.f_8524 >= 0)
			{
				*uParam1 = Global_262145.f_8524;
			}
			break;
		
		case joaat("CLO_L2F_RW_5_0"):
			if (Global_262145.f_8525 >= 0)
			{
				*uParam1 = Global_262145.f_8525;
			}
			break;
		
		case joaat("CLO_L2F_RW_6_0"):
			if (Global_262145.f_8526 >= 0)
			{
				*uParam1 = Global_262145.f_8526;
			}
			break;
		
		case joaat("CLO_L2F_DEC_6"):
			if (Global_262145.f_8435 >= 0)
			{
				*uParam1 = Global_262145.f_8435;
			}
			break;
		
		case joaat("CLO_L2F_DEC_7"):
			if (Global_262145.f_8436 >= 0)
			{
				*uParam1 = Global_262145.f_8436;
			}
			break;
		
		case joaat("CLO_L2F_DEC_8"):
			if (Global_262145.f_8437 >= 0)
			{
				*uParam1 = Global_262145.f_8437;
			}
			break;
		
		case joaat("CLO_L2F_DEC_9"):
			if (Global_262145.f_8438 >= 0)
			{
				*uParam1 = Global_262145.f_8438;
			}
			break;
		
		case joaat("CLO_L2F_DEC_10"):
			if (Global_262145.f_8439 >= 0)
			{
				*uParam1 = Global_262145.f_8439;
			}
			break;
		
		case joaat("CLO_L2F_DEC_11"):
			if (Global_262145.f_8440 >= 0)
			{
				*uParam1 = Global_262145.f_8440;
			}
			break;
		
		case joaat("CLO_L2F_DEC_14"):
			if (Global_262145.f_8441 >= 0)
			{
				*uParam1 = Global_262145.f_8441;
			}
			break;
		
		case joaat("CLO_L2F_DEC_15"):
			if (Global_262145.f_8442 >= 0)
			{
				*uParam1 = Global_262145.f_8442;
			}
			break;
		
		case joaat("CLO_L2F_DEC_16"):
			if (Global_262145.f_8443 >= 0)
			{
				*uParam1 = Global_262145.f_8443;
			}
			break;
		
		case joaat("CLO_L2F_DEC_17"):
			if (Global_262145.f_8444 >= 0)
			{
				*uParam1 = Global_262145.f_8444;
			}
			break;
		
		case joaat("CLO_L2F_DEC_18"):
			if (Global_262145.f_8445 >= 0)
			{
				*uParam1 = Global_262145.f_8445;
			}
			break;
		
		case joaat("CLO_L2F_DEC_19"):
			if (Global_262145.f_8446 >= 0)
			{
				*uParam1 = Global_262145.f_8446;
			}
			break;
		
		case joaat("CLO_L2F_DEC_20"):
			if (Global_262145.f_8447 >= 0)
			{
				*uParam1 = Global_262145.f_8447;
			}
			break;
		
		case joaat("CLO_L2F_DEC_21"):
			if (Global_262145.f_8448 >= 0)
			{
				*uParam1 = Global_262145.f_8448;
			}
			break;
		
		case joaat("CLO_L2F_DEC_24"):
			if (Global_262145.f_8449 >= 0)
			{
				*uParam1 = Global_262145.f_8449;
			}
			break;
		
		case joaat("CLO_L2F_DEC_25"):
			if (Global_262145.f_8450 >= 0)
			{
				*uParam1 = Global_262145.f_8450;
			}
			break;
		
		case joaat("CLO_L2F_DEC_26"):
			if (Global_262145.f_8451 >= 0)
			{
				*uParam1 = Global_262145.f_8451;
			}
			break;
		
		case joaat("CLO_L2F_DEC_27"):
			if (Global_262145.f_8452 >= 0)
			{
				*uParam1 = Global_262145.f_8452;
			}
			break;
	}
}

void func_48(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case -1545898329:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8210));
			break;
		
		case -1837837350:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8211));
			break;
		
		case 1853131738:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8212));
			break;
		
		case 1521902686:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8213));
			break;
		
		case 1221705877:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8214));
			break;
		
		case 1192803619:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8215));
			break;
		
		case 857576749:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8216));
			break;
		
		case 560525768:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8217));
			break;
		
		case 302142203:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8218));
			break;
		
		case -264171655:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8219));
			break;
		
		case 2126909094:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8220));
			break;
		
		case -1602924028:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8221));
			break;
		
		case 1588751002:
			if (Global_262145.f_7936 >= 0)
			{
				*uParam1 = Global_262145.f_7936;
			}
			break;
		
		case 1291339558:
			if (Global_262145.f_7937 >= 0)
			{
				*uParam1 = Global_262145.f_7937;
			}
			break;
		
		case 2067669937:
			if (Global_262145.f_7938 >= 0)
			{
				*uParam1 = Global_262145.f_7938;
			}
			break;
		
		case 2004687919:
			if (Global_262145.f_7939 >= 0)
			{
				*uParam1 = Global_262145.f_7939;
			}
			break;
		
		case -1510475484:
			if (Global_262145.f_7940 >= 0)
			{
				*uParam1 = Global_262145.f_7940;
			}
			break;
		
		case -1807100472:
			if (Global_262145.f_7941 >= 0)
			{
				*uParam1 = Global_262145.f_7941;
			}
			break;
		
		case 1075092502:
			if (Global_262145.f_7942 >= 0)
			{
				*uParam1 = Global_262145.f_7942;
			}
			break;
		
		case 984713582:
			if (Global_262145.f_7943 >= 0)
			{
				*uParam1 = Global_262145.f_7943;
			}
			break;
		
		case 75209987:
			if (Global_262145.f_7944 >= 0)
			{
				*uParam1 = Global_262145.f_7944;
			}
			break;
		
		case 1446199409:
			if (Global_262145.f_7945 >= 0)
			{
				*uParam1 = Global_262145.f_7945;
			}
			break;
		
		case 1315888:
			if (Global_262145.f_7946 >= 0)
			{
				*uParam1 = Global_262145.f_7946;
			}
			break;
		
		case 365576092:
			if (Global_262145.f_7947 >= 0)
			{
				*uParam1 = Global_262145.f_7947;
			}
			break;
		
		case 424265371:
			if (Global_262145.f_7948 >= 0)
			{
				*uParam1 = Global_262145.f_7948;
			}
			break;
		
		case 729803527:
			if (Global_262145.f_7949 >= 0)
			{
				*uParam1 = Global_262145.f_7949;
			}
			break;
		
		case -171114594:
			if (Global_262145.f_7950 >= 0)
			{
				*uParam1 = Global_262145.f_7950;
			}
			break;
		
		case -999088917:
			if (Global_262145.f_7951 >= 0)
			{
				*uParam1 = Global_262145.f_7951;
			}
			break;
		
		case -1908035439:
			if (Global_262145.f_7952 >= 0)
			{
				*uParam1 = Global_262145.f_7952;
			}
			break;
		
		case -546566269:
			if (Global_262145.f_7953 >= 0)
			{
				*uParam1 = Global_262145.f_7953;
			}
			break;
		
		case -381476047:
			if (Global_262145.f_7954 >= 0)
			{
				*uParam1 = Global_262145.f_7954;
			}
			break;
		
		case 330659273:
			if (Global_262145.f_7955 >= 0)
			{
				*uParam1 = Global_262145.f_7955;
			}
			break;
		
		case 487185756:
			if (Global_262145.f_7956 >= 0)
			{
				*uParam1 = Global_262145.f_7956;
			}
			break;
		
		case -1537774595:
			if (Global_262145.f_7957 >= 0)
			{
				*uParam1 = Global_262145.f_7957;
			}
			break;
		
		case 1921812584:
			if (Global_262145.f_7958 >= 0)
			{
				*uParam1 = Global_262145.f_7958;
			}
			break;
		
		case 2137760294:
			if (Global_262145.f_7959 >= 0)
			{
				*uParam1 = Global_262145.f_7959;
			}
			break;
		
		case 53302570:
			if (Global_262145.f_7960 >= 0)
			{
				*uParam1 = Global_262145.f_7960;
			}
			break;
		
		case 1298852260:
			if (Global_262145.f_7961 >= 0)
			{
				*uParam1 = Global_262145.f_7961;
			}
			break;
		
		case 1612353271:
			if (Global_262145.f_7962 >= 0)
			{
				*uParam1 = Global_262145.f_7962;
			}
			break;
		
		case 710288251:
			if (Global_262145.f_7963 >= 0)
			{
				*uParam1 = Global_262145.f_7963;
			}
			break;
		
		case 1015465948:
			if (Global_262145.f_7964 >= 0)
			{
				*uParam1 = Global_262145.f_7964;
			}
			break;
		
		case -180536998:
			if (Global_262145.f_7965 >= 0)
			{
				*uParam1 = Global_262145.f_7965;
			}
			break;
		
		case 119594273:
			if (Global_262145.f_7966 >= 0)
			{
				*uParam1 = Global_262145.f_7966;
			}
			break;
		
		case -767528099:
			if (Global_262145.f_7967 >= 0)
			{
				*uParam1 = Global_262145.f_7967;
			}
			break;
		
		case -493022182:
			if (Global_262145.f_7968 >= 0)
			{
				*uParam1 = Global_262145.f_7968;
			}
			break;
		
		case 766683716:
			if (Global_262145.f_7969 >= 0)
			{
				*uParam1 = Global_262145.f_7969;
			}
			break;
		
		case -643136303:
			if (Global_262145.f_7970 >= 0)
			{
				*uParam1 = Global_262145.f_7970;
			}
			break;
		
		case 190048291:
			if (Global_262145.f_7971 >= 0)
			{
				*uParam1 = Global_262145.f_7971;
			}
			break;
		
		case -32944754:
			if (Global_262145.f_7972 >= 0)
			{
				*uParam1 = Global_262145.f_7972;
			}
			break;
		
		case -1344753366:
			if (Global_262145.f_7973 >= 0)
			{
				*uParam1 = Global_262145.f_7973;
			}
			break;
		
		case -1570302393:
			if (Global_262145.f_7974 >= 0)
			{
				*uParam1 = Global_262145.f_7974;
			}
			break;
		
		case -959717616:
			if (Global_262145.f_7975 >= 0)
			{
				*uParam1 = Global_262145.f_7975;
			}
			break;
		
		case -650509440:
			if (Global_262145.f_7976 >= 0)
			{
				*uParam1 = Global_262145.f_7976;
			}
			break;
		
		case -351754467:
			if (Global_262145.f_7977 >= 0)
			{
				*uParam1 = Global_262145.f_7977;
			}
			break;
		
		case -281549889:
			if (Global_262145.f_7978 >= 0)
			{
				*uParam1 = Global_262145.f_7978;
			}
			break;
		
		case 1806720174:
			if (Global_262145.f_7979 >= 0)
			{
				*uParam1 = Global_262145.f_7979;
			}
			break;
		
		case 2045966643:
			if (Global_262145.f_7980 >= 0)
			{
				*uParam1 = Global_262145.f_7980;
			}
			break;
		
		case 135992709:
			if (Global_262145.f_7981 >= 0)
			{
				*uParam1 = Global_262145.f_7981;
			}
			break;
		
		case 477445689:
			if (Global_262145.f_7982 >= 0)
			{
				*uParam1 = Global_262145.f_7982;
			}
			break;
		
		case -1122402433:
			if (Global_262145.f_7983 >= 0)
			{
				*uParam1 = Global_262145.f_7983;
			}
			break;
		
		case -1028322513:
			if (Global_262145.f_7985 >= 0)
			{
				*uParam1 = Global_262145.f_7985;
			}
			break;
		
		case -798021981:
			if (Global_262145.f_7986 >= 0)
			{
				*uParam1 = Global_262145.f_7986;
			}
			break;
		
		case -847504039:
			if (Global_262145.f_7984 >= 0)
			{
				*uParam1 = Global_262145.f_7984;
			}
			break;
		
		case 1817631504:
			if (Global_262145.f_7987 >= 0)
			{
				*uParam1 = Global_262145.f_7987;
			}
			break;
		
		case 1438981714:
			if (Global_262145.f_7988 >= 0)
			{
				*uParam1 = Global_262145.f_7988;
			}
			break;
		
		case 962520450:
			if (Global_262145.f_7989 >= 0)
			{
				*uParam1 = Global_262145.f_7989;
			}
			break;
		
		case 657277215:
			if (Global_262145.f_7990 >= 0)
			{
				*uParam1 = Global_262145.f_7990;
			}
			break;
		
		case -1633046502:
			if (Global_262145.f_7991 >= 0)
			{
				*uParam1 = Global_262145.f_7991;
			}
			break;
		
		case -1116672600:
			if (Global_262145.f_7992 >= 0)
			{
				*uParam1 = Global_262145.f_7992;
			}
			break;
		
		case -2077557987:
			if (Global_262145.f_7993 >= 0)
			{
				*uParam1 = Global_262145.f_7993;
			}
			break;
		
		case 1895093425:
			if (Global_262145.f_7994 >= 0)
			{
				*uParam1 = Global_262145.f_7994;
			}
			break;
		
		case -908392832:
			if (Global_262145.f_7995 >= 0)
			{
				*uParam1 = Global_262145.f_7995;
			}
			break;
		
		case -124918811:
			if (Global_262145.f_7996 >= 0)
			{
				*uParam1 = Global_262145.f_7996;
			}
			break;
		
		case -1420539537:
			if (Global_262145.f_7997 >= 0)
			{
				*uParam1 = Global_262145.f_7997;
			}
			break;
		
		case 22468484:
			if (Global_262145.f_7998 >= 0)
			{
				*uParam1 = Global_262145.f_7998;
			}
			break;
		
		case -1693764424:
			if (Global_262145.f_7999 >= 0)
			{
				*uParam1 = Global_262145.f_7999;
			}
			break;
		
		case 1966336266:
			if (Global_262145.f_8000 >= 0)
			{
				*uParam1 = Global_262145.f_8000;
			}
			break;
		
		case -1297259516:
			if (Global_262145.f_8001 >= 0)
			{
				*uParam1 = Global_262145.f_8001;
			}
			break;
		
		case -1385145974:
			if (Global_262145.f_8002 >= 0)
			{
				*uParam1 = Global_262145.f_8002;
			}
			break;
		
		case -1606828259:
			if (Global_262145.f_8003 >= 0)
			{
				*uParam1 = Global_262145.f_8003;
			}
			break;
		
		case -1997303663:
			if (Global_262145.f_8004 >= 0)
			{
				*uParam1 = Global_262145.f_8004;
			}
			break;
		
		case 158798230:
			if (Global_262145.f_8005 >= 0)
			{
				*uParam1 = Global_262145.f_8005;
			}
			break;
		
		case -74091053:
			if (Global_262145.f_8006 >= 0)
			{
				*uParam1 = Global_262145.f_8006;
			}
			break;
		
		case -663408749:
			if (Global_262145.f_8007 >= 0)
			{
				*uParam1 = Global_262145.f_8007;
			}
			break;
		
		case -1045233137:
			if (Global_262145.f_8008 >= 0)
			{
				*uParam1 = Global_262145.f_8008;
			}
			break;
		
		case -1014194639:
			if (Global_262145.f_8009 >= 0)
			{
				*uParam1 = Global_262145.f_8009;
			}
			break;
		
		case -1417871823:
			if (Global_262145.f_8010 >= 0)
			{
				*uParam1 = Global_262145.f_8010;
			}
			break;
		
		case -1935949713:
			if (Global_262145.f_8011 >= 0)
			{
				*uParam1 = Global_262145.f_8011;
			}
			break;
		
		case -1277206041:
			if (Global_262145.f_8012 >= 0)
			{
				*uParam1 = Global_262145.f_8012;
			}
			break;
		
		case -1610794461:
			if (Global_262145.f_8013 >= 0)
			{
				*uParam1 = Global_262145.f_8013;
			}
			break;
		
		case -1882332520:
			if (Global_262145.f_8014 >= 0)
			{
				*uParam1 = Global_262145.f_8014;
			}
			break;
		
		case -32626073:
			if (Global_262145.f_8015 >= 0)
			{
				*uParam1 = Global_262145.f_8015;
			}
			break;
		
		case 164381155:
			if (Global_262145.f_8016 >= 0)
			{
				*uParam1 = Global_262145.f_8016;
			}
			break;
		
		case -1157020700:
			if (Global_262145.f_8017 >= 0)
			{
				*uParam1 = Global_262145.f_8017;
			}
			break;
		
		case -346020719:
			if (Global_262145.f_8018 >= 0)
			{
				*uParam1 = Global_262145.f_8018;
			}
			break;
		
		case -1945965022:
			if (Global_262145.f_8019 >= 0)
			{
				*uParam1 = Global_262145.f_8019;
			}
			break;
		
		case 2110837182:
			if (Global_262145.f_8020 >= 0)
			{
				*uParam1 = Global_262145.f_8020;
			}
			break;
		
		case -1975055154:
			if (Global_262145.f_8021 >= 0)
			{
				*uParam1 = Global_262145.f_8021;
			}
			break;
		
		case -1668206238:
			if (Global_262145.f_8022 >= 0)
			{
				*uParam1 = Global_262145.f_8022;
			}
			break;
		
		case 1827315643:
			if (Global_262145.f_8023 >= 0)
			{
				*uParam1 = Global_262145.f_8023;
			}
			break;
		
		case 2037922006:
			if (Global_262145.f_8024 >= 0)
			{
				*uParam1 = Global_262145.f_8024;
			}
			break;
		
		case -904504815:
			if (Global_262145.f_8025 >= 0)
			{
				*uParam1 = Global_262145.f_8025;
			}
			break;
		
		case 889097602:
			if (Global_262145.f_8026 >= 0)
			{
				*uParam1 = Global_262145.f_8026;
			}
			break;
		
		case 1119693055:
			if (Global_262145.f_8027 >= 0)
			{
				*uParam1 = Global_262145.f_8027;
			}
			break;
		
		case 423810571:
			if (Global_262145.f_8028 >= 0)
			{
				*uParam1 = Global_262145.f_8028;
			}
			break;
		
		case 897254052:
			if (Global_262145.f_8029 >= 0)
			{
				*uParam1 = Global_262145.f_8029;
			}
			break;
		
		case 1273769862:
			if (Global_262145.f_8030 >= 0)
			{
				*uParam1 = Global_262145.f_8030;
			}
			break;
		
		case 1513802787:
			if (Global_262145.f_8031 >= 0)
			{
				*uParam1 = Global_262145.f_8031;
			}
			break;
		
		case -1332903487:
			if (Global_262145.f_8032 >= 0)
			{
				*uParam1 = Global_262145.f_8032;
			}
			break;
		
		case -1498026478:
			if (Global_262145.f_8033 >= 0)
			{
				*uParam1 = Global_262145.f_8033;
			}
			break;
		
		case -1869458112:
			if (Global_262145.f_8034 >= 0)
			{
				*uParam1 = Global_262145.f_8034;
			}
			break;
		
		case -1531937412:
			if (Global_262145.f_8035 >= 0)
			{
				*uParam1 = Global_262145.f_8035;
			}
			break;
		
		case 1625244622:
			if (Global_262145.f_8036 >= 0)
			{
				*uParam1 = Global_262145.f_8036;
			}
			break;
		
		case -1825134468:
			if (Global_262145.f_8037 >= 0)
			{
				*uParam1 = Global_262145.f_8037;
			}
			break;
		
		case -2094688037:
			if (Global_262145.f_8038 >= 0)
			{
				*uParam1 = Global_262145.f_8038;
			}
			break;
		
		case -1241547122:
			if (Global_262145.f_8039 >= 0)
			{
				*uParam1 = Global_262145.f_8039;
			}
			break;
		
		case -1615310336:
			if (Global_262145.f_8040 >= 0)
			{
				*uParam1 = Global_262145.f_8040;
			}
			break;
		
		case -1174436240:
			if (Global_262145.f_8041 >= 0)
			{
				*uParam1 = Global_262145.f_8041;
			}
			break;
		
		case 948503433:
			if (Global_262145.f_8042 >= 0)
			{
				*uParam1 = Global_262145.f_8042;
			}
			break;
		
		case 1850371851:
			if (Global_262145.f_8043 >= 0)
			{
				*uParam1 = Global_262145.f_8043;
			}
			break;
		
		case 1885149598:
			if (Global_262145.f_8044 >= 0)
			{
				*uParam1 = Global_262145.f_8044;
			}
			break;
		
		case -1038664431:
			if (Global_262145.f_8045 >= 0)
			{
				*uParam1 = Global_262145.f_8045;
			}
			break;
		
		case -798434892:
			if (Global_262145.f_8046 >= 0)
			{
				*uParam1 = Global_262145.f_8046;
			}
			break;
		
		case 161576213:
			if (Global_262145.f_8047 >= 0)
			{
				*uParam1 = Global_262145.f_8047;
			}
			break;
		
		case -75278119:
			if (Global_262145.f_8048 >= 0)
			{
				*uParam1 = Global_262145.f_8048;
			}
			break;
		
		case -324551902:
			if (Global_262145.f_8049 >= 0)
			{
				*uParam1 = Global_262145.f_8049;
			}
			break;
		
		case -1589432326:
			if (Global_262145.f_8050 >= 0)
			{
				*uParam1 = Global_262145.f_8050;
			}
			break;
		
		case 1862224751:
			if (Global_262145.f_8051 >= 0)
			{
				*uParam1 = Global_262145.f_8051;
			}
			break;
		
		case 1404114131:
			if (Global_262145.f_8052 >= 0)
			{
				*uParam1 = Global_262145.f_8052;
			}
			break;
		
		case 2008256219:
			if (Global_262145.f_8053 >= 0)
			{
				*uParam1 = Global_262145.f_8053;
			}
			break;
		
		case 505240488:
			if (Global_262145.f_8054 >= 0)
			{
				*uParam1 = Global_262145.f_8054;
			}
			break;
		
		case 56436264:
			if (Global_262145.f_8055 >= 0)
			{
				*uParam1 = Global_262145.f_8055;
			}
			break;
		
		case -1414017599:
			if (Global_262145.f_8056 >= 0)
			{
				*uParam1 = Global_262145.f_8056;
			}
			break;
		
		case -1720047290:
			if (Global_262145.f_8057 >= 0)
			{
				*uParam1 = Global_262145.f_8057;
			}
			break;
		
		case 1197311242:
			if (Global_262145.f_8058 >= 0)
			{
				*uParam1 = Global_262145.f_8058;
			}
			break;
		
		case -702400674:
			if (Global_262145.f_8059 >= 0)
			{
				*uParam1 = Global_262145.f_8059;
			}
			break;
		
		case -613432839:
			if (Global_262145.f_8060 >= 0)
			{
				*uParam1 = Global_262145.f_8060;
			}
			break;
		
		case -113902203:
			if (Global_262145.f_8061 >= 0)
			{
				*uParam1 = Global_262145.f_8061;
			}
			break;
		
		case 2108084072:
			if (Global_262145.f_8062 >= 0)
			{
				*uParam1 = Global_262145.f_8062;
			}
			break;
		
		case -456909395:
			if (Global_262145.f_8063 >= 0)
			{
				*uParam1 = Global_262145.f_8063;
			}
			break;
		
		case 913555727:
			if (Global_262145.f_8064 >= 0)
			{
				*uParam1 = Global_262145.f_8064;
			}
			break;
		
		case 324888741:
			if (Global_262145.f_8065 >= 0)
			{
				*uParam1 = Global_262145.f_8065;
			}
			break;
		
		case 92130534:
			if (Global_262145.f_8066 >= 0)
			{
				*uParam1 = Global_262145.f_8066;
			}
			break;
		
		case -118836288:
			if (Global_262145.f_8067 >= 0)
			{
				*uParam1 = Global_262145.f_8067;
			}
			break;
		
		case -355854465:
			if (Global_262145.f_8068 >= 0)
			{
				*uParam1 = Global_262145.f_8068;
			}
			break;
		
		case -596641077:
			if (Global_262145.f_8069 >= 0)
			{
				*uParam1 = Global_262145.f_8069;
			}
			break;
		
		case 588684543:
			if (Global_262145.f_8070 >= 0)
			{
				*uParam1 = Global_262145.f_8070;
			}
			break;
		
		case 873938688:
			if (Global_262145.f_8071 >= 0)
			{
				*uParam1 = Global_262145.f_8071;
			}
			break;
		
		case 243069904:
			if (Global_262145.f_8072 >= 0)
			{
				*uParam1 = Global_262145.f_8072;
			}
			break;
		
		case -1614965165:
			if (Global_262145.f_8073 >= 0)
			{
				*uParam1 = Global_262145.f_8073;
			}
			break;
		
		case -651622103:
			if (Global_262145.f_8074 >= 0)
			{
				*uParam1 = Global_262145.f_8074;
			}
			break;
		
		case 1836030884:
			if (Global_262145.f_8075 >= 0)
			{
				*uParam1 = Global_262145.f_8075;
			}
			break;
		
		case 1555954241:
			if (Global_262145.f_8076 >= 0)
			{
				*uParam1 = Global_262145.f_8076;
			}
			break;
		
		case 1325686478:
			if (Global_262145.f_8077 >= 0)
			{
				*uParam1 = Global_262145.f_8077;
			}
			break;
		
		case 841557272:
			if (Global_262145.f_8078 >= 0)
			{
				*uParam1 = Global_262145.f_8078;
			}
			break;
		
		case 613026266:
			if (Global_262145.f_8079 >= 0)
			{
				*uParam1 = Global_262145.f_8079;
			}
			break;
		
		case 1519607088:
			if (Global_262145.f_8080 >= 0)
			{
				*uParam1 = Global_262145.f_8080;
			}
			break;
		
		case -320765486:
			if (Global_262145.f_8081 >= 0)
			{
				*uParam1 = Global_262145.f_8081;
			}
			break;
		
		case -991972913:
			if (Global_262145.f_8082 >= 0)
			{
				*uParam1 = Global_262145.f_8082;
			}
			break;
		
		case -928109283:
			if (Global_262145.f_8083 >= 0)
			{
				*uParam1 = Global_262145.f_8083;
			}
			break;
		
		case -1226864256:
			if (Global_262145.f_8084 >= 0)
			{
				*uParam1 = Global_262145.f_8084;
			}
			break;
		
		case -467606526:
			if (Global_262145.f_8085 >= 0)
			{
				*uParam1 = Global_262145.f_8085;
			}
			break;
		
		case 855717110:
			if (Global_262145.f_8086 >= 0)
			{
				*uParam1 = Global_262145.f_8086;
			}
			break;
		
		case 1509032663:
			if (Global_262145.f_8087 >= 0)
			{
				*uParam1 = Global_262145.f_8087;
			}
			break;
		
		case 1463221601:
			if (Global_262145.f_8088 >= 0)
			{
				*uParam1 = Global_262145.f_8088;
			}
			break;
		
		case 1285289076:
			if (Global_262145.f_8089 >= 0)
			{
				*uParam1 = Global_262145.f_8089;
			}
			break;
		
		case 450498801:
			if (Global_262145.f_8090 >= 0)
			{
				*uParam1 = Global_262145.f_8090;
			}
			break;
		
		case 1478658941:
			if (Global_262145.f_8091 >= 0)
			{
				*uParam1 = Global_262145.f_8091;
			}
			break;
		
		case 981313701:
			if (Global_262145.f_8092 >= 0)
			{
				*uParam1 = Global_262145.f_8092;
			}
			break;
		
		case 330521277:
			if (Global_262145.f_8093 >= 0)
			{
				*uParam1 = Global_262145.f_8093;
			}
			break;
		
		case 627375648:
			if (Global_262145.f_8094 >= 0)
			{
				*uParam1 = Global_262145.f_8094;
			}
			break;
		
		case 982554320:
			if (Global_262145.f_8095 >= 0)
			{
				*uParam1 = Global_262145.f_8095;
			}
			break;
		
		case 675148331:
			if (Global_262145.f_8096 >= 0)
			{
				*uParam1 = Global_262145.f_8096;
			}
			break;
		
		case -472225439:
			if (Global_262145.f_8097 >= 0)
			{
				*uParam1 = Global_262145.f_8097;
			}
			break;
		
		case -235940372:
			if (Global_262145.f_8098 >= 0)
			{
				*uParam1 = Global_262145.f_8098;
			}
			break;
		
		case 590690426:
			if (Global_262145.f_8099 >= 0)
			{
				*uParam1 = Global_262145.f_8099;
			}
			break;
		
		case 2104847609:
			if (Global_262145.f_8100 >= 0)
			{
				*uParam1 = Global_262145.f_8100;
			}
			break;
		
		case 946934793:
			if (Global_262145.f_8101 >= 0)
			{
				*uParam1 = Global_262145.f_8101;
			}
			break;
		
		case 1816886205:
			if (Global_262145.f_8102 >= 0)
			{
				*uParam1 = Global_262145.f_8102;
			}
			break;
		
		case 604924740:
			if (Global_262145.f_8103 >= 0)
			{
				*uParam1 = Global_262145.f_8103;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("CLO_LXF_O_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8222));
			break;
		
		case joaat("CLO_LXF_O_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8223));
			break;
		
		case joaat("CLO_LXF_O_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8224));
			break;
		
		case joaat("CLO_LXF_O_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8225));
			break;
		
		case joaat("CLO_LXF_O_4"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8226));
			break;
		
		case joaat("CLO_LXF_O_5"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8227));
			break;
		
		case joaat("CLO_LXF_O_6"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8228));
			break;
		
		case joaat("CLO_LXF_O_7"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8229));
			break;
		
		case joaat("CLO_LXF_O_8"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8230));
			break;
		
		case joaat("CLO_LXF_O_9"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8231));
			break;
		
		case joaat("CLO_LXF_O_10"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8232));
			break;
		
		case joaat("CLO_LXF_O_11"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8233));
			break;
		
		case joaat("CLO_LXF_F_0_0"):
			if (Global_262145.f_8104 >= 0)
			{
				*uParam1 = Global_262145.f_8104;
			}
			break;
		
		case joaat("CLO_LXF_F_1_0"):
			if (Global_262145.f_8105 >= 0)
			{
				*uParam1 = Global_262145.f_8105;
			}
			break;
		
		case joaat("CLO_LXF_U_0_0"):
			if (Global_262145.f_8106 >= 0)
			{
				*uParam1 = Global_262145.f_8106;
			}
			break;
		
		case joaat("CLO_LXF_U_0_1"):
			if (Global_262145.f_8107 >= 0)
			{
				*uParam1 = Global_262145.f_8107;
			}
			break;
		
		case joaat("CLO_LXF_U_0_2"):
			if (Global_262145.f_8108 >= 0)
			{
				*uParam1 = Global_262145.f_8108;
			}
			break;
		
		case joaat("CLO_LXF_U_0_3"):
			if (Global_262145.f_8109 >= 0)
			{
				*uParam1 = Global_262145.f_8109;
			}
			break;
		
		case joaat("CLO_LXF_U_0_4"):
			if (Global_262145.f_8110 >= 0)
			{
				*uParam1 = Global_262145.f_8110;
			}
			break;
		
		case joaat("CLO_LXF_U_3_0"):
			if (Global_262145.f_8111 >= 0)
			{
				*uParam1 = Global_262145.f_8111;
			}
			break;
		
		case joaat("CLO_LXF_U_3_1"):
			if (Global_262145.f_8112 >= 0)
			{
				*uParam1 = Global_262145.f_8112;
			}
			break;
		
		case joaat("CLO_LXF_U_3_2"):
			if (Global_262145.f_8113 >= 0)
			{
				*uParam1 = Global_262145.f_8113;
			}
			break;
		
		case joaat("CLO_LXF_U_3_3"):
			if (Global_262145.f_8114 >= 0)
			{
				*uParam1 = Global_262145.f_8114;
			}
			break;
		
		case joaat("CLO_LXF_U_3_4"):
			if (Global_262145.f_8115 >= 0)
			{
				*uParam1 = Global_262145.f_8115;
			}
			break;
		
		case joaat("CLO_LXF_U_3_5"):
			if (Global_262145.f_8116 >= 0)
			{
				*uParam1 = Global_262145.f_8116;
			}
			break;
		
		case joaat("CLO_LXF_U_3_6"):
			if (Global_262145.f_8117 >= 0)
			{
				*uParam1 = Global_262145.f_8117;
			}
			break;
		
		case joaat("CLO_LXF_U_3_7"):
			if (Global_262145.f_8118 >= 0)
			{
				*uParam1 = Global_262145.f_8118;
			}
			break;
		
		case joaat("CLO_LXF_U_3_8"):
			if (Global_262145.f_8119 >= 0)
			{
				*uParam1 = Global_262145.f_8119;
			}
			break;
		
		case joaat("CLO_LXF_U_3_9"):
			if (Global_262145.f_8120 >= 0)
			{
				*uParam1 = Global_262145.f_8120;
			}
			break;
		
		case joaat("CLO_LXF_U_3_10"):
			if (Global_262145.f_8121 >= 0)
			{
				*uParam1 = Global_262145.f_8121;
			}
			break;
		
		case joaat("CLO_LXF_U_3_11"):
			if (Global_262145.f_8122 >= 0)
			{
				*uParam1 = Global_262145.f_8122;
			}
			break;
		
		case joaat("CLO_LXF_U_4_0"):
			if (Global_262145.f_8123 >= 0)
			{
				*uParam1 = Global_262145.f_8123;
			}
			break;
		
		case joaat("CLO_LXF_U_4_1"):
			if (Global_262145.f_8124 >= 0)
			{
				*uParam1 = Global_262145.f_8124;
			}
			break;
		
		case joaat("CLO_LXF_U_4_2"):
			if (Global_262145.f_8125 >= 0)
			{
				*uParam1 = Global_262145.f_8125;
			}
			break;
		
		case joaat("CLO_LXF_U_4_3"):
			if (Global_262145.f_8126 >= 0)
			{
				*uParam1 = Global_262145.f_8126;
			}
			break;
		
		case joaat("CLO_LXF_U_5_0"):
			if (Global_262145.f_8127 >= 0)
			{
				*uParam1 = Global_262145.f_8127;
			}
			break;
		
		case joaat("CLO_LXF_U_6_0"):
			if (Global_262145.f_8128 >= 0)
			{
				*uParam1 = Global_262145.f_8128;
			}
			break;
		
		case joaat("CLO_LXF_U_6_1"):
			if (Global_262145.f_8129 >= 0)
			{
				*uParam1 = Global_262145.f_8129;
			}
			break;
		
		case joaat("CLO_LXF_U_6_2"):
			if (Global_262145.f_8130 >= 0)
			{
				*uParam1 = Global_262145.f_8130;
			}
			break;
		
		case joaat("CLO_LXF_U_6_3"):
			if (Global_262145.f_8131 >= 0)
			{
				*uParam1 = Global_262145.f_8131;
			}
			break;
		
		case joaat("CLO_LXF_U_6_4"):
			if (Global_262145.f_8132 >= 0)
			{
				*uParam1 = Global_262145.f_8132;
			}
			break;
		
		case joaat("CLO_LXF_U_6_5"):
			if (Global_262145.f_8133 >= 0)
			{
				*uParam1 = Global_262145.f_8133;
			}
			break;
		
		case joaat("CLO_LXF_U_6_6"):
			if (Global_262145.f_8134 >= 0)
			{
				*uParam1 = Global_262145.f_8134;
			}
			break;
		
		case joaat("CLO_LXF_U_6_7"):
			if (Global_262145.f_8135 >= 0)
			{
				*uParam1 = Global_262145.f_8135;
			}
			break;
		
		case joaat("CLO_LXF_U_6_8"):
			if (Global_262145.f_8136 >= 0)
			{
				*uParam1 = Global_262145.f_8136;
			}
			break;
		
		case joaat("CLO_LXF_U_6_9"):
			if (Global_262145.f_8137 >= 0)
			{
				*uParam1 = Global_262145.f_8137;
			}
			break;
		
		case joaat("CLO_LXF_U_6_10"):
			if (Global_262145.f_8138 >= 0)
			{
				*uParam1 = Global_262145.f_8138;
			}
			break;
		
		case joaat("CLO_LXF_U_6_11"):
			if (Global_262145.f_8139 >= 0)
			{
				*uParam1 = Global_262145.f_8139;
			}
			break;
		
		case joaat("CLO_LXF_U_6_12"):
			if (Global_262145.f_8140 >= 0)
			{
				*uParam1 = Global_262145.f_8140;
			}
			break;
		
		case joaat("CLO_LXF_U_6_13"):
			if (Global_262145.f_8141 >= 0)
			{
				*uParam1 = Global_262145.f_8141;
			}
			break;
		
		case joaat("CLO_LXF_U_6_14"):
			if (Global_262145.f_8142 >= 0)
			{
				*uParam1 = Global_262145.f_8142;
			}
			break;
		
		case joaat("CLO_LXF_U_6_17"):
			if (Global_262145.f_8143 >= 0)
			{
				*uParam1 = Global_262145.f_8143;
			}
			break;
		
		case joaat("CLO_LXF_U_6_18"):
			if (Global_262145.f_8144 >= 0)
			{
				*uParam1 = Global_262145.f_8144;
			}
			break;
		
		case joaat("CLO_LXF_U_6_19"):
			if (Global_262145.f_8145 >= 0)
			{
				*uParam1 = Global_262145.f_8145;
			}
			break;
		
		case joaat("CLO_LXF_DEC_1"):
			if (Global_262145.f_8146 >= 0)
			{
				*uParam1 = Global_262145.f_8146;
			}
			break;
		
		case joaat("CLO_LXF_DEC_0"):
			if (Global_262145.f_8147 >= 0)
			{
				*uParam1 = Global_262145.f_8147;
			}
			break;
		
		case joaat("CLO_LXF_DEC_3"):
			if (Global_262145.f_8148 >= 0)
			{
				*uParam1 = Global_262145.f_8148;
			}
			break;
		
		case joaat("CLO_LXF_DEC_4"):
			if (Global_262145.f_8149 >= 0)
			{
				*uParam1 = Global_262145.f_8149;
			}
			break;
		
		case joaat("CLO_LXF_DEC_5"):
			if (Global_262145.f_8150 >= 0)
			{
				*uParam1 = Global_262145.f_8150;
			}
			break;
		
		case joaat("CLO_LXF_DEC_12"):
			if (Global_262145.f_8151 >= 0)
			{
				*uParam1 = Global_262145.f_8151;
			}
			break;
		
		case joaat("CLO_LXF_DEC_13"):
			if (Global_262145.f_8152 >= 0)
			{
				*uParam1 = Global_262145.f_8152;
			}
			break;
		
		case joaat("CLO_LXF_DEC_22"):
			if (Global_262145.f_8153 >= 0)
			{
				*uParam1 = Global_262145.f_8153;
			}
			break;
		
		case joaat("CLO_LXF_DEC_23"):
			if (Global_262145.f_8154 >= 0)
			{
				*uParam1 = Global_262145.f_8154;
			}
			break;
		
		case joaat("CLO_LXF_DEC_28"):
			if (Global_262145.f_8155 >= 0)
			{
				*uParam1 = Global_262145.f_8155;
			}
			break;
		
		case joaat("CLO_LXF_L_0_0"):
			if (Global_262145.f_8156 >= 0)
			{
				*uParam1 = Global_262145.f_8156;
			}
			break;
		
		case joaat("CLO_LXF_L_0_1"):
			if (Global_262145.f_8157 >= 0)
			{
				*uParam1 = Global_262145.f_8157;
			}
			break;
		
		case joaat("CLO_LXF_L_0_2"):
			if (Global_262145.f_8158 >= 0)
			{
				*uParam1 = Global_262145.f_8158;
			}
			break;
		
		case joaat("CLO_LXF_L_0_3"):
			if (Global_262145.f_8159 >= 0)
			{
				*uParam1 = Global_262145.f_8159;
			}
			break;
		
		case joaat("CLO_LXF_L_0_4"):
			if (Global_262145.f_8160 >= 0)
			{
				*uParam1 = Global_262145.f_8160;
			}
			break;
		
		case joaat("CLO_LXF_T_10_0"):
			if (Global_262145.f_8161 >= 0)
			{
				*uParam1 = Global_262145.f_8161;
			}
			break;
		
		case joaat("CLO_LXF_T_10_1"):
			if (Global_262145.f_8162 >= 0)
			{
				*uParam1 = Global_262145.f_8162;
			}
			break;
		
		case joaat("CLO_LXF_T_11_0"):
			if (Global_262145.f_8163 >= 0)
			{
				*uParam1 = Global_262145.f_8163;
			}
			break;
		
		case joaat("CLO_LXF_T_11_1"):
			if (Global_262145.f_8164 >= 0)
			{
				*uParam1 = Global_262145.f_8164;
			}
			break;
		
		case joaat("CLO_LXF_T_12_0"):
			if (Global_262145.f_8165 >= 0)
			{
				*uParam1 = Global_262145.f_8165;
			}
			break;
		
		case joaat("CLO_LXF_T_14_0"):
			if (Global_262145.f_8166 >= 0)
			{
				*uParam1 = Global_262145.f_8166;
			}
			break;
		
		case joaat("CLO_LXF_T_14_1"):
			if (Global_262145.f_8167 >= 0)
			{
				*uParam1 = Global_262145.f_8167;
			}
			break;
		
		case joaat("CLO_LXF_T_15_0"):
			if (Global_262145.f_8168 >= 0)
			{
				*uParam1 = Global_262145.f_8168;
			}
			break;
		
		case joaat("CLO_LXF_T_15_1"):
			if (Global_262145.f_8169 >= 0)
			{
				*uParam1 = Global_262145.f_8169;
			}
			break;
		
		case joaat("CLO_LXF_T_16_0"):
			if (Global_262145.f_8170 >= 0)
			{
				*uParam1 = Global_262145.f_8170;
			}
			break;
		
		case joaat("CLO_LXF_T_16_1"):
			if (Global_262145.f_8171 >= 0)
			{
				*uParam1 = Global_262145.f_8171;
			}
			break;
		
		case joaat("CLO_LXF_T_17_0"):
			if (Global_262145.f_8172 >= 0)
			{
				*uParam1 = Global_262145.f_8172;
			}
			break;
		
		case joaat("CLO_LXF_T_17_1"):
			if (Global_262145.f_8173 >= 0)
			{
				*uParam1 = Global_262145.f_8173;
			}
			break;
		
		case joaat("CLO_LXF_E_0_0"):
			if (Global_262145.f_8174 >= 0)
			{
				*uParam1 = Global_262145.f_8174;
			}
			break;
		
		case joaat("CLO_LXF_E_1_0"):
			if (Global_262145.f_8175 >= 0)
			{
				*uParam1 = Global_262145.f_8175;
			}
			break;
		
		case joaat("CLO_LXF_E_2_0"):
			if (Global_262145.f_8176 >= 0)
			{
				*uParam1 = Global_262145.f_8176;
			}
			break;
		
		case joaat("CLO_LXF_E_3_0"):
			if (Global_262145.f_8177 >= 0)
			{
				*uParam1 = Global_262145.f_8177;
			}
			break;
		
		case joaat("CLO_LXF_E_3_1"):
			if (Global_262145.f_8178 >= 0)
			{
				*uParam1 = Global_262145.f_8178;
			}
			break;
		
		case joaat("CLO_LXF_E_3_2"):
			if (Global_262145.f_8179 >= 0)
			{
				*uParam1 = Global_262145.f_8179;
			}
			break;
		
		case joaat("CLO_LXF_E_4_0"):
			if (Global_262145.f_8180 >= 0)
			{
				*uParam1 = Global_262145.f_8180;
			}
			break;
		
		case joaat("CLO_LXF_E_4_1"):
			if (Global_262145.f_8181 >= 0)
			{
				*uParam1 = Global_262145.f_8181;
			}
			break;
		
		case joaat("CLO_LXF_E_4_2"):
			if (Global_262145.f_8182 >= 0)
			{
				*uParam1 = Global_262145.f_8182;
			}
			break;
		
		case joaat("CLO_LXF_E_5_0"):
			if (Global_262145.f_8183 >= 0)
			{
				*uParam1 = Global_262145.f_8183;
			}
			break;
		
		case joaat("CLO_LXF_E_5_1"):
			if (Global_262145.f_8184 >= 0)
			{
				*uParam1 = Global_262145.f_8184;
			}
			break;
		
		case joaat("CLO_LXF_E_5_2"):
			if (Global_262145.f_8185 >= 0)
			{
				*uParam1 = Global_262145.f_8185;
			}
			break;
		
		case joaat("CLO_LXF_E_6_0"):
			if (Global_262145.f_8186 >= 0)
			{
				*uParam1 = Global_262145.f_8186;
			}
			break;
		
		case joaat("CLO_LXF_E_6_1"):
			if (Global_262145.f_8187 >= 0)
			{
				*uParam1 = Global_262145.f_8187;
			}
			break;
		
		case joaat("CLO_LXF_E_6_2"):
			if (Global_262145.f_8188 >= 0)
			{
				*uParam1 = Global_262145.f_8188;
			}
			break;
		
		case joaat("CLO_LXF_E_7_0"):
			if (Global_262145.f_8189 >= 0)
			{
				*uParam1 = Global_262145.f_8189;
			}
			break;
		
		case joaat("CLO_LXF_E_7_1"):
			if (Global_262145.f_8190 >= 0)
			{
				*uParam1 = Global_262145.f_8190;
			}
			break;
		
		case joaat("CLO_LXF_E_7_2"):
			if (Global_262145.f_8191 >= 0)
			{
				*uParam1 = Global_262145.f_8191;
			}
			break;
		
		case joaat("CLO_LXF_E_8_0"):
			if (Global_262145.f_8192 >= 0)
			{
				*uParam1 = Global_262145.f_8192;
			}
			break;
		
		case joaat("CLO_LXF_E_8_1"):
			if (Global_262145.f_8193 >= 0)
			{
				*uParam1 = Global_262145.f_8193;
			}
			break;
		
		case joaat("CLO_LXF_E_8_2"):
			if (Global_262145.f_8194 >= 0)
			{
				*uParam1 = Global_262145.f_8194;
			}
			break;
		
		case joaat("CLO_LXF_E_9_0"):
			if (Global_262145.f_8195 >= 0)
			{
				*uParam1 = Global_262145.f_8195;
			}
			break;
		
		case joaat("CLO_LXF_E_9_1"):
			if (Global_262145.f_8196 >= 0)
			{
				*uParam1 = Global_262145.f_8196;
			}
			break;
		
		case joaat("CLO_LXF_E_9_2"):
			if (Global_262145.f_8197 >= 0)
			{
				*uParam1 = Global_262145.f_8197;
			}
			break;
		
		case joaat("CLO_LXF_LW_0_0"):
			if (Global_262145.f_8198 >= 0)
			{
				*uParam1 = Global_262145.f_8198;
			}
			break;
		
		case joaat("CLO_LXF_LW_0_1"):
			if (Global_262145.f_8199 >= 0)
			{
				*uParam1 = Global_262145.f_8199;
			}
			break;
		
		case joaat("CLO_LXF_LW_0_2"):
			if (Global_262145.f_8200 >= 0)
			{
				*uParam1 = Global_262145.f_8200;
			}
			break;
		
		case joaat("CLO_LXF_LW_1_0"):
			if (Global_262145.f_8201 >= 0)
			{
				*uParam1 = Global_262145.f_8201;
			}
			break;
		
		case joaat("CLO_LXF_LW_1_1"):
			if (Global_262145.f_8202 >= 0)
			{
				*uParam1 = Global_262145.f_8202;
			}
			break;
		
		case joaat("CLO_LXF_LW_1_2"):
			if (Global_262145.f_8203 >= 0)
			{
				*uParam1 = Global_262145.f_8203;
			}
			break;
		
		case joaat("CLO_LXF_LW_5_0"):
			if (Global_262145.f_8204 >= 0)
			{
				*uParam1 = Global_262145.f_8204;
			}
			break;
		
		case joaat("CLO_LXF_LW_5_1"):
			if (Global_262145.f_8205 >= 0)
			{
				*uParam1 = Global_262145.f_8205;
			}
			break;
		
		case joaat("CLO_LXF_LW_5_2"):
			if (Global_262145.f_8206 >= 0)
			{
				*uParam1 = Global_262145.f_8206;
			}
			break;
		
		case joaat("CLO_LXF_LW_6_0"):
			if (Global_262145.f_8207 >= 0)
			{
				*uParam1 = Global_262145.f_8207;
			}
			break;
		
		case joaat("CLO_LXF_LW_6_1"):
			if (Global_262145.f_8208 >= 0)
			{
				*uParam1 = Global_262145.f_8208;
			}
			break;
		
		case joaat("CLO_LXF_LW_6_2"):
			if (Global_262145.f_8209 >= 0)
			{
				*uParam1 = Global_262145.f_8209;
			}
			break;
	}
}

void func_49(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1740204423:
		case joaat("CLO_HSTF_O_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7594));
			break;
		
		case 1813135197:
		case joaat("CLO_HSTF_O_A_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7566));
			break;
		
		case 2052578280:
		case joaat("CLO_HSTF_O_A_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7567));
			break;
		
		case 517547196:
		case joaat("CLO_HSTF_O_A_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7568));
			break;
		
		case 772784937:
		case joaat("CLO_HSTF_O_A_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7569));
			break;
		
		case 232076802:
		case joaat("CLO_HSTF_O_B_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7570));
			break;
		
		case -65367411:
		case joaat("CLO_HSTF_O_B_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7571));
			break;
		
		case 727740696:
		case joaat("CLO_HSTF_O_B_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7572));
			break;
		
		case 563961234:
		case joaat("CLO_HSTF_O_B_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7573));
			break;
		
		case -1240104072:
		case joaat("CLO_HSTF_O_C_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7574));
			break;
		
		case -934533147:
		case joaat("CLO_HSTF_O_C_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7575));
			break;
		
		case -502244499:
		case joaat("CLO_HSTF_O_C_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7576));
			break;
		
		case -322277151:
		case joaat("CLO_HSTF_O_C_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7577));
			break;
		
		case 519068078:
		case joaat("CLO_HSTF_O_D_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7578));
			break;
		
		case 815398145:
		case joaat("CLO_HSTF_O_D_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7579));
			break;
		
		case -1165291291:
		case joaat("CLO_HSTF_O_D_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7580));
			break;
		
		case -868240306:
		case joaat("CLO_HSTF_O_D_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7581));
			break;
		
		case 1238268551:
		case joaat("CLO_HSTF_O_E_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7582));
			break;
		
		case -611115502:
		case joaat("CLO_HSTF_O_E_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7583));
			break;
		
		case -543218134:
		case joaat("CLO_HSTF_O_E_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7584));
			break;
		
		case -278805073:
		case joaat("CLO_HSTF_O_E_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7585));
			break;
		
		case 632176860:
		case joaat("CLO_HSTF_O_F_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7586));
			break;
		
		case -1447343884:
		case joaat("CLO_HSTF_O_F_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7587));
			break;
		
		case -1880943292:
		case joaat("CLO_HSTF_O_F_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7588));
			break;
		
		case -1641696823:
		case joaat("CLO_HSTF_O_F_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7589));
			break;
		
		case -958786574:
		case joaat("CLO_HSTF_O_G_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7590));
			break;
		
		case 887779345:
		case joaat("CLO_HSTF_O_G_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7591));
			break;
		
		case 657446044:
		case joaat("CLO_HSTF_O_G_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7592));
			break;
		
		case 440842954:
		case joaat("CLO_HSTF_O_G_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7593));
			break;
		
		case -886321511:
		case joaat("CLO_HSTF_O_H_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7595));
			break;
		
		case -657364508:
		case joaat("CLO_HSTF_O_H_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7596));
			break;
		
		case 1873188752:
		case joaat("CLO_HSTF_O_H_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7597));
			break;
		
		case 2095395341:
		case joaat("CLO_HSTF_O_H_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7598));
			break;
		
		case -888145528:
		case joaat("CLO_HSTF_O_I_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7599));
			break;
		
		case -1332755320:
		case joaat("CLO_HSTF_O_I_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7600));
			break;
		
		case -1500827521:
		case joaat("CLO_HSTF_O_I_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7601));
			break;
		
		case -1639702543:
		case joaat("CLO_HSTF_O_I_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7602));
			break;
		
		case -1762154932:
		case joaat("CLO_HSTF_O_J_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7603));
			break;
		
		case 23231264:
		case joaat("CLO_HSTF_O_J_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7604));
			break;
		
		case -1803247262:
		case joaat("CLO_HSTF_O_J_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7605));
			break;
		
		case -2058747155:
		case joaat("CLO_HSTF_O_J_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7606));
			break;
		
		case -1067513518:
		case joaat("CLO_HSTF_O_K_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7607));
			break;
		
		case -769807153:
		case joaat("CLO_HSTF_O_K_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7608));
			break;
		
		case 352465559:
		case joaat("CLO_HSTF_O_K_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7609));
			break;
		
		case 650630690:
		case joaat("CLO_HSTF_O_K_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7610));
			break;
		
		case -2106125641:
		case joaat("CLO_HSTF_O_L_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7611));
			break;
		
		case -1263667420:
		case joaat("CLO_HSTF_O_L_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7612));
			break;
		
		case 337458693:
		case joaat("CLO_HSTF_O_L_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7613));
			break;
		
		case 108534459:
		case joaat("CLO_HSTF_O_L_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7614));
			break;
		
		case 2010573932:
		case joaat("CLO_HSTF_O_M_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7615));
			break;
		
		case 802806899:
		case joaat("CLO_HSTF_O_M_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7616));
			break;
		
		case 1579858196:
		case joaat("CLO_HSTF_O_M_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7617));
			break;
		
		case 207885704:
		case joaat("CLO_HSTF_O_M_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7618));
			break;
		
		case 851104082:
		case joaat("CLO_HSTF_O_N_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7619));
			break;
		
		case 679787750:
		case joaat("CLO_HSTF_O_N_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7620));
			break;
		
		case 374872205:
		case joaat("CLO_HSTF_O_N_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7621));
			break;
		
		case -1297002179:
		case joaat("CLO_HSTF_O_N_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7622));
			break;
	}
	switch (iParam0)
	{
		case 200614090:
			if (Global_262145.f_7312 >= 0)
			{
				*uParam1 = Global_262145.f_7312;
			}
			break;
		
		case -505308012:
			if (Global_262145.f_7311 >= 0)
			{
				*uParam1 = Global_262145.f_7311;
			}
			break;
		
		case -1433279578:
			if (Global_262145.f_7310 >= 0)
			{
				*uParam1 = Global_262145.f_7310;
			}
			break;
		
		case 406336869:
			if (Global_262145.f_7308 >= 0)
			{
				*uParam1 = Global_262145.f_7308;
			}
			break;
		
		case joaat("AMM_HST_B_1_0"):
			if (Global_262145.f_7309 >= 0)
			{
				*uParam1 = Global_262145.f_7309;
			}
			break;
		
		case 1643425118:
			if (Global_262145.f_7314 >= 0)
			{
				*uParam1 = Global_262145.f_7314;
			}
			break;
		
		case -334550899:
			if (Global_262145.f_7313 >= 0)
			{
				*uParam1 = Global_262145.f_7313;
			}
			break;
		
		case -1733680767:
			if (Global_262145.f_7317 >= 0)
			{
				*uParam1 = Global_262145.f_7317;
			}
			break;
		
		case 1212833799:
			if (Global_262145.f_7318 >= 0)
			{
				*uParam1 = Global_262145.f_7318;
			}
			break;
		
		case joaat("CLO_HSTF_F_0_0"):
			if (Global_262145.f_7411 >= 0)
			{
				*uParam1 = Global_262145.f_7411;
			}
			break;
		
		case joaat("CLO_HSTF_F_1_0"):
			if (Global_262145.f_7412 >= 0)
			{
				*uParam1 = Global_262145.f_7412;
			}
			break;
		
		case joaat("CLO_HSTF_F_2_0"):
			if (Global_262145.f_7413 >= 0)
			{
				*uParam1 = Global_262145.f_7413;
			}
			break;
		
		case joaat("CLO_HSTF_F_3_0"):
			if (Global_262145.f_7414 >= 0)
			{
				*uParam1 = Global_262145.f_7414;
			}
			break;
		
		case joaat("CLO_HSTF_F_4_0"):
			if (Global_262145.f_7415 >= 0)
			{
				*uParam1 = Global_262145.f_7415;
			}
			break;
		
		case joaat("CLO_HSTF_F_4_1"):
			if (Global_262145.f_7416 >= 0)
			{
				*uParam1 = Global_262145.f_7416;
			}
			break;
		
		case joaat("CLO_HSTF_F_4_2"):
			if (Global_262145.f_7417 >= 0)
			{
				*uParam1 = Global_262145.f_7417;
			}
			break;
		
		case 454534558:
			if (Global_262145.f_7319 >= 0)
			{
				*uParam1 = Global_262145.f_7319;
			}
			break;
		
		case -1705393411:
			if (Global_262145.f_7320 >= 0)
			{
				*uParam1 = Global_262145.f_7320;
			}
			break;
		
		case 724512113:
			if (Global_262145.f_7321 >= 0)
			{
				*uParam1 = Global_262145.f_7321;
			}
			break;
		
		case -1930825487:
			if (Global_262145.f_7322 >= 0)
			{
				*uParam1 = Global_262145.f_7322;
			}
			break;
		
		case -1258766066:
			if (Global_262145.f_7323 >= 0)
			{
				*uParam1 = Global_262145.f_7323;
			}
			break;
		
		case -1447843196:
			if (Global_262145.f_7324 >= 0)
			{
				*uParam1 = Global_262145.f_7324;
			}
			break;
		
		case 1259436123:
			if (Global_262145.f_7325 >= 0)
			{
				*uParam1 = Global_262145.f_7325;
			}
			break;
		
		case joaat("CLO_HSTF_L_0_0"):
			if (Global_262145.f_7418 >= 0)
			{
				*uParam1 = Global_262145.f_7418;
			}
			break;
		
		case joaat("CLO_HSTF_L_1_0"):
			if (Global_262145.f_7419 >= 0)
			{
				*uParam1 = Global_262145.f_7419;
			}
			break;
		
		case joaat("CLO_HSTF_L_4_0"):
			if (Global_262145.f_7420 >= 0)
			{
				*uParam1 = Global_262145.f_7420;
			}
			break;
		
		case joaat("CLO_HSTF_L_4_1"):
			if (Global_262145.f_7421 >= 0)
			{
				*uParam1 = Global_262145.f_7421;
			}
			break;
		
		case joaat("CLO_HSTF_L_4_2"):
			if (Global_262145.f_7422 >= 0)
			{
				*uParam1 = Global_262145.f_7422;
			}
			break;
		
		case joaat("CLO_HSTF_L_4_3"):
			if (Global_262145.f_7423 >= 0)
			{
				*uParam1 = Global_262145.f_7423;
			}
			break;
		
		case joaat("CLO_HSTF_L_5_0"):
			if (Global_262145.f_7424 >= 0)
			{
				*uParam1 = Global_262145.f_7424;
			}
			break;
		
		case joaat("CLO_HSTF_L_5_1"):
			if (Global_262145.f_7425 >= 0)
			{
				*uParam1 = Global_262145.f_7425;
			}
			break;
		
		case joaat("CLO_HSTF_L_5_2"):
			if (Global_262145.f_7426 >= 0)
			{
				*uParam1 = Global_262145.f_7426;
			}
			break;
		
		case joaat("CLO_HSTF_L_5_3"):
			if (Global_262145.f_7427 >= 0)
			{
				*uParam1 = Global_262145.f_7427;
			}
			break;
		
		case joaat("CLO_HSTF_L_5_4"):
			if (Global_262145.f_7428 >= 0)
			{
				*uParam1 = Global_262145.f_7428;
			}
			break;
		
		case joaat("CLO_HSTF_L_5_5"):
			if (Global_262145.f_7429 >= 0)
			{
				*uParam1 = Global_262145.f_7429;
			}
			break;
		
		case joaat("CLO_HSTF_L_5_6"):
			if (Global_262145.f_7430 >= 0)
			{
				*uParam1 = Global_262145.f_7430;
			}
			break;
		
		case -1691564662:
			if (Global_262145.f_7435 >= 0)
			{
				*uParam1 = Global_262145.f_7435;
			}
			break;
		
		case joaat("CLO_HSTF_L_9_0"):
			if (Global_262145.f_7431 >= 0)
			{
				*uParam1 = Global_262145.f_7431;
			}
			break;
		
		case joaat("CLO_HSTF_L_9_1"):
			if (Global_262145.f_7432 >= 0)
			{
				*uParam1 = Global_262145.f_7432;
			}
			break;
		
		case joaat("CLO_HSTF_L_9_2"):
			if (Global_262145.f_7433 >= 0)
			{
				*uParam1 = Global_262145.f_7433;
			}
			break;
		
		case joaat("CLO_HSTF_L_9_3"):
			if (Global_262145.f_7434 >= 0)
			{
				*uParam1 = Global_262145.f_7434;
			}
			break;
	}
	switch (iParam0)
	{
		case -1705526884:
			if (Global_262145.f_7326 >= 0)
			{
				*uParam1 = Global_262145.f_7326;
			}
			break;
		
		case -393128434:
			if (Global_262145.f_7327 >= 0)
			{
				*uParam1 = Global_262145.f_7327;
			}
			break;
		
		case -1359322399:
			if (Global_262145.f_7328 >= 0)
			{
				*uParam1 = Global_262145.f_7328;
			}
			break;
		
		case -1926488251:
			if (Global_262145.f_7329 >= 0)
			{
				*uParam1 = Global_262145.f_7329;
			}
			break;
		
		case 1288225590:
			if (Global_262145.f_7330 >= 0)
			{
				*uParam1 = Global_262145.f_7330;
			}
			break;
		
		case 827210423:
			if (Global_262145.f_7331 >= 0)
			{
				*uParam1 = Global_262145.f_7331;
			}
			break;
		
		case 69233812:
			if (Global_262145.f_7332 >= 0)
			{
				*uParam1 = Global_262145.f_7332;
			}
			break;
		
		case 651324466:
			if (Global_262145.f_7333 >= 0)
			{
				*uParam1 = Global_262145.f_7333;
			}
			break;
		
		case 890898625:
			if (Global_262145.f_7334 >= 0)
			{
				*uParam1 = Global_262145.f_7334;
			}
			break;
		
		case 54502669:
			if (Global_262145.f_7335 >= 0)
			{
				*uParam1 = Global_262145.f_7335;
			}
			break;
		
		case 294535594:
			if (Global_262145.f_7336 >= 0)
			{
				*uParam1 = Global_262145.f_7336;
			}
			break;
		
		case 557407258:
			if (Global_262145.f_7337 >= 0)
			{
				*uParam1 = Global_262145.f_7337;
			}
			break;
		
		case 279165679:
			if (Global_262145.f_7338 >= 0)
			{
				*uParam1 = Global_262145.f_7338;
			}
			break;
		
		case 1723623199:
			if (Global_262145.f_7339 >= 0)
			{
				*uParam1 = Global_262145.f_7339;
			}
			break;
		
		case 942672395:
			if (Global_262145.f_7340 >= 0)
			{
				*uParam1 = Global_262145.f_7340;
			}
			break;
		
		case -2034349149:
			if (Global_262145.f_7341 >= 0)
			{
				*uParam1 = Global_262145.f_7341;
			}
			break;
		
		case 2021568292:
			if (Global_262145.f_7342 >= 0)
			{
				*uParam1 = Global_262145.f_7342;
			}
			break;
		
		case 1766428858:
			if (Global_262145.f_7343 >= 0)
			{
				*uParam1 = Global_262145.f_7343;
			}
			break;
		
		case 1528624225:
			if (Global_262145.f_7344 >= 0)
			{
				*uParam1 = Global_262145.f_7344;
			}
			break;
		
		case -713218068:
			if (Global_262145.f_7345 >= 0)
			{
				*uParam1 = Global_262145.f_7345;
			}
			break;
		
		case -1410892243:
			if (Global_262145.f_7346 >= 0)
			{
				*uParam1 = Global_262145.f_7346;
			}
			break;
		
		case 750171068:
			if (Global_262145.f_7347 >= 0)
			{
				*uParam1 = Global_262145.f_7347;
			}
			break;
		
		case -1816187924:
			if (Global_262145.f_7348 >= 0)
			{
				*uParam1 = Global_262145.f_7348;
			}
			break;
		
		case 1167214741:
			if (Global_262145.f_7349 >= 0)
			{
				*uParam1 = Global_262145.f_7349;
			}
			break;
		
		case 2027106086:
			if (Global_262145.f_7799 >= 0)
			{
				*uParam1 = Global_262145.f_7799;
			}
			break;
		
		case -729660873:
			if (Global_262145.f_7784 >= 0)
			{
				*uParam1 = Global_262145.f_7784;
			}
			break;
		
		case -752402559:
			if (Global_262145.f_7785 >= 0)
			{
				*uParam1 = Global_262145.f_7785;
			}
			break;
		
		case 1320105611:
			if (Global_262145.f_7786 >= 0)
			{
				*uParam1 = Global_262145.f_7786;
			}
			break;
		
		case 1005883670:
			if (Global_262145.f_7787 >= 0)
			{
				*uParam1 = Global_262145.f_7787;
			}
			break;
		
		case -1711813341:
			if (Global_262145.f_7788 >= 0)
			{
				*uParam1 = Global_262145.f_7788;
			}
			break;
		
		case -2009519706:
			if (Global_262145.f_7789 >= 0)
			{
				*uParam1 = Global_262145.f_7789;
			}
			break;
		
		case joaat("CLO_HSTF_U_0_0"):
			if (Global_262145.f_7436 >= 0)
			{
				*uParam1 = Global_262145.f_7436;
			}
			break;
		
		case joaat("CLO_HSTF_U_0_1"):
			if (Global_262145.f_7437 >= 0)
			{
				*uParam1 = Global_262145.f_7437;
			}
			break;
		
		case joaat("CLO_HSTF_U_0_2"):
			if (Global_262145.f_7438 >= 0)
			{
				*uParam1 = Global_262145.f_7438;
			}
			break;
		
		case joaat("CLO_HSTF_U_0_3"):
			if (Global_262145.f_7439 >= 0)
			{
				*uParam1 = Global_262145.f_7439;
			}
			break;
		
		case -805888222:
			if (Global_262145.f_7440 >= 0)
			{
				*uParam1 = Global_262145.f_7440;
			}
			break;
		
		case joaat("CLO_HSTF_U_4_0"):
			if (Global_262145.f_7441 >= 0)
			{
				*uParam1 = Global_262145.f_7441;
			}
			break;
		
		case joaat("CLO_HSTF_U_5_0"):
			if (Global_262145.f_7442 >= 0)
			{
				*uParam1 = Global_262145.f_7442;
			}
			break;
		
		case joaat("CLO_HSTF_U_6_0"):
			if (Global_262145.f_7443 >= 0)
			{
				*uParam1 = Global_262145.f_7443;
			}
			break;
		
		case joaat("CLO_HSTF_U_6_1"):
			if (Global_262145.f_7444 >= 0)
			{
				*uParam1 = Global_262145.f_7444;
			}
			break;
		
		case joaat("CLO_HSTF_U_6_2"):
			if (Global_262145.f_7445 >= 0)
			{
				*uParam1 = Global_262145.f_7445;
			}
			break;
		
		case joaat("CLO_HSTF_U_6_3"):
			if (Global_262145.f_7446 >= 0)
			{
				*uParam1 = Global_262145.f_7446;
			}
			break;
		
		case joaat("CLO_HSTF_U_7_0"):
			if (Global_262145.f_7447 >= 0)
			{
				*uParam1 = Global_262145.f_7447;
			}
			break;
		
		case joaat("CLO_HSTF_U_7_1"):
			if (Global_262145.f_7448 >= 0)
			{
				*uParam1 = Global_262145.f_7448;
			}
			break;
		
		case joaat("CLO_HSTF_U_7_2"):
			if (Global_262145.f_7449 >= 0)
			{
				*uParam1 = Global_262145.f_7449;
			}
			break;
		
		case joaat("CLO_HSTF_U_7_3"):
			if (Global_262145.f_7450 >= 0)
			{
				*uParam1 = Global_262145.f_7450;
			}
			break;
		
		case joaat("CLO_HSTF_U_8_0"):
			if (Global_262145.f_7451 >= 0)
			{
				*uParam1 = Global_262145.f_7451;
			}
			break;
		
		case joaat("CLO_HSTF_U_8_1"):
			if (Global_262145.f_7452 >= 0)
			{
				*uParam1 = Global_262145.f_7452;
			}
			break;
		
		case joaat("CLO_HSTF_U_8_2"):
			if (Global_262145.f_7453 >= 0)
			{
				*uParam1 = Global_262145.f_7453;
			}
			break;
		
		case joaat("CLO_HSTF_U_8_3"):
			if (Global_262145.f_7454 >= 0)
			{
				*uParam1 = Global_262145.f_7454;
			}
			break;
		
		case joaat("CLO_HSTF_U_9_0"):
			if (Global_262145.f_7455 >= 0)
			{
				*uParam1 = Global_262145.f_7455;
			}
			break;
		
		case joaat("CLO_HSTF_U_10_0"):
			if (Global_262145.f_7456 >= 0)
			{
				*uParam1 = Global_262145.f_7456;
			}
			break;
		
		case joaat("CLO_HSTF_U_11_0"):
			if (Global_262145.f_7457 >= 0)
			{
				*uParam1 = Global_262145.f_7457;
			}
			break;
		
		case joaat("CLO_HSTF_U_11_1"):
			if (Global_262145.f_7458 >= 0)
			{
				*uParam1 = Global_262145.f_7458;
			}
			break;
		
		case joaat("CLO_HSTF_U_11_2"):
			if (Global_262145.f_7459 >= 0)
			{
				*uParam1 = Global_262145.f_7459;
			}
			break;
		
		case joaat("CLO_HSTF_U_11_3"):
			if (Global_262145.f_7460 >= 0)
			{
				*uParam1 = Global_262145.f_7460;
			}
			break;
		
		case joaat("CLO_HSTF_U_11_4"):
			if (Global_262145.f_7461 >= 0)
			{
				*uParam1 = Global_262145.f_7461;
			}
			break;
		
		case joaat("CLO_HSTF_U_11_5"):
			if (Global_262145.f_7462 >= 0)
			{
				*uParam1 = Global_262145.f_7462;
			}
			break;
		
		case joaat("CLO_HSTF_U_11_6"):
			if (Global_262145.f_7463 >= 0)
			{
				*uParam1 = Global_262145.f_7463;
			}
			break;
		
		case joaat("CLO_HSTF_U_11_7"):
			if (Global_262145.f_7464 >= 0)
			{
				*uParam1 = Global_262145.f_7464;
			}
			break;
		
		case joaat("CLO_HSTF_U_11_8"):
			if (Global_262145.f_7465 >= 0)
			{
				*uParam1 = Global_262145.f_7465;
			}
			break;
		
		case joaat("CLO_HSTF_U_12_0"):
			if (Global_262145.f_7466 >= 0)
			{
				*uParam1 = Global_262145.f_7466;
			}
			break;
		
		case joaat("CLO_HSTF_U_12_1"):
			if (Global_262145.f_7467 >= 0)
			{
				*uParam1 = Global_262145.f_7467;
			}
			break;
		
		case joaat("CLO_HSTF_U_12_2"):
			if (Global_262145.f_7468 >= 0)
			{
				*uParam1 = Global_262145.f_7468;
			}
			break;
		
		case joaat("CLO_HSTF_U_12_3"):
			if (Global_262145.f_7469 >= 0)
			{
				*uParam1 = Global_262145.f_7469;
			}
			break;
		
		case joaat("CLO_HSTF_U_12_4"):
			if (Global_262145.f_7470 >= 0)
			{
				*uParam1 = Global_262145.f_7470;
			}
			break;
		
		case joaat("CLO_HSTF_U_12_5"):
			if (Global_262145.f_7471 >= 0)
			{
				*uParam1 = Global_262145.f_7471;
			}
			break;
		
		case joaat("CLO_HSTF_U_12_6"):
			if (Global_262145.f_7472 >= 0)
			{
				*uParam1 = Global_262145.f_7472;
			}
			break;
		
		case joaat("CLO_HSTF_U_12_7"):
			if (Global_262145.f_7473 >= 0)
			{
				*uParam1 = Global_262145.f_7473;
			}
			break;
		
		case joaat("CLO_HSTF_U_12_8"):
			if (Global_262145.f_7474 >= 0)
			{
				*uParam1 = Global_262145.f_7474;
			}
			break;
		
		case joaat("CLO_HSTF_U_16_0"):
			if (Global_262145.f_7790 >= 0)
			{
				*uParam1 = Global_262145.f_7790;
			}
			break;
		
		case joaat("CLO_HSTF_U_16_1"):
			if (Global_262145.f_7791 >= 0)
			{
				*uParam1 = Global_262145.f_7791;
			}
			break;
		
		case joaat("CLO_HSTF_U_16_2"):
			if (Global_262145.f_7792 >= 0)
			{
				*uParam1 = Global_262145.f_7792;
			}
			break;
		
		case joaat("CLO_HSTF_U_16_3"):
			if (Global_262145.f_7793 >= 0)
			{
				*uParam1 = Global_262145.f_7793;
			}
			break;
		
		case joaat("CLO_HSTF_U_16_4"):
			if (Global_262145.f_7794 >= 0)
			{
				*uParam1 = Global_262145.f_7794;
			}
			break;
		
		case joaat("CLO_HSTF_U_16_5"):
			if (Global_262145.f_7795 >= 0)
			{
				*uParam1 = Global_262145.f_7795;
			}
			break;
		
		case joaat("CLO_HSTF_S_0_0"):
			if (Global_262145.f_7475 >= 0)
			{
				*uParam1 = Global_262145.f_7475;
			}
			break;
		
		case joaat("CLO_HSTF_S_1_0"):
			if (Global_262145.f_7476 >= 0)
			{
				*uParam1 = Global_262145.f_7476;
			}
			break;
		
		case joaat("CLO_HSTF_S_1_1"):
			if (Global_262145.f_7800 >= 0)
			{
				*uParam1 = Global_262145.f_7800;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_0"):
			if (Global_262145.f_7477 >= 0)
			{
				*uParam1 = Global_262145.f_7477;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_1"):
			if (Global_262145.f_7478 >= 0)
			{
				*uParam1 = Global_262145.f_7478;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_2"):
			if (Global_262145.f_7479 >= 0)
			{
				*uParam1 = Global_262145.f_7479;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_3"):
			if (Global_262145.f_7480 >= 0)
			{
				*uParam1 = Global_262145.f_7480;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_4"):
			if (Global_262145.f_7481 >= 0)
			{
				*uParam1 = Global_262145.f_7481;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_5"):
			if (Global_262145.f_7482 >= 0)
			{
				*uParam1 = Global_262145.f_7482;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_6"):
			if (Global_262145.f_7483 >= 0)
			{
				*uParam1 = Global_262145.f_7483;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_7"):
			if (Global_262145.f_7484 >= 0)
			{
				*uParam1 = Global_262145.f_7484;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_8"):
			if (Global_262145.f_7485 >= 0)
			{
				*uParam1 = Global_262145.f_7485;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_9"):
			if (Global_262145.f_7486 >= 0)
			{
				*uParam1 = Global_262145.f_7486;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_10"):
			if (Global_262145.f_7487 >= 0)
			{
				*uParam1 = Global_262145.f_7487;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_11"):
			if (Global_262145.f_7488 >= 0)
			{
				*uParam1 = Global_262145.f_7488;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_12"):
			if (Global_262145.f_7489 >= 0)
			{
				*uParam1 = Global_262145.f_7489;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_13"):
			if (Global_262145.f_7490 >= 0)
			{
				*uParam1 = Global_262145.f_7490;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_14"):
			if (Global_262145.f_7491 >= 0)
			{
				*uParam1 = Global_262145.f_7491;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_15"):
			if (Global_262145.f_7492 >= 0)
			{
				*uParam1 = Global_262145.f_7492;
			}
			break;
		
		case joaat("CLO_HSTF_S_8_0"):
			if (Global_262145.f_7493 >= 0)
			{
				*uParam1 = Global_262145.f_7493;
			}
			break;
		
		case joaat("CLO_HSTF_S_8_1"):
			if (Global_262145.f_7494 >= 0)
			{
				*uParam1 = Global_262145.f_7494;
			}
			break;
		
		case joaat("CLO_HSTF_S_8_2"):
			if (Global_262145.f_7495 >= 0)
			{
				*uParam1 = Global_262145.f_7495;
			}
			break;
		
		case joaat("CLO_HSTF_S_8_3"):
			if (Global_262145.f_7496 >= 0)
			{
				*uParam1 = Global_262145.f_7496;
			}
			break;
		
		case joaat("CLO_HSTF_S_8_4"):
			if (Global_262145.f_7497 >= 0)
			{
				*uParam1 = Global_262145.f_7497;
			}
			break;
		
		case joaat("CLO_HSTF_S_8_5"):
			if (Global_262145.f_7498 >= 0)
			{
				*uParam1 = Global_262145.f_7498;
			}
			break;
		
		case joaat("CLO_HSTF_S_8_6"):
			if (Global_262145.f_7499 >= 0)
			{
				*uParam1 = Global_262145.f_7499;
			}
			break;
		
		case joaat("CLO_HSTF_S_8_7"):
			if (Global_262145.f_7500 >= 0)
			{
				*uParam1 = Global_262145.f_7500;
			}
			break;
		
		case joaat("CLO_HSTF_S_8_8"):
			if (Global_262145.f_7501 >= 0)
			{
				*uParam1 = Global_262145.f_7501;
			}
			break;
		
		case joaat("CLO_HSTF_S_8_9"):
			if (Global_262145.f_7502 >= 0)
			{
				*uParam1 = Global_262145.f_7502;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("CLO_HSTM_G_0_0"):
			if (Global_262145.f_7350 >= 0)
			{
				*uParam1 = Global_262145.f_7350;
			}
			break;
		
		case joaat("CLO_HSTM_G_0_1"):
			if (Global_262145.f_7351 >= 0)
			{
				*uParam1 = Global_262145.f_7351;
			}
			break;
		
		case joaat("CLO_HSTM_G_1_0"):
			if (Global_262145.f_7352 >= 0)
			{
				*uParam1 = Global_262145.f_7352;
			}
			break;
		
		case joaat("CLO_HSTM_G_1_1"):
			if (Global_262145.f_7353 >= 0)
			{
				*uParam1 = Global_262145.f_7353;
			}
			break;
		
		case joaat("CLO_HSTM_G_2_0"):
			if (Global_262145.f_7354 >= 0)
			{
				*uParam1 = Global_262145.f_7354;
			}
			break;
		
		case joaat("CLO_HSTM_G_2_1"):
			if (Global_262145.f_7355 >= 0)
			{
				*uParam1 = Global_262145.f_7355;
			}
			break;
		
		case joaat("CLO_HSTM_G_3_0"):
			if (Global_262145.f_7356 >= 0)
			{
				*uParam1 = Global_262145.f_7356;
			}
			break;
		
		case joaat("CLO_HSTM_G_3_1"):
			if (Global_262145.f_7357 >= 0)
			{
				*uParam1 = Global_262145.f_7357;
			}
			break;
		
		case joaat("CLO_HSTM_G_4_0"):
			if (Global_262145.f_7358 >= 0)
			{
				*uParam1 = Global_262145.f_7358;
			}
			break;
		
		case joaat("CLO_HSTM_G_5_0"):
			if (Global_262145.f_7359 >= 0)
			{
				*uParam1 = Global_262145.f_7359;
			}
			break;
		
		case joaat("CLO_HSTM_G_5_1"):
			if (Global_262145.f_7360 >= 0)
			{
				*uParam1 = Global_262145.f_7360;
			}
			break;
		
		case joaat("CLO_HSTM_G_6_0"):
			if (Global_262145.f_7361 >= 0)
			{
				*uParam1 = Global_262145.f_7361;
			}
			break;
		
		case joaat("CLO_HSTF_G_0_0"):
			if (Global_262145.f_7503 >= 0)
			{
				*uParam1 = Global_262145.f_7503;
			}
			break;
		
		case joaat("CLO_HSTF_G_0_1"):
			if (Global_262145.f_7504 >= 0)
			{
				*uParam1 = Global_262145.f_7504;
			}
			break;
		
		case joaat("CLO_HSTF_G_1_0"):
			if (Global_262145.f_7505 >= 0)
			{
				*uParam1 = Global_262145.f_7505;
			}
			break;
		
		case joaat("CLO_HSTF_G_1_1"):
			if (Global_262145.f_7506 >= 0)
			{
				*uParam1 = Global_262145.f_7506;
			}
			break;
		
		case joaat("CLO_HSTF_G_2_0"):
			if (Global_262145.f_7507 >= 0)
			{
				*uParam1 = Global_262145.f_7507;
			}
			break;
		
		case joaat("CLO_HSTF_G_2_1"):
			if (Global_262145.f_7508 >= 0)
			{
				*uParam1 = Global_262145.f_7508;
			}
			break;
		
		case joaat("CLO_HSTF_G_3_0"):
			if (Global_262145.f_7509 >= 0)
			{
				*uParam1 = Global_262145.f_7509;
			}
			break;
		
		case joaat("CLO_HSTF_G_3_1"):
			if (Global_262145.f_7510 >= 0)
			{
				*uParam1 = Global_262145.f_7510;
			}
			break;
		
		case joaat("CLO_HSTF_G_4_0"):
			if (Global_262145.f_7511 >= 0)
			{
				*uParam1 = Global_262145.f_7511;
			}
			break;
		
		case joaat("CLO_HSTF_G_5_0"):
			if (Global_262145.f_7512 >= 0)
			{
				*uParam1 = Global_262145.f_7512;
			}
			break;
		
		case joaat("CLO_HSTF_G_5_1"):
			if (Global_262145.f_7513 >= 0)
			{
				*uParam1 = Global_262145.f_7513;
			}
			break;
		
		case joaat("CLO_HSTF_G_6_0"):
			if (Global_262145.f_7514 >= 0)
			{
				*uParam1 = Global_262145.f_7514;
			}
			break;
		
		case 1025727631:
			if (Global_262145.f_7362 >= 0)
			{
				*uParam1 = Global_262145.f_7362;
			}
			break;
		
		case 662251498:
			if (Global_262145.f_7363 >= 0)
			{
				*uParam1 = Global_262145.f_7363;
			}
			break;
		
		case 961432456:
			if (Global_262145.f_7364 >= 0)
			{
				*uParam1 = Global_262145.f_7364;
			}
			break;
		
		case 705211645:
			if (Global_262145.f_7365 >= 0)
			{
				*uParam1 = Global_262145.f_7365;
			}
			break;
		
		case -717814941:
			if (Global_262145.f_7366 >= 0)
			{
				*uParam1 = Global_262145.f_7366;
			}
			break;
		
		case 1183671814:
			if (Global_262145.f_7367 >= 0)
			{
				*uParam1 = Global_262145.f_7367;
			}
			break;
		
		case -3614586:
			if (Global_262145.f_7368 >= 0)
			{
				*uParam1 = Global_262145.f_7368;
			}
			break;
		
		case -250135773:
			if (Global_262145.f_7369 >= 0)
			{
				*uParam1 = Global_262145.f_7369;
			}
			break;
		
		case -1673817747:
			if (Global_262145.f_7370 >= 0)
			{
				*uParam1 = Global_262145.f_7370;
			}
			break;
		
		case 227669016:
			if (Global_262145.f_7371 >= 0)
			{
				*uParam1 = Global_262145.f_7371;
			}
			break;
		
		case -1488345219:
			if (Global_262145.f_7372 >= 0)
			{
				*uParam1 = Global_262145.f_7372;
			}
			break;
		
		case -1807575576:
			if (Global_262145.f_7373 >= 0)
			{
				*uParam1 = Global_262145.f_7373;
			}
			break;
		
		case -1577832117:
			if (Global_262145.f_7374 >= 0)
			{
				*uParam1 = Global_262145.f_7374;
			}
			break;
		
		case 1893781309:
			if (Global_262145.f_7375 >= 0)
			{
				*uParam1 = Global_262145.f_7375;
			}
			break;
		
		case 2130930562:
			if (Global_262145.f_7376 >= 0)
			{
				*uParam1 = Global_262145.f_7376;
			}
			break;
		
		case -1933736202:
			if (Global_262145.f_7377 >= 0)
			{
				*uParam1 = Global_262145.f_7377;
			}
			break;
		
		case -1678170771:
			if (Global_262145.f_7378 >= 0)
			{
				*uParam1 = Global_262145.f_7378;
			}
			break;
		
		case 240558705:
			if (Global_262145.f_7379 >= 0)
			{
				*uParam1 = Global_262145.f_7379;
			}
			break;
		
		case 2078309763:
			if (Global_262145.f_7380 >= 0)
			{
				*uParam1 = Global_262145.f_7380;
			}
			break;
		
		case 1183158990:
			if (Global_262145.f_7381 >= 0)
			{
				*uParam1 = Global_262145.f_7381;
			}
			break;
		
		case 1424928672:
			if (Global_262145.f_7382 >= 0)
			{
				*uParam1 = Global_262145.f_7382;
			}
			break;
		
		case -750048165:
			if (Global_262145.f_7383 >= 0)
			{
				*uParam1 = Global_262145.f_7383;
			}
			break;
		
		case 560285838:
			if (Global_262145.f_7384 >= 0)
			{
				*uParam1 = Global_262145.f_7384;
			}
			break;
		
		case 802710900:
			if (Global_262145.f_7385 >= 0)
			{
				*uParam1 = Global_262145.f_7385;
			}
			break;
		
		case -33127983:
			if (Global_262145.f_7386 >= 0)
			{
				*uParam1 = Global_262145.f_7386;
			}
			break;
		
		case -1887427410:
			if (Global_262145.f_7387 >= 0)
			{
				*uParam1 = Global_262145.f_7387;
			}
			break;
		
		case 2114617795:
			if (Global_262145.f_7388 >= 0)
			{
				*uParam1 = Global_262145.f_7388;
			}
			break;
		
		case 2137927174:
			if (Global_262145.f_7389 >= 0)
			{
				*uParam1 = Global_262145.f_7389;
			}
			break;
		
		case 1638593156:
			if (Global_262145.f_7390 >= 0)
			{
				*uParam1 = Global_262145.f_7390;
			}
			break;
		
		case -470583537:
			if (Global_262145.f_7391 >= 0)
			{
				*uParam1 = Global_262145.f_7391;
			}
			break;
		
		case -701146221:
			if (Global_262145.f_7392 >= 0)
			{
				*uParam1 = Global_262145.f_7392;
			}
			break;
		
		case -949764624:
			if (Global_262145.f_7393 >= 0)
			{
				*uParam1 = Global_262145.f_7393;
			}
			break;
		
		case -1466793906:
			if (Global_262145.f_7394 >= 0)
			{
				*uParam1 = Global_262145.f_7394;
			}
			break;
		
		case -316364806:
			if (Global_262145.f_7395 >= 0)
			{
				*uParam1 = Global_262145.f_7395;
			}
			break;
		
		case -698647960:
			if (Global_262145.f_7396 >= 0)
			{
				*uParam1 = Global_262145.f_7396;
			}
			break;
		
		case 239757893:
			if (Global_262145.f_7397 >= 0)
			{
				*uParam1 = Global_262145.f_7397;
			}
			break;
		
		case -527987008:
			if (Global_262145.f_7398 >= 0)
			{
				*uParam1 = Global_262145.f_7398;
			}
			break;
		
		case 836514156:
			if (Global_262145.f_7399 >= 0)
			{
				*uParam1 = Global_262145.f_7399;
			}
			break;
		
		case 68441561:
			if (Global_262145.f_7400 >= 0)
			{
				*uParam1 = Global_262145.f_7400;
			}
			break;
		
		case 1531348036:
			if (Global_262145.f_7401 >= 0)
			{
				*uParam1 = Global_262145.f_7401;
			}
			break;
		
		case 1166497990:
			if (Global_262145.f_7402 >= 0)
			{
				*uParam1 = Global_262145.f_7402;
			}
			break;
		
		case 2060698462:
			if (Global_262145.f_7403 >= 0)
			{
				*uParam1 = Global_262145.f_7403;
			}
			break;
		
		case -1927911453:
			if (Global_262145.f_7404 >= 0)
			{
				*uParam1 = Global_262145.f_7404;
			}
			break;
		
		case 350463998:
			if (Global_262145.f_7405 >= 0)
			{
				*uParam1 = Global_262145.f_7405;
			}
			break;
		
		case -357837937:
			if (Global_262145.f_7406 >= 0)
			{
				*uParam1 = Global_262145.f_7406;
			}
			break;
		
		case -111316750:
			if (Global_262145.f_7407 >= 0)
			{
				*uParam1 = Global_262145.f_7407;
			}
			break;
		
		case -1950182046:
			if (Global_262145.f_7408 >= 0)
			{
				*uParam1 = Global_262145.f_7408;
			}
			break;
		
		case -1735414020:
			if (Global_262145.f_7409 >= 0)
			{
				*uParam1 = Global_262145.f_7409;
			}
			break;
		
		case 1757957998:
			if (Global_262145.f_7410 >= 0)
			{
				*uParam1 = Global_262145.f_7410;
			}
			break;
		
		case joaat("CLO_HSTF_T_0_0"):
			if (Global_262145.f_7515 >= 0)
			{
				*uParam1 = Global_262145.f_7515;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_0"):
			if (Global_262145.f_7516 >= 0)
			{
				*uParam1 = Global_262145.f_7516;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_1"):
			if (Global_262145.f_7517 >= 0)
			{
				*uParam1 = Global_262145.f_7517;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_2"):
			if (Global_262145.f_7518 >= 0)
			{
				*uParam1 = Global_262145.f_7518;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_3"):
			if (Global_262145.f_7519 >= 0)
			{
				*uParam1 = Global_262145.f_7519;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_4"):
			if (Global_262145.f_7520 >= 0)
			{
				*uParam1 = Global_262145.f_7520;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_5"):
			if (Global_262145.f_7521 >= 0)
			{
				*uParam1 = Global_262145.f_7521;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_6"):
			if (Global_262145.f_7522 >= 0)
			{
				*uParam1 = Global_262145.f_7522;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_7"):
			if (Global_262145.f_7523 >= 0)
			{
				*uParam1 = Global_262145.f_7523;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_8"):
			if (Global_262145.f_7524 >= 0)
			{
				*uParam1 = Global_262145.f_7524;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_9"):
			if (Global_262145.f_7525 >= 0)
			{
				*uParam1 = Global_262145.f_7525;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_10"):
			if (Global_262145.f_7526 >= 0)
			{
				*uParam1 = Global_262145.f_7526;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_11"):
			if (Global_262145.f_7527 >= 0)
			{
				*uParam1 = Global_262145.f_7527;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_12"):
			if (Global_262145.f_7528 >= 0)
			{
				*uParam1 = Global_262145.f_7528;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_13"):
			if (Global_262145.f_7529 >= 0)
			{
				*uParam1 = Global_262145.f_7529;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_14"):
			if (Global_262145.f_7530 >= 0)
			{
				*uParam1 = Global_262145.f_7530;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_15"):
			if (Global_262145.f_7531 >= 0)
			{
				*uParam1 = Global_262145.f_7531;
			}
			break;
		
		case joaat("CLO_HSTF_T_2_0"):
			if (Global_262145.f_7532 >= 0)
			{
				*uParam1 = Global_262145.f_7532;
			}
			break;
		
		case joaat("CLO_HSTF_T_2_1"):
			if (Global_262145.f_7533 >= 0)
			{
				*uParam1 = Global_262145.f_7533;
			}
			break;
		
		case joaat("CLO_HSTF_T_2_2"):
			if (Global_262145.f_7534 >= 0)
			{
				*uParam1 = Global_262145.f_7534;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_0"):
			if (Global_262145.f_7535 >= 0)
			{
				*uParam1 = Global_262145.f_7535;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_1"):
			if (Global_262145.f_7536 >= 0)
			{
				*uParam1 = Global_262145.f_7536;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_2"):
			if (Global_262145.f_7537 >= 0)
			{
				*uParam1 = Global_262145.f_7537;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_3"):
			if (Global_262145.f_7538 >= 0)
			{
				*uParam1 = Global_262145.f_7538;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_4"):
			if (Global_262145.f_7539 >= 0)
			{
				*uParam1 = Global_262145.f_7539;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_5"):
			if (Global_262145.f_7540 >= 0)
			{
				*uParam1 = Global_262145.f_7540;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_6"):
			if (Global_262145.f_7541 >= 0)
			{
				*uParam1 = Global_262145.f_7541;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_7"):
			if (Global_262145.f_7542 >= 0)
			{
				*uParam1 = Global_262145.f_7542;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_8"):
			if (Global_262145.f_7543 >= 0)
			{
				*uParam1 = Global_262145.f_7543;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_9"):
			if (Global_262145.f_7544 >= 0)
			{
				*uParam1 = Global_262145.f_7544;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_10"):
			if (Global_262145.f_7545 >= 0)
			{
				*uParam1 = Global_262145.f_7545;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_11"):
			if (Global_262145.f_7546 >= 0)
			{
				*uParam1 = Global_262145.f_7546;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_12"):
			if (Global_262145.f_7547 >= 0)
			{
				*uParam1 = Global_262145.f_7547;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_13"):
			if (Global_262145.f_7548 >= 0)
			{
				*uParam1 = Global_262145.f_7548;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_14"):
			if (Global_262145.f_7549 >= 0)
			{
				*uParam1 = Global_262145.f_7549;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_15"):
			if (Global_262145.f_7550 >= 0)
			{
				*uParam1 = Global_262145.f_7550;
			}
			break;
		
		case joaat("CLO_HSTF_T_4_0"):
			if (Global_262145.f_7551 >= 0)
			{
				*uParam1 = Global_262145.f_7551;
			}
			break;
		
		case joaat("CLO_HSTF_T_4_1"):
			if (Global_262145.f_7552 >= 0)
			{
				*uParam1 = Global_262145.f_7552;
			}
			break;
		
		case joaat("CLO_HSTF_T_4_2"):
			if (Global_262145.f_7553 >= 0)
			{
				*uParam1 = Global_262145.f_7553;
			}
			break;
	}
	switch (iParam0)
	{
		case -1589747508:
		case -1458262221:
			if (Global_262145.f_7623 >= 0)
			{
				*uParam1 = Global_262145.f_7623;
			}
			break;
		
		case -1263204423:
		case 688336666:
			if (Global_262145.f_7624 >= 0)
			{
				*uParam1 = Global_262145.f_7624;
			}
			break;
		
		case 1903913450:
		case 1794390191:
			if (Global_262145.f_7625 >= 0)
			{
				*uParam1 = Global_262145.f_7625;
			}
			break;
		
		case 1606305392:
		case 1501959635:
			if (Global_262145.f_7626 >= 0)
			{
				*uParam1 = Global_262145.f_7626;
			}
			break;
		
		case 453038580:
		case 1494151153:
			if (Global_262145.f_7627 >= 0)
			{
				*uParam1 = Global_262145.f_7627;
			}
			break;
		
		case 749434185:
		case -684954578:
			if (Global_262145.f_7628 >= 0)
			{
				*uParam1 = Global_262145.f_7628;
			}
			break;
		
		case -543019853:
		case 1143865698:
			if (Global_262145.f_7629 >= 0)
			{
				*uParam1 = Global_262145.f_7629;
			}
			break;
		
		case -1380824876:
		case 1453696593:
			if (Global_262145.f_7630 >= 0)
			{
				*uParam1 = Global_262145.f_7630;
			}
			break;
		
		case 1418928174:
		case 1822210126:
			if (Global_262145.f_7631 >= 0)
			{
				*uParam1 = Global_262145.f_7631;
			}
			break;
		
		case -1108520337:
		case 1832890179:
			if (Global_262145.f_7632 >= 0)
			{
				*uParam1 = Global_262145.f_7632;
			}
			break;
		
		case -1655153523:
		case -1675220867:
			if (Global_262145.f_7633 >= 0)
			{
				*uParam1 = Global_262145.f_7633;
			}
			break;
		
		case 1419227486:
		case 1169259868:
			if (Global_262145.f_7634 >= 0)
			{
				*uParam1 = Global_262145.f_7634;
			}
			break;
		
		case 182001122:
		case 393879790:
			if (Global_262145.f_7635 >= 0)
			{
				*uParam1 = Global_262145.f_7635;
			}
			break;
		
		case 1948414067:
		case 181766053:
			if (Global_262145.f_7636 >= 0)
			{
				*uParam1 = Global_262145.f_7636;
			}
			break;
		
		case -1636481764:
		case -52073535:
			if (Global_262145.f_7637 >= 0)
			{
				*uParam1 = Global_262145.f_7637;
			}
			break;
		
		case 1593527510:
		case -196881500:
			if (Global_262145.f_7638 >= 0)
			{
				*uParam1 = Global_262145.f_7638;
			}
			break;
		
		case 1335537173:
		case -1150950935:
			if (Global_262145.f_7639 >= 0)
			{
				*uParam1 = Global_262145.f_7639;
			}
			break;
		
		case 1044646760:
		case -1749509489:
			if (Global_262145.f_7640 >= 0)
			{
				*uParam1 = Global_262145.f_7640;
			}
			break;
		
		case 690020638:
		case 1576412943:
			if (Global_262145.f_7641 >= 0)
			{
				*uParam1 = Global_262145.f_7641;
			}
			break;
		
		case -1541106533:
		case -1325109412:
			if (Global_262145.f_7642 >= 0)
			{
				*uParam1 = Global_262145.f_7642;
			}
			break;
		
		case -1285410026:
		case -1816316722:
			if (Global_262145.f_7643 >= 0)
			{
				*uParam1 = Global_262145.f_7643;
			}
			break;
		
		case -1994858864:
		case 398834913:
			if (Global_262145.f_7644 >= 0)
			{
				*uParam1 = Global_262145.f_7644;
			}
			break;
		
		case 152329849:
		case -387916012:
			if (Global_262145.f_7645 >= 0)
			{
				*uParam1 = Global_262145.f_7645;
			}
			break;
		
		case -575305796:
		case -149128309:
			if (Global_262145.f_7646 >= 0)
			{
				*uParam1 = Global_262145.f_7646;
			}
			break;
		
		case -345496799:
		case -1134754291:
			if (Global_262145.f_7647 >= 0)
			{
				*uParam1 = Global_262145.f_7647;
			}
			break;
		
		case -1070412617:
		case 1086262995:
			if (Global_262145.f_7648 >= 0)
			{
				*uParam1 = Global_262145.f_7648;
			}
			break;
		
		case 602051621:
		case 1308928350:
			if (Global_262145.f_7649 >= 0)
			{
				*uParam1 = Global_262145.f_7649;
			}
			break;
		
		case 847720814:
		case 876901854:
			if (Global_262145.f_7650 >= 0)
			{
				*uParam1 = Global_262145.f_7650;
			}
			break;
		
		case 146202058:
		case 25333851:
			if (Global_262145.f_7651 >= 0)
			{
				*uParam1 = Global_262145.f_7651;
			}
			break;
		
		case -2023336056:
		case -1075060108:
			if (Global_262145.f_7652 >= 0)
			{
				*uParam1 = Global_262145.f_7652;
			}
			break;
		
		case 1968943987:
		case -1768255534:
			if (Global_262145.f_7653 >= 0)
			{
				*uParam1 = Global_262145.f_7653;
			}
			break;
		
		case 1748605231:
		case -1537660081:
			if (Global_262145.f_7654 >= 0)
			{
				*uParam1 = Global_262145.f_7654;
			}
			break;
		
		case -657524136:
		case -98445625:
			if (Global_262145.f_7655 >= 0)
			{
				*uParam1 = Global_262145.f_7655;
			}
			break;
		
		case -1099577946:
		case 125006186:
			if (Global_262145.f_7656 >= 0)
			{
				*uParam1 = Global_262145.f_7656;
			}
			break;
		
		case -1406852859:
		case -574874116:
			if (Global_262145.f_7657 >= 0)
			{
				*uParam1 = Global_262145.f_7657;
			}
			break;
		
		case -1576071975:
		case -351881071:
			if (Global_262145.f_7658 >= 0)
			{
				*uParam1 = Global_262145.f_7658;
			}
			break;
		
		case 262694926:
		case 844580657:
			if (Global_262145.f_7659 >= 0)
			{
				*uParam1 = Global_262145.f_7659;
			}
			break;
		
		case -297786050:
		case 1085072348:
			if (Global_262145.f_7660 >= 0)
			{
				*uParam1 = Global_262145.f_7660;
			}
			break;
		
		case -598245011:
		case 367234634:
			if (Global_262145.f_7661 >= 0)
			{
				*uParam1 = Global_262145.f_7661;
			}
			break;
		
		case 51287699:
		case 1866236311:
			if (Global_262145.f_7662 >= 0)
			{
				*uParam1 = Global_262145.f_7662;
			}
			break;
		
		case 282341918:
		case 2144805580:
			if (Global_262145.f_7663 >= 0)
			{
				*uParam1 = Global_262145.f_7663;
			}
			break;
		
		case 665411528:
		case 1105274581:
			if (Global_262145.f_7664 >= 0)
			{
				*uParam1 = Global_262145.f_7664;
			}
			break;
		
		case 896006981:
		case 261046834:
			if (Global_262145.f_7665 >= 0)
			{
				*uParam1 = Global_262145.f_7665;
			}
			break;
		
		case 1205706800:
		case 1717432270:
			if (Global_262145.f_7666 >= 0)
			{
				*uParam1 = Global_262145.f_7666;
			}
			break;
		
		case 1577569412:
		case 893226382:
			if (Global_262145.f_7667 >= 0)
			{
				*uParam1 = Global_262145.f_7667;
			}
			break;
		
		case -681355849:
		case -537499581:
			if (Global_262145.f_7668 >= 0)
			{
				*uParam1 = Global_262145.f_7668;
			}
			break;
		
		case -387090229:
		case -767832882:
			if (Global_262145.f_7669 >= 0)
			{
				*uParam1 = Global_262145.f_7669;
			}
			break;
		
		case 1849066335:
		case -1127308804:
			if (Global_262145.f_7670 >= 0)
			{
				*uParam1 = Global_262145.f_7670;
			}
			break;
		
		case -2140657726:
		case -1366751887:
			if (Global_262145.f_7671 >= 0)
			{
				*uParam1 = Global_262145.f_7671;
			}
			break;
		
		case -1872246847:
		case -532387609:
			if (Global_262145.f_7672 >= 0)
			{
				*uParam1 = Global_262145.f_7672;
			}
			break;
		
		case -1580864899:
		case -771371926:
			if (Global_262145.f_7673 >= 0)
			{
				*uParam1 = Global_262145.f_7673;
			}
			break;
		
		case 871075530:
		case -2054081662:
			if (Global_262145.f_7674 >= 0)
			{
				*uParam1 = Global_262145.f_7674;
			}
			break;
		
		case 1429393752:
		case 1945079871:
			if (Global_262145.f_7675 >= 0)
			{
				*uParam1 = Global_262145.f_7675;
			}
			break;
		
		case 1688498235:
		case -1457718631:
			if (Global_262145.f_7676 >= 0)
			{
				*uParam1 = Global_262145.f_7676;
			}
			break;
		
		case -143845938:
		case -1689100540:
			if (Global_262145.f_7677 >= 0)
			{
				*uParam1 = Global_262145.f_7677;
			}
			break;
	}
	switch (iParam0)
	{
		case -1350759586:
		case -1908741671:
			if (Global_262145.f_7678 >= 0)
			{
				*uParam1 = Global_262145.f_7678;
			}
			break;
		
		case -1496483333:
		case 2146979156:
			if (Global_262145.f_7679 >= 0)
			{
				*uParam1 = Global_262145.f_7679;
			}
			break;
		
		case -1744118666:
		case -1450336130:
			if (Global_262145.f_7680 >= 0)
			{
				*uParam1 = Global_262145.f_7680;
			}
			break;
		
		case -79584538:
		case -1685060477:
			if (Global_262145.f_7681 >= 0)
			{
				*uParam1 = Global_262145.f_7681;
			}
			break;
		
		case -326892181:
		case -1768031561:
			if (Global_262145.f_7682 >= 0)
			{
				*uParam1 = Global_262145.f_7682;
			}
			break;
		
		case -540742675:
		case -2007540182:
			if (Global_262145.f_7683 >= 0)
			{
				*uParam1 = Global_262145.f_7683;
			}
			break;
		
		case -788640160:
		case -1292979368:
			if (Global_262145.f_7684 >= 0)
			{
				*uParam1 = Global_262145.f_7684;
			}
			break;
		
		case 872354924:
		case -1548413723:
			if (Global_262145.f_7685 >= 0)
			{
				*uParam1 = Global_262145.f_7685;
			}
			break;
		
		case 1640394746:
		case 1297377313:
			if (Global_262145.f_7686 >= 0)
			{
				*uParam1 = Global_262145.f_7686;
			}
			break;
		
		case 413293991:
		case 1075957180:
			if (Global_262145.f_7687 >= 0)
			{
				*uParam1 = Global_262145.f_7687;
			}
			break;
		
		case -401304228:
		case 68788931:
			if (Global_262145.f_7688 >= 0)
			{
				*uParam1 = Global_262145.f_7688;
			}
			break;
		
		case -126405087:
		case -2071452774:
			if (Global_262145.f_7689 >= 0)
			{
				*uParam1 = Global_262145.f_7689;
			}
			break;
		
		case -1281184647:
		case -641610228:
			if (Global_262145.f_7690 >= 0)
			{
				*uParam1 = Global_262145.f_7690;
			}
			break;
		
		case 375681531:
		case -1121282850:
			if (Global_262145.f_7691 >= 0)
			{
				*uParam1 = Global_262145.f_7691;
			}
			break;
		
		case 554436426:
		case -827705379:
			if (Global_262145.f_7692 >= 0)
			{
				*uParam1 = Global_262145.f_7692;
			}
			break;
		
		case 836905206:
		case 1882946301:
			if (Global_262145.f_7693 >= 0)
			{
				*uParam1 = Global_262145.f_7693;
			}
			break;
		
		case 1283513907:
		case 910231305:
			if (Global_262145.f_7694 >= 0)
			{
				*uParam1 = Global_262145.f_7694;
			}
			break;
		
		case 1329456045:
		case 1134469572:
			if (Global_262145.f_7695 >= 0)
			{
				*uParam1 = Global_262145.f_7695;
			}
			break;
		
		case -1733167464:
		case -1714401754:
			if (Global_262145.f_7696 >= 0)
			{
				*uParam1 = Global_262145.f_7696;
			}
			break;
		
		case 1814273404:
		case 388221135:
			if (Global_262145.f_7697 >= 0)
			{
				*uParam1 = Global_262145.f_7697;
			}
			break;
		
		case -1246870544:
		case 1481352928:
			if (Global_262145.f_7698 >= 0)
			{
				*uParam1 = Global_262145.f_7698;
			}
			break;
		
		case -1277468627:
		case -599699066:
			if (Global_262145.f_7699 >= 0)
			{
				*uParam1 = Global_262145.f_7699;
			}
			break;
		
		case 1269403595:
		case 25205764:
			if (Global_262145.f_7700 >= 0)
			{
				*uParam1 = Global_262145.f_7700;
			}
			break;
		
		case 549304820:
		case 1875376273:
			if (Global_262145.f_7701 >= 0)
			{
				*uParam1 = Global_262145.f_7701;
			}
			break;
		
		case 905176160:
		case 388712281:
			if (Global_262145.f_7702 >= 0)
			{
				*uParam1 = Global_262145.f_7702;
			}
			break;
		
		case -2093908262:
		case 92054524:
			if (Global_262145.f_7703 >= 0)
			{
				*uParam1 = Global_262145.f_7703;
			}
			break;
		
		case 286399133:
		case -1971278330:
			if (Global_262145.f_7704 >= 0)
			{
				*uParam1 = Global_262145.f_7704;
			}
			break;
		
		case 800479197:
		case 1983022442:
			if (Global_262145.f_7705 >= 0)
			{
				*uParam1 = Global_262145.f_7705;
			}
			break;
		
		case 1031205726:
		case 1013748191:
			if (Global_262145.f_7706 >= 0)
			{
				*uParam1 = Global_262145.f_7706;
			}
			break;
		
		case 172723464:
		case -1708372643:
			if (Global_262145.f_7707 >= 0)
			{
				*uParam1 = Global_262145.f_7707;
			}
			break;
		
		case -1738316381:
		case 816221686:
			if (Global_262145.f_7708 >= 0)
			{
				*uParam1 = Global_262145.f_7708;
			}
			break;
		
		case 244240892:
		case 1583704435:
			if (Global_262145.f_7709 >= 0)
			{
				*uParam1 = Global_262145.f_7709;
			}
			break;
		
		case -1077562261:
		case -2063354189:
			if (Global_262145.f_7710 >= 0)
			{
				*uParam1 = Global_262145.f_7710;
			}
			break;
		
		case -1307862793:
		case 1963529918:
			if (Global_262145.f_7711 >= 0)
			{
				*uParam1 = Global_262145.f_7711;
			}
			break;
		
		case -481657996:
		case -1559432507:
			if (Global_262145.f_7712 >= 0)
			{
				*uParam1 = Global_262145.f_7712;
			}
			break;
		
		case 1697513261:
		case -1723408583:
			if (Global_262145.f_7713 >= 0)
			{
				*uParam1 = Global_262145.f_7713;
			}
			break;
		
		case 1189593761:
		case -947799122:
			if (Global_262145.f_7714 >= 0)
			{
				*uParam1 = Global_262145.f_7714;
			}
			break;
		
		case -118315324:
		case -1335685775:
			if (Global_262145.f_7715 >= 0)
			{
				*uParam1 = Global_262145.f_7715;
			}
			break;
		
		case -365196970:
		case -574363598:
			if (Global_262145.f_7716 >= 0)
			{
				*uParam1 = Global_262145.f_7716;
			}
			break;
		
		case -631608864:
		case 89995120:
			if (Global_262145.f_7717 >= 0)
			{
				*uParam1 = Global_262145.f_7717;
			}
			break;
		
		case 609157208:
		case 108863710:
			if (Global_262145.f_7718 >= 0)
			{
				*uParam1 = Global_262145.f_7718;
			}
			break;
		
		case 820674102:
		case -1831910151:
			if (Global_262145.f_7719 >= 0)
			{
				*uParam1 = Global_262145.f_7719;
			}
			break;
		
		case 917047731:
		case -1399883655:
			if (Global_262145.f_7720 >= 0)
			{
				*uParam1 = Global_262145.f_7720;
			}
			break;
		
		case 919739708:
		case 417943049:
			if (Global_262145.f_7721 >= 0)
			{
				*uParam1 = Global_262145.f_7721;
			}
			break;
		
		case 1156888961:
		case -2141545238:
			if (Global_262145.f_7722 >= 0)
			{
				*uParam1 = Global_262145.f_7722;
			}
			break;
		
		case 337598419:
		case -1365083783:
			if (Global_262145.f_7723 >= 0)
			{
				*uParam1 = Global_262145.f_7723;
			}
			break;
		
		case 542961742:
		case 1702291235:
			if (Global_262145.f_7724 >= 0)
			{
				*uParam1 = Global_262145.f_7724;
			}
			break;
		
		case -276132182:
		case 1404257180:
			if (Global_262145.f_7725 >= 0)
			{
				*uParam1 = Global_262145.f_7725;
			}
			break;
		
		case -35574953:
		case -1245673539:
			if (Global_262145.f_7726 >= 0)
			{
				*uParam1 = Global_262145.f_7726;
			}
			break;
		
		case -986826254:
		case -479370474:
			if (Global_262145.f_7727 >= 0)
			{
				*uParam1 = Global_262145.f_7727;
			}
			break;
		
		case -647142800:
		case -1699589735:
			if (Global_262145.f_7728 >= 0)
			{
				*uParam1 = Global_262145.f_7728;
			}
			break;
		
		case -1106760798:
		case -957830643:
			if (Global_262145.f_7729 >= 0)
			{
				*uParam1 = Global_262145.f_7729;
			}
			break;
		
		case 131315783:
		case 1029506395:
			if (Global_262145.f_7730 >= 0)
			{
				*uParam1 = Global_262145.f_7730;
			}
			break;
		
		case 438852848:
		case 1996978351:
			if (Global_262145.f_7731 >= 0)
			{
				*uParam1 = Global_262145.f_7731;
			}
			break;
		
		case 1873414130:
		case -1598665712:
			if (Global_262145.f_7732 >= 0)
			{
				*uParam1 = Global_262145.f_7732;
			}
			break;
		
		case -1995294014:
		case 1317578674:
			if (Global_262145.f_7733 >= 0)
			{
				*uParam1 = Global_262145.f_7733;
			}
			break;
		
		case -776713211:
		case 109418413:
			if (Global_262145.f_7734 >= 0)
			{
				*uParam1 = Global_262145.f_7734;
			}
			break;
		
		case -579378293:
		case 540920605:
			if (Global_262145.f_7735 >= 0)
			{
				*uParam1 = Global_262145.f_7735;
			}
			break;
		
		case -1769646684:
		case 1777524358:
			if (Global_262145.f_7736 >= 0)
			{
				*uParam1 = Global_262145.f_7736;
			}
			break;
		
		case 804817040:
		case 326447500:
			if (Global_262145.f_7737 >= 0)
			{
				*uParam1 = Global_262145.f_7737;
			}
			break;
		
		case 1963987642:
		case -304585073:
			if (Global_262145.f_7738 >= 0)
			{
				*uParam1 = Global_262145.f_7738;
			}
			break;
		
		case -2033338827:
		case -602881280:
			if (Global_262145.f_7761 >= 0)
			{
				*uParam1 = Global_262145.f_7761;
			}
			break;
		
		case 1099249008:
		case -628210055:
			if (Global_262145.f_7762 >= 0)
			{
				*uParam1 = Global_262145.f_7762;
			}
			break;
		
		case -428376238:
		case -724485377:
			if (Global_262145.f_7763 >= 0)
			{
				*uParam1 = Global_262145.f_7763;
			}
			break;
		
		case -1260282841:
		case 1755603627:
			if (Global_262145.f_7764 >= 0)
			{
				*uParam1 = Global_262145.f_7764;
			}
			break;
		
		case -416284477:
		case 1516357158:
			if (Global_262145.f_7765 >= 0)
			{
				*uParam1 = Global_262145.f_7765;
			}
			break;
		
		case -729359503:
		case -1955518400:
			if (Global_262145.f_7766 >= 0)
			{
				*uParam1 = Global_262145.f_7766;
			}
			break;
		
		case -1650594404:
		case 2109181133:
			if (Global_262145.f_7767 >= 0)
			{
				*uParam1 = Global_262145.f_7767;
			}
			break;
		
		case 1733001464:
		case 1428077468:
			if (Global_262145.f_7768 >= 0)
			{
				*uParam1 = Global_262145.f_7768;
			}
			break;
		
		case -1037650255:
		case 1189158689:
			if (Global_262145.f_7769 >= 0)
			{
				*uParam1 = Global_262145.f_7769;
			}
			break;
		
		case -1950135833:
		case 1740857573:
			if (Global_262145.f_7770 >= 0)
			{
				*uParam1 = Global_262145.f_7770;
			}
			break;
		
		case 803377703:
		case 1502397560:
			if (Global_262145.f_7771 >= 0)
			{
				*uParam1 = Global_262145.f_7771;
			}
			break;
		
		case 120151925:
		case -568111949:
			if (Global_262145.f_7772 >= 0)
			{
				*uParam1 = Global_262145.f_7772;
			}
			break;
		
		case -790433047:
		case -337778648:
			if (Global_262145.f_7773 >= 0)
			{
				*uParam1 = Global_262145.f_7773;
			}
			break;
		
		case -664465652:
		case 1668462861:
			if (Global_262145.f_7774 >= 0)
			{
				*uParam1 = Global_262145.f_7774;
			}
			break;
		
		case -1454919470:
		case 1457987574:
			if (Global_262145.f_7775 >= 0)
			{
				*uParam1 = Global_262145.f_7775;
			}
			break;
		
		case -1131718823:
		case 1747337844:
			if (Global_262145.f_7776 >= 0)
			{
				*uParam1 = Global_262145.f_7776;
			}
			break;
		
		case -1915160075:
		case -1511735824:
			if (Global_262145.f_7777 >= 0)
			{
				*uParam1 = Global_262145.f_7777;
			}
			break;
		
		case -1626366878:
		case -1222254478:
			if (Global_262145.f_7778 >= 0)
			{
				*uParam1 = Global_262145.f_7778;
			}
			break;
		
		case 288850072:
		case -1437776191:
			if (Global_262145.f_7779 >= 0)
			{
				*uParam1 = Global_262145.f_7779;
			}
			break;
		
		case 49341451:
		case -607278651:
			if (Global_262145.f_7780 >= 0)
			{
				*uParam1 = Global_262145.f_7780;
			}
			break;
		
		case -169424393:
		case -830468310:
			if (Global_262145.f_7781 >= 0)
			{
				*uParam1 = Global_262145.f_7781;
			}
			break;
		
		case -408736400:
		case 4813500:
			if (Global_262145.f_7782 >= 0)
			{
				*uParam1 = Global_262145.f_7782;
			}
			break;
		
		case -629009618:
		case -279523113:
			if (Global_262145.f_7783 >= 0)
			{
				*uParam1 = Global_262145.f_7783;
			}
			break;
		
		case -337652395:
		case joaat("CLO_HSTF_H_2"):
			if (Global_262145.f_7740 >= 0)
			{
				*uParam1 = Global_262145.f_7740;
			}
			break;
		
		case 1042446809:
		case joaat("CLO_HSTF_H_3"):
			if (Global_262145.f_7739 >= 0)
			{
				*uParam1 = Global_262145.f_7739;
			}
			break;
		
		case 276078206:
		case joaat("CLO_HSTF_H_4"):
			if (Global_262145.f_7741 >= 0)
			{
				*uParam1 = Global_262145.f_7741;
			}
			break;
		
		case -763551088:
		case joaat("CLO_HSTF_H_5"):
			if (Global_262145.f_7742 >= 0)
			{
				*uParam1 = Global_262145.f_7742;
			}
			break;
		
		case -1529460925:
		case joaat("CLO_HSTF_H_6"):
			if (Global_262145.f_7743 >= 0)
			{
				*uParam1 = Global_262145.f_7743;
			}
			break;
		
		case -148050961:
		case joaat("CLO_HSTF_H_7"):
			if (Global_262145.f_7744 >= 0)
			{
				*uParam1 = Global_262145.f_7744;
			}
			break;
	}
}

void func_50(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 486242937:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6626));
			break;
		
		case 11157975:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6627));
			break;
		
		case -166777695:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6628));
			break;
		
		case 1943250984:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6629));
			break;
		
		case 1513714932:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6630));
			break;
		
		case 1224987273:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6631));
			break;
		
		case 1061601039:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6632));
			break;
		
		case -1836817011:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6633));
			break;
		
		case -2099198394:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6634));
			break;
		
		case 1983294706:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6635));
			break;
		
		case 1763743409:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6636));
			break;
		
		case 1638533048:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6637));
			break;
		
		case 1865458373:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6638));
			break;
		
		case -981840041:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6639));
			break;
		
		case -743183414:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6640));
			break;
		
		case 1017575242:
			if (Global_262145.f_6566 >= 0)
			{
				*uParam1 = Global_262145.f_6566;
			}
			break;
		
		case -436450826:
			if (Global_262145.f_6567 >= 0)
			{
				*uParam1 = Global_262145.f_6567;
			}
			break;
		
		case 388705363:
			if (Global_262145.f_6568 >= 0)
			{
				*uParam1 = Global_262145.f_6568;
			}
			break;
		
		case -1044283007:
			if (Global_262145.f_6569 >= 0)
			{
				*uParam1 = Global_262145.f_6569;
			}
			break;
		
		case -208444124:
			if (Global_262145.f_6570 >= 0)
			{
				*uParam1 = Global_262145.f_6570;
			}
			break;
		
		case 1207664400:
			if (Global_262145.f_6571 >= 0)
			{
				*uParam1 = Global_262145.f_6571;
			}
			break;
		
		case 685326540:
			if (Global_262145.f_6572 >= 0)
			{
				*uParam1 = Global_262145.f_6572;
			}
			break;
		
		case 507980712:
			if (Global_262145.f_6573 >= 0)
			{
				*uParam1 = Global_262145.f_6573;
			}
			break;
		
		case 224168403:
			if (Global_262145.f_6574 >= 0)
			{
				*uParam1 = Global_262145.f_6574;
			}
			break;
		
		case -19665722:
			if (Global_262145.f_6575 >= 0)
			{
				*uParam1 = Global_262145.f_6575;
			}
			break;
		
		case -567597622:
			if (Global_262145.f_6658 >= 0)
			{
				*uParam1 = Global_262145.f_6658;
			}
			break;
		
		case 983703469:
			if (Global_262145.f_6546 >= 0)
			{
				*uParam1 = Global_262145.f_6546;
			}
			break;
		
		case 1751120680:
			if (Global_262145.f_6547 >= 0)
			{
				*uParam1 = Global_262145.f_6547;
			}
			break;
		
		case 569765473:
			if (Global_262145.f_6548 >= 0)
			{
				*uParam1 = Global_262145.f_6548;
			}
			break;
		
		case 272321260:
			if (Global_262145.f_6549 >= 0)
			{
				*uParam1 = Global_262145.f_6549;
			}
			break;
		
		case -28039394:
			if (Global_262145.f_6550 >= 0)
			{
				*uParam1 = Global_262145.f_6550;
			}
			break;
		
		case -499985406:
			if (Global_262145.f_6551 >= 0)
			{
				*uParam1 = Global_262145.f_6551;
			}
			break;
		
		case -841176234:
			if (Global_262145.f_6552 >= 0)
			{
				*uParam1 = Global_262145.f_6552;
			}
			break;
		
		case -1080095013:
			if (Global_262145.f_6553 >= 0)
			{
				*uParam1 = Global_262145.f_6553;
			}
			break;
		
		case -849106328:
			if (Global_262145.f_6554 >= 0)
			{
				*uParam1 = Global_262145.f_6554;
			}
			break;
		
		case -1188462092:
			if (Global_262145.f_6555 >= 0)
			{
				*uParam1 = Global_262145.f_6555;
			}
			break;
		
		case -1234554049:
			if (Global_262145.f_6556 >= 0)
			{
				*uParam1 = Global_262145.f_6556;
			}
			break;
		
		case -1400168575:
			if (Global_262145.f_6557 >= 0)
			{
				*uParam1 = Global_262145.f_6557;
			}
			break;
		
		case -758256634:
			if (Global_262145.f_6558 >= 0)
			{
				*uParam1 = Global_262145.f_6558;
			}
			break;
		
		case -1053210403:
			if (Global_262145.f_6559 >= 0)
			{
				*uParam1 = Global_262145.f_6559;
			}
			break;
		
		case 1831772361:
			if (Global_262145.f_6560 >= 0)
			{
				*uParam1 = Global_262145.f_6560;
			}
			break;
		
		case -1855901249:
			if (Global_262145.f_6561 >= 0)
			{
				*uParam1 = Global_262145.f_6561;
			}
			break;
		
		case 1854925853:
			if (Global_262145.f_6562 >= 0)
			{
				*uParam1 = Global_262145.f_6562;
			}
			break;
		
		case 1608142514:
			if (Global_262145.f_6563 >= 0)
			{
				*uParam1 = Global_262145.f_6563;
			}
			break;
		
		case 1259611430:
			if (Global_262145.f_6564 >= 0)
			{
				*uParam1 = Global_262145.f_6564;
			}
			break;
		
		case 975930197:
			if (Global_262145.f_6565 >= 0)
			{
				*uParam1 = Global_262145.f_6565;
			}
			break;
		
		case -189071324:
			if (Global_262145.f_6576 >= 0)
			{
				*uParam1 = Global_262145.f_6576;
			}
			break;
		
		case 1735026049:
			if (Global_262145.f_6577 >= 0)
			{
				*uParam1 = Global_262145.f_6577;
			}
			break;
		
		case 475582303:
			if (Global_262145.f_6578 >= 0)
			{
				*uParam1 = Global_262145.f_6578;
			}
			break;
		
		case 185478346:
			if (Global_262145.f_6579 >= 0)
			{
				*uParam1 = Global_262145.f_6579;
			}
			break;
		
		case 1035112978:
			if (Global_262145.f_6580 >= 0)
			{
				*uParam1 = Global_262145.f_6580;
			}
			break;
		
		case 1389202323:
			if (Global_262145.f_6581 >= 0)
			{
				*uParam1 = Global_262145.f_6581;
			}
			break;
		
		case 1595647023:
			if (Global_262145.f_6582 >= 0)
			{
				*uParam1 = Global_262145.f_6582;
			}
			break;
		
		case -1168483685:
			if (Global_262145.f_6583 >= 0)
			{
				*uParam1 = Global_262145.f_6583;
			}
			break;
		
		case -946834169:
			if (Global_262145.f_6584 >= 0)
			{
				*uParam1 = Global_262145.f_6584;
			}
			break;
		
		case -1761700892:
			if (Global_262145.f_6585 >= 0)
			{
				*uParam1 = Global_262145.f_6585;
			}
			break;
		
		case -1912404917:
			if (Global_262145.f_6656 >= 0)
			{
				*uParam1 = Global_262145.f_6656;
			}
			break;
		
		case joaat("CLO_LTSF_O_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6641));
			break;
		
		case joaat("CLO_LTSF_O_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6642));
			break;
		
		case joaat("CLO_LTSF_O_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6643));
			break;
		
		case joaat("CLO_LTSF_O_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6644));
			break;
		
		case joaat("CLO_LTSF_O_4"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6645));
			break;
		
		case joaat("CLO_LTSF_O_5"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6646));
			break;
		
		case joaat("CLO_LTSF_O_6"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6647));
			break;
		
		case joaat("CLO_LTSF_O_7"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6648));
			break;
		
		case joaat("CLO_LTSF_O_8"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6649));
			break;
		
		case joaat("CLO_LTSF_O_9"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6650));
			break;
		
		case joaat("CLO_LTSF_O_10"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6651));
			break;
		
		case joaat("CLO_LTSF_O_11"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6652));
			break;
		
		case joaat("CLO_LTSF_O_12"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6653));
			break;
		
		case joaat("CLO_LTSF_O_13"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6654));
			break;
		
		case joaat("CLO_LTSF_O_14"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6655));
			break;
		
		case -1734014907:
			if (Global_262145.f_6606 >= 0)
			{
				*uParam1 = Global_262145.f_6606;
			}
			break;
		
		case 113828983:
			if (Global_262145.f_6607 >= 0)
			{
				*uParam1 = Global_262145.f_6607;
			}
			break;
		
		case -836701380:
			if (Global_262145.f_6608 >= 0)
			{
				*uParam1 = Global_262145.f_6608;
			}
			break;
		
		case -1428116292:
			if (Global_262145.f_6609 >= 0)
			{
				*uParam1 = Global_262145.f_6609;
			}
			break;
		
		case 2097107194:
			if (Global_262145.f_6610 >= 0)
			{
				*uParam1 = Global_262145.f_6610;
			}
			break;
		
		case 639725155:
			if (Global_262145.f_6611 >= 0)
			{
				*uParam1 = Global_262145.f_6611;
			}
			break;
		
		case 386289709:
			if (Global_262145.f_6612 >= 0)
			{
				*uParam1 = Global_262145.f_6612;
			}
			break;
		
		case 1249982250:
			if (Global_262145.f_6613 >= 0)
			{
				*uParam1 = Global_262145.f_6613;
			}
			break;
		
		case 924815463:
			if (Global_262145.f_6614 >= 0)
			{
				*uParam1 = Global_262145.f_6614;
			}
			break;
		
		case 1775924700:
			if (Global_262145.f_6615 >= 0)
			{
				*uParam1 = Global_262145.f_6615;
			}
			break;
		
		case joaat("CLO_LTSFH_0_0"):
			if (Global_262145.f_6586 >= 0)
			{
				*uParam1 = Global_262145.f_6586;
			}
			break;
		
		case joaat("CLO_LTSFH_0_1"):
			if (Global_262145.f_6587 >= 0)
			{
				*uParam1 = Global_262145.f_6587;
			}
			break;
		
		case joaat("CLO_LTSFH_0_2"):
			if (Global_262145.f_6588 >= 0)
			{
				*uParam1 = Global_262145.f_6588;
			}
			break;
		
		case joaat("CLO_LTSFH_0_3"):
			if (Global_262145.f_6589 >= 0)
			{
				*uParam1 = Global_262145.f_6589;
			}
			break;
		
		case joaat("CLO_LTSFH_0_4"):
			if (Global_262145.f_6590 >= 0)
			{
				*uParam1 = Global_262145.f_6590;
			}
			break;
		
		case joaat("CLO_LTSFL_0_0"):
			if (Global_262145.f_6591 >= 0)
			{
				*uParam1 = Global_262145.f_6591;
			}
			break;
		
		case joaat("CLO_LTSFL_0_1"):
			if (Global_262145.f_6592 >= 0)
			{
				*uParam1 = Global_262145.f_6592;
			}
			break;
		
		case joaat("CLO_LTSFL_0_2"):
			if (Global_262145.f_6593 >= 0)
			{
				*uParam1 = Global_262145.f_6593;
			}
			break;
		
		case joaat("CLO_LTSFL_0_3"):
			if (Global_262145.f_6594 >= 0)
			{
				*uParam1 = Global_262145.f_6594;
			}
			break;
		
		case joaat("CLO_LTSFL_0_4"):
			if (Global_262145.f_6595 >= 0)
			{
				*uParam1 = Global_262145.f_6595;
			}
			break;
		
		case joaat("CLO_LTSFU_0_0"):
			if (Global_262145.f_6596 >= 0)
			{
				*uParam1 = Global_262145.f_6596;
			}
			break;
		
		case joaat("CLO_LTSFU_0_1"):
			if (Global_262145.f_6597 >= 0)
			{
				*uParam1 = Global_262145.f_6597;
			}
			break;
		
		case joaat("CLO_LTSFU_0_2"):
			if (Global_262145.f_6598 >= 0)
			{
				*uParam1 = Global_262145.f_6598;
			}
			break;
		
		case joaat("CLO_LTSFU_0_3"):
			if (Global_262145.f_6599 >= 0)
			{
				*uParam1 = Global_262145.f_6599;
			}
			break;
		
		case joaat("CLO_LTSFU_0_4"):
			if (Global_262145.f_6600 >= 0)
			{
				*uParam1 = Global_262145.f_6600;
			}
			break;
		
		case joaat("CLO_LTSFU_1_0"):
			if (Global_262145.f_6601 >= 0)
			{
				*uParam1 = Global_262145.f_6601;
			}
			break;
		
		case joaat("CLO_LTSFU_1_1"):
			if (Global_262145.f_6602 >= 0)
			{
				*uParam1 = Global_262145.f_6602;
			}
			break;
		
		case joaat("CLO_LTSFU_1_2"):
			if (Global_262145.f_6603 >= 0)
			{
				*uParam1 = Global_262145.f_6603;
			}
			break;
		
		case joaat("CLO_LTSFU_1_3"):
			if (Global_262145.f_6604 >= 0)
			{
				*uParam1 = Global_262145.f_6604;
			}
			break;
		
		case joaat("CLO_LTSFU_1_4"):
			if (Global_262145.f_6605 >= 0)
			{
				*uParam1 = Global_262145.f_6605;
			}
			break;
		
		case 2014785516:
			if (Global_262145.f_6616 >= 0)
			{
				*uParam1 = Global_262145.f_6616;
			}
			break;
		
		case 1634992806:
			if (Global_262145.f_6617 >= 0)
			{
				*uParam1 = Global_262145.f_6617;
			}
			break;
		
		case -1508078610:
			if (Global_262145.f_6618 >= 0)
			{
				*uParam1 = Global_262145.f_6618;
			}
			break;
		
		case -1755189639:
			if (Global_262145.f_6619 >= 0)
			{
				*uParam1 = Global_262145.f_6619;
			}
			break;
		
		case -2107128699:
			if (Global_262145.f_6620 >= 0)
			{
				*uParam1 = Global_262145.f_6620;
			}
			break;
		
		case -1287626472:
			if (Global_262145.f_6621 >= 0)
			{
				*uParam1 = Global_262145.f_6621;
			}
			break;
		
		case 1380622126:
			if (Global_262145.f_6622 >= 0)
			{
				*uParam1 = Global_262145.f_6622;
			}
			break;
		
		case 1612462801:
			if (Global_262145.f_6623 >= 0)
			{
				*uParam1 = Global_262145.f_6623;
			}
			break;
		
		case 1790857237:
			if (Global_262145.f_6624 >= 0)
			{
				*uParam1 = Global_262145.f_6624;
			}
			break;
		
		case 2090529742:
			if (Global_262145.f_6625 >= 0)
			{
				*uParam1 = Global_262145.f_6625;
			}
			break;
		
		case -308456130:
			if (Global_262145.f_6657 >= 0)
			{
				*uParam1 = Global_262145.f_6657;
			}
			break;
	}
}

void func_51(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case -1736024889:
		case joaat("CLO_PIF_B_0_0"):
			if (Global_262145.f_6375 >= 0)
			{
				*uParam1 = Global_262145.f_6375;
			}
			break;
		
		case -714796311:
		case joaat("CLO_PIF_O_0"):
			if (Global_262145.f_6376 >= 0)
			{
				*uParam1 = Global_262145.f_6376;
			}
			break;
		
		case -1516065754:
			if (Global_262145.f_6377 >= 0)
			{
				*uParam1 = Global_262145.f_6377;
			}
			break;
		
		case 1654631855:
			if (Global_262145.f_6378 >= 0)
			{
				*uParam1 = Global_262145.f_6378;
			}
			break;
	}
}

void func_52(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case -1610663451:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case -1342383648:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case -1120144290:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case 1492757467:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case 74154800:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case 1696679066:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case -1811791700:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case -1514347487:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case 1068996624:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case 1550143851:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case 1855649238:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case 1594644157:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case 438291685:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case 734032114:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case -1046831960:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case -108491645:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case 1441514824:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case 1790504674:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case 1449707070:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case -217662594:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case -448716813:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case 242905701:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case -214909990:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case -454090921:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case 6936140:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case -2124036238:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case 1983328533:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case 1809980523:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case -123488800:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case 788636331:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case 624856869:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case 229236720:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case -1055963128:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case -1728251932:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case 1723536225:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case -1966744714:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case -1546351257:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
		
		case -773166702:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6140));
			break;
	}
}

void func_53(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 787219564:
			if (Global_262145.f_5582[101] >= 0)
			{
				*uParam1 = Global_262145.f_5582[101];
			}
			break;
		
		case 1446861130:
			if (Global_262145.f_5582[102] >= 0)
			{
				*uParam1 = Global_262145.f_5582[102];
			}
			break;
		
		case 1677423814:
			if (Global_262145.f_5582[103] >= 0)
			{
				*uParam1 = Global_262145.f_5582[103];
			}
			break;
		
		case 1629963538:
			if (Global_262145.f_5582[104] >= 0)
			{
				*uParam1 = Global_262145.f_5582[104];
			}
			break;
		
		case -1002763460:
			if (Global_262145.f_5582[105] >= 0)
			{
				*uParam1 = Global_262145.f_5582[105];
			}
			break;
		
		case -696930383:
			if (Global_262145.f_5582[106] >= 0)
			{
				*uParam1 = Global_262145.f_5582[106];
			}
			break;
		
		case -1530409898:
			if (Global_262145.f_5582[107] >= 0)
			{
				*uParam1 = Global_262145.f_5582[107];
			}
			break;
		
		case -2029612844:
			if (Global_262145.f_5582[108] >= 0)
			{
				*uParam1 = Global_262145.f_5582[108];
			}
			break;
		
		case 155391307:
			if (Global_262145.f_5582[109] >= 0)
			{
				*uParam1 = Global_262145.f_5582[109];
			}
			break;
		
		case 461453767:
			if (Global_262145.f_5582[110] >= 0)
			{
				*uParam1 = Global_262145.f_5582[110];
			}
			break;
		
		case 2144364744:
			if (Global_262145.f_5582[111] >= 0)
			{
				*uParam1 = Global_262145.f_5582[111];
			}
			break;
		
		case 1849574820:
			if (Global_262145.f_5582[112] >= 0)
			{
				*uParam1 = Global_262145.f_5582[112];
			}
			break;
		
		case 1543872819:
			if (Global_262145.f_5582[113] >= 0)
			{
				*uParam1 = Global_262145.f_5582[113];
			}
			break;
		
		case 1522179741:
			if (Global_262145.f_5582[114] >= 0)
			{
				*uParam1 = Global_262145.f_5582[114];
			}
			break;
		
		case -918553690:
			if (Global_262145.f_5582[115] >= 0)
			{
				*uParam1 = Global_262145.f_5582[115];
			}
			break;
		
		case -1232480710:
			if (Global_262145.f_5582[116] >= 0)
			{
				*uParam1 = Global_262145.f_5582[116];
			}
			break;
		
		case 324282147:
			if (Global_262145.f_5582[117] >= 0)
			{
				*uParam1 = Global_262145.f_5582[117];
			}
			break;
		
		case -324478539:
			if (Global_262145.f_5582[118] >= 0)
			{
				*uParam1 = Global_262145.f_5582[118];
			}
			break;
		
		case 40305969:
			if (Global_262145.f_5582[119] >= 0)
			{
				*uParam1 = Global_262145.f_5582[119];
			}
			break;
		
		case -835412575:
			if (Global_262145.f_5582[120] >= 0)
			{
				*uParam1 = Global_262145.f_5582[120];
			}
			break;
		
		case -562348498:
			if (Global_262145.f_5582[121] >= 0)
			{
				*uParam1 = Global_262145.f_5582[121];
			}
			break;
		
		case -506444584:
			if (Global_262145.f_5582[122] >= 0)
			{
				*uParam1 = Global_262145.f_5582[122];
			}
			break;
		
		case -205952854:
			if (Global_262145.f_5582[123] >= 0)
			{
				*uParam1 = Global_262145.f_5582[123];
			}
			break;
		
		case 63178943:
			if (Global_262145.f_5582[124] >= 0)
			{
				*uParam1 = Global_262145.f_5582[124];
			}
			break;
		
		case 829580944:
			if (Global_262145.f_5582[125] >= 0)
			{
				*uParam1 = Global_262145.f_5582[125];
			}
			break;
		
		case -474494180:
			if (Global_262145.f_5582[126] >= 0)
			{
				*uParam1 = Global_262145.f_5582[126];
			}
			break;
		
		case -388756986:
			if (Global_262145.f_5582[127] >= 0)
			{
				*uParam1 = Global_262145.f_5582[127];
			}
			break;
		
		case -20040198:
			if (Global_262145.f_5582[128] >= 0)
			{
				*uParam1 = Global_262145.f_5582[128];
			}
			break;
		
		case 425291872:
			if (Global_262145.f_5582[129] >= 0)
			{
				*uParam1 = Global_262145.f_5582[129];
			}
			break;
		
		case -344681321:
			if (Global_262145.f_5582[130] >= 0)
			{
				*uParam1 = Global_262145.f_5582[130];
			}
			break;
		
		case -121262279:
			if (Global_262145.f_5582[131] >= 0)
			{
				*uParam1 = Global_262145.f_5582[131];
			}
			break;
		
		case -849586073:
			if (Global_262145.f_5582[132] >= 0)
			{
				*uParam1 = Global_262145.f_5582[132];
			}
			break;
		
		case -1249117468:
			if (Global_262145.f_5582[133] >= 0)
			{
				*uParam1 = Global_262145.f_5582[133];
			}
			break;
		
		case 1408690849:
			if (Global_262145.f_5582[61] >= 0)
			{
				*uParam1 = Global_262145.f_5582[61];
			}
			break;
		
		case 1169444380:
			if (Global_262145.f_5582[62] >= 0)
			{
				*uParam1 = Global_262145.f_5582[62];
			}
			break;
		
		case 1544354513:
			if (Global_262145.f_5582[63] >= 0)
			{
				*uParam1 = Global_262145.f_5582[63];
			}
			break;
		
		case 1305108044:
			if (Global_262145.f_5582[64] >= 0)
			{
				*uParam1 = Global_262145.f_5582[64];
			}
			break;
		
		case 2098740455:
			if (Global_262145.f_5582[65] >= 0)
			{
				*uParam1 = Global_262145.f_5582[65];
			}
			break;
		
		case 1784289131:
			if (Global_262145.f_5582[66] >= 0)
			{
				*uParam1 = Global_262145.f_5582[66];
			}
			break;
		
		case -1717373444:
			if (Global_262145.f_5582[67] >= 0)
			{
				*uParam1 = Global_262145.f_5582[67];
			}
			break;
		
		case -1295243186:
			if (Global_262145.f_5582[68] >= 0)
			{
				*uParam1 = Global_262145.f_5582[68];
			}
			break;
		
		case -1509978443:
			if (Global_262145.f_5582[69] >= 0)
			{
				*uParam1 = Global_262145.f_5582[69];
			}
			break;
		
		case -818028239:
			if (Global_262145.f_5582[70] >= 0)
			{
				*uParam1 = Global_262145.f_5582[70];
			}
			break;
		
		case 1579855243:
			if (Global_262145.f_5582[71] >= 0)
			{
				*uParam1 = Global_262145.f_5582[71];
			}
			break;
		
		case -2096957641:
			if (Global_262145.f_5582[72] >= 0)
			{
				*uParam1 = Global_262145.f_5582[72];
			}
			break;
		
		case -557477635:
			if (Global_262145.f_5582[73] >= 0)
			{
				*uParam1 = Global_262145.f_5582[73];
			}
			break;
		
		case 1281387533:
			if (Global_262145.f_5582[74] >= 0)
			{
				*uParam1 = Global_262145.f_5582[74];
			}
			break;
		
		case 379977881:
			if (Global_262145.f_5582[75] >= 0)
			{
				*uParam1 = Global_262145.f_5582[75];
			}
			break;
		
		case 1641551616:
			if (Global_262145.f_5582[76] >= 0)
			{
				*uParam1 = Global_262145.f_5582[76];
			}
			break;
		
		case 1008388994:
			if (Global_262145.f_5582[77] >= 0)
			{
				*uParam1 = Global_262145.f_5582[77];
			}
			break;
		
		case 365625059:
			if (Global_262145.f_5582[78] >= 0)
			{
				*uParam1 = Global_262145.f_5582[78];
			}
			break;
		
		case -536046745:
			if (Global_262145.f_5582[79] >= 0)
			{
				*uParam1 = Global_262145.f_5582[79];
			}
			break;
		
		case 659464682:
			if (Global_262145.f_5582[80] >= 0)
			{
				*uParam1 = Global_262145.f_5582[80];
			}
			break;
		
		case 60250748:
			if (Global_262145.f_5582[81] >= 0)
			{
				*uParam1 = Global_262145.f_5582[81];
			}
			break;
		
		case -1757773384:
			if (Global_262145.f_5582[82] >= 0)
			{
				*uParam1 = Global_262145.f_5582[82];
			}
			break;
		
		case -1284137737:
			if (Global_262145.f_5582[83] >= 0)
			{
				*uParam1 = Global_262145.f_5582[83];
			}
			break;
		
		case -1767546029:
			if (Global_262145.f_5582[84] >= 0)
			{
				*uParam1 = Global_262145.f_5582[84];
			}
			break;
		
		case 1792743147:
			if (Global_262145.f_5582[85] >= 0)
			{
				*uParam1 = Global_262145.f_5582[85];
			}
			break;
		
		case 1486647918:
			if (Global_262145.f_5582[86] >= 0)
			{
				*uParam1 = Global_262145.f_5582[86];
			}
			break;
		
		case -1916019508:
			if (Global_262145.f_5582[87] >= 0)
			{
				*uParam1 = Global_262145.f_5582[87];
			}
			break;
		
		case 2097822537:
			if (Global_262145.f_5582[88] >= 0)
			{
				*uParam1 = Global_262145.f_5582[88];
			}
			break;
		
		case -1573354075:
			if (Global_262145.f_5582[89] >= 0)
			{
				*uParam1 = Global_262145.f_5582[89];
			}
			break;
		
		case -1886527408:
			if (Global_262145.f_5582[90] >= 0)
			{
				*uParam1 = Global_262145.f_5582[90];
			}
			break;
		
		case -992785702:
			if (Global_262145.f_5582[91] >= 0)
			{
				*uParam1 = Global_262145.f_5582[91];
			}
			break;
		
		case -1273648801:
			if (Global_262145.f_5582[92] >= 0)
			{
				*uParam1 = Global_262145.f_5582[92];
			}
			break;
		
		case -1012381560:
			if (Global_262145.f_5582[93] >= 0)
			{
				*uParam1 = Global_262145.f_5582[93];
			}
			break;
		
		case -1293277428:
			if (Global_262145.f_5582[94] >= 0)
			{
				*uParam1 = Global_262145.f_5582[94];
			}
			break;
		
		case -353019771:
			if (Global_262145.f_5582[95] >= 0)
			{
				*uParam1 = Global_262145.f_5582[95];
			}
			break;
		
		case 484195410:
			if (Global_262145.f_5582[96] >= 0)
			{
				*uParam1 = Global_262145.f_5582[96];
			}
			break;
		
		case -961474563:
			if (Global_262145.f_5582[97] >= 0)
			{
				*uParam1 = Global_262145.f_5582[97];
			}
			break;
		
		case -268016985:
			if (Global_262145.f_5582[98] >= 0)
			{
				*uParam1 = Global_262145.f_5582[98];
			}
			break;
		
		case -1215270468:
			if (Global_262145.f_5582[99] >= 0)
			{
				*uParam1 = Global_262145.f_5582[99];
			}
			break;
		
		case -1456220925:
			if (Global_262145.f_5582[100] >= 0)
			{
				*uParam1 = Global_262145.f_5582[100];
			}
			break;
		
		case -279906965:
			if (Global_262145.f_5582[0] >= 0)
			{
				*uParam1 = Global_262145.f_5582[0];
			}
			break;
		
		case -580562540:
			if (Global_262145.f_5582[1] >= 0)
			{
				*uParam1 = Global_262145.f_5582[1];
			}
			break;
		
		case -1176106346:
			if (Global_262145.f_5582[2] >= 0)
			{
				*uParam1 = Global_262145.f_5582[2];
			}
			break;
		
		case 679864276:
			if (Global_262145.f_5582[3] >= 0)
			{
				*uParam1 = Global_262145.f_5582[3];
			}
			break;
		
		case 583588954:
			if (Global_262145.f_5582[4] >= 0)
			{
				*uParam1 = Global_262145.f_5582[4];
			}
			break;
		
		case 286406893:
			if (Global_262145.f_5582[5] >= 0)
			{
				*uParam1 = Global_262145.f_5582[5];
			}
			break;
		
		case 17537248:
			if (Global_262145.f_5582[6] >= 0)
			{
				*uParam1 = Global_262145.f_5582[6];
			}
			break;
		
		case 1824780371:
			if (Global_262145.f_5582[7] >= 0)
			{
				*uParam1 = Global_262145.f_5582[7];
			}
			break;
		
		case 1585533902:
			if (Global_262145.f_5582[8] >= 0)
			{
				*uParam1 = Global_262145.f_5582[8];
			}
			break;
		
		case 1010896718:
			if (Global_262145.f_5582[9] >= 0)
			{
				*uParam1 = Global_262145.f_5582[9];
			}
			break;
		
		case -1768702692:
			if (Global_262145.f_5582[10] >= 0)
			{
				*uParam1 = Global_262145.f_5582[10];
			}
			break;
		
		case -1468210962:
			if (Global_262145.f_5582[11] >= 0)
			{
				*uParam1 = Global_262145.f_5582[11];
			}
			break;
		
		case -1673064831:
			if (Global_262145.f_5582[12] >= 0)
			{
				*uParam1 = Global_262145.f_5582[12];
			}
			break;
		
		case -1439716782:
			if (Global_262145.f_5582[13] >= 0)
			{
				*uParam1 = Global_262145.f_5582[13];
			}
			break;
		
		case -122402970:
			if (Global_262145.f_5582[14] >= 0)
			{
				*uParam1 = Global_262145.f_5582[14];
			}
			break;
		
		case 116253657:
			if (Global_262145.f_5582[15] >= 0)
			{
				*uParam1 = Global_262145.f_5582[15];
			}
			break;
		
		case 1673895295:
			if (Global_262145.f_5582[16] >= 0)
			{
				*uParam1 = Global_262145.f_5582[16];
			}
			break;
		
		case 1897412644:
			if (Global_262145.f_5582[17] >= 0)
			{
				*uParam1 = Global_262145.f_5582[17];
			}
			break;
		
		case -1103179152:
			if (Global_262145.f_5582[18] >= 0)
			{
				*uParam1 = Global_262145.f_5582[18];
			}
			break;
		
		case -846302961:
			if (Global_262145.f_5582[19] >= 0)
			{
				*uParam1 = Global_262145.f_5582[19];
			}
			break;
		
		case 718810029:
			if (Global_262145.f_5582[20] >= 0)
			{
				*uParam1 = Global_262145.f_5582[20];
			}
			break;
		
		case 2022950695:
			if (Global_262145.f_5582[21] >= 0)
			{
				*uParam1 = Global_262145.f_5582[21];
			}
			break;
		
		case -1574629874:
			if (Global_262145.f_5582[22] >= 0)
			{
				*uParam1 = Global_262145.f_5582[22];
			}
			break;
		
		case -1310151275:
			if (Global_262145.f_5582[23] >= 0)
			{
				*uParam1 = Global_262145.f_5582[23];
			}
			break;
		
		case -1600648456:
			if (Global_262145.f_5582[24] >= 0)
			{
				*uParam1 = Global_262145.f_5582[24];
			}
			break;
		
		case -1371593146:
			if (Global_262145.f_5582[25] >= 0)
			{
				*uParam1 = Global_262145.f_5582[25];
			}
			break;
		
		case -1123171357:
			if (Global_262145.f_5582[26] >= 0)
			{
				*uParam1 = Global_262145.f_5582[26];
			}
			break;
		
		case 1766661215:
			if (Global_262145.f_5582[27] >= 0)
			{
				*uParam1 = Global_262145.f_5582[27];
			}
			break;
		
		case 1139336374:
			if (Global_262145.f_5582[161] >= 0)
			{
				*uParam1 = Global_262145.f_5582[161];
			}
			break;
		
		case 875578693:
			if (Global_262145.f_5582[162] >= 0)
			{
				*uParam1 = Global_262145.f_5582[162];
			}
			break;
		
		case 1730325313:
			if (Global_262145.f_5582[163] >= 0)
			{
				*uParam1 = Global_262145.f_5582[163];
			}
			break;
		
		case 1481182606:
			if (Global_262145.f_5582[164] >= 0)
			{
				*uParam1 = Global_262145.f_5582[164];
			}
			break;
		
		case 2039500828:
			if (Global_262145.f_5582[165] >= 0)
			{
				*uParam1 = Global_262145.f_5582[165];
			}
			break;
		
		case -1959267497:
			if (Global_262145.f_5582[166] >= 0)
			{
				*uParam1 = Global_262145.f_5582[166];
			}
			break;
		
		case 1960625225:
			if (Global_262145.f_5582[157] >= 0)
			{
				*uParam1 = Global_262145.f_5582[157];
			}
			break;
		
		case 811809615:
			if (Global_262145.f_5582[158] >= 0)
			{
				*uParam1 = Global_262145.f_5582[158];
			}
			break;
		
		case 52093119:
			if (Global_262145.f_5582[159] >= 0)
			{
				*uParam1 = Global_262145.f_5582[159];
			}
			break;
		
		case -187939806:
			if (Global_262145.f_5582[160] >= 0)
			{
				*uParam1 = Global_262145.f_5582[160];
			}
			break;
		
		case -20173275:
			if (Global_262145.f_5582[28] >= 0)
			{
				*uParam1 = Global_262145.f_5582[28];
			}
			break;
		
		case -327317112:
			if (Global_262145.f_5582[29] >= 0)
			{
				*uParam1 = Global_262145.f_5582[29];
			}
			break;
		
		case -766683864:
			if (Global_262145.f_5582[30] >= 0)
			{
				*uParam1 = Global_262145.f_5582[30];
			}
			break;
		
		case 1342754977:
			if (Global_262145.f_5582[31] >= 0)
			{
				*uParam1 = Global_262145.f_5582[31];
			}
			break;
		
		case 1171373107:
			if (Global_262145.f_5582[32] >= 0)
			{
				*uParam1 = Global_262145.f_5582[32];
			}
			break;
		
		case 732334045:
			if (Global_262145.f_5582[33] >= 0)
			{
				*uParam1 = Global_262145.f_5582[33];
			}
			break;
		
		case 424076058:
			if (Global_262145.f_5582[34] >= 0)
			{
				*uParam1 = Global_262145.f_5582[34];
			}
			break;
		
		case -1683855405:
			if (Global_262145.f_5582[35] >= 0)
			{
				*uParam1 = Global_262145.f_5582[35];
			}
			break;
		
		case 1511098074:
			if (Global_262145.f_5582[36] >= 0)
			{
				*uParam1 = Global_262145.f_5582[36];
			}
			break;
		
		case -1725856511:
			if (Global_262145.f_5582[37] >= 0)
			{
				*uParam1 = Global_262145.f_5582[37];
			}
			break;
		
		case -740492681:
			if (Global_262145.f_5582[38] >= 0)
			{
				*uParam1 = Global_262145.f_5582[38];
			}
			break;
		
		case -995140580:
			if (Global_262145.f_5582[39] >= 0)
			{
				*uParam1 = Global_262145.f_5582[39];
			}
			break;
		
		case -286412648:
			if (Global_262145.f_5582[40] >= 0)
			{
				*uParam1 = Global_262145.f_5582[40];
			}
			break;
		
		case 205384504:
			if (Global_262145.f_5582[41] >= 0)
			{
				*uParam1 = Global_262145.f_5582[41];
			}
			break;
		
		case -26980475:
			if (Global_262145.f_5582[42] >= 0)
			{
				*uParam1 = Global_262145.f_5582[42];
			}
			break;
		
		case 671064767:
			if (Global_262145.f_5582[43] >= 0)
			{
				*uParam1 = Global_262145.f_5582[43];
			}
			break;
		
		case -1677060726:
			if (Global_262145.f_5582[45] >= 0)
			{
				*uParam1 = Global_262145.f_5582[45];
			}
			break;
		
		case -1229305110:
			if (Global_262145.f_5582[46] >= 0)
			{
				*uParam1 = Global_262145.f_5582[46];
			}
			break;
		
		case 2034552832:
			if (Global_262145.f_5582[47] >= 0)
			{
				*uParam1 = Global_262145.f_5582[47];
			}
			break;
		
		case -1406224941:
			if (Global_262145.f_5582[48] >= 0)
			{
				*uParam1 = Global_262145.f_5582[48];
			}
			break;
		
		case 1425180508:
			if (Global_262145.f_5582[49] >= 0)
			{
				*uParam1 = Global_262145.f_5582[49];
			}
			break;
		
		case -1883177736:
			if (Global_262145.f_5582[50] >= 0)
			{
				*uParam1 = Global_262145.f_5582[50];
			}
			break;
		
		case -1402597262:
			if (Global_262145.f_5582[51] >= 0)
			{
				*uParam1 = Global_262145.f_5582[51];
			}
			break;
		
		case 538539991:
			if (Global_262145.f_5582[52] >= 0)
			{
				*uParam1 = Global_262145.f_5582[52];
			}
			break;
		
		case 165366619:
			if (Global_262145.f_5582[53] >= 0)
			{
				*uParam1 = Global_262145.f_5582[53];
			}
			break;
		
		case 1757514026:
			if (Global_262145.f_5582[54] >= 0)
			{
				*uParam1 = Global_262145.f_5582[54];
			}
			break;
		
		case -707828904:
			if (Global_262145.f_5582[55] >= 0)
			{
				*uParam1 = Global_262145.f_5582[55];
			}
			break;
		
		case -990527067:
			if (Global_262145.f_5582[56] >= 0)
			{
				*uParam1 = Global_262145.f_5582[56];
			}
			break;
		
		case -1238096862:
			if (Global_262145.f_5582[57] >= 0)
			{
				*uParam1 = Global_262145.f_5582[57];
			}
			break;
		
		case 838474652:
			if (Global_262145.f_5582[58] >= 0)
			{
				*uParam1 = Global_262145.f_5582[58];
			}
			break;
		
		case -1190920460:
			if (Global_262145.f_5582[59] >= 0)
			{
				*uParam1 = Global_262145.f_5582[59];
			}
			break;
		
		case -335321858:
			if (Global_262145.f_5582[60] >= 0)
			{
				*uParam1 = Global_262145.f_5582[60];
			}
			break;
		
		case -1157702415:
			if (Global_262145.f_5582[134] >= 0)
			{
				*uParam1 = Global_262145.f_5582[134];
			}
			break;
		
		case 85815597:
			if (Global_262145.f_5582[135] >= 0)
			{
				*uParam1 = Global_262145.f_5582[135];
			}
			break;
		
		case -1754589750:
			if (Global_262145.f_5582[136] >= 0)
			{
				*uParam1 = Global_262145.f_5582[136];
			}
			break;
		
		case 332598944:
			if (Global_262145.f_5582[137] >= 0)
			{
				*uParam1 = Global_262145.f_5582[137];
			}
			break;
		
		case -2120914397:
			if (Global_262145.f_5582[138] >= 0)
			{
				*uParam1 = Global_262145.f_5582[138];
			}
			break;
		
		case 1857766511:
			if (Global_262145.f_5582[139] >= 0)
			{
				*uParam1 = Global_262145.f_5582[139];
			}
			break;
		
		case 1584374744:
			if (Global_262145.f_5582[140] >= 0)
			{
				*uParam1 = Global_262145.f_5582[140];
			}
			break;
		
		case 1527684374:
			if (Global_262145.f_5582[141] >= 0)
			{
				*uParam1 = Global_262145.f_5582[141];
			}
			break;
		
		case -915998259:
			if (Global_262145.f_5582[142] >= 0)
			{
				*uParam1 = Global_262145.f_5582[142];
			}
			break;
		
		case -1229400975:
			if (Global_262145.f_5582[143] >= 0)
			{
				*uParam1 = Global_262145.f_5582[143];
			}
			break;
		
		case 67406037:
			if (Global_262145.f_5582[144] >= 0)
			{
				*uParam1 = Global_262145.f_5582[144];
			}
			break;
		
		case 1536178155:
			if (Global_262145.f_5582[145] >= 0)
			{
				*uParam1 = Global_262145.f_5582[145];
			}
			break;
		
		case 1767297912:
			if (Global_262145.f_5582[146] >= 0)
			{
				*uParam1 = Global_262145.f_5582[146];
			}
			break;
		
		case 1054637700:
			if (Global_262145.f_5582[147] >= 0)
			{
				*uParam1 = Global_262145.f_5582[147];
			}
			break;
		
		case 1288444515:
			if (Global_262145.f_5582[148] >= 0)
			{
				*uParam1 = Global_262145.f_5582[148];
			}
			break;
		
		case -1522447504:
			if (Global_262145.f_5582[149] >= 0)
			{
				*uParam1 = Global_262145.f_5582[149];
			}
			break;
		
		case -1752780805:
			if (Global_262145.f_5582[150] >= 0)
			{
				*uParam1 = Global_262145.f_5582[150];
			}
			break;
		
		case -1061879209:
			if (Global_262145.f_5582[151] >= 0)
			{
				*uParam1 = Global_262145.f_5582[151];
			}
			break;
		
		case -1293326656:
			if (Global_262145.f_5582[152] >= 0)
			{
				*uParam1 = Global_262145.f_5582[152];
			}
			break;
		
		case 2117040061:
			if (Global_262145.f_5582[153] >= 0)
			{
				*uParam1 = Global_262145.f_5582[153];
			}
			break;
		
		case 1810420528:
			if (Global_262145.f_5582[154] >= 0)
			{
				*uParam1 = Global_262145.f_5582[154];
			}
			break;
		
		case -1462809348:
			if (Global_262145.f_5582[155] >= 0)
			{
				*uParam1 = Global_262145.f_5582[155];
			}
			break;
		
		case -182260974:
			if (Global_262145.f_5582[156] >= 0)
			{
				*uParam1 = Global_262145.f_5582[156];
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("CLO_HP_F_F_0_0"):
			if (Global_262145.f_5582[167] >= 0)
			{
				*uParam1 = Global_262145.f_5582[167];
			}
			break;
		
		case joaat("CLO_HP_F_F_0_1"):
			if (Global_262145.f_5582[168] >= 0)
			{
				*uParam1 = Global_262145.f_5582[168];
			}
			break;
		
		case joaat("CLO_HP_F_F_0_2"):
			if (Global_262145.f_5582[169] >= 0)
			{
				*uParam1 = Global_262145.f_5582[169];
			}
			break;
		
		case joaat("CLO_HP_F_F_0_3"):
			if (Global_262145.f_5582[170] >= 0)
			{
				*uParam1 = Global_262145.f_5582[170];
			}
			break;
		
		case joaat("CLO_HP_F_F_0_4"):
			if (Global_262145.f_5582[171] >= 0)
			{
				*uParam1 = Global_262145.f_5582[171];
			}
			break;
		
		case joaat("CLO_HP_F_F_0_5"):
			if (Global_262145.f_5582[172] >= 0)
			{
				*uParam1 = Global_262145.f_5582[172];
			}
			break;
		
		case joaat("CLO_HP_F_F_0_6"):
			if (Global_262145.f_5582[173] >= 0)
			{
				*uParam1 = Global_262145.f_5582[173];
			}
			break;
		
		case joaat("CLO_HP_F_F_0_7"):
			if (Global_262145.f_5582[174] >= 0)
			{
				*uParam1 = Global_262145.f_5582[174];
			}
			break;
		
		case joaat("CLO_HP_F_F_0_8"):
			if (Global_262145.f_5582[175] >= 0)
			{
				*uParam1 = Global_262145.f_5582[175];
			}
			break;
		
		case joaat("CLO_HP_F_F_0_9"):
			if (Global_262145.f_5582[176] >= 0)
			{
				*uParam1 = Global_262145.f_5582[176];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_0"):
			if (Global_262145.f_5582[177] >= 0)
			{
				*uParam1 = Global_262145.f_5582[177];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_1"):
			if (Global_262145.f_5582[178] >= 0)
			{
				*uParam1 = Global_262145.f_5582[178];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_2"):
			if (Global_262145.f_5582[179] >= 0)
			{
				*uParam1 = Global_262145.f_5582[179];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_3"):
			if (Global_262145.f_5582[180] >= 0)
			{
				*uParam1 = Global_262145.f_5582[180];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_4"):
			if (Global_262145.f_5582[181] >= 0)
			{
				*uParam1 = Global_262145.f_5582[181];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_5"):
			if (Global_262145.f_5582[182] >= 0)
			{
				*uParam1 = Global_262145.f_5582[182];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_6"):
			if (Global_262145.f_5582[183] >= 0)
			{
				*uParam1 = Global_262145.f_5582[183];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_7"):
			if (Global_262145.f_5582[184] >= 0)
			{
				*uParam1 = Global_262145.f_5582[184];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_8"):
			if (Global_262145.f_5582[185] >= 0)
			{
				*uParam1 = Global_262145.f_5582[185];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_9"):
			if (Global_262145.f_5582[186] >= 0)
			{
				*uParam1 = Global_262145.f_5582[186];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_10"):
			if (Global_262145.f_5582[187] >= 0)
			{
				*uParam1 = Global_262145.f_5582[187];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_11"):
			if (Global_262145.f_5582[188] >= 0)
			{
				*uParam1 = Global_262145.f_5582[188];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_12"):
			if (Global_262145.f_5582[189] >= 0)
			{
				*uParam1 = Global_262145.f_5582[189];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_13"):
			if (Global_262145.f_5582[190] >= 0)
			{
				*uParam1 = Global_262145.f_5582[190];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_14"):
			if (Global_262145.f_5582[191] >= 0)
			{
				*uParam1 = Global_262145.f_5582[191];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_15"):
			if (Global_262145.f_5582[192] >= 0)
			{
				*uParam1 = Global_262145.f_5582[192];
			}
			break;
		
		case joaat("CLO_HP_F_G_0_0"):
			if (Global_262145.f_5582[193] >= 0)
			{
				*uParam1 = Global_262145.f_5582[193];
			}
			break;
		
		case joaat("CLO_HP_F_G_0_1"):
			if (Global_262145.f_5582[194] >= 0)
			{
				*uParam1 = Global_262145.f_5582[194];
			}
			break;
		
		case joaat("CLO_HP_F_G_0_2"):
			if (Global_262145.f_5582[195] >= 0)
			{
				*uParam1 = Global_262145.f_5582[195];
			}
			break;
		
		case joaat("CLO_HP_F_G_0_3"):
			if (Global_262145.f_5582[196] >= 0)
			{
				*uParam1 = Global_262145.f_5582[196];
			}
			break;
		
		case joaat("CLO_HP_F_G_0_4"):
			if (Global_262145.f_5582[197] >= 0)
			{
				*uParam1 = Global_262145.f_5582[197];
			}
			break;
		
		case joaat("CLO_HP_F_G_0_5"):
			if (Global_262145.f_5582[198] >= 0)
			{
				*uParam1 = Global_262145.f_5582[198];
			}
			break;
		
		case joaat("CLO_HP_F_G_0_6"):
			if (Global_262145.f_5582[199] >= 0)
			{
				*uParam1 = Global_262145.f_5582[199];
			}
			break;
		
		case joaat("CLO_HP_F_G_0_7"):
			if (Global_262145.f_5582[200] >= 0)
			{
				*uParam1 = Global_262145.f_5582[200];
			}
			break;
		
		case joaat("CLO_HP_F_G_1_0"):
			if (Global_262145.f_5582[201] >= 0)
			{
				*uParam1 = Global_262145.f_5582[201];
			}
			break;
		
		case joaat("CLO_HP_F_G_1_1"):
			if (Global_262145.f_5582[202] >= 0)
			{
				*uParam1 = Global_262145.f_5582[202];
			}
			break;
		
		case joaat("CLO_HP_F_G_1_2"):
			if (Global_262145.f_5582[203] >= 0)
			{
				*uParam1 = Global_262145.f_5582[203];
			}
			break;
		
		case joaat("CLO_HP_F_G_1_3"):
			if (Global_262145.f_5582[204] >= 0)
			{
				*uParam1 = Global_262145.f_5582[204];
			}
			break;
		
		case joaat("CLO_HP_F_G_1_4"):
			if (Global_262145.f_5582[205] >= 0)
			{
				*uParam1 = Global_262145.f_5582[205];
			}
			break;
		
		case joaat("CLO_HP_F_G_1_5"):
			if (Global_262145.f_5582[206] >= 0)
			{
				*uParam1 = Global_262145.f_5582[206];
			}
			break;
		
		case joaat("CLO_HP_F_G_1_6"):
			if (Global_262145.f_5582[207] >= 0)
			{
				*uParam1 = Global_262145.f_5582[207];
			}
			break;
		
		case joaat("CLO_HP_F_G_1_7"):
			if (Global_262145.f_5582[208] >= 0)
			{
				*uParam1 = Global_262145.f_5582[208];
			}
			break;
		
		case joaat("CLO_HP_F_H_0_0"):
			if (Global_262145.f_5582[210] >= 0)
			{
				*uParam1 = Global_262145.f_5582[210];
			}
			break;
		
		case joaat("CLO_HP_F_H_0_1"):
			if (Global_262145.f_5582[211] >= 0)
			{
				*uParam1 = Global_262145.f_5582[211];
			}
			break;
		
		case joaat("CLO_HP_F_H_0_2"):
			if (Global_262145.f_5582[212] >= 0)
			{
				*uParam1 = Global_262145.f_5582[212];
			}
			break;
		
		case joaat("CLO_HP_F_H_0_3"):
			if (Global_262145.f_5582[213] >= 0)
			{
				*uParam1 = Global_262145.f_5582[213];
			}
			break;
		
		case joaat("CLO_HP_F_H_0_4"):
			if (Global_262145.f_5582[214] >= 0)
			{
				*uParam1 = Global_262145.f_5582[214];
			}
			break;
		
		case joaat("CLO_HP_F_H_0_5"):
			if (Global_262145.f_5582[215] >= 0)
			{
				*uParam1 = Global_262145.f_5582[215];
			}
			break;
		
		case joaat("CLO_HP_F_H_0_6"):
			if (Global_262145.f_5582[216] >= 0)
			{
				*uParam1 = Global_262145.f_5582[216];
			}
			break;
		
		case joaat("CLO_HP_F_H_0_7"):
			if (Global_262145.f_5582[217] >= 0)
			{
				*uParam1 = Global_262145.f_5582[217];
			}
			break;
		
		case joaat("CLO_HP_F_H_1_0"):
			if (Global_262145.f_5582[218] >= 0)
			{
				*uParam1 = Global_262145.f_5582[218];
			}
			break;
		
		case joaat("CLO_HP_F_H_1_1"):
			if (Global_262145.f_5582[219] >= 0)
			{
				*uParam1 = Global_262145.f_5582[219];
			}
			break;
		
		case joaat("CLO_HP_F_H_1_2"):
			if (Global_262145.f_5582[220] >= 0)
			{
				*uParam1 = Global_262145.f_5582[220];
			}
			break;
		
		case joaat("CLO_HP_F_H_1_3"):
			if (Global_262145.f_5582[221] >= 0)
			{
				*uParam1 = Global_262145.f_5582[221];
			}
			break;
		
		case joaat("CLO_HP_F_H_1_4"):
			if (Global_262145.f_5582[222] >= 0)
			{
				*uParam1 = Global_262145.f_5582[222];
			}
			break;
		
		case joaat("CLO_HP_F_L_0_0"):
			if (Global_262145.f_5582[223] >= 0)
			{
				*uParam1 = Global_262145.f_5582[223];
			}
			break;
		
		case joaat("CLO_HP_F_L_0_1"):
			if (Global_262145.f_5582[224] >= 0)
			{
				*uParam1 = Global_262145.f_5582[224];
			}
			break;
		
		case joaat("CLO_HP_F_L_0_2"):
			if (Global_262145.f_5582[225] >= 0)
			{
				*uParam1 = Global_262145.f_5582[225];
			}
			break;
		
		case joaat("CLO_HP_F_L_0_3"):
			if (Global_262145.f_5582[226] >= 0)
			{
				*uParam1 = Global_262145.f_5582[226];
			}
			break;
		
		case joaat("CLO_HP_F_L_0_4"):
			if (Global_262145.f_5582[227] >= 0)
			{
				*uParam1 = Global_262145.f_5582[227];
			}
			break;
		
		case joaat("CLO_HP_F_L_0_5"):
			if (Global_262145.f_5582[228] >= 0)
			{
				*uParam1 = Global_262145.f_5582[228];
			}
			break;
		
		case joaat("CLO_HP_F_L_0_6"):
			if (Global_262145.f_5582[229] >= 0)
			{
				*uParam1 = Global_262145.f_5582[229];
			}
			break;
		
		case joaat("CLO_HP_F_L_0_7"):
			if (Global_262145.f_5582[230] >= 0)
			{
				*uParam1 = Global_262145.f_5582[230];
			}
			break;
		
		case joaat("CLO_HP_F_L_0_8"):
			if (Global_262145.f_5582[231] >= 0)
			{
				*uParam1 = Global_262145.f_5582[231];
			}
			break;
		
		case joaat("CLO_HP_F_L_0_9"):
			if (Global_262145.f_5582[232] >= 0)
			{
				*uParam1 = Global_262145.f_5582[232];
			}
			break;
		
		case joaat("CLO_HP_F_L_0_10"):
			if (Global_262145.f_5582[233] >= 0)
			{
				*uParam1 = Global_262145.f_5582[233];
			}
			break;
		
		case joaat("CLO_HP_F_L_0_11"):
			if (Global_262145.f_5582[234] >= 0)
			{
				*uParam1 = Global_262145.f_5582[234];
			}
			break;
		
		case joaat("CLO_HP_F_L_0_12"):
			if (Global_262145.f_5582[235] >= 0)
			{
				*uParam1 = Global_262145.f_5582[235];
			}
			break;
		
		case joaat("CLO_HP_F_L_1_0"):
			if (Global_262145.f_5582[236] >= 0)
			{
				*uParam1 = Global_262145.f_5582[236];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_0"):
			if (Global_262145.f_5582[237] >= 0)
			{
				*uParam1 = Global_262145.f_5582[237];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_1"):
			if (Global_262145.f_5582[238] >= 0)
			{
				*uParam1 = Global_262145.f_5582[238];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_2"):
			if (Global_262145.f_5582[239] >= 0)
			{
				*uParam1 = Global_262145.f_5582[239];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_3"):
			if (Global_262145.f_5582[240] >= 0)
			{
				*uParam1 = Global_262145.f_5582[240];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_4"):
			if (Global_262145.f_5582[241] >= 0)
			{
				*uParam1 = Global_262145.f_5582[241];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_5"):
			if (Global_262145.f_5582[242] >= 0)
			{
				*uParam1 = Global_262145.f_5582[242];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_6"):
			if (Global_262145.f_5582[243] >= 0)
			{
				*uParam1 = Global_262145.f_5582[243];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_7"):
			if (Global_262145.f_5582[244] >= 0)
			{
				*uParam1 = Global_262145.f_5582[244];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_8"):
			if (Global_262145.f_5582[245] >= 0)
			{
				*uParam1 = Global_262145.f_5582[245];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_9"):
			if (Global_262145.f_5582[246] >= 0)
			{
				*uParam1 = Global_262145.f_5582[246];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_10"):
			if (Global_262145.f_5582[247] >= 0)
			{
				*uParam1 = Global_262145.f_5582[247];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_11"):
			if (Global_262145.f_5582[248] >= 0)
			{
				*uParam1 = Global_262145.f_5582[248];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_12"):
			if (Global_262145.f_5582[249] >= 0)
			{
				*uParam1 = Global_262145.f_5582[249];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_13"):
			if (Global_262145.f_5582[250] >= 0)
			{
				*uParam1 = Global_262145.f_5582[250];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_14"):
			if (Global_262145.f_5582[251] >= 0)
			{
				*uParam1 = Global_262145.f_5582[251];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_15"):
			if (Global_262145.f_5582[252] >= 0)
			{
				*uParam1 = Global_262145.f_5582[252];
			}
			break;
		
		case joaat("CLO_HP_F_U_0_0"):
			if (Global_262145.f_5582[253] >= 0)
			{
				*uParam1 = Global_262145.f_5582[253];
			}
			break;
		
		case joaat("CLO_HP_F_U_0_1"):
			if (Global_262145.f_5582[254] >= 0)
			{
				*uParam1 = Global_262145.f_5582[254];
			}
			break;
		
		case joaat("CLO_HP_F_U_0_2"):
			if (Global_262145.f_5582[255] >= 0)
			{
				*uParam1 = Global_262145.f_5582[255];
			}
			break;
		
		case joaat("CLO_HP_F_U_0_3"):
			if (Global_262145.f_5582[256] >= 0)
			{
				*uParam1 = Global_262145.f_5582[256];
			}
			break;
		
		case joaat("CLO_HP_F_U_0_4"):
			if (Global_262145.f_5582[257] >= 0)
			{
				*uParam1 = Global_262145.f_5582[257];
			}
			break;
		
		case joaat("CLO_HP_F_U_0_5"):
			if (Global_262145.f_5582[258] >= 0)
			{
				*uParam1 = Global_262145.f_5582[258];
			}
			break;
		
		case joaat("CLO_HP_F_U_0_6"):
			if (Global_262145.f_5582[259] >= 0)
			{
				*uParam1 = Global_262145.f_5582[259];
			}
			break;
		
		case joaat("CLO_HP_F_U_1_0"):
			if (Global_262145.f_5582[260] >= 0)
			{
				*uParam1 = Global_262145.f_5582[260];
			}
			break;
		
		case joaat("CLO_HP_F_U_1_1"):
			if (Global_262145.f_5582[261] >= 0)
			{
				*uParam1 = Global_262145.f_5582[261];
			}
			break;
		
		case joaat("CLO_HP_F_U_1_2"):
			if (Global_262145.f_5582[262] >= 0)
			{
				*uParam1 = Global_262145.f_5582[262];
			}
			break;
		
		case joaat("CLO_HP_F_U_2_0"):
			if (Global_262145.f_5582[263] >= 0)
			{
				*uParam1 = Global_262145.f_5582[263];
			}
			break;
		
		case joaat("CLO_HP_F_U_2_1"):
			if (Global_262145.f_5582[264] >= 0)
			{
				*uParam1 = Global_262145.f_5582[264];
			}
			break;
		
		case joaat("CLO_HP_F_U_2_2"):
			if (Global_262145.f_5582[265] >= 0)
			{
				*uParam1 = Global_262145.f_5582[265];
			}
			break;
		
		case joaat("CLO_HP_F_U_2_3"):
			if (Global_262145.f_5582[266] >= 0)
			{
				*uParam1 = Global_262145.f_5582[266];
			}
			break;
		
		case joaat("CLO_HP_F_U_2_4"):
			if (Global_262145.f_5582[267] >= 0)
			{
				*uParam1 = Global_262145.f_5582[267];
			}
			break;
		
		case joaat("CLO_HP_F_U_2_5"):
			if (Global_262145.f_5582[268] >= 0)
			{
				*uParam1 = Global_262145.f_5582[268];
			}
			break;
		
		case joaat("CLO_HP_F_U_2_6"):
			if (Global_262145.f_5582[269] >= 0)
			{
				*uParam1 = Global_262145.f_5582[269];
			}
			break;
		
		case joaat("CLO_HP_F_U_2_7"):
			if (Global_262145.f_5582[270] >= 0)
			{
				*uParam1 = Global_262145.f_5582[270];
			}
			break;
		
		case joaat("CLO_HP_F_U_2_8"):
			if (Global_262145.f_5582[271] >= 0)
			{
				*uParam1 = Global_262145.f_5582[271];
			}
			break;
		
		case joaat("CLO_HP_F_U_3_0"):
			if (Global_262145.f_5582[272] >= 0)
			{
				*uParam1 = Global_262145.f_5582[272];
			}
			break;
		
		case joaat("CLO_HP_F_U_4_0"):
			if (Global_262145.f_5582[273] >= 0)
			{
				*uParam1 = Global_262145.f_5582[273];
			}
			break;
		
		case joaat("CLO_HP_F_U_4_1"):
			if (Global_262145.f_5582[274] >= 0)
			{
				*uParam1 = Global_262145.f_5582[274];
			}
			break;
		
		case joaat("CLO_HP_F_U_4_2"):
			if (Global_262145.f_5582[275] >= 0)
			{
				*uParam1 = Global_262145.f_5582[275];
			}
			break;
		
		case joaat("CLO_HP_F_U_4_3"):
			if (Global_262145.f_5582[276] >= 0)
			{
				*uParam1 = Global_262145.f_5582[276];
			}
			break;
		
		case joaat("CLO_HP_F_U_4_4"):
			if (Global_262145.f_5582[277] >= 0)
			{
				*uParam1 = Global_262145.f_5582[277];
			}
			break;
		
		case joaat("CLO_HP_F_U_4_5"):
			if (Global_262145.f_5582[278] >= 0)
			{
				*uParam1 = Global_262145.f_5582[278];
			}
			break;
		
		case joaat("CLO_HP_F_U_4_6"):
			if (Global_262145.f_5582[279] >= 0)
			{
				*uParam1 = Global_262145.f_5582[279];
			}
			break;
		
		case joaat("CLO_HP_F_U_4_7"):
			if (Global_262145.f_5582[280] >= 0)
			{
				*uParam1 = Global_262145.f_5582[280];
			}
			break;
		
		case joaat("CLO_HP_F_U_4_8"):
			if (Global_262145.f_5582[281] >= 0)
			{
				*uParam1 = Global_262145.f_5582[281];
			}
			break;
		
		case joaat("CLO_HP_F_U_4_9"):
			if (Global_262145.f_5582[282] >= 0)
			{
				*uParam1 = Global_262145.f_5582[282];
			}
			break;
		
		case joaat("CLO_HP_F_U_4_10"):
			if (Global_262145.f_5582[283] >= 0)
			{
				*uParam1 = Global_262145.f_5582[283];
			}
			break;
		
		case joaat("CLO_HP_F_U_4_11"):
			if (Global_262145.f_5582[284] >= 0)
			{
				*uParam1 = Global_262145.f_5582[284];
			}
			break;
		
		case joaat("CLO_HP_F_U_5_0"):
			if (Global_262145.f_5582[285] >= 0)
			{
				*uParam1 = Global_262145.f_5582[285];
			}
			break;
		
		case joaat("CLO_HP_F_U_5_1"):
			if (Global_262145.f_5582[286] >= 0)
			{
				*uParam1 = Global_262145.f_5582[286];
			}
			break;
		
		case joaat("CLO_HP_F_U_5_2"):
			if (Global_262145.f_5582[287] >= 0)
			{
				*uParam1 = Global_262145.f_5582[287];
			}
			break;
		
		case joaat("CLO_HP_F_U_5_3"):
			if (Global_262145.f_5582[288] >= 0)
			{
				*uParam1 = Global_262145.f_5582[288];
			}
			break;
		
		case joaat("CLO_HP_F_U_5_4"):
			if (Global_262145.f_5582[289] >= 0)
			{
				*uParam1 = Global_262145.f_5582[289];
			}
			break;
		
		case joaat("CLO_HP_F_U_6_0"):
			if (Global_262145.f_5582[290] >= 0)
			{
				*uParam1 = Global_262145.f_5582[290];
			}
			break;
		
		case joaat("CLO_HP_F_U_6_1"):
			if (Global_262145.f_5582[291] >= 0)
			{
				*uParam1 = Global_262145.f_5582[291];
			}
			break;
		
		case joaat("CLO_HP_F_U_6_2"):
			if (Global_262145.f_5582[292] >= 0)
			{
				*uParam1 = Global_262145.f_5582[292];
			}
			break;
		
		case joaat("CLO_HP_F_U_6_3"):
			if (Global_262145.f_5582[293] >= 0)
			{
				*uParam1 = Global_262145.f_5582[293];
			}
			break;
		
		case joaat("CLO_HP_F_U_6_4"):
			if (Global_262145.f_5582[294] >= 0)
			{
				*uParam1 = Global_262145.f_5582[294];
			}
			break;
		
		case joaat("CLO_HP_F_U_6_5"):
			if (Global_262145.f_5582[295] >= 0)
			{
				*uParam1 = Global_262145.f_5582[295];
			}
			break;
		
		case joaat("CLO_HP_F_D_0"):
			if (Global_262145.f_5582[296] >= 0)
			{
				*uParam1 = Global_262145.f_5582[296];
			}
			break;
		
		case joaat("CLO_HP_F_D_1"):
			if (Global_262145.f_5582[297] >= 0)
			{
				*uParam1 = Global_262145.f_5582[297];
			}
			break;
		
		case joaat("CLO_HP_F_D_2"):
			if (Global_262145.f_5582[298] >= 0)
			{
				*uParam1 = Global_262145.f_5582[298];
			}
			break;
		
		case joaat("CLO_HP_F_D_3"):
			if (Global_262145.f_5582[299] >= 0)
			{
				*uParam1 = Global_262145.f_5582[299];
			}
			break;
		
		case joaat("CLO_HP_F_D_4"):
			if (Global_262145.f_5582[300] >= 0)
			{
				*uParam1 = Global_262145.f_5582[300];
			}
			break;
		
		case joaat("CLO_HP_F_D_5"):
			if (Global_262145.f_5582[301] >= 0)
			{
				*uParam1 = Global_262145.f_5582[301];
			}
			break;
		
		case joaat("CLO_HP_F_D_6"):
			if (Global_262145.f_5582[302] >= 0)
			{
				*uParam1 = Global_262145.f_5582[302];
			}
			break;
		
		case joaat("CLO_HP_F_D_7"):
			if (Global_262145.f_5582[303] >= 0)
			{
				*uParam1 = Global_262145.f_5582[303];
			}
			break;
		
		case joaat("CLO_HP_F_D_8"):
			if (Global_262145.f_5582[304] >= 0)
			{
				*uParam1 = Global_262145.f_5582[304];
			}
			break;
		
		case joaat("CLO_HP_F_D_9"):
			if (Global_262145.f_5582[305] >= 0)
			{
				*uParam1 = Global_262145.f_5582[305];
			}
			break;
		
		case joaat("CLO_HP_F_D_11"):
			if (Global_262145.f_5582[306] >= 0)
			{
				*uParam1 = Global_262145.f_5582[306];
			}
			break;
		
		case joaat("CLO_HP_F_D_12"):
			if (Global_262145.f_5582[307] >= 0)
			{
				*uParam1 = Global_262145.f_5582[307];
			}
			break;
		
		case joaat("CLO_HP_F_D_13"):
			if (Global_262145.f_5582[308] >= 0)
			{
				*uParam1 = Global_262145.f_5582[308];
			}
			break;
		
		case joaat("CLO_HP_F_D_14"):
			if (Global_262145.f_5582[309] >= 0)
			{
				*uParam1 = Global_262145.f_5582[309];
			}
			break;
		
		case joaat("CLO_HP_F_D_15"):
			if (Global_262145.f_5582[310] >= 0)
			{
				*uParam1 = Global_262145.f_5582[310];
			}
			break;
		
		case joaat("CLO_HP_F_D_16"):
			if (Global_262145.f_5582[311] >= 0)
			{
				*uParam1 = Global_262145.f_5582[311];
			}
			break;
		
		case joaat("CLO_HP_F_D_17"):
			if (Global_262145.f_5582[312] >= 0)
			{
				*uParam1 = Global_262145.f_5582[312];
			}
			break;
		
		case joaat("CLO_HP_F_D_18"):
			if (Global_262145.f_5582[313] >= 0)
			{
				*uParam1 = Global_262145.f_5582[313];
			}
			break;
		
		case joaat("CLO_HP_F_D_19"):
			if (Global_262145.f_5582[314] >= 0)
			{
				*uParam1 = Global_262145.f_5582[314];
			}
			break;
		
		case joaat("CLO_HP_F_D_20"):
			if (Global_262145.f_5582[315] >= 0)
			{
				*uParam1 = Global_262145.f_5582[315];
			}
			break;
		
		case joaat("CLO_HP_F_D_21"):
			if (Global_262145.f_5582[316] >= 0)
			{
				*uParam1 = Global_262145.f_5582[316];
			}
			break;
		
		case joaat("CLO_HP_F_D_22"):
			if (Global_262145.f_5582[317] >= 0)
			{
				*uParam1 = Global_262145.f_5582[317];
			}
			break;
		
		case joaat("CLO_HP_F_D_10"):
			if (Global_262145.f_5582[318] >= 0)
			{
				*uParam1 = Global_262145.f_5582[318];
			}
			break;
		
		case joaat("CLO_HP_F_T_0_0"):
			if (Global_262145.f_5582[319] >= 0)
			{
				*uParam1 = Global_262145.f_5582[319];
			}
			break;
		
		case joaat("CLO_HP_F_T_0_1"):
			if (Global_262145.f_5582[320] >= 0)
			{
				*uParam1 = Global_262145.f_5582[320];
			}
			break;
		
		case joaat("CLO_HP_F_T_0_2"):
			if (Global_262145.f_5582[321] >= 0)
			{
				*uParam1 = Global_262145.f_5582[321];
			}
			break;
		
		case joaat("CLO_HP_F_T_0_3"):
			if (Global_262145.f_5582[322] >= 0)
			{
				*uParam1 = Global_262145.f_5582[322];
			}
			break;
		
		case joaat("CLO_HP_F_T_1_0"):
			if (Global_262145.f_5582[323] >= 0)
			{
				*uParam1 = Global_262145.f_5582[323];
			}
			break;
		
		case joaat("CLO_HP_F_T_1_1"):
			if (Global_262145.f_5582[324] >= 0)
			{
				*uParam1 = Global_262145.f_5582[324];
			}
			break;
		
		case joaat("CLO_HP_F_T_1_2"):
			if (Global_262145.f_5582[325] >= 0)
			{
				*uParam1 = Global_262145.f_5582[325];
			}
			break;
		
		case joaat("CLO_HP_F_T_1_3"):
			if (Global_262145.f_5582[326] >= 0)
			{
				*uParam1 = Global_262145.f_5582[326];
			}
			break;
		
		case joaat("CLO_HP_F_T_1_4"):
			if (Global_262145.f_5582[327] >= 0)
			{
				*uParam1 = Global_262145.f_5582[327];
			}
			break;
	}
	switch (iParam0)
	{
		case 573181452:
			if (Global_262145.f_6011 >= 0)
			{
				*uParam1 = Global_262145.f_6011;
			}
			break;
		
		case -1871025493:
			if (Global_262145.f_6012 >= 0)
			{
				*uParam1 = Global_262145.f_6012;
			}
			break;
		
		case 401083057:
			if (Global_262145.f_6013 >= 0)
			{
				*uParam1 = Global_262145.f_6013;
			}
			break;
		
		case -1258011389:
			if (Global_262145.f_6014 >= 0)
			{
				*uParam1 = Global_262145.f_6014;
			}
			break;
		
		case -1520420552:
			if (Global_262145.f_6015 >= 0)
			{
				*uParam1 = Global_262145.f_6015;
			}
			break;
		
		case 2072700298:
			if (Global_262145.f_6016 >= 0)
			{
				*uParam1 = Global_262145.f_6016;
			}
			break;
		
		case 694163672:
			if (Global_262145.f_6017 >= 0)
			{
				*uParam1 = Global_262145.f_6017;
			}
			break;
		
		case -1693156289:
			if (Global_262145.f_6018 >= 0)
			{
				*uParam1 = Global_262145.f_6018;
			}
			break;
		
		case -1201085112:
			if (Global_262145.f_6019 >= 0)
			{
				*uParam1 = Global_262145.f_6019;
			}
			break;
		
		case 1645754536:
			if (Global_262145.f_6020 >= 0)
			{
				*uParam1 = Global_262145.f_6020;
			}
			break;
		
		case 1442375387:
			if (Global_262145.f_6021 >= 0)
			{
				*uParam1 = Global_262145.f_6021;
			}
			break;
		
		case 674401103:
			if (Global_262145.f_6022 >= 0)
			{
				*uParam1 = Global_262145.f_6022;
			}
			break;
		
		case -692164748:
			if (Global_262145.f_6023 >= 0)
			{
				*uParam1 = Global_262145.f_6023;
			}
			break;
		
		case -974010917:
			if (Global_262145.f_6024 >= 0)
			{
				*uParam1 = Global_262145.f_6024;
			}
			break;
		
		case 1401833895:
			if (Global_262145.f_6025 >= 0)
			{
				*uParam1 = Global_262145.f_6025;
			}
			break;
		
		case -2059653886:
			if (Global_262145.f_6026 >= 0)
			{
				*uParam1 = Global_262145.f_6026;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("CLO_BUSF_G1_0"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_2171[120] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUSF_G1_1"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_2171[121] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUSF_G1_2"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_2171[122] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUSF_G1_3"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_2171[123] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUSF_G1_4"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_2171[124] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUSF_G1_5"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_2171[125] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUSF_G1_6"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_2171[126] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUSF_G1_7"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_2171[127] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUSF_W0_0"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_2300[0] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUSF_W0_1"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_2300[1] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUSF_W0_2"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_2300[2] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUSF_W0_3"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_2300[3] * IntToFloat(*uParam1)));
			break;
	}
	switch (iParam0)
	{
		case -2049322280:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6076 * IntToFloat(*uParam1)));
			break;
		
		case 127817315:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6077 * IntToFloat(*uParam1)));
			break;
		
		case -112182841:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6078 * IntToFloat(*uParam1)));
			break;
		
		case -351625924:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6079 * IntToFloat(*uParam1)));
			break;
		
		case 1287807146:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6080 * IntToFloat(*uParam1)));
			break;
		
		case -95437878:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6081 * IntToFloat(*uParam1)));
			break;
		
		case 130143918:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6082 * IntToFloat(*uParam1)));
			break;
		
		case 354513261:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6083 * IntToFloat(*uParam1)));
			break;
		
		case -1280201073:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6084 * IntToFloat(*uParam1)));
			break;
		
		case 814557252:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6085 * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_HP_F_O_0"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6086 * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_HP_F_O_1"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6087 * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_HP_F_O_2"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6088 * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_HP_F_O_3"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6089 * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_HP_F_O_4"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6090 * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_HP_F_O_5"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6091 * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_HP_F_O_6"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6092 * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_HP_F_O_7"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6093 * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_HP_F_O_8"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6094 * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_HP_F_O_9"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6095 * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_HP_F_O_10"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6096 * IntToFloat(*uParam1)));
			break;
	}
}

void func_54(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case -1172875993:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[210] * IntToFloat(*uParam1)));
			break;
		
		case -933695062:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[211] * IntToFloat(*uParam1)));
			break;
		
		case -1650353092:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[212] * IntToFloat(*uParam1)));
			break;
		
		case -1411630927:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[213] * IntToFloat(*uParam1)));
			break;
		
		case -1445514097:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[214] * IntToFloat(*uParam1)));
			break;
		
		case -1214984182:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[215] * IntToFloat(*uParam1)));
			break;
		
		case -1907262076:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[216] * IntToFloat(*uParam1)));
			break;
		
		case -1462772454:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[217] * IntToFloat(*uParam1)));
			break;
		
		case -1676142319:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[218] * IntToFloat(*uParam1)));
			break;
		
		case 1613734209:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[219] * IntToFloat(*uParam1)));
			break;
		
		case 1896432372:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[220] * IntToFloat(*uParam1)));
			break;
		
		case -1785709773:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[221] * IntToFloat(*uParam1)));
			break;
		
		case -1478893626:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[222] * IntToFloat(*uParam1)));
			break;
		
		case -1234338579:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[223] * IntToFloat(*uParam1)));
			break;
		
		case -919559537:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[224] * IntToFloat(*uParam1)));
			break;
		
		case -1279986972:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[225] * IntToFloat(*uParam1)));
			break;
		
		case -656588312:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[226] * IntToFloat(*uParam1)));
			break;
		
		case -359406251:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[227] * IntToFloat(*uParam1)));
			break;
		
		case -30339953:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[228] * IntToFloat(*uParam1)));
			break;
		
		case 276443425:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[229] * IntToFloat(*uParam1)));
			break;
		
		case 598005622:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[230] * IntToFloat(*uParam1)));
			break;
		
		case 871823386:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[231] * IntToFloat(*uParam1)));
			break;
		
		case 2047673121:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[232] * IntToFloat(*uParam1)));
			break;
		
		case -723961716:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[233] * IntToFloat(*uParam1)));
			break;
		
		case 1826089143:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[234] * IntToFloat(*uParam1)));
			break;
		
		case 1576094442:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[235] * IntToFloat(*uParam1)));
			break;
		
		case 1336979049:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[236] * IntToFloat(*uParam1)));
			break;
		
		case 859010411:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[237] * IntToFloat(*uParam1)));
			break;
		
		case 636508901:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[238] * IntToFloat(*uParam1)));
			break;
		
		case 378911792:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[239] * IntToFloat(*uParam1)));
			break;
		
		case -116031184:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[240] * IntToFloat(*uParam1)));
			break;
		
		case -425731047:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[241] * IntToFloat(*uParam1)));
			break;
		
		case -1657253557:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[258]);
			break;
		
		case 196750925:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[259]);
			break;
		
		case -99841294:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[260]);
			break;
		
		case 1749378918:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[261]);
			break;
		
		case 1438433877:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[262]);
			break;
		
		case -1834468333:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[263]);
			break;
		
		case -2131978084:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[264]);
			break;
		
		case -243477427:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[271]);
			break;
		
		case -1466449280:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[272]);
			break;
		
		case -1091702996:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[273]);
			break;
		
		case -1806427655:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[274]);
			break;
		
		case -1734139241:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[275]);
			break;
		
		case 1878937934:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[276]);
			break;
		
		case -2042593838:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[277]);
			break;
		
		case 1597943763:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[278]);
			break;
		
		case -1407107490:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[279]);
			break;
		
		case -542857884:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[280]);
			break;
		
		case -309182145:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[281]);
			break;
		
		case 1189835760:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[282]);
			break;
		
		case -788232156:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[283]);
			break;
		
		case 681064266:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[284]);
			break;
		
		case 914871081:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[285]);
			break;
		
		case -1950974587:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[286]);
			break;
		
		case 1592736846:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[287]);
			break;
		
		case 1889853369:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[288]);
			break;
		
		case 2052256533:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[289]);
			break;
		
		case -1946184082:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[290]);
			break;
		
		case -1782535696:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[291]);
			break;
		
		case -1485550249:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[292]);
			break;
		
		case -1323409237:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[293]);
			break;
		
		case -1025178568:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[294]);
			break;
		
		case -630273677:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[295]);
			break;
		
		case -1543119706:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[296]);
			break;
		
		case -1354763494:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[297]);
			break;
		
		case -1726986569:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[298]);
			break;
		
		case -1295418839:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[299]);
			break;
		
		case 1021316696:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[300]);
			break;
		
		case 1212556580:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[301]);
			break;
		
		case 1509247106:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[302]);
			break;
	}
}

void func_55(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case joaat("CLO_BUS_F_O_0"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[8] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_1"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[9] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_2"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[10] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_3"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[11] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_4"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[12] * IntToFloat(*uParam1)));
			break;
		
		case 823754616:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[13] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_6"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[14] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_7"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[15] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_8"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[16] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_9"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[17] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_10"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[18] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_11"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[19] * IntToFloat(*uParam1)));
			break;
		
		case -419205006:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[20] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_13"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[21] * IntToFloat(*uParam1)));
			break;
		
		case 1040031245:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[22] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_15"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[23] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_16"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[24] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_17"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[25] * IntToFloat(*uParam1)));
			break;
		
		case -121465960:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[26] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_19"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[27] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_20"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[28] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_21"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[29] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_22"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[30] * IntToFloat(*uParam1)));
			break;
		
		case 845284826:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[31] * IntToFloat(*uParam1)));
			break;
		
		case 1151347286:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[32] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_25"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[33] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUSF_U_3_0"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[61]);
			break;
		
		case joaat("CLO_BUSF_U_3_1"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[62]);
			break;
		
		case joaat("CLO_BUSF_U_3_2"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[63]);
			break;
		
		case joaat("CLO_BUSF_U_3_3"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[64]);
			break;
		
		case joaat("CLO_BUSF_U_3_4"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[65]);
			break;
		
		case joaat("CLO_BUSF_U_3_5"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[66]);
			break;
		
		case joaat("CLO_BUSF_U_4_0"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[67]);
			break;
		
		case joaat("CLO_BUSF_U_4_1"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[68]);
			break;
		
		case joaat("CLO_BUSF_U_4_2"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[69]);
			break;
		
		case joaat("CLO_BUSF_U_4_3"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[70]);
			break;
		
		case joaat("CLO_BUSF_U_4_4"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[71]);
			break;
		
		case joaat("CLO_BUSF_U_4_5"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[72]);
			break;
		
		case joaat("CLO_BUSF_U_4_6"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[73]);
			break;
		
		case joaat("CLO_BUSF_U_4_7"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[74]);
			break;
		
		case joaat("CLO_BUSF_U_4_8"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[75]);
			break;
		
		case joaat("CLO_BUSF_U_4_9"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[76]);
			break;
		
		case joaat("CLO_BUSF_U_4_10"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[77]);
			break;
		
		case joaat("CLO_BUSF_U_4_11"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[78]);
			break;
		
		case joaat("CLO_BUSF_U_4_12"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[79]);
			break;
		
		case joaat("CLO_BUSF_U_4_13"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[80]);
			break;
		
		case joaat("CLO_BUSF_U_4_14"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[81]);
			break;
		
		case joaat("CLO_BUSF_U_4_15"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[82]);
			break;
	}
	switch (iParam0)
	{
		case joaat("CLO_BUS_P_0_0"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[83]);
			break;
		
		case joaat("CLO_BUS_P_0_1"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[84]);
			break;
		
		case joaat("CLO_BUS_P_0_2"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[85]);
			break;
		
		case joaat("CLO_BUS_P_0_3"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[86]);
			break;
		
		case joaat("CLO_BUS_P_0_4"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[87]);
			break;
		
		case joaat("CLO_BUS_P_0_5"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[88]);
			break;
		
		case joaat("CLO_BUS_P_0_6"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[89]);
			break;
		
		case joaat("CLO_BUS_P_0_7"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[90]);
			break;
		
		case joaat("CLO_BUS_P_0_8"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[91]);
			break;
		
		case joaat("CLO_BUS_P_0_9"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[92]);
			break;
		
		case joaat("CLO_BUS_P_0_10"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[93]);
			break;
		
		case joaat("CLO_BUS_P_0_11"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[94]);
			break;
		
		case joaat("CLO_BUS_P_0_12"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[95]);
			break;
		
		case joaat("CLO_BUS_P_0_13"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[96]);
			break;
		
		case joaat("CLO_BUS_P_1_0"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[97]);
			break;
		
		case joaat("CLO_BUS_P_1_1"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[98]);
			break;
		
		case joaat("CLO_BUS_P_1_2"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[99]);
			break;
		
		case joaat("CLO_BUS_P_1_3"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[100]);
			break;
		
		case joaat("CLO_BUS_P_1_4"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[101]);
			break;
		
		case joaat("CLO_BUS_P_1_5"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[102]);
			break;
		
		case joaat("CLO_BUS_P_1_6"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[103]);
			break;
		
		case joaat("CLO_BUS_P_1_7"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[104]);
			break;
		
		case joaat("CLO_BUS_P_1_8"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[105]);
			break;
		
		case joaat("CLO_BUS_P_1_9"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[106]);
			break;
		
		case joaat("CLO_BUS_P_1_10"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[107]);
			break;
		
		case joaat("CLO_BUS_P_1_11"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[108]);
			break;
		
		case joaat("CLO_BUS_P_1_12"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[109]);
			break;
		
		case joaat("CLO_BUS_P_1_13"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[110]);
			break;
		
		case 2007902130:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[111]);
			break;
		
		case 686459436:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[112]);
			break;
		
		case -1689653527:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[113]);
			break;
		
		case -1098631843:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[114]);
			break;
		
		case -1464399421:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[115]);
			break;
		
		case -500630362:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[116]);
			break;
		
		case -849161446:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[117]);
			break;
		
		case 386000475:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[118]);
			break;
		
		case 29408217:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[119]);
			break;
		
		case -1273749391:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[120]);
			break;
		
		case -124515304:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[121]);
			break;
		
		case 654764285:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[122]);
			break;
		
		case -1556422301:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[123]);
			break;
		
		case -1601184755:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[124]);
			break;
		
		case 1371389546:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[125]);
			break;
		
		case 1072437959:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[126]);
			break;
		
		case -1879610913:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[127]);
			break;
		
		case -2127508398:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[128]);
			break;
		
		case 777987760:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[129]);
			break;
		
		case 497386813:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[130]);
			break;
		
		case -880039396:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[131]);
			break;
		
		case -1120006783:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[132]);
			break;
		
		case -553758463:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[133]);
			break;
		
		case 280900740:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[134]);
			break;
		
		case 551670983:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[135]);
			break;
		
		case 1386231875:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[136]);
			break;
		
		case 946209743:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[137]);
			break;
		
		case 1780213562:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[138]);
			break;
		
		case 1511737145:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[139]);
			break;
	}
	switch (iParam0)
	{
		case 547455022:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[146]);
			break;
		
		case 542211982:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[147]);
			break;
		
		case 235657987:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[148]);
			break;
		
		case -67848491:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[149]);
			break;
		
		case -373943720:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[150]);
			break;
		
		case -994326428:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[151]);
			break;
		
		case -1284397616:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[152]);
			break;
		
		case -1851929032:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[153]);
			break;
		
		case 1070574237:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[154]);
			break;
		
		case 773490483:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[155]);
			break;
		
		case 1549034406:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[156]);
			break;
		
		case -510366168:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[157]);
			break;
		
		case -852867756:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[158]);
			break;
		
		case 2114135811:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[159]);
			break;
		
		case -386390000:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[160] * IntToFloat(*uParam1)));
			break;
		
		case -136165916:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[161] * IntToFloat(*uParam1)));
			break;
		
		case 108389131:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[162] * IntToFloat(*uParam1)));
			break;
		
		case -1287242583:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[163] * IntToFloat(*uParam1)));
			break;
		
		case 839105062:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[164] * IntToFloat(*uParam1)));
			break;
		
		case 1085921170:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[165] * IntToFloat(*uParam1)));
			break;
		
		case 1267723582:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[166] * IntToFloat(*uParam1)));
			break;
		
		case -598896965:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[167] * IntToFloat(*uParam1)));
			break;
		
		case 1531514028:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[168] * IntToFloat(*uParam1)));
			break;
		
		case 1785965313:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[169] * IntToFloat(*uParam1)));
			break;
		
		case 1344121348:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[170] * IntToFloat(*uParam1)));
			break;
		
		case 1114574503:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[171] * IntToFloat(*uParam1)));
			break;
		
		case -1314689774:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[172] * IntToFloat(*uParam1)));
			break;
		
		case -1544466002:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[173] * IntToFloat(*uParam1)));
			break;
		
		case 58757327:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[174] * IntToFloat(*uParam1)));
			break;
		
		case 1992292172:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[175] * IntToFloat(*uParam1)));
			break;
		
		case 1761205184:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[176] * IntToFloat(*uParam1)));
			break;
		
		case 1517633207:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[177] * IntToFloat(*uParam1)));
			break;
		
		case -1098447143:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[178] * IntToFloat(*uParam1)));
			break;
		
		case 776922731:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[179] * IntToFloat(*uParam1)));
			break;
		
		case -719832:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[180] * IntToFloat(*uParam1)));
			break;
		
		case 797959005:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[181] * IntToFloat(*uParam1)));
			break;
		
		case -1399136911:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[182] * IntToFloat(*uParam1)));
			break;
		
		case 1512814740:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[183] * IntToFloat(*uParam1)));
			break;
		
		case 1257576999:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[184] * IntToFloat(*uParam1)));
			break;
	}
	switch (iParam0)
	{
		case 260830436:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_157[211]));
			break;
		
		case 21878888:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_157[212]));
			break;
		
		case 1578734070:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_157[213]));
			break;
		
		case -1873775005:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_157[214]));
			break;
		
		case -1171731937:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_157[215]));
			break;
		
		case 1825288026:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_157[216]));
			break;
		
		case 685385604:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_157[217]));
			break;
		
		case 446958360:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_157[218]));
			break;
		
		case 1633228929:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_157[219]));
			break;
		
		case -1823277964:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_157[220]));
			break;
		
		case 877316879:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_157[221]));
			break;
		
		case 1161161957:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_157[222]));
			break;
		
		case 259228001:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_157[223]));
			break;
		
		case 1031326785:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[68]));
			break;
		
		case -1490739308:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[70]));
			break;
		
		case -1259881703:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[71]));
			break;
		
		case -2099751169:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[72]));
			break;
		
		case 503286566:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[159]));
			break;
		
		case 716809370:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[160]));
			break;
		
		case -2125934133:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[161]));
			break;
		
		case -1635251127:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[162]));
			break;
		
		case 1692080368:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[163]));
			break;
		
		case 1915302796:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[164]));
			break;
		
		case -1085813324:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[165]));
			break;
		
		case -874912040:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[166]));
			break;
		
		case -1852444079:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[167]));
			break;
		
		case -1335939101:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[168]));
			break;
		
		case 1659434315:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[169]));
			break;
		
		case 1401902744:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[170]));
			break;
		
		case 1181826140:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[171]));
			break;
		
		case -1698687156:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[174]));
			break;
		
		case -1014077208:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[175]));
			break;
		
		case -1252733835:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[176]));
			break;
		
		case -1616535281:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[180]));
			break;
		
		case -1846606430:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[181]));
			break;
		
		case -634120661:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[182]));
			break;
		
		case -863110433:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[183]));
			break;
		
		case -153497738:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[184]));
			break;
		
		case -416894960:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[185]));
			break;
		
		case 293438653:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[187]));
			break;
		
		case 792147216:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[208]));
			break;
		
		case -1990858420:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[210]));
			break;
		
		case -1013457453:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[211]));
			break;
		
		case -1379880411:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[212]));
			break;
		
		case 1477215930:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[213]));
			break;
		
		case -765756582:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[214]));
			break;
		
		case -326946903:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[215]));
			break;
		
		case -692452329:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[216]));
			break;
		
		case 157837683:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[218]));
			break;
		
		case -76100208:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_414[219]));
			break;
		
		case -809940015:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_652[161]));
			break;
		
		case -497061603:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_652[162]));
			break;
		
		case -1206575991:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_652[163]));
			break;
		
		case -923681214:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_652[164]));
			break;
		
		case -1771841241:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_652[165]));
			break;
		
		case 1837336423:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_652[166]));
			break;
		
		case 2068652794:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_652[168]));
			break;
		
		case 1874201544:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_652[169]));
			break;
		
		case -2114637754:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_652[170]));
			break;
		
		case 1482939680:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_652[171]));
			break;
		
		case -487010550:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_652[173]));
			break;
		
		case -2059463784:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_652[175]));
			break;
		
		case -13875918:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_652[176]));
			break;
		
		case 227729919:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_652[177]));
			break;
		
		case -1625520876:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_652[178]));
			break;
		
		case -1326012216:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_652[179]));
			break;
		
		case -1026929553:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_652[180]));
			break;
		
		case 1752733645:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_652[181]));
			break;
		
		case 2051390311:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_652[182]));
			break;
		
		case -1960092366:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_652[183]));
			break;
		
		case -1916706210:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_652[184]));
			break;
		
		case -1430873032:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_652[186]));
			break;
		
		case -1901909501:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_652[187]));
			break;
		
		case 1635471284:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_652[189]));
			break;
	}
	switch (iParam0)
	{
		case 561311877:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1082[0]));
			break;
		
		case 308171352:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1082[1]));
			break;
		
		case 1176091086:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1082[2]));
			break;
		
		case 921443187:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1082[3]));
			break;
		
		case 1286489847:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1082[4]));
			break;
		
		case 2060854098:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1082[5]));
			break;
		
		case 1897598940:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1082[6]));
			break;
		
		case -1639847383:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1082[7]));
			break;
		
		case -1015537418:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1082[88]));
			break;
		
		case -1255439267:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1082[89]));
			break;
		
		case 894174372:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1082[90]));
			break;
		
		case 1736141058:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1082[91]));
			break;
		
		case 1513737855:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1082[92]));
			break;
		
		case 208745191:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1082[93]));
			break;
		
		case 1555354389:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1082[94]));
			break;
		
		case 1364966499:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1082[95]));
			break;
		
		case 1325870356:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1211[1]));
			break;
		
		case 2035450282:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1211[2]));
			break;
		
		case 1793385679:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1211[3]));
			break;
		
		case 383794371:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1211[4]));
			break;
		
		case joaat("CLO_BUSF_L_0_0"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1227[99]));
			break;
		
		case joaat("CLO_BUSF_L_0_1"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1227[100]));
			break;
		
		case joaat("CLO_BUSF_L_0_2"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1227[101]));
			break;
		
		case joaat("CLO_BUSF_L_0_3"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1227[102]));
			break;
		
		case joaat("CLO_BUSF_L_0_4"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1227[103]));
			break;
		
		case joaat("CLO_BUSF_L_0_5"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1227[104]));
			break;
		
		case joaat("CLO_BUSF_L_0_6"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1227[105]));
			break;
		
		case joaat("CLO_BUSF_L_0_7"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1227[106]));
			break;
		
		case joaat("CLO_BUSF_L_0_8"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1227[107]));
			break;
		
		case joaat("CLO_BUSF_L_0_9"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1227[108]));
			break;
		
		case joaat("CLO_BUSF_L_0_10"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1227[109]));
			break;
		
		case joaat("CLO_BUSF_L_0_11"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1227[110]));
			break;
		
		case joaat("CLO_BUSF_L_0_12"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1227[111]));
			break;
		
		case joaat("CLO_BUSF_L_1_0"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1227[115]));
			break;
		
		case joaat("CLO_BUSF_L_1_1"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1227[116]));
			break;
		
		case joaat("CLO_BUSF_L_1_2"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1227[117]));
			break;
		
		case joaat("CLO_BUSF_L_1_3"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1227[118]));
			break;
		
		case joaat("CLO_BUSF_L_1_4"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1227[119]));
			break;
		
		case joaat("CLO_BUSF_L_1_5"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1227[120]));
			break;
		
		case joaat("CLO_BUSF_L_1_6"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1227[121]));
			break;
		
		case joaat("CLO_BUSF_L_1_7"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1227[122]));
			break;
		
		case joaat("CLO_BUSF_L_1_8"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1227[123]));
			break;
		
		case joaat("CLO_BUSF_L_1_9"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1227[124]));
			break;
		
		case joaat("CLO_BUSF_L_1_10"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1227[125]));
			break;
		
		case joaat("CLO_BUSF_L_1_11"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1227[126]));
			break;
		
		case joaat("CLO_BUSF_L_1_12"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1227[127]));
			break;
		
		case joaat("CLO_BUSF_U_0_0"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[99]));
			break;
		
		case joaat("CLO_BUSF_U_0_1"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[101]));
			break;
		
		case joaat("CLO_BUSF_U_0_2"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[102]));
			break;
		
		case joaat("CLO_BUSF_U_0_3"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[103]));
			break;
		
		case joaat("CLO_BUSF_U_0_4"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[104]));
			break;
		
		case joaat("CLO_BUSF_U_0_5"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[105]));
			break;
		
		case joaat("CLO_BUSF_U_0_6"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[106]));
			break;
		
		case joaat("CLO_BUSF_U_0_7"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[107]));
			break;
		
		case joaat("CLO_BUSF_U_0_8"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[108]));
			break;
		
		case joaat("CLO_BUSF_U_0_9"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[109]));
			break;
		
		case joaat("CLO_BUSF_U_0_10"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[110]));
			break;
		
		case joaat("CLO_BUSF_U_0_11"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[111]));
			break;
		
		case joaat("CLO_BUSF_U_1_0"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[115]));
			break;
		
		case joaat("CLO_BUSF_U_1_1"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[116]));
			break;
		
		case joaat("CLO_BUSF_U_1_2"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[117]));
			break;
		
		case joaat("CLO_BUSF_U_1_3"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[118]));
			break;
		
		case joaat("CLO_BUSF_U_1_4"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[119]));
			break;
		
		case joaat("CLO_BUSF_U_1_5"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[121]));
			break;
		
		case joaat("CLO_BUSF_U_1_6"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[123]));
			break;
		
		case joaat("CLO_BUSF_U_1_7"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[124]));
			break;
		
		case joaat("CLO_BUSF_U_1_8"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[125]));
			break;
		
		case joaat("CLO_BUSF_U_1_9"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[126]));
			break;
		
		case joaat("CLO_BUSF_U_1_10"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[127]));
			break;
		
		case joaat("CLO_BUSF_U_2_0"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[192]));
			break;
		
		case joaat("CLO_BUSF_U_2_1"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[193]));
			break;
		
		case joaat("CLO_BUSF_U_2_2"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[194]));
			break;
		
		case joaat("CLO_BUSF_U_2_3"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[195]));
			break;
		
		case joaat("CLO_BUSF_U_2_4"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[196]));
			break;
		
		case joaat("CLO_BUSF_U_2_5"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[197]));
			break;
		
		case joaat("CLO_BUSF_U_2_6"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[198]));
			break;
		
		case joaat("CLO_BUSF_U_2_7"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[202]));
			break;
		
		case joaat("CLO_BUSF_U_2_8"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[203]));
			break;
		
		case joaat("CLO_BUSF_U_2_9"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[204]));
			break;
		
		case joaat("CLO_BUSF_U_2_10"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[205]));
			break;
		
		case joaat("CLO_BUSF_U_2_11"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[206]));
			break;
		
		case joaat("CLO_BUSF_U_2_12"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1484[207]));
			break;
		
		case joaat("CLO_BUSF_F_0_0"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1741[4]));
			break;
		
		case joaat("CLO_BUSF_F_0_1"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1741[5]));
			break;
		
		case joaat("CLO_BUSF_F_0_2"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1741[6]));
			break;
		
		case joaat("CLO_BUSF_F_0_3"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1741[7]));
			break;
		
		case joaat("CLO_BUSF_F_0_4"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1741[8]));
			break;
		
		case joaat("CLO_BUSF_F_0_5"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1741[9]));
			break;
		
		case joaat("CLO_BUSF_F_0_6"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1741[10]));
			break;
		
		case joaat("CLO_BUSF_F_0_7"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1741[11]));
			break;
		
		case joaat("CLO_BUSF_F_0_8"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1741[12]));
			break;
		
		case joaat("CLO_BUSF_F_0_9"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1741[13]));
			break;
		
		case joaat("CLO_BUSF_F_0_10"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1741[14]));
			break;
		
		case joaat("CLO_BUSF_F_0_11"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1741[15]));
			break;
		
		case joaat("CLO_BUSF_F_1_0"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1741[100]));
			break;
		
		case joaat("CLO_BUSF_F_1_1"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1741[101]));
			break;
		
		case joaat("CLO_BUSF_F_1_2"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1741[102]));
			break;
		
		case joaat("CLO_BUSF_F_1_3"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1741[103]));
			break;
		
		case joaat("CLO_BUSF_F_1_4"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1741[104]));
			break;
		
		case joaat("CLO_BUSF_F_1_5"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1741[105]));
			break;
		
		case joaat("CLO_BUSF_F_1_6"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1741[106]));
			break;
		
		case joaat("CLO_BUSF_F_1_7"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1741[107]));
			break;
		
		case joaat("CLO_BUSF_F_1_8"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1741[108]));
			break;
		
		case joaat("CLO_BUSF_F_1_9"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1741[109]));
			break;
		
		case joaat("CLO_BUSF_F_1_10"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1741[110]));
			break;
		
		case joaat("CLO_BUSF_F_1_11"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1741[111]));
			break;
		
		case joaat("CLO_BUSF_G0_0"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_2171[40]));
			break;
		
		case joaat("CLO_BUSF_G0_1"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_2171[41]));
			break;
		
		case joaat("CLO_BUSF_G0_2"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_2171[42]));
			break;
		
		case joaat("CLO_BUSF_G0_3"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_2171[43]));
			break;
		
		case joaat("CLO_BUSF_G0_4"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_2171[44]));
			break;
		
		case joaat("CLO_BUSF_G0_5"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_2171[45]));
			break;
		
		case joaat("CLO_BUSF_G0_6"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_2171[46]));
			break;
		
		case joaat("CLO_BUSF_G0_7"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_2171[47]));
			break;
		
		case 1791524240:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_157[163]));
			break;
		
		case 534833082:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_157[164]));
			break;
		
		case 227296017:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_157[165]));
			break;
		
		case 860393105:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_157[166]));
			break;
		
		case -1590433178:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_157[167]));
			break;
		
		case 1456756136:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_157[168]));
			break;
		
		case 1163506355:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_157[169]));
			break;
		
		case 1861649900:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_157[170]));
			break;
		
		case -591994517:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_157[171]));
			break;
		
		case -1840493417:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_157[172]));
			break;
		
		case -952392951:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_157[173]));
			break;
		
		case -1123971435:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_157[174]));
			break;
		
		case -354522546:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_157[175]));
			break;
		
		case -1548133220:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[242]);
			break;
		
		case -125893074:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[243]);
			break;
		
		case 655287117:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[244]);
			break;
		
		case 1845227814:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[245]);
			break;
		
		case 177416790:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[246]);
			break;
		
		case 1612109136:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[247]);
			break;
		
		case 241414635:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[248]);
			break;
		
		case 1134173271:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[249]);
			break;
		
		case 1910438112:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[250]);
			break;
		
		case -949967902:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[251]);
			break;
		
		case -1360546088:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[252]);
			break;
		
		case 166096092:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[253]);
			break;
		
		case -140457903:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[254]);
			break;
		
		case -432298617:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[255]);
			break;
		
		case -738393846:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[256]);
			break;
		
		case 1384775202:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[257]);
			break;
		
		case -77078531:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[265]);
			break;
		
		case -402835160:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[266]);
			break;
		
		case -710142842:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[267]);
			break;
		
		case -1869599805:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[268]);
			break;
		
		case -1644607851:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[269]);
			break;
		
		case -1321505511:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[270]);
			break;
	}
	switch (iParam0)
	{
		case 2120599946:
			if (Global_262145.f_4853 >= 0)
			{
				*uParam1 = Global_262145.f_4853;
			}
			break;
		
		case -919019741:
			if (Global_262145.f_4854 >= 0)
			{
				*uParam1 = Global_262145.f_4854;
			}
			break;
		
		case -746654801:
			if (Global_262145.f_4855 >= 0)
			{
				*uParam1 = Global_262145.f_4855;
			}
			break;
		
		case 1779802346:
			if (Global_262145.f_4856 >= 0)
			{
				*uParam1 = Global_262145.f_4856;
			}
			break;
		
		case 1004520575:
			if (Global_262145.f_4857 >= 0)
			{
				*uParam1 = Global_262145.f_4857;
			}
			break;
		
		case -1904645711:
			if (Global_262145.f_4858 >= 0)
			{
				*uParam1 = Global_262145.f_4858;
			}
			break;
		
		case 1614449972:
			if (Global_262145.f_4859 >= 0)
			{
				*uParam1 = Global_262145.f_4859;
			}
			break;
		
		case -638287710:
			if (Global_262145.f_4860 >= 0)
			{
				*uParam1 = Global_262145.f_4860;
			}
			break;
		
		case -339532737:
			if (Global_262145.f_4861 >= 0)
			{
				*uParam1 = Global_262145.f_4861;
			}
			break;
		
		case -23049735:
			if (Global_262145.f_4862 >= 0)
			{
				*uParam1 = Global_262145.f_4862;
			}
			break;
		
		case 706090398:
			if (Global_262145.f_4863 >= 0)
			{
				*uParam1 = Global_262145.f_4863;
			}
			break;
		
		case 87870444:
			if (Global_262145.f_4864 >= 0)
			{
				*uParam1 = Global_262145.f_4864;
			}
			break;
		
		case -149803113:
			if (Global_262145.f_4865 >= 0)
			{
				*uParam1 = Global_262145.f_4865;
			}
			break;
		
		case 2118720551:
			if (Global_262145.f_4866 >= 0)
			{
				*uParam1 = Global_262145.f_4866;
			}
			break;
		
		case -1877819462:
			if (Global_262145.f_4867 >= 0)
			{
				*uParam1 = Global_262145.f_4867;
			}
			break;
		
		case -356223708:
			if (Global_262145.f_4868 >= 0)
			{
				*uParam1 = Global_262145.f_4868;
			}
			break;
		
		case -116715087:
			if (Global_262145.f_4869 >= 0)
			{
				*uParam1 = Global_262145.f_4869;
			}
			break;
		
		case -951013827:
			if (Global_262145.f_4870 >= 0)
			{
				*uParam1 = Global_262145.f_4870;
			}
			break;
		
		case -712095048:
			if (Global_262145.f_4871 >= 0)
			{
				*uParam1 = Global_262145.f_4871;
			}
			break;
		
		case 805011345:
			if (Global_262145.f_4872 >= 0)
			{
				*uParam1 = Global_262145.f_4872;
			}
			break;
		
		case 1027938852:
			if (Global_262145.f_4873 >= 0)
			{
				*uParam1 = Global_262145.f_4873;
			}
			break;
		
		case 142061706:
			if (Global_262145.f_4874 >= 0)
			{
				*uParam1 = Global_262145.f_4874;
			}
			break;
		
		case 431641359:
			if (Global_262145.f_4875 >= 0)
			{
				*uParam1 = Global_262145.f_4875;
			}
			break;
		
		case -291513083:
			if (Global_262145.f_4876 >= 0)
			{
				*uParam1 = Global_262145.f_4876;
			}
			break;
		
		case 15729061:
			if (Global_262145.f_4877 >= 0)
			{
				*uParam1 = Global_262145.f_4877;
			}
			break;
		
		case 1536898810:
			if (Global_262145.f_4878 >= 0)
			{
				*uParam1 = Global_262145.f_4878;
			}
			break;
		
		case -1869739104:
			if (Global_262145.f_4879 >= 0)
			{
				*uParam1 = Global_262145.f_4879;
			}
			break;
		
		case -1049498265:
			if (Global_262145.f_4880 >= 0)
			{
				*uParam1 = Global_262145.f_4880;
			}
			break;
		
		case -1422147333:
			if (Global_262145.f_4881 >= 0)
			{
				*uParam1 = Global_262145.f_4881;
			}
			break;
		
		case 1535091072:
			if (Global_262145.f_4882 >= 0)
			{
				*uParam1 = Global_262145.f_4882;
			}
			break;
		
		case 1297483053:
			if (Global_262145.f_4883 >= 0)
			{
				*uParam1 = Global_262145.f_4883;
			}
			break;
		
		case -1975746823:
			if (Global_262145.f_4884 >= 0)
			{
				*uParam1 = Global_262145.f_4884;
			}
			break;
		
		case 1942639125:
			if (Global_262145.f_4885 >= 0)
			{
				*uParam1 = Global_262145.f_4885;
			}
			break;
		
		case 1884703593:
			if (Global_262145.f_4886 >= 0)
			{
				*uParam1 = Global_262145.f_4886;
			}
			break;
		
		case 548351004:
			if (Global_262145.f_4887 >= 0)
			{
				*uParam1 = Global_262145.f_4887;
			}
			break;
		
		case 197263938:
			if (Global_262145.f_4888 >= 0)
			{
				*uParam1 = Global_262145.f_4888;
			}
			break;
		
		case 844756076:
			if (Global_262145.f_4889 >= 0)
			{
				*uParam1 = Global_262145.f_4889;
			}
			break;
		
		case 1686264000:
			if (Global_262145.f_4890 >= 0)
			{
				*uParam1 = Global_262145.f_4890;
			}
			break;
		
		case 1372926822:
			if (Global_262145.f_4891 >= 0)
			{
				*uParam1 = Global_262145.f_4891;
			}
			break;
		
		case -180454858:
			if (Global_262145.f_4892 >= 0)
			{
				*uParam1 = Global_262145.f_4892;
			}
			break;
		
		case -409870627:
			if (Global_262145.f_4893 >= 0)
			{
				*uParam1 = Global_262145.f_4893;
			}
			break;
		
		case -1502121690:
			if (Global_262145.f_4894 >= 0)
			{
				*uParam1 = Global_262145.f_4894;
			}
			break;
		
		case 2022085957:
			if (Global_262145.f_4895 >= 0)
			{
				*uParam1 = Global_262145.f_4895;
			}
			break;
		
		case 1168977803:
			if (Global_262145.f_4896 >= 0)
			{
				*uParam1 = Global_262145.f_4896;
			}
			break;
		
		case -1760308641:
			if (Global_262145.f_4897 >= 0)
			{
				*uParam1 = Global_262145.f_4897;
			}
			break;
		
		case -1000919847:
			if (Global_262145.f_4898 >= 0)
			{
				*uParam1 = Global_262145.f_4898;
			}
			break;
		
		case 382456257:
			if (Global_262145.f_4899 >= 0)
			{
				*uParam1 = Global_262145.f_4899;
			}
			break;
		
		case -474322017:
			if (Global_262145.f_4900 >= 0)
			{
				*uParam1 = Global_262145.f_4900;
			}
			break;
		
		case -1302427416:
			if (Global_262145.f_4901 >= 0)
			{
				*uParam1 = Global_262145.f_4901;
			}
			break;
		
		case 218545719:
			if (Global_262145.f_4902 >= 0)
			{
				*uParam1 = Global_262145.f_4902;
			}
			break;
		
		case 1608868851:
			if (Global_262145.f_4903 >= 0)
			{
				*uParam1 = Global_262145.f_4903;
			}
			break;
		
		case 1906555586:
			if (Global_262145.f_4904 >= 0)
			{
				*uParam1 = Global_262145.f_4904;
			}
			break;
		
		case 1475381084:
			if (Global_262145.f_4905 >= 0)
			{
				*uParam1 = Global_262145.f_4905;
			}
			break;
		
		case -1927319111:
			if (Global_262145.f_4906 >= 0)
			{
				*uParam1 = Global_262145.f_4906;
			}
			break;
		
		case joaat("CLO_BUSF_T_0_0"):
			if (Global_262145.f_4907 >= 0)
			{
				*uParam1 = Global_262145.f_4907;
			}
			break;
		
		case joaat("CLO_BUSF_T_0_1"):
			if (Global_262145.f_4908 >= 0)
			{
				*uParam1 = Global_262145.f_4908;
			}
			break;
		
		case joaat("CLO_BUSF_T_0_2"):
			if (Global_262145.f_4909 >= 0)
			{
				*uParam1 = Global_262145.f_4909;
			}
			break;
		
		case joaat("CLO_BUSF_T_0_3"):
			if (Global_262145.f_4910 >= 0)
			{
				*uParam1 = Global_262145.f_4910;
			}
			break;
		
		case joaat("CLO_BUSF_T_0_4"):
			if (Global_262145.f_4911 >= 0)
			{
				*uParam1 = Global_262145.f_4911;
			}
			break;
		
		case joaat("CLO_BUSF_T_0_5"):
			if (Global_262145.f_4912 >= 0)
			{
				*uParam1 = Global_262145.f_4912;
			}
			break;
	}
}

void func_56(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 500984819:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[140]);
			break;
		
		case 798691188:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[141]);
			break;
		
		case -1581452414:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[142]);
			break;
		
		case -1635940622:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[143]);
			break;
		
		case 1762139144:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[144]);
			break;
		
		case -1126644824:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[145]);
			break;
		
		case joaat("CLO_BBF_T_1_0"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[0]);
			break;
		
		case joaat("CLO_BBF_T_1_1"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[1]);
			break;
		
		case joaat("CLO_BBF_T_1_2"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[2]);
			break;
		
		case joaat("CLO_BBF_T_1_3"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[3]);
			break;
		
		case joaat("CLO_BBF_T_2_0"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[4]);
			break;
		
		case joaat("CLO_BBF_T_2_1"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[5]);
			break;
		
		case joaat("CLO_BBF_T_2_2"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[6]);
			break;
		
		case joaat("CLO_BBF_T_2_3"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5065[7]);
			break;
	}
}

void func_57(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case joaat("O_FMF_S1"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[34] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_S2"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[35] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_S3"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[36] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_S4"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[37] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_S5"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[38] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_S6"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[39] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_S7"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[40] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_S8"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[41] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_P1"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[42] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_P2"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[43] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_P3"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[44] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_P4"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[45] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_P5"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[46] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_P6"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[47] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_P7"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[48] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_P8"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[49] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_P9"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[50] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_P10"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[51] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_B1"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[52] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_B2"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[53] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_B3"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[54] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_B4"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[55] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_B5"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[56] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_B6"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[57] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_B7"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[58] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_B8"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[59] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_B9"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[60] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_S1"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[185] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_S2"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[186] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_S3"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[187] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_S4"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[188] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_S5"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[189] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_S6"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[190] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_S7"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[191] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_S8"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[192] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_S9"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[193] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_P1"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[194] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_P2"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[195] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_P3"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[196] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_P4"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[197] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_P5"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[198] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_P6"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[199] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_P7"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[200] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_P8"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[201] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_B1"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[202] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_B2"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[203] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_B3"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[204] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_B4"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[205] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_B5"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[206] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_B6"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[207] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_B7"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[208] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_B8"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5065[209] * IntToFloat(*uParam1)));
			break;
	}
}

struct<14> func_58(int iParam0, int iParam1, int iParam2)
{
	func_110();
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		func_94(iParam1, iParam2);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		func_59(iParam1, iParam2);
	}
	return Global_68186[0 /*14*/];
}

void func_59(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			func_93(iParam1);
			break;
		
		case 11:
			func_92(iParam1);
			break;
		
		case 8:
			func_84(iParam1);
			break;
		
		case 9:
			func_83(iParam1);
			break;
		
		case 3:
			func_82(iParam1);
			break;
		
		case 4:
			func_81(iParam1);
			break;
		
		case 6:
			func_80(iParam1);
			break;
		
		case 1:
			func_79(iParam1);
			break;
		
		case 7:
			func_78(iParam1);
			break;
		
		case 10:
			func_77(iParam1);
			break;
		
		case 14:
			func_76(iParam1);
			break;
		
		case 12:
			func_75(iParam1);
			break;
		
		case 5:
			func_74(iParam1);
			break;
		
		case 0:
			func_72(iParam1);
			break;
		
		case 13:
			func_60(iParam1);
			break;
	}
}

void func_60(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_61(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_71(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0xB793F1A0B6CC4AE1(sParam3) != unk_0xB793F1A0B6CC4AE1("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_6), 5);
		}
		unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_6), 1);
		unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_6), 2);
		unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_6), 6);
		if (iParam1 == 1)
		{
			if (unk_0xFC16329269277970(Global_2621444, joaat("REBREATHER"), 0))
			{
				unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_69(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x29DB79DD4D939B38(&(uParam0->f_6), 2);
			}
			if (!func_69(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_69(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x29DB79DD4D939B38(&(uParam0->f_6), 2);
			}
			if (!func_69(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_69(Global_2621444, 1, 1, 1, -1))
			{
				unk_0x29DB79DD4D939B38(&(uParam0->f_6), 2);
			}
			if (!func_69(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_6), 0);
		unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_6), 5);
		if (func_68(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_6), 1);
		}
		if (func_68(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_6), 2);
		}
		if (!func_68(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (!func_67(14))
			{
				iVar0 = func_64(func_66(iParam1, uParam0->f_2), Global_68184, 0);
				if (unk_0x889D01384B54BCE3(iVar0, uParam0->f_1))
				{
					unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_6), 1);
				}
				iVar0 = func_64(func_63(iParam1, uParam0->f_2), Global_68184, 0);
				if (unk_0x889D01384B54BCE3(iVar0, uParam0->f_1))
				{
					unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_6), 2);
				}
				if (func_62(iParam1, uParam0->f_2, &iVar1))
				{
					iVar0 = func_64(iVar1, Global_68184, 0);
					if (!unk_0x889D01384B54BCE3(iVar0, uParam0->f_1))
					{
						unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_6), 4);
					}
				}
			}
		}
		else
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_6), 1);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_6), 1);
			unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_6), 2);
		}
	}
}

bool func_62(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 973;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 974;
					break;
				
				case 3:
					*uParam2 = 1423;
					break;
				
				case 4:
					*uParam2 = 990;
					break;
				
				case 6:
					*uParam2 = 998;
					break;
				
				case 8:
					*uParam2 = 1424;
					break;
				
				case 9:
					*uParam2 = 1432;
					break;
				
				case 10:
					*uParam2 = 1434;
					break;
				
				case 1:
					*uParam2 = 1006;
					break;
				
				case 7:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 982;
					break;
				
				case 14:
					*uParam2 = 1014;
					break;
				
				case 12:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 975;
					break;
				
				case 4:
					*uParam2 = 991;
					break;
				
				case 6:
					*uParam2 = 999;
					break;
				
				case 8:
					*uParam2 = 1425;
					break;
				
				case 9:
					*uParam2 = 1433;
					break;
				
				case 7:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 983;
					break;
				
				case 14:
					*uParam2 = 1015;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 976;
					break;
				
				case 4:
					*uParam2 = 992;
					break;
				
				case 6:
					*uParam2 = 1000;
					break;
				
				case 8:
					*uParam2 = 1426;
					break;
				
				case 7:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 984;
					break;
				
				case 14:
					*uParam2 = 1016;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 993;
					break;
				
				case 6:
					*uParam2 = 1001;
					break;
				
				case 8:
					*uParam2 = 1427;
					break;
				
				case 11:
					*uParam2 = 985;
					break;
				
				case 14:
					*uParam2 = 1017;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 994;
					break;
				
				case 6:
					*uParam2 = 1002;
					break;
				
				case 8:
					*uParam2 = 1428;
					break;
				
				case 11:
					*uParam2 = 986;
					break;
				
				case 14:
					*uParam2 = 1018;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1429;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
	}
	return *uParam2 != 973;
}

int func_63(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 922;
					break;
				
				case 3:
					return 1408;
					break;
				
				case 4:
					return 938;
					break;
				
				case 6:
					return 946;
					break;
				
				case 8:
					return 1409;
					break;
				
				case 9:
					return 1417;
					break;
				
				case 10:
					return 1419;
					break;
				
				case 1:
					return 954;
					break;
				
				case 7:
					return 1420;
					break;
				
				case 11:
					return 930;
					break;
				
				case 14:
					return 962;
					break;
				
				case 12:
					return 973;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 923;
					break;
				
				case 4:
					return 939;
					break;
				
				case 6:
					return 947;
					break;
				
				case 8:
					return 1410;
					break;
				
				case 9:
					return 1418;
					break;
				
				case 7:
					return 1421;
					break;
				
				case 11:
					return 931;
					break;
				
				case 14:
					return 963;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 924;
					break;
				
				case 4:
					return 940;
					break;
				
				case 6:
					return 948;
					break;
				
				case 8:
					return 1411;
					break;
				
				case 7:
					return 1422;
					break;
				
				case 11:
					return 932;
					break;
				
				case 14:
					return 964;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 941;
					break;
				
				case 6:
					return 949;
					break;
				
				case 8:
					return 1412;
					break;
				
				case 11:
					return 933;
					break;
				
				case 14:
					return 965;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 942;
					break;
				
				case 6:
					return 950;
					break;
				
				case 8:
					return 1413;
					break;
				
				case 11:
					return 934;
					break;
				
				case 14:
					return 966;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1414;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 970;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 971;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 972;
					break;
			}
			break;
	}
	return 930;
}

int func_64(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2455246[iParam0 /*5*/][func_65(iParam1)];
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_65(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_23();
		if (iVar1 > -1)
		{
			Global_2454959 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454959 = 1;
		}
	}
	return iVar0;
}

int func_66(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 870;
					break;
				
				case 3:
					return 1393;
					break;
				
				case 4:
					return 886;
					break;
				
				case 6:
					return 894;
					break;
				
				case 8:
					return 1394;
					break;
				
				case 9:
					return 1402;
					break;
				
				case 10:
					return 1404;
					break;
				
				case 1:
					return 902;
					break;
				
				case 7:
					return 1405;
					break;
				
				case 11:
					return 878;
					break;
				
				case 14:
					return 910;
					break;
				
				case 12:
					return 921;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 871;
					break;
				
				case 4:
					return 887;
					break;
				
				case 6:
					return 895;
					break;
				
				case 8:
					return 1395;
					break;
				
				case 9:
					return 1403;
					break;
				
				case 7:
					return 1406;
					break;
				
				case 11:
					return 879;
					break;
				
				case 14:
					return 911;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 872;
					break;
				
				case 4:
					return 888;
					break;
				
				case 6:
					return 896;
					break;
				
				case 8:
					return 1396;
					break;
				
				case 7:
					return 1407;
					break;
				
				case 11:
					return 880;
					break;
				
				case 14:
					return 912;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 889;
					break;
				
				case 6:
					return 897;
					break;
				
				case 8:
					return 1397;
					break;
				
				case 11:
					return 881;
					break;
				
				case 14:
					return 913;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 890;
					break;
				
				case 6:
					return 898;
					break;
				
				case 8:
					return 1398;
					break;
				
				case 11:
					return 882;
					break;
				
				case 14:
					return 914;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1399;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 918;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 919;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 920;
					break;
			}
			break;
	}
	return 878;
}

bool func_67(int iParam0)
{
	return Global_34915 == iParam0;
}

int func_68(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_97439.f_1729[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0x29DB79DD4D939B38(&(Global_97439.f_1729[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0x889D01384B54BCE3(Global_97439.f_1729[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_69(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_68184;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_70(uParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_64(iVar2, iVar0, 0);
		return unk_0x889D01384B54BCE3(iVar3, iVar1);
	}
	return 0;
}

bool func_70(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 3025;
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_2540145)
		{
			iVar0 = unk_0x47ABED7FED8678AE(uParam0);
		}
		else
		{
			iVar0 = unk_0x583F8A8F3DE4E9E6(uParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0x47ABED7FED8678AE(uParam0);
	}
	else
	{
		iVar0 = unk_0x583F8A8F3DE4E9E6(uParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1752;
					break;
				
				case 1:
					*uParam2 = 1753;
					break;
				
				case 2:
					*uParam2 = 1754;
					break;
				
				case 3:
					*uParam2 = 1755;
					break;
				
				case 4:
					*uParam2 = 1756;
					break;
				
				case 5:
					*uParam2 = 1757;
					break;
				
				case 6:
					*uParam2 = 1764;
					break;
				
				case 7:
					*uParam2 = 1765;
					break;
				
				case 8:
					*uParam2 = 1766;
					break;
				
				case 9:
					*uParam2 = 1767;
					break;
				
				case 10:
					*uParam2 = 1768;
					break;
				
				case 11:
					*uParam2 = 1769;
					break;
				
				case 12:
					*uParam2 = 1770;
					break;
				
				case 13:
					*uParam2 = 1778;
					break;
				
				case 14:
					*uParam2 = 1779;
					break;
				
				case 15:
					*uParam2 = 1880;
					break;
				
				case 16:
					*uParam2 = 1881;
					break;
				
				case 17:
					*uParam2 = 1912;
					break;
				
				case 18:
					*uParam2 = 1926;
					break;
				
				case 19:
					*uParam2 = 1927;
					break;
				
				case 20:
					*uParam2 = 1928;
					break;
				
				case 21:
					*uParam2 = 1929;
					break;
				
				case 22:
					*uParam2 = 1930;
					break;
				
				case 23:
					*uParam2 = 2034;
					break;
				
				case 24:
					*uParam2 = 2035;
					break;
				
				case 25:
					*uParam2 = 2061;
					break;
				
				case 26:
					*uParam2 = 2062;
					break;
				
				case 27:
					*uParam2 = 2063;
					break;
				
				case 28:
					*uParam2 = 2064;
					break;
				
				case 29:
					*uParam2 = 2065;
					break;
				
				case 30:
					*uParam2 = 2066;
					break;
				
				case 31:
					*uParam2 = 2067;
					break;
				
				case 32:
					*uParam2 = 2068;
					break;
				
				case 33:
					*uParam2 = 2069;
					break;
				
				case 34:
					*uParam2 = 2070;
					break;
				
				case 35:
					*uParam2 = 2317;
					break;
				
				case 36:
					*uParam2 = 2318;
					break;
				
				case 37:
					*uParam2 = 2354;
					break;
				
				case 38:
					*uParam2 = 2355;
					break;
				
				case 39:
					*uParam2 = 2356;
					break;
				
				case 40:
					*uParam2 = 2357;
					break;
				
				case 41:
					*uParam2 = 2416;
					break;
				
				case 42:
					*uParam2 = 2417;
					break;
				
				case 43:
					*uParam2 = 2418;
					break;
				
				case 44:
					*uParam2 = 2419;
					break;
				
				case 45:
					*uParam2 = 2420;
					break;
				
				case 46:
					*uParam2 = 2421;
					break;
				
				case 47:
					*uParam2 = 2422;
					break;
				
				case 48:
					*uParam2 = 2423;
					break;
				
				case 49:
					*uParam2 = 2424;
					break;
				
				case 50:
					*uParam2 = 2425;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1758;
					break;
				
				case 1:
					*uParam2 = 1759;
					break;
				
				case 2:
					*uParam2 = 1760;
					break;
				
				case 3:
					*uParam2 = 1761;
					break;
				
				case 4:
					*uParam2 = 1762;
					break;
				
				case 5:
					*uParam2 = 1763;
					break;
				
				case 6:
					*uParam2 = 1771;
					break;
				
				case 7:
					*uParam2 = 1772;
					break;
				
				case 8:
					*uParam2 = 1773;
					break;
				
				case 9:
					*uParam2 = 1774;
					break;
				
				case 10:
					*uParam2 = 1775;
					break;
				
				case 11:
					*uParam2 = 1776;
					break;
				
				case 12:
					*uParam2 = 1777;
					break;
				
				case 13:
					*uParam2 = 1780;
					break;
				
				case 14:
					*uParam2 = 1781;
					break;
				
				case 15:
					*uParam2 = 1882;
					break;
				
				case 16:
					*uParam2 = 1883;
					break;
				
				case 17:
					*uParam2 = 1913;
					break;
				
				case 18:
					*uParam2 = 1931;
					break;
				
				case 19:
					*uParam2 = 1932;
					break;
				
				case 20:
					*uParam2 = 1933;
					break;
				
				case 21:
					*uParam2 = 1934;
					break;
				
				case 22:
					*uParam2 = 1935;
					break;
				
				case 23:
					*uParam2 = 2036;
					break;
				
				case 24:
					*uParam2 = 2037;
					break;
				
				case 25:
					*uParam2 = 2071;
					break;
				
				case 26:
					*uParam2 = 2072;
					break;
				
				case 27:
					*uParam2 = 2073;
					break;
				
				case 28:
					*uParam2 = 2074;
					break;
				
				case 29:
					*uParam2 = 2075;
					break;
				
				case 30:
					*uParam2 = 2076;
					break;
				
				case 31:
					*uParam2 = 2077;
					break;
				
				case 32:
					*uParam2 = 2078;
					break;
				
				case 33:
					*uParam2 = 2079;
					break;
				
				case 34:
					*uParam2 = 2080;
					break;
				
				case 35:
					*uParam2 = 2319;
					break;
				
				case 36:
					*uParam2 = 2320;
					break;
				
				case 37:
					*uParam2 = 2358;
					break;
				
				case 38:
					*uParam2 = 2359;
					break;
				
				case 39:
					*uParam2 = 2360;
					break;
				
				case 40:
					*uParam2 = 2361;
					break;
				
				case 41:
					*uParam2 = 2426;
					break;
				
				case 42:
					*uParam2 = 2427;
					break;
				
				case 43:
					*uParam2 = 2428;
					break;
				
				case 44:
					*uParam2 = 2429;
					break;
				
				case 45:
					*uParam2 = 2430;
					break;
				
				case 46:
					*uParam2 = 2431;
					break;
				
				case 47:
					*uParam2 = 2432;
					break;
				
				case 48:
					*uParam2 = 2433;
					break;
				
				case 49:
					*uParam2 = 2434;
					break;
				
				case 50:
					*uParam2 = 2435;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 3025;
}

int func_71(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_72(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	Global_68186[0 /*14*/].f_5 = 4;
	func_73(iVar0, iParam0, 0);
}

void func_73(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	struct<8> Var2;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	struct<10> Var41;
	int iVar58;
	int iVar59;
	int iVar60;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	uVar1 = Global_68186[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = unk_0x679142F703489374(uVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0xE7187985FE6BDDBC(iVar17, &Var2);
			if (!unk_0xA90142E282A42D80(Var2.f_0))
			{
				if (iVar18 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2.f_0;
					func_61(&(Global_68186[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_61(&(Global_68186[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0xBDDDC429ACE48471(&Var20);
		iVar39 = 0;
		iVar40 = unk_0x4E1A2A59E4ACC278(iVar1, 6, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			unk_0x5CB214386FBD4468(iVar38, &Var20);
			if (!unk_0xA90142E282A42D80(Var20.f_0))
			{
				if (iVar39 == (iParam1 - iParam2))
				{
					if (Var20.f_6 == 0)
					{
						iVar37 = 9;
					}
					else if (Var20.f_6 == 1)
					{
						iVar37 = 10;
					}
					else if (Var20.f_6 == 2)
					{
						iVar37 = 2;
					}
					else if (Var20.f_6 == 3)
					{
						iVar37 = 3;
					}
					else if (Var20.f_6 == 4)
					{
						iVar37 = 4;
					}
					else if (Var20.f_6 == 5)
					{
						iVar37 = 5;
					}
					else if (Var20.f_6 == 6)
					{
						iVar37 = 6;
					}
					else if (Var20.f_6 == 7)
					{
						iVar37 = 7;
					}
					else if (Var20.f_6 == 8)
					{
						iVar37 = 8;
					}
					else
					{
						iVar37 = -1;
					}
					Global_2621444 = Var20.f_1;
					Global_2621445 = Var20.f_0;
					func_61(&(Global_68186[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, unk_0xFC16329269277970(Var20.f_1, joaat("OUTFIT_ONLY"), 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		unk_0xC10C2D9EE1DAEA41(&Var41);
		iVar59 = 0;
		iVar60 = unk_0x4E1A2A59E4ACC278(iVar1, 6, -1, 0, -1, func_44(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			unk_0xA3CC695797E69C26(iVar58, &Var41);
			if (!unk_0xA90142E282A42D80(Var41.f_0))
			{
				if (iVar59 == (iParam1 - iParam2))
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41.f_0;
					func_61(&(Global_68186[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, unk_0xFC16329269277970(Var41.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
}

void func_74(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_68186[0 /*14*/].f_5 = 4;
			func_73(iVar10, iParam0, 9);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_75(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S1", 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S2", 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S3", 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S4", 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S5", 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S6", 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S7", 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_S8", 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P1", 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P2", 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P3", 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P4", 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P5", 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P6", 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P7", 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P8", 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P9", 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_P10", 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B1", 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B2", 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B3", 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B4", 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B5", 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B6", 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B7", 16);
			break;
		
		case 26:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B8", 16);
			break;
		
		case 27:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMF_B9", 16);
			break;
		
		default:
			Global_68186[0 /*14*/].f_5 = 4;
			func_73(iVar10, iParam0, 28);
			return;
			break;
	}
	func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_76(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMF_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMF_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 400;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 375;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 325;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 255;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMF_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 360;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 3970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1355;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMF_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 230;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMF_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMF_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 515;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMF_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 545;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMF_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMF_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMF_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMF_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 1440;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMF_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMF_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMF_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMF_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "HT_FMF_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 50;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMF_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMF_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 575;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMF_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 605;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMF_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 285;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 2125;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 295;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 195;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 855;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1615;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 1130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMF_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMF_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMF_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 110;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMF_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 145;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMF_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMF_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 105;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMF_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMF_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 115;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 390;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 425;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMF_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMF_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMF_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMF_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMF_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMF_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMF_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMF_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMF_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMF_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMF_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMF_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMF_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMF_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMF_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMF_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMF_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMF_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMF_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMF_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMF_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMF_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMF_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMF_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 163:
			StringCopy(&Var2, "G_FMF_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "G_FMF_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "G_FMF_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMF_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMF_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMF_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMF_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMF_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 174:
			StringCopy(&Var2, "G_FMF_1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "G_FMF_1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "G_FMF_1_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMF_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMF_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMF_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMF_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMF_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 595;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "G_FMF_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 160;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "G_FMF_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 545;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "G_FMF_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "G_FMF_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "G_FMF_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "G_FMF_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMF_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 6250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMF_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMF_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 3585;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMF_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 4075;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMF_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 4935;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "G_FMF_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "G_FMF_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 5600;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "G_FMF_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 4790;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "G_FMF_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "G_FMF_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "G_FMF_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 2245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 1205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "G_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "G_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 2215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "G_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "G_FMF_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "G_FMF_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "G_FMF_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "G_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "G_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "G_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMF_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 5000;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMF_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMF_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMF_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMF_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMF_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMF_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMF_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 229:
			StringCopy(&Var2, "G_FMF_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "G_FMF_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "G_FMF_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMF_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 4815;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMF_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 4795;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "G_FMF_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "G_FMF_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 4305;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "G_FMF_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 4965;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "G_FMF_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 480;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMF_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 465;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMF_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4320;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "G_FMF_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "G_FMF_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "G_FMF_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 243:
			StringCopy(&Var2, "G_FMF_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMF_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 245:
			StringCopy(&Var2, "G_FMF_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 246:
			StringCopy(&Var2, "G_FMF_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 247:
			StringCopy(&Var2, "G_FMF_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMF_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMF_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMF_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 251:
			StringCopy(&Var2, "G_FMF_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "G_FMF_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "G_FMF_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMF_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMF_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "G_FMF_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "G_FMF_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 570;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "G_FMF_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 525;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMF_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMF_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMF_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "G_FMF_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "G_FMF_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "G_FMF_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMF_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 4065;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMF_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "G_FMF_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "G_FMF_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4275;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "G_FMF_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMF_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMF_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMF_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 273:
			StringCopy(&Var2, "G_FMF_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 274:
			StringCopy(&Var2, "G_FMF_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 275:
			StringCopy(&Var2, "G_FMF_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 276:
			StringCopy(&Var2, "G_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 3660;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 4165;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 3670;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 3620;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 3610;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 4140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 286:
			StringCopy(&Var2, "G_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 287:
			StringCopy(&Var2, "G_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 288:
			StringCopy(&Var2, "G_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 297:
			StringCopy(&Var2, "G_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 298:
			StringCopy(&Var2, "G_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 299:
			StringCopy(&Var2, "G_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMF_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 325;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMF_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMF_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMF_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMF_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMF_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMF_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMF_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 308:
			StringCopy(&Var2, "G_FMF_14_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "G_FMF_14_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "G_FMF_14_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 316:
			StringCopy(&Var2, "G_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 317:
			StringCopy(&Var2, "G_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 318:
			StringCopy(&Var2, "G_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 825;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMF_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMF_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMF_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
	}
	if (iVar11 == 1)
	{
		iVar12 = (iParam0 - 10);
		if (iVar12 >= 0 && iVar12 < 121)
		{
			if (iVar12 > 8)
			{
				iVar12 = (iVar12 - 1);
			}
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2025[iVar12]) * Global_271302.f_26));
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = (iParam0 - 131);
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2146[iVar13]) * Global_271302.f_27));
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = (iParam0 - 155);
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2171[iVar14]) * Global_271302.f_56));
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = (iParam0 - 319);
		if (iVar15 >= 0 && iVar15 < 10)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2300[iVar15]) * Global_271302.f_28));
		}
	}
	if (iParam0 >= 327)
	{
		Global_68186[0 /*14*/].f_5 = 4;
		func_73(iVar10, iParam0, 327);
		if (Global_68186[0 /*14*/].f_7 > 0)
		{
			if (unk_0xFC16329269277970(Global_2621444, joaat("HAT"), 1))
			{
				Global_68186[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68186[0 /*14*/].f_7) * Global_271302.f_26));
			}
			else if (unk_0xFC16329269277970(Global_2621444, joaat("GLASSES"), 1))
			{
				Global_68186[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68186[0 /*14*/].f_7) * Global_271302.f_56));
			}
			else if (unk_0xFC16329269277970(Global_2621444, joaat("WATCH"), 1))
			{
				Global_68186[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68186[0 /*14*/].f_7) * Global_271302.f_28));
			}
		}
	}
	else
	{
		func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_77(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_68186[0 /*14*/].f_5 = 4;
			func_73(iVar10, iParam0, 6);
			return;
			break;
	}
	func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_78(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			if (Global_262145.f_4119 != -1)
			{
				iVar1 = Global_262145.f_4119;
			}
			else
			{
				iVar1 = 310;
			}
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			if (Global_262145.f_4120 != -1)
			{
				iVar1 = Global_262145.f_4120;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			if (Global_262145.f_4121 != -1)
			{
				iVar1 = Global_262145.f_4121;
			}
			else
			{
				iVar1 = 145;
			}
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			if (Global_262145.f_4122 != -1)
			{
				iVar1 = Global_262145.f_4122;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			if (Global_262145.f_4123 != -1)
			{
				iVar1 = Global_262145.f_4123;
			}
			else
			{
				iVar1 = 265;
			}
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			if (Global_262145.f_4124 != -1)
			{
				iVar1 = Global_262145.f_4124;
			}
			else
			{
				iVar1 = 280;
			}
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			if (Global_262145.f_4125 != -1)
			{
				iVar1 = Global_262145.f_4125;
			}
			else
			{
				iVar1 = 295;
			}
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			if (Global_262145.f_4126 != -1)
			{
				iVar1 = Global_262145.f_4126;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			if (Global_262145.f_4127 != -1)
			{
				iVar1 = Global_262145.f_4127;
			}
			else
			{
				iVar1 = 85;
			}
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			if (Global_262145.f_4128 != -1)
			{
				iVar1 = Global_262145.f_4128;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			if (Global_262145.f_4129 != -1)
			{
				iVar1 = Global_262145.f_4129;
			}
			else
			{
				iVar1 = 105;
			}
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			if (Global_262145.f_4130 != -1)
			{
				iVar1 = Global_262145.f_4130;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			if (Global_262145.f_4131 != -1)
			{
				iVar1 = Global_262145.f_4131;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			if (Global_262145.f_4132 != -1)
			{
				iVar1 = Global_262145.f_4132;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			if (Global_262145.f_4133 != -1)
			{
				iVar1 = Global_262145.f_4133;
			}
			else
			{
				iVar1 = 30;
			}
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			if (Global_262145.f_4134 != -1)
			{
				iVar1 = Global_262145.f_4134;
			}
			else
			{
				iVar1 = 40;
			}
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			if (Global_262145.f_4135 != -1)
			{
				iVar1 = Global_262145.f_4135;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 18:
			iVar6 = 3;
			iVar7 = 5;
			if (Global_262145.f_4136 != -1)
			{
				iVar1 = Global_262145.f_4136;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 2;
			if (Global_262145.f_4137 != -1)
			{
				iVar1 = Global_262145.f_4137;
			}
			else
			{
				iVar1 = 355;
			}
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 3;
			if (Global_262145.f_4138 != -1)
			{
				iVar1 = Global_262145.f_4138;
			}
			else
			{
				iVar1 = 370;
			}
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 4;
			if (Global_262145.f_4139 != -1)
			{
				iVar1 = Global_262145.f_4139;
			}
			else
			{
				iVar1 = 110;
			}
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 5;
			if (Global_262145.f_4140 != -1)
			{
				iVar1 = Global_262145.f_4140;
			}
			else
			{
				iVar1 = 160;
			}
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 0;
			if (Global_262145.f_4141 != -1)
			{
				iVar1 = Global_262145.f_4141;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 1;
			if (Global_262145.f_4142 != -1)
			{
				iVar1 = Global_262145.f_4142;
			}
			else
			{
				iVar1 = 190;
			}
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 2;
			if (Global_262145.f_4143 != -1)
			{
				iVar1 = Global_262145.f_4143;
			}
			else
			{
				iVar1 = 235;
			}
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 3;
			if (Global_262145.f_4144 != -1)
			{
				iVar1 = Global_262145.f_4144;
			}
			else
			{
				iVar1 = 220;
			}
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 4;
			if (Global_262145.f_4145 != -1)
			{
				iVar1 = Global_262145.f_4145;
			}
			else
			{
				iVar1 = 250;
			}
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 5;
			if (Global_262145.f_4146 != -1)
			{
				iVar1 = Global_262145.f_4146;
			}
			else
			{
				iVar1 = 205;
			}
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 0;
			if (Global_262145.f_4147 != -1)
			{
				iVar1 = Global_262145.f_4147;
			}
			else
			{
				iVar1 = 445;
			}
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 1;
			if (Global_262145.f_4148 != -1)
			{
				iVar1 = Global_262145.f_4148;
			}
			else
			{
				iVar1 = 175;
			}
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 0;
			if (Global_262145.f_4149 != -1)
			{
				iVar1 = Global_262145.f_4149;
			}
			else
			{
				iVar1 = 340;
			}
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		default:
			Global_68186[0 /*14*/].f_5 = 4;
			func_73(iVar10, iParam0, 55);
			if (Global_68186[0 /*14*/].f_7 > 0)
			{
				Global_68186[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68186[0 /*14*/].f_7) * Global_271302.f_58));
			}
			return;
			break;
	}
	iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_271302.f_58));
	StringCopy(&Var2, "T_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_79(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_68186[0 /*14*/].f_5 = 4;
			func_73(iVar10, iParam0, 26);
			if (Global_68186[0 /*14*/].f_7 > 0)
			{
				Global_68186[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68186[0 /*14*/].f_7) * Global_271302.f_29));
			}
			return;
			break;
	}
	StringCopy(&Var2, "M_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = (iParam0 - 1);
	if (iVar11 >= 0 && iVar11 < 26)
	{
		iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1998[iVar11]) * Global_271302.f_29));
	}
	func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_80(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 1765;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 760;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 760;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 765;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 85;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 80;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 90;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 95;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 100;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 60;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 55;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 1255;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 1050;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 1895;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 185;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 190;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 115;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 415;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 105;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 3530;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 2610;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 1295;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 120;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 160;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 160;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 145;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 105;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 115;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 150;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 540;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 120;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 460;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 120;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 415;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 135;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 140;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 160;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1025;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 1560;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 145;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 120;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 365;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 85;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 50;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 2395;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 3675;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 320;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 3875;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2050;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 375;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2105;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 345;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 380;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 340;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 385;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 4135;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 370;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 375;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 385;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 365;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 325;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 325;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 370;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 390;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 400;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 365;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 410;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 4125;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 4365;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 5365;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 6225;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 3755;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 405;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 4115;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 2240;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 3850;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 3110;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 1950;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 455;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 405;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 410;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 415;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 4425;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 65;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 85;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 75;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 360;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 175;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 675;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 400;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 340;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 195;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 120;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 165;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 1040;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 100;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 205;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 200;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 100;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 1420;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 445;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 435;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 420;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 425;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 435;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 425;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 430;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 3215;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 3320;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 440;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 440;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 450;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 450;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 1255;
			break;
		
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 750;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 165;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 460;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 195;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 210;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 215;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 220;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 455;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 175;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 800;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 790;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 175;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 190;
			break;
	}
	StringCopy(&Var2, "F_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1741[iVar11]) * Global_271302.f_25));
	}
	if (iParam0 >= 256)
	{
		Global_68186[0 /*14*/].f_5 = 4;
		func_73(iVar10, iParam0, 256);
		if (Global_68186[0 /*14*/].f_7 > 0)
		{
			Global_68186[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68186[0 /*14*/].f_7) * Global_271302.f_25));
		}
	}
	else
	{
		func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_81(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 270;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 750;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 450;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 4875;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 1760;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 1090;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 2465;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 305;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 290;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 410;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 255;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 255;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 405;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 5000;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 4480;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 4335;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 375;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 265;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 275;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 280;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 300;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 265;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 255;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 250;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 260;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 250;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 225;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 230;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 650;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 425;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 345;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 110;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 250;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 290;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 110;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 525;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 115;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 535;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 120;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 130;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 140;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 520;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 215;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 220;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 225;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 215;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 630;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 250;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 260;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 200;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 225;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 230;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 725;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 650;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 230;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 230;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 280;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 330;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 320;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 315;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 850;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 530;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 890;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 440;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 455;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 295;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 155;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 840;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 150;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 950;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 580;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 200;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 665;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 780;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 615;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 250;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 435;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 485;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 380;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 1295;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 1135;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 1425;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1645;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1925;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 2250;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 365;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 360;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 2245;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 2170;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 65;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 275;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 300;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 145;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 155;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 155;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 510;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 165;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 465;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 250;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 110;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 470;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 480;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 155;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 275;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 395;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 285;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 560;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 595;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 295;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 230;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 215;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 270;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 295;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 215;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 210;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 290;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 230;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 230;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 350;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 335;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "L_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1227[iVar11]) * Global_271302.f_23));
	}
	if (iParam0 >= 256)
	{
		Global_68186[0 /*14*/].f_5 = 4;
		func_73(iVar10, iParam0, 256);
		if (Global_68186[0 /*14*/].f_7 > 0)
		{
			Global_68186[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68186[0 /*14*/].f_7) * Global_271302.f_23));
		}
	}
	else
	{
		func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_82(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 15;
			iVar7 = 0;
			break;
	}
	if (iParam0 >= 16)
	{
		Global_68186[0 /*14*/].f_5 = 4;
		func_73(iVar10, iParam0, 16);
		return;
	}
	func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_83(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 11:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 21:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 23:
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 26:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 27:
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 28:
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 29:
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 31:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 32:
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 33:
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 34:
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 4;
			break;
	}
	if (iParam0 >= 36)
	{
		Global_68186[0 /*14*/].f_5 = 4;
		func_73(iVar10, iParam0, 36);
		return;
	}
	func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_84(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMF_0_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMF_0_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMF_0_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMF_0_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMF_0_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMF_0_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMF_0_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMF_0_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMF_0_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMF_0_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMF_0_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMF_0_11", 16);
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMF_0_12", 16);
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMF_0_13", 16);
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMF_0_14", 16);
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMF_0_15", 16);
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 125;
			break;
		
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 33:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMF_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMF_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMF_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMF_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMF_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMF_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMF_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMF_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMF_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMF_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMF_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMF_4_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMF_4_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMF_4_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[77]));
			break;
		
		case 48:
			StringCopy(&Var2, "U_FMF_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[78]));
			break;
		
		case 49:
			StringCopy(&Var2, "U_FMF_4_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "U_FMF_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[80]));
			break;
		
		case 51:
			StringCopy(&Var2, "U_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[81]));
			break;
		
		case 52:
			StringCopy(&Var2, "U_FMF_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "U_FMF_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "U_FMF_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "U_FMF_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "U_FMF_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "U_FMF_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[87]));
			break;
		
		case 58:
			StringCopy(&Var2, "U_FMF_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "U_FMF_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[89]));
			break;
		
		case 60:
			StringCopy(&Var2, "U_FMF_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "U_FMF_5_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "U_FMF_5_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "U_FMF_5_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "U_FMF_5_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "U_FMF_5_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 67:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 68:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 69:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 70:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "U_FMF_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[176]));
			break;
		
		case 72:
			StringCopy(&Var2, "U_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[177]));
			break;
		
		case 73:
			StringCopy(&Var2, "U_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[178]));
			break;
		
		case 74:
			StringCopy(&Var2, "U_FMF_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "U_FMF_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "U_FMF_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "U_FMF_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "U_FMF_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "U_FMF_11_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMF_11_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMF_11_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[186]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMF_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[187]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMF_11_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMF_11_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMF_11_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMF_11_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[191]));
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMF_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMF_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMF_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMF_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMF_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMF_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMF_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMF_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[199]));
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMF_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[200]));
			break;
		
		case 96:
			StringCopy(&Var2, "U_FMF_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[201]));
			break;
		
		case 97:
			StringCopy(&Var2, "U_FMF_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "U_FMF_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "U_FMF_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 100:
			StringCopy(&Var2, "U_FMF_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 101:
			StringCopy(&Var2, "U_FMF_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 102:
			StringCopy(&Var2, "U_FMF_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "U_FMF_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[208]));
			break;
		
		case 104:
			StringCopy(&Var2, "U_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[209]));
			break;
		
		case 105:
			StringCopy(&Var2, "U_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[210]));
			break;
		
		case 106:
			StringCopy(&Var2, "U_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[211]));
			break;
		
		case 107:
			StringCopy(&Var2, "U_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[212]));
			break;
		
		case 108:
			StringCopy(&Var2, "U_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[213]));
			break;
		
		case 109:
			StringCopy(&Var2, "U_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[214]));
			break;
		
		case 110:
			StringCopy(&Var2, "U_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[215]));
			break;
		
		case 111:
			StringCopy(&Var2, "U_FMF_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[216]));
			break;
		
		case 112:
			StringCopy(&Var2, "U_FMF_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[217]));
			break;
		
		case 113:
			StringCopy(&Var2, "U_FMF_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[218]));
			break;
		
		case 114:
			StringCopy(&Var2, "U_FMF_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[219]));
			break;
		
		case 115:
			StringCopy(&Var2, "U_FMF_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[220]));
			break;
		
		case 116:
			StringCopy(&Var2, "U_FMF_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[221]));
			break;
		
		case 117:
			StringCopy(&Var2, "U_FMF_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[222]));
			break;
		
		case 118:
			StringCopy(&Var2, "U_FMF_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[223]));
			break;
		
		case 119:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 120:
			StringCopy(&Var2, "U_FMF_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[240]));
			break;
		
		case 121:
			StringCopy(&Var2, "U_FMF_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 122:
			StringCopy(&Var2, "U_FMF_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 123:
			StringCopy(&Var2, "U_FMF_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[243]));
			break;
		
		case 124:
			StringCopy(&Var2, "U_FMF_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 125:
			StringCopy(&Var2, "U_FMF_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 126:
			StringCopy(&Var2, "U_FMF_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 127:
			StringCopy(&Var2, "U_FMF_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 128:
			StringCopy(&Var2, "U_FMF_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMF_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMF_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[250]));
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMF_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[251]));
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMF_15_12", 16);
			iVar6 = 15;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMF_15_13", 16);
			iVar6 = 15;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMF_15_14", 16);
			iVar6 = 15;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMF_15_15", 16);
			iVar6 = 15;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		default:
			Global_68186[0 /*14*/].f_5 = 4;
			func_73(iVar10, iParam0, 136);
			if (Global_68186[0 /*14*/].f_7 > 0)
			{
				Global_68186[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68186[0 /*14*/].f_7) * Global_271302.f_24));
			}
			return;
			break;
	}
	if (iParam0 == 4 || iParam0 == 20)
	{
		if (func_85(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(1250) * Global_262145.f_2959));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(40) * Global_262145.f_1484[4]));
		}
	}
	else if (iParam0 == 7 || iParam0 == 23)
	{
		if (func_85(88, -1))
		{
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(450) * Global_262145.f_2958));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(45) * Global_262145.f_1484[7]));
		}
	}
	else if (iParam0 == 9 || iParam0 == 25)
	{
		if (func_85(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(500) * Global_262145.f_2957));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(40) * Global_262145.f_1484[9]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 16)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[iVar11]));
		}
	}
	else if (iParam0 >= 16 && iParam0 < 32)
	{
		iVar12 = (iParam0 - 16);
		if (iVar12 >= 0 && iVar12 < 256)
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[iVar12]));
		}
	}
	iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_271302.f_24));
	func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

bool func_85(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_88(iParam0) == 3025)
	{
		return 0;
	}
	iVar0 = func_87(iParam0, iParam1);
	iVar1 = iParam0;
	return unk_0x889D01384B54BCE3(iVar0, func_86(iVar1));
}

int func_86(int iParam0)
{
	return (iParam0 % 32);
}

int func_87(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_64(func_88(uParam0), iParam1, 0);
	return iVar0;
}

int func_88(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_91(iVar0);
	if ((func_90() == 0 || func_89() == 0) || (func_90() == 999 && func_89() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1033;
				break;
			
			case 1:
				return 1034;
				break;
			
			case 2:
				return 1035;
				break;
			
			case 3:
				return 1036;
				break;
			
			case 4:
				return 1037;
				break;
			
			case 5:
				return 1496;
				break;
			
			case 6:
				return 1749;
				break;
			
			case 7:
				return 1943;
				break;
			
			case 8:
				return 1944;
				break;
			
			case 9:
				return 1945;
				break;
			
			case 10:
				return 1946;
				break;
			
			case 11:
				return 1947;
				break;
			
			case 12:
				return 1948;
				break;
			
			case 13:
				return 2387;
				break;
			
			case 14:
				return 2407;
				break;
			
			case 15:
				return 2410;
				break;
			
			case 16:
				return 2413;
				break;
			}
	}
	return 3025;
}

int func_89()
{
	return Global_24447;
}

int func_90()
{
	return Global_24446;
}

int func_91(int iParam0)
{
	return (iParam0 / 32);
}

void func_92(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 225;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 40;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 40;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 40;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 40;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 220;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 45;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 125;
			break;
	}
	switch (iParam0)
	{
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 390;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 230;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 355;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 5000;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 2725;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 3265;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 3625;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 4220;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 310;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 75;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 50;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 295;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 80;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 75;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 2250;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 275;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 445;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 50;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 470;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 95;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 360;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 100;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 60;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 460;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 1980;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 2110;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 95;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 375;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 90;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 900;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1000;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1050;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1000;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2975;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 1100;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 1825;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 1750;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1025;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 1075;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 2805;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 2250;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 495;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 525;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 110;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 130;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 560;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 295;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 975;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 160;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 100;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 1700;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 380;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 95;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 90;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 85;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 215;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 150;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 145;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 1560;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 975;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 385;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 345;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 430;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 375;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 375;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 360;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 325;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 340;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 435;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 300;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 315;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 415;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 420;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 325;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 130;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 450;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	StringCopy(&Var2, "U_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 4)
	{
		if (func_85(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(1250) * Global_262145.f_2959) * Global_271302.f_24));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(40) * Global_262145.f_1484[4]) * Global_271302.f_24));
		}
	}
	else if (iParam0 == 7)
	{
		if (func_85(88, -1))
		{
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(450) * Global_262145.f_2958) * Global_271302.f_24));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(45) * Global_262145.f_1484[7]) * Global_271302.f_24));
		}
	}
	else if (iParam0 == 9)
	{
		if (func_85(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(500) * Global_262145.f_2957) * Global_271302.f_24));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(40) * Global_262145.f_1484[9]) * Global_271302.f_24));
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1484[iVar11]) * Global_271302.f_24));
		}
	}
	if (iParam0 >= 256)
	{
		Global_68186[0 /*14*/].f_5 = 4;
		func_73(iVar10, iParam0, 256);
		if (Global_68186[0 /*14*/].f_7 > 0)
		{
			Global_68186[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68186[0 /*14*/].f_7) * Global_271302.f_24));
		}
	}
	else
	{
		func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_93(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[0]));
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[1]));
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 495;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[2]));
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 490;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[3]));
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 485;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[4]));
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 480;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[5]));
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 440;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[6]));
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 435;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[7]));
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 430;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[8]));
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 425;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[9]));
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 420;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[10]));
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 190;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[11]));
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 185;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[12]));
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 180;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[13]));
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 175;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[14]));
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 170;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[15]));
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 295;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[16]));
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 290;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[17]));
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 285;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[18]));
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 280;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[19]));
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 275;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[20]));
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 2000;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[21]));
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1995;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[22]));
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1990;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[23]));
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1985;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[24]));
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1980;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[25]));
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 1150;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[26]));
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1145;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[27]));
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1140;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[28]));
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1135;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[29]));
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1130;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[30]));
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 550;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[31]));
			break;
		
		case 36:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 545;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[32]));
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 540;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[33]));
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 535;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[34]));
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 530;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[35]));
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 41:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 580;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[36]));
			break;
		
		case 42:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 575;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[37]));
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 570;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[38]));
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 565;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[39]));
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 560;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[40]));
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 47:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 1100;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[41]));
			break;
		
		case 48:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 1095;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[42]));
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 1090;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[43]));
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 1085;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[44]));
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 1080;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[45]));
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 53:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 520;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[46]));
			break;
		
		case 54:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 515;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[47]));
			break;
		
		case 55:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 510;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[48]));
			break;
		
		case 56:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 505;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[49]));
			break;
		
		case 57:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 500;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[50]));
			break;
		
		case 58:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 59:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 60:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 395;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[51]));
			break;
		
		case 61:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 390;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[52]));
			break;
		
		case 62:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 385;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[53]));
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 380;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[54]));
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 375;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[55]));
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 67:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1050;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[56]));
			break;
		
		case 68:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 1045;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[57]));
			break;
		
		case 69:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1040;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[58]));
			break;
		
		case 70:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 1035;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[59]));
			break;
		
		case 71:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 1030;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[60]));
			break;
		
		case 72:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 73:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 1200;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[61]));
			break;
		
		case 74:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1195;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[62]));
			break;
		
		case 75:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 1190;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[63]));
			break;
		
		case 76:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 1185;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[64]));
			break;
		
		case 77:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1180;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[65]));
			break;
		
		case 78:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 475;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[66]));
			break;
		
		case 80:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 470;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[67]));
			break;
		
		case 81:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 465;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[68]));
			break;
		
		case 82:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 460;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[69]));
			break;
		
		case 83:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 455;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[70]));
			break;
		
		case 84:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 85:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 950;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[71]));
			break;
		
		case 86:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 945;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[72]));
			break;
		
		case 87:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 940;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[73]));
			break;
		
		case 88:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 935;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[74]));
			break;
		
		case 89:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 930;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2435[75]));
			break;
		
		case 90:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 91:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		default:
			Global_68186[0 /*14*/].f_5 = 4;
			func_73(iVar10, iParam0, 92);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_94(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			func_109(iParam1);
			break;
		
		case 11:
			func_108(iParam1);
			break;
		
		case 8:
			func_107(iParam1);
			break;
		
		case 9:
			func_106(iParam1);
			break;
		
		case 3:
			func_105(iParam1);
			break;
		
		case 4:
			func_104(iParam1);
			break;
		
		case 6:
			func_103(iParam1);
			break;
		
		case 1:
			func_102(iParam1);
			break;
		
		case 7:
			func_101(iParam1);
			break;
		
		case 10:
			func_100(iParam1);
			break;
		
		case 14:
			func_99(iParam1);
			break;
		
		case 12:
			func_98(iParam1);
			break;
		
		case 5:
			func_97(iParam1);
			break;
		
		case 0:
			func_96(iParam1);
			break;
		
		case 13:
			func_95(iParam1);
			break;
	}
}

void func_95(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 13;
	switch (iParam0)
	{
		case 31:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			break;
	}
	func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_96(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	Global_68186[0 /*14*/].f_5 = 3;
	func_73(iVar0, iParam0, 0);
}

void func_97(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 5;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		default:
			Global_68186[0 /*14*/].f_5 = 3;
			func_73(iVar10, iParam0, 9);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_98(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 12;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S1", 16);
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S2", 16);
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S3", 16);
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S4", 16);
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S5", 16);
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S6", 16);
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S7", 16);
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S8", 16);
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_S9", 16);
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P1", 16);
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P2", 16);
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P3", 16);
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P4", 16);
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P5", 16);
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P6", 16);
			break;
		
		case 16:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P7", 16);
			break;
		
		case 17:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_P8", 16);
			break;
		
		case 18:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B1", 16);
			break;
		
		case 19:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B2", 16);
			break;
		
		case 20:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B3", 16);
			break;
		
		case 21:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B4", 16);
			break;
		
		case 22:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B5", 16);
			break;
		
		case 23:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B6", 16);
			break;
		
		case 24:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B7", 16);
			break;
		
		case 25:
			iVar6 = 0;
			iVar7 = 0;
			StringCopy(&Var2, "O_FMM_B8", 16);
			break;
		
		default:
			Global_68186[0 /*14*/].f_5 = 3;
			func_73(iVar10, iParam0, 26);
			return;
			break;
	}
	func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_99(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 14;
	iVar11 = 0;
	switch (iParam0)
	{
		case 0:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			break;
		
		case 1:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			break;
		
		case 2:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 2;
			break;
		
		case 3:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 3;
			break;
		
		case 4:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 4;
			break;
		
		case 5:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 5;
			break;
		
		case 6:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 6;
			break;
		
		case 7:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 7;
			break;
		
		case 8:
			iVar6 = -1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "HT_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "HT_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 12:
			StringCopy(&Var2, "HT_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "HT_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 14:
			StringCopy(&Var2, "HT_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 235;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 15:
			StringCopy(&Var2, "HT_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 80;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 16:
			StringCopy(&Var2, "HT_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 85;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "HT_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 18:
			StringCopy(&Var2, "HT_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar8 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "HT_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 20:
			StringCopy(&Var2, "HT_FMM_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 21:
			StringCopy(&Var2, "HT_FMM_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 22:
			StringCopy(&Var2, "HT_FMM_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 320;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "HT_FMM_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "HT_FMM_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 245;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 25:
			StringCopy(&Var2, "HT_FMM_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 26:
			StringCopy(&Var2, "HT_FMM_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 40;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "HT_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 28:
			StringCopy(&Var2, "HT_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "HT_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "HT_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "HT_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "HT_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "HT_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "HT_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "HT_FMM_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 415;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 36:
			StringCopy(&Var2, "HT_FMM_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 315;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 37:
			StringCopy(&Var2, "HT_FMM_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "HT_FMM_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "HT_FMM_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "HT_FMM_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "HT_FMM_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "HT_FMM_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "HT_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 75;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "HT_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "HT_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "HT_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "HT_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "HT_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "HT_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "HT_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "HT_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 52:
			StringCopy(&Var2, "HT_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 265;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 53:
			StringCopy(&Var2, "HT_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 54:
			StringCopy(&Var2, "HT_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "HT_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 570;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "HT_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 560;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 57:
			StringCopy(&Var2, "HT_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 58:
			StringCopy(&Var2, "HT_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 59:
			StringCopy(&Var2, "HT_FMM_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 260;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 60:
			StringCopy(&Var2, "HT_FMM_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 215;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "HT_FMM_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 430;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 62:
			StringCopy(&Var2, "HT_FMM_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 160;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 63:
			StringCopy(&Var2, "HT_FMM_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 200;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 64:
			StringCopy(&Var2, "HT_FMM_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 65:
			StringCopy(&Var2, "HT_FMM_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 155;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 66:
			StringCopy(&Var2, "HT_FMM_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 165;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 67:
			StringCopy(&Var2, "HT_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "HT_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "HT_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "HT_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "HT_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "HT_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "HT_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "HT_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "HT_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "HT_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "HT_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "HT_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "HT_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "HT_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 100;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 81:
			StringCopy(&Var2, "HT_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 82:
			StringCopy(&Var2, "HT_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 83:
			StringCopy(&Var2, "HT_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "HT_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "HT_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "HT_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "HT_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 88:
			StringCopy(&Var2, "HT_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 89:
			StringCopy(&Var2, "HT_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "HT_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 65;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 91:
			StringCopy(&Var2, "HT_FMM_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "HT_FMM_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "HT_FMM_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "HT_FMM_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "HT_FMM_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "HT_FMM_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 97:
			StringCopy(&Var2, "HT_FMM_11_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "HT_FMM_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 99:
			StringCopy(&Var2, "HT_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 1715;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 100:
			StringCopy(&Var2, "HT_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 3900;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 101:
			StringCopy(&Var2, "HT_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1550;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 102:
			StringCopy(&Var2, "HT_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 103:
			StringCopy(&Var2, "HT_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 4250;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 104:
			StringCopy(&Var2, "HT_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 0;
			iVar11 = 1;
			bVar0 = true;
			break;
		
		case 105:
			StringCopy(&Var2, "HT_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 4460;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 106:
			StringCopy(&Var2, "HT_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 4970;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 107:
			StringCopy(&Var2, "HT_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 290;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 108:
			StringCopy(&Var2, "HT_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 305;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 109:
			StringCopy(&Var2, "HT_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 4170;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 110:
			StringCopy(&Var2, "HT_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 335;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 111:
			StringCopy(&Var2, "HT_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 4940;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 112:
			StringCopy(&Var2, "HT_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 275;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 113:
			StringCopy(&Var2, "HT_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 5000;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 114:
			StringCopy(&Var2, "HT_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 3620;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 115:
			StringCopy(&Var2, "HT_FMM_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 116:
			StringCopy(&Var2, "HT_FMM_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 25;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 117:
			StringCopy(&Var2, "HT_FMM_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 118:
			StringCopy(&Var2, "HT_FMM_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 119:
			StringCopy(&Var2, "HT_FMM_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 120:
			StringCopy(&Var2, "HT_FMM_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 30;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 121:
			StringCopy(&Var2, "HT_FMM_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 350;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 122:
			StringCopy(&Var2, "HT_FMM_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 35;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 123:
			StringCopy(&Var2, "HT_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 365;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 124:
			StringCopy(&Var2, "HT_FMM_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 380;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "HT_FMM_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 126:
			StringCopy(&Var2, "HT_FMM_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 595;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 127:
			StringCopy(&Var2, "HT_FMM_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 600;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 128:
			StringCopy(&Var2, "HT_FMM_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 590;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 129:
			StringCopy(&Var2, "HT_FMM_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 395;
			iVar8 = 0;
			iVar11 = 1;
			break;
		
		case 130:
			StringCopy(&Var2, "HT_FMM_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 555;
			iVar8 = 0;
			iVar11 = 1;
			break;
	}
	switch (iParam0)
	{
		case 131:
			StringCopy(&Var2, "HE_FMM_16_0", 16);
			iVar6 = 16;
			iVar7 = 0;
			iVar1 = 1060;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 132:
			StringCopy(&Var2, "HE_FMM_16_1", 16);
			iVar6 = 16;
			iVar7 = 1;
			iVar1 = 1400;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 133:
			StringCopy(&Var2, "HE_FMM_16_2", 16);
			iVar6 = 16;
			iVar7 = 2;
			iVar1 = 1315;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 134:
			StringCopy(&Var2, "HE_FMM_16_3", 16);
			iVar6 = 16;
			iVar7 = 3;
			iVar1 = 1230;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 135:
			StringCopy(&Var2, "HE_FMM_16_4", 16);
			iVar6 = 16;
			iVar7 = 4;
			iVar1 = 1145;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 136:
			StringCopy(&Var2, "HE_FMM_16_5", 16);
			iVar6 = 16;
			iVar7 = 5;
			iVar1 = 8450;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 137:
			StringCopy(&Var2, "HE_FMM_16_6", 16);
			iVar6 = 16;
			iVar7 = 6;
			iVar1 = 675;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 138:
			StringCopy(&Var2, "HE_FMM_16_7", 16);
			iVar6 = 16;
			iVar7 = 7;
			iVar1 = 8750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 139:
			StringCopy(&Var2, "HE_FMM_17_0", 16);
			iVar6 = 17;
			iVar7 = 0;
			iVar1 = 975;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 140:
			StringCopy(&Var2, "HE_FMM_17_1", 16);
			iVar6 = 17;
			iVar7 = 1;
			iVar1 = 750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 141:
			StringCopy(&Var2, "HE_FMM_17_2", 16);
			iVar6 = 17;
			iVar7 = 2;
			iVar1 = 865;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 142:
			StringCopy(&Var2, "HE_FMM_17_3", 16);
			iVar6 = 17;
			iVar7 = 3;
			iVar1 = 890;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 143:
			StringCopy(&Var2, "HE_FMM_17_4", 16);
			iVar6 = 17;
			iVar7 = 4;
			iVar1 = 730;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 144:
			StringCopy(&Var2, "HE_FMM_17_5", 16);
			iVar6 = 17;
			iVar7 = 5;
			iVar1 = 650;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 145:
			StringCopy(&Var2, "HE_FMM_17_6", 16);
			iVar6 = 17;
			iVar7 = 6;
			iVar1 = 645;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 146:
			StringCopy(&Var2, "HE_FMM_17_7", 16);
			iVar6 = 17;
			iVar7 = 7;
			iVar1 = 755;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 147:
			StringCopy(&Var2, "HE_FMM_18_0", 16);
			iVar6 = 18;
			iVar7 = 0;
			iVar1 = 13850;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 148:
			StringCopy(&Var2, "HE_FMM_18_1", 16);
			iVar6 = 18;
			iVar7 = 1;
			iVar1 = 2900;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 149:
			StringCopy(&Var2, "HE_FMM_18_2", 16);
			iVar6 = 18;
			iVar7 = 2;
			iVar1 = 2895;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 150:
			StringCopy(&Var2, "HE_FMM_18_3", 16);
			iVar6 = 18;
			iVar7 = 3;
			iVar1 = 12500;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 151:
			StringCopy(&Var2, "HE_FMM_18_4", 16);
			iVar6 = 18;
			iVar7 = 4;
			iVar1 = 15000;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 152:
			StringCopy(&Var2, "HE_FMM_18_5", 16);
			iVar6 = 18;
			iVar7 = 5;
			iVar1 = 14750;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 153:
			StringCopy(&Var2, "HE_FMM_18_6", 16);
			iVar6 = 18;
			iVar7 = 6;
			iVar1 = 13150;
			iVar8 = 0;
			iVar11 = 2;
			break;
		
		case 154:
			StringCopy(&Var2, "HE_FMM_18_7", 16);
			iVar6 = 18;
			iVar7 = 7;
			iVar1 = 2925;
			iVar8 = 0;
			iVar11 = 2;
			break;
	}
	switch (iParam0)
	{
		case 155:
			StringCopy(&Var2, "G_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 156:
			StringCopy(&Var2, "G_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 157:
			StringCopy(&Var2, "G_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 158:
			StringCopy(&Var2, "G_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 159:
			StringCopy(&Var2, "G_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 160:
			StringCopy(&Var2, "G_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 161:
			StringCopy(&Var2, "G_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 162:
			StringCopy(&Var2, "G_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 163:
			StringCopy(&Var2, "G_FMM_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 164:
			StringCopy(&Var2, "G_FMM_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 165:
			StringCopy(&Var2, "G_FMM_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 166:
			StringCopy(&Var2, "G_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 167:
			StringCopy(&Var2, "G_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 168:
			StringCopy(&Var2, "G_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 169:
			StringCopy(&Var2, "G_FMM_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 170:
			StringCopy(&Var2, "G_FMM_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "G_FMM_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 172:
			StringCopy(&Var2, "G_FMM_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 173:
			StringCopy(&Var2, "G_FMM_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 174:
			StringCopy(&Var2, "G_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 175:
			StringCopy(&Var2, "G_FMM_2_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 176:
			StringCopy(&Var2, "G_FMM_2_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 380;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "G_FMM_2_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "G_FMM_2_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "G_FMM_2_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "G_FMM_2_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "G_FMM_2_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 390;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "G_FMM_2_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "G_FMM_2_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "G_FMM_2_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "G_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 70;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "G_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "G_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "G_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 95;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "G_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "G_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "G_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "G_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 90;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "G_FMM_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "G_FMM_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "G_FMM_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "G_FMM_4_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "G_FMM_4_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 250;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "G_FMM_4_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 210;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "G_FMM_4_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 245;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "G_FMM_4_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "G_FMM_4_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "G_FMM_4_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "G_FMM_4_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 215;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "G_FMM_4_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "G_FMM_4_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "G_FMM_4_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "G_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 4050;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "G_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 4060;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 209:
			StringCopy(&Var2, "G_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 170;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 210:
			StringCopy(&Var2, "G_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 211:
			StringCopy(&Var2, "G_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 212:
			StringCopy(&Var2, "G_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 213:
			StringCopy(&Var2, "G_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 214:
			StringCopy(&Var2, "G_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 215:
			StringCopy(&Var2, "G_FMM_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 216:
			StringCopy(&Var2, "G_FMM_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 217:
			StringCopy(&Var2, "G_FMM_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 218:
			StringCopy(&Var2, "G_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "G_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "G_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "G_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 222:
			StringCopy(&Var2, "G_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "G_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 224:
			StringCopy(&Var2, "G_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 225:
			StringCopy(&Var2, "G_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 226:
			StringCopy(&Var2, "G_FMM_7_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 180;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 227:
			StringCopy(&Var2, "G_FMM_7_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 500;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "G_FMM_7_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 115;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "G_FMM_7_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "G_FMM_7_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "G_FMM_7_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 1445;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "G_FMM_7_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 530;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "G_FMM_7_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 650;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "G_FMM_7_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "G_FMM_7_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "G_FMM_7_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 237:
			StringCopy(&Var2, "G_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 4260;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "G_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 4310;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "G_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 4130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "G_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 135;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "G_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 120;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "G_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 110;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "G_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 140;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "G_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 130;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "G_FMM_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "G_FMM_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "G_FMM_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "G_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "G_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "G_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "G_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "G_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "G_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 4290;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "G_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 4150;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "G_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 4295;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "G_FMM_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "G_FMM_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "G_FMM_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "G_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 6240;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "G_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 4955;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 261:
			StringCopy(&Var2, "G_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 5590;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 262:
			StringCopy(&Var2, "G_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 4920;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 263:
			StringCopy(&Var2, "G_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 4990;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 264:
			StringCopy(&Var2, "G_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 4780;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 265:
			StringCopy(&Var2, "G_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 4775;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 266:
			StringCopy(&Var2, "G_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 4800;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 267:
			StringCopy(&Var2, "G_FMM_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 268:
			StringCopy(&Var2, "G_FMM_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 269:
			StringCopy(&Var2, "G_FMM_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 270:
			StringCopy(&Var2, "G_FMM_11_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 271:
			StringCopy(&Var2, "G_FMM_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 272:
			StringCopy(&Var2, "G_FMM_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 273:
			StringCopy(&Var2, "G_FMM_11_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 274:
			StringCopy(&Var2, "G_FMM_11_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 275:
			StringCopy(&Var2, "G_FMM_11_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 277:
			StringCopy(&Var2, "G_FMM_11_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 278:
			StringCopy(&Var2, "G_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 385;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 279:
			StringCopy(&Var2, "G_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 310;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 280:
			StringCopy(&Var2, "G_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 3655;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 281:
			StringCopy(&Var2, "G_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 4055;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 282:
			StringCopy(&Var2, "G_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 3595;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 283:
			StringCopy(&Var2, "G_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 3605;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 284:
			StringCopy(&Var2, "G_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 3645;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 285:
			StringCopy(&Var2, "G_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 320;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 286:
			StringCopy(&Var2, "G_FMM_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 287:
			StringCopy(&Var2, "G_FMM_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 288:
			StringCopy(&Var2, "G_FMM_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 289:
			StringCopy(&Var2, "G_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 230;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 290:
			StringCopy(&Var2, "G_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1605;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 291:
			StringCopy(&Var2, "G_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 2230;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 292:
			StringCopy(&Var2, "G_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 220;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 293:
			StringCopy(&Var2, "G_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 185;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 294:
			StringCopy(&Var2, "G_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2070;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 295:
			StringCopy(&Var2, "G_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2205;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 296:
			StringCopy(&Var2, "G_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 1690;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 297:
			StringCopy(&Var2, "G_FMM_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 298:
			StringCopy(&Var2, "G_FMM_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 299:
			StringCopy(&Var2, "G_FMM_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 300:
			StringCopy(&Var2, "G_FMM_14_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 301:
			StringCopy(&Var2, "G_FMM_14_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 302:
			StringCopy(&Var2, "G_FMM_14_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 303:
			StringCopy(&Var2, "G_FMM_14_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 304:
			StringCopy(&Var2, "G_FMM_14_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 305:
			StringCopy(&Var2, "G_FMM_14_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 306:
			StringCopy(&Var2, "G_FMM_14_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 307:
			StringCopy(&Var2, "G_FMM_14_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			iVar8 = 1;
			iVar11 = 3;
			bVar0 = true;
			break;
		
		case 308:
			StringCopy(&Var2, "G_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 515;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 309:
			StringCopy(&Var2, "G_FMM_15_1", 16);
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 60;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 310:
			StringCopy(&Var2, "G_FMM_15_2", 16);
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 65;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 311:
			StringCopy(&Var2, "G_FMM_15_3", 16);
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 95;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 312:
			StringCopy(&Var2, "G_FMM_15_4", 16);
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 85;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 313:
			StringCopy(&Var2, "G_FMM_15_5", 16);
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 75;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 314:
			StringCopy(&Var2, "G_FMM_15_6", 16);
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 485;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 315:
			StringCopy(&Var2, "G_FMM_15_7", 16);
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 545;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 316:
			StringCopy(&Var2, "G_FMM_15_8", 16);
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 317:
			StringCopy(&Var2, "G_FMM_15_9", 16);
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
		
		case 318:
			StringCopy(&Var2, "G_FMM_15_10", 16);
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 50;
			iVar8 = 1;
			iVar11 = 3;
			break;
	}
	switch (iParam0)
	{
		case 319:
			StringCopy(&Var2, "W_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 5000;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 320:
			StringCopy(&Var2, "W_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 321:
			StringCopy(&Var2, "W_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 322:
			StringCopy(&Var2, "W_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 323:
			StringCopy(&Var2, "W_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 324:
			StringCopy(&Var2, "W_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 695;
			iVar8 = 6;
			iVar11 = 4;
			break;
		
		case 325:
			StringCopy(&Var2, "W_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
		
		case 326:
			StringCopy(&Var2, "W_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			iVar8 = 6;
			iVar11 = 4;
			bVar0 = true;
			break;
	}
	if (iVar11 == 1)
	{
		iVar12 = (iParam0 - 10);
		if (iVar12 >= 0 && iVar12 < 121)
		{
			if (iVar12 > 8)
			{
				iVar12 = (iVar12 - 1);
			}
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_936[iVar12]) * Global_271302.f_18));
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = (iParam0 - 131);
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1057[iVar13]) * Global_271302.f_19));
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = (iParam0 - 155);
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1082[iVar14]) * Global_271302.f_20));
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = (iParam0 - 319);
		if (iVar15 >= 0 && iVar15 < 15)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1211[iVar15]) * Global_271302.f_21));
		}
	}
	if (iParam0 >= 327)
	{
		Global_68186[0 /*14*/].f_5 = 3;
		func_73(iVar10, iParam0, 327);
		if (Global_68186[0 /*14*/].f_7 > 0)
		{
			if (unk_0xFC16329269277970(Global_2621444, joaat("HAT"), 1))
			{
				Global_68186[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68186[0 /*14*/].f_7) * Global_271302.f_18));
			}
			else if (unk_0xFC16329269277970(Global_2621444, joaat("GLASSES"), 1))
			{
				Global_68186[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68186[0 /*14*/].f_7) * Global_271302.f_20));
			}
			else if (unk_0xFC16329269277970(Global_2621444, joaat("WATCH"), 1))
			{
				Global_68186[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68186[0 /*14*/].f_7) * Global_271302.f_21));
			}
		}
	}
	else
	{
		func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_100(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 10;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "D_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 2:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 3:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 4:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		case 5:
			StringCopy(&Var2, "D_FMM_1_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 5000;
			break;
		
		case 6:
			StringCopy(&Var2, "D_FMM_2_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 10000;
			break;
		
		default:
			Global_68186[0 /*14*/].f_5 = 3;
			func_73(iVar10, iParam0, 7);
			return;
			break;
	}
	func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_101(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 7;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 4:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 25:
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 31:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 39:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 40:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 41:
			iVar6 = 10;
			iVar7 = 0;
			if (Global_262145.f_4150 != -1)
			{
				iVar1 = Global_262145.f_4150;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 42:
			iVar6 = 10;
			iVar7 = 1;
			if (Global_262145.f_4151 != -1)
			{
				iVar1 = Global_262145.f_4151;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 43:
			iVar6 = 10;
			iVar7 = 2;
			if (Global_262145.f_4152 != -1)
			{
				iVar1 = Global_262145.f_4152;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 44:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 49:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 50:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 51:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 52:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 53:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 54:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 55:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 56:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 57:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 58:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 59:
			iVar6 = 11;
			iVar7 = 2;
			if (Global_262145.f_4156 != -1)
			{
				iVar1 = Global_262145.f_4156;
			}
			else
			{
				iVar1 = 725;
			}
			break;
		
		case 60:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 61:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 62:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 67:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 12;
			iVar7 = 0;
			if (Global_262145.f_4153 != -1)
			{
				iVar1 = Global_262145.f_4153;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 74:
			iVar6 = 12;
			iVar7 = 1;
			if (Global_262145.f_4154 != -1)
			{
				iVar1 = Global_262145.f_4154;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 75:
			iVar6 = 12;
			iVar7 = 2;
			if (Global_262145.f_4155 != -1)
			{
				iVar1 = Global_262145.f_4155;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 76:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 81:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 82:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 83:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 90:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 91:
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		default:
			Global_68186[0 /*14*/].f_5 = 3;
			func_73(iVar10, iParam0, 92);
			if (Global_68186[0 /*14*/].f_7 > 0)
			{
				Global_68186[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68186[0 /*14*/].f_7) * Global_271302.f_57));
			}
			return;
			break;
	}
	iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_271302.f_57));
	StringCopy(&Var2, "T_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_102(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 1;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 960;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 9500;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 975;
			break;
		
		case 5:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 1185;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 15000;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 1115;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 1105;
			break;
		
		case 9:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 25000;
			break;
		
		case 10:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 510;
			break;
		
		case 11:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 530;
			break;
		
		case 12:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 5500;
			break;
		
		case 13:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 535;
			break;
		
		case 14:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 1510;
			break;
		
		case 15:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1530;
			break;
		
		case 16:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 14500;
			break;
		
		case 17:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 13000;
			break;
		
		case 18:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 8000;
			break;
		
		case 19:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1265;
			break;
		
		case 20:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 8500;
			break;
		
		case 21:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1210;
			break;
		
		case 22:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 2360;
			break;
		
		case 23:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 22500;
			break;
		
		case 24:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 2375;
			break;
		
		case 25:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 2485;
			break;
		
		default:
			Global_68186[0 /*14*/].f_5 = 3;
			func_73(iVar10, iParam0, 26);
			return;
			break;
	}
	StringCopy(&Var2, "M_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = (iParam0 - 1);
	if (iVar11 >= 0 && iVar11 < 26)
	{
		iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_909[iVar11]) * Global_271302.f_22));
	}
	func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_103(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 6;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 300;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 285;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 180;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 190;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 190;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 165;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 480;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 155;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 350;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 290;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 165;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 165;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 170;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 155;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 165;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 165;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 160;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 205;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 560;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 275;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 290;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 300;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 360;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 270;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 355;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 310;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 350;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 305;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 280;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 320;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 110;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 125;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 35;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 50;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 65;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 65;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 165;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 165;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 185;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 175;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 185;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 460;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 185;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 190;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 165;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 165;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 185;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 175;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 235;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 445;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 185;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 190;
			break;
	}
	switch (iParam0)
	{
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 175;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 215;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 225;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 230;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 235;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 205;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 245;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 225;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 215;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 225;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 230;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 235;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 215;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 425;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 245;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 225;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 135;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 130;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 110;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 140;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 110;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 95;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 105;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 105;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 115;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 115;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 115;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 500;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 440;
			break;
	}
	switch (iParam0)
	{
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 1090;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 600;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 1865;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 490;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 470;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 1795;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 1830;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 455;
			break;
	}
	switch (iParam0)
	{
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 455;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 2110;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 380;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 1655;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 2500;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 415;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 730;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 445;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 425;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 410;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 480;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 485;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 480;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 395;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 495;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 2090;
			break;
		
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 450;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 685;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 420;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 365;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 465;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 405;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 400;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 440;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 385;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 435;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 375;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 390;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 475;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 430;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 490;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 490;
			break;
		
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 615;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 315;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 415;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 425;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 435;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 445;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 640;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 460;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 465;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 745;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 845;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 1420;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 475;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 470;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 1000;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 690;
			break;
	}
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_652[iVar11]) * Global_271302.f_17));
	}
	StringCopy(&Var2, "F_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 >= 256)
	{
		Global_68186[0 /*14*/].f_5 = 3;
		func_73(iVar10, iParam0, 256);
		if (Global_68186[0 /*14*/].f_7 > 0)
		{
			Global_68186[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68186[0 /*14*/].f_7) * Global_271302.f_17));
		}
	}
	else
	{
		func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_104(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 4;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 335;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 460;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 455;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 470;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 650;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 385;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 455;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 2150;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 375;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 2190;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 285;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 295;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 2240;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 465;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 1740;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 1415;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 325;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 345;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 355;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 395;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 315;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 275;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 265;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 305;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 255;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 235;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 245;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 215;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 1865;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 450;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 415;
			break;
		
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 55;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 100;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 65;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 65;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 100;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 65;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 90;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 75;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 225;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 205;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 215;
			break;
		
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 490;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 485;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 2500;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 485;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 100;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 80;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 85;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 80;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 80;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 100;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 95;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 440;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 380;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 80;
			break;
		
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 115;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 140;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 255;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 108:
			iVar6 = 6;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 109:
			iVar6 = 6;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 110:
			iVar6 = 6;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 111:
			iVar6 = 6;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 112:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 325;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 115;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 135;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 125;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 120;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 130;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 110;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 345;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 745;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 120;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 135;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 124:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 130;
			break;
		
		case 125:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 140;
			break;
		
		case 126:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 130;
			break;
		
		case 127:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 660;
			break;
		
		case 128:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 141:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 142:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 150;
			break;
		
		case 143:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 144:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 75;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 90;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 145;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 150;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 110;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 155;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 255;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 165;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 1150;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 1150;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 1210;
			break;
		
		case 156:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 1125;
			break;
		
		case 157:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 1135;
			break;
		
		case 158:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 1145;
			break;
		
		case 159:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 1145;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 845;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 480;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 475;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 173:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 174:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 176:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 188:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 189:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 190:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 191:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 220;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 100;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 65;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 205:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 206:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 207:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 208:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 460;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 475;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 470;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 220:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 221:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 222:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 223:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 50;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 100;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 100;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 236:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 100;
			break;
		
		case 237:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 238:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 239:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 240:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 90;
			break;
		
		case 241:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 105;
			break;
		
		case 242:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 100;
			break;
		
		case 243:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 240;
			break;
		
		case 244:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 95;
			break;
		
		case 245:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 95;
			break;
		
		case 246:
			iVar6 = 15;
			iVar7 = 6;
			iVar1 = 100;
			break;
		
		case 247:
			iVar6 = 15;
			iVar7 = 7;
			iVar1 = 105;
			break;
		
		case 248:
			iVar6 = 15;
			iVar7 = 8;
			iVar1 = 100;
			break;
		
		case 249:
			iVar6 = 15;
			iVar7 = 9;
			iVar1 = 295;
			break;
		
		case 250:
			iVar6 = 15;
			iVar7 = 10;
			iVar1 = 250;
			break;
		
		case 251:
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 285;
			break;
		
		case 252:
			iVar6 = 15;
			iVar7 = 12;
			iVar1 = 275;
			break;
		
		case 253:
			iVar6 = 15;
			iVar7 = 13;
			iVar1 = 105;
			break;
		
		case 254:
			iVar6 = 15;
			iVar7 = 14;
			iVar1 = 100;
			break;
		
		case 255:
			iVar6 = 15;
			iVar7 = 15;
			iVar1 = 95;
			break;
	}
	StringCopy(&Var2, "L_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	iVar11 = iParam0;
	if (iVar11 >= 0 && iVar11 < 256)
	{
		iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_157[iVar11]) * Global_271302.f_15));
	}
	if (iParam0 >= 256)
	{
		Global_68186[0 /*14*/].f_5 = 3;
		func_73(iVar10, iParam0, 256);
		if (Global_68186[0 /*14*/].f_7 > 0)
		{
			Global_68186[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68186[0 /*14*/].f_7) * Global_271302.f_15));
		}
	}
	else
	{
		func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_105(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 3;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 3:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 4:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 5:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 6:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 8:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 9:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 10:
			iVar6 = 10;
			iVar7 = 0;
			break;
		
		case 11:
			iVar6 = 11;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 12;
			iVar7 = 0;
			break;
		
		case 13:
			iVar6 = 13;
			iVar7 = 0;
			break;
		
		case 14:
			iVar6 = 14;
			iVar7 = 0;
			break;
		
		case 15:
			iVar6 = 15;
			iVar7 = 0;
			break;
		
		default:
			Global_68186[0 /*14*/].f_5 = 3;
			func_73(iVar10, iParam0, 16);
			return;
			break;
	}
	func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_106(int iParam0)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 9;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			break;
		
		case 6:
			iVar6 = 2;
			iVar7 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 1;
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 2;
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 3;
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 4;
			break;
		
		case 11:
			iVar6 = 3;
			iVar7 = 0;
			break;
		
		case 12:
			iVar6 = 3;
			iVar7 = 1;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 2;
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 3;
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 4;
			break;
		
		case 16:
			iVar6 = 4;
			iVar7 = 0;
			break;
		
		case 17:
			iVar6 = 4;
			iVar7 = 1;
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 2;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 3;
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 4;
			break;
		
		case 21:
			iVar6 = 5;
			iVar7 = 0;
			break;
		
		case 22:
			iVar6 = 5;
			iVar7 = 1;
			break;
		
		case 23:
			iVar6 = 5;
			iVar7 = 2;
			break;
		
		case 24:
			iVar6 = 5;
			iVar7 = 3;
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 4;
			break;
		
		case 26:
			iVar6 = 6;
			iVar7 = 0;
			break;
		
		case 27:
			iVar6 = 6;
			iVar7 = 1;
			break;
		
		case 28:
			iVar6 = 6;
			iVar7 = 2;
			break;
		
		case 29:
			iVar6 = 6;
			iVar7 = 3;
			break;
		
		case 30:
			iVar6 = 6;
			iVar7 = 4;
			break;
		
		case 31:
			iVar6 = 7;
			iVar7 = 0;
			break;
		
		case 32:
			iVar6 = 7;
			iVar7 = 1;
			break;
		
		case 33:
			iVar6 = 7;
			iVar7 = 2;
			break;
		
		case 34:
			iVar6 = 7;
			iVar7 = 3;
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 4;
			break;
		
		case 36:
			iVar6 = 8;
			iVar7 = 0;
			break;
		
		case 37:
			iVar6 = 8;
			iVar7 = 1;
			break;
		
		case 38:
			iVar6 = 8;
			iVar7 = 2;
			break;
		
		case 39:
			iVar6 = 8;
			iVar7 = 3;
			break;
		
		case 40:
			iVar6 = 8;
			iVar7 = 4;
			break;
		
		case 41:
			iVar6 = 9;
			iVar7 = 0;
			break;
		
		case 42:
			iVar6 = 9;
			iVar7 = 1;
			break;
		
		case 43:
			iVar6 = 9;
			iVar7 = 2;
			break;
		
		case 44:
			iVar6 = 9;
			iVar7 = 3;
			break;
		
		case 45:
			iVar6 = 9;
			iVar7 = 4;
			break;
		
		default:
			Global_68186[0 /*14*/].f_5 = 3;
			func_73(iVar10, iParam0, 46);
			return;
			break;
	}
	func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_107(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 8;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar6 = 0;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar6 = 0;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar6 = 0;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar6 = 0;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar6 = 0;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar6 = 0;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar6 = 0;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar6 = 1;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar6 = 1;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar6 = 1;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 27:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar6 = 1;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar6 = 1;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			StringCopy(&Var2, "U_FMM_0_0", 16);
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 33:
			StringCopy(&Var2, "U_FMM_0_1", 16);
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 34:
			StringCopy(&Var2, "U_FMM_0_2", 16);
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 35:
			StringCopy(&Var2, "U_FMM_0_3", 16);
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 36:
			StringCopy(&Var2, "U_FMM_0_4", 16);
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 37:
			StringCopy(&Var2, "U_FMM_0_5", 16);
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 38:
			StringCopy(&Var2, "U_FMM_0_6", 16);
			iVar6 = 2;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "U_FMM_0_7", 16);
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 40:
			StringCopy(&Var2, "U_FMM_0_8", 16);
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 41:
			StringCopy(&Var2, "U_FMM_0_9", 16);
			iVar6 = 2;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 42:
			StringCopy(&Var2, "U_FMM_0_10", 16);
			iVar6 = 2;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 43:
			StringCopy(&Var2, "U_FMM_0_11", 16);
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 44:
			StringCopy(&Var2, "U_FMM_0_12", 16);
			iVar6 = 2;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "U_FMM_0_13", 16);
			iVar6 = 2;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "U_FMM_0_14", 16);
			iVar6 = 2;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "U_FMM_0_15", 16);
			iVar6 = 2;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar6 = 3;
			iVar7 = 0;
			if (Global_262145.f_4159 != -1)
			{
				iVar1 = Global_262145.f_4159;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 49:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar6 = 3;
			iVar7 = 1;
			if (Global_262145.f_4167 != -1)
			{
				iVar1 = Global_262145.f_4167;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 50:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar6 = 3;
			iVar7 = 2;
			if (Global_262145.f_4162 != -1)
			{
				iVar1 = Global_262145.f_4162;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 51:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar6 = 3;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar6 = 3;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar6 = 3;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar6 = 3;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 55:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar6 = 3;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 56:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar6 = 3;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 57:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar6 = 3;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 58:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar6 = 3;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 59:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar6 = 3;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 60:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar6 = 3;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar6 = 3;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar6 = 3;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar6 = 3;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 64:
			StringCopy(&Var2, "SP_FMM_3_0", 16);
			iVar6 = 4;
			iVar7 = 0;
			if (Global_262145.f_4159 != -1)
			{
				iVar1 = Global_262145.f_4159;
			}
			else
			{
				iVar1 = 165;
			}
			break;
		
		case 65:
			StringCopy(&Var2, "SP_FMM_3_1", 16);
			iVar6 = 4;
			iVar7 = 1;
			if (Global_262145.f_4167 != -1)
			{
				iVar1 = Global_262145.f_4167;
			}
			else
			{
				iVar1 = 120;
			}
			break;
		
		case 66:
			StringCopy(&Var2, "SP_FMM_3_2", 16);
			iVar6 = 4;
			iVar7 = 2;
			if (Global_262145.f_4162 != -1)
			{
				iVar1 = Global_262145.f_4162;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 67:
			StringCopy(&Var2, "SP_FMM_3_3", 16);
			iVar6 = 4;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "SP_FMM_3_4", 16);
			iVar6 = 4;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "SP_FMM_3_5", 16);
			iVar6 = 4;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "SP_FMM_3_6", 16);
			iVar6 = 4;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "SP_FMM_3_7", 16);
			iVar6 = 4;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "SP_FMM_3_8", 16);
			iVar6 = 4;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 73:
			StringCopy(&Var2, "SP_FMM_3_9", 16);
			iVar6 = 4;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 74:
			StringCopy(&Var2, "SP_FMM_3_10", 16);
			iVar6 = 4;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 75:
			StringCopy(&Var2, "SP_FMM_3_11", 16);
			iVar6 = 4;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 76:
			StringCopy(&Var2, "SP_FMM_3_12", 16);
			iVar6 = 4;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "SP_FMM_3_13", 16);
			iVar6 = 4;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 78:
			StringCopy(&Var2, "SP_FMM_3_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case joaat("mpsv_lp0_31"):
			StringCopy(&Var2, "SP_FMM_3_15", 16);
			iVar6 = 4;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 80:
			StringCopy(&Var2, "U_FMM_5_0", 16);
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 80;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_414[80]));
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 45;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_414[81]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_414[82]));
			break;
		
		case 83:
			StringCopy(&Var2, "U_FMM_5_3", 16);
			iVar6 = 5;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 84:
			StringCopy(&Var2, "U_FMM_5_4", 16);
			iVar6 = 5;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 85:
			StringCopy(&Var2, "U_FMM_5_5", 16);
			iVar6 = 5;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 86:
			StringCopy(&Var2, "U_FMM_5_6", 16);
			iVar6 = 5;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 87:
			StringCopy(&Var2, "U_FMM_5_7", 16);
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 50;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_414[87]));
			break;
		
		case 88:
			StringCopy(&Var2, "U_FMM_5_8", 16);
			iVar6 = 5;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 89:
			StringCopy(&Var2, "U_FMM_5_9", 16);
			iVar6 = 5;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "U_FMM_5_10", 16);
			iVar6 = 5;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "U_FMM_5_11", 16);
			iVar6 = 5;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "U_FMM_5_12", 16);
			iVar6 = 5;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "U_FMM_5_13", 16);
			iVar6 = 5;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "U_FMM_5_14", 16);
			iVar6 = 5;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMM_5_15", 16);
			iVar6 = 5;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar6 = 6;
			iVar7 = 0;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 97:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar6 = 6;
			iVar7 = 1;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 98:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar6 = 6;
			iVar7 = 2;
			if (Global_262145.f_4158 != -1)
			{
				iVar1 = Global_262145.f_4158;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 99:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar6 = 6;
			iVar7 = 3;
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 100:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar6 = 6;
			iVar7 = 4;
			if (Global_262145.f_4157 != -1)
			{
				iVar1 = Global_262145.f_4157;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 101:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar6 = 6;
			iVar7 = 5;
			if (Global_262145.f_4174 != -1)
			{
				iVar1 = Global_262145.f_4174;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 102:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar6 = 6;
			iVar7 = 6;
			if (Global_262145.f_4177 != -1)
			{
				iVar1 = Global_262145.f_4177;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 103:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar6 = 6;
			iVar7 = 7;
			if (Global_262145.f_4173 != -1)
			{
				iVar1 = Global_262145.f_4173;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 104:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar6 = 6;
			iVar7 = 8;
			if (Global_262145.f_4166 != -1)
			{
				iVar1 = Global_262145.f_4166;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 105:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar6 = 6;
			iVar7 = 9;
			if (Global_262145.f_4171 != -1)
			{
				iVar1 = Global_262145.f_4171;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 106:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar6 = 6;
			iVar7 = 10;
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 107:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar6 = 6;
			iVar7 = 11;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 108:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar6 = 6;
			iVar7 = 12;
			if (Global_262145.f_4165 != -1)
			{
				iVar1 = Global_262145.f_4165;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 109:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar6 = 6;
			iVar7 = 13;
			if (Global_262145.f_4160 != -1)
			{
				iVar1 = Global_262145.f_4160;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 110:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar6 = 6;
			iVar7 = 14;
			if (Global_262145.f_4175 != -1)
			{
				iVar1 = Global_262145.f_4175;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 111:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar6 = 6;
			iVar7 = 15;
			if (Global_262145.f_4168 != -1)
			{
				iVar1 = Global_262145.f_4168;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 112:
			StringCopy(&Var2, "SP_FMM_6_0", 16);
			iVar6 = 7;
			iVar7 = 0;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 113:
			StringCopy(&Var2, "SP_FMM_6_1", 16);
			iVar6 = 7;
			iVar7 = 1;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 415;
			}
			break;
		
		case 114:
			StringCopy(&Var2, "SP_FMM_6_2", 16);
			iVar6 = 7;
			iVar7 = 2;
			if (Global_262145.f_4158 != -1)
			{
				iVar1 = Global_262145.f_4158;
			}
			else
			{
				iVar1 = 440;
			}
			break;
		
		case 115:
			StringCopy(&Var2, "SP_FMM_6_3", 16);
			iVar6 = 7;
			iVar7 = 3;
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 116:
			StringCopy(&Var2, "SP_FMM_6_4", 16);
			iVar6 = 7;
			iVar7 = 4;
			if (Global_262145.f_4157 != -1)
			{
				iVar1 = Global_262145.f_4157;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 117:
			StringCopy(&Var2, "SP_FMM_6_5", 16);
			iVar6 = 7;
			iVar7 = 5;
			if (Global_262145.f_4174 != -1)
			{
				iVar1 = Global_262145.f_4174;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 118:
			StringCopy(&Var2, "SP_FMM_6_6", 16);
			iVar6 = 7;
			iVar7 = 6;
			if (Global_262145.f_4177 != -1)
			{
				iVar1 = Global_262145.f_4177;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 119:
			StringCopy(&Var2, "SP_FMM_6_7", 16);
			iVar6 = 7;
			iVar7 = 7;
			if (Global_262145.f_4173 != -1)
			{
				iVar1 = Global_262145.f_4173;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 120:
			StringCopy(&Var2, "SP_FMM_6_8", 16);
			iVar6 = 7;
			iVar7 = 8;
			if (Global_262145.f_4166 != -1)
			{
				iVar1 = Global_262145.f_4166;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 121:
			StringCopy(&Var2, "SP_FMM_6_9", 16);
			iVar6 = 7;
			iVar7 = 9;
			if (Global_262145.f_4171 != -1)
			{
				iVar1 = Global_262145.f_4171;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 122:
			StringCopy(&Var2, "SP_FMM_6_10", 16);
			iVar6 = 7;
			iVar7 = 10;
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 123:
			StringCopy(&Var2, "SP_FMM_6_11", 16);
			iVar6 = 7;
			iVar7 = 11;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 124:
			StringCopy(&Var2, "SP_FMM_6_12", 16);
			iVar6 = 7;
			iVar7 = 12;
			if (Global_262145.f_4165 != -1)
			{
				iVar1 = Global_262145.f_4165;
			}
			else
			{
				iVar1 = 435;
			}
			break;
		
		case 125:
			StringCopy(&Var2, "SP_FMM_6_13", 16);
			iVar6 = 7;
			iVar7 = 13;
			if (Global_262145.f_4160 != -1)
			{
				iVar1 = Global_262145.f_4160;
			}
			else
			{
				iVar1 = 750;
			}
			break;
		
		case 126:
			StringCopy(&Var2, "SP_FMM_6_14", 16);
			iVar6 = 7;
			iVar7 = 14;
			if (Global_262145.f_4175 != -1)
			{
				iVar1 = Global_262145.f_4175;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 127:
			StringCopy(&Var2, "SP_FMM_6_15", 16);
			iVar6 = 7;
			iVar7 = 15;
			if (Global_262145.f_4168 != -1)
			{
				iVar1 = Global_262145.f_4168;
			}
			else
			{
				iVar1 = 435;
			}
			break;
	}
	switch (iParam0)
	{
		case 128:
			StringCopy(&Var2, "U_FMM_8_0", 16);
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "U_FMM_8_1", 16);
			iVar6 = 8;
			iVar7 = 1;
			bVar0 = true;
			break;
		
		case 130:
			StringCopy(&Var2, "U_FMM_8_2", 16);
			iVar6 = 8;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMM_8_3", 16);
			iVar6 = 8;
			iVar7 = 3;
			bVar0 = true;
			break;
		
		case 132:
			StringCopy(&Var2, "U_FMM_8_4", 16);
			iVar6 = 8;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 133:
			StringCopy(&Var2, "U_FMM_8_5", 16);
			iVar6 = 8;
			iVar7 = 5;
			bVar0 = true;
			break;
		
		case 134:
			StringCopy(&Var2, "U_FMM_8_6", 16);
			iVar6 = 8;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 135:
			StringCopy(&Var2, "U_FMM_8_7", 16);
			iVar6 = 8;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 136:
			StringCopy(&Var2, "U_FMM_8_8", 16);
			iVar6 = 8;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 137:
			StringCopy(&Var2, "U_FMM_8_9", 16);
			iVar6 = 8;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 138:
			StringCopy(&Var2, "U_FMM_8_10", 16);
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 139:
			StringCopy(&Var2, "U_FMM_8_11", 16);
			iVar6 = 8;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 140:
			StringCopy(&Var2, "U_FMM_8_12", 16);
			iVar6 = 8;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 141:
			StringCopy(&Var2, "U_FMM_8_13", 16);
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 142:
			StringCopy(&Var2, "U_FMM_8_14", 16);
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 143:
			StringCopy(&Var2, "U_FMM_8_15", 16);
			iVar6 = 8;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 144:
			StringCopy(&Var2, "U_FMM_9_0", 16);
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 145:
			StringCopy(&Var2, "U_FMM_9_1", 16);
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 340;
			break;
		
		case 146:
			StringCopy(&Var2, "U_FMM_9_2", 16);
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 335;
			break;
		
		case 147:
			StringCopy(&Var2, "U_FMM_9_3", 16);
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 148:
			StringCopy(&Var2, "U_FMM_9_4", 16);
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 345;
			break;
		
		case 149:
			StringCopy(&Var2, "U_FMM_9_5", 16);
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 550;
			break;
		
		case 150:
			StringCopy(&Var2, "U_FMM_9_6", 16);
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 151:
			StringCopy(&Var2, "U_FMM_9_7", 16);
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 152:
			StringCopy(&Var2, "U_FMM_9_8", 16);
			iVar6 = 9;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 153:
			StringCopy(&Var2, "U_FMM_9_9", 16);
			iVar6 = 9;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 154:
			StringCopy(&Var2, "U_FMM_9_10", 16);
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 545;
			break;
		
		case 155:
			StringCopy(&Var2, "U_FMM_9_11", 16);
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 156:
			StringCopy(&Var2, "U_FMM_9_12", 16);
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 315;
			break;
		
		case 157:
			StringCopy(&Var2, "U_FMM_9_13", 16);
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 520;
			break;
		
		case 158:
			StringCopy(&Var2, "U_FMM_9_14", 16);
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 159:
			StringCopy(&Var2, "U_FMM_9_15", 16);
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 160:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar6 = 10;
			iVar7 = 0;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 161:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar6 = 10;
			iVar7 = 1;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 162:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar6 = 10;
			iVar7 = 2;
			if (Global_262145.f_4164 != -1)
			{
				iVar1 = Global_262145.f_4164;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 163:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar6 = 10;
			iVar7 = 3;
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 164:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar6 = 10;
			iVar7 = 4;
			if (Global_262145.f_4157 != -1)
			{
				iVar1 = Global_262145.f_4157;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 165:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar6 = 10;
			iVar7 = 5;
			if (Global_262145.f_4174 != -1)
			{
				iVar1 = Global_262145.f_4174;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 166:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar6 = 10;
			iVar7 = 6;
			if (Global_262145.f_4163 != -1)
			{
				iVar1 = Global_262145.f_4163;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 167:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar6 = 10;
			iVar7 = 7;
			if (Global_262145.f_4177 != -1)
			{
				iVar1 = Global_262145.f_4177;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 168:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar6 = 10;
			iVar7 = 8;
			if (Global_262145.f_4173 != -1)
			{
				iVar1 = Global_262145.f_4173;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 169:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar6 = 10;
			iVar7 = 9;
			if (Global_262145.f_4166 != -1)
			{
				iVar1 = Global_262145.f_4166;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 170:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar6 = 10;
			iVar7 = 10;
			if (Global_262145.f_4171 != -1)
			{
				iVar1 = Global_262145.f_4171;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 171:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar6 = 10;
			iVar7 = 11;
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 172:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar6 = 10;
			iVar7 = 12;
			if (Global_262145.f_4161 != -1)
			{
				iVar1 = Global_262145.f_4161;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 173:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar6 = 10;
			iVar7 = 13;
			if (Global_262145.f_4176 != -1)
			{
				iVar1 = Global_262145.f_4176;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 174:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar6 = 10;
			iVar7 = 14;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 175:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar6 = 10;
			iVar7 = 15;
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
			}
			else
			{
				iVar1 = 460;
			}
			break;
		
		case 176:
			StringCopy(&Var2, "SP_FMM_10_0", 16);
			iVar6 = 11;
			iVar7 = 0;
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 177:
			StringCopy(&Var2, "SP_FMM_10_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
			}
			else
			{
				iVar1 = 400;
			}
			break;
		
		case 178:
			StringCopy(&Var2, "SP_FMM_10_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			if (Global_262145.f_4164 != -1)
			{
				iVar1 = Global_262145.f_4164;
			}
			else
			{
				iVar1 = 425;
			}
			break;
		
		case 179:
			StringCopy(&Var2, "SP_FMM_10_3", 16);
			iVar6 = 11;
			iVar7 = 3;
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 180:
			StringCopy(&Var2, "SP_FMM_10_4", 16);
			iVar6 = 11;
			iVar7 = 4;
			if (Global_262145.f_4157 != -1)
			{
				iVar1 = Global_262145.f_4157;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 181:
			StringCopy(&Var2, "SP_FMM_10_5", 16);
			iVar6 = 11;
			iVar7 = 5;
			if (Global_262145.f_4174 != -1)
			{
				iVar1 = Global_262145.f_4174;
			}
			else
			{
				iVar1 = 395;
			}
			break;
		
		case 182:
			StringCopy(&Var2, "SP_FMM_10_6", 16);
			iVar6 = 11;
			iVar7 = 6;
			if (Global_262145.f_4163 != -1)
			{
				iVar1 = Global_262145.f_4163;
			}
			else
			{
				iVar1 = 500;
			}
			break;
		
		case 183:
			StringCopy(&Var2, "SP_FMM_10_7", 16);
			iVar6 = 11;
			iVar7 = 7;
			if (Global_262145.f_4177 != -1)
			{
				iVar1 = Global_262145.f_4177;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 184:
			StringCopy(&Var2, "SP_FMM_10_8", 16);
			iVar6 = 11;
			iVar7 = 8;
			if (Global_262145.f_4173 != -1)
			{
				iVar1 = Global_262145.f_4173;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 185:
			StringCopy(&Var2, "SP_FMM_10_9", 16);
			iVar6 = 11;
			iVar7 = 9;
			if (Global_262145.f_4166 != -1)
			{
				iVar1 = Global_262145.f_4166;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 186:
			StringCopy(&Var2, "SP_FMM_10_10", 16);
			iVar6 = 11;
			iVar7 = 10;
			if (Global_262145.f_4171 != -1)
			{
				iVar1 = Global_262145.f_4171;
			}
			else
			{
				iVar1 = 405;
			}
			break;
		
		case 187:
			StringCopy(&Var2, "SP_FMM_10_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 188:
			StringCopy(&Var2, "SP_FMM_10_12", 16);
			iVar6 = 11;
			iVar7 = 12;
			if (Global_262145.f_4161 != -1)
			{
				iVar1 = Global_262145.f_4161;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 189:
			StringCopy(&Var2, "SP_FMM_10_13", 16);
			iVar6 = 11;
			iVar7 = 13;
			if (Global_262145.f_4176 != -1)
			{
				iVar1 = Global_262145.f_4176;
			}
			else
			{
				iVar1 = 420;
			}
			break;
		
		case 190:
			StringCopy(&Var2, "SP_FMM_10_14", 16);
			iVar6 = 11;
			iVar7 = 14;
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
			}
			else
			{
				iVar1 = 410;
			}
			break;
		
		case 191:
			StringCopy(&Var2, "SP_FMM_10_15", 16);
			iVar6 = 11;
			iVar7 = 15;
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
			}
			else
			{
				iVar1 = 460;
			}
			break;
	}
	switch (iParam0)
	{
		case 192:
			StringCopy(&Var2, "U_FMM_12_0", 16);
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 193:
			StringCopy(&Var2, "U_FMM_12_1", 16);
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 194:
			StringCopy(&Var2, "U_FMM_12_2", 16);
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 695;
			break;
		
		case 195:
			StringCopy(&Var2, "U_FMM_12_3", 16);
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 196:
			StringCopy(&Var2, "U_FMM_12_4", 16);
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 197:
			StringCopy(&Var2, "U_FMM_12_5", 16);
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 198:
			StringCopy(&Var2, "U_FMM_12_6", 16);
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 199:
			StringCopy(&Var2, "U_FMM_12_7", 16);
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 450;
			break;
		
		case 200:
			StringCopy(&Var2, "U_FMM_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 201:
			StringCopy(&Var2, "U_FMM_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 202:
			StringCopy(&Var2, "U_FMM_12_10", 16);
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 1060;
			break;
		
		case 203:
			StringCopy(&Var2, "U_FMM_12_11", 16);
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 1040;
			break;
		
		case 204:
			StringCopy(&Var2, "U_FMM_12_12", 16);
			iVar6 = 12;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 205:
			StringCopy(&Var2, "U_FMM_12_13", 16);
			iVar6 = 12;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 206:
			StringCopy(&Var2, "U_FMM_12_14", 16);
			iVar6 = 12;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 207:
			StringCopy(&Var2, "U_FMM_12_15", 16);
			iVar6 = 12;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 208:
			StringCopy(&Var2, "U_FMM_13_0", 16);
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 209:
			StringCopy(&Var2, "U_FMM_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 210:
			StringCopy(&Var2, "U_FMM_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 680;
			break;
		
		case 211:
			StringCopy(&Var2, "U_FMM_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 212:
			StringCopy(&Var2, "U_FMM_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			bVar0 = true;
			break;
		
		case 213:
			StringCopy(&Var2, "U_FMM_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 214:
			StringCopy(&Var2, "U_FMM_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			bVar0 = true;
			break;
		
		case 215:
			StringCopy(&Var2, "U_FMM_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			bVar0 = true;
			break;
		
		case 216:
			StringCopy(&Var2, "U_FMM_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			bVar0 = true;
			break;
		
		case 217:
			StringCopy(&Var2, "U_FMM_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 218:
			StringCopy(&Var2, "U_FMM_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 219:
			StringCopy(&Var2, "U_FMM_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			bVar0 = true;
			break;
		
		case 220:
			StringCopy(&Var2, "U_FMM_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			bVar0 = true;
			break;
		
		case 221:
			StringCopy(&Var2, "U_FMM_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1065;
			break;
		
		case 222:
			StringCopy(&Var2, "U_FMM_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			bVar0 = true;
			break;
		
		case 223:
			StringCopy(&Var2, "U_FMM_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 224:
			StringCopy(&Var2, "U_FMM_1_0", 16);
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 45;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_414[16]));
			break;
		
		case 225:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_414[17]));
			break;
		
		case 226:
			StringCopy(&Var2, "U_FMM_1_2", 16);
			iVar6 = 14;
			iVar7 = 2;
			bVar0 = true;
			break;
		
		case 227:
			StringCopy(&Var2, "U_FMM_1_3", 16);
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 40;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_414[19]));
			break;
		
		case 228:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 315;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_414[20]));
			break;
		
		case 229:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 215;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_414[21]));
			break;
		
		case 230:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 265;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_414[22]));
			break;
		
		case 231:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 45;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_414[23]));
			break;
		
		case 232:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 205;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_414[24]));
			break;
		
		case 233:
			StringCopy(&Var2, "U_FMM_1_9", 16);
			iVar6 = 14;
			iVar7 = 9;
			bVar0 = true;
			break;
		
		case 234:
			StringCopy(&Var2, "U_FMM_1_10", 16);
			iVar6 = 14;
			iVar7 = 10;
			bVar0 = true;
			break;
		
		case 235:
			StringCopy(&Var2, "U_FMM_1_11", 16);
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 60;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_414[27]));
			break;
		
		case 236:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 55;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_414[28]));
			break;
		
		case 237:
			StringCopy(&Var2, "U_FMM_1_13", 16);
			iVar6 = 14;
			iVar7 = 13;
			bVar0 = true;
			break;
		
		case 238:
			StringCopy(&Var2, "U_FMM_1_14", 16);
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 170;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_414[30]));
			break;
		
		case 239:
			StringCopy(&Var2, "U_FMM_1_15", 16);
			iVar6 = 14;
			iVar7 = 15;
			bVar0 = true;
			break;
		
		case 240:
			StringCopy(&Var2, "U_FMM_15_0", 16);
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 0;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_414[32]));
			break;
	}
	if (iParam0 == 23 || iParam0 == 231)
	{
		if (func_85(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(1250) * Global_262145.f_2959));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(45) * Global_262145.f_414[23]));
		}
	}
	else if (iParam0 == 17 || iParam0 == 225)
	{
		if (func_85(88, -1))
		{
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(450) * Global_262145.f_2958));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(60) * Global_262145.f_414[17]));
		}
	}
	else if (iParam0 == 28 || iParam0 == 236)
	{
		if (func_85(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(500) * Global_262145.f_2957));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(55) * Global_262145.f_414[28]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 32)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_414[iVar11]));
		}
	}
	else if (iParam0 >= 32 && iParam0 < 48)
	{
		iVar12 = (iParam0 - 32);
		if (iVar12 >= 0 && iVar12 < 237)
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_414[iVar12]));
		}
	}
	else if (iParam0 >= 128 && iParam0 < 160)
	{
		iVar13 = (iParam0 - 160) + 124;
		if (iVar13 >= 0 && iVar13 < 237)
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_414[iVar13]));
		}
	}
	else if (iParam0 >= 192 && iParam0 < 224)
	{
		iVar14 = (iParam0 - 160) + 188;
		if (iVar14 >= 0 && iVar14 < 237)
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_414[iVar14]));
		}
	}
	iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_271302.f_16));
	if (iParam0 >= 241)
	{
		Global_68186[0 /*14*/].f_5 = 3;
		func_73(iVar10, iParam0, 241);
		if (Global_68186[0 /*14*/].f_7 > 0)
		{
			Global_68186[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68186[0 /*14*/].f_7) * Global_271302.f_16));
		}
	}
	else
	{
		func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_108(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 11;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 250;
			break;
		
		case 1:
			iVar6 = 0;
			iVar7 = 1;
			iVar1 = 210;
			break;
		
		case 2:
			iVar6 = 0;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 3:
			iVar6 = 0;
			iVar7 = 3;
			iVar1 = 90;
			break;
		
		case 4:
			iVar6 = 0;
			iVar7 = 4;
			iVar1 = 210;
			break;
		
		case 5:
			iVar6 = 0;
			iVar7 = 5;
			iVar1 = 200;
			break;
		
		case 6:
			iVar6 = 0;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 7:
			iVar6 = 0;
			iVar7 = 7;
			iVar1 = 130;
			break;
		
		case 8:
			iVar6 = 0;
			iVar7 = 8;
			iVar1 = 220;
			break;
		
		case 9:
			iVar6 = 0;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 10:
			iVar6 = 0;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 11:
			iVar6 = 0;
			iVar7 = 11;
			iVar1 = 220;
			break;
		
		case 12:
			iVar6 = 0;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 13:
			iVar6 = 0;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 14:
			iVar6 = 0;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 15:
			iVar6 = 0;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 16:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 17:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 60;
			break;
		
		case 18:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 19:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 40;
			break;
		
		case 20:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 315;
			break;
		
		case 21:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 215;
			break;
		
		case 22:
			iVar6 = 1;
			iVar7 = 6;
			iVar1 = 265;
			break;
		
		case 23:
			iVar6 = 1;
			iVar7 = 7;
			iVar1 = 45;
			break;
		
		case 24:
			iVar6 = 1;
			iVar7 = 8;
			iVar1 = 205;
			break;
		
		case 25:
			iVar6 = 1;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 26:
			iVar6 = 1;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 27:
			iVar6 = 1;
			iVar7 = 11;
			iVar1 = 60;
			break;
		
		case 28:
			iVar6 = 1;
			iVar7 = 12;
			iVar1 = 55;
			break;
		
		case 29:
			iVar6 = 1;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 30:
			iVar6 = 1;
			iVar7 = 14;
			iVar1 = 170;
			break;
		
		case 31:
			iVar6 = 1;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 32:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 33:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 34:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 35:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 36:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 37:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 38:
			iVar6 = 2;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 39:
			iVar6 = 2;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 40:
			iVar6 = 2;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 41:
			iVar6 = 2;
			iVar7 = 9;
			iVar1 = 160;
			break;
		
		case 42:
			iVar6 = 2;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 43:
			iVar6 = 2;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 44:
			iVar6 = 2;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 45:
			iVar6 = 2;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 46:
			iVar6 = 2;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 47:
			iVar6 = 2;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 48:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 205;
			break;
		
		case 49:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 110;
			break;
		
		case 50:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 150;
			break;
		
		case 51:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 115;
			break;
		
		case 52:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 115;
			break;
		
		case 53:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 150;
			break;
		
		case 54:
			iVar6 = 3;
			iVar7 = 6;
			iVar1 = 150;
			break;
		
		case 55:
			iVar6 = 3;
			iVar7 = 7;
			iVar1 = 115;
			break;
		
		case 56:
			iVar6 = 3;
			iVar7 = 8;
			iVar1 = 140;
			break;
		
		case 57:
			iVar6 = 3;
			iVar7 = 9;
			iVar1 = 125;
			break;
		
		case 58:
			iVar6 = 3;
			iVar7 = 10;
			iVar1 = 115;
			break;
		
		case 59:
			iVar6 = 3;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 60:
			iVar6 = 3;
			iVar7 = 12;
			iVar1 = 150;
			break;
		
		case 61:
			iVar6 = 3;
			iVar7 = 13;
			iVar1 = 275;
			break;
		
		case 62:
			iVar6 = 3;
			iVar7 = 14;
			iVar1 = 460;
			break;
		
		case 63:
			iVar6 = 3;
			iVar7 = 15;
			iVar1 = 260;
			break;
	}
	switch (iParam0)
	{
		case 64:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 965;
			break;
		
		case 65:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 66:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 2520;
			break;
		
		case 67:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 350;
			break;
		
		case 68:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 69:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 70:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 71:
			iVar6 = 4;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 72:
			iVar6 = 4;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 73:
			iVar6 = 4;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 74:
			iVar6 = 4;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 75:
			iVar6 = 4;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 76:
			iVar6 = 4;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 77:
			iVar6 = 4;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 78:
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 3125;
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 4;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 80:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 80;
			break;
		
		case 81:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 45;
			break;
		
		case 82:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			break;
		
		case 83:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 84:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 85:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 86:
			iVar6 = 5;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 87:
			iVar6 = 5;
			iVar7 = 7;
			iVar1 = 50;
			break;
		
		case 88:
			iVar6 = 5;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 89:
			iVar6 = 5;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 90:
			iVar6 = 5;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 91:
			iVar6 = 5;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 92:
			iVar6 = 5;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 93:
			iVar6 = 5;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 94:
			iVar6 = 5;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 95:
			iVar6 = 5;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 96:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 2485;
			break;
		
		case 97:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 535;
			break;
		
		case 98:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 99:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 2945;
			break;
		
		case 100:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 3080;
			break;
		
		case 101:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 2990;
			break;
		
		case 102:
			iVar6 = 6;
			iVar7 = 6;
			iVar1 = 3750;
			break;
		
		case 103:
			iVar6 = 6;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 104:
			iVar6 = 6;
			iVar7 = 8;
			iVar1 = 515;
			break;
		
		case 105:
			iVar6 = 6;
			iVar7 = 9;
			iVar1 = 530;
			break;
		
		case 106:
			iVar6 = 6;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 107:
			iVar6 = 6;
			iVar7 = 11;
			iVar1 = 2810;
			break;
		
		case 108:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 150;
			break;
		
		case 109:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 155;
			break;
		
		case 110:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 320;
			break;
		
		case 111:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 140;
			break;
		
		case 112:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 150;
			break;
		
		case 113:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 145;
			break;
		
		case 114:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 150;
			break;
		
		case 115:
			iVar6 = 7;
			iVar7 = 7;
			iVar1 = 140;
			break;
		
		case 116:
			iVar6 = 7;
			iVar7 = 8;
			iVar1 = 135;
			break;
		
		case 117:
			iVar6 = 7;
			iVar7 = 9;
			iVar1 = 130;
			break;
		
		case 118:
			iVar6 = 7;
			iVar7 = 10;
			iVar1 = 130;
			break;
		
		case 119:
			iVar6 = 7;
			iVar7 = 11;
			iVar1 = 150;
			break;
		
		case 120:
			iVar6 = 7;
			iVar7 = 12;
			iVar1 = 145;
			break;
		
		case 121:
			iVar6 = 7;
			iVar7 = 13;
			iVar1 = 740;
			break;
		
		case 122:
			iVar6 = 7;
			iVar7 = 14;
			iVar1 = 790;
			break;
		
		case 123:
			iVar6 = 7;
			iVar7 = 15;
			iVar1 = 130;
			break;
	}
	switch (iParam0)
	{
		case 124:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 45;
			break;
		
		case 125:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 126:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 127:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 128:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 129:
			iVar6 = 8;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 130:
			iVar6 = 8;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 131:
			iVar6 = 8;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 132:
			iVar6 = 8;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 133:
			iVar6 = 8;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 134:
			iVar6 = 8;
			iVar7 = 10;
			iVar1 = 65;
			break;
		
		case 135:
			iVar6 = 8;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 136:
			iVar6 = 8;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 137:
			iVar6 = 8;
			iVar7 = 13;
			iVar1 = 40;
			break;
		
		case 138:
			iVar6 = 8;
			iVar7 = 14;
			iVar1 = 45;
			break;
		
		case 139:
			iVar6 = 8;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 140:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 265;
			break;
		
		case 141:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 340;
			break;
		
		case 142:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 335;
			break;
		
		case 143:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 330;
			break;
		
		case 144:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 345;
			break;
		
		case 145:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 550;
			break;
		
		case 146:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 147:
			iVar6 = 9;
			iVar7 = 7;
			iVar1 = 295;
			break;
		
		case 148:
			iVar6 = 9;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 149:
			iVar6 = 9;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 150:
			iVar6 = 9;
			iVar7 = 10;
			iVar1 = 545;
			break;
		
		case 151:
			iVar6 = 9;
			iVar7 = 11;
			iVar1 = 345;
			break;
		
		case 152:
			iVar6 = 9;
			iVar7 = 12;
			iVar1 = 315;
			break;
		
		case 153:
			iVar6 = 9;
			iVar7 = 13;
			iVar1 = 520;
			break;
		
		case 154:
			iVar6 = 9;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 155:
			iVar6 = 9;
			iVar7 = 15;
			iVar1 = 330;
			break;
	}
	switch (iParam0)
	{
		case 156:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 505;
			break;
		
		case 157:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 470;
			break;
		
		case 158:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 475;
			break;
		
		case 159:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 160:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 161:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 162:
			iVar6 = 10;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 163:
			iVar6 = 10;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 164:
			iVar6 = 10;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 165:
			iVar6 = 10;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 166:
			iVar6 = 10;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 167:
			iVar6 = 10;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 168:
			iVar6 = 10;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 169:
			iVar6 = 10;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 170:
			iVar6 = 10;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 171:
			iVar6 = 10;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 172:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 120;
			break;
		
		case 173:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 360;
			break;
		
		case 174:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 175:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 176:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 177:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 178:
			iVar6 = 11;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 179:
			iVar6 = 11;
			iVar7 = 7;
			iVar1 = 90;
			break;
		
		case 180:
			iVar6 = 11;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 181:
			iVar6 = 11;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 182:
			iVar6 = 11;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 183:
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 184:
			iVar6 = 11;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 185:
			iVar6 = 11;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 186:
			iVar6 = 11;
			iVar7 = 14;
			iVar1 = 2450;
			break;
		
		case 187:
			iVar6 = 11;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 188:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 189:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 190:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 695;
			break;
		
		case 191:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 192:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 193:
			iVar6 = 12;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 194:
			iVar6 = 12;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 195:
			iVar6 = 12;
			iVar7 = 7;
			iVar1 = 450;
			break;
		
		case 196:
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 197:
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 198:
			iVar6 = 12;
			iVar7 = 10;
			iVar1 = 1060;
			break;
		
		case 199:
			iVar6 = 12;
			iVar7 = 11;
			iVar1 = 1040;
			break;
		
		case 200:
			iVar6 = 12;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 201:
			iVar6 = 12;
			iVar7 = 13;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 202:
			iVar6 = 12;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 203:
			iVar6 = 12;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 204:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 205:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 206:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 680;
			break;
		
		case 207:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 208:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 209:
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 345;
			break;
		
		case 210:
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 211:
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 212:
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 213:
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 214:
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 215:
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 216:
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 217:
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1065;
			break;
		
		case 218:
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 0;
			bVar0 = true;
			break;
		
		case 219:
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 0;
			bVar0 = true;
			break;
	}
	switch (iParam0)
	{
		case 220:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 420;
			break;
		
		case 221:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 415;
			break;
		
		case 222:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 440;
			break;
		
		case 223:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 385;
			break;
		
		case 224:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 330;
			break;
		
		case 225:
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 445;
			break;
		
		case 226:
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 340;
			break;
		
		case 227:
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 440;
			break;
		
		case 228:
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 295;
			break;
		
		case 229:
			iVar6 = 14;
			iVar7 = 9;
			iVar1 = 340;
			break;
		
		case 230:
			iVar6 = 14;
			iVar7 = 10;
			iVar1 = 325;
			break;
		
		case 231:
			iVar6 = 14;
			iVar7 = 11;
			iVar1 = 435;
			break;
		
		case 232:
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 445;
			break;
		
		case 233:
			iVar6 = 14;
			iVar7 = 13;
			iVar1 = 440;
			break;
		
		case 234:
			iVar6 = 14;
			iVar7 = 14;
			iVar1 = 325;
			break;
		
		case 235:
			iVar6 = 14;
			iVar7 = 15;
			iVar1 = 325;
			break;
		
		case 236:
			iVar6 = 15;
			iVar7 = 0;
			break;
	}
	StringCopy(&Var2, "U_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 == 23)
	{
		if (func_85(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(1250) * Global_262145.f_2959) * Global_271302.f_16));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(45) * Global_262145.f_414[23]) * Global_271302.f_16));
		}
	}
	else if (iParam0 == 17)
	{
		if (func_85(88, -1))
		{
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(450) * Global_262145.f_2958) * Global_271302.f_16));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(60) * Global_262145.f_414[17]) * Global_271302.f_16));
		}
	}
	else if (iParam0 == 28)
	{
		if (func_85(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(500) * Global_262145.f_2957) * Global_271302.f_16));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(55) * Global_262145.f_414[28]) * Global_271302.f_16));
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_414[iVar11]) * Global_271302.f_16));
		}
	}
	if (iParam0 >= 237)
	{
		Global_68186[0 /*14*/].f_5 = 3;
		func_73(iVar10, iParam0, 237);
		if (Global_68186[0 /*14*/].f_7 > 0)
		{
			Global_68186[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68186[0 /*14*/].f_7) * Global_271302.f_16));
		}
	}
	else
	{
		func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_109(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	bVar0 = false;
	iVar1 = 10;
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = -1;
	iVar9 = 2;
	iVar10 = 2;
	switch (iParam0)
	{
		case 0:
			iVar6 = 0;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[0]));
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 190;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[1]));
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 185;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[2]));
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 180;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[3]));
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 175;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[4]));
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 170;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[5]));
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			iVar1 = 580;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[6]));
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 575;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[7]));
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 570;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[8]));
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 565;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[9]));
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 560;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[10]));
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			iVar1 = 1100;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[11]));
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 1095;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[12]));
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 1090;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[13]));
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 1085;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[14]));
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 1080;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[15]));
			break;
		
		case 18:
			iVar6 = 3;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 520;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[16]));
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 515;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[17]));
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 510;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[18]));
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 505;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[19]));
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 500;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[20]));
			break;
		
		case 24:
			iVar6 = 4;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 25:
			iVar6 = 4;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 0;
			iVar1 = 295;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[21]));
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 290;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[22]));
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 285;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[23]));
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 280;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[24]));
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 275;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[25]));
			break;
		
		case 31:
			iVar6 = 5;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 0;
			iVar1 = 950;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[26]));
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 945;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[27]));
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 940;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[28]));
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 935;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[29]));
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 930;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[30]));
			break;
		
		case 37:
			iVar6 = 6;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 440;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[31]));
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 435;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[32]));
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 430;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[33]));
			break;
		
		case 41:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 425;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[34]));
			break;
		
		case 42:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 420;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[35]));
			break;
		
		case 43:
			iVar6 = 7;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 44:
			iVar6 = 7;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 0;
			iVar1 = 1150;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[36]));
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 1145;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[37]));
			break;
		
		case 47:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 1140;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[38]));
			break;
		
		case 48:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1135;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[39]));
			break;
		
		case 49:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1130;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[40]));
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 395;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[41]));
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 390;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[42]));
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 385;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[43]));
			break;
		
		case 53:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 380;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[44]));
			break;
		
		case 54:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 375;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[45]));
			break;
		
		case 55:
			iVar6 = 9;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 56:
			iVar6 = 9;
			iVar7 = 6;
			iVar1 = 0;
			break;
		
		case 57:
			iVar6 = 10;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[46]));
			break;
		
		case 58:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 495;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[47]));
			break;
		
		case 59:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 490;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[48]));
			break;
		
		case 60:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 485;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[49]));
			break;
		
		case 61:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 480;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[50]));
			break;
		
		case 62:
			iVar6 = 10;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 0;
			iVar1 = 1050;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[51]));
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 1045;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[52]));
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 1040;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[53]));
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 1035;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[54]));
			break;
		
		case 67:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 1030;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[55]));
			break;
		
		case 68:
			iVar6 = 11;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 69:
			iVar6 = 12;
			iVar7 = 0;
			iVar1 = 550;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[56]));
			break;
		
		case 70:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 545;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[57]));
			break;
		
		case 71:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 540;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[58]));
			break;
		
		case 72:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 535;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[59]));
			break;
		
		case 73:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 530;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[60]));
			break;
		
		case 74:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 1200;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[61]));
			break;
		
		case 75:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1195;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[62]));
			break;
		
		case 76:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 1190;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[63]));
			break;
		
		case 77:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 1185;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[64]));
			break;
		
		case 78:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1180;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[65]));
			break;
		
		case joaat("mpsv_lp0_31"):
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		case 80:
			iVar6 = 14;
			iVar7 = 0;
			iVar1 = 2000;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[66]));
			break;
		
		case 81:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 1995;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[67]));
			break;
		
		case 82:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 1990;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[68]));
			break;
		
		case 83:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 1985;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[69]));
			break;
		
		case 84:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 1980;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[70]));
			break;
		
		case 85:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 475;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[71]));
			break;
		
		case 86:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 470;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[72]));
			break;
		
		case 87:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 465;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[73]));
			break;
		
		case 88:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 460;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[74]));
			break;
		
		case 89:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 455;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2512[75]));
			break;
		
		case 90:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		default:
			Global_68186[0 /*14*/].f_5 = 3;
			func_73(iVar10, iParam0, 91);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_61(&(Global_68186[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_110()
{
	Global_68186[0 /*14*/].f_1 = -1;
	Global_68186[0 /*14*/].f_2 = -1;
	Global_68186[0 /*14*/].f_5 = -1;
	Global_68186[0 /*14*/].f_3 = -1;
	Global_68186[0 /*14*/].f_4 = -1;
	Global_68186[0 /*14*/].f_7 = 0;
	Global_68186[0 /*14*/].f_6 = 0;
	Global_68186[0 /*14*/].f_13 = -1;
	Global_68186[0 /*14*/].f_12 = 0;
	Global_68186[0 /*14*/] = 0;
	StringCopy(&(Global_68186[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_111(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x2DE0B96E966FD817(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_119(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_119(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return func_114(iParam0, iParam2);
			}
		}
		else
		{
			return func_112(iParam0, iParam1);
		}
	}
	return -99;
}

int func_112(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x2DE0B96E966FD817(iParam0))
	{
		return -99;
	}
	iVar0 = func_44(iParam1);
	iVar1 = unk_0x95AD4DE218A9F9E5(iParam0, iVar0);
	iVar2 = unk_0xBF8959A81F71BB84(iParam0, iVar0);
	return func_113(iParam0, iVar1, iVar2, iParam1);
}

int func_113(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_44(iParam3);
	iVar1 = unk_0x6F10D09A2D4512D7(uParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0xBA740331AA10DD4A(uParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return -99;
}

int func_114(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2DE0B96E966FD817(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0xA8E98142ED49A114(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_118(iParam1);
	}
	iVar1 = unk_0x9438D5140CD3EABD(iParam0, iParam1);
	return func_115(iParam0, iVar0, iVar1, iParam1);
}

int func_115(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == -1)
	{
		return func_118(iParam3);
	}
	iVar0 = unk_0xA609E58449080951(iParam0);
	iVar1 = unk_0x3DCA93178BE73756(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_117(unk_0xA609E58449080951(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_117(unk_0xA609E58449080951(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0xB6CBA6A45FB29F57(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0x684B9CFDAED5613D(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_116(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_118(iParam3);
}

int func_116(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0xA609E58449080951(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return -99;
}

int func_117(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar17;
	int iVar18;
	int iVar19;
	struct<2> Var20;
	int iVar37;
	int iVar38;
	int iVar39;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		unk_0xBDDDC429ACE48471(&Var0);
		iVar18 = 0;
		iVar19 = unk_0x4E1A2A59E4ACC278(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0x5CB214386FBD4468(iVar17, &Var0);
			if (!unk_0xA90142E282A42D80(Var0.f_0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_45(iParam0) + iVar18);
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else
	{
		unk_0xC10C2D9EE1DAEA41(&Var20);
		iVar38 = 0;
		iVar39 = unk_0x4E1A2A59E4ACC278(iParam3, 6, -1, 0, -1, func_44(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			unk_0xA3CC695797E69C26(iVar37, &Var20);
			if (!unk_0xA90142E282A42D80(Var20.f_0))
			{
				if (iParam1 == Var20.f_1)
				{
					return (func_43(iParam0, func_44(iParam2)) + iVar38);
				}
				iVar38++;
			}
			iVar37++;
		}
	}
	return -99;
}

int func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
	}
	return 0;
}

int func_119(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar24;
	int iVar34;
	var uVar35;
	var uVar45;
	
	if (unk_0x2DE0B96E966FD817(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0xA609E58449080951(iParam0);
	Global_68186[1 /*14*/] = { func_58(iVar0, iParam1, iParam2) };
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!unk_0x889D01384B54BCE3(Global_68186[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_130(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_119(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar24 = { func_127(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_119(iParam0, 14, uVar24[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_68186[2 /*14*/] = { func_58(iVar0, 14, iVar6) };
									if (Global_68186[2 /*14*/].f_12 == iVar5)
									{
										if (func_119(iParam0, 14, iVar6))
										{
											if (!func_123(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_68186[2 /*14*/])))
											{
												Global_2621444 = uVar2;
												Global_2621445 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = func_112(iParam0, iVar4);
						Global_68186[2 /*14*/] = { func_58(iVar0, iVar4, iVar1) };
						if (!func_123(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_68186[2 /*14*/])))
						{
							Global_2621444 = uVar2;
							Global_2621445 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if (uVar8[10] != 0 && uVar8[10] != joaat("0"))
		{
			if (func_64(1750, Global_68184, 0) != uVar8[10])
			{
				Global_2621444 = uVar2;
				Global_2621445 = uVar3;
				return 0;
			}
		}
		Global_2621444 = uVar2;
		Global_2621445 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar35 = { func_127(iVar0, iParam2) };
		iVar34 = 0;
		while (iVar34 <= 8)
		{
			if (!func_119(iParam0, 14, uVar35[iVar34]))
			{
				return 0;
			}
			iVar34++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0xA8E98142ED49A114(iParam0, Global_68186[1 /*14*/].f_12) == Global_68186[1 /*14*/].f_3 && (unk_0x9438D5140CD3EABD(iParam0, Global_68186[1 /*14*/].f_12) == Global_68186[1 /*14*/].f_4 || Global_68186[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else
	{
		if (Global_68186[1 /*14*/].f_3 == unk_0x95AD4DE218A9F9E5(iParam0, func_44(iParam1)) && Global_68186[1 /*14*/].f_4 == unk_0xBF8959A81F71BB84(iParam0, func_44(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			if (func_122(iVar0, 11, func_112(iParam0, 11)))
			{
				if (func_121(iVar0, 4, iParam2, &uVar45))
				{
					return func_119(iParam0, 4, uVar45);
				}
			}
			else if (func_120(iVar0, 4, iParam2, &uVar45))
			{
				return func_119(iParam0, 4, uVar45);
			}
		}
	}
	return 0;
}

int func_120(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_42(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0xB34FA0277CA7CFE5(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0xB90E4192330C49EE(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (!unk_0xFC16329269277970(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_117(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_121(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_42(iParam0, iParam2, iParam1, 4);
						if (iVar0 != -1)
						{
							iVar1 = unk_0xB34FA0277CA7CFE5(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0xB90E4192330C49EE(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (unk_0xFC16329269277970(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_117(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_122(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						return unk_0xFC16329269277970(func_42(iParam0, iParam2, 11, 4), joaat("DRESS"), 0);
					}
					break;
			}
			break;
	}
	return 0;
}

int func_123(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
{
	var uVar0;
	int iVar10;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == -99 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == -99 || uParam5->f_1 == -1)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_127(iParam0, (*uParam4)[13]) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (uVar0[iVar10] == iParam3)
			{
				return 1;
			}
			iVar10++;
		}
	}
	if (func_126(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_125(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_124(iParam0, iParam2, iParam3))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_41(iParam0, iParam2, iParam3))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_125(iParam0, iParam2, iParam3))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_124(iParam0, iParam2, iParam3))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
						}
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_41(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_125(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_124(iParam0, iParam2, iParam3))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_41(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_124(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					uVar0 = func_42(iParam0, iParam2, 1, 3);
					if (unk_0xFC16329269277970(uVar0, joaat("HAT"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					uVar1 = func_42(iParam0, iParam2, 1, 4);
					if (unk_0xFC16329269277970(uVar1, joaat("HAT"), 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_125(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					return unk_0xFC16329269277970(func_42(iParam0, iParam2, 14, 3), joaat("GLASSES"), 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					return unk_0xFC16329269277970(func_42(iParam0, iParam2, 14, 4), joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_126(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

struct<10> func_127(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_129(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_129(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_129(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_129(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_129(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_129(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_129(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_129(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_129(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_129(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_129(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_128(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_129(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_129(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_129(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_129(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_129(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_129(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_129(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_129(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_129(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_129(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_128(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_129(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_129(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_129(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_129(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_129(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_129(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_129(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_129(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_129(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_129(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_128(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_129(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_129(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_129(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_129(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_129(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_129(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_129(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_129(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_129(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_129(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_129(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_129(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_129(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_129(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_129(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_129(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_129(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_129(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_129(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_129(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_129(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_129(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_129(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_129(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_129(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_129(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_128(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_129(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_129(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_129(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_129(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_129(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_129(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_129(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_129(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_129(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_129(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_129(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_129(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_129(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_129(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_129(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_129(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_129(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_129(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_129(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_129(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_129(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_129(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_129(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_129(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_129(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_128(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_128(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	struct<3> Var16;
	int iVar19;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		unk_0x2F4B84843E8F0E12(iParam2, &Var1);
		if (!unk_0xA90142E282A42D80(Var1.f_0))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (unk_0x5B05915BFBB03896(Var1.f_1, iVar19, &Var16) && Var16.f_2 != -1)
				{
					if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
					{
						(*iParam0)[Var16.f_2] = func_117(iParam1, Var16.f_0, 14, iVar0);
					}
					else if (Var16.f_1 != -1)
					{
						(*iParam0)[Var16.f_2] = Var16.f_1;
					}
				}
				iVar19++;
			}
		}
	}
}

void func_129(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

struct<16> func_130(int iParam0, int iParam1)
{
	int iVar0;
	struct<16> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_97439.f_7341.f_99.f_58[120])
					{
						func_133(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_133(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_133(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_133(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_133(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_133(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_133(&Var1, -99, -99, Global_97439.f_1729.f_539.f_196[0], Global_97439.f_1729.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_133(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_133(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_133(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_133(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_133(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_133(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_133(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_133(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_133(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_133(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_133(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_133(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_133(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_133(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_133(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_133(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_133(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_133(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_133(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_133(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_133(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_133(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_133(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_133(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_133(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_133(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_133(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_133(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_133(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_133(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_133(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_133(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_133(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_133(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_133(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_133(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_133(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_133(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_133(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_133(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_133(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_133(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_133(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_133(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_133(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_133(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_133(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_131(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_133(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_133(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_133(&Var1, -99, -99, Global_97439.f_1729.f_539.f_196[1], Global_97439.f_1729.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_133(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_133(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_133(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_133(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_133(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_133(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_133(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_133(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_133(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_133(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_133(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_133(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_133(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_133(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_133(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_133(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_133(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_133(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_133(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_133(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_133(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_133(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_133(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_133(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_133(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_133(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_133(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_133(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_133(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_133(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_133(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_133(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_133(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_133(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_133(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_133(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_133(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_133(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_133(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_133(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_133(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_133(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_133(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_133(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_131(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_133(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_133(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_133(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_133(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_133(&Var1, -99, -99, Global_97439.f_1729.f_539.f_196[2], Global_97439.f_1729.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_133(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_133(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_133(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_133(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_133(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_133(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_133(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_133(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_133(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_133(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_133(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_133(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_133(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_133(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_133(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_133(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_133(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_133(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_133(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_133(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_133(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_133(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_133(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_133(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_133(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_133(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_133(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_133(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_133(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_133(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_133(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_133(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_133(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_133(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_133(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_133(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_133(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_133(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_133(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_133(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_133(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_133(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_133(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_131(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_133(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_133(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_133(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_133(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_133(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_133(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_133(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_133(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_133(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_133(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_133(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_133(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_133(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_133(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_133(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_133(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_133(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_133(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_133(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_133(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_133(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_133(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_133(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_133(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_133(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_133(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_131(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_133(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_133(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_133(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_133(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_133(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_133(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_133(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_133(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_133(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_133(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_133(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_133(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_133(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_133(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_133(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_133(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_133(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_133(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_133(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_133(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_133(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_133(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_133(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_133(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_133(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_133(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_133(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_133(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_131(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<3> Var16;
	int iVar19;
	
	(*iParam0)[0] = 0;
	(*iParam0)[2] = -99;
	(*iParam0)[3] = 0;
	(*iParam0)[4] = 0;
	(*iParam0)[6] = 0;
	(*iParam0)[5] = 0;
	(*iParam0)[8] = 0;
	(*iParam0)[9] = 0;
	(*iParam0)[10] = 0;
	(*iParam0)[1] = 0;
	(*iParam0)[7] = 0;
	(*iParam0)[11] = 0;
	(*iParam0)[13] = -99;
	(*iParam0)[14] = -99;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*iParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*iParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*iParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	unk_0x679142F703489374(iVar0, 0);
	unk_0xE7187985FE6BDDBC((iParam2 - iParam3), &Var1);
	if (!unk_0xA90142E282A42D80(Var1.f_0))
	{
		iVar19 = 0;
		while (iVar19 < Var1.f_4)
		{
			if (unk_0x81194FA9E8E09E26(Var1.f_1, iVar19, &Var16))
			{
				if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
				{
					if (Var16.f_2 == 10)
					{
						(*iParam0)[func_132(Var16.f_2)] = Var16.f_0;
					}
					else
					{
						(*iParam0)[func_132(Var16.f_2)] = func_117(iParam1, Var16.f_0, func_132(Var16.f_2), iVar0);
					}
				}
				else if (Var16.f_1 != -1)
				{
					(*iParam0)[func_132(Var16.f_2)] = Var16.f_1;
				}
			}
			iVar19++;
		}
		if (Var1.f_3 == 0)
		{
			(*iParam0)[13] = -99;
		}
		else
		{
			(*iParam0)[13] = Var1.f_1;
		}
	}
}

int func_132(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_133(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[2] = iParam2;
	(*iParam0)[3] = iParam3;
	(*iParam0)[4] = iParam4;
	(*iParam0)[6] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[8] = iParam7;
	(*iParam0)[9] = iParam8;
	(*iParam0)[10] = iParam9;
	(*iParam0)[1] = iParam10;
	(*iParam0)[7] = iParam11;
	(*iParam0)[11] = iParam12;
	(*iParam0)[13] = iParam13;
	(*iParam0)[14] = -99;
}

bool func_134(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1788E93557766241())
	{
		bVar0 = func_135(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1583725[iParam0 /*334*/].f_188 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x38FA37FE3518BA38(iParam0))
		{
			bVar0 = unk_0xA2D6C1E24AF2E058(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_135(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_23();
	}
	if (Global_1315869[iVar1] == 1)
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

int func_136()
{
	if (func_138())
	{
		return 1;
	}
	if (func_137())
	{
		return 1;
	}
	return 0;
}

int func_137()
{
	if (Global_2422491.f_613.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_138()
{
	return Global_87756;
}

void func_139()
{
	if (((func_10(unk_0x1788E93557766241(), 1, 1) && !func_5(unk_0x1788E93557766241())) && !func_334(unk_0x1788E93557766241())) && func_323())
	{
		if (Local_2158[unk_0x044A481E863E2F6B() /*7*/].f_2 == 1)
		{
			func_140("AMBC_PREP", 0);
		}
		else if (Local_2158[unk_0x044A481E863E2F6B() /*7*/].f_2 == 3)
		{
			func_140("AMBC_START", 0);
		}
		else
		{
			func_153();
		}
	}
	else
	{
		func_153();
	}
}

void func_140(char* sParam0, bool bParam1)
{
	if (unk_0x06771AF7795B3ECF(sParam0))
	{
		return;
	}
	if (unk_0xF2EC0D50FCCB3CE1(sParam0) > 23)
	{
		return;
	}
	if (func_150(sParam0))
	{
		return;
	}
	func_144();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), unk_0x7E5A426328F6E635(), 24);
	Global_1312577.f_7 = unk_0xB793F1A0B6CC4AE1(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_143();
	func_142(bParam1);
	func_141();
}

void func_141()
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_1312577.f_39), 1);
}

void func_142(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_1312577.f_39), 0);
		return;
	}
	unk_0x29DB79DD4D939B38(&(Global_1312577.f_39), 0);
}

void func_143()
{
	Global_1312577.f_8 = unk_0xBBFAF6DED9DAD29D(unk_0x519586565311459B(), 86400000);
	Global_1312577.f_9 = unk_0x519586565311459B();
}

void func_144()
{
	func_146();
	func_145(0);
}

void func_145(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x1DAD7CE53BEE7710();
	Global_1312577 = 12;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0x519586565311459B();
		Global_1312577.f_9 = unk_0x519586565311459B();
	}
	StringCopy(&(Global_1312577.f_10), "", 16);
	StringCopy(&(Global_1312577.f_14), "", 64);
	StringCopy(&(Global_1312577.f_30), "", 16);
	Global_1312577.f_34 = 0;
	Global_1312577.f_35 = 0;
	Global_1312577.f_36 = 0;
	Global_1312577.f_37 = -1;
	Global_1312577.f_38 = 0;
	Global_1312577.f_39 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_146()
{
	if (!func_149())
	{
	}
	if (func_148())
	{
		unk_0x0945E066A4F6A0E3(&(Global_1312577.f_10));
		func_147();
		unk_0x88A8396804C29D3A();
	}
}

void func_147()
{
	switch (Global_1312577)
	{
		case 12:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x53B64327E3305DCB(Global_1312577.f_34);
			return;
		
		case 2:
			unk_0x53B64327E3305DCB(Global_1312577.f_34);
			unk_0x53B64327E3305DCB(Global_1312577.f_35);
			return;
		
		case 3:
			unk_0x4498E0CBD76B2D72(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0x4498E0CBD76B2D72(&(Global_1312577.f_14));
			unk_0x4498E0CBD76B2D72(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0x94E086BCAE8856C1(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0x61329A2F1E63248B(Global_1312577.f_38);
			unk_0x94E086BCAE8856C1(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0x4498E0CBD76B2D72(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0x61329A2F1E63248B(Global_1312577.f_38);
			unk_0x4498E0CBD76B2D72(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x9FBED7BEC6BDE9B6(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0x94E086BCAE8856C1(&(Global_1312577.f_14));
			unk_0x94E086BCAE8856C1(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x9FBED7BEC6BDE9B6(&(Global_1312577.f_14));
			return;
		
		default:
	}
}

int func_148()
{
	if (Global_1312577 == 12)
	{
		return 0;
	}
	return 1;
}

int func_149()
{
	if (!func_148())
	{
		return 0;
	}
	unk_0xA5FA652414A5B56F(&(Global_1312577.f_10));
	func_147();
	return unk_0x516C4E27C3C5FFAD();
}

bool func_150(char* sParam0)
{
	if (!func_148())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		return func_151(sParam0);
	}
	if (unk_0x06771AF7795B3ECF(sParam0))
	{
		return 0;
	}
	return unk_0xB793F1A0B6CC4AE1(sParam0) == unk_0xB793F1A0B6CC4AE1(&(Global_1312577.f_10));
}

bool func_151(char* sParam0)
{
	if (!func_148())
	{
		return 0;
	}
	if (unk_0x06771AF7795B3ECF(sParam0))
	{
		return 0;
	}
	return unk_0xB793F1A0B6CC4AE1(sParam0) == unk_0xB793F1A0B6CC4AE1(&(Global_1312577.f_14));
}

void func_152()
{
	if (!unk_0x889D01384B54BCE3(iLocal_92, 3))
	{
		unk_0xD28031B36012E8A1();
		unk_0xD0E2BFCE93AE3ABD(&iLocal_92, 3);
	}
}

void func_153()
{
	if (!func_148())
	{
		return;
	}
	if (!unk_0xB793F1A0B6CC4AE1(unk_0x7E5A426328F6E635()) == Global_1312577.f_7)
	{
		return;
	}
	func_144();
}

void func_154()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (!unk_0x889D01384B54BCE3(Local_2158[unk_0x044A481E863E2F6B() /*7*/].f_1, 0))
	{
		if (func_5(unk_0x1788E93557766241()))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Local_2158[unk_0x044A481E863E2F6B() /*7*/].f_1), 0);
			return;
		}
		if (func_334(unk_0x1788E93557766241()))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Local_2158[unk_0x044A481E863E2F6B() /*7*/].f_1), 0);
			return;
		}
		func_214(&iVar0, &iVar1);
		Local_2383.f_6 = iVar0;
		if (!Global_262145.f_9148)
		{
			if (Local_2383.f_6 > 0)
			{
				func_213(18, Local_2383.f_6);
			}
		}
		Local_2383.f_7 = iVar1;
		if (iVar0 > 0)
		{
			if (func_212())
			{
				func_205(-934465332, iVar0, &uVar2, 0, 1);
			}
			else
			{
				unk_0x7A7A166B0DDE10EE(iVar0, "AM_CRIMINAL_DAMAGE", &uVar3);
			}
			Global_2437347 = iVar0;
		}
		if (iVar1 > 0)
		{
			func_204();
			func_155(0, unk_0xA16EC202D9D35357(), "", -1636175450, 1712590420, iVar1, 1, -1, 0, 0);
		}
		unk_0xD0E2BFCE93AE3ABD(&(Local_2158[unk_0x044A481E863E2F6B() /*7*/].f_1), 0);
	}
}

int func_155(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	return func_156(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9);
}

int func_156(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_166(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x538DF9E5B1DF01EB(iParam1))
		{
			if (unk_0xA34B85701D8A1FA8(iParam1))
			{
				iVar1 = unk_0xA7CC89FF539E1376(iParam1);
				func_162(unk_0xCDC62EA66023BC94(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_157(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_157(int iParam0, int iParam1, char* sParam2)
{
	struct<3> Var0;
	
	Var0 = { func_160(iParam0, 1) };
	if (iParam0 == func_159(unk_0xA16EC202D9D35357()))
	{
		func_158(1);
	}
	func_162(Var0, iParam1, 0, sParam2);
}

void func_158(int iParam0)
{
	Global_2422491.f_1320 = iParam0;
}

int func_159(int iParam0)
{
	return iParam0;
}

Vector3 func_160(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_161(unk_0xA16EC202D9D35357()) && unk_0x95AD511976EEFC6B(unk_0x862704CFD32408F9()) == 4)
	{
		Var0 = { unk_0xA783C6007920169C(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xBF8499F46AD9093A(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!unk_0xE44A580B551C3645(iParam0))
	{
		fVar3 = unk_0xD1613577C809E98B(iParam0);
	}
	unk_0xD7CB63D07AABC54F(unk_0xA609E58449080951(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { unk_0xCC6B7A025E72F529(Var0, fVar3, 0f, 0f, fVar10) };
	return Var0;
}

int func_161(int iParam0)
{
	return iParam0;
}

void func_162(struct<3> Param0, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2422491.f_739[iVar0 /*29*/].f_6 == 0 || Global_2422491.f_739[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2422491.f_739[iVar1 /*29*/] = { Param0 };
			Global_2422491.f_739[iVar1 /*29*/].f_6 = 1;
			Global_2422491.f_739[iVar1 /*29*/].f_4 = func_165(Global_2422491.f_739[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2422491.f_739[iVar1 /*29*/].f_7 = unk_0x519586565311459B();
			Global_2422491.f_739[iVar1 /*29*/].f_3 = iParam3;
			Global_2422491.f_739[iVar1 /*29*/].f_8 = iParam4;
			Global_2422491.f_739[iVar1 /*29*/].f_9 = func_164();
			Global_2422491.f_739[iVar1 /*29*/].f_10 = func_163();
			StringCopy(&(Global_2422491.f_739[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_163()
{
	if (Global_2422491.f_1320)
	{
		Global_2422491.f_1320 = 0;
		return 1;
	}
	Global_2422491.f_1320 = 0;
	return 0;
}

var func_164()
{
	var uVar0;
	
	uVar0 = Global_2422491.f_1322;
	Global_2422491.f_1322 = 1;
	return uVar0;
}

float func_165(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x4970185D4CC64616(unk_0x8F759040B8D528AF(), Param0, 1);
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

var func_166(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_167(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_167(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_203(unk_0x1788E93557766241()) || func_202(unk_0x1788E93557766241()))
	{
		if (Global_262145.f_7316 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7316;
		}
	}
	else if (Global_262145.f_4982 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_4982;
	}
	if (func_201(uParam2))
	{
	}
	if (func_200())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_198(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_197(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_194(0, &iVar1);
					break;
				
				case 3:
					func_194(1, &iVar1);
					break;
				
				case 1:
					func_190(&iVar1);
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
			func_188(1159, iVar1, -1);
			if (iParam1 == 0)
			{
				func_178((func_187(unk_0x1788E93557766241()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0x449D2838B793CF3B(iVar1, iParam8, iParam9);
				if (Global_1583725[unk_0x1788E93557766241() /*334*/].f_39.f_2 != -1)
				{
					func_188(1160, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_172(iVar1);
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
				func_168((func_170(unk_0x1788E93557766241()) + iVar1));
			}
			else
			{
				func_168((func_170(unk_0x1788E93557766241()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_168(int iParam0)
{
	if (func_200())
	{
		Global_1583725[unk_0x1788E93557766241() /*334*/].f_188.f_5 = iParam0;
		func_169(joaat("mpply_globalxp"), iParam0);
	}
}

void func_169(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, uParam1, 1);
	}
}

int func_170(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_10(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x1788E93557766241())
			{
				return func_171(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1583725[iParam0 /*334*/].f_188.f_5;
			}
		}
		else
		{
			return func_171(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_171(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x3ED04C9A60CBD249(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_172(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_177(unk_0x1788E93557766241()) };
	if (unk_0x70443014BEB6B15D())
	{
		if (unk_0x9A6FFB0772343488(&Var0))
		{
			iVar13 = func_175(func_176(&Var0));
			if (iVar13 == 0)
			{
				func_174(&Global_1336376, iParam0);
				func_173(joaat("mpply_crew_local_xp_0"), Global_1336376);
			}
			else if (iVar13 == 1)
			{
				func_174(&Global_1336377, iParam0);
				func_173(joaat("mpply_crew_local_xp_1"), Global_1336377);
			}
			else if (iVar13 == 2)
			{
				func_174(&Global_1336378, iParam0);
				func_173(joaat("mpply_crew_local_xp_2"), Global_1336378);
			}
			else if (iVar13 == 3)
			{
				func_174(&Global_1336379, iParam0);
				func_173(joaat("mpply_crew_local_xp_3"), Global_1336379);
			}
			else if (iVar13 == 4)
			{
				func_174(&Global_1336380, iParam0);
				func_173(joaat("mpply_crew_local_xp_4"), Global_1336380);
			}
		}
	}
}

void func_173(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1336371 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1336373 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1336373 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1336374 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1336375 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1336376 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1336377 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1336378 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1336379 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1336380 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1336381 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1336382 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1336383 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1336384 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1336385 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1336386 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1336387 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_174(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_175(int iParam0)
{
	if (iParam0 == Global_1336371)
	{
		return 0;
	}
	else if (iParam0 == Global_1336372)
	{
		return 1;
	}
	else if (iParam0 == Global_1336373)
	{
		return 2;
	}
	else if (iParam0 == Global_1336374)
	{
		return 3;
	}
	else if (iParam0 == Global_1336375)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_176(var uParam0)
{
	if (unk_0x70443014BEB6B15D())
	{
		if (unk_0x9A6FFB0772343488(uParam0))
		{
			return Global_2435485;
		}
	}
	return Global_2435485;
}

struct<13> func_177(int iParam0)
{
	struct<13> Var0;
	
	unk_0xBE9A3F2CD3728669(iParam0, &Var0, 13);
	return Var0;
}

void func_178(int iParam0, int iParam1, int iParam2)
{
	if (func_200())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7291 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1336491[func_65(-1)])
				{
					unk_0x449D2838B793CF3B(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1336491[func_65(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7290 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0x449D2838B793CF3B(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7290 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0x449D2838B793CF3B(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_186(unk_0x1788E93557766241()))
		{
			Global_1583725[unk_0x1788E93557766241() /*334*/].f_188.f_1 = iParam0;
			Global_1583725[unk_0x1788E93557766241() /*334*/].f_188.f_6 = func_184(iParam0, 1);
		}
		func_183(634, iParam0, -1, 1);
		func_182(635, func_184(iParam0, 1), -1, 1);
		Global_1336491[func_65(-1)] = iParam0;
		func_179(7, 0);
	}
}

void func_179(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_181(iParam0, iParam1))
	{
		iVar0 = func_180();
		Global_2435463[iVar0] = iParam0;
	}
}

int func_180()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2435463[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_181(int iParam0, var uParam1)
{
	if (Global_1315879)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315891) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_182(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_65(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, iParam1, iParam3);
	}
}

void func_183(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2455246[iParam0 /*5*/][func_65(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x680350124CC21957(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 782:
			Global_1336437[func_65(iParam2)] = iParam1;
			break;
		
		case 783:
			Global_1336443[func_65(iParam2)] = iParam1;
			break;
		
		case 784:
			Global_1336449[func_65(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1336455[func_65(iParam2)] = iParam1;
			break;
		
		case 772:
			Global_1336413[func_65(iParam2)] = iParam1;
			break;
		
		case 773:
			Global_1336419[func_65(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1336425[func_65(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1336431[func_65(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1336389[func_65(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1336395[func_65(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1336401[func_65(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1336407[func_65(iParam2)] = iParam1;
			break;
		
		case 752:
			Global_1336461[func_65(iParam2)] = iParam1;
			break;
		
		case 753:
			Global_1336467[func_65(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1336473[func_65(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1336479[func_65(iParam2)] = iParam1;
			break;
		
		case 1297:
			Global_1336485[func_65(iParam2)] = iParam1;
			break;
		
		case 634:
			Global_1336491[func_65(iParam2)] = iParam1;
			break;
		
		case 1272:
			Global_1336497[func_65(iParam2)] = iParam1;
			break;
		
		case 1869:
			Global_2473821[0 /*6*/][func_65(iParam2)] = iParam1;
			break;
		
		case 2260:
			Global_2473821[1 /*6*/][func_65(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1336503[func_65(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1336509[func_65(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1336515[func_65(iParam2)] = iParam1;
			break;
		
		case 1230:
			Global_1336521[func_65(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_184(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_185(iParam0, 0);
}

int func_185(int iParam0, int iParam1)
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
		if (Global_271370[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_271370[iVar3] < iParam0)
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

int func_186(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x889D01384B54BCE3(Global_2422491.f_1, iParam0);
	}
	return 1;
}

int func_187(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x1788E93557766241())
			{
				return Global_1336491[func_65(-1)];
			}
			else if (func_186(iParam0))
			{
				return Global_1583725[iParam0 /*334*/].f_188.f_1;
			}
		}
	}
	else
	{
		return Global_1336491[func_65(-1)];
	}
	return 0;
}

void func_188(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_64(iParam0, func_65(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_189(iParam0))
	{
		func_182(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_183(iParam0, iVar0, iParam2, 1);
	}
}

int func_189(int iParam0)
{
	if (Global_1336370)
	{
		switch (iParam0)
		{
			case 782:
			case 783:
			case 784:
			case 785:
			case 772:
			case 773:
			case 774:
			case 775:
			case 762:
			case 763:
			case 764:
			case 765:
			case 752:
			case 753:
			case 754:
			case 755:
			case 1297:
			case 634:
			case 1272:
			case 759:
			case 760:
			case 761:
			case 1230:
			case 1869:
			case 2260:
				return 1;
				break;
			}
	}
	return 0;
}

void func_190(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xA2D6C1E24AF2E058(unk_0x1788E93557766241());
	iVar0 = 0;
	while (iVar0 < unk_0x3F202553F90D4442())
	{
		iVar4 = unk_0xCADBCF2AA9B38F40(iVar0);
		if (unk_0x0AFA8C49D2EED33A(iVar4))
		{
			iVar5 = unk_0xCE0E12AD191025E5(iVar4);
			if (unk_0xA2D6C1E24AF2E058(iVar5) != -1)
			{
				if (unk_0xA2D6C1E24AF2E058(iVar5) == iVar1 || func_193(unk_0xA2D6C1E24AF2E058(iVar5), iVar1))
				{
					iVar2++;
					if (iVar5 != unk_0x1788E93557766241())
					{
						if (func_192(unk_0x1788E93557766241(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_191(*iParam0, 100) * (10f * Global_262145.f_4196)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_191(*iParam0, 100) * (20f * Global_262145.f_4189)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_191(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_192(int iParam0, int iParam1)
{
	if (unk_0x70443014BEB6B15D())
	{
		Global_2446020 = { func_177(iParam0) };
		Global_2446033 = { func_177(iParam1) };
		if (unk_0x9A6FFB0772343488(&Global_2446020))
		{
			if (unk_0x9A6FFB0772343488(&Global_2446033))
			{
				unk_0x55FB44C9EE7B72D8(&Global_2445950, 35, &Global_2446020);
				unk_0x55FB44C9EE7B72D8(&Global_2445985, 35, &Global_2446033);
				if (Global_2445950 == Global_2445985)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_193(int iParam0, int iParam1)
{
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
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 0);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 1);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 2);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 4);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 5);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 6);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 8);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 9);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 10);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 12);
				
				case 1:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 13);
				
				case 2:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 14);
				
				case 3:
					return unk_0x889D01384B54BCE3(Global_1604248.f_33, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_194(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x3F202553F90D4442())
		{
			iVar3 = iVar0;
			if (unk_0x0AFA8C49D2EED33A(iVar3))
			{
				iVar4 = unk_0xCE0E12AD191025E5(iVar3);
				if (func_10(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x1788E93557766241())
					{
						iVar1++;
						if (func_192(unk_0x1788E93557766241(), iVar4))
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
			if (func_10(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x1788E93557766241())
				{
					if (func_195(unk_0x1788E93557766241(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_192(unk_0x1788E93557766241(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_191(*iParam1, 100) * (10f * Global_262145.f_4196)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_191(*iParam1, 100) * (20f * Global_262145.f_4189)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_195(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_196(iParam0), func_196(iParam1));
	return 0f;
}

Vector3 func_196(int iParam0)
{
	return unk_0xBF8499F46AD9093A(unk_0xFF34D923BFB5E9FB(iParam0), 0);
}

int func_197(int iParam0)
{
	int iVar0;
	
	if (unk_0xE6226327EBCC990E() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_191(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_198(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x045E73D0141F51B4(iParam0) > func_187(unk_0x1788E93557766241()))
		{
			iParam0 = -func_187(unk_0x1788E93557766241());
		}
	}
	if (func_199(8000, 0, 0) > 0)
	{
		if (func_199(8000, 0, 0) < (iParam0 + func_187(unk_0x1788E93557766241())))
		{
			iParam0 = (func_199(8000, 0, 0) - func_187(unk_0x1788E93557766241()));
		}
	}
	return iParam0;
}

int func_199(int iParam0, bool bParam1, int iParam2)
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
	return Global_271370[iParam0];
}

int func_200()
{
	return 1;
}

int func_201(var uParam0)
{
	if (unk_0x8CD18E96F1984EE6(uParam0))
	{
		return 1;
	}
	else if (unk_0x9BA82E09A986BA4B(uParam0, "") || unk_0x9BA82E09A986BA4B(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_202(int iParam0)
{
	return Global_2414327[iParam0 /*255*/].f_114 == 2;
}

bool func_203(int iParam0)
{
	return Global_2414327[iParam0 /*255*/].f_114 == 7;
}

void func_204()
{
	Global_2436519 = 1;
}

void func_205(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_212())
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
			if (iParam1 > 0)
			{
				func_206(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_206(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_206(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_212())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0xC9345B47FCA589CF(func_23()) || unk_0x4E4D77A008D3DA63())
		{
			Global_2538376 = 1;
			return 0;
		}
		if (Global_2436286)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2538377 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2537915[iVar1 /*69*/].f_2 == 0)
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
	if (bVar0 || unk_0xC9C87AEBA01C419B(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0x625C87495B033820(iVar3))
		{
			*uParam0 = func_211(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2537915[*uParam0 /*69*/].f_62 = 1;
				}
			}
			Global_2538373 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2538375 = 1;
			Global_2538378 = iParam4;
			Global_2538380 = iParam3;
			Global_2538381 = 1;
			Global_2538379 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2538378 = iParam4;
			Global_2538380 = iParam3;
			Global_2538381 = 1;
			Global_2538379 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_210(1, iParam4);
			Global_2538375 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_207(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_207(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xD0E2BFCE93AE3ABD(&(Global_2414327[unk_0x1788E93557766241() /*255*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_208(iParam0);
	}
}

void func_208(int iParam0)
{
	bool bVar0;
	struct<69> Var1;
	
	bVar0 = false;
	if (!func_212())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_209(iParam0))
		{
			if (!bVar0)
			{
				unk_0xBDF871285913783C();
			}
		}
		else if (!bVar0)
		{
			unk_0xE4B5006C2633FD81(Global_2537915[iParam0 /*69*/]);
		}
		Var1 = 2147483647;
		Global_2537915[iParam0 /*69*/] = { Var1 };
	}
}

int func_209(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2537915[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_210(int iParam0, var uParam1)
{
	Global_2437461 = uParam1;
	Global_2437460 = iParam0;
}

int func_211(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2537915[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_212())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2537915[iVar0 /*69*/].f_2 = 1;
			Global_2537915[iVar0 /*69*/].f_1 = uParam5;
			Global_2537915[iVar0 /*69*/].f_3 = uParam1;
			Global_2537915[iVar0 /*69*/].f_4 = uParam2;
			Global_2537915[iVar0 /*69*/].f_7 = uParam3;
			Global_2537915[iVar0 /*69*/].f_5 = 0;
			Global_2537915[iVar0 /*69*/] = iParam0;
			Global_2537915[iVar0 /*69*/].f_6 = iParam4;
			Global_2537915[iVar0 /*69*/].f_65 = uParam8;
			Global_2537915[iVar0 /*69*/].f_64 = uParam7;
			Global_2537915[iVar0 /*69*/].f_68 = 0;
			Global_2538373 = 0;
			if (bParam6)
			{
				Global_2537915[iVar0 /*69*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_212()
{
	if (unk_0xF6BAF9F0C2863FFE())
	{
		return 1;
	}
	return 0;
}

void func_213(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2446992.f_269 = iParam0;
		if (iParam1 > Global_262145.f_4932)
		{
			iParam1 = Global_262145.f_4932;
		}
		Global_2446992.f_270 = iParam1;
		Global_2446992.f_271 = 0;
	}
}

void func_214(var uParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	*uParam0 = 0;
	*uParam1 = 0;
	if (Local_2158[unk_0x044A481E863E2F6B() /*7*/].f_3 >= func_228() || func_227())
	{
		fVar0 = func_226();
		fVar1 = func_225();
		iVar2 = func_224();
		iVar3 = func_223();
		iVar4 = Local_2158[unk_0x044A481E863E2F6B() /*7*/].f_3;
		iVar5 = 0;
		iVar6 = 0;
		iVar7 = 0;
		iVar8 = 0;
		if (func_268(0))
		{
			iVar5 = func_222();
			iVar6 = func_221();
		}
		else
		{
			func_219(1);
		}
		if (iVar4 > func_218())
		{
			iVar4 = func_218();
		}
		iVar9 = unk_0xF34EE736CF047844(((unk_0xBBDA792448DB5A89((Local_106.f_2 - iLocal_102)) / 60f) / 1000f));
		if (iVar9 > Global_262145.f_9088)
		{
			iVar9 = Global_262145.f_9088;
		}
		else if (iVar9 < 1)
		{
			iVar9 = 1;
		}
		iVar7 = (func_217() * iVar9);
		iVar8 = (func_216() * iVar9);
		*uParam0 = func_215(unk_0xF2DB717A73826179(((IntToFloat(((iVar2 + unk_0xF34EE736CF047844((IntToFloat(iVar4) * fVar0))) + iVar5)) * Global_262145.f_9089) + IntToFloat(iVar7))), 50, 0);
		*uParam1 = func_215(unk_0xF2DB717A73826179(((IntToFloat(((iVar3 + unk_0xF34EE736CF047844((IntToFloat(iVar4) * fVar1))) + iVar6)) * Global_262145.f_9090) + IntToFloat(iVar8))), 50, 0);
	}
	else
	{
		func_219(0);
	}
}

int func_215(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (iParam0 / iParam1);
	iVar0 = (iVar0 * iParam1);
	iVar1 = (iVar0 + iParam1);
	iVar2 = (iParam0 - iVar0);
	iVar3 = (iVar1 - iParam0);
	if (iVar2 >= iVar3)
	{
		if (iParam2 == 1)
		{
		}
		return iVar1;
	}
	if (iParam2 == 1)
	{
	}
	return iVar0;
}

int func_216()
{
	return Global_262145.f_8633;
}

int func_217()
{
	return Global_262145.f_8632;
}

int func_218()
{
	return Global_262145.f_9121;
}

void func_219(bool bParam0)
{
	if (bParam0)
	{
		if (func_220(1))
		{
			unk_0xD0E2BFCE93AE3ABD(&Global_1573757, 1);
		}
	}
	else if (func_220(2))
	{
		unk_0xD0E2BFCE93AE3ABD(&Global_1573757, 2);
	}
}

int func_220(int iParam0)
{
	var uVar0;
	
	uVar0 = func_64(2499, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0x889D01384B54BCE3(uVar0, 0) && unk_0x889D01384B54BCE3(iVar0, 1)) && unk_0x889D01384B54BCE3(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0x889D01384B54BCE3(iVar0, 3) && unk_0x889D01384B54BCE3(iVar0, 4)) && unk_0x889D01384B54BCE3(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0x889D01384B54BCE3(iVar0, 6) && unk_0x889D01384B54BCE3(iVar0, 7)) && unk_0x889D01384B54BCE3(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0x889D01384B54BCE3(iVar0, 9) && unk_0x889D01384B54BCE3(iVar0, 10)) && unk_0x889D01384B54BCE3(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_221()
{
	return Global_262145.f_9120;
}

int func_222()
{
	return Global_262145.f_9119;
}

var func_223()
{
	return Global_262145.f_8635;
}

var func_224()
{
	return Global_262145.f_8634;
}

var func_225()
{
	return Global_262145.f_9118;
}

var func_226()
{
	return Global_262145.f_9117;
}

int func_227()
{
	if ((func_268(0) || func_268(1)) || func_268(2))
	{
		return 1;
	}
	return 0;
}

int func_228()
{
	return Global_262145.f_8641;
}

void func_229()
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	
	if (!unk_0x889D01384B54BCE3(Local_2158[unk_0x044A481E863E2F6B() /*7*/].f_1, 1) && (func_235() || unk_0x889D01384B54BCE3(Local_106.f_1, 0)))
	{
		func_234();
		if (!unk_0x889D01384B54BCE3(Local_106.f_1, 0))
		{
			if (func_269(0))
			{
				uVar1 = Local_2158[unk_0x044A481E863E2F6B() /*7*/].f_3;
				func_233(&iVar0, uVar1);
				if (func_268(0))
				{
					func_232(72, iVar0, "AMBC_WIN", "AMCH_WIN", 1, 15000, -1082130432, 2);
				}
				else
				{
					uVar2 = unk_0xCADBCF2AA9B38F40(Local_106.f_4[0]);
					if (unk_0x0AFA8C49D2EED33A(uVar2))
					{
						if (func_268(1))
						{
							func_232(72, iVar0, "AMBC_2ND", "AMCH_OVER", 1, 15000, -1082130432, 2);
						}
						else if (func_268(2))
						{
							func_232(72, iVar0, "AMBC_3RD", "AMCH_OVER", 1, 15000, -1082130432, 2);
						}
						else
						{
							iVar3 = unk_0xCE0E12AD191025E5(iVar2);
							uVar1 = Local_2158[Local_106.f_4[0] /*7*/].f_3;
							func_233(&iVar0, uVar1);
							func_231(77, iVar0, "AMBC_LOSE", unk_0xF3E5891C26514A74(iVar3), "AMPP_LOSER", 1, 15000, 2);
						}
					}
				}
			}
			else
			{
				func_26(65, "CPC_OVER", "AMCH_NOWIN", 1, 15000, 2);
			}
		}
		else
		{
			func_25("", "", 1);
		}
		unk_0xD0E2BFCE93AE3ABD(&(Local_2158[unk_0x044A481E863E2F6B() /*7*/].f_1), 1);
		func_230(144);
	}
}

void func_230(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

int func_231(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	struct<70> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_69 = -1;
	func_33(iParam0, &Var0, iParam1, sParam2, sParam4);
	StringCopy(&(Var0.f_23), sParam3, 64);
	Var0.f_65 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_66 = iParam7;
	return func_27(&Var0);
}

int func_232(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<70> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_65 = 1;
	Var0.f_66 = 2;
	Var0.f_69 = -1;
	func_33(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_65 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_66 = iParam7;
	return func_27(&Var0);
}

void func_233(int iParam0, var uParam1)
{
	*iParam0 = uParam1;
}

void func_234()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2422491.f_2136[iVar0 /*70*/].f_2 != 0)
		{
			Global_2422491.f_2136[iVar0 /*70*/].f_2 = 5;
			unk_0xD0E2BFCE93AE3ABD(&(Global_2422491.f_2136[iVar0 /*70*/].f_63), 0);
		}
		iVar0++;
	}
}

bool func_235()
{
	return unk_0x889D01384B54BCE3(Global_1573734.f_1, 25);
}

int func_236(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (*uParam0 > 0 && !func_241())
	{
		func_240();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_20(&(uParam0->f_3)))
			{
				func_2(&(uParam0->f_3), 0, 0);
			}
			else if (func_1(&(uParam0->f_3), 1000, 0))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 25);
				if (bParam1)
				{
					unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4402), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_239(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_20(&(uParam0->f_5)))
			{
				if (func_1(&(uParam0->f_5), 3000, 0))
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
				func_238();
				func_239(uParam0, 2);
			}
			break;
		
		case 2:
			func_238();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_237("AMEV_LBD_HELP"))
				{
					unk_0xFD1E0AEC770DAF2E(1);
				}
				func_239(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				unk_0x29DB79DD4D939B38(&(Global_2446992.f_4402), 1);
				func_239(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0x29DB79DD4D939B38(&(Global_2446992.f_4402), 1);
			return 1;
	}
	return 0;
}

bool func_237(char* sParam0)
{
	unk_0x38DB30583B2DE025(sParam0);
	return unk_0x2DB019D515966DF9(0);
}

void func_238()
{
	if (unk_0x889D01384B54BCE3(Global_2446992.f_4402, 0))
	{
		if (((((!unk_0xF1F4C42EF94F5FDD() && !unk_0x889D01384B54BCE3(Global_2446992.f_734, 2)) && func_10(unk_0x1788E93557766241(), 1, 1)) && !Global_67066) && !Global_51940) && !unk_0xF4C685E933068D23())
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4402), 1);
			func_320("AMEV_LBD_HELP", -1);
			func_319(1);
			unk_0x29DB79DD4D939B38(&(Global_2446992.f_4402), 0);
		}
	}
}

void func_239(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_240()
{
	Global_2436520 = 1;
}

bool func_241()
{
	return Global_2422491.f_2136[0 /*70*/].f_1 != 0;
}

void func_242()
{
	int iVar0[3];
	int iVar4;
	var uVar5[3];
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	var uVar15;
	int iVar16;
	int iVar17;
	var uVar18;
	
	if (Local_106.f_4[0] > -1)
	{
		iVar13 = 0;
		iVar11 = 0;
		while (iVar11 < 3)
		{
			iVar0[iVar11] = func_34();
			iVar11++;
		}
		iVar11 = 0;
		while (iVar11 < 3)
		{
			if (Local_106.f_4[iVar11] > -1)
			{
				uVar15 = unk_0xCADBCF2AA9B38F40(Local_106.f_4[iVar11]);
				if (unk_0x0AFA8C49D2EED33A(uVar15))
				{
					iVar4 = unk_0xCE0E12AD191025E5(iVar15);
					if (func_10(iVar4, 0, 1))
					{
						if (!func_134(iVar4, 0))
						{
							iVar0[iVar11] = iVar4;
							uVar5[iVar11] = Local_2158[Local_106.f_4[iVar11] /*7*/].f_3;
						}
					}
				}
			}
			iVar11++;
		}
		if (func_263(unk_0x1788E93557766241()))
		{
			iVar16 = func_260();
			iVar17 = unk_0x5D6FBED3ADADE26A(iVar16);
			if (unk_0x38FA37FE3518BA38(iVar17))
			{
				uVar18 = unk_0xB911B2B2BBDF3CCC(iVar17);
				if (unk_0x0AFA8C49D2EED33A(uVar18))
				{
					iVar12 = iVar18;
				}
			}
		}
		else
		{
			iVar12 = unk_0x044A481E863E2F6B();
		}
		iVar9 = func_316(0, Local_2158[iVar12 /*7*/].f_3);
		iVar10 = func_316(0, (func_15() - func_318(&(Local_106.f_39), 0, 0)));
		func_259(iVar10);
		if (iVar10 > 30000)
		{
			iVar14 = 1;
		}
		else
		{
			iVar14 = 6;
		}
		func_243(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar9, iVar10, &iVar13, iVar14, func_256());
	}
}

void func_243(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, char* sParam10)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_253(0) == 0)
	{
		return;
	}
	func_252();
	iVar1 = 0;
	if (((Global_2436194[0] != iParam0 || Global_2436194[1] != iParam1) || Global_2436194[2] != iParam2) || *iParam8)
	{
		iVar1 = 1;
	}
	Global_2436194[0] = iParam0;
	Global_2436194[1] = iParam1;
	Global_2436194[2] = iParam2;
	Global_2436194[3] = 0;
	Global_2436194[4] = 0;
	if (Global_2436194[0] != func_34())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xF3E5891C26514A74(Global_2436194[0]);
			Global_2436200[0 /*16*/] = { func_251(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_248(iParam3, &(Global_2436200[0 /*16*/]), -1, 109, 7, 1, "HUD_CASH", 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0);
		}
	}
	if (Global_2436194[1] != func_34())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xF3E5891C26514A74(Global_2436194[1]);
			Global_2436200[1 /*16*/] = { func_251(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_248(iParam4, &(Global_2436200[1 /*16*/]), -1, 108, 6, 1, "HUD_CASH", 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0);
		}
	}
	if (Global_2436194[2] != func_34())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xF3E5891C26514A74(Global_2436194[2]);
			Global_2436200[2 /*16*/] = { func_251(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_248(iParam5, &(Global_2436200[2 /*16*/]), -1, 107, 5, 1, "HUD_CASH", 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0);
		}
	}
	if (!func_334(unk_0x1788E93557766241()))
	{
		func_248(iParam6, "TIM_DAMAGE", -1, 1, 4, 0, "HUD_CASH", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_201(sParam10))
	{
		sVar2 = sParam10;
	}
	func_245(iParam7, sVar2, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0);
	*iParam8 = 0;
	func_244();
}

void func_244()
{
	Global_1328903.f_941 = 1;
}

void func_245(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_247(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328903.f_1 = 1;
		func_246(7, iVar0);
		Global_1328903.f_3911[iVar0] = uParam0;
		StringCopy(&(Global_1328903.f_3911.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1328903.f_3911.f_172[iVar0] = iParam2;
		Global_1328903.f_3911.f_216[iVar0] = iParam3;
		Global_1328903.f_3911.f_183[iVar0] = iParam4;
		Global_1328903.f_3911.f_194[iVar0] = iParam5;
		Global_1328903.f_3911.f_249[iVar0] = iParam6;
		Global_1328903.f_3911.f_260[iVar0] = iParam7;
		Global_1328903.f_3911.f_205[iVar0] = iParam8;
		Global_1328903.f_3911.f_314[iVar0] = iParam9;
		Global_1328903.f_3911.f_325[iVar0] = iParam10;
		Global_1328903.f_3911.f_357[iVar0] = iParam11;
		Global_1328903.f_3911.f_238[iVar0] = iParam12;
		Global_1328903.f_3911.f_271[iVar0] = iParam13;
	}
}

void func_246(int iParam0, int iParam1)
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_1328903.f_4506[iParam0]), iParam1);
}

bool func_247(int iParam0, int iParam1)
{
	return unk_0x889D01384B54BCE3(Global_1328903.f_4506[iParam0], iParam1);
}

void func_248(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
			if (func_247(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328903.f_1 = 1;
		func_246(6, iVar0);
		Global_1328903.f_3370[iVar0] = iParam0;
		StringCopy(&(Global_1328903.f_3370.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1328903.f_3370.f_183[iVar0] = iParam3;
		Global_1328903.f_3370.f_172[iVar0] = iParam2;
		Global_1328903.f_3370.f_260[iVar0] = iParam4;
		Global_1328903.f_3370.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1328903.f_3370.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1328903.f_3370.f_443[iVar0] = iParam7;
		Global_1328903.f_3370.f_454[iVar0] = iParam8;
		Global_1328903.f_3370.f_497[iVar0] = iParam9;
		Global_1328903.f_3370.f_508[iVar0] = iParam10;
		Global_1328903.f_3370.f_205[iVar0] = iParam11;
		Global_1328903.f_3370.f_216[iVar0] = iParam12;
		Global_1328903.f_3370.f_227[iVar0] = iParam13;
		Global_1328903.f_3370.f_238[iVar0] = iParam14;
		Global_1328903.f_3370.f_249[iVar0] = iParam15;
		Global_1328903.f_3370.f_519[iVar0] = iParam16;
		Global_1328903.f_3370.f_530[iVar0] = iParam17;
		if (iParam15 == 4 && func_250())
		{
			Global_1328903.f_941 = 1;
		}
		if (unk_0xF6BAF9F0C2863FFE())
		{
			iVar2 = 0;
			unk_0x8C31DEE1FBBA2653(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1328903.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1328903.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1328903.f_941 = 1;
			}
			if (func_249())
			{
				Global_1328903.f_945 = 1;
			}
		}
	}
}

int func_249()
{
	int iVar0;
	var uVar1;
	
	if (unk_0xF6BAF9F0C2863FFE())
	{
		unk_0x8C31DEE1FBBA2653(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_250()
{
	if ((unk_0x9BB5B38BEC8FE00F() == 8 || unk_0x9BB5B38BEC8FE00F() == 9) || unk_0x9BB5B38BEC8FE00F() == 10)
	{
		return 1;
	}
	return 0;
}

struct<16> func_251(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, unk_0x69C910B9EE514763("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0x69C910B9EE514763("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0x69C910B9EE514763("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0x69C910B9EE514763("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0x69C910B9EE514763("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_252()
{
	unk_0x8A5A9834DB717F2D(8);
	unk_0x8A5A9834DB717F2D(9);
	unk_0x8A5A9834DB717F2D(6);
	unk_0x8A5A9834DB717F2D(7);
	Global_2436523 = 1;
}

int func_253(bool bParam0)
{
	if (func_255())
	{
		return 0;
	}
	if (func_254())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_10(unk_0x1788E93557766241(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_254()
{
	return Global_1583725[unk_0x1788E93557766241() /*334*/].f_173 != 0;
}

bool func_255()
{
	return unk_0x889D01384B54BCE3(Global_2359301, 12);
}

char* func_256()
{
	return "HUD_COUNTDOWN";
	switch (func_258(unk_0x1788E93557766241()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_257())
			{
				case 0:
					return "AET_CHALL_LJ";
				
				case 1:
					return "AET_CHALL_LS";
				
				case 2:
					return "AET_CHALL_HS";
				
				case 3:
					return "AET_CHALL_LST";
				
				case 4:
					return "AET_CHALL_LW";
				
				case 5:
					return "AET_CHALL_NC";
				
				case 6:
					return "AET_CHALL_LP";
				
				case 7:
					return "AET_CHALL_VS";
				
				case 8:
					return "AET_CHALL_NM";
				
				case 9:
					return "AET_CHALL_RD";
				
				case 10:
					return "AET_CHALL_LF";
				
				case 11:
					return "AET_CHALL_LFL";
				
				case 12:
					return "AET_CHALL_LFI";
				
				case 13:
					return "AET_CHALL_LB";
				
				case 14:
					return "AET_CHALL_MB";
				
				case 15:
					return "AET_CHALL_HSH";
				
				case 16:
					return "AET_CHALL_DB";
				
				case 17:
					return "AET_CHALL_ML";
				
				case 18:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED";
		
		case 138:
			return "AET_PARCEL";
		
		case 139:
			return "AET_PROPERTY";
		
		case 140:
			return "AET_DDROP";
		
		case 141:
			return "AET_KCASTLE";
		
		case 144:
			return "AET_BLAST";
		
		case 129:
			return "AET_UWARF";
		
		case 146:
			return "AET_BEAST";
	}
	return "";
}

int func_257()
{
	if (func_258(unk_0x1788E93557766241()) == 133)
	{
		return Global_2446992.f_4620;
	}
	return -1;
}

int func_258(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1602607[iVar0 /*12*/];
	}
	return -1;
}

void func_259(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x0C380BB05B91042D())
	{
		if (unk_0x889D01384B54BCE3(Global_2446992.f_4536, 0))
		{
			if (!unk_0x06771AF7795B3ECF(&(Global_2446992.f_4538)))
			{
				unk_0x435923F2389CD0AD(1);
				unk_0x495459882382D113("FM_COUNTDOWN_30S_FIRA");
				unk_0x124843CE93F39C27("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0x5987D1942D40E165(&(Global_2446992.f_4538));
				unk_0x08E9BC7825B63619("DisableFlightMusic", 0);
				unk_0x08E9BC7825B63619("WantedMusicDisabled", 0);
				unk_0x08E9BC7825B63619("AllowScoreAndRadio", 0);
			}
			if (Global_2446992.f_4546 > -1)
			{
				unk_0x0D992EF9B9F0C8E3(Global_2446992.f_4546);
				Global_2446992.f_4546 = -1;
			}
			Global_2446992.f_4536 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0x889D01384B54BCE3(Global_2446992.f_4536, 0))
		{
			if (unk_0x889D01384B54BCE3(Global_2446992.f_4536, 4))
			{
				if (!unk_0x889D01384B54BCE3(Global_2446992.f_4536, 2))
				{
					if (unk_0x3E090BAC5411166D())
					{
						if ((!unk_0x9BA82E09A986BA4B(unk_0x0D1B4E500469970E(unk_0xD114A40C0BC7A580()), "OFF") && unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0)) && !unk_0x06771AF7795B3ECF(&(Global_2446992.f_4538)))
						{
							StringCopy(&(Global_2446992.f_4538), "", 32);
							unk_0x495459882382D113("FM_COUNTDOWN_30S_FIRA");
							unk_0x124843CE93F39C27("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x08E9BC7825B63619("DisableFlightMusic", 0);
							unk_0x08E9BC7825B63619("WantedMusicDisabled", 0);
							unk_0x08E9BC7825B63619("AllowScoreAndRadio", 0);
							unk_0x435923F2389CD0AD(1);
							unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4536), 2);
						}
					}
				}
				else if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0) && unk_0x889D01384B54BCE3(Global_2446992.f_4536, 5))
				{
					unk_0x5987D1942D40E165("OFF");
				}
			}
			else if (!unk_0x889D01384B54BCE3(Global_2446992.f_4536, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x495459882382D113("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x495459882382D113("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x495459882382D113("FM_COUNTDOWN_30S");
				}
				unk_0x3EF2F05E6EA65602("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4536), 1);
			}
			else if (!unk_0x889D01384B54BCE3(Global_2446992.f_4536, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x6FA0C7CE0A9D9002() != 0)
					{
						if (unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
						{
							StringCopy(&(Global_2446992.f_4538), unk_0x9733E8730500546E(), 32);
							unk_0x5987D1942D40E165("OFF");
						}
						unk_0x435923F2389CD0AD(1);
						unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4536), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0x889D01384B54BCE3(Global_2446992.f_4536, 3))
				{
					Global_2446992.f_4546 = unk_0x74F076F396F8C361();
					unk_0xC2E1777941B4536E(Global_2446992.f_4546, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4536), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0x889D01384B54BCE3(Global_2446992.f_4536, 0))
			{
				Global_2446992.f_4536 = 0;
				Global_2446992.f_4546 = -1;
				unk_0x67583D67393F934F("FM_COUNTDOWN_30S_KILL");
				unk_0x435923F2389CD0AD(0);
				unk_0x495459882382D113("FM_PRE_COUNTDOWN_30S");
				unk_0x08E9BC7825B63619("DisableFlightMusic", 1);
				unk_0x08E9BC7825B63619("WantedMusicDisabled", 1);
				unk_0x08E9BC7825B63619("AllowScoreAndRadio", 1);
				unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4536), 0);
				if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
				{
					unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4536), 2);
					unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4536), 5);
				}
				else
				{
					unk_0x29DB79DD4D939B38(&(Global_2446992.f_4536), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0x889D01384B54BCE3(Global_2446992.f_4536, 0))
		{
			Global_2446992.f_4536 = 0;
			Global_2446992.f_4546 = -1;
			unk_0x67583D67393F934F("FM_COUNTDOWN_30S_KILL");
			unk_0x435923F2389CD0AD(0);
			unk_0x495459882382D113("FM_PRE_COUNTDOWN_30S");
			unk_0x08E9BC7825B63619("DisableFlightMusic", 1);
			unk_0x08E9BC7825B63619("WantedMusicDisabled", 1);
			unk_0x08E9BC7825B63619("AllowScoreAndRadio", 1);
			unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4536), 0);
			if (!unk_0x202EF5D8203705EF(unk_0xA16EC202D9D35357(), 0))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4536), 2);
			}
			else
			{
				unk_0x29DB79DD4D939B38(&(Global_2446992.f_4536), 2);
			}
		}
	}
}

var func_260()
{
	if (unk_0x538DF9E5B1DF01EB(func_262()))
	{
		return func_262();
	}
	return func_261();
}

var func_261()
{
	return Global_2359301.f_2;
}

var func_262()
{
	return Global_2359301.f_3;
}

int func_263(int iParam0)
{
	if (func_134(iParam0, 0))
	{
		return 1;
	}
	if (func_264())
	{
		if (iParam0 == unk_0x1788E93557766241())
		{
			return 1;
		}
	}
	if (unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_264()
{
	return unk_0x889D01384B54BCE3(Global_2359301, 3);
}

void func_265()
{
	int iVar0;
	struct<46> Var1;
	int iVar47;
	var uVar48;
	var uVar49;
	
	Var1 = -1;
	Var1.f_21 = -1082130432;
	Var1.f_22 = 3;
	Var1.f_45 = -1;
	iVar0 = 0;
	while (iVar0 < unk_0x3F202553F90D4442())
	{
		Local_159.f_526[iVar0 /*46*/] = { Var1 };
		Local_159.f_526[iVar0 /*46*/].f_1 = func_34();
		if (Local_106.f_4[iVar0] > -1)
		{
			uVar48 = unk_0xCADBCF2AA9B38F40(Local_106.f_4[iVar0]);
			if (unk_0x0AFA8C49D2EED33A(uVar48))
			{
				iVar47 = unk_0xCE0E12AD191025E5(iVar48);
				if (!func_134(iVar47, 0))
				{
					Local_159.f_526[iVar0 /*46*/] = Local_106.f_4[iVar0];
					Local_159.f_526[iVar0 /*46*/].f_1 = iVar47;
					uVar49 = Local_2158[Local_106.f_4[iVar0] /*7*/].f_3;
					Local_159.f_526[iVar0 /*46*/].f_8 = uVar49;
					Local_159.f_526[iVar0 /*46*/].f_29 = -1;
					Local_159.f_1.f_107 = 9;
				}
			}
		}
		iVar0++;
	}
}

void func_266()
{
	if (func_268(0))
	{
		if (!unk_0x889D01384B54BCE3(iLocal_92, 7))
		{
			unk_0xC2E1777941B4536E(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			unk_0xD0E2BFCE93AE3ABD(&iLocal_92, 7);
		}
	}
	else if (unk_0x889D01384B54BCE3(iLocal_92, 7))
	{
		unk_0xC2E1777941B4536E(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		unk_0x29DB79DD4D939B38(&iLocal_92, 7);
	}
}

void func_267()
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_1625), 19);
}

int func_268(int iParam0)
{
	if (iParam0 >= 0)
	{
		if (Local_106.f_4[iParam0] == unk_0x044A481E863E2F6B() && Local_2158[unk_0x044A481E863E2F6B() /*7*/].f_3 > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_269(int iParam0)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_106.f_4[iParam0];
		if (iVar0 >= 0)
		{
			if (func_270(Local_2158[iVar0 /*7*/].f_3, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_270(int iParam0, int iParam1)
{
	return iParam0 > iParam1;
}

void func_271()
{
	int iVar0;
	
	if (!func_334(unk_0x1788E93557766241()) && !func_134(unk_0x1788E93557766241(), 0))
	{
		iVar0 = func_286();
		if (iVar0 != Local_2158[unk_0x044A481E863E2F6B() /*7*/].f_3)
		{
			if (iLocal_102 == 0)
			{
				iLocal_102 = unk_0x519586565311459B();
				if (Local_2383.f_11 == 0)
				{
					Local_2383.f_11 = unk_0x5C7391B560C251C7();
				}
			}
			if (iVar0 > iLocal_91)
			{
				iLocal_91 = iVar0;
				Local_2158[unk_0x044A481E863E2F6B() /*7*/].f_3 = iVar0;
				func_272();
			}
		}
	}
}

void func_272()
{
	if (!unk_0x889D01384B54BCE3(Local_2158[unk_0x044A481E863E2F6B() /*7*/].f_1, 2))
	{
		unk_0xD0E2BFCE93AE3ABD(&(Local_2158[unk_0x044A481E863E2F6B() /*7*/].f_1), 2);
		func_273(1);
	}
}

void func_273(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_285())
		{
			func_277(0);
			func_276();
		}
		if (func_275(0))
		{
			uVar0 = func_64(2445, -1, 0);
			unk_0x29DB79DD4D939B38(&uVar0, 0);
			func_276();
		}
		if (func_275(func_274(func_258(unk_0x1788E93557766241()))))
		{
			uVar0 = func_64(2445, -1, 0);
			unk_0x29DB79DD4D939B38(&uVar0, func_274(func_258(unk_0x1788E93557766241())));
			func_276();
		}
		if (func_137())
		{
			func_276();
		}
		if (func_258(unk_0x1788E93557766241()) > -1)
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1), 7);
		}
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1), 7);
	}
}

int func_274(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			return 10;
		
		case 132:
			return 1;
		
		case 133:
			return 2;
		
		case 136:
			return 11;
		
		case 138:
			return 5;
		
		case 139:
			return 6;
		
		case 129:
			return 8;
		
		case 140:
			return 4;
		
		case 141:
			return 9;
		
		case 144:
			return 3;
		
		case 146:
			return 7;
		
		default:
	}
	return 19;
}

bool func_275(int iParam0)
{
	var uVar0;
	
	uVar0 = func_64(2445, -1, 0);
	return unk_0x889D01384B54BCE3(uVar0, iParam0);
}

void func_276()
{
	if (func_137())
	{
		Global_2422491.f_613.f_16 = 1;
	}
}

void func_277(int iParam0)
{
	if (func_285())
	{
		if (iParam0 == 1)
		{
			if (Global_2446992.f_4236 == -1)
			{
				Global_2446992.f_4236 = 60000;
			}
			func_284(&(Global_2446992.f_4234), 0, 0);
			if (Global_2446992.f_4239 == -1)
			{
				Global_2446992.f_4239 = 10000;
			}
			func_284(&(Global_2446992.f_4237), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_283();
		}
		if ((!unk_0x7A75BEF6DA1EDF3D() && !func_282()) && !func_278(unk_0x1788E93557766241()))
		{
			Global_973956 = 0;
		}
		Global_1602607[unk_0x1788E93557766241() /*12*/].f_7 = 0;
	}
}

int func_278(int iParam0)
{
	if (func_279(iParam0, 1))
	{
		if (Global_1583725[iParam0 /*334*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_279(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_280(iParam0))
		{
			return 1;
		}
	}
	if (Global_1583725[iParam0 /*334*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_280(int iParam0)
{
	return func_281(iParam0);
}

bool func_281(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_13.f_1, 0);
}

bool func_282()
{
	return Global_2428577.f_711;
}

void func_283()
{
	if (unk_0x1DAD7CE53BEE7710())
	{
		if (!func_285())
		{
			if (func_10(unk_0x1788E93557766241(), 1, 1))
			{
				unk_0x3F376CC691816BEF(unk_0xA16EC202D9D35357(), 1);
				unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 342, 0);
				unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 122, 0);
			}
			unk_0xCCB05A9C3FAB04CA(unk_0x1788E93557766241(), 1f);
			unk_0x7622D42AC5B41A4A(0);
			unk_0x5687AEB601657A7E(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				unk_0xAD7D800044E4059F(0);
			}
		}
		else
		{
			if (func_10(unk_0x1788E93557766241(), 1, 1))
			{
				unk_0x3F376CC691816BEF(unk_0xA16EC202D9D35357(), 0);
				unk_0xB4E8D4EA104CA059(unk_0xA16EC202D9D35357(), joaat("weapon_unarmed"), 1);
				unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 342, 1);
				unk_0xA1478EBA54DDE31B(unk_0xA16EC202D9D35357(), 122, 1);
				unk_0xCCB05A9C3FAB04CA(unk_0x1788E93557766241(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xAD7D800044E4059F(1);
				}
			}
			unk_0x7622D42AC5B41A4A(1);
			unk_0x5687AEB601657A7E(0);
		}
	}
}

void func_284(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1DAD7CE53BEE7710() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x519586565311459B();
		}
		else
		{
			*uParam0 = unk_0x4EAB1171B13C220B();
		}
	}
	else
	{
		*uParam0 = unk_0x09560C7DE2A384BD();
	}
	uParam0->f_1 = 1;
}

bool func_285()
{
	return Global_1312416;
}

int func_286()
{
	return iLocal_101;
}

void func_287()
{
	int iVar0;
	int iVar1;
	
	if (!func_334(unk_0x1788E93557766241()))
	{
		iVar0 = 0;
		while (iVar0 < unk_0x2C15B7979450724C(1))
		{
			iVar1 = unk_0x8B6CEAB2AD1BD1CD(1, iVar0);
			switch (iVar1)
			{
				case 179:
					func_288(iVar0);
					break;
			}
			iVar0++;
		}
	}
}

void func_288(int iParam0)
{
	struct<4> Var0;
	float fVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	float fVar19;
	int iVar20;
	int iVar21;
	var uVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	float fVar29;
	
	if (unk_0x6A4B863200ABAA44(1, iParam0, &Var0, 10))
	{
		if (unk_0x538DF9E5B1DF01EB(Var0.f_1))
		{
			if (unk_0xA34B85701D8A1FA8(Var0.f_1))
			{
				if (unk_0xA7CC89FF539E1376(Var0.f_1) == unk_0xA16EC202D9D35357())
				{
					if (unk_0x538DF9E5B1DF01EB(Var0.f_0))
					{
						if (Var0.f_0 != Var0.f_1)
						{
							if (unk_0x9FF5D51C24AD2308(Var0.f_0))
							{
								uVar11 = unk_0xF22EE5E4C0C2704B(Var0.f_0);
								if (!func_294(uVar11))
								{
									iVar12 = unk_0xA609E58449080951(uVar11);
									if (func_292(&iVar13, iVar12, func_293(iVar11)))
									{
										fVar10 = unk_0xBBDA792448DB5A89(iVar13);
									}
									if (fVar10 <= 0f)
									{
										fVar10 = unk_0xBBDA792448DB5A89(unk_0x5873C14A52D74236(iVar12));
									}
									fVar10 = (fVar10 * func_291());
									fVar19 = unk_0xBBDA792448DB5A89(Global_262145.f_9125);
									if (fVar10 > fVar19)
									{
										fVar10 = fVar19;
									}
								}
								else if (!unk_0x889D01384B54BCE3(iLocal_92, 6))
								{
									func_320("AMBC_PERS", 30000);
									func_319(0);
									unk_0xD0E2BFCE93AE3ABD(&iLocal_92, 6);
								}
							}
							else if (unk_0x15CE956C279F4825(Var0.f_0))
							{
							}
							else if (unk_0xA34B85701D8A1FA8(Var0.f_0))
							{
								iVar20 = unk_0xA7CC89FF539E1376(Var0.f_0);
								if (unk_0x2303B9FE7CF81971(iVar20))
								{
									iVar21 = unk_0x5D6FBED3ADADE26A(iVar20);
									if (unk_0x38FA37FE3518BA38(iVar21))
									{
										uVar22 = unk_0xB911B2B2BBDF3CCC(iVar21);
										if (unk_0x0AFA8C49D2EED33A(uVar22))
										{
											iVar23 = iVar22;
											if ((iVar23 > -1 && iVar23 < 32) && iVar23 != unk_0x044A481E863E2F6B())
											{
												fVar10 = unk_0xBBDA792448DB5A89(Local_2158[iVar23 /*7*/].f_6);
												fVar10 = (fVar10 * func_290());
											}
										}
									}
								}
							}
							else
							{
								return;
							}
							if (fVar10 > 0f)
							{
								if (unk_0x9FF5D51C24AD2308(Var0.f_0))
								{
									iVar24 = unk_0xF2DB717A73826179(((fVar10 * Global_262145.f_8863) * Var0.f_2));
									if (iVar24 < Global_262145.f_9152)
									{
										iVar24 = Global_262145.f_9152;
									}
									if (iVar24 > Global_262145.f_9153)
									{
										iVar24 = Global_262145.f_9153;
									}
								}
								else if (unk_0x6360D2FA3AD62AD1(Var0.f_0) > 0)
								{
									fVar25 = unk_0xBBDA792448DB5A89(unk_0xB1EEA6D557831363(Var0.f_0));
									fVar26 = func_289(Var0.f_2, fVar25);
									fVar27 = (fVar26 / fVar25);
									fVar28 = (fVar27 * fVar10);
									iVar24 = unk_0xF2DB717A73826179((Global_262145.f_9131 * fVar28));
									if (iVar24 < Global_262145.f_9155)
									{
										iVar24 = Global_262145.f_9155;
									}
									if (iVar24 > Global_262145.f_9156)
									{
										iVar24 = Global_262145.f_9156;
									}
									if (fVar26 == fVar25)
									{
										iVar24 = 0;
									}
								}
								else
								{
									iVar24 = 0;
								}
								unk_0xC2E1777941B4536E(-1, "Criminal_Damage_Low_Value", "GTAO_FM_Events_Soundset", 0);
								if (Var0.f_3)
								{
									if (unk_0x9FF5D51C24AD2308(Var0.f_0))
									{
										fVar29 = Global_262145.f_8864;
									}
									else
									{
										fVar29 = Global_262145.f_9132;
									}
									iVar24 = unk_0xF2DB717A73826179((fVar29 * fVar10));
									if (unk_0xA34B85701D8A1FA8(Var0.f_0))
									{
										unk_0xC2E1777941B4536E(-1, "Criminal_Damage_Kill_Player", "GTAO_FM_Events_Soundset", 0);
									}
									else
									{
										unk_0x3EF2F05E6EA65602("GTAO_FM_Events_Blade_Scene");
										unk_0xC2E1777941B4536E(-1, "Criminal_Damage_High_Value", "GTAO_FM_Events_Soundset", 0);
									}
								}
								if (iVar24 > 0)
								{
									iLocal_101 = (iLocal_101 + iVar24);
								}
							}
						}
					}
				}
			}
		}
	}
}

float func_289(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_290()
{
	return Global_262145.f_8862;
}

float func_291()
{
	return Global_262145.f_8861;
}

int func_292(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = unk_0x1DAD7CE53BEE7710();
	if (!unk_0xD3B644BC9C4BCCE4(iParam1))
	{
		if (iParam1 != 0)
		{
		}
		return 0;
	}
	iVar1 = -1;
	switch (iParam1)
	{
		case joaat("adder"):
			iVar1 = 1000000;
			break;
		
		case joaat("akuma"):
			iVar1 = 9000;
			break;
		
		case joaat("asea"):
			iVar1 = 12000;
			break;
		
		case joaat("asterope"):
			iVar1 = 26000;
			break;
		
		case joaat("bagger"):
			iVar1 = 16000;
			break;
		
		case joaat("baller"):
			iVar1 = 90000;
			break;
		
		case joaat("baller2"):
			iVar1 = 90000;
			break;
		
		case joaat("banshee"):
			iVar1 = 90000;
			break;
		
		case joaat("bati"):
			iVar1 = 10000;
			break;
		
		case joaat("bati2"):
			iVar1 = 10000;
			break;
		
		case joaat("bfinjection"):
			iVar1 = 16000;
			break;
		
		case joaat("bison"):
			iVar1 = 30000;
			break;
		
		case joaat("bison2"):
			iVar1 = 30000;
			break;
		
		case joaat("bison3"):
			iVar1 = 30000;
			break;
		
		case joaat("bjxl"):
			iVar1 = 27000;
			break;
		
		case joaat("blazer"):
			iVar1 = 8000;
			break;
		
		case joaat("blazer2"):
			iVar1 = 8000;
			break;
		
		case joaat("blista"):
			iVar1 = 16000;
			break;
		
		case joaat("bobcatxl"):
			iVar1 = 23000;
			break;
		
		case joaat("bodhi2"):
			iVar1 = 12000;
			break;
		
		case joaat("boxville"):
			iVar1 = 25000;
			break;
		
		case joaat("boxville2"):
			iVar1 = 25000;
			break;
		
		case joaat("boxville3"):
			iVar1 = 25000;
			break;
		
		case joaat("buccaneer"):
			iVar1 = 28000;
			break;
		
		case joaat("buffalo"):
			iVar1 = 35000;
			break;
		
		case joaat("buffalo2"):
			iVar1 = 96000;
			break;
		
		case joaat("bullet"):
			iVar1 = 150000;
			break;
		
		case joaat("burrito"):
			iVar1 = 13000;
			break;
		
		case joaat("burrito2"):
			iVar1 = 13000;
			break;
		
		case joaat("burrito3"):
			iVar1 = 13000;
			break;
		
		case joaat("burrito4"):
			iVar1 = 13000;
			break;
		
		case joaat("carbonizzare"):
			iVar1 = 195000;
			break;
		
		case joaat("carbonrs"):
			iVar1 = 40000;
			break;
		
		case joaat("cavalcade"):
			iVar1 = 60000;
			break;
		
		case joaat("cavalcade2"):
			iVar1 = 70000;
			break;
		
		case joaat("cheetah"):
			iVar1 = 650000;
			break;
		
		case joaat("cogcabrio"):
			iVar1 = 185000;
			break;
		
		case joaat("comet2"):
			iVar1 = 85000;
			break;
		
		case joaat("coquette"):
			iVar1 = 55000;
			break;
		
		case joaat("daemon"):
			iVar1 = 20000;
			break;
		
		case joaat("dilettante"):
			iVar1 = 25000;
			break;
		
		case joaat("dominator"):
			iVar1 = 35000;
			break;
		
		case joaat("double"):
			iVar1 = 12000;
			break;
		
		case joaat("dubsta"):
			iVar1 = 120000;
			break;
		
		case joaat("dubsta2"):
			iVar1 = 120000;
			break;
		
		case joaat("elegy2"):
			iVar1 = 92000;
			break;
		
		case joaat("emperor"):
			iVar1 = 8000;
			break;
		
		case joaat("emperor2"):
			iVar1 = 5000;
			break;
		
		case joaat("emperor3"):
			iVar1 = 5000;
			break;
		
		case joaat("entityxf"):
			iVar1 = 795000;
			break;
		
		case joaat("exemplar"):
			iVar1 = 205000;
			break;
		
		case joaat("f620"):
			iVar1 = 80000;
			break;
		
		case joaat("faggio2"):
			iVar1 = 5000;
			break;
		
		case joaat("felon"):
			iVar1 = 100000;
			break;
		
		case joaat("felon2"):
			iVar1 = 95000;
			break;
		
		case joaat("feltzer2"):
			iVar1 = 145000;
			break;
		
		case joaat("fq2"):
			iVar1 = 50000;
			break;
		
		case joaat("fugitive"):
			iVar1 = 24000;
			break;
		
		case joaat("fusilade"):
			iVar1 = 36000;
			break;
		
		case joaat("futo"):
			iVar1 = 9000;
			break;
		
		case joaat("gauntlet"):
			iVar1 = 32000;
			break;
		
		case joaat("gburrito"):
			iVar1 = 16000;
			break;
		
		case joaat("granger"):
			iVar1 = 35000;
			break;
		
		case joaat("gresley"):
			iVar1 = 29000;
			break;
		
		case joaat("habanero"):
			iVar1 = 42000;
			break;
		
		case joaat("hexer"):
			iVar1 = 15000;
			break;
		
		case joaat("hotknife"):
			iVar1 = 90000;
			break;
		
		case joaat("infernus"):
			iVar1 = 440000;
			break;
		
		case joaat("ingot"):
			iVar1 = 9000;
			break;
		
		case joaat("intruder"):
			iVar1 = 16000;
			break;
		
		case joaat("issi2"):
			iVar1 = 18000;
			break;
		
		case joaat("jackal"):
			iVar1 = 60000;
			break;
		
		case joaat("jb700"):
			iVar1 = 475000;
			break;
		
		case joaat("khamelion"):
			iVar1 = 100000;
			break;
		
		case joaat("landstalker"):
			iVar1 = 58000;
			break;
		
		case joaat("lguard"):
			iVar1 = 35000;
			break;
		
		case joaat("manana"):
			iVar1 = 8000;
			break;
		
		case joaat("mesa"):
			iVar1 = 30000;
			break;
		
		case joaat("minivan"):
			iVar1 = 30000;
			break;
		
		case joaat("monroe"):
			iVar1 = 490000;
			break;
		
		case joaat("nemesis"):
			iVar1 = 12000;
			break;
		
		case joaat("ninef"):
			iVar1 = 120000;
			break;
		
		case joaat("ninef2"):
			iVar1 = 130000;
			break;
		
		case joaat("oracle"):
			iVar1 = 82000;
			break;
		
		case joaat("oracle2"):
			iVar1 = 80000;
			break;
		
		case joaat("patriot"):
			iVar1 = 50000;
			break;
		
		case joaat("pcj"):
			iVar1 = 9000;
			break;
		
		case joaat("penumbra"):
			iVar1 = 24000;
			break;
		
		case joaat("peyote"):
			iVar1 = 12000;
			break;
		
		case joaat("phoenix"):
			iVar1 = 20000;
			break;
		
		case joaat("prairie"):
			iVar1 = 25000;
			break;
		
		case joaat("pranger"):
			iVar1 = 35000;
			break;
		
		case joaat("premier"):
			iVar1 = 10000;
			break;
		
		case joaat("primo"):
			iVar1 = 9000;
			break;
		
		case joaat("radi"):
			iVar1 = 32000;
			break;
		
		case joaat("rancherxl"):
			iVar1 = 9000;
			break;
		
		case joaat("rancherxl2"):
			iVar1 = 9000;
			break;
		
		case joaat("rapidgt"):
			iVar1 = 118000;
			break;
		
		case joaat("rapidgt2"):
			iVar1 = 136000;
			break;
		
		case joaat("ratloader"):
			iVar1 = 6000;
			break;
		
		case joaat("rebel"):
			iVar1 = 7000;
			break;
		
		case joaat("rebel2"):
			iVar1 = 22000;
			break;
		
		case joaat("regina"):
			iVar1 = 8000;
			break;
		
		case joaat("rocoto"):
			iVar1 = 85000;
			break;
		
		case joaat("ruffian"):
			iVar1 = 10000;
			break;
		
		case joaat("ruiner"):
			iVar1 = 10000;
			break;
		
		case joaat("rumpo"):
			iVar1 = 13000;
			break;
		
		case joaat("sabregt"):
			iVar1 = 15000;
			break;
		
		case joaat("sadler"):
			iVar1 = 35000;
			break;
		
		case joaat("sanchez"):
			iVar1 = 7000;
			break;
		
		case joaat("sandking"):
			iVar1 = 45000;
			break;
		
		case joaat("sandking2"):
			iVar1 = 45000;
			break;
		
		case joaat("schafter2"):
			iVar1 = 65000;
			break;
		
		case joaat("schwarzer"):
			iVar1 = 80000;
			break;
		
		case joaat("seashark"):
			iVar1 = 16899;
			break;
		
		case joaat("seminole"):
			iVar1 = 30000;
			break;
		
		case joaat("sentinel"):
			iVar1 = 60000;
			break;
		
		case joaat("sentinel2"):
			iVar1 = 60000;
			break;
		
		case joaat("serrano"):
			iVar1 = 60000;
			break;
		
		case joaat("speedo"):
			iVar1 = 15000;
			break;
		
		case joaat("speedo2"):
			iVar1 = 15000;
			break;
		
		case joaat("stanier"):
			iVar1 = 10000;
			break;
		
		case joaat("stinger"):
			iVar1 = 1000000;
			break;
		
		case joaat("stingergt"):
			iVar1 = 1000000;
			break;
		
		case joaat("stratum"):
			iVar1 = 10000;
			break;
		
		case joaat("stretch"):
			iVar1 = 30000;
			break;
		
		case joaat("sultan"):
			iVar1 = 12000;
			break;
		
		case joaat("superd"):
			iVar1 = 250000;
			break;
		
		case joaat("surano"):
			iVar1 = 99000;
			break;
		
		case joaat("surge"):
			iVar1 = 38000;
			break;
		
		case joaat("tailgater"):
			iVar1 = 55000;
			break;
		
		case joaat("taxi"):
			iVar1 = 13000;
			break;
		
		case joaat("tornado"):
			iVar1 = 30000;
			break;
		
		case joaat("tornado2"):
			iVar1 = 30000;
			break;
		
		case joaat("tornado3"):
			iVar1 = 30000;
			break;
		
		case joaat("tornado4"):
			iVar1 = 30000;
			break;
		
		case joaat("vacca"):
			iVar1 = 240000;
			break;
		
		case joaat("vader"):
			iVar1 = 9000;
			break;
		
		case joaat("vigero"):
			iVar1 = 21000;
			break;
		
		case joaat("voltic"):
			iVar1 = 80000;
			break;
		
		case joaat("voodoo2"):
			iVar1 = 5000;
			break;
		
		case joaat("washington"):
			iVar1 = 15000;
			break;
		
		case joaat("youga"):
			iVar1 = 16000;
			break;
		
		case joaat("zion"):
			iVar1 = 50000;
			break;
		
		case joaat("zion2"):
			iVar1 = 65000;
			break;
		
		case joaat("bmx"):
			iVar1 = 500;
			break;
		
		case joaat("scorcher"):
			iVar1 = 1000;
			break;
		
		case joaat("tribike"):
			iVar1 = 2500;
			break;
		
		case joaat("tribike2"):
			iVar1 = 2500;
			break;
		
		case joaat("tribike3"):
			iVar1 = 2500;
			break;
		
		case joaat("cruiser"):
			iVar1 = 3000;
			break;
		
		case joaat("ztype"):
			if (bVar0)
			{
				iVar1 = 1000000;
			}
			else
			{
				iVar1 = 10000000;
			}
			break;
	}
	if (bVar0)
	{
		switch (iParam1)
		{
			case joaat("adder"):
				iVar1 = 1000000;
				break;
			
			case joaat("airbus"):
				iVar1 = 550000;
				break;
			
			case joaat("akuma"):
				iVar1 = 9000;
				break;
			
			case joaat("annihilator"):
				iVar1 = 4000000;
				break;
			
			case joaat("baller2"):
				iVar1 = 90000;
				break;
			
			case joaat("banshee"):
				iVar1 = 105000;
				break;
			
			case joaat("barracks"):
				iVar1 = 450000;
				break;
			
			case joaat("bati"):
				iVar1 = 15000;
				break;
			
			case joaat("bati2"):
				iVar1 = 15000;
				break;
			
			case joaat("bfinjection"):
				iVar1 = 16000;
				break;
			
			case joaat("bison"):
				iVar1 = 30000;
				break;
			
			case joaat("blazer"):
				iVar1 = 8000;
				break;
			
			case joaat("bmx"):
				iVar1 = 800;
				break;
			
			case joaat("bullet"):
				iVar1 = 155000;
				break;
			
			case joaat("bus"):
				iVar1 = 500000;
				break;
			
			case joaat("buzzard"):
				iVar1 = 2000000;
				break;
			
			case joaat("carbonizzare"):
				iVar1 = 195000;
				break;
			
			case joaat("carbonrs"):
				iVar1 = 40000;
				break;
			
			case joaat("cargobob"):
				iVar1 = 185000;
				break;
			
			case joaat("cavalcade"):
				iVar1 = 60000;
				break;
			
			case joaat("cheetah"):
				iVar1 = 650000;
				break;
			
			case joaat("coach"):
				iVar1 = 525000;
				break;
			
			case joaat("cogcabrio"):
				iVar1 = 185000;
				break;
			
			case joaat("comet2"):
				iVar1 = 100000;
				break;
			
			case joaat("coquette"):
				iVar1 = 138000;
				break;
			
			case joaat("cruiser"):
				iVar1 = 800;
				break;
			
			case joaat("crusader"):
				iVar1 = 225000;
				break;
			
			case joaat("cuban800"):
				iVar1 = 240000;
				break;
			
			case joaat("dilettante"):
				iVar1 = 25000;
				break;
			
			case joaat("double"):
				iVar1 = 12000;
				break;
			
			case joaat("dubsta"):
				iVar1 = 70000;
				break;
			
			case joaat("dubsta2"):
				iVar1 = 70000;
				break;
			
			case joaat("dump"):
				iVar1 = 1000000;
				break;
			
			case joaat("duster"):
				iVar1 = 275000;
				break;
			
			case joaat("elegy2"):
				iVar1 = 95000;
				break;
			
			case joaat("entityxf"):
				iVar1 = 795000;
				break;
			
			case joaat("exemplar"):
				iVar1 = 205000;
				break;
			
			case joaat("faggio2"):
				iVar1 = 5000;
				break;
			
			case joaat("felon"):
				iVar1 = 90000;
				break;
			
			case joaat("felon2"):
				iVar1 = 95000;
				break;
			
			case joaat("feltzer2"):
				iVar1 = 145000;
				break;
			
			case joaat("frogger"):
				iVar1 = 1300000;
				break;
			
			case joaat("fugitive"):
				iVar1 = 24000;
				break;
			
			case joaat("gauntlet"):
				iVar1 = 32000;
				break;
			
			case joaat("hexer"):
				iVar1 = 15000;
				break;
			
			case joaat("hotknife"):
				iVar1 = 90000;
				break;
			
			case joaat("infernus"):
				iVar1 = 440000;
				break;
			
			case joaat("issi2"):
				iVar1 = 18000;
				break;
			
			case joaat("jb700"):
				iVar1 = 350000;
				break;
			
			case joaat("jetmax"):
				iVar1 = 299000;
				break;
			
			case joaat("journey"):
				iVar1 = 15000;
				break;
			
			case joaat("khamelion"):
				iVar1 = 100000;
				break;
			
			case joaat("luxor"):
				iVar1 = 1500000;
				break;
			
			case joaat("mammatus"):
				iVar1 = 300000;
				break;
			
			case joaat("marquis"):
				iVar1 = 413990;
				break;
			
			case joaat("maverick"):
				iVar1 = 780000;
				break;
			
			case joaat("monroe"):
				iVar1 = 490000;
				break;
			
			case joaat("mule"):
				iVar1 = 27000;
				break;
			
			case joaat("ninef"):
				iVar1 = 120000;
				break;
			
			case joaat("ninef2"):
				iVar1 = 130000;
				break;
			
			case joaat("oracle2"):
				iVar1 = 80000;
				break;
			
			case joaat("pcj"):
				iVar1 = 9000;
				break;
			
			case joaat("picador"):
				iVar1 = 9000;
				break;
			
			case joaat("rapidgt"):
				iVar1 = 132000;
				break;
			
			case joaat("rapidgt2"):
				iVar1 = 140000;
				break;
			
			case joaat("rentalbus"):
				iVar1 = 30000;
				break;
			
			case joaat("rhino"):
				iVar1 = 1500000;
				break;
			
			case joaat("rocoto"):
				iVar1 = 85000;
				break;
			
			case joaat("ruffian"):
				iVar1 = 10000;
				break;
			
			case joaat("sanchez"):
				iVar1 = 7000;
				break;
			
			case joaat("sandking"):
				iVar1 = 45000;
				break;
			
			case joaat("schwarzer"):
				iVar1 = 80000;
				break;
			
			case joaat("scorcher"):
				iVar1 = 2000;
				break;
			
			case joaat("shamal"):
				iVar1 = 1150000;
				break;
			
			case joaat("squalo"):
				iVar1 = 196621;
				break;
			
			case joaat("stinger"):
				iVar1 = 850000;
				break;
			
			case joaat("stingergt"):
				iVar1 = 875000;
				break;
			
			case joaat("stretch"):
				iVar1 = 30000;
				break;
			
			case joaat("stunt"):
				iVar1 = 250000;
				break;
			
			case joaat("suntrap"):
				iVar1 = 25160;
				break;
			
			case joaat("superd"):
				iVar1 = 250000;
				break;
			
			case joaat("surano"):
				iVar1 = 110000;
				break;
			
			case joaat("titan"):
				iVar1 = 5000000;
				break;
			
			case joaat("tribike"):
				iVar1 = 10000;
				break;
			
			case joaat("tribike2"):
				iVar1 = 10000;
				break;
			
			case joaat("tribike3"):
				iVar1 = 10000;
				break;
			
			case joaat("tropic"):
				iVar1 = 22000;
				break;
			
			case joaat("vacca"):
				iVar1 = 240000;
				break;
			
			case joaat("vader"):
				iVar1 = 9000;
				break;
			
			case joaat("velum"):
				iVar1 = 450000;
				break;
			
			case joaat("vigero"):
				iVar1 = 21000;
				break;
			
			case joaat("voltic"):
				iVar1 = 172000;
				break;
			
			case joaat("zion"):
				iVar1 = 60000;
				break;
			
			case joaat("zion2"):
				iVar1 = 65000;
				break;
			
			case joaat("ztype"):
				iVar1 = 950000;
				break;
		}
		switch (iParam1)
		{
			case joaat("annihilator"):
				iVar1 = 1825000;
				break;
			
			case joaat("blazer3"):
				iVar1 = 69000;
				break;
			
			case joaat("bodhi2"):
				iVar1 = 25000;
				break;
			
			case joaat("buzzard"):
				iVar1 = 1750000;
				break;
			
			case joaat("dilettante2"):
				iVar1 = 25000;
				break;
			
			case joaat("dloader"):
				iVar1 = 15000;
				break;
			
			case joaat("dune"):
				iVar1 = 20000;
				break;
			
			case joaat("dune2"):
				iVar1 = 1000000;
				break;
			
			case joaat("frogger"):
				iVar1 = 1300000;
				break;
			
			case joaat("luxor"):
				iVar1 = 1625000;
				break;
			
			case joaat("mesa3"):
				iVar1 = 87000;
				break;
			
			case joaat("peyote"):
				iVar1 = 38000;
				break;
			
			case joaat("rhino"):
				iVar1 = 1500000;
				break;
			
			case joaat("romero"):
				iVar1 = 45000;
				break;
			
			case joaat("sentinel2"):
				iVar1 = 95000;
				break;
			
			case joaat("shamal"):
				iVar1 = 1150000;
				break;
			
			case joaat("surfer"):
				iVar1 = 11000;
				break;
			
			case joaat("surfer2"):
				iVar1 = 5000;
				break;
			
			case joaat("titan"):
				iVar1 = 2000000;
				break;
			
			case joaat("towtruck2"):
				iVar1 = 32000;
				break;
		}
		switch (iParam1)
		{
			case joaat("bodhi2"):
				iVar1 = 25000;
				if (bVar0)
				{
					if (Global_262145.f_4825 >= 0)
					{
						iVar1 = Global_262145.f_4825;
					}
				}
				break;
			
			case joaat("dune"):
				iVar1 = 20000;
				if (bVar0)
				{
					if (Global_262145.f_4826 >= 0)
					{
						iVar1 = Global_262145.f_4826;
					}
				}
				break;
			
			case joaat("rebel"):
				iVar1 = 3000;
				break;
			
			case joaat("sadler"):
				iVar1 = 35000;
				break;
			
			case joaat("sanchez2"):
				iVar1 = 8000;
				break;
			
			case joaat("sandking2"):
				iVar1 = 38000;
				break;
		}
		switch (iParam1)
		{
			case joaat("asea"):
				iVar1 = 12000;
				break;
			
			case joaat("asterope"):
				iVar1 = 26000;
				if (bVar0)
				{
					if (Global_262145.f_4919 >= 0)
					{
						iVar1 = Global_262145.f_4919;
					}
				}
				break;
			
			case joaat("bobcatxl"):
				iVar1 = 23000;
				if (bVar0)
				{
					if (Global_262145.f_4920 >= 0)
					{
						iVar1 = Global_262145.f_4920;
					}
				}
				break;
			
			case joaat("cavalcade2"):
				iVar1 = 60000;
				if (bVar0)
				{
					if (Global_262145.f_4921 >= 0)
					{
						iVar1 = Global_262145.f_4921;
					}
				}
				break;
			
			case joaat("granger"):
				iVar1 = 35000;
				if (bVar0)
				{
					if (Global_262145.f_4922 >= 0)
					{
						iVar1 = Global_262145.f_4922;
					}
				}
				break;
			
			case joaat("ingot"):
				iVar1 = 9000;
				if (bVar0)
				{
					if (Global_262145.f_4923 >= 0)
					{
						iVar1 = Global_262145.f_4923;
					}
				}
				break;
			
			case joaat("intruder"):
				iVar1 = 16000;
				if (bVar0)
				{
					if (Global_262145.f_4924 >= 0)
					{
						iVar1 = Global_262145.f_4924;
					}
				}
				break;
			
			case joaat("minivan"):
				iVar1 = 30000;
				if (bVar0)
				{
					if (Global_262145.f_4925 >= 0)
					{
						iVar1 = Global_262145.f_4925;
					}
				}
				break;
			
			case joaat("premier"):
				iVar1 = 10000;
				if (bVar0)
				{
					if (Global_262145.f_4926 >= 0)
					{
						iVar1 = Global_262145.f_4926;
					}
				}
				break;
			
			case joaat("radi"):
				iVar1 = 32000;
				if (bVar0)
				{
					if (Global_262145.f_4927 >= 0)
					{
						iVar1 = Global_262145.f_4927;
					}
				}
				break;
			
			case joaat("rancherxl"):
				iVar1 = 9000;
				if (bVar0)
				{
					if (Global_262145.f_4928 >= 0)
					{
						iVar1 = Global_262145.f_4928;
					}
				}
				break;
			
			case joaat("ratloader"):
				iVar1 = 6000;
				if (bVar0)
				{
					if (Global_262145.f_4948 >= 0)
					{
						iVar1 = Global_262145.f_4948;
					}
				}
				break;
			
			case joaat("stanier"):
				iVar1 = 10000;
				if (bVar0)
				{
					if (Global_262145.f_4929 >= 0)
					{
						iVar1 = Global_262145.f_4929;
					}
				}
				break;
			
			case joaat("stratum"):
				iVar1 = 10000;
				if (bVar0)
				{
					if (Global_262145.f_4930 >= 0)
					{
						iVar1 = Global_262145.f_4930;
					}
				}
				break;
			
			case joaat("washington"):
				iVar1 = 15000;
				if (bVar0)
				{
					if (Global_262145.f_4931 >= 0)
					{
						iVar1 = Global_262145.f_4931;
					}
				}
				break;
			}
	}
	switch (iParam1)
	{
		case joaat("paradise"):
			iVar1 = 50000;
			if (bVar0)
			{
				iVar1 = 25000;
				if (Global_262145.f_5513 >= 0)
				{
					iVar1 = Global_262145.f_5513;
				}
			}
			break;
		
		case joaat("bifta"):
			iVar1 = 75000;
			if (bVar0)
			{
				if (Global_262145.f_5511 >= 0)
				{
					iVar1 = Global_262145.f_5511;
				}
			}
			break;
		
		case joaat("kalahari"):
			if (bParam2)
			{
				iVar1 = 40000;
				if (bVar0)
				{
					if (Global_262145.f_5512 >= 0)
					{
						iVar1 = Global_262145.f_5512;
					}
				}
			}
			else
			{
				iVar1 = 51000;
				if (bVar0)
				{
					if (Global_262145.f_6662 >= 0)
					{
						iVar1 = Global_262145.f_6662;
					}
				}
			}
			break;
		
		case joaat("speeder"):
			iVar1 = 325000;
			if (bVar0)
			{
				if (Global_262145.f_5514 >= 0)
				{
					iVar1 = Global_262145.f_5514;
				}
			}
			break;
		
		case joaat("btype"):
			iVar1 = 1150000;
			if (bVar0)
			{
				iVar1 = 750000;
				if (Global_262145.f_4943 >= 0)
				{
					iVar1 = Global_262145.f_4943;
				}
			}
			break;
		
		case joaat("jester"):
			iVar1 = 240000;
			if (bVar0)
			{
				if (Global_262145.f_4915 >= 0)
				{
					iVar1 = Global_262145.f_4915;
				}
			}
			break;
		
		case joaat("turismor"):
			iVar1 = 500000;
			if (bVar0)
			{
				if (Global_262145.f_4917 >= 0)
				{
					iVar1 = Global_262145.f_4917;
				}
			}
			break;
		
		case joaat("alpha"):
			iVar1 = 150000;
			if (bVar0)
			{
				if (Global_262145.f_4913 >= 0)
				{
					iVar1 = Global_262145.f_4913;
				}
			}
			break;
		
		case joaat("vestra"):
			iVar1 = 950000;
			if (bVar0)
			{
				if (Global_262145.f_4968 >= 0)
				{
					iVar1 = Global_262145.f_4968;
				}
			}
			break;
		
		case joaat("massacro"):
			iVar1 = 275000;
			if (bVar0)
			{
				if (Global_262145.f_4916 >= 0)
				{
					iVar1 = Global_262145.f_4916;
				}
			}
			break;
		
		case joaat("zentorno"):
			iVar1 = 725000;
			if (bVar0)
			{
				if (Global_262145.f_4918 >= 0)
				{
					iVar1 = Global_262145.f_4918;
				}
			}
			break;
		
		case joaat("huntley"):
			iVar1 = 195000;
			if (bVar0)
			{
				if (Global_262145.f_4914 >= 0)
				{
					iVar1 = Global_262145.f_4914;
				}
			}
			break;
		
		case joaat("thrust"):
			iVar1 = 75000;
			if (bVar0)
			{
				if (Global_262145.f_5515 >= 0)
				{
					iVar1 = Global_262145.f_5515;
				}
			}
			break;
		
		case joaat("blade"):
			iVar1 = 160000;
			if (bVar0)
			{
				if (Global_262145.f_5986 >= 0)
				{
					iVar1 = Global_262145.f_5986;
				}
			}
			break;
		
		case joaat("warrener"):
			iVar1 = 125000;
			if (bVar0)
			{
				iVar1 = 120000;
				if (Global_262145.f_5989 >= 0)
				{
					iVar1 = Global_262145.f_5989;
				}
			}
			break;
		
		case joaat("glendale"):
			iVar1 = 200000;
			if (bVar0)
			{
				if (Global_262145.f_5987 >= 0)
				{
					iVar1 = Global_262145.f_5987;
				}
			}
			break;
		
		case joaat("rhapsody"):
			iVar1 = 100000;
			if (bVar0)
			{
				iVar1 = 140000;
				if (Global_262145.f_5988 >= 0)
				{
					iVar1 = Global_262145.f_5988;
				}
			}
			break;
		
		case joaat("panto"):
			iVar1 = 85000;
			if (bVar0)
			{
				if (Global_262145.f_5990 >= 0)
				{
					iVar1 = Global_262145.f_5990;
				}
			}
			break;
		
		case joaat("dubsta3"):
			iVar1 = 249000;
			if (bVar0)
			{
				if (Global_262145.f_5991 >= 0)
				{
					iVar1 = Global_262145.f_5991;
				}
			}
			break;
		
		case joaat("pigalle"):
			iVar1 = 400000;
			if (bVar0)
			{
				if (Global_262145.f_5985 >= 0)
				{
					iVar1 = Global_262145.f_5985;
				}
			}
			break;
		
		case joaat("besra"):
			iVar1 = 658000;
			if (bVar0)
			{
				iVar1 = 1150000;
				if (Global_262145.f_6381 >= 0)
				{
					iVar1 = Global_262145.f_6381;
				}
			}
			break;
		
		case joaat("miljet"):
			iVar1 = 1750000;
			if (bVar0)
			{
				iVar1 = 1700000;
				if (Global_262145.f_6382 >= 0)
				{
					iVar1 = Global_262145.f_6382;
				}
			}
			break;
		
		case joaat("swift"):
			if (!bParam2)
			{
				iVar1 = 1500000;
				if (bVar0)
				{
					if (Global_262145.f_6383 >= 0)
					{
						iVar1 = Global_262145.f_6383;
					}
				}
			}
			else
			{
				iVar1 = 1600000;
				if (bVar0)
				{
					if (Global_262145.f_6384 >= 0)
					{
						iVar1 = Global_262145.f_6384;
					}
				}
			}
			break;
		
		case joaat("coquette2"):
			if (bParam2)
			{
				iVar1 = 350000;
				if (bVar0)
				{
					iVar1 = 665000;
					if (Global_262145.f_6379 >= 0)
					{
						iVar1 = Global_262145.f_6379;
					}
				}
			}
			else
			{
				iVar1 = 395000;
				if (bVar0)
				{
					iVar1 = 695000;
					if (Global_262145.f_6380 >= 0)
					{
						iVar1 = Global_262145.f_6380;
					}
				}
			}
			break;
		
		case joaat("sovereign"):
			iVar1 = 120000;
			if (bVar0)
			{
				if (Global_262145.f_6144 >= 0)
				{
					iVar1 = Global_262145.f_6144;
				}
			}
			break;
		
		case joaat("monster"):
			iVar1 = 742000;
			if (bVar0)
			{
				iVar1 = 742014;
				if (Global_262145.f_6143 >= 0)
				{
					iVar1 = Global_262145.f_6143;
				}
			}
			break;
		
		case joaat("innovation"):
			iVar1 = 92500;
			if (bVar0)
			{
				if (Global_262145.f_6659 >= 0)
				{
					iVar1 = Global_262145.f_6659;
				}
			}
			break;
		
		case joaat("hakuchou"):
			iVar1 = 82000;
			if (bVar0)
			{
				if (Global_262145.f_6660 >= 0)
				{
					iVar1 = Global_262145.f_6660;
				}
			}
			break;
		
		case joaat("furoregt"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6661 >= 0)
				{
					iVar1 = Global_262145.f_6661;
				}
			}
			break;
		
		case joaat("boxville4"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6891 >= 0)
				{
					iVar1 = Global_262145.f_6891;
				}
			}
			break;
		
		case joaat("casco"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6892 >= 0)
				{
					iVar1 = Global_262145.f_6892;
				}
			}
			break;
		
		case joaat("dinghy3"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6893 >= 0)
				{
					iVar1 = Global_262145.f_6893;
				}
			}
			break;
		
		case joaat("enduro"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6894 >= 0)
				{
					iVar1 = Global_262145.f_6894;
				}
			}
			break;
		
		case joaat("gburrito2"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6895 >= 0)
				{
					iVar1 = Global_262145.f_6895;
				}
			}
			break;
		
		case joaat("guardian"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6896 >= 0)
				{
					iVar1 = Global_262145.f_6896;
				}
			}
			break;
		
		case joaat("hydra"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6897 >= 0)
				{
					iVar1 = Global_262145.f_6897;
				}
			}
			break;
		
		case joaat("insurgent"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6899 >= 0)
				{
					iVar1 = Global_262145.f_6899;
				}
			}
			break;
		
		case joaat("insurgent2"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6898 >= 0)
				{
					iVar1 = Global_262145.f_6898;
				}
			}
			break;
		
		case joaat("kuruma"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6900 >= 0)
				{
					iVar1 = Global_262145.f_6900;
				}
			}
			break;
		
		case joaat("kuruma2"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6901 >= 0)
				{
					iVar1 = Global_262145.f_6901;
				}
			}
			break;
		
		case joaat("lectro"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6902 >= 0)
				{
					iVar1 = Global_262145.f_6902;
				}
			}
			break;
		
		case joaat("pbus"):
			iVar1 = 550000;
			if (bVar0)
			{
				if (Global_262145.f_6908 >= 0)
				{
					iVar1 = Global_262145.f_6908;
				}
			}
			break;
		
		case joaat("mule3"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6903 >= 0)
				{
					iVar1 = Global_262145.f_6903;
				}
			}
			break;
		
		case joaat("savage"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6904 >= 0)
				{
					iVar1 = Global_262145.f_6904;
				}
			}
			break;
		
		case joaat("dodo"):
			iVar1 = 500000;
			if (bVar0)
			{
				if (Global_262145.f_6977 >= 0)
				{
					iVar1 = Global_262145.f_6977;
				}
			}
			break;
		
		case joaat("marshall"):
			iVar1 = 250000;
			if (bVar0)
			{
				iVar1 = 500000;
				if (Global_262145.f_6979 >= 0)
				{
					iVar1 = Global_262145.f_6979;
				}
			}
			break;
		
		case joaat("submersible2"):
			iVar1 = 1325000;
			if (bVar0)
			{
				if (Global_262145.f_6981 >= 0)
				{
					iVar1 = Global_262145.f_6981;
				}
			}
			break;
		
		case joaat("blista2"):
			iVar1 = 42000;
			if (bVar0)
			{
				if (Global_262145.f_6976 >= 0)
				{
					iVar1 = Global_262145.f_6976;
				}
			}
			break;
		
		case joaat("stalion"):
			iVar1 = 71000;
			if (bVar0)
			{
				if (Global_262145.f_6980 >= 0)
				{
					iVar1 = Global_262145.f_6980;
				}
			}
			break;
		
		case joaat("dukes"):
			iVar1 = 62000;
			if (bVar0)
			{
				iVar1 = 62000;
				if (Global_262145.f_6978 >= 0)
				{
					iVar1 = Global_262145.f_6978;
				}
			}
			break;
		
		case joaat("dukes2"):
			iVar1 = 279000;
			if (bVar0)
			{
				iVar1 = 62000;
				if (Global_262145.f_6978 >= 0)
				{
					iVar1 = Global_262145.f_6978;
				}
			}
			break;
		
		case joaat("stalion2"):
			iVar1 = 138500;
			if (bVar0)
			{
				if (Global_262145.f_7194 >= 0)
				{
					iVar1 = Global_262145.f_7194;
				}
			}
			break;
		
		case joaat("dominator2"):
			iVar1 = 127000;
			if (bVar0)
			{
				if (Global_262145.f_7192 >= 0)
				{
					iVar1 = Global_262145.f_7192;
				}
			}
			break;
		
		case joaat("gauntlet2"):
			iVar1 = 115000;
			if (bVar0)
			{
				if (Global_262145.f_7193 >= 0)
				{
					iVar1 = Global_262145.f_7193;
				}
			}
			break;
		
		case joaat("buffalo3"):
			iVar1 = 150000;
			if (bVar0)
			{
				if (Global_262145.f_7191 >= 0)
				{
					iVar1 = Global_262145.f_7191;
				}
			}
			break;
		
		case joaat("slamvan"):
			iVar1 = 49500;
			if (bVar0)
			{
				if (Global_262145.f_7190 >= 0)
				{
					iVar1 = Global_262145.f_7190;
				}
			}
			break;
		
		case joaat("ratloader2"):
			iVar1 = 37500;
			if (bVar0)
			{
				if (Global_262145.f_7189 >= 0)
				{
					iVar1 = Global_262145.f_7189;
				}
			}
			break;
		
		case joaat("jester2"):
			iVar1 = 350000;
			if (bVar0)
			{
				if (Global_262145.f_7187 >= 0)
				{
					iVar1 = Global_262145.f_7187;
				}
			}
			break;
		
		case joaat("massacro2"):
			iVar1 = 385000;
			if (bVar0)
			{
				if (Global_262145.f_7188 >= 0)
				{
					iVar1 = Global_262145.f_7188;
				}
			}
			break;
		
		case joaat("feltzer3"):
			iVar1 = 975000;
			if (unk_0x1DAD7CE53BEE7710())
			{
				if (Global_262145.f_8260 >= 0)
				{
					iVar1 = Global_262145.f_8260;
				}
			}
			break;
		
		case joaat("luxor2"):
			iVar1 = 10000000;
			if (unk_0x1DAD7CE53BEE7710())
			{
				if (Global_262145.f_8261 >= 0)
				{
					iVar1 = Global_262145.f_8261;
				}
			}
			break;
		
		case joaat("osiris"):
			iVar1 = 1950000;
			if (unk_0x1DAD7CE53BEE7710())
			{
				if (Global_262145.f_8262 >= 0)
				{
					iVar1 = Global_262145.f_8262;
				}
			}
			break;
		
		case joaat("swift2"):
			iVar1 = 5150000;
			if (unk_0x1DAD7CE53BEE7710())
			{
				if (Global_262145.f_8263 >= 0)
				{
					iVar1 = Global_262145.f_8263;
				}
			}
			break;
		
		case joaat("virgo"):
			iVar1 = 195000;
			if (unk_0x1DAD7CE53BEE7710())
			{
				if (Global_262145.f_8264 >= 0)
				{
					iVar1 = Global_262145.f_8264;
				}
			}
			break;
		
		case joaat("windsor"):
			iVar1 = 845000;
			if (unk_0x1DAD7CE53BEE7710())
			{
				if (Global_262145.f_8265 >= 0)
				{
					iVar1 = Global_262145.f_8265;
				}
			}
			break;
		
		case joaat("brawler"):
			iVar1 = 715000;
			if (unk_0x1DAD7CE53BEE7710())
			{
				if (Global_262145.f_8547 >= 0)
				{
					iVar1 = Global_262145.f_8547;
				}
			}
			break;
		
		case joaat("chino"):
			iVar1 = 225000;
			if (unk_0x1DAD7CE53BEE7710())
			{
				if (Global_262145.f_8548 >= 0)
				{
					iVar1 = Global_262145.f_8548;
				}
			}
			break;
		
		case joaat("coquette3"):
			iVar1 = 695000;
			if (unk_0x1DAD7CE53BEE7710())
			{
				if (Global_262145.f_8549 >= 0)
				{
					iVar1 = Global_262145.f_8549;
				}
			}
			break;
		
		case joaat("t20"):
			iVar1 = 2200000;
			if (unk_0x1DAD7CE53BEE7710())
			{
				if (Global_262145.f_8550 >= 0)
				{
					iVar1 = Global_262145.f_8550;
				}
			}
			break;
		
		case joaat("toro"):
			iVar1 = 1750000;
			if (unk_0x1DAD7CE53BEE7710())
			{
				if (Global_262145.f_8551 >= 0)
				{
					iVar1 = Global_262145.f_8551;
				}
			}
			break;
		
		case joaat("vindicator"):
			iVar1 = 630000;
			if (unk_0x1DAD7CE53BEE7710())
			{
				if (Global_262145.f_8552 >= 0)
				{
					iVar1 = Global_262145.f_8552;
				}
			}
			break;
	}
	switch (iParam1)
	{
		case joaat("dominator"):
			if (bVar0)
			{
				if (Global_262145.f_5520 >= 0)
				{
					iVar1 = Global_262145.f_5520;
				}
			}
			break;
		
		case joaat("f620"):
			if (bVar0)
			{
				if (Global_262145.f_5521 >= 0)
				{
					iVar1 = Global_262145.f_5521;
				}
			}
			break;
		
		case joaat("fusilade"):
			if (bVar0)
			{
				if (Global_262145.f_5522 >= 0)
				{
					iVar1 = Global_262145.f_5522;
				}
			}
			break;
		
		case joaat("penumbra"):
			if (bVar0)
			{
				if (Global_262145.f_5523 >= 0)
				{
					iVar1 = Global_262145.f_5523;
				}
			}
			break;
		
		case joaat("sentinel"):
			if (bVar0)
			{
				if (Global_262145.f_5524 >= 0)
				{
					iVar1 = Global_262145.f_5524;
				}
			}
			break;
		
		case joaat("sentinel2"):
			if (bVar0)
			{
				if (Global_262145.f_5525 >= 0)
				{
					iVar1 = Global_262145.f_5525;
				}
			}
			break;
	}
	if (bVar0)
	{
		switch (iParam1)
		{
			case joaat("elegy2"):
				if (Global_262145.f_4018 >= 0)
				{
					iVar1 = Global_262145.f_4018;
				}
				break;
			
			case joaat("khamelion"):
				if (Global_262145.f_4034 >= 0)
				{
					iVar1 = Global_262145.f_4034;
				}
				break;
			
			case joaat("hotknife"):
				if (Global_262145.f_4028 >= 0)
				{
					iVar1 = Global_262145.f_4028;
				}
				break;
			
			case joaat("carbonrs"):
				if (Global_262145.f_4004 >= 0)
				{
					iVar1 = Global_262145.f_4004;
				}
				break;
			}
	}
	if (bVar0)
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case joaat("coquette"):
					iVar1 = 159000;
					if (bVar0)
					{
						if (Global_262145.f_5518 >= 0)
						{
							iVar1 = Global_262145.f_5518;
						}
					}
					break;
				
				case joaat("banshee"):
					iVar1 = 126000;
					if (bVar0)
					{
						if (Global_262145.f_5517 >= 0)
						{
							iVar1 = Global_262145.f_5517;
						}
					}
					break;
				
				case joaat("stinger"):
					iVar1 = 871000;
					if (bVar0)
					{
						if (Global_262145.f_5519 >= 0)
						{
							iVar1 = Global_262145.f_5519;
						}
					}
					break;
				
				case joaat("voltic"):
					iVar1 = 150000;
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case joaat("voltic"):
					if (bVar0)
					{
						if (Global_262145.f_5516 >= 0)
						{
							iVar1 = Global_262145.f_5516;
						}
					}
					break;
				}
			}
	}
	if (iVar1 == -1)
	{
		return 0;
	}
	*uParam0 = iVar1;
	uParam0->f_1 = unk_0xF34EE736CF047844((IntToFloat(iVar1) * 0.5f));
	uParam0->f_2 = unk_0xF34EE736CF047844((IntToFloat(uParam0->f_1) * 0.25f));
	uParam0->f_3 = unk_0xF34EE736CF047844((IntToFloat(uParam0->f_1) * 0.1f));
	uParam0->f_5 = unk_0xF34EE736CF047844((IntToFloat(uParam0->f_1) * 0.25f));
	uParam0->f_4 = unk_0xF34EE736CF047844((IntToFloat(uParam0->f_2) * 0.1f));
	if (bVar0)
	{
		uParam0->f_3 = unk_0xF34EE736CF047844((IntToFloat(uParam0->f_1) * 0.2f));
	}
	return 1;
}

int func_293(int iParam0)
{
	int iVar0;
	
	if (unk_0x538DF9E5B1DF01EB(uParam0) && unk_0xECFECDAD51A6184F(iParam0, 0))
	{
		iVar0 = unk_0xA609E58449080951(iParam0);
		switch (iVar0)
		{
			case joaat("voltic"):
				return unk_0x5624226E4F913C53(iParam0, 3);
				break;
			
			case joaat("coquette"):
				return !unk_0x5624226E4F913C53(iParam0, 2);
				break;
			
			case joaat("banshee"):
				return !unk_0x5624226E4F913C53(iParam0, 2);
				break;
			
			case joaat("stinger"):
				return !unk_0x5624226E4F913C53(iParam0, 2);
				break;
			}
	}
	return 0;
}

int func_294(var uParam0)
{
	if (Global_68325)
	{
		if (unk_0x53D28141CF743B83(uParam0, "Player_Vehicle"))
		{
			return 1;
		}
	}
	return 0;
}

void func_295()
{
	if (!unk_0xF1F4C42EF94F5FDD())
	{
		if (!func_296(62) && !unk_0x11A809BBE3889742())
		{
			if (!unk_0x889D01384B54BCE3(iLocal_103, 0))
			{
				func_320("AMBC_HELP", 30000);
				func_319(1);
				unk_0xD0E2BFCE93AE3ABD(&iLocal_103, 0);
			}
			else if (!unk_0x889D01384B54BCE3(iLocal_103, 1))
			{
				func_320("AMBC_HELP1", 30000);
				func_319(1);
				unk_0xD0E2BFCE93AE3ABD(&iLocal_103, 1);
			}
		}
	}
}

bool func_296(int iParam0)
{
	return Global_2422491.f_2136[0 /*70*/].f_1 == iParam0;
}

void func_297(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	unk_0x08E9BC7825B63619("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x08E9BC7825B63619("WantedMusicDisabled", 1);
	}
	Global_2446992.f_4546 = -1;
	if (bParam6)
	{
		func_313(21, 1);
	}
	else
	{
		func_312(iParam0, -1);
		if (func_6(unk_0x1788E93557766241()))
		{
			Global_1573734.f_3 = iParam0;
		}
		else
		{
			func_311(iParam0);
		}
		Global_1573734.f_4 = -1;
		if (func_6(unk_0x1788E93557766241()))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 5);
		}
		if ((func_285() && !func_310()) || func_309(unk_0x1788E93557766241(), 21))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 4);
		}
		unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 17);
		unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 20);
		if (func_308(iParam0))
		{
			func_307();
		}
	}
	if (fParam1 != 1f)
	{
		func_305(fParam1);
	}
	if (fParam2 != 1f)
	{
		unk_0xABC4F2A6D7D56CF4(fParam2);
		if (iParam0 == 146)
		{
			unk_0xCC68D69AF0F39112(0);
			unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), 0, 0);
			unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
		}
	}
	if (func_304(iParam0))
	{
		unk_0xCC68D69AF0F39112(0);
		unk_0x4C1891512E1BE87D(unk_0x1788E93557766241(), 0, 0);
		unk_0x20B787477FD9ECB2(unk_0x1788E93557766241(), 0);
		unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 8);
	}
	if (bParam3)
	{
		func_303(1);
		if (func_220(0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 9);
		}
		unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 14);
	}
	if (bParam4)
	{
		func_301(1);
		unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 12);
	}
	if (bParam5)
	{
		func_300();
		unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 12);
	}
	if (!bParam6)
	{
		if (func_298(iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 21);
		}
	}
	Global_2445946 = 1;
}

int func_298(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
			return 1;
		
		default:
	}
	if (func_299())
	{
		return 1;
	}
	return 0;
}

int func_299()
{
	switch (func_257())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

void func_300()
{
	unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4537), 0);
}

void func_301(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_90094.f_8 = 1;
	}
	else
	{
		Global_90094.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_302(iVar0);
		iVar0++;
	}
}

void func_302(int iParam0)
{
	Global_90094.f_153[iParam0] = 1;
	Global_90094.f_152 = 1;
}

void func_303(int iParam0)
{
	if (iParam0 == Global_2391042)
	{
		return;
	}
	Global_2391042 = iParam0;
	Global_2391044 = 0;
	Global_2391045 = 0;
}

int func_304(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		default:
	}
	return 0;
}

void func_305(float fParam0)
{
	if (unk_0xB793F1A0B6CC4AE1(unk_0x7E5A426328F6E635()) == func_306())
	{
		return;
	}
	if (unk_0xDECCEB462707CB3E(Global_2446992.f_4629))
	{
		if (!Global_2446992.f_4629 == unk_0x60C807BBCBE66CC7())
		{
			return;
		}
	}
	Global_2446992.f_4628 = fParam0;
	Global_2446992.f_4629 = unk_0x60C807BBCBE66CC7();
}

int func_306()
{
	switch (func_90())
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

void func_307()
{
	Global_2414327[unk_0x1788E93557766241() /*255*/].f_198 = 0;
	unk_0x29DB79DD4D939B38(&(Global_2446992.f_4401), 1);
}

int func_308(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

bool func_309(int iParam0, int iParam1)
{
	return unk_0x889D01384B54BCE3(Global_2414327[iParam0 /*255*/].f_205, iParam1);
}

bool func_310()
{
	return Global_1312416.f_1;
}

void func_311(int iParam0)
{
	Global_1602607[unk_0x1788E93557766241() /*12*/] = iParam0;
}

void func_312(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_275(0) || func_275(func_274(iVar0)))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1), 2);
		}
		else
		{
			unk_0x29DB79DD4D939B38(&(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1), 2);
		}
	}
}

void func_313(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x889D01384B54BCE3(Global_2414327[unk_0x1788E93557766241() /*255*/].f_205, iParam0))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_2414327[unk_0x1788E93557766241() /*255*/].f_205), iParam0);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_2414327[unk_0x1788E93557766241() /*255*/].f_205, iParam0))
	{
		unk_0x29DB79DD4D939B38(&(Global_2414327[unk_0x1788E93557766241() /*255*/].f_205), iParam0);
	}
}

void func_314()
{
}

void func_315(var uParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_253(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_201(sParam1))
	{
		sVar0 = sParam1;
	}
	func_245(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0);
}

int func_316(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_317(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x0C380BB05B91042D())
	{
		Global_2446992.f_4536 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0x889D01384B54BCE3(Global_2446992.f_4536, 1))
		{
			unk_0xC2E1777941B4536E(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2446992.f_4536 = 0;
			unk_0xD0E2BFCE93AE3ABD(&(Global_2446992.f_4536), 1);
		}
	}
}

int func_318(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1DAD7CE53BEE7710() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0xF001CC441E445DFD(unk_0x519586565311459B(), *uParam0);
		}
		else
		{
			return unk_0xF001CC441E445DFD(unk_0x4EAB1171B13C220B(), *uParam0);
		}
	}
	return unk_0xF001CC441E445DFD(unk_0x09560C7DE2A384BD(), *uParam0);
}

void func_319(int iParam0)
{
	unk_0xB9C362BABECDDC7A(3, 21, 200, 0, 0);
	if (iParam0 && !func_241())
	{
		unk_0xC2E1777941B4536E(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_320(char* sParam0, int iParam1)
{
	unk_0x5B4A49EA799C667F(sParam0);
	unk_0x644558F3AB755120(0, 0, 0, iParam1);
}

void func_321(int iParam0)
{
	Local_2158[unk_0x044A481E863E2F6B() /*7*/].f_2 = iParam0;
}

void func_322(bool bParam0)
{
	if (bParam0)
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1), 4);
	}
	else
	{
		unk_0x29DB79DD4D939B38(&(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1), 4);
	}
}

int func_323()
{
	if (func_309(unk_0x1788E93557766241(), 21))
	{
		return 0;
	}
	if (unk_0x31EF25060710376C())
	{
		return 0;
	}
	if (func_278(unk_0x1788E93557766241()))
	{
		return 0;
	}
	if (func_331())
	{
		return 0;
	}
	if (func_330())
	{
		return 0;
	}
	if (func_329())
	{
		return 0;
	}
	if (func_254())
	{
		return 0;
	}
	if (unk_0x7A75BEF6DA1EDF3D())
	{
		return 0;
	}
	if (func_280(unk_0x1788E93557766241()))
	{
		return 0;
	}
	if (!func_327())
	{
		return 0;
	}
	if (func_309(unk_0x1788E93557766241(), 0) || func_309(unk_0x1788E93557766241(), 3))
	{
		return 0;
	}
	if ((func_309(unk_0x1788E93557766241(), 12) || func_309(unk_0x1788E93557766241(), 14)) || func_309(unk_0x1788E93557766241(), 13))
	{
		return 0;
	}
	if (func_326(unk_0x1788E93557766241(), 0))
	{
		return 0;
	}
	if (func_325())
	{
		return 0;
	}
	if (Global_1690013)
	{
		return 0;
	}
	if (func_324(unk_0x1788E93557766241()))
	{
		return 0;
	}
	return 1;
}

int func_324(int iParam0)
{
	if (!func_10(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1583725[iParam0 /*334*/].f_35;
}

bool func_325()
{
	return Global_90094.f_291 > 0;
}

int func_326(int iParam0, bool bParam1)
{
	if (Global_1583725[iParam0 /*334*/].f_244.f_6 > 0)
	{
		if (bParam1)
		{
			if (unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_244.f_4, 0))
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

int func_327()
{
	if (func_328() == 0)
	{
		return 1;
	}
	return 0;
}

int func_328()
{
	return Global_1312466.f_18;
}

bool func_329()
{
	return Global_1315891;
}

bool func_330()
{
	return Global_1583725[unk_0x1788E93557766241() /*334*/] == 5;
}

bool func_331()
{
	return unk_0x889D01384B54BCE3(Global_1583725[unk_0x1788E93557766241() /*334*/].f_39.f_18, 0);
}

void func_332()
{
	if (Local_2158[unk_0x044A481E863E2F6B() /*7*/].f_3 != 0)
	{
		Local_2158[unk_0x044A481E863E2F6B() /*7*/].f_3 = 0;
	}
}

bool func_333(int iParam0)
{
	return func_134(iParam0, 0);
}

bool func_334(int iParam0)
{
	if (iParam0 == unk_0x1788E93557766241())
	{
		if ((func_285() && !func_310()) || func_309(unk_0x1788E93557766241(), 21))
		{
			return 1;
		}
		if (func_20(&(Global_1573734.f_13)))
		{
			if (!func_1(&(Global_1573734.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_19(&(Global_1573734.f_13));
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_1602607[iParam0 /*12*/].f_1, 10))
	{
		return 1;
	}
	return unk_0x889D01384B54BCE3(Global_1602607[iParam0 /*12*/].f_1, 9);
}

void func_335()
{
	func_336(&(Local_159.f_526), &Local_159, 23, &(Local_159.f_1), &(Local_159.f_109), -1, 0);
}

void func_336(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_37 = 0;
	if (func_422())
	{
		if (func_389(uParam1, iParam2, uParam3, Global_1573537, 0, func_425()))
		{
			func_388(1);
			if (!func_387() || unk_0x889D01384B54BCE3(Global_2446992.f_4402, 1))
			{
				if (func_386())
				{
					func_385();
				}
				else
				{
					unk_0xD56181B43A801B45(76, 84);
					if (uParam3->f_28 == 0)
					{
						func_384(1);
						Global_1573537 = 0;
						iVar18 = -1;
						if (Global_1573685 != 1)
						{
							func_383(uParam1);
							if (unk_0x889D01384B54BCE3(uParam3->f_34, 7))
							{
								unk_0x29DB79DD4D939B38(&(uParam3->f_34), 7);
							}
						}
						iVar16 = 0;
						while (iVar16 < 32)
						{
							if (func_382())
							{
								if (func_10(unk_0x42C0B50857BF923B(iVar16), 0, 1))
								{
									iVar0 = unk_0x42C0B50857BF923B(iVar16);
								}
								else
								{
									iVar0 = func_34();
								}
							}
							else
							{
								iVar0 = (uParam0[iVar16 /*46*/])->f_1;
							}
							if ((func_381(iVar0) && func_376(iVar0)) && func_10(iVar0, 0, 1))
							{
								iVar9 = iVar0;
								uParam3->f_39[iVar9 /*2*/].f_1 = iVar17;
								iVar7 = Global_1583725[iVar9 /*334*/].f_188.f_6;
								Var3 = { func_371(iVar0) };
								if (iVar0 == unk_0x1788E93557766241())
								{
									uParam3->f_36 = iVar17;
								}
								StringCopy(&(uParam3->f_1), unk_0xF3E5891C26514A74(iVar0), 64);
								*(uParam4[iVar16 /*13*/]) = { func_177(iVar0) };
								if (func_370(*(uParam4[iVar16 /*13*/])))
								{
								}
								iVar2 = func_364(iVar0);
								sVar1 = "";
								if (iVar2 != 0)
								{
									sVar1 = unk_0xE60D88CF3EF91AA6(iVar2);
								}
								Global_1573537++;
								if ((uParam0[iVar16 /*46*/])->f_21 != -1f)
								{
									fVar10 = (uParam0[iVar16 /*46*/])->f_21;
								}
								if ((uParam0[iVar16 /*46*/])->f_29 != -1)
								{
									iVar11 = (uParam0[iVar16 /*46*/])->f_29;
								}
								if ((uParam0[iVar16 /*46*/])->f_45 != -1)
								{
									iVar12 = (uParam0[iVar16 /*46*/])->f_45;
								}
								iVar8 = (uParam0[iVar16 /*46*/])->f_8;
								if (((uParam0[iVar16 /*46*/])->f_8 != -1 || (uParam0[iVar16 /*46*/])->f_21 != -1f) || (uParam0[iVar16 /*46*/])->f_29 != -1)
								{
									if (!func_382())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_359(&iVar8, &fVar10, (uParam0[iVar16 /*46*/])->f_8, iParam5);
									uParam3->f_104 = func_358(iParam5, 1, 0, 0);
								}
								if (bParam6)
								{
									iVar13 = (uParam0[iVar16 /*46*/])->f_2 + 1;
									if (iVar18 != iVar13)
									{
										iVar18 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								if (func_357(iParam5))
								{
									func_356(uParam1, uParam3, iVar17, Var3, sVar1, iVar7, iVar8, func_30(), iVar15, fVar10, iVar8, iVar12, &((uParam0[iVar16 /*46*/])->f_36), &((uParam0[iVar16 /*46*/])->f_40), (uParam0[iVar16 /*46*/])->f_44, iVar13, bParam6);
								}
								else
								{
									func_356(uParam1, uParam3, iVar17, Var3, sVar1, iVar7, iVar8, func_30(), iVar15, fVar10, iVar11, iVar12, &((uParam0[iVar16 /*46*/])->f_36), &((uParam0[iVar16 /*46*/])->f_40), (uParam0[iVar16 /*46*/])->f_44, iVar13, bParam6);
								}
								unk_0xD0E2BFCE93AE3ABD(&iVar14, iVar0);
								iVar17++;
							}
							iVar16++;
						}
						iVar16 = 0;
						while (iVar16 < 32)
						{
							iVar0 = unk_0x42C0B50857BF923B(iVar16);
							if (func_10(iVar0, 0, 1) && !unk_0x889D01384B54BCE3(iVar14, iVar0))
							{
								iVar0 = unk_0x42C0B50857BF923B(iVar16);
							}
							else
							{
								iVar0 = func_34();
							}
							if (func_381(iVar0))
							{
								if (func_10(unk_0x42C0B50857BF923B(iVar16), 0, 1))
								{
									iVar9 = iVar0;
									uParam3->f_39[iVar9 /*2*/].f_1 = iVar17;
									iVar7 = Global_1583725[iVar9 /*334*/].f_188.f_6;
									Var3 = { func_371(iVar0) };
									*(uParam4[iVar16 /*13*/]) = { func_177(iVar0) };
									iVar2 = func_364(iVar0);
									sVar1 = "";
									if (iVar2 != 0)
									{
										sVar1 = unk_0xE60D88CF3EF91AA6(iVar2);
									}
									Global_1573537++;
									func_348(unk_0xF3E5891C26514A74(iVar0), uParam1, uParam3, iVar17, Var3, sVar1, iVar7, 116, iVar15);
									iVar17++;
								}
							}
							iVar16++;
						}
						if (unk_0x889D01384B54BCE3(uParam3->f_34, 11))
						{
							func_345(uParam3, uParam1);
						}
						func_19(&(uParam3->f_22));
						func_344();
						uParam3->f_28 = 2;
					}
					if (uParam3->f_28 == 2)
					{
						if (!unk_0x889D01384B54BCE3(uParam3->f_34, 7))
						{
							func_343(uParam3, uParam1);
							func_342(uParam1, 0, 1);
							unk_0xD0E2BFCE93AE3ABD(&(uParam3->f_34), 7);
						}
						func_343(uParam3, uParam1);
						if (!unk_0x889D01384B54BCE3(uParam3->f_34, 11))
						{
							unk_0xD0E2BFCE93AE3ABD(&(uParam3->f_34), 11);
						}
						if (func_339(uParam3))
						{
							Global_1573685 = 1;
						}
						func_337(uParam3);
						if (Global_1573685 == 1)
						{
							uParam3->f_28 = 0;
						}
						if (Global_1573685 == 2)
						{
							uParam3->f_28 = 0;
						}
					}
					if (unk_0xC8378A96673BCC40(*uParam1))
					{
						unk_0xFA5652FA48ED466D(7);
						unk_0x782CAB485999E384(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0xFA5652FA48ED466D(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_28 = 0;
			func_344();
			func_384(0);
			if (unk_0x889D01384B54BCE3(uParam3->f_34, 7))
			{
				unk_0x29DB79DD4D939B38(&(uParam3->f_34), 7);
			}
			if (unk_0x889D01384B54BCE3(uParam3->f_34, 10))
			{
				unk_0x29DB79DD4D939B38(&(uParam3->f_34), 10);
			}
		}
	}
	unk_0xD599E2B13BA25D7B();
}

void func_337(var uParam0)
{
	if (!func_20(&(uParam0->f_22)))
	{
		func_2(&(uParam0->f_22), 0, 0);
	}
	else if (func_1(&(uParam0->f_22), 250, 0))
	{
		func_19(&(uParam0->f_22));
		func_338(0);
	}
}

void func_338(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573685 != 2)
		{
			Global_1573685 = 2;
		}
	}
	else
	{
		switch (Global_1573685)
		{
			case 0:
				Global_1573685 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_339(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_38;
	iVar15 = unk_0x42C0B50857BF923B(uParam0->f_38);
	if (iVar15 != func_34() && func_10(iVar15, 0, 1))
	{
		Var2 = { func_177(iVar15) };
		iVar1 = func_341(uParam0, uParam0->f_38);
		if (func_370(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0xEFF09B29F0DB6F5C(&Var2))
					{
						if (unk_0x2BC34DF05A24E9CB(&Var2))
						{
							iVar16 = 1;
							func_340(uParam0, iVar0, 2);
						}
					}
					else if (unk_0xE545250CC148D65F(&Var2))
					{
						iVar16 = 1;
						func_340(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0xEFF09B29F0DB6F5C(&Var2))
					{
						if (!unk_0x2BC34DF05A24E9CB(&Var2))
						{
							iVar16 = 1;
							func_340(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_340(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0xEFF09B29F0DB6F5C(&Var2))
					{
						if (!unk_0xE545250CC148D65F(&Var2))
						{
							iVar16 = 1;
							func_340(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0xE545250CC148D65F(&Var2))
					{
						iVar16 = 1;
						func_340(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_38++;
	if (uParam0->f_38 >= 32)
	{
		uParam0->f_38 = 0;
	}
	return iVar16;
}

void func_340(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_39[iParam1 /*2*/] = iParam2;
}

var func_341(var uParam0, int iParam1)
{
	return uParam0->f_39[iParam1 /*2*/];
}

void func_342(var uParam0, int iParam1, int iParam2)
{
	if (unk_0xB067107D878E9585(*uParam0, "COLLAPSE"))
	{
		unk_0xF34EF2C628F5B47B(iParam1);
		unk_0xD3DF251F2DF3B257();
	}
	if (iParam2 == 1)
	{
		if (unk_0xB067107D878E9585(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xD3DF251F2DF3B257();
		}
	}
}

void func_343(var uParam0, var uParam1)
{
	if (!unk_0x889D01384B54BCE3(uParam0->f_34, 10))
	{
		unk_0xB067107D878E9585(*uParam1, "SET_HIGHLIGHT");
		unk_0x26221D1D76579618(uParam0->f_36);
		unk_0xD3DF251F2DF3B257();
		unk_0xD0E2BFCE93AE3ABD(&(uParam0->f_34), 10);
	}
}

void func_344()
{
	if (Global_1573685 != 0)
	{
		Global_1573685 = 0;
	}
}

void func_345(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x42C0B50857BF923B(iVar0);
		if (iVar2 != func_34())
		{
			if (func_10(iVar2, 0, 1))
			{
				if (uParam0->f_39[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_347(uParam0->f_39[iVar0 /*2*/]);
					func_346(uParam1, uParam0->f_39[iVar0 /*2*/].f_1, iVar1, Global_1583725[iVar0 /*334*/].f_188.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_346(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xC8378A96673BCC40(*uParam0))
	{
		if (unk_0xB067107D878E9585(*uParam0, "SET_ICON"))
		{
			unk_0x26221D1D76579618(iParam1);
			unk_0x26221D1D76579618(iParam2);
			if (iParam2 == 65)
			{
				unk_0x26221D1D76579618(iParam3);
			}
			unk_0xD3DF251F2DF3B257();
		}
	}
}

int func_347(int iParam0)
{
	int iVar0;
	
	iVar0 = 65;
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

void func_348(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_355() && iParam3 < func_354())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1573539)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573685 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xB067107D878E9585(*uParam1, sVar1))
		{
			unk_0x26221D1D76579618(iParam3);
			if (unk_0x889D01384B54BCE3(uParam2->f_34, 8) || uParam2->f_107 == 6)
			{
				func_353("");
			}
			else
			{
				unk_0x26221D1D76579618(iParam9);
			}
			func_353(sParam0);
			unk_0x26221D1D76579618(iParam10);
			if (uParam2->f_107 == 6)
			{
				func_353("");
			}
			else
			{
				unk_0x26221D1D76579618(65);
			}
			unk_0x26221D1D76579618(-1);
			func_353("");
			if (uParam2->f_107 == 6)
			{
				func_353("");
			}
			else
			{
				func_353(&sParam4);
			}
			unk_0xF34EF2C628F5B47B(uParam2->f_37);
			unk_0x6B8FD933B7DA793E(sParam8);
			unk_0x6B8FD933B7DA793E(sParam8);
			if (func_352(uParam2))
			{
				func_351("DPAD_FRIEND");
			}
			else if (func_350(uParam2))
			{
				func_351("DPAD_FRIEND");
			}
			else if (func_349(uParam2))
			{
				func_351("DPAD_CREW");
			}
			else
			{
				func_351("");
			}
			unk_0xD3DF251F2DF3B257();
		}
	}
}

bool func_349(var uParam0)
{
	return unk_0x889D01384B54BCE3(uParam0->f_34, 6);
}

bool func_350(var uParam0)
{
	return unk_0x889D01384B54BCE3(uParam0->f_34, 5);
}

void func_351(char* sParam0)
{
	unk_0xEBC0B3BDAD1250BE(sParam0);
	unk_0x9F94C7B5E8C04AB3();
}

int func_352(var uParam0)
{
	if (func_350(uParam0) && func_349(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_353(char* sParam0)
{
	unk_0xB51F3A5C13620EE6(sParam0);
}

int func_354()
{
	int iVar0;
	
	if (Global_1573539)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_355()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573539)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_356(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, var uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam2 >= func_355() && iParam2 < func_354())
	{
		iParam2 = (iParam2 % 16);
		iVar0 = iParam2 + 1;
		if (Global_1573539)
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
		if (Global_1573685 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xC8378A96673BCC40(*uParam0))
		{
			if (unk_0xB067107D878E9585(*uParam0, sVar1))
			{
				unk_0x26221D1D76579618(iParam2);
				if (unk_0x889D01384B54BCE3(uParam1->f_34, 8) || uParam1->f_107 == 6)
				{
					func_353("");
				}
				else
				{
					unk_0x26221D1D76579618(iParam8);
				}
				if (uParam1->f_107 == 6 && !unk_0x06771AF7795B3ECF(sParam15))
				{
					func_351(sParam15);
				}
				else
				{
					func_353(&(uParam1->f_1));
				}
				unk_0x26221D1D76579618(iParam10);
				if (uParam1->f_107 == 6)
				{
					func_353("");
				}
				else
				{
					unk_0x26221D1D76579618(65);
				}
				if (iParam11 == 1)
				{
					unk_0x26221D1D76579618(iVar0);
				}
				else
				{
					unk_0x26221D1D76579618(-1);
				}
				if (func_382())
				{
					func_353("");
				}
				else if (uParam1->f_107 == 6 && !unk_0x06771AF7795B3ECF(sParam15))
				{
					unk_0xEBC0B3BDAD1250BE("FM_AE_ONE_INT");
					unk_0x4498E0CBD76B2D72(sParam15);
					unk_0x53B64327E3305DCB(iParam17);
					unk_0x9F94C7B5E8C04AB3();
				}
				else if (uParam1->f_107 == 5 && !unk_0x06771AF7795B3ECF(sParam15))
				{
					unk_0xEBC0B3BDAD1250BE("FM_AE_ONE_INT");
					unk_0x4498E0CBD76B2D72(sParam15);
					unk_0x53B64327E3305DCB(iParam17);
					unk_0x9F94C7B5E8C04AB3();
				}
				else if ((uParam1->f_107 == 7 && !unk_0x06771AF7795B3ECF(sParam15)) && !unk_0x06771AF7795B3ECF(sParam16))
				{
					unk_0xEBC0B3BDAD1250BE("FM_AE_TWO_INT");
					unk_0x4498E0CBD76B2D72(sParam15);
					unk_0x4498E0CBD76B2D72(sParam16);
					unk_0x53B64327E3305DCB(iParam17);
					unk_0x9F94C7B5E8C04AB3();
				}
				else if (uParam1->f_107 == 8 && !unk_0x06771AF7795B3ECF(uParam1->f_104))
				{
					unk_0xEBC0B3BDAD1250BE("FM_AE_UNIT");
					if (fParam12 != -1f)
					{
						unk_0xC8C41AD5B003B30B(fParam12, 1);
					}
					if (iParam9 != -1)
					{
						unk_0x53B64327E3305DCB(iParam9);
					}
					unk_0x4498E0CBD76B2D72(uParam1->f_104);
					unk_0x9F94C7B5E8C04AB3();
				}
				else if (uParam1->f_107 == 9)
				{
					unk_0xEBC0B3BDAD1250BE("FM_AE_CASH");
					unk_0x3EF8973FC4AD58A6(iParam9, 1);
					unk_0x9F94C7B5E8C04AB3();
				}
				else if (iParam14 > -1)
				{
					if (iParam14 == 0 && !unk_0x06771AF7795B3ECF(uParam1->f_104))
					{
						func_351(uParam1->f_104);
					}
					else
					{
						func_353("");
					}
				}
				else if (iParam13 != -1)
				{
					unk_0xEBC0B3BDAD1250BE("STRING");
					unk_0xECACDB29F7B53568(iParam13, 6);
					unk_0x9F94C7B5E8C04AB3();
				}
				else if (fParam12 != -1f)
				{
					unk_0xEBC0B3BDAD1250BE("NUMBER");
					unk_0xC8C41AD5B003B30B(fParam12, 1);
					unk_0x9F94C7B5E8C04AB3();
				}
				else if (iParam9 != -1)
				{
					unk_0x26221D1D76579618(iParam9);
				}
				else
				{
					func_353("");
				}
				if (uParam1->f_107 == 6)
				{
					func_353("");
				}
				else
				{
					func_353(&sParam3);
				}
				unk_0xF34EF2C628F5B47B(uParam1->f_37);
				if (iParam11 == 1 || unk_0x06771AF7795B3ECF(sParam7))
				{
					func_353("");
					func_353("");
				}
				else
				{
					unk_0x6B8FD933B7DA793E(sParam7);
					unk_0x6B8FD933B7DA793E(sParam7);
				}
				if (func_352(uParam1))
				{
					func_351("DPAD_FRIEND");
				}
				else if (func_350(uParam1))
				{
					func_351("DPAD_FRIEND");
				}
				else if (func_349(uParam1))
				{
					func_351("DPAD_CREW");
				}
				else
				{
					func_351("");
				}
				unk_0xD3DF251F2DF3B257();
			}
		}
	}
}

int func_357(int iParam0)
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

char* func_358(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0xED95B7AD31CFE356())
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
			if (unk_0xED95B7AD31CFE356())
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

int func_359(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_363(iParam3))
	{
		*fParam1 = (func_360(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_357(iParam3))
	{
		*fParam1 = (func_360(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_360(int iParam0, int iParam1)
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
			if (unk_0xED95B7AD31CFE356())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_362(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0xED95B7AD31CFE356())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_361(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_361(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_362(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_363(int iParam0)
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

int func_364(int iParam0)
{
	int iVar0;
	
	iVar0 = func_367(iParam0);
	if (iVar0 == -1)
	{
		func_365(iParam0, 1);
		return 0;
	}
	Global_1337286[iVar0 /*5*/].f_4 = 1;
	return Global_1337286[iVar0 /*5*/].f_2;
}

void func_365(int iParam0, bool bParam1)
{
	if (!func_10(iParam0, 0, 1))
	{
		return;
	}
	if (func_367(iParam0) != -1)
	{
		return;
	}
	if (Global_1337449)
	{
		if (iParam0 == Global_1337449.f_1)
		{
			return;
		}
	}
	if (func_366(iParam0))
	{
		return;
	}
	if (Global_1337487 >= 32)
	{
		return;
	}
	Global_1337454[Global_1337487] = iParam0;
	Global_1337487++;
	if (bParam1)
	{
	}
}

int func_366(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1337487)
	{
		if (Global_1337454[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_367(int iParam0)
{
	int iVar0;
	
	if (!func_10(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1337447 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1337447)
	{
		if (Global_1337286[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xA18877A025EABCF1(Global_1337286[iVar0 /*5*/].f_2) && unk_0x1285CB0DD714CE61(Global_1337286[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_368(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_368(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1337447)
	{
		return;
	}
	if (unk_0xA18877A025EABCF1(Global_1337286[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1337286[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xE60D88CF3EF91AA6(Global_1337286[iParam0 /*5*/].f_2), 64);
			unk_0x5F0F8D01B163177A(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x8138315499FE0236(Global_1337286[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1337447)
	{
		Global_1337286[iVar32 /*5*/] = { Global_1337286[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_369(&(Global_1337286[iVar32 /*5*/]));
	Global_1337447 = (Global_1337447 - 1);
}

void func_369(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_34();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x1DAD7CE53BEE7710())
	{
		uParam0->f_3 = unk_0x519586565311459B();
	}
}

bool func_370(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x6812E31A0CF4755C(&uParam0, 13);
}

struct<4> func_371(int iParam0)
{
	struct<4> Var0;
	
	if (func_10(iParam0, 0, 1))
	{
		Global_2446020 = { func_177(iParam0) };
		if (unk_0x9F979F481F18EB48())
		{
			if (func_370(Global_2446020))
			{
				if (!unk_0x31A93954A8F8AFE7(&Global_2446020))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xBABFA3519D8F7A45(0))
		{
			return Var0;
		}
		if (func_375(&Global_2446020))
		{
			Global_2445950 = { func_373(iParam0) };
			func_372(&Global_2445950, &Var0);
		}
	}
	return Var0;
}

void func_372(var uParam0, var uParam1)
{
	unk_0x94AA7376446847C6(uParam0, 35, uParam1);
}

struct<35> func_373(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_374(iParam0))
	{
		return Global_1315925[unk_0x1788E93557766241() /*35*/];
	}
	Var0 = { func_177(iParam0) };
	unk_0x55FB44C9EE7B72D8(&Var13, 35, &Var0);
	return Var13;
}

int func_374(int iParam0)
{
	if (iParam0 == unk_0x1788E93557766241())
	{
		return 1;
	}
	return 0;
}

int func_375(var uParam0)
{
	if (unk_0x1162FE3C5A637040())
	{
		if (unk_0x70443014BEB6B15D() && unk_0x9A6FFB0772343488(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_376(int iParam0)
{
	if (func_6(iParam0) || func_380(iParam0))
	{
		return 0;
	}
	if (!func_379(iParam0))
	{
		return 0;
	}
	if ((!func_378(iParam0) && Global_2414327[iParam0 /*255*/].f_230 == -1) && !func_377(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_377(int iParam0)
{
	return Global_1583725[iParam0 /*334*/].f_173 != 0;
}

int func_378(int iParam0)
{
	if (func_10(iParam0, 0, 1))
	{
		if (func_10(unk_0x1788E93557766241(), 0, 1))
		{
			if (unk_0x6871380D51134D0D(iParam0, unk_0x1788E93557766241()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_379(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_1583725[iParam0 /*334*/].f_124, 22);
}

int func_380(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x889D01384B54BCE3(Global_1602607[iParam0 /*12*/].f_1, 10) || unk_0x889D01384B54BCE3(Global_1602607[iParam0 /*12*/].f_1, 9));
	}
	return 0;
}

int func_381(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_34())
	{
		return 0;
	}
	if (func_134(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x889D01384B54BCE3(Global_1583725[iVar0 /*334*/].f_124, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_382()
{
	switch (func_258(unk_0x1788E93557766241()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	return 0;
}

void func_383(var uParam0)
{
	if (unk_0xC8378A96673BCC40(*uParam0))
	{
		unk_0xB067107D878E9585(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0x26221D1D76579618(0);
		unk_0xD3DF251F2DF3B257();
	}
}

void func_384(bool bParam0)
{
	if (bParam0)
	{
		Global_1327584.f_2 = 1;
	}
	else
	{
		Global_1327584.f_2 = 0;
	}
}

void func_385()
{
	if (unk_0x889D01384B54BCE3(Global_2446992.f_4402, 1))
	{
		if (func_241())
		{
			func_234();
		}
	}
}

int func_386()
{
	if (unk_0x889D01384B54BCE3(Global_2446992.f_4402, 0) && func_241())
	{
		return 1;
	}
	if (unk_0x889D01384B54BCE3(Global_2446992.f_4402, 1) && func_241())
	{
		return 1;
	}
	return 0;
}

int func_387()
{
	if (func_241())
	{
		if (func_31(Global_2422491.f_2136[0 /*70*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_388(int iParam0)
{
	Global_1327584.f_1 = Global_1327584;
	Global_1327584 = iParam0;
}

int func_389(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	bool bVar4;
	bool bVar5;
	float fVar6;
	int iVar7;
	
	StringCopy(&Var0, "", 16);
	bVar5 = func_421(iParam1);
	if (iParam1 == 17)
	{
		bVar4 = true;
	}
	fVar6 = func_420();
	if (iParam1 == 23)
	{
		if (func_419())
		{
			if (func_418() > 0 && Global_1573539)
			{
				unk_0x4B97E990CAFEB8CF();
				unk_0x1F4FE6D0BB9E338B(fVar6);
				unk_0x8A5A9834DB717F2D(18);
				if (unk_0x11A809BBE3889742())
				{
					unk_0xCCC2311C8DF9914D();
				}
			}
		}
	}
	if (!bParam5)
	{
		if (!func_410())
		{
			func_409(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x889D01384B54BCE3(Global_2446992.f_4405, 25))
	{
		func_409(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_20(&(uParam2->f_20)))
	{
		if (func_418() == 1)
		{
			func_408(bVar5, uParam0, 0);
			func_2(&(uParam2->f_20), 0, 0);
			func_409(uParam0, uParam2, 0);
		}
	}
	if (func_20(&(uParam2->f_20)) || bParam5)
	{
		if (unk_0x11A809BBE3889742())
		{
			unk_0xCCC2311C8DF9914D();
		}
		if (func_1(&(uParam2->f_20), 10000, 0) || (func_418() == 0 && !bParam5))
		{
			func_409(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar4 == 0)
			{
				func_407();
				if (iParam1 == 23)
				{
					unk_0x4B97E990CAFEB8CF();
				}
				unk_0x8A5A9834DB717F2D(18);
			}
			if (unk_0x889D01384B54BCE3(uParam2->f_34, 0))
			{
				Global_1573537 = uParam3;
				Global_1573536 = 1;
				unk_0x1F4FE6D0BB9E338B(fVar6);
				if (bVar4)
				{
					if (uParam2->f_35 != Global_1573538)
					{
						unk_0x29DB79DD4D939B38(&(uParam2->f_34), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar4 == 0)
				{
					func_407();
					if (iParam1 == 23)
					{
						unk_0x4B97E990CAFEB8CF();
					}
					unk_0x8A5A9834DB717F2D(18);
				}
				unk_0x1F4FE6D0BB9E338B(fVar6);
				if (func_408(bVar5, uParam0, 0))
				{
					func_383(uParam0);
					uParam2->f_17 = func_405(iParam1, &(Global_1604248.f_58254), bParam4);
					if (unk_0x06771AF7795B3ECF(uParam2->f_17))
					{
						uParam2->f_17 = func_405(iParam1, &(Global_1604248.f_58254), bParam4);
					}
					if (bParam4)
					{
						func_402(uParam0, uParam2->f_17, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_396(uParam0, func_399(uParam2), func_397(uParam2), -1);
					}
					else if (bVar4)
					{
						uParam2->f_35 = Global_1573538;
						func_402(uParam0, uParam2->f_17, "", 0, -1, Global_1573538, 1);
					}
					else
					{
						Var0 = { func_394(iParam1) };
						iVar7 = func_390(iParam1);
						func_402(uParam0, uParam2->f_17, &Var0, 1, iVar7, -1, 1);
					}
					unk_0xD0E2BFCE93AE3ABD(&(uParam2->f_34), 0);
				}
			}
		}
	}
	return 0;
}

int func_390(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
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
			if (func_393(unk_0x1788E93557766241()))
			{
				iVar0 = 20;
			}
			if (func_392(unk_0x1788E93557766241()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_391(unk_0x1788E93557766241()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_391(int iParam0)
{
	return Global_2414327[iParam0 /*255*/].f_114 == 4;
}

bool func_392(int iParam0)
{
	return Global_2414327[iParam0 /*255*/].f_114 == 7;
}

bool func_393(int iParam0)
{
	return Global_2414327[iParam0 /*255*/].f_114 == 2;
}

struct<4> func_394(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_395(unk_0x1788E93557766241()) || func_391(unk_0x1788E93557766241()))
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
			StringIntConCat(&Var0, Global_1604248.f_17, 16);
			break;
	}
	return Var0;
}

bool func_395(int iParam0)
{
	return Global_2414327[iParam0 /*255*/].f_114 == 5;
}

void func_396(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xC8378A96673BCC40(*uParam0))
	{
		unk_0xB067107D878E9585(*uParam0, "SET_TITLE");
		if (unk_0x06771AF7795B3ECF(uParam2))
		{
			func_351(uParam1);
		}
		else if (func_258(unk_0x1788E93557766241()) == 133)
		{
			unk_0xEBC0B3BDAD1250BE("FM_AE_BRACKT_C");
			unk_0x4498E0CBD76B2D72(uParam1);
			unk_0x4498E0CBD76B2D72(sParam2);
			unk_0x9F94C7B5E8C04AB3();
		}
		else
		{
			unk_0xEBC0B3BDAD1250BE("FM_AE_BRACKT");
			unk_0x4498E0CBD76B2D72(sParam1);
			unk_0x4498E0CBD76B2D72(sParam2);
			unk_0x9F94C7B5E8C04AB3();
		}
		func_351("");
		if (iParam3 != -1)
		{
			unk_0x26221D1D76579618(iParam3);
		}
		unk_0xD3DF251F2DF3B257();
	}
}

char* func_397(var uParam0)
{
	if (func_398() && !unk_0x06771AF7795B3ECF(uParam0->f_106))
	{
		return uParam0->f_106;
	}
	else
	{
		switch (func_258(unk_0x1788E93557766241()))
		{
			case 131:
				return "";
			
			case 132:
				return "FM_AE_SORT_5";
			
			case 133:
				switch (func_257())
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
	}
	return "";
}

bool func_398()
{
	return Global_1583724;
}

char* func_399(var uParam0)
{
	if (func_398() && !unk_0x06771AF7795B3ECF(uParam0->f_105))
	{
		return uParam0->f_105;
	}
	else
	{
		switch (func_258(unk_0x1788E93557766241()))
		{
			case 131:
				return "PIM_TA9";
			
			case 132:
				if (func_401() == 0)
				{
					return "CPC_TILEL";
				}
				else if (func_401() == 1)
				{
					return "CPC_TILELA";
				}
				return "PIM_TA0";
				break;
			
			case 133:
				switch (func_257())
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
				if (func_400() == 1)
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
	}
	return "";
}

int func_400()
{
	return Global_2446992.f_4623;
}

int func_401()
{
	if (func_258(unk_0x1788E93557766241()) == 132)
	{
		return Global_2446992.f_4618;
	}
	return -1;
}

void func_402(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC8378A96673BCC40(*uParam0))
	{
		unk_0xB067107D878E9585(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_353(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0xEBC0B3BDAD1250BE(uParam1);
			unk_0x53B64327E3305DCB(iParam5);
			unk_0x9F94C7B5E8C04AB3();
		}
		else
		{
			func_351(sParam1);
		}
		if (func_419() && iParam6)
		{
			if (func_404())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0xEBC0B3BDAD1250BE("LBD_DPD_CNT");
			unk_0x53B64327E3305DCB(iVar0);
			unk_0x53B64327E3305DCB(iVar1);
			unk_0x9F94C7B5E8C04AB3();
		}
		else
		{
			func_351(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0x26221D1D76579618(iParam4);
			if (func_403(unk_0x1788E93557766241()))
			{
				unk_0x26221D1D76579618(166);
			}
		}
		unk_0xD3DF251F2DF3B257();
	}
}

int func_403(int iParam0)
{
	if (func_393(iParam0) || func_392(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_404()
{
	return Global_1573539;
}

char* func_405(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_406();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573703 == 0)
		{
			Global_1573703 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x06771AF7795B3ECF(uParam1))
	{
		if (Global_1573703 == 1)
		{
			Global_1573703 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573703 == 0)
		{
			Global_1573703 = 1;
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

char* func_406()
{
	if (unk_0x0ECFB4741538685D())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x5A6940327DC87D8C())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x6F6D700F89FC8C84())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x412748A9F328962B())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_407()
{
	Global_35737 = 1;
}

bool func_408(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x36ECDA4DD9A3F08D("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x36ECDA4DD9A3F08D("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x36ECDA4DD9A3F08D("mp_matchmaking_card");
	}
	return unk_0xC8378A96673BCC40(*uParam1);
}

void func_409(var uParam0, var uParam1, bool bParam2)
{
	unk_0x29DB79DD4D939B38(&(uParam1->f_34), 7);
	Global_1573537 = 0;
	func_344();
	Global_1573536 = 0;
	uParam1->f_28 = 0;
	if (bParam2)
	{
		if (func_20(&(uParam1->f_20)))
		{
			func_19(&(uParam1->f_20));
		}
	}
	if (unk_0xC8378A96673BCC40(*uParam0))
	{
		unk_0x7559DFAB61B017F2(uParam0);
	}
	if (unk_0x889D01384B54BCE3(uParam1->f_34, 0))
	{
		unk_0x29DB79DD4D939B38(&(uParam1->f_34), 0);
	}
	unk_0x1F4FE6D0BB9E338B(0f);
}

int func_410()
{
	if (func_417())
	{
		return 0;
	}
	if (func_330())
	{
		return 0;
	}
	if (!func_415())
	{
		return 0;
	}
	if (!func_327())
	{
		return 0;
	}
	if (func_414(8, -1))
	{
		return 0;
	}
	if (func_418() == 2)
	{
		return 0;
	}
	if (Global_2446992.f_4386)
	{
		return 0;
	}
	if (func_254())
	{
		return 0;
	}
	else if (!func_279(unk_0x1788E93557766241(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_413(1) || func_411(1)) || Global_17099.f_124) || Global_17099)
	{
		return 0;
	}
	if (unk_0x2B0FFD431FD5A9FA())
	{
		return 0;
	}
	if (func_263(unk_0x1788E93557766241()))
	{
		return 0;
	}
	if (Global_1690013)
	{
		return 0;
	}
	if (Global_1690016)
	{
		return 0;
	}
	return 1;
}

int func_411(bool bParam0)
{
	if (unk_0xEFA77CBA432BF4A0())
	{
		if (!unk_0x2DE0B96E966FD817(unk_0xA16EC202D9D35357()))
		{
			if (func_412(unk_0xA16EC202D9D35357()))
			{
				if (unk_0xF49761626882E968(0, 25) || unk_0xF49761626882E968(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17099.f_130)
	{
		return 0;
	}
	if (unk_0xF49761626882E968(0, 19) || (!bParam0 && unk_0x4E151C54AB29940C(0, 19)))
	{
		return 1;
	}
	if (unk_0xF6BAF9F0C2863FFE())
	{
		if (((unk_0xF49761626882E968(0, 166) || unk_0xF49761626882E968(0, 167)) || unk_0xF49761626882E968(0, 168)) || unk_0xF49761626882E968(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x4E151C54AB29940C(0, 166) || unk_0x4E151C54AB29940C(0, 167)) || unk_0x4E151C54AB29940C(0, 168)) || unk_0x4E151C54AB29940C(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_412(int iParam0)
{
	int iVar0;
	
	if (unk_0x6C32B24E6B794217())
	{
		if (!unk_0x2DE0B96E966FD817(uParam0))
		{
			unk_0xC00D643B16552C4D(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_413(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17099.f_4 && Global_17099.f_104 == 4);
	}
	return Global_17099.f_4;
}

bool func_414(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327587.f_203[iParam1];
			}
			break;
	}
	return unk_0x889D01384B54BCE3(Global_1327587.f_949, iParam0);
}

int func_415()
{
	if (func_416())
	{
		return 1;
	}
	if (unk_0xF4C685E933068D23())
	{
		return 0;
	}
	if (unk_0xE9A5FF67266655B2() || unk_0x0FFB470AFBDA3DCD())
	{
		return 0;
	}
	if (unk_0xD8FED4345E7C9A31())
	{
		return 0;
	}
	return 1;
}

bool func_416()
{
	return Global_1312438;
}

bool func_417()
{
	return unk_0x09560C7DE2A384BD() <= Global_17238.f_5130 + 100;
}

int func_418()
{
	return Global_1327587.f_68;
}

int func_419()
{
	if (Global_1573538 > 16)
	{
		return 1;
	}
	return 0;
}

float func_420()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0xF2FBCB1117606FD1()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_421(int iParam0)
{
	switch (iParam0)
	{
		case 17:
		case 23:
			return 1;
			break;
	}
	return 0;
}

int func_422()
{
	if (func_425())
	{
		return 1;
	}
	if (func_5(unk_0x1788E93557766241()))
	{
		return 0;
	}
	if (func_398())
	{
		return 1;
	}
	if (func_424(unk_0x1788E93557766241()))
	{
		switch (func_258(unk_0x1788E93557766241()))
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
				if (!func_423(unk_0x1788E93557766241()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_423(unk_0x1788E93557766241()))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool func_423(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_1602607[iParam0 /*12*/].f_1, 4);
}

int func_424(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1602607[iVar0 /*12*/] != -1;
	}
	return 0;
}

int func_425()
{
	if (func_426(unk_0x1788E93557766241()))
	{
		return Global_1318826;
	}
	return 0;
}

int func_426(int iParam0)
{
	if (func_134(iParam0, 0))
	{
		return unk_0xAD61ABFD1C9E1E0E(iParam0);
	}
	return 0;
}

void func_427()
{
	int iVar0;
	
	if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(iLocal_93)))
	{
		iVar0 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(iLocal_93));
		if (unk_0x38FA37FE3518BA38(iVar0))
		{
			func_428(iVar0, 2);
		}
	}
	iLocal_93++;
	if (iLocal_93 >= unk_0x3F202553F90D4442())
	{
		iLocal_93 = 0;
	}
}

void func_428(int iParam0, int iParam1)
{
	if (unk_0x889D01384B54BCE3(Global_1573734.f_1, 0))
	{
		return;
	}
	if (func_20(&(Global_1573734.f_18)))
	{
		return;
	}
	if (unk_0x889D01384B54BCE3(Global_1573734.f_2, iParam0))
	{
		if (Global_1573734 < iParam1 && unk_0x889D01384B54BCE3(Global_1573734.f_1, 1))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 0);
			return;
		}
		if (Global_1573734 != 0)
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 1);
		}
		Global_1573734 = 0;
		Global_1573734.f_2 = 0;
	}
	unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_2), iParam0);
	if (((!func_6(iParam0) && !func_429(iParam0)) && !func_134(iParam0, 0)) && !func_5(iParam0))
	{
		Global_1573734++;
	}
}

bool func_429(int iParam0)
{
	return unk_0x889D01384B54BCE3(Global_1602607[iParam0 /*12*/].f_1, 10);
}

void func_430(int iParam0, int iParam1)
{
	Local_2158[iParam0 /*7*/] = iParam1;
}

int func_431()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_159.f_526[iVar0 /*46*/].f_1 = func_34();
		iVar0++;
	}
	return 1;
	return 0;
}

int func_432()
{
	return Local_106.f_0;
}

int func_433(int iParam0)
{
	return Local_2158[iParam0 /*7*/];
}

void func_434()
{
	if (unk_0x889D01384B54BCE3(Global_1573734.f_1, 6))
	{
		func_450();
		unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 6);
	}
	if (!unk_0x889D01384B54BCE3(Global_1573734.f_1, 7))
	{
		if (unk_0x889D01384B54BCE3(Global_1573734.f_1, 4) || unk_0x889D01384B54BCE3(Global_1573734.f_1, 16))
		{
			if (((!unk_0xF1F4C42EF94F5FDD() && !unk_0x11A809BBE3889742()) && !func_241()) && func_10(unk_0x1788E93557766241(), 1, 1))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 7);
				func_320("FME_PASINT", 30000);
				func_319(1);
			}
		}
		else if (unk_0x889D01384B54BCE3(Global_1573734.f_1, 17))
		{
			if (func_285() && !func_310())
			{
				unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 17);
				unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 16);
			}
		}
	}
	if (!unk_0x889D01384B54BCE3(Global_1573734.f_1, 23))
	{
		if (((((!unk_0xF1F4C42EF94F5FDD() && !unk_0x889D01384B54BCE3(Global_2446992.f_734, 2)) && func_10(unk_0x1788E93557766241(), 1, 1)) && !Global_67066) && !Global_51940) && !unk_0x11A809BBE3889742())
		{
			if (func_448())
			{
				func_320("AMEV_GA_RP", -1);
				func_319(1);
				unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 23);
			}
		}
	}
	if (unk_0x2B0FFD431FD5A9FA() && unk_0xB0E35FF1A90C8FAA() == 15)
	{
		if (func_447(unk_0x1788E93557766241()))
		{
			if (!unk_0xAA98A9C364883DB0(1344549371))
			{
				unk_0xCB1EDED1906BA7D4(1344549371);
			}
		}
		else if (unk_0xAA98A9C364883DB0(1344549371))
		{
			unk_0x71E34E871809D6EE(1344549371);
		}
	}
	if (unk_0x889D01384B54BCE3(Global_1573734.f_1, 9))
	{
		if ((((!unk_0xF1F4C42EF94F5FDD() && !unk_0x11A809BBE3889742()) && !func_241()) && func_10(unk_0x1788E93557766241(), 1, 1)) && !func_309(unk_0x1788E93557766241(), 21))
		{
			unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 9);
			func_446(0);
			func_320("FME_TBL00", -1);
			func_319(1);
		}
	}
	if (func_424(unk_0x1788E93557766241()))
	{
		if (!unk_0x889D01384B54BCE3(Global_1573734.f_1, 18))
		{
			if ((func_309(unk_0x1788E93557766241(), 21) && unk_0x889D01384B54BCE3(Global_1573734.f_1, 20)) && !unk_0x889D01384B54BCE3(Global_1573734.f_1, 19))
			{
				unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 18);
			}
		}
		else if (unk_0x889D01384B54BCE3(Global_1573734.f_1, 18))
		{
			if (((((!unk_0xF1F4C42EF94F5FDD() && !unk_0x11A809BBE3889742()) && !func_241()) && func_10(unk_0x1788E93557766241(), 1, 1)) && unk_0x83B393DE31BAC8F0()) && !Global_2446992.f_4627)
			{
				unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 18);
				unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 19);
				func_320("AMTT_RPAS", -1);
				func_319(1);
			}
		}
	}
	if ((((func_424(unk_0x1788E93557766241()) && !func_6(unk_0x1788E93557766241())) && func_258(unk_0x1788E93557766241()) != 146) && !func_5(unk_0x1788E93557766241())) && !func_334(unk_0x1788E93557766241()))
	{
		if (func_304(func_258(unk_0x1788E93557766241())))
		{
			unk_0xFAC75988A7D078D3(unk_0x1788E93557766241());
		}
		if (!unk_0x889D01384B54BCE3(Global_1573734.f_1, 22))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 22);
		}
		if (func_445(unk_0x1788E93557766241()) || func_299())
		{
			if (!unk_0x889D01384B54BCE3(Global_1573734.f_1, 10))
			{
				if (func_443(func_258(unk_0x1788E93557766241())))
				{
					if (func_220(0) && !Global_2391042)
					{
						unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 9);
					}
					func_303(1);
					unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 14);
				}
				unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 10);
			}
		}
		if (func_447(unk_0x1788E93557766241()))
		{
			if (!unk_0x889D01384B54BCE3(Global_1573734.f_1, 11))
			{
				if (!Global_90094.f_8)
				{
					unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 12);
					func_301(1);
				}
				if (!func_442())
				{
					unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 13);
					func_300();
				}
				if (!Global_2391042)
				{
					unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 14);
					if (func_220(0) && !Global_2391042)
					{
						unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 9);
					}
					func_303(1);
				}
				unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 11);
			}
		}
		else
		{
			func_440(0);
		}
	}
	else
	{
		func_440(1);
	}
	func_435();
	if (func_298(func_258(unk_0x1788E93557766241())) && !unk_0x889D01384B54BCE3(Global_1573734.f_1, 21))
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 21);
	}
	if ((func_285() && !func_310()) || func_309(unk_0x1788E93557766241(), 21))
	{
		if (!unk_0x889D01384B54BCE3(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1, 10))
		{
			unk_0xD0E2BFCE93AE3ABD(&(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1), 10);
		}
	}
	else if (unk_0x889D01384B54BCE3(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1, 10))
	{
		unk_0x29DB79DD4D939B38(&(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1), 10);
	}
}

void func_435()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_241())
	{
		iVar2 = 62;
		iVar2 = 0;
		while (iVar2 < 82)
		{
			if (func_296(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 62 || iVar0 >= 80)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (unk_0x889D01384B54BCE3(Global_1573734.f_1, 26))
				{
					unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 26);
				}
				func_436(iVar0, iVar1);
				iVar2 = 82;
			}
			iVar2++;
		}
	}
	else if (!unk_0x889D01384B54BCE3(Global_1573734.f_1, 26))
	{
		func_19(&(Global_1573734.f_21));
		unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 26);
	}
}

void func_436(int iParam0, int iParam1)
{
	if (!func_20(&(Global_1573734.f_21)))
	{
		func_2(&(Global_1573734.f_21), 0, 0);
	}
	else if (func_1(&(Global_1573734.f_21), iParam1, 0))
	{
		if (func_418() > 0)
		{
			func_439(iParam0);
			if (func_237("AMEV_LBD_HELP"))
			{
				unk_0xFD1E0AEC770DAF2E(1);
			}
			func_19(&(Global_1573734.f_21));
		}
	}
	else
	{
		func_438(0);
		func_437();
	}
}

void func_437()
{
	Global_2446992.f_4373 = 0;
}

void func_438(int iParam0)
{
	Global_1327587.f_68 = iParam0;
}

void func_439(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2422491.f_2136[iVar0 /*70*/].f_1 == iParam0)
		{
			Global_2422491.f_2136[iVar0 /*70*/].f_2 = 5;
			unk_0xD0E2BFCE93AE3ABD(&(Global_2422491.f_2136[iVar0 /*70*/].f_63), 0);
		}
		iVar0++;
	}
}

void func_440(int iParam0)
{
	if ((unk_0x889D01384B54BCE3(Global_1573734.f_1, 11) || (unk_0x889D01384B54BCE3(Global_1573734.f_1, 10) && iParam0)) || (unk_0x889D01384B54BCE3(Global_1573734.f_1, 22) && iParam0))
	{
		if (unk_0x889D01384B54BCE3(Global_1573734.f_1, 12))
		{
			unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 12);
			func_301(0);
		}
		if (unk_0x889D01384B54BCE3(Global_1573734.f_1, 13))
		{
			unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 13);
			func_441();
		}
		if (unk_0x889D01384B54BCE3(Global_1573734.f_1, 14))
		{
			unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 14);
			func_303(0);
		}
		unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 11);
		unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 10);
		unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 22);
	}
}

void func_441()
{
	unk_0x29DB79DD4D939B38(&(Global_2446992.f_4537), 0);
}

bool func_442()
{
	return unk_0x889D01384B54BCE3(Global_2446992.f_4537, 0);
}

int func_443(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_447(unk_0x1788E93557766241());
		
		case 133:
			return (func_299() || func_444(func_257()));
		
		default:
	}
	return 0;
}

int func_444(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_445(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_1602607[iVar0 /*12*/].f_1, 7);
	}
	return 0;
}

void func_446(int iParam0)
{
	int iVar0;
	
	iVar0 = func_64(2499, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0x889D01384B54BCE3(iVar0, 0))
		{
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 0);
		}
		else if (!unk_0x889D01384B54BCE3(iVar0, 1))
		{
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 1);
		}
		else if (!unk_0x889D01384B54BCE3(iVar0, 2))
		{
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0x889D01384B54BCE3(iVar0, 3))
		{
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 3);
		}
		else if (!unk_0x889D01384B54BCE3(iVar0, 4))
		{
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 4);
		}
		else if (!unk_0x889D01384B54BCE3(iVar0, 5))
		{
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0x889D01384B54BCE3(iVar0, 6))
		{
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 6);
		}
		else if (!unk_0x889D01384B54BCE3(iVar0, 7))
		{
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 7);
		}
		else if (!unk_0x889D01384B54BCE3(iVar0, 8))
		{
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0x889D01384B54BCE3(iVar0, 9))
		{
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 9);
		}
		else if (!unk_0x889D01384B54BCE3(iVar0, 10))
		{
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 10);
		}
		else if (!unk_0x889D01384B54BCE3(iVar0, 11))
		{
			unk_0xD0E2BFCE93AE3ABD(&iVar0, 11);
		}
	}
	func_182(2499, iVar0, -1, 1);
}

int func_447(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x889D01384B54BCE3(Global_1602607[iVar0 /*12*/].f_1, 0);
	}
	return 0;
}

int func_448()
{
	int iVar0;
	
	if (!func_20(&(Global_1573734.f_15)))
	{
		func_2(&(Global_1573734.f_15), 0, 0);
		Global_1573734.f_17 = 0;
	}
	else if (func_1(&(Global_1573734.f_15), 1000, 0))
	{
		if (unk_0x0AFA8C49D2EED33A(unk_0xCADBCF2AA9B38F40(Global_1573734.f_17)))
		{
			iVar0 = unk_0xCE0E12AD191025E5(unk_0xCADBCF2AA9B38F40(Global_1573734.f_17));
			if (unk_0x38FA37FE3518BA38(iVar0))
			{
				if (func_10(iVar0, 1, 1) && func_449(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_196(unk_0x1788E93557766241()), func_196(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1573734.f_17++;
		if (Global_1573734.f_17 >= 32)
		{
			Global_1573734.f_17 = 0;
			func_19(&(Global_1573734.f_15));
		}
	}
	return 0;
}

int func_449(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_186(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1583725[iVar0 /*334*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_450()
{
	unk_0xCC68D69AF0F39112(5);
	func_452();
	unk_0xABC4F2A6D7D56CF4(1f);
	unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 8);
	func_451();
}

void func_451()
{
	if (Global_1699238)
	{
		if (unk_0x889D01384B54BCE3(Global_1699239, 0))
		{
			unk_0x29DB79DD4D939B38(&Global_2453335, 0);
		}
		if (unk_0x889D01384B54BCE3(Global_1699239, 1))
		{
			unk_0x29DB79DD4D939B38(&Global_2453335, 1);
		}
		if (unk_0x889D01384B54BCE3(Global_1699239, 5))
		{
			unk_0x29DB79DD4D939B38(&Global_2453335, 5);
		}
		if (unk_0xDED2D15D4CD01463(-355737150))
		{
			unk_0x3A73A1FCDAD1D6BE(-355737150, 1, 0, 0);
		}
		if (unk_0xDED2D15D4CD01463(-580979506))
		{
			unk_0x3A73A1FCDAD1D6BE(-580979506, 1, 0, 0);
		}
		if (unk_0xDED2D15D4CD01463(-1426452475))
		{
			unk_0x3A73A1FCDAD1D6BE(-1426452475, 1, 0, 0);
		}
		if (unk_0xDED2D15D4CD01463(745417724))
		{
			unk_0x3A73A1FCDAD1D6BE(745417724, 1, 0, 0);
		}
		if (unk_0xDED2D15D4CD01463(-1305304906))
		{
			unk_0x3A73A1FCDAD1D6BE(-1305304906, 1, 0, 0);
		}
		if (unk_0xDED2D15D4CD01463(-1543175077))
		{
			unk_0x3A73A1FCDAD1D6BE(-1543175077, 1, 0, 0);
		}
		if (unk_0xDED2D15D4CD01463(-811770997))
		{
			unk_0x3A73A1FCDAD1D6BE(-811770997, 1, 0, 0);
		}
		Global_1699239 = 0;
	}
	Global_1699238 = 0;
}

void func_452()
{
	if (unk_0xDECCEB462707CB3E(Global_2446992.f_4629))
	{
		if (!Global_2446992.f_4629 == unk_0x60C807BBCBE66CC7())
		{
			return;
		}
	}
	Global_2446992.f_4629 = -1;
	Global_2446992.f_4628 = 1f;
}

int func_453()
{
	return 0;
}

int func_454()
{
	bool bVar0;
	
	func_459(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315866 == 0)
	{
		if (!unk_0x1DAD7CE53BEE7710())
		{
			return 1;
		}
	}
	if (func_458())
	{
		return 1;
	}
	if (Global_2437386)
	{
		return 1;
	}
	if (func_457())
	{
		return 1;
	}
	if (func_456(157))
	{
		if (!func_455())
		{
			return 1;
		}
	}
	if (func_456(155))
	{
		return 1;
	}
	if (!unk_0x54CE0989F263D8A3())
	{
		return 1;
	}
	if (func_306() != 0)
	{
		if (unk_0x16CDA1894CFE0781(func_306()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_455()
{
	return Global_2428577.f_572;
}

int func_456(int iParam0)
{
	if (unk_0xA519E4AC66148E87(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_457()
{
	return Global_2435556;
}

bool func_458()
{
	return Global_2428577.f_567;
}

void func_459(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2C15B7979450724C(1))
	{
		iVar1 = unk_0x8B6CEAB2AD1BD1CD(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0x6A4B863200ABAA44(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 307:
					func_460(iVar0);
					break;
				
				case 2:
					unk_0x6A4B863200ABAA44(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 53)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_460(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0x6A4B863200ABAA44(1, iParam0, &Var0, 3))
	{
		if (func_10(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xFF34D923BFB5E9FB(Var0.f_1);
			if (unk_0x538DF9E5B1DF01EB(uVar3))
			{
				if (unk_0x202EF5D8203705EF(iVar3, 0))
				{
					uVar4 = unk_0x6ADAC08D70C79DE5(iVar3, 0);
					if (unk_0xA7FB2A2F471A969B(uVar4, Var0.f_2) && unk_0x93C72DAC35C5D38C())
					{
						if (func_461(uVar4, &bVar5))
						{
							unk_0x2FC1F6BC6D0D9D77(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0x3A3C5A6572B3C611(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_461(int iParam0, var uParam1)
{
	if (unk_0x538DF9E5B1DF01EB(uParam0))
	{
		if (!unk_0x22349EC06EA5B08B(iParam0))
		{
			if (unk_0xFD9706CAB35EA810(iParam0))
			{
				unk_0x7B9576B4E099FB1F(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0xD8233CB95CB48A7C(iParam0, 0))
		{
			if (unk_0xC7402AE8FD6AACA2(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_462()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_463()
{
	if (func_454())
	{
		Local_2383.f_5 = 5;
	}
	else if (unk_0x889D01384B54BCE3(Local_106.f_1, 0))
	{
		Local_2383.f_5 = 6;
	}
	else if (func_268(0))
	{
		Local_2383.f_5 = 1;
	}
	else
	{
		Local_2383.f_5 = 2;
	}
	func_322(0);
	func_465(144, 0, Local_106.f_37 == 5);
	func_313(30, 0);
	Local_2383.f_0 = Local_106.f_49;
	Local_2383.f_1 = Local_106.f_50;
	Local_2383.f_4 = Local_106.f_51;
	Local_2383.f_3 = Local_106.f_52;
	Local_2383.f_10 = (unk_0x5C7391B560C251C7() - Local_2383.f_9);
	func_464(Local_2383, iLocal_91, -1, -1, -1, -1, -1);
	if (!Global_262145.f_9148)
	{
		if (Local_2383.f_6 > 0)
		{
		}
	}
	unk_0x82706E6C897B0FA1();
}

void func_464(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	var uVar0;
	struct<13> Var1;
	struct<14> Var14;
	struct<18> Var28;
	struct<14> Var52;
	struct<13> Var66;
	struct<14> Var79;
	struct<14> Var93;
	struct<16> Var107;
	struct<13> Var123;
	struct<14> Var136;
	struct<14> Var150;
	struct<13> Var164;
	
	uVar0 = unk_0x7E5A426328F6E635();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_68325)
	{
		if (unk_0x9BA82E09A986BA4B(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0xBFAFDB5FAAA5C5AB(&Var1);
		}
		else if (unk_0x9BA82E09A986BA4B(uVar0, "freemode"))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0xBAA2F0490E146BE8(&Var14);
		}
		else if (unk_0x9BA82E09A986BA4B(uVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = iParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0x3DE3AA516FB126A4(&Var28);
		}
		else if (unk_0x9BA82E09A986BA4B(uVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = unk_0xBBDA792448DB5A89(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0x6A60E43998228229(&Var52);
		}
		else if (unk_0x9BA82E09A986BA4B(uVar0, "am_penned_in"))
		{
			unk_0x1A7CE7CD3E653485(&Param0);
		}
		else if (unk_0x9BA82E09A986BA4B(uVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0x419615486BBF1956(&Var66);
		}
		else if (unk_0x9BA82E09A986BA4B(uVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0x84DFC579C2FC214C(&Var79);
		}
		else if (unk_0x9BA82E09A986BA4B(uVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0x0A9C7F36E5D7B683(&Var93);
		}
		else if (unk_0x9BA82E09A986BA4B(uVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			unk_0x164C5FF663790845(&Var107);
		}
		else if (unk_0x9BA82E09A986BA4B(uVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0xEDBF6C9B0D2C65C8(&Var123);
		}
		else if (unk_0x9BA82E09A986BA4B(uVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0x8C9D11605E59D955(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0x6551B1F7F6CD46EA(&Var150);
			}
		}
		else if (unk_0x9BA82E09A986BA4B(uVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0x2CD90358F67D0AA8(&Var164);
		}
	}
}

void func_465(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0x1788E93557766241() != -1)
	{
		if (unk_0x889D01384B54BCE3(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1, 13))
		{
			unk_0x29DB79DD4D939B38(&(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1), 13);
		}
		if (unk_0x889D01384B54BCE3(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1, 14))
		{
			unk_0x29DB79DD4D939B38(&(Global_1602607[unk_0x1788E93557766241() /*12*/].f_1), 14);
		}
	}
	if (unk_0x889D01384B54BCE3(Global_1573734.f_1, 21))
	{
		unk_0x29DB79DD4D939B38(&(Global_1573734.f_1), 21);
	}
	func_486();
	unk_0x08E9BC7825B63619("DisableFlightMusic", 0);
	unk_0x08E9BC7825B63619("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_485(func_258(unk_0x1788E93557766241()));
		func_313(21, 0);
	}
	else
	{
		if ((bParam2 && unk_0x1788E93557766241() != -1) && func_484(unk_0x1788E93557766241()) >= 12)
		{
			func_483(2500, -1);
			iVar1 = func_64(2500, -1, 0);
			if (iVar1 == 2)
			{
				unk_0xD0E2BFCE93AE3ABD(&Global_1573758, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0xD0E2BFCE93AE3ABD(&Global_1573758, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0xD0E2BFCE93AE3ABD(&Global_1573758, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0xD0E2BFCE93AE3ABD(&Global_1573758, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0xD0E2BFCE93AE3ABD(&Global_1573758, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0xD0E2BFCE93AE3ABD(&Global_1573758, 5);
			}
		}
		func_482();
		func_481();
		func_480();
		func_471();
		func_470();
		func_450();
		func_469();
		unk_0x29DB79DD4D939B38(&(Global_2446992.f_1627), 2);
		func_468();
		func_467();
	}
	if (unk_0xAA98A9C364883DB0(1344549371))
	{
		unk_0x71E34E871809D6EE(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (unk_0x1788E93557766241() != -1 && !func_309(unk_0x1788E93557766241(), 21))
		{
			func_303(0);
			func_301(0);
			func_466();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_24(26, -1))
		{
			Global_2437331 = -1;
			func_21(26, -1);
		}
	}
	Global_2445946 = 1;
}

void func_466()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0x889D01384B54BCE3(Global_2359718[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0x889D01384B54BCE3(Global_2359718[iVar0 /*26*/].f_13, 26))
			{
				unk_0x29DB79DD4D939B38(&(Global_2359718[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_467()
{
	Global_1602607[unk_0x1788E93557766241() /*12*/].f_6 = 0;
}

void func_468()
{
	if (unk_0x889D01384B54BCE3(Global_2446992.f_4536, 1))
	{
		unk_0x29DB79DD4D939B38(&(Global_2446992.f_4536), 1);
	}
	if (Global_2446992.f_4536 > 0)
	{
		unk_0x495459882382D113("FM_COUNTDOWN_30S_KILL");
		unk_0x495459882382D113("FM_COUNTDOWN_30S_FIRA");
		unk_0x124843CE93F39C27("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x435923F2389CD0AD(1);
		Global_2446992.f_4536 = 0;
		unk_0x08E9BC7825B63619("DisableFlightMusic", 0);
		unk_0x08E9BC7825B63619("WantedMusicDisabled", 0);
		unk_0x08E9BC7825B63619("AllowScoreAndRadio", 0);
		if (!unk_0x9BA82E09A986BA4B(unk_0x7E5A426328F6E635(), "am_pi_menu"))
		{
			if (Global_2446992.f_4546 > -1)
			{
				unk_0x0D992EF9B9F0C8E3(Global_2446992.f_4546);
				Global_2446992.f_4546 = -1;
			}
		}
	}
}

void func_469()
{
	struct<23> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Global_1573734 = { Var0 };
}

void func_470()
{
	var uVar0;
	
	Global_1318826 = uVar0;
}

void func_471()
{
	Global_2404570.f_20 = { Global_2406077 };
	Global_2404570.f_22 = { Global_2406079 };
	func_472(1);
}

void func_472(bool bParam0)
{
	Global_2404570.f_39 = { Global_2406096 };
	if (bParam0)
	{
		func_479();
	}
	func_475(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077);
	func_474(0);
	func_473();
}

void func_473()
{
	struct<4> Var0;
	
	if (Global_2404570.f_438.f_1 == unk_0x60C807BBCBE66CC7())
	{
		Global_2404570.f_438 = { Var0 };
	}
}

void func_474(bool bParam0)
{
	if (bParam0)
	{
		Global_2404570.f_587 = 0;
	}
	else
	{
		Global_2404570.f_587 = 1;
	}
}

void func_475(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (bParam0)
	{
		Global_2404570.f_1093 = iParam1;
		Global_2404570.f_1094 = iParam2;
		func_477();
		func_476(8, 0, 0);
		Global_2404570.f_588 = 1;
		Global_2404570.f_1097 = iParam3;
		Global_2404570.f_1098 = iParam4;
		Global_2404570.f_1095 = iParam5;
		Global_2404570.f_1096 = iParam6;
		Global_2404570.f_1099 = iParam7;
		Global_2404570.f_1100 = iParam8;
		Global_2404570.f_1101 = iParam9;
	}
	else
	{
		func_477();
		func_476(0, 0, 0);
		Global_2404570.f_588 = 0;
	}
}

void func_476(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2408661 = 0;
	}
	Global_2404570.f_438 = iParam0;
	Global_2404570.f_438.f_1 = unk_0x60C807BBCBE66CC7();
	Global_2404570.f_438.f_2 = iParam1;
	Global_2404570.f_438.f_3 = iParam2;
}

void func_477()
{
	func_478();
	Global_2404570.f_589 = 0;
}

void func_478()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404570.f_590[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_479()
{
	Global_2404570.f_316 = { Global_2406373 };
}

void func_480()
{
	Global_2446992.f_4537 = 0;
}

void func_481()
{
	if (unk_0x1788E93557766241() != -1)
	{
		Global_1602607[unk_0x1788E93557766241() /*12*/].f_1 = 0;
	}
}

void func_482()
{
	int iVar0;
	
	iVar0 = unk_0x1788E93557766241();
	if (iVar0 != -1)
	{
		Global_1602607[iVar0 /*12*/] = -1;
	}
}

void func_483(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_64(iParam0, func_65(iParam1), 0);
	iVar0++;
	if (!func_189(iParam0))
	{
		func_182(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_183(iParam0, iVar0, iParam1, 1);
	}
}

int func_484(int iParam0)
{
	return Global_1583725[iParam0 /*334*/].f_188.f_6;
}

int func_485(int iParam0)
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		
		case 146:
			if (func_447(unk_0x1788E93557766241()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_486()
{
	if (unk_0x889D01384B54BCE3(Global_2446992.f_1626, 3) || unk_0x889D01384B54BCE3(Global_2446992.f_1626, 4))
	{
		if (unk_0xF4C685E933068D23() || unk_0xE9A5FF67266655B2())
		{
			unk_0x5FE2A83120E8127F(800);
		}
	}
	if (unk_0x889D01384B54BCE3(Global_2446992.f_1626, 5))
	{
		unk_0x29DB79DD4D939B38(&(Global_2446992.f_1626), 5);
	}
	if (unk_0x889D01384B54BCE3(Global_2446992.f_1626, 3))
	{
		unk_0x29DB79DD4D939B38(&(Global_2446992.f_1626), 3);
	}
	if (unk_0x889D01384B54BCE3(Global_2446992.f_1626, 4))
	{
		unk_0x29DB79DD4D939B38(&(Global_2446992.f_1626), 4);
	}
	func_489(0);
	func_488(0);
	func_487(0);
}

void func_487(int iParam0)
{
	if (Global_2446992.f_4361 != iParam0)
	{
		Global_2446992.f_4361 = iParam0;
	}
}

void func_488(bool bParam0)
{
	if (Global_2446992.f_4360 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2446992.f_4360 = bParam0;
	}
}

void func_489(int iParam0)
{
	if (Global_2446992.f_4358 != iParam0)
	{
		Global_2446992.f_4358 = iParam0;
	}
}

int func_490(struct<20> Param0)
{
	func_497(func_498(Param0.f_0), Param0);
	unk_0x992F36F53DC17762(0);
	func_494(0, -1, 0);
	func_492(144);
	unk_0x241F80BF72379478(&Local_106, 53);
	unk_0x51FC2B81A21C009A(&Local_2158, 225);
	if (!func_491())
	{
		func_463();
	}
	if (unk_0xE9849174628A9C50())
	{
		unk_0x06377C7FCB523735(&(Local_106.f_49), &(Local_106.f_50));
	}
	Local_2383.f_2 = unk_0x2E8B9FEEE576BA13();
	unk_0xFF9F94FD851C212A(0);
	func_313(30, 1);
	return 1;
}

int func_491()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1DAD7CE53BEE7710())
		{
			return 0;
		}
		if (unk_0x5D0D85F8A1CCEE45())
		{
			return 1;
		}
		if (func_458())
		{
			return 0;
		}
		if (func_456(155))
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

void func_492(int iParam0)
{
	func_469();
	func_493();
	func_480();
	Global_1573734.f_4 = iParam0;
	Global_1573734.f_5 = iParam0;
	func_312(iParam0, -1);
	func_284(&(Global_1573734.f_18), 0, 0);
	Global_2446992.f_4402 = 0;
	Global_2436194[0] = func_34();
	Global_2436194[1] = func_34();
	Global_2436194[2] = func_34();
	Global_2436194[3] = func_34();
	Global_2436194[4] = func_34();
	func_467();
	func_234();
	if (func_285() && !func_310())
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 16);
	}
	else
	{
		unk_0xD0E2BFCE93AE3ABD(&(Global_1573734.f_1), 17);
	}
}

void func_493()
{
	var uVar0;
	
	Global_1573757 = uVar0;
}

int func_494(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x92078BBBAEFC7998();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_496();
			}
			else
			{
				return 0;
			}
		}
		if (!func_495())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1DAD7CE53BEE7710())
				{
					if (!bParam2)
					{
						func_496();
					}
					else
					{
						return 0;
					}
				}
				if (func_458())
				{
					if (!bParam2)
					{
						func_496();
					}
					else
					{
						return 0;
					}
				}
				if (func_456(155))
				{
					if (!bParam2)
					{
						func_496();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x0987AD2F87AA4427())
			{
				if (!bParam2)
				{
					func_496();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x92078BBBAEFC7998();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1DAD7CE53BEE7710())
		{
			if (!bParam2)
			{
				func_496();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x0987AD2F87AA4427())
	{
		if (!bParam2)
		{
			func_496();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_495()
{
	return Global_1315866;
}

void func_496()
{
	unk_0x82706E6C897B0FA1();
}

void func_497(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1DAD7CE53BEE7710())
	{
		func_496();
	}
	unk_0x3005435C0CFEEE94(uParam0, 0, Param1.f_16);
}

int func_498(int iParam0)
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
		
		case 48:
			return 32;
		
		case 49:
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
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 55:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 56:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 32;
		
		case 65:
			return 2;
		
		case 70:
			return 1;
		
		case 66:
			return 2;
		
		case 67:
			return 4;
		
		case 68:
			return 2;
		
		case 69:
			return 2;
		
		case 52:
			return 1;
		
		case 71:
			return 2;
		
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
			return 0;
		
		case 78:
			return 1;
		
		default:
	}
	return 0;
}

