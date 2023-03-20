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
	float fLocal_89 = 0f;
	float fLocal_90 = 0f;
	float fLocal_91 = 0f;
	float fLocal_92 = 0f;
	float fLocal_93 = 0f;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	struct<53> Local_111 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<527> Local_164 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_691 = -1;
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
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = -1082130432;
	var uLocal_713 = 3;
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
	var uLocal_736 = -1;
	var uLocal_737 = -1;
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
	var uLocal_758 = -1082130432;
	var uLocal_759 = 3;
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
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = -1;
	var uLocal_783 = -1;
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
	var uLocal_804 = -1082130432;
	var uLocal_805 = 3;
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
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = -1;
	var uLocal_829 = -1;
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
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = -1082130432;
	var uLocal_851 = 3;
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
	var uLocal_874 = -1;
	var uLocal_875 = -1;
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
	var uLocal_896 = -1082130432;
	var uLocal_897 = 3;
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
	var uLocal_920 = -1;
	var uLocal_921 = -1;
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
	var uLocal_942 = -1082130432;
	var uLocal_943 = 3;
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
	var uLocal_966 = -1;
	var uLocal_967 = -1;
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
	var uLocal_988 = -1082130432;
	var uLocal_989 = 3;
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
	var uLocal_1012 = -1;
	var uLocal_1013 = -1;
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
	var uLocal_1034 = -1082130432;
	var uLocal_1035 = 3;
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
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = -1;
	var uLocal_1059 = -1;
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
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = -1082130432;
	var uLocal_1081 = 3;
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
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = -1;
	var uLocal_1105 = -1;
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
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = -1082130432;
	var uLocal_1127 = 3;
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
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = -1;
	var uLocal_1151 = -1;
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
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = -1082130432;
	var uLocal_1173 = 3;
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
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = -1;
	var uLocal_1197 = -1;
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
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = -1082130432;
	var uLocal_1219 = 3;
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
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = -1;
	var uLocal_1243 = -1;
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
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = -1082130432;
	var uLocal_1265 = 3;
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
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = -1;
	var uLocal_1289 = -1;
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
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = -1082130432;
	var uLocal_1311 = 3;
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
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = -1;
	var uLocal_1335 = -1;
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
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = -1082130432;
	var uLocal_1357 = 3;
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
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = -1;
	var uLocal_1381 = -1;
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
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = -1082130432;
	var uLocal_1403 = 3;
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
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = -1;
	var uLocal_1427 = -1;
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
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = -1082130432;
	var uLocal_1449 = 3;
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
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = -1;
	var uLocal_1473 = -1;
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
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = -1082130432;
	var uLocal_1495 = 3;
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
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = -1;
	var uLocal_1519 = -1;
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
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = -1082130432;
	var uLocal_1541 = 3;
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
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = -1;
	var uLocal_1565 = -1;
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
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = -1082130432;
	var uLocal_1587 = 3;
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
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = -1;
	var uLocal_1611 = -1;
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
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = -1082130432;
	var uLocal_1633 = 3;
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
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = -1;
	var uLocal_1657 = -1;
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
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = -1082130432;
	var uLocal_1679 = 3;
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
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = -1;
	var uLocal_1703 = -1;
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
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = -1082130432;
	var uLocal_1725 = 3;
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
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = -1;
	var uLocal_1749 = -1;
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
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = -1082130432;
	var uLocal_1771 = 3;
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
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = -1;
	var uLocal_1795 = -1;
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
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = -1082130432;
	var uLocal_1817 = 3;
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
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = -1;
	var uLocal_1841 = -1;
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
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = -1082130432;
	var uLocal_1863 = 3;
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
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = -1;
	var uLocal_1887 = -1;
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
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = -1082130432;
	var uLocal_1909 = 3;
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
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = -1;
	var uLocal_1933 = -1;
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
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = -1082130432;
	var uLocal_1955 = 3;
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
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = -1;
	var uLocal_1979 = -1;
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
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = -1082130432;
	var uLocal_2001 = 3;
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
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = -1;
	var uLocal_2025 = -1;
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
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = -1082130432;
	var uLocal_2047 = 3;
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
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = -1;
	var uLocal_2071 = -1;
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
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = -1082130432;
	var uLocal_2093 = 3;
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
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = -1;
	var uLocal_2117 = -1;
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
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = -1082130432;
	var uLocal_2139 = 3;
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
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = -1;
	struct<7> Local_2163[32];
	struct<12> Local_2388 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_89 = -0.05f;
	fLocal_90 = 0.92f;
	fLocal_91 = 1.94f;
	fLocal_92 = 2.99f;
	fLocal_93 = 3.7f;
	iLocal_109 = -1;
	iLocal_110 = -1;
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (!func_495(ScriptParam_0))
		{
			func_468();
		}
	}
	while (true)
	{
		func_467();
		if (func_459() || func_457())
		{
			func_468();
		}
		func_438();
		switch (func_437(unk_0x04EFA8D3BE8500E7()))
		{
			case 0:
				if (func_436() == 1)
				{
					if (func_435())
					{
						func_434(unk_0x04EFA8D3BE8500E7(), 1);
					}
				}
				break;
			
			case 1:
				if (func_436() == 1)
				{
					func_37();
				}
				else if (func_436() == 3)
				{
					func_434(unk_0x04EFA8D3BE8500E7(), 3);
				}
				break;
			
			case 3:
				func_468();
				break;
		}
		if (unk_0x1C7D9BFDF15A02B4())
		{
			switch (func_436())
			{
				case 0:
					if (func_36())
					{
						func_35(1);
					}
					break;
				
				case 1:
					if (Local_111.f_37 == 5)
					{
						func_35(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_94, 1000, 0))
					{
						func_35(3);
					}
					break;
				
				case 3:
					func_468();
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
	if (unk_0x1C6DF6AD69BE853E() && !bParam2)
	{
		if (unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x013F97B9D88B92CA(unk_0x996F735E5C03B101(unk_0x48E480685981C7D4(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_2(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x1C6DF6AD69BE853E() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0xD74C7D8D2E5E43D2();
			}
			else
			{
				*uParam0 = unk_0xE36DF6414E5CCBBF();
			}
		}
		else
		{
			*uParam0 = unk_0x48E480685981C7D4();
		}
		uParam0->f_1 = 1;
	}
}

void func_3()
{
	if (func_17(2, 0, 0, 0, 0))
	{
		if (!unk_0x236D8AD7EE179F46(Local_111.f_1, 0))
		{
			unk_0xF3148AAF69AF9CBC(&(Local_111.f_1), 0);
			Local_111.f_2 = unk_0xD74C7D8D2E5E43D2();
		}
	}
	switch (Local_111.f_37)
	{
		case 0:
			func_16(1);
			break;
		
		case 1:
			if (func_1(&(Local_111.f_43), Global_262145.f_8972, 0) || unk_0x236D8AD7EE179F46(Local_111.f_1, 0))
			{
				func_16(2);
			}
			break;
		
		case 2:
			Local_111.f_38 = unk_0xD74C7D8D2E5E43D2();
			func_16(3);
			break;
		
		case 3:
			if (func_1(&(Local_111.f_39), func_15(), 0) || unk_0x236D8AD7EE179F46(Local_111.f_1, 0))
			{
				Local_111.f_2 = unk_0xD74C7D8D2E5E43D2();
				func_16(4);
			}
			func_11();
			func_7(&iLocal_110, &iLocal_109);
			break;
		
		case 4:
			if ((func_1(&(Local_111.f_41), 20000, 0) || Local_111.f_4[0] < 0) || func_4())
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
	while (iVar1 < unk_0x945535897333587B())
	{
		if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar1)))
		{
			iVar2 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iVar1));
			if (!func_5(iVar2))
			{
				if (!unk_0x236D8AD7EE179F46(Local_2163[iVar1 /*7*/].f_1, 1) || Local_2163[iVar1 /*7*/].f_2 != 5)
				{
					return 0;
				}
				else if (unk_0x236D8AD7EE179F46(Local_2163[iVar1 /*7*/].f_1, 0))
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
	return unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 8);
}

bool func_6(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 2);
}

void func_7(int iParam0, int iParam1)
{
	struct<14> Var0;
	var uVar14;
	
	if (*iParam0 >= 0 && *iParam1 >= 0)
	{
		uVar14 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(*iParam0));
		if (*iParam1 == 0)
		{
			Var0.f_2 = 165;
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
	Param0.f_1 = unk_0x1329891157A54C63();
	if (!iParam14 == 0)
	{
		unk_0x8DAD64B00B88FC2D(1, &Param0, 14, iParam14);
	}
}

int func_9(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0x945535897333587B())
	{
		if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar1)))
		{
			iVar2 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iVar1));
			if (func_10(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x1329891157A54C63() || iParam0)
				{
					unk_0xF3148AAF69AF9CBC(&uVar0, iVar2);
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
	if (unk_0xA89AE5060232966A(iParam0))
	{
		if (bParam1)
		{
			if (!unk_0x7DF7DE8C76D7F346(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422670.f_3[iVar0])
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
	while (iVar0 < unk_0x945535897333587B())
	{
		if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iVar0)))
		{
			unk_0xF3148AAF69AF9CBC(&iVar3, iVar0);
		}
		else
		{
			func_14(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < unk_0x945535897333587B())
	{
		if (unk_0x236D8AD7EE179F46(iVar3, iVar0))
		{
			func_12(iVar0);
			unk_0xF3148AAF69AF9CBC(&(Local_111.f_45), iVar0);
			iVar1++;
			if (unk_0x236D8AD7EE179F46(Local_2163[iVar0 /*7*/].f_1, 2))
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	if (iVar1 > Local_111.f_48)
	{
		Local_111.f_48 = iVar1;
	}
	else
	{
		Local_111.f_51 = (Local_111.f_48 - iVar1);
	}
	if (iVar2 > Local_111.f_52)
	{
		Local_111.f_52 = iVar2;
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
	
	iVar0 = Local_2163[iParam0 /*7*/].f_3;
	iVar1 = Local_2163[iParam0 /*7*/].f_3.f_2;
	if (!unk_0x236D8AD7EE179F46(Local_111.f_46, iParam0))
	{
		iVar2 = (Local_111.f_4[0] / 2);
		if (iVar0 >= iVar2)
		{
			Local_111.f_47++;
			unk_0xF3148AAF69AF9CBC(&(Local_111.f_46), iParam0);
		}
	}
	iVar4 = -2;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (Local_111.f_4[iVar3] == iParam0)
		{
			iVar3 = 32;
		}
		else if (iVar4 >= -1)
		{
			if (iVar4 >= 0)
			{
				func_13(&(Local_111.f_4[iVar3]), &iVar4);
			}
		}
		else if ((Local_111.f_4[iVar3] < 0 || iVar0 > Local_2163[Local_111.f_4[iVar3] /*7*/].f_3) || (iVar0 == Local_2163[Local_111.f_4[iVar3] /*7*/].f_3 && iVar1 > Local_2163[Local_111.f_4[iVar3] /*7*/].f_3.f_2))
		{
			iVar4 = Local_111.f_4[iVar3];
			if (iVar0 != 0)
			{
				iLocal_109 = iVar3;
				iLocal_110 = iParam0;
			}
			Local_111.f_4[iVar3] = iParam0;
			iVar5 = iVar3 + 1;
			while (iVar5 <= 31)
			{
				if (Local_111.f_4[iVar5] == iParam0)
				{
					Local_111.f_4[iVar5] = -1;
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
	
	if (unk_0x236D8AD7EE179F46(Local_111.f_45, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_111.f_4[iVar0] == iParam0)
			{
				Local_111.f_4[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		unk_0xC69E84EBBD7166E6(&(Local_111.f_46), iParam0);
		unk_0xC69E84EBBD7166E6(&(Local_111.f_45), iParam0);
	}
}

int func_15()
{
	return Global_262145.f_8971;
}

void func_16(int iParam0)
{
	Local_111.f_37 = iParam0;
}

int func_17(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (unk_0x8C283330B889AF48() < iParam0)
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
	if (func_20(&(Global_1573867.f_18)))
	{
		if (!func_1(&(Global_1573867.f_18), 7500, 0))
		{
			return 0;
		}
		func_19(&(Global_1573867.f_18));
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
	if (iParam1 && unk_0xD49F8CA46CF1D5B3() < iParam0)
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
	return unk_0x236D8AD7EE179F46(Global_1573867.f_1, 0);
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
			unk_0x59C26149DF458387(0, iParam1);
			break;
		
		default:
			uVar1 = func_22(iParam1);
			iVar0 = unk_0xE19FDB171CBF814A(uVar1);
			if (unk_0x236D8AD7EE179F46(iVar0, iParam0))
			{
				unk_0xC69E84EBBD7166E6(&iVar0, iParam0);
				unk_0x59C26149DF458387(iVar0, iParam1);
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
	uVar1 = unk_0xE19FDB171CBF814A(uVar0);
	return unk_0x236D8AD7EE179F46(uVar1, iParam0);
}

void func_25(char* sParam0, char* sParam1, bool bParam2)
{
	if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 2) && !func_6(unk_0x1329891157A54C63()))
	{
		if (unk_0xB318FDA0D1ABDB20(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0xB318FDA0D1ABDB20(sParam1))
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
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 2);
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
		if (Global_2422670.f_2419)
		{
			return 0;
		}
	}
	func_32(uParam0);
	func_29(uParam0);
	if (func_28(uParam0->f_1))
	{
		if (Global_2422670.f_2137[0 /*70*/].f_2 == 0)
		{
			Global_2422670.f_2137[0 /*70*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2422670.f_2137[0 /*70*/].f_1 == 13 || Global_2422670.f_2137[0 /*70*/].f_1 == 52) || Global_2422670.f_2137[0 /*70*/].f_1 == 53) || Global_2422670.f_2137[0 /*70*/].f_1 == 57)
		{
			Global_2422670.f_2137[0 /*70*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2422670.f_2137[iVar0 + 1 /*70*/] = { Global_2422670.f_2137[iVar0 /*70*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2422670.f_2137[1 /*70*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2422670.f_2137[iVar0 /*70*/].f_2 == 0)
		{
			Global_2422670.f_2137[iVar0 /*70*/] = { *uParam0 };
			return 1;
		}
		else if (uParam0->f_1 == 1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_2422670.f_2137[iVar0 /*70*/].f_63), 1);
			Global_2422670.f_2137[iVar0 /*70*/].f_2 = 5;
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
	Local_111.f_0 = iParam0;
}

int func_36()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_111.f_4[iVar0] = -1;
		iVar0++;
	}
	func_19(&(Local_111.f_39));
	return 1;
}

void func_37()
{
	func_431();
	if (func_429())
	{
		func_338();
	}
	if (func_337(unk_0x1329891157A54C63()) || func_336(unk_0x1329891157A54C63()))
	{
		func_335();
	}
	if (!func_5(unk_0x1329891157A54C63()))
	{
		if (func_325())
		{
			if (unk_0x236D8AD7EE179F46(iLocal_97, 3))
			{
				unk_0xC69E84EBBD7166E6(&iLocal_97, 3);
			}
			switch (Local_2163[unk_0x519AAFF77CC141DF() /*7*/].f_2)
			{
				case 0:
					if (Local_111.f_37 > 0)
					{
						func_324(1);
						func_323(1);
					}
					break;
				
				case 1:
					if (!unk_0x236D8AD7EE179F46(iLocal_108, 2))
					{
						if (!unk_0x2DD54246D4BB0A20())
						{
							func_322("AMBC_WARN", 30000);
							func_321(0);
							unk_0x35D7948F61AA3FEC(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
							unk_0xF3148AAF69AF9CBC(&iLocal_108, 2);
						}
					}
					if (Local_111.f_37 >= 2)
					{
						func_323(2);
					}
					func_319((Global_262145.f_8972 - func_320(&(Local_111.f_43), 0, 0)));
					func_317(func_318((Global_262145.f_8972 - func_320(&(Local_111.f_43), 0, 0)), 0), "HUD_STARTING");
					break;
				
				case 2:
					if (Local_111.f_37 > 2)
					{
						func_316();
						func_324(0);
						func_299(144, 0f, 0f, 0, 0, 0, 0);
						func_26(62, "AMBC_TITLE", "AMBC_BIG_START", func_30(), -1, func_30());
						func_323(3);
						Local_2388.f_9 = unk_0xC7224E4F41E00BE3();
						Local_2388.f_8 = unk_0xC7224E4F41E00BE3();
					}
					break;
				
				case 3:
					if (Local_111.f_37 > 3)
					{
						func_323(4);
					}
					else
					{
						if (unk_0x236D8AD7EE179F46(iLocal_97, 0))
						{
							unk_0xC69E84EBBD7166E6(&iLocal_97, 0);
						}
						func_297();
						func_289();
						func_273();
						if (func_271(0) && !func_270(0))
						{
							func_269();
						}
						func_268();
					}
					func_267();
					func_244();
					func_338();
					break;
				
				case 4:
					if (func_238(&uLocal_99, !unk_0x236D8AD7EE179F46(Local_111.f_1, 0)) || unk_0x236D8AD7EE179F46(Local_111.f_1, 0))
					{
						func_323(5);
					}
					func_231();
					func_156();
					func_244();
					func_338();
					func_155();
					break;
				
				case 5:
					break;
			}
		}
		else
		{
			func_154();
		}
	}
	else
	{
		func_335();
		func_154();
	}
	func_141();
	func_38();
}

void func_38()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x236D8AD7EE179F46(iLocal_97, 4))
	{
		if (func_138())
		{
			if (!unk_0x236D8AD7EE179F46(iLocal_97, 5))
			{
				unk_0xF3148AAF69AF9CBC(&iLocal_97, 5);
			}
		}
		else if (unk_0x236D8AD7EE179F46(iLocal_97, 5))
		{
			unk_0xC69E84EBBD7166E6(&iLocal_97, 5);
			unk_0xC69E84EBBD7166E6(&iLocal_97, 4);
		}
	}
	if (!unk_0x236D8AD7EE179F46(iLocal_97, 4))
	{
		if (func_10(unk_0x1329891157A54C63(), 1, 1) && !func_136(unk_0x1329891157A54C63(), 0))
		{
			iVar0 = unk_0x81873881071CD9FE();
			iVar1 = unk_0x14B7103DBD149FFE(iVar0);
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
			Local_2163[unk_0x519AAFF77CC141DF() /*7*/].f_6 = iVar2;
			unk_0xF3148AAF69AF9CBC(&iLocal_97, 4);
		}
	}
}

int func_39(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	struct<4> Var3;
	
	iVar0 = func_113(iParam1, iParam2, iParam3);
	Global_68881[0 /*14*/] = { func_60(iParam0, iParam2, iVar0) };
	uVar1 = Global_68881[0 /*14*/].f_7;
	bVar2 = unk_0x236D8AD7EE179F46(Global_68881[0 /*14*/].f_6, 6);
	Var3 = { Global_68881[0 /*14*/].f_8 };
	func_40(&Var3, &uVar1, bVar2, iParam0, iVar0, iParam2, iParam3);
	return uVar1;
}

void func_40(char* sParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	iVar0 = unk_0x8DAF7A748E41AD46(sParam0);
	func_59(iVar0, uParam1);
	func_58(iVar0, uParam1);
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
				*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_4964));
				break;
			
			case joaat("CU_INDI_CLOTHES"):
				if (iParam5 == 14 && iParam6 == 0)
				{
					*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6163));
				}
				else
				{
					*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
				}
				break;
			
			case joaat("CU_LOW_CLOTHES"):
				if (iParam5 == 6)
				{
					*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_9728));
				}
				else if (iParam5 == 11 || iParam5 == 8)
				{
					*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_9729));
				}
				else if (iParam5 == 4)
				{
					*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_9730));
				}
				else if (iParam5 == 14 && iParam6 == 2)
				{
					*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_9731));
				}
				else if (iParam5 == 14 && iParam6 == 0)
				{
					*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_9733));
				}
				else if (iParam5 == 7)
				{
					*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_9732));
				}
				else if (iParam5 == 12)
				{
					*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_9734));
				}
				break;
			
			case joaat("CU_HAL_MASKS"):
				*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_9819));
				break;
			}
	}
	switch (iParam5)
	{
		case 10:
			if (iVar0 == joaat("D_FMM_1_0"))
			{
				*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_2918));
			}
			else if (iVar0 == joaat("D_FMM_2_0"))
			{
				*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_2919));
			}
			break;
		
		case 1:
			if (iParam3 == joaat("mp_m_freemode_01"))
			{
				*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_272114.f_22));
			}
			else if (iParam3 == joaat("mp_f_freemode_01"))
			{
				*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_272114.f_29));
			}
			break;
		
		case 4:
			if (iParam3 == joaat("mp_m_freemode_01"))
			{
				*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_272114.f_15));
			}
			else if (iParam3 == joaat("mp_f_freemode_01"))
			{
				*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_272114.f_23));
			}
			break;
		
		case 6:
			if (iParam3 == joaat("mp_m_freemode_01"))
			{
				*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_272114.f_17));
			}
			else if (iParam3 == joaat("mp_f_freemode_01"))
			{
				*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_272114.f_25));
			}
			break;
		
		case 11:
		case 8:
			if (iParam3 == joaat("mp_m_freemode_01"))
			{
				*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_272114.f_16));
			}
			else if (iParam3 == joaat("mp_f_freemode_01"))
			{
				*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_272114.f_24));
			}
			break;
		
		case 7:
			if (iParam3 == joaat("mp_m_freemode_01"))
			{
				*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_272114.f_57));
			}
			else if (iParam3 == joaat("mp_f_freemode_01"))
			{
				*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_272114.f_58));
			}
			break;
		
		case 14:
			switch (iParam6)
			{
				case 1:
					if (iParam3 == joaat("mp_m_freemode_01"))
					{
						*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_272114.f_20));
					}
					else if (iParam3 == joaat("mp_f_freemode_01"))
					{
						*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_272114.f_56));
					}
					break;
				
				case 0:
					if (func_46(iParam3, iParam5, iParam4))
					{
						if (iParam3 == joaat("mp_m_freemode_01"))
						{
							*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_272114.f_19));
						}
						else if (iParam3 == joaat("mp_f_freemode_01"))
						{
							*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_272114.f_27));
						}
					}
					else if (func_41(iParam3, iParam5, iParam4))
					{
						if (iParam3 == joaat("mp_m_freemode_01"))
						{
							*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_272114.f_18));
						}
						else if (iParam3 == joaat("mp_f_freemode_01"))
						{
							*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_272114.f_26));
						}
					}
					break;
				
				case 6:
					if (iParam3 == joaat("mp_m_freemode_01"))
					{
						*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_272114.f_21));
					}
					else if (iParam3 == joaat("mp_f_freemode_01"))
					{
						*uParam1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(*uParam1) * Global_272114.f_28));
					}
					break;
			}
			break;
	}
	*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_73));
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
						return (unk_0x3FFA0207A02FD5C0(func_42(iParam0, iParam2, 14, 3), joaat("HAT"), 1) || unk_0x3FFA0207A02FD5C0(func_42(iParam0, iParam2, 14, 3), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (unk_0x3FFA0207A02FD5C0(func_42(iParam0, iParam2, 1, 3), joaat("HAT"), 0) || unk_0x3FFA0207A02FD5C0(func_42(iParam0, iParam2, 1, 3), -1842686353, 0));
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
						return (unk_0x3FFA0207A02FD5C0(func_42(iParam0, iParam2, 14, 4), joaat("HAT"), 1) || unk_0x3FFA0207A02FD5C0(func_42(iParam0, iParam2, 14, 4), -1842686353, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						return (unk_0x3FFA0207A02FD5C0(func_42(iParam0, iParam2, 1, 4), joaat("HAT"), 0) || unk_0x3FFA0207A02FD5C0(func_42(iParam0, iParam2, 1, 4), -1842686353, 0));
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
		unk_0x5E3934D9BA58DB06(&Var0);
		iVar18 = 0;
		iVar19 = (iParam1 - func_45(iParam0));
		if (iVar19 < 0)
		{
			return -1;
		}
		iVar20 = unk_0x59D3B25E47CE2137(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar20)
		{
			unk_0xB5977A32A8ED41A9(iVar17, &Var0);
			if (!unk_0xA10BCE9255970BC8(Var0.f_0))
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
		unk_0xAD8DCC106BB001D2(&Var21);
		iVar39 = 0;
		iVar40 = (iParam1 - func_43(iParam0, func_44(iParam2)));
		if (iVar40 < 0)
		{
			return -1;
		}
		iVar41 = unk_0x59D3B25E47CE2137(iParam3, 6, -1, 0, -1, func_44(iParam2));
		iVar38 = 0;
		while (iVar38 < iVar41)
		{
			unk_0x9BCFD79653579375(iVar38, &Var21);
			if (!unk_0xA10BCE9255970BC8(Var21.f_0))
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
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x3FFA0207A02FD5C0(func_42(iParam0, iParam2, 14, 3), joaat("HELMET"), 1)))
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
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && unk_0x3FFA0207A02FD5C0(func_42(iParam0, iParam2, 14, 4), joaat("HELMET"), 1)))
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
		case -1241520511:
			*uParam1 = Global_262145.f_9737;
			break;
		
		case -1412607460:
			*uParam1 = Global_262145.f_9738;
			break;
		
		case 1578317481:
			*uParam1 = Global_262145.f_9739;
			break;
		
		case -1296378129:
			*uParam1 = Global_262145.f_9740;
			break;
		
		case -1050512318:
			*uParam1 = Global_262145.f_9741;
			break;
		
		case -1681118954:
			*uParam1 = Global_262145.f_9742;
			break;
		
		case 1113267623:
			*uParam1 = Global_262145.f_9743;
			break;
		
		case -1536958017:
			*uParam1 = Global_262145.f_9744;
			break;
		
		case 616194662:
			*uParam1 = Global_262145.f_9745;
			break;
		
		case -1789853303:
			*uParam1 = Global_262145.f_9746;
			break;
		
		case 323878269:
			*uParam1 = Global_262145.f_9747;
			break;
		
		case 33512160:
			*uParam1 = Global_262145.f_9748;
			break;
		
		case -1280072512:
			*uParam1 = Global_262145.f_9749;
			break;
		
		case 890709897:
			*uParam1 = Global_262145.f_9750;
			break;
		
		case 762124341:
			*uParam1 = Global_262145.f_9751;
			break;
		
		case -2123471377:
			*uParam1 = Global_262145.f_9752;
			break;
		
		case 1010424711:
			*uParam1 = Global_262145.f_9753;
			break;
		
		case 1845477138:
			*uParam1 = Global_262145.f_9754;
			break;
		
		case 1736345219:
			*uParam1 = Global_262145.f_9755;
			break;
		
		case 1968448046:
			*uParam1 = Global_262145.f_9756;
			break;
		
		case 1388961046:
			*uParam1 = Global_262145.f_9757;
			break;
		
		case -878971484:
			*uParam1 = Global_262145.f_9758;
			break;
		
		case -666956062:
			*uParam1 = Global_262145.f_9759;
			break;
		
		case -492690520:
			*uParam1 = Global_262145.f_9760;
			break;
		
		case -1149075148:
			*uParam1 = Global_262145.f_9761;
			break;
		
		case -303012337:
			*uParam1 = Global_262145.f_9762;
			break;
		
		case 923924565:
			*uParam1 = Global_262145.f_9763;
			break;
		
		case 2082457211:
			*uParam1 = Global_262145.f_9764;
			break;
		
		case 1118819248:
			*uParam1 = Global_262145.f_9765;
			break;
		
		case 948092758:
			*uParam1 = Global_262145.f_9766;
			break;
		
		case -425892476:
			*uParam1 = Global_262145.f_9767;
			break;
		
		case 1961034257:
			*uParam1 = Global_262145.f_9768;
			break;
		
		case -1953353873:
			*uParam1 = Global_262145.f_9769;
			break;
		
		case 1807622248:
			*uParam1 = Global_262145.f_9770;
			break;
		
		case 1374678216:
			*uParam1 = Global_262145.f_9771;
			break;
		
		case -533034657:
			*uParam1 = Global_262145.f_9772;
			break;
		
		case 1716092200:
			*uParam1 = Global_262145.f_9773;
			break;
		
		case 1879216282:
			*uParam1 = Global_262145.f_9774;
			break;
		
		case 987735637:
			*uParam1 = Global_262145.f_9775;
			break;
		
		case 1698091572:
			*uParam1 = Global_262145.f_9737;
			break;
		
		case 2003400345:
			*uParam1 = Global_262145.f_9738;
			break;
		
		case 1698812486:
			*uParam1 = Global_262145.f_9739;
			break;
		
		case 1426530080:
			*uParam1 = Global_262145.f_9740;
			break;
		
		case -2090271773:
			*uParam1 = Global_262145.f_9741;
			break;
		
		case 1874252927:
			*uParam1 = Global_262145.f_9742;
			break;
		
		case 372234764:
			*uParam1 = Global_262145.f_9743;
			break;
		
		case 636713363:
			*uParam1 = Global_262145.f_9744;
			break;
		
		case -138109642:
			*uParam1 = Global_262145.f_9745;
			break;
		
		case 2035095618:
			*uParam1 = Global_262145.f_9746;
			break;
		
		case -397937098:
			*uParam1 = Global_262145.f_9747;
			break;
		
		case -709406443:
			*uParam1 = Global_262145.f_9748;
			break;
		
		case 1541409607:
			*uParam1 = Global_262145.f_9749;
			break;
		
		case 1888564393:
			*uParam1 = Global_262145.f_9750;
			break;
		
		case 1049448610:
			*uParam1 = Global_262145.f_9751;
			break;
		
		case 324635722:
			*uParam1 = Global_262145.f_9752;
			break;
		
		case 1101752557:
			*uParam1 = Global_262145.f_9753;
			break;
		
		case 1875232033:
			*uParam1 = Global_262145.f_9754;
			break;
		
		case -985735519:
			*uParam1 = Global_262145.f_9755;
			break;
		
		case -82589110:
			*uParam1 = Global_262145.f_9756;
			break;
		
		case -1460918788:
			*uParam1 = Global_262145.f_9757;
			break;
		
		case 1230126045:
			*uParam1 = Global_262145.f_9758;
			break;
		
		case 1522196142:
			*uParam1 = Global_262145.f_9759;
			break;
		
		case 1559487264:
			*uParam1 = Global_262145.f_9760;
			break;
		
		case 620944694:
			*uParam1 = Global_262145.f_9761;
			break;
		
		case 1185357954:
			*uParam1 = Global_262145.f_9762;
			break;
		
		case 8262701:
			*uParam1 = Global_262145.f_9763;
			break;
		
		case 840379881:
			*uParam1 = Global_262145.f_9764;
			break;
		
		case 1942630626:
			*uParam1 = Global_262145.f_9765;
			break;
		
		case 1711379793:
			*uParam1 = Global_262145.f_9766;
			break;
		
		case 542889940:
			*uParam1 = Global_262145.f_9767;
			break;
		
		case 275462131:
			*uParam1 = Global_262145.f_9768;
			break;
		
		case 27859567:
			*uParam1 = Global_262145.f_9769;
			break;
		
		case -201804460:
			*uParam1 = Global_262145.f_9770;
			break;
		
		case 230287574:
			*uParam1 = Global_262145.f_9771;
			break;
		
		case 1165547607:
			*uParam1 = Global_262145.f_9772;
			break;
		
		case 1443597867:
			*uParam1 = Global_262145.f_9773;
			break;
		
		case 1679436360:
			*uParam1 = Global_262145.f_9774;
			break;
		
		case 1278212684:
			*uParam1 = Global_262145.f_9775;
			break;
	}
	switch (iParam0)
	{
		case -477604174:
			*uParam1 = Global_262145.f_9809;
			break;
		
		case 364034822:
			*uParam1 = Global_262145.f_9807;
			break;
		
		case 136191965:
			*uParam1 = Global_262145.f_9818;
			break;
		
		case 442582143:
			*uParam1 = Global_262145.f_9811;
			break;
		
		case 84482511:
			*uParam1 = Global_262145.f_9808;
			break;
		
		case 971670421:
			*uParam1 = Global_262145.f_9817;
			break;
		
		case 736159614:
			*uParam1 = Global_262145.f_9814;
			break;
		
		case 1667815057:
			*uParam1 = Global_262145.f_9806;
			break;
		
		case 1294641685:
			*uParam1 = Global_262145.f_9813;
			break;
		
		case -2030199366:
			*uParam1 = Global_262145.f_9816;
			break;
		
		case 601407264:
			*uParam1 = Global_262145.f_9810;
			break;
		
		case 764138118:
			*uParam1 = Global_262145.f_9812;
			break;
		
		case 1968955913:
			*uParam1 = Global_262145.f_9815;
			break;
		
		case -893708693:
			*uParam1 = Global_262145.f_9809;
			break;
		
		case -660753872:
			*uParam1 = Global_262145.f_9807;
			break;
		
		case -1412999036:
			*uParam1 = Global_262145.f_9818;
			break;
		
		case -1121780933:
			*uParam1 = Global_262145.f_9811;
			break;
		
		case -2121038819:
			*uParam1 = Global_262145.f_9808;
			break;
		
		case -1880350514:
			*uParam1 = Global_262145.f_9817;
			break;
		
		case 1724501642:
			*uParam1 = Global_262145.f_9814;
			break;
		
		case 1953982949:
			*uParam1 = Global_262145.f_9806;
			break;
		
		case 1100809265:
			*uParam1 = Global_262145.f_9813;
			break;
		
		case 1341235418:
			*uParam1 = Global_262145.f_9816;
			break;
		
		case 202917910:
			*uParam1 = Global_262145.f_9810;
			break;
		
		case 509799595:
			*uParam1 = Global_262145.f_9812;
			break;
		
		case 797675260:
			*uParam1 = Global_262145.f_9815;
			break;
	}
}

void func_48(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case -1187301874:
			*uParam1 = Global_262145.f_9366;
			break;
		
		case -1552151920:
			*uParam1 = Global_262145.f_9367;
			break;
		
		case 1118750963:
			*uParam1 = Global_262145.f_9368;
			break;
		
		case 2080081887:
			*uParam1 = Global_262145.f_9378;
			break;
		
		case -1907970955:
			*uParam1 = Global_262145.f_9379;
			break;
		
		case -1588735357:
			*uParam1 = Global_262145.f_9380;
			break;
		
		case -519785019:
			*uParam1 = Global_262145.f_9383;
			break;
		
		case -899708805:
			*uParam1 = Global_262145.f_9384;
			break;
		
		case -56595204:
			*uParam1 = Global_262145.f_9385;
			break;
		
		case -304951455:
			*uParam1 = Global_262145.f_9386;
			break;
		
		case -1983051945:
			*uParam1 = Global_262145.f_9387;
			break;
		
		case -1288414683:
			*uParam1 = Global_262145.f_9388;
			break;
		
		case -446087534:
			*uParam1 = Global_262145.f_9389;
			break;
		
		case -827911922:
			*uParam1 = Global_262145.f_9390;
			break;
		
		case 1255016794:
			*uParam1 = Global_262145.f_9391;
			break;
		
		case 2098261471:
			*uParam1 = Global_262145.f_9392;
			break;
		
		case -2060243309:
			*uParam1 = Global_262145.f_9393;
			break;
		
		case 1928890910:
			*uParam1 = Global_262145.f_9394;
			break;
		
		case -394431202:
			*uParam1 = Global_262145.f_9395;
			break;
		
		case -692596333:
			*uParam1 = Global_262145.f_9396;
			break;
		
		case 247185818:
			*uParam1 = Global_262145.f_9397;
			break;
		
		case -1141761016:
			*uParam1 = Global_262145.f_9398;
			break;
		
		case 429242217:
			*uParam1 = Global_262145.f_9399;
			break;
		
		case 1831034499:
			*uParam1 = Global_262145.f_9400;
			break;
		
		case 1067058033:
			*uParam1 = Global_262145.f_9401;
			break;
		
		case 1320198558:
			*uParam1 = Global_262145.f_9402;
			break;
		
		case -1558230406:
			*uParam1 = Global_262145.f_9403;
			break;
		
		case -1391155252:
			*uParam1 = Global_262145.f_9404;
			break;
		
		case 1241473443:
			*uParam1 = Global_262145.f_9405;
			break;
		
		case 1084051167:
			*uParam1 = Global_262145.f_9406;
			break;
		
		case 1837115560:
			*uParam1 = Global_262145.f_9407;
			break;
		
		case 1665602614:
			*uParam1 = Global_262145.f_9408;
			break;
		
		case -453404775:
			*uParam1 = Global_262145.f_9409;
			break;
		
		case -980162147:
			*uParam1 = Global_262145.f_9410;
			break;
		
		case 292349024:
			*uParam1 = Global_262145.f_9411;
			break;
		
		case -945237799:
			*uParam1 = Global_262145.f_9412;
			break;
		
		case -1108165267:
			*uParam1 = Global_262145.f_9413;
			break;
		
		case -431714800:
			*uParam1 = Global_262145.f_9414;
			break;
		
		case -729355627:
			*uParam1 = Global_262145.f_9415;
			break;
		
		case -1750484721:
			*uParam1 = Global_262145.f_9416;
			break;
		
		case -311860083:
			*uParam1 = Global_262145.f_9417;
			break;
		
		case -1285787532:
			*uParam1 = Global_262145.f_9418;
			break;
		
		case -1425645624:
			*uParam1 = Global_262145.f_9419;
			break;
		
		case 1344547329:
			*uParam1 = Global_262145.f_9420;
			break;
		
		case 1181423247:
			*uParam1 = Global_262145.f_9421;
			break;
		
		case 1909550427:
			*uParam1 = Global_262145.f_9422;
			break;
		
		case 1611581910:
			*uParam1 = Global_262145.f_9423;
			break;
		
		case 1328654308:
			*uParam1 = Global_262145.f_9424;
			break;
		
		case 1022624617:
			*uParam1 = Global_262145.f_9425;
			break;
		
		case 273103119:
			*uParam1 = Global_262145.f_9426;
			break;
		
		case 579067272:
			*uParam1 = Global_262145.f_9427;
			break;
		
		case -339391228:
			*uParam1 = Global_262145.f_9428;
			break;
		
		case -796518778:
			*uParam1 = Global_262145.f_9429;
			break;
		
		case -2023095221:
			*uParam1 = Global_262145.f_9430;
			break;
		
		case -1784176442:
			*uParam1 = Global_262145.f_9431;
			break;
		
		case -1259479214:
			*uParam1 = Global_262145.f_9432;
			break;
		
		case -1019970593:
			*uParam1 = Global_262145.f_9433;
			break;
		
		case -1266622852:
			*uParam1 = Global_262145.f_9434;
			break;
		
		case -1031570815:
			*uParam1 = Global_262145.f_9435;
			break;
		
		case 1357748055:
			*uParam1 = Global_262145.f_9436;
			break;
		
		case 1596404682:
			*uParam1 = Global_262145.f_9437;
			break;
		
		case -1962532144:
			*uParam1 = Global_262145.f_9438;
			break;
		
		case 365508696:
			*uParam1 = Global_262145.f_9439;
			break;
		
		case 40804341:
			*uParam1 = Global_262145.f_9440;
			break;
		
		case 598532721:
			*uParam1 = Global_262145.f_9441;
			break;
		
		case -1945619678:
			*uParam1 = Global_262145.f_9442;
			break;
		
		case 2118883241:
			*uParam1 = Global_262145.f_9443;
			break;
		
		case 838228098:
			*uParam1 = Global_262145.f_9456;
			break;
		
		case -566669510:
			*uParam1 = Global_262145.f_9345;
			break;
		
		case -1077341606:
			*uParam1 = Global_262145.f_9346;
			break;
		
		case -643906039:
			*uParam1 = Global_262145.f_9347;
			break;
		
		case -309334549:
			*uParam1 = Global_262145.f_9348;
			break;
		
		case -152436577:
			*uParam1 = Global_262145.f_9349;
			break;
		
		case 1614110054:
			*uParam1 = Global_262145.f_9350;
			break;
		
		case -1150872636:
			*uParam1 = Global_262145.f_9351;
			break;
		
		case -911101863:
			*uParam1 = Global_262145.f_9352;
			break;
		
		case -1485870123:
			*uParam1 = Global_262145.f_9353;
			break;
		
		case 1965885265:
			*uParam1 = Global_262145.f_9354;
			break;
		
		case -187005270:
			*uParam1 = Global_262145.f_9355;
			break;
		
		case 43590183:
			*uParam1 = Global_262145.f_9356;
			break;
		
		case -529998393:
			*uParam1 = Global_262145.f_9357;
			break;
		
		case -299206326:
			*uParam1 = Global_262145.f_9358;
			break;
		
		case 426463175:
			*uParam1 = Global_262145.f_9359;
			break;
		
		case 983947584:
			*uParam1 = Global_262145.f_9360;
			break;
		
		case 1245476973:
			*uParam1 = Global_262145.f_9361;
			break;
		
		case 477273306:
			*uParam1 = Global_262145.f_9362;
			break;
		
		case -273071256:
			*uParam1 = Global_262145.f_9363;
			break;
		
		case 27191091:
			*uParam1 = Global_262145.f_9364;
			break;
		
		case -1375125535:
			*uParam1 = Global_262145.f_9365;
			break;
		
		case -1218415813:
			*uParam1 = Global_262145.f_9457;
			break;
		
		case -2046193522:
			*uParam1 = Global_262145.f_9458;
			break;
		
		case 1424698962:
			*uParam1 = Global_262145.f_9459;
			break;
		
		case -1548858409:
			*uParam1 = Global_262145.f_9460;
			break;
		
		case 1885922637:
			*uParam1 = Global_262145.f_9461;
			break;
		
		case 1054736952:
			*uParam1 = Global_262145.f_9462;
			break;
		
		case 167876736:
			*uParam1 = Global_262145.f_9463;
			break;
		
		case 1609778274:
			*uParam1 = Global_262145.f_9464;
			break;
		
		case -1305966376:
			*uParam1 = Global_262145.f_9465;
			break;
		
		case 200850551:
			*uParam1 = Global_262145.f_9466;
			break;
		
		case -1802044066:
			*uParam1 = Global_262145.f_9493;
			break;
		
		case 1694309931:
			*uParam1 = Global_262145.f_9494;
			break;
		
		case -1644130163:
			*uParam1 = Global_262145.f_9467;
			break;
		
		case 566925355:
			*uParam1 = Global_262145.f_9468;
			break;
		
		case 1216079245:
			*uParam1 = Global_262145.f_9469;
			break;
		
		case 962479954:
			*uParam1 = Global_262145.f_9470;
			break;
		
		case -329405114:
			*uParam1 = Global_262145.f_9471;
			break;
		
		case -2044469040:
			*uParam1 = Global_262145.f_9472;
			break;
		
		case 2107232188:
			*uParam1 = Global_262145.f_9473;
			break;
		
		case 716745211:
			*uParam1 = Global_262145.f_9474;
			break;
		
		case 1340601433:
			*uParam1 = Global_262145.f_9475;
			break;
		
		case -728105537:
			*uParam1 = Global_262145.f_9476;
			break;
		
		case 1735458261:
			*uParam1 = Global_262145.f_9477;
			break;
		
		case 1429363032:
			*uParam1 = Global_262145.f_9478;
			break;
		
		case 1740766843:
			*uParam1 = Global_262145.f_9479;
			break;
		
		case 1441225414:
			*uParam1 = Global_262145.f_9480;
			break;
		
		case 2064491794:
			*uParam1 = Global_262145.f_9481;
			break;
		
		case 1766588815:
			*uParam1 = Global_262145.f_9482;
			break;
		
		case -1331687374:
			*uParam1 = Global_262145.f_9483;
			break;
		
		case -1893937872:
			*uParam1 = Global_262145.f_9484;
			break;
		
		case -737454328:
			*uParam1 = Global_262145.f_9485;
			break;
		
		case -1034570851:
			*uParam1 = Global_262145.f_9486;
			break;
		
		case 2081891277:
			*uParam1 = Global_262145.f_9487;
			break;
		
		case 1848084462:
			*uParam1 = Global_262145.f_9488;
			break;
		
		case -549950966:
			*uParam1 = Global_262145.f_9489;
			break;
		
		case -777662747:
			*uParam1 = Global_262145.f_9490;
			break;
		
		case -912507182:
			*uParam1 = Global_262145.f_9491;
			break;
		
		case -1257302600:
			*uParam1 = Global_262145.f_9492;
			break;
		
		case 862585253:
			*uParam1 = Global_262145.f_9369;
			break;
		
		case 1889631251:
			*uParam1 = Global_262145.f_9371;
			break;
		
		case 1554404381:
			*uParam1 = Global_262145.f_9373;
			break;
		
		case 182661272:
			*uParam1 = Global_262145.f_9375;
			break;
		
		case -72052165:
			*uParam1 = Global_262145.f_9377;
			break;
		
		case 440651609:
			*uParam1 = Global_262145.f_9370;
			break;
		
		case 1316894621:
			*uParam1 = Global_262145.f_9372;
			break;
		
		case 1750035263:
			*uParam1 = Global_262145.f_9374;
			break;
		
		case 1460783300:
			*uParam1 = Global_262145.f_9376;
			break;
		
		case 922309769:
			*uParam1 = Global_262145.f_9381;
			break;
		
		case 295635413:
			*uParam1 = Global_262145.f_9382;
			break;
		
		case -2071105616:
			*uParam1 = Global_262145.f_9444;
			break;
		
		case 1824800798:
			*uParam1 = Global_262145.f_9445;
			break;
		
		case -1404190920:
			*uParam1 = Global_262145.f_9446;
			break;
		
		case -1795518318:
			*uParam1 = Global_262145.f_9447;
			break;
		
		case 144308151:
			*uParam1 = Global_262145.f_9450;
			break;
		
		case -504780201:
			*uParam1 = Global_262145.f_9455;
			break;
		
		case -787281750:
			*uParam1 = Global_262145.f_9448;
			break;
		
		case 1128230145:
			*uParam1 = Global_262145.f_9449;
			break;
		
		case -598236441:
			*uParam1 = Global_262145.f_9451;
			break;
		
		case -838269366:
			*uParam1 = Global_262145.f_9452;
			break;
		
		case -25368783:
			*uParam1 = Global_262145.f_9453;
			break;
		
		case -265631091:
			*uParam1 = Global_262145.f_9454;
			break;
		
		case joaat("CLO_S1M_DEC_24"):
			*uParam1 = Global_262145.f_9724;
			break;
		
		case joaat("CLO_S1M_DEC_25"):
			*uParam1 = Global_262145.f_9725;
			break;
	}
	switch (iParam0)
	{
		case joaat("CLO_S1F_F_0_0"):
			*uParam1 = Global_262145.f_9495;
			break;
		
		case joaat("CLO_S1F_F_0_1"):
			*uParam1 = Global_262145.f_9496;
			break;
		
		case joaat("CLO_S1F_F_0_2"):
			*uParam1 = Global_262145.f_9497;
			break;
		
		case joaat("CLO_S1F_F_0_3"):
			*uParam1 = Global_262145.f_9498;
			break;
		
		case joaat("CLO_S1F_F_0_4"):
			*uParam1 = Global_262145.f_9499;
			break;
		
		case joaat("CLO_S1F_F_1_0"):
			*uParam1 = Global_262145.f_9500;
			break;
		
		case joaat("CLO_S1F_F_1_1"):
			*uParam1 = Global_262145.f_9501;
			break;
		
		case joaat("CLO_S1F_F_1_2"):
			*uParam1 = Global_262145.f_9502;
			break;
		
		case joaat("CLO_S1F_F_1_3"):
			*uParam1 = Global_262145.f_9503;
			break;
		
		case joaat("CLO_S1F_F_1_4"):
			*uParam1 = Global_262145.f_9504;
			break;
		
		case joaat("CLO_S1F_F_1_5"):
			*uParam1 = Global_262145.f_9505;
			break;
		
		case joaat("CLO_S1F_F_1_6"):
			*uParam1 = Global_262145.f_9506;
			break;
		
		case joaat("CLO_S1F_F_1_7"):
			*uParam1 = Global_262145.f_9507;
			break;
		
		case joaat("CLO_S1F_U_0_0"):
			*uParam1 = Global_262145.f_9508;
			break;
		
		case joaat("CLO_S1F_U_0_1"):
			*uParam1 = Global_262145.f_9509;
			break;
		
		case joaat("CLO_S1F_U_0_2"):
			*uParam1 = Global_262145.f_9510;
			break;
		
		case joaat("CLO_S1F_U_1_0"):
			*uParam1 = Global_262145.f_9511;
			break;
		
		case joaat("CLO_S1F_U_1_1"):
			*uParam1 = Global_262145.f_9512;
			break;
		
		case joaat("CLO_S1F_U_1_2"):
			*uParam1 = Global_262145.f_9513;
			break;
		
		case joaat("CLO_S1F_U_2_0"):
			*uParam1 = Global_262145.f_9514;
			break;
		
		case joaat("CLO_S1F_U_2_1"):
			*uParam1 = Global_262145.f_9515;
			break;
		
		case joaat("CLO_S1F_U_2_2"):
			*uParam1 = Global_262145.f_9516;
			break;
		
		case joaat("CLO_S1F_U_2_3"):
			*uParam1 = Global_262145.f_9517;
			break;
		
		case joaat("CLO_S1F_U_3_0"):
			*uParam1 = Global_262145.f_9518;
			break;
		
		case joaat("CLO_S1F_U_3_1"):
			*uParam1 = Global_262145.f_9519;
			break;
		
		case joaat("CLO_S1F_U_3_2"):
			*uParam1 = Global_262145.f_9520;
			break;
		
		case joaat("CLO_S1F_U_3_3"):
			*uParam1 = Global_262145.f_9521;
			break;
		
		case joaat("CLO_S1F_U_3_4"):
			*uParam1 = Global_262145.f_9522;
			break;
		
		case joaat("CLO_S1F_U_4_0"):
			*uParam1 = Global_262145.f_9523;
			break;
		
		case joaat("CLO_S1F_U_5_0"):
			*uParam1 = Global_262145.f_9524;
			break;
		
		case joaat("CLO_S1F_U_5_1"):
			*uParam1 = Global_262145.f_9525;
			break;
		
		case joaat("CLO_S1F_U_5_2"):
			*uParam1 = Global_262145.f_9526;
			break;
		
		case joaat("CLO_S1F_U_5_3"):
			*uParam1 = Global_262145.f_9527;
			break;
		
		case joaat("CLO_S1F_U_5_4"):
			*uParam1 = Global_262145.f_9528;
			break;
		
		case joaat("CLO_S1F_U_5_5"):
			*uParam1 = Global_262145.f_9529;
			break;
		
		case joaat("CLO_S1F_U_5_6"):
			*uParam1 = Global_262145.f_9530;
			break;
		
		case joaat("CLO_S1F_U_5_7"):
			*uParam1 = Global_262145.f_9531;
			break;
		
		case joaat("CLO_S1F_U_6_0"):
			*uParam1 = Global_262145.f_9532;
			break;
		
		case joaat("CLO_S1F_U_6_1"):
			*uParam1 = Global_262145.f_9533;
			break;
		
		case joaat("CLO_S1F_U_6_2"):
			*uParam1 = Global_262145.f_9534;
			break;
		
		case joaat("CLO_S1F_U_6_3"):
			*uParam1 = Global_262145.f_9535;
			break;
		
		case joaat("CLO_S1F_U_7_0"):
			*uParam1 = Global_262145.f_9557;
			break;
		
		case joaat("CLO_S1F_U_8_0"):
			*uParam1 = Global_262145.f_9558;
			break;
		
		case joaat("CLO_S1F_U_8_1"):
			*uParam1 = Global_262145.f_9559;
			break;
		
		case joaat("CLO_S1F_U_8_2"):
			*uParam1 = Global_262145.f_9560;
			break;
		
		case joaat("CLO_S1F_U_8_3"):
			*uParam1 = Global_262145.f_9561;
			break;
		
		case joaat("CLO_S1F_U_8_4"):
			*uParam1 = Global_262145.f_9562;
			break;
		
		case joaat("CLO_S1F_U_8_5"):
			*uParam1 = Global_262145.f_9563;
			break;
		
		case joaat("CLO_S1F_U_8_6"):
			*uParam1 = Global_262145.f_9564;
			break;
		
		case joaat("CLO_S1F_U_8_7"):
			*uParam1 = Global_262145.f_9565;
			break;
		
		case joaat("CLO_S1F_U_8_8"):
			*uParam1 = Global_262145.f_9566;
			break;
		
		case joaat("CLO_S1F_U_8_9"):
			*uParam1 = Global_262145.f_9567;
			break;
		
		case joaat("CLO_S1F_U_8_10"):
			*uParam1 = Global_262145.f_9568;
			break;
		
		case joaat("CLO_S1F_U_8_11"):
			*uParam1 = Global_262145.f_9569;
			break;
		
		case joaat("CLO_S1F_DEC_1"):
			*uParam1 = Global_262145.f_9536;
			break;
		
		case joaat("CLO_S1F_DEC_2"):
			*uParam1 = Global_262145.f_9537;
			break;
		
		case joaat("CLO_S1F_DEC_3"):
			*uParam1 = Global_262145.f_9538;
			break;
		
		case joaat("CLO_S1F_DEC_4"):
			*uParam1 = Global_262145.f_9539;
			break;
		
		case joaat("CLO_S1F_DEC_5"):
			*uParam1 = Global_262145.f_9542;
			break;
		
		case joaat("CLO_S1F_DEC_6"):
			*uParam1 = Global_262145.f_9547;
			break;
		
		case joaat("CLO_S1F_DEC_7"):
			*uParam1 = Global_262145.f_9540;
			break;
		
		case joaat("CLO_S1F_DEC_8"):
			*uParam1 = Global_262145.f_9541;
			break;
		
		case joaat("CLO_S1F_DEC_9"):
			*uParam1 = Global_262145.f_9543;
			break;
		
		case joaat("CLO_S1F_DEC_10"):
			*uParam1 = Global_262145.f_9544;
			break;
		
		case joaat("CLO_S1F_DEC_11"):
			*uParam1 = Global_262145.f_9545;
			break;
		
		case joaat("CLO_S1F_DEC_12"):
			*uParam1 = Global_262145.f_9546;
			break;
		
		case joaat("CLO_S1F_DEC_13"):
			*uParam1 = Global_262145.f_9548;
			break;
		
		case joaat("CLO_S1F_DEC_14"):
			*uParam1 = Global_262145.f_9550;
			break;
		
		case joaat("CLO_S1F_DEC_15"):
			*uParam1 = Global_262145.f_9552;
			break;
		
		case joaat("CLO_S1F_DEC_16"):
			*uParam1 = Global_262145.f_9554;
			break;
		
		case joaat("CLO_S1F_DEC_17"):
			*uParam1 = Global_262145.f_9556;
			break;
		
		case joaat("CLO_S1F_DEC_18"):
			*uParam1 = Global_262145.f_9549;
			break;
		
		case joaat("CLO_S1F_DEC_19"):
			*uParam1 = Global_262145.f_9551;
			break;
		
		case joaat("CLO_S1F_DEC_20"):
			*uParam1 = Global_262145.f_9553;
			break;
		
		case joaat("CLO_S1F_DEC_21"):
			*uParam1 = Global_262145.f_9555;
			break;
		
		case 1539195757:
			*uParam1 = Global_262145.f_9726;
			break;
		
		case 1819862242:
			*uParam1 = Global_262145.f_9727;
			break;
		
		case joaat("CLO_S1F_L_0_0"):
			*uParam1 = Global_262145.f_9570;
			break;
		
		case joaat("CLO_S1F_L_0_1"):
			*uParam1 = Global_262145.f_9571;
			break;
		
		case joaat("CLO_S1F_L_0_2"):
			*uParam1 = Global_262145.f_9572;
			break;
		
		case joaat("CLO_S1F_L_0_3"):
			*uParam1 = Global_262145.f_9573;
			break;
		
		case joaat("CLO_S1F_E_0_0"):
			*uParam1 = Global_262145.f_9574;
			break;
		
		case joaat("CLO_S1F_E_1_0"):
			*uParam1 = Global_262145.f_9575;
			break;
		
		case joaat("CLO_S1F_E_2_0"):
			*uParam1 = Global_262145.f_9576;
			break;
		
		case joaat("CLO_S1F_PH_0_0"):
			*uParam1 = Global_262145.f_9577;
			break;
		
		case joaat("CLO_S1F_PH_0_1"):
			*uParam1 = Global_262145.f_9578;
			break;
		
		case joaat("CLO_S1F_PH_0_2"):
			*uParam1 = Global_262145.f_9579;
			break;
		
		case joaat("CLO_S1F_PH_0_3"):
			*uParam1 = Global_262145.f_9580;
			break;
		
		case joaat("CLO_S1F_PH_0_4"):
			*uParam1 = Global_262145.f_9581;
			break;
		
		case joaat("CLO_S1F_PH_0_5"):
			*uParam1 = Global_262145.f_9582;
			break;
		
		case joaat("CLO_S1F_PH_0_6"):
			*uParam1 = Global_262145.f_9583;
			break;
		
		case joaat("CLO_S1F_PH_0_7"):
			*uParam1 = Global_262145.f_9584;
			break;
		
		case joaat("CLO_S1F_PH_0_8"):
			*uParam1 = Global_262145.f_9585;
			break;
		
		case joaat("CLO_S1F_PH_0_9"):
			*uParam1 = Global_262145.f_9586;
			break;
		
		case joaat("CLO_S1F_PH_0_10"):
			*uParam1 = Global_262145.f_9587;
			break;
		
		case joaat("CLO_S1F_PH_0_11"):
			*uParam1 = Global_262145.f_9588;
			break;
		
		case joaat("CLO_S1F_PH_0_12"):
			*uParam1 = Global_262145.f_9589;
			break;
		
		case joaat("CLO_S1F_PH_0_13"):
			*uParam1 = Global_262145.f_9590;
			break;
		
		case joaat("CLO_S1F_PH_0_14"):
			*uParam1 = Global_262145.f_9591;
			break;
		
		case joaat("CLO_S1F_PH_0_15"):
			*uParam1 = Global_262145.f_9592;
			break;
		
		case joaat("CLO_S1F_PH_0_16"):
			*uParam1 = Global_262145.f_9593;
			break;
		
		case joaat("CLO_S1F_PH_0_17"):
			*uParam1 = Global_262145.f_9594;
			break;
		
		case joaat("CLO_S1F_PH_0_18"):
			*uParam1 = Global_262145.f_9595;
			break;
		
		case joaat("CLO_S1F_PH_0_19"):
			*uParam1 = Global_262145.f_9596;
			break;
		
		case joaat("CLO_S1F_PH_0_20"):
			*uParam1 = Global_262145.f_9597;
			break;
		
		case joaat("CLO_S1F_PH_0_21"):
			*uParam1 = Global_262145.f_9598;
			break;
		
		case joaat("CLO_S1F_PH_0_22"):
			*uParam1 = Global_262145.f_9599;
			break;
		
		case joaat("CLO_S1F_PH_0_23"):
			*uParam1 = Global_262145.f_9600;
			break;
		
		case joaat("CLO_S1F_PH_0_24"):
			*uParam1 = Global_262145.f_9601;
			break;
		
		case joaat("CLO_S1F_PH_0_25"):
			*uParam1 = Global_262145.f_9602;
			break;
		
		case joaat("CLO_S1F_T_0_0"):
			*uParam1 = Global_262145.f_9603;
			break;
		
		case joaat("CLO_S1F_T_0_1"):
			*uParam1 = Global_262145.f_9604;
			break;
		
		case -749850048:
			*uParam1 = Global_262145.f_9933;
			break;
		
		case -758321939:
			*uParam1 = Global_262145.f_9933;
			break;
		
		case joaat("CLO_S1F_O_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_9942));
			break;
		
		case joaat("CLO_S1F_O_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_9943));
			break;
		
		case joaat("CLO_S1F_O_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_9944));
			break;
		
		case joaat("CLO_S1F_O_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_9945));
			break;
		
		case joaat("CLO_S1F_O_4"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_9946));
			break;
		
		case joaat("CLO_S1F_O_5"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_9947));
			break;
		
		case joaat("CLO_S1F_O_6"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_9948));
			break;
		
		case joaat("CLO_S1F_O_7"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_9949));
			break;
		
		case 194573229:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_9934));
			break;
		
		case -522281415:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_9935));
			break;
		
		case 1580079318:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_9936));
			break;
		
		case 1872280491:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_9937));
			break;
		
		case 1118855643:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_9938));
			break;
		
		case 401214543:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_9939));
			break;
		
		case 2083443907:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_9940));
			break;
		
		case -1955302578:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_9941));
			break;
	}
}

void func_49(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case -1240410684:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8639));
			break;
		
		case -1069815270:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8640));
			break;
		
		case 1384418989:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8641));
			break;
		
		case 1555473169:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8642));
			break;
		
		case 1860650866:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8643));
			break;
		
		case 1658007398:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8644));
			break;
		
		case 1801470080:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8645));
			break;
		
		case 2120148605:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8646));
			break;
		
		case 689060833:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8647));
			break;
		
		case 938727844:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8648));
			break;
		
		case -432621986:
			if (Global_262145.f_8409 >= 0)
			{
				*uParam1 = Global_262145.f_8409;
			}
			break;
		
		case -122102934:
			if (Global_262145.f_8410 >= 0)
			{
				*uParam1 = Global_262145.f_8410;
			}
			break;
		
		case 107214528:
			if (Global_262145.f_8411 >= 0)
			{
				*uParam1 = Global_262145.f_8411;
			}
			break;
		
		case 1024975915:
			if (Global_262145.f_8412 >= 0)
			{
				*uParam1 = Global_262145.f_8412;
			}
			break;
		
		case -352239621:
			if (Global_262145.f_8413 >= 0)
			{
				*uParam1 = Global_262145.f_8413;
			}
			break;
		
		case 136584438:
			if (Global_262145.f_8414 >= 0)
			{
				*uParam1 = Global_262145.f_8414;
			}
			break;
		
		case -1111881697:
			if (Global_262145.f_8415 >= 0)
			{
				*uParam1 = Global_262145.f_8415;
			}
			break;
		
		case -458664451:
			if (Global_262145.f_8416 >= 0)
			{
				*uParam1 = Global_262145.f_8416;
			}
			break;
		
		case 871789686:
			if (Global_262145.f_8417 >= 0)
			{
				*uParam1 = Global_262145.f_8417;
			}
			break;
		
		case 581610409:
			if (Global_262145.f_8436 >= 0)
			{
				*uParam1 = Global_262145.f_8436;
			}
			break;
		
		case 878989084:
			if (Global_262145.f_8437 >= 0)
			{
				*uParam1 = Global_262145.f_8437;
			}
			break;
		
		case 1044341458:
			if (Global_262145.f_8438 >= 0)
			{
				*uParam1 = Global_262145.f_8438;
			}
			break;
		
		case -793442377:
			if (Global_262145.f_8439 >= 0)
			{
				*uParam1 = Global_262145.f_8439;
			}
			break;
		
		case -913245849:
			if (Global_262145.f_8440 >= 0)
			{
				*uParam1 = Global_262145.f_8440;
			}
			break;
		
		case 1525521442:
			if (Global_262145.f_8441 >= 0)
			{
				*uParam1 = Global_262145.f_8441;
			}
			break;
		
		case 1712501356:
			if (Global_262145.f_8442 >= 0)
			{
				*uParam1 = Global_262145.f_8442;
			}
			break;
		
		case 2010732025:
			if (Global_262145.f_8443 >= 0)
			{
				*uParam1 = Global_262145.f_8443;
			}
			break;
		
		case -2111739255:
			if (Global_262145.f_8444 >= 0)
			{
				*uParam1 = Global_262145.f_8444;
			}
			break;
		
		case 334106140:
			if (Global_262145.f_8445 >= 0)
			{
				*uParam1 = Global_262145.f_8445;
			}
			break;
		
		case 519593690:
			if (Global_262145.f_8446 >= 0)
			{
				*uParam1 = Global_262145.f_8446;
			}
			break;
		
		case 734984327:
			if (Global_262145.f_8447 >= 0)
			{
				*uParam1 = Global_262145.f_8447;
			}
			break;
		
		case 980555213:
			if (Global_262145.f_8448 >= 0)
			{
				*uParam1 = Global_262145.f_8448;
			}
			break;
		
		case 1465077647:
			if (Global_262145.f_8449 >= 0)
			{
				*uParam1 = Global_262145.f_8449;
			}
			break;
		
		case 1696852784:
			if (Global_262145.f_8450 >= 0)
			{
				*uParam1 = Global_262145.f_8450;
			}
			break;
		
		case 1453608509:
			if (Global_262145.f_8451 >= 0)
			{
				*uParam1 = Global_262145.f_8451;
			}
			break;
		
		case 1319368475:
			if (Global_262145.f_8407 >= 0)
			{
				*uParam1 = Global_262145.f_8407;
			}
			break;
		
		case -147044267:
			if (Global_262145.f_8408 >= 0)
			{
				*uParam1 = Global_262145.f_8408;
			}
			break;
		
		case -450781807:
			if (Global_262145.f_8452 >= 0)
			{
				*uParam1 = Global_262145.f_8452;
			}
			break;
		
		case 694167053:
			if (Global_262145.f_8453 >= 0)
			{
				*uParam1 = Global_262145.f_8453;
			}
			break;
		
		case -1924720002:
			if (Global_262145.f_8454 >= 0)
			{
				*uParam1 = Global_262145.f_8454;
			}
			break;
		
		case -1611022365:
			if (Global_262145.f_8455 >= 0)
			{
				*uParam1 = Global_262145.f_8455;
			}
			break;
		
		case -1122028310:
			if (Global_262145.f_8456 >= 0)
			{
				*uParam1 = Global_262145.f_8456;
			}
			break;
		
		case 201478831:
			if (Global_262145.f_8457 >= 0)
			{
				*uParam1 = Global_262145.f_8457;
			}
			break;
		
		case 1478087802:
			if (Global_262145.f_8458 >= 0)
			{
				*uParam1 = Global_262145.f_8458;
			}
			break;
		
		case 162183069:
			if (Global_262145.f_8459 >= 0)
			{
				*uParam1 = Global_262145.f_8459;
			}
			break;
		
		case -1924297703:
			if (Global_262145.f_8460 >= 0)
			{
				*uParam1 = Global_262145.f_8460;
			}
			break;
		
		case 234491248:
			if (Global_262145.f_8461 >= 0)
			{
				*uParam1 = Global_262145.f_8461;
			}
			break;
		
		case 1201832985:
			if (Global_262145.f_8462 >= 0)
			{
				*uParam1 = Global_262145.f_8462;
			}
			break;
		
		case 1442783442:
			if (Global_262145.f_8463 >= 0)
			{
				*uParam1 = Global_262145.f_8463;
			}
			break;
		
		case 1652194306:
			if (Global_262145.f_8464 >= 0)
			{
				*uParam1 = Global_262145.f_8464;
			}
			break;
		
		case 2100932992:
			if (Global_262145.f_8465 >= 0)
			{
				*uParam1 = Global_262145.f_8465;
			}
			break;
		
		case -1047471654:
			if (Global_262145.f_8466 >= 0)
			{
				*uParam1 = Global_262145.f_8466;
			}
			break;
		
		case -1285341825:
			if (Global_262145.f_8467 >= 0)
			{
				*uParam1 = Global_262145.f_8467;
			}
			break;
		
		case -227884296:
			if (Global_262145.f_8468 >= 0)
			{
				*uParam1 = Global_262145.f_8468;
			}
			break;
		
		case 531176820:
			if (Global_262145.f_8469 >= 0)
			{
				*uParam1 = Global_262145.f_8469;
			}
			break;
		
		case -196803354:
			if (Global_262145.f_8470 >= 0)
			{
				*uParam1 = Global_262145.f_8470;
			}
			break;
		
		case 510941508:
			if (Global_262145.f_8471 >= 0)
			{
				*uParam1 = Global_262145.f_8471;
			}
			break;
		
		case 388886345:
			if (Global_262145.f_8472 >= 0)
			{
				*uParam1 = Global_262145.f_8472;
			}
			break;
		
		case 1827150524:
			if (Global_262145.f_8473 >= 0)
			{
				*uParam1 = Global_262145.f_8473;
			}
			break;
		
		case 2054305232:
			if (Global_262145.f_8474 >= 0)
			{
				*uParam1 = Global_262145.f_8474;
			}
			break;
		
		case 1081229777:
			if (Global_262145.f_8475 >= 0)
			{
				*uParam1 = Global_262145.f_8475;
			}
			break;
		
		case 1575582911:
			if (Global_262145.f_8476 >= 0)
			{
				*uParam1 = Global_262145.f_8476;
			}
			break;
		
		case -1819056106:
			if (Global_262145.f_8477 >= 0)
			{
				*uParam1 = Global_262145.f_8477;
			}
			break;
		
		case -1117793421:
			if (Global_262145.f_8478 >= 0)
			{
				*uParam1 = Global_262145.f_8478;
			}
			break;
		
		case -1293500799:
			if (Global_262145.f_8479 >= 0)
			{
				*uParam1 = Global_262145.f_8479;
			}
			break;
		
		case 1068582029:
			if (Global_262145.f_8480 >= 0)
			{
				*uParam1 = Global_262145.f_8480;
			}
			break;
		
		case -862495145:
			if (Global_262145.f_8481 >= 0)
			{
				*uParam1 = Global_262145.f_8481;
			}
			break;
		
		case 1715796414:
			if (Global_262145.f_8482 >= 0)
			{
				*uParam1 = Global_262145.f_8482;
			}
			break;
		
		case 1401803856:
			if (Global_262145.f_8483 >= 0)
			{
				*uParam1 = Global_262145.f_8483;
			}
			break;
		
		case -1009858011:
			if (Global_262145.f_8484 >= 0)
			{
				*uParam1 = Global_262145.f_8484;
			}
			break;
		
		case -166941024:
			if (Global_262145.f_8485 >= 0)
			{
				*uParam1 = Global_262145.f_8485;
			}
			break;
		
		case -529431702:
			if (Global_262145.f_8486 >= 0)
			{
				*uParam1 = Global_262145.f_8486;
			}
			break;
		
		case 1591541875:
			if (Global_262145.f_8487 >= 0)
			{
				*uParam1 = Global_262145.f_8487;
			}
			break;
		
		case -1379238056:
			if (Global_262145.f_8488 >= 0)
			{
				*uParam1 = Global_262145.f_8488;
			}
			break;
		
		case 1628628466:
			if (Global_262145.f_8489 >= 0)
			{
				*uParam1 = Global_262145.f_8489;
			}
			break;
		
		case 1319256337:
			if (Global_262145.f_8490 >= 0)
			{
				*uParam1 = Global_262145.f_8490;
			}
			break;
		
		case -1268314991:
			if (Global_262145.f_8491 >= 0)
			{
				*uParam1 = Global_262145.f_8491;
			}
			break;
		
		case -1215115900:
			if (Global_262145.f_8492 >= 0)
			{
				*uParam1 = Global_262145.f_8492;
			}
			break;
		
		case -1046224474:
			if (Global_262145.f_8493 >= 0)
			{
				*uParam1 = Global_262145.f_8493;
			}
			break;
		
		case -1680271855:
			if (Global_262145.f_8494 >= 0)
			{
				*uParam1 = Global_262145.f_8494;
			}
			break;
		
		case -1506858307:
			if (Global_262145.f_8495 >= 0)
			{
				*uParam1 = Global_262145.f_8495;
			}
			break;
		
		case -2023733014:
			if (Global_262145.f_8496 >= 0)
			{
				*uParam1 = Global_262145.f_8496;
			}
			break;
		
		case 959065215:
			if (Global_262145.f_8497 >= 0)
			{
				*uParam1 = Global_262145.f_8497;
			}
			break;
		
		case -904417873:
			if (Global_262145.f_8498 >= 0)
			{
				*uParam1 = Global_262145.f_8498;
			}
			break;
		
		case -1283948431:
			if (Global_262145.f_8499 >= 0)
			{
				*uParam1 = Global_262145.f_8499;
			}
			break;
		
		case 1864956770:
			if (Global_262145.f_8500 >= 0)
			{
				*uParam1 = Global_262145.f_8500;
			}
			break;
		
		case 1552143896:
			if (Global_262145.f_8501 >= 0)
			{
				*uParam1 = Global_262145.f_8501;
			}
			break;
		
		case 981278544:
			if (Global_262145.f_8502 >= 0)
			{
				*uParam1 = Global_262145.f_8502;
			}
			break;
		
		case -1597412377:
			if (Global_262145.f_8503 >= 0)
			{
				*uParam1 = Global_262145.f_8503;
			}
			break;
		
		case -1893611368:
			if (Global_262145.f_8504 >= 0)
			{
				*uParam1 = Global_262145.f_8504;
			}
			break;
		
		case -280916393:
			if (Global_262145.f_8505 >= 0)
			{
				*uParam1 = Global_262145.f_8505;
			}
			break;
		
		case -1152047493:
			if (Global_262145.f_8506 >= 0)
			{
				*uParam1 = Global_262145.f_8506;
			}
			break;
		
		case -838448163:
			if (Global_262145.f_8507 >= 0)
			{
				*uParam1 = Global_262145.f_8507;
			}
			break;
		
		case 24121229:
			if (Global_262145.f_8508 >= 0)
			{
				*uParam1 = Global_262145.f_8508;
			}
			break;
		
		case 790162142:
			if (Global_262145.f_8509 >= 0)
			{
				*uParam1 = Global_262145.f_8509;
			}
			break;
		
		case -1448910863:
			if (Global_262145.f_8510 >= 0)
			{
				*uParam1 = Global_262145.f_8510;
			}
			break;
		
		case -1135411531:
			if (Global_262145.f_8511 >= 0)
			{
				*uParam1 = Global_262145.f_8511;
			}
			break;
		
		case -1912430059:
			if (Global_262145.f_8512 >= 0)
			{
				*uParam1 = Global_262145.f_8512;
			}
			break;
		
		case -691579011:
			if (Global_262145.f_8513 >= 0)
			{
				*uParam1 = Global_262145.f_8513;
			}
			break;
		
		case -456002670:
			if (Global_262145.f_8514 >= 0)
			{
				*uParam1 = Global_262145.f_8514;
			}
			break;
		
		case 1001361121:
			if (Global_262145.f_8515 >= 0)
			{
				*uParam1 = Global_262145.f_8515;
			}
			break;
		
		case -1350338937:
			if (Global_262145.f_8516 >= 0)
			{
				*uParam1 = Global_262145.f_8516;
			}
			break;
		
		case -2099896223:
			if (Global_262145.f_8517 >= 0)
			{
				*uParam1 = Global_262145.f_8517;
			}
			break;
		
		case 1963361474:
			if (Global_262145.f_8518 >= 0)
			{
				*uParam1 = Global_262145.f_8518;
			}
			break;
		
		case -1475548506:
			if (Global_262145.f_8519 >= 0)
			{
				*uParam1 = Global_262145.f_8519;
			}
			break;
		
		case 548153713:
			if (Global_262145.f_8520 >= 0)
			{
				*uParam1 = Global_262145.f_8520;
			}
			break;
		
		case 257558221:
			if (Global_262145.f_8521 >= 0)
			{
				*uParam1 = Global_262145.f_8521;
			}
			break;
		
		case -306953346:
			if (Global_262145.f_8522 >= 0)
			{
				*uParam1 = Global_262145.f_8522;
			}
			break;
		
		case 385753141:
			if (Global_262145.f_8523 >= 0)
			{
				*uParam1 = Global_262145.f_8523;
			}
			break;
		
		case 177899374:
			if (Global_262145.f_8524 >= 0)
			{
				*uParam1 = Global_262145.f_8524;
			}
			break;
		
		case -2025324345:
			if (Global_262145.f_8525 >= 0)
			{
				*uParam1 = Global_262145.f_8525;
			}
			break;
		
		case -1311826888:
			if (Global_262145.f_8526 >= 0)
			{
				*uParam1 = Global_262145.f_8526;
			}
			break;
		
		case 574258445:
			if (Global_262145.f_8527 >= 0)
			{
				*uParam1 = Global_262145.f_8527;
			}
			break;
		
		case 275569010:
			if (Global_262145.f_8528 >= 0)
			{
				*uParam1 = Global_262145.f_8528;
			}
			break;
		
		case -425780560:
			if (Global_262145.f_8529 >= 0)
			{
				*uParam1 = Global_262145.f_8529;
			}
			break;
		
		case 355235798:
			if (Global_262145.f_8530 >= 0)
			{
				*uParam1 = Global_262145.f_8530;
			}
			break;
		
		case -488467645:
			if (Global_262145.f_8531 >= 0)
			{
				*uParam1 = Global_262145.f_8531;
			}
			break;
		
		case 1675453571:
			if (Global_262145.f_8532 >= 0)
			{
				*uParam1 = Global_262145.f_8532;
			}
			break;
		
		case 1462455071:
			if (Global_262145.f_8533 >= 0)
			{
				*uParam1 = Global_262145.f_8533;
			}
			break;
		
		case -1987301400:
			if (Global_262145.f_8534 >= 0)
			{
				*uParam1 = Global_262145.f_8534;
			}
			break;
		
		case 1571154417:
			if (Global_262145.f_8535 >= 0)
			{
				*uParam1 = Global_262145.f_8535;
			}
			break;
		
		case -2098711435:
			if (Global_262145.f_8536 >= 0)
			{
				*uParam1 = Global_262145.f_8536;
			}
			break;
		
		case -206793192:
			if (Global_262145.f_8537 >= 0)
			{
				*uParam1 = Global_262145.f_8537;
			}
			break;
		
		case 1408495883:
			if (Global_262145.f_8538 >= 0)
			{
				*uParam1 = Global_262145.f_8538;
			}
			break;
		
		case 833727623:
			if (Global_262145.f_8539 >= 0)
			{
				*uParam1 = Global_262145.f_8539;
			}
			break;
		
		case 584781530:
			if (Global_262145.f_8540 >= 0)
			{
				*uParam1 = Global_262145.f_8540;
			}
			break;
		
		case 819585751:
			if (Global_262145.f_8424 >= 0)
			{
				*uParam1 = Global_262145.f_8424;
			}
			break;
		
		case 200775955:
			if (Global_262145.f_8425 >= 0)
			{
				*uParam1 = Global_262145.f_8425;
			}
			break;
		
		case 506805646:
			if (Global_262145.f_8426 >= 0)
			{
				*uParam1 = Global_262145.f_8426;
			}
			break;
		
		case 872976219:
			if (Global_262145.f_8427 >= 0)
			{
				*uParam1 = Global_262145.f_8427;
			}
			break;
		
		case -1602557890:
			if (Global_262145.f_8428 >= 0)
			{
				*uParam1 = Global_262145.f_8428;
			}
			break;
		
		case 1304117952:
			if (Global_262145.f_8429 >= 0)
			{
				*uParam1 = Global_262145.f_8429;
			}
			break;
		
		case 1141190484:
			if (Global_262145.f_8430 >= 0)
			{
				*uParam1 = Global_262145.f_8430;
			}
			break;
		
		case -103998747:
			if (Global_262145.f_8431 >= 0)
			{
				*uParam1 = Global_262145.f_8431;
			}
			break;
		
		case 204980154:
			if (Global_262145.f_8432 >= 0)
			{
				*uParam1 = Global_262145.f_8432;
			}
			break;
		
		case -1056593577:
			if (Global_262145.f_8433 >= 0)
			{
				*uParam1 = Global_262145.f_8433;
			}
			break;
		
		case 649950405:
			if (Global_262145.f_8434 >= 0)
			{
				*uParam1 = Global_262145.f_8434;
			}
			break;
		
		case -989244421:
			if (Global_262145.f_8435 >= 0)
			{
				*uParam1 = Global_262145.f_8435;
			}
			break;
		
		case -1484941084:
			if (Global_262145.f_8418 >= 0)
			{
				*uParam1 = Global_262145.f_8418;
			}
			break;
		
		case 431226195:
			if (Global_262145.f_8419 >= 0)
			{
				*uParam1 = Global_262145.f_8419;
			}
			break;
		
		case 128014638:
			if (Global_262145.f_8420 >= 0)
			{
				*uParam1 = Global_262145.f_8420;
			}
			break;
		
		case -105595563:
			if (Global_262145.f_8421 >= 0)
			{
				*uParam1 = Global_262145.f_8421;
			}
			break;
		
		case 1317955335:
			if (Global_262145.f_8422 >= 0)
			{
				*uParam1 = Global_262145.f_8422;
			}
			break;
		
		case 1080511161:
			if (Global_262145.f_8423 >= 0)
			{
				*uParam1 = Global_262145.f_8423;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("CLO_L2F_O_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8649));
			break;
		
		case joaat("CLO_L2F_O_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8650));
			break;
		
		case joaat("CLO_L2F_O_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8651));
			break;
		
		case joaat("CLO_L2F_O_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8652));
			break;
		
		case joaat("CLO_L2F_O_4"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8653));
			break;
		
		case joaat("CLO_L2F_O_5"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8654));
			break;
		
		case joaat("CLO_L2F_O_6"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8655));
			break;
		
		case joaat("CLO_L2F_O_7"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8656));
			break;
		
		case joaat("CLO_L2F_O_8"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8657));
			break;
		
		case joaat("CLO_L2F_O_9"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8658));
			break;
		
		case joaat("CLO_L2F_U_1_0"):
			if (Global_262145.f_8541 >= 0)
			{
				*uParam1 = Global_262145.f_8541;
			}
			break;
		
		case joaat("CLO_L2F_U_2_0"):
			if (Global_262145.f_8542 >= 0)
			{
				*uParam1 = Global_262145.f_8542;
			}
			break;
		
		case joaat("CLO_L2F_U_2_1"):
			if (Global_262145.f_8543 >= 0)
			{
				*uParam1 = Global_262145.f_8543;
			}
			break;
		
		case joaat("CLO_L2F_U_2_2"):
			if (Global_262145.f_8544 >= 0)
			{
				*uParam1 = Global_262145.f_8544;
			}
			break;
		
		case joaat("CLO_L2F_U_2_3"):
			if (Global_262145.f_8545 >= 0)
			{
				*uParam1 = Global_262145.f_8545;
			}
			break;
		
		case joaat("CLO_L2F_U_2_4"):
			if (Global_262145.f_8546 >= 0)
			{
				*uParam1 = Global_262145.f_8546;
			}
			break;
		
		case joaat("CLO_L2F_U_7_0"):
			if (Global_262145.f_8565 >= 0)
			{
				*uParam1 = Global_262145.f_8565;
			}
			break;
		
		case joaat("CLO_L2F_U_7_1"):
			if (Global_262145.f_8566 >= 0)
			{
				*uParam1 = Global_262145.f_8566;
			}
			break;
		
		case joaat("CLO_L2F_U_7_2"):
			if (Global_262145.f_8567 >= 0)
			{
				*uParam1 = Global_262145.f_8567;
			}
			break;
		
		case joaat("CLO_L2F_U_7_3"):
			if (Global_262145.f_8568 >= 0)
			{
				*uParam1 = Global_262145.f_8568;
			}
			break;
		
		case joaat("CLO_L2F_U_7_4"):
			if (Global_262145.f_8569 >= 0)
			{
				*uParam1 = Global_262145.f_8569;
			}
			break;
		
		case joaat("CLO_L2F_U_7_5"):
			if (Global_262145.f_8570 >= 0)
			{
				*uParam1 = Global_262145.f_8570;
			}
			break;
		
		case joaat("CLO_L2F_U_7_6"):
			if (Global_262145.f_8571 >= 0)
			{
				*uParam1 = Global_262145.f_8571;
			}
			break;
		
		case joaat("CLO_L2F_U_7_7"):
			if (Global_262145.f_8572 >= 0)
			{
				*uParam1 = Global_262145.f_8572;
			}
			break;
		
		case joaat("CLO_L2F_U_7_8"):
			if (Global_262145.f_8573 >= 0)
			{
				*uParam1 = Global_262145.f_8573;
			}
			break;
		
		case joaat("CLO_L2F_U_7_9"):
			if (Global_262145.f_8574 >= 0)
			{
				*uParam1 = Global_262145.f_8574;
			}
			break;
		
		case joaat("CLO_L2F_U_7_10"):
			if (Global_262145.f_8575 >= 0)
			{
				*uParam1 = Global_262145.f_8575;
			}
			break;
		
		case joaat("CLO_L2F_U_7_11"):
			if (Global_262145.f_8576 >= 0)
			{
				*uParam1 = Global_262145.f_8576;
			}
			break;
		
		case joaat("CLO_L2F_U_7_12"):
			if (Global_262145.f_8577 >= 0)
			{
				*uParam1 = Global_262145.f_8577;
			}
			break;
		
		case joaat("CLO_L2F_U_7_13"):
			if (Global_262145.f_8578 >= 0)
			{
				*uParam1 = Global_262145.f_8578;
			}
			break;
		
		case joaat("CLO_L2F_U_7_14"):
			if (Global_262145.f_8579 >= 0)
			{
				*uParam1 = Global_262145.f_8579;
			}
			break;
		
		case joaat("CLO_L2F_U_7_15"):
			if (Global_262145.f_8580 >= 0)
			{
				*uParam1 = Global_262145.f_8580;
			}
			break;
		
		case joaat("CLO_L2F_L_1_0"):
			if (Global_262145.f_8581 >= 0)
			{
				*uParam1 = Global_262145.f_8581;
			}
			break;
		
		case joaat("CLO_L2F_L_1_1"):
			if (Global_262145.f_8582 >= 0)
			{
				*uParam1 = Global_262145.f_8582;
			}
			break;
		
		case joaat("CLO_L2F_L_1_2"):
			if (Global_262145.f_8583 >= 0)
			{
				*uParam1 = Global_262145.f_8583;
			}
			break;
		
		case joaat("CLO_L2F_L_1_3"):
			if (Global_262145.f_8584 >= 0)
			{
				*uParam1 = Global_262145.f_8584;
			}
			break;
		
		case joaat("CLO_L2F_L_1_4"):
			if (Global_262145.f_8585 >= 0)
			{
				*uParam1 = Global_262145.f_8585;
			}
			break;
		
		case joaat("CLO_L2F_T_0_0"):
			if (Global_262145.f_8586 >= 0)
			{
				*uParam1 = Global_262145.f_8586;
			}
			break;
		
		case joaat("CLO_L2F_T_0_1"):
			if (Global_262145.f_8587 >= 0)
			{
				*uParam1 = Global_262145.f_8587;
			}
			break;
		
		case joaat("CLO_L2F_T_1_0"):
			if (Global_262145.f_8588 >= 0)
			{
				*uParam1 = Global_262145.f_8588;
			}
			break;
		
		case joaat("CLO_L2F_T_1_1"):
			if (Global_262145.f_8589 >= 0)
			{
				*uParam1 = Global_262145.f_8589;
			}
			break;
		
		case joaat("CLO_L2F_T_2_0"):
			if (Global_262145.f_8590 >= 0)
			{
				*uParam1 = Global_262145.f_8590;
			}
			break;
		
		case joaat("CLO_L2F_T_2_1"):
			if (Global_262145.f_8591 >= 0)
			{
				*uParam1 = Global_262145.f_8591;
			}
			break;
		
		case joaat("CLO_L2F_T_3_0"):
			if (Global_262145.f_8592 >= 0)
			{
				*uParam1 = Global_262145.f_8592;
			}
			break;
		
		case joaat("CLO_L2F_T_3_1"):
			if (Global_262145.f_8593 >= 0)
			{
				*uParam1 = Global_262145.f_8593;
			}
			break;
		
		case joaat("CLO_L2F_T_4_0"):
			if (Global_262145.f_8594 >= 0)
			{
				*uParam1 = Global_262145.f_8594;
			}
			break;
		
		case joaat("CLO_L2F_T_4_1"):
			if (Global_262145.f_8595 >= 0)
			{
				*uParam1 = Global_262145.f_8595;
			}
			break;
		
		case joaat("CLO_L2F_T_5_0"):
			if (Global_262145.f_8596 >= 0)
			{
				*uParam1 = Global_262145.f_8596;
			}
			break;
		
		case joaat("CLO_L2F_T_5_1"):
			if (Global_262145.f_8597 >= 0)
			{
				*uParam1 = Global_262145.f_8597;
			}
			break;
		
		case joaat("CLO_L2F_T_6_0"):
			if (Global_262145.f_8598 >= 0)
			{
				*uParam1 = Global_262145.f_8598;
			}
			break;
		
		case joaat("CLO_L2F_T_6_1"):
			if (Global_262145.f_8599 >= 0)
			{
				*uParam1 = Global_262145.f_8599;
			}
			break;
		
		case joaat("CLO_L2F_T_7_0"):
			if (Global_262145.f_8600 >= 0)
			{
				*uParam1 = Global_262145.f_8600;
			}
			break;
		
		case joaat("CLO_L2F_T_7_1"):
			if (Global_262145.f_8601 >= 0)
			{
				*uParam1 = Global_262145.f_8601;
			}
			break;
		
		case joaat("CLO_L2F_T_8_0"):
			if (Global_262145.f_8602 >= 0)
			{
				*uParam1 = Global_262145.f_8602;
			}
			break;
		
		case joaat("CLO_L2F_T_8_1"):
			if (Global_262145.f_8603 >= 0)
			{
				*uParam1 = Global_262145.f_8603;
			}
			break;
		
		case joaat("CLO_L2F_T_9_0"):
			if (Global_262145.f_8604 >= 0)
			{
				*uParam1 = Global_262145.f_8604;
			}
			break;
		
		case joaat("CLO_L2F_T_9_1"):
			if (Global_262145.f_8605 >= 0)
			{
				*uParam1 = Global_262145.f_8605;
			}
			break;
		
		case joaat("CLO_L2F_T_13_0"):
			if (Global_262145.f_8606 >= 0)
			{
				*uParam1 = Global_262145.f_8606;
			}
			break;
		
		case joaat("CLO_L2F_T_13_1"):
			if (Global_262145.f_8607 >= 0)
			{
				*uParam1 = Global_262145.f_8607;
			}
			break;
		
		case joaat("CLO_L2F_T_13_2"):
			if (Global_262145.f_8608 >= 0)
			{
				*uParam1 = Global_262145.f_8608;
			}
			break;
		
		case joaat("CLO_L2F_T_13_3"):
			if (Global_262145.f_8609 >= 0)
			{
				*uParam1 = Global_262145.f_8609;
			}
			break;
		
		case joaat("CLO_L2F_T_13_4"):
			if (Global_262145.f_8610 >= 0)
			{
				*uParam1 = Global_262145.f_8610;
			}
			break;
		
		case joaat("CLO_L2F_T_13_5"):
			if (Global_262145.f_8611 >= 0)
			{
				*uParam1 = Global_262145.f_8611;
			}
			break;
		
		case joaat("CLO_L2F_H_0_0"):
			if (Global_262145.f_8612 >= 0)
			{
				*uParam1 = Global_262145.f_8612;
			}
			break;
		
		case joaat("CLO_L2F_H_0_1"):
			if (Global_262145.f_8613 >= 0)
			{
				*uParam1 = Global_262145.f_8613;
			}
			break;
		
		case joaat("CLO_L2F_H_0_2"):
			if (Global_262145.f_8614 >= 0)
			{
				*uParam1 = Global_262145.f_8614;
			}
			break;
		
		case joaat("CLO_L2F_H_0_3"):
			if (Global_262145.f_8615 >= 0)
			{
				*uParam1 = Global_262145.f_8615;
			}
			break;
		
		case joaat("CLO_L2F_H_0_4"):
			if (Global_262145.f_8616 >= 0)
			{
				*uParam1 = Global_262145.f_8616;
			}
			break;
		
		case joaat("CLO_L2F_H_0_5"):
			if (Global_262145.f_8617 >= 0)
			{
				*uParam1 = Global_262145.f_8617;
			}
			break;
		
		case joaat("CLO_L2F_H_0_6"):
			if (Global_262145.f_8618 >= 0)
			{
				*uParam1 = Global_262145.f_8618;
			}
			break;
		
		case joaat("CLO_L2F_H_0_7"):
			if (Global_262145.f_8619 >= 0)
			{
				*uParam1 = Global_262145.f_8619;
			}
			break;
		
		case joaat("CLO_L2F_LW_2_0"):
			if (Global_262145.f_8620 >= 0)
			{
				*uParam1 = Global_262145.f_8620;
			}
			break;
		
		case joaat("CLO_L2F_LW_2_1"):
			if (Global_262145.f_8621 >= 0)
			{
				*uParam1 = Global_262145.f_8621;
			}
			break;
		
		case joaat("CLO_L2F_LW_2_2"):
			if (Global_262145.f_8622 >= 0)
			{
				*uParam1 = Global_262145.f_8622;
			}
			break;
		
		case joaat("CLO_L2F_LW_3_0"):
			if (Global_262145.f_8623 >= 0)
			{
				*uParam1 = Global_262145.f_8623;
			}
			break;
		
		case joaat("CLO_L2F_LW_3_1"):
			if (Global_262145.f_8624 >= 0)
			{
				*uParam1 = Global_262145.f_8624;
			}
			break;
		
		case joaat("CLO_L2F_LW_3_2"):
			if (Global_262145.f_8625 >= 0)
			{
				*uParam1 = Global_262145.f_8625;
			}
			break;
		
		case joaat("CLO_L2F_LW_4_0"):
			if (Global_262145.f_8626 >= 0)
			{
				*uParam1 = Global_262145.f_8626;
			}
			break;
		
		case joaat("CLO_L2F_LW_4_1"):
			if (Global_262145.f_8627 >= 0)
			{
				*uParam1 = Global_262145.f_8627;
			}
			break;
		
		case joaat("CLO_L2F_LW_4_2"):
			if (Global_262145.f_8628 >= 0)
			{
				*uParam1 = Global_262145.f_8628;
			}
			break;
		
		case joaat("CLO_L2F_LW_7_0"):
			if (Global_262145.f_8629 >= 0)
			{
				*uParam1 = Global_262145.f_8629;
			}
			break;
		
		case joaat("CLO_L2F_LW_7_1"):
			if (Global_262145.f_8630 >= 0)
			{
				*uParam1 = Global_262145.f_8630;
			}
			break;
		
		case joaat("CLO_L2F_LW_7_2"):
			if (Global_262145.f_8631 >= 0)
			{
				*uParam1 = Global_262145.f_8631;
			}
			break;
		
		case joaat("CLO_L2F_RW_0_0"):
			if (Global_262145.f_8632 >= 0)
			{
				*uParam1 = Global_262145.f_8632;
			}
			break;
		
		case joaat("CLO_L2F_RW_1_0"):
			if (Global_262145.f_8633 >= 0)
			{
				*uParam1 = Global_262145.f_8633;
			}
			break;
		
		case joaat("CLO_L2F_RW_2_0"):
			if (Global_262145.f_8634 >= 0)
			{
				*uParam1 = Global_262145.f_8634;
			}
			break;
		
		case joaat("CLO_L2F_RW_3_0"):
			if (Global_262145.f_8635 >= 0)
			{
				*uParam1 = Global_262145.f_8635;
			}
			break;
		
		case joaat("CLO_L2F_RW_4_0"):
			if (Global_262145.f_8636 >= 0)
			{
				*uParam1 = Global_262145.f_8636;
			}
			break;
		
		case joaat("CLO_L2F_RW_5_0"):
			if (Global_262145.f_8637 >= 0)
			{
				*uParam1 = Global_262145.f_8637;
			}
			break;
		
		case joaat("CLO_L2F_RW_6_0"):
			if (Global_262145.f_8638 >= 0)
			{
				*uParam1 = Global_262145.f_8638;
			}
			break;
		
		case joaat("CLO_L2F_DEC_6"):
			if (Global_262145.f_8547 >= 0)
			{
				*uParam1 = Global_262145.f_8547;
			}
			break;
		
		case joaat("CLO_L2F_DEC_7"):
			if (Global_262145.f_8548 >= 0)
			{
				*uParam1 = Global_262145.f_8548;
			}
			break;
		
		case joaat("CLO_L2F_DEC_8"):
			if (Global_262145.f_8549 >= 0)
			{
				*uParam1 = Global_262145.f_8549;
			}
			break;
		
		case joaat("CLO_L2F_DEC_9"):
			if (Global_262145.f_8550 >= 0)
			{
				*uParam1 = Global_262145.f_8550;
			}
			break;
		
		case joaat("CLO_L2F_DEC_10"):
			if (Global_262145.f_8551 >= 0)
			{
				*uParam1 = Global_262145.f_8551;
			}
			break;
		
		case joaat("CLO_L2F_DEC_11"):
			if (Global_262145.f_8552 >= 0)
			{
				*uParam1 = Global_262145.f_8552;
			}
			break;
		
		case joaat("CLO_L2F_DEC_14"):
			if (Global_262145.f_8553 >= 0)
			{
				*uParam1 = Global_262145.f_8553;
			}
			break;
		
		case joaat("CLO_L2F_DEC_15"):
			if (Global_262145.f_8554 >= 0)
			{
				*uParam1 = Global_262145.f_8554;
			}
			break;
		
		case joaat("CLO_L2F_DEC_16"):
			if (Global_262145.f_8555 >= 0)
			{
				*uParam1 = Global_262145.f_8555;
			}
			break;
		
		case joaat("CLO_L2F_DEC_17"):
			if (Global_262145.f_8556 >= 0)
			{
				*uParam1 = Global_262145.f_8556;
			}
			break;
		
		case joaat("CLO_L2F_DEC_18"):
			if (Global_262145.f_8557 >= 0)
			{
				*uParam1 = Global_262145.f_8557;
			}
			break;
		
		case joaat("CLO_L2F_DEC_19"):
			if (Global_262145.f_8558 >= 0)
			{
				*uParam1 = Global_262145.f_8558;
			}
			break;
		
		case joaat("CLO_L2F_DEC_20"):
			if (Global_262145.f_8559 >= 0)
			{
				*uParam1 = Global_262145.f_8559;
			}
			break;
		
		case joaat("CLO_L2F_DEC_21"):
			if (Global_262145.f_8560 >= 0)
			{
				*uParam1 = Global_262145.f_8560;
			}
			break;
		
		case joaat("CLO_L2F_DEC_24"):
			if (Global_262145.f_8561 >= 0)
			{
				*uParam1 = Global_262145.f_8561;
			}
			break;
		
		case joaat("CLO_L2F_DEC_25"):
			if (Global_262145.f_8562 >= 0)
			{
				*uParam1 = Global_262145.f_8562;
			}
			break;
		
		case joaat("CLO_L2F_DEC_26"):
			if (Global_262145.f_8563 >= 0)
			{
				*uParam1 = Global_262145.f_8563;
			}
			break;
		
		case joaat("CLO_L2F_DEC_27"):
			if (Global_262145.f_8564 >= 0)
			{
				*uParam1 = Global_262145.f_8564;
			}
			break;
	}
}

void func_50(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case -1545898329:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8322));
			break;
		
		case -1837837350:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8323));
			break;
		
		case 1853131738:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8324));
			break;
		
		case 1521902686:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8325));
			break;
		
		case 1221705877:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8326));
			break;
		
		case 1192803619:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8327));
			break;
		
		case 857576749:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8328));
			break;
		
		case 560525768:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8329));
			break;
		
		case 302142203:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8330));
			break;
		
		case -264171655:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8331));
			break;
		
		case 2126909094:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8332));
			break;
		
		case -1602924028:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8333));
			break;
		
		case 1588751002:
			if (Global_262145.f_8048 >= 0)
			{
				*uParam1 = Global_262145.f_8048;
			}
			break;
		
		case 1291339558:
			if (Global_262145.f_8049 >= 0)
			{
				*uParam1 = Global_262145.f_8049;
			}
			break;
		
		case 2067669937:
			if (Global_262145.f_8050 >= 0)
			{
				*uParam1 = Global_262145.f_8050;
			}
			break;
		
		case 2004687919:
			if (Global_262145.f_8051 >= 0)
			{
				*uParam1 = Global_262145.f_8051;
			}
			break;
		
		case -1510475484:
			if (Global_262145.f_8052 >= 0)
			{
				*uParam1 = Global_262145.f_8052;
			}
			break;
		
		case -1807100472:
			if (Global_262145.f_8053 >= 0)
			{
				*uParam1 = Global_262145.f_8053;
			}
			break;
		
		case 1075092502:
			if (Global_262145.f_8054 >= 0)
			{
				*uParam1 = Global_262145.f_8054;
			}
			break;
		
		case 984713582:
			if (Global_262145.f_8055 >= 0)
			{
				*uParam1 = Global_262145.f_8055;
			}
			break;
		
		case 75209987:
			if (Global_262145.f_8056 >= 0)
			{
				*uParam1 = Global_262145.f_8056;
			}
			break;
		
		case 1446199409:
			if (Global_262145.f_8057 >= 0)
			{
				*uParam1 = Global_262145.f_8057;
			}
			break;
		
		case 1315888:
			if (Global_262145.f_8058 >= 0)
			{
				*uParam1 = Global_262145.f_8058;
			}
			break;
		
		case 365576092:
			if (Global_262145.f_8059 >= 0)
			{
				*uParam1 = Global_262145.f_8059;
			}
			break;
		
		case 424265371:
			if (Global_262145.f_8060 >= 0)
			{
				*uParam1 = Global_262145.f_8060;
			}
			break;
		
		case 729803527:
			if (Global_262145.f_8061 >= 0)
			{
				*uParam1 = Global_262145.f_8061;
			}
			break;
		
		case -171114594:
			if (Global_262145.f_8062 >= 0)
			{
				*uParam1 = Global_262145.f_8062;
			}
			break;
		
		case -999088917:
			if (Global_262145.f_8063 >= 0)
			{
				*uParam1 = Global_262145.f_8063;
			}
			break;
		
		case -1908035439:
			if (Global_262145.f_8064 >= 0)
			{
				*uParam1 = Global_262145.f_8064;
			}
			break;
		
		case -546566269:
			if (Global_262145.f_8065 >= 0)
			{
				*uParam1 = Global_262145.f_8065;
			}
			break;
		
		case -381476047:
			if (Global_262145.f_8066 >= 0)
			{
				*uParam1 = Global_262145.f_8066;
			}
			break;
		
		case 330659273:
			if (Global_262145.f_8067 >= 0)
			{
				*uParam1 = Global_262145.f_8067;
			}
			break;
		
		case 487185756:
			if (Global_262145.f_8068 >= 0)
			{
				*uParam1 = Global_262145.f_8068;
			}
			break;
		
		case -1537774595:
			if (Global_262145.f_8069 >= 0)
			{
				*uParam1 = Global_262145.f_8069;
			}
			break;
		
		case 1921812584:
			if (Global_262145.f_8070 >= 0)
			{
				*uParam1 = Global_262145.f_8070;
			}
			break;
		
		case 2137760294:
			if (Global_262145.f_8071 >= 0)
			{
				*uParam1 = Global_262145.f_8071;
			}
			break;
		
		case 53302570:
			if (Global_262145.f_8072 >= 0)
			{
				*uParam1 = Global_262145.f_8072;
			}
			break;
		
		case 1298852260:
			if (Global_262145.f_8073 >= 0)
			{
				*uParam1 = Global_262145.f_8073;
			}
			break;
		
		case 1612353271:
			if (Global_262145.f_8074 >= 0)
			{
				*uParam1 = Global_262145.f_8074;
			}
			break;
		
		case 710288251:
			if (Global_262145.f_8075 >= 0)
			{
				*uParam1 = Global_262145.f_8075;
			}
			break;
		
		case 1015465948:
			if (Global_262145.f_8076 >= 0)
			{
				*uParam1 = Global_262145.f_8076;
			}
			break;
		
		case -180536998:
			if (Global_262145.f_8077 >= 0)
			{
				*uParam1 = Global_262145.f_8077;
			}
			break;
		
		case 119594273:
			if (Global_262145.f_8078 >= 0)
			{
				*uParam1 = Global_262145.f_8078;
			}
			break;
		
		case -767528099:
			if (Global_262145.f_8079 >= 0)
			{
				*uParam1 = Global_262145.f_8079;
			}
			break;
		
		case -493022182:
			if (Global_262145.f_8080 >= 0)
			{
				*uParam1 = Global_262145.f_8080;
			}
			break;
		
		case 766683716:
			if (Global_262145.f_8081 >= 0)
			{
				*uParam1 = Global_262145.f_8081;
			}
			break;
		
		case -643136303:
			if (Global_262145.f_8082 >= 0)
			{
				*uParam1 = Global_262145.f_8082;
			}
			break;
		
		case 190048291:
			if (Global_262145.f_8083 >= 0)
			{
				*uParam1 = Global_262145.f_8083;
			}
			break;
		
		case -32944754:
			if (Global_262145.f_8084 >= 0)
			{
				*uParam1 = Global_262145.f_8084;
			}
			break;
		
		case -1344753366:
			if (Global_262145.f_8085 >= 0)
			{
				*uParam1 = Global_262145.f_8085;
			}
			break;
		
		case -1570302393:
			if (Global_262145.f_8086 >= 0)
			{
				*uParam1 = Global_262145.f_8086;
			}
			break;
		
		case -959717616:
			if (Global_262145.f_8087 >= 0)
			{
				*uParam1 = Global_262145.f_8087;
			}
			break;
		
		case -650509440:
			if (Global_262145.f_8088 >= 0)
			{
				*uParam1 = Global_262145.f_8088;
			}
			break;
		
		case -351754467:
			if (Global_262145.f_8089 >= 0)
			{
				*uParam1 = Global_262145.f_8089;
			}
			break;
		
		case -281549889:
			if (Global_262145.f_8090 >= 0)
			{
				*uParam1 = Global_262145.f_8090;
			}
			break;
		
		case 1806720174:
			if (Global_262145.f_8091 >= 0)
			{
				*uParam1 = Global_262145.f_8091;
			}
			break;
		
		case 2045966643:
			if (Global_262145.f_8092 >= 0)
			{
				*uParam1 = Global_262145.f_8092;
			}
			break;
		
		case 135992709:
			if (Global_262145.f_8093 >= 0)
			{
				*uParam1 = Global_262145.f_8093;
			}
			break;
		
		case 477445689:
			if (Global_262145.f_8094 >= 0)
			{
				*uParam1 = Global_262145.f_8094;
			}
			break;
		
		case -1122402433:
			if (Global_262145.f_8095 >= 0)
			{
				*uParam1 = Global_262145.f_8095;
			}
			break;
		
		case -1028322513:
			if (Global_262145.f_8097 >= 0)
			{
				*uParam1 = Global_262145.f_8097;
			}
			break;
		
		case -798021981:
			if (Global_262145.f_8098 >= 0)
			{
				*uParam1 = Global_262145.f_8098;
			}
			break;
		
		case -847504039:
			if (Global_262145.f_8096 >= 0)
			{
				*uParam1 = Global_262145.f_8096;
			}
			break;
		
		case 1817631504:
			if (Global_262145.f_8099 >= 0)
			{
				*uParam1 = Global_262145.f_8099;
			}
			break;
		
		case 1438981714:
			if (Global_262145.f_8100 >= 0)
			{
				*uParam1 = Global_262145.f_8100;
			}
			break;
		
		case 962520450:
			if (Global_262145.f_8101 >= 0)
			{
				*uParam1 = Global_262145.f_8101;
			}
			break;
		
		case 657277215:
			if (Global_262145.f_8102 >= 0)
			{
				*uParam1 = Global_262145.f_8102;
			}
			break;
		
		case -1633046502:
			if (Global_262145.f_8103 >= 0)
			{
				*uParam1 = Global_262145.f_8103;
			}
			break;
		
		case -1116672600:
			if (Global_262145.f_8104 >= 0)
			{
				*uParam1 = Global_262145.f_8104;
			}
			break;
		
		case -2077557987:
			if (Global_262145.f_8105 >= 0)
			{
				*uParam1 = Global_262145.f_8105;
			}
			break;
		
		case 1895093425:
			if (Global_262145.f_8106 >= 0)
			{
				*uParam1 = Global_262145.f_8106;
			}
			break;
		
		case -908392832:
			if (Global_262145.f_8107 >= 0)
			{
				*uParam1 = Global_262145.f_8107;
			}
			break;
		
		case -124918811:
			if (Global_262145.f_8108 >= 0)
			{
				*uParam1 = Global_262145.f_8108;
			}
			break;
		
		case -1420539537:
			if (Global_262145.f_8109 >= 0)
			{
				*uParam1 = Global_262145.f_8109;
			}
			break;
		
		case 22468484:
			if (Global_262145.f_8110 >= 0)
			{
				*uParam1 = Global_262145.f_8110;
			}
			break;
		
		case -1693764424:
			if (Global_262145.f_8111 >= 0)
			{
				*uParam1 = Global_262145.f_8111;
			}
			break;
		
		case 1966336266:
			if (Global_262145.f_8112 >= 0)
			{
				*uParam1 = Global_262145.f_8112;
			}
			break;
		
		case -1297259516:
			if (Global_262145.f_8113 >= 0)
			{
				*uParam1 = Global_262145.f_8113;
			}
			break;
		
		case -1385145974:
			if (Global_262145.f_8114 >= 0)
			{
				*uParam1 = Global_262145.f_8114;
			}
			break;
		
		case -1606828259:
			if (Global_262145.f_8115 >= 0)
			{
				*uParam1 = Global_262145.f_8115;
			}
			break;
		
		case -1997303663:
			if (Global_262145.f_8116 >= 0)
			{
				*uParam1 = Global_262145.f_8116;
			}
			break;
		
		case 158798230:
			if (Global_262145.f_8117 >= 0)
			{
				*uParam1 = Global_262145.f_8117;
			}
			break;
		
		case -74091053:
			if (Global_262145.f_8118 >= 0)
			{
				*uParam1 = Global_262145.f_8118;
			}
			break;
		
		case -663408749:
			if (Global_262145.f_8119 >= 0)
			{
				*uParam1 = Global_262145.f_8119;
			}
			break;
		
		case -1045233137:
			if (Global_262145.f_8120 >= 0)
			{
				*uParam1 = Global_262145.f_8120;
			}
			break;
		
		case -1014194639:
			if (Global_262145.f_8121 >= 0)
			{
				*uParam1 = Global_262145.f_8121;
			}
			break;
		
		case -1417871823:
			if (Global_262145.f_8122 >= 0)
			{
				*uParam1 = Global_262145.f_8122;
			}
			break;
		
		case -1935949713:
			if (Global_262145.f_8123 >= 0)
			{
				*uParam1 = Global_262145.f_8123;
			}
			break;
		
		case -1277206041:
			if (Global_262145.f_8124 >= 0)
			{
				*uParam1 = Global_262145.f_8124;
			}
			break;
		
		case -1610794461:
			if (Global_262145.f_8125 >= 0)
			{
				*uParam1 = Global_262145.f_8125;
			}
			break;
		
		case -1882332520:
			if (Global_262145.f_8126 >= 0)
			{
				*uParam1 = Global_262145.f_8126;
			}
			break;
		
		case -32626073:
			if (Global_262145.f_8127 >= 0)
			{
				*uParam1 = Global_262145.f_8127;
			}
			break;
		
		case 164381155:
			if (Global_262145.f_8128 >= 0)
			{
				*uParam1 = Global_262145.f_8128;
			}
			break;
		
		case -1157020700:
			if (Global_262145.f_8129 >= 0)
			{
				*uParam1 = Global_262145.f_8129;
			}
			break;
		
		case -346020719:
			if (Global_262145.f_8130 >= 0)
			{
				*uParam1 = Global_262145.f_8130;
			}
			break;
		
		case -1945965022:
			if (Global_262145.f_8131 >= 0)
			{
				*uParam1 = Global_262145.f_8131;
			}
			break;
		
		case 2110837182:
			if (Global_262145.f_8132 >= 0)
			{
				*uParam1 = Global_262145.f_8132;
			}
			break;
		
		case -1975055154:
			if (Global_262145.f_8133 >= 0)
			{
				*uParam1 = Global_262145.f_8133;
			}
			break;
		
		case -1668206238:
			if (Global_262145.f_8134 >= 0)
			{
				*uParam1 = Global_262145.f_8134;
			}
			break;
		
		case 1827315643:
			if (Global_262145.f_8135 >= 0)
			{
				*uParam1 = Global_262145.f_8135;
			}
			break;
		
		case 2037922006:
			if (Global_262145.f_8136 >= 0)
			{
				*uParam1 = Global_262145.f_8136;
			}
			break;
		
		case -904504815:
			if (Global_262145.f_8137 >= 0)
			{
				*uParam1 = Global_262145.f_8137;
			}
			break;
		
		case 889097602:
			if (Global_262145.f_8138 >= 0)
			{
				*uParam1 = Global_262145.f_8138;
			}
			break;
		
		case 1119693055:
			if (Global_262145.f_8139 >= 0)
			{
				*uParam1 = Global_262145.f_8139;
			}
			break;
		
		case 423810571:
			if (Global_262145.f_8140 >= 0)
			{
				*uParam1 = Global_262145.f_8140;
			}
			break;
		
		case 897254052:
			if (Global_262145.f_8141 >= 0)
			{
				*uParam1 = Global_262145.f_8141;
			}
			break;
		
		case 1273769862:
			if (Global_262145.f_8142 >= 0)
			{
				*uParam1 = Global_262145.f_8142;
			}
			break;
		
		case 1513802787:
			if (Global_262145.f_8143 >= 0)
			{
				*uParam1 = Global_262145.f_8143;
			}
			break;
		
		case -1332903487:
			if (Global_262145.f_8144 >= 0)
			{
				*uParam1 = Global_262145.f_8144;
			}
			break;
		
		case -1498026478:
			if (Global_262145.f_8145 >= 0)
			{
				*uParam1 = Global_262145.f_8145;
			}
			break;
		
		case -1869458112:
			if (Global_262145.f_8146 >= 0)
			{
				*uParam1 = Global_262145.f_8146;
			}
			break;
		
		case -1531937412:
			if (Global_262145.f_8147 >= 0)
			{
				*uParam1 = Global_262145.f_8147;
			}
			break;
		
		case 1625244622:
			if (Global_262145.f_8148 >= 0)
			{
				*uParam1 = Global_262145.f_8148;
			}
			break;
		
		case -1825134468:
			if (Global_262145.f_8149 >= 0)
			{
				*uParam1 = Global_262145.f_8149;
			}
			break;
		
		case -2094688037:
			if (Global_262145.f_8150 >= 0)
			{
				*uParam1 = Global_262145.f_8150;
			}
			break;
		
		case -1241547122:
			if (Global_262145.f_8151 >= 0)
			{
				*uParam1 = Global_262145.f_8151;
			}
			break;
		
		case -1615310336:
			if (Global_262145.f_8152 >= 0)
			{
				*uParam1 = Global_262145.f_8152;
			}
			break;
		
		case -1174436240:
			if (Global_262145.f_8153 >= 0)
			{
				*uParam1 = Global_262145.f_8153;
			}
			break;
		
		case 948503433:
			if (Global_262145.f_8154 >= 0)
			{
				*uParam1 = Global_262145.f_8154;
			}
			break;
		
		case 1850371851:
			if (Global_262145.f_8155 >= 0)
			{
				*uParam1 = Global_262145.f_8155;
			}
			break;
		
		case 1885149598:
			if (Global_262145.f_8156 >= 0)
			{
				*uParam1 = Global_262145.f_8156;
			}
			break;
		
		case -1038664431:
			if (Global_262145.f_8157 >= 0)
			{
				*uParam1 = Global_262145.f_8157;
			}
			break;
		
		case -798434892:
			if (Global_262145.f_8158 >= 0)
			{
				*uParam1 = Global_262145.f_8158;
			}
			break;
		
		case 161576213:
			if (Global_262145.f_8159 >= 0)
			{
				*uParam1 = Global_262145.f_8159;
			}
			break;
		
		case -75278119:
			if (Global_262145.f_8160 >= 0)
			{
				*uParam1 = Global_262145.f_8160;
			}
			break;
		
		case -324551902:
			if (Global_262145.f_8161 >= 0)
			{
				*uParam1 = Global_262145.f_8161;
			}
			break;
		
		case -1589432326:
			if (Global_262145.f_8162 >= 0)
			{
				*uParam1 = Global_262145.f_8162;
			}
			break;
		
		case 1862224751:
			if (Global_262145.f_8163 >= 0)
			{
				*uParam1 = Global_262145.f_8163;
			}
			break;
		
		case 1404114131:
			if (Global_262145.f_8164 >= 0)
			{
				*uParam1 = Global_262145.f_8164;
			}
			break;
		
		case 2008256219:
			if (Global_262145.f_8165 >= 0)
			{
				*uParam1 = Global_262145.f_8165;
			}
			break;
		
		case 505240488:
			if (Global_262145.f_8166 >= 0)
			{
				*uParam1 = Global_262145.f_8166;
			}
			break;
		
		case 56436264:
			if (Global_262145.f_8167 >= 0)
			{
				*uParam1 = Global_262145.f_8167;
			}
			break;
		
		case -1414017599:
			if (Global_262145.f_8168 >= 0)
			{
				*uParam1 = Global_262145.f_8168;
			}
			break;
		
		case -1720047290:
			if (Global_262145.f_8169 >= 0)
			{
				*uParam1 = Global_262145.f_8169;
			}
			break;
		
		case 1197311242:
			if (Global_262145.f_8170 >= 0)
			{
				*uParam1 = Global_262145.f_8170;
			}
			break;
		
		case -702400674:
			if (Global_262145.f_8171 >= 0)
			{
				*uParam1 = Global_262145.f_8171;
			}
			break;
		
		case -613432839:
			if (Global_262145.f_8172 >= 0)
			{
				*uParam1 = Global_262145.f_8172;
			}
			break;
		
		case -113902203:
			if (Global_262145.f_8173 >= 0)
			{
				*uParam1 = Global_262145.f_8173;
			}
			break;
		
		case 2108084072:
			if (Global_262145.f_8174 >= 0)
			{
				*uParam1 = Global_262145.f_8174;
			}
			break;
		
		case -456909395:
			if (Global_262145.f_8175 >= 0)
			{
				*uParam1 = Global_262145.f_8175;
			}
			break;
		
		case 913555727:
			if (Global_262145.f_8176 >= 0)
			{
				*uParam1 = Global_262145.f_8176;
			}
			break;
		
		case 324888741:
			if (Global_262145.f_8177 >= 0)
			{
				*uParam1 = Global_262145.f_8177;
			}
			break;
		
		case 92130534:
			if (Global_262145.f_8178 >= 0)
			{
				*uParam1 = Global_262145.f_8178;
			}
			break;
		
		case -118836288:
			if (Global_262145.f_8179 >= 0)
			{
				*uParam1 = Global_262145.f_8179;
			}
			break;
		
		case -355854465:
			if (Global_262145.f_8180 >= 0)
			{
				*uParam1 = Global_262145.f_8180;
			}
			break;
		
		case -596641077:
			if (Global_262145.f_8181 >= 0)
			{
				*uParam1 = Global_262145.f_8181;
			}
			break;
		
		case 588684543:
			if (Global_262145.f_8182 >= 0)
			{
				*uParam1 = Global_262145.f_8182;
			}
			break;
		
		case 873938688:
			if (Global_262145.f_8183 >= 0)
			{
				*uParam1 = Global_262145.f_8183;
			}
			break;
		
		case 243069904:
			if (Global_262145.f_8184 >= 0)
			{
				*uParam1 = Global_262145.f_8184;
			}
			break;
		
		case -1614965165:
			if (Global_262145.f_8185 >= 0)
			{
				*uParam1 = Global_262145.f_8185;
			}
			break;
		
		case -651622103:
			if (Global_262145.f_8186 >= 0)
			{
				*uParam1 = Global_262145.f_8186;
			}
			break;
		
		case 1836030884:
			if (Global_262145.f_8187 >= 0)
			{
				*uParam1 = Global_262145.f_8187;
			}
			break;
		
		case 1555954241:
			if (Global_262145.f_8188 >= 0)
			{
				*uParam1 = Global_262145.f_8188;
			}
			break;
		
		case 1325686478:
			if (Global_262145.f_8189 >= 0)
			{
				*uParam1 = Global_262145.f_8189;
			}
			break;
		
		case 841557272:
			if (Global_262145.f_8190 >= 0)
			{
				*uParam1 = Global_262145.f_8190;
			}
			break;
		
		case 613026266:
			if (Global_262145.f_8191 >= 0)
			{
				*uParam1 = Global_262145.f_8191;
			}
			break;
		
		case 1519607088:
			if (Global_262145.f_8192 >= 0)
			{
				*uParam1 = Global_262145.f_8192;
			}
			break;
		
		case -320765486:
			if (Global_262145.f_8193 >= 0)
			{
				*uParam1 = Global_262145.f_8193;
			}
			break;
		
		case -991972913:
			if (Global_262145.f_8194 >= 0)
			{
				*uParam1 = Global_262145.f_8194;
			}
			break;
		
		case -928109283:
			if (Global_262145.f_8195 >= 0)
			{
				*uParam1 = Global_262145.f_8195;
			}
			break;
		
		case -1226864256:
			if (Global_262145.f_8196 >= 0)
			{
				*uParam1 = Global_262145.f_8196;
			}
			break;
		
		case -467606526:
			if (Global_262145.f_8197 >= 0)
			{
				*uParam1 = Global_262145.f_8197;
			}
			break;
		
		case 855717110:
			if (Global_262145.f_8198 >= 0)
			{
				*uParam1 = Global_262145.f_8198;
			}
			break;
		
		case 1509032663:
			if (Global_262145.f_8199 >= 0)
			{
				*uParam1 = Global_262145.f_8199;
			}
			break;
		
		case 1463221601:
			if (Global_262145.f_8200 >= 0)
			{
				*uParam1 = Global_262145.f_8200;
			}
			break;
		
		case 1285289076:
			if (Global_262145.f_8201 >= 0)
			{
				*uParam1 = Global_262145.f_8201;
			}
			break;
		
		case 450498801:
			if (Global_262145.f_8202 >= 0)
			{
				*uParam1 = Global_262145.f_8202;
			}
			break;
		
		case 1478658941:
			if (Global_262145.f_8203 >= 0)
			{
				*uParam1 = Global_262145.f_8203;
			}
			break;
		
		case 981313701:
			if (Global_262145.f_8204 >= 0)
			{
				*uParam1 = Global_262145.f_8204;
			}
			break;
		
		case 330521277:
			if (Global_262145.f_8205 >= 0)
			{
				*uParam1 = Global_262145.f_8205;
			}
			break;
		
		case 627375648:
			if (Global_262145.f_8206 >= 0)
			{
				*uParam1 = Global_262145.f_8206;
			}
			break;
		
		case 982554320:
			if (Global_262145.f_8207 >= 0)
			{
				*uParam1 = Global_262145.f_8207;
			}
			break;
		
		case 675148331:
			if (Global_262145.f_8208 >= 0)
			{
				*uParam1 = Global_262145.f_8208;
			}
			break;
		
		case -472225439:
			if (Global_262145.f_8209 >= 0)
			{
				*uParam1 = Global_262145.f_8209;
			}
			break;
		
		case -235940372:
			if (Global_262145.f_8210 >= 0)
			{
				*uParam1 = Global_262145.f_8210;
			}
			break;
		
		case 590690426:
			if (Global_262145.f_8211 >= 0)
			{
				*uParam1 = Global_262145.f_8211;
			}
			break;
		
		case 2104847609:
			if (Global_262145.f_8212 >= 0)
			{
				*uParam1 = Global_262145.f_8212;
			}
			break;
		
		case 946934793:
			if (Global_262145.f_8213 >= 0)
			{
				*uParam1 = Global_262145.f_8213;
			}
			break;
		
		case 1816886205:
			if (Global_262145.f_8214 >= 0)
			{
				*uParam1 = Global_262145.f_8214;
			}
			break;
		
		case 604924740:
			if (Global_262145.f_8215 >= 0)
			{
				*uParam1 = Global_262145.f_8215;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("CLO_LXF_O_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8334));
			break;
		
		case joaat("CLO_LXF_O_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8335));
			break;
		
		case joaat("CLO_LXF_O_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8336));
			break;
		
		case joaat("CLO_LXF_O_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8337));
			break;
		
		case joaat("CLO_LXF_O_4"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8338));
			break;
		
		case joaat("CLO_LXF_O_5"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8339));
			break;
		
		case joaat("CLO_LXF_O_6"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8340));
			break;
		
		case joaat("CLO_LXF_O_7"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8341));
			break;
		
		case joaat("CLO_LXF_O_8"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8342));
			break;
		
		case joaat("CLO_LXF_O_9"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8343));
			break;
		
		case joaat("CLO_LXF_O_10"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8344));
			break;
		
		case joaat("CLO_LXF_O_11"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_8345));
			break;
		
		case joaat("CLO_LXF_F_0_0"):
			if (Global_262145.f_8216 >= 0)
			{
				*uParam1 = Global_262145.f_8216;
			}
			break;
		
		case joaat("CLO_LXF_F_1_0"):
			if (Global_262145.f_8217 >= 0)
			{
				*uParam1 = Global_262145.f_8217;
			}
			break;
		
		case joaat("CLO_LXF_U_0_0"):
			if (Global_262145.f_8218 >= 0)
			{
				*uParam1 = Global_262145.f_8218;
			}
			break;
		
		case joaat("CLO_LXF_U_0_1"):
			if (Global_262145.f_8219 >= 0)
			{
				*uParam1 = Global_262145.f_8219;
			}
			break;
		
		case joaat("CLO_LXF_U_0_2"):
			if (Global_262145.f_8220 >= 0)
			{
				*uParam1 = Global_262145.f_8220;
			}
			break;
		
		case joaat("CLO_LXF_U_0_3"):
			if (Global_262145.f_8221 >= 0)
			{
				*uParam1 = Global_262145.f_8221;
			}
			break;
		
		case joaat("CLO_LXF_U_0_4"):
			if (Global_262145.f_8222 >= 0)
			{
				*uParam1 = Global_262145.f_8222;
			}
			break;
		
		case joaat("CLO_LXF_U_3_0"):
			if (Global_262145.f_8223 >= 0)
			{
				*uParam1 = Global_262145.f_8223;
			}
			break;
		
		case joaat("CLO_LXF_U_3_1"):
			if (Global_262145.f_8224 >= 0)
			{
				*uParam1 = Global_262145.f_8224;
			}
			break;
		
		case joaat("CLO_LXF_U_3_2"):
			if (Global_262145.f_8225 >= 0)
			{
				*uParam1 = Global_262145.f_8225;
			}
			break;
		
		case joaat("CLO_LXF_U_3_3"):
			if (Global_262145.f_8226 >= 0)
			{
				*uParam1 = Global_262145.f_8226;
			}
			break;
		
		case joaat("CLO_LXF_U_3_4"):
			if (Global_262145.f_8227 >= 0)
			{
				*uParam1 = Global_262145.f_8227;
			}
			break;
		
		case joaat("CLO_LXF_U_3_5"):
			if (Global_262145.f_8228 >= 0)
			{
				*uParam1 = Global_262145.f_8228;
			}
			break;
		
		case joaat("CLO_LXF_U_3_6"):
			if (Global_262145.f_8229 >= 0)
			{
				*uParam1 = Global_262145.f_8229;
			}
			break;
		
		case joaat("CLO_LXF_U_3_7"):
			if (Global_262145.f_8230 >= 0)
			{
				*uParam1 = Global_262145.f_8230;
			}
			break;
		
		case joaat("CLO_LXF_U_3_8"):
			if (Global_262145.f_8231 >= 0)
			{
				*uParam1 = Global_262145.f_8231;
			}
			break;
		
		case joaat("CLO_LXF_U_3_9"):
			if (Global_262145.f_8232 >= 0)
			{
				*uParam1 = Global_262145.f_8232;
			}
			break;
		
		case joaat("CLO_LXF_U_3_10"):
			if (Global_262145.f_8233 >= 0)
			{
				*uParam1 = Global_262145.f_8233;
			}
			break;
		
		case joaat("CLO_LXF_U_3_11"):
			if (Global_262145.f_8234 >= 0)
			{
				*uParam1 = Global_262145.f_8234;
			}
			break;
		
		case joaat("CLO_LXF_U_4_0"):
			if (Global_262145.f_8235 >= 0)
			{
				*uParam1 = Global_262145.f_8235;
			}
			break;
		
		case joaat("CLO_LXF_U_4_1"):
			if (Global_262145.f_8236 >= 0)
			{
				*uParam1 = Global_262145.f_8236;
			}
			break;
		
		case joaat("CLO_LXF_U_4_2"):
			if (Global_262145.f_8237 >= 0)
			{
				*uParam1 = Global_262145.f_8237;
			}
			break;
		
		case joaat("CLO_LXF_U_4_3"):
			if (Global_262145.f_8238 >= 0)
			{
				*uParam1 = Global_262145.f_8238;
			}
			break;
		
		case joaat("CLO_LXF_U_5_0"):
			if (Global_262145.f_8239 >= 0)
			{
				*uParam1 = Global_262145.f_8239;
			}
			break;
		
		case joaat("CLO_LXF_U_6_0"):
			if (Global_262145.f_8240 >= 0)
			{
				*uParam1 = Global_262145.f_8240;
			}
			break;
		
		case joaat("CLO_LXF_U_6_1"):
			if (Global_262145.f_8241 >= 0)
			{
				*uParam1 = Global_262145.f_8241;
			}
			break;
		
		case joaat("CLO_LXF_U_6_2"):
			if (Global_262145.f_8242 >= 0)
			{
				*uParam1 = Global_262145.f_8242;
			}
			break;
		
		case joaat("CLO_LXF_U_6_3"):
			if (Global_262145.f_8243 >= 0)
			{
				*uParam1 = Global_262145.f_8243;
			}
			break;
		
		case joaat("CLO_LXF_U_6_4"):
			if (Global_262145.f_8244 >= 0)
			{
				*uParam1 = Global_262145.f_8244;
			}
			break;
		
		case joaat("CLO_LXF_U_6_5"):
			if (Global_262145.f_8245 >= 0)
			{
				*uParam1 = Global_262145.f_8245;
			}
			break;
		
		case joaat("CLO_LXF_U_6_6"):
			if (Global_262145.f_8246 >= 0)
			{
				*uParam1 = Global_262145.f_8246;
			}
			break;
		
		case joaat("CLO_LXF_U_6_7"):
			if (Global_262145.f_8247 >= 0)
			{
				*uParam1 = Global_262145.f_8247;
			}
			break;
		
		case joaat("CLO_LXF_U_6_8"):
			if (Global_262145.f_8248 >= 0)
			{
				*uParam1 = Global_262145.f_8248;
			}
			break;
		
		case joaat("CLO_LXF_U_6_9"):
			if (Global_262145.f_8249 >= 0)
			{
				*uParam1 = Global_262145.f_8249;
			}
			break;
		
		case joaat("CLO_LXF_U_6_10"):
			if (Global_262145.f_8250 >= 0)
			{
				*uParam1 = Global_262145.f_8250;
			}
			break;
		
		case joaat("CLO_LXF_U_6_11"):
			if (Global_262145.f_8251 >= 0)
			{
				*uParam1 = Global_262145.f_8251;
			}
			break;
		
		case joaat("CLO_LXF_U_6_12"):
			if (Global_262145.f_8252 >= 0)
			{
				*uParam1 = Global_262145.f_8252;
			}
			break;
		
		case joaat("CLO_LXF_U_6_13"):
			if (Global_262145.f_8253 >= 0)
			{
				*uParam1 = Global_262145.f_8253;
			}
			break;
		
		case joaat("CLO_LXF_U_6_14"):
			if (Global_262145.f_8254 >= 0)
			{
				*uParam1 = Global_262145.f_8254;
			}
			break;
		
		case joaat("CLO_LXF_U_6_17"):
			if (Global_262145.f_8255 >= 0)
			{
				*uParam1 = Global_262145.f_8255;
			}
			break;
		
		case joaat("CLO_LXF_U_6_18"):
			if (Global_262145.f_8256 >= 0)
			{
				*uParam1 = Global_262145.f_8256;
			}
			break;
		
		case joaat("CLO_LXF_U_6_19"):
			if (Global_262145.f_8257 >= 0)
			{
				*uParam1 = Global_262145.f_8257;
			}
			break;
		
		case joaat("CLO_LXF_DEC_1"):
			if (Global_262145.f_8258 >= 0)
			{
				*uParam1 = Global_262145.f_8258;
			}
			break;
		
		case joaat("CLO_LXF_DEC_0"):
			if (Global_262145.f_8259 >= 0)
			{
				*uParam1 = Global_262145.f_8259;
			}
			break;
		
		case joaat("CLO_LXF_DEC_3"):
			if (Global_262145.f_8260 >= 0)
			{
				*uParam1 = Global_262145.f_8260;
			}
			break;
		
		case joaat("CLO_LXF_DEC_4"):
			if (Global_262145.f_8261 >= 0)
			{
				*uParam1 = Global_262145.f_8261;
			}
			break;
		
		case joaat("CLO_LXF_DEC_5"):
			if (Global_262145.f_8262 >= 0)
			{
				*uParam1 = Global_262145.f_8262;
			}
			break;
		
		case joaat("CLO_LXF_DEC_12"):
			if (Global_262145.f_8263 >= 0)
			{
				*uParam1 = Global_262145.f_8263;
			}
			break;
		
		case joaat("CLO_LXF_DEC_13"):
			if (Global_262145.f_8264 >= 0)
			{
				*uParam1 = Global_262145.f_8264;
			}
			break;
		
		case joaat("CLO_LXF_DEC_22"):
			if (Global_262145.f_8265 >= 0)
			{
				*uParam1 = Global_262145.f_8265;
			}
			break;
		
		case joaat("CLO_LXF_DEC_23"):
			if (Global_262145.f_8266 >= 0)
			{
				*uParam1 = Global_262145.f_8266;
			}
			break;
		
		case joaat("CLO_LXF_DEC_28"):
			if (Global_262145.f_8267 >= 0)
			{
				*uParam1 = Global_262145.f_8267;
			}
			break;
		
		case joaat("CLO_LXF_L_0_0"):
			if (Global_262145.f_8268 >= 0)
			{
				*uParam1 = Global_262145.f_8268;
			}
			break;
		
		case joaat("CLO_LXF_L_0_1"):
			if (Global_262145.f_8269 >= 0)
			{
				*uParam1 = Global_262145.f_8269;
			}
			break;
		
		case joaat("CLO_LXF_L_0_2"):
			if (Global_262145.f_8270 >= 0)
			{
				*uParam1 = Global_262145.f_8270;
			}
			break;
		
		case joaat("CLO_LXF_L_0_3"):
			if (Global_262145.f_8271 >= 0)
			{
				*uParam1 = Global_262145.f_8271;
			}
			break;
		
		case joaat("CLO_LXF_L_0_4"):
			if (Global_262145.f_8272 >= 0)
			{
				*uParam1 = Global_262145.f_8272;
			}
			break;
		
		case joaat("CLO_LXF_T_10_0"):
			if (Global_262145.f_8273 >= 0)
			{
				*uParam1 = Global_262145.f_8273;
			}
			break;
		
		case joaat("CLO_LXF_T_10_1"):
			if (Global_262145.f_8274 >= 0)
			{
				*uParam1 = Global_262145.f_8274;
			}
			break;
		
		case joaat("CLO_LXF_T_11_0"):
			if (Global_262145.f_8275 >= 0)
			{
				*uParam1 = Global_262145.f_8275;
			}
			break;
		
		case joaat("CLO_LXF_T_11_1"):
			if (Global_262145.f_8276 >= 0)
			{
				*uParam1 = Global_262145.f_8276;
			}
			break;
		
		case joaat("CLO_LXF_T_12_0"):
			if (Global_262145.f_8277 >= 0)
			{
				*uParam1 = Global_262145.f_8277;
			}
			break;
		
		case joaat("CLO_LXF_T_14_0"):
			if (Global_262145.f_8278 >= 0)
			{
				*uParam1 = Global_262145.f_8278;
			}
			break;
		
		case joaat("CLO_LXF_T_14_1"):
			if (Global_262145.f_8279 >= 0)
			{
				*uParam1 = Global_262145.f_8279;
			}
			break;
		
		case joaat("CLO_LXF_T_15_0"):
			if (Global_262145.f_8280 >= 0)
			{
				*uParam1 = Global_262145.f_8280;
			}
			break;
		
		case joaat("CLO_LXF_T_15_1"):
			if (Global_262145.f_8281 >= 0)
			{
				*uParam1 = Global_262145.f_8281;
			}
			break;
		
		case joaat("CLO_LXF_T_16_0"):
			if (Global_262145.f_8282 >= 0)
			{
				*uParam1 = Global_262145.f_8282;
			}
			break;
		
		case joaat("CLO_LXF_T_16_1"):
			if (Global_262145.f_8283 >= 0)
			{
				*uParam1 = Global_262145.f_8283;
			}
			break;
		
		case joaat("CLO_LXF_T_17_0"):
			if (Global_262145.f_8284 >= 0)
			{
				*uParam1 = Global_262145.f_8284;
			}
			break;
		
		case joaat("CLO_LXF_T_17_1"):
			if (Global_262145.f_8285 >= 0)
			{
				*uParam1 = Global_262145.f_8285;
			}
			break;
		
		case joaat("CLO_LXF_E_0_0"):
			if (Global_262145.f_8286 >= 0)
			{
				*uParam1 = Global_262145.f_8286;
			}
			break;
		
		case joaat("CLO_LXF_E_1_0"):
			if (Global_262145.f_8287 >= 0)
			{
				*uParam1 = Global_262145.f_8287;
			}
			break;
		
		case joaat("CLO_LXF_E_2_0"):
			if (Global_262145.f_8288 >= 0)
			{
				*uParam1 = Global_262145.f_8288;
			}
			break;
		
		case joaat("CLO_LXF_E_3_0"):
			if (Global_262145.f_8289 >= 0)
			{
				*uParam1 = Global_262145.f_8289;
			}
			break;
		
		case joaat("CLO_LXF_E_3_1"):
			if (Global_262145.f_8290 >= 0)
			{
				*uParam1 = Global_262145.f_8290;
			}
			break;
		
		case joaat("CLO_LXF_E_3_2"):
			if (Global_262145.f_8291 >= 0)
			{
				*uParam1 = Global_262145.f_8291;
			}
			break;
		
		case joaat("CLO_LXF_E_4_0"):
			if (Global_262145.f_8292 >= 0)
			{
				*uParam1 = Global_262145.f_8292;
			}
			break;
		
		case joaat("CLO_LXF_E_4_1"):
			if (Global_262145.f_8293 >= 0)
			{
				*uParam1 = Global_262145.f_8293;
			}
			break;
		
		case joaat("CLO_LXF_E_4_2"):
			if (Global_262145.f_8294 >= 0)
			{
				*uParam1 = Global_262145.f_8294;
			}
			break;
		
		case joaat("CLO_LXF_E_5_0"):
			if (Global_262145.f_8295 >= 0)
			{
				*uParam1 = Global_262145.f_8295;
			}
			break;
		
		case joaat("CLO_LXF_E_5_1"):
			if (Global_262145.f_8296 >= 0)
			{
				*uParam1 = Global_262145.f_8296;
			}
			break;
		
		case joaat("CLO_LXF_E_5_2"):
			if (Global_262145.f_8297 >= 0)
			{
				*uParam1 = Global_262145.f_8297;
			}
			break;
		
		case joaat("CLO_LXF_E_6_0"):
			if (Global_262145.f_8298 >= 0)
			{
				*uParam1 = Global_262145.f_8298;
			}
			break;
		
		case joaat("CLO_LXF_E_6_1"):
			if (Global_262145.f_8299 >= 0)
			{
				*uParam1 = Global_262145.f_8299;
			}
			break;
		
		case joaat("CLO_LXF_E_6_2"):
			if (Global_262145.f_8300 >= 0)
			{
				*uParam1 = Global_262145.f_8300;
			}
			break;
		
		case joaat("CLO_LXF_E_7_0"):
			if (Global_262145.f_8301 >= 0)
			{
				*uParam1 = Global_262145.f_8301;
			}
			break;
		
		case joaat("CLO_LXF_E_7_1"):
			if (Global_262145.f_8302 >= 0)
			{
				*uParam1 = Global_262145.f_8302;
			}
			break;
		
		case joaat("CLO_LXF_E_7_2"):
			if (Global_262145.f_8303 >= 0)
			{
				*uParam1 = Global_262145.f_8303;
			}
			break;
		
		case joaat("CLO_LXF_E_8_0"):
			if (Global_262145.f_8304 >= 0)
			{
				*uParam1 = Global_262145.f_8304;
			}
			break;
		
		case joaat("CLO_LXF_E_8_1"):
			if (Global_262145.f_8305 >= 0)
			{
				*uParam1 = Global_262145.f_8305;
			}
			break;
		
		case joaat("CLO_LXF_E_8_2"):
			if (Global_262145.f_8306 >= 0)
			{
				*uParam1 = Global_262145.f_8306;
			}
			break;
		
		case joaat("CLO_LXF_E_9_0"):
			if (Global_262145.f_8307 >= 0)
			{
				*uParam1 = Global_262145.f_8307;
			}
			break;
		
		case joaat("CLO_LXF_E_9_1"):
			if (Global_262145.f_8308 >= 0)
			{
				*uParam1 = Global_262145.f_8308;
			}
			break;
		
		case joaat("CLO_LXF_E_9_2"):
			if (Global_262145.f_8309 >= 0)
			{
				*uParam1 = Global_262145.f_8309;
			}
			break;
		
		case joaat("CLO_LXF_LW_0_0"):
			if (Global_262145.f_8310 >= 0)
			{
				*uParam1 = Global_262145.f_8310;
			}
			break;
		
		case joaat("CLO_LXF_LW_0_1"):
			if (Global_262145.f_8311 >= 0)
			{
				*uParam1 = Global_262145.f_8311;
			}
			break;
		
		case joaat("CLO_LXF_LW_0_2"):
			if (Global_262145.f_8312 >= 0)
			{
				*uParam1 = Global_262145.f_8312;
			}
			break;
		
		case joaat("CLO_LXF_LW_1_0"):
			if (Global_262145.f_8313 >= 0)
			{
				*uParam1 = Global_262145.f_8313;
			}
			break;
		
		case joaat("CLO_LXF_LW_1_1"):
			if (Global_262145.f_8314 >= 0)
			{
				*uParam1 = Global_262145.f_8314;
			}
			break;
		
		case joaat("CLO_LXF_LW_1_2"):
			if (Global_262145.f_8315 >= 0)
			{
				*uParam1 = Global_262145.f_8315;
			}
			break;
		
		case joaat("CLO_LXF_LW_5_0"):
			if (Global_262145.f_8316 >= 0)
			{
				*uParam1 = Global_262145.f_8316;
			}
			break;
		
		case joaat("CLO_LXF_LW_5_1"):
			if (Global_262145.f_8317 >= 0)
			{
				*uParam1 = Global_262145.f_8317;
			}
			break;
		
		case joaat("CLO_LXF_LW_5_2"):
			if (Global_262145.f_8318 >= 0)
			{
				*uParam1 = Global_262145.f_8318;
			}
			break;
		
		case joaat("CLO_LXF_LW_6_0"):
			if (Global_262145.f_8319 >= 0)
			{
				*uParam1 = Global_262145.f_8319;
			}
			break;
		
		case joaat("CLO_LXF_LW_6_1"):
			if (Global_262145.f_8320 >= 0)
			{
				*uParam1 = Global_262145.f_8320;
			}
			break;
		
		case joaat("CLO_LXF_LW_6_2"):
			if (Global_262145.f_8321 >= 0)
			{
				*uParam1 = Global_262145.f_8321;
			}
			break;
	}
}

void func_51(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1740204423:
		case joaat("CLO_HSTF_O_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7697));
			break;
		
		case 1813135197:
		case joaat("CLO_HSTF_O_A_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7669));
			break;
		
		case 2052578280:
		case joaat("CLO_HSTF_O_A_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7670));
			break;
		
		case 517547196:
		case joaat("CLO_HSTF_O_A_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7671));
			break;
		
		case 772784937:
		case joaat("CLO_HSTF_O_A_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7672));
			break;
		
		case 232076802:
		case joaat("CLO_HSTF_O_B_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7673));
			break;
		
		case -65367411:
		case joaat("CLO_HSTF_O_B_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7674));
			break;
		
		case 727740696:
		case joaat("CLO_HSTF_O_B_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7675));
			break;
		
		case 563961234:
		case joaat("CLO_HSTF_O_B_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7676));
			break;
		
		case -1240104072:
		case joaat("CLO_HSTF_O_C_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7677));
			break;
		
		case -934533147:
		case joaat("CLO_HSTF_O_C_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7678));
			break;
		
		case -502244499:
		case joaat("CLO_HSTF_O_C_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7679));
			break;
		
		case -322277151:
		case joaat("CLO_HSTF_O_C_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7680));
			break;
		
		case 519068078:
		case joaat("CLO_HSTF_O_D_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7681));
			break;
		
		case 815398145:
		case joaat("CLO_HSTF_O_D_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7682));
			break;
		
		case -1165291291:
		case joaat("CLO_HSTF_O_D_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7683));
			break;
		
		case -868240306:
		case joaat("CLO_HSTF_O_D_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7684));
			break;
		
		case 1238268551:
		case joaat("CLO_HSTF_O_E_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7685));
			break;
		
		case -611115502:
		case joaat("CLO_HSTF_O_E_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7686));
			break;
		
		case -543218134:
		case joaat("CLO_HSTF_O_E_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7687));
			break;
		
		case -278805073:
		case joaat("CLO_HSTF_O_E_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7688));
			break;
		
		case 632176860:
		case joaat("CLO_HSTF_O_F_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7689));
			break;
		
		case -1447343884:
		case joaat("CLO_HSTF_O_F_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7690));
			break;
		
		case -1880943292:
		case joaat("CLO_HSTF_O_F_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7691));
			break;
		
		case -1641696823:
		case joaat("CLO_HSTF_O_F_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7692));
			break;
		
		case -958786574:
		case joaat("CLO_HSTF_O_G_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7693));
			break;
		
		case 887779345:
		case joaat("CLO_HSTF_O_G_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7694));
			break;
		
		case 657446044:
		case joaat("CLO_HSTF_O_G_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7695));
			break;
		
		case 440842954:
		case joaat("CLO_HSTF_O_G_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7696));
			break;
		
		case -886321511:
		case joaat("CLO_HSTF_O_H_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7698));
			break;
		
		case -657364508:
		case joaat("CLO_HSTF_O_H_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7699));
			break;
		
		case 1873188752:
		case joaat("CLO_HSTF_O_H_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7700));
			break;
		
		case 2095395341:
		case joaat("CLO_HSTF_O_H_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7701));
			break;
		
		case -888145528:
		case joaat("CLO_HSTF_O_I_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7702));
			break;
		
		case -1332755320:
		case joaat("CLO_HSTF_O_I_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7703));
			break;
		
		case -1500827521:
		case joaat("CLO_HSTF_O_I_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7704));
			break;
		
		case -1639702543:
		case joaat("CLO_HSTF_O_I_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7705));
			break;
		
		case -1762154932:
		case joaat("CLO_HSTF_O_J_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7706));
			break;
		
		case 23231264:
		case joaat("CLO_HSTF_O_J_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7707));
			break;
		
		case -1803247262:
		case joaat("CLO_HSTF_O_J_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7708));
			break;
		
		case -2058747155:
		case joaat("CLO_HSTF_O_J_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7709));
			break;
		
		case -1067513518:
		case joaat("CLO_HSTF_O_K_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7710));
			break;
		
		case -769807153:
		case joaat("CLO_HSTF_O_K_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7711));
			break;
		
		case 352465559:
		case joaat("CLO_HSTF_O_K_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7712));
			break;
		
		case 650630690:
		case joaat("CLO_HSTF_O_K_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7713));
			break;
		
		case -2106125641:
		case joaat("CLO_HSTF_O_L_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7714));
			break;
		
		case -1263667420:
		case joaat("CLO_HSTF_O_L_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7715));
			break;
		
		case 337458693:
		case joaat("CLO_HSTF_O_L_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7716));
			break;
		
		case 108534459:
		case joaat("CLO_HSTF_O_L_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7717));
			break;
		
		case 2010573932:
		case joaat("CLO_HSTF_O_M_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7718));
			break;
		
		case 802806899:
		case joaat("CLO_HSTF_O_M_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7719));
			break;
		
		case 1579858196:
		case joaat("CLO_HSTF_O_M_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7720));
			break;
		
		case 207885704:
		case joaat("CLO_HSTF_O_M_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7721));
			break;
		
		case 851104082:
		case joaat("CLO_HSTF_O_N_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7722));
			break;
		
		case 679787750:
		case joaat("CLO_HSTF_O_N_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7723));
			break;
		
		case 374872205:
		case joaat("CLO_HSTF_O_N_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7724));
			break;
		
		case -1297002179:
		case joaat("CLO_HSTF_O_N_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_7725));
			break;
	}
	switch (iParam0)
	{
		case 200614090:
			if (Global_262145.f_7415 >= 0)
			{
				*uParam1 = Global_262145.f_7415;
			}
			break;
		
		case -505308012:
			if (Global_262145.f_7414 >= 0)
			{
				*uParam1 = Global_262145.f_7414;
			}
			break;
		
		case -1433279578:
			if (Global_262145.f_7413 >= 0)
			{
				*uParam1 = Global_262145.f_7413;
			}
			break;
		
		case 406336869:
			if (Global_262145.f_7411 >= 0)
			{
				*uParam1 = Global_262145.f_7411;
			}
			break;
		
		case joaat("AMM_HST_B_1_0"):
			if (Global_262145.f_7412 >= 0)
			{
				*uParam1 = Global_262145.f_7412;
			}
			break;
		
		case 1643425118:
			if (Global_262145.f_7417 >= 0)
			{
				*uParam1 = Global_262145.f_7417;
			}
			break;
		
		case -334550899:
			if (Global_262145.f_7416 >= 0)
			{
				*uParam1 = Global_262145.f_7416;
			}
			break;
		
		case -1733680767:
			if (Global_262145.f_7420 >= 0)
			{
				*uParam1 = Global_262145.f_7420;
			}
			break;
		
		case 1212833799:
			if (Global_262145.f_7421 >= 0)
			{
				*uParam1 = Global_262145.f_7421;
			}
			break;
		
		case joaat("CLO_HSTF_F_0_0"):
			if (Global_262145.f_7514 >= 0)
			{
				*uParam1 = Global_262145.f_7514;
			}
			break;
		
		case joaat("CLO_HSTF_F_1_0"):
			if (Global_262145.f_7515 >= 0)
			{
				*uParam1 = Global_262145.f_7515;
			}
			break;
		
		case joaat("CLO_HSTF_F_2_0"):
			if (Global_262145.f_7516 >= 0)
			{
				*uParam1 = Global_262145.f_7516;
			}
			break;
		
		case joaat("CLO_HSTF_F_3_0"):
			if (Global_262145.f_7517 >= 0)
			{
				*uParam1 = Global_262145.f_7517;
			}
			break;
		
		case joaat("CLO_HSTF_F_4_0"):
			if (Global_262145.f_7518 >= 0)
			{
				*uParam1 = Global_262145.f_7518;
			}
			break;
		
		case joaat("CLO_HSTF_F_4_1"):
			if (Global_262145.f_7519 >= 0)
			{
				*uParam1 = Global_262145.f_7519;
			}
			break;
		
		case joaat("CLO_HSTF_F_4_2"):
			if (Global_262145.f_7520 >= 0)
			{
				*uParam1 = Global_262145.f_7520;
			}
			break;
		
		case 454534558:
			if (Global_262145.f_7422 >= 0)
			{
				*uParam1 = Global_262145.f_7422;
			}
			break;
		
		case -1705393411:
			if (Global_262145.f_7423 >= 0)
			{
				*uParam1 = Global_262145.f_7423;
			}
			break;
		
		case 724512113:
			if (Global_262145.f_7424 >= 0)
			{
				*uParam1 = Global_262145.f_7424;
			}
			break;
		
		case -1930825487:
			if (Global_262145.f_7425 >= 0)
			{
				*uParam1 = Global_262145.f_7425;
			}
			break;
		
		case -1258766066:
			if (Global_262145.f_7426 >= 0)
			{
				*uParam1 = Global_262145.f_7426;
			}
			break;
		
		case -1447843196:
			if (Global_262145.f_7427 >= 0)
			{
				*uParam1 = Global_262145.f_7427;
			}
			break;
		
		case 1259436123:
			if (Global_262145.f_7428 >= 0)
			{
				*uParam1 = Global_262145.f_7428;
			}
			break;
		
		case joaat("CLO_HSTF_L_0_0"):
			if (Global_262145.f_7521 >= 0)
			{
				*uParam1 = Global_262145.f_7521;
			}
			break;
		
		case joaat("CLO_HSTF_L_1_0"):
			if (Global_262145.f_7522 >= 0)
			{
				*uParam1 = Global_262145.f_7522;
			}
			break;
		
		case joaat("CLO_HSTF_L_4_0"):
			if (Global_262145.f_7523 >= 0)
			{
				*uParam1 = Global_262145.f_7523;
			}
			break;
		
		case joaat("CLO_HSTF_L_4_1"):
			if (Global_262145.f_7524 >= 0)
			{
				*uParam1 = Global_262145.f_7524;
			}
			break;
		
		case joaat("CLO_HSTF_L_4_2"):
			if (Global_262145.f_7525 >= 0)
			{
				*uParam1 = Global_262145.f_7525;
			}
			break;
		
		case joaat("CLO_HSTF_L_4_3"):
			if (Global_262145.f_7526 >= 0)
			{
				*uParam1 = Global_262145.f_7526;
			}
			break;
		
		case joaat("CLO_HSTF_L_5_0"):
			if (Global_262145.f_7527 >= 0)
			{
				*uParam1 = Global_262145.f_7527;
			}
			break;
		
		case joaat("CLO_HSTF_L_5_1"):
			if (Global_262145.f_7528 >= 0)
			{
				*uParam1 = Global_262145.f_7528;
			}
			break;
		
		case joaat("CLO_HSTF_L_5_2"):
			if (Global_262145.f_7529 >= 0)
			{
				*uParam1 = Global_262145.f_7529;
			}
			break;
		
		case joaat("CLO_HSTF_L_5_3"):
			if (Global_262145.f_7530 >= 0)
			{
				*uParam1 = Global_262145.f_7530;
			}
			break;
		
		case joaat("CLO_HSTF_L_5_4"):
			if (Global_262145.f_7531 >= 0)
			{
				*uParam1 = Global_262145.f_7531;
			}
			break;
		
		case joaat("CLO_HSTF_L_5_5"):
			if (Global_262145.f_7532 >= 0)
			{
				*uParam1 = Global_262145.f_7532;
			}
			break;
		
		case joaat("CLO_HSTF_L_5_6"):
			if (Global_262145.f_7533 >= 0)
			{
				*uParam1 = Global_262145.f_7533;
			}
			break;
		
		case -1691564662:
			if (Global_262145.f_7538 >= 0)
			{
				*uParam1 = Global_262145.f_7538;
			}
			break;
		
		case joaat("CLO_HSTF_L_9_0"):
			if (Global_262145.f_7534 >= 0)
			{
				*uParam1 = Global_262145.f_7534;
			}
			break;
		
		case joaat("CLO_HSTF_L_9_1"):
			if (Global_262145.f_7535 >= 0)
			{
				*uParam1 = Global_262145.f_7535;
			}
			break;
		
		case joaat("CLO_HSTF_L_9_2"):
			if (Global_262145.f_7536 >= 0)
			{
				*uParam1 = Global_262145.f_7536;
			}
			break;
		
		case joaat("CLO_HSTF_L_9_3"):
			if (Global_262145.f_7537 >= 0)
			{
				*uParam1 = Global_262145.f_7537;
			}
			break;
	}
	switch (iParam0)
	{
		case -1705526884:
			if (Global_262145.f_7429 >= 0)
			{
				*uParam1 = Global_262145.f_7429;
			}
			break;
		
		case -393128434:
			if (Global_262145.f_7430 >= 0)
			{
				*uParam1 = Global_262145.f_7430;
			}
			break;
		
		case -1359322399:
			if (Global_262145.f_7431 >= 0)
			{
				*uParam1 = Global_262145.f_7431;
			}
			break;
		
		case -1926488251:
			if (Global_262145.f_7432 >= 0)
			{
				*uParam1 = Global_262145.f_7432;
			}
			break;
		
		case 1288225590:
			if (Global_262145.f_7433 >= 0)
			{
				*uParam1 = Global_262145.f_7433;
			}
			break;
		
		case 827210423:
			if (Global_262145.f_7434 >= 0)
			{
				*uParam1 = Global_262145.f_7434;
			}
			break;
		
		case 69233812:
			if (Global_262145.f_7435 >= 0)
			{
				*uParam1 = Global_262145.f_7435;
			}
			break;
		
		case 651324466:
			if (Global_262145.f_7436 >= 0)
			{
				*uParam1 = Global_262145.f_7436;
			}
			break;
		
		case 890898625:
			if (Global_262145.f_7437 >= 0)
			{
				*uParam1 = Global_262145.f_7437;
			}
			break;
		
		case 54502669:
			if (Global_262145.f_7438 >= 0)
			{
				*uParam1 = Global_262145.f_7438;
			}
			break;
		
		case 294535594:
			if (Global_262145.f_7439 >= 0)
			{
				*uParam1 = Global_262145.f_7439;
			}
			break;
		
		case 557407258:
			if (Global_262145.f_7440 >= 0)
			{
				*uParam1 = Global_262145.f_7440;
			}
			break;
		
		case 279165679:
			if (Global_262145.f_7441 >= 0)
			{
				*uParam1 = Global_262145.f_7441;
			}
			break;
		
		case 1723623199:
			if (Global_262145.f_7442 >= 0)
			{
				*uParam1 = Global_262145.f_7442;
			}
			break;
		
		case 942672395:
			if (Global_262145.f_7443 >= 0)
			{
				*uParam1 = Global_262145.f_7443;
			}
			break;
		
		case -2034349149:
			if (Global_262145.f_7444 >= 0)
			{
				*uParam1 = Global_262145.f_7444;
			}
			break;
		
		case 2021568292:
			if (Global_262145.f_7445 >= 0)
			{
				*uParam1 = Global_262145.f_7445;
			}
			break;
		
		case 1766428858:
			if (Global_262145.f_7446 >= 0)
			{
				*uParam1 = Global_262145.f_7446;
			}
			break;
		
		case 1528624225:
			if (Global_262145.f_7447 >= 0)
			{
				*uParam1 = Global_262145.f_7447;
			}
			break;
		
		case -713218068:
			if (Global_262145.f_7448 >= 0)
			{
				*uParam1 = Global_262145.f_7448;
			}
			break;
		
		case -1410892243:
			if (Global_262145.f_7449 >= 0)
			{
				*uParam1 = Global_262145.f_7449;
			}
			break;
		
		case 750171068:
			if (Global_262145.f_7450 >= 0)
			{
				*uParam1 = Global_262145.f_7450;
			}
			break;
		
		case -1816187924:
			if (Global_262145.f_7451 >= 0)
			{
				*uParam1 = Global_262145.f_7451;
			}
			break;
		
		case 1167214741:
			if (Global_262145.f_7452 >= 0)
			{
				*uParam1 = Global_262145.f_7452;
			}
			break;
		
		case 2027106086:
			if (Global_262145.f_7907 >= 0)
			{
				*uParam1 = Global_262145.f_7907;
			}
			break;
		
		case -729660873:
			if (Global_262145.f_7892 >= 0)
			{
				*uParam1 = Global_262145.f_7892;
			}
			break;
		
		case -752402559:
			if (Global_262145.f_7893 >= 0)
			{
				*uParam1 = Global_262145.f_7893;
			}
			break;
		
		case 1320105611:
			if (Global_262145.f_7894 >= 0)
			{
				*uParam1 = Global_262145.f_7894;
			}
			break;
		
		case 1005883670:
			if (Global_262145.f_7895 >= 0)
			{
				*uParam1 = Global_262145.f_7895;
			}
			break;
		
		case -1711813341:
			if (Global_262145.f_7896 >= 0)
			{
				*uParam1 = Global_262145.f_7896;
			}
			break;
		
		case -2009519706:
			if (Global_262145.f_7897 >= 0)
			{
				*uParam1 = Global_262145.f_7897;
			}
			break;
		
		case joaat("CLO_HSTF_U_0_0"):
			if (Global_262145.f_7539 >= 0)
			{
				*uParam1 = Global_262145.f_7539;
			}
			break;
		
		case joaat("CLO_HSTF_U_0_1"):
			if (Global_262145.f_7540 >= 0)
			{
				*uParam1 = Global_262145.f_7540;
			}
			break;
		
		case joaat("CLO_HSTF_U_0_2"):
			if (Global_262145.f_7541 >= 0)
			{
				*uParam1 = Global_262145.f_7541;
			}
			break;
		
		case joaat("CLO_HSTF_U_0_3"):
			if (Global_262145.f_7542 >= 0)
			{
				*uParam1 = Global_262145.f_7542;
			}
			break;
		
		case -805888222:
			if (Global_262145.f_7543 >= 0)
			{
				*uParam1 = Global_262145.f_7543;
			}
			break;
		
		case joaat("CLO_HSTF_U_4_0"):
			if (Global_262145.f_7544 >= 0)
			{
				*uParam1 = Global_262145.f_7544;
			}
			break;
		
		case joaat("CLO_HSTF_U_5_0"):
			if (Global_262145.f_7545 >= 0)
			{
				*uParam1 = Global_262145.f_7545;
			}
			break;
		
		case joaat("CLO_HSTF_U_6_0"):
			if (Global_262145.f_7546 >= 0)
			{
				*uParam1 = Global_262145.f_7546;
			}
			break;
		
		case joaat("CLO_HSTF_U_6_1"):
			if (Global_262145.f_7547 >= 0)
			{
				*uParam1 = Global_262145.f_7547;
			}
			break;
		
		case joaat("CLO_HSTF_U_6_2"):
			if (Global_262145.f_7548 >= 0)
			{
				*uParam1 = Global_262145.f_7548;
			}
			break;
		
		case joaat("CLO_HSTF_U_6_3"):
			if (Global_262145.f_7549 >= 0)
			{
				*uParam1 = Global_262145.f_7549;
			}
			break;
		
		case joaat("CLO_HSTF_U_7_0"):
			if (Global_262145.f_7550 >= 0)
			{
				*uParam1 = Global_262145.f_7550;
			}
			break;
		
		case joaat("CLO_HSTF_U_7_1"):
			if (Global_262145.f_7551 >= 0)
			{
				*uParam1 = Global_262145.f_7551;
			}
			break;
		
		case joaat("CLO_HSTF_U_7_2"):
			if (Global_262145.f_7552 >= 0)
			{
				*uParam1 = Global_262145.f_7552;
			}
			break;
		
		case joaat("CLO_HSTF_U_7_3"):
			if (Global_262145.f_7553 >= 0)
			{
				*uParam1 = Global_262145.f_7553;
			}
			break;
		
		case joaat("CLO_HSTF_U_8_0"):
			if (Global_262145.f_7554 >= 0)
			{
				*uParam1 = Global_262145.f_7554;
			}
			break;
		
		case joaat("CLO_HSTF_U_8_1"):
			if (Global_262145.f_7555 >= 0)
			{
				*uParam1 = Global_262145.f_7555;
			}
			break;
		
		case joaat("CLO_HSTF_U_8_2"):
			if (Global_262145.f_7556 >= 0)
			{
				*uParam1 = Global_262145.f_7556;
			}
			break;
		
		case joaat("CLO_HSTF_U_8_3"):
			if (Global_262145.f_7557 >= 0)
			{
				*uParam1 = Global_262145.f_7557;
			}
			break;
		
		case joaat("CLO_HSTF_U_9_0"):
			if (Global_262145.f_7558 >= 0)
			{
				*uParam1 = Global_262145.f_7558;
			}
			break;
		
		case joaat("CLO_HSTF_U_10_0"):
			if (Global_262145.f_7559 >= 0)
			{
				*uParam1 = Global_262145.f_7559;
			}
			break;
		
		case joaat("CLO_HSTF_U_11_0"):
			if (Global_262145.f_7560 >= 0)
			{
				*uParam1 = Global_262145.f_7560;
			}
			break;
		
		case joaat("CLO_HSTF_U_11_1"):
			if (Global_262145.f_7561 >= 0)
			{
				*uParam1 = Global_262145.f_7561;
			}
			break;
		
		case joaat("CLO_HSTF_U_11_2"):
			if (Global_262145.f_7562 >= 0)
			{
				*uParam1 = Global_262145.f_7562;
			}
			break;
		
		case joaat("CLO_HSTF_U_11_3"):
			if (Global_262145.f_7563 >= 0)
			{
				*uParam1 = Global_262145.f_7563;
			}
			break;
		
		case joaat("CLO_HSTF_U_11_4"):
			if (Global_262145.f_7564 >= 0)
			{
				*uParam1 = Global_262145.f_7564;
			}
			break;
		
		case joaat("CLO_HSTF_U_11_5"):
			if (Global_262145.f_7565 >= 0)
			{
				*uParam1 = Global_262145.f_7565;
			}
			break;
		
		case joaat("CLO_HSTF_U_11_6"):
			if (Global_262145.f_7566 >= 0)
			{
				*uParam1 = Global_262145.f_7566;
			}
			break;
		
		case joaat("CLO_HSTF_U_11_7"):
			if (Global_262145.f_7567 >= 0)
			{
				*uParam1 = Global_262145.f_7567;
			}
			break;
		
		case joaat("CLO_HSTF_U_11_8"):
			if (Global_262145.f_7568 >= 0)
			{
				*uParam1 = Global_262145.f_7568;
			}
			break;
		
		case joaat("CLO_HSTF_U_12_0"):
			if (Global_262145.f_7569 >= 0)
			{
				*uParam1 = Global_262145.f_7569;
			}
			break;
		
		case joaat("CLO_HSTF_U_12_1"):
			if (Global_262145.f_7570 >= 0)
			{
				*uParam1 = Global_262145.f_7570;
			}
			break;
		
		case joaat("CLO_HSTF_U_12_2"):
			if (Global_262145.f_7571 >= 0)
			{
				*uParam1 = Global_262145.f_7571;
			}
			break;
		
		case joaat("CLO_HSTF_U_12_3"):
			if (Global_262145.f_7572 >= 0)
			{
				*uParam1 = Global_262145.f_7572;
			}
			break;
		
		case joaat("CLO_HSTF_U_12_4"):
			if (Global_262145.f_7573 >= 0)
			{
				*uParam1 = Global_262145.f_7573;
			}
			break;
		
		case joaat("CLO_HSTF_U_12_5"):
			if (Global_262145.f_7574 >= 0)
			{
				*uParam1 = Global_262145.f_7574;
			}
			break;
		
		case joaat("CLO_HSTF_U_12_6"):
			if (Global_262145.f_7575 >= 0)
			{
				*uParam1 = Global_262145.f_7575;
			}
			break;
		
		case joaat("CLO_HSTF_U_12_7"):
			if (Global_262145.f_7576 >= 0)
			{
				*uParam1 = Global_262145.f_7576;
			}
			break;
		
		case joaat("CLO_HSTF_U_12_8"):
			if (Global_262145.f_7577 >= 0)
			{
				*uParam1 = Global_262145.f_7577;
			}
			break;
		
		case joaat("CLO_HSTF_U_16_0"):
			if (Global_262145.f_7898 >= 0)
			{
				*uParam1 = Global_262145.f_7898;
			}
			break;
		
		case joaat("CLO_HSTF_U_16_1"):
			if (Global_262145.f_7899 >= 0)
			{
				*uParam1 = Global_262145.f_7899;
			}
			break;
		
		case joaat("CLO_HSTF_U_16_2"):
			if (Global_262145.f_7900 >= 0)
			{
				*uParam1 = Global_262145.f_7900;
			}
			break;
		
		case joaat("CLO_HSTF_U_16_3"):
			if (Global_262145.f_7901 >= 0)
			{
				*uParam1 = Global_262145.f_7901;
			}
			break;
		
		case joaat("CLO_HSTF_U_16_4"):
			if (Global_262145.f_7902 >= 0)
			{
				*uParam1 = Global_262145.f_7902;
			}
			break;
		
		case joaat("CLO_HSTF_U_16_5"):
			if (Global_262145.f_7903 >= 0)
			{
				*uParam1 = Global_262145.f_7903;
			}
			break;
		
		case joaat("CLO_HSTF_S_0_0"):
			if (Global_262145.f_7578 >= 0)
			{
				*uParam1 = Global_262145.f_7578;
			}
			break;
		
		case joaat("CLO_HSTF_S_1_0"):
			if (Global_262145.f_7579 >= 0)
			{
				*uParam1 = Global_262145.f_7579;
			}
			break;
		
		case joaat("CLO_HSTF_S_1_1"):
			if (Global_262145.f_7908 >= 0)
			{
				*uParam1 = Global_262145.f_7908;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_0"):
			if (Global_262145.f_7580 >= 0)
			{
				*uParam1 = Global_262145.f_7580;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_1"):
			if (Global_262145.f_7581 >= 0)
			{
				*uParam1 = Global_262145.f_7581;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_2"):
			if (Global_262145.f_7582 >= 0)
			{
				*uParam1 = Global_262145.f_7582;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_3"):
			if (Global_262145.f_7583 >= 0)
			{
				*uParam1 = Global_262145.f_7583;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_4"):
			if (Global_262145.f_7584 >= 0)
			{
				*uParam1 = Global_262145.f_7584;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_5"):
			if (Global_262145.f_7585 >= 0)
			{
				*uParam1 = Global_262145.f_7585;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_6"):
			if (Global_262145.f_7586 >= 0)
			{
				*uParam1 = Global_262145.f_7586;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_7"):
			if (Global_262145.f_7587 >= 0)
			{
				*uParam1 = Global_262145.f_7587;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_8"):
			if (Global_262145.f_7588 >= 0)
			{
				*uParam1 = Global_262145.f_7588;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_9"):
			if (Global_262145.f_7589 >= 0)
			{
				*uParam1 = Global_262145.f_7589;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_10"):
			if (Global_262145.f_7590 >= 0)
			{
				*uParam1 = Global_262145.f_7590;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_11"):
			if (Global_262145.f_7591 >= 0)
			{
				*uParam1 = Global_262145.f_7591;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_12"):
			if (Global_262145.f_7592 >= 0)
			{
				*uParam1 = Global_262145.f_7592;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_13"):
			if (Global_262145.f_7593 >= 0)
			{
				*uParam1 = Global_262145.f_7593;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_14"):
			if (Global_262145.f_7594 >= 0)
			{
				*uParam1 = Global_262145.f_7594;
			}
			break;
		
		case joaat("CLO_HSTF_S_6_15"):
			if (Global_262145.f_7595 >= 0)
			{
				*uParam1 = Global_262145.f_7595;
			}
			break;
		
		case joaat("CLO_HSTF_S_8_0"):
			if (Global_262145.f_7596 >= 0)
			{
				*uParam1 = Global_262145.f_7596;
			}
			break;
		
		case joaat("CLO_HSTF_S_8_1"):
			if (Global_262145.f_7597 >= 0)
			{
				*uParam1 = Global_262145.f_7597;
			}
			break;
		
		case joaat("CLO_HSTF_S_8_2"):
			if (Global_262145.f_7598 >= 0)
			{
				*uParam1 = Global_262145.f_7598;
			}
			break;
		
		case joaat("CLO_HSTF_S_8_3"):
			if (Global_262145.f_7599 >= 0)
			{
				*uParam1 = Global_262145.f_7599;
			}
			break;
		
		case joaat("CLO_HSTF_S_8_4"):
			if (Global_262145.f_7600 >= 0)
			{
				*uParam1 = Global_262145.f_7600;
			}
			break;
		
		case joaat("CLO_HSTF_S_8_5"):
			if (Global_262145.f_7601 >= 0)
			{
				*uParam1 = Global_262145.f_7601;
			}
			break;
		
		case joaat("CLO_HSTF_S_8_6"):
			if (Global_262145.f_7602 >= 0)
			{
				*uParam1 = Global_262145.f_7602;
			}
			break;
		
		case joaat("CLO_HSTF_S_8_7"):
			if (Global_262145.f_7603 >= 0)
			{
				*uParam1 = Global_262145.f_7603;
			}
			break;
		
		case joaat("CLO_HSTF_S_8_8"):
			if (Global_262145.f_7604 >= 0)
			{
				*uParam1 = Global_262145.f_7604;
			}
			break;
		
		case joaat("CLO_HSTF_S_8_9"):
			if (Global_262145.f_7605 >= 0)
			{
				*uParam1 = Global_262145.f_7605;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("CLO_HSTM_G_0_0"):
			if (Global_262145.f_7453 >= 0)
			{
				*uParam1 = Global_262145.f_7453;
			}
			break;
		
		case joaat("CLO_HSTM_G_0_1"):
			if (Global_262145.f_7454 >= 0)
			{
				*uParam1 = Global_262145.f_7454;
			}
			break;
		
		case joaat("CLO_HSTM_G_1_0"):
			if (Global_262145.f_7455 >= 0)
			{
				*uParam1 = Global_262145.f_7455;
			}
			break;
		
		case joaat("CLO_HSTM_G_1_1"):
			if (Global_262145.f_7456 >= 0)
			{
				*uParam1 = Global_262145.f_7456;
			}
			break;
		
		case joaat("CLO_HSTM_G_2_0"):
			if (Global_262145.f_7457 >= 0)
			{
				*uParam1 = Global_262145.f_7457;
			}
			break;
		
		case joaat("CLO_HSTM_G_2_1"):
			if (Global_262145.f_7458 >= 0)
			{
				*uParam1 = Global_262145.f_7458;
			}
			break;
		
		case joaat("CLO_HSTM_G_3_0"):
			if (Global_262145.f_7459 >= 0)
			{
				*uParam1 = Global_262145.f_7459;
			}
			break;
		
		case joaat("CLO_HSTM_G_3_1"):
			if (Global_262145.f_7460 >= 0)
			{
				*uParam1 = Global_262145.f_7460;
			}
			break;
		
		case joaat("CLO_HSTM_G_4_0"):
			if (Global_262145.f_7461 >= 0)
			{
				*uParam1 = Global_262145.f_7461;
			}
			break;
		
		case joaat("CLO_HSTM_G_5_0"):
			if (Global_262145.f_7462 >= 0)
			{
				*uParam1 = Global_262145.f_7462;
			}
			break;
		
		case joaat("CLO_HSTM_G_5_1"):
			if (Global_262145.f_7463 >= 0)
			{
				*uParam1 = Global_262145.f_7463;
			}
			break;
		
		case joaat("CLO_HSTM_G_6_0"):
			if (Global_262145.f_7464 >= 0)
			{
				*uParam1 = Global_262145.f_7464;
			}
			break;
		
		case joaat("CLO_HSTF_G_0_0"):
			if (Global_262145.f_7606 >= 0)
			{
				*uParam1 = Global_262145.f_7606;
			}
			break;
		
		case joaat("CLO_HSTF_G_0_1"):
			if (Global_262145.f_7607 >= 0)
			{
				*uParam1 = Global_262145.f_7607;
			}
			break;
		
		case joaat("CLO_HSTF_G_1_0"):
			if (Global_262145.f_7608 >= 0)
			{
				*uParam1 = Global_262145.f_7608;
			}
			break;
		
		case joaat("CLO_HSTF_G_1_1"):
			if (Global_262145.f_7609 >= 0)
			{
				*uParam1 = Global_262145.f_7609;
			}
			break;
		
		case joaat("CLO_HSTF_G_2_0"):
			if (Global_262145.f_7610 >= 0)
			{
				*uParam1 = Global_262145.f_7610;
			}
			break;
		
		case joaat("CLO_HSTF_G_2_1"):
			if (Global_262145.f_7611 >= 0)
			{
				*uParam1 = Global_262145.f_7611;
			}
			break;
		
		case joaat("CLO_HSTF_G_3_0"):
			if (Global_262145.f_7612 >= 0)
			{
				*uParam1 = Global_262145.f_7612;
			}
			break;
		
		case joaat("CLO_HSTF_G_3_1"):
			if (Global_262145.f_7613 >= 0)
			{
				*uParam1 = Global_262145.f_7613;
			}
			break;
		
		case joaat("CLO_HSTF_G_4_0"):
			if (Global_262145.f_7614 >= 0)
			{
				*uParam1 = Global_262145.f_7614;
			}
			break;
		
		case joaat("CLO_HSTF_G_5_0"):
			if (Global_262145.f_7615 >= 0)
			{
				*uParam1 = Global_262145.f_7615;
			}
			break;
		
		case joaat("CLO_HSTF_G_5_1"):
			if (Global_262145.f_7616 >= 0)
			{
				*uParam1 = Global_262145.f_7616;
			}
			break;
		
		case joaat("CLO_HSTF_G_6_0"):
			if (Global_262145.f_7617 >= 0)
			{
				*uParam1 = Global_262145.f_7617;
			}
			break;
		
		case 1025727631:
			if (Global_262145.f_7465 >= 0)
			{
				*uParam1 = Global_262145.f_7465;
			}
			break;
		
		case 662251498:
			if (Global_262145.f_7466 >= 0)
			{
				*uParam1 = Global_262145.f_7466;
			}
			break;
		
		case 961432456:
			if (Global_262145.f_7467 >= 0)
			{
				*uParam1 = Global_262145.f_7467;
			}
			break;
		
		case 705211645:
			if (Global_262145.f_7468 >= 0)
			{
				*uParam1 = Global_262145.f_7468;
			}
			break;
		
		case -717814941:
			if (Global_262145.f_7469 >= 0)
			{
				*uParam1 = Global_262145.f_7469;
			}
			break;
		
		case 1183671814:
			if (Global_262145.f_7470 >= 0)
			{
				*uParam1 = Global_262145.f_7470;
			}
			break;
		
		case -3614586:
			if (Global_262145.f_7471 >= 0)
			{
				*uParam1 = Global_262145.f_7471;
			}
			break;
		
		case -250135773:
			if (Global_262145.f_7472 >= 0)
			{
				*uParam1 = Global_262145.f_7472;
			}
			break;
		
		case -1673817747:
			if (Global_262145.f_7473 >= 0)
			{
				*uParam1 = Global_262145.f_7473;
			}
			break;
		
		case 227669016:
			if (Global_262145.f_7474 >= 0)
			{
				*uParam1 = Global_262145.f_7474;
			}
			break;
		
		case -1488345219:
			if (Global_262145.f_7475 >= 0)
			{
				*uParam1 = Global_262145.f_7475;
			}
			break;
		
		case -1807575576:
			if (Global_262145.f_7476 >= 0)
			{
				*uParam1 = Global_262145.f_7476;
			}
			break;
		
		case -1577832117:
			if (Global_262145.f_7477 >= 0)
			{
				*uParam1 = Global_262145.f_7477;
			}
			break;
		
		case 1893781309:
			if (Global_262145.f_7478 >= 0)
			{
				*uParam1 = Global_262145.f_7478;
			}
			break;
		
		case 2130930562:
			if (Global_262145.f_7479 >= 0)
			{
				*uParam1 = Global_262145.f_7479;
			}
			break;
		
		case -1933736202:
			if (Global_262145.f_7480 >= 0)
			{
				*uParam1 = Global_262145.f_7480;
			}
			break;
		
		case -1678170771:
			if (Global_262145.f_7481 >= 0)
			{
				*uParam1 = Global_262145.f_7481;
			}
			break;
		
		case 240558705:
			if (Global_262145.f_7482 >= 0)
			{
				*uParam1 = Global_262145.f_7482;
			}
			break;
		
		case 2078309763:
			if (Global_262145.f_7483 >= 0)
			{
				*uParam1 = Global_262145.f_7483;
			}
			break;
		
		case 1183158990:
			if (Global_262145.f_7484 >= 0)
			{
				*uParam1 = Global_262145.f_7484;
			}
			break;
		
		case 1424928672:
			if (Global_262145.f_7485 >= 0)
			{
				*uParam1 = Global_262145.f_7485;
			}
			break;
		
		case -750048165:
			if (Global_262145.f_7486 >= 0)
			{
				*uParam1 = Global_262145.f_7486;
			}
			break;
		
		case 560285838:
			if (Global_262145.f_7487 >= 0)
			{
				*uParam1 = Global_262145.f_7487;
			}
			break;
		
		case 802710900:
			if (Global_262145.f_7488 >= 0)
			{
				*uParam1 = Global_262145.f_7488;
			}
			break;
		
		case -33127983:
			if (Global_262145.f_7489 >= 0)
			{
				*uParam1 = Global_262145.f_7489;
			}
			break;
		
		case -1887427410:
			if (Global_262145.f_7490 >= 0)
			{
				*uParam1 = Global_262145.f_7490;
			}
			break;
		
		case 2114617795:
			if (Global_262145.f_7491 >= 0)
			{
				*uParam1 = Global_262145.f_7491;
			}
			break;
		
		case 2137927174:
			if (Global_262145.f_7492 >= 0)
			{
				*uParam1 = Global_262145.f_7492;
			}
			break;
		
		case 1638593156:
			if (Global_262145.f_7493 >= 0)
			{
				*uParam1 = Global_262145.f_7493;
			}
			break;
		
		case -470583537:
			if (Global_262145.f_7494 >= 0)
			{
				*uParam1 = Global_262145.f_7494;
			}
			break;
		
		case -701146221:
			if (Global_262145.f_7495 >= 0)
			{
				*uParam1 = Global_262145.f_7495;
			}
			break;
		
		case -949764624:
			if (Global_262145.f_7496 >= 0)
			{
				*uParam1 = Global_262145.f_7496;
			}
			break;
		
		case -1466793906:
			if (Global_262145.f_7497 >= 0)
			{
				*uParam1 = Global_262145.f_7497;
			}
			break;
		
		case -316364806:
			if (Global_262145.f_7498 >= 0)
			{
				*uParam1 = Global_262145.f_7498;
			}
			break;
		
		case -698647960:
			if (Global_262145.f_7499 >= 0)
			{
				*uParam1 = Global_262145.f_7499;
			}
			break;
		
		case 239757893:
			if (Global_262145.f_7500 >= 0)
			{
				*uParam1 = Global_262145.f_7500;
			}
			break;
		
		case -527987008:
			if (Global_262145.f_7501 >= 0)
			{
				*uParam1 = Global_262145.f_7501;
			}
			break;
		
		case 836514156:
			if (Global_262145.f_7502 >= 0)
			{
				*uParam1 = Global_262145.f_7502;
			}
			break;
		
		case 68441561:
			if (Global_262145.f_7503 >= 0)
			{
				*uParam1 = Global_262145.f_7503;
			}
			break;
		
		case 1531348036:
			if (Global_262145.f_7504 >= 0)
			{
				*uParam1 = Global_262145.f_7504;
			}
			break;
		
		case 1166497990:
			if (Global_262145.f_7505 >= 0)
			{
				*uParam1 = Global_262145.f_7505;
			}
			break;
		
		case 2060698462:
			if (Global_262145.f_7506 >= 0)
			{
				*uParam1 = Global_262145.f_7506;
			}
			break;
		
		case -1927911453:
			if (Global_262145.f_7507 >= 0)
			{
				*uParam1 = Global_262145.f_7507;
			}
			break;
		
		case 350463998:
			if (Global_262145.f_7508 >= 0)
			{
				*uParam1 = Global_262145.f_7508;
			}
			break;
		
		case -357837937:
			if (Global_262145.f_7509 >= 0)
			{
				*uParam1 = Global_262145.f_7509;
			}
			break;
		
		case -111316750:
			if (Global_262145.f_7510 >= 0)
			{
				*uParam1 = Global_262145.f_7510;
			}
			break;
		
		case -1950182046:
			if (Global_262145.f_7511 >= 0)
			{
				*uParam1 = Global_262145.f_7511;
			}
			break;
		
		case -1735414020:
			if (Global_262145.f_7512 >= 0)
			{
				*uParam1 = Global_262145.f_7512;
			}
			break;
		
		case 1757957998:
			if (Global_262145.f_7513 >= 0)
			{
				*uParam1 = Global_262145.f_7513;
			}
			break;
		
		case joaat("CLO_HSTF_T_0_0"):
			if (Global_262145.f_7618 >= 0)
			{
				*uParam1 = Global_262145.f_7618;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_0"):
			if (Global_262145.f_7619 >= 0)
			{
				*uParam1 = Global_262145.f_7619;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_1"):
			if (Global_262145.f_7620 >= 0)
			{
				*uParam1 = Global_262145.f_7620;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_2"):
			if (Global_262145.f_7621 >= 0)
			{
				*uParam1 = Global_262145.f_7621;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_3"):
			if (Global_262145.f_7622 >= 0)
			{
				*uParam1 = Global_262145.f_7622;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_4"):
			if (Global_262145.f_7623 >= 0)
			{
				*uParam1 = Global_262145.f_7623;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_5"):
			if (Global_262145.f_7624 >= 0)
			{
				*uParam1 = Global_262145.f_7624;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_6"):
			if (Global_262145.f_7625 >= 0)
			{
				*uParam1 = Global_262145.f_7625;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_7"):
			if (Global_262145.f_7626 >= 0)
			{
				*uParam1 = Global_262145.f_7626;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_8"):
			if (Global_262145.f_7627 >= 0)
			{
				*uParam1 = Global_262145.f_7627;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_9"):
			if (Global_262145.f_7628 >= 0)
			{
				*uParam1 = Global_262145.f_7628;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_10"):
			if (Global_262145.f_7629 >= 0)
			{
				*uParam1 = Global_262145.f_7629;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_11"):
			if (Global_262145.f_7630 >= 0)
			{
				*uParam1 = Global_262145.f_7630;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_12"):
			if (Global_262145.f_7631 >= 0)
			{
				*uParam1 = Global_262145.f_7631;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_13"):
			if (Global_262145.f_7632 >= 0)
			{
				*uParam1 = Global_262145.f_7632;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_14"):
			if (Global_262145.f_7633 >= 0)
			{
				*uParam1 = Global_262145.f_7633;
			}
			break;
		
		case joaat("CLO_HSTF_T_1_15"):
			if (Global_262145.f_7634 >= 0)
			{
				*uParam1 = Global_262145.f_7634;
			}
			break;
		
		case joaat("CLO_HSTF_T_2_0"):
			if (Global_262145.f_7635 >= 0)
			{
				*uParam1 = Global_262145.f_7635;
			}
			break;
		
		case joaat("CLO_HSTF_T_2_1"):
			if (Global_262145.f_7636 >= 0)
			{
				*uParam1 = Global_262145.f_7636;
			}
			break;
		
		case joaat("CLO_HSTF_T_2_2"):
			if (Global_262145.f_7637 >= 0)
			{
				*uParam1 = Global_262145.f_7637;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_0"):
			if (Global_262145.f_7638 >= 0)
			{
				*uParam1 = Global_262145.f_7638;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_1"):
			if (Global_262145.f_7639 >= 0)
			{
				*uParam1 = Global_262145.f_7639;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_2"):
			if (Global_262145.f_7640 >= 0)
			{
				*uParam1 = Global_262145.f_7640;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_3"):
			if (Global_262145.f_7641 >= 0)
			{
				*uParam1 = Global_262145.f_7641;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_4"):
			if (Global_262145.f_7642 >= 0)
			{
				*uParam1 = Global_262145.f_7642;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_5"):
			if (Global_262145.f_7643 >= 0)
			{
				*uParam1 = Global_262145.f_7643;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_6"):
			if (Global_262145.f_7644 >= 0)
			{
				*uParam1 = Global_262145.f_7644;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_7"):
			if (Global_262145.f_7645 >= 0)
			{
				*uParam1 = Global_262145.f_7645;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_8"):
			if (Global_262145.f_7646 >= 0)
			{
				*uParam1 = Global_262145.f_7646;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_9"):
			if (Global_262145.f_7647 >= 0)
			{
				*uParam1 = Global_262145.f_7647;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_10"):
			if (Global_262145.f_7648 >= 0)
			{
				*uParam1 = Global_262145.f_7648;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_11"):
			if (Global_262145.f_7649 >= 0)
			{
				*uParam1 = Global_262145.f_7649;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_12"):
			if (Global_262145.f_7650 >= 0)
			{
				*uParam1 = Global_262145.f_7650;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_13"):
			if (Global_262145.f_7651 >= 0)
			{
				*uParam1 = Global_262145.f_7651;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_14"):
			if (Global_262145.f_7652 >= 0)
			{
				*uParam1 = Global_262145.f_7652;
			}
			break;
		
		case joaat("CLO_HSTF_T_3_15"):
			if (Global_262145.f_7653 >= 0)
			{
				*uParam1 = Global_262145.f_7653;
			}
			break;
		
		case joaat("CLO_HSTF_T_4_0"):
			if (Global_262145.f_7654 >= 0)
			{
				*uParam1 = Global_262145.f_7654;
			}
			break;
		
		case joaat("CLO_HSTF_T_4_1"):
			if (Global_262145.f_7655 >= 0)
			{
				*uParam1 = Global_262145.f_7655;
			}
			break;
		
		case joaat("CLO_HSTF_T_4_2"):
			if (Global_262145.f_7656 >= 0)
			{
				*uParam1 = Global_262145.f_7656;
			}
			break;
	}
	switch (iParam0)
	{
		case -1589747508:
		case -1458262221:
			if (Global_262145.f_7726 >= 0)
			{
				*uParam1 = Global_262145.f_7726;
			}
			break;
		
		case -1263204423:
		case 688336666:
			if (Global_262145.f_7727 >= 0)
			{
				*uParam1 = Global_262145.f_7727;
			}
			break;
		
		case 1903913450:
		case 1794390191:
			if (Global_262145.f_7728 >= 0)
			{
				*uParam1 = Global_262145.f_7728;
			}
			break;
		
		case 1606305392:
		case 1501959635:
			if (Global_262145.f_7729 >= 0)
			{
				*uParam1 = Global_262145.f_7729;
			}
			break;
		
		case 453038580:
		case 1494151153:
			if (Global_262145.f_7730 >= 0)
			{
				*uParam1 = Global_262145.f_7730;
			}
			break;
		
		case 749434185:
		case -684954578:
			if (Global_262145.f_7731 >= 0)
			{
				*uParam1 = Global_262145.f_7731;
			}
			break;
		
		case -543019853:
		case 1143865698:
			if (Global_262145.f_7732 >= 0)
			{
				*uParam1 = Global_262145.f_7732;
			}
			break;
		
		case -1380824876:
		case 1453696593:
			if (Global_262145.f_7733 >= 0)
			{
				*uParam1 = Global_262145.f_7733;
			}
			break;
		
		case 1418928174:
		case 1822210126:
			if (Global_262145.f_7734 >= 0)
			{
				*uParam1 = Global_262145.f_7734;
			}
			break;
		
		case -1108520337:
		case 1832890179:
			if (Global_262145.f_7735 >= 0)
			{
				*uParam1 = Global_262145.f_7735;
			}
			break;
		
		case -1655153523:
		case -1675220867:
			if (Global_262145.f_7736 >= 0)
			{
				*uParam1 = Global_262145.f_7736;
			}
			break;
		
		case 1419227486:
		case 1169259868:
			if (Global_262145.f_7737 >= 0)
			{
				*uParam1 = Global_262145.f_7737;
			}
			break;
		
		case 182001122:
		case 393879790:
			if (Global_262145.f_7738 >= 0)
			{
				*uParam1 = Global_262145.f_7738;
			}
			break;
		
		case 1948414067:
		case 181766053:
			if (Global_262145.f_7739 >= 0)
			{
				*uParam1 = Global_262145.f_7739;
			}
			break;
		
		case -1636481764:
		case -52073535:
			if (Global_262145.f_7740 >= 0)
			{
				*uParam1 = Global_262145.f_7740;
			}
			break;
		
		case 1593527510:
		case -196881500:
			if (Global_262145.f_7741 >= 0)
			{
				*uParam1 = Global_262145.f_7741;
			}
			break;
		
		case 1335537173:
		case -1150950935:
			if (Global_262145.f_7742 >= 0)
			{
				*uParam1 = Global_262145.f_7742;
			}
			break;
		
		case 1044646760:
		case -1749509489:
			if (Global_262145.f_7743 >= 0)
			{
				*uParam1 = Global_262145.f_7743;
			}
			break;
		
		case 690020638:
		case 1576412943:
			if (Global_262145.f_7744 >= 0)
			{
				*uParam1 = Global_262145.f_7744;
			}
			break;
		
		case -1541106533:
		case -1325109412:
			if (Global_262145.f_7745 >= 0)
			{
				*uParam1 = Global_262145.f_7745;
			}
			break;
		
		case -1285410026:
		case -1816316722:
			if (Global_262145.f_7746 >= 0)
			{
				*uParam1 = Global_262145.f_7746;
			}
			break;
		
		case -1994858864:
		case 398834913:
			if (Global_262145.f_7747 >= 0)
			{
				*uParam1 = Global_262145.f_7747;
			}
			break;
		
		case 152329849:
		case -387916012:
			if (Global_262145.f_7748 >= 0)
			{
				*uParam1 = Global_262145.f_7748;
			}
			break;
		
		case -575305796:
		case -149128309:
			if (Global_262145.f_7749 >= 0)
			{
				*uParam1 = Global_262145.f_7749;
			}
			break;
		
		case -345496799:
		case -1134754291:
			if (Global_262145.f_7750 >= 0)
			{
				*uParam1 = Global_262145.f_7750;
			}
			break;
		
		case -1070412617:
		case 1086262995:
			if (Global_262145.f_7751 >= 0)
			{
				*uParam1 = Global_262145.f_7751;
			}
			break;
		
		case 602051621:
		case 1308928350:
			if (Global_262145.f_7752 >= 0)
			{
				*uParam1 = Global_262145.f_7752;
			}
			break;
		
		case 847720814:
		case 876901854:
			if (Global_262145.f_7753 >= 0)
			{
				*uParam1 = Global_262145.f_7753;
			}
			break;
		
		case 146202058:
		case 25333851:
			if (Global_262145.f_7754 >= 0)
			{
				*uParam1 = Global_262145.f_7754;
			}
			break;
		
		case -2023336056:
		case -1075060108:
			if (Global_262145.f_7755 >= 0)
			{
				*uParam1 = Global_262145.f_7755;
			}
			break;
		
		case 1968943987:
		case -1768255534:
			if (Global_262145.f_7756 >= 0)
			{
				*uParam1 = Global_262145.f_7756;
			}
			break;
		
		case 1748605231:
		case -1537660081:
			if (Global_262145.f_7757 >= 0)
			{
				*uParam1 = Global_262145.f_7757;
			}
			break;
		
		case -657524136:
		case -98445625:
			if (Global_262145.f_7758 >= 0)
			{
				*uParam1 = Global_262145.f_7758;
			}
			break;
		
		case -1099577946:
		case 125006186:
			if (Global_262145.f_7759 >= 0)
			{
				*uParam1 = Global_262145.f_7759;
			}
			break;
		
		case -1406852859:
		case -574874116:
			if (Global_262145.f_7760 >= 0)
			{
				*uParam1 = Global_262145.f_7760;
			}
			break;
		
		case -1576071975:
		case -351881071:
			if (Global_262145.f_7761 >= 0)
			{
				*uParam1 = Global_262145.f_7761;
			}
			break;
		
		case 262694926:
		case 844580657:
			if (Global_262145.f_7762 >= 0)
			{
				*uParam1 = Global_262145.f_7762;
			}
			break;
		
		case -297786050:
		case 1085072348:
			if (Global_262145.f_7763 >= 0)
			{
				*uParam1 = Global_262145.f_7763;
			}
			break;
		
		case -598245011:
		case 367234634:
			if (Global_262145.f_7764 >= 0)
			{
				*uParam1 = Global_262145.f_7764;
			}
			break;
		
		case 51287699:
		case 1866236311:
			if (Global_262145.f_7765 >= 0)
			{
				*uParam1 = Global_262145.f_7765;
			}
			break;
		
		case 282341918:
		case 2144805580:
			if (Global_262145.f_7766 >= 0)
			{
				*uParam1 = Global_262145.f_7766;
			}
			break;
		
		case 665411528:
		case 1105274581:
			if (Global_262145.f_7767 >= 0)
			{
				*uParam1 = Global_262145.f_7767;
			}
			break;
		
		case 896006981:
		case 261046834:
			if (Global_262145.f_7768 >= 0)
			{
				*uParam1 = Global_262145.f_7768;
			}
			break;
		
		case 1205706800:
		case 1717432270:
			if (Global_262145.f_7769 >= 0)
			{
				*uParam1 = Global_262145.f_7769;
			}
			break;
		
		case 1577569412:
		case 893226382:
			if (Global_262145.f_7770 >= 0)
			{
				*uParam1 = Global_262145.f_7770;
			}
			break;
		
		case -681355849:
		case -537499581:
			if (Global_262145.f_7771 >= 0)
			{
				*uParam1 = Global_262145.f_7771;
			}
			break;
		
		case -387090229:
		case -767832882:
			if (Global_262145.f_7772 >= 0)
			{
				*uParam1 = Global_262145.f_7772;
			}
			break;
		
		case 1849066335:
		case -1127308804:
			if (Global_262145.f_7773 >= 0)
			{
				*uParam1 = Global_262145.f_7773;
			}
			break;
		
		case -2140657726:
		case -1366751887:
			if (Global_262145.f_7774 >= 0)
			{
				*uParam1 = Global_262145.f_7774;
			}
			break;
		
		case -1872246847:
		case -532387609:
			if (Global_262145.f_7775 >= 0)
			{
				*uParam1 = Global_262145.f_7775;
			}
			break;
		
		case -1580864899:
		case -771371926:
			if (Global_262145.f_7776 >= 0)
			{
				*uParam1 = Global_262145.f_7776;
			}
			break;
		
		case 871075530:
		case -2054081662:
			if (Global_262145.f_7777 >= 0)
			{
				*uParam1 = Global_262145.f_7777;
			}
			break;
		
		case 1429393752:
		case 1945079871:
			if (Global_262145.f_7778 >= 0)
			{
				*uParam1 = Global_262145.f_7778;
			}
			break;
		
		case 1688498235:
		case -1457718631:
			if (Global_262145.f_7779 >= 0)
			{
				*uParam1 = Global_262145.f_7779;
			}
			break;
		
		case -143845938:
		case -1689100540:
			if (Global_262145.f_7780 >= 0)
			{
				*uParam1 = Global_262145.f_7780;
			}
			break;
	}
	switch (iParam0)
	{
		case -1350759586:
		case -1908741671:
			if (Global_262145.f_7781 >= 0)
			{
				*uParam1 = Global_262145.f_7781;
			}
			break;
		
		case -1496483333:
		case 2146979156:
			if (Global_262145.f_7782 >= 0)
			{
				*uParam1 = Global_262145.f_7782;
			}
			break;
		
		case -1744118666:
		case -1450336130:
			if (Global_262145.f_7783 >= 0)
			{
				*uParam1 = Global_262145.f_7783;
			}
			break;
		
		case -79584538:
		case -1685060477:
			if (Global_262145.f_7784 >= 0)
			{
				*uParam1 = Global_262145.f_7784;
			}
			break;
		
		case -326892181:
		case -1768031561:
			if (Global_262145.f_7785 >= 0)
			{
				*uParam1 = Global_262145.f_7785;
			}
			break;
		
		case -540742675:
		case -2007540182:
			if (Global_262145.f_7786 >= 0)
			{
				*uParam1 = Global_262145.f_7786;
			}
			break;
		
		case -788640160:
		case -1292979368:
			if (Global_262145.f_7787 >= 0)
			{
				*uParam1 = Global_262145.f_7787;
			}
			break;
		
		case 872354924:
		case -1548413723:
			if (Global_262145.f_7788 >= 0)
			{
				*uParam1 = Global_262145.f_7788;
			}
			break;
		
		case 1640394746:
		case 1297377313:
			if (Global_262145.f_7789 >= 0)
			{
				*uParam1 = Global_262145.f_7789;
			}
			break;
		
		case 413293991:
		case 1075957180:
			if (Global_262145.f_7790 >= 0)
			{
				*uParam1 = Global_262145.f_7790;
			}
			break;
		
		case -401304228:
		case 68788931:
			if (Global_262145.f_7791 >= 0)
			{
				*uParam1 = Global_262145.f_7791;
			}
			break;
		
		case -126405087:
		case -2071452774:
			if (Global_262145.f_7792 >= 0)
			{
				*uParam1 = Global_262145.f_7792;
			}
			break;
		
		case -1281184647:
		case -641610228:
			if (Global_262145.f_7793 >= 0)
			{
				*uParam1 = Global_262145.f_7793;
			}
			break;
		
		case 375681531:
		case -1121282850:
			if (Global_262145.f_7794 >= 0)
			{
				*uParam1 = Global_262145.f_7794;
			}
			break;
		
		case 554436426:
		case -827705379:
			if (Global_262145.f_7795 >= 0)
			{
				*uParam1 = Global_262145.f_7795;
			}
			break;
		
		case 836905206:
		case 1882946301:
			if (Global_262145.f_7796 >= 0)
			{
				*uParam1 = Global_262145.f_7796;
			}
			break;
		
		case 1283513907:
		case 910231305:
			if (Global_262145.f_7797 >= 0)
			{
				*uParam1 = Global_262145.f_7797;
			}
			break;
		
		case 1329456045:
		case 1134469572:
			if (Global_262145.f_7798 >= 0)
			{
				*uParam1 = Global_262145.f_7798;
			}
			break;
		
		case -1733167464:
		case -1714401754:
			if (Global_262145.f_7799 >= 0)
			{
				*uParam1 = Global_262145.f_7799;
			}
			break;
		
		case 1814273404:
		case 388221135:
			if (Global_262145.f_7800 >= 0)
			{
				*uParam1 = Global_262145.f_7800;
			}
			break;
		
		case -1246870544:
		case 1481352928:
			if (Global_262145.f_7801 >= 0)
			{
				*uParam1 = Global_262145.f_7801;
			}
			break;
		
		case -1277468627:
		case -599699066:
			if (Global_262145.f_7802 >= 0)
			{
				*uParam1 = Global_262145.f_7802;
			}
			break;
		
		case 1269403595:
		case 25205764:
			if (Global_262145.f_7803 >= 0)
			{
				*uParam1 = Global_262145.f_7803;
			}
			break;
		
		case 549304820:
		case 1875376273:
			if (Global_262145.f_7804 >= 0)
			{
				*uParam1 = Global_262145.f_7804;
			}
			break;
		
		case 905176160:
		case 388712281:
			if (Global_262145.f_7805 >= 0)
			{
				*uParam1 = Global_262145.f_7805;
			}
			break;
		
		case -2093908262:
		case 92054524:
			if (Global_262145.f_7806 >= 0)
			{
				*uParam1 = Global_262145.f_7806;
			}
			break;
		
		case 286399133:
		case -1971278330:
			if (Global_262145.f_7807 >= 0)
			{
				*uParam1 = Global_262145.f_7807;
			}
			break;
		
		case 800479197:
		case 1983022442:
			if (Global_262145.f_7808 >= 0)
			{
				*uParam1 = Global_262145.f_7808;
			}
			break;
		
		case 1031205726:
		case 1013748191:
			if (Global_262145.f_7809 >= 0)
			{
				*uParam1 = Global_262145.f_7809;
			}
			break;
		
		case 172723464:
		case -1708372643:
			if (Global_262145.f_7810 >= 0)
			{
				*uParam1 = Global_262145.f_7810;
			}
			break;
		
		case -1738316381:
		case 816221686:
			if (Global_262145.f_7811 >= 0)
			{
				*uParam1 = Global_262145.f_7811;
			}
			break;
		
		case 244240892:
		case 1583704435:
			if (Global_262145.f_7812 >= 0)
			{
				*uParam1 = Global_262145.f_7812;
			}
			break;
		
		case -1077562261:
		case -2063354189:
			if (Global_262145.f_7813 >= 0)
			{
				*uParam1 = Global_262145.f_7813;
			}
			break;
		
		case -1307862793:
		case 1963529918:
			if (Global_262145.f_7814 >= 0)
			{
				*uParam1 = Global_262145.f_7814;
			}
			break;
		
		case -481657996:
		case -1559432507:
			if (Global_262145.f_7815 >= 0)
			{
				*uParam1 = Global_262145.f_7815;
			}
			break;
		
		case 1697513261:
		case -1723408583:
			if (Global_262145.f_7816 >= 0)
			{
				*uParam1 = Global_262145.f_7816;
			}
			break;
		
		case 1189593761:
		case -947799122:
			if (Global_262145.f_7817 >= 0)
			{
				*uParam1 = Global_262145.f_7817;
			}
			break;
		
		case -118315324:
		case -1335685775:
			if (Global_262145.f_7818 >= 0)
			{
				*uParam1 = Global_262145.f_7818;
			}
			break;
		
		case -365196970:
		case -574363598:
			if (Global_262145.f_7819 >= 0)
			{
				*uParam1 = Global_262145.f_7819;
			}
			break;
		
		case -631608864:
		case 89995120:
			if (Global_262145.f_7820 >= 0)
			{
				*uParam1 = Global_262145.f_7820;
			}
			break;
		
		case 609157208:
		case 108863710:
			if (Global_262145.f_7821 >= 0)
			{
				*uParam1 = Global_262145.f_7821;
			}
			break;
		
		case 820674102:
		case -1831910151:
			if (Global_262145.f_7822 >= 0)
			{
				*uParam1 = Global_262145.f_7822;
			}
			break;
		
		case 917047731:
		case -1399883655:
			if (Global_262145.f_7823 >= 0)
			{
				*uParam1 = Global_262145.f_7823;
			}
			break;
		
		case 919739708:
		case 417943049:
			if (Global_262145.f_7824 >= 0)
			{
				*uParam1 = Global_262145.f_7824;
			}
			break;
		
		case 1156888961:
		case -2141545238:
			if (Global_262145.f_7825 >= 0)
			{
				*uParam1 = Global_262145.f_7825;
			}
			break;
		
		case 337598419:
		case -1365083783:
			if (Global_262145.f_7826 >= 0)
			{
				*uParam1 = Global_262145.f_7826;
			}
			break;
		
		case 542961742:
		case 1702291235:
			if (Global_262145.f_7827 >= 0)
			{
				*uParam1 = Global_262145.f_7827;
			}
			break;
		
		case -276132182:
		case 1404257180:
			if (Global_262145.f_7828 >= 0)
			{
				*uParam1 = Global_262145.f_7828;
			}
			break;
		
		case -35574953:
		case -1245673539:
			if (Global_262145.f_7829 >= 0)
			{
				*uParam1 = Global_262145.f_7829;
			}
			break;
		
		case -986826254:
		case -479370474:
			if (Global_262145.f_7830 >= 0)
			{
				*uParam1 = Global_262145.f_7830;
			}
			break;
		
		case -647142800:
		case -1699589735:
			if (Global_262145.f_7831 >= 0)
			{
				*uParam1 = Global_262145.f_7831;
			}
			break;
		
		case -1106760798:
		case -957830643:
			if (Global_262145.f_7832 >= 0)
			{
				*uParam1 = Global_262145.f_7832;
			}
			break;
		
		case 131315783:
		case 1029506395:
			if (Global_262145.f_7833 >= 0)
			{
				*uParam1 = Global_262145.f_7833;
			}
			break;
		
		case 438852848:
		case 1996978351:
			if (Global_262145.f_7834 >= 0)
			{
				*uParam1 = Global_262145.f_7834;
			}
			break;
		
		case 1873414130:
		case -1598665712:
			if (Global_262145.f_7835 >= 0)
			{
				*uParam1 = Global_262145.f_7835;
			}
			break;
		
		case -1995294014:
		case 1317578674:
			if (Global_262145.f_7836 >= 0)
			{
				*uParam1 = Global_262145.f_7836;
			}
			break;
		
		case -776713211:
		case 109418413:
			if (Global_262145.f_7837 >= 0)
			{
				*uParam1 = Global_262145.f_7837;
			}
			break;
		
		case -579378293:
		case 540920605:
			if (Global_262145.f_7838 >= 0)
			{
				*uParam1 = Global_262145.f_7838;
			}
			break;
		
		case -1769646684:
		case 1777524358:
			if (Global_262145.f_7839 >= 0)
			{
				*uParam1 = Global_262145.f_7839;
			}
			break;
		
		case 804817040:
		case 326447500:
			if (Global_262145.f_7840 >= 0)
			{
				*uParam1 = Global_262145.f_7840;
			}
			break;
		
		case 1963987642:
		case -304585073:
			if (Global_262145.f_7841 >= 0)
			{
				*uParam1 = Global_262145.f_7841;
			}
			break;
		
		case -2033338827:
		case -602881280:
			if (Global_262145.f_7869 >= 0)
			{
				*uParam1 = Global_262145.f_7869;
			}
			break;
		
		case 1099249008:
		case -628210055:
			if (Global_262145.f_7870 >= 0)
			{
				*uParam1 = Global_262145.f_7870;
			}
			break;
		
		case -428376238:
		case -724485377:
			if (Global_262145.f_7871 >= 0)
			{
				*uParam1 = Global_262145.f_7871;
			}
			break;
		
		case -1260282841:
		case 1755603627:
			if (Global_262145.f_7872 >= 0)
			{
				*uParam1 = Global_262145.f_7872;
			}
			break;
		
		case -416284477:
		case 1516357158:
			if (Global_262145.f_7873 >= 0)
			{
				*uParam1 = Global_262145.f_7873;
			}
			break;
		
		case -729359503:
		case -1955518400:
			if (Global_262145.f_7874 >= 0)
			{
				*uParam1 = Global_262145.f_7874;
			}
			break;
		
		case -1650594404:
		case 2109181133:
			if (Global_262145.f_7875 >= 0)
			{
				*uParam1 = Global_262145.f_7875;
			}
			break;
		
		case 1733001464:
		case 1428077468:
			if (Global_262145.f_7876 >= 0)
			{
				*uParam1 = Global_262145.f_7876;
			}
			break;
		
		case -1037650255:
		case 1189158689:
			if (Global_262145.f_7877 >= 0)
			{
				*uParam1 = Global_262145.f_7877;
			}
			break;
		
		case -1950135833:
		case 1740857573:
			if (Global_262145.f_7878 >= 0)
			{
				*uParam1 = Global_262145.f_7878;
			}
			break;
		
		case 803377703:
		case 1502397560:
			if (Global_262145.f_7879 >= 0)
			{
				*uParam1 = Global_262145.f_7879;
			}
			break;
		
		case 120151925:
		case -568111949:
			if (Global_262145.f_7880 >= 0)
			{
				*uParam1 = Global_262145.f_7880;
			}
			break;
		
		case -790433047:
		case -337778648:
			if (Global_262145.f_7881 >= 0)
			{
				*uParam1 = Global_262145.f_7881;
			}
			break;
		
		case -664465652:
		case 1668462861:
			if (Global_262145.f_7882 >= 0)
			{
				*uParam1 = Global_262145.f_7882;
			}
			break;
		
		case -1454919470:
		case 1457987574:
			if (Global_262145.f_7883 >= 0)
			{
				*uParam1 = Global_262145.f_7883;
			}
			break;
		
		case -1131718823:
		case 1747337844:
			if (Global_262145.f_7884 >= 0)
			{
				*uParam1 = Global_262145.f_7884;
			}
			break;
		
		case -1915160075:
		case -1511735824:
			if (Global_262145.f_7885 >= 0)
			{
				*uParam1 = Global_262145.f_7885;
			}
			break;
		
		case -1626366878:
		case -1222254478:
			if (Global_262145.f_7886 >= 0)
			{
				*uParam1 = Global_262145.f_7886;
			}
			break;
		
		case 288850072:
		case -1437776191:
			if (Global_262145.f_7887 >= 0)
			{
				*uParam1 = Global_262145.f_7887;
			}
			break;
		
		case 49341451:
		case -607278651:
			if (Global_262145.f_7888 >= 0)
			{
				*uParam1 = Global_262145.f_7888;
			}
			break;
		
		case -169424393:
		case -830468310:
			if (Global_262145.f_7889 >= 0)
			{
				*uParam1 = Global_262145.f_7889;
			}
			break;
		
		case -408736400:
		case 4813500:
			if (Global_262145.f_7890 >= 0)
			{
				*uParam1 = Global_262145.f_7890;
			}
			break;
		
		case -629009618:
		case -279523113:
			if (Global_262145.f_7891 >= 0)
			{
				*uParam1 = Global_262145.f_7891;
			}
			break;
		
		case -337652395:
		case joaat("CLO_HSTF_H_2"):
			if (Global_262145.f_7843 >= 0)
			{
				*uParam1 = Global_262145.f_7843;
			}
			break;
		
		case 1042446809:
		case joaat("CLO_HSTF_H_3"):
			if (Global_262145.f_7842 >= 0)
			{
				*uParam1 = Global_262145.f_7842;
			}
			break;
		
		case 276078206:
		case joaat("CLO_HSTF_H_4"):
			if (Global_262145.f_7844 >= 0)
			{
				*uParam1 = Global_262145.f_7844;
			}
			break;
		
		case -763551088:
		case joaat("CLO_HSTF_H_5"):
			if (Global_262145.f_7845 >= 0)
			{
				*uParam1 = Global_262145.f_7845;
			}
			break;
		
		case -1529460925:
		case joaat("CLO_HSTF_H_6"):
			if (Global_262145.f_7846 >= 0)
			{
				*uParam1 = Global_262145.f_7846;
			}
			break;
		
		case -148050961:
		case joaat("CLO_HSTF_H_7"):
			if (Global_262145.f_7847 >= 0)
			{
				*uParam1 = Global_262145.f_7847;
			}
			break;
	}
}

void func_52(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 486242937:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6647));
			break;
		
		case 11157975:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6648));
			break;
		
		case -166777695:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6649));
			break;
		
		case 1943250984:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6650));
			break;
		
		case 1513714932:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6651));
			break;
		
		case 1224987273:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6652));
			break;
		
		case 1061601039:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6653));
			break;
		
		case -1836817011:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6654));
			break;
		
		case -2099198394:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6655));
			break;
		
		case 1983294706:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6656));
			break;
		
		case 1763743409:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6657));
			break;
		
		case 1638533048:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6658));
			break;
		
		case 1865458373:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6659));
			break;
		
		case -981840041:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6660));
			break;
		
		case -743183414:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6661));
			break;
		
		case 1017575242:
			if (Global_262145.f_6587 >= 0)
			{
				*uParam1 = Global_262145.f_6587;
			}
			break;
		
		case -436450826:
			if (Global_262145.f_6588 >= 0)
			{
				*uParam1 = Global_262145.f_6588;
			}
			break;
		
		case 388705363:
			if (Global_262145.f_6589 >= 0)
			{
				*uParam1 = Global_262145.f_6589;
			}
			break;
		
		case -1044283007:
			if (Global_262145.f_6590 >= 0)
			{
				*uParam1 = Global_262145.f_6590;
			}
			break;
		
		case -208444124:
			if (Global_262145.f_6591 >= 0)
			{
				*uParam1 = Global_262145.f_6591;
			}
			break;
		
		case 1207664400:
			if (Global_262145.f_6592 >= 0)
			{
				*uParam1 = Global_262145.f_6592;
			}
			break;
		
		case 685326540:
			if (Global_262145.f_6593 >= 0)
			{
				*uParam1 = Global_262145.f_6593;
			}
			break;
		
		case 507980712:
			if (Global_262145.f_6594 >= 0)
			{
				*uParam1 = Global_262145.f_6594;
			}
			break;
		
		case 224168403:
			if (Global_262145.f_6595 >= 0)
			{
				*uParam1 = Global_262145.f_6595;
			}
			break;
		
		case -19665722:
			if (Global_262145.f_6596 >= 0)
			{
				*uParam1 = Global_262145.f_6596;
			}
			break;
		
		case -567597622:
			if (Global_262145.f_6679 >= 0)
			{
				*uParam1 = Global_262145.f_6679;
			}
			break;
		
		case 983703469:
			if (Global_262145.f_6567 >= 0)
			{
				*uParam1 = Global_262145.f_6567;
			}
			break;
		
		case 1751120680:
			if (Global_262145.f_6568 >= 0)
			{
				*uParam1 = Global_262145.f_6568;
			}
			break;
		
		case 569765473:
			if (Global_262145.f_6569 >= 0)
			{
				*uParam1 = Global_262145.f_6569;
			}
			break;
		
		case 272321260:
			if (Global_262145.f_6570 >= 0)
			{
				*uParam1 = Global_262145.f_6570;
			}
			break;
		
		case -28039394:
			if (Global_262145.f_6571 >= 0)
			{
				*uParam1 = Global_262145.f_6571;
			}
			break;
		
		case -499985406:
			if (Global_262145.f_6572 >= 0)
			{
				*uParam1 = Global_262145.f_6572;
			}
			break;
		
		case -841176234:
			if (Global_262145.f_6573 >= 0)
			{
				*uParam1 = Global_262145.f_6573;
			}
			break;
		
		case -1080095013:
			if (Global_262145.f_6574 >= 0)
			{
				*uParam1 = Global_262145.f_6574;
			}
			break;
		
		case -849106328:
			if (Global_262145.f_6575 >= 0)
			{
				*uParam1 = Global_262145.f_6575;
			}
			break;
		
		case -1188462092:
			if (Global_262145.f_6576 >= 0)
			{
				*uParam1 = Global_262145.f_6576;
			}
			break;
		
		case -1234554049:
			if (Global_262145.f_6577 >= 0)
			{
				*uParam1 = Global_262145.f_6577;
			}
			break;
		
		case -1400168575:
			if (Global_262145.f_6578 >= 0)
			{
				*uParam1 = Global_262145.f_6578;
			}
			break;
		
		case -758256634:
			if (Global_262145.f_6579 >= 0)
			{
				*uParam1 = Global_262145.f_6579;
			}
			break;
		
		case -1053210403:
			if (Global_262145.f_6580 >= 0)
			{
				*uParam1 = Global_262145.f_6580;
			}
			break;
		
		case 1831772361:
			if (Global_262145.f_6581 >= 0)
			{
				*uParam1 = Global_262145.f_6581;
			}
			break;
		
		case -1855901249:
			if (Global_262145.f_6582 >= 0)
			{
				*uParam1 = Global_262145.f_6582;
			}
			break;
		
		case 1854925853:
			if (Global_262145.f_6583 >= 0)
			{
				*uParam1 = Global_262145.f_6583;
			}
			break;
		
		case 1608142514:
			if (Global_262145.f_6584 >= 0)
			{
				*uParam1 = Global_262145.f_6584;
			}
			break;
		
		case 1259611430:
			if (Global_262145.f_6585 >= 0)
			{
				*uParam1 = Global_262145.f_6585;
			}
			break;
		
		case 975930197:
			if (Global_262145.f_6586 >= 0)
			{
				*uParam1 = Global_262145.f_6586;
			}
			break;
		
		case -189071324:
			if (Global_262145.f_6597 >= 0)
			{
				*uParam1 = Global_262145.f_6597;
			}
			break;
		
		case 1735026049:
			if (Global_262145.f_6598 >= 0)
			{
				*uParam1 = Global_262145.f_6598;
			}
			break;
		
		case 475582303:
			if (Global_262145.f_6599 >= 0)
			{
				*uParam1 = Global_262145.f_6599;
			}
			break;
		
		case 185478346:
			if (Global_262145.f_6600 >= 0)
			{
				*uParam1 = Global_262145.f_6600;
			}
			break;
		
		case 1035112978:
			if (Global_262145.f_6601 >= 0)
			{
				*uParam1 = Global_262145.f_6601;
			}
			break;
		
		case 1389202323:
			if (Global_262145.f_6602 >= 0)
			{
				*uParam1 = Global_262145.f_6602;
			}
			break;
		
		case 1595647023:
			if (Global_262145.f_6603 >= 0)
			{
				*uParam1 = Global_262145.f_6603;
			}
			break;
		
		case -1168483685:
			if (Global_262145.f_6604 >= 0)
			{
				*uParam1 = Global_262145.f_6604;
			}
			break;
		
		case -946834169:
			if (Global_262145.f_6605 >= 0)
			{
				*uParam1 = Global_262145.f_6605;
			}
			break;
		
		case -1761700892:
			if (Global_262145.f_6606 >= 0)
			{
				*uParam1 = Global_262145.f_6606;
			}
			break;
		
		case -1912404917:
			if (Global_262145.f_6677 >= 0)
			{
				*uParam1 = Global_262145.f_6677;
			}
			break;
		
		case joaat("CLO_LTSF_O_0"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6662));
			break;
		
		case joaat("CLO_LTSF_O_1"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6663));
			break;
		
		case joaat("CLO_LTSF_O_2"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6664));
			break;
		
		case joaat("CLO_LTSF_O_3"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6665));
			break;
		
		case joaat("CLO_LTSF_O_4"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6666));
			break;
		
		case joaat("CLO_LTSF_O_5"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6667));
			break;
		
		case joaat("CLO_LTSF_O_6"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6668));
			break;
		
		case joaat("CLO_LTSF_O_7"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6669));
			break;
		
		case joaat("CLO_LTSF_O_8"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6670));
			break;
		
		case joaat("CLO_LTSF_O_9"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6671));
			break;
		
		case joaat("CLO_LTSF_O_10"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6672));
			break;
		
		case joaat("CLO_LTSF_O_11"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6673));
			break;
		
		case joaat("CLO_LTSF_O_12"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6674));
			break;
		
		case joaat("CLO_LTSF_O_13"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6675));
			break;
		
		case joaat("CLO_LTSF_O_14"):
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6676));
			break;
		
		case -1734014907:
			if (Global_262145.f_6627 >= 0)
			{
				*uParam1 = Global_262145.f_6627;
			}
			break;
		
		case 113828983:
			if (Global_262145.f_6628 >= 0)
			{
				*uParam1 = Global_262145.f_6628;
			}
			break;
		
		case -836701380:
			if (Global_262145.f_6629 >= 0)
			{
				*uParam1 = Global_262145.f_6629;
			}
			break;
		
		case -1428116292:
			if (Global_262145.f_6630 >= 0)
			{
				*uParam1 = Global_262145.f_6630;
			}
			break;
		
		case 2097107194:
			if (Global_262145.f_6631 >= 0)
			{
				*uParam1 = Global_262145.f_6631;
			}
			break;
		
		case 639725155:
			if (Global_262145.f_6632 >= 0)
			{
				*uParam1 = Global_262145.f_6632;
			}
			break;
		
		case 386289709:
			if (Global_262145.f_6633 >= 0)
			{
				*uParam1 = Global_262145.f_6633;
			}
			break;
		
		case 1249982250:
			if (Global_262145.f_6634 >= 0)
			{
				*uParam1 = Global_262145.f_6634;
			}
			break;
		
		case 924815463:
			if (Global_262145.f_6635 >= 0)
			{
				*uParam1 = Global_262145.f_6635;
			}
			break;
		
		case 1775924700:
			if (Global_262145.f_6636 >= 0)
			{
				*uParam1 = Global_262145.f_6636;
			}
			break;
		
		case joaat("CLO_LTSFH_0_0"):
			if (Global_262145.f_6607 >= 0)
			{
				*uParam1 = Global_262145.f_6607;
			}
			break;
		
		case joaat("CLO_LTSFH_0_1"):
			if (Global_262145.f_6608 >= 0)
			{
				*uParam1 = Global_262145.f_6608;
			}
			break;
		
		case joaat("CLO_LTSFH_0_2"):
			if (Global_262145.f_6609 >= 0)
			{
				*uParam1 = Global_262145.f_6609;
			}
			break;
		
		case joaat("CLO_LTSFH_0_3"):
			if (Global_262145.f_6610 >= 0)
			{
				*uParam1 = Global_262145.f_6610;
			}
			break;
		
		case joaat("CLO_LTSFH_0_4"):
			if (Global_262145.f_6611 >= 0)
			{
				*uParam1 = Global_262145.f_6611;
			}
			break;
		
		case joaat("CLO_LTSFL_0_0"):
			if (Global_262145.f_6612 >= 0)
			{
				*uParam1 = Global_262145.f_6612;
			}
			break;
		
		case joaat("CLO_LTSFL_0_1"):
			if (Global_262145.f_6613 >= 0)
			{
				*uParam1 = Global_262145.f_6613;
			}
			break;
		
		case joaat("CLO_LTSFL_0_2"):
			if (Global_262145.f_6614 >= 0)
			{
				*uParam1 = Global_262145.f_6614;
			}
			break;
		
		case joaat("CLO_LTSFL_0_3"):
			if (Global_262145.f_6615 >= 0)
			{
				*uParam1 = Global_262145.f_6615;
			}
			break;
		
		case joaat("CLO_LTSFL_0_4"):
			if (Global_262145.f_6616 >= 0)
			{
				*uParam1 = Global_262145.f_6616;
			}
			break;
		
		case joaat("CLO_LTSFU_0_0"):
			if (Global_262145.f_6617 >= 0)
			{
				*uParam1 = Global_262145.f_6617;
			}
			break;
		
		case joaat("CLO_LTSFU_0_1"):
			if (Global_262145.f_6618 >= 0)
			{
				*uParam1 = Global_262145.f_6618;
			}
			break;
		
		case joaat("CLO_LTSFU_0_2"):
			if (Global_262145.f_6619 >= 0)
			{
				*uParam1 = Global_262145.f_6619;
			}
			break;
		
		case joaat("CLO_LTSFU_0_3"):
			if (Global_262145.f_6620 >= 0)
			{
				*uParam1 = Global_262145.f_6620;
			}
			break;
		
		case joaat("CLO_LTSFU_0_4"):
			if (Global_262145.f_6621 >= 0)
			{
				*uParam1 = Global_262145.f_6621;
			}
			break;
		
		case joaat("CLO_LTSFU_1_0"):
			if (Global_262145.f_6622 >= 0)
			{
				*uParam1 = Global_262145.f_6622;
			}
			break;
		
		case joaat("CLO_LTSFU_1_1"):
			if (Global_262145.f_6623 >= 0)
			{
				*uParam1 = Global_262145.f_6623;
			}
			break;
		
		case joaat("CLO_LTSFU_1_2"):
			if (Global_262145.f_6624 >= 0)
			{
				*uParam1 = Global_262145.f_6624;
			}
			break;
		
		case joaat("CLO_LTSFU_1_3"):
			if (Global_262145.f_6625 >= 0)
			{
				*uParam1 = Global_262145.f_6625;
			}
			break;
		
		case joaat("CLO_LTSFU_1_4"):
			if (Global_262145.f_6626 >= 0)
			{
				*uParam1 = Global_262145.f_6626;
			}
			break;
		
		case 2014785516:
			if (Global_262145.f_6637 >= 0)
			{
				*uParam1 = Global_262145.f_6637;
			}
			break;
		
		case 1634992806:
			if (Global_262145.f_6638 >= 0)
			{
				*uParam1 = Global_262145.f_6638;
			}
			break;
		
		case -1508078610:
			if (Global_262145.f_6639 >= 0)
			{
				*uParam1 = Global_262145.f_6639;
			}
			break;
		
		case -1755189639:
			if (Global_262145.f_6640 >= 0)
			{
				*uParam1 = Global_262145.f_6640;
			}
			break;
		
		case -2107128699:
			if (Global_262145.f_6641 >= 0)
			{
				*uParam1 = Global_262145.f_6641;
			}
			break;
		
		case -1287626472:
			if (Global_262145.f_6642 >= 0)
			{
				*uParam1 = Global_262145.f_6642;
			}
			break;
		
		case 1380622126:
			if (Global_262145.f_6643 >= 0)
			{
				*uParam1 = Global_262145.f_6643;
			}
			break;
		
		case 1612462801:
			if (Global_262145.f_6644 >= 0)
			{
				*uParam1 = Global_262145.f_6644;
			}
			break;
		
		case 1790857237:
			if (Global_262145.f_6645 >= 0)
			{
				*uParam1 = Global_262145.f_6645;
			}
			break;
		
		case 2090529742:
			if (Global_262145.f_6646 >= 0)
			{
				*uParam1 = Global_262145.f_6646;
			}
			break;
		
		case -308456130:
			if (Global_262145.f_6678 >= 0)
			{
				*uParam1 = Global_262145.f_6678;
			}
			break;
	}
}

void func_53(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case -1736024889:
		case joaat("CLO_PIF_B_0_0"):
			if (Global_262145.f_6396 >= 0)
			{
				*uParam1 = Global_262145.f_6396;
			}
			break;
		
		case -714796311:
		case joaat("CLO_PIF_O_0"):
			if (Global_262145.f_6397 >= 0)
			{
				*uParam1 = Global_262145.f_6397;
			}
			break;
		
		case -1516065754:
			if (Global_262145.f_6398 >= 0)
			{
				*uParam1 = Global_262145.f_6398;
			}
			break;
		
		case 1654631855:
			if (Global_262145.f_6399 >= 0)
			{
				*uParam1 = Global_262145.f_6399;
			}
			break;
	}
}

void func_54(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case -1610663451:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case -1342383648:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case -1120144290:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case 1492757467:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case 74154800:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case 1696679066:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case -1811791700:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case -1514347487:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case 1068996624:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case 1550143851:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case 1855649238:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case 1594644157:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case 438291685:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case 734032114:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case -1046831960:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case -108491645:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case 1441514824:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case 1790504674:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case 1449707070:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case -217662594:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case -448716813:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case 242905701:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case -214909990:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case -454090921:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case 6936140:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case -2124036238:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case 1983328533:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case 1809980523:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case -123488800:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case 788636331:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case 624856869:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case 229236720:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case -1055963128:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case -1728251932:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case 1723536225:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case -1966744714:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case -1546351257:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
		
		case -773166702:
			*uParam1 = unk_0xF34EE736CF047844((IntToFloat(*uParam1) * Global_262145.f_6161));
			break;
	}
}

void func_55(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 787219564:
			if (Global_262145.f_5604[101] >= 0)
			{
				*uParam1 = Global_262145.f_5604[101];
			}
			break;
		
		case 1446861130:
			if (Global_262145.f_5604[102] >= 0)
			{
				*uParam1 = Global_262145.f_5604[102];
			}
			break;
		
		case 1677423814:
			if (Global_262145.f_5604[103] >= 0)
			{
				*uParam1 = Global_262145.f_5604[103];
			}
			break;
		
		case 1629963538:
			if (Global_262145.f_5604[104] >= 0)
			{
				*uParam1 = Global_262145.f_5604[104];
			}
			break;
		
		case -1002763460:
			if (Global_262145.f_5604[105] >= 0)
			{
				*uParam1 = Global_262145.f_5604[105];
			}
			break;
		
		case -696930383:
			if (Global_262145.f_5604[106] >= 0)
			{
				*uParam1 = Global_262145.f_5604[106];
			}
			break;
		
		case -1530409898:
			if (Global_262145.f_5604[107] >= 0)
			{
				*uParam1 = Global_262145.f_5604[107];
			}
			break;
		
		case -2029612844:
			if (Global_262145.f_5604[108] >= 0)
			{
				*uParam1 = Global_262145.f_5604[108];
			}
			break;
		
		case 155391307:
			if (Global_262145.f_5604[109] >= 0)
			{
				*uParam1 = Global_262145.f_5604[109];
			}
			break;
		
		case 461453767:
			if (Global_262145.f_5604[110] >= 0)
			{
				*uParam1 = Global_262145.f_5604[110];
			}
			break;
		
		case 2144364744:
			if (Global_262145.f_5604[111] >= 0)
			{
				*uParam1 = Global_262145.f_5604[111];
			}
			break;
		
		case 1849574820:
			if (Global_262145.f_5604[112] >= 0)
			{
				*uParam1 = Global_262145.f_5604[112];
			}
			break;
		
		case 1543872819:
			if (Global_262145.f_5604[113] >= 0)
			{
				*uParam1 = Global_262145.f_5604[113];
			}
			break;
		
		case 1522179741:
			if (Global_262145.f_5604[114] >= 0)
			{
				*uParam1 = Global_262145.f_5604[114];
			}
			break;
		
		case -918553690:
			if (Global_262145.f_5604[115] >= 0)
			{
				*uParam1 = Global_262145.f_5604[115];
			}
			break;
		
		case -1232480710:
			if (Global_262145.f_5604[116] >= 0)
			{
				*uParam1 = Global_262145.f_5604[116];
			}
			break;
		
		case 324282147:
			if (Global_262145.f_5604[117] >= 0)
			{
				*uParam1 = Global_262145.f_5604[117];
			}
			break;
		
		case -324478539:
			if (Global_262145.f_5604[118] >= 0)
			{
				*uParam1 = Global_262145.f_5604[118];
			}
			break;
		
		case 40305969:
			if (Global_262145.f_5604[119] >= 0)
			{
				*uParam1 = Global_262145.f_5604[119];
			}
			break;
		
		case -835412575:
			if (Global_262145.f_5604[120] >= 0)
			{
				*uParam1 = Global_262145.f_5604[120];
			}
			break;
		
		case -562348498:
			if (Global_262145.f_5604[121] >= 0)
			{
				*uParam1 = Global_262145.f_5604[121];
			}
			break;
		
		case -506444584:
			if (Global_262145.f_5604[122] >= 0)
			{
				*uParam1 = Global_262145.f_5604[122];
			}
			break;
		
		case -205952854:
			if (Global_262145.f_5604[123] >= 0)
			{
				*uParam1 = Global_262145.f_5604[123];
			}
			break;
		
		case 63178943:
			if (Global_262145.f_5604[124] >= 0)
			{
				*uParam1 = Global_262145.f_5604[124];
			}
			break;
		
		case 829580944:
			if (Global_262145.f_5604[125] >= 0)
			{
				*uParam1 = Global_262145.f_5604[125];
			}
			break;
		
		case -474494180:
			if (Global_262145.f_5604[126] >= 0)
			{
				*uParam1 = Global_262145.f_5604[126];
			}
			break;
		
		case -388756986:
			if (Global_262145.f_5604[127] >= 0)
			{
				*uParam1 = Global_262145.f_5604[127];
			}
			break;
		
		case -20040198:
			if (Global_262145.f_5604[128] >= 0)
			{
				*uParam1 = Global_262145.f_5604[128];
			}
			break;
		
		case 425291872:
			if (Global_262145.f_5604[129] >= 0)
			{
				*uParam1 = Global_262145.f_5604[129];
			}
			break;
		
		case -344681321:
			if (Global_262145.f_5604[130] >= 0)
			{
				*uParam1 = Global_262145.f_5604[130];
			}
			break;
		
		case -121262279:
			if (Global_262145.f_5604[131] >= 0)
			{
				*uParam1 = Global_262145.f_5604[131];
			}
			break;
		
		case -849586073:
			if (Global_262145.f_5604[132] >= 0)
			{
				*uParam1 = Global_262145.f_5604[132];
			}
			break;
		
		case -1249117468:
			if (Global_262145.f_5604[133] >= 0)
			{
				*uParam1 = Global_262145.f_5604[133];
			}
			break;
		
		case 1408690849:
			if (Global_262145.f_5604[61] >= 0)
			{
				*uParam1 = Global_262145.f_5604[61];
			}
			break;
		
		case 1169444380:
			if (Global_262145.f_5604[62] >= 0)
			{
				*uParam1 = Global_262145.f_5604[62];
			}
			break;
		
		case 1544354513:
			if (Global_262145.f_5604[63] >= 0)
			{
				*uParam1 = Global_262145.f_5604[63];
			}
			break;
		
		case 1305108044:
			if (Global_262145.f_5604[64] >= 0)
			{
				*uParam1 = Global_262145.f_5604[64];
			}
			break;
		
		case 2098740455:
			if (Global_262145.f_5604[65] >= 0)
			{
				*uParam1 = Global_262145.f_5604[65];
			}
			break;
		
		case 1784289131:
			if (Global_262145.f_5604[66] >= 0)
			{
				*uParam1 = Global_262145.f_5604[66];
			}
			break;
		
		case -1717373444:
			if (Global_262145.f_5604[67] >= 0)
			{
				*uParam1 = Global_262145.f_5604[67];
			}
			break;
		
		case -1295243186:
			if (Global_262145.f_5604[68] >= 0)
			{
				*uParam1 = Global_262145.f_5604[68];
			}
			break;
		
		case -1509978443:
			if (Global_262145.f_5604[69] >= 0)
			{
				*uParam1 = Global_262145.f_5604[69];
			}
			break;
		
		case -818028239:
			if (Global_262145.f_5604[70] >= 0)
			{
				*uParam1 = Global_262145.f_5604[70];
			}
			break;
		
		case 1579855243:
			if (Global_262145.f_5604[71] >= 0)
			{
				*uParam1 = Global_262145.f_5604[71];
			}
			break;
		
		case -2096957641:
			if (Global_262145.f_5604[72] >= 0)
			{
				*uParam1 = Global_262145.f_5604[72];
			}
			break;
		
		case -557477635:
			if (Global_262145.f_5604[73] >= 0)
			{
				*uParam1 = Global_262145.f_5604[73];
			}
			break;
		
		case 1281387533:
			if (Global_262145.f_5604[74] >= 0)
			{
				*uParam1 = Global_262145.f_5604[74];
			}
			break;
		
		case 379977881:
			if (Global_262145.f_5604[75] >= 0)
			{
				*uParam1 = Global_262145.f_5604[75];
			}
			break;
		
		case 1641551616:
			if (Global_262145.f_5604[76] >= 0)
			{
				*uParam1 = Global_262145.f_5604[76];
			}
			break;
		
		case 1008388994:
			if (Global_262145.f_5604[77] >= 0)
			{
				*uParam1 = Global_262145.f_5604[77];
			}
			break;
		
		case 365625059:
			if (Global_262145.f_5604[78] >= 0)
			{
				*uParam1 = Global_262145.f_5604[78];
			}
			break;
		
		case -536046745:
			if (Global_262145.f_5604[79] >= 0)
			{
				*uParam1 = Global_262145.f_5604[79];
			}
			break;
		
		case 659464682:
			if (Global_262145.f_5604[80] >= 0)
			{
				*uParam1 = Global_262145.f_5604[80];
			}
			break;
		
		case 60250748:
			if (Global_262145.f_5604[81] >= 0)
			{
				*uParam1 = Global_262145.f_5604[81];
			}
			break;
		
		case -1757773384:
			if (Global_262145.f_5604[82] >= 0)
			{
				*uParam1 = Global_262145.f_5604[82];
			}
			break;
		
		case -1284137737:
			if (Global_262145.f_5604[83] >= 0)
			{
				*uParam1 = Global_262145.f_5604[83];
			}
			break;
		
		case -1767546029:
			if (Global_262145.f_5604[84] >= 0)
			{
				*uParam1 = Global_262145.f_5604[84];
			}
			break;
		
		case 1792743147:
			if (Global_262145.f_5604[85] >= 0)
			{
				*uParam1 = Global_262145.f_5604[85];
			}
			break;
		
		case 1486647918:
			if (Global_262145.f_5604[86] >= 0)
			{
				*uParam1 = Global_262145.f_5604[86];
			}
			break;
		
		case -1916019508:
			if (Global_262145.f_5604[87] >= 0)
			{
				*uParam1 = Global_262145.f_5604[87];
			}
			break;
		
		case 2097822537:
			if (Global_262145.f_5604[88] >= 0)
			{
				*uParam1 = Global_262145.f_5604[88];
			}
			break;
		
		case -1573354075:
			if (Global_262145.f_5604[89] >= 0)
			{
				*uParam1 = Global_262145.f_5604[89];
			}
			break;
		
		case -1886527408:
			if (Global_262145.f_5604[90] >= 0)
			{
				*uParam1 = Global_262145.f_5604[90];
			}
			break;
		
		case -992785702:
			if (Global_262145.f_5604[91] >= 0)
			{
				*uParam1 = Global_262145.f_5604[91];
			}
			break;
		
		case -1273648801:
			if (Global_262145.f_5604[92] >= 0)
			{
				*uParam1 = Global_262145.f_5604[92];
			}
			break;
		
		case -1012381560:
			if (Global_262145.f_5604[93] >= 0)
			{
				*uParam1 = Global_262145.f_5604[93];
			}
			break;
		
		case -1293277428:
			if (Global_262145.f_5604[94] >= 0)
			{
				*uParam1 = Global_262145.f_5604[94];
			}
			break;
		
		case -353019771:
			if (Global_262145.f_5604[95] >= 0)
			{
				*uParam1 = Global_262145.f_5604[95];
			}
			break;
		
		case 484195410:
			if (Global_262145.f_5604[96] >= 0)
			{
				*uParam1 = Global_262145.f_5604[96];
			}
			break;
		
		case -961474563:
			if (Global_262145.f_5604[97] >= 0)
			{
				*uParam1 = Global_262145.f_5604[97];
			}
			break;
		
		case -268016985:
			if (Global_262145.f_5604[98] >= 0)
			{
				*uParam1 = Global_262145.f_5604[98];
			}
			break;
		
		case -1215270468:
			if (Global_262145.f_5604[99] >= 0)
			{
				*uParam1 = Global_262145.f_5604[99];
			}
			break;
		
		case -1456220925:
			if (Global_262145.f_5604[100] >= 0)
			{
				*uParam1 = Global_262145.f_5604[100];
			}
			break;
		
		case -279906965:
			if (Global_262145.f_5604[0] >= 0)
			{
				*uParam1 = Global_262145.f_5604[0];
			}
			break;
		
		case -580562540:
			if (Global_262145.f_5604[1] >= 0)
			{
				*uParam1 = Global_262145.f_5604[1];
			}
			break;
		
		case -1176106346:
			if (Global_262145.f_5604[2] >= 0)
			{
				*uParam1 = Global_262145.f_5604[2];
			}
			break;
		
		case 679864276:
			if (Global_262145.f_5604[3] >= 0)
			{
				*uParam1 = Global_262145.f_5604[3];
			}
			break;
		
		case 583588954:
			if (Global_262145.f_5604[4] >= 0)
			{
				*uParam1 = Global_262145.f_5604[4];
			}
			break;
		
		case 286406893:
			if (Global_262145.f_5604[5] >= 0)
			{
				*uParam1 = Global_262145.f_5604[5];
			}
			break;
		
		case 17537248:
			if (Global_262145.f_5604[6] >= 0)
			{
				*uParam1 = Global_262145.f_5604[6];
			}
			break;
		
		case 1824780371:
			if (Global_262145.f_5604[7] >= 0)
			{
				*uParam1 = Global_262145.f_5604[7];
			}
			break;
		
		case 1585533902:
			if (Global_262145.f_5604[8] >= 0)
			{
				*uParam1 = Global_262145.f_5604[8];
			}
			break;
		
		case 1010896718:
			if (Global_262145.f_5604[9] >= 0)
			{
				*uParam1 = Global_262145.f_5604[9];
			}
			break;
		
		case -1768702692:
			if (Global_262145.f_5604[10] >= 0)
			{
				*uParam1 = Global_262145.f_5604[10];
			}
			break;
		
		case -1468210962:
			if (Global_262145.f_5604[11] >= 0)
			{
				*uParam1 = Global_262145.f_5604[11];
			}
			break;
		
		case -1673064831:
			if (Global_262145.f_5604[12] >= 0)
			{
				*uParam1 = Global_262145.f_5604[12];
			}
			break;
		
		case -1439716782:
			if (Global_262145.f_5604[13] >= 0)
			{
				*uParam1 = Global_262145.f_5604[13];
			}
			break;
		
		case -122402970:
			if (Global_262145.f_5604[14] >= 0)
			{
				*uParam1 = Global_262145.f_5604[14];
			}
			break;
		
		case 116253657:
			if (Global_262145.f_5604[15] >= 0)
			{
				*uParam1 = Global_262145.f_5604[15];
			}
			break;
		
		case 1673895295:
			if (Global_262145.f_5604[16] >= 0)
			{
				*uParam1 = Global_262145.f_5604[16];
			}
			break;
		
		case 1897412644:
			if (Global_262145.f_5604[17] >= 0)
			{
				*uParam1 = Global_262145.f_5604[17];
			}
			break;
		
		case -1103179152:
			if (Global_262145.f_5604[18] >= 0)
			{
				*uParam1 = Global_262145.f_5604[18];
			}
			break;
		
		case -846302961:
			if (Global_262145.f_5604[19] >= 0)
			{
				*uParam1 = Global_262145.f_5604[19];
			}
			break;
		
		case 718810029:
			if (Global_262145.f_5604[20] >= 0)
			{
				*uParam1 = Global_262145.f_5604[20];
			}
			break;
		
		case 2022950695:
			if (Global_262145.f_5604[21] >= 0)
			{
				*uParam1 = Global_262145.f_5604[21];
			}
			break;
		
		case -1574629874:
			if (Global_262145.f_5604[22] >= 0)
			{
				*uParam1 = Global_262145.f_5604[22];
			}
			break;
		
		case -1310151275:
			if (Global_262145.f_5604[23] >= 0)
			{
				*uParam1 = Global_262145.f_5604[23];
			}
			break;
		
		case -1600648456:
			if (Global_262145.f_5604[24] >= 0)
			{
				*uParam1 = Global_262145.f_5604[24];
			}
			break;
		
		case -1371593146:
			if (Global_262145.f_5604[25] >= 0)
			{
				*uParam1 = Global_262145.f_5604[25];
			}
			break;
		
		case -1123171357:
			if (Global_262145.f_5604[26] >= 0)
			{
				*uParam1 = Global_262145.f_5604[26];
			}
			break;
		
		case 1766661215:
			if (Global_262145.f_5604[27] >= 0)
			{
				*uParam1 = Global_262145.f_5604[27];
			}
			break;
		
		case 1139336374:
			if (Global_262145.f_5604[161] >= 0)
			{
				*uParam1 = Global_262145.f_5604[161];
			}
			break;
		
		case 875578693:
			if (Global_262145.f_5604[162] >= 0)
			{
				*uParam1 = Global_262145.f_5604[162];
			}
			break;
		
		case 1730325313:
			if (Global_262145.f_5604[163] >= 0)
			{
				*uParam1 = Global_262145.f_5604[163];
			}
			break;
		
		case 1481182606:
			if (Global_262145.f_5604[164] >= 0)
			{
				*uParam1 = Global_262145.f_5604[164];
			}
			break;
		
		case 2039500828:
			if (Global_262145.f_5604[165] >= 0)
			{
				*uParam1 = Global_262145.f_5604[165];
			}
			break;
		
		case -1959267497:
			if (Global_262145.f_5604[166] >= 0)
			{
				*uParam1 = Global_262145.f_5604[166];
			}
			break;
		
		case 1960625225:
			if (Global_262145.f_5604[157] >= 0)
			{
				*uParam1 = Global_262145.f_5604[157];
			}
			break;
		
		case 811809615:
			if (Global_262145.f_5604[158] >= 0)
			{
				*uParam1 = Global_262145.f_5604[158];
			}
			break;
		
		case 52093119:
			if (Global_262145.f_5604[159] >= 0)
			{
				*uParam1 = Global_262145.f_5604[159];
			}
			break;
		
		case -187939806:
			if (Global_262145.f_5604[160] >= 0)
			{
				*uParam1 = Global_262145.f_5604[160];
			}
			break;
		
		case -20173275:
			if (Global_262145.f_5604[28] >= 0)
			{
				*uParam1 = Global_262145.f_5604[28];
			}
			break;
		
		case -327317112:
			if (Global_262145.f_5604[29] >= 0)
			{
				*uParam1 = Global_262145.f_5604[29];
			}
			break;
		
		case -766683864:
			if (Global_262145.f_5604[30] >= 0)
			{
				*uParam1 = Global_262145.f_5604[30];
			}
			break;
		
		case 1342754977:
			if (Global_262145.f_5604[31] >= 0)
			{
				*uParam1 = Global_262145.f_5604[31];
			}
			break;
		
		case 1171373107:
			if (Global_262145.f_5604[32] >= 0)
			{
				*uParam1 = Global_262145.f_5604[32];
			}
			break;
		
		case 732334045:
			if (Global_262145.f_5604[33] >= 0)
			{
				*uParam1 = Global_262145.f_5604[33];
			}
			break;
		
		case 424076058:
			if (Global_262145.f_5604[34] >= 0)
			{
				*uParam1 = Global_262145.f_5604[34];
			}
			break;
		
		case -1683855405:
			if (Global_262145.f_5604[35] >= 0)
			{
				*uParam1 = Global_262145.f_5604[35];
			}
			break;
		
		case 1511098074:
			if (Global_262145.f_5604[36] >= 0)
			{
				*uParam1 = Global_262145.f_5604[36];
			}
			break;
		
		case -1725856511:
			if (Global_262145.f_5604[37] >= 0)
			{
				*uParam1 = Global_262145.f_5604[37];
			}
			break;
		
		case -740492681:
			if (Global_262145.f_5604[38] >= 0)
			{
				*uParam1 = Global_262145.f_5604[38];
			}
			break;
		
		case -995140580:
			if (Global_262145.f_5604[39] >= 0)
			{
				*uParam1 = Global_262145.f_5604[39];
			}
			break;
		
		case -286412648:
			if (Global_262145.f_5604[40] >= 0)
			{
				*uParam1 = Global_262145.f_5604[40];
			}
			break;
		
		case 205384504:
			if (Global_262145.f_5604[41] >= 0)
			{
				*uParam1 = Global_262145.f_5604[41];
			}
			break;
		
		case -26980475:
			if (Global_262145.f_5604[42] >= 0)
			{
				*uParam1 = Global_262145.f_5604[42];
			}
			break;
		
		case 671064767:
			if (Global_262145.f_5604[43] >= 0)
			{
				*uParam1 = Global_262145.f_5604[43];
			}
			break;
		
		case -1677060726:
			if (Global_262145.f_5604[45] >= 0)
			{
				*uParam1 = Global_262145.f_5604[45];
			}
			break;
		
		case -1229305110:
			if (Global_262145.f_5604[46] >= 0)
			{
				*uParam1 = Global_262145.f_5604[46];
			}
			break;
		
		case 2034552832:
			if (Global_262145.f_5604[47] >= 0)
			{
				*uParam1 = Global_262145.f_5604[47];
			}
			break;
		
		case -1406224941:
			if (Global_262145.f_5604[48] >= 0)
			{
				*uParam1 = Global_262145.f_5604[48];
			}
			break;
		
		case 1425180508:
			if (Global_262145.f_5604[49] >= 0)
			{
				*uParam1 = Global_262145.f_5604[49];
			}
			break;
		
		case -1883177736:
			if (Global_262145.f_5604[50] >= 0)
			{
				*uParam1 = Global_262145.f_5604[50];
			}
			break;
		
		case -1402597262:
			if (Global_262145.f_5604[51] >= 0)
			{
				*uParam1 = Global_262145.f_5604[51];
			}
			break;
		
		case 538539991:
			if (Global_262145.f_5604[52] >= 0)
			{
				*uParam1 = Global_262145.f_5604[52];
			}
			break;
		
		case 165366619:
			if (Global_262145.f_5604[53] >= 0)
			{
				*uParam1 = Global_262145.f_5604[53];
			}
			break;
		
		case 1757514026:
			if (Global_262145.f_5604[54] >= 0)
			{
				*uParam1 = Global_262145.f_5604[54];
			}
			break;
		
		case -707828904:
			if (Global_262145.f_5604[55] >= 0)
			{
				*uParam1 = Global_262145.f_5604[55];
			}
			break;
		
		case -990527067:
			if (Global_262145.f_5604[56] >= 0)
			{
				*uParam1 = Global_262145.f_5604[56];
			}
			break;
		
		case -1238096862:
			if (Global_262145.f_5604[57] >= 0)
			{
				*uParam1 = Global_262145.f_5604[57];
			}
			break;
		
		case 838474652:
			if (Global_262145.f_5604[58] >= 0)
			{
				*uParam1 = Global_262145.f_5604[58];
			}
			break;
		
		case -1190920460:
			if (Global_262145.f_5604[59] >= 0)
			{
				*uParam1 = Global_262145.f_5604[59];
			}
			break;
		
		case -335321858:
			if (Global_262145.f_5604[60] >= 0)
			{
				*uParam1 = Global_262145.f_5604[60];
			}
			break;
		
		case -1157702415:
			if (Global_262145.f_5604[134] >= 0)
			{
				*uParam1 = Global_262145.f_5604[134];
			}
			break;
		
		case 85815597:
			if (Global_262145.f_5604[135] >= 0)
			{
				*uParam1 = Global_262145.f_5604[135];
			}
			break;
		
		case -1754589750:
			if (Global_262145.f_5604[136] >= 0)
			{
				*uParam1 = Global_262145.f_5604[136];
			}
			break;
		
		case 332598944:
			if (Global_262145.f_5604[137] >= 0)
			{
				*uParam1 = Global_262145.f_5604[137];
			}
			break;
		
		case -2120914397:
			if (Global_262145.f_5604[138] >= 0)
			{
				*uParam1 = Global_262145.f_5604[138];
			}
			break;
		
		case 1857766511:
			if (Global_262145.f_5604[139] >= 0)
			{
				*uParam1 = Global_262145.f_5604[139];
			}
			break;
		
		case 1584374744:
			if (Global_262145.f_5604[140] >= 0)
			{
				*uParam1 = Global_262145.f_5604[140];
			}
			break;
		
		case 1527684374:
			if (Global_262145.f_5604[141] >= 0)
			{
				*uParam1 = Global_262145.f_5604[141];
			}
			break;
		
		case -915998259:
			if (Global_262145.f_5604[142] >= 0)
			{
				*uParam1 = Global_262145.f_5604[142];
			}
			break;
		
		case -1229400975:
			if (Global_262145.f_5604[143] >= 0)
			{
				*uParam1 = Global_262145.f_5604[143];
			}
			break;
		
		case 67406037:
			if (Global_262145.f_5604[144] >= 0)
			{
				*uParam1 = Global_262145.f_5604[144];
			}
			break;
		
		case 1536178155:
			if (Global_262145.f_5604[145] >= 0)
			{
				*uParam1 = Global_262145.f_5604[145];
			}
			break;
		
		case 1767297912:
			if (Global_262145.f_5604[146] >= 0)
			{
				*uParam1 = Global_262145.f_5604[146];
			}
			break;
		
		case 1054637700:
			if (Global_262145.f_5604[147] >= 0)
			{
				*uParam1 = Global_262145.f_5604[147];
			}
			break;
		
		case 1288444515:
			if (Global_262145.f_5604[148] >= 0)
			{
				*uParam1 = Global_262145.f_5604[148];
			}
			break;
		
		case -1522447504:
			if (Global_262145.f_5604[149] >= 0)
			{
				*uParam1 = Global_262145.f_5604[149];
			}
			break;
		
		case -1752780805:
			if (Global_262145.f_5604[150] >= 0)
			{
				*uParam1 = Global_262145.f_5604[150];
			}
			break;
		
		case -1061879209:
			if (Global_262145.f_5604[151] >= 0)
			{
				*uParam1 = Global_262145.f_5604[151];
			}
			break;
		
		case -1293326656:
			if (Global_262145.f_5604[152] >= 0)
			{
				*uParam1 = Global_262145.f_5604[152];
			}
			break;
		
		case 2117040061:
			if (Global_262145.f_5604[153] >= 0)
			{
				*uParam1 = Global_262145.f_5604[153];
			}
			break;
		
		case 1810420528:
			if (Global_262145.f_5604[154] >= 0)
			{
				*uParam1 = Global_262145.f_5604[154];
			}
			break;
		
		case -1462809348:
			if (Global_262145.f_5604[155] >= 0)
			{
				*uParam1 = Global_262145.f_5604[155];
			}
			break;
		
		case -182260974:
			if (Global_262145.f_5604[156] >= 0)
			{
				*uParam1 = Global_262145.f_5604[156];
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("CLO_HP_F_F_0_0"):
			if (Global_262145.f_5604[167] >= 0)
			{
				*uParam1 = Global_262145.f_5604[167];
			}
			break;
		
		case joaat("CLO_HP_F_F_0_1"):
			if (Global_262145.f_5604[168] >= 0)
			{
				*uParam1 = Global_262145.f_5604[168];
			}
			break;
		
		case joaat("CLO_HP_F_F_0_2"):
			if (Global_262145.f_5604[169] >= 0)
			{
				*uParam1 = Global_262145.f_5604[169];
			}
			break;
		
		case joaat("CLO_HP_F_F_0_3"):
			if (Global_262145.f_5604[170] >= 0)
			{
				*uParam1 = Global_262145.f_5604[170];
			}
			break;
		
		case joaat("CLO_HP_F_F_0_4"):
			if (Global_262145.f_5604[171] >= 0)
			{
				*uParam1 = Global_262145.f_5604[171];
			}
			break;
		
		case joaat("CLO_HP_F_F_0_5"):
			if (Global_262145.f_5604[172] >= 0)
			{
				*uParam1 = Global_262145.f_5604[172];
			}
			break;
		
		case joaat("CLO_HP_F_F_0_6"):
			if (Global_262145.f_5604[173] >= 0)
			{
				*uParam1 = Global_262145.f_5604[173];
			}
			break;
		
		case joaat("CLO_HP_F_F_0_7"):
			if (Global_262145.f_5604[174] >= 0)
			{
				*uParam1 = Global_262145.f_5604[174];
			}
			break;
		
		case joaat("CLO_HP_F_F_0_8"):
			if (Global_262145.f_5604[175] >= 0)
			{
				*uParam1 = Global_262145.f_5604[175];
			}
			break;
		
		case joaat("CLO_HP_F_F_0_9"):
			if (Global_262145.f_5604[176] >= 0)
			{
				*uParam1 = Global_262145.f_5604[176];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_0"):
			if (Global_262145.f_5604[177] >= 0)
			{
				*uParam1 = Global_262145.f_5604[177];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_1"):
			if (Global_262145.f_5604[178] >= 0)
			{
				*uParam1 = Global_262145.f_5604[178];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_2"):
			if (Global_262145.f_5604[179] >= 0)
			{
				*uParam1 = Global_262145.f_5604[179];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_3"):
			if (Global_262145.f_5604[180] >= 0)
			{
				*uParam1 = Global_262145.f_5604[180];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_4"):
			if (Global_262145.f_5604[181] >= 0)
			{
				*uParam1 = Global_262145.f_5604[181];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_5"):
			if (Global_262145.f_5604[182] >= 0)
			{
				*uParam1 = Global_262145.f_5604[182];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_6"):
			if (Global_262145.f_5604[183] >= 0)
			{
				*uParam1 = Global_262145.f_5604[183];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_7"):
			if (Global_262145.f_5604[184] >= 0)
			{
				*uParam1 = Global_262145.f_5604[184];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_8"):
			if (Global_262145.f_5604[185] >= 0)
			{
				*uParam1 = Global_262145.f_5604[185];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_9"):
			if (Global_262145.f_5604[186] >= 0)
			{
				*uParam1 = Global_262145.f_5604[186];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_10"):
			if (Global_262145.f_5604[187] >= 0)
			{
				*uParam1 = Global_262145.f_5604[187];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_11"):
			if (Global_262145.f_5604[188] >= 0)
			{
				*uParam1 = Global_262145.f_5604[188];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_12"):
			if (Global_262145.f_5604[189] >= 0)
			{
				*uParam1 = Global_262145.f_5604[189];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_13"):
			if (Global_262145.f_5604[190] >= 0)
			{
				*uParam1 = Global_262145.f_5604[190];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_14"):
			if (Global_262145.f_5604[191] >= 0)
			{
				*uParam1 = Global_262145.f_5604[191];
			}
			break;
		
		case joaat("CLO_HP_F_F_1_15"):
			if (Global_262145.f_5604[192] >= 0)
			{
				*uParam1 = Global_262145.f_5604[192];
			}
			break;
		
		case joaat("CLO_HP_F_G_0_0"):
			if (Global_262145.f_5604[193] >= 0)
			{
				*uParam1 = Global_262145.f_5604[193];
			}
			break;
		
		case joaat("CLO_HP_F_G_0_1"):
			if (Global_262145.f_5604[194] >= 0)
			{
				*uParam1 = Global_262145.f_5604[194];
			}
			break;
		
		case joaat("CLO_HP_F_G_0_2"):
			if (Global_262145.f_5604[195] >= 0)
			{
				*uParam1 = Global_262145.f_5604[195];
			}
			break;
		
		case joaat("CLO_HP_F_G_0_3"):
			if (Global_262145.f_5604[196] >= 0)
			{
				*uParam1 = Global_262145.f_5604[196];
			}
			break;
		
		case joaat("CLO_HP_F_G_0_4"):
			if (Global_262145.f_5604[197] >= 0)
			{
				*uParam1 = Global_262145.f_5604[197];
			}
			break;
		
		case joaat("CLO_HP_F_G_0_5"):
			if (Global_262145.f_5604[198] >= 0)
			{
				*uParam1 = Global_262145.f_5604[198];
			}
			break;
		
		case joaat("CLO_HP_F_G_0_6"):
			if (Global_262145.f_5604[199] >= 0)
			{
				*uParam1 = Global_262145.f_5604[199];
			}
			break;
		
		case joaat("CLO_HP_F_G_0_7"):
			if (Global_262145.f_5604[200] >= 0)
			{
				*uParam1 = Global_262145.f_5604[200];
			}
			break;
		
		case joaat("CLO_HP_F_G_1_0"):
			if (Global_262145.f_5604[201] >= 0)
			{
				*uParam1 = Global_262145.f_5604[201];
			}
			break;
		
		case joaat("CLO_HP_F_G_1_1"):
			if (Global_262145.f_5604[202] >= 0)
			{
				*uParam1 = Global_262145.f_5604[202];
			}
			break;
		
		case joaat("CLO_HP_F_G_1_2"):
			if (Global_262145.f_5604[203] >= 0)
			{
				*uParam1 = Global_262145.f_5604[203];
			}
			break;
		
		case joaat("CLO_HP_F_G_1_3"):
			if (Global_262145.f_5604[204] >= 0)
			{
				*uParam1 = Global_262145.f_5604[204];
			}
			break;
		
		case joaat("CLO_HP_F_G_1_4"):
			if (Global_262145.f_5604[205] >= 0)
			{
				*uParam1 = Global_262145.f_5604[205];
			}
			break;
		
		case joaat("CLO_HP_F_G_1_5"):
			if (Global_262145.f_5604[206] >= 0)
			{
				*uParam1 = Global_262145.f_5604[206];
			}
			break;
		
		case joaat("CLO_HP_F_G_1_6"):
			if (Global_262145.f_5604[207] >= 0)
			{
				*uParam1 = Global_262145.f_5604[207];
			}
			break;
		
		case joaat("CLO_HP_F_G_1_7"):
			if (Global_262145.f_5604[208] >= 0)
			{
				*uParam1 = Global_262145.f_5604[208];
			}
			break;
		
		case joaat("CLO_HP_F_H_0_0"):
			if (Global_262145.f_5604[210] >= 0)
			{
				*uParam1 = Global_262145.f_5604[210];
			}
			break;
		
		case joaat("CLO_HP_F_H_0_1"):
			if (Global_262145.f_5604[211] >= 0)
			{
				*uParam1 = Global_262145.f_5604[211];
			}
			break;
		
		case joaat("CLO_HP_F_H_0_2"):
			if (Global_262145.f_5604[212] >= 0)
			{
				*uParam1 = Global_262145.f_5604[212];
			}
			break;
		
		case joaat("CLO_HP_F_H_0_3"):
			if (Global_262145.f_5604[213] >= 0)
			{
				*uParam1 = Global_262145.f_5604[213];
			}
			break;
		
		case joaat("CLO_HP_F_H_0_4"):
			if (Global_262145.f_5604[214] >= 0)
			{
				*uParam1 = Global_262145.f_5604[214];
			}
			break;
		
		case joaat("CLO_HP_F_H_0_5"):
			if (Global_262145.f_5604[215] >= 0)
			{
				*uParam1 = Global_262145.f_5604[215];
			}
			break;
		
		case joaat("CLO_HP_F_H_0_6"):
			if (Global_262145.f_5604[216] >= 0)
			{
				*uParam1 = Global_262145.f_5604[216];
			}
			break;
		
		case joaat("CLO_HP_F_H_0_7"):
			if (Global_262145.f_5604[217] >= 0)
			{
				*uParam1 = Global_262145.f_5604[217];
			}
			break;
		
		case joaat("CLO_HP_F_H_1_0"):
			if (Global_262145.f_5604[218] >= 0)
			{
				*uParam1 = Global_262145.f_5604[218];
			}
			break;
		
		case joaat("CLO_HP_F_H_1_1"):
			if (Global_262145.f_5604[219] >= 0)
			{
				*uParam1 = Global_262145.f_5604[219];
			}
			break;
		
		case joaat("CLO_HP_F_H_1_2"):
			if (Global_262145.f_5604[220] >= 0)
			{
				*uParam1 = Global_262145.f_5604[220];
			}
			break;
		
		case joaat("CLO_HP_F_H_1_3"):
			if (Global_262145.f_5604[221] >= 0)
			{
				*uParam1 = Global_262145.f_5604[221];
			}
			break;
		
		case joaat("CLO_HP_F_H_1_4"):
			if (Global_262145.f_5604[222] >= 0)
			{
				*uParam1 = Global_262145.f_5604[222];
			}
			break;
		
		case joaat("CLO_HP_F_L_0_0"):
			if (Global_262145.f_5604[223] >= 0)
			{
				*uParam1 = Global_262145.f_5604[223];
			}
			break;
		
		case joaat("CLO_HP_F_L_0_1"):
			if (Global_262145.f_5604[224] >= 0)
			{
				*uParam1 = Global_262145.f_5604[224];
			}
			break;
		
		case joaat("CLO_HP_F_L_0_2"):
			if (Global_262145.f_5604[225] >= 0)
			{
				*uParam1 = Global_262145.f_5604[225];
			}
			break;
		
		case joaat("CLO_HP_F_L_0_3"):
			if (Global_262145.f_5604[226] >= 0)
			{
				*uParam1 = Global_262145.f_5604[226];
			}
			break;
		
		case joaat("CLO_HP_F_L_0_4"):
			if (Global_262145.f_5604[227] >= 0)
			{
				*uParam1 = Global_262145.f_5604[227];
			}
			break;
		
		case joaat("CLO_HP_F_L_0_5"):
			if (Global_262145.f_5604[228] >= 0)
			{
				*uParam1 = Global_262145.f_5604[228];
			}
			break;
		
		case joaat("CLO_HP_F_L_0_6"):
			if (Global_262145.f_5604[229] >= 0)
			{
				*uParam1 = Global_262145.f_5604[229];
			}
			break;
		
		case joaat("CLO_HP_F_L_0_7"):
			if (Global_262145.f_5604[230] >= 0)
			{
				*uParam1 = Global_262145.f_5604[230];
			}
			break;
		
		case joaat("CLO_HP_F_L_0_8"):
			if (Global_262145.f_5604[231] >= 0)
			{
				*uParam1 = Global_262145.f_5604[231];
			}
			break;
		
		case joaat("CLO_HP_F_L_0_9"):
			if (Global_262145.f_5604[232] >= 0)
			{
				*uParam1 = Global_262145.f_5604[232];
			}
			break;
		
		case joaat("CLO_HP_F_L_0_10"):
			if (Global_262145.f_5604[233] >= 0)
			{
				*uParam1 = Global_262145.f_5604[233];
			}
			break;
		
		case joaat("CLO_HP_F_L_0_11"):
			if (Global_262145.f_5604[234] >= 0)
			{
				*uParam1 = Global_262145.f_5604[234];
			}
			break;
		
		case joaat("CLO_HP_F_L_0_12"):
			if (Global_262145.f_5604[235] >= 0)
			{
				*uParam1 = Global_262145.f_5604[235];
			}
			break;
		
		case joaat("CLO_HP_F_L_1_0"):
			if (Global_262145.f_5604[236] >= 0)
			{
				*uParam1 = Global_262145.f_5604[236];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_0"):
			if (Global_262145.f_5604[237] >= 0)
			{
				*uParam1 = Global_262145.f_5604[237];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_1"):
			if (Global_262145.f_5604[238] >= 0)
			{
				*uParam1 = Global_262145.f_5604[238];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_2"):
			if (Global_262145.f_5604[239] >= 0)
			{
				*uParam1 = Global_262145.f_5604[239];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_3"):
			if (Global_262145.f_5604[240] >= 0)
			{
				*uParam1 = Global_262145.f_5604[240];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_4"):
			if (Global_262145.f_5604[241] >= 0)
			{
				*uParam1 = Global_262145.f_5604[241];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_5"):
			if (Global_262145.f_5604[242] >= 0)
			{
				*uParam1 = Global_262145.f_5604[242];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_6"):
			if (Global_262145.f_5604[243] >= 0)
			{
				*uParam1 = Global_262145.f_5604[243];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_7"):
			if (Global_262145.f_5604[244] >= 0)
			{
				*uParam1 = Global_262145.f_5604[244];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_8"):
			if (Global_262145.f_5604[245] >= 0)
			{
				*uParam1 = Global_262145.f_5604[245];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_9"):
			if (Global_262145.f_5604[246] >= 0)
			{
				*uParam1 = Global_262145.f_5604[246];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_10"):
			if (Global_262145.f_5604[247] >= 0)
			{
				*uParam1 = Global_262145.f_5604[247];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_11"):
			if (Global_262145.f_5604[248] >= 0)
			{
				*uParam1 = Global_262145.f_5604[248];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_12"):
			if (Global_262145.f_5604[249] >= 0)
			{
				*uParam1 = Global_262145.f_5604[249];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_13"):
			if (Global_262145.f_5604[250] >= 0)
			{
				*uParam1 = Global_262145.f_5604[250];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_14"):
			if (Global_262145.f_5604[251] >= 0)
			{
				*uParam1 = Global_262145.f_5604[251];
			}
			break;
		
		case joaat("CLO_HP_F_L_2_15"):
			if (Global_262145.f_5604[252] >= 0)
			{
				*uParam1 = Global_262145.f_5604[252];
			}
			break;
		
		case joaat("CLO_HP_F_U_0_0"):
			if (Global_262145.f_5604[253] >= 0)
			{
				*uParam1 = Global_262145.f_5604[253];
			}
			break;
		
		case joaat("CLO_HP_F_U_0_1"):
			if (Global_262145.f_5604[254] >= 0)
			{
				*uParam1 = Global_262145.f_5604[254];
			}
			break;
		
		case joaat("CLO_HP_F_U_0_2"):
			if (Global_262145.f_5604[255] >= 0)
			{
				*uParam1 = Global_262145.f_5604[255];
			}
			break;
		
		case joaat("CLO_HP_F_U_0_3"):
			if (Global_262145.f_5604[256] >= 0)
			{
				*uParam1 = Global_262145.f_5604[256];
			}
			break;
		
		case joaat("CLO_HP_F_U_0_4"):
			if (Global_262145.f_5604[257] >= 0)
			{
				*uParam1 = Global_262145.f_5604[257];
			}
			break;
		
		case joaat("CLO_HP_F_U_0_5"):
			if (Global_262145.f_5604[258] >= 0)
			{
				*uParam1 = Global_262145.f_5604[258];
			}
			break;
		
		case joaat("CLO_HP_F_U_0_6"):
			if (Global_262145.f_5604[259] >= 0)
			{
				*uParam1 = Global_262145.f_5604[259];
			}
			break;
		
		case joaat("CLO_HP_F_U_1_0"):
			if (Global_262145.f_5604[260] >= 0)
			{
				*uParam1 = Global_262145.f_5604[260];
			}
			break;
		
		case joaat("CLO_HP_F_U_1_1"):
			if (Global_262145.f_5604[261] >= 0)
			{
				*uParam1 = Global_262145.f_5604[261];
			}
			break;
		
		case joaat("CLO_HP_F_U_1_2"):
			if (Global_262145.f_5604[262] >= 0)
			{
				*uParam1 = Global_262145.f_5604[262];
			}
			break;
		
		case joaat("CLO_HP_F_U_2_0"):
			if (Global_262145.f_5604[263] >= 0)
			{
				*uParam1 = Global_262145.f_5604[263];
			}
			break;
		
		case joaat("CLO_HP_F_U_2_1"):
			if (Global_262145.f_5604[264] >= 0)
			{
				*uParam1 = Global_262145.f_5604[264];
			}
			break;
		
		case joaat("CLO_HP_F_U_2_2"):
			if (Global_262145.f_5604[265] >= 0)
			{
				*uParam1 = Global_262145.f_5604[265];
			}
			break;
		
		case joaat("CLO_HP_F_U_2_3"):
			if (Global_262145.f_5604[266] >= 0)
			{
				*uParam1 = Global_262145.f_5604[266];
			}
			break;
		
		case joaat("CLO_HP_F_U_2_4"):
			if (Global_262145.f_5604[267] >= 0)
			{
				*uParam1 = Global_262145.f_5604[267];
			}
			break;
		
		case joaat("CLO_HP_F_U_2_5"):
			if (Global_262145.f_5604[268] >= 0)
			{
				*uParam1 = Global_262145.f_5604[268];
			}
			break;
		
		case joaat("CLO_HP_F_U_2_6"):
			if (Global_262145.f_5604[269] >= 0)
			{
				*uParam1 = Global_262145.f_5604[269];
			}
			break;
		
		case joaat("CLO_HP_F_U_2_7"):
			if (Global_262145.f_5604[270] >= 0)
			{
				*uParam1 = Global_262145.f_5604[270];
			}
			break;
		
		case joaat("CLO_HP_F_U_2_8"):
			if (Global_262145.f_5604[271] >= 0)
			{
				*uParam1 = Global_262145.f_5604[271];
			}
			break;
		
		case joaat("CLO_HP_F_U_3_0"):
			if (Global_262145.f_5604[272] >= 0)
			{
				*uParam1 = Global_262145.f_5604[272];
			}
			break;
		
		case joaat("CLO_HP_F_U_4_0"):
			if (Global_262145.f_5604[273] >= 0)
			{
				*uParam1 = Global_262145.f_5604[273];
			}
			break;
		
		case joaat("CLO_HP_F_U_4_1"):
			if (Global_262145.f_5604[274] >= 0)
			{
				*uParam1 = Global_262145.f_5604[274];
			}
			break;
		
		case joaat("CLO_HP_F_U_4_2"):
			if (Global_262145.f_5604[275] >= 0)
			{
				*uParam1 = Global_262145.f_5604[275];
			}
			break;
		
		case joaat("CLO_HP_F_U_4_3"):
			if (Global_262145.f_5604[276] >= 0)
			{
				*uParam1 = Global_262145.f_5604[276];
			}
			break;
		
		case joaat("CLO_HP_F_U_4_4"):
			if (Global_262145.f_5604[277] >= 0)
			{
				*uParam1 = Global_262145.f_5604[277];
			}
			break;
		
		case joaat("CLO_HP_F_U_4_5"):
			if (Global_262145.f_5604[278] >= 0)
			{
				*uParam1 = Global_262145.f_5604[278];
			}
			break;
		
		case joaat("CLO_HP_F_U_4_6"):
			if (Global_262145.f_5604[279] >= 0)
			{
				*uParam1 = Global_262145.f_5604[279];
			}
			break;
		
		case joaat("CLO_HP_F_U_4_7"):
			if (Global_262145.f_5604[280] >= 0)
			{
				*uParam1 = Global_262145.f_5604[280];
			}
			break;
		
		case joaat("CLO_HP_F_U_4_8"):
			if (Global_262145.f_5604[281] >= 0)
			{
				*uParam1 = Global_262145.f_5604[281];
			}
			break;
		
		case joaat("CLO_HP_F_U_4_9"):
			if (Global_262145.f_5604[282] >= 0)
			{
				*uParam1 = Global_262145.f_5604[282];
			}
			break;
		
		case joaat("CLO_HP_F_U_4_10"):
			if (Global_262145.f_5604[283] >= 0)
			{
				*uParam1 = Global_262145.f_5604[283];
			}
			break;
		
		case joaat("CLO_HP_F_U_4_11"):
			if (Global_262145.f_5604[284] >= 0)
			{
				*uParam1 = Global_262145.f_5604[284];
			}
			break;
		
		case joaat("CLO_HP_F_U_5_0"):
			if (Global_262145.f_5604[285] >= 0)
			{
				*uParam1 = Global_262145.f_5604[285];
			}
			break;
		
		case joaat("CLO_HP_F_U_5_1"):
			if (Global_262145.f_5604[286] >= 0)
			{
				*uParam1 = Global_262145.f_5604[286];
			}
			break;
		
		case joaat("CLO_HP_F_U_5_2"):
			if (Global_262145.f_5604[287] >= 0)
			{
				*uParam1 = Global_262145.f_5604[287];
			}
			break;
		
		case joaat("CLO_HP_F_U_5_3"):
			if (Global_262145.f_5604[288] >= 0)
			{
				*uParam1 = Global_262145.f_5604[288];
			}
			break;
		
		case joaat("CLO_HP_F_U_5_4"):
			if (Global_262145.f_5604[289] >= 0)
			{
				*uParam1 = Global_262145.f_5604[289];
			}
			break;
		
		case joaat("CLO_HP_F_U_6_0"):
			if (Global_262145.f_5604[290] >= 0)
			{
				*uParam1 = Global_262145.f_5604[290];
			}
			break;
		
		case joaat("CLO_HP_F_U_6_1"):
			if (Global_262145.f_5604[291] >= 0)
			{
				*uParam1 = Global_262145.f_5604[291];
			}
			break;
		
		case joaat("CLO_HP_F_U_6_2"):
			if (Global_262145.f_5604[292] >= 0)
			{
				*uParam1 = Global_262145.f_5604[292];
			}
			break;
		
		case joaat("CLO_HP_F_U_6_3"):
			if (Global_262145.f_5604[293] >= 0)
			{
				*uParam1 = Global_262145.f_5604[293];
			}
			break;
		
		case joaat("CLO_HP_F_U_6_4"):
			if (Global_262145.f_5604[294] >= 0)
			{
				*uParam1 = Global_262145.f_5604[294];
			}
			break;
		
		case joaat("CLO_HP_F_U_6_5"):
			if (Global_262145.f_5604[295] >= 0)
			{
				*uParam1 = Global_262145.f_5604[295];
			}
			break;
		
		case joaat("CLO_HP_F_D_0"):
			if (Global_262145.f_5604[296] >= 0)
			{
				*uParam1 = Global_262145.f_5604[296];
			}
			break;
		
		case joaat("CLO_HP_F_D_1"):
			if (Global_262145.f_5604[297] >= 0)
			{
				*uParam1 = Global_262145.f_5604[297];
			}
			break;
		
		case joaat("CLO_HP_F_D_2"):
			if (Global_262145.f_5604[298] >= 0)
			{
				*uParam1 = Global_262145.f_5604[298];
			}
			break;
		
		case joaat("CLO_HP_F_D_3"):
			if (Global_262145.f_5604[299] >= 0)
			{
				*uParam1 = Global_262145.f_5604[299];
			}
			break;
		
		case joaat("CLO_HP_F_D_4"):
			if (Global_262145.f_5604[300] >= 0)
			{
				*uParam1 = Global_262145.f_5604[300];
			}
			break;
		
		case joaat("CLO_HP_F_D_5"):
			if (Global_262145.f_5604[301] >= 0)
			{
				*uParam1 = Global_262145.f_5604[301];
			}
			break;
		
		case joaat("CLO_HP_F_D_6"):
			if (Global_262145.f_5604[302] >= 0)
			{
				*uParam1 = Global_262145.f_5604[302];
			}
			break;
		
		case joaat("CLO_HP_F_D_7"):
			if (Global_262145.f_5604[303] >= 0)
			{
				*uParam1 = Global_262145.f_5604[303];
			}
			break;
		
		case joaat("CLO_HP_F_D_8"):
			if (Global_262145.f_5604[304] >= 0)
			{
				*uParam1 = Global_262145.f_5604[304];
			}
			break;
		
		case joaat("CLO_HP_F_D_9"):
			if (Global_262145.f_5604[305] >= 0)
			{
				*uParam1 = Global_262145.f_5604[305];
			}
			break;
		
		case joaat("CLO_HP_F_D_11"):
			if (Global_262145.f_5604[306] >= 0)
			{
				*uParam1 = Global_262145.f_5604[306];
			}
			break;
		
		case joaat("CLO_HP_F_D_12"):
			if (Global_262145.f_5604[307] >= 0)
			{
				*uParam1 = Global_262145.f_5604[307];
			}
			break;
		
		case joaat("CLO_HP_F_D_13"):
			if (Global_262145.f_5604[308] >= 0)
			{
				*uParam1 = Global_262145.f_5604[308];
			}
			break;
		
		case joaat("CLO_HP_F_D_14"):
			if (Global_262145.f_5604[309] >= 0)
			{
				*uParam1 = Global_262145.f_5604[309];
			}
			break;
		
		case joaat("CLO_HP_F_D_15"):
			if (Global_262145.f_5604[310] >= 0)
			{
				*uParam1 = Global_262145.f_5604[310];
			}
			break;
		
		case joaat("CLO_HP_F_D_16"):
			if (Global_262145.f_5604[311] >= 0)
			{
				*uParam1 = Global_262145.f_5604[311];
			}
			break;
		
		case joaat("CLO_HP_F_D_17"):
			if (Global_262145.f_5604[312] >= 0)
			{
				*uParam1 = Global_262145.f_5604[312];
			}
			break;
		
		case joaat("CLO_HP_F_D_18"):
			if (Global_262145.f_5604[313] >= 0)
			{
				*uParam1 = Global_262145.f_5604[313];
			}
			break;
		
		case joaat("CLO_HP_F_D_19"):
			if (Global_262145.f_5604[314] >= 0)
			{
				*uParam1 = Global_262145.f_5604[314];
			}
			break;
		
		case joaat("CLO_HP_F_D_20"):
			if (Global_262145.f_5604[315] >= 0)
			{
				*uParam1 = Global_262145.f_5604[315];
			}
			break;
		
		case joaat("CLO_HP_F_D_21"):
			if (Global_262145.f_5604[316] >= 0)
			{
				*uParam1 = Global_262145.f_5604[316];
			}
			break;
		
		case joaat("CLO_HP_F_D_22"):
			if (Global_262145.f_5604[317] >= 0)
			{
				*uParam1 = Global_262145.f_5604[317];
			}
			break;
		
		case joaat("CLO_HP_F_D_10"):
			if (Global_262145.f_5604[318] >= 0)
			{
				*uParam1 = Global_262145.f_5604[318];
			}
			break;
		
		case joaat("CLO_HP_F_T_0_0"):
			if (Global_262145.f_5604[319] >= 0)
			{
				*uParam1 = Global_262145.f_5604[319];
			}
			break;
		
		case joaat("CLO_HP_F_T_0_1"):
			if (Global_262145.f_5604[320] >= 0)
			{
				*uParam1 = Global_262145.f_5604[320];
			}
			break;
		
		case joaat("CLO_HP_F_T_0_2"):
			if (Global_262145.f_5604[321] >= 0)
			{
				*uParam1 = Global_262145.f_5604[321];
			}
			break;
		
		case joaat("CLO_HP_F_T_0_3"):
			if (Global_262145.f_5604[322] >= 0)
			{
				*uParam1 = Global_262145.f_5604[322];
			}
			break;
		
		case joaat("CLO_HP_F_T_1_0"):
			if (Global_262145.f_5604[323] >= 0)
			{
				*uParam1 = Global_262145.f_5604[323];
			}
			break;
		
		case joaat("CLO_HP_F_T_1_1"):
			if (Global_262145.f_5604[324] >= 0)
			{
				*uParam1 = Global_262145.f_5604[324];
			}
			break;
		
		case joaat("CLO_HP_F_T_1_2"):
			if (Global_262145.f_5604[325] >= 0)
			{
				*uParam1 = Global_262145.f_5604[325];
			}
			break;
		
		case joaat("CLO_HP_F_T_1_3"):
			if (Global_262145.f_5604[326] >= 0)
			{
				*uParam1 = Global_262145.f_5604[326];
			}
			break;
		
		case joaat("CLO_HP_F_T_1_4"):
			if (Global_262145.f_5604[327] >= 0)
			{
				*uParam1 = Global_262145.f_5604[327];
			}
			break;
	}
	switch (iParam0)
	{
		case 573181452:
			if (Global_262145.f_6033 >= 0)
			{
				*uParam1 = Global_262145.f_6033;
			}
			break;
		
		case -1871025493:
			if (Global_262145.f_6034 >= 0)
			{
				*uParam1 = Global_262145.f_6034;
			}
			break;
		
		case 401083057:
			if (Global_262145.f_6035 >= 0)
			{
				*uParam1 = Global_262145.f_6035;
			}
			break;
		
		case -1258011389:
			if (Global_262145.f_6036 >= 0)
			{
				*uParam1 = Global_262145.f_6036;
			}
			break;
		
		case -1520420552:
			if (Global_262145.f_6037 >= 0)
			{
				*uParam1 = Global_262145.f_6037;
			}
			break;
		
		case 2072700298:
			if (Global_262145.f_6038 >= 0)
			{
				*uParam1 = Global_262145.f_6038;
			}
			break;
		
		case 694163672:
			if (Global_262145.f_6039 >= 0)
			{
				*uParam1 = Global_262145.f_6039;
			}
			break;
		
		case -1693156289:
			if (Global_262145.f_6040 >= 0)
			{
				*uParam1 = Global_262145.f_6040;
			}
			break;
		
		case -1201085112:
			if (Global_262145.f_6041 >= 0)
			{
				*uParam1 = Global_262145.f_6041;
			}
			break;
		
		case 1645754536:
			if (Global_262145.f_6042 >= 0)
			{
				*uParam1 = Global_262145.f_6042;
			}
			break;
		
		case 1442375387:
			if (Global_262145.f_6043 >= 0)
			{
				*uParam1 = Global_262145.f_6043;
			}
			break;
		
		case 674401103:
			if (Global_262145.f_6044 >= 0)
			{
				*uParam1 = Global_262145.f_6044;
			}
			break;
		
		case -692164748:
			if (Global_262145.f_6045 >= 0)
			{
				*uParam1 = Global_262145.f_6045;
			}
			break;
		
		case -974010917:
			if (Global_262145.f_6046 >= 0)
			{
				*uParam1 = Global_262145.f_6046;
			}
			break;
		
		case 1401833895:
			if (Global_262145.f_6047 >= 0)
			{
				*uParam1 = Global_262145.f_6047;
			}
			break;
		
		case -2059653886:
			if (Global_262145.f_6048 >= 0)
			{
				*uParam1 = Global_262145.f_6048;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("CLO_BUSF_G1_0"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_2183[120] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUSF_G1_1"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_2183[121] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUSF_G1_2"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_2183[122] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUSF_G1_3"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_2183[123] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUSF_G1_4"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_2183[124] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUSF_G1_5"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_2183[125] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUSF_G1_6"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_2183[126] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUSF_G1_7"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_2183[127] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUSF_W0_0"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_2312[0] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUSF_W0_1"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_2312[1] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUSF_W0_2"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_2312[2] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUSF_W0_3"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_2312[3] * IntToFloat(*uParam1)));
			break;
	}
	switch (iParam0)
	{
		case -2049322280:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6097 * IntToFloat(*uParam1)));
			break;
		
		case 127817315:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6098 * IntToFloat(*uParam1)));
			break;
		
		case -112182841:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6099 * IntToFloat(*uParam1)));
			break;
		
		case -351625924:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6100 * IntToFloat(*uParam1)));
			break;
		
		case 1287807146:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6101 * IntToFloat(*uParam1)));
			break;
		
		case -95437878:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6102 * IntToFloat(*uParam1)));
			break;
		
		case 130143918:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6103 * IntToFloat(*uParam1)));
			break;
		
		case 354513261:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6104 * IntToFloat(*uParam1)));
			break;
		
		case -1280201073:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6105 * IntToFloat(*uParam1)));
			break;
		
		case 814557252:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6106 * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_HP_F_O_0"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6107 * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_HP_F_O_1"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6108 * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_HP_F_O_2"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6109 * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_HP_F_O_3"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6110 * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_HP_F_O_4"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6111 * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_HP_F_O_5"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6112 * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_HP_F_O_6"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6113 * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_HP_F_O_7"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6114 * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_HP_F_O_8"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6115 * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_HP_F_O_9"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6116 * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_HP_F_O_10"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_6117 * IntToFloat(*uParam1)));
			break;
	}
}

void func_56(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case -1172875993:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[210] * IntToFloat(*uParam1)));
			break;
		
		case -933695062:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[211] * IntToFloat(*uParam1)));
			break;
		
		case -1650353092:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[212] * IntToFloat(*uParam1)));
			break;
		
		case -1411630927:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[213] * IntToFloat(*uParam1)));
			break;
		
		case -1445514097:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[214] * IntToFloat(*uParam1)));
			break;
		
		case -1214984182:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[215] * IntToFloat(*uParam1)));
			break;
		
		case -1907262076:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[216] * IntToFloat(*uParam1)));
			break;
		
		case -1462772454:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[217] * IntToFloat(*uParam1)));
			break;
		
		case -1676142319:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[218] * IntToFloat(*uParam1)));
			break;
		
		case 1613734209:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[219] * IntToFloat(*uParam1)));
			break;
		
		case 1896432372:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[220] * IntToFloat(*uParam1)));
			break;
		
		case -1785709773:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[221] * IntToFloat(*uParam1)));
			break;
		
		case -1478893626:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[222] * IntToFloat(*uParam1)));
			break;
		
		case -1234338579:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[223] * IntToFloat(*uParam1)));
			break;
		
		case -919559537:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[224] * IntToFloat(*uParam1)));
			break;
		
		case -1279986972:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[225] * IntToFloat(*uParam1)));
			break;
		
		case -656588312:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[226] * IntToFloat(*uParam1)));
			break;
		
		case -359406251:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[227] * IntToFloat(*uParam1)));
			break;
		
		case -30339953:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[228] * IntToFloat(*uParam1)));
			break;
		
		case 276443425:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[229] * IntToFloat(*uParam1)));
			break;
		
		case 598005622:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[230] * IntToFloat(*uParam1)));
			break;
		
		case 871823386:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[231] * IntToFloat(*uParam1)));
			break;
		
		case 2047673121:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[232] * IntToFloat(*uParam1)));
			break;
		
		case -723961716:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[233] * IntToFloat(*uParam1)));
			break;
		
		case 1826089143:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[234] * IntToFloat(*uParam1)));
			break;
		
		case 1576094442:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[235] * IntToFloat(*uParam1)));
			break;
		
		case 1336979049:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[236] * IntToFloat(*uParam1)));
			break;
		
		case 859010411:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[237] * IntToFloat(*uParam1)));
			break;
		
		case 636508901:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[238] * IntToFloat(*uParam1)));
			break;
		
		case 378911792:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[239] * IntToFloat(*uParam1)));
			break;
		
		case -116031184:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[240] * IntToFloat(*uParam1)));
			break;
		
		case -425731047:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[241] * IntToFloat(*uParam1)));
			break;
		
		case -1657253557:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[258]);
			break;
		
		case 196750925:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[259]);
			break;
		
		case -99841294:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[260]);
			break;
		
		case 1749378918:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[261]);
			break;
		
		case 1438433877:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[262]);
			break;
		
		case -1834468333:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[263]);
			break;
		
		case -2131978084:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[264]);
			break;
		
		case -243477427:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[271]);
			break;
		
		case -1466449280:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[272]);
			break;
		
		case -1091702996:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[273]);
			break;
		
		case -1806427655:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[274]);
			break;
		
		case -1734139241:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[275]);
			break;
		
		case 1878937934:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[276]);
			break;
		
		case -2042593838:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[277]);
			break;
		
		case 1597943763:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[278]);
			break;
		
		case -1407107490:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[279]);
			break;
		
		case -542857884:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[280]);
			break;
		
		case -309182145:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[281]);
			break;
		
		case 1189835760:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[282]);
			break;
		
		case -788232156:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[283]);
			break;
		
		case 681064266:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[284]);
			break;
		
		case 914871081:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[285]);
			break;
		
		case -1950974587:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[286]);
			break;
		
		case 1592736846:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[287]);
			break;
		
		case 1889853369:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[288]);
			break;
		
		case 2052256533:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[289]);
			break;
		
		case -1946184082:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[290]);
			break;
		
		case -1782535696:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[291]);
			break;
		
		case -1485550249:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[292]);
			break;
		
		case -1323409237:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[293]);
			break;
		
		case -1025178568:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[294]);
			break;
		
		case -630273677:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[295]);
			break;
		
		case -1543119706:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[296]);
			break;
		
		case -1354763494:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[297]);
			break;
		
		case -1726986569:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[298]);
			break;
		
		case -1295418839:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[299]);
			break;
		
		case 1021316696:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[300]);
			break;
		
		case 1212556580:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[301]);
			break;
		
		case 1509247106:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[302]);
			break;
	}
}

void func_57(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case joaat("CLO_BUS_F_O_0"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[8] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_1"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[9] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_2"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[10] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_3"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[11] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_4"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[12] * IntToFloat(*uParam1)));
			break;
		
		case 823754616:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[13] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_6"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[14] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_7"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[15] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_8"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[16] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_9"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[17] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_10"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[18] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_11"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[19] * IntToFloat(*uParam1)));
			break;
		
		case -419205006:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[20] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_13"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[21] * IntToFloat(*uParam1)));
			break;
		
		case 1040031245:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[22] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_15"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[23] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_16"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[24] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_17"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[25] * IntToFloat(*uParam1)));
			break;
		
		case -121465960:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[26] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_19"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[27] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_20"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[28] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_21"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[29] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_22"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[30] * IntToFloat(*uParam1)));
			break;
		
		case 845284826:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[31] * IntToFloat(*uParam1)));
			break;
		
		case 1151347286:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[32] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUS_F_O_25"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[33] * IntToFloat(*uParam1)));
			break;
		
		case joaat("CLO_BUSF_U_3_0"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[61]);
			break;
		
		case joaat("CLO_BUSF_U_3_1"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[62]);
			break;
		
		case joaat("CLO_BUSF_U_3_2"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[63]);
			break;
		
		case joaat("CLO_BUSF_U_3_3"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[64]);
			break;
		
		case joaat("CLO_BUSF_U_3_4"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[65]);
			break;
		
		case joaat("CLO_BUSF_U_3_5"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[66]);
			break;
		
		case joaat("CLO_BUSF_U_4_0"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[67]);
			break;
		
		case joaat("CLO_BUSF_U_4_1"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[68]);
			break;
		
		case joaat("CLO_BUSF_U_4_2"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[69]);
			break;
		
		case joaat("CLO_BUSF_U_4_3"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[70]);
			break;
		
		case joaat("CLO_BUSF_U_4_4"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[71]);
			break;
		
		case joaat("CLO_BUSF_U_4_5"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[72]);
			break;
		
		case joaat("CLO_BUSF_U_4_6"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[73]);
			break;
		
		case joaat("CLO_BUSF_U_4_7"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[74]);
			break;
		
		case joaat("CLO_BUSF_U_4_8"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[75]);
			break;
		
		case joaat("CLO_BUSF_U_4_9"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[76]);
			break;
		
		case joaat("CLO_BUSF_U_4_10"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[77]);
			break;
		
		case joaat("CLO_BUSF_U_4_11"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[78]);
			break;
		
		case joaat("CLO_BUSF_U_4_12"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[79]);
			break;
		
		case joaat("CLO_BUSF_U_4_13"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[80]);
			break;
		
		case joaat("CLO_BUSF_U_4_14"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[81]);
			break;
		
		case joaat("CLO_BUSF_U_4_15"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[82]);
			break;
	}
	switch (iParam0)
	{
		case joaat("CLO_BUS_P_0_0"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[83]);
			break;
		
		case joaat("CLO_BUS_P_0_1"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[84]);
			break;
		
		case joaat("CLO_BUS_P_0_2"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[85]);
			break;
		
		case joaat("CLO_BUS_P_0_3"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[86]);
			break;
		
		case joaat("CLO_BUS_P_0_4"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[87]);
			break;
		
		case joaat("CLO_BUS_P_0_5"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[88]);
			break;
		
		case joaat("CLO_BUS_P_0_6"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[89]);
			break;
		
		case joaat("CLO_BUS_P_0_7"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[90]);
			break;
		
		case joaat("CLO_BUS_P_0_8"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[91]);
			break;
		
		case joaat("CLO_BUS_P_0_9"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[92]);
			break;
		
		case joaat("CLO_BUS_P_0_10"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[93]);
			break;
		
		case joaat("CLO_BUS_P_0_11"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[94]);
			break;
		
		case joaat("CLO_BUS_P_0_12"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[95]);
			break;
		
		case joaat("CLO_BUS_P_0_13"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[96]);
			break;
		
		case joaat("CLO_BUS_P_1_0"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[97]);
			break;
		
		case joaat("CLO_BUS_P_1_1"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[98]);
			break;
		
		case joaat("CLO_BUS_P_1_2"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[99]);
			break;
		
		case joaat("CLO_BUS_P_1_3"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[100]);
			break;
		
		case joaat("CLO_BUS_P_1_4"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[101]);
			break;
		
		case joaat("CLO_BUS_P_1_5"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[102]);
			break;
		
		case joaat("CLO_BUS_P_1_6"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[103]);
			break;
		
		case joaat("CLO_BUS_P_1_7"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[104]);
			break;
		
		case joaat("CLO_BUS_P_1_8"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[105]);
			break;
		
		case joaat("CLO_BUS_P_1_9"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[106]);
			break;
		
		case joaat("CLO_BUS_P_1_10"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[107]);
			break;
		
		case joaat("CLO_BUS_P_1_11"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[108]);
			break;
		
		case joaat("CLO_BUS_P_1_12"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[109]);
			break;
		
		case joaat("CLO_BUS_P_1_13"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[110]);
			break;
		
		case 2007902130:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[111]);
			break;
		
		case 686459436:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[112]);
			break;
		
		case -1689653527:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[113]);
			break;
		
		case -1098631843:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[114]);
			break;
		
		case -1464399421:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[115]);
			break;
		
		case -500630362:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[116]);
			break;
		
		case -849161446:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[117]);
			break;
		
		case 386000475:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[118]);
			break;
		
		case 29408217:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[119]);
			break;
		
		case -1273749391:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[120]);
			break;
		
		case -124515304:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[121]);
			break;
		
		case 654764285:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[122]);
			break;
		
		case -1556422301:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[123]);
			break;
		
		case -1601184755:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[124]);
			break;
		
		case 1371389546:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[125]);
			break;
		
		case 1072437959:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[126]);
			break;
		
		case -1879610913:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[127]);
			break;
		
		case -2127508398:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[128]);
			break;
		
		case 777987760:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[129]);
			break;
		
		case 497386813:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[130]);
			break;
		
		case -880039396:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[131]);
			break;
		
		case -1120006783:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[132]);
			break;
		
		case -553758463:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[133]);
			break;
		
		case 280900740:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[134]);
			break;
		
		case 551670983:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[135]);
			break;
		
		case 1386231875:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[136]);
			break;
		
		case 946209743:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[137]);
			break;
		
		case 1780213562:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[138]);
			break;
		
		case 1511737145:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[139]);
			break;
	}
	switch (iParam0)
	{
		case 547455022:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[146]);
			break;
		
		case 542211982:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[147]);
			break;
		
		case 235657987:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[148]);
			break;
		
		case -67848491:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[149]);
			break;
		
		case -373943720:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[150]);
			break;
		
		case -994326428:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[151]);
			break;
		
		case -1284397616:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[152]);
			break;
		
		case -1851929032:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[153]);
			break;
		
		case 1070574237:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[154]);
			break;
		
		case 773490483:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[155]);
			break;
		
		case 1549034406:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[156]);
			break;
		
		case -510366168:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[157]);
			break;
		
		case -852867756:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[158]);
			break;
		
		case 2114135811:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[159]);
			break;
		
		case -386390000:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[160] * IntToFloat(*uParam1)));
			break;
		
		case -136165916:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[161] * IntToFloat(*uParam1)));
			break;
		
		case 108389131:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[162] * IntToFloat(*uParam1)));
			break;
		
		case -1287242583:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[163] * IntToFloat(*uParam1)));
			break;
		
		case 839105062:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[164] * IntToFloat(*uParam1)));
			break;
		
		case 1085921170:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[165] * IntToFloat(*uParam1)));
			break;
		
		case 1267723582:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[166] * IntToFloat(*uParam1)));
			break;
		
		case -598896965:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[167] * IntToFloat(*uParam1)));
			break;
		
		case 1531514028:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[168] * IntToFloat(*uParam1)));
			break;
		
		case 1785965313:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[169] * IntToFloat(*uParam1)));
			break;
		
		case 1344121348:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[170] * IntToFloat(*uParam1)));
			break;
		
		case 1114574503:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[171] * IntToFloat(*uParam1)));
			break;
		
		case -1314689774:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[172] * IntToFloat(*uParam1)));
			break;
		
		case -1544466002:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[173] * IntToFloat(*uParam1)));
			break;
		
		case 58757327:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[174] * IntToFloat(*uParam1)));
			break;
		
		case 1992292172:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[175] * IntToFloat(*uParam1)));
			break;
		
		case 1761205184:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[176] * IntToFloat(*uParam1)));
			break;
		
		case 1517633207:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[177] * IntToFloat(*uParam1)));
			break;
		
		case -1098447143:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[178] * IntToFloat(*uParam1)));
			break;
		
		case 776922731:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[179] * IntToFloat(*uParam1)));
			break;
		
		case -719832:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[180] * IntToFloat(*uParam1)));
			break;
		
		case 797959005:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[181] * IntToFloat(*uParam1)));
			break;
		
		case -1399136911:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[182] * IntToFloat(*uParam1)));
			break;
		
		case 1512814740:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[183] * IntToFloat(*uParam1)));
			break;
		
		case 1257576999:
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[184] * IntToFloat(*uParam1)));
			break;
	}
	switch (iParam0)
	{
		case 260830436:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_169[211]));
			break;
		
		case 21878888:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_169[212]));
			break;
		
		case 1578734070:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_169[213]));
			break;
		
		case -1873775005:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_169[214]));
			break;
		
		case -1171731937:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_169[215]));
			break;
		
		case 1825288026:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_169[216]));
			break;
		
		case 685385604:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_169[217]));
			break;
		
		case 446958360:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_169[218]));
			break;
		
		case 1633228929:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_169[219]));
			break;
		
		case -1823277964:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_169[220]));
			break;
		
		case 877316879:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_169[221]));
			break;
		
		case 1161161957:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_169[222]));
			break;
		
		case 259228001:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_169[223]));
			break;
		
		case 1031326785:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[68]));
			break;
		
		case -1490739308:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[70]));
			break;
		
		case -1259881703:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[71]));
			break;
		
		case -2099751169:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[72]));
			break;
		
		case 503286566:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[159]));
			break;
		
		case 716809370:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[160]));
			break;
		
		case -2125934133:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[161]));
			break;
		
		case -1635251127:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[162]));
			break;
		
		case 1692080368:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[163]));
			break;
		
		case 1915302796:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[164]));
			break;
		
		case -1085813324:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[165]));
			break;
		
		case -874912040:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[166]));
			break;
		
		case -1852444079:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[167]));
			break;
		
		case -1335939101:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[168]));
			break;
		
		case 1659434315:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[169]));
			break;
		
		case 1401902744:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[170]));
			break;
		
		case 1181826140:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[171]));
			break;
		
		case -1698687156:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[174]));
			break;
		
		case -1014077208:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[175]));
			break;
		
		case -1252733835:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[176]));
			break;
		
		case -1616535281:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[180]));
			break;
		
		case -1846606430:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[181]));
			break;
		
		case -634120661:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[182]));
			break;
		
		case -863110433:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[183]));
			break;
		
		case -153497738:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[184]));
			break;
		
		case -416894960:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[185]));
			break;
		
		case 293438653:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[187]));
			break;
		
		case 792147216:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[208]));
			break;
		
		case -1990858420:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[210]));
			break;
		
		case -1013457453:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[211]));
			break;
		
		case -1379880411:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[212]));
			break;
		
		case 1477215930:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[213]));
			break;
		
		case -765756582:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[214]));
			break;
		
		case -326946903:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[215]));
			break;
		
		case -692452329:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[216]));
			break;
		
		case 157837683:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[218]));
			break;
		
		case -76100208:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_426[219]));
			break;
		
		case -809940015:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_664[161]));
			break;
		
		case -497061603:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_664[162]));
			break;
		
		case -1206575991:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_664[163]));
			break;
		
		case -923681214:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_664[164]));
			break;
		
		case -1771841241:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_664[165]));
			break;
		
		case 1837336423:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_664[166]));
			break;
		
		case 2068652794:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_664[168]));
			break;
		
		case 1874201544:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_664[169]));
			break;
		
		case -2114637754:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_664[170]));
			break;
		
		case 1482939680:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_664[171]));
			break;
		
		case -487010550:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_664[173]));
			break;
		
		case -2059463784:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_664[175]));
			break;
		
		case -13875918:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_664[176]));
			break;
		
		case 227729919:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_664[177]));
			break;
		
		case -1625520876:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_664[178]));
			break;
		
		case -1326012216:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_664[179]));
			break;
		
		case -1026929553:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_664[180]));
			break;
		
		case 1752733645:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_664[181]));
			break;
		
		case 2051390311:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_664[182]));
			break;
		
		case -1960092366:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_664[183]));
			break;
		
		case -1916706210:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_664[184]));
			break;
		
		case -1430873032:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_664[186]));
			break;
		
		case -1901909501:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_664[187]));
			break;
		
		case 1635471284:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_664[189]));
			break;
	}
	switch (iParam0)
	{
		case 561311877:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1094[0]));
			break;
		
		case 308171352:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1094[1]));
			break;
		
		case 1176091086:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1094[2]));
			break;
		
		case 921443187:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1094[3]));
			break;
		
		case 1286489847:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1094[4]));
			break;
		
		case 2060854098:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1094[5]));
			break;
		
		case 1897598940:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1094[6]));
			break;
		
		case -1639847383:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1094[7]));
			break;
		
		case -1015537418:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1094[88]));
			break;
		
		case -1255439267:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1094[89]));
			break;
		
		case 894174372:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1094[90]));
			break;
		
		case 1736141058:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1094[91]));
			break;
		
		case 1513737855:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1094[92]));
			break;
		
		case 208745191:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1094[93]));
			break;
		
		case 1555354389:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1094[94]));
			break;
		
		case 1364966499:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1094[95]));
			break;
		
		case 1325870356:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1223[1]));
			break;
		
		case 2035450282:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1223[2]));
			break;
		
		case 1793385679:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1223[3]));
			break;
		
		case 383794371:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1223[4]));
			break;
		
		case joaat("CLO_BUSF_L_0_0"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1239[99]));
			break;
		
		case joaat("CLO_BUSF_L_0_1"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1239[100]));
			break;
		
		case joaat("CLO_BUSF_L_0_2"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1239[101]));
			break;
		
		case joaat("CLO_BUSF_L_0_3"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1239[102]));
			break;
		
		case joaat("CLO_BUSF_L_0_4"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1239[103]));
			break;
		
		case joaat("CLO_BUSF_L_0_5"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1239[104]));
			break;
		
		case joaat("CLO_BUSF_L_0_6"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1239[105]));
			break;
		
		case joaat("CLO_BUSF_L_0_7"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1239[106]));
			break;
		
		case joaat("CLO_BUSF_L_0_8"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1239[107]));
			break;
		
		case joaat("CLO_BUSF_L_0_9"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1239[108]));
			break;
		
		case joaat("CLO_BUSF_L_0_10"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1239[109]));
			break;
		
		case joaat("CLO_BUSF_L_0_11"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1239[110]));
			break;
		
		case joaat("CLO_BUSF_L_0_12"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1239[111]));
			break;
		
		case joaat("CLO_BUSF_L_1_0"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1239[115]));
			break;
		
		case joaat("CLO_BUSF_L_1_1"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1239[116]));
			break;
		
		case joaat("CLO_BUSF_L_1_2"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1239[117]));
			break;
		
		case joaat("CLO_BUSF_L_1_3"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1239[118]));
			break;
		
		case joaat("CLO_BUSF_L_1_4"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1239[119]));
			break;
		
		case joaat("CLO_BUSF_L_1_5"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1239[120]));
			break;
		
		case joaat("CLO_BUSF_L_1_6"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1239[121]));
			break;
		
		case joaat("CLO_BUSF_L_1_7"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1239[122]));
			break;
		
		case joaat("CLO_BUSF_L_1_8"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1239[123]));
			break;
		
		case joaat("CLO_BUSF_L_1_9"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1239[124]));
			break;
		
		case joaat("CLO_BUSF_L_1_10"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1239[125]));
			break;
		
		case joaat("CLO_BUSF_L_1_11"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1239[126]));
			break;
		
		case joaat("CLO_BUSF_L_1_12"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1239[127]));
			break;
		
		case joaat("CLO_BUSF_U_0_0"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[99]));
			break;
		
		case joaat("CLO_BUSF_U_0_1"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[101]));
			break;
		
		case joaat("CLO_BUSF_U_0_2"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[102]));
			break;
		
		case joaat("CLO_BUSF_U_0_3"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[103]));
			break;
		
		case joaat("CLO_BUSF_U_0_4"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[104]));
			break;
		
		case joaat("CLO_BUSF_U_0_5"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[105]));
			break;
		
		case joaat("CLO_BUSF_U_0_6"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[106]));
			break;
		
		case joaat("CLO_BUSF_U_0_7"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[107]));
			break;
		
		case joaat("CLO_BUSF_U_0_8"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[108]));
			break;
		
		case joaat("CLO_BUSF_U_0_9"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[109]));
			break;
		
		case joaat("CLO_BUSF_U_0_10"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[110]));
			break;
		
		case joaat("CLO_BUSF_U_0_11"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[111]));
			break;
		
		case joaat("CLO_BUSF_U_1_0"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[115]));
			break;
		
		case joaat("CLO_BUSF_U_1_1"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[116]));
			break;
		
		case joaat("CLO_BUSF_U_1_2"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[117]));
			break;
		
		case joaat("CLO_BUSF_U_1_3"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[118]));
			break;
		
		case joaat("CLO_BUSF_U_1_4"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[119]));
			break;
		
		case joaat("CLO_BUSF_U_1_5"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[121]));
			break;
		
		case joaat("CLO_BUSF_U_1_6"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[123]));
			break;
		
		case joaat("CLO_BUSF_U_1_7"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[124]));
			break;
		
		case joaat("CLO_BUSF_U_1_8"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[125]));
			break;
		
		case joaat("CLO_BUSF_U_1_9"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[126]));
			break;
		
		case joaat("CLO_BUSF_U_1_10"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[127]));
			break;
		
		case joaat("CLO_BUSF_U_2_0"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[192]));
			break;
		
		case joaat("CLO_BUSF_U_2_1"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[193]));
			break;
		
		case joaat("CLO_BUSF_U_2_2"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[194]));
			break;
		
		case joaat("CLO_BUSF_U_2_3"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[195]));
			break;
		
		case joaat("CLO_BUSF_U_2_4"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[196]));
			break;
		
		case joaat("CLO_BUSF_U_2_5"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[197]));
			break;
		
		case joaat("CLO_BUSF_U_2_6"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[198]));
			break;
		
		case joaat("CLO_BUSF_U_2_7"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[202]));
			break;
		
		case joaat("CLO_BUSF_U_2_8"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[203]));
			break;
		
		case joaat("CLO_BUSF_U_2_9"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[204]));
			break;
		
		case joaat("CLO_BUSF_U_2_10"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[205]));
			break;
		
		case joaat("CLO_BUSF_U_2_11"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[206]));
			break;
		
		case joaat("CLO_BUSF_U_2_12"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1496[207]));
			break;
		
		case joaat("CLO_BUSF_F_0_0"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1753[4]));
			break;
		
		case joaat("CLO_BUSF_F_0_1"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1753[5]));
			break;
		
		case joaat("CLO_BUSF_F_0_2"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1753[6]));
			break;
		
		case joaat("CLO_BUSF_F_0_3"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1753[7]));
			break;
		
		case joaat("CLO_BUSF_F_0_4"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1753[8]));
			break;
		
		case joaat("CLO_BUSF_F_0_5"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1753[9]));
			break;
		
		case joaat("CLO_BUSF_F_0_6"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1753[10]));
			break;
		
		case joaat("CLO_BUSF_F_0_7"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1753[11]));
			break;
		
		case joaat("CLO_BUSF_F_0_8"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1753[12]));
			break;
		
		case joaat("CLO_BUSF_F_0_9"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1753[13]));
			break;
		
		case joaat("CLO_BUSF_F_0_10"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1753[14]));
			break;
		
		case joaat("CLO_BUSF_F_0_11"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1753[15]));
			break;
		
		case joaat("CLO_BUSF_F_1_0"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1753[100]));
			break;
		
		case joaat("CLO_BUSF_F_1_1"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1753[101]));
			break;
		
		case joaat("CLO_BUSF_F_1_2"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1753[102]));
			break;
		
		case joaat("CLO_BUSF_F_1_3"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1753[103]));
			break;
		
		case joaat("CLO_BUSF_F_1_4"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1753[104]));
			break;
		
		case joaat("CLO_BUSF_F_1_5"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1753[105]));
			break;
		
		case joaat("CLO_BUSF_F_1_6"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1753[106]));
			break;
		
		case joaat("CLO_BUSF_F_1_7"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1753[107]));
			break;
		
		case joaat("CLO_BUSF_F_1_8"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1753[108]));
			break;
		
		case joaat("CLO_BUSF_F_1_9"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1753[109]));
			break;
		
		case joaat("CLO_BUSF_F_1_10"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1753[110]));
			break;
		
		case joaat("CLO_BUSF_F_1_11"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_1753[111]));
			break;
		
		case joaat("CLO_BUSF_G0_0"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_2183[40]));
			break;
		
		case joaat("CLO_BUSF_G0_1"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_2183[41]));
			break;
		
		case joaat("CLO_BUSF_G0_2"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_2183[42]));
			break;
		
		case joaat("CLO_BUSF_G0_3"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_2183[43]));
			break;
		
		case joaat("CLO_BUSF_G0_4"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_2183[44]));
			break;
		
		case joaat("CLO_BUSF_G0_5"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_2183[45]));
			break;
		
		case joaat("CLO_BUSF_G0_6"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_2183[46]));
			break;
		
		case joaat("CLO_BUSF_G0_7"):
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_2183[47]));
			break;
		
		case 1791524240:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_169[163]));
			break;
		
		case 534833082:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_169[164]));
			break;
		
		case 227296017:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_169[165]));
			break;
		
		case 860393105:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_169[166]));
			break;
		
		case -1590433178:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_169[167]));
			break;
		
		case 1456756136:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_169[168]));
			break;
		
		case 1163506355:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_169[169]));
			break;
		
		case 1861649900:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_169[170]));
			break;
		
		case -591994517:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_169[171]));
			break;
		
		case -1840493417:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_169[172]));
			break;
		
		case -952392951:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_169[173]));
			break;
		
		case -1123971435:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_169[174]));
			break;
		
		case -354522546:
			*uParam1 = unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(*uParam1) * Global_262145.f_169[175]));
			break;
		
		case -1548133220:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[242]);
			break;
		
		case -125893074:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[243]);
			break;
		
		case 655287117:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[244]);
			break;
		
		case 1845227814:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[245]);
			break;
		
		case 177416790:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[246]);
			break;
		
		case 1612109136:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[247]);
			break;
		
		case 241414635:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[248]);
			break;
		
		case 1134173271:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[249]);
			break;
		
		case 1910438112:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[250]);
			break;
		
		case -949967902:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[251]);
			break;
		
		case -1360546088:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[252]);
			break;
		
		case 166096092:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[253]);
			break;
		
		case -140457903:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[254]);
			break;
		
		case -432298617:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[255]);
			break;
		
		case -738393846:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[256]);
			break;
		
		case 1384775202:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[257]);
			break;
		
		case -77078531:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[265]);
			break;
		
		case -402835160:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[266]);
			break;
		
		case -710142842:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[267]);
			break;
		
		case -1869599805:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[268]);
			break;
		
		case -1644607851:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[269]);
			break;
		
		case -1321505511:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[270]);
			break;
	}
	switch (iParam0)
	{
		case 2120599946:
			if (Global_262145.f_4872 >= 0)
			{
				*uParam1 = Global_262145.f_4872;
			}
			break;
		
		case -919019741:
			if (Global_262145.f_4873 >= 0)
			{
				*uParam1 = Global_262145.f_4873;
			}
			break;
		
		case -746654801:
			if (Global_262145.f_4874 >= 0)
			{
				*uParam1 = Global_262145.f_4874;
			}
			break;
		
		case 1779802346:
			if (Global_262145.f_4875 >= 0)
			{
				*uParam1 = Global_262145.f_4875;
			}
			break;
		
		case 1004520575:
			if (Global_262145.f_4876 >= 0)
			{
				*uParam1 = Global_262145.f_4876;
			}
			break;
		
		case -1904645711:
			if (Global_262145.f_4877 >= 0)
			{
				*uParam1 = Global_262145.f_4877;
			}
			break;
		
		case 1614449972:
			if (Global_262145.f_4878 >= 0)
			{
				*uParam1 = Global_262145.f_4878;
			}
			break;
		
		case -638287710:
			if (Global_262145.f_4879 >= 0)
			{
				*uParam1 = Global_262145.f_4879;
			}
			break;
		
		case -339532737:
			if (Global_262145.f_4880 >= 0)
			{
				*uParam1 = Global_262145.f_4880;
			}
			break;
		
		case -23049735:
			if (Global_262145.f_4881 >= 0)
			{
				*uParam1 = Global_262145.f_4881;
			}
			break;
		
		case 706090398:
			if (Global_262145.f_4882 >= 0)
			{
				*uParam1 = Global_262145.f_4882;
			}
			break;
		
		case 87870444:
			if (Global_262145.f_4883 >= 0)
			{
				*uParam1 = Global_262145.f_4883;
			}
			break;
		
		case -149803113:
			if (Global_262145.f_4884 >= 0)
			{
				*uParam1 = Global_262145.f_4884;
			}
			break;
		
		case 2118720551:
			if (Global_262145.f_4885 >= 0)
			{
				*uParam1 = Global_262145.f_4885;
			}
			break;
		
		case -1877819462:
			if (Global_262145.f_4886 >= 0)
			{
				*uParam1 = Global_262145.f_4886;
			}
			break;
		
		case -356223708:
			if (Global_262145.f_4887 >= 0)
			{
				*uParam1 = Global_262145.f_4887;
			}
			break;
		
		case -116715087:
			if (Global_262145.f_4888 >= 0)
			{
				*uParam1 = Global_262145.f_4888;
			}
			break;
		
		case -951013827:
			if (Global_262145.f_4889 >= 0)
			{
				*uParam1 = Global_262145.f_4889;
			}
			break;
		
		case -712095048:
			if (Global_262145.f_4890 >= 0)
			{
				*uParam1 = Global_262145.f_4890;
			}
			break;
		
		case 805011345:
			if (Global_262145.f_4891 >= 0)
			{
				*uParam1 = Global_262145.f_4891;
			}
			break;
		
		case 1027938852:
			if (Global_262145.f_4892 >= 0)
			{
				*uParam1 = Global_262145.f_4892;
			}
			break;
		
		case 142061706:
			if (Global_262145.f_4893 >= 0)
			{
				*uParam1 = Global_262145.f_4893;
			}
			break;
		
		case 431641359:
			if (Global_262145.f_4894 >= 0)
			{
				*uParam1 = Global_262145.f_4894;
			}
			break;
		
		case -291513083:
			if (Global_262145.f_4895 >= 0)
			{
				*uParam1 = Global_262145.f_4895;
			}
			break;
		
		case 15729061:
			if (Global_262145.f_4896 >= 0)
			{
				*uParam1 = Global_262145.f_4896;
			}
			break;
		
		case 1536898810:
			if (Global_262145.f_4897 >= 0)
			{
				*uParam1 = Global_262145.f_4897;
			}
			break;
		
		case -1869739104:
			if (Global_262145.f_4898 >= 0)
			{
				*uParam1 = Global_262145.f_4898;
			}
			break;
		
		case -1049498265:
			if (Global_262145.f_4899 >= 0)
			{
				*uParam1 = Global_262145.f_4899;
			}
			break;
		
		case -1422147333:
			if (Global_262145.f_4900 >= 0)
			{
				*uParam1 = Global_262145.f_4900;
			}
			break;
		
		case 1535091072:
			if (Global_262145.f_4901 >= 0)
			{
				*uParam1 = Global_262145.f_4901;
			}
			break;
		
		case 1297483053:
			if (Global_262145.f_4902 >= 0)
			{
				*uParam1 = Global_262145.f_4902;
			}
			break;
		
		case -1975746823:
			if (Global_262145.f_4903 >= 0)
			{
				*uParam1 = Global_262145.f_4903;
			}
			break;
		
		case 1942639125:
			if (Global_262145.f_4904 >= 0)
			{
				*uParam1 = Global_262145.f_4904;
			}
			break;
		
		case 1884703593:
			if (Global_262145.f_4905 >= 0)
			{
				*uParam1 = Global_262145.f_4905;
			}
			break;
		
		case 548351004:
			if (Global_262145.f_4906 >= 0)
			{
				*uParam1 = Global_262145.f_4906;
			}
			break;
		
		case 197263938:
			if (Global_262145.f_4907 >= 0)
			{
				*uParam1 = Global_262145.f_4907;
			}
			break;
		
		case 844756076:
			if (Global_262145.f_4908 >= 0)
			{
				*uParam1 = Global_262145.f_4908;
			}
			break;
		
		case 1686264000:
			if (Global_262145.f_4909 >= 0)
			{
				*uParam1 = Global_262145.f_4909;
			}
			break;
		
		case 1372926822:
			if (Global_262145.f_4910 >= 0)
			{
				*uParam1 = Global_262145.f_4910;
			}
			break;
		
		case -180454858:
			if (Global_262145.f_4911 >= 0)
			{
				*uParam1 = Global_262145.f_4911;
			}
			break;
		
		case -409870627:
			if (Global_262145.f_4912 >= 0)
			{
				*uParam1 = Global_262145.f_4912;
			}
			break;
		
		case -1502121690:
			if (Global_262145.f_4913 >= 0)
			{
				*uParam1 = Global_262145.f_4913;
			}
			break;
		
		case 2022085957:
			if (Global_262145.f_4914 >= 0)
			{
				*uParam1 = Global_262145.f_4914;
			}
			break;
		
		case 1168977803:
			if (Global_262145.f_4915 >= 0)
			{
				*uParam1 = Global_262145.f_4915;
			}
			break;
		
		case -1760308641:
			if (Global_262145.f_4916 >= 0)
			{
				*uParam1 = Global_262145.f_4916;
			}
			break;
		
		case -1000919847:
			if (Global_262145.f_4917 >= 0)
			{
				*uParam1 = Global_262145.f_4917;
			}
			break;
		
		case 382456257:
			if (Global_262145.f_4918 >= 0)
			{
				*uParam1 = Global_262145.f_4918;
			}
			break;
		
		case -474322017:
			if (Global_262145.f_4919 >= 0)
			{
				*uParam1 = Global_262145.f_4919;
			}
			break;
		
		case -1302427416:
			if (Global_262145.f_4920 >= 0)
			{
				*uParam1 = Global_262145.f_4920;
			}
			break;
		
		case 218545719:
			if (Global_262145.f_4921 >= 0)
			{
				*uParam1 = Global_262145.f_4921;
			}
			break;
		
		case 1608868851:
			if (Global_262145.f_4922 >= 0)
			{
				*uParam1 = Global_262145.f_4922;
			}
			break;
		
		case 1906555586:
			if (Global_262145.f_4923 >= 0)
			{
				*uParam1 = Global_262145.f_4923;
			}
			break;
		
		case 1475381084:
			if (Global_262145.f_4924 >= 0)
			{
				*uParam1 = Global_262145.f_4924;
			}
			break;
		
		case -1927319111:
			if (Global_262145.f_4925 >= 0)
			{
				*uParam1 = Global_262145.f_4925;
			}
			break;
		
		case joaat("CLO_BUSF_T_0_0"):
			if (Global_262145.f_4926 >= 0)
			{
				*uParam1 = Global_262145.f_4926;
			}
			break;
		
		case joaat("CLO_BUSF_T_0_1"):
			if (Global_262145.f_4927 >= 0)
			{
				*uParam1 = Global_262145.f_4927;
			}
			break;
		
		case joaat("CLO_BUSF_T_0_2"):
			if (Global_262145.f_4928 >= 0)
			{
				*uParam1 = Global_262145.f_4928;
			}
			break;
		
		case joaat("CLO_BUSF_T_0_3"):
			if (Global_262145.f_4929 >= 0)
			{
				*uParam1 = Global_262145.f_4929;
			}
			break;
		
		case joaat("CLO_BUSF_T_0_4"):
			if (Global_262145.f_4930 >= 0)
			{
				*uParam1 = Global_262145.f_4930;
			}
			break;
		
		case joaat("CLO_BUSF_T_0_5"):
			if (Global_262145.f_4931 >= 0)
			{
				*uParam1 = Global_262145.f_4931;
			}
			break;
	}
}

void func_58(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 500984819:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[140]);
			break;
		
		case 798691188:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[141]);
			break;
		
		case -1581452414:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[142]);
			break;
		
		case -1635940622:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[143]);
			break;
		
		case 1762139144:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[144]);
			break;
		
		case -1126644824:
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[145]);
			break;
		
		case joaat("CLO_BBF_T_1_0"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[0]);
			break;
		
		case joaat("CLO_BBF_T_1_1"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[1]);
			break;
		
		case joaat("CLO_BBF_T_1_2"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[2]);
			break;
		
		case joaat("CLO_BBF_T_1_3"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[3]);
			break;
		
		case joaat("CLO_BBF_T_2_0"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[4]);
			break;
		
		case joaat("CLO_BBF_T_2_1"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[5]);
			break;
		
		case joaat("CLO_BBF_T_2_2"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[6]);
			break;
		
		case joaat("CLO_BBF_T_2_3"):
			*uParam1 = unk_0xF34EE736CF047844(Global_262145.f_5084[7]);
			break;
	}
}

void func_59(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case joaat("O_FMF_S1"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[34] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_S2"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[35] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_S3"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[36] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_S4"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[37] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_S5"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[38] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_S6"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[39] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_S7"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[40] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_S8"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[41] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_P1"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[42] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_P2"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[43] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_P3"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[44] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_P4"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[45] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_P5"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[46] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_P6"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[47] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_P7"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[48] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_P8"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[49] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_P9"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[50] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_P10"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[51] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_B1"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[52] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_B2"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[53] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_B3"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[54] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_B4"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[55] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_B5"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[56] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_B6"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[57] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_B7"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[58] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_B8"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[59] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMF_B9"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[60] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_S1"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[185] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_S2"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[186] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_S3"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[187] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_S4"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[188] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_S5"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[189] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_S6"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[190] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_S7"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[191] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_S8"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[192] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_S9"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[193] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_P1"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[194] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_P2"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[195] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_P3"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[196] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_P4"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[197] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_P5"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[198] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_P6"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[199] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_P7"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[200] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_P8"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[201] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_B1"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[202] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_B2"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[203] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_B3"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[204] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_B4"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[205] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_B5"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[206] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_B6"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[207] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_B7"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[208] * IntToFloat(*uParam1)));
			break;
		
		case joaat("O_FMM_B8"):
			*uParam1 = unk_0xF34EE736CF047844((Global_262145.f_5084[209] * IntToFloat(*uParam1)));
			break;
	}
}

struct<14> func_60(int iParam0, int iParam1, int iParam2)
{
	func_112();
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		func_96(iParam1, iParam2);
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		func_61(iParam1, iParam2);
	}
	return Global_68881[0 /*14*/];
}

void func_61(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			func_95(iParam1);
			break;
		
		case 11:
			func_94(iParam1);
			break;
		
		case 8:
			func_86(iParam1);
			break;
		
		case 9:
			func_85(iParam1);
			break;
		
		case 3:
			func_84(iParam1);
			break;
		
		case 4:
			func_83(iParam1);
			break;
		
		case 6:
			func_82(iParam1);
			break;
		
		case 1:
			func_81(iParam1);
			break;
		
		case 7:
			func_80(iParam1);
			break;
		
		case 10:
			func_79(iParam1);
			break;
		
		case 14:
			func_78(iParam1);
			break;
		
		case 12:
			func_77(iParam1);
			break;
		
		case 5:
			func_76(iParam1);
			break;
		
		case 0:
			func_74(iParam1);
			break;
		
		case 13:
			func_62(iParam1);
			break;
	}
}

void func_62(int iParam0)
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
	func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_63(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
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
	uParam0->f_12 = func_73(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (unk_0x8DAF7A748E41AD46(sParam3) != unk_0x8DAF7A748E41AD46("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 5);
		}
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 1);
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 2);
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 6);
		if (func_72(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (unk_0x3FFA0207A02FD5C0(Global_2621444, joaat("REBREATHER"), 0))
			{
				unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_70(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xC69E84EBBD7166E6(&(uParam0->f_6), 2);
			}
			if (!func_70(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_70(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xC69E84EBBD7166E6(&(uParam0->f_6), 2);
			}
			if (!func_70(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_70(Global_2621444, 1, 1, 1, -1))
			{
				unk_0xC69E84EBBD7166E6(&(uParam0->f_6), 2);
			}
			if (!func_70(Global_2621444, 2, 1, 1, -1))
			{
				unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 0);
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 5);
		if (func_69(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 1);
		}
		if (func_69(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 2);
		}
		if (!func_69(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 4);
		}
	}
	else
	{
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			iVar0 = func_66(func_68(iParam1, uParam0->f_2), Global_68879, 0);
			if (unk_0x236D8AD7EE179F46(iVar0, uParam0->f_1))
			{
				unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 1);
			}
			iVar0 = func_66(func_65(iParam1, uParam0->f_2), Global_68879, 0);
			if (unk_0x236D8AD7EE179F46(iVar0, uParam0->f_1))
			{
				unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 2);
			}
			if (func_64(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_66(iVar1, Global_68879, 0);
				if (!unk_0x236D8AD7EE179F46(iVar0, uParam0->f_1))
				{
					unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 1);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 1);
			unk_0xF3148AAF69AF9CBC(&(uParam0->f_6), 2);
		}
	}
}

bool func_64(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 968;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 969;
					break;
				
				case 3:
					*uParam2 = 1418;
					break;
				
				case 4:
					*uParam2 = 985;
					break;
				
				case 6:
					*uParam2 = 993;
					break;
				
				case 8:
					*uParam2 = 1419;
					break;
				
				case 9:
					*uParam2 = 1427;
					break;
				
				case 10:
					*uParam2 = 1429;
					break;
				
				case 1:
					*uParam2 = 1001;
					break;
				
				case 7:
					*uParam2 = 1430;
					break;
				
				case 11:
					*uParam2 = 977;
					break;
				
				case 14:
					*uParam2 = 1009;
					break;
				
				case 12:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 970;
					break;
				
				case 4:
					*uParam2 = 986;
					break;
				
				case 6:
					*uParam2 = 994;
					break;
				
				case 8:
					*uParam2 = 1420;
					break;
				
				case 9:
					*uParam2 = 1428;
					break;
				
				case 7:
					*uParam2 = 1431;
					break;
				
				case 11:
					*uParam2 = 978;
					break;
				
				case 14:
					*uParam2 = 1010;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 971;
					break;
				
				case 4:
					*uParam2 = 987;
					break;
				
				case 6:
					*uParam2 = 995;
					break;
				
				case 8:
					*uParam2 = 1421;
					break;
				
				case 7:
					*uParam2 = 1432;
					break;
				
				case 11:
					*uParam2 = 979;
					break;
				
				case 14:
					*uParam2 = 1011;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 988;
					break;
				
				case 6:
					*uParam2 = 996;
					break;
				
				case 8:
					*uParam2 = 1422;
					break;
				
				case 11:
					*uParam2 = 980;
					break;
				
				case 14:
					*uParam2 = 1012;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 989;
					break;
				
				case 6:
					*uParam2 = 997;
					break;
				
				case 8:
					*uParam2 = 1423;
					break;
				
				case 11:
					*uParam2 = 981;
					break;
				
				case 14:
					*uParam2 = 1013;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 990;
					break;
				
				case 6:
					*uParam2 = 998;
					break;
				
				case 8:
					*uParam2 = 1424;
					break;
				
				case 11:
					*uParam2 = 982;
					break;
				
				case 14:
					*uParam2 = 1014;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 991;
					break;
				
				case 6:
					*uParam2 = 999;
					break;
				
				case 8:
					*uParam2 = 1425;
					break;
				
				case 11:
					*uParam2 = 983;
					break;
				
				case 14:
					*uParam2 = 1015;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 992;
					break;
				
				case 6:
					*uParam2 = 1000;
					break;
				
				case 8:
					*uParam2 = 1426;
					break;
				
				case 11:
					*uParam2 = 984;
					break;
				
				case 14:
					*uParam2 = 1016;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1017;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1018;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1019;
					break;
			}
			break;
	}
	return *uParam2 != 968;
}

int func_65(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 917;
					break;
				
				case 3:
					return 1403;
					break;
				
				case 4:
					return 933;
					break;
				
				case 6:
					return 941;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 9:
					return 1412;
					break;
				
				case 10:
					return 1414;
					break;
				
				case 1:
					return 949;
					break;
				
				case 7:
					return 1415;
					break;
				
				case 11:
					return 925;
					break;
				
				case 14:
					return 957;
					break;
				
				case 12:
					return 968;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 918;
					break;
				
				case 4:
					return 934;
					break;
				
				case 6:
					return 942;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 9:
					return 1413;
					break;
				
				case 7:
					return 1416;
					break;
				
				case 11:
					return 926;
					break;
				
				case 14:
					return 958;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 919;
					break;
				
				case 4:
					return 935;
					break;
				
				case 6:
					return 943;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 7:
					return 1417;
					break;
				
				case 11:
					return 927;
					break;
				
				case 14:
					return 959;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 936;
					break;
				
				case 6:
					return 944;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 928;
					break;
				
				case 14:
					return 960;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 937;
					break;
				
				case 6:
					return 945;
					break;
				
				case 8:
					return 1408;
					break;
				
				case 11:
					return 929;
					break;
				
				case 14:
					return 961;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 938;
					break;
				
				case 6:
					return 946;
					break;
				
				case 8:
					return 1409;
					break;
				
				case 11:
					return 930;
					break;
				
				case 14:
					return 962;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 939;
					break;
				
				case 6:
					return 947;
					break;
				
				case 8:
					return 1410;
					break;
				
				case 11:
					return 931;
					break;
				
				case 14:
					return 963;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 940;
					break;
				
				case 6:
					return 948;
					break;
				
				case 8:
					return 1411;
					break;
				
				case 11:
					return 932;
					break;
				
				case 14:
					return 964;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 965;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 966;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 967;
					break;
			}
			break;
	}
	return 925;
}

int func_66(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2459767[iParam0 /*5*/][func_67(iParam1)];
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_67(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_23();
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

int func_68(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 865;
					break;
				
				case 3:
					return 1388;
					break;
				
				case 4:
					return 881;
					break;
				
				case 6:
					return 889;
					break;
				
				case 8:
					return 1389;
					break;
				
				case 9:
					return 1397;
					break;
				
				case 10:
					return 1399;
					break;
				
				case 1:
					return 897;
					break;
				
				case 7:
					return 1400;
					break;
				
				case 11:
					return 873;
					break;
				
				case 14:
					return 905;
					break;
				
				case 12:
					return 916;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 866;
					break;
				
				case 4:
					return 882;
					break;
				
				case 6:
					return 890;
					break;
				
				case 8:
					return 1390;
					break;
				
				case 9:
					return 1398;
					break;
				
				case 7:
					return 1401;
					break;
				
				case 11:
					return 874;
					break;
				
				case 14:
					return 906;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 867;
					break;
				
				case 4:
					return 883;
					break;
				
				case 6:
					return 891;
					break;
				
				case 8:
					return 1391;
					break;
				
				case 7:
					return 1402;
					break;
				
				case 11:
					return 875;
					break;
				
				case 14:
					return 907;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 884;
					break;
				
				case 6:
					return 892;
					break;
				
				case 8:
					return 1392;
					break;
				
				case 11:
					return 876;
					break;
				
				case 14:
					return 908;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 885;
					break;
				
				case 6:
					return 893;
					break;
				
				case 8:
					return 1393;
					break;
				
				case 11:
					return 877;
					break;
				
				case 14:
					return 909;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 886;
					break;
				
				case 6:
					return 894;
					break;
				
				case 8:
					return 1394;
					break;
				
				case 11:
					return 878;
					break;
				
				case 14:
					return 910;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 887;
					break;
				
				case 6:
					return 895;
					break;
				
				case 8:
					return 1395;
					break;
				
				case 11:
					return 879;
					break;
				
				case 14:
					return 911;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 888;
					break;
				
				case 6:
					return 896;
					break;
				
				case 8:
					return 1396;
					break;
				
				case 11:
					return 880;
					break;
				
				case 14:
					return 912;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 913;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 914;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 915;
					break;
			}
			break;
	}
	return 873;
}

int func_69(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/][iParam3]), iParam4);
		}
		return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				unk_0xF3148AAF69AF9CBC(&(Global_98931.f_1750[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				unk_0xC69E84EBBD7166E6(&(Global_98931.f_1750[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return unk_0x236D8AD7EE179F46(Global_98931.f_1750[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

int func_70(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_68879;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_71(uParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_66(iVar2, iVar0, 0);
		return unk_0x236D8AD7EE179F46(iVar3, iVar1);
	}
	return 0;
}

bool func_71(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 3438;
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_2547744)
		{
			iVar0 = unk_0x6220371F9AEACEC2(uParam0);
		}
		else
		{
			iVar0 = unk_0x09455EBBFD576191(uParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = unk_0x6220371F9AEACEC2(uParam0);
	}
	else
	{
		iVar0 = unk_0x09455EBBFD576191(uParam0);
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
					*uParam2 = 1747;
					break;
				
				case 1:
					*uParam2 = 1748;
					break;
				
				case 2:
					*uParam2 = 1749;
					break;
				
				case 3:
					*uParam2 = 1750;
					break;
				
				case 4:
					*uParam2 = 1751;
					break;
				
				case 5:
					*uParam2 = 1752;
					break;
				
				case 6:
					*uParam2 = 1759;
					break;
				
				case 7:
					*uParam2 = 1760;
					break;
				
				case 8:
					*uParam2 = 1761;
					break;
				
				case 9:
					*uParam2 = 1762;
					break;
				
				case 10:
					*uParam2 = 1763;
					break;
				
				case 11:
					*uParam2 = 1764;
					break;
				
				case 12:
					*uParam2 = 1765;
					break;
				
				case 13:
					*uParam2 = 1773;
					break;
				
				case 14:
					*uParam2 = 1774;
					break;
				
				case 15:
					*uParam2 = 1875;
					break;
				
				case 16:
					*uParam2 = 1876;
					break;
				
				case 17:
					*uParam2 = 1907;
					break;
				
				case 18:
					*uParam2 = 1921;
					break;
				
				case 19:
					*uParam2 = 1922;
					break;
				
				case 20:
					*uParam2 = 1923;
					break;
				
				case 21:
					*uParam2 = 1924;
					break;
				
				case 22:
					*uParam2 = 1925;
					break;
				
				case 23:
					*uParam2 = 2029;
					break;
				
				case 24:
					*uParam2 = 2030;
					break;
				
				case 25:
					*uParam2 = 2056;
					break;
				
				case 26:
					*uParam2 = 2057;
					break;
				
				case 27:
					*uParam2 = 2058;
					break;
				
				case 28:
					*uParam2 = 2059;
					break;
				
				case 29:
					*uParam2 = 2060;
					break;
				
				case 30:
					*uParam2 = 2061;
					break;
				
				case 31:
					*uParam2 = 2062;
					break;
				
				case 32:
					*uParam2 = 2063;
					break;
				
				case 33:
					*uParam2 = 2064;
					break;
				
				case 34:
					*uParam2 = 2065;
					break;
				
				case 35:
					*uParam2 = 2312;
					break;
				
				case 36:
					*uParam2 = 2313;
					break;
				
				case 37:
					*uParam2 = 2361;
					break;
				
				case 38:
					*uParam2 = 2362;
					break;
				
				case 39:
					*uParam2 = 2363;
					break;
				
				case 40:
					*uParam2 = 2364;
					break;
				
				case 41:
					*uParam2 = 2423;
					break;
				
				case 42:
					*uParam2 = 2424;
					break;
				
				case 43:
					*uParam2 = 2425;
					break;
				
				case 44:
					*uParam2 = 2426;
					break;
				
				case 45:
					*uParam2 = 2427;
					break;
				
				case 46:
					*uParam2 = 2428;
					break;
				
				case 47:
					*uParam2 = 2429;
					break;
				
				case 48:
					*uParam2 = 2430;
					break;
				
				case 49:
					*uParam2 = 2431;
					break;
				
				case 50:
					*uParam2 = 2432;
					break;
				
				case 51:
					*uParam2 = 2561;
					break;
				
				case 52:
					*uParam2 = 2562;
					break;
				
				case 53:
					*uParam2 = 2563;
					break;
				
				case 54:
					*uParam2 = 2564;
					break;
				
				case 55:
					*uParam2 = 2565;
					break;
				
				case 56:
					*uParam2 = 2566;
					break;
				
				case 57:
					*uParam2 = 2567;
					break;
				
				case 58:
					*uParam2 = 2568;
					break;
				
				case 59:
					*uParam2 = 2569;
					break;
				
				case 60:
					*uParam2 = 2570;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1753;
					break;
				
				case 1:
					*uParam2 = 1754;
					break;
				
				case 2:
					*uParam2 = 1755;
					break;
				
				case 3:
					*uParam2 = 1756;
					break;
				
				case 4:
					*uParam2 = 1757;
					break;
				
				case 5:
					*uParam2 = 1758;
					break;
				
				case 6:
					*uParam2 = 1766;
					break;
				
				case 7:
					*uParam2 = 1767;
					break;
				
				case 8:
					*uParam2 = 1768;
					break;
				
				case 9:
					*uParam2 = 1769;
					break;
				
				case 10:
					*uParam2 = 1770;
					break;
				
				case 11:
					*uParam2 = 1771;
					break;
				
				case 12:
					*uParam2 = 1772;
					break;
				
				case 13:
					*uParam2 = 1775;
					break;
				
				case 14:
					*uParam2 = 1776;
					break;
				
				case 15:
					*uParam2 = 1877;
					break;
				
				case 16:
					*uParam2 = 1878;
					break;
				
				case 17:
					*uParam2 = 1908;
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
					*uParam2 = 2031;
					break;
				
				case 24:
					*uParam2 = 2032;
					break;
				
				case 25:
					*uParam2 = 2066;
					break;
				
				case 26:
					*uParam2 = 2067;
					break;
				
				case 27:
					*uParam2 = 2068;
					break;
				
				case 28:
					*uParam2 = 2069;
					break;
				
				case 29:
					*uParam2 = 2070;
					break;
				
				case 30:
					*uParam2 = 2071;
					break;
				
				case 31:
					*uParam2 = 2072;
					break;
				
				case 32:
					*uParam2 = 2073;
					break;
				
				case 33:
					*uParam2 = 2074;
					break;
				
				case 34:
					*uParam2 = 2075;
					break;
				
				case 35:
					*uParam2 = 2314;
					break;
				
				case 36:
					*uParam2 = 2315;
					break;
				
				case 37:
					*uParam2 = 2365;
					break;
				
				case 38:
					*uParam2 = 2366;
					break;
				
				case 39:
					*uParam2 = 2367;
					break;
				
				case 40:
					*uParam2 = 2368;
					break;
				
				case 41:
					*uParam2 = 2433;
					break;
				
				case 42:
					*uParam2 = 2434;
					break;
				
				case 43:
					*uParam2 = 2435;
					break;
				
				case 44:
					*uParam2 = 2436;
					break;
				
				case 45:
					*uParam2 = 2437;
					break;
				
				case 46:
					*uParam2 = 2438;
					break;
				
				case 47:
					*uParam2 = 2439;
					break;
				
				case 48:
					*uParam2 = 2440;
					break;
				
				case 49:
					*uParam2 = 2441;
					break;
				
				case 50:
					*uParam2 = 2442;
					break;
				
				case 51:
					*uParam2 = 2571;
					break;
				
				case 52:
					*uParam2 = 2572;
					break;
				
				case 53:
					*uParam2 = 2573;
					break;
				
				case 54:
					*uParam2 = 2574;
					break;
				
				case 55:
					*uParam2 = 2575;
					break;
				
				case 56:
					*uParam2 = 2576;
					break;
				
				case 57:
					*uParam2 = 2577;
					break;
				
				case 58:
					*uParam2 = 2578;
					break;
				
				case 59:
					*uParam2 = 2579;
					break;
				
				case 60:
					*uParam2 = 2580;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 3438;
}

bool func_72(int iParam0)
{
	return Global_35443 == iParam0;
}

int func_73(int iParam0)
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

void func_74(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	Global_68881[0 /*14*/].f_5 = 4;
	func_75(iVar0, iParam0, 0);
}

void func_75(int iParam0, int iParam1, int iParam2)
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
	uVar1 = Global_68881[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar18 = 0;
		iVar19 = unk_0x595BD2F2B16F5120(uVar1, 0);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0x214C432DE602553A(iVar17, &Var2);
			if (!unk_0xA10BCE9255970BC8(Var2.f_0))
			{
				if (iVar18 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2.f_0;
					func_63(&(Global_68881[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar18++;
			}
			iVar17++;
		}
	}
	else if (iParam0 == 13)
	{
		func_63(&(Global_68881[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		unk_0x5E3934D9BA58DB06(&Var20);
		iVar39 = 0;
		iVar40 = unk_0x59D3B25E47CE2137(iVar1, 6, -1, 1, -1, -1);
		iVar38 = 0;
		while (iVar38 < iVar40)
		{
			unk_0xB5977A32A8ED41A9(iVar38, &Var20);
			if (!unk_0xA10BCE9255970BC8(Var20.f_0))
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
					func_63(&(Global_68881[0 /*14*/]), iParam0, iParam1, &(Var20.f_9), Var20.f_3, Var20.f_4, Var20.f_5, unk_0x3FFA0207A02FD5C0(Var20.f_1, joaat("OUTFIT_ONLY"), 0), iVar37, 2, Var20.f_1 != 0);
					return;
				}
				iVar39++;
			}
			iVar38++;
		}
	}
	else
	{
		unk_0xAD8DCC106BB001D2(&Var41);
		iVar59 = 0;
		iVar60 = unk_0x59D3B25E47CE2137(iVar1, 6, -1, 0, -1, func_44(iParam0));
		iVar58 = 0;
		while (iVar58 < iVar60)
		{
			unk_0x9BCFD79653579375(iVar58, &Var41);
			if (!unk_0xA10BCE9255970BC8(Var41.f_0))
			{
				if (iVar59 == (iParam1 - iParam2))
				{
					Global_2621444 = Var41.f_1;
					Global_2621445 = Var41.f_0;
					func_63(&(Global_68881[0 /*14*/]), iParam0, iParam1, &(Var41.f_9), Var41.f_3, Var41.f_4, Var41.f_5, unk_0x3FFA0207A02FD5C0(Var41.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var41.f_1 != 0);
					return;
				}
				iVar59++;
			}
			iVar58++;
		}
	}
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
			Global_68881[0 /*14*/].f_5 = 4;
			func_75(iVar10, iParam0, 9);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
			Global_68881[0 /*14*/].f_5 = 4;
			func_75(iVar10, iParam0, 28);
			return;
			break;
	}
	func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2037[iVar12]) * Global_272114.f_26));
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = (iParam0 - 131);
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2158[iVar13]) * Global_272114.f_27));
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = (iParam0 - 155);
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2183[iVar14]) * Global_272114.f_56));
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = (iParam0 - 319);
		if (iVar15 >= 0 && iVar15 < 10)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2312[iVar15]) * Global_272114.f_28));
		}
	}
	if (iParam0 >= 327)
	{
		Global_68881[0 /*14*/].f_5 = 4;
		func_75(iVar10, iParam0, 327);
		if (Global_68881[0 /*14*/].f_7 > 0)
		{
			if (unk_0x3FFA0207A02FD5C0(Global_2621444, joaat("HAT"), 1))
			{
				Global_68881[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68881[0 /*14*/].f_7) * Global_272114.f_26));
			}
			else if (unk_0x3FFA0207A02FD5C0(Global_2621444, joaat("GLASSES"), 1))
			{
				Global_68881[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68881[0 /*14*/].f_7) * Global_272114.f_56));
			}
			else if (unk_0x3FFA0207A02FD5C0(Global_2621444, joaat("WATCH"), 1))
			{
				Global_68881[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68881[0 /*14*/].f_7) * Global_272114.f_28));
			}
		}
	}
	else
	{
		func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
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
			Global_68881[0 /*14*/].f_5 = 4;
			func_75(iVar10, iParam0, 6);
			return;
			break;
	}
	func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
			if (Global_262145.f_4131 != -1)
			{
				iVar1 = Global_262145.f_4131;
			}
			else
			{
				iVar1 = 310;
			}
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			if (Global_262145.f_4132 != -1)
			{
				iVar1 = Global_262145.f_4132;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			if (Global_262145.f_4133 != -1)
			{
				iVar1 = Global_262145.f_4133;
			}
			else
			{
				iVar1 = 145;
			}
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			if (Global_262145.f_4134 != -1)
			{
				iVar1 = Global_262145.f_4134;
			}
			else
			{
				iVar1 = 130;
			}
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			if (Global_262145.f_4135 != -1)
			{
				iVar1 = Global_262145.f_4135;
			}
			else
			{
				iVar1 = 265;
			}
			break;
		
		case 6:
			iVar6 = 1;
			iVar7 = 5;
			if (Global_262145.f_4136 != -1)
			{
				iVar1 = Global_262145.f_4136;
			}
			else
			{
				iVar1 = 280;
			}
			break;
		
		case 7:
			iVar6 = 2;
			iVar7 = 0;
			if (Global_262145.f_4137 != -1)
			{
				iVar1 = Global_262145.f_4137;
			}
			else
			{
				iVar1 = 295;
			}
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			if (Global_262145.f_4138 != -1)
			{
				iVar1 = Global_262145.f_4138;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			if (Global_262145.f_4139 != -1)
			{
				iVar1 = Global_262145.f_4139;
			}
			else
			{
				iVar1 = 85;
			}
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			if (Global_262145.f_4140 != -1)
			{
				iVar1 = Global_262145.f_4140;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			if (Global_262145.f_4141 != -1)
			{
				iVar1 = Global_262145.f_4141;
			}
			else
			{
				iVar1 = 105;
			}
			break;
		
		case 12:
			iVar6 = 2;
			iVar7 = 5;
			if (Global_262145.f_4142 != -1)
			{
				iVar1 = Global_262145.f_4142;
			}
			else
			{
				iVar1 = 95;
			}
			break;
		
		case 13:
			iVar6 = 3;
			iVar7 = 0;
			if (Global_262145.f_4143 != -1)
			{
				iVar1 = Global_262145.f_4143;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			if (Global_262145.f_4144 != -1)
			{
				iVar1 = Global_262145.f_4144;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			if (Global_262145.f_4145 != -1)
			{
				iVar1 = Global_262145.f_4145;
			}
			else
			{
				iVar1 = 30;
			}
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			if (Global_262145.f_4146 != -1)
			{
				iVar1 = Global_262145.f_4146;
			}
			else
			{
				iVar1 = 40;
			}
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			if (Global_262145.f_4147 != -1)
			{
				iVar1 = Global_262145.f_4147;
			}
			else
			{
				iVar1 = 35;
			}
			break;
		
		case 18:
			iVar6 = 3;
			iVar7 = 5;
			if (Global_262145.f_4148 != -1)
			{
				iVar1 = Global_262145.f_4148;
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
			if (Global_262145.f_4149 != -1)
			{
				iVar1 = Global_262145.f_4149;
			}
			else
			{
				iVar1 = 355;
			}
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 3;
			if (Global_262145.f_4150 != -1)
			{
				iVar1 = Global_262145.f_4150;
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
			if (Global_262145.f_4151 != -1)
			{
				iVar1 = Global_262145.f_4151;
			}
			else
			{
				iVar1 = 110;
			}
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 5;
			if (Global_262145.f_4152 != -1)
			{
				iVar1 = Global_262145.f_4152;
			}
			else
			{
				iVar1 = 160;
			}
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 0;
			if (Global_262145.f_4153 != -1)
			{
				iVar1 = Global_262145.f_4153;
			}
			else
			{
				iVar1 = 385;
			}
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 1;
			if (Global_262145.f_4154 != -1)
			{
				iVar1 = Global_262145.f_4154;
			}
			else
			{
				iVar1 = 190;
			}
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 2;
			if (Global_262145.f_4155 != -1)
			{
				iVar1 = Global_262145.f_4155;
			}
			else
			{
				iVar1 = 235;
			}
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 3;
			if (Global_262145.f_4156 != -1)
			{
				iVar1 = Global_262145.f_4156;
			}
			else
			{
				iVar1 = 220;
			}
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 4;
			if (Global_262145.f_4157 != -1)
			{
				iVar1 = Global_262145.f_4157;
			}
			else
			{
				iVar1 = 250;
			}
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 5;
			if (Global_262145.f_4158 != -1)
			{
				iVar1 = Global_262145.f_4158;
			}
			else
			{
				iVar1 = 205;
			}
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 0;
			if (Global_262145.f_4159 != -1)
			{
				iVar1 = Global_262145.f_4159;
			}
			else
			{
				iVar1 = 445;
			}
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 1;
			if (Global_262145.f_4160 != -1)
			{
				iVar1 = Global_262145.f_4160;
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
			if (Global_262145.f_4161 != -1)
			{
				iVar1 = Global_262145.f_4161;
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
			Global_68881[0 /*14*/].f_5 = 4;
			func_75(iVar10, iParam0, 55);
			if (Global_68881[0 /*14*/].f_7 > 0)
			{
				Global_68881[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68881[0 /*14*/].f_7) * Global_272114.f_58));
			}
			return;
			break;
	}
	iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_272114.f_58));
	StringCopy(&Var2, "T_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
			Global_68881[0 /*14*/].f_5 = 4;
			func_75(iVar10, iParam0, 26);
			if (Global_68881[0 /*14*/].f_7 > 0)
			{
				Global_68881[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68881[0 /*14*/].f_7) * Global_272114.f_29));
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
		iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2010[iVar11]) * Global_272114.f_29));
	}
	func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_82(int iParam0)
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
		iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1753[iVar11]) * Global_272114.f_25));
	}
	if (iParam0 >= 256)
	{
		Global_68881[0 /*14*/].f_5 = 4;
		func_75(iVar10, iParam0, 256);
		if (Global_68881[0 /*14*/].f_7 > 0)
		{
			Global_68881[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68881[0 /*14*/].f_7) * Global_272114.f_25));
		}
	}
	else
	{
		func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_83(int iParam0)
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
		iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1239[iVar11]) * Global_272114.f_23));
	}
	if (iParam0 >= 256)
	{
		Global_68881[0 /*14*/].f_5 = 4;
		func_75(iVar10, iParam0, 256);
		if (Global_68881[0 /*14*/].f_7 > 0)
		{
			Global_68881[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68881[0 /*14*/].f_7) * Global_272114.f_23));
		}
	}
	else
	{
		func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_84(int iParam0)
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
		Global_68881[0 /*14*/].f_5 = 4;
		func_75(iVar10, iParam0, 16);
		return;
	}
	func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_85(int iParam0)
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
		Global_68881[0 /*14*/].f_5 = 4;
		func_75(iVar10, iParam0, 36);
		return;
	}
	func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_86(int iParam0)
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[77]));
			break;
		
		case 48:
			StringCopy(&Var2, "U_FMF_4_14", 16);
			iVar6 = 4;
			iVar7 = 14;
			iVar1 = 40;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[78]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[80]));
			break;
		
		case 51:
			StringCopy(&Var2, "U_FMF_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[81]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[87]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[89]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[176]));
			break;
		
		case 72:
			StringCopy(&Var2, "U_FMF_11_1", 16);
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 95;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[177]));
			break;
		
		case 73:
			StringCopy(&Var2, "U_FMF_11_2", 16);
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 95;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[178]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[186]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMF_11_11", 16);
			iVar6 = 11;
			iVar7 = 11;
			iVar1 = 65;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[187]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[191]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[199]));
			break;
		
		case 95:
			StringCopy(&Var2, "U_FMF_12_8", 16);
			iVar6 = 12;
			iVar7 = 8;
			iVar1 = 195;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[200]));
			break;
		
		case 96:
			StringCopy(&Var2, "U_FMF_12_9", 16);
			iVar6 = 12;
			iVar7 = 9;
			iVar1 = 200;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[201]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[208]));
			break;
		
		case 104:
			StringCopy(&Var2, "U_FMF_13_1", 16);
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 2670;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[209]));
			break;
		
		case 105:
			StringCopy(&Var2, "U_FMF_13_2", 16);
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 480;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[210]));
			break;
		
		case 106:
			StringCopy(&Var2, "U_FMF_13_3", 16);
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 400;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[211]));
			break;
		
		case 107:
			StringCopy(&Var2, "U_FMF_13_4", 16);
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 2500;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[212]));
			break;
		
		case 108:
			StringCopy(&Var2, "U_FMF_13_5", 16);
			iVar6 = 13;
			iVar7 = 5;
			iVar1 = 2060;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[213]));
			break;
		
		case 109:
			StringCopy(&Var2, "U_FMF_13_6", 16);
			iVar6 = 13;
			iVar7 = 6;
			iVar1 = 2620;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[214]));
			break;
		
		case 110:
			StringCopy(&Var2, "U_FMF_13_7", 16);
			iVar6 = 13;
			iVar7 = 7;
			iVar1 = 475;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[215]));
			break;
		
		case 111:
			StringCopy(&Var2, "U_FMF_13_8", 16);
			iVar6 = 13;
			iVar7 = 8;
			iVar1 = 490;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[216]));
			break;
		
		case 112:
			StringCopy(&Var2, "U_FMF_13_9", 16);
			iVar6 = 13;
			iVar7 = 9;
			iVar1 = 2280;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[217]));
			break;
		
		case 113:
			StringCopy(&Var2, "U_FMF_13_10", 16);
			iVar6 = 13;
			iVar7 = 10;
			iVar1 = 485;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[218]));
			break;
		
		case 114:
			StringCopy(&Var2, "U_FMF_13_11", 16);
			iVar6 = 13;
			iVar7 = 11;
			iVar1 = 2390;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[219]));
			break;
		
		case 115:
			StringCopy(&Var2, "U_FMF_13_12", 16);
			iVar6 = 13;
			iVar7 = 12;
			iVar1 = 2610;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[220]));
			break;
		
		case 116:
			StringCopy(&Var2, "U_FMF_13_13", 16);
			iVar6 = 13;
			iVar7 = 13;
			iVar1 = 1450;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[221]));
			break;
		
		case 117:
			StringCopy(&Var2, "U_FMF_13_14", 16);
			iVar6 = 13;
			iVar7 = 14;
			iVar1 = 2720;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[222]));
			break;
		
		case 118:
			StringCopy(&Var2, "U_FMF_13_15", 16);
			iVar6 = 13;
			iVar7 = 15;
			iVar1 = 4995;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[223]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[240]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[243]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[250]));
			break;
		
		case 131:
			StringCopy(&Var2, "U_FMF_15_11", 16);
			iVar6 = 15;
			iVar7 = 11;
			iVar1 = 465;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[251]));
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
			Global_68881[0 /*14*/].f_5 = 4;
			func_75(iVar10, iParam0, 136);
			if (Global_68881[0 /*14*/].f_7 > 0)
			{
				Global_68881[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68881[0 /*14*/].f_7) * Global_272114.f_24));
			}
			return;
			break;
	}
	if (iParam0 == 4 || iParam0 == 20)
	{
		if (func_87(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(1250) * Global_262145.f_2971));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(40) * Global_262145.f_1496[4]));
		}
	}
	else if (iParam0 == 7 || iParam0 == 23)
	{
		if (func_87(88, -1))
		{
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(450) * Global_262145.f_2970));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(45) * Global_262145.f_1496[7]));
		}
	}
	else if (iParam0 == 9 || iParam0 == 25)
	{
		if (func_87(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(500) * Global_262145.f_2969));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(40) * Global_262145.f_1496[9]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 16)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[iVar11]));
		}
	}
	else if (iParam0 >= 16 && iParam0 < 32)
	{
		iVar12 = (iParam0 - 16);
		if (iVar12 >= 0 && iVar12 < 256)
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[iVar12]));
		}
	}
	iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_272114.f_24));
	func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

bool func_87(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_90(iParam0) == 3438)
	{
		return 0;
	}
	iVar0 = func_89(iParam0, iParam1);
	iVar1 = iParam0;
	return unk_0x236D8AD7EE179F46(iVar0, func_88(iVar1));
}

int func_88(int iParam0)
{
	return (iParam0 % 32);
}

int func_89(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_66(func_90(uParam0), iParam1, 0);
	return iVar0;
}

int func_90(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_93(iVar0);
	if ((func_92() == 0 || func_91() == 0) || (func_92() == 999 && func_91() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1028;
				break;
			
			case 1:
				return 1029;
				break;
			
			case 2:
				return 1030;
				break;
			
			case 3:
				return 1031;
				break;
			
			case 4:
				return 1032;
				break;
			
			case 5:
				return 1491;
				break;
			
			case 6:
				return 1744;
				break;
			
			case 7:
				return 1938;
				break;
			
			case 8:
				return 1939;
				break;
			
			case 9:
				return 1940;
				break;
			
			case 10:
				return 1941;
				break;
			
			case 11:
				return 1942;
				break;
			
			case 12:
				return 1943;
				break;
			
			case 13:
				return 2394;
				break;
			
			case 14:
				return 2414;
				break;
			
			case 15:
				return 2417;
				break;
			
			case 16:
				return 2420;
				break;
			
			case 17:
				return 2581;
				break;
			
			case 18:
				return 2584;
				break;
			
			case 19:
				return 2587;
				break;
			}
	}
	return 3438;
}

int func_91()
{
	return Global_24947;
}

int func_92()
{
	return Global_24946;
}

int func_93(int iParam0)
{
	return (iParam0 / 32);
}

void func_94(int iParam0)
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
		if (func_87(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(1250) * Global_262145.f_2971) * Global_272114.f_24));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(40) * Global_262145.f_1496[4]) * Global_272114.f_24));
		}
	}
	else if (iParam0 == 7)
	{
		if (func_87(88, -1))
		{
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(450) * Global_262145.f_2970) * Global_272114.f_24));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(45) * Global_262145.f_1496[7]) * Global_272114.f_24));
		}
	}
	else if (iParam0 == 9)
	{
		if (func_87(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(500) * Global_262145.f_2969) * Global_272114.f_24));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(40) * Global_262145.f_1496[9]) * Global_272114.f_24));
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 256)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1496[iVar11]) * Global_272114.f_24));
		}
	}
	if (iParam0 >= 256)
	{
		Global_68881[0 /*14*/].f_5 = 4;
		func_75(iVar10, iParam0, 256);
		if (Global_68881[0 /*14*/].f_7 > 0)
		{
			Global_68881[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68881[0 /*14*/].f_7) * Global_272114.f_24));
		}
	}
	else
	{
		func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_95(int iParam0)
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[0]));
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 500;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[1]));
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 495;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[2]));
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 490;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[3]));
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 485;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[4]));
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 480;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[5]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[6]));
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 435;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[7]));
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 430;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[8]));
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 425;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[9]));
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 420;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[10]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[11]));
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 185;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[12]));
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 180;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[13]));
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 175;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[14]));
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 170;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[15]));
			break;
		
		case 18:
			iVar6 = 4;
			iVar7 = 0;
			iVar1 = 295;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[16]));
			break;
		
		case 19:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 290;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[17]));
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 285;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[18]));
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 280;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[19]));
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 275;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[20]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[21]));
			break;
		
		case 25:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 1995;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[22]));
			break;
		
		case 26:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 1990;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[23]));
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 1985;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[24]));
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 1980;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[25]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[26]));
			break;
		
		case 31:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 1145;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[27]));
			break;
		
		case 32:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 1140;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[28]));
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 1135;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[29]));
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 1130;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[30]));
			break;
		
		case 35:
			iVar6 = 7;
			iVar7 = 0;
			iVar1 = 550;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[31]));
			break;
		
		case 36:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 545;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[32]));
			break;
		
		case 37:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 540;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[33]));
			break;
		
		case 38:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 535;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[34]));
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 530;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[35]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[36]));
			break;
		
		case 42:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 575;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[37]));
			break;
		
		case 43:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 570;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[38]));
			break;
		
		case 44:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 565;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[39]));
			break;
		
		case 45:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 560;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[40]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[41]));
			break;
		
		case 48:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 1095;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[42]));
			break;
		
		case 49:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 1090;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[43]));
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 1085;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[44]));
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 1080;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[45]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[46]));
			break;
		
		case 54:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 515;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[47]));
			break;
		
		case 55:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 510;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[48]));
			break;
		
		case 56:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 505;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[49]));
			break;
		
		case 57:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 500;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[50]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[51]));
			break;
		
		case 61:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 390;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[52]));
			break;
		
		case 62:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 385;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[53]));
			break;
		
		case 63:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 380;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[54]));
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 375;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[55]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[56]));
			break;
		
		case 68:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 1045;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[57]));
			break;
		
		case 69:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 1040;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[58]));
			break;
		
		case 70:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 1035;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[59]));
			break;
		
		case 71:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 1030;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[60]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[61]));
			break;
		
		case 74:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1195;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[62]));
			break;
		
		case 75:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 1190;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[63]));
			break;
		
		case 76:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 1185;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[64]));
			break;
		
		case 77:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1180;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[65]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[66]));
			break;
		
		case 80:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 470;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[67]));
			break;
		
		case 81:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 465;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[68]));
			break;
		
		case 82:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 460;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[69]));
			break;
		
		case 83:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 455;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[70]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[71]));
			break;
		
		case 86:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 945;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[72]));
			break;
		
		case 87:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 940;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[73]));
			break;
		
		case 88:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 935;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[74]));
			break;
		
		case 89:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 930;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2447[75]));
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
			Global_68881[0 /*14*/].f_5 = 4;
			func_75(iVar10, iParam0, 92);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMF_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_96(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			func_111(iParam1);
			break;
		
		case 11:
			func_110(iParam1);
			break;
		
		case 8:
			func_109(iParam1);
			break;
		
		case 9:
			func_108(iParam1);
			break;
		
		case 3:
			func_107(iParam1);
			break;
		
		case 4:
			func_106(iParam1);
			break;
		
		case 6:
			func_105(iParam1);
			break;
		
		case 1:
			func_104(iParam1);
			break;
		
		case 7:
			func_103(iParam1);
			break;
		
		case 10:
			func_102(iParam1);
			break;
		
		case 14:
			func_101(iParam1);
			break;
		
		case 12:
			func_100(iParam1);
			break;
		
		case 5:
			func_99(iParam1);
			break;
		
		case 0:
			func_98(iParam1);
			break;
		
		case 13:
			func_97(iParam1);
			break;
	}
}

void func_97(int iParam0)
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
	func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_98(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	Global_68881[0 /*14*/].f_5 = 3;
	func_75(iVar0, iParam0, 0);
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
			Global_68881[0 /*14*/].f_5 = 3;
			func_75(iVar10, iParam0, 9);
			return;
			break;
	}
	StringCopy(&Var2, "HA_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
			Global_68881[0 /*14*/].f_5 = 3;
			func_75(iVar10, iParam0, 26);
			return;
			break;
	}
	func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_948[iVar12]) * Global_272114.f_18));
		}
	}
	else if (iVar11 == 2)
	{
		iVar13 = (iParam0 - 131);
		if (iVar13 >= 0 && iVar13 < 24)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1069[iVar13]) * Global_272114.f_19));
		}
	}
	else if (iVar11 == 3)
	{
		iVar14 = (iParam0 - 155);
		if (iVar14 >= 0 && iVar14 < 128)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1094[iVar14]) * Global_272114.f_20));
		}
	}
	else if (iVar11 == 4)
	{
		iVar15 = (iParam0 - 319);
		if (iVar15 >= 0 && iVar15 < 15)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1223[iVar15]) * Global_272114.f_21));
		}
	}
	if (iParam0 >= 327)
	{
		Global_68881[0 /*14*/].f_5 = 3;
		func_75(iVar10, iParam0, 327);
		if (Global_68881[0 /*14*/].f_7 > 0)
		{
			if (unk_0x3FFA0207A02FD5C0(Global_2621444, joaat("HAT"), 1))
			{
				Global_68881[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68881[0 /*14*/].f_7) * Global_272114.f_18));
			}
			else if (unk_0x3FFA0207A02FD5C0(Global_2621444, joaat("GLASSES"), 1))
			{
				Global_68881[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68881[0 /*14*/].f_7) * Global_272114.f_20));
			}
			else if (unk_0x3FFA0207A02FD5C0(Global_2621444, joaat("WATCH"), 1))
			{
				Global_68881[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68881[0 /*14*/].f_7) * Global_272114.f_21));
			}
		}
	}
	else
	{
		func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
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
			Global_68881[0 /*14*/].f_5 = 3;
			func_75(iVar10, iParam0, 7);
			return;
			break;
	}
	func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
			if (Global_262145.f_4162 != -1)
			{
				iVar1 = Global_262145.f_4162;
			}
			else
			{
				iVar1 = 115;
			}
			break;
		
		case 42:
			iVar6 = 10;
			iVar7 = 1;
			if (Global_262145.f_4163 != -1)
			{
				iVar1 = Global_262145.f_4163;
			}
			else
			{
				iVar1 = 125;
			}
			break;
		
		case 43:
			iVar6 = 10;
			iVar7 = 2;
			if (Global_262145.f_4164 != -1)
			{
				iVar1 = Global_262145.f_4164;
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
			if (Global_262145.f_4168 != -1)
			{
				iVar1 = Global_262145.f_4168;
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
			if (Global_262145.f_4165 != -1)
			{
				iVar1 = Global_262145.f_4165;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 74:
			iVar6 = 12;
			iVar7 = 1;
			if (Global_262145.f_4166 != -1)
			{
				iVar1 = Global_262145.f_4166;
			}
			else
			{
				iVar1 = 65;
			}
			break;
		
		case 75:
			iVar6 = 12;
			iVar7 = 2;
			if (Global_262145.f_4167 != -1)
			{
				iVar1 = Global_262145.f_4167;
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
			Global_68881[0 /*14*/].f_5 = 3;
			func_75(iVar10, iParam0, 92);
			if (Global_68881[0 /*14*/].f_7 > 0)
			{
				Global_68881[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68881[0 /*14*/].f_7) * Global_272114.f_57));
			}
			return;
			break;
	}
	iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_272114.f_57));
	StringCopy(&Var2, "T_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
			Global_68881[0 /*14*/].f_5 = 3;
			func_75(iVar10, iParam0, 26);
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
		iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_921[iVar11]) * Global_272114.f_22));
	}
	func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_105(int iParam0)
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
		iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_664[iVar11]) * Global_272114.f_17));
	}
	StringCopy(&Var2, "F_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	if (iParam0 >= 256)
	{
		Global_68881[0 /*14*/].f_5 = 3;
		func_75(iVar10, iParam0, 256);
		if (Global_68881[0 /*14*/].f_7 > 0)
		{
			Global_68881[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68881[0 /*14*/].f_7) * Global_272114.f_17));
		}
	}
	else
	{
		func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_106(int iParam0)
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
		iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_169[iVar11]) * Global_272114.f_15));
	}
	if (iParam0 >= 256)
	{
		Global_68881[0 /*14*/].f_5 = 3;
		func_75(iVar10, iParam0, 256);
		if (Global_68881[0 /*14*/].f_7 > 0)
		{
			Global_68881[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68881[0 /*14*/].f_7) * Global_272114.f_15));
		}
	}
	else
	{
		func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_107(int iParam0)
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
			Global_68881[0 /*14*/].f_5 = 3;
			func_75(iVar10, iParam0, 16);
			return;
			break;
	}
	func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_108(int iParam0)
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
			Global_68881[0 /*14*/].f_5 = 3;
			func_75(iVar10, iParam0, 46);
			return;
			break;
	}
	func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &sVar2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
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
			if (Global_262145.f_4171 != -1)
			{
				iVar1 = Global_262145.f_4171;
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
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
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
			if (Global_262145.f_4174 != -1)
			{
				iVar1 = Global_262145.f_4174;
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
			if (Global_262145.f_4171 != -1)
			{
				iVar1 = Global_262145.f_4171;
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
			if (Global_262145.f_4179 != -1)
			{
				iVar1 = Global_262145.f_4179;
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
			if (Global_262145.f_4174 != -1)
			{
				iVar1 = Global_262145.f_4174;
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_426[80]));
			break;
		
		case 81:
			StringCopy(&Var2, "U_FMM_5_1", 16);
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 45;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_426[81]));
			break;
		
		case 82:
			StringCopy(&Var2, "U_FMM_5_2", 16);
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 50;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_426[82]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_426[87]));
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
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
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
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
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
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
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
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
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
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
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
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
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
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
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
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
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
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
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
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
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
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
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
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
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
			if (Global_262145.f_4177 != -1)
			{
				iVar1 = Global_262145.f_4177;
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
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
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
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
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
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
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
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
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
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
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
			if (Global_262145.f_4170 != -1)
			{
				iVar1 = Global_262145.f_4170;
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
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
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
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
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
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
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
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
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
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
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
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
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
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
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
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
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
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
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
			if (Global_262145.f_4177 != -1)
			{
				iVar1 = Global_262145.f_4177;
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
			if (Global_262145.f_4172 != -1)
			{
				iVar1 = Global_262145.f_4172;
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
			if (Global_262145.f_4187 != -1)
			{
				iVar1 = Global_262145.f_4187;
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
			if (Global_262145.f_4180 != -1)
			{
				iVar1 = Global_262145.f_4180;
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
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
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
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
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
			if (Global_262145.f_4176 != -1)
			{
				iVar1 = Global_262145.f_4176;
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
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
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
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
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
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
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
			if (Global_262145.f_4175 != -1)
			{
				iVar1 = Global_262145.f_4175;
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
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
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
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
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
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
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
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
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
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
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
			if (Global_262145.f_4173 != -1)
			{
				iVar1 = Global_262145.f_4173;
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
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
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
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
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
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
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
			if (Global_262145.f_4192 != -1)
			{
				iVar1 = Global_262145.f_4192;
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
			if (Global_262145.f_4190 != -1)
			{
				iVar1 = Global_262145.f_4190;
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
			if (Global_262145.f_4176 != -1)
			{
				iVar1 = Global_262145.f_4176;
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
			if (Global_262145.f_4184 != -1)
			{
				iVar1 = Global_262145.f_4184;
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
			if (Global_262145.f_4169 != -1)
			{
				iVar1 = Global_262145.f_4169;
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
			if (Global_262145.f_4186 != -1)
			{
				iVar1 = Global_262145.f_4186;
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
			if (Global_262145.f_4175 != -1)
			{
				iVar1 = Global_262145.f_4175;
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
			if (Global_262145.f_4189 != -1)
			{
				iVar1 = Global_262145.f_4189;
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
			if (Global_262145.f_4185 != -1)
			{
				iVar1 = Global_262145.f_4185;
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
			if (Global_262145.f_4178 != -1)
			{
				iVar1 = Global_262145.f_4178;
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
			if (Global_262145.f_4183 != -1)
			{
				iVar1 = Global_262145.f_4183;
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
			if (Global_262145.f_4181 != -1)
			{
				iVar1 = Global_262145.f_4181;
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
			if (Global_262145.f_4173 != -1)
			{
				iVar1 = Global_262145.f_4173;
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
			if (Global_262145.f_4188 != -1)
			{
				iVar1 = Global_262145.f_4188;
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
			if (Global_262145.f_4191 != -1)
			{
				iVar1 = Global_262145.f_4191;
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
			if (Global_262145.f_4182 != -1)
			{
				iVar1 = Global_262145.f_4182;
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_426[16]));
			break;
		
		case 225:
			StringCopy(&Var2, "U_FMM_1_1", 16);
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 60;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_426[17]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_426[19]));
			break;
		
		case 228:
			StringCopy(&Var2, "U_FMM_1_4", 16);
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 315;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_426[20]));
			break;
		
		case 229:
			StringCopy(&Var2, "U_FMM_1_5", 16);
			iVar6 = 14;
			iVar7 = 5;
			iVar1 = 215;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_426[21]));
			break;
		
		case 230:
			StringCopy(&Var2, "U_FMM_1_6", 16);
			iVar6 = 14;
			iVar7 = 6;
			iVar1 = 265;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_426[22]));
			break;
		
		case 231:
			StringCopy(&Var2, "U_FMM_1_7", 16);
			iVar6 = 14;
			iVar7 = 7;
			iVar1 = 45;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_426[23]));
			break;
		
		case 232:
			StringCopy(&Var2, "U_FMM_1_8", 16);
			iVar6 = 14;
			iVar7 = 8;
			iVar1 = 205;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_426[24]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_426[27]));
			break;
		
		case 236:
			StringCopy(&Var2, "U_FMM_1_12", 16);
			iVar6 = 14;
			iVar7 = 12;
			iVar1 = 55;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_426[28]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_426[30]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_426[32]));
			break;
	}
	if (iParam0 == 23 || iParam0 == 231)
	{
		if (func_87(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(1250) * Global_262145.f_2971));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(45) * Global_262145.f_426[23]));
		}
	}
	else if (iParam0 == 17 || iParam0 == 225)
	{
		if (func_87(88, -1))
		{
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(450) * Global_262145.f_2970));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(60) * Global_262145.f_426[17]));
		}
	}
	else if (iParam0 == 28 || iParam0 == 236)
	{
		if (func_87(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(500) * Global_262145.f_2969));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(55) * Global_262145.f_426[28]));
		}
	}
	else if (iParam0 >= 0 && iParam0 < 32)
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_426[iVar11]));
		}
	}
	else if (iParam0 >= 32 && iParam0 < 48)
	{
		iVar12 = (iParam0 - 32);
		if (iVar12 >= 0 && iVar12 < 237)
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_426[iVar12]));
		}
	}
	else if (iParam0 >= 128 && iParam0 < 160)
	{
		iVar13 = (iParam0 - 160) + 124;
		if (iVar13 >= 0 && iVar13 < 237)
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_426[iVar13]));
		}
	}
	else if (iParam0 >= 192 && iParam0 < 224)
	{
		iVar14 = (iParam0 - 160) + 188;
		if (iVar14 >= 0 && iVar14 < 237)
		{
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_426[iVar14]));
		}
	}
	iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_272114.f_16));
	if (iParam0 >= 241)
	{
		Global_68881[0 /*14*/].f_5 = 3;
		func_75(iVar10, iParam0, 241);
		if (Global_68881[0 /*14*/].f_7 > 0)
		{
			Global_68881[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68881[0 /*14*/].f_7) * Global_272114.f_16));
		}
	}
	else
	{
		func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_110(int iParam0)
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
		if (func_87(89, -1))
		{
			StringCopy(&Var2, "REW_RS", 16);
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(1250) * Global_262145.f_2971) * Global_272114.f_16));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(45) * Global_262145.f_426[23]) * Global_272114.f_16));
		}
	}
	else if (iParam0 == 17)
	{
		if (func_87(88, -1))
		{
			StringCopy(&Var2, "REW_LSB", 16);
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(450) * Global_262145.f_2970) * Global_272114.f_16));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(60) * Global_262145.f_426[17]) * Global_272114.f_16));
		}
	}
	else if (iParam0 == 28)
	{
		if (func_87(87, -1))
		{
			StringCopy(&Var2, "REW_REDSK", 16);
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(500) * Global_262145.f_2969) * Global_272114.f_16));
		}
		else
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(55) * Global_262145.f_426[28]) * Global_272114.f_16));
		}
	}
	else
	{
		iVar11 = iParam0;
		if (iVar11 >= 0 && iVar11 < 237)
		{
			iVar1 = unk_0xF2DB717A73826179(((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_426[iVar11]) * Global_272114.f_16));
		}
	}
	if (iParam0 >= 237)
	{
		Global_68881[0 /*14*/].f_5 = 3;
		func_75(iVar10, iParam0, 237);
		if (Global_68881[0 /*14*/].f_7 > 0)
		{
			Global_68881[0 /*14*/].f_7 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(Global_68881[0 /*14*/].f_7) * Global_272114.f_16));
		}
	}
	else
	{
		func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
	}
}

void func_111(int iParam0)
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[0]));
			break;
		
		case 1:
			iVar6 = 1;
			iVar7 = 0;
			iVar1 = 190;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[1]));
			break;
		
		case 2:
			iVar6 = 1;
			iVar7 = 1;
			iVar1 = 185;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[2]));
			break;
		
		case 3:
			iVar6 = 1;
			iVar7 = 2;
			iVar1 = 180;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[3]));
			break;
		
		case 4:
			iVar6 = 1;
			iVar7 = 3;
			iVar1 = 175;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[4]));
			break;
		
		case 5:
			iVar6 = 1;
			iVar7 = 4;
			iVar1 = 170;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[5]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[6]));
			break;
		
		case 8:
			iVar6 = 2;
			iVar7 = 1;
			iVar1 = 575;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[7]));
			break;
		
		case 9:
			iVar6 = 2;
			iVar7 = 2;
			iVar1 = 570;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[8]));
			break;
		
		case 10:
			iVar6 = 2;
			iVar7 = 3;
			iVar1 = 565;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[9]));
			break;
		
		case 11:
			iVar6 = 2;
			iVar7 = 4;
			iVar1 = 560;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[10]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[11]));
			break;
		
		case 14:
			iVar6 = 3;
			iVar7 = 1;
			iVar1 = 1095;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[12]));
			break;
		
		case 15:
			iVar6 = 3;
			iVar7 = 2;
			iVar1 = 1090;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[13]));
			break;
		
		case 16:
			iVar6 = 3;
			iVar7 = 3;
			iVar1 = 1085;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[14]));
			break;
		
		case 17:
			iVar6 = 3;
			iVar7 = 4;
			iVar1 = 1080;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[15]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[16]));
			break;
		
		case 20:
			iVar6 = 4;
			iVar7 = 1;
			iVar1 = 515;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[17]));
			break;
		
		case 21:
			iVar6 = 4;
			iVar7 = 2;
			iVar1 = 510;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[18]));
			break;
		
		case 22:
			iVar6 = 4;
			iVar7 = 3;
			iVar1 = 505;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[19]));
			break;
		
		case 23:
			iVar6 = 4;
			iVar7 = 4;
			iVar1 = 500;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[20]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[21]));
			break;
		
		case 27:
			iVar6 = 5;
			iVar7 = 1;
			iVar1 = 290;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[22]));
			break;
		
		case 28:
			iVar6 = 5;
			iVar7 = 2;
			iVar1 = 285;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[23]));
			break;
		
		case 29:
			iVar6 = 5;
			iVar7 = 3;
			iVar1 = 280;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[24]));
			break;
		
		case 30:
			iVar6 = 5;
			iVar7 = 4;
			iVar1 = 275;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[25]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[26]));
			break;
		
		case 33:
			iVar6 = 6;
			iVar7 = 1;
			iVar1 = 945;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[27]));
			break;
		
		case 34:
			iVar6 = 6;
			iVar7 = 2;
			iVar1 = 940;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[28]));
			break;
		
		case 35:
			iVar6 = 6;
			iVar7 = 3;
			iVar1 = 935;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[29]));
			break;
		
		case 36:
			iVar6 = 6;
			iVar7 = 4;
			iVar1 = 930;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[30]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[31]));
			break;
		
		case 39:
			iVar6 = 7;
			iVar7 = 1;
			iVar1 = 435;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[32]));
			break;
		
		case 40:
			iVar6 = 7;
			iVar7 = 2;
			iVar1 = 430;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[33]));
			break;
		
		case 41:
			iVar6 = 7;
			iVar7 = 3;
			iVar1 = 425;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[34]));
			break;
		
		case 42:
			iVar6 = 7;
			iVar7 = 4;
			iVar1 = 420;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[35]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[36]));
			break;
		
		case 46:
			iVar6 = 8;
			iVar7 = 1;
			iVar1 = 1145;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[37]));
			break;
		
		case 47:
			iVar6 = 8;
			iVar7 = 2;
			iVar1 = 1140;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[38]));
			break;
		
		case 48:
			iVar6 = 8;
			iVar7 = 3;
			iVar1 = 1135;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[39]));
			break;
		
		case 49:
			iVar6 = 8;
			iVar7 = 4;
			iVar1 = 1130;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[40]));
			break;
		
		case 50:
			iVar6 = 9;
			iVar7 = 0;
			iVar1 = 395;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[41]));
			break;
		
		case 51:
			iVar6 = 9;
			iVar7 = 1;
			iVar1 = 390;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[42]));
			break;
		
		case 52:
			iVar6 = 9;
			iVar7 = 2;
			iVar1 = 385;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[43]));
			break;
		
		case 53:
			iVar6 = 9;
			iVar7 = 3;
			iVar1 = 380;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[44]));
			break;
		
		case 54:
			iVar6 = 9;
			iVar7 = 4;
			iVar1 = 375;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[45]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[46]));
			break;
		
		case 58:
			iVar6 = 10;
			iVar7 = 1;
			iVar1 = 495;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[47]));
			break;
		
		case 59:
			iVar6 = 10;
			iVar7 = 2;
			iVar1 = 490;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[48]));
			break;
		
		case 60:
			iVar6 = 10;
			iVar7 = 3;
			iVar1 = 485;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[49]));
			break;
		
		case 61:
			iVar6 = 10;
			iVar7 = 4;
			iVar1 = 480;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[50]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[51]));
			break;
		
		case 64:
			iVar6 = 11;
			iVar7 = 1;
			iVar1 = 1045;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[52]));
			break;
		
		case 65:
			iVar6 = 11;
			iVar7 = 2;
			iVar1 = 1040;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[53]));
			break;
		
		case 66:
			iVar6 = 11;
			iVar7 = 3;
			iVar1 = 1035;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[54]));
			break;
		
		case 67:
			iVar6 = 11;
			iVar7 = 4;
			iVar1 = 1030;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[55]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[56]));
			break;
		
		case 70:
			iVar6 = 12;
			iVar7 = 1;
			iVar1 = 545;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[57]));
			break;
		
		case 71:
			iVar6 = 12;
			iVar7 = 2;
			iVar1 = 540;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[58]));
			break;
		
		case 72:
			iVar6 = 12;
			iVar7 = 3;
			iVar1 = 535;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[59]));
			break;
		
		case 73:
			iVar6 = 12;
			iVar7 = 4;
			iVar1 = 530;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[60]));
			break;
		
		case 74:
			iVar6 = 13;
			iVar7 = 0;
			iVar1 = 1200;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[61]));
			break;
		
		case 75:
			iVar6 = 13;
			iVar7 = 1;
			iVar1 = 1195;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[62]));
			break;
		
		case 76:
			iVar6 = 13;
			iVar7 = 2;
			iVar1 = 1190;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[63]));
			break;
		
		case 77:
			iVar6 = 13;
			iVar7 = 3;
			iVar1 = 1185;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[64]));
			break;
		
		case 78:
			iVar6 = 13;
			iVar7 = 4;
			iVar1 = 1180;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[65]));
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
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[66]));
			break;
		
		case 81:
			iVar6 = 14;
			iVar7 = 1;
			iVar1 = 1995;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[67]));
			break;
		
		case 82:
			iVar6 = 14;
			iVar7 = 2;
			iVar1 = 1990;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[68]));
			break;
		
		case 83:
			iVar6 = 14;
			iVar7 = 3;
			iVar1 = 1985;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[69]));
			break;
		
		case 84:
			iVar6 = 14;
			iVar7 = 4;
			iVar1 = 1980;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[70]));
			break;
		
		case 85:
			iVar6 = 15;
			iVar7 = 0;
			iVar1 = 475;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[71]));
			break;
		
		case 86:
			iVar6 = 15;
			iVar7 = 1;
			iVar1 = 470;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[72]));
			break;
		
		case 87:
			iVar6 = 15;
			iVar7 = 2;
			iVar1 = 465;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[73]));
			break;
		
		case 88:
			iVar6 = 15;
			iVar7 = 3;
			iVar1 = 460;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[74]));
			break;
		
		case 89:
			iVar6 = 15;
			iVar7 = 4;
			iVar1 = 455;
			iVar1 = unk_0xF2DB717A73826179((unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_2524[75]));
			break;
		
		case 90:
			iVar6 = 15;
			iVar7 = 5;
			iVar1 = 0;
			break;
		
		default:
			Global_68881[0 /*14*/].f_5 = 3;
			func_75(iVar10, iParam0, 91);
			return;
			break;
	}
	StringCopy(&Var2, "H_FMM_", 16);
	StringIntConCat(&Var2, iVar6, 16);
	StringConCat(&Var2, "_", 16);
	StringIntConCat(&Var2, iVar7, 16);
	func_63(&(Global_68881[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}

void func_112()
{
	Global_68881[0 /*14*/].f_1 = -1;
	Global_68881[0 /*14*/].f_2 = -1;
	Global_68881[0 /*14*/].f_5 = -1;
	Global_68881[0 /*14*/].f_3 = -1;
	Global_68881[0 /*14*/].f_4 = -1;
	Global_68881[0 /*14*/].f_7 = 0;
	Global_68881[0 /*14*/].f_6 = 0;
	Global_68881[0 /*14*/].f_13 = -1;
	Global_68881[0 /*14*/].f_12 = 0;
	Global_68881[0 /*14*/] = 0;
	StringCopy(&(Global_68881[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_113(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x5FEB513A4402FD59(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_121(iParam0, iParam1, iVar0))
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
				if (func_121(iParam0, iParam1, iVar1))
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
				return func_116(iParam0, iParam2);
			}
		}
		else
		{
			return func_114(iParam0, iParam1);
		}
	}
	return -99;
}

int func_114(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || unk_0x5FEB513A4402FD59(iParam0))
	{
		return -99;
	}
	iVar0 = func_44(iParam1);
	iVar1 = unk_0x1CFC95A2D6BABBA2(iParam0, iVar0);
	iVar2 = unk_0x2933140C98919EB1(iParam0, iVar0);
	return func_115(iParam0, iVar1, iVar2, iParam1);
}

int func_115(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_44(iParam3);
	iVar1 = unk_0x89139BEEC678B31C(uParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = unk_0xFBC1944E2EB324D7(uParam0, iVar0, iVar3);
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

int func_116(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5FEB513A4402FD59(iParam0))
	{
		return -99;
	}
	iVar0 = unk_0x0F7FE22229DBD748(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return func_120(iParam1);
	}
	iVar1 = unk_0xC2F100D1D0DEC7FF(iParam0, iParam1);
	return func_117(iParam0, iVar0, iVar1, iParam1);
}

int func_117(int iParam0, int iParam1, int iParam2, int iParam3)
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
		return func_120(iParam3);
	}
	iVar0 = unk_0x14B7103DBD149FFE(iParam0);
	iVar1 = unk_0xB22EF0FC5ACA6867(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != -1 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_119(unk_0x14B7103DBD149FFE(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_119(unk_0x14B7103DBD149FFE(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = unk_0xE0DCE4D5111ABAA6(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = unk_0xF7AC8C5F75E87E39(iParam0, iParam3, iVar4);
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
					iVar3 = (iVar3 + func_118(iParam0, iParam3));
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
	return func_120(iParam3);
}

int func_118(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x14B7103DBD149FFE(iParam0);
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

int func_119(int iParam0, int iParam1, int iParam2, int iParam3)
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
		unk_0x5E3934D9BA58DB06(&Var0);
		iVar18 = 0;
		iVar19 = unk_0x59D3B25E47CE2137(iParam3, 6, -1, 1, -1, -1);
		iVar17 = 0;
		while (iVar17 < iVar19)
		{
			unk_0xB5977A32A8ED41A9(iVar17, &Var0);
			if (!unk_0xA10BCE9255970BC8(Var0.f_0))
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
		unk_0xAD8DCC106BB001D2(&Var20);
		iVar38 = 0;
		iVar39 = unk_0x59D3B25E47CE2137(iParam3, 6, -1, 0, -1, func_44(iParam2));
		iVar37 = 0;
		while (iVar37 < iVar39)
		{
			unk_0x9BCFD79653579375(iVar37, &Var20);
			if (!unk_0xA10BCE9255970BC8(Var20.f_0))
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

int func_120(int iParam0)
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

int func_121(int iParam0, int iParam1, int iParam2)
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
	
	if (unk_0x5FEB513A4402FD59(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x14B7103DBD149FFE(iParam0);
	Global_68881[1 /*14*/] = { func_60(iVar0, iParam1, iParam2) };
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!unk_0x236D8AD7EE179F46(Global_68881[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_132(iVar0, iParam2) };
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
				if (!func_121(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar24 = { func_129(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_121(iParam0, 14, uVar24[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_68881[2 /*14*/] = { func_60(iVar0, 14, iVar6) };
									if (Global_68881[2 /*14*/].f_12 == iVar5)
									{
										if (func_121(iParam0, 14, iVar6))
										{
											if (!func_125(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_68881[2 /*14*/])))
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
						iVar1 = func_114(iParam0, iVar4);
						Global_68881[2 /*14*/] = { func_60(iVar0, iVar4, iVar1) };
						if (!func_125(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_68881[2 /*14*/])))
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
			if (func_66(1745, Global_68879, 0) != uVar8[10])
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
		uVar35 = { func_129(iVar0, iParam2) };
		iVar34 = 0;
		while (iVar34 <= 8)
		{
			if (!func_121(iParam0, 14, uVar35[iVar34]))
			{
				return 0;
			}
			iVar34++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (unk_0x0F7FE22229DBD748(iParam0, Global_68881[1 /*14*/].f_12) == Global_68881[1 /*14*/].f_3 && (unk_0xC2F100D1D0DEC7FF(iParam0, Global_68881[1 /*14*/].f_12) == Global_68881[1 /*14*/].f_4 || Global_68881[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else
	{
		if (Global_68881[1 /*14*/].f_3 == unk_0x1CFC95A2D6BABBA2(iParam0, func_44(iParam1)) && Global_68881[1 /*14*/].f_4 == unk_0x2933140C98919EB1(iParam0, func_44(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			if (func_124(iVar0, 11, func_114(iParam0, 11)))
			{
				if (func_123(iVar0, 4, iParam2, &uVar45))
				{
					return func_121(iParam0, 4, uVar45);
				}
			}
			else if (func_122(iVar0, 4, iParam2, &uVar45))
			{
				return func_121(iParam0, 4, uVar45);
			}
		}
	}
	return 0;
}

int func_122(int iParam0, int iParam1, int iParam2, var uParam3)
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
							iVar1 = unk_0x0BDF1216A20FD120(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0x82329B65F2148F59(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (!unk_0x3FFA0207A02FD5C0(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_119(iParam0, iVar3, iParam1, 4);
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

int func_123(int iParam0, int iParam1, int iParam2, var uParam3)
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
							iVar1 = unk_0x0BDF1216A20FD120(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								unk_0x82329B65F2148F59(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != joaat("0"))
									{
										if (unk_0x3FFA0207A02FD5C0(iVar3, joaat("DRESS_LEGS"), 0))
										{
											*uParam3 = func_119(iParam0, iVar3, iParam1, 4);
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

int func_124(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						return unk_0x3FFA0207A02FD5C0(func_42(iParam0, iParam2, 11, 4), joaat("DRESS"), 0);
					}
					break;
			}
			break;
	}
	return 0;
}

int func_125(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)
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
		uVar0 = { func_129(iParam0, (*uParam4)[13]) };
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
	if (func_128(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_127(iParam0, iParam2, iParam3))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_126(iParam0, iParam2, iParam3))
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
		if (func_127(iParam0, iParam2, iParam3))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_126(iParam0, iParam2, iParam3))
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
		if (func_127(iParam0, iParam2, iParam3))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_126(iParam0, iParam2, iParam3))
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

int func_126(int iParam0, int iParam1, int iParam2)
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
					if (unk_0x3FFA0207A02FD5C0(uVar0, joaat("HAT"), 0))
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
					if (unk_0x3FFA0207A02FD5C0(uVar1, joaat("HAT"), 0))
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

int func_127(int iParam0, int iParam1, int iParam2)
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
					return unk_0x3FFA0207A02FD5C0(func_42(iParam0, iParam2, 14, 3), joaat("GLASSES"), 1);
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
					return unk_0x3FFA0207A02FD5C0(func_42(iParam0, iParam2, 14, 4), joaat("GLASSES"), 1);
				}
			}
			break;
	}
	return 0;
}

int func_128(int iParam0, int iParam1, int iParam2)
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

struct<10> func_129(int iParam0, int iParam1)
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
					func_131(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_131(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_131(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_131(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_131(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_131(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_131(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_131(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_131(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_131(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_131(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_130(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_131(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_131(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_131(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_131(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_131(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_131(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_131(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_131(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_131(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_131(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_130(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_131(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_131(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_131(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_131(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_131(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_131(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_131(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_131(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_131(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_131(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_130(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_131(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_131(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_131(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_131(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_131(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_131(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_131(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_131(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_131(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_131(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_131(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_131(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_131(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_131(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_131(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_131(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_131(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_131(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_131(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_131(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_131(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_131(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_131(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_131(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_131(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_131(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_130(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_131(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_131(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_131(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_131(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_131(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_131(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_131(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_131(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_131(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_131(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_131(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_131(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_131(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_131(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_131(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_131(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_131(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_131(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_131(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_131(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_131(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_131(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_131(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_131(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_131(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_130(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_130(int iParam0, int iParam1, int iParam2, int iParam3)
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
		unk_0xA3AB272961770D24(iParam2, &Var1);
		if (!unk_0xA10BCE9255970BC8(Var1.f_0))
		{
			iVar19 = 0;
			while (iVar19 < Var1.f_3)
			{
				if (unk_0xB1607F12CB04AA17(Var1.f_1, iVar19, &Var16) && Var16.f_2 != -1)
				{
					if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
					{
						(*iParam0)[Var16.f_2] = func_119(iParam1, Var16.f_0, 14, iVar0);
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

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

struct<16> func_132(int iParam0, int iParam1)
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
					if (Global_98931.f_7699.f_99.f_58[120])
					{
						func_135(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_135(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_135(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_135(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_135(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_135(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_135(&Var1, -99, -99, Global_98931.f_1750.f_539.f_196[0], Global_98931.f_1750.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_135(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_135(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_135(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_135(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_135(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_135(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_135(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_135(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_135(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_135(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_135(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_135(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_135(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_135(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_135(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_135(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_135(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_135(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_135(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_135(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_135(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_135(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_135(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_135(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_135(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_135(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_135(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_135(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_135(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_135(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_135(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_135(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_135(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_135(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_135(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_135(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_135(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_135(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_135(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_135(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_135(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_135(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_135(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_135(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_135(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_135(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_135(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_133(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_135(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_135(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_135(&Var1, -99, -99, Global_98931.f_1750.f_539.f_196[1], Global_98931.f_1750.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_135(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_135(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_135(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_135(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_135(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_135(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_135(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_135(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_135(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_135(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_135(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_135(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_135(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_135(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_135(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_135(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_135(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_135(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_135(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_135(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_135(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_135(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_135(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_135(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_135(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_135(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_135(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_135(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_135(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_135(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_135(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_135(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_135(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_135(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_135(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_135(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_135(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_135(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_135(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_135(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_135(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_135(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_135(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_135(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_133(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_135(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_135(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_135(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_135(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_135(&Var1, -99, -99, Global_98931.f_1750.f_539.f_196[2], Global_98931.f_1750.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_135(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_135(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_135(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_135(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_135(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_135(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_135(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_135(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_135(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_135(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_135(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_135(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_135(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_135(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_135(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_135(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_135(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_135(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_135(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_135(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_135(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_135(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_135(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_135(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_135(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_135(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_135(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_135(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_135(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_135(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_135(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_135(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_135(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_135(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_135(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_135(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_135(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_135(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_135(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_135(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_135(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_135(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_135(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_133(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_135(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_135(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_135(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_135(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_135(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_135(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_135(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_135(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_135(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_135(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_135(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_135(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_135(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_135(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_135(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_135(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_135(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_135(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_135(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_135(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_135(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_135(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_135(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_135(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_135(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_135(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_133(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_135(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_135(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_135(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_135(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_135(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_135(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_135(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_135(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_135(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_135(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_135(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_135(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_135(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_135(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_135(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_135(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_135(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_135(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_135(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_135(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_135(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_135(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_135(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_135(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_135(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_135(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_135(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_135(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_133(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_133(int iParam0, int iParam1, int iParam2, int iParam3)
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
	unk_0x595BD2F2B16F5120(iVar0, 0);
	unk_0x214C432DE602553A((iParam2 - iParam3), &Var1);
	if (!unk_0xA10BCE9255970BC8(Var1.f_0))
	{
		iVar19 = 0;
		while (iVar19 < Var1.f_4)
		{
			if (unk_0x960C577F342A71AC(Var1.f_1, iVar19, &Var16))
			{
				if ((Var16.f_0 != 0 && Var16.f_0 != -1) && Var16.f_0 != joaat("0"))
				{
					if (Var16.f_2 == 10)
					{
						(*iParam0)[func_134(Var16.f_2)] = Var16.f_0;
					}
					else
					{
						(*iParam0)[func_134(Var16.f_2)] = func_119(iParam1, Var16.f_0, func_134(Var16.f_2), iVar0);
					}
				}
				else if (Var16.f_1 != -1)
				{
					(*iParam0)[func_134(Var16.f_2)] = Var16.f_1;
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

int func_134(int iParam0)
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

void func_135(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

bool func_136(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x1329891157A54C63())
	{
		bVar0 = func_137(-1, 0) == 8;
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

int func_137(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_23();
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

int func_138()
{
	if (func_140())
	{
		return 1;
	}
	if (func_139())
	{
		return 1;
	}
	return 0;
}

int func_139()
{
	if (Global_2422670.f_614.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_140()
{
	return Global_88451;
}

void func_141()
{
	if (((func_10(unk_0x1329891157A54C63(), 1, 1) && !func_5(unk_0x1329891157A54C63())) && !func_337(unk_0x1329891157A54C63())) && func_325())
	{
		if (Local_2163[unk_0x519AAFF77CC141DF() /*7*/].f_2 == 1)
		{
			func_142("AMBC_PREP", 0);
		}
		else if (Local_2163[unk_0x519AAFF77CC141DF() /*7*/].f_2 == 3)
		{
			func_142("AMBC_START", 0);
		}
		else
		{
			func_155();
		}
	}
	else
	{
		func_155();
	}
}

void func_142(char* sParam0, bool bParam1)
{
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return;
	}
	if (unk_0xA84EEA1DAC64D0D5(sParam0) > 23)
	{
		return;
	}
	if (func_152(sParam0))
	{
		return;
	}
	func_146();
	Global_1312577 = 0;
	StringCopy(&(Global_1312577.f_1), unk_0x11CA2334E341B424(), 24);
	Global_1312577.f_7 = unk_0x8DAF7A748E41AD46(&(Global_1312577.f_1));
	StringCopy(&(Global_1312577.f_10), sParam0, 16);
	func_145();
	func_144(bParam1);
	func_143();
}

void func_143()
{
	unk_0xF3148AAF69AF9CBC(&(Global_1312577.f_39), 1);
}

void func_144(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1312577.f_39), 0);
		return;
	}
	unk_0xC69E84EBBD7166E6(&(Global_1312577.f_39), 0);
}

void func_145()
{
	Global_1312577.f_8 = unk_0x372240B0254847DF(unk_0xD74C7D8D2E5E43D2(), 86400000);
	Global_1312577.f_9 = unk_0xD74C7D8D2E5E43D2();
}

void func_146()
{
	func_148();
	func_147(0);
}

void func_147(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x1C6DF6AD69BE853E();
	Global_1312577 = 12;
	StringCopy(&(Global_1312577.f_1), "", 24);
	Global_1312577.f_7 = 0;
	if (bVar0)
	{
		Global_1312577.f_8 = unk_0xD74C7D8D2E5E43D2();
		Global_1312577.f_9 = unk_0xD74C7D8D2E5E43D2();
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

void func_148()
{
	if (!func_151())
	{
	}
	if (func_150())
	{
		unk_0x10F61CB44B66BBDE(&(Global_1312577.f_10));
		func_149();
		unk_0x311B25F9901AB37A();
	}
}

void func_149()
{
	switch (Global_1312577)
	{
		case 12:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x6D55FF05D62B91BC(Global_1312577.f_34);
			return;
		
		case 2:
			unk_0x6D55FF05D62B91BC(Global_1312577.f_34);
			unk_0x6D55FF05D62B91BC(Global_1312577.f_35);
			return;
		
		case 3:
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_14));
			return;
		
		case 4:
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_14));
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_30));
			return;
		
		case 5:
			unk_0x6222A57F463E8EE7(&(Global_1312577.f_14));
			return;
		
		case 6:
			unk_0xDB5ED960DFB0E4DF(Global_1312577.f_38);
			unk_0x6222A57F463E8EE7(&(Global_1312577.f_14));
			return;
		
		case 7:
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_14));
			return;
		
		case 8:
			unk_0xDB5ED960DFB0E4DF(Global_1312577.f_38);
			unk_0x072D7B028D6C7A05(&(Global_1312577.f_14));
			return;
		
		case 9:
			unk_0x92D1853394E2386A(&(Global_1312577.f_14));
			return;
		
		case 10:
			unk_0x6222A57F463E8EE7(&(Global_1312577.f_14));
			unk_0x6222A57F463E8EE7(&(Global_1312577.f_30));
			return;
		
		case 11:
			unk_0x92D1853394E2386A(&(Global_1312577.f_14));
			return;
		
		default:
	}
}

int func_150()
{
	if (Global_1312577 == 12)
	{
		return 0;
	}
	return 1;
}

int func_151()
{
	if (!func_150())
	{
		return 0;
	}
	unk_0x35C3DC3A3BE08CC1(&(Global_1312577.f_10));
	func_149();
	return unk_0x8BF06EFC37AF94F0();
}

bool func_152(char* sParam0)
{
	if (!func_150())
	{
		return 0;
	}
	if (Global_1312577 == 11)
	{
		return func_153(sParam0);
	}
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return 0;
	}
	return unk_0x8DAF7A748E41AD46(sParam0) == unk_0x8DAF7A748E41AD46(&(Global_1312577.f_10));
}

bool func_153(char* sParam0)
{
	if (!func_150())
	{
		return 0;
	}
	if (unk_0xB318FDA0D1ABDB20(sParam0))
	{
		return 0;
	}
	return unk_0x8DAF7A748E41AD46(sParam0) == unk_0x8DAF7A748E41AD46(&(Global_1312577.f_14));
}

void func_154()
{
	if (!unk_0x236D8AD7EE179F46(iLocal_97, 3))
	{
		unk_0x90312EB2231FB786();
		unk_0xF3148AAF69AF9CBC(&iLocal_97, 3);
	}
}

void func_155()
{
	if (!func_150())
	{
		return;
	}
	if (!unk_0x8DAF7A748E41AD46(unk_0x11CA2334E341B424()) == Global_1312577.f_7)
	{
		return;
	}
	func_146();
}

void func_156()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (!unk_0x236D8AD7EE179F46(Local_2163[unk_0x519AAFF77CC141DF() /*7*/].f_1, 0))
	{
		if (func_5(unk_0x1329891157A54C63()))
		{
			unk_0xF3148AAF69AF9CBC(&(Local_2163[unk_0x519AAFF77CC141DF() /*7*/].f_1), 0);
			return;
		}
		if (func_337(unk_0x1329891157A54C63()))
		{
			unk_0xF3148AAF69AF9CBC(&(Local_2163[unk_0x519AAFF77CC141DF() /*7*/].f_1), 0);
			return;
		}
		func_216(&iVar0, &iVar1);
		Local_2388.f_6 = iVar0;
		if (!Global_262145.f_9263)
		{
			if (Local_2388.f_6 > 0)
			{
				func_215(18, Local_2388.f_6);
			}
		}
		Local_2388.f_7 = iVar1;
		if (iVar0 > 0)
		{
			if (func_214())
			{
				func_207(-934465332, iVar0, &uVar2, 0, 1);
			}
			else
			{
				unk_0xFEF1B8BDBF81B2E4(iVar0, "AM_CRIMINAL_DAMAGE", &uVar3);
			}
			Global_2438858 = iVar0;
		}
		if (iVar1 > 0)
		{
			func_206();
			func_157(0, unk_0x81873881071CD9FE(), "", -1636175450, 1712590420, iVar1, 1, -1, 0, 0);
		}
		unk_0xF3148AAF69AF9CBC(&(Local_2163[unk_0x519AAFF77CC141DF() /*7*/].f_1), 0);
	}
}

int func_157(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	return func_158(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9);
}

int func_158(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_168(iParam0, uParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0x86CCCD2FAE9D5E65(iParam1))
		{
			if (unk_0xCF0C46D719D5302C(iParam1))
			{
				iVar1 = unk_0x8F1CCE5AF629C4D3(iParam1);
				func_164(unk_0xC91EFAB304EB7DE6(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8);
			}
		}
	}
	else
	{
		func_159(iParam1, iVar0, sParam8);
	}
	return iVar0;
}

void func_159(int iParam0, int iParam1, char* sParam2)
{
	struct<3> Var0;
	
	Var0 = { func_162(iParam0, 1) };
	if (iParam0 == func_161(unk_0x81873881071CD9FE()))
	{
		func_160(1);
	}
	func_164(Var0, iParam1, 0, sParam2);
}

void func_160(int iParam0)
{
	Global_2422670.f_1321 = iParam0;
}

int func_161(int iParam0)
{
	return iParam0;
}

Vector3 func_162(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (iParam0 == func_163(unk_0x81873881071CD9FE()) && unk_0x7FCE6803A3D23268(unk_0x60FC347BF9CAD1BD()) == 4)
	{
		Var0 = { unk_0xB07F27EC3B05E4EA(iParam0, 0f, 2f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0xB6AE0DAE06D56288(iParam0, 0) };
	}
	fVar3 = 0f;
	if (!unk_0x930F8FBB8E9537CC(iParam0))
	{
		fVar3 = unk_0x3306AAAFE3B25098(iParam0);
	}
	unk_0x01C5E7A27762AF21(unk_0x14B7103DBD149FFE(iParam0), &Var4, &Var7);
	if (bParam1)
	{
		fVar10 = (Var7.f_2 + 0.18f);
	}
	else
	{
		fVar10 = (Var4.f_2 + 0.18f);
	}
	Var0 = { unk_0x957F1AE07A974C5E(Var0, fVar3, 0f, 0f, fVar10) };
	return Var0;
}

int func_163(int iParam0)
{
	return iParam0;
}

void func_164(struct<3> Param0, int iParam3, int iParam4, char* sParam5)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2422670.f_740[iVar0 /*29*/].f_6 == 0 || Global_2422670.f_740[iVar0 /*29*/].f_6 == 6)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2422670.f_740[iVar1 /*29*/] = { Param0 };
			Global_2422670.f_740[iVar1 /*29*/].f_6 = 1;
			Global_2422670.f_740[iVar1 /*29*/].f_4 = func_167(Global_2422670.f_740[iVar1 /*29*/], &Global_1312317, &Global_1312318);
			Global_2422670.f_740[iVar1 /*29*/].f_7 = unk_0xD74C7D8D2E5E43D2();
			Global_2422670.f_740[iVar1 /*29*/].f_3 = iParam3;
			Global_2422670.f_740[iVar1 /*29*/].f_8 = iParam4;
			Global_2422670.f_740[iVar1 /*29*/].f_9 = func_166();
			Global_2422670.f_740[iVar1 /*29*/].f_10 = func_165();
			StringCopy(&(Global_2422670.f_740[iVar1 /*29*/].f_22), sParam5, 16);
		}
	}
}

int func_165()
{
	if (Global_2422670.f_1321)
	{
		Global_2422670.f_1321 = 0;
		return 1;
	}
	Global_2422670.f_1321 = 0;
	return 0;
}

var func_166()
{
	var uVar0;
	
	uVar0 = Global_2422670.f_1323;
	Global_2422670.f_1323 = 1;
	return uVar0;
}

float func_167(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x0D6E79537424BACE(unk_0xF37444D33840484C(), Param0, 1);
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

var func_168(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_169(iParam0, 0, uParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_169(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_205(unk_0x1329891157A54C63()) || func_204(unk_0x1329891157A54C63()))
	{
		if (Global_262145.f_7419 > 8000)
		{
			iVar2 = 8000;
		}
		else
		{
			iVar2 = Global_262145.f_7419;
		}
	}
	else if (Global_262145.f_5001 > 5000)
	{
		iVar2 = 5000;
	}
	else
	{
		iVar2 = Global_262145.f_5001;
	}
	if (func_203(uParam2))
	{
	}
	if (func_202())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = unk_0xF2DB717A73826179((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_200(iVar1);
		fVar3 = (unk_0xBBDA792448DB5A89(iVar1) * Global_262145.f_1);
		iVar1 = unk_0xF2DB717A73826179(fVar3);
		if (bParam10)
		{
			iVar1 = func_199(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_196(0, &iVar1);
					break;
				
				case 3:
					func_196(1, &iVar1);
					break;
				
				case 1:
					func_192(&iVar1);
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
			func_190(1154, iVar1, -1);
			if (iParam1 == 0)
			{
				func_180((func_189(unk_0x1329891157A54C63()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xF1B1DC822A238E16(iVar1, iParam8, iParam9);
				if (Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_2 != -1)
				{
					func_190(1155, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_174(iVar1);
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
				func_170((func_172(unk_0x1329891157A54C63()) + iVar1));
			}
			else
			{
				func_170((func_172(unk_0x1329891157A54C63()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_170(int iParam0)
{
	if (func_202())
	{
		Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_5 = iParam0;
		func_171(joaat("mpply_globalxp"), iParam0);
	}
}

void func_171(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, uParam1, 1);
	}
}

int func_172(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_10(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x1329891157A54C63())
			{
				return func_173(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1585045[iParam0 /*400*/].f_192.f_5;
			}
		}
		else
		{
			return func_173(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_173(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = iParam0;
	if (unk_0x85C45034BA638694(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_174(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_179(unk_0x1329891157A54C63()) };
	if (unk_0x80622F5ED5957337())
	{
		if (unk_0x464883E45616A088(&Var0))
		{
			iVar13 = func_177(func_178(&Var0));
			if (iVar13 == 0)
			{
				func_176(&Global_1343557, iParam0);
				func_175(joaat("mpply_crew_local_xp_0"), Global_1343557);
			}
			else if (iVar13 == 1)
			{
				func_176(&Global_1343558, iParam0);
				func_175(joaat("mpply_crew_local_xp_1"), Global_1343558);
			}
			else if (iVar13 == 2)
			{
				func_176(&Global_1343559, iParam0);
				func_175(joaat("mpply_crew_local_xp_2"), Global_1343559);
			}
			else if (iVar13 == 3)
			{
				func_176(&Global_1343560, iParam0);
				func_175(joaat("mpply_crew_local_xp_3"), Global_1343560);
			}
			else if (iVar13 == 4)
			{
				func_176(&Global_1343561, iParam0);
				func_175(joaat("mpply_crew_local_xp_4"), Global_1343561);
			}
		}
	}
}

void func_175(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, uParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1343552 = uParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1343554 = uParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1343554 = uParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1343555 = uParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1343556 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1343557 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1343558 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1343559 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1343560 = uParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1343561 = uParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1343562 = uParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1343563 = uParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1343564 = uParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1343565 = uParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1343566 = uParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1343567 = uParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1343568 = uParam1;
			break;
		
		default:
			break;
	}
}

void func_176(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_177(int iParam0)
{
	if (iParam0 == Global_1343552)
	{
		return 0;
	}
	else if (iParam0 == Global_1343553)
	{
		return 1;
	}
	else if (iParam0 == Global_1343554)
	{
		return 2;
	}
	else if (iParam0 == Global_1343555)
	{
		return 3;
	}
	else if (iParam0 == Global_1343556)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_178(var uParam0)
{
	if (unk_0x80622F5ED5957337())
	{
		if (unk_0x464883E45616A088(uParam0))
		{
			return Global_2436916;
		}
	}
	return Global_2436916;
}

struct<13> func_179(int iParam0)
{
	struct<13> Var0;
	
	unk_0x73231AB7B8BD1CD1(iParam0, &Var0, 13);
	return Var0;
}

void func_180(int iParam0, int iParam1, int iParam2)
{
	if (func_202())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_7394 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1343672[func_67(-1)])
				{
					unk_0xF1B1DC822A238E16(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1343672[func_67(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_7393 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xF1B1DC822A238E16(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_7393 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xF1B1DC822A238E16(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_188(unk_0x1329891157A54C63()))
		{
			Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_1 = iParam0;
			Global_1585045[unk_0x1329891157A54C63() /*400*/].f_192.f_6 = func_186(iParam0, 1);
		}
		func_185(629, iParam0, -1, 1);
		func_184(630, func_186(iParam0, 1), -1, 1);
		Global_1343672[func_67(-1)] = iParam0;
		func_181(7, 0);
	}
}

void func_181(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_183(iParam0, iParam1))
	{
		iVar0 = func_182();
		Global_2436893[iVar0] = iParam0;
	}
}

int func_182()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2436893[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_183(int iParam0, var uParam1)
{
	if (Global_1315880)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1315892) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_184(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_67(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, iParam3);
	}
}

void func_185(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2459767[iParam0 /*5*/][func_67(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x123B783056E76C4E(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 777:
			Global_1343618[func_67(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1343624[func_67(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1343630[func_67(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1343636[func_67(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1343594[func_67(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1343600[func_67(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1343606[func_67(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1343612[func_67(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1343570[func_67(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1343576[func_67(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1343582[func_67(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1343588[func_67(iParam2)] = iParam1;
			break;
		
		case 747:
			Global_1343642[func_67(iParam2)] = iParam1;
			break;
		
		case 748:
			Global_1343648[func_67(iParam2)] = iParam1;
			break;
		
		case 749:
			Global_1343654[func_67(iParam2)] = iParam1;
			break;
		
		case 750:
			Global_1343660[func_67(iParam2)] = iParam1;
			break;
		
		case 1292:
			Global_1343666[func_67(iParam2)] = iParam1;
			break;
		
		case 629:
			Global_1343672[func_67(iParam2)] = iParam1;
			break;
		
		case 1267:
			Global_1343678[func_67(iParam2)] = iParam1;
			break;
		
		case 1864:
			Global_2480427[0 /*6*/][func_67(iParam2)] = iParam1;
			break;
		
		case 2255:
			Global_2480427[1 /*6*/][func_67(iParam2)] = iParam1;
			break;
		
		case 2899:
			Global_2480427[2 /*6*/][func_67(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1343684[func_67(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1343690[func_67(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1343696[func_67(iParam2)] = iParam1;
			break;
		
		case 1225:
			Global_1343702[func_67(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_186(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_187(iParam0, 0);
}

int func_187(int iParam0, int iParam1)
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
		if (Global_272182[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_272182[iVar3] < iParam0)
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

int func_188(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0x236D8AD7EE179F46(Global_2422670.f_1, iParam0);
	}
	return 1;
}

int func_189(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x1329891157A54C63())
			{
				return Global_1343672[func_67(-1)];
			}
			else if (func_188(iParam0))
			{
				return Global_1585045[iParam0 /*400*/].f_192.f_1;
			}
		}
	}
	else
	{
		return Global_1343672[func_67(-1)];
	}
	return 0;
}

void func_190(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_66(iParam0, func_67(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_191(iParam0))
	{
		func_184(iParam0, iVar0, iParam2, 1);
	}
	else
	{
		func_185(iParam0, iVar0, iParam2, 1);
	}
}

int func_191(int iParam0)
{
	if (Global_1343551)
	{
		switch (iParam0)
		{
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 747:
			case 748:
			case 749:
			case 750:
			case 1292:
			case 629:
			case 1267:
			case 754:
			case 755:
			case 756:
			case 1225:
			case 1864:
			case 2255:
			case 2899:
				return 1;
				break;
			}
	}
	return 0;
}

void func_192(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0xCCFDB2B968281FE8(unk_0x1329891157A54C63());
	iVar0 = 0;
	while (iVar0 < unk_0x945535897333587B())
	{
		iVar4 = unk_0xC3904F8771F37B7F(iVar0);
		if (unk_0xC4FEBC724D547D78(iVar4))
		{
			iVar5 = unk_0x29A638E7EEEE6B16(iVar4);
			if (unk_0xCCFDB2B968281FE8(iVar5) != -1)
			{
				if (unk_0xCCFDB2B968281FE8(iVar5) == iVar1 || func_195(unk_0xCCFDB2B968281FE8(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x1329891157A54C63())
					{
						if (func_194(unk_0x1329891157A54C63(), iVar5))
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
		iVar6 = unk_0xF2DB717A73826179((func_193(*iParam0, 100) * (10f * Global_262145.f_4208)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = unk_0xF2DB717A73826179((func_193(*iParam0, 100) * (20f * Global_262145.f_4201)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_193(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0xBBDA792448DB5A89(iParam0);
	fVar1 = unk_0xBBDA792448DB5A89(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_194(int iParam0, int iParam1)
{
	if (unk_0x80622F5ED5957337())
	{
		Global_2450501 = { func_179(iParam0) };
		Global_2450514 = { func_179(iParam1) };
		if (unk_0x464883E45616A088(&Global_2450501))
		{
			if (unk_0x464883E45616A088(&Global_2450514))
			{
				unk_0xEF956A1EC046AA4A(&Global_2450431, 35, &Global_2450501);
				unk_0xEF956A1EC046AA4A(&Global_2450466, 35, &Global_2450514);
				if (Global_2450431 == Global_2450466)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_195(int iParam0, int iParam1, int iParam2)
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
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 0);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 1);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 2);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 4);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 5);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 6);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 8);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 9);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 10);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 12);
				
				case 1:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 13);
				
				case 2:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 14);
				
				case 3:
					return unk_0x236D8AD7EE179F46(Global_1607808.f_36, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_196(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0x945535897333587B())
		{
			iVar3 = iVar0;
			if (unk_0xC4FEBC724D547D78(iVar3))
			{
				iVar4 = unk_0x29A638E7EEEE6B16(iVar3);
				if (func_10(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x1329891157A54C63())
					{
						iVar1++;
						if (func_194(unk_0x1329891157A54C63(), iVar4))
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
				if (iVar4 != unk_0x1329891157A54C63())
				{
					if (func_197(unk_0x1329891157A54C63(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_194(unk_0x1329891157A54C63(), iVar4))
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
		iVar5 = unk_0xF2DB717A73826179((func_193(*iParam1, 100) * (10f * Global_262145.f_4208)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = unk_0xF2DB717A73826179((func_193(*iParam1, 100) * (20f * Global_262145.f_4201)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_197(int iParam0, int iParam1)
{
	return unk_0x2A488C176D52CCA5(func_198(iParam0), func_198(iParam1));
	return 0f;
}

Vector3 func_198(int iParam0)
{
	return unk_0xB6AE0DAE06D56288(unk_0xE495E987CB2BE7EF(iParam0), 0);
}

int func_199(int iParam0)
{
	int iVar0;
	
	if (unk_0xF349F5727BA73619() != 3)
	{
		return *iParam0;
	}
	iVar0 = unk_0xF2DB717A73826179((func_193(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_200(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x013F97B9D88B92CA(iParam0) > func_189(unk_0x1329891157A54C63()))
		{
			iParam0 = -func_189(unk_0x1329891157A54C63());
		}
	}
	if (func_201(8000, 0, 0) > 0)
	{
		if (func_201(8000, 0, 0) < (iParam0 + func_189(unk_0x1329891157A54C63())))
		{
			iParam0 = (func_201(8000, 0, 0) - func_189(unk_0x1329891157A54C63()));
		}
	}
	return iParam0;
}

int func_201(int iParam0, bool bParam1, int iParam2)
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
	return Global_272182[iParam0];
}

int func_202()
{
	return 1;
}

int func_203(var uParam0)
{
	if (unk_0x4357449749A521B1(uParam0))
	{
		return 1;
	}
	else if (unk_0xD994929E13CC1ED5(uParam0, "") || unk_0xD994929E13CC1ED5(uParam0, "0"))
	{
		return 1;
	}
	return 0;
}

bool func_204(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 2;
}

bool func_205(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 7;
}

void func_206()
{
	Global_2438030 = 1;
}

void func_207(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (!func_214())
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
				func_208(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_208(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_208(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	
	bVar0 = false;
	if (!func_214())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x077FF247AF837AEC(func_23()) || unk_0x2FABBA9E4D234344())
		{
			Global_2545975 = 1;
			return 0;
		}
		if (Global_2437720)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_2545976 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_2545514[iVar1 /*69*/].f_2 == 0)
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
	if (bVar0 || unk_0x08F28BBA457D0639(&iVar3, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if (bVar0 || unk_0xAECF50B5A74D109D(iVar3))
		{
			*uParam0 = func_213(iVar3, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7);
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_2545514[*uParam0 /*69*/].f_62 = 1;
				}
			}
			Global_2545972 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_2545974 = 1;
			Global_2545977 = iParam4;
			Global_2545979 = iParam3;
			Global_2545980 = 1;
			Global_2545978 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_2545977 = iParam4;
			Global_2545979 = iParam3;
			Global_2545980 = 1;
			Global_2545978 = iParam5;
		}
		bVar4 = false;
		if (bVar4)
		{
			func_212(1, iParam4);
			Global_2545974 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_209(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_209(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xF3148AAF69AF9CBC(&(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_121.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_210(iParam0);
	}
}

void func_210(int iParam0)
{
	bool bVar0;
	struct<69> Var1;
	
	bVar0 = false;
	if (!func_214())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_211(iParam0))
		{
			if (!bVar0)
			{
				unk_0x9FC03E9C1F7C60AB();
			}
		}
		else if (!bVar0)
		{
			unk_0x314D4CB8F27D3283(Global_2545514[iParam0 /*69*/]);
		}
		Var1 = 2147483647;
		Global_2545514[iParam0 /*69*/] = { Var1 };
	}
}

int func_211(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_2545514[iParam0 /*69*/].f_5 == 1;
	}
	return 0;
}

void func_212(int iParam0, var uParam1)
{
	Global_2438972 = uParam1;
	Global_2438971 = iParam0;
}

int func_213(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_2545514[iVar0 /*69*/].f_2 == 0)
		{
			if (!func_214())
			{
				iParam0 = iVar0 + 900;
			}
			Global_2545514[iVar0 /*69*/].f_2 = 1;
			Global_2545514[iVar0 /*69*/].f_1 = uParam5;
			Global_2545514[iVar0 /*69*/].f_3 = uParam1;
			Global_2545514[iVar0 /*69*/].f_4 = uParam2;
			Global_2545514[iVar0 /*69*/].f_7 = uParam3;
			Global_2545514[iVar0 /*69*/].f_5 = 0;
			Global_2545514[iVar0 /*69*/] = iParam0;
			Global_2545514[iVar0 /*69*/].f_6 = iParam4;
			Global_2545514[iVar0 /*69*/].f_65 = uParam8;
			Global_2545514[iVar0 /*69*/].f_64 = uParam7;
			Global_2545514[iVar0 /*69*/].f_68 = 0;
			Global_2545972 = 0;
			if (bParam6)
			{
				Global_2545514[iVar0 /*69*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_214()
{
	if (unk_0x913B1C01C1BA6C6F())
	{
		return 1;
	}
	return 0;
}

void func_215(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		Global_2451473.f_269 = iParam0;
		if (iParam1 > Global_262145.f_4951)
		{
			iParam1 = Global_262145.f_4951;
		}
		Global_2451473.f_270 = iParam1;
		Global_2451473.f_271 = 0;
	}
}

void func_216(var uParam0, var uParam1)
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
	if (Local_2163[unk_0x519AAFF77CC141DF() /*7*/].f_3 >= func_230() || func_229())
	{
		fVar0 = func_228();
		fVar1 = func_227();
		iVar2 = func_226();
		iVar3 = func_225();
		iVar4 = Local_2163[unk_0x519AAFF77CC141DF() /*7*/].f_3;
		iVar5 = 0;
		iVar6 = 0;
		iVar7 = 0;
		iVar8 = 0;
		if (func_270(0))
		{
			iVar5 = func_224();
			iVar6 = func_223();
		}
		else
		{
			func_221(1);
		}
		if (iVar4 > func_220())
		{
			iVar4 = func_220();
		}
		iVar9 = unk_0xF34EE736CF047844(((unk_0xBBDA792448DB5A89((Local_111.f_2 - iLocal_107)) / 60f) / 1000f));
		if (iVar9 > Global_262145.f_9203)
		{
			iVar9 = Global_262145.f_9203;
		}
		else if (iVar9 < 1)
		{
			iVar9 = 1;
		}
		iVar7 = (func_219() * iVar9);
		iVar8 = (func_218() * iVar9);
		*uParam0 = func_217(unk_0xF2DB717A73826179(((IntToFloat(((iVar2 + unk_0xF34EE736CF047844((IntToFloat(iVar4) * fVar0))) + iVar5)) * Global_262145.f_9204) + IntToFloat(iVar7))), 50, 0);
		*uParam1 = func_217(unk_0xF2DB717A73826179(((IntToFloat(((iVar3 + unk_0xF34EE736CF047844((IntToFloat(iVar4) * fVar1))) + iVar6)) * Global_262145.f_9205) + IntToFloat(iVar8))), 50, 0);
	}
	else
	{
		func_221(0);
	}
}

int func_217(int iParam0, int iParam1, int iParam2)
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

int func_218()
{
	return Global_262145.f_8748;
}

int func_219()
{
	return Global_262145.f_8747;
}

int func_220()
{
	return Global_262145.f_9236;
}

void func_221(bool bParam0)
{
	if (bParam0)
	{
		if (func_222(1))
		{
			unk_0xF3148AAF69AF9CBC(&Global_1573891, 1);
		}
	}
	else if (func_222(2))
	{
		unk_0xF3148AAF69AF9CBC(&Global_1573891, 2);
	}
}

int func_222(int iParam0)
{
	var uVar0;
	
	uVar0 = func_66(2506, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0x236D8AD7EE179F46(uVar0, 0) && unk_0x236D8AD7EE179F46(iVar0, 1)) && unk_0x236D8AD7EE179F46(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0x236D8AD7EE179F46(iVar0, 3) && unk_0x236D8AD7EE179F46(iVar0, 4)) && unk_0x236D8AD7EE179F46(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0x236D8AD7EE179F46(iVar0, 6) && unk_0x236D8AD7EE179F46(iVar0, 7)) && unk_0x236D8AD7EE179F46(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0x236D8AD7EE179F46(iVar0, 9) && unk_0x236D8AD7EE179F46(iVar0, 10)) && unk_0x236D8AD7EE179F46(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_223()
{
	return Global_262145.f_9235;
}

int func_224()
{
	return Global_262145.f_9234;
}

var func_225()
{
	return Global_262145.f_8750;
}

var func_226()
{
	return Global_262145.f_8749;
}

var func_227()
{
	return Global_262145.f_9233;
}

var func_228()
{
	return Global_262145.f_9232;
}

int func_229()
{
	if ((func_270(0) || func_270(1)) || func_270(2))
	{
		return 1;
	}
	return 0;
}

int func_230()
{
	return Global_262145.f_8756;
}

void func_231()
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	
	if (!unk_0x236D8AD7EE179F46(Local_2163[unk_0x519AAFF77CC141DF() /*7*/].f_1, 1) && (func_237() || unk_0x236D8AD7EE179F46(Local_111.f_1, 0)))
	{
		func_236();
		if (!unk_0x236D8AD7EE179F46(Local_111.f_1, 0))
		{
			if (func_271(0))
			{
				uVar1 = Local_2163[unk_0x519AAFF77CC141DF() /*7*/].f_3;
				func_235(&iVar0, uVar1);
				if (func_270(0))
				{
					func_234(72, iVar0, "AMBC_WIN", "AMCH_WIN", 1, 15000, -1082130432, 2);
				}
				else
				{
					uVar2 = unk_0xC3904F8771F37B7F(Local_111.f_4[0]);
					if (unk_0xC4FEBC724D547D78(uVar2))
					{
						if (func_270(1))
						{
							func_234(72, iVar0, "AMBC_2ND", "AMCH_OVER", 1, 15000, -1082130432, 2);
						}
						else if (func_270(2))
						{
							func_234(72, iVar0, "AMBC_3RD", "AMCH_OVER", 1, 15000, -1082130432, 2);
						}
						else
						{
							iVar3 = unk_0x29A638E7EEEE6B16(iVar2);
							uVar1 = Local_2163[Local_111.f_4[0] /*7*/].f_3;
							func_235(&iVar0, uVar1);
							func_233(77, iVar0, "AMBC_LOSE", unk_0xB67DF8F35744CF60(iVar3), "AMPP_LOSER", 1, 15000, 2);
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
		unk_0xF3148AAF69AF9CBC(&(Local_2163[unk_0x519AAFF77CC141DF() /*7*/].f_1), 1);
		func_232(144);
	}
}

void func_232(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

int func_233(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
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

int func_234(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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

void func_235(int iParam0, var uParam1)
{
	*iParam0 = uParam1;
}

void func_236()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2422670.f_2137[iVar0 /*70*/].f_2 != 0)
		{
			Global_2422670.f_2137[iVar0 /*70*/].f_2 = 5;
			unk_0xF3148AAF69AF9CBC(&(Global_2422670.f_2137[iVar0 /*70*/].f_63), 0);
		}
		iVar0++;
	}
}

bool func_237()
{
	return unk_0x236D8AD7EE179F46(Global_1573867.f_1, 25);
}

int func_238(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (*uParam0 > 0 && !func_243())
	{
		func_242();
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
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 25);
				if (bParam1)
				{
					unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4403), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_241(uParam0, 1);
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
				func_240();
				func_241(uParam0, 2);
			}
			break;
		
		case 2:
			func_240();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_239("AMEV_LBD_HELP"))
				{
					unk_0xB8BB626315D394F5(1);
				}
				func_241(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4403), 1);
				func_241(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4403), 1);
			return 1;
	}
	return 0;
}

bool func_239(char* sParam0)
{
	unk_0xF7F787102FC9BCAC(sParam0);
	return unk_0xEF468B98099969A5(0);
}

void func_240()
{
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_4403, 0))
	{
		if (((((!unk_0x2DD54246D4BB0A20() && !unk_0x236D8AD7EE179F46(Global_2451473.f_734, 2)) && func_10(unk_0x1329891157A54C63(), 1, 1)) && !Global_67710) && !Global_52584) && !unk_0x29AFA2493D7C23D0())
		{
			unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4403), 1);
			func_322("AMEV_LBD_HELP", -1);
			func_321(1);
			unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4403), 0);
		}
	}
}

void func_241(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_242()
{
	Global_2438031 = 1;
}

bool func_243()
{
	return Global_2422670.f_2137[0 /*70*/].f_1 != 0;
}

void func_244()
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
	
	if (Local_111.f_4[0] > -1)
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
			if (Local_111.f_4[iVar11] > -1)
			{
				uVar15 = unk_0xC3904F8771F37B7F(Local_111.f_4[iVar11]);
				if (unk_0xC4FEBC724D547D78(uVar15))
				{
					iVar4 = unk_0x29A638E7EEEE6B16(iVar15);
					if (func_10(iVar4, 0, 1))
					{
						if (!func_136(iVar4, 0))
						{
							iVar0[iVar11] = iVar4;
							uVar5[iVar11] = Local_2163[Local_111.f_4[iVar11] /*7*/].f_3;
						}
					}
				}
			}
			iVar11++;
		}
		if (func_265(unk_0x1329891157A54C63()))
		{
			iVar16 = func_262();
			iVar17 = unk_0x1B503E81E3B3D65F(iVar16);
			if (unk_0xA89AE5060232966A(iVar17))
			{
				uVar18 = unk_0x563980A76107BC80(iVar17);
				if (unk_0xC4FEBC724D547D78(uVar18))
				{
					iVar12 = iVar18;
				}
			}
		}
		else
		{
			iVar12 = unk_0x519AAFF77CC141DF();
		}
		iVar9 = func_318(0, Local_2163[iVar12 /*7*/].f_3);
		iVar10 = func_318(0, (func_15() - func_320(&(Local_111.f_39), 0, 0)));
		func_261(iVar10);
		if (iVar10 > 30000)
		{
			iVar14 = 1;
		}
		else
		{
			iVar14 = 6;
		}
		func_245(iVar0[0], iVar0[1], iVar0[2], uVar5[0], uVar5[1], uVar5[2], iVar9, iVar10, &iVar13, iVar14, func_258());
	}
}

void func_245(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, char* sParam10)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_255(0) == 0)
	{
		return;
	}
	func_254();
	iVar1 = 0;
	if (((Global_2437628[0] != iParam0 || Global_2437628[1] != iParam1) || Global_2437628[2] != iParam2) || *iParam8)
	{
		iVar1 = 1;
	}
	Global_2437628[0] = iParam0;
	Global_2437628[1] = iParam1;
	Global_2437628[2] = iParam2;
	Global_2437628[3] = 0;
	Global_2437628[4] = 0;
	if (Global_2437628[0] != func_34())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xB67DF8F35744CF60(Global_2437628[0]);
			Global_2437634[0 /*16*/] = { func_253(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_250(iParam3, &(Global_2437634[0 /*16*/]), -1, 109, 7, 1, "HUD_CASH", 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0);
		}
	}
	if (Global_2437628[1] != func_34())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xB67DF8F35744CF60(Global_2437628[1]);
			Global_2437634[1 /*16*/] = { func_253(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_250(iParam4, &(Global_2437634[1 /*16*/]), -1, 108, 6, 1, "HUD_CASH", 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0);
		}
	}
	if (Global_2437628[2] != func_34())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0xB67DF8F35744CF60(Global_2437628[2]);
			Global_2437634[2 /*16*/] = { func_253(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_250(iParam5, &(Global_2437634[2 /*16*/]), -1, 107, 5, 1, "HUD_CASH", 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0);
		}
	}
	if (!func_337(unk_0x1329891157A54C63()))
	{
		func_250(iParam6, "TIM_DAMAGE", -1, 1, 4, 0, "HUD_CASH", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_203(sParam10))
	{
		sVar2 = sParam10;
	}
	func_247(iParam7, sVar2, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0);
	*iParam8 = 0;
	func_246();
}

void func_246()
{
	Global_1336084.f_941 = 1;
}

void func_247(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_249(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1336084.f_1 = 1;
		func_248(7, iVar0);
		Global_1336084.f_3911[iVar0] = uParam0;
		StringCopy(&(Global_1336084.f_3911.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1336084.f_3911.f_172[iVar0] = iParam2;
		Global_1336084.f_3911.f_216[iVar0] = iParam3;
		Global_1336084.f_3911.f_183[iVar0] = iParam4;
		Global_1336084.f_3911.f_194[iVar0] = iParam5;
		Global_1336084.f_3911.f_249[iVar0] = iParam6;
		Global_1336084.f_3911.f_260[iVar0] = iParam7;
		Global_1336084.f_3911.f_205[iVar0] = iParam8;
		Global_1336084.f_3911.f_314[iVar0] = iParam9;
		Global_1336084.f_3911.f_325[iVar0] = iParam10;
		Global_1336084.f_3911.f_357[iVar0] = iParam11;
		Global_1336084.f_3911.f_238[iVar0] = iParam12;
		Global_1336084.f_3911.f_271[iVar0] = iParam13;
	}
}

void func_248(int iParam0, int iParam1)
{
	unk_0xF3148AAF69AF9CBC(&(Global_1336084.f_4506[iParam0]), iParam1);
}

bool func_249(int iParam0, int iParam1)
{
	return unk_0x236D8AD7EE179F46(Global_1336084.f_4506[iParam0], iParam1);
}

void func_250(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
			if (func_249(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1336084.f_1 = 1;
		func_248(6, iVar0);
		Global_1336084.f_3370[iVar0] = iParam0;
		StringCopy(&(Global_1336084.f_3370.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1336084.f_3370.f_183[iVar0] = iParam3;
		Global_1336084.f_3370.f_172[iVar0] = iParam2;
		Global_1336084.f_3370.f_260[iVar0] = iParam4;
		Global_1336084.f_3370.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1336084.f_3370.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1336084.f_3370.f_443[iVar0] = iParam7;
		Global_1336084.f_3370.f_454[iVar0] = iParam8;
		Global_1336084.f_3370.f_497[iVar0] = iParam9;
		Global_1336084.f_3370.f_508[iVar0] = iParam10;
		Global_1336084.f_3370.f_205[iVar0] = iParam11;
		Global_1336084.f_3370.f_216[iVar0] = iParam12;
		Global_1336084.f_3370.f_227[iVar0] = iParam13;
		Global_1336084.f_3370.f_238[iVar0] = iParam14;
		Global_1336084.f_3370.f_249[iVar0] = iParam15;
		Global_1336084.f_3370.f_519[iVar0] = iParam16;
		Global_1336084.f_3370.f_530[iVar0] = iParam17;
		if (iParam15 == 4 && func_252())
		{
			Global_1336084.f_941 = 1;
		}
		if (unk_0x913B1C01C1BA6C6F())
		{
			iVar2 = 0;
			unk_0x510185F6AA2AE89F(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1336084.f_945 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1336084.f_944 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1336084.f_941 = 1;
			}
			if (func_251())
			{
				Global_1336084.f_945 = 1;
			}
		}
	}
}

int func_251()
{
	int iVar0;
	var uVar1;
	
	if (unk_0x913B1C01C1BA6C6F())
	{
		unk_0x510185F6AA2AE89F(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_252()
{
	if ((unk_0x45EDE682E0EE8FDF() == 8 || unk_0x45EDE682E0EE8FDF() == 9) || unk_0x45EDE682E0EE8FDF() == 10)
	{
		return 1;
	}
	return 0;
}

struct<16> func_253(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, unk_0x46E7F5908F815DDC("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0x46E7F5908F815DDC("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0x46E7F5908F815DDC("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0x46E7F5908F815DDC("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0x46E7F5908F815DDC("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_254()
{
	unk_0xC9A352663D97EFC3(8);
	unk_0xC9A352663D97EFC3(9);
	unk_0xC9A352663D97EFC3(6);
	unk_0xC9A352663D97EFC3(7);
	Global_2438034 = 1;
}

int func_255(bool bParam0)
{
	if (func_257())
	{
		return 0;
	}
	if (func_256())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_10(unk_0x1329891157A54C63(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_256()
{
	return Global_1585045[unk_0x1329891157A54C63() /*400*/].f_177 != 0;
}

bool func_257()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 12);
}

char* func_258()
{
	return "HUD_COUNTDOWN";
	switch (func_260(unk_0x1329891157A54C63()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_259())
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

int func_259()
{
	if (func_260(unk_0x1329891157A54C63()) == 133)
	{
		return Global_2451473.f_4624;
	}
	return -1;
}

int func_260(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1606167[iVar0 /*12*/];
	}
	return -1;
}

void func_261(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x8D51D24D214E2FF2())
	{
		if (unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 0))
		{
			if (!unk_0xB318FDA0D1ABDB20(&(Global_2451473.f_4542)))
			{
				unk_0xE3131684E8191AA9(&(Global_2451473.f_4542));
			}
			unk_0x094B864326B5FE96(1);
			unk_0x80650551CC58C784("FM_COUNTDOWN_30S_FIRA");
			unk_0x0C22E352114F699C("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x59BBCA8743D045AE("DisableFlightMusic", 0);
			unk_0x59BBCA8743D045AE("WantedMusicDisabled", 0);
			unk_0x59BBCA8743D045AE("AllowScoreAndRadio", 0);
			if (Global_2451473.f_4550 > -1)
			{
				unk_0x54206B7CE6FF2360(Global_2451473.f_4550);
				Global_2451473.f_4550 = -1;
			}
			Global_2451473.f_4540 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 0))
		{
			if (unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 4))
			{
				if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 2))
				{
					if (unk_0x0C66FFD2F3913C49())
					{
						if ((!unk_0xD994929E13CC1ED5(unk_0x41899D9898B4EEE4(unk_0x2595B211F055F9FB()), "OFF") && unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0)) && !unk_0xB318FDA0D1ABDB20(&(Global_2451473.f_4542)))
						{
							StringCopy(&(Global_2451473.f_4542), "", 32);
							unk_0x80650551CC58C784("FM_COUNTDOWN_30S_FIRA");
							unk_0x0C22E352114F699C("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x59BBCA8743D045AE("DisableFlightMusic", 0);
							unk_0x59BBCA8743D045AE("WantedMusicDisabled", 0);
							unk_0x59BBCA8743D045AE("AllowScoreAndRadio", 0);
							unk_0x094B864326B5FE96(1);
							unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 2);
						}
					}
				}
				else if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 5))
				{
					unk_0xE3131684E8191AA9("OFF");
				}
			}
			else if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x80650551CC58C784("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x80650551CC58C784("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x80650551CC58C784("FM_COUNTDOWN_30S");
				}
				unk_0xF2A6D4C99549CA85("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 1);
			}
			else if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x71994BFA37D418F5() != 0)
					{
						if (unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) && !unk_0x75D6577FC39B6697())
						{
							StringCopy(&(Global_2451473.f_4542), unk_0x85C45E5EB4792D9B(), 32);
							unk_0xE3131684E8191AA9("OFF");
						}
						unk_0x094B864326B5FE96(1);
						unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 3))
				{
					Global_2451473.f_4550 = unk_0xEDDCCC3D357A50F8();
					unk_0x35D7948F61AA3FEC(Global_2451473.f_4550, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 0))
			{
				Global_2451473.f_4540 = 0;
				Global_2451473.f_4550 = -1;
				unk_0xA3BC6AA446F03669("FM_COUNTDOWN_30S_KILL");
				unk_0x094B864326B5FE96(0);
				unk_0x80650551CC58C784("FM_PRE_COUNTDOWN_30S");
				unk_0x59BBCA8743D045AE("DisableFlightMusic", 1);
				unk_0x59BBCA8743D045AE("WantedMusicDisabled", 1);
				unk_0x59BBCA8743D045AE("AllowScoreAndRadio", 1);
				unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 0);
				if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0) || unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 2))
				{
					unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 2);
					unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 5);
				}
				else
				{
					unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4540), 5);
					unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4540), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 0))
		{
			Global_2451473.f_4540 = 0;
			Global_2451473.f_4550 = -1;
			unk_0xA3BC6AA446F03669("FM_COUNTDOWN_30S_KILL");
			unk_0x094B864326B5FE96(0);
			unk_0x80650551CC58C784("FM_PRE_COUNTDOWN_30S");
			unk_0x59BBCA8743D045AE("DisableFlightMusic", 1);
			unk_0x59BBCA8743D045AE("WantedMusicDisabled", 1);
			unk_0x59BBCA8743D045AE("AllowScoreAndRadio", 1);
			unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 0);
			if (!unk_0xE5AB05962FA1FF3F(unk_0x81873881071CD9FE(), 0))
			{
				unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 2);
				unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 5);
			}
			else
			{
				unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4540), 2);
				unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4540), 5);
			}
		}
	}
}

var func_262()
{
	if (unk_0x86CCCD2FAE9D5E65(func_264()))
	{
		return func_264();
	}
	return func_263();
}

var func_263()
{
	return Global_2359301.f_2;
}

var func_264()
{
	return Global_2359301.f_3;
}

int func_265(int iParam0)
{
	if (func_136(iParam0, 0))
	{
		return 1;
	}
	if (func_266())
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

bool func_266()
{
	return unk_0x236D8AD7EE179F46(Global_2359301, 3);
}

void func_267()
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
	while (iVar0 < unk_0x945535897333587B())
	{
		Local_164.f_526[iVar0 /*46*/] = { Var1 };
		Local_164.f_526[iVar0 /*46*/].f_1 = func_34();
		if (Local_111.f_4[iVar0] > -1)
		{
			uVar48 = unk_0xC3904F8771F37B7F(Local_111.f_4[iVar0]);
			if (unk_0xC4FEBC724D547D78(uVar48))
			{
				iVar47 = unk_0x29A638E7EEEE6B16(iVar48);
				if (!func_136(iVar47, 0))
				{
					Local_164.f_526[iVar0 /*46*/] = Local_111.f_4[iVar0];
					Local_164.f_526[iVar0 /*46*/].f_1 = iVar47;
					uVar49 = Local_2163[Local_111.f_4[iVar0] /*7*/].f_3;
					Local_164.f_526[iVar0 /*46*/].f_8 = uVar49;
					Local_164.f_526[iVar0 /*46*/].f_29 = -1;
					Local_164.f_1.f_107 = 9;
				}
			}
		}
		iVar0++;
	}
}

void func_268()
{
	if (func_270(0))
	{
		if (!unk_0x236D8AD7EE179F46(iLocal_97, 7))
		{
			unk_0x35D7948F61AA3FEC(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			unk_0xF3148AAF69AF9CBC(&iLocal_97, 7);
		}
	}
	else if (unk_0x236D8AD7EE179F46(iLocal_97, 7))
	{
		unk_0x35D7948F61AA3FEC(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		unk_0xC69E84EBBD7166E6(&iLocal_97, 7);
	}
}

void func_269()
{
	unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_1626), 19);
}

int func_270(int iParam0)
{
	if (iParam0 >= 0)
	{
		if (Local_111.f_4[iParam0] == unk_0x519AAFF77CC141DF() && Local_2163[unk_0x519AAFF77CC141DF() /*7*/].f_3 > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_271(int iParam0)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_111.f_4[iParam0];
		if (iVar0 >= 0)
		{
			if (func_272(Local_2163[iVar0 /*7*/].f_3, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_272(int iParam0, int iParam1)
{
	return iParam0 > iParam1;
}

void func_273()
{
	int iVar0;
	
	if (!func_337(unk_0x1329891157A54C63()) && !func_136(unk_0x1329891157A54C63(), 0))
	{
		iVar0 = func_288();
		if (iVar0 != Local_2163[unk_0x519AAFF77CC141DF() /*7*/].f_3)
		{
			if (iLocal_107 == 0)
			{
				iLocal_107 = unk_0xD74C7D8D2E5E43D2();
				if (Local_2388.f_11 == 0)
				{
					Local_2388.f_11 = unk_0xC7224E4F41E00BE3();
				}
			}
			if (iVar0 > iLocal_96)
			{
				iLocal_96 = iVar0;
				Local_2163[unk_0x519AAFF77CC141DF() /*7*/].f_3 = iVar0;
				func_274();
			}
		}
	}
}

void func_274()
{
	if (!unk_0x236D8AD7EE179F46(Local_2163[unk_0x519AAFF77CC141DF() /*7*/].f_1, 2))
	{
		unk_0xF3148AAF69AF9CBC(&(Local_2163[unk_0x519AAFF77CC141DF() /*7*/].f_1), 2);
		func_275(1);
	}
}

void func_275(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (func_287())
		{
			func_279(0);
			func_278();
		}
		if (func_277(0))
		{
			uVar0 = func_66(2452, -1, 0);
			unk_0xC69E84EBBD7166E6(&uVar0, 0);
			func_278();
		}
		if (func_277(func_276(func_260(unk_0x1329891157A54C63()))))
		{
			uVar0 = func_66(2452, -1, 0);
			unk_0xC69E84EBBD7166E6(&uVar0, func_276(func_260(unk_0x1329891157A54C63())));
			func_278();
		}
		if (func_139())
		{
			func_278();
		}
		if (func_260(unk_0x1329891157A54C63()) > -1)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 7);
		}
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 7);
	}
}

int func_276(int iParam0)
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

bool func_277(int iParam0)
{
	var uVar0;
	
	uVar0 = func_66(2452, -1, 0);
	return unk_0x236D8AD7EE179F46(uVar0, iParam0);
}

void func_278()
{
	if (func_139())
	{
		Global_2422670.f_614.f_16 = 1;
	}
}

void func_279(int iParam0)
{
	if (func_287())
	{
		if (iParam0 == 1)
		{
			if (Global_2451473.f_4237 == -1)
			{
				Global_2451473.f_4237 = 60000;
			}
			func_286(&(Global_2451473.f_4235), 0, 0);
			if (Global_2451473.f_4240 == -1)
			{
				Global_2451473.f_4240 = 10000;
			}
			func_286(&(Global_2451473.f_4238), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			func_285();
		}
		if ((!unk_0x726DA50057167075() && !func_284()) && !func_280(unk_0x1329891157A54C63()))
		{
			Global_975760 = 0;
		}
		Global_1606167[unk_0x1329891157A54C63() /*12*/].f_7 = 0;
	}
}

int func_280(int iParam0)
{
	if (func_281(iParam0, 1))
	{
		if (Global_1585045[iParam0 /*400*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_281(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_282(iParam0))
		{
			return 1;
		}
	}
	if (Global_1585045[iParam0 /*400*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_282(int iParam0)
{
	return func_283(iParam0);
}

bool func_283(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_13.f_1, 0);
}

bool func_284()
{
	return Global_2428865.f_712;
}

void func_285()
{
	if (unk_0x1C6DF6AD69BE853E())
	{
		if (!func_287())
		{
			if (func_10(unk_0x1329891157A54C63(), 1, 0))
			{
				unk_0xE41981FA07A67E46(unk_0x81873881071CD9FE(), 1);
				unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 342, 0);
				unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 122, 0);
			}
			unk_0xAFCB705B5DE49B4D(unk_0x1329891157A54C63(), 1f);
			unk_0xD547C5EA6ACA33EA(0);
			unk_0x96BED0459085F7E9(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				unk_0xC1A3EEFD7C446E1D(0);
			}
		}
		else
		{
			if (func_10(unk_0x1329891157A54C63(), 1, 1))
			{
				unk_0xE41981FA07A67E46(unk_0x81873881071CD9FE(), 0);
				unk_0x649CF94A4282A7FD(unk_0x81873881071CD9FE(), joaat("weapon_unarmed"), 1);
				unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 342, 1);
				unk_0xCE566DBDCACD245E(unk_0x81873881071CD9FE(), 122, 1);
				unk_0xAFCB705B5DE49B4D(unk_0x1329891157A54C63(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					unk_0xC1A3EEFD7C446E1D(1);
				}
			}
			unk_0xD547C5EA6ACA33EA(1);
			unk_0x96BED0459085F7E9(0);
		}
	}
}

void func_286(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1C6DF6AD69BE853E() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0xD74C7D8D2E5E43D2();
		}
		else
		{
			*uParam0 = unk_0xE36DF6414E5CCBBF();
		}
	}
	else
	{
		*uParam0 = unk_0x48E480685981C7D4();
	}
	uParam0->f_1 = 1;
}

bool func_287()
{
	return Global_1312416;
}

int func_288()
{
	return iLocal_106;
}

void func_289()
{
	int iVar0;
	int iVar1;
	
	if (!func_337(unk_0x1329891157A54C63()))
	{
		iVar0 = 0;
		while (iVar0 < unk_0x8D411F45C0269899(1))
		{
			iVar1 = unk_0xE22864B8883341B7(1, iVar0);
			switch (iVar1)
			{
				case 179:
					func_290(iVar0);
					break;
			}
			iVar0++;
		}
	}
}

void func_290(int iParam0)
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
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 10))
	{
		if (unk_0x86CCCD2FAE9D5E65(Var0.f_1))
		{
			if (unk_0xCF0C46D719D5302C(Var0.f_1))
			{
				if (unk_0x8F1CCE5AF629C4D3(Var0.f_1) == unk_0x81873881071CD9FE())
				{
					if (unk_0x86CCCD2FAE9D5E65(Var0.f_0))
					{
						if (Var0.f_0 != Var0.f_1)
						{
							if (unk_0xCF8AA94BAD0F766A(Var0.f_0))
							{
								uVar11 = unk_0x522C7043B2B961F9(Var0.f_0);
								if (!func_296(uVar11))
								{
									iVar12 = unk_0x14B7103DBD149FFE(uVar11);
									if (func_294(&iVar13, iVar12, func_295(iVar11)))
									{
										fVar10 = unk_0xBBDA792448DB5A89(iVar13);
									}
									if (fVar10 <= 0f)
									{
										fVar10 = unk_0xBBDA792448DB5A89(unk_0x14F5D817453D2B91(iVar12));
									}
									fVar10 = (fVar10 * func_293());
									fVar19 = unk_0xBBDA792448DB5A89(Global_262145.f_9240);
									if (fVar10 > fVar19)
									{
										fVar10 = fVar19;
									}
								}
								else if (!unk_0x236D8AD7EE179F46(iLocal_97, 6))
								{
									func_322("AMBC_PERS", 30000);
									func_321(0);
									unk_0xF3148AAF69AF9CBC(&iLocal_97, 6);
								}
							}
							else if (unk_0x9F76B19299294A0E(Var0.f_0))
							{
							}
							else if (unk_0xCF0C46D719D5302C(Var0.f_0))
							{
								iVar20 = unk_0x8F1CCE5AF629C4D3(Var0.f_0);
								if (unk_0x0452D5BF20AD945A(iVar20))
								{
									iVar21 = unk_0x1B503E81E3B3D65F(iVar20);
									if (unk_0xA89AE5060232966A(iVar21))
									{
										uVar22 = unk_0x563980A76107BC80(iVar21);
										if (unk_0xC4FEBC724D547D78(uVar22))
										{
											iVar23 = iVar22;
											if ((iVar23 > -1 && iVar23 < 32) && iVar23 != unk_0x519AAFF77CC141DF())
											{
												fVar10 = unk_0xBBDA792448DB5A89(Local_2163[iVar23 /*7*/].f_6);
												fVar10 = (fVar10 * func_292());
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
								if (unk_0xCF8AA94BAD0F766A(Var0.f_0))
								{
									iVar24 = unk_0xF2DB717A73826179(((fVar10 * Global_262145.f_8978) * Var0.f_2));
									if (iVar24 < Global_262145.f_9267)
									{
										iVar24 = Global_262145.f_9267;
									}
									if (iVar24 > Global_262145.f_9268)
									{
										iVar24 = Global_262145.f_9268;
									}
								}
								else if (unk_0x4DC6EF945236C0F7(Var0.f_0) > 0)
								{
									fVar25 = unk_0xBBDA792448DB5A89(unk_0x0FDE1892CC627262(Var0.f_0));
									fVar26 = func_291(Var0.f_2, fVar25);
									fVar27 = (fVar26 / fVar25);
									fVar28 = (fVar27 * fVar10);
									iVar24 = unk_0xF2DB717A73826179((Global_262145.f_9246 * fVar28));
									if (iVar24 < Global_262145.f_9277)
									{
										iVar24 = Global_262145.f_9277;
									}
									if (iVar24 > Global_262145.f_9278)
									{
										iVar24 = Global_262145.f_9278;
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
								unk_0x35D7948F61AA3FEC(-1, "Criminal_Damage_Low_Value", "GTAO_FM_Events_Soundset", 0);
								if (Var0.f_3)
								{
									if (unk_0xCF8AA94BAD0F766A(Var0.f_0))
									{
										fVar29 = Global_262145.f_8979;
									}
									else
									{
										fVar29 = Global_262145.f_9247;
									}
									iVar24 = unk_0xF2DB717A73826179((fVar29 * fVar10));
									if (unk_0xCF0C46D719D5302C(Var0.f_0))
									{
										unk_0x35D7948F61AA3FEC(-1, "Criminal_Damage_Kill_Player", "GTAO_FM_Events_Soundset", 0);
									}
									else
									{
										unk_0xF2A6D4C99549CA85("GTAO_FM_Events_Blade_Scene");
										unk_0x35D7948F61AA3FEC(-1, "Criminal_Damage_High_Value", "GTAO_FM_Events_Soundset", 0);
									}
								}
								if (iVar24 > 0)
								{
									iLocal_106 = (iLocal_106 + iVar24);
								}
							}
						}
					}
				}
			}
		}
	}
}

float func_291(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

float func_292()
{
	return Global_262145.f_8977;
}

float func_293()
{
	return Global_262145.f_8976;
}

int func_294(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = unk_0x1C6DF6AD69BE853E();
	if (!unk_0xA84E120D1B16B142(iParam1))
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
					if (Global_262145.f_4844 >= 0)
					{
						iVar1 = Global_262145.f_4844;
					}
				}
				break;
			
			case joaat("dune"):
				iVar1 = 20000;
				if (bVar0)
				{
					if (Global_262145.f_4845 >= 0)
					{
						iVar1 = Global_262145.f_4845;
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
					if (Global_262145.f_4938 >= 0)
					{
						iVar1 = Global_262145.f_4938;
					}
				}
				break;
			
			case joaat("bobcatxl"):
				iVar1 = 23000;
				if (bVar0)
				{
					if (Global_262145.f_4939 >= 0)
					{
						iVar1 = Global_262145.f_4939;
					}
				}
				break;
			
			case joaat("cavalcade2"):
				iVar1 = 60000;
				if (bVar0)
				{
					if (Global_262145.f_4940 >= 0)
					{
						iVar1 = Global_262145.f_4940;
					}
				}
				break;
			
			case joaat("granger"):
				iVar1 = 35000;
				if (bVar0)
				{
					if (Global_262145.f_4941 >= 0)
					{
						iVar1 = Global_262145.f_4941;
					}
				}
				break;
			
			case joaat("ingot"):
				iVar1 = 9000;
				if (bVar0)
				{
					if (Global_262145.f_4942 >= 0)
					{
						iVar1 = Global_262145.f_4942;
					}
				}
				break;
			
			case joaat("intruder"):
				iVar1 = 16000;
				if (bVar0)
				{
					if (Global_262145.f_4943 >= 0)
					{
						iVar1 = Global_262145.f_4943;
					}
				}
				break;
			
			case joaat("minivan"):
				iVar1 = 30000;
				if (bVar0)
				{
					if (Global_262145.f_4944 >= 0)
					{
						iVar1 = Global_262145.f_4944;
					}
				}
				break;
			
			case joaat("premier"):
				iVar1 = 10000;
				if (bVar0)
				{
					if (Global_262145.f_4945 >= 0)
					{
						iVar1 = Global_262145.f_4945;
					}
				}
				break;
			
			case joaat("radi"):
				iVar1 = 32000;
				if (bVar0)
				{
					if (Global_262145.f_4946 >= 0)
					{
						iVar1 = Global_262145.f_4946;
					}
				}
				break;
			
			case joaat("rancherxl"):
				iVar1 = 9000;
				if (bVar0)
				{
					if (Global_262145.f_4947 >= 0)
					{
						iVar1 = Global_262145.f_4947;
					}
				}
				break;
			
			case joaat("ratloader"):
				iVar1 = 6000;
				if (bVar0)
				{
					if (Global_262145.f_4967 >= 0)
					{
						iVar1 = Global_262145.f_4967;
					}
				}
				break;
			
			case joaat("stanier"):
				iVar1 = 10000;
				if (bVar0)
				{
					if (Global_262145.f_4948 >= 0)
					{
						iVar1 = Global_262145.f_4948;
					}
				}
				break;
			
			case joaat("stratum"):
				iVar1 = 10000;
				if (bVar0)
				{
					if (Global_262145.f_4949 >= 0)
					{
						iVar1 = Global_262145.f_4949;
					}
				}
				break;
			
			case joaat("washington"):
				iVar1 = 15000;
				if (bVar0)
				{
					if (Global_262145.f_4950 >= 0)
					{
						iVar1 = Global_262145.f_4950;
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
				if (Global_262145.f_5532 >= 0)
				{
					iVar1 = Global_262145.f_5532;
				}
			}
			break;
		
		case joaat("bifta"):
			iVar1 = 75000;
			if (bVar0)
			{
				if (Global_262145.f_5530 >= 0)
				{
					iVar1 = Global_262145.f_5530;
				}
			}
			break;
		
		case joaat("kalahari"):
			if (bParam2)
			{
				iVar1 = 40000;
				if (bVar0)
				{
					if (Global_262145.f_5531 >= 0)
					{
						iVar1 = Global_262145.f_5531;
					}
				}
			}
			else
			{
				iVar1 = 51000;
				if (bVar0)
				{
					if (Global_262145.f_6683 >= 0)
					{
						iVar1 = Global_262145.f_6683;
					}
				}
			}
			break;
		
		case joaat("speeder"):
			iVar1 = 325000;
			if (bVar0)
			{
				if (Global_262145.f_5533 >= 0)
				{
					iVar1 = Global_262145.f_5533;
				}
			}
			break;
		
		case joaat("btype"):
			iVar1 = 1150000;
			if (bVar0)
			{
				iVar1 = 750000;
				if (Global_262145.f_4962 >= 0)
				{
					iVar1 = Global_262145.f_4962;
				}
			}
			break;
		
		case joaat("jester"):
			iVar1 = 240000;
			if (bVar0)
			{
				if (Global_262145.f_4934 >= 0)
				{
					iVar1 = Global_262145.f_4934;
				}
			}
			break;
		
		case joaat("turismor"):
			iVar1 = 500000;
			if (bVar0)
			{
				if (Global_262145.f_4936 >= 0)
				{
					iVar1 = Global_262145.f_4936;
				}
			}
			break;
		
		case joaat("alpha"):
			iVar1 = 150000;
			if (bVar0)
			{
				if (Global_262145.f_4932 >= 0)
				{
					iVar1 = Global_262145.f_4932;
				}
			}
			break;
		
		case joaat("vestra"):
			iVar1 = 950000;
			if (bVar0)
			{
				if (Global_262145.f_4987 >= 0)
				{
					iVar1 = Global_262145.f_4987;
				}
			}
			break;
		
		case joaat("massacro"):
			iVar1 = 275000;
			if (bVar0)
			{
				if (Global_262145.f_4935 >= 0)
				{
					iVar1 = Global_262145.f_4935;
				}
			}
			break;
		
		case joaat("zentorno"):
			iVar1 = 725000;
			if (bVar0)
			{
				if (Global_262145.f_4937 >= 0)
				{
					iVar1 = Global_262145.f_4937;
				}
			}
			break;
		
		case joaat("huntley"):
			iVar1 = 195000;
			if (bVar0)
			{
				if (Global_262145.f_4933 >= 0)
				{
					iVar1 = Global_262145.f_4933;
				}
			}
			break;
		
		case joaat("thrust"):
			iVar1 = 75000;
			if (bVar0)
			{
				if (Global_262145.f_5534 >= 0)
				{
					iVar1 = Global_262145.f_5534;
				}
			}
			break;
		
		case joaat("blade"):
			iVar1 = 160000;
			if (bVar0)
			{
				if (Global_262145.f_6008 >= 0)
				{
					iVar1 = Global_262145.f_6008;
				}
			}
			break;
		
		case joaat("warrener"):
			iVar1 = 125000;
			if (bVar0)
			{
				iVar1 = 120000;
				if (Global_262145.f_6011 >= 0)
				{
					iVar1 = Global_262145.f_6011;
				}
			}
			break;
		
		case joaat("glendale"):
			iVar1 = 200000;
			if (bVar0)
			{
				if (Global_262145.f_6009 >= 0)
				{
					iVar1 = Global_262145.f_6009;
				}
			}
			break;
		
		case joaat("rhapsody"):
			iVar1 = 100000;
			if (bVar0)
			{
				iVar1 = 140000;
				if (Global_262145.f_6010 >= 0)
				{
					iVar1 = Global_262145.f_6010;
				}
			}
			break;
		
		case joaat("panto"):
			iVar1 = 85000;
			if (bVar0)
			{
				if (Global_262145.f_6012 >= 0)
				{
					iVar1 = Global_262145.f_6012;
				}
			}
			break;
		
		case joaat("dubsta3"):
			iVar1 = 249000;
			if (bVar0)
			{
				if (Global_262145.f_6013 >= 0)
				{
					iVar1 = Global_262145.f_6013;
				}
			}
			break;
		
		case joaat("pigalle"):
			iVar1 = 400000;
			if (bVar0)
			{
				if (Global_262145.f_6007 >= 0)
				{
					iVar1 = Global_262145.f_6007;
				}
			}
			break;
		
		case joaat("besra"):
			iVar1 = 658000;
			if (bVar0)
			{
				iVar1 = 1150000;
				if (Global_262145.f_6402 >= 0)
				{
					iVar1 = Global_262145.f_6402;
				}
			}
			break;
		
		case joaat("miljet"):
			iVar1 = 1750000;
			if (bVar0)
			{
				iVar1 = 1700000;
				if (Global_262145.f_6403 >= 0)
				{
					iVar1 = Global_262145.f_6403;
				}
			}
			break;
		
		case joaat("swift"):
			if (!bParam2)
			{
				iVar1 = 1500000;
				if (bVar0)
				{
					if (Global_262145.f_6404 >= 0)
					{
						iVar1 = Global_262145.f_6404;
					}
				}
			}
			else
			{
				iVar1 = 1600000;
				if (bVar0)
				{
					if (Global_262145.f_6405 >= 0)
					{
						iVar1 = Global_262145.f_6405;
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
					if (Global_262145.f_6400 >= 0)
					{
						iVar1 = Global_262145.f_6400;
					}
				}
			}
			else
			{
				iVar1 = 395000;
				if (bVar0)
				{
					iVar1 = 695000;
					if (Global_262145.f_6401 >= 0)
					{
						iVar1 = Global_262145.f_6401;
					}
				}
			}
			break;
		
		case joaat("sovereign"):
			iVar1 = 120000;
			if (bVar0)
			{
				if (Global_262145.f_6165 >= 0)
				{
					iVar1 = Global_262145.f_6165;
				}
			}
			break;
		
		case joaat("monster"):
			iVar1 = 742000;
			if (bVar0)
			{
				iVar1 = 742014;
				if (Global_262145.f_6164 >= 0)
				{
					iVar1 = Global_262145.f_6164;
				}
			}
			break;
		
		case joaat("innovation"):
			iVar1 = 92500;
			if (bVar0)
			{
				if (Global_262145.f_6680 >= 0)
				{
					iVar1 = Global_262145.f_6680;
				}
			}
			break;
		
		case joaat("hakuchou"):
			iVar1 = 82000;
			if (bVar0)
			{
				if (Global_262145.f_6681 >= 0)
				{
					iVar1 = Global_262145.f_6681;
				}
			}
			break;
		
		case joaat("furoregt"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6682 >= 0)
				{
					iVar1 = Global_262145.f_6682;
				}
			}
			break;
		
		case joaat("boxville4"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6912 >= 0)
				{
					iVar1 = Global_262145.f_6912;
				}
			}
			break;
		
		case joaat("casco"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6913 >= 0)
				{
					iVar1 = Global_262145.f_6913;
				}
			}
			break;
		
		case joaat("dinghy3"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6914 >= 0)
				{
					iVar1 = Global_262145.f_6914;
				}
			}
			break;
		
		case joaat("enduro"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6915 >= 0)
				{
					iVar1 = Global_262145.f_6915;
				}
			}
			break;
		
		case joaat("gburrito2"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6916 >= 0)
				{
					iVar1 = Global_262145.f_6916;
				}
			}
			break;
		
		case joaat("guardian"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6917 >= 0)
				{
					iVar1 = Global_262145.f_6917;
				}
			}
			break;
		
		case joaat("hydra"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6918 >= 0)
				{
					iVar1 = Global_262145.f_6918;
				}
			}
			break;
		
		case joaat("insurgent"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6920 >= 0)
				{
					iVar1 = Global_262145.f_6920;
				}
			}
			break;
		
		case joaat("insurgent2"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6919 >= 0)
				{
					iVar1 = Global_262145.f_6919;
				}
			}
			break;
		
		case joaat("kuruma"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6921 >= 0)
				{
					iVar1 = Global_262145.f_6921;
				}
			}
			break;
		
		case joaat("kuruma2"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6922 >= 0)
				{
					iVar1 = Global_262145.f_6922;
				}
			}
			break;
		
		case joaat("lectro"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6923 >= 0)
				{
					iVar1 = Global_262145.f_6923;
				}
			}
			break;
		
		case joaat("pbus"):
			iVar1 = 550000;
			if (bVar0)
			{
				if (Global_262145.f_6929 >= 0)
				{
					iVar1 = Global_262145.f_6929;
				}
			}
			break;
		
		case joaat("mule3"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6924 >= 0)
				{
					iVar1 = Global_262145.f_6924;
				}
			}
			break;
		
		case joaat("savage"):
			iVar1 = 448000;
			if (bVar0)
			{
				if (Global_262145.f_6925 >= 0)
				{
					iVar1 = Global_262145.f_6925;
				}
			}
			break;
		
		case joaat("dodo"):
			iVar1 = 500000;
			if (bVar0)
			{
				if (Global_262145.f_7003 >= 0)
				{
					iVar1 = Global_262145.f_7003;
				}
			}
			break;
		
		case joaat("marshall"):
			iVar1 = 250000;
			if (bVar0)
			{
				iVar1 = 500000;
				if (Global_262145.f_7005 >= 0)
				{
					iVar1 = Global_262145.f_7005;
				}
			}
			break;
		
		case joaat("submersible2"):
			iVar1 = 1325000;
			if (bVar0)
			{
				if (Global_262145.f_7007 >= 0)
				{
					iVar1 = Global_262145.f_7007;
				}
			}
			break;
		
		case joaat("blista2"):
			iVar1 = 42000;
			if (bVar0)
			{
				if (Global_262145.f_7002 >= 0)
				{
					iVar1 = Global_262145.f_7002;
				}
			}
			break;
		
		case joaat("stalion"):
			iVar1 = 71000;
			if (bVar0)
			{
				if (Global_262145.f_7006 >= 0)
				{
					iVar1 = Global_262145.f_7006;
				}
			}
			break;
		
		case joaat("dukes"):
			iVar1 = 62000;
			if (bVar0)
			{
				iVar1 = 62000;
				if (Global_262145.f_7004 >= 0)
				{
					iVar1 = Global_262145.f_7004;
				}
			}
			break;
		
		case joaat("dukes2"):
			iVar1 = 279000;
			if (bVar0)
			{
				iVar1 = 62000;
				if (Global_262145.f_7004 >= 0)
				{
					iVar1 = Global_262145.f_7004;
				}
			}
			break;
		
		case joaat("stalion2"):
			iVar1 = 138500;
			if (bVar0)
			{
				if (Global_262145.f_7220 >= 0)
				{
					iVar1 = Global_262145.f_7220;
				}
			}
			break;
		
		case joaat("dominator2"):
			iVar1 = 127000;
			if (bVar0)
			{
				if (Global_262145.f_7218 >= 0)
				{
					iVar1 = Global_262145.f_7218;
				}
			}
			break;
		
		case joaat("gauntlet2"):
			iVar1 = 115000;
			if (bVar0)
			{
				if (Global_262145.f_7219 >= 0)
				{
					iVar1 = Global_262145.f_7219;
				}
			}
			break;
		
		case joaat("buffalo3"):
			iVar1 = 150000;
			if (bVar0)
			{
				if (Global_262145.f_7217 >= 0)
				{
					iVar1 = Global_262145.f_7217;
				}
			}
			break;
		
		case joaat("slamvan"):
			iVar1 = 49500;
			if (bVar0)
			{
				if (Global_262145.f_7216 >= 0)
				{
					iVar1 = Global_262145.f_7216;
				}
			}
			break;
		
		case joaat("ratloader2"):
			iVar1 = 37500;
			if (bVar0)
			{
				if (Global_262145.f_7215 >= 0)
				{
					iVar1 = Global_262145.f_7215;
				}
			}
			break;
		
		case joaat("jester2"):
			iVar1 = 350000;
			if (bVar0)
			{
				if (Global_262145.f_7213 >= 0)
				{
					iVar1 = Global_262145.f_7213;
				}
			}
			break;
		
		case joaat("massacro2"):
			iVar1 = 385000;
			if (bVar0)
			{
				if (Global_262145.f_7214 >= 0)
				{
					iVar1 = Global_262145.f_7214;
				}
			}
			break;
		
		case joaat("feltzer3"):
			iVar1 = 975000;
			if (unk_0x1C6DF6AD69BE853E())
			{
				if (Global_262145.f_8372 >= 0)
				{
					iVar1 = Global_262145.f_8372;
				}
			}
			break;
		
		case joaat("luxor2"):
			iVar1 = 10000000;
			if (unk_0x1C6DF6AD69BE853E())
			{
				if (Global_262145.f_8373 >= 0)
				{
					iVar1 = Global_262145.f_8373;
				}
			}
			break;
		
		case joaat("osiris"):
			iVar1 = 1950000;
			if (unk_0x1C6DF6AD69BE853E())
			{
				if (Global_262145.f_8374 >= 0)
				{
					iVar1 = Global_262145.f_8374;
				}
			}
			break;
		
		case joaat("swift2"):
			iVar1 = 5150000;
			if (unk_0x1C6DF6AD69BE853E())
			{
				if (Global_262145.f_8375 >= 0)
				{
					iVar1 = Global_262145.f_8375;
				}
			}
			break;
		
		case joaat("virgo"):
			iVar1 = 195000;
			if (unk_0x1C6DF6AD69BE853E())
			{
				if (Global_262145.f_8376 >= 0)
				{
					iVar1 = Global_262145.f_8376;
				}
			}
			break;
		
		case joaat("windsor"):
			iVar1 = 845000;
			if (unk_0x1C6DF6AD69BE853E())
			{
				if (Global_262145.f_8377 >= 0)
				{
					iVar1 = Global_262145.f_8377;
				}
			}
			break;
		
		case joaat("brawler"):
			iVar1 = 715000;
			if (unk_0x1C6DF6AD69BE853E())
			{
				if (Global_262145.f_8659 >= 0)
				{
					iVar1 = Global_262145.f_8659;
				}
			}
			break;
		
		case joaat("chino"):
			iVar1 = 225000;
			if (unk_0x1C6DF6AD69BE853E())
			{
				if (Global_262145.f_8660 >= 0)
				{
					iVar1 = Global_262145.f_8660;
				}
			}
			break;
		
		case joaat("coquette3"):
			iVar1 = 695000;
			if (unk_0x1C6DF6AD69BE853E())
			{
				if (Global_262145.f_8661 >= 0)
				{
					iVar1 = Global_262145.f_8661;
				}
			}
			break;
		
		case joaat("t20"):
			iVar1 = 2200000;
			if (unk_0x1C6DF6AD69BE853E())
			{
				if (Global_262145.f_8662 >= 0)
				{
					iVar1 = Global_262145.f_8662;
				}
			}
			break;
		
		case joaat("toro"):
			iVar1 = 1750000;
			if (unk_0x1C6DF6AD69BE853E())
			{
				if (Global_262145.f_8663 >= 0)
				{
					iVar1 = Global_262145.f_8663;
				}
			}
			break;
		
		case joaat("vindicator"):
			iVar1 = 630000;
			if (unk_0x1C6DF6AD69BE853E())
			{
				if (Global_262145.f_8664 >= 0)
				{
					iVar1 = Global_262145.f_8664;
				}
			}
			break;
		
		case joaat("chino2"):
			iVar1 = 225000;
			iVar1 = (Global_262145.f_9610 + Global_262145.f_9612);
			break;
		
		case joaat("primo2"):
			iVar1 = 100000;
			if (unk_0x1C6DF6AD69BE853E() && Global_262145.f_9609 >= 0)
			{
				iVar1 = (Global_262145.f_9609 + Global_262145.f_9615);
			}
			break;
		
		case joaat("moonbeam"):
			iVar1 = 32500;
			if (unk_0x1C6DF6AD69BE853E() && Global_262145.f_9606 >= 0)
			{
				iVar1 = Global_262145.f_9606;
			}
			break;
		
		case joaat("moonbeam2"):
			iVar1 = (Global_262145.f_9606 + Global_262145.f_9614);
			break;
		
		case joaat("faction"):
			iVar1 = 36000;
			if (unk_0x1C6DF6AD69BE853E() && Global_262145.f_9605 >= 0)
			{
				iVar1 = Global_262145.f_9605;
			}
			break;
		
		case joaat("faction2"):
			iVar1 = 95000;
			iVar1 = (Global_262145.f_9605 + Global_262145.f_9613);
			break;
		
		case joaat("buccaneer"):
			iVar1 = 29000;
			if (unk_0x1C6DF6AD69BE853E() && Global_262145.f_9607 >= 0)
			{
				iVar1 = Global_262145.f_9607;
			}
			break;
		
		case joaat("buccaneer2"):
			iVar1 = 85000;
			iVar1 = (Global_262145.f_9607 + Global_262145.f_9611);
			break;
		
		case joaat("voodoo2"):
			iVar1 = 5500;
			if (unk_0x1C6DF6AD69BE853E() && Global_262145.f_9608 >= 0)
			{
				iVar1 = Global_262145.f_9608;
			}
			break;
		
		case joaat("voodoo"):
			iVar1 = 105000;
			iVar1 = (Global_262145.f_9608 + Global_262145.f_9616);
			break;
		
		case joaat("btype2"):
			iVar1 = 540000;
			if (unk_0x1C6DF6AD69BE853E() && Global_262145.f_9822 >= 0)
			{
				iVar1 = Global_262145.f_9822;
			}
			break;
		
		case joaat("lurcher"):
			iVar1 = 666666;
			if (unk_0x1C6DF6AD69BE853E() && Global_262145.f_9823 >= 0)
			{
				iVar1 = Global_262145.f_9823;
			}
			break;
	}
	switch (iParam1)
	{
		case joaat("dominator"):
			if (bVar0)
			{
				if (Global_262145.f_5539 >= 0)
				{
					iVar1 = Global_262145.f_5539;
				}
			}
			break;
		
		case joaat("f620"):
			if (bVar0)
			{
				if (Global_262145.f_5540 >= 0)
				{
					iVar1 = Global_262145.f_5540;
				}
			}
			break;
		
		case joaat("fusilade"):
			if (bVar0)
			{
				if (Global_262145.f_5541 >= 0)
				{
					iVar1 = Global_262145.f_5541;
				}
			}
			break;
		
		case joaat("penumbra"):
			if (bVar0)
			{
				if (Global_262145.f_5542 >= 0)
				{
					iVar1 = Global_262145.f_5542;
				}
			}
			break;
		
		case joaat("sentinel"):
			if (bVar0)
			{
				if (Global_262145.f_5543 >= 0)
				{
					iVar1 = Global_262145.f_5543;
				}
			}
			break;
		
		case joaat("sentinel2"):
			if (bVar0)
			{
				if (Global_262145.f_5544 >= 0)
				{
					iVar1 = Global_262145.f_5544;
				}
			}
			break;
	}
	if (bVar0)
	{
		switch (iParam1)
		{
			case joaat("elegy2"):
				if (Global_262145.f_4030 >= 0)
				{
					iVar1 = Global_262145.f_4030;
				}
				break;
			
			case joaat("khamelion"):
				if (Global_262145.f_4046 >= 0)
				{
					iVar1 = Global_262145.f_4046;
				}
				break;
			
			case joaat("hotknife"):
				if (Global_262145.f_4040 >= 0)
				{
					iVar1 = Global_262145.f_4040;
				}
				break;
			
			case joaat("carbonrs"):
				if (Global_262145.f_4016 >= 0)
				{
					iVar1 = Global_262145.f_4016;
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
					if (Global_262145.f_5537 >= 0)
					{
						iVar1 = Global_262145.f_5537;
					}
					break;
				
				case joaat("banshee"):
					iVar1 = 126000;
					if (Global_262145.f_5536 >= 0)
					{
						iVar1 = Global_262145.f_5536;
					}
					break;
				
				case joaat("stinger"):
					iVar1 = 871000;
					if (Global_262145.f_5538 >= 0)
					{
						iVar1 = Global_262145.f_5538;
					}
					break;
				
				case joaat("voltic"):
					iVar1 = 150000;
					if (Global_262145.f_4086 >= 0)
					{
						iVar1 = Global_262145.f_4086;
					}
					break;
				
				case joaat("chino"):
					iVar1 = 225000;
					if (Global_262145.f_9610 >= 0)
					{
						iVar1 = Global_262145.f_9610;
					}
					break;
			}
		}
		else
		{
			switch (iParam1)
			{
				case joaat("voltic"):
					if (Global_262145.f_5535 >= 0)
					{
						iVar1 = Global_262145.f_5535;
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

int func_295(int iParam0)
{
	int iVar0;
	
	if (unk_0x86CCCD2FAE9D5E65(uParam0) && unk_0x7404950238A154C2(iParam0, 0))
	{
		iVar0 = unk_0x14B7103DBD149FFE(iParam0);
		switch (iVar0)
		{
			case joaat("voltic"):
				return unk_0x5CBBEE14743C3376(iParam0, 3);
				break;
			
			case joaat("coquette"):
				return !unk_0x5CBBEE14743C3376(iParam0, 2);
				break;
			
			case joaat("banshee"):
				return !unk_0x5CBBEE14743C3376(iParam0, 2);
				break;
			
			case joaat("stinger"):
				return !unk_0x5CBBEE14743C3376(iParam0, 2);
				break;
			}
	}
	return 0;
}

int func_296(var uParam0)
{
	if (Global_69020)
	{
		if (unk_0xCEC9D74C9FF51C8C(uParam0, "Player_Vehicle"))
		{
			return 1;
		}
	}
	return 0;
}

void func_297()
{
	if (!unk_0x2DD54246D4BB0A20())
	{
		if (!func_298(62) && !unk_0xA83A609D74168B30())
		{
			if (!unk_0x236D8AD7EE179F46(iLocal_108, 0))
			{
				func_322("AMBC_HELP", 30000);
				func_321(1);
				unk_0xF3148AAF69AF9CBC(&iLocal_108, 0);
			}
			else if (!unk_0x236D8AD7EE179F46(iLocal_108, 1))
			{
				func_322("AMBC_HELP1", 30000);
				func_321(1);
				unk_0xF3148AAF69AF9CBC(&iLocal_108, 1);
			}
		}
	}
}

bool func_298(int iParam0)
{
	return Global_2422670.f_2137[0 /*70*/].f_1 == iParam0;
}

void func_299(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	unk_0x59BBCA8743D045AE("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x59BBCA8743D045AE("WantedMusicDisabled", 1);
	}
	Global_2451473.f_4550 = -1;
	if (bParam6)
	{
		func_315(21, 1);
	}
	else
	{
		func_314(iParam0, -1);
		if (func_6(unk_0x1329891157A54C63()))
		{
			Global_1573867.f_3 = iParam0;
		}
		else
		{
			func_313(iParam0);
		}
		Global_1573867.f_4 = -1;
		if (func_6(unk_0x1329891157A54C63()))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 5);
		}
		if ((func_287() && !func_312()) || func_311(unk_0x1329891157A54C63(), 21))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 4);
		}
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 17);
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 20);
		if (func_310(iParam0))
		{
			func_309();
		}
	}
	if (fParam1 != 1f)
	{
		func_307(fParam1);
	}
	if (fParam2 != 1f)
	{
		unk_0x5B6D37392F5991C3(fParam2);
		if (iParam0 == 146)
		{
			unk_0x9BAE0FF806E5C2E5(0);
			unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 0, 0);
			unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
		}
	}
	if (func_306(iParam0))
	{
		unk_0x9BAE0FF806E5C2E5(0);
		unk_0xE9E74A97DB98B442(unk_0x1329891157A54C63(), 0, 0);
		unk_0x2E2A75923F20DCD2(unk_0x1329891157A54C63(), 0);
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 8);
	}
	if (bParam3)
	{
		func_305(1);
		if (func_222(0))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 9);
		}
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 14);
	}
	if (bParam4)
	{
		func_303(1);
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 12);
	}
	if (bParam5)
	{
		func_302();
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 12);
	}
	if (!bParam6)
	{
		if (func_300(iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 21);
		}
	}
	Global_2450427 = 1;
}

int func_300(int iParam0)
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
	if (func_301())
	{
		return 1;
	}
	return 0;
}

int func_301()
{
	switch (func_259())
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

void func_302()
{
	unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4541), 0);
}

void func_303(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_90861.f_8 = 1;
	}
	else
	{
		Global_90861.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 45)
	{
		func_304(iVar0);
		iVar0++;
	}
}

void func_304(int iParam0)
{
	Global_90861.f_156[iParam0] = 1;
	Global_90861.f_155 = 1;
}

void func_305(int iParam0)
{
	if (iParam0 == Global_2391042)
	{
		return;
	}
	Global_2391042 = iParam0;
	Global_2391044 = 0;
	Global_2391045 = 0;
}

int func_306(int iParam0)
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

void func_307(float fParam0)
{
	if (unk_0x8DAF7A748E41AD46(unk_0x11CA2334E341B424()) == func_308())
	{
		return;
	}
	if (unk_0x64AD45A6264810A8(Global_2451473.f_4633))
	{
		if (!Global_2451473.f_4633 == unk_0x8F56512BDA9F6921())
		{
			return;
		}
	}
	Global_2451473.f_4632 = fParam0;
	Global_2451473.f_4633 = unk_0x8F56512BDA9F6921();
}

int func_308()
{
	switch (func_92())
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

void func_309()
{
	Global_2414506[unk_0x1329891157A54C63() /*255*/].f_198 = 0;
	unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4402), 1);
}

int func_310(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

bool func_311(int iParam0, int iParam1)
{
	return unk_0x236D8AD7EE179F46(Global_2414506[iParam0 /*255*/].f_205, iParam1);
}

bool func_312()
{
	return Global_1312416.f_1;
}

void func_313(int iParam0)
{
	Global_1606167[unk_0x1329891157A54C63() /*12*/] = iParam0;
}

void func_314(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_277(0) || func_277(func_276(iVar0)))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 2);
		}
		else
		{
			unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 2);
		}
	}
}

void func_315(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0x236D8AD7EE179F46(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_205, iParam0))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_205), iParam0);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_205, iParam0))
	{
		unk_0xC69E84EBBD7166E6(&(Global_2414506[unk_0x1329891157A54C63() /*255*/].f_205), iParam0);
	}
}

void func_316()
{
}

void func_317(var uParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_255(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_203(sParam1))
	{
		sVar0 = sParam1;
	}
	func_247(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0);
}

int func_318(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_319(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x8D51D24D214E2FF2())
	{
		Global_2451473.f_4540 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 1))
		{
			unk_0x35D7948F61AA3FEC(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2451473.f_4540 = 0;
			unk_0xF3148AAF69AF9CBC(&(Global_2451473.f_4540), 1);
		}
	}
}

int func_320(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x1C6DF6AD69BE853E() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x996F735E5C03B101(unk_0xD74C7D8D2E5E43D2(), *uParam0);
		}
		else
		{
			return unk_0x996F735E5C03B101(unk_0xE36DF6414E5CCBBF(), *uParam0);
		}
	}
	return unk_0x996F735E5C03B101(unk_0x48E480685981C7D4(), *uParam0);
}

void func_321(int iParam0)
{
	unk_0x1F14EC098854F746(3, 21, 200, 0, 0);
	if (iParam0 && !func_243())
	{
		unk_0x35D7948F61AA3FEC(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_322(char* sParam0, int iParam1)
{
	unk_0x522099B37CAE9E12(sParam0);
	unk_0xC592EBAF1D879BDC(0, 0, 0, iParam1);
}

void func_323(int iParam0)
{
	Local_2163[unk_0x519AAFF77CC141DF() /*7*/].f_2 = iParam0;
}

void func_324(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 4);
	}
	else
	{
		unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 4);
	}
}

int func_325()
{
	if (func_311(unk_0x1329891157A54C63(), 21))
	{
		return 0;
	}
	if (unk_0x9B20331E99DD1C1C())
	{
		return 0;
	}
	if (unk_0xD10899F3A1372292())
	{
		return 0;
	}
	if (func_280(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (func_334())
	{
		return 0;
	}
	if (func_333())
	{
		return 0;
	}
	if (func_332())
	{
		return 0;
	}
	if (func_256())
	{
		return 0;
	}
	if (unk_0x726DA50057167075())
	{
		return 0;
	}
	if (func_282(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (!func_330())
	{
		return 0;
	}
	if (func_311(unk_0x1329891157A54C63(), 0) || func_311(unk_0x1329891157A54C63(), 3))
	{
		return 0;
	}
	if ((func_311(unk_0x1329891157A54C63(), 12) || func_311(unk_0x1329891157A54C63(), 14)) || func_311(unk_0x1329891157A54C63(), 13))
	{
		return 0;
	}
	if (func_329(unk_0x1329891157A54C63(), 0))
	{
		return 0;
	}
	if (func_328())
	{
		return 0;
	}
	if (Global_1698742)
	{
		return 0;
	}
	if (func_327(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (func_326())
	{
		return 0;
	}
	return 1;
}

int func_326()
{
	if (Global_2539917.f_796 > -1)
	{
		return 1;
	}
	return 0;
}

int func_327(int iParam0)
{
	if (!func_10(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1585045[iParam0 /*400*/].f_35;
}

bool func_328()
{
	return Global_90861.f_297 > 0;
}

int func_329(int iParam0, bool bParam1)
{
	if (Global_1585045[iParam0 /*400*/].f_248.f_7 > 0)
	{
		if (bParam1)
		{
			if (unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_248.f_5, 0))
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

int func_330()
{
	if (func_331() == 0)
	{
		return 1;
	}
	return 0;
}

int func_331()
{
	return Global_1312466.f_18;
}

bool func_332()
{
	return Global_1315892;
}

bool func_333()
{
	return Global_1585045[unk_0x1329891157A54C63() /*400*/] == 5;
}

bool func_334()
{
	return unk_0x236D8AD7EE179F46(Global_1585045[unk_0x1329891157A54C63() /*400*/].f_39.f_18, 0);
}

void func_335()
{
	if (Local_2163[unk_0x519AAFF77CC141DF() /*7*/].f_3 != 0)
	{
		Local_2163[unk_0x519AAFF77CC141DF() /*7*/].f_3 = 0;
	}
}

bool func_336(int iParam0)
{
	return func_136(iParam0, 0);
}

bool func_337(int iParam0)
{
	if (iParam0 == unk_0x1329891157A54C63())
	{
		if ((func_287() && !func_312()) || func_311(unk_0x1329891157A54C63(), 21))
		{
			return 1;
		}
		if (func_20(&(Global_1573867.f_13)))
		{
			if (!func_1(&(Global_1573867.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_19(&(Global_1573867.f_13));
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 10))
	{
		return 1;
	}
	return unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 9);
}

void func_338()
{
	func_339(&(Local_164.f_526), &Local_164, 23, &(Local_164.f_1), &(Local_164.f_109), -1, 0);
}

void func_339(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
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
	if (func_426())
	{
		if (func_392(uParam1, iParam2, uParam3, Global_1573670, 0, func_429()))
		{
			func_391(1);
			if (!func_390() || unk_0x236D8AD7EE179F46(Global_2451473.f_4403, 1))
			{
				if (func_389())
				{
					func_388();
				}
				else
				{
					unk_0x700CD125EC59941D(76, 84);
					if (uParam3->f_28 == 0)
					{
						func_387(1);
						Global_1573670 = 0;
						iVar18 = -1;
						if (Global_1573818 != 1)
						{
							func_386(uParam1);
							if (unk_0x236D8AD7EE179F46(uParam3->f_34, 7))
							{
								unk_0xC69E84EBBD7166E6(&(uParam3->f_34), 7);
							}
						}
						iVar16 = 0;
						while (iVar16 < 32)
						{
							if (func_385())
							{
								if (func_10(unk_0x6528B1497E4313F1(iVar16), 0, 1))
								{
									iVar0 = unk_0x6528B1497E4313F1(iVar16);
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
							if ((func_384(iVar0) && func_379(iVar0)) && func_10(iVar0, 0, 1))
							{
								iVar9 = iVar0;
								uParam3->f_39[iVar9 /*2*/].f_1 = iVar17;
								iVar7 = Global_1585045[iVar9 /*400*/].f_192.f_6;
								Var3 = { func_374(iVar0) };
								if (iVar0 == unk_0x1329891157A54C63())
								{
									uParam3->f_36 = iVar17;
								}
								StringCopy(&(uParam3->f_1), unk_0xB67DF8F35744CF60(iVar0), 64);
								*(uParam4[iVar16 /*13*/]) = { func_179(iVar0) };
								if (func_373(*(uParam4[iVar16 /*13*/])))
								{
								}
								iVar2 = func_367(iVar0);
								sVar1 = "";
								if (iVar2 != 0)
								{
									sVar1 = unk_0xD23DF626788C30FE(iVar2);
								}
								Global_1573670++;
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
									if (!func_385())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_362(&iVar8, &fVar10, (uParam0[iVar16 /*46*/])->f_8, iParam5);
									uParam3->f_104 = func_361(iParam5, 1, 0, 0);
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
								if (func_360(iParam5))
								{
									func_359(uParam1, uParam3, iVar17, Var3, sVar1, iVar7, iVar8, func_30(), iVar15, fVar10, iVar8, iVar12, &((uParam0[iVar16 /*46*/])->f_36), &((uParam0[iVar16 /*46*/])->f_40), (uParam0[iVar16 /*46*/])->f_44, iVar13, bParam6);
								}
								else
								{
									func_359(uParam1, uParam3, iVar17, Var3, sVar1, iVar7, iVar8, func_30(), iVar15, fVar10, iVar11, iVar12, &((uParam0[iVar16 /*46*/])->f_36), &((uParam0[iVar16 /*46*/])->f_40), (uParam0[iVar16 /*46*/])->f_44, iVar13, bParam6);
								}
								unk_0xF3148AAF69AF9CBC(&iVar14, iVar0);
								iVar17++;
							}
							iVar16++;
						}
						iVar16 = 0;
						while (iVar16 < 32)
						{
							iVar0 = unk_0x6528B1497E4313F1(iVar16);
							if (func_10(iVar0, 0, 1) && !unk_0x236D8AD7EE179F46(iVar14, iVar0))
							{
								iVar0 = unk_0x6528B1497E4313F1(iVar16);
							}
							else
							{
								iVar0 = func_34();
							}
							if (func_384(iVar0))
							{
								if (func_10(unk_0x6528B1497E4313F1(iVar16), 0, 1))
								{
									iVar9 = iVar0;
									uParam3->f_39[iVar9 /*2*/].f_1 = iVar17;
									iVar7 = Global_1585045[iVar9 /*400*/].f_192.f_6;
									Var3 = { func_374(iVar0) };
									*(uParam4[iVar16 /*13*/]) = { func_179(iVar0) };
									iVar2 = func_367(iVar0);
									sVar1 = "";
									if (iVar2 != 0)
									{
										sVar1 = unk_0xD23DF626788C30FE(iVar2);
									}
									Global_1573670++;
									func_351(unk_0xB67DF8F35744CF60(iVar0), uParam1, uParam3, iVar17, Var3, sVar1, iVar7, 116, iVar15);
									iVar17++;
								}
							}
							iVar16++;
						}
						if (unk_0x236D8AD7EE179F46(uParam3->f_34, 11))
						{
							func_348(uParam3, uParam1);
						}
						func_19(&(uParam3->f_22));
						func_347();
						uParam3->f_28 = 2;
					}
					if (uParam3->f_28 == 2)
					{
						if (!unk_0x236D8AD7EE179F46(uParam3->f_34, 7))
						{
							func_346(uParam3, uParam1);
							func_345(uParam1, 0, 1);
							unk_0xF3148AAF69AF9CBC(&(uParam3->f_34), 7);
						}
						func_346(uParam3, uParam1);
						if (!unk_0x236D8AD7EE179F46(uParam3->f_34, 11))
						{
							unk_0xF3148AAF69AF9CBC(&(uParam3->f_34), 11);
						}
						if (func_342(uParam3))
						{
							Global_1573818 = 1;
						}
						func_340(uParam3);
						if (Global_1573818 == 1)
						{
							uParam3->f_28 = 0;
						}
						if (Global_1573818 == 2)
						{
							uParam3->f_28 = 0;
						}
					}
					if (unk_0xCC8E3BAC62A29F42(*uParam1))
					{
						unk_0x7F3AA121397DEEC9(7);
						unk_0xD45896EF84BD41C8(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x7F3AA121397DEEC9(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_28 = 0;
			func_347();
			func_387(0);
			if (unk_0x236D8AD7EE179F46(uParam3->f_34, 7))
			{
				unk_0xC69E84EBBD7166E6(&(uParam3->f_34), 7);
			}
			if (unk_0x236D8AD7EE179F46(uParam3->f_34, 10))
			{
				unk_0xC69E84EBBD7166E6(&(uParam3->f_34), 10);
			}
		}
	}
	unk_0x94CD3CDE7BD3510B();
}

void func_340(var uParam0)
{
	if (!func_20(&(uParam0->f_22)))
	{
		func_2(&(uParam0->f_22), 0, 0);
	}
	else if (func_1(&(uParam0->f_22), 250, 0))
	{
		func_19(&(uParam0->f_22));
		func_341(0);
	}
}

void func_341(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1573818 != 2)
		{
			Global_1573818 = 2;
		}
	}
	else
	{
		switch (Global_1573818)
		{
			case 0:
				Global_1573818 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_342(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar15;
	int iVar16;
	
	iVar16 = 0;
	iVar0 = uParam0->f_38;
	iVar15 = unk_0x6528B1497E4313F1(uParam0->f_38);
	if (iVar15 != func_34() && func_10(iVar15, 0, 1))
	{
		Var2 = { func_179(iVar15) };
		iVar1 = func_344(uParam0, uParam0->f_38);
		if (func_373(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x112C43A973FDAE6C(&Var2))
					{
						if (unk_0x79E45505185E5A0D(&Var2))
						{
							iVar16 = 1;
							func_343(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x6E5E82D7E6363134(&Var2))
					{
						iVar16 = 1;
						func_343(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x112C43A973FDAE6C(&Var2))
					{
						if (!unk_0x79E45505185E5A0D(&Var2))
						{
							iVar16 = 1;
							func_343(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar16 = 1;
						func_343(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x112C43A973FDAE6C(&Var2))
					{
						if (!unk_0x6E5E82D7E6363134(&Var2))
						{
							iVar16 = 1;
							func_343(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x6E5E82D7E6363134(&Var2))
					{
						iVar16 = 1;
						func_343(uParam0, iVar0, 0);
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

void func_343(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_39[iParam1 /*2*/] = iParam2;
}

var func_344(var uParam0, int iParam1)
{
	return uParam0->f_39[iParam1 /*2*/];
}

void func_345(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x21ED0FC9B5CC748B(*uParam0, "COLLAPSE"))
	{
		unk_0x75A2A42ADE12FD0E(iParam1);
		unk_0xBA9BA6181F2B6111();
	}
	if (iParam2 == 1)
	{
		if (unk_0x21ED0FC9B5CC748B(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xBA9BA6181F2B6111();
		}
	}
}

void func_346(var uParam0, var uParam1)
{
	if (!unk_0x236D8AD7EE179F46(uParam0->f_34, 10))
	{
		unk_0x21ED0FC9B5CC748B(*uParam1, "SET_HIGHLIGHT");
		unk_0xBD0C54D89298454E(uParam0->f_36);
		unk_0xBA9BA6181F2B6111();
		unk_0xF3148AAF69AF9CBC(&(uParam0->f_34), 10);
	}
}

void func_347()
{
	if (Global_1573818 != 0)
	{
		Global_1573818 = 0;
	}
}

void func_348(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0x6528B1497E4313F1(iVar0);
		if (iVar2 != func_34())
		{
			if (func_10(iVar2, 0, 1))
			{
				if (uParam0->f_39[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_350(uParam0->f_39[iVar0 /*2*/]);
					func_349(uParam1, uParam0->f_39[iVar0 /*2*/].f_1, iVar1, Global_1585045[iVar0 /*400*/].f_192.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_349(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0xCC8E3BAC62A29F42(*uParam0))
	{
		if (unk_0x21ED0FC9B5CC748B(*uParam0, "SET_ICON"))
		{
			unk_0xBD0C54D89298454E(iParam1);
			unk_0xBD0C54D89298454E(iParam2);
			if (iParam2 == 65)
			{
				unk_0xBD0C54D89298454E(iParam3);
			}
			unk_0xBA9BA6181F2B6111();
		}
	}
}

int func_350(int iParam0)
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

void func_351(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_358() && iParam3 < func_357())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1573672)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1573818 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x21ED0FC9B5CC748B(*uParam1, sVar1))
		{
			unk_0xBD0C54D89298454E(iParam3);
			if (unk_0x236D8AD7EE179F46(uParam2->f_34, 8) || uParam2->f_107 == 6)
			{
				func_356("");
			}
			else
			{
				unk_0xBD0C54D89298454E(iParam9);
			}
			func_356(sParam0);
			unk_0xBD0C54D89298454E(iParam10);
			if (uParam2->f_107 == 6)
			{
				func_356("");
			}
			else
			{
				unk_0xBD0C54D89298454E(65);
			}
			unk_0xBD0C54D89298454E(-1);
			func_356("");
			if (uParam2->f_107 == 6)
			{
				func_356("");
			}
			else
			{
				func_356(&sParam4);
			}
			unk_0x75A2A42ADE12FD0E(uParam2->f_37);
			unk_0x19A855A370EE563C(sParam8);
			unk_0x19A855A370EE563C(sParam8);
			if (func_355(uParam2))
			{
				func_354("DPAD_FRIEND");
			}
			else if (func_353(uParam2))
			{
				func_354("DPAD_FRIEND");
			}
			else if (func_352(uParam2))
			{
				func_354("DPAD_CREW");
			}
			else
			{
				func_354("");
			}
			unk_0xBA9BA6181F2B6111();
		}
	}
}

bool func_352(var uParam0)
{
	return unk_0x236D8AD7EE179F46(uParam0->f_34, 6);
}

bool func_353(var uParam0)
{
	return unk_0x236D8AD7EE179F46(uParam0->f_34, 5);
}

void func_354(char* sParam0)
{
	unk_0x6CE839BF5D87A428(sParam0);
	unk_0xC3822F70D0E7940B();
}

int func_355(var uParam0)
{
	if (func_353(uParam0) && func_352(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_356(char* sParam0)
{
	unk_0x1F704997074F9C16(sParam0);
}

int func_357()
{
	int iVar0;
	
	if (Global_1573672)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_358()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1573672)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_359(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, var uParam5, var uParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12, int iParam13, int iParam14, char* sParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam2 >= func_358() && iParam2 < func_357())
	{
		iParam2 = (iParam2 % 16);
		iVar0 = iParam2 + 1;
		if (Global_1573672)
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
		if (Global_1573818 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0xCC8E3BAC62A29F42(*uParam0))
		{
			if (unk_0x21ED0FC9B5CC748B(*uParam0, sVar1))
			{
				unk_0xBD0C54D89298454E(iParam2);
				if (unk_0x236D8AD7EE179F46(uParam1->f_34, 8) || uParam1->f_107 == 6)
				{
					func_356("");
				}
				else
				{
					unk_0xBD0C54D89298454E(iParam8);
				}
				if (uParam1->f_107 == 6 && !unk_0xB318FDA0D1ABDB20(sParam15))
				{
					func_354(sParam15);
				}
				else
				{
					func_356(&(uParam1->f_1));
				}
				unk_0xBD0C54D89298454E(iParam10);
				if (uParam1->f_107 == 6)
				{
					func_356("");
				}
				else
				{
					unk_0xBD0C54D89298454E(65);
				}
				if (iParam11 == 1)
				{
					unk_0xBD0C54D89298454E(iVar0);
				}
				else
				{
					unk_0xBD0C54D89298454E(-1);
				}
				if (func_385())
				{
					func_356("");
				}
				else if (uParam1->f_107 == 6 && !unk_0xB318FDA0D1ABDB20(sParam15))
				{
					unk_0x6CE839BF5D87A428("FM_AE_ONE_INT");
					unk_0x072D7B028D6C7A05(sParam15);
					unk_0x6D55FF05D62B91BC(iParam17);
					unk_0xC3822F70D0E7940B();
				}
				else if (uParam1->f_107 == 5 && !unk_0xB318FDA0D1ABDB20(sParam15))
				{
					unk_0x6CE839BF5D87A428("FM_AE_ONE_INT");
					unk_0x072D7B028D6C7A05(sParam15);
					unk_0x6D55FF05D62B91BC(iParam17);
					unk_0xC3822F70D0E7940B();
				}
				else if ((uParam1->f_107 == 7 && !unk_0xB318FDA0D1ABDB20(sParam15)) && !unk_0xB318FDA0D1ABDB20(sParam16))
				{
					unk_0x6CE839BF5D87A428("FM_AE_TWO_INT");
					unk_0x072D7B028D6C7A05(sParam15);
					unk_0x072D7B028D6C7A05(sParam16);
					unk_0x6D55FF05D62B91BC(iParam17);
					unk_0xC3822F70D0E7940B();
				}
				else if (uParam1->f_107 == 8 && !unk_0xB318FDA0D1ABDB20(uParam1->f_104))
				{
					unk_0x6CE839BF5D87A428("FM_AE_UNIT");
					if (fParam12 != -1f)
					{
						unk_0xB6F6A8755E3C6180(fParam12, 1);
					}
					if (iParam9 != -1)
					{
						unk_0x6D55FF05D62B91BC(iParam9);
					}
					unk_0x072D7B028D6C7A05(uParam1->f_104);
					unk_0xC3822F70D0E7940B();
				}
				else if (uParam1->f_107 == 9)
				{
					unk_0x6CE839BF5D87A428("FM_AE_CASH");
					unk_0x849D5F6ABEAF5CC2(iParam9, 1);
					unk_0xC3822F70D0E7940B();
				}
				else if (iParam14 > -1)
				{
					if (iParam14 == 0 && !unk_0xB318FDA0D1ABDB20(uParam1->f_104))
					{
						func_354(uParam1->f_104);
					}
					else
					{
						func_356("");
					}
				}
				else if (iParam13 != -1)
				{
					unk_0x6CE839BF5D87A428("STRING");
					unk_0x628846883063947B(iParam13, 6);
					unk_0xC3822F70D0E7940B();
				}
				else if (fParam12 != -1f)
				{
					unk_0x6CE839BF5D87A428("NUMBER");
					unk_0xB6F6A8755E3C6180(fParam12, 1);
					unk_0xC3822F70D0E7940B();
				}
				else if (iParam9 != -1)
				{
					unk_0xBD0C54D89298454E(iParam9);
				}
				else
				{
					func_356("");
				}
				if (uParam1->f_107 == 6)
				{
					func_356("");
				}
				else
				{
					func_356(&sParam3);
				}
				unk_0x75A2A42ADE12FD0E(uParam1->f_37);
				if (iParam11 == 1 || unk_0xB318FDA0D1ABDB20(sParam7))
				{
					func_356("");
					func_356("");
				}
				else
				{
					unk_0x19A855A370EE563C(sParam7);
					unk_0x19A855A370EE563C(sParam7);
				}
				if (func_355(uParam1))
				{
					func_354("DPAD_FRIEND");
				}
				else if (func_353(uParam1))
				{
					func_354("DPAD_FRIEND");
				}
				else if (func_352(uParam1))
				{
					func_354("DPAD_CREW");
				}
				else
				{
					func_354("");
				}
				unk_0xBA9BA6181F2B6111();
			}
		}
	}
}

int func_360(int iParam0)
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

char* func_361(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0x32D4891AD2E2D140())
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
			if (unk_0x32D4891AD2E2D140())
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

int func_362(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_366(iParam3))
	{
		*fParam1 = (func_363(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_360(iParam3))
	{
		*fParam1 = (func_363(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_363(int iParam0, int iParam1)
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
			if (unk_0x32D4891AD2E2D140())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_365(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x32D4891AD2E2D140())
			{
				return unk_0xBBDA792448DB5A89(iParam1);
			}
			else
			{
				return func_364(unk_0xBBDA792448DB5A89(iParam1));
			}
			break;
	}
	return unk_0xBBDA792448DB5A89(iParam1);
}

float func_364(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_365(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_366(int iParam0)
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

int func_367(int iParam0)
{
	int iVar0;
	
	iVar0 = func_370(iParam0);
	if (iVar0 == -1)
	{
		func_368(iParam0, 1);
		return 0;
	}
	Global_1344467[iVar0 /*5*/].f_4 = 1;
	return Global_1344467[iVar0 /*5*/].f_2;
}

void func_368(int iParam0, bool bParam1)
{
	if (!func_10(iParam0, 0, 1))
	{
		return;
	}
	if (func_370(iParam0) != -1)
	{
		return;
	}
	if (Global_1344630)
	{
		if (iParam0 == Global_1344630.f_1)
		{
			return;
		}
	}
	if (func_369(iParam0))
	{
		return;
	}
	if (Global_1344668 >= 32)
	{
		return;
	}
	Global_1344635[Global_1344668] = iParam0;
	Global_1344668++;
	if (bParam1)
	{
	}
}

int func_369(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1344668)
	{
		if (Global_1344635[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_370(int iParam0)
{
	int iVar0;
	
	if (!func_10(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1344628 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1344628)
	{
		if (Global_1344467[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0xF873F9422A5D48E5(Global_1344467[iVar0 /*5*/].f_2) && unk_0x79A3388251B8DD5B(Global_1344467[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_371(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_371(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1344628)
	{
		return;
	}
	if (unk_0xF873F9422A5D48E5(Global_1344467[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1344467[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, unk_0xD23DF626788C30FE(Global_1344467[iParam0 /*5*/].f_2), 64);
			unk_0xDC6F0301DF609264(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		unk_0x2B91F38290118964(Global_1344467[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1344628)
	{
		Global_1344467[iVar32 /*5*/] = { Global_1344467[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_372(&(Global_1344467[iVar32 /*5*/]));
	Global_1344628 = (Global_1344628 - 1);
}

void func_372(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_34();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x1C6DF6AD69BE853E())
	{
		uParam0->f_3 = unk_0xD74C7D8D2E5E43D2();
	}
}

bool func_373(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0x7BD139E6ED31A2EB(&uParam0, 13);
}

struct<4> func_374(int iParam0)
{
	struct<4> Var0;
	
	if (func_10(iParam0, 0, 1))
	{
		Global_2450501 = { func_179(iParam0) };
		if (unk_0x3F0C224D3CC05EF2())
		{
			if (func_373(Global_2450501))
			{
				if (!unk_0x02F6979593134AF6(&Global_2450501))
				{
					return Var0;
				}
			}
		}
		else if (!unk_0xBEC1291D6B41868E(0))
		{
			return Var0;
		}
		if (func_378(&Global_2450501))
		{
			Global_2450431 = { func_376(iParam0) };
			func_375(&Global_2450431, &Var0);
		}
	}
	return Var0;
}

void func_375(var uParam0, var uParam1)
{
	unk_0x99C56C4A7747183E(uParam0, 35, uParam1);
}

struct<35> func_376(int iParam0)
{
	struct<13> Var0;
	struct<35> Var13;
	
	if (func_377(iParam0))
	{
		return Global_1315926[unk_0x1329891157A54C63() /*35*/];
	}
	Var0 = { func_179(iParam0) };
	unk_0xEF956A1EC046AA4A(&Var13, 35, &Var0);
	return Var13;
}

int func_377(int iParam0)
{
	if (iParam0 == unk_0x1329891157A54C63())
	{
		return 1;
	}
	return 0;
}

int func_378(var uParam0)
{
	if (unk_0x98465343DD18A1F7())
	{
		if (unk_0x80622F5ED5957337() && unk_0x464883E45616A088(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_379(int iParam0)
{
	if (func_6(iParam0) || func_383(iParam0))
	{
		return 0;
	}
	if (!func_382(iParam0))
	{
		return 0;
	}
	if ((!func_381(iParam0) && Global_2414506[iParam0 /*255*/].f_230 == -1) && !func_380(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_380(int iParam0)
{
	return Global_1585045[iParam0 /*400*/].f_177 != 0;
}

int func_381(int iParam0)
{
	if (func_10(iParam0, 0, 1))
	{
		if (func_10(unk_0x1329891157A54C63(), 0, 1))
		{
			if (unk_0x4F5BEB9A4097F301(iParam0, unk_0x1329891157A54C63()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_382(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1585045[iParam0 /*400*/].f_128, 22);
}

int func_383(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 10) || unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 9));
	}
	return 0;
}

int func_384(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_34())
	{
		return 0;
	}
	if (func_136(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x236D8AD7EE179F46(Global_1585045[iVar0 /*400*/].f_128, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_385()
{
	switch (func_260(unk_0x1329891157A54C63()))
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

void func_386(var uParam0)
{
	if (unk_0xCC8E3BAC62A29F42(*uParam0))
	{
		unk_0x21ED0FC9B5CC748B(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xBD0C54D89298454E(0);
		unk_0xBA9BA6181F2B6111();
	}
}

void func_387(bool bParam0)
{
	if (bParam0)
	{
		Global_1334763.f_2 = 1;
	}
	else
	{
		Global_1334763.f_2 = 0;
	}
}

void func_388()
{
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_4403, 1))
	{
		if (func_243())
		{
			func_236();
		}
	}
}

int func_389()
{
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_4403, 0) && func_243())
	{
		return 1;
	}
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_4403, 1) && func_243())
	{
		return 1;
	}
	return 0;
}

int func_390()
{
	if (func_243())
	{
		if (func_31(Global_2422670.f_2137[0 /*70*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_391(int iParam0)
{
	Global_1334763.f_1 = Global_1334763;
	Global_1334763 = iParam0;
}

int func_392(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	bool bVar4;
	bool bVar5;
	float fVar6;
	int iVar7;
	
	StringCopy(&Var0, "", 16);
	bVar5 = func_425(iParam1);
	if (iParam1 == 17)
	{
		bVar4 = true;
	}
	fVar6 = func_424();
	if (iParam1 == 23)
	{
		if (func_423())
		{
			if (func_422() > 0 && Global_1573672)
			{
				unk_0x10BFA51B8BA62476();
				unk_0x97925E0DE42EFC5C(fVar6);
				unk_0xC9A352663D97EFC3(18);
				if (unk_0xA83A609D74168B30())
				{
					unk_0xB5BFC55E4F67D18D();
				}
			}
		}
	}
	if (!bParam5)
	{
		if (!func_414())
		{
			func_413(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_4406, 26))
	{
		func_413(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_20(&(uParam2->f_20)))
	{
		if (func_422() == 1)
		{
			func_412(bVar5, uParam0, 0);
			func_2(&(uParam2->f_20), 0, 0);
			func_413(uParam0, uParam2, 0);
		}
	}
	if (func_20(&(uParam2->f_20)) || bParam5)
	{
		if (unk_0xA83A609D74168B30())
		{
			unk_0xB5BFC55E4F67D18D();
		}
		if (func_1(&(uParam2->f_20), 10000, 0) || (func_422() == 0 && !bParam5))
		{
			func_413(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar4 == 0)
			{
				func_411();
				if (iParam1 == 23)
				{
					unk_0x10BFA51B8BA62476();
				}
				unk_0xC9A352663D97EFC3(18);
			}
			if (unk_0x236D8AD7EE179F46(uParam2->f_34, 0))
			{
				Global_1573670 = uParam3;
				Global_1573669 = 1;
				unk_0x97925E0DE42EFC5C(fVar6);
				if (bVar4)
				{
					if (uParam2->f_35 != Global_1573671)
					{
						unk_0xC69E84EBBD7166E6(&(uParam2->f_34), 0);
					}
				}
				return 1;
			}
			else
			{
				if (bVar4 == 0)
				{
					func_411();
					if (iParam1 == 23)
					{
						unk_0x10BFA51B8BA62476();
					}
					unk_0xC9A352663D97EFC3(18);
				}
				unk_0x97925E0DE42EFC5C(fVar6);
				if (func_412(bVar5, uParam0, 0))
				{
					func_386(uParam0);
					uParam2->f_17 = func_409(iParam1, &(Global_1607808.f_63428), bParam4);
					if (unk_0xB318FDA0D1ABDB20(uParam2->f_17))
					{
						uParam2->f_17 = func_409(iParam1, &(Global_1607808.f_63428), bParam4);
					}
					if (bParam4)
					{
						func_406(uParam0, uParam2->f_17, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 23)
					{
						func_400(uParam0, func_403(uParam2), func_401(uParam2), -1);
					}
					else if (bVar4)
					{
						uParam2->f_35 = Global_1573671;
						func_406(uParam0, uParam2->f_17, "", 0, -1, Global_1573671, 1);
					}
					else
					{
						Var0 = { func_398(iParam1) };
						iVar7 = func_393(iParam1);
						func_406(uParam0, uParam2->f_17, &Var0, 1, iVar7, -1, 1);
					}
					unk_0xF3148AAF69AF9CBC(&(uParam2->f_34), 0);
				}
			}
		}
	}
	return 0;
}

int func_393(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_397())
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
			if (func_396(unk_0x1329891157A54C63()))
			{
				iVar0 = 20;
			}
			if (func_395(unk_0x1329891157A54C63()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_394(unk_0x1329891157A54C63()))
	{
		iVar0 = 2;
	}
	return iVar0;
}

bool func_394(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 4;
}

bool func_395(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 7;
}

bool func_396(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 2;
}

bool func_397()
{
	return Global_1607808.f_1 == 0;
}

struct<4> func_398(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_399(unk_0x1329891157A54C63()) || func_394(unk_0x1329891157A54C63()))
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
			StringIntConCat(&Var0, Global_1607808.f_20, 16);
			break;
	}
	return Var0;
}

bool func_399(int iParam0)
{
	return Global_2414506[iParam0 /*255*/].f_114 == 5;
}

void func_400(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0xCC8E3BAC62A29F42(*uParam0))
	{
		unk_0x21ED0FC9B5CC748B(*uParam0, "SET_TITLE");
		if (unk_0xB318FDA0D1ABDB20(uParam2))
		{
			func_354(uParam1);
		}
		else if (func_260(unk_0x1329891157A54C63()) == 133)
		{
			unk_0x6CE839BF5D87A428("FM_AE_BRACKT_C");
			unk_0x072D7B028D6C7A05(uParam1);
			unk_0x072D7B028D6C7A05(sParam2);
			unk_0xC3822F70D0E7940B();
		}
		else
		{
			unk_0x6CE839BF5D87A428("FM_AE_BRACKT");
			unk_0x072D7B028D6C7A05(sParam1);
			unk_0x072D7B028D6C7A05(sParam2);
			unk_0xC3822F70D0E7940B();
		}
		func_354("");
		if (iParam3 != -1)
		{
			unk_0xBD0C54D89298454E(iParam3);
		}
		unk_0xBA9BA6181F2B6111();
	}
}

char* func_401(var uParam0)
{
	if (func_402() && !unk_0xB318FDA0D1ABDB20(uParam0->f_106))
	{
		return uParam0->f_106;
	}
	else
	{
		switch (func_260(unk_0x1329891157A54C63()))
		{
			case 131:
				return "";
			
			case 132:
				return "FM_AE_SORT_5";
			
			case 133:
				switch (func_259())
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

bool func_402()
{
	return Global_1585044;
}

char* func_403(var uParam0)
{
	if (func_402() && !unk_0xB318FDA0D1ABDB20(uParam0->f_105))
	{
		return uParam0->f_105;
	}
	else
	{
		switch (func_260(unk_0x1329891157A54C63()))
		{
			case 131:
				return "PIM_TA9";
			
			case 132:
				if (func_405() == 0)
				{
					return "CPC_TILEL";
				}
				else if (func_405() == 1)
				{
					return "CPC_TILELA";
				}
				return "PIM_TA0";
				break;
			
			case 133:
				switch (func_259())
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
				if (func_404() == 1)
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

int func_404()
{
	return Global_2451473.f_4627;
}

int func_405()
{
	if (func_260(unk_0x1329891157A54C63()) == 132)
	{
		return Global_2451473.f_4622;
	}
	return -1;
}

void func_406(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCC8E3BAC62A29F42(*uParam0))
	{
		unk_0x21ED0FC9B5CC748B(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_356(uParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0x6CE839BF5D87A428(uParam1);
			unk_0x6D55FF05D62B91BC(iParam5);
			unk_0xC3822F70D0E7940B();
		}
		else
		{
			func_354(sParam1);
		}
		if (func_423() && iParam6)
		{
			if (func_408())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0x6CE839BF5D87A428("LBD_DPD_CNT");
			unk_0x6D55FF05D62B91BC(iVar0);
			unk_0x6D55FF05D62B91BC(iVar1);
			unk_0xC3822F70D0E7940B();
		}
		else
		{
			func_354(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0xBD0C54D89298454E(iParam4);
			if (func_407(unk_0x1329891157A54C63()))
			{
				unk_0xBD0C54D89298454E(166);
			}
		}
		unk_0xBA9BA6181F2B6111();
	}
}

int func_407(int iParam0)
{
	if (func_396(iParam0) || func_395(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_408()
{
	return Global_1573672;
}

char* func_409(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 17)
	{
		uVar0 = func_410();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 21)
	{
		if (Global_1573836 == 0)
		{
			Global_1573836 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0xB318FDA0D1ABDB20(uParam1))
	{
		if (Global_1573836 == 1)
		{
			Global_1573836 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1573836 == 0)
		{
			Global_1573836 = 1;
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

char* func_410()
{
	if (unk_0xCCA957C9E80D164B())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0xE7A4B9596EBA099D())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0x819401838C15BB6B())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0xB830EBEEFC476A2F())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_411()
{
	Global_36265 = 1;
}

bool func_412(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x95EF972E3A07B525("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x95EF972E3A07B525("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x95EF972E3A07B525("mp_matchmaking_card");
	}
	return unk_0xCC8E3BAC62A29F42(*uParam1);
}

void func_413(var uParam0, var uParam1, bool bParam2)
{
	unk_0xC69E84EBBD7166E6(&(uParam1->f_34), 7);
	Global_1573670 = 0;
	func_347();
	Global_1573669 = 0;
	uParam1->f_28 = 0;
	if (bParam2)
	{
		if (func_20(&(uParam1->f_20)))
		{
			func_19(&(uParam1->f_20));
		}
	}
	if (unk_0xCC8E3BAC62A29F42(*uParam0))
	{
		unk_0x4B6F01DE8CCE643E(uParam0);
	}
	if (unk_0x236D8AD7EE179F46(uParam1->f_34, 0))
	{
		unk_0xC69E84EBBD7166E6(&(uParam1->f_34), 0);
	}
	unk_0x97925E0DE42EFC5C(0f);
}

int func_414()
{
	if (func_421())
	{
		return 0;
	}
	if (func_333())
	{
		return 0;
	}
	if (!func_419())
	{
		return 0;
	}
	if (!func_330())
	{
		return 0;
	}
	if (func_418(8, -1))
	{
		return 0;
	}
	if (func_422() == 2)
	{
		return 0;
	}
	if (Global_2451473.f_4387)
	{
		return 0;
	}
	if (func_256())
	{
		return 0;
	}
	else if (!func_281(unk_0x1329891157A54C63(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_417(1) || func_415(1)) || Global_17099.f_124) || Global_17099)
	{
		return 0;
	}
	if (unk_0xDB10DED5ABC4AA20())
	{
		return 0;
	}
	if (func_265(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (Global_1698742)
	{
		return 0;
	}
	if (Global_1698745)
	{
		return 0;
	}
	return 1;
}

int func_415(bool bParam0)
{
	if (unk_0xACE30BA91B2DD8E5())
	{
		if (!unk_0x5FEB513A4402FD59(unk_0x81873881071CD9FE()))
		{
			if (func_416(unk_0x81873881071CD9FE()))
			{
				if (unk_0xCAD9951C953F5B2D(0, 25) || unk_0xCAD9951C953F5B2D(0, 68))
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
	if (unk_0xCAD9951C953F5B2D(0, 19) || (!bParam0 && unk_0x70A79CA636F98FA5(0, 19)))
	{
		return 1;
	}
	if (unk_0x913B1C01C1BA6C6F())
	{
		if (((unk_0xCAD9951C953F5B2D(0, 166) || unk_0xCAD9951C953F5B2D(0, 167)) || unk_0xCAD9951C953F5B2D(0, 168)) || unk_0xCAD9951C953F5B2D(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0x70A79CA636F98FA5(0, 166) || unk_0x70A79CA636F98FA5(0, 167)) || unk_0x70A79CA636F98FA5(0, 168)) || unk_0x70A79CA636F98FA5(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_416(int iParam0)
{
	int iVar0;
	
	if (unk_0x763F2CFB73975AA7())
	{
		if (!unk_0x5FEB513A4402FD59(uParam0))
		{
			unk_0x5F446E70DA9B8122(iParam0, &iVar0, 1);
			if ((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_417(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17099.f_4 && Global_17099.f_104 == 4);
	}
	return Global_17099.f_4;
}

bool func_418(int iParam0, int iParam1)
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

int func_419()
{
	if (func_420())
	{
		return 1;
	}
	if (unk_0x29AFA2493D7C23D0())
	{
		return 0;
	}
	if (unk_0xC584A413BCB2AA39() || unk_0xC11AD1609CFCCCE1())
	{
		return 0;
	}
	if (unk_0x3A93B922D5E9060F())
	{
		return 0;
	}
	return 1;
}

bool func_420()
{
	return Global_1312438;
}

bool func_421()
{
	return unk_0x48E480685981C7D4() <= Global_17238.f_5630 + 100;
}

int func_422()
{
	return Global_1334766.f_68;
}

int func_423()
{
	if (Global_1573671 > 16)
	{
		return 1;
	}
	return 0;
}

float func_424()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0xCAF8683E9362A022()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_425(int iParam0)
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

int func_426()
{
	if (func_429())
	{
		return 1;
	}
	if (func_5(unk_0x1329891157A54C63()))
	{
		return 0;
	}
	if (func_402())
	{
		return 1;
	}
	if (func_428(unk_0x1329891157A54C63()))
	{
		switch (func_260(unk_0x1329891157A54C63()))
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
				if (!func_427(unk_0x1329891157A54C63()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_427(unk_0x1329891157A54C63()))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

bool func_427(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 4);
}

int func_428(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1606167[iVar0 /*12*/] != -1;
	}
	return 0;
}

int func_429()
{
	if (func_430(unk_0x1329891157A54C63()))
	{
		return Global_1318828;
	}
	return 0;
}

int func_430(int iParam0)
{
	if (func_136(iParam0, 0))
	{
		return unk_0xC9C35C91114A8B03(iParam0);
	}
	return 0;
}

void func_431()
{
	int iVar0;
	
	if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(iLocal_98)))
	{
		iVar0 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(iLocal_98));
		if (unk_0xA89AE5060232966A(iVar0))
		{
			func_432(iVar0, 2);
		}
	}
	iLocal_98++;
	if (iLocal_98 >= unk_0x945535897333587B())
	{
		iLocal_98 = 0;
	}
}

void func_432(int iParam0, int iParam1)
{
	if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 0))
	{
		return;
	}
	if (func_20(&(Global_1573867.f_18)))
	{
		return;
	}
	if (unk_0x236D8AD7EE179F46(Global_1573867.f_2, iParam0))
	{
		if (Global_1573867 < iParam1 && unk_0x236D8AD7EE179F46(Global_1573867.f_1, 1))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 0);
			return;
		}
		if (Global_1573867 != 0)
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 1);
		}
		Global_1573867 = 0;
		Global_1573867.f_2 = 0;
	}
	unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_2), iParam0);
	if (((!func_6(iParam0) && !func_433(iParam0)) && !func_136(iParam0, 0)) && !func_5(iParam0))
	{
		Global_1573867++;
	}
}

bool func_433(int iParam0)
{
	return unk_0x236D8AD7EE179F46(Global_1606167[iParam0 /*12*/].f_1, 10);
}

void func_434(int iParam0, int iParam1)
{
	Local_2163[iParam0 /*7*/] = iParam1;
}

int func_435()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Local_164.f_526[iVar0 /*46*/].f_1 = func_34();
		iVar0++;
	}
	return 1;
	return 0;
}

int func_436()
{
	return Local_111.f_0;
}

int func_437(int iParam0)
{
	return Local_2163[iParam0 /*7*/];
}

void func_438()
{
	if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 6))
	{
		func_454();
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 6);
	}
	if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 7))
	{
		if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 4) || unk_0x236D8AD7EE179F46(Global_1573867.f_1, 16))
		{
			if (((!unk_0x2DD54246D4BB0A20() && !unk_0xA83A609D74168B30()) && !func_243()) && func_10(unk_0x1329891157A54C63(), 1, 1))
			{
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 7);
				func_322("FME_PASINT", 30000);
				func_321(1);
			}
		}
		else if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 17))
		{
			if (func_287() && !func_312())
			{
				unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 17);
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 16);
			}
		}
	}
	if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 23))
	{
		if (((((!unk_0x2DD54246D4BB0A20() && !unk_0x236D8AD7EE179F46(Global_2451473.f_734, 2)) && func_10(unk_0x1329891157A54C63(), 1, 1)) && !Global_67710) && !Global_52584) && !unk_0xA83A609D74168B30())
		{
			if (func_452())
			{
				func_322("AMEV_GA_RP", -1);
				func_321(1);
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 23);
			}
		}
	}
	if (unk_0xDB10DED5ABC4AA20() && unk_0x37F19465A7165331() == 15)
	{
		if (func_451(unk_0x1329891157A54C63()))
		{
			if (!unk_0xF96ADDF61615476B(1344549371))
			{
				unk_0x10F474DA4DF674D9(1344549371);
			}
		}
		else if (unk_0xF96ADDF61615476B(1344549371))
		{
			unk_0x53D82E134017815A(1344549371);
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 9))
	{
		if ((((!unk_0x2DD54246D4BB0A20() && !unk_0xA83A609D74168B30()) && !func_243()) && func_10(unk_0x1329891157A54C63(), 1, 1)) && !func_311(unk_0x1329891157A54C63(), 21))
		{
			unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 9);
			func_450(0);
			func_322("FME_TBL00", -1);
			func_321(1);
		}
	}
	if (func_428(unk_0x1329891157A54C63()))
	{
		if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 18))
		{
			if ((func_311(unk_0x1329891157A54C63(), 21) && unk_0x236D8AD7EE179F46(Global_1573867.f_1, 20)) && !unk_0x236D8AD7EE179F46(Global_1573867.f_1, 19))
			{
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 18);
			}
		}
		else if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 18))
		{
			if (((((!unk_0x2DD54246D4BB0A20() && !unk_0xA83A609D74168B30()) && !func_243()) && func_10(unk_0x1329891157A54C63(), 1, 1)) && unk_0xECDEA377354CBDA4()) && !Global_2451473.f_4631)
			{
				unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 18);
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 19);
				func_322("AMTT_RPAS", -1);
				func_321(1);
			}
		}
	}
	if ((((func_428(unk_0x1329891157A54C63()) && !func_6(unk_0x1329891157A54C63())) && func_260(unk_0x1329891157A54C63()) != 146) && !func_5(unk_0x1329891157A54C63())) && !func_337(unk_0x1329891157A54C63()))
	{
		if (func_306(func_260(unk_0x1329891157A54C63())))
		{
			unk_0xF637D39758718565(unk_0x1329891157A54C63());
		}
		if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 22))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 22);
		}
		if (func_449(unk_0x1329891157A54C63()) || func_301())
		{
			if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 10))
			{
				if (func_447(func_260(unk_0x1329891157A54C63())))
				{
					if (func_222(0) && !Global_2391042)
					{
						unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 9);
					}
					func_305(1);
					unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 14);
				}
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 10);
			}
		}
		if (func_451(unk_0x1329891157A54C63()))
		{
			if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 11))
			{
				if (!Global_90861.f_8)
				{
					unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 12);
					func_303(1);
				}
				if (!func_446())
				{
					unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 13);
					func_302();
				}
				if (!Global_2391042)
				{
					unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 14);
					if (func_222(0) && !Global_2391042)
					{
						unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 9);
					}
					func_305(1);
				}
				unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 11);
			}
		}
		else
		{
			func_444(0);
		}
	}
	else
	{
		func_444(1);
	}
	func_439();
	if (func_300(func_260(unk_0x1329891157A54C63())) && !unk_0x236D8AD7EE179F46(Global_1573867.f_1, 21))
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 21);
	}
	if ((func_287() && !func_312()) || func_311(unk_0x1329891157A54C63(), 21))
	{
		if (!unk_0x236D8AD7EE179F46(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1, 10))
		{
			unk_0xF3148AAF69AF9CBC(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 10);
		}
	}
	else if (unk_0x236D8AD7EE179F46(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1, 10))
	{
		unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 10);
	}
}

void func_439()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_243())
	{
		iVar2 = 62;
		iVar2 = 0;
		while (iVar2 < 82)
		{
			if (func_298(iVar2))
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
				if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 26))
				{
					unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 26);
				}
				func_440(iVar0, iVar1);
				iVar2 = 82;
			}
			iVar2++;
		}
	}
	else if (!unk_0x236D8AD7EE179F46(Global_1573867.f_1, 26))
	{
		func_19(&(Global_1573867.f_21));
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 26);
	}
}

void func_440(int iParam0, int iParam1)
{
	if (!func_20(&(Global_1573867.f_21)))
	{
		func_2(&(Global_1573867.f_21), 0, 0);
	}
	else if (func_1(&(Global_1573867.f_21), iParam1, 0))
	{
		if (func_422() > 0)
		{
			func_443(iParam0);
			if (func_239("AMEV_LBD_HELP"))
			{
				unk_0xB8BB626315D394F5(1);
			}
			func_19(&(Global_1573867.f_21));
		}
	}
	else
	{
		func_442(0);
		func_441();
	}
}

void func_441()
{
	Global_2451473.f_4374 = 0;
}

void func_442(int iParam0)
{
	Global_1334766.f_68 = iParam0;
}

void func_443(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2422670.f_2137[iVar0 /*70*/].f_1 == iParam0)
		{
			Global_2422670.f_2137[iVar0 /*70*/].f_2 = 5;
			unk_0xF3148AAF69AF9CBC(&(Global_2422670.f_2137[iVar0 /*70*/].f_63), 0);
		}
		iVar0++;
	}
}

void func_444(int iParam0)
{
	if ((unk_0x236D8AD7EE179F46(Global_1573867.f_1, 11) || (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 10) && iParam0)) || (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 22) && iParam0))
	{
		if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 12))
		{
			unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 12);
			func_303(0);
		}
		if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 13))
		{
			unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 13);
			func_445();
		}
		if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 14))
		{
			unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 14);
			func_305(0);
		}
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 11);
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 10);
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 22);
	}
}

void func_445()
{
	unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4541), 0);
}

bool func_446()
{
	return unk_0x236D8AD7EE179F46(Global_2451473.f_4541, 0);
}

int func_447(int iParam0)
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
			return func_451(unk_0x1329891157A54C63());
		
		case 133:
			return (func_301() || func_448(func_259()));
		
		default:
	}
	return 0;
}

int func_448(int iParam0)
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

int func_449(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_1606167[iVar0 /*12*/].f_1, 7);
	}
	return 0;
}

void func_450(int iParam0)
{
	int iVar0;
	
	iVar0 = func_66(2506, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0x236D8AD7EE179F46(iVar0, 0))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 0);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 1))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 1);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 2))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0x236D8AD7EE179F46(iVar0, 3))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 3);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 4))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 4);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 5))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0x236D8AD7EE179F46(iVar0, 6))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 6);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 7))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 7);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 8))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0x236D8AD7EE179F46(iVar0, 9))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 9);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 10))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 10);
		}
		else if (!unk_0x236D8AD7EE179F46(iVar0, 11))
		{
			unk_0xF3148AAF69AF9CBC(&iVar0, 11);
		}
	}
	func_184(2506, iVar0, -1, 1);
}

int func_451(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0x236D8AD7EE179F46(Global_1606167[iVar0 /*12*/].f_1, 0);
	}
	return 0;
}

int func_452()
{
	int iVar0;
	
	if (!func_20(&(Global_1573867.f_15)))
	{
		func_2(&(Global_1573867.f_15), 0, 0);
		Global_1573867.f_17 = 0;
	}
	else if (func_1(&(Global_1573867.f_15), 1000, 0))
	{
		if (unk_0xC4FEBC724D547D78(unk_0xC3904F8771F37B7F(Global_1573867.f_17)))
		{
			iVar0 = unk_0x29A638E7EEEE6B16(unk_0xC3904F8771F37B7F(Global_1573867.f_17));
			if (unk_0xA89AE5060232966A(iVar0))
			{
				if (func_10(iVar0, 1, 1) && func_453(iVar0, 6))
				{
					if (unk_0x2A488C176D52CCA5(func_198(unk_0x1329891157A54C63()), func_198(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1573867.f_17++;
		if (Global_1573867.f_17 >= 32)
		{
			Global_1573867.f_17 = 0;
			func_19(&(Global_1573867.f_15));
		}
	}
	return 0;
}

int func_453(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_188(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1585045[iVar0 /*400*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

void func_454()
{
	unk_0x9BAE0FF806E5C2E5(5);
	func_456();
	unk_0x5B6D37392F5991C3(1f);
	unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 8);
	func_455();
}

void func_455()
{
	if (Global_1708196)
	{
		if (unk_0x236D8AD7EE179F46(Global_1708197, 0))
		{
			unk_0xC69E84EBBD7166E6(&Global_2457846, 0);
		}
		if (unk_0x236D8AD7EE179F46(Global_1708197, 1))
		{
			unk_0xC69E84EBBD7166E6(&Global_2457846, 1);
		}
		if (unk_0x236D8AD7EE179F46(Global_1708197, 5))
		{
			unk_0xC69E84EBBD7166E6(&Global_2457846, 5);
		}
		if (unk_0x0017826B6757A11F(-355737150))
		{
			unk_0xFF3E86C4D581F64B(-355737150, 1, 0, 0);
		}
		if (unk_0x0017826B6757A11F(-580979506))
		{
			unk_0xFF3E86C4D581F64B(-580979506, 1, 0, 0);
		}
		if (unk_0x0017826B6757A11F(-1426452475))
		{
			unk_0xFF3E86C4D581F64B(-1426452475, 1, 0, 0);
		}
		if (unk_0x0017826B6757A11F(745417724))
		{
			unk_0xFF3E86C4D581F64B(745417724, 1, 0, 0);
		}
		if (unk_0x0017826B6757A11F(-1305304906))
		{
			unk_0xFF3E86C4D581F64B(-1305304906, 1, 0, 0);
		}
		if (unk_0x0017826B6757A11F(-1543175077))
		{
			unk_0xFF3E86C4D581F64B(-1543175077, 1, 0, 0);
		}
		if (unk_0x0017826B6757A11F(-811770997))
		{
			unk_0xFF3E86C4D581F64B(-811770997, 1, 0, 0);
		}
		Global_1708197 = 0;
	}
	Global_1708196 = 0;
}

void func_456()
{
	if (unk_0x64AD45A6264810A8(Global_2451473.f_4633))
	{
		if (!Global_2451473.f_4633 == unk_0x8F56512BDA9F6921())
		{
			return;
		}
	}
	Global_2451473.f_4633 = -1;
	Global_2451473.f_4632 = 1f;
}

int func_457()
{
	if (func_458())
	{
		return 1;
	}
	return 0;
}

bool func_458()
{
	return Global_1573867.f_23;
}

int func_459()
{
	bool bVar0;
	
	func_464(&bVar0);
	if (bVar0)
	{
		return 1;
	}
	if (Global_1315867 == 0)
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			return 1;
		}
	}
	if (func_463())
	{
		return 1;
	}
	if (Global_2438897)
	{
		return 1;
	}
	if (func_462())
	{
		return 1;
	}
	if (func_461(157))
	{
		if (!func_460())
		{
			return 1;
		}
	}
	if (func_461(155))
	{
		return 1;
	}
	if (!unk_0x1F2C82EFDAD19C5D())
	{
		return 1;
	}
	if (func_308() != 0)
	{
		if (unk_0x968BF1C2C695B61A(func_308()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_460()
{
	return Global_2428865.f_573;
}

int func_461(int iParam0)
{
	if (unk_0xE0A17F32C7C30546(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_462()
{
	return Global_2436988;
}

bool func_463()
{
	return Global_2428865.f_568;
}

void func_464(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < unk_0x8D411F45C0269899(1))
	{
		iVar1 = unk_0xE22864B8883341B7(1, iVar0);
		if (iVar1 == 168)
		{
			unk_0xDC8C46445C29336D(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 310:
					func_465(iVar0);
					break;
				
				case 2:
					unk_0xDC8C46445C29336D(1, iVar0, &Var4, 3);
					if (Var4.f_2 == 54)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_465(int iParam0)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (unk_0xDC8C46445C29336D(1, iParam0, &Var0, 3))
	{
		if (func_10(Var0.f_1, 1, 1))
		{
			uVar3 = unk_0xE495E987CB2BE7EF(Var0.f_1);
			if (unk_0x86CCCD2FAE9D5E65(uVar3))
			{
				if (unk_0xE5AB05962FA1FF3F(iVar3, 0))
				{
					uVar4 = unk_0xE68E6B44DABA9C05(iVar3, 0);
					if (unk_0x61B3150BF9145A92(uVar4, Var0.f_2) && unk_0xA360A5024482E898())
					{
						if (func_466(uVar4, &bVar5))
						{
							unk_0xAA33E712AB3178EC(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							unk_0xE0913C01F5C0CC3D(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_466(int iParam0, var uParam1)
{
	if (unk_0x86CCCD2FAE9D5E65(uParam0))
	{
		if (!unk_0xE86442941AE40E75(iParam0))
		{
			if (unk_0x28BE3924E7CDB27F(iParam0))
			{
				unk_0xD768713E73165208(iParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (unk_0x46AE53A47E5D03D5(iParam0, 0))
		{
			if (unk_0x4D2386673BCED434(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_467()
{
	unk_0x4EDE34FBADD967A6(0);
}

void func_468()
{
	if (func_459())
	{
		Local_2388.f_5 = 5;
	}
	else if (unk_0x236D8AD7EE179F46(Local_111.f_1, 0))
	{
		Local_2388.f_5 = 6;
	}
	else if (func_270(0))
	{
		Local_2388.f_5 = 1;
	}
	else
	{
		Local_2388.f_5 = 2;
	}
	func_324(0);
	func_470(144, 0, Local_111.f_37 == 5);
	func_315(30, 0);
	Local_2388.f_0 = Local_111.f_49;
	Local_2388.f_1 = Local_111.f_50;
	Local_2388.f_4 = Local_111.f_51;
	Local_2388.f_3 = Local_111.f_52;
	Local_2388.f_10 = (unk_0xC7224E4F41E00BE3() - Local_2388.f_9);
	func_469(Local_2388, iLocal_96, -1, -1, -1, -1, -1);
	if (!Global_262145.f_9263)
	{
		if (Local_2388.f_6 > 0)
		{
		}
	}
	unk_0xC23A229F78DAD92A();
}

void func_469(struct<12> Param0, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
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
	
	uVar0 = unk_0x11CA2334E341B424();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_69020)
	{
		if (unk_0xD994929E13CC1ED5(uVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam12;
			unk_0x873A507463AEADAD(&Var1);
		}
		else if (unk_0xD994929E13CC1ED5(uVar0, "freemode"))
		{
			Var14 = { Param0 };
			Var14.f_12 = uParam12;
			Var14.f_13 = iParam13;
			unk_0x7F79069287DE07E5(&Var14);
		}
		else if (unk_0xD994929E13CC1ED5(uVar0, "am_cp_collection"))
		{
			Var28 = { Param0 };
			Var28.f_12 = uParam12;
			Var28.f_13 = iParam13;
			Var28.f_14 = iParam14;
			Var28.f_15 = iParam15;
			Var28.f_16 = iParam16;
			Var28.f_17 = iParam17;
			unk_0x79FB900F8BBD70D4(&Var28);
		}
		else if (unk_0xD994929E13CC1ED5(uVar0, "am_challenges"))
		{
			Var52 = { Param0 };
			Var52.f_12 = uParam12;
			Var52.f_13 = unk_0xBBDA792448DB5A89(iParam13);
			if (iParam14 == 1)
			{
				Var52.f_13 = (Var52.f_13 / 10f);
			}
			unk_0x38D7FC94D929810F(&Var52);
		}
		else if (unk_0xD994929E13CC1ED5(uVar0, "am_penned_in"))
		{
			unk_0x308932840CD4CC5F(&Param0);
		}
		else if (unk_0xD994929E13CC1ED5(uVar0, "am_pass_the_parcel"))
		{
			Var66 = { Param0 };
			Var66.f_12 = uParam12;
			unk_0xD32EF874013A489C(&Var66);
		}
		else if (unk_0xD994929E13CC1ED5(uVar0, "am_hot_property"))
		{
			Var79 = { Param0 };
			Var79.f_12 = uParam12;
			Var79.f_13 = iParam13;
			unk_0xFEFB7107D5ABDC62(&Var79);
		}
		else if (unk_0xD994929E13CC1ED5(uVar0, "am_dead_drop"))
		{
			Var93 = { Param0 };
			Var93.f_12 = uParam12;
			Var93.f_13 = iParam13;
			unk_0xB9AF9560738D57F9(&Var93);
		}
		else if (unk_0xD994929E13CC1ED5(uVar0, "am_king_of_the_castle"))
		{
			Var107 = { Param0 };
			Var107.f_12 = uParam12;
			Var107.f_13 = iParam13;
			Var107.f_14 = iParam14;
			Var107.f_15 = iParam15;
			unk_0x71C684296070EB75(&Var107);
		}
		else if (unk_0xD994929E13CC1ED5(uVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var123 = { Param0 };
			Var123.f_12 = uParam12;
			unk_0xA10EAC86FFC2F674(&Var123);
		}
		else if (unk_0xD994929E13CC1ED5(uVar0, "AM_KILL_LIST"))
		{
			if (iParam14 == 0)
			{
				Var136 = { Param0 };
				Var136.f_12 = uParam12;
				Var136.f_13 = iParam13;
				unk_0xFA0B3892D04539F2(&Var136);
			}
			else
			{
				Var150 = { Param0 };
				Var150.f_12 = uParam12;
				Var150.f_13 = iParam13;
				unk_0x501D8C12E466C8AF(&Var150);
			}
		}
		else if (unk_0xD994929E13CC1ED5(uVar0, "am_hunt_the_beast"))
		{
			Var164 = { Param0 };
			Var164.f_12 = uParam12;
			unk_0x2271CB417FFB4D70(&Var164);
		}
	}
}

void func_470(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0x1329891157A54C63() != -1)
	{
		if (unk_0x236D8AD7EE179F46(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1, 13))
		{
			unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 13);
		}
		if (unk_0x236D8AD7EE179F46(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1, 14))
		{
			unk_0xC69E84EBBD7166E6(&(Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1), 14);
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_1573867.f_1, 21))
	{
		unk_0xC69E84EBBD7166E6(&(Global_1573867.f_1), 21);
	}
	func_491();
	unk_0x59BBCA8743D045AE("DisableFlightMusic", 0);
	unk_0x59BBCA8743D045AE("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_490(func_260(unk_0x1329891157A54C63()));
		func_315(21, 0);
	}
	else
	{
		if ((bParam2 && unk_0x1329891157A54C63() != -1) && func_489(unk_0x1329891157A54C63()) >= 12)
		{
			func_488(2518, -1);
			iVar1 = func_66(2518, -1, 0);
			if (iVar1 == 2)
			{
				unk_0xF3148AAF69AF9CBC(&Global_1573892, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0xF3148AAF69AF9CBC(&Global_1573892, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0xF3148AAF69AF9CBC(&Global_1573892, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0xF3148AAF69AF9CBC(&Global_1573892, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0xF3148AAF69AF9CBC(&Global_1573892, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0xF3148AAF69AF9CBC(&Global_1573892, 5);
			}
		}
		func_487();
		func_486();
		func_485();
		func_476();
		func_475();
		func_454();
		func_474();
		unk_0xC69E84EBBD7166E6(&(Global_2451473.f_1628), 2);
		func_473();
		func_472();
	}
	if (unk_0xF96ADDF61615476B(1344549371))
	{
		unk_0x53D82E134017815A(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (unk_0x1329891157A54C63() != -1 && !func_311(unk_0x1329891157A54C63(), 21))
		{
			func_305(0);
			func_303(0);
			func_471();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_24(26, -1))
		{
			Global_2438842 = -1;
			func_21(26, -1);
		}
	}
	Global_2450427 = 1;
}

void func_471()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0x236D8AD7EE179F46(Global_2359718[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0x236D8AD7EE179F46(Global_2359718[iVar0 /*26*/].f_13, 26))
			{
				unk_0xC69E84EBBD7166E6(&(Global_2359718[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_472()
{
	Global_1606167[unk_0x1329891157A54C63() /*12*/].f_6 = 0;
}

void func_473()
{
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_4540, 1))
	{
		unk_0xC69E84EBBD7166E6(&(Global_2451473.f_4540), 1);
	}
	if (Global_2451473.f_4540 > 0)
	{
		unk_0x80650551CC58C784("FM_COUNTDOWN_30S_KILL");
		unk_0x80650551CC58C784("FM_COUNTDOWN_30S_FIRA");
		unk_0x0C22E352114F699C("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x094B864326B5FE96(1);
		Global_2451473.f_4540 = 0;
		unk_0x59BBCA8743D045AE("DisableFlightMusic", 0);
		unk_0x59BBCA8743D045AE("WantedMusicDisabled", 0);
		unk_0x59BBCA8743D045AE("AllowScoreAndRadio", 0);
		if (!unk_0xD994929E13CC1ED5(unk_0x11CA2334E341B424(), "am_pi_menu"))
		{
			if (Global_2451473.f_4550 > -1)
			{
				unk_0x54206B7CE6FF2360(Global_2451473.f_4550);
				Global_2451473.f_4550 = -1;
			}
		}
	}
}

void func_474()
{
	struct<24> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Global_1573867 = { Var0 };
}

void func_475()
{
	var uVar0;
	
	Global_1318828 = uVar0;
}

void func_476()
{
	Global_2404607.f_20 = { Global_2406143 };
	Global_2404607.f_22 = { Global_2406145 };
	func_477(1, 1);
}

void func_477(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_2404607.f_39 = { Global_2406162 };
	}
	else
	{
		Global_2404607.f_39 = { Global_2406162 };
		Global_2404607.f_39.f_49 = { Global_2406162.f_49 };
		Global_2404607.f_39.f_52 = Global_2406162.f_52;
		Global_2404607.f_39.f_53 = Global_2406162.f_53;
	}
	if (bParam0)
	{
		func_484();
	}
	func_480(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077);
	func_479(0);
	func_478();
}

void func_478()
{
	struct<4> Var0;
	
	if (Global_2404607.f_466.f_1 == unk_0x8F56512BDA9F6921())
	{
		Global_2404607.f_466 = { Var0 };
	}
}

void func_479(bool bParam0)
{
	if (bParam0)
	{
		Global_2404607.f_615 = 0;
	}
	else
	{
		Global_2404607.f_615 = 1;
	}
}

void func_480(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (bParam0)
	{
		Global_2404607.f_1121 = iParam1;
		Global_2404607.f_1122 = iParam2;
		func_482();
		func_481(8, 0, 0);
		Global_2404607.f_616 = 1;
		Global_2404607.f_1125 = iParam3;
		Global_2404607.f_1126 = iParam4;
		Global_2404607.f_1123 = iParam5;
		Global_2404607.f_1124 = iParam6;
		Global_2404607.f_1127 = iParam7;
		Global_2404607.f_1128 = iParam8;
		Global_2404607.f_1129 = iParam9;
	}
	else
	{
		func_482();
		func_481(0, 0, 0);
		Global_2404607.f_616 = 0;
	}
}

void func_481(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2408771 = 0;
	}
	Global_2404607.f_466 = iParam0;
	Global_2404607.f_466.f_1 = unk_0x8F56512BDA9F6921();
	Global_2404607.f_466.f_2 = iParam1;
	Global_2404607.f_466.f_3 = iParam2;
}

void func_482()
{
	func_483();
	Global_2404607.f_617 = 0;
}

void func_483()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2404607.f_618[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_484()
{
	Global_2404607.f_344 = { Global_2406467 };
}

void func_485()
{
	Global_2451473.f_4541 = 0;
}

void func_486()
{
	if (unk_0x1329891157A54C63() != -1)
	{
		Global_1606167[unk_0x1329891157A54C63() /*12*/].f_1 = 0;
	}
}

void func_487()
{
	int iVar0;
	
	iVar0 = unk_0x1329891157A54C63();
	if (iVar0 != -1)
	{
		Global_1606167[iVar0 /*12*/] = -1;
	}
}

void func_488(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_66(iParam0, func_67(iParam1), 0);
	iVar0++;
	if (!func_191(iParam0))
	{
		func_184(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		func_185(iParam0, iVar0, iParam1, 1);
	}
}

int func_489(int iParam0)
{
	return Global_1585045[iParam0 /*400*/].f_192.f_6;
}

int func_490(int iParam0)
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
			if (func_451(unk_0x1329891157A54C63()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_491()
{
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_1627, 3) || unk_0x236D8AD7EE179F46(Global_2451473.f_1627, 4))
	{
		if (unk_0x29AFA2493D7C23D0() || unk_0xC584A413BCB2AA39())
		{
			unk_0xAE2B1C30F8A0B67C(800);
		}
	}
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_1627, 5))
	{
		unk_0xC69E84EBBD7166E6(&(Global_2451473.f_1627), 5);
	}
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_1627, 3))
	{
		unk_0xC69E84EBBD7166E6(&(Global_2451473.f_1627), 3);
	}
	if (unk_0x236D8AD7EE179F46(Global_2451473.f_1627, 4))
	{
		unk_0xC69E84EBBD7166E6(&(Global_2451473.f_1627), 4);
	}
	func_494(0);
	func_493(0);
	func_492(0);
}

void func_492(int iParam0)
{
	if (Global_2451473.f_4362 != iParam0)
	{
		Global_2451473.f_4362 = iParam0;
	}
}

void func_493(bool bParam0)
{
	if (Global_2451473.f_4361 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2451473.f_4361 = bParam0;
	}
}

void func_494(int iParam0)
{
	if (Global_2451473.f_4359 != iParam0)
	{
		Global_2451473.f_4359 = iParam0;
	}
}

int func_495(struct<20> Param0)
{
	func_502(func_503(Param0.f_0), Param0);
	unk_0x473FC121743BE890(0);
	func_499(0, -1, 0);
	func_497(144);
	unk_0x19F630B59442E836(&Local_111, 53);
	unk_0xCBCBE0D8DD0EF168(&Local_2163, 225);
	if (!func_496())
	{
		func_468();
	}
	if (unk_0x1C7D9BFDF15A02B4())
	{
		unk_0x33967CC5BBA849B8(&(Local_111.f_49), &(Local_111.f_50));
	}
	Local_2388.f_2 = unk_0x8C283330B889AF48();
	unk_0xE6E19E3BBABCBC24(0);
	func_315(30, 1);
	return 1;
}

int func_496()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x1C6DF6AD69BE853E())
		{
			return 0;
		}
		if (unk_0x299162DAA4768797())
		{
			return 1;
		}
		if (func_463())
		{
			return 0;
		}
		if (func_461(155))
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

void func_497(int iParam0)
{
	func_474();
	func_498();
	func_485();
	Global_1573867.f_4 = iParam0;
	Global_1573867.f_5 = iParam0;
	func_314(iParam0, -1);
	func_286(&(Global_1573867.f_18), 0, 0);
	Global_2451473.f_4403 = 0;
	Global_2437628[0] = func_34();
	Global_2437628[1] = func_34();
	Global_2437628[2] = func_34();
	Global_2437628[3] = func_34();
	Global_2437628[4] = func_34();
	func_472();
	func_236();
	if (func_287() && !func_312())
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 16);
	}
	else
	{
		unk_0xF3148AAF69AF9CBC(&(Global_1573867.f_1), 17);
	}
}

void func_498()
{
	var uVar0;
	
	Global_1573891 = uVar0;
}

int func_499(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x428E5E7D8B8CA428();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_501();
			}
			else
			{
				return 0;
			}
		}
		if (!func_500())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x1C6DF6AD69BE853E())
				{
					if (!bParam2)
					{
						func_501();
					}
					else
					{
						return 0;
					}
				}
				if (func_463())
				{
					if (!bParam2)
					{
						func_501();
					}
					else
					{
						return 0;
					}
				}
				if (func_461(155))
				{
					if (!bParam2)
					{
						func_501();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x25E16CB232F8AB91())
			{
				if (!bParam2)
				{
					func_501();
				}
				else
				{
					return 0;
				}
			}
		}
		unk_0x4EDE34FBADD967A6(0);
		iVar0 = unk_0x428E5E7D8B8CA428();
	}
	if (iParam1 > -1)
	{
		Global_1312502 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x1C6DF6AD69BE853E())
		{
			if (!bParam2)
			{
				func_501();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x25E16CB232F8AB91())
	{
		if (!bParam2)
		{
			func_501();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_500()
{
	return Global_1315867;
}

void func_501()
{
	unk_0xC23A229F78DAD92A();
}

void func_502(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)
{
	if (!unk_0x1C6DF6AD69BE853E())
	{
		func_501();
	}
	unk_0xBA029707F4D8FFB0(uParam0, 0, Param1.f_16);
}

int func_503(int iParam0)
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
		
		case 60:
			return 32;
		
		case 61:
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
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 32;
		
		case 65:
			return 32;
		
		case 66:
			return 2;
		
		case 71:
			return 1;
		
		case 67:
			return 2;
		
		case 68:
			return 4;
		
		case 69:
			return 2;
		
		case 70:
			return 2;
		
		case 52:
			return 1;
		
		case 72:
			return 2;
		
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
			return 0;
		
		case joaat("mpsv_lp0_31"):
			return 1;
		
		default:
	}
	return 0;
}

