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
	struct<110> Local_28[4];
	struct<94> Local_469 = { 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1 } ;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = -1;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = -1;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	struct<8> Local_579[5];
	int iLocal_620[1] = { 0 };
	struct<4> Local_622 = { 0, 0, 0, 0 } ;
	char cLocal_626[64] = "";
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	struct<3> Local_642 = { 0, 0, 0 } ;
	char cLocal_645[24] = "";
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	int iLocal_651 = 0;
	int iLocal_652 = 0;
	bool bLocal_653 = 0;
	bool bLocal_654 = 0;
	int iLocal_655 = 0;
	bool bLocal_656 = 0;
	int iLocal_657 = 0;
	var uLocal_658 = 30;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
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
	var uLocal_707 = 0;
	var uLocal_708 = 0;
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
	var uLocal_809 = 10;
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
	var uLocal_860 = 10;
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
	var uLocal_931 = 20;
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
	var uLocal_1032 = 20;
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
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
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
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
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
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
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
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
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
	var uLocal_1133 = 30;
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
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
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
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
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
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
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
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
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
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
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
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
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
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 5;
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
	var uLocal_1345 = 7;
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
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
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
	var uLocal_1395 = 5;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
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
	var uLocal_1421 = 3;
	var uLocal_1422 = 0;
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
	var uLocal_1437 = 16;
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
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
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
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
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
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
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
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 10;
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
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
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
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 5;
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
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 5;
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
	var uLocal_1644 = 3;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 1092616192;
	var uLocal_1651 = 1101004800;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 3;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	struct<8> Local_1668[5];
	struct<32> Local_1709[20];
	char cLocal_2350[32] = "";
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 16;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	bool bLocal_2523 = 0;
	int iLocal_2524 = 0;
	int iLocal_2525 = 0;
	var uLocal_2526 = 0;
	int iLocal_2527 = 0;
	int iLocal_2528 = 0;
	int iLocal_2529 = 0;
	struct<2> Local_2530 = { 0, 0 } ;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	char cLocal_2534[16] = "";
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	int iLocal_2538 = 0;
	float fLocal_2539 = 0f;
	int iLocal_2540 = 0;
	int iLocal_2541 = 0;
	int iLocal_2542 = 0;
	int iLocal_2543 = 0;
	int iLocal_2544 = 0;
	int iLocal_2545 = 0;
	char cLocal_2546[16] = "";
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	int iLocal_2550 = 0;
	int iLocal_2551 = 0;
	bool bLocal_2552 = 0;
	int iLocal_2553 = 0;
	int iLocal_2554 = 0;
	int iLocal_2555 = 0;
	int iLocal_2556 = 0;
	struct<2> Local_2557 = { 0, 0 } ;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	struct<2> Local_2561 = { 0, 0 } ;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	int iLocal_2565 = 0;
	bool bLocal_2566 = 0;
	int iLocal_2567 = 0;
	int iLocal_2568 = 0;
	int iLocal_2569 = 0;
	bool bLocal_2570 = 0;
	int iLocal_2571 = 0;
	int iLocal_2572 = 0;
	int iLocal_2573 = 0;
	int iLocal_2574 = 0;
	int iLocal_2575 = 0;
	int iLocal_2576 = 0;
	int iLocal_2577 = 0;
	int iLocal_2578 = 0;
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
	StringCopy(&Local_622, "JHP1ADS", 16);
	StringCopy(&cLocal_626, "JEWEL_STORE_HEIST_SETUP_BUGSTAR_ALARMS", 64);
	Local_642 = { 154.9478f, -3092.523f, 4.911984f };
	StringCopy(&cLocal_645, "jhp1a_sec_arrive", 24);
	iLocal_651 = 0;
	iLocal_657 = 6;
	iLocal_2524 = -1;
	iLocal_2528 = -1;
	iLocal_2529 = -1;
	StringCopy(&Local_2530, "", 16);
	StringCopy(&cLocal_2534, "", 16);
	fLocal_2539 = 1E+08f;
	iLocal_2542 = 1;
	iLocal_2545 = -1;
	StringCopy(&cLocal_2546, "", 16);
	iLocal_2550 = -1;
	iLocal_2551 = 1;
	iLocal_2555 = -1;
	iLocal_2556 = -1;
	StringCopy(&Local_2557, "", 16);
	StringCopy(&Local_2561, "", 16);
	iLocal_2565 = 1;
	iLocal_2567 = 1;
	iLocal_2571 = -1;
	iLocal_2573 = -1;
	iLocal_2574 = -1;
	if (unk_0x76BF814AB8D4CAB8(3))
	{
		func_282(6);
	}
	unk_0x955FF17089AF6072(1);
	func_275();
	func_234();
	while (true)
	{
		unk_0x89FD0BC32FAB9F88("M_JewelStoreJobPrep1A", 0);
		if (bLocal_656)
		{
			func_232();
		}
		func_229(&uLocal_658);
		func_180();
		if (!bLocal_654)
		{
			func_178();
			func_167();
			func_166(&Local_1668);
		}
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	switch (iLocal_651)
	{
		case 0:
			if (func_25())
			{
				func_24(1);
			}
			break;
		
		case 1:
			func_2();
			break;
	}
}

void func_2()
{
	int iVar0;
	
	if ((iLocal_2574 != -1 && unk_0x31F12808DC47A9E5(Local_579[iLocal_2574 /*8*/])) && unk_0xC4B84EB67F78C1F0(Local_579[iLocal_2574 /*8*/], 0))
	{
		iVar0 = unk_0x0A088F357EF627CA(Local_579[iLocal_2574 /*8*/]);
		func_23(Local_579[iLocal_2574 /*8*/], -1);
	}
	if (iVar0 >= 750 || iVar0 <= 0)
	{
		Global_89399 = 1000;
	}
	else
	{
		Global_89399 = iVar0;
	}
	if (!func_22(&(Local_1668[3 /*8*/])))
	{
		func_21(699);
	}
	func_8(0);
	if (func_7(88))
	{
		func_3(0, 1);
	}
	else
	{
		func_3(0, 0);
	}
	unk_0x810C5D6462DD69E6();
}

void func_3(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55903)
	{
		Global_55903 = iParam1;
	}
	if (bParam0)
	{
		if ((func_6(0) && Global_71098.f_1 == 1) && func_5(Global_71098))
		{
		}
		else
		{
			Global_55901 = 1;
		}
	}
	if (Global_104551.f_9055 || func_6(0))
	{
		iVar0 = func_4();
		iVar1 = Global_83726[iVar0 /*5*/];
		uVar2 = Global_71121.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_104551.f_9055)
			{
			}
			return;
		}
		if (unk_0xB03A1684359C50A1(Global_83726[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xB03A1684359C50A1(Global_83726[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xD2A9C3F486236CC5(&(Global_83726[iVar0 /*5*/].f_1), 4);
		unk_0xD2A9C3F486236CC5(&Global_71100, 1);
		Global_71116 = uVar2;
		Global_71117 = unk_0x5AFB8ED811F05E4D();
	}
}

int func_4()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xB03A1684359C50A1(Global_83726[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_5(int iParam0)
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

bool func_6(bool bParam0)
{
	if (!bParam0 && unk_0xE7FAF8E78F7D3A73(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB03A1684359C50A1(Global_71100, 0);
}

int func_7(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104551.f_9055.f_330[iParam0 /*6*/];
}

void func_8(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0x08FC50794202A47C();
	unk_0xEFF1F12403847394(1);
	if (bParam0)
	{
		unk_0x3987E3ADA8E87AD8(unk_0x8CFC7D6E1DA5D304());
		unk_0x9BEA833CAF67289C("JHP1A_FAIL");
	}
	else
	{
		unk_0x8BB3FA32294185BB(1f);
		unk_0x0293CECDC1AEB119(unk_0x8CFC7D6E1DA5D304(), 1f);
	}
	unk_0x945880A1F9FE9E4F(5);
	unk_0xC6688583FB205F86(unk_0x8CFC7D6E1DA5D304(), 1);
	unk_0x0A950E4F24C0A27E(1);
	func_18(&Local_1668);
	func_13(&uLocal_1643, 1, 0);
	bLocal_2523 = false;
	iLocal_2524 = -1;
	iLocal_2568 = 0;
	iLocal_2569 = 0;
	bLocal_2570 = false;
	iLocal_2571 = -1;
	iLocal_2573 = -1;
	iLocal_2574 = -1;
	iLocal_2575 = 0;
	iLocal_2576 = 0;
	iLocal_2572 = 0;
	if (bParam0)
	{
		func_11();
		unk_0xD9FCA20C1C5553F7(unk_0x18F7BE9ACB7D08F4());
		unk_0x3987E3ADA8E87AD8(unk_0x8CFC7D6E1DA5D304());
		unk_0xE6B6928D4EED07B1(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0xD4689C6520BC864E(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0x5E791DD328BCDC42(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0xE54597236B7D8C63(158.78f, -3100.44f, 6.0019f, 100f, 0, 0, 0, 0, 0, 0);
		unk_0x8DE1BAABD1480350(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0x8594DFCA271B6347(158.78f, -3100.44f, 6.0019f, 100f);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_620)
	{
		if (unk_0x31F12808DC47A9E5(iLocal_620[iVar0]))
		{
			if (bParam0)
			{
				unk_0x5BE35A26B9097351(&(iLocal_620[iVar0]));
			}
			else
			{
				unk_0xF0862FA354B164C4(&(iLocal_620[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		func_10(&(Local_28[iVar0 /*110*/]), bParam0);
		iVar0++;
	}
	func_10(&Local_469, bParam0);
	iVar0 = 0;
	while (iVar0 < Local_579.f_0)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (unk_0x31F12808DC47A9E5(Local_579[iVar0 /*8*/].f_2[iVar1]))
			{
				if (bParam0)
				{
					unk_0x63C116C2153FAA3C(&(Local_579[iVar0 /*8*/].f_2[iVar1]));
				}
				else
				{
					unk_0xDBE64C5761554FBF(&(Local_579[iVar0 /*8*/].f_2[iVar1]));
				}
			}
			iVar1++;
		}
		if (unk_0x31F12808DC47A9E5(Local_579[iVar0 /*8*/]))
		{
			if (bParam0)
			{
				unk_0xBECECD970F645217(&(Local_579[iVar0 /*8*/]));
			}
			else
			{
				unk_0x4F5FF3F3FDCAB15D(&(Local_579[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
	if (unk_0x104D0C8EF29C2A4E(&cLocal_626))
	{
		unk_0xEC0A2C43708420AD(&cLocal_626, bParam0);
	}
	if (iLocal_2578 != 0)
	{
		unk_0x7E1D02126DA8A751(iLocal_2578, 0);
	}
	func_9();
}

void func_9()
{
	Global_88829 = 0;
}

void func_10(var uParam0, bool bParam1)
{
	if (unk_0x31F12808DC47A9E5(*uParam0))
	{
		if (bParam1)
		{
			unk_0x63C116C2153FAA3C(uParam0);
		}
		else
		{
			unk_0xDBE64C5761554FBF(uParam0);
		}
	}
	uParam0->f_5 = 0;
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_39 = 0;
	uParam0->f_41 = 0;
	uParam0->f_93 = 1;
	uParam0->f_102 = 0;
	uParam0->f_47 = 0;
	uParam0->f_46 = 0;
	uParam0->f_48 = 0;
	uParam0->f_37 = -1;
	uParam0->f_103 = -1;
	uParam0->f_40 = 0;
	uParam0->f_92 = -1;
	uParam0->f_43 = { 0f, 0f, 0f };
	uParam0->f_88 = { 0f, 0f, 0f };
	uParam0->f_91 = 0;
	if (unk_0x31F12808DC47A9E5(uParam0->f_105))
	{
		if (unk_0x4A296E47F281D02F(uParam0->f_105))
		{
			unk_0x964B3F361C3DBDF4(uParam0->f_105, 1, 1);
		}
		if (bParam1)
		{
			unk_0x5BE35A26B9097351(&(uParam0->f_105));
		}
		else
		{
			unk_0xF0862FA354B164C4(&(uParam0->f_105));
		}
	}
	uParam0->f_106 = -1;
	uParam0->f_107 = 0;
	uParam0->f_109 = 0;
	uParam0->f_104 = 0;
}

void func_11()
{
	Global_14622 = 0;
	func_12();
}

void func_12()
{
	unk_0x815093B4702C59D8();
	Global_16767 = 0;
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0xBE97F4E2B659331B(0);
		Global_15756 = 6;
	}
}

void func_13(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xB03A1684359C50A1(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_17(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xE769D9B5158D0F11(uParam0->f_1[iVar0]))
		{
			unk_0x40D517D991458154(&(uParam0->f_1[iVar0]));
		}
		func_16(iVar0, uParam0);
		func_15(iVar0, uParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0x62148293B793073B(&(uParam0->f_13), iVar0);
			unk_0x62148293B793073B(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0xE769D9B5158D0F11(*uParam0))
	{
		unk_0x40D517D991458154(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x0FAE113CE72ED842(uParam0->f_17[iVar0]))
		{
			unk_0x38ADC0C5F4F08C6D(uParam0->f_17[iVar0], 1);
			unk_0xC1EC3CD3D3C6690B(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0x764AFC5A3A16C2B0(uParam0->f_17[iVar0], 32, 1);
				unk_0x764AFC5A3A16C2B0(uParam0->f_17[iVar0], 305, 0);
			}
			unk_0x764AFC5A3A16C2B0(uParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0x3F34AC735B9567E3(uParam0->f_17[iVar0], func_14()) && uParam0->f_17[iVar0] != unk_0x18F7BE9ACB7D08F4())
				{
					unk_0x95B1A64E8455A478(uParam0->f_17[iVar0]);
				}
			}
			if (!unk_0xB03A1684359C50A1(uParam0->f_13, 29))
			{
				unk_0xA1D871238EFB6367(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		unk_0x38ADC0C5F4F08C6D(unk_0x18F7BE9ACB7D08F4(), 1);
		unk_0xC1EC3CD3D3C6690B(unk_0x18F7BE9ACB7D08F4(), 1);
	}
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (bParam2)
		{
			unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

var func_14()
{
	return unk_0x7C9C05CA6A57A7E1(unk_0x0A91D180DDC7A1B8());
}

void func_15(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x62148293B793073B(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x62148293B793073B(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x62148293B793073B(&(uParam1->f_13), 19);
			break;
	}
}

void func_16(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x62148293B793073B(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x62148293B793073B(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x62148293B793073B(&(uParam1->f_13), 16);
			break;
	}
}

void func_17(var uParam0)
{
	if (unk_0xE769D9B5158D0F11(uParam0->f_5))
	{
		unk_0x40D517D991458154(&(uParam0->f_5));
	}
}

void func_18(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_19(uParam0[iVar0 /*8*/]);
		iVar0++;
	}
}

void func_19(var uParam0)
{
	if (!func_20(uParam0))
	{
		*uParam0 = 0;
	}
}

int func_20(var uParam0)
{
	if (*uParam0 == 0)
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_55902 = 0;
	if (!Global_56126[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_67996)
	{
		if (Global_67997[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_67997[iVar1 /*9*/].f_1 = 1;
			Global_67997[iVar1 /*9*/].f_2 = 0f;
			if (Global_67997[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

int func_22(var uParam0)
{
	if (*uParam0 != 0 && (*uParam0 != 2 || uParam0->f_1 > 0))
	{
		return 1;
	}
	return 0;
}

void func_23(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_55914 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67996)
	{
		if (iParam1 == -1 || Global_67997[iVar0 /*9*/] == iParam1)
		{
			if (Global_67997[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67997[iVar0 /*9*/].f_6 = iParam0;
				Global_67997[iVar0 /*9*/].f_7 = 1;
				Global_67997[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_24(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iLocal_652 = 0;
		bLocal_653 = false;
		iLocal_651 = iParam0;
	}
}

int func_25()
{
	bool bVar0;
	
	if (!bLocal_653)
	{
		func_165(&uLocal_658, "SCRIPT\JWL_HA_RAID_STORE");
		func_164(&uLocal_658, joaat("s_m_m_security_01"));
		func_163(&(Local_1668[1 /*8*/]), 0, 0, 1);
		func_163(&(Local_1668[0 /*8*/]), 0, 0, 1);
		func_163(&(Local_1668[4 /*8*/]), 0, 0, 1);
		func_106(0f, 0f, 0f, 0f, 1, func_159());
		Global_89399 = 1000;
		unk_0x8BB3FA32294185BB(0.1f);
		func_105("JHP1A_STEAL_BSV", 7500, 1);
		bLocal_653 = true;
	}
	if (bLocal_653)
	{
		switch (iLocal_652)
		{
			case 0:
				if (func_100(1) == 0)
				{
					func_13(&uLocal_1643, 1, 0);
					func_23(0, -1);
					func_99(0, -1);
				}
				else if ((func_98() && unk_0x31F12808DC47A9E5(Local_579[func_97() /*8*/])) && unk_0xC4B84EB67F78C1F0(Local_579[func_97() /*8*/], 0))
				{
					unk_0x1182B3249AFFE059(0.5f);
					if (iLocal_2574 != func_97())
					{
						unk_0xB5BB914B70AA434E(5f, 10f, 4);
						func_23(Local_579[func_97() /*8*/], -1);
						func_99(Local_579[func_97() /*8*/], -1);
						iLocal_2574 = func_97();
					}
					if (func_95(&uLocal_1643, 692.8256f, -1012.544f, 21.722f, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 1, Local_579[func_97() /*8*/], "", "", "", 1, 0, 1, -1))
					{
						iLocal_652++;
					}
				}
				else if (func_94())
				{
					unk_0x1182B3249AFFE059(0.5f);
					func_50(&uLocal_1643, 692.8256f, -1012.544f, 21.722f, 0.1f, 0.1f, 0.1f, 1, iLocal_2575, "", "", "", 1, 0, 1, -1);
					if (unk_0x11BBEE2752B9D0C8(Local_579[func_49() /*8*/], 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0, 1, 0))
					{
						iLocal_652++;
					}
				}
				else
				{
					func_17(&uLocal_1643);
					func_23(0, -1);
					func_99(0, -1);
				}
				break;
			
			case 1:
				if (func_98())
				{
					if (func_47(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), 5f, 1, 1056964608, 0, 1, 0))
					{
						bVar0 = true;
					}
				}
				else if (func_94())
				{
					if (func_47(iLocal_2575, 5f, 1, 1056964608, 0, 1, 0))
					{
						bVar0 = true;
					}
				}
				if (bVar0)
				{
					if (func_7(88))
					{
						unk_0xB5BB914B70AA434E(5f, 10f, 4);
						unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 1);
						func_46(1);
						func_45(1, 0);
						iLocal_652 = 1000;
					}
					else
					{
						unk_0xB5BB914B70AA434E(5f, 10f, 4);
						iLocal_652++;
					}
					if (func_98())
					{
						unk_0x98AB858AD44F622D(Local_579[iLocal_2574 /*8*/], 0);
					}
					else if (func_94())
					{
						unk_0x98AB858AD44F622D(Local_579[func_49() /*8*/], 0);
						unk_0x4D8AAF889D588F4D(Local_579[func_49() /*8*/], 1);
						unk_0xF2427F5AFBB0A9BC(Local_579[func_49() /*8*/]);
					}
					unk_0x5941F8B2A813BBA8(unk_0x18F7BE9ACB7D08F4(), 0, 0);
				}
				break;
			
			case 2:
				if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
				{
					return 1;
				}
				break;
			
			case 1000:
				func_45(1, 0);
				if (!func_43())
				{
					func_41();
				}
				else
				{
					func_40(&uLocal_2358, 3, 0, "LESTER", 0, 1);
					if (func_28(&uLocal_2358, 12, "JHFAUD", "JHF_P10c", 8, 1, 0, 0, 0))
					{
						iLocal_652++;
					}
				}
				break;
			
			case 1001:
				func_45(1, 0);
				if (func_27())
				{
					unk_0xB5BB914B70AA434E(5f, 10f, 4);
					iLocal_652++;
				}
				break;
			
			case 1002:
				func_45(1, 0);
				if (!func_27())
				{
					func_26();
					return 1;
				}
				break;
			}
	}
	return 0;
}

void func_26()
{
	int iVar0;
	
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0x8BA533846256EA8E(unk_0x18F7BE9ACB7D08F4(), 0, 0, 0, 0, 0, 0, 0, 0);
		unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 157, 1);
		unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 0);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x31F12808DC47A9E5(Global_90343[iVar0]))
		{
			if (!unk_0x74C2FE037DFC8B4A(Global_90343[iVar0], 0))
			{
				unk_0x8BA533846256EA8E(Global_90343[iVar0], 0, 0, 0, 0, 0, 0, 0, 0);
				unk_0xF74B493CCF90C997(Global_90343[iVar0], 0);
			}
		}
		iVar0++;
	}
	if ((Global_35859 != 0 && Global_35859 != 3) && Global_35859 != 2)
	{
		unk_0x945880A1F9FE9E4F(5);
		unk_0x8BB3FA32294185BB(1f);
	}
}

int func_27()
{
	if (Global_14453.f_1 == 10 || Global_14453.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_28(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_39(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	if (iParam5 == 1)
	{
		Global_15768 = 1;
	}
	else
	{
		Global_15768 = 0;
	}
	Global_2621441 = 0;
	return func_29(sParam3, iParam4, bParam8);
}

int func_29(char* sParam0, int iParam1, bool bParam2)
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
					func_38();
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
		if (func_37(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_36();
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
				func_34();
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
				if (func_33())
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
			if (func_32())
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
			func_31();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_30();
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
		func_38();
	}
	return 0;
}

void func_30()
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

void func_31()
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

int func_32()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_33()
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

void func_34()
{
	if (func_35(14))
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
		Global_14453 = func_159();
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

bool func_35(int iParam0)
{
	return Global_35859 == iParam0;
}

void func_36()
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

bool func_37(int iParam0, int iParam1)
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

void func_38()
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

void func_39(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_40(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_41()
{
	Global_14622 = 0;
	func_42();
}

void func_42()
{
	if (unk_0x85FDEF76CDBAD589())
	{
		unk_0x815093B4702C59D8();
		Global_16767 = 0;
		unk_0xBE97F4E2B659331B(1);
		Global_15756 = 6;
		return;
	}
}

int func_43()
{
	if (func_44())
	{
		return 0;
	}
	if (unk_0xA926FCC2AFC26766())
	{
		if (unk_0xC45919BF593ACF15())
		{
			return 0;
		}
	}
	return 1;
}

int func_44()
{
	if (Global_15756 != 0 || unk_0x85FDEF76CDBAD589())
	{
		return 1;
	}
	return 0;
}

void func_45(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		unk_0x9C7EE7DE7041A3F4(0, 21, 1);
	}
	unk_0x9C7EE7DE7041A3F4(0, 25, 1);
	unk_0x9C7EE7DE7041A3F4(0, 24, 1);
	unk_0x9C7EE7DE7041A3F4(0, 257, 1);
	unk_0x9C7EE7DE7041A3F4(0, 141, 1);
	unk_0x9C7EE7DE7041A3F4(0, 140, 1);
	unk_0x9C7EE7DE7041A3F4(0, 22, 1);
	unk_0x9C7EE7DE7041A3F4(0, 44, 1);
	unk_0x9C7EE7DE7041A3F4(0, 23, 1);
	unk_0x9C7EE7DE7041A3F4(0, 47, 1);
	unk_0x9C7EE7DE7041A3F4(0, 36, 1);
	if (bParam0)
	{
		unk_0x9C7EE7DE7041A3F4(0, 37, 1);
	}
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (bParam1)
		{
			unk_0x33A2A1DBDDF863E7(unk_0x18F7BE9ACB7D08F4(), 2f);
		}
		else
		{
			unk_0x33A2A1DBDDF863E7(unk_0x18F7BE9ACB7D08F4(), 1f);
		}
		unk_0xB05E48165A6F6058(unk_0x18F7BE9ACB7D08F4(), 102, 1);
	}
	if (unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0))
	{
		unk_0x3987E3ADA8E87AD8(unk_0x8CFC7D6E1DA5D304());
	}
}

void func_46(bool bParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		unk_0x8BA533846256EA8E(unk_0x18F7BE9ACB7D08F4(), 1, 1, 1, 1, 1, 0, 0, 0);
		unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 157, 0);
		unk_0xF74B493CCF90C997(unk_0x18F7BE9ACB7D08F4(), 1);
		unk_0xE560AD9B53AA9A85(unk_0x18F7BE9ACB7D08F4(), 0, 0);
		if (bParam0)
		{
			unk_0x5C7D86C4752CBC68(unk_0x18F7BE9ACB7D08F4(), joaat("weapon_unarmed"), 0);
		}
		unk_0xE8144E7C72E963DC(unk_0x18F7BE9ACB7D08F4(), 0);
	}
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		unk_0x3987E3ADA8E87AD8(unk_0x8CFC7D6E1DA5D304());
	}
	unk_0x945880A1F9FE9E4F(0);
	unk_0x8BB3FA32294185BB(0f);
}

int func_47(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x9C7EE7DE7041A3F4(0, 71, 1);
	unk_0x9C7EE7DE7041A3F4(0, 72, 1);
	unk_0x9C7EE7DE7041A3F4(0, 76, 1);
	unk_0x9C7EE7DE7041A3F4(0, 73, 1);
	unk_0x9C7EE7DE7041A3F4(0, 59, 1);
	unk_0x9C7EE7DE7041A3F4(0, 60, 1);
	if (bParam5)
	{
		unk_0x9C7EE7DE7041A3F4(0, 75, 1);
	}
	unk_0x9C7EE7DE7041A3F4(0, 80, 1);
	if (!bParam6)
	{
		unk_0x9C7EE7DE7041A3F4(0, 69, 1);
		unk_0x9C7EE7DE7041A3F4(0, 70, 1);
		unk_0x9C7EE7DE7041A3F4(0, 68, 1);
	}
	unk_0x9C7EE7DE7041A3F4(0, 74, 1);
	unk_0x9C7EE7DE7041A3F4(0, 86, 1);
	unk_0x9C7EE7DE7041A3F4(0, 81, 1);
	unk_0x9C7EE7DE7041A3F4(0, 82, 1);
	unk_0x9C7EE7DE7041A3F4(0, 138, 1);
	unk_0x9C7EE7DE7041A3F4(0, 136, 1);
	unk_0x9C7EE7DE7041A3F4(0, 114, 1);
	unk_0x9C7EE7DE7041A3F4(0, 107, 1);
	unk_0x9C7EE7DE7041A3F4(0, 110, 1);
	unk_0x9C7EE7DE7041A3F4(0, 89, 1);
	unk_0x9C7EE7DE7041A3F4(0, 89, 1);
	unk_0x9C7EE7DE7041A3F4(0, 87, 1);
	unk_0x9C7EE7DE7041A3F4(0, 88, 1);
	unk_0x9C7EE7DE7041A3F4(0, 113, 1);
	unk_0x9C7EE7DE7041A3F4(0, 115, 1);
	unk_0x9C7EE7DE7041A3F4(0, 116, 1);
	unk_0x9C7EE7DE7041A3F4(0, 117, 1);
	unk_0x9C7EE7DE7041A3F4(0, 118, 1);
	unk_0x9C7EE7DE7041A3F4(0, 119, 1);
	unk_0x9C7EE7DE7041A3F4(0, 131, 1);
	unk_0x9C7EE7DE7041A3F4(0, 132, 1);
	unk_0x9C7EE7DE7041A3F4(0, 123, 1);
	unk_0x9C7EE7DE7041A3F4(0, 126, 1);
	unk_0x9C7EE7DE7041A3F4(0, 129, 1);
	unk_0x9C7EE7DE7041A3F4(0, 130, 1);
	unk_0x9C7EE7DE7041A3F4(0, 133, 1);
	unk_0x9C7EE7DE7041A3F4(0, 134, 1);
	unk_0x95C6D943AF847EEC();
	func_48(iParam0);
	if ((unk_0x5AFB8ED811F05E4D() - Global_29) > 500)
	{
		unk_0x7F8DAED41E5794FC(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x5AFB8ED811F05E4D();
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		if (unk_0x36E1A96E1D63ED91(unk_0x2A72627520A107B5(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_48(int iParam0)
{
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		if (unk_0x15E3947C9B9DDEC8(iParam0))
		{
			if (unk_0x1F8B50D0C3034AAE(iParam0))
			{
				unk_0xFE5D726DE23CEFF5(iParam0, 0);
			}
		}
	}
}

int func_49()
{
	int iVar0;
	
	if (func_94())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x31F12808DC47A9E5(Local_579[iVar0 /*8*/]) && unk_0xC4B84EB67F78C1F0(Local_579[iVar0 /*8*/], 0))
			{
				if (unk_0x3C87303CA056FB80(iLocal_2575, Local_579[iVar0 /*8*/]))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_50(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15)
{
	return func_51(uParam0, Param1, Param4, func_93(), func_93(), iParam7, 5, 0, 0, 0, iParam8, sParam9, func_92(), func_92(), func_92(), func_92(), sParam10, 0, bParam12, sParam11, 0, iParam13, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

int func_51(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	uParam0->f_17[0] = iParam15;
	uParam0->f_17[1] = iParam16;
	uParam0->f_17[2] = iParam17;
	uParam0->f_16 = iParam15;
	func_91(uParam0);
	func_90(uParam0);
	func_89();
	if (func_73(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		func_72(sParam20);
		func_72(sParam21);
		func_72(sParam22);
		func_72(sParam23);
		if (unk_0xC8AB6A5E6C1E6613())
		{
			bVar1 = false;
			if (unk_0xC4B84EB67F78C1F0(iParam18, 0))
			{
				if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iParam18, 0))
				{
					unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 3);
					if (!unk_0xB03A1684359C50A1(uParam0->f_13, 9))
					{
						unk_0x62148293B793073B(&(uParam0->f_13), 4);
					}
					if (unk_0xB03A1684359C50A1(uParam0->f_13, 23))
					{
						unk_0x62148293B793073B(&(uParam0->f_13), 23);
					}
					unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_70(uParam0, iParam29))
				{
					unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 3);
					if (!unk_0xB03A1684359C50A1(uParam0->f_13, 9))
					{
						unk_0x62148293B793073B(&(uParam0->f_13), 4);
					}
					unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_72(sParam24);
				func_72(sParam27);
				func_72("MORE_SEATS");
				if (bParam26 && unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0))
				{
					if (unk_0xE769D9B5158D0F11(uParam0->f_5))
					{
						unk_0x40D517D991458154(&(uParam0->f_5));
						func_72(sParam19);
					}
					if (unk_0xE769D9B5158D0F11(*uParam0))
					{
						unk_0x40D517D991458154(uParam0);
					}
					if ((!func_67(uParam0, 1) && !func_66(uParam0)) && !unk_0xB03A1684359C50A1(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_65(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x0FAE113CE72ED842(uParam0->f_17[0]))
							{
								func_63(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 0);
						unk_0x62148293B793073B(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xB03A1684359C50A1(uParam0->f_13, 0))
					{
						func_72("LOSE_WANTED");
						unk_0x62148293B793073B(&(uParam0->f_13), 0);
						unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 1);
					}
					if (unk_0xB03A1684359C50A1(uParam0->f_13, 1))
					{
						if (!func_67(uParam0, 1))
						{
							if (!unk_0x0FAE113CE72ED842(uParam0->f_17[0]))
							{
								func_63(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x62148293B793073B(&(uParam0->f_13), 1);
						}
					}
					if (!unk_0xE769D9B5158D0F11(uParam0->f_5))
					{
						if (unk_0xE769D9B5158D0F11(*uParam0))
						{
							unk_0x40D517D991458154(uParam0);
						}
						uParam0->f_5 = func_62(Var3, 0);
						if (!iParam31 == -1)
						{
							unk_0xDC0EBFC7730AA226(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_61(uParam0->f_5, uParam0);
						}
					}
					else if (!func_60(Var3, unk_0x85D7B5415209F462(uParam0->f_5), 0.1f, 0))
					{
						unk_0x466CCEBC4B294723(uParam0->f_5, Var3);
						if (bParam35)
						{
							func_61(uParam0->f_5, uParam0);
						}
					}
					if (!func_67(uParam0, 2))
					{
						if (!unk_0xB03A1684359C50A1(uParam0->f_13, 2))
						{
							func_65(uParam0, sParam19, 0);
							unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (unk_0xB03A1684359C50A1(uParam0->f_13, 13))
						{
							iParam13 = 0;
						}
					}
					bVar1 = false;
					iVar6 = 0;
					iVar7 = 0;
					if ((iParam14 == 1 || iParam14 == 3) || iParam14 == 5)
					{
						iVar6 = 1;
					}
					if (iParam14 == 2 || iParam14 == 3)
					{
						iVar7 = 1;
					}
					else if (iParam14 == 4 || iParam14 == 5)
					{
						iVar7 = 2;
					}
					if (bParam28)
					{
						unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Param1, Param4, iParam13, iVar6, iVar7);
						if (unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), Param7, Param10, fParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x0FAE113CE72ED842(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
									if (!unk_0x88B79D32B518C327(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!unk_0x88B79D32B518C327(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x3F34AC735B9567E3(uParam0->f_17[iVar2], func_14()) || !func_58(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_55(uParam0))
							{
								func_72(sParam19);
								func_72(sParam24);
								func_72(sParam20);
								func_72(sParam21);
								func_72(sParam22);
								func_72(sParam23);
								func_72("LOSE_WANTED");
								func_72("MORE_SEATS");
								func_72(sParam27);
								func_13(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0x31F12808DC47A9E5(iParam18))
			{
				if ((bParam26 && unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0)) && (!unk_0xB03A1684359C50A1(uParam0->f_13, 9) && !unk_0xB03A1684359C50A1(uParam0->f_13, 22)))
				{
					func_72(sParam24);
					func_72(sParam27);
					if (unk_0xE769D9B5158D0F11(uParam0->f_5) || unk_0xE769D9B5158D0F11(*uParam0))
					{
						unk_0x40D517D991458154(&(uParam0->f_5));
						unk_0x40D517D991458154(uParam0);
						func_72(sParam19);
					}
					if ((!func_67(uParam0, 1) && !func_66(uParam0)) && !unk_0xB03A1684359C50A1(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_65(uParam0, "LOSE_WANTED", 0);
							if (!unk_0x0FAE113CE72ED842(uParam0->f_17[0]))
							{
								func_63(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 0);
						unk_0x62148293B793073B(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xB03A1684359C50A1(uParam0->f_13, 0))
					{
						func_72("LOSE_WANTED");
						unk_0x62148293B793073B(&(uParam0->f_13), 0);
						unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 1);
					}
					if (unk_0xB03A1684359C50A1(uParam0->f_13, 1))
					{
						if (!func_67(uParam0, 1))
						{
							if (!unk_0x0FAE113CE72ED842(uParam0->f_17[0]))
							{
								func_63(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x62148293B793073B(&(uParam0->f_13), 1);
						}
					}
					if (unk_0xC4B84EB67F78C1F0(iParam18, 0))
					{
						if (!unk_0xE769D9B5158D0F11(*uParam0))
						{
							if (unk_0xE769D9B5158D0F11(uParam0->f_5))
							{
								unk_0x40D517D991458154(&(uParam0->f_5));
								func_72(sParam19);
							}
							*uParam0 = func_52(iParam18, 0, 0);
							unk_0x4925D19C5D509CE1(*uParam0, 2);
							if (!unk_0xB03A1684359C50A1(uParam0->f_13, 4))
							{
								func_61(*uParam0, uParam0);
							}
						}
						if (!func_67(uParam0, 2))
						{
							if (!unk_0xB03A1684359C50A1(uParam0->f_13, 3))
							{
								func_65(uParam0, sParam24, 0);
								unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 3);
								unk_0x62148293B793073B(&(uParam0->f_13), 4);
							}
							else if (unk_0xB03A1684359C50A1(uParam0->f_13, 9))
							{
								if (!unk_0xE0C4A595CD61B7F2(sParam27))
								{
									if (!unk_0xB03A1684359C50A1(uParam0->f_13, 4))
									{
										func_65(uParam0, sParam27, 0);
										unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 4);
									}
								}
								else if (!unk_0xB03A1684359C50A1(uParam0->f_13, 4))
								{
									func_65(uParam0, sParam24, 0);
									unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 4);
								}
								if (!unk_0xB03A1684359C50A1(uParam0->f_13, 23))
								{
									if (!unk_0x0FAE113CE72ED842(uParam0->f_17[0]))
									{
										func_63(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xE769D9B5158D0F11(uParam0->f_5))
				{
					unk_0x40D517D991458154(&(uParam0->f_5));
					func_72(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_67(uParam0, 2))
						{
							if (unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
							{
								if (!unk_0xB03A1684359C50A1(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x0FAE113CE72ED842(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = unk_0x61E9B3BFA06B017B(0, iVar8);
									if (!unk_0x0FAE113CE72ED842(uParam0->f_17[iVar9]))
									{
										func_63(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_65(uParam0, "MORE_SEATS", 0);
									unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 13);
								}
							}
							else if (!unk_0xB03A1684359C50A1(uParam0->f_13, 3))
							{
								func_65(uParam0, sParam24, 0);
								unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 3);
								unk_0x62148293B793073B(&(uParam0->f_13), 4);
							}
							else if (!unk_0xB03A1684359C50A1(uParam0->f_13, 4))
							{
								if (unk_0xB03A1684359C50A1(uParam0->f_13, 9))
								{
									func_65(uParam0, sParam27, 0);
									unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_67(uParam0, 2))
					{
						if (!unk_0xB03A1684359C50A1(uParam0->f_13, 3))
						{
							func_65(uParam0, sParam24, 0);
							unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 3);
							unk_0x62148293B793073B(&(uParam0->f_13), 4);
						}
						else if (unk_0xB03A1684359C50A1(uParam0->f_13, 9))
						{
							if (!unk_0xE0C4A595CD61B7F2(sParam27))
							{
								if (!unk_0xB03A1684359C50A1(uParam0->f_13, 4))
								{
									func_65(uParam0, sParam27, 0);
									unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 4);
								}
							}
							else if (!unk_0xB03A1684359C50A1(uParam0->f_13, 4))
							{
								func_65(uParam0, sParam24, 0);
								unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xB03A1684359C50A1(uParam0->f_13, 0))
		{
			unk_0x62148293B793073B(&(uParam0->f_13), 0);
		}
		func_72(sParam19);
		func_72(sParam24);
		func_72(sParam27);
		func_72(sParam24);
		func_72("LOSE_WANTED");
		if (unk_0xE769D9B5158D0F11(uParam0->f_5))
		{
			unk_0x40D517D991458154(&(uParam0->f_5));
		}
		if (unk_0xE769D9B5158D0F11(*uParam0))
		{
			unk_0x40D517D991458154(uParam0);
		}
	}
	unk_0x62148293B793073B(&(uParam0->f_13), 11);
	unk_0x62148293B793073B(&(uParam0->f_13), 12);
	return 0;
}

int func_52(int iParam0, bool bParam1, bool bParam2)
{
	return func_53(iParam0, !bParam1, bParam2);
}

int func_53(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xA8EDC17CEEA40DFA(iParam0);
	if (unk_0x978B4E1292EBBE41(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_54(unk_0x44243F2E2F58B8E3(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x1DF6703E5077ABE1(uVar0, bParam1);
		}
		else
		{
			unk_0x71925FF3194E84CE(uVar0, 2);
		}
	}
	else if (unk_0xB6C2454233C8F532(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_54(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
		unk_0x1DF6703E5077ABE1(uVar0, bParam1);
	}
	else if (unk_0x2E4A20D66F5AD135(iParam0))
	{
		unk_0x0590222010A36CE4(uVar0, func_54(unk_0x44243F2E2F58B8E3(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_54(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_55(var uParam0)
{
	if (unk_0xB03A1684359C50A1(uParam0->f_13, 12))
	{
		if (func_57(unk_0x18F7BE9ACB7D08F4()))
		{
			if (func_56(1, 0, 1) || unk_0xB03A1684359C50A1(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_56(1, 0, 1) || unk_0xB03A1684359C50A1(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_56(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xED304DF0BE5BEBDD())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x74C2FE037DFC8B4A(unk_0x18F7BE9ACB7D08F4(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (!unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
		{
			return 0;
		}
		iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
		if (bParam0)
		{
			if (unk_0x74C2FE037DFC8B4A(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
			{
				if (unk_0x4983F8C51A0C0AF3(iVar0, -1, 0) != unk_0x18F7BE9ACB7D08F4())
				{
					return 0;
				}
			}
		}
		if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
		{
			if (unk_0x39B21DBADBAFCF25(iVar0) < 0.95f || unk_0x39B21DBADBAFCF25(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x16034CA8E32730C9(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	if (!unk_0x91FFC4C24A972415(unk_0x8CFC7D6E1DA5D304()))
	{
		return 0;
	}
	return 1;
}

int func_57(int iParam0)
{
	float fVar0;
	
	if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		fVar0 = unk_0x2A72627520A107B5(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_58(int iParam0, int iParam1)
{
	if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		if (unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()) && iParam1)
		{
			if (func_59(unk_0x18F7BE9ACB7D08F4(), iParam0))
			{
				unk_0x95D543BA99716AA4(func_14(), 50f);
				return 1;
			}
		}
		else if (unk_0x3F34AC735B9567E3(iParam0, func_14()))
		{
			unk_0x95D543BA99716AA4(func_14(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_59(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		if (unk_0x1A7B277A2CBA7ADF(iParam0))
		{
			iVar0 = unk_0x5AD687C3474F04B4(iParam0, 0);
			if (unk_0xC4B84EB67F78C1F0(iVar0, 0))
			{
				if (!unk_0x0FAE113CE72ED842(iParam1))
				{
					if (unk_0x160400EAEE246B4D(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_60(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x36E1A96E1D63ED91((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x36E1A96E1D63ED91((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x36E1A96E1D63ED91((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x36E1A96E1D63ED91((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x36E1A96E1D63ED91((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_61(var uParam0, var uParam1)
{
	if (unk_0xE769D9B5158D0F11(uParam0))
	{
		if (unk_0xE769D9B5158D0F11(uParam1->f_6))
		{
			unk_0x63EECA6600F1090E(uParam1->f_6, 0);
		}
		unk_0x3159F4BB8902C226(0);
		unk_0x4815E4A5C2A8DB62();
		uParam1->f_6 = uParam0;
		unk_0x63EECA6600F1090E(uParam0, 1);
	}
}

var func_62(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x29F0B4D7EFF08BF6(Param0);
	unk_0x0590222010A36CE4(uVar0, func_54(unk_0x44243F2E2F58B8E3(), 1f, 1f));
	unk_0x63EECA6600F1090E(uVar0, iParam3);
	return uVar0;
}

void func_63(var uParam0, char* sParam1, int iParam2)
{
	unk_0x729C5B8455454944(uParam0, sParam1, func_64(iParam2), 1);
}

int func_64(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_65(var uParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0xE0C4A595CD61B7F2(sParam1))
		{
			if (!unk_0x9D39145AD645E383(sParam1, ""))
			{
				func_105(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x5AFB8ED811F05E4D();
}

int func_66(var uParam0)
{
	if (!unk_0x0FAE113CE72ED842(uParam0->f_16))
	{
		if (unk_0x5C96F75B17C7C048(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_67(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0xA926FCC2AFC26766())
	{
		if (unk_0xC45919BF593ACF15())
		{
			return 1;
		}
		if (func_69(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0xA926FCC2AFC26766())
	{
		if (func_44() && !func_68())
		{
			return 1;
		}
	}
	return 0;
}

int func_68()
{
	if (Global_16767 == 1)
	{
		return 1;
	}
	return 0;
}

int func_69(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x5AFB8ED811F05E4D();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_70(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
		if (func_71(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_71(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0x31F12808DC47A9E5(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0xE4752B503DF3FEC0(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0xFDD00719A2CEE906(iParam0, 1))
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
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!unk_0xFDD00719A2CEE906(iParam0, 1))
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
	return 0;
}

void func_72(char* sParam0)
{
	if (!unk_0xE0C4A595CD61B7F2(sParam0))
	{
		unk_0x9A279C737383BE86(sParam0);
	}
}

int func_73(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	var uVar15[3];
	var uVar19[3];
	bool bVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	struct<3> Var28;
	int iVar31;
	int iVar32;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar15[0] = uParam4;
	uVar15[1] = uParam5;
	uVar15[2] = uParam6;
	uVar19[0] = uParam13;
	uVar19[1] = uParam14;
	uVar19[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x0FAE113CE72ED842(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0))
		{
			if (!unk_0xB03A1684359C50A1(uParam0->f_13, 29) && !unk_0xB03A1684359C50A1(uParam0->f_13, 28))
			{
				if (!unk_0x0FAE113CE72ED842(uParam0->f_17[iVar0]))
				{
					unk_0xA1D871238EFB6367(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0xB03A1684359C50A1(uParam0->f_13, 29) && unk_0xB03A1684359C50A1(uParam0->f_13, 28))
		{
			if (!unk_0x0FAE113CE72ED842(uParam0->f_17[iVar0]))
			{
				unk_0xA1D871238EFB6367(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0x62148293B793073B(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0xB03A1684359C50A1(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!unk_0x31F12808DC47A9E5(uParam0->f_21))
		{
			iVar25 = 64;
			iVar25 |= 65536;
			iVar25 |= 2048;
			iVar25 |= 1;
			iVar25 |= 2;
			iVar25 |= 4;
			iVar25 |= 32;
			iVar25 |= 16;
			iVar25 |= 8;
			iVar24 = unk_0x048A9E2FC8C538E3(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 50f, 0, iVar25);
			if (unk_0xC4B84EB67F78C1F0(iVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (unk_0xC4B84EB67F78C1F0(uParam0->f_21, 0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), unk_0x761660F5CE986DC4(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
				{
					if (!unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0) || !bParam17)
					{
						if (func_71(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x0FAE113CE72ED842(uParam0->f_17[iVar0]))
								{
									unk_0x33A2A1DBDDF863E7(uParam0->f_17[iVar0], 1f);
									if (unk_0x3F34AC735B9567E3(uParam0->f_17[iVar0], func_14()))
									{
										unk_0x95B1A64E8455A478(uParam0->f_17[iVar0]);
									}
									if (unk_0x2BBAA45ECDE3DAE2(uParam0->f_17[iVar0], -1794415470) == 7 && !func_88(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x0B90D19A63676F41(uParam0->f_17[iVar0]) && !unk_0xE8BE423677E08365(uParam0->f_17[iVar0]))
										{
											unk_0x40E2910BAF39B1C7(uParam0->f_17[iVar0], 1);
											unk_0xFDBDFC454E44A5BF(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0x49788920F4CF7FC1(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar23 = true;
						}
					}
					else
					{
						bVar23 = true;
					}
				}
				else
				{
					bVar23 = true;
				}
			}
			else
			{
				bVar23 = true;
			}
		}
		else
		{
			bVar23 = true;
		}
		if (bVar23)
		{
			unk_0x62148293B793073B(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x0FAE113CE72ED842(uParam0->f_17[iVar0]))
				{
					if (!unk_0xDB5E52F2078862CA(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0x267F7A2DFDFFB077(uParam0->f_17[iVar0]);
					}
					if (!unk_0x3F34AC735B9567E3(uParam0->f_17[iVar0], func_14()))
					{
						if (func_86(uParam0, uParam0->f_17[iVar0], uParam8, 1))
						{
							unk_0xE186B0FBC086038E(uParam0->f_17[iVar0], func_14());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xB03A1684359C50A1(uParam0->f_13, 26))
	{
		if ((!func_85(uParam0) && unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4())) && !unk_0x31F12808DC47A9E5(iParam10))
		{
			iVar13 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
			if (unk_0xC4B84EB67F78C1F0(iVar13, 0))
			{
				if (!unk_0xB03A1684359C50A1(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_67(uParam0, 2))
					{
						iVar26 = 0;
						iVar27 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0x0FAE113CE72ED842(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = unk_0x61E9B3BFA06B017B(0, iVar26);
						if (!unk_0x0FAE113CE72ED842(uParam0->f_17[iVar27]))
						{
							func_63(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_65(uParam0, "MORE_SEATS", 0);
						unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			unk_0x62148293B793073B(&(uParam0->f_13), 13);
			func_72("MORE_SEATS");
		}
		if (!unk_0x31F12808DC47A9E5(iParam10))
		{
			if ((!unk_0x0FAE113CE72ED842(uParam0->f_17[0]) || !unk_0x0FAE113CE72ED842(uParam0->f_17[1])) || !unk_0x0FAE113CE72ED842(uParam0->f_17[2]))
			{
				if (!unk_0xB03A1684359C50A1(uParam0->f_13, 31))
				{
					if (unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()) && !func_67(uParam0, 2))
					{
						iVar13 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
						if (func_84(iVar13, uParam0))
						{
							func_65(uParam0, "CMN_VEHSUIT", 0);
							unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
				{
					unk_0x62148293B793073B(&(uParam0->f_13), 31);
					func_72("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0xC4B84EB67F78C1F0(iParam10, 0))
		{
			if (unk_0x160400EAEE246B4D(unk_0x18F7BE9ACB7D08F4(), iParam10))
			{
				if (unk_0xFC0C00F9DE2AEC93(0, 75))
				{
					unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0xB03A1684359C50A1(uParam0->f_13, 21))
			{
				unk_0x62148293B793073B(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x31F12808DC47A9E5(uParam0->f_17[iVar0]))
			{
				if (!unk_0x0FAE113CE72ED842(uParam0->f_17[iVar0]))
				{
					if (!unk_0x3F34AC735B9567E3(uParam0->f_17[iVar0], func_14()))
					{
						unk_0xAE24027C5F456397(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0xAE24027C5F456397(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
					{
						iVar13 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
						if (unk_0xC4B84EB67F78C1F0(iVar13, 0))
						{
							if (unk_0x3F34AC735B9567E3(uParam0->f_17[iVar0], func_14()))
							{
								if (!func_85(uParam0) && unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
								{
									if (!func_83(uParam0->f_17[iVar0]))
									{
										unk_0x95B1A64E8455A478(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !unk_0x74C2FE037DFC8B4A(iVar13, 0))
						{
							if (unk_0x160400EAEE246B4D(uParam0->f_17[iVar0], iVar13))
							{
								if (unk_0xE1F715CDDC50FD7F(iVar13) && !unk_0x19160618B3657F0E(iVar13))
								{
									Var28 = { unk_0x761660F5CE986DC4(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										unk_0xD7A975DB04C06BA4(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!unk_0x3F34AC735B9567E3(uParam0->f_17[iVar0], func_14()))
					{
						if (unk_0x1A7B277A2CBA7ADF(uParam0->f_17[iVar0]))
						{
							iVar13 = unk_0x5AD687C3474F04B4(uParam0->f_17[iVar0], 0);
							if (!unk_0x74C2FE037DFC8B4A(iVar13, 0))
							{
								if (unk_0xC4B84EB67F78C1F0(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!unk_0x160400EAEE246B4D(unk_0x18F7BE9ACB7D08F4(), iVar13))
										{
											if (unk_0x2A72627520A107B5(iVar13) > 5f)
											{
												unk_0xD7A975DB04C06BA4(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0xD7A975DB04C06BA4(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
									{
										iVar31 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
									}
									if (unk_0xC4B84EB67F78C1F0(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (unk_0x2A72627520A107B5(iVar13) > 5f)
											{
												unk_0xD7A975DB04C06BA4(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0xD7A975DB04C06BA4(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x3F34AC735B9567E3(uParam0->f_17[iVar0], func_14()))
					{
						iVar32 = unk_0x0B495402BD092DEB(unk_0x18F7BE9ACB7D08F4());
						if (unk_0x31F12808DC47A9E5(iVar32))
						{
							if (func_71(iVar32, uParam0, 0))
							{
								if (func_82(iVar0, uParam0) || !unk_0xB03A1684359C50A1(uParam0->f_13, 27))
								{
									unk_0x49788920F4CF7FC1(uParam0->f_17[iVar0], iVar0);
									func_15(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_82(iVar0, uParam0))
							{
								if (unk_0x4F69FBD64CDF125B(iVar32) == joaat("sentinel2"))
								{
									unk_0x49788920F4CF7FC1(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0x49788920F4CF7FC1(uParam0->f_17[iVar0], 2);
								}
								func_81(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x3F34AC735B9567E3(uParam0->f_17[iVar0], func_14()) && !func_80(uParam0->f_17[iVar0], iParam10)) && !func_79(uParam0->f_17[iVar0], iParam10))
					{
						if (func_86(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
						{
							if (!unk_0x3F34AC735B9567E3(uParam0->f_17[iVar0], func_14()))
							{
								if (((!unk_0x0B90D19A63676F41(uParam0->f_17[iVar0]) && !unk_0xE8BE423677E08365(uParam0->f_17[iVar0])) && !unk_0x9D059EF2DDA06E33(uParam0->f_17[iVar0])) && !unk_0xDB5E52F2078862CA(uParam0->f_17[iVar0]))
								{
									iVar14 = unk_0x2BBAA45ECDE3DAE2(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										unk_0x267F7A2DFDFFB077(uParam0->f_17[iVar0]);
									}
									unk_0xE186B0FBC086038E(uParam0->f_17[iVar0], func_14());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!unk_0xE769D9B5158D0F11(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x5AFB8ED811F05E4D();
								uParam0->f_1[iVar0] = func_52(uParam0->f_17[iVar0], 0, 0);
								unk_0x4925D19C5D509CE1(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_61(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xE769D9B5158D0F11(uParam0->f_1[iVar0]))
					{
						if (((func_58(uParam0->f_17[iVar0], 1) || func_80(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0xC4B84EB67F78C1F0(iParam10, 0) && !unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iParam10, 0)))
						{
							if (unk_0xE769D9B5158D0F11(uParam0->f_1[iVar0]))
							{
								unk_0x40D517D991458154(&(uParam0->f_1[iVar0]));
								func_72(uVar15[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_61(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0xC4B84EB67F78C1F0(iParam10, 0))
					{
						if (!unk_0x160400EAEE246B4D(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0xEA07F07380ABC460(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0xB03A1684359C50A1(uParam0->f_13, 11)) && !((bParam17 && unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0)) && !unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iParam10, 0)))
							{
								if (unk_0x1A7B277A2CBA7ADF(uParam0->f_17[iVar0]))
								{
									if (!unk_0x88B79D32B518C327(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_58(uParam0->f_17[iVar0], 1))
										{
											if (func_57(uParam0->f_17[iVar0]))
											{
												iVar14 = unk_0x2BBAA45ECDE3DAE2(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													unk_0x5941F8B2A813BBA8(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x3F34AC735B9567E3(uParam0->f_17[iVar0], func_14()))
									{
										if ((((!unk_0x9D059EF2DDA06E33(uParam0->f_17[iVar0]) && !unk_0x0B90D19A63676F41(uParam0->f_17[iVar0])) && !unk_0xE8BE423677E08365(uParam0->f_17[iVar0])) && !unk_0xDB5E52F2078862CA(uParam0->f_17[iVar0])) && !unk_0x25A40FAC128F45B0(iParam10))
										{
											unk_0x95B1A64E8455A478(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = unk_0x2BBAA45ECDE3DAE2(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_88(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0x9D059EF2DDA06E33(uParam0->f_17[iVar0]) && !unk_0x9D059EF2DDA06E33(unk_0x18F7BE9ACB7D08F4())) && !func_78(uParam0->f_17[iVar0], 2f)) && !unk_0x0B90D19A63676F41(uParam0->f_17[iVar0])) && !unk_0xE8BE423677E08365(uParam0->f_17[iVar0])) && !unk_0x25A40FAC128F45B0(iParam10))
										{
											unk_0x40E2910BAF39B1C7(uParam0->f_17[iVar0], 1);
											if (unk_0xB03A1684359C50A1(uParam0->f_13, 10))
											{
												unk_0x33A2A1DBDDF863E7(uParam0->f_17[iVar0], 1f);
											}
											unk_0xFDBDFC454E44A5BF(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0xEE12C3935551C9B1(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_52(uParam0->f_17[iVar0], 0, 0);
										unk_0x4925D19C5D509CE1(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x3F34AC735B9567E3(uParam0->f_17[iVar0], func_14()))
							{
								if (func_86(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
								{
									if (!unk_0x0B90D19A63676F41(uParam0->f_17[iVar0]) && !unk_0xE8BE423677E08365(uParam0->f_17[iVar0]))
									{
										iVar14 = unk_0x2BBAA45ECDE3DAE2(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											unk_0x267F7A2DFDFFB077(uParam0->f_17[iVar0]);
										}
										unk_0x40E2910BAF39B1C7(uParam0->f_17[iVar0], 0);
										unk_0xE186B0FBC086038E(uParam0->f_17[iVar0], func_14());
									}
								}
							}
						}
						else if (unk_0x160400EAEE246B4D(unk_0x18F7BE9ACB7D08F4(), iParam10))
						{
							if (!unk_0x3F34AC735B9567E3(uParam0->f_17[iVar0], func_14()))
							{
								if (!unk_0xB03A1684359C50A1(uParam0->f_13, 21))
								{
									unk_0xE186B0FBC086038E(uParam0->f_17[iVar0], func_14());
								}
							}
							else if (unk_0xB03A1684359C50A1(uParam0->f_13, 21))
							{
								unk_0x95B1A64E8455A478(uParam0->f_17[iVar0]);
								unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x3F34AC735B9567E3(uParam0->f_17[iVar0], func_14()) && !unk_0x25A40FAC128F45B0(iParam10))
						{
							unk_0x95B1A64E8455A478(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0xE769D9B5158D0F11(uParam0->f_1[iVar0]))
				{
					unk_0x40D517D991458154(&(uParam0->f_1[iVar0]));
					func_72(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xE769D9B5158D0F11(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_67(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0x0FAE113CE72ED842(uParam0->f_17[iVar0]))
						{
							if (func_83(uParam0->f_17[iVar0]) || unk_0xEA07F07380ABC460(uParam0->f_17[iVar0], unk_0x18F7BE9ACB7D08F4(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x0FAE113CE72ED842(uParam0->f_17[iVar0]))
					{
						if (!unk_0xEA07F07380ABC460(uParam0->f_17[iVar0], unk_0x18F7BE9ACB7D08F4(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_83(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x5AFB8ED811F05E4D();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0xB03A1684359C50A1(uParam0->f_13, 5))
							{
								func_65(uParam0, sParam7, 0);
								unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_77(iVar0, uParam0))
									{
										if (!unk_0xE0C4A595CD61B7F2(uVar19[iVar0]))
										{
											if (!unk_0x9D39145AD645E383(uVar19[iVar0], ""))
											{
												func_75(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_74(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_77(iVar0, uParam0))
										{
											func_65(uParam0, uVar15[iVar0], 0);
											func_74(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		unk_0x62148293B793073B(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0xE769D9B5158D0F11(uParam0->f_1[iVar0]))
				{
					unk_0x40D517D991458154(&(uParam0->f_1[iVar0]));
					func_72(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_72("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_74(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xD2A9C3F486236CC5(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xD2A9C3F486236CC5(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xD2A9C3F486236CC5(&(uParam1->f_13), 16);
			break;
	}
}

void func_75(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0xE0C4A595CD61B7F2(uParam1))
		{
			if (!unk_0x9D39145AD645E383(sParam1, ""))
			{
				func_76(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x5AFB8ED811F05E4D();
}

void func_76(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x74D144ED1523F85D(uParam0);
	unk_0xBEFD1ED9B6BE5127(uParam1);
	unk_0x0ADA506C37566A2D(iParam2, 1);
}

int func_77(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xB03A1684359C50A1(uParam1->f_13, 14);
		
		case 1:
			return unk_0xB03A1684359C50A1(uParam1->f_13, 15);
		
		case 2:
			return unk_0xB03A1684359C50A1(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_78(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x657B649BA2AD3582(iParam0, 0))
	{
		iVar0 = unk_0x5AD687C3474F04B4(iParam0, 0);
		if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
		{
			if (unk_0x2A72627520A107B5(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_79(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		if (!unk_0x3F34AC735B9567E3(iParam0, func_14()))
		{
			iVar0 = unk_0x9EA0BBD07AFF816B(iParam0);
			if (unk_0xC4B84EB67F78C1F0(iParam1, 0))
			{
				if (unk_0xEA07F07380ABC460(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_80(int iParam0, int iParam1)
{
	if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		if (unk_0x31F12808DC47A9E5(iParam1))
		{
			if (unk_0xC4B84EB67F78C1F0(iParam1, 0))
			{
				if (unk_0x160400EAEE246B4D(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_81(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xD2A9C3F486236CC5(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xD2A9C3F486236CC5(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xD2A9C3F486236CC5(&(uParam1->f_13), 19);
			break;
	}
}

int func_82(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xB03A1684359C50A1(uParam1->f_13, 17);
		
		case 1:
			return unk_0xB03A1684359C50A1(uParam1->f_13, 18);
		
		case 2:
			return unk_0xB03A1684359C50A1(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		iVar0 = unk_0x0B495402BD092DEB(unk_0x18F7BE9ACB7D08F4());
		if (unk_0xC4B84EB67F78C1F0(iVar0, 0))
		{
			if (!unk_0x0FAE113CE72ED842(iParam0))
			{
				iVar1 = unk_0x0B495402BD092DEB(iParam0);
				if (unk_0xC4B84EB67F78C1F0(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0xEA07F07380ABC460(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_84(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		if (unk_0x4F69FBD64CDF125B(iParam0) == joaat("bus") || unk_0x4F69FBD64CDF125B(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x0FAE113CE72ED842(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0x4983F8C51A0C0AF3(iParam0, 0, 0);
			if (!unk_0x0FAE113CE72ED842(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = unk_0x4983F8C51A0C0AF3(iParam0, 1, 0);
			if (!unk_0x0FAE113CE72ED842(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = unk_0x4983F8C51A0C0AF3(iParam0, 2, 0);
			if (!unk_0x0FAE113CE72ED842(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_85(var uParam0)
{
	int iVar0;
	
	if (unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
	{
		iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
		if (func_71(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_86(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x0FAE113CE72ED842(iParam1))
	{
		if (unk_0x1A7B277A2CBA7ADF(iParam1))
		{
			iVar0 = unk_0x5AD687C3474F04B4(iParam1, 0);
			if (!unk_0x74C2FE037DFC8B4A(iVar0, 0))
			{
				if (unk_0xC4B84EB67F78C1F0(iVar0, 0))
				{
					if (unk_0x160400EAEE246B4D(unk_0x18F7BE9ACB7D08F4(), iVar0))
					{
						if (func_85(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iParam1, uParam2, uParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0xEA07F07380ABC460(unk_0x18F7BE9ACB7D08F4(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0x0B495402BD092DEB(unk_0x18F7BE9ACB7D08F4());
				if (unk_0x31F12808DC47A9E5(iVar0))
				{
					if (func_71(iVar0, uParam0, 0))
					{
						if (unk_0xC4B84EB67F78C1F0(iVar0, 0))
						{
							if (func_87(iVar0))
							{
								return 1;
							}
						}
					}
				}
				else
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
	return 0;
}

int func_87(int iParam0)
{
	float fVar0;
	
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		fVar0 = unk_0x2A72627520A107B5(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_88(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0x0FAE113CE72ED842(iParam0))
	{
		if (unk_0xC4B84EB67F78C1F0(iParam1, 0))
		{
			iVar0 = unk_0x0B495402BD092DEB(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_89()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1))
	{
		iVar0 = unk_0x9EA0BBD07AFF816B(unk_0x18F7BE9ACB7D08F4());
		if (unk_0xC4B84EB67F78C1F0(iVar0, 0))
		{
			iVar1 = unk_0x4983F8C51A0C0AF3(iVar0, 0, 0);
			if (!unk_0x0FAE113CE72ED842(iVar1))
			{
				if (iVar1 != unk_0x18F7BE9ACB7D08F4())
				{
					if (unk_0x90D1FDC9D31B7BE1(iVar1))
					{
						if (!unk_0xEA9676A7B6531DD8(iVar1, unk_0x18F7BE9ACB7D08F4()))
						{
							unk_0x6016A20BFEAEFE11(iVar1, unk_0x18F7BE9ACB7D08F4(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_90(var uParam0)
{
	int iVar0;
	
	if (!unk_0xB03A1684359C50A1(uParam0->f_13, 25))
	{
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0x764AFC5A3A16C2B0(unk_0x18F7BE9ACB7D08F4(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x31F12808DC47A9E5(uParam0->f_17[iVar0]))
			{
				if (!unk_0x0FAE113CE72ED842(uParam0->f_17[iVar0]))
				{
					unk_0x764AFC5A3A16C2B0(uParam0->f_17[iVar0], 32, 0);
					unk_0x764AFC5A3A16C2B0(uParam0->f_17[iVar0], 305, 1);
					unk_0x764AFC5A3A16C2B0(uParam0->f_17[iVar0], 268, 1);
					unk_0xEE12C3935551C9B1(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0xD2A9C3F486236CC5(&(uParam0->f_13), 25);
	}
}

void func_91(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x31F12808DC47A9E5(uParam0->f_17[iVar0]))
		{
			if (!unk_0x0FAE113CE72ED842(uParam0->f_17[iVar0]))
			{
				if (unk_0x1A7B277A2CBA7ADF(uParam0->f_17[iVar0]))
				{
					unk_0x38ADC0C5F4F08C6D(uParam0->f_17[iVar0], 0);
					unk_0xC1EC3CD3D3C6690B(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
		{
			if (unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4()))
			{
				unk_0x38ADC0C5F4F08C6D(unk_0x18F7BE9ACB7D08F4(), 0);
				unk_0xC1EC3CD3D3C6690B(unk_0x18F7BE9ACB7D08F4(), 0);
			}
		}
	}
}

var func_92()
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_93()
{
	struct<3> Var0;
	
	return Var0;
}

int func_94()
{
	if (unk_0x31F12808DC47A9E5(iLocal_2575) && unk_0xC4B84EB67F78C1F0(iLocal_2575, 0))
	{
		return 1;
	}
	return 0;
}

bool func_95(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, float fParam10, int iParam11, int iParam12, char* sParam13, char* sParam14, char* sParam15, bool bParam16, int iParam17, bool bParam18, int iParam19)
{
	return func_51(uParam0, Param1, func_96(), Param4, Param7, iParam11, 5, 0, 0, 0, iParam12, sParam13, func_92(), func_92(), func_92(), func_92(), sParam14, 0, bParam16, sParam15, 1, iParam17, bParam18, iParam19, func_92(), func_92(), func_92(), 1, fParam10);
}

Vector3 func_96()
{
	return 0f, 0f, 2f;
}

int func_97()
{
	int iVar0;
	
	if (func_98())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x31F12808DC47A9E5(Local_579[iVar0 /*8*/]) && unk_0xC4B84EB67F78C1F0(Local_579[iVar0 /*8*/], 0))
			{
				if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1) && unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), Local_579[iVar0 /*8*/], 1))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_98()
{
	int iVar0;
	
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x31F12808DC47A9E5(Local_579[iVar0 /*8*/]) && unk_0xC4B84EB67F78C1F0(Local_579[iVar0 /*8*/], 0))
			{
				if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), Local_579[iVar0 /*8*/], 0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_99(int iParam0, int iParam1)
{
	Global_55912 = iParam0;
	Global_55913 = iParam1;
}

int func_100(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (((unk_0x31F12808DC47A9E5(Local_579[iVar1 /*8*/]) && unk_0xC4B84EB67F78C1F0(Local_579[iVar1 /*8*/], 0)) && !func_104(Local_579[iVar1 /*8*/])) && (!bParam0 || func_101(Local_579[iVar1 /*8*/])))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_101(int iParam0)
{
	if (unk_0x338C4427806FEB6D(iParam0) == iLocal_2527)
	{
		if (func_103(unk_0x18F7BE9ACB7D08F4(), Local_642, 1) < 500f)
		{
			return 1;
		}
	}
	else if (func_102(iParam0, unk_0x18F7BE9ACB7D08F4(), 1) < 300f)
	{
		return 1;
	}
	return 0;
}

float func_102(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 0) };
	}
	if (!unk_0x74C2FE037DFC8B4A(iParam1, 0))
	{
		Var3 = { unk_0x761660F5CE986DC4(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x761660F5CE986DC4(iParam1, 0) };
	}
	return unk_0x15EE504466B7BBD3(Var0, Var3, iParam2);
}

float func_103(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x761660F5CE986DC4(iParam0, 0) };
	}
	return unk_0x15EE504466B7BBD3(Var0, Param1, iParam4);
}

int func_104(int iParam0)
{
	if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		if ((unk_0x08438F954B83E80B(iParam0, 0, 7000) || unk_0x08438F954B83E80B(iParam0, 1, 7000)) || unk_0x08438F954B83E80B(iParam0, 2, 7000))
		{
			return 1;
		}
	}
	return 0;
}

void func_105(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x74D144ED1523F85D(sParam0);
	unk_0x0ADA506C37566A2D(iParam1, 1);
}

void func_106(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0x31F12808DC47A9E5(Global_95145.f_4))
	{
		if (unk_0xC4B84EB67F78C1F0(Global_95145.f_4, 0))
		{
			if (func_158(24) != Global_95145.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_155(unk_0x761660F5CE986DC4(Global_95145.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_107(Global_95145.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_107(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0x31F12808DC47A9E5(iParam0) && unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x31F12808DC47A9E5(Global_69674.f_484[25]) && unk_0xC4B84EB67F78C1F0(Global_69674.f_484[25], 0))
			{
				if (Global_69674.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x88EA695420CF2150(iParam0) || unk_0x4F69FBD64CDF125B(iParam0) == joaat("bus")) || unk_0x4F69FBD64CDF125B(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_154(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_150(iParam0, &Var0);
		if (func_149(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0x761660F5CE986DC4(iParam0, 1) };
			uParam4 = unk_0x93FDA3BF59E7B77F(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x6E987D62C8535B6E(unk_0xFCA64981FEF7C913()) != joaat("vehicle_gen_controller"))
			{
				Global_70662 = unk_0x6E987D62C8535B6E(unk_0xFCA64981FEF7C913());
			}
		}
		func_142(iParam5, &Var0, Param1, uParam4, func_148(iParam0));
		func_108(iParam5, iParam0, 0);
	}
}

void func_108(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_138(&(Global_69674.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xB03A1684359C50A1(Global_69674.f_555[0 /*21*/].f_9, 12) && !unk_0xB03A1684359C50A1(Global_69674.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_69674.f_555[0 /*21*/].f_4 != unk_0x4F69FBD64CDF125B(iParam1))
		{
			return;
		}
	}
	if (Global_70581 != -1 && Global_70581 != iParam0)
	{
		return;
	}
	if (unk_0x31F12808DC47A9E5(iParam1))
	{
		if (unk_0xC4B84EB67F78C1F0(iParam1, 0))
		{
			if (!unk_0x90D1FDC9D31B7BE1(iParam1))
			{
				unk_0x337F2213526139E0(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_104551.f_32429.f_4801 = func_127();
			}
			if (iParam1 != Global_69674.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_158(iParam0);
					if ((unk_0x31F12808DC47A9E5(iVar0) && unk_0xC4B84EB67F78C1F0(iVar0, 0)) && iParam1 != iVar0)
					{
						func_109(iVar0, 145);
					}
				}
				Global_70580 = iParam1;
				Global_70581 = iParam0;
				Global_70582 = iParam2;
			}
		}
	}
}

void func_109(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_110(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x4983F8C51A0C0AF3(iParam0, -1, 0);
		if (!unk_0x31F12808DC47A9E5(iVar0))
		{
			iVar0 = unk_0x75FAFA6C74F1ACCD(iParam0, -1);
		}
		if (unk_0x31F12808DC47A9E5(iVar0) && !unk_0x0FAE113CE72ED842(iVar0))
		{
			if (unk_0x4F69FBD64CDF125B(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x4F69FBD64CDF125B(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x4F69FBD64CDF125B(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_104551.f_2353.f_539.f_4301;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x4F69FBD64CDF125B(iParam0) == Global_104551.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xFAFFA408239A026B(&(Global_104551.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x9D39145AD645E383(unk_0xE6A2C60E19ABFD84(iParam0), &(Global_104551.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_104551.f_32429.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_104551.f_32429.f_5592[iVar1] = iVar2;
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
		if (unk_0x4F69FBD64CDF125B(iParam0) == Global_104551.f_32429.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xFAFFA408239A026B(&(Global_104551.f_32429.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x9D39145AD645E383(unk_0xE6A2C60E19ABFD84(iParam0), &(Global_104551.f_32429.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_104551.f_32429.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_104551.f_32429.f_5590 = iParam1;
	Global_70579 = iParam0;
	Global_104551.f_32429.f_5588 = 1;
	func_150(iParam0, &(Global_104551.f_32429.f_5510));
}

int func_110(int iParam0)
{
	if ((((((((((!unk_0x31F12808DC47A9E5(iParam0) || !unk_0xC4B84EB67F78C1F0(iParam0, 0)) || func_125(iParam0, 0, 0)) || func_125(iParam0, 1, 0)) || func_125(iParam0, 2, 0)) || func_148(iParam0) != 145) || func_124(iParam0)) || func_123(iParam0)) || func_122(iParam0)) || func_121(iParam0)) || !func_111(unk_0x4F69FBD64CDF125B(iParam0)))
	{
		if (func_123(iParam0))
		{
		}
		if (func_123(iParam0))
		{
		}
		if (func_125(iParam0, 0, 0))
		{
		}
		if (func_125(iParam0, 1, 0))
		{
		}
		if (func_125(iParam0, 2, 0))
		{
		}
		if (func_148(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_111(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_112(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x9605D2F02FA93911(iParam0) || unk_0xD8BB60C76D29E4BB(iParam0)) || unk_0xB6353CAE3EBC0919(iParam0)) || unk_0xA403D842C198CAFF(iParam0))
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

int func_112(int iParam0, bool bParam1)
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
		if (!func_120())
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
		if ((((!func_119() && !func_118()) && !func_117()) && !func_116()) && !func_120())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0x929A0C5D6A986B4F() || unk_0xC339C5C5B5E8BC5B()) || unk_0x0A8A596EB9C068FA())
		{
		}
		else if (!func_117())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_115(iParam0))
		{
			return 0;
		}
	}
	if (!func_113(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_113(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_114())
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

int func_114()
{
	if (unk_0xC339C5C5B5E8BC5B())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

int func_115(int iParam0)
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

int func_116()
{
	return 0;
}

int func_117()
{
	return 1;
}

int func_118()
{
	return 1;
}

int func_119()
{
	if (unk_0x5E02CD27DBE77D67(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_120()
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
					uVar0 = unk_0x3A75EA627A024B7A(866);
					unk_0xD2A9C3F486236CC5(&uVar0, 0);
					unk_0x167AC4B8CEEB1F11(uVar0);
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

int func_121(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x4F69FBD64CDF125B(iParam0);
	uVar1 = unk_0xE6A2C60E19ABFD84(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x9D39145AD645E383(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_112(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_122(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x31F12808DC47A9E5(Global_90335[iVar0]))
		{
			if (Global_90335[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_123(int iParam0)
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(iParam0) && unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x31F12808DC47A9E5(Global_90305[iVar0]) && unk_0xC4B84EB67F78C1F0(Global_90305[iVar0], 0))
			{
				if (Global_90305[iVar0] == iParam0 && unk_0x4F69FBD64CDF125B(Global_90305[iVar0]) == unk_0x4F69FBD64CDF125B(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_124(int iParam0)
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(Global_69674.f_484[24]))
	{
		if (iParam0 == Global_69674.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x31F12808DC47A9E5(Global_69674.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_69674.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_125(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x31F12808DC47A9E5(iParam0) || !unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_126(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xB03A1684359C50A1(Global_104551.f_7199[iVar9], 0))
		{
			if (unk_0x31AAECA8242E34AD(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_126(int iParam0, int iParam1, char* sParam2, var uParam3)
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

var func_127()
{
	var uVar0;
	
	func_137(&uVar0, unk_0xB093145A4ED05C87());
	func_136(&uVar0, unk_0x4BF279EB036481A0());
	func_135(&uVar0, unk_0xF0B96EE16BA9FBE8());
	func_130(&uVar0, unk_0x518720E0DE404FFC());
	func_129(&uVar0, unk_0x5E3E9A684A609866());
	func_128(&uVar0, unk_0xFBE778F13510E585());
	return uVar0;
}

void func_128(var uParam0, int iParam1)
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

void func_129(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_130(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_134(*uParam0);
	iVar1 = func_132(*uParam0);
	if (iParam1 < 1 || iParam1 > func_131(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_131(int iParam0, int iParam1)
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

var func_132(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_133(unk_0xB03A1684359C50A1(iParam0, 31), -1, 1)) + 2011;
}

int func_133(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_134(var uParam0)
{
	return uParam0 & 15;
}

void func_135(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_136(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_137(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_138(var uParam0, int iParam1)
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
			uParam0->f_4 = func_139(0, 1);
			uParam0->f_12 = 0;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 20);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_139(0, 1);
			uParam0->f_12 = 0;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 20);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_139(1, 1);
			uParam0->f_12 = 1;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 20);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_139(1, 2);
			uParam0->f_12 = 1;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 19);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_139(1, 1);
			uParam0->f_12 = 1;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 20);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_139(1, 2);
			uParam0->f_12 = 1;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 19);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_139(2, 1);
			uParam0->f_12 = 2;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 20);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_139(2, 1);
			uParam0->f_12 = 2;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 20);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_139(2, 1);
			uParam0->f_12 = 2;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 20);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 22);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 22);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 22);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 24);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 24);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 14);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 24);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 28);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 29);
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
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 27);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 24);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 29);
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
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 27);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 24);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 29);
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
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 7);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 27);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 24);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 11);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 13);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 10);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 11);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 13);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 9);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 9);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 8);
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
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 2);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 30);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 2);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 22);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
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
			if (func_120())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 13);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 2);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 1);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_120())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 13);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 2);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 1);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 0);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 21);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 30);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 30);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 23);
			unk_0xD2A9C3F486236CC5(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xB03A1684359C50A1(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_104551.f_32429.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_149(Global_104551.f_32429.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104551.f_32429.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_104551.f_32429.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_104551.f_32429.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xB03A1684359C50A1(uParam0->f_9, 19))
	{
		if (!func_149(Global_104551.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104551.f_2353.f_539.f_3568[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104551.f_2353.f_539.f_3589[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xB03A1684359C50A1(uParam0->f_9, 20))
	{
		if (!func_149(Global_104551.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_104551.f_2353.f_539.f_3568[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_104551.f_2353.f_539.f_3589[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_139(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_141(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_140(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_140(int iParam0, var uParam1, int iParam2)
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
			if (Global_104551.f_9055.f_99.f_58[128] && !Global_104551.f_9055.f_99.f_58[131])
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
					if (Global_104551.f_9055.f_99.f_58[119])
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
			else if (Global_104551.f_9055.f_99.f_58[118])
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

bool func_141(int iParam0)
{
	return iParam0 < 3;
}

void func_142(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_138(&(Global_69674.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xB03A1684359C50A1(Global_69674.f_555[0 /*21*/].f_9, 10))
		{
			func_147(iParam0);
			func_146(uParam1, &(Global_104551.f_32429.f_69[Global_69674.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xB03A1684359C50A1(Global_69674.f_555[0 /*21*/].f_9, 11))
			{
				Global_104551.f_32429.f_1864[Global_69674.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_104551.f_32429.f_1934[Global_69674.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_104551.f_32429.f_1864[Global_69674.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_104551.f_32429.f_1934[Global_69674.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_104551.f_32429.f_1958[Global_69674.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_143(iParam0, 1);
		}
	}
}

void func_143(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_145(iParam0, 0))
		{
			func_144(iParam0, 1, 0);
			func_144(iParam0, 2, 0);
			func_144(iParam0, 3, 0);
			func_144(iParam0, 4, 0);
			func_144(iParam0, 0, 1);
			Global_69674[iParam0] = 1;
		}
	}
	else
	{
		func_144(iParam0, 0, 0);
	}
}

void func_144(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xD2A9C3F486236CC5(&(Global_104551.f_32429[iParam0]), iParam1);
	}
	else
	{
		unk_0x62148293B793073B(&(Global_104551.f_32429[iParam0]), iParam1);
	}
}

bool func_145(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB03A1684359C50A1(Global_104551.f_32429[iParam0], iParam1);
}

void func_146(var uParam0, var uParam1)
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

void func_147(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_138(&(Global_69674.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x31F12808DC47A9E5(Global_69674.f_139[iParam0]))
		{
			unk_0x337F2213526139E0(Global_69674.f_139[iParam0], 1, 1);
			unk_0x4F5FF3F3FDCAB15D(&(Global_69674.f_139[iParam0]));
			Global_69674.f_139[iParam0] = 0;
		}
		if (unk_0xB03A1684359C50A1(Global_69674.f_555[0 /*21*/].f_9, 13))
		{
			func_143(iParam0, 0);
		}
	}
}

int func_148(int iParam0)
{
	int iVar0;
	
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return 145;
	}
	if (!unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x31F12808DC47A9E5(Global_90305[iVar0]))
		{
			if (Global_90305[iVar0] == iParam0)
			{
				return Global_90315[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

bool func_149(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_150(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		func_153(uParam1);
		uParam1->f_66 = unk_0x4F69FBD64CDF125B(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xE6A2C60E19ABFD84(iParam0), 16);
		*uParam1 = unk_0x2B07F86D9BC57D14(iParam0);
		unk_0xC2CED850D0B7AE40(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x939E5110724C9FF5(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x5DEE36C41FD07639(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x5B416ECA8172648C(iParam0);
		uParam1->f_67 = unk_0x178913209B5C278C(iParam0);
		uParam1->f_69 = unk_0x459703DBCA7E4F90(iParam0);
		uParam1->f_70 = unk_0xA15463616D2BE67B(iParam0);
		unk_0x868FCC1ABD0392E2(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0xC501B2A5F74552E1(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x6BF5E4054292013A(iParam0, 2))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 28);
		}
		if (unk_0x6BF5E4054292013A(iParam0, 3))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 29);
		}
		if (unk_0x6BF5E4054292013A(iParam0, 0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 30);
		}
		if (unk_0x6BF5E4054292013A(iParam0, 1))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x7C094ED2B27D253F(iParam0, 0))
		{
			uParam1->f_68 = unk_0xB5305F9F7739856F(iParam0);
		}
		if (unk_0xD8BB60C76D29E4BB(uParam1->f_66))
		{
			if (unk_0xAD1AE6AEE26C1B5B(iParam0))
			{
				switch (unk_0xF0623119822BFA16(iParam0))
				{
					case 2:
					case 0:
						unk_0x62148293B793073B(&(uParam1->f_77), 23);
						unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x62148293B793073B(&(uParam1->f_77), 23);
						unk_0x62148293B793073B(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0xDCACEB538A650DBE(iParam0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 9);
		}
		if (unk_0x43AB555BD9D432EA(iParam0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 10);
		}
		if (unk_0x598942D690303B92(iParam0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 13);
			unk_0x9F7E6674DE4C23B5(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xFD2F81E6B2E852DA(iParam0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 12);
		}
		func_152(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x6276BF0E9518E43A(iParam0, iVar0 + 1))
			{
				unk_0xD2A9C3F486236CC5(&(uParam1->f_77), func_151(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x6D111CD3D2767A08(iParam0, 0))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x62148293B793073B(&(uParam1->f_77), 11);
		}
		if (unk_0x788C6B35BB3FCF53(iParam0, "IgnoredByQuickSave") && unk_0x3C32210A85B95B19(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xD2A9C3F486236CC5(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x62148293B793073B(&(uParam1->f_77), 27);
		}
	}
}

int func_151(int iParam0)
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

int func_152(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC4B84EB67F78C1F0(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x8A27C3C945C9E921(*iParam0) == 0)
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
			if (unk_0xFA82454B8C070DBB(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x2FA7EA3CA1AD2BF9(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x8730A3E327DA8627(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x8730A3E327DA8627(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_153(var uParam0)
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

void func_154(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_147(iParam0);
	func_143(iParam0, 0);
}

int func_155(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_156(Param0, iParam3, 1);
	switch (iVar0)
	{
		case 0:
			*uParam4 = { -827.351f, 157.785f, 68.2143f };
			*uParam5 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam4 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam5 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam4 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam5 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam4 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam5 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam4 = { -18.118f, -1455.126f, 29.5004f };
			*uParam5 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam4 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam5 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_156(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_88012[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_88012[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_157(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x15EE504466B7BBD3(Param0, Global_88012[iVar0 /*10*/].f_3, 1);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_157(int iParam0)
{
	return unk_0xB03A1684359C50A1(Global_104551.f_7199[iParam0], 0);
}

int func_158(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_69674.f_139[iParam0];
}

int func_159()
{
	func_160();
	return Global_104551.f_2353.f_539.f_4301;
}

void func_160()
{
	int iVar0;
	
	if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
	{
		if (func_162(Global_104551.f_2353.f_539.f_4301) != unk_0x4F69FBD64CDF125B(unk_0x18F7BE9ACB7D08F4()))
		{
			iVar0 = func_161(unk_0x18F7BE9ACB7D08F4());
			if (func_141(iVar0) && (!func_35(14) || Global_103502))
			{
				if (Global_104551.f_2353.f_539.f_4301 != iVar0 && func_141(Global_104551.f_2353.f_539.f_4301))
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

int func_161(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x31F12808DC47A9E5(uParam0))
	{
		iVar1 = unk_0x4F69FBD64CDF125B(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_162(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_162(int iParam0)
{
	if (func_141(iParam0))
	{
		return Global_104551.f_28020[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_163(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (*uParam0 == -1)
	{
		return 0;
	}
	else if (*uParam0 == 1)
	{
		return 1;
	}
	else if (*uParam0 == 0 || ((*uParam0 == 2 && uParam0->f_1 == 1) && iParam2))
	{
		if (iParam1 > 0)
		{
			*uParam0 = 2;
			uParam0->f_6 = iParam1;
		}
		else
		{
			*uParam0 = 1;
			uParam0->f_6 = 0;
		}
		uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
		uParam0->f_5 = unk_0x5AFB8ED811F05E4D();
		uParam0->f_1 = iParam3;
		return 1;
	}
	return 0;
}

int func_164(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0)
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				(uParam0[iVar0 /*5*/])->f_2 = 0;
				if (!(uParam0[iVar0 /*5*/])->f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x9016574B77A748EE(iParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = unk_0x5AFB8ED811F05E4D();
		(uParam0[iVar1 /*5*/])->f_4 = iParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

int func_165(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFAFFA408239A026B(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (unk_0x9D39145AD645E383(uParam0->f_737[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_737[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_737[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0xFF22FE9205F44FB6(sParam1, 0, -1);
		uParam0->f_737[iVar1 /*5*/] = 1;
		uParam0->f_737[iVar1 /*5*/].f_3 = unk_0x5AFB8ED811F05E4D();
		uParam0->f_737[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

void func_166(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		switch ((*uParam0)[iVar0 /*8*/])
		{
			case 1:
				Stack.Push(uParam0[iVar0 /*8*/]);
				Call_Loc((uParam0[iVar0 /*8*/])->f_7);
				break;
			
			case 2:
				if ((unk_0x5AFB8ED811F05E4D() - (uParam0[iVar0 /*8*/])->f_5) > (uParam0[iVar0 /*8*/])->f_6)
				{
					(*uParam0)[iVar0 /*8*/] = 1;
					(uParam0[iVar0 /*8*/])->f_6 = 0;
				}
				break;
		}
		iVar0++;
	}
}

void func_167()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	bVar2 = false;
	if (func_103(unk_0x18F7BE9ACB7D08F4(), Local_642, 1) < 70f)
	{
		unk_0x985B494A17A166D8();
	}
	if (iLocal_2573 == 9)
	{
		if (!iLocal_2572)
		{
			if (unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0))
			{
				unk_0x9581BDC15A63820A("SCRIPTED_SCANNER_REPORT_JSH_PREP_1A_01", 0f);
				iLocal_2572 = 1;
			}
		}
		if (unk_0x31F12808DC47A9E5(Local_469.f_0))
		{
			if (func_102(Local_469.f_0, unk_0x18F7BE9ACB7D08F4(), 1) > 300f)
			{
				unk_0xDBE64C5761554FBF(&Local_469);
			}
		}
	}
	if (unk_0x31F12808DC47A9E5(iLocal_2575) && unk_0xC4B84EB67F78C1F0(iLocal_2575, 0))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x31F12808DC47A9E5(Local_579[iVar0 /*8*/]) && unk_0xC4B84EB67F78C1F0(Local_579[iVar0 /*8*/], 0))
			{
				if (unk_0x3C87303CA056FB80(iLocal_2575, Local_579[iVar0 /*8*/]))
				{
					bVar2 = true;
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			iLocal_2575 = 0;
		}
	}
	if (func_177())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x31F12808DC47A9E5(Local_579[iVar0 /*8*/]) && unk_0xC4B84EB67F78C1F0(Local_579[iVar0 /*8*/], 0))
			{
				if (unk_0x3C87303CA056FB80(unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0), Local_579[iVar0 /*8*/]))
				{
					iLocal_2575 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
				}
			}
			iVar0++;
		}
	}
	func_170();
	if (iLocal_651 == 0)
	{
		if (!unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), 182.9537f, -3119.884f, 101.9226f, 115f, 260f, 120f, 0, 1, 0))
		{
			bVar3 = true;
		}
		iVar1 = 0;
		while (iVar1 < Local_28.f_0)
		{
			if (unk_0x31F12808DC47A9E5(Local_28[iVar1 /*110*/]))
			{
				if ((Local_28[iVar1 /*110*/].f_5 == 5 && func_102(unk_0x18F7BE9ACB7D08F4(), Local_28[iVar1 /*110*/], 1) > 300f) && func_103(unk_0x18F7BE9ACB7D08F4(), Local_642, 1) > 300f)
				{
					unk_0x63C116C2153FAA3C(&(Local_28[iVar1 /*110*/]));
				}
			}
			iVar1++;
		}
		iVar4 = 6;
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x31F12808DC47A9E5(Local_579[iVar0 /*8*/]))
			{
				if (!unk_0xC4B84EB67F78C1F0(Local_579[iVar0 /*8*/], 0))
				{
					unk_0x4F5FF3F3FDCAB15D(&(Local_579[iVar0 /*8*/]));
					if (unk_0xE769D9B5158D0F11(Local_579[iVar0 /*8*/].f_1))
					{
						unk_0x40D517D991458154(&(Local_579[iVar0 /*8*/].f_1));
					}
					if (bVar3)
					{
						iVar4 = 1;
					}
					else
					{
						iVar4 = 2;
					}
				}
				else if (func_104(Local_579[iVar0 /*8*/]))
				{
					if (unk_0xE769D9B5158D0F11(Local_579[iVar0 /*8*/].f_1))
					{
						unk_0x40D517D991458154(&(Local_579[iVar0 /*8*/].f_1));
					}
					iVar4 = 3;
				}
				else if (!func_101(Local_579[iVar0 /*8*/]))
				{
					if (unk_0x338C4427806FEB6D(Local_579[iVar0 /*8*/]) == iLocal_2527)
					{
						if (iVar4 != 4)
						{
							iVar4 = 5;
						}
					}
					else
					{
						iVar4 = 4;
					}
				}
			}
			if (((((iLocal_2573 == 9 && func_97() != -1) && unk_0x31F12808DC47A9E5(Local_579[func_97() /*8*/])) && unk_0xC4B84EB67F78C1F0(Local_579[func_97() /*8*/], 0)) && !func_104(Local_579[func_97() /*8*/])) || (((iLocal_2573 == 10 && func_49() != -1) && unk_0x31F12808DC47A9E5(Local_579[func_49() /*8*/])) && unk_0xC4B84EB67F78C1F0(Local_579[func_49() /*8*/], 0)))
			{
				if (unk_0xE769D9B5158D0F11(Local_579[iVar0 /*8*/].f_1))
				{
					unk_0x40D517D991458154(&(Local_579[iVar0 /*8*/].f_1));
				}
			}
			else if ((((unk_0x31F12808DC47A9E5(Local_579[iVar0 /*8*/]) && unk_0xC4B84EB67F78C1F0(Local_579[iVar0 /*8*/], 0)) && !func_104(Local_579[iVar0 /*8*/])) && func_101(Local_579[iVar0 /*8*/])) && iLocal_652 == 0)
			{
				if (!unk_0xE769D9B5158D0F11(Local_579[iVar0 /*8*/].f_1))
				{
					Local_579[iVar0 /*8*/].f_1 = func_169(Local_579[iVar0 /*8*/], 0, 0);
					unk_0xF60CEE5003674AF0(Local_579[iVar0 /*8*/].f_1, 1);
				}
			}
			iVar0++;
		}
		if (iLocal_2573 == 9 || iLocal_2573 == 10)
		{
			if (func_168("JHP1A_BKIN", 0, 0) || func_168("JHP1A_BKINANY", 0, 0))
			{
				unk_0x08FC50794202A47C();
			}
		}
		else if (iLocal_652 == 0)
		{
			if (!iLocal_2567)
			{
				if (func_100(1) == 1)
				{
					func_105("JHP1A_BKIN", 7500, 1);
				}
				iLocal_2567 = 1;
			}
		}
		if (func_100(1) == 0)
		{
			if (iVar4 != 6)
			{
				func_282(iVar4);
			}
		}
	}
}

var func_168(char* sParam0, int iParam1, int iParam2)
{
	unk_0x096CAD0A8332D384(sParam0);
	if (iParam1 == 1)
	{
		unk_0xBEFD1ED9B6BE5127(iParam2);
	}
	return unk_0x45CD208BAEE25DF4();
}

int func_169(int iParam0, bool bParam1, bool bParam2)
{
	return func_53(iParam0, !bParam1, bParam2);
}

void func_170()
{
	if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), Local_579[3 /*8*/], 1))
		{
			iLocal_2573 = 11;
		}
		else if (func_176())
		{
			iLocal_2573 = 7;
		}
		else if (func_175())
		{
			iLocal_2573 = 6;
		}
		else if (func_98())
		{
			iLocal_2573 = 9;
			iLocal_2567 = 0;
		}
		else if (func_94())
		{
			iLocal_2573 = 10;
		}
		else if (func_174())
		{
			iLocal_2573 = 8;
		}
		else if (((unk_0x31F12808DC47A9E5(iLocal_2576) && unk_0xC4B84EB67F78C1F0(iLocal_2576, 0)) && !unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_2576, 1)) && unk_0x11BBEE2752B9D0C8(iLocal_2576, Local_642, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0))
		{
			iLocal_2573 = 5;
		}
		else if (((!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1) && unk_0x31F12808DC47A9E5(unk_0x952F33F151D40D1A())) && !func_173()) && unk_0x11BBEE2752B9D0C8(unk_0x952F33F151D40D1A(), Local_642, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0))
		{
			iLocal_2576 = unk_0x952F33F151D40D1A();
			iLocal_2573 = 5;
		}
		else if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1) && unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), Local_642, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0))
		{
			iLocal_2573 = 2;
		}
		else if (((unk_0x31F12808DC47A9E5(iLocal_2576) && unk_0xC4B84EB67F78C1F0(iLocal_2576, 0)) && !unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iLocal_2576, 1)) && (unk_0x11BBEE2752B9D0C8(iLocal_2576, 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, 1, 0) || unk_0x8673F2F1802ADEF7(iLocal_2576, 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0)))
		{
			iLocal_2573 = 4;
		}
		else if (((!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1) && unk_0x31F12808DC47A9E5(unk_0x952F33F151D40D1A())) && !func_173()) && (unk_0x11BBEE2752B9D0C8(unk_0x952F33F151D40D1A(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, 1, 0) || unk_0x8673F2F1802ADEF7(unk_0x952F33F151D40D1A(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0)))
		{
			iLocal_2576 = unk_0x952F33F151D40D1A();
			iLocal_2573 = 4;
		}
		else if ((unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1) && !func_173()) && unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), Local_642, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0))
		{
			iLocal_2576 = unk_0x952F33F151D40D1A();
			iLocal_2573 = 3;
		}
		else if ((unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1) && !func_173()) && unk_0x11BBEE2752B9D0C8(unk_0x18F7BE9ACB7D08F4(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, 1, 0))
		{
			iLocal_2576 = unk_0x952F33F151D40D1A();
			iLocal_2573 = 1;
		}
		else if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1) && unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0))
		{
			iLocal_2573 = 1;
		}
		else
		{
			iLocal_2576 = 0;
			if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1) && unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), 159.688f, -3092.446f, 7.314032f, 4.9375f, 7.3125f, 2.3125f, 0, 1, 0))
			{
				iLocal_2573 = 0;
			}
			else if (!unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1) && unk_0x8673F2F1802ADEF7(unk_0x18F7BE9ACB7D08F4(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0))
			{
				iLocal_2573 = 0;
			}
			else
			{
				iLocal_2573 = -1;
			}
		}
		if (iLocal_2573 == 1)
		{
			if (func_172(Local_28[0 /*110*/]))
			{
				func_171(Local_28[0 /*110*/], 120f, 20f, 120f, -90f, 90f);
			}
		}
		else if (func_172(Local_28[0 /*110*/]))
		{
			func_171(Local_28[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		}
		if (bLocal_2570)
		{
			unk_0xB05E48165A6F6058(unk_0x18F7BE9ACB7D08F4(), 155, 1);
		}
		if ((iLocal_2573 != -1 && unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0)) && unk_0xE475B18FD1B87E1E(Vector(101.9226f, -3119.884f, 182.9537f) - Vector(108.0625f, 239.75f, 94.25f), Vector(101.9226f, -3119.884f, 182.9537f) + Vector(108.0625f, 239.75f, 94.25f)))
		{
		}
	}
}

void func_171(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0x0FAE113CE72ED842(uParam0))
	{
		unk_0x067F16ECAED88B7F(iParam0, fParam1);
		unk_0x1B0727CEEF75B52D(iParam0, fParam2);
		unk_0xB7F566C238287AC2(iParam0, (fParam3 / 2f));
		unk_0xB0C2F128821ED051(iParam0, fParam4);
		unk_0xB7751001C18D55F9(iParam0, fParam5);
	}
}

int func_172(int iParam0)
{
	if (iParam0 != 0 && unk_0x31F12808DC47A9E5(iParam0))
	{
		switch (unk_0xEC77C4DC6E2D7059(iParam0))
		{
			case 1:
				if (!unk_0x0FAE113CE72ED842(unk_0x6DE4035D8BAB73B4(iParam0)))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0xC4B84EB67F78C1F0(unk_0x00ABCA0241A97143(iParam0), 0))
				{
					return 1;
				}
				break;
			
			default:
				if (!unk_0x74C2FE037DFC8B4A(iParam0, 0))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_173()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (unk_0x31F12808DC47A9E5(Local_579[iVar0 /*8*/]) && unk_0xC4B84EB67F78C1F0(Local_579[iVar0 /*8*/], 0))
		{
			if (unk_0x952F33F151D40D1A() == Local_579[iVar0 /*8*/])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_174()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (unk_0x31F12808DC47A9E5(Local_579[iVar0 /*8*/]) && unk_0x1B843A60307EECA4(Local_579[iVar0 /*8*/], unk_0x18F7BE9ACB7D08F4(), 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_175()
{
	int iVar0;
	
	if (unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if ((unk_0x31F12808DC47A9E5(Local_579[iVar0 /*8*/]) && unk_0xC4B84EB67F78C1F0(Local_579[iVar0 /*8*/], 0)) && unk_0x9EA0BBD07AFF816B(unk_0x18F7BE9ACB7D08F4()) == Local_579[iVar0 /*8*/])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_176()
{
	int iVar0;
	
	if ((unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1) && !unk_0x1A7B277A2CBA7ADF(unk_0x18F7BE9ACB7D08F4())) && !unk_0xDB5E52F2078862CA(unk_0x18F7BE9ACB7D08F4()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x31F12808DC47A9E5(Local_579[iVar0 /*8*/]) && unk_0xC4B84EB67F78C1F0(Local_579[iVar0 /*8*/], 0))
			{
				if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), Local_579[iVar0 /*8*/], 1))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_177()
{
	int iVar0;
	
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		iVar0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
		if (unk_0xC4B84EB67F78C1F0(iVar0, 0) && (unk_0x4F69FBD64CDF125B(iVar0) == joaat("towtruck") || unk_0x4F69FBD64CDF125B(iVar0) == joaat("towtruck2")))
		{
			return 1;
		}
	}
	return 0;
}

void func_178()
{
	int iVar0;
	
	if (unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
	{
		func_282(6);
	}
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		if (unk_0x31F12808DC47A9E5(Local_28[iVar0 /*110*/]))
		{
			if (Local_28[iVar0 /*110*/].f_93)
			{
				if (Local_28[iVar0 /*110*/].f_102)
				{
					func_179(Local_28[iVar0 /*110*/], &(Local_28[iVar0 /*110*/].f_94), 3, 0, 0, 0, -1082130432, 0, -1, -1, 1);
				}
				else
				{
					func_179(Local_28[iVar0 /*110*/], &(Local_28[iVar0 /*110*/].f_94), 2, 0, 0, 0, -1082130432, 0, -1, -1, 1);
				}
			}
			if (!func_172(Local_28[iVar0 /*110*/]))
			{
				if (Local_28[iVar0 /*110*/].f_103 == -1)
				{
					Local_28[iVar0 /*110*/].f_103 = unk_0x5AFB8ED811F05E4D();
				}
				else if ((unk_0x5AFB8ED811F05E4D() - Local_28[iVar0 /*110*/].f_103) >= 5000)
				{
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_579.f_0)
	{
		if (unk_0x31F12808DC47A9E5(Local_579[iVar0 /*8*/]) && Local_579[iVar0 /*8*/].f_7)
		{
			if (!func_172(Local_579[iVar0 /*8*/]))
			{
				if (unk_0xE769D9B5158D0F11(Local_579[iVar0 /*8*/].f_1))
				{
					unk_0x40D517D991458154(&(Local_579[iVar0 /*8*/].f_1));
				}
				unk_0x4F5FF3F3FDCAB15D(&(Local_579[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
}

int func_179(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x0A91D180DDC7A1B8();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x0FAE113CE72ED842(iParam0))
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
		unk_0xEFF69FBCAAB71548(iParam0, iParam4);
		unk_0x456885E378D232E4(iParam0, iParam5);
		*uParam1 = unk_0xB77DA7A8004F1B63(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0xE769D9B5158D0F11(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0x71925FF3194E84CE(*uParam1, iParam8);
				}
				if (!unk_0xFAFFA408239A026B(iParam7))
				{
					unk_0x262BA3D6F3CF3F59("STRING");
					if (bParam10)
					{
						unk_0xB4179F7E88F4C4BF(iParam7);
					}
					else
					{
						unk_0xBEFD1ED9B6BE5127(iParam7);
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
					if (!unk_0xFAFFA408239A026B(iParam7))
					{
						unk_0x262BA3D6F3CF3F59("STRING");
						if (bParam10)
						{
							unk_0xB4179F7E88F4C4BF(iParam7);
						}
						else
						{
							unk_0xBEFD1ED9B6BE5127(iParam7);
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

void func_180()
{
	struct<3> Var0;
	var uVar3;
	
	if (bLocal_654 == 1)
	{
		if (!unk_0xEC0ECEF2AF3FDA8D())
		{
			if (!unk_0xBC13F084F3B1B544())
			{
				unk_0xFF91FEC6E57575E4(1000);
			}
		}
		else
		{
			if (unk_0x61F9977B378C43BF())
			{
				unk_0xFF0F9807F8F0062F(0);
				unk_0x183705334A83083E();
			}
			func_24(iLocal_655);
			unk_0xF5F744EF9F4DB21E(0, 0, 3000, 1, 0, 0);
			unk_0x08FC50794202A47C();
			unk_0xEFF1F12403847394(1);
			func_8(1);
			if (!func_228())
			{
				func_227(iLocal_651, &Var0, &uVar3);
				unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), Var0, 1, 0, 0, 1);
				unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), uVar3);
				unk_0x73D7E57BF0ED7FEB(unk_0x18F7BE9ACB7D08F4(), 1);
				func_225(&uLocal_658, Var0, 50f, 0);
			}
			func_224(&uLocal_658);
			switch (iLocal_651)
			{
				case 0:
					func_164(&uLocal_658, joaat("burrito2"));
					func_164(&uLocal_658, joaat("s_m_y_pestcont_01"));
					func_164(&uLocal_658, joaat("s_m_m_security_01"));
					func_164(&uLocal_658, joaat("dilettante2"));
					func_164(&uLocal_658, joaat("p_amb_clipboard_01"));
					func_223(&uLocal_658, &cLocal_645);
					func_222(&uLocal_658, "misslsdhsclipboard@base");
					func_222(&uLocal_658, "misslsdhsclipboard@idle_a");
					func_222(&uLocal_658, "misstrevor3");
					func_221(&uLocal_658, iLocal_2527);
					if (((func_220() && !unk_0x9605D2F02FA93911(func_219())) && !unk_0xD8BB60C76D29E4BB(func_219())) && !unk_0xB6353CAE3EBC0919(func_219()))
					{
						func_164(&uLocal_658, func_219());
					}
					break;
				
				case 1:
					func_164(&uLocal_658, joaat("burrito2"));
					break;
			}
			while (!func_218(&uLocal_658))
			{
				unk_0x4EDE34FBADD967A6(0);
				func_178();
			}
			switch (iLocal_651)
			{
				case 0:
					if (((func_220() && !unk_0x9605D2F02FA93911(func_219())) && !unk_0xD8BB60C76D29E4BB(func_219())) && !unk_0xB6353CAE3EBC0919(func_219()))
					{
						while (!func_217())
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						Local_579[4 /*8*/] = func_187(189.3979f, -2932.721f, 5.6127f, 180.5455f);
					}
					if (func_228())
					{
						if (unk_0x31F12808DC47A9E5(Local_579[4 /*8*/]))
						{
							func_184(Local_579[4 /*8*/], -1, 1);
						}
						else
						{
							func_184(0, -1, 1);
						}
					}
					else
					{
						unk_0x73D7E57BF0ED7FEB(unk_0x18F7BE9ACB7D08F4(), 0);
						if (unk_0x31F12808DC47A9E5(Local_579[4 /*8*/]))
						{
							unk_0x8D77EFA08616AD64(unk_0x18F7BE9ACB7D08F4(), Local_579[4 /*8*/], -1);
						}
					}
					while (!func_181(0))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					unk_0xA3F41A1968319181(0f);
					unk_0x4CCECEB2EA5D6A82(0f, 1065353216);
					break;
				
				case 1:
					if (!func_7(88))
					{
						Local_579[0 /*8*/] = unk_0x3064CCF56C6C32BC(joaat("burrito2"), 693.725f, -1006.302f, 21.8355f, 359.884f, 1, 1, 0);
						unk_0x98AB858AD44F622D(Local_579[0 /*8*/], 0);
						unk_0x9B53B2691E2B1F79(Local_579[0 /*8*/], 1084227584);
					}
					if (func_228())
					{
						func_184(0, -1, 1);
					}
					else
					{
						unk_0x73D7E57BF0ED7FEB(unk_0x18F7BE9ACB7D08F4(), 0);
					}
					unk_0x990FFD4FB6ADD630(unk_0x18F7BE9ACB7D08F4(), 692.067f, -1004.812f, 21.9059f, 1, 0, 0, 1);
					unk_0xB88121FF8A34A66F(unk_0x18F7BE9ACB7D08F4(), 359.5735f);
					unk_0xA3F41A1968319181(0f);
					unk_0x4CCECEB2EA5D6A82(0f, 1065353216);
					break;
			}
			if (unk_0xEC0ECEF2AF3FDA8D() || !unk_0x610450B2545892B5())
			{
				if (!func_7(88) || iLocal_651 != 1)
				{
					unk_0x8359CF51370FC969(800);
				}
			}
			bLocal_654 = false;
		}
	}
}

int func_181(bool bParam0)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = false;
	iVar1 = 1;
	if (bParam0)
	{
		if (unk_0x31F12808DC47A9E5(Global_89471[0]))
		{
			Local_579[0 /*8*/] = Global_89471[0];
			unk_0x337F2213526139E0(Local_579[0 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x31F12808DC47A9E5(Global_89471[1]))
		{
			Local_579[1 /*8*/] = Global_89471[1];
			unk_0x337F2213526139E0(Local_579[1 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x31F12808DC47A9E5(Global_89471[2]))
		{
			Local_579[2 /*8*/] = Global_89471[2];
			unk_0x337F2213526139E0(Local_579[2 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x31F12808DC47A9E5(Global_89471.f_9[0]))
		{
			Local_28[1 /*110*/] = Global_89471.f_9[0];
			if (!unk_0x0FAE113CE72ED842(Local_28[1 /*110*/]))
			{
				unk_0x503DF1366BC3493D(Local_28[1 /*110*/], 0, 1);
			}
			unk_0x337F2213526139E0(Local_28[1 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x31F12808DC47A9E5(Global_89471.f_28[0]))
		{
			Local_28[1 /*110*/].f_105 = Global_89471.f_28[0];
			unk_0x337F2213526139E0(Local_28[1 /*110*/].f_105, 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x31F12808DC47A9E5(Global_89471.f_9[2]))
		{
			Local_28[0 /*110*/] = Global_89471.f_9[2];
			if (!unk_0x0FAE113CE72ED842(Local_28[0 /*110*/]))
			{
				unk_0x503DF1366BC3493D(Local_28[0 /*110*/], 0, 1);
			}
			unk_0x337F2213526139E0(Local_28[0 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x31F12808DC47A9E5(Global_89471.f_9[3]))
		{
			Local_28[2 /*110*/] = Global_89471.f_9[3];
			if (!unk_0x0FAE113CE72ED842(Local_28[3 /*110*/]))
			{
				unk_0x503DF1366BC3493D(Local_28[2 /*110*/], 0, 1);
			}
			unk_0x337F2213526139E0(Local_28[2 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x31F12808DC47A9E5(Global_89471.f_9[4]))
		{
			Local_28[3 /*110*/] = Global_89471.f_9[4];
			if (!unk_0x0FAE113CE72ED842(Local_28[3 /*110*/]))
			{
				unk_0x503DF1366BC3493D(Local_28[3 /*110*/], 0, 1);
			}
			unk_0x337F2213526139E0(Local_28[3 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x31F12808DC47A9E5(Global_89471.f_9[5]))
		{
			Local_469.f_0 = Global_89471.f_9[5];
			if (!unk_0x0FAE113CE72ED842(Local_469.f_0))
			{
				unk_0x503DF1366BC3493D(Local_469.f_0, 0, 1);
			}
			unk_0x337F2213526139E0(Local_469.f_0, 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x31F12808DC47A9E5(Global_89471[3]))
		{
			Local_579[3 /*8*/] = Global_89471[3];
			unk_0x337F2213526139E0(Local_579[3 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		if (!unk_0x31F12808DC47A9E5(Local_579[0 /*8*/]))
		{
			Local_579[0 /*8*/] = unk_0x3064CCF56C6C32BC(joaat("burrito2"), 148.7243f, -3104.619f, 4.8962f, 179.6158f, 1, 1, 0);
		}
		if (!unk_0x31F12808DC47A9E5(Local_579[1 /*8*/]))
		{
			Local_579[1 /*8*/] = unk_0x3064CCF56C6C32BC(joaat("burrito2"), 145.9856f, -3080f, 4.8962f, 269.0827f, 1, 1, 0);
		}
		if (!unk_0x31F12808DC47A9E5(Local_579[2 /*8*/]))
		{
			Local_579[2 /*8*/] = unk_0x3064CCF56C6C32BC(joaat("burrito2"), 129.9696f, -3089.331f, 4.8796f, 269.9255f, 1, 1, 0);
		}
		if (!unk_0x31F12808DC47A9E5(Local_28[1 /*110*/]))
		{
			Local_28[1 /*110*/] = unk_0x364B87C5C64BD100(26, joaat("s_m_y_pestcont_01"), 126.2174f, -3089.383f, 4.9199f, 275.4068f, 1, 1);
			unk_0x874004759C4BE8DC(Local_28[1 /*110*/], 150);
			unk_0xDEA702F2138E0B35(Local_28[1 /*110*/], 8, 1, 0, 0);
			unk_0xDEA702F2138E0B35(Local_28[1 /*110*/], 0, 0, 2, 0);
			unk_0xDEA702F2138E0B35(Local_28[1 /*110*/], 3, 0, 1, 0);
			unk_0xDEA702F2138E0B35(Local_28[1 /*110*/], 4, 0, 1, 0);
			unk_0xDEA702F2138E0B35(Local_28[1 /*110*/], 8, 0, 0, 0);
			unk_0xDEA702F2138E0B35(Local_28[1 /*110*/], 10, 1, 0, 0);
			unk_0xD8D896F64358DA36(Local_28[1 /*110*/], 0, 1, 0, 0);
			unk_0xD8D896F64358DA36(Local_28[1 /*110*/], 1, 0, 0, 0);
			unk_0xB69BC828BAA463AC(Local_28[1 /*110*/], 2f);
		}
		if (!unk_0x31F12808DC47A9E5(Local_28[1 /*110*/].f_105))
		{
			Local_28[1 /*110*/].f_105 = unk_0x7082ECB3731CD86C(joaat("p_amb_clipboard_01"), unk_0x433176BD83D09D7E(Local_28[1 /*110*/], 60309, 0f, 0f, 0f), 1, 1, 0);
			unk_0x947CE5CCDDBA0651(Local_28[1 /*110*/].f_105, Local_28[1 /*110*/], unk_0xCA57A734FF47CDF5(Local_28[1 /*110*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1);
		}
		if (!unk_0x31F12808DC47A9E5(Local_28[0 /*110*/]))
		{
			Local_28[0 /*110*/] = unk_0x364B87C5C64BD100(26, joaat("s_m_y_pestcont_01"), 155.74f, -3098.89f, 5.93f, 0f, 1, 1);
			unk_0xDEA702F2138E0B35(Local_28[0 /*110*/], 0, 0, 0, 0);
			unk_0xDEA702F2138E0B35(Local_28[0 /*110*/], 3, 0, 0, 0);
			unk_0xDEA702F2138E0B35(Local_28[0 /*110*/], 4, 0, 0, 0);
			unk_0xDEA702F2138E0B35(Local_28[0 /*110*/], 8, 1, 0, 0);
			unk_0xDEA702F2138E0B35(Local_28[0 /*110*/], 10, 0, 0, 0);
			unk_0xD8D896F64358DA36(Local_28[0 /*110*/], 0, 0, 0, 0);
			unk_0xB69BC828BAA463AC(Local_28[0 /*110*/], 2f);
		}
		if (!unk_0x31F12808DC47A9E5(Local_28[2 /*110*/]))
		{
			Local_28[2 /*110*/] = unk_0x364B87C5C64BD100(26, joaat("s_m_y_pestcont_01"), 159.8f, -3085.96f, 6f, 0f, 1, 1);
			unk_0xDEA702F2138E0B35(Local_28[2 /*110*/], 0, 0, 1, 0);
			unk_0xDEA702F2138E0B35(Local_28[2 /*110*/], 3, 0, 2, 0);
			unk_0xDEA702F2138E0B35(Local_28[2 /*110*/], 4, 0, 2, 0);
			unk_0xDEA702F2138E0B35(Local_28[2 /*110*/], 8, 1, 0, 0);
			unk_0xDEA702F2138E0B35(Local_28[2 /*110*/], 10, 1, 0, 0);
			unk_0xD8D896F64358DA36(Local_28[2 /*110*/], 1, 0, 0, 0);
			unk_0xB69BC828BAA463AC(Local_28[2 /*110*/], 2f);
		}
		if (!unk_0x31F12808DC47A9E5(Local_28[3 /*110*/]))
		{
			Local_28[3 /*110*/] = unk_0x364B87C5C64BD100(26, joaat("s_m_y_pestcont_01"), 159.06f, -3085f, 6.01f, 0f, 1, 1);
			unk_0xDEA702F2138E0B35(Local_28[3 /*110*/], 0, 1, 1, 0);
			unk_0xDEA702F2138E0B35(Local_28[3 /*110*/], 3, 0, 3, 0);
			unk_0xDEA702F2138E0B35(Local_28[3 /*110*/], 4, 0, 3, 0);
			unk_0xDEA702F2138E0B35(Local_28[3 /*110*/], 8, 1, 0, 0);
			unk_0xDEA702F2138E0B35(Local_28[3 /*110*/], 10, 0, 0, 0);
			unk_0xD8D896F64358DA36(Local_28[3 /*110*/], 0, 0, 0, 0);
			unk_0xB69BC828BAA463AC(Local_28[3 /*110*/], 2f);
		}
		if (!unk_0x31F12808DC47A9E5(Local_469.f_0) && !unk_0x31F12808DC47A9E5(Local_579[3 /*8*/]))
		{
			if (unk_0xF0B96EE16BA9FBE8() >= 5 && unk_0xF0B96EE16BA9FBE8() < 21)
			{
				Local_579[3 /*8*/] = unk_0x3064CCF56C6C32BC(joaat("dilettante2"), 144.84f, -2982.75f, 5.32f, 266.5972f, 1, 1, 0);
				Local_469.f_0 = unk_0xC52E83A4C0F88DAB(Local_579[3 /*8*/], 26, joaat("s_m_m_security_01"), -1, 1, 1);
			}
			else
			{
				Local_579[3 /*8*/] = unk_0x3064CCF56C6C32BC(joaat("dilettante2"), 169.3554f, -3110.025f, 4.8228f, 88.4411f, 1, 1, 0);
				Local_469.f_0 = unk_0x364B87C5C64BD100(26, joaat("s_m_m_security_01"), 161.7414f, -3117.074f, 4.9643f, 333.7041f, 1, 1);
			}
		}
	}
	if (unk_0x31F12808DC47A9E5(Local_579[0 /*8*/]))
	{
		func_183(Local_579[0 /*8*/], 0);
		unk_0xA2B45B1D3EE42178(Local_579[0 /*8*/], 7);
		unk_0x5B8B17345AD1581B(Local_579[0 /*8*/], 1);
		unk_0xE58E53D56F33BF17(Local_579[0 /*8*/], 1);
		Local_579[0 /*8*/].f_7 = 0;
	}
	if (unk_0x31F12808DC47A9E5(Local_579[1 /*8*/]))
	{
		func_183(Local_579[1 /*8*/], 1);
		unk_0x0F3F86C855582784(Local_579[1 /*8*/], 1, 1, 0);
		unk_0x215DD08C065C3A14(Local_579[1 /*8*/], 4, 0);
		unk_0x9F2024F28D07EE1E(Local_579[1 /*8*/], 0, 1, 0);
		unk_0x9F2024F28D07EE1E(Local_579[1 /*8*/], 4, 0, 1);
		unk_0xE58E53D56F33BF17(Local_579[1 /*8*/], 1);
		Local_579[1 /*8*/].f_7 = 0;
	}
	if (unk_0x31F12808DC47A9E5(Local_579[2 /*8*/]))
	{
		func_183(Local_579[2 /*8*/], 2);
		unk_0x9F2024F28D07EE1E(Local_579[2 /*8*/], 2, 1, 0);
		unk_0x9F2024F28D07EE1E(Local_579[2 /*8*/], 3, 1, 0);
		unk_0xE58E53D56F33BF17(Local_579[2 /*8*/], 1);
		Local_579[2 /*8*/].f_7 = 0;
	}
	if (unk_0x31F12808DC47A9E5(Local_28[1 /*110*/]))
	{
		unk_0x97236214E312A8E7(Local_28[1 /*110*/], &(Local_28[1 /*110*/].f_1));
		unk_0x40E2910BAF39B1C7(Local_28[1 /*110*/], 1);
		unk_0x641E77554763EF06(Local_28[1 /*110*/], iLocal_2525);
		unk_0x08971142B244BD72(Local_28[1 /*110*/], 1);
		func_171(Local_28[1 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0x7D40DD402BF99FB7(Local_28[1 /*110*/], 50f);
		StringCopy(&(Local_28[1 /*110*/].f_1), "foreman2(rear)", 16);
		Local_28[1 /*110*/].f_42 = 20f;
		Local_28[1 /*110*/].f_86 = 1;
		Local_28[1 /*110*/].f_87 = 1;
		Local_28[1 /*110*/].f_107 = joaat("p_amb_clipboard_01");
		Local_28[1 /*110*/].f_106 = 60309;
		Local_28[1 /*110*/].f_108 = 0;
	}
	if (unk_0x31F12808DC47A9E5(Local_28[0 /*110*/]))
	{
		unk_0x97236214E312A8E7(Local_28[0 /*110*/], &(Local_28[0 /*110*/].f_1));
		unk_0x40E2910BAF39B1C7(Local_28[0 /*110*/], 1);
		unk_0x641E77554763EF06(Local_28[0 /*110*/], iLocal_2525);
		unk_0x08971142B244BD72(Local_28[0 /*110*/], 1);
		func_171(Local_28[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		unk_0x7D40DD402BF99FB7(Local_28[0 /*110*/], 50f);
		StringCopy(&(Local_28[0 /*110*/].f_1), "foreman1(front)", 16);
		Local_28[0 /*110*/].f_86 = 1;
		Local_28[0 /*110*/].f_87 = 1;
		Local_28[0 /*110*/].f_42 = 17.5f;
	}
	if (unk_0x31F12808DC47A9E5(Local_28[2 /*110*/]))
	{
		unk_0x97236214E312A8E7(Local_28[2 /*110*/], &(Local_28[2 /*110*/].f_1));
		unk_0x40E2910BAF39B1C7(Local_28[2 /*110*/], 1);
		unk_0x641E77554763EF06(Local_28[2 /*110*/], iLocal_2525);
		func_171(Local_28[2 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0x08971142B244BD72(Local_28[2 /*110*/], 1);
		unk_0x7D40DD402BF99FB7(Local_28[2 /*110*/], 50f);
		StringCopy(&(Local_28[2 /*110*/].f_1), "front 1", 16);
		Local_28[2 /*110*/].f_86 = 0;
		Local_28[2 /*110*/].f_87 = 0;
		Local_28[2 /*110*/].f_42 = 17.5f;
	}
	if (unk_0x31F12808DC47A9E5(Local_28[3 /*110*/]))
	{
		unk_0x97236214E312A8E7(Local_28[3 /*110*/], &(Local_28[3 /*110*/].f_1));
		unk_0x40E2910BAF39B1C7(Local_28[3 /*110*/], 1);
		unk_0x641E77554763EF06(Local_28[3 /*110*/], iLocal_2525);
		unk_0x7D40DD402BF99FB7(Local_28[3 /*110*/], 50f);
		func_171(Local_28[3 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0x08971142B244BD72(Local_28[3 /*110*/], 1);
		StringCopy(&(Local_28[3 /*110*/].f_1), "front 2", 16);
		Local_28[3 /*110*/].f_86 = 0;
		Local_28[3 /*110*/].f_87 = 0;
		Local_28[3 /*110*/].f_42 = 17.5f;
	}
	if (unk_0x31F12808DC47A9E5(Local_469.f_0) && unk_0x31F12808DC47A9E5(Local_579[3 /*8*/]))
	{
		unk_0x97236214E312A8E7(Local_469.f_0, &(Local_469.f_1));
		unk_0x40E2910BAF39B1C7(Local_469.f_0, 1);
		unk_0x641E77554763EF06(Local_469.f_0, iLocal_2525);
		unk_0x1070F6BBC5E06444(Local_469.f_0, 2);
		unk_0x273FE09AE985A00A(Local_469.f_0, 2, 0);
		unk_0x7D154B840BD03D00(Local_469.f_0, joaat("weapon_nightstick"), -1, 0, 1);
		unk_0x9D02030EF7A1C310(Local_469.f_0, 5);
		func_171(Local_469.f_0, 40f, 5f, 90f, -90f, 90f);
		StringCopy(&(Local_469.f_1), "sec", 16);
		Local_469.f_86 = 1;
		Local_469.f_87 = 1;
		Local_469.f_93 = 0;
		if (Global_89471.f_357 == 1)
		{
			if (!func_182(Local_469.f_0, 242628503, 1))
			{
				if (unk_0x4D2B08AB1D3C85C5(203.68f, -3132.46f, 4.79f, "WORLD_HUMAN_SMOKING", 1f, 1))
				{
					iLocal_2577 = 0;
					unk_0xC8BEB049F3BFC0AB(&uVar2);
					unk_0xAF7956D9C892AC2E(0, Local_579[3 /*8*/], &cLocal_645, 786599, 0, 0, -1, -1082130432, 0, 1073741824);
					unk_0xD7A975DB04C06BA4(0, Local_579[3 /*8*/], 0);
					unk_0x71F977266792711C(0, 203.68f, -3132.46f, 4.79f, 1f, 0);
					unk_0xAFDA7B8F83B2CA58(uVar2);
					unk_0x73F69DD57B7E92A9(Local_469.f_0, uVar2);
					unk_0x56C7B20E11B37066(&uVar2);
				}
				else
				{
					iVar1 = 0;
				}
			}
		}
		else if (!func_182(Local_469.f_0, -1680762137, 1))
		{
			if (unk_0x4D2B08AB1D3C85C5(162.69f, -3115.67f, 4.95f, "WORLD_HUMAN_SECURITY_SHINE_TORCH", 1f, 1))
			{
				iLocal_2577 = 1;
				unk_0x951F36433F06E246(Local_469.f_0, 162.69f, -3115.67f, 4.95f, 1f, 0);
			}
			else
			{
				iVar1 = 0;
			}
		}
	}
	if (((((((((unk_0x31F12808DC47A9E5(Local_579[0 /*8*/]) && unk_0x31F12808DC47A9E5(Local_579[1 /*8*/])) && unk_0x31F12808DC47A9E5(Local_579[2 /*8*/])) && unk_0x31F12808DC47A9E5(Local_579[3 /*8*/])) && unk_0x31F12808DC47A9E5(Local_28[1 /*110*/])) && unk_0x31F12808DC47A9E5(Local_28[0 /*110*/])) && unk_0x31F12808DC47A9E5(Local_28[2 /*110*/])) && unk_0x31F12808DC47A9E5(Local_28[3 /*110*/])) && unk_0x31F12808DC47A9E5(Local_469.f_0)) && iVar1)
	{
		return 1;
	}
	else if (bVar0)
	{
		return 0;
	}
	return 0;
}

int func_182(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x2BBAA45ECDE3DAE2(uParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

void func_183(var uParam0, int iParam1)
{
	Global_92829.f_22[iParam1] = uParam0;
}

void func_184(int iParam0, int iParam1, int iParam2)
{
	if (func_186() && func_228())
	{
		while (Global_92824 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0xDF94C6DB72E69D64(0);
		if (unk_0x31F12808DC47A9E5(unk_0x18F7BE9ACB7D08F4()))
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				unk_0x052A14525D6B2CEB(unk_0x18F7BE9ACB7D08F4());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0x31F12808DC47A9E5(iParam0))
				{
					if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
					{
						if (!unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), iParam0, 0))
						{
							unk_0x8D77EFA08616AD64(unk_0x18F7BE9ACB7D08F4(), iParam0, iParam1);
							unk_0x4CCECEB2EA5D6A82(0f, 1065353216);
							unk_0xA3F41A1968319181(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
			{
				unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 1, 0);
			}
		}
		unk_0x67795DDFE2BBA4DC();
		func_185(0);
	}
}

void func_185(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xD2A9C3F486236CC5(&(Global_92829.f_20), 13);
	}
	else
	{
		unk_0x62148293B793073B(&(Global_92829.f_20), 13);
	}
}

int func_186()
{
	if (Global_92829 == 10 || Global_92829 == 9)
	{
		return 1;
	}
	return 0;
}

int func_187(struct<3> Param0, float fParam3)
{
	return func_188(&(Global_98114.f_2875), Param0, fParam3, 0);
}

int func_188(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_216(uParam0))
	{
		if (func_149(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0xBD0ECFC2907D1982(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_215(uParam0))
		{
			unk_0x7EE425AE3317BA69(Param1, 5f, 1, 0, 0, 0);
			func_214(Param1, 5f, 0);
			iVar0 = unk_0x3064CCF56C6C32BC(uParam0->f_12.f_66, Param1, fParam4, 1, 1, 0);
			if (unk_0x31F12808DC47A9E5(iVar0))
			{
				Var1 = { unk_0x761660F5CE986DC4(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x3FF1EE7D5FD7094C(iVar0, Param1, 0, 0, 1);
				}
				func_197(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0x9605D2F02FA93911(uParam0->f_12.f_66) || unk_0x9178C1B23106F7AA(uParam0->f_12.f_66))
				{
					if (!unk_0xA0440E89AEA9CA58(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0x9B53B2691E2B1F79(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0x881022B41FD53CD6(unk_0x4F69FBD64CDF125B(iVar0)))
						{
							func_196(uParam0->f_11, 1);
						}
						else if (unk_0x422717A3330EA45D(unk_0x4F69FBD64CDF125B(iVar0)))
						{
							func_196(uParam0->f_11, 2);
						}
					}
					unk_0x20DA875A55437C52(iVar0, 0);
					unk_0x363C972963D518BE(iVar0, 0);
					unk_0xE58E53D56F33BF17(iVar0, 1);
					func_195(iVar0, uParam0->f_11);
				}
				else if ((!func_193(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x9D39145AD645E383(unk_0xFCA64981FEF7C913(), "startup_positioning"))
				{
					iVar8 = func_192(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_189(iVar8);
					}
				}
				if (((Global_92829 != 13 && Global_92829 != 10) && Global_92829 != 11) && Global_92829 != 12)
				{
					if (unk_0x6E987D62C8535B6E(&(Global_92829.f_3)) == Global_70662)
					{
						if (uParam0->f_12.f_66 == Global_104551.f_32429.f_69[21 /*78*/].f_66)
						{
							func_143(24, 0);
							func_189(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_109(iVar0, uParam0->f_11);
				}
				unk_0x419C9117019F2E5A(uParam0->f_12.f_66);
				Var1 = { unk_0x761660F5CE986DC4(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_189(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_138(&(Global_69674.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x31F12808DC47A9E5(Global_69674.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x0FAE113CE72ED842(unk_0x18F7BE9ACB7D08F4()))
			{
				if (unk_0xC4B84EB67F78C1F0(Global_69674.f_139[iParam0], 0))
				{
					if (unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), Global_69674.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x337F2213526139E0(Global_69674.f_139[iParam0], 1, 1);
				unk_0xBECECD970F645217(&(Global_69674.f_139[iParam0]));
			}
		}
		Global_69674[iParam0] = 1;
		if (unk_0xB03A1684359C50A1(Global_69674.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_145(iParam0, 0)) && Global_70583.f_66 == 0) && Global_104551.f_32429.f_1958[Global_69674.f_555[0 /*21*/].f_14] != 0) && Global_104551.f_32429.f_1958[Global_69674.f_555[0 /*21*/].f_14] > 3) && (!func_190(0, Global_69674.f_555[0 /*21*/].f_12) || !func_190(1, Global_69674.f_555[0 /*21*/].f_12)))
			{
				func_146(&(Global_104551.f_32429.f_69[Global_69674.f_555[0 /*21*/].f_14 /*78*/]), &Global_70583);
				Global_70661 = Global_104551.f_32429.f_5591;
			}
			func_143(iParam0, 0);
		}
	}
}

int func_190(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_191(&(Global_104551.f_32429.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_112(Global_104551.f_32429.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_191(var uParam0)
{
	return *uParam0;
}

int func_192(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0x31F12808DC47A9E5(Global_69674.f_484[iVar0]) && !unk_0x74C2FE037DFC8B4A(Global_69674.f_484[iVar0], 0)) && unk_0xC4B84EB67F78C1F0(Global_69674.f_484[iVar0], 0))
		{
			unk_0xC2CED850D0B7AE40(iParam0, &iVar1, &iVar2);
			unk_0xC2CED850D0B7AE40(Global_69674.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x4F69FBD64CDF125B(iParam0) == unk_0x4F69FBD64CDF125B(Global_69674.f_484[iVar0]) && unk_0x178913209B5C278C(iParam0) == unk_0x178913209B5C278C(Global_69674.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_193(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x4F69FBD64CDF125B(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_194(iParam0, Global_69674.f_139[38], 0))
			{
				func_189(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_194(iParam0, Global_69674.f_139[43], 1))
			{
				func_189(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0xC4E133D43C01E0DF(unk_0x18F7BE9ACB7D08F4(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_194(iParam0, uVar1[iVar6], 1) && func_60(unk_0x761660F5CE986DC4(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_149(Param1, 0f, 0f, 0f, 0)) || unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(iParam0, 1), unk_0x761660F5CE986DC4(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0xBECECD970F645217(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar6++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0x31F12808DC47A9E5(Global_69674.f_484[14]) && unk_0xC4B84EB67F78C1F0(iParam0, 0)) && unk_0xC4B84EB67F78C1F0(Global_69674.f_484[14], 0))
			{
				if (unk_0x4F69FBD64CDF125B(Global_69674.f_484[14]) == joaat("luxor2") && unk_0x178913209B5C278C(iParam0) == unk_0x178913209B5C278C(Global_69674.f_484[14]))
				{
					func_189(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0x31F12808DC47A9E5(Global_69674.f_484[20]) && unk_0xC4B84EB67F78C1F0(iParam0, 0)) && unk_0xC4B84EB67F78C1F0(Global_69674.f_484[20], 0))
			{
				if (unk_0x4F69FBD64CDF125B(Global_69674.f_484[20]) == joaat("swift2") && unk_0x178913209B5C278C(iParam0) == unk_0x178913209B5C278C(Global_69674.f_484[20]))
				{
					func_189(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_194(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x31F12808DC47A9E5(iParam1) && !unk_0x74C2FE037DFC8B4A(iParam1, 0)) && unk_0xC4B84EB67F78C1F0(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0xC2CED850D0B7AE40(iParam0, &iVar0, &iVar1);
			unk_0xC2CED850D0B7AE40(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
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

void func_195(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0x31F12808DC47A9E5(Global_90305[iVar0]))
		{
			Global_90305[iVar0] = iParam0;
			Global_90315[iVar0] = iParam1;
			Global_90325[iVar0] = unk_0x4F69FBD64CDF125B(iParam0);
			if (unk_0x881022B41FD53CD6(Global_90325[iVar0]))
			{
				Global_90353[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_90353[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_196(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x31F12808DC47A9E5(Global_90305[iVar0]))
		{
			if (iParam0 == 145 || Global_90315[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x4F69FBD64CDF125B(Global_90305[iVar0]) == func_139(iParam0, iParam1))
				{
					if (!unk_0x88B79D32B518C327(unk_0x18F7BE9ACB7D08F4(), Global_90305[iVar0], 0))
					{
						unk_0x337F2213526139E0(Global_90305[iVar0], 0, 1);
						unk_0xBECECD970F645217(&(Global_90305[iVar0]));
						Global_90315[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_197(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		if (!func_206(iParam0))
		{
			if (unk_0x6E987D62C8535B6E(&(uParam1->f_1)) != 0)
			{
				unk_0x1C4B08C81FA52071(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0x1F5FE6436A0EC41B())
			{
				unk_0x98347A9DB184A9E3(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0xB03A1684359C50A1(uParam1->f_77, func_151(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xD2A9C3F486236CC5(&(uParam1->f_77), func_151(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xB03A1684359C50A1(uParam1->f_77, func_151(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xD2A9C3F486236CC5(&(uParam1->f_77), func_151(iVar1 + 1));
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0xF423B67DFD20BCA9(iParam0, 0);
			if (unk_0x2FA7EA3CA1AD2BF9(iParam0, 5) != -1)
			{
				unk_0xF423B67DFD20BCA9(iParam0, 1);
			}
		}
		if (unk_0xB03A1684359C50A1(uParam1->f_77, 13))
		{
			unk_0x0A0A6CC3A8BAD4E2(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x922D3A1033F467B3(iParam0);
		}
		if (unk_0xB03A1684359C50A1(uParam1->f_77, 12))
		{
			unk_0xE185F21936CEEAE1(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xBC56E64DD6367C93(iParam0);
		}
		unk_0x62270578972B4C56(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xD7C3FB938E520431(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xB03A1684359C50A1(uParam1->f_77, 15) || func_205(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_204())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0xB5F6C7EFD3748488(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0x9F91D8B05EF0ED7C(iParam0, 0);
		}
		else
		{
			unk_0x9F91D8B05EF0ED7C(iParam0, 0);
			unk_0x9F91D8B05EF0ED7C(iParam0, uParam1->f_65);
		}
		unk_0x5D41CFDE94DA9F49(iParam0, !unk_0xB03A1684359C50A1(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0xA2B45B1D3EE42178(iParam0, uParam1->f_70);
		}
		unk_0xC7E45A561A9E1BA4(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x3184374ACA6B725F(iParam0, 2, unk_0xB03A1684359C50A1(uParam1->f_77, 28));
		unk_0x3184374ACA6B725F(iParam0, 3, unk_0xB03A1684359C50A1(uParam1->f_77, 29));
		unk_0x3184374ACA6B725F(iParam0, 0, unk_0xB03A1684359C50A1(uParam1->f_77, 30));
		unk_0x3184374ACA6B725F(iParam0, 1, unk_0xB03A1684359C50A1(uParam1->f_77, 31));
		unk_0x0BF4E270537B1A96(iParam0, unk_0xB03A1684359C50A1(uParam1->f_77, 10));
		if (unk_0x299CF4427BA55484(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xCB8AD4899214D0E6(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x93CA7A248A4D402A(unk_0x4F69FBD64CDF125B(iParam0)))
			{
				if (unk_0x422717A3330EA45D(unk_0x4F69FBD64CDF125B(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_203(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_203(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x7C094ED2B27D253F(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0xEBF8B8510CD7F80B(iParam0, 1);
			}
			else
			{
				unk_0x7EC79A4EBA8F7EF4(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_198(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xB6353CAE3EBC0919(uParam1->f_66) && !unk_0x9605D2F02FA93911(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xB03A1684359C50A1(uParam1->f_77, func_151(iVar2 + 1)))
				{
					if (!unk_0x6276BF0E9518E43A(iParam0, iVar2 + 1))
					{
						unk_0xDE2241F5D2C60ED8(iParam0, iVar2 + 1, 0);
					}
				}
				else if (unk_0x6276BF0E9518E43A(iParam0, iVar2 + 1))
				{
					unk_0xDE2241F5D2C60ED8(iParam0, iVar2 + 1, 1);
				}
				iVar2++;
			}
		}
		if ((unk_0x4F69FBD64CDF125B(iParam0) == joaat("sheava") || unk_0x4F69FBD64CDF125B(iParam0) == joaat("omnis")) || unk_0x4F69FBD64CDF125B(iParam0) == joaat("le7b"))
		{
			if (unk_0x2FA7EA3CA1AD2BF9(iParam0, 0) == -1)
			{
				unk_0xDE2241F5D2C60ED8(iParam0, 1, 0);
			}
		}
		if (((unk_0xD8BB60C76D29E4BB(uParam1->f_66) && unk_0x3619CAA2EDF23557(iParam0)) && !unk_0x0665EB554F07889E(iParam0, joaat("avenger"))) && !((Global_1646129.f_49002 == 6 || Global_1646129.f_49002 == 7) && unk_0xB03A1684359C50A1(Global_1646129.f_26, 8)))
		{
			if (!unk_0xB03A1684359C50A1(uParam1->f_77, 23))
			{
				if (unk_0xB03A1684359C50A1(uParam1->f_77, 22))
				{
					unk_0x6E397FC4BBDF1484(iParam0, 2);
				}
				else
				{
					unk_0x6E397FC4BBDF1484(iParam0, 3);
				}
			}
			else
			{
				unk_0x6E397FC4BBDF1484(iParam0, 4);
			}
		}
		if (unk_0xB03A1684359C50A1(uParam1->f_77, 27))
		{
			unk_0x9B3EE748523D62C3(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x9B3EE748523D62C3(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_198(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC4B84EB67F78C1F0(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x8A27C3C945C9E921(*iParam0) == 0)
	{
		return 0;
	}
	unk_0xD8A3CA4A1B092413(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0x4D9CCED3A1C96367(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x2FA7EA3CA1AD2BF9(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x814DFE1772D11095(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x6819ABF1BBD7D728(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x6819ABF1BBD7D728(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x6819ABF1BBD7D728(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_202(unk_0x4F69FBD64CDF125B(*iParam0), 1) && unk_0x2FA7EA3CA1AD2BF9(*iParam0, 24) != func_201(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x6819ABF1BBD7D728(*iParam0, 24, func_201(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_200(iParam0);
	if (func_199(*iParam0))
	{
		unk_0xF321DFA4C895508B(*iParam0, 1);
		unk_0xE58E53D56F33BF17(*iParam0, 1);
	}
	return 1;
}

int func_199(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x31F12808DC47A9E5(iParam0) && unk_0xC4B84EB67F78C1F0(iParam0, 0)) && unk_0x8A27C3C945C9E921(iParam0) > 0)
	{
		unk_0xD8A3CA4A1B092413(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x2FA7EA3CA1AD2BF9(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0xEC0D634C701696DE(iParam0, iVar1, unk_0x2FA7EA3CA1AD2BF9(iParam0, iVar1)), 16);
				iVar2 = unk_0x6E987D62C8535B6E(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x6E987D62C8535B6E("MNU_CAGE") || iVar2 == unk_0x6E987D62C8535B6E("SABRE_CAG"))
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

void func_200(var uParam0)
{
	switch (unk_0x4F69FBD64CDF125B(*uParam0))
	{
		case joaat("starling"):
			if (unk_0x2FA7EA3CA1AD2BF9(*uParam0, 4) == 0)
			{
				unk_0x6819ABF1BBD7D728(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0x814DFE1772D11095(*uParam0, 13);
			}
			break;
	}
}

int func_201(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0x31F12808DC47A9E5(iParam0) && unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		switch (unk_0x4F69FBD64CDF125B(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
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
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0xEBA4C479CD632515(iParam0, 38);
		iVar1 = unk_0xEBA4C479CD632515(iParam0, 24);
		fVar2 = (unk_0xBBDA792448DB5A89(iParam1 + 1) / unk_0xBBDA792448DB5A89(iVar0));
		iVar3 = (unk_0xF34EE736CF047844((unk_0xBBDA792448DB5A89(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_202(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_13364)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_13365)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_13363)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_13366)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_13368)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_13367)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_17809)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_17811)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_17815)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_17812)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_17819)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_17817)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_17822)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_19694)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_19695)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
	}
	return 0;
}

void func_203(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x8A27C3C945C9E921(iParam0) > 0)
	{
		unk_0xD8A3CA4A1B092413(iParam0, 0);
		iVar0 = unk_0x2FA7EA3CA1AD2BF9(iParam0, 24);
		iVar1 = unk_0x8730A3E327DA8627(iParam0, 24);
		unk_0xE047CE9047B91786(iParam0, uParam1);
		if (unk_0x4F69FBD64CDF125B(iParam0) == joaat("tornado6"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x814DFE1772D11095(iParam0, 24);
		}
		else
		{
			unk_0x6819ABF1BBD7D728(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_204()
{
	return unk_0x5E02CD27DBE77D67(joaat("mpindependence"));
}

int func_205(int iParam0)
{
	var uVar0;
	
	if (unk_0x31F12808DC47A9E5(iParam0))
	{
		if (unk_0xC4B84EB67F78C1F0(iParam0, 0))
		{
			if (unk_0x23E808B211571A22("MPBitset", 3))
			{
				if (unk_0x788C6B35BB3FCF53(iParam0, "MPBitset"))
				{
					uVar0 = unk_0xFE0F5B815FB9D3D1(iParam0, "MPBitset");
				}
				return unk_0xB03A1684359C50A1(uVar0, 4);
			}
		}
	}
	return 0;
}

int func_206(int iParam0)
{
	if (unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 0))
	{
		if (!func_212(unk_0x8CFC7D6E1DA5D304(), -1))
		{
			iParam0 = unk_0x5AD687C3474F04B4(unk_0x18F7BE9ACB7D08F4(), 0);
		}
	}
	if (!unk_0x31F12808DC47A9E5(iParam0))
	{
		return 0;
	}
	if (unk_0x74C2FE037DFC8B4A(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0xC4B84EB67F78C1F0(iParam0, 0))
	{
		return 0;
	}
	if (func_208(unk_0x8CFC7D6E1DA5D304()) == 3)
	{
		if (unk_0x31F12808DC47A9E5(iParam0) && unk_0xC4B84EB67F78C1F0(iParam0, 0))
		{
			if (func_207(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_207(int iParam0)
{
	if (unk_0x23E808B211571A22("FMDeliverableID", 3))
	{
		if (unk_0x788C6B35BB3FCF53(iParam0, "FMDeliverableID"))
		{
			return unk_0xFE0F5B815FB9D3D1(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_208(int iParam0)
{
	if (func_211(iParam0) == 233)
	{
		return func_209(iParam0);
	}
	return -1;
}

int func_209(int iParam0)
{
	if (func_210(iParam0, 0))
	{
		return Global_1627460[iParam0 /*530*/].f_11.f_176;
	}
	return -1;
}

int func_210(int iParam0, int iParam1)
{
	if (Global_1627460[iParam0 /*530*/].f_11.f_33 != -1 || (iParam1 && Global_1627460[iParam0 /*530*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_211(int iParam0)
{
	if (func_210(iParam0, 0))
	{
		return Global_1627460[iParam0 /*530*/].f_11.f_33;
	}
	return -1;
}

int func_212(var uParam0, int iParam1)
{
	var uVar0;
	
	if (func_213(uParam0, 1, 1))
	{
		if (unk_0x657B649BA2AD3582(unk_0x6604E096142B4B55(uParam0), 0))
		{
			uVar0 = unk_0x5AD687C3474F04B4(unk_0x6604E096142B4B55(uParam0), 0);
			if (unk_0xC4B84EB67F78C1F0(uVar0, 0))
			{
				if (unk_0x18F7BE9ACB7D08F4() == unk_0x4983F8C51A0C0AF3(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_213(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		if (unk_0x4AF13BCD120BCDBC(uParam0))
		{
			if (bParam1)
			{
				if (!unk_0x557001354138B7FB(uParam0))
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

void func_214(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_138(&(Global_69674.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x15EE504466B7BBD3(Param0, Global_69674.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_189(iVar0);
			}
		}
		iVar0++;
	}
}

int func_215(var uParam0)
{
	if (func_216(uParam0))
	{
		if (unk_0xEDFE27D1AEA0EA7F(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_216(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_112(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_60(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_217()
{
	return func_215(&(Global_98114.f_2875));
}

int func_218(var uParam0)
{
	if (func_229(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_219()
{
	return Global_98114.f_2875.f_12.f_66;
}

int func_220()
{
	return func_216(&(Global_98114.f_2875));
}

int func_221(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xB79050CDE709F080(iParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_763)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			if (uParam0->f_763[iVar0 /*5*/].f_4 == iParam1)
			{
				uParam0->f_763[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_763[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x31EA01EDFF03ED26(iParam1);
		uParam0->f_763[iVar1 /*5*/] = 1;
		uParam0->f_763[iVar1 /*5*/].f_3 = unk_0x5AFB8ED811F05E4D();
		uParam0->f_763[iVar1 /*5*/].f_4 = iParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

int func_222(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFAFFA408239A026B(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_273)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			if (unk_0x9D39145AD645E383(uParam0->f_273[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_273[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_273[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x831CD0FBFB26EC7E(sParam1);
		uParam0->f_273[iVar1 /*5*/] = 1;
		uParam0->f_273[iVar1 /*5*/].f_3 = unk_0x5AFB8ED811F05E4D();
		uParam0->f_273[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

int func_223(var uParam0, char[4] cParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xFAFFA408239A026B(cParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (unk_0x9D39145AD645E383(uParam0->f_374[iVar0 /*5*/].f_4, cParam1))
			{
				uParam0->f_374[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_374[iVar0 /*5*/].f_1)
				{
					uParam0->f_982 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == -1)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		unk_0x556D5BBBB0AC3BCB(cParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = unk_0x5AFB8ED811F05E4D();
		uParam0->f_374[iVar1 /*5*/].f_4 = cParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

void func_224(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			(uParam0[iVar0 /*5*/])->f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_151[iVar0 /*5*/])
		{
			uParam0->f_151[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_202[iVar0 /*7*/])
		{
			uParam0->f_202[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			uParam0->f_273[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			uParam0->f_374[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (uParam0->f_475[iVar0 /*6*/])
		{
			uParam0->f_475[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_656[iVar0 /*6*/])
		{
			uParam0->f_656[iVar0 /*6*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (uParam0->f_687[iVar0 /*7*/])
		{
			uParam0->f_687[iVar0 /*7*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			uParam0->f_737[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (uParam0->f_763[iVar0 /*5*/])
		{
			uParam0->f_763[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_879[iVar0 /*5*/])
		{
			uParam0->f_879[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_930[iVar0 /*5*/])
		{
			uParam0->f_930[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (uParam0->f_779[iVar0 /*5*/])
		{
			uParam0->f_779[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_868)
	{
		uParam0->f_868.f_2 = 1;
	}
	if (uParam0->f_860)
	{
		uParam0->f_860.f_2 = 1;
	}
	if (uParam0->f_864)
	{
		uParam0->f_864.f_2 = 1;
	}
}

int func_225(var uParam0, struct<3> Param1, float fParam4, int iParam5)
{
	if (func_226(Param1) || fParam4 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_868)
	{
		if (func_149(uParam0->f_868.f_4, Param1, 0) && uParam0->f_868.f_10 == fParam4)
		{
			uParam0->f_868.f_2 = 0;
			if (!uParam0->f_868.f_1)
			{
				uParam0->f_982 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	unk_0x2701380D2C44C561(Param1, fParam4, iParam5);
	uParam0->f_868 = 1;
	uParam0->f_868.f_3 = unk_0x5AFB8ED811F05E4D();
	uParam0->f_868.f_4 = { Param1 };
	uParam0->f_868.f_7 = { 0f, 0f, 0f };
	uParam0->f_868.f_10 = fParam4;
	uParam0->f_982 = 1;
	return 1;
}

int func_226(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_227(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 183.533f, -2946.199f, 5.5113f };
			*uParam2 = 177.8164f;
			break;
		
		case 1:
			*uParam1 = { 692.067f, -1004.812f, 21.9059f };
			*uParam2 = 359.5735f;
			break;
	}
}

bool func_228()
{
	return unk_0xB03A1684359C50A1(Global_92829.f_20, 13);
}

int func_229(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_982)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if ((*uParam0)[iVar1 /*5*/])
			{
				if (!(uParam0[iVar1 /*5*/])->f_1)
				{
					if (unk_0xEDFE27D1AEA0EA7F((uParam0[iVar1 /*5*/])->f_4))
					{
						(uParam0[iVar1 /*5*/])->f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if ((uParam0[iVar1 /*5*/])->f_2)
				{
					if ((uParam0[iVar1 /*5*/])->f_1)
					{
						unk_0x419C9117019F2E5A((uParam0[iVar1 /*5*/])->f_4);
						func_231(uParam0[iVar1 /*5*/]);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_273[iVar1 /*5*/])
			{
				if (!uParam0->f_273[iVar1 /*5*/].f_1)
				{
					if (unk_0x028356968FDD2DF2(uParam0->f_273[iVar1 /*5*/].f_4))
					{
						uParam0->f_273[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_273[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_273[iVar1 /*5*/].f_1)
					{
						unk_0x334F1DD67B2EC86A(uParam0->f_273[iVar1 /*5*/].f_4);
						func_231(&(uParam0->f_273[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 20)
		{
			if (uParam0->f_374[iVar1 /*5*/])
			{
				if (!uParam0->f_374[iVar1 /*5*/].f_1)
				{
					if (unk_0x9BE1DFFE71D3D3DA(uParam0->f_374[iVar1 /*5*/].f_4))
					{
						uParam0->f_374[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_374[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_374[iVar1 /*5*/].f_1)
					{
						unk_0x8E7D27D1F47D1D08(uParam0->f_374[iVar1 /*5*/].f_4);
						func_231(&(uParam0->f_374[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_656[iVar1 /*6*/])
			{
				if (!uParam0->f_656[iVar1 /*6*/].f_1)
				{
					if (unk_0x5C716BBF766E1C70(uParam0->f_656[iVar1 /*6*/].f_5))
					{
						uParam0->f_656[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_656[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_656[iVar1 /*6*/].f_1)
					{
						unk_0xEBE532BFFE618875(&(uParam0->f_656[iVar1 /*6*/].f_5));
						func_231(&(uParam0->f_656[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if (uParam0->f_475[iVar1 /*6*/])
			{
				if (!uParam0->f_475[iVar1 /*6*/].f_1)
				{
					if (unk_0x53500A7D168BF5F6(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4))
					{
						uParam0->f_475[iVar1 /*6*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_475[iVar1 /*6*/].f_2)
				{
					if (uParam0->f_475[iVar1 /*6*/].f_1)
					{
						unk_0xFD32699B58C2E7EF(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4);
						func_231(&(uParam0->f_475[iVar1 /*6*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_202[iVar1 /*7*/])
			{
				if (!uParam0->f_202[iVar1 /*7*/].f_1)
				{
					if (unk_0xA1A1ED32111D2031(uParam0->f_202[iVar1 /*7*/].f_4))
					{
						uParam0->f_202[iVar1 /*7*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_202[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_202[iVar1 /*7*/].f_1)
					{
						unk_0x3D093BE2194682AA(uParam0->f_202[iVar1 /*7*/].f_4);
						func_231(&(uParam0->f_202[iVar1 /*7*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_151[iVar1 /*5*/])
			{
				if (!uParam0->f_151[iVar1 /*5*/].f_1)
				{
					if (unk_0xD5107DC83169ABC1(uParam0->f_151[iVar1 /*5*/].f_4))
					{
						uParam0->f_151[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_151[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_151[iVar1 /*5*/].f_1)
					{
						unk_0xFE9AA0DB96A9D678(uParam0->f_151[iVar1 /*5*/].f_4);
						func_231(&(uParam0->f_151[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_737[iVar1 /*5*/])
			{
				if (!uParam0->f_737[iVar1 /*5*/].f_1)
				{
					if (unk_0xFF22FE9205F44FB6(uParam0->f_737[iVar1 /*5*/].f_4, 0, -1))
					{
						uParam0->f_737[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_737[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_737[iVar1 /*5*/].f_1)
					{
						unk_0x2E46A60AC2DC5A3E(uParam0->f_737[iVar1 /*5*/].f_4);
						func_231(&(uParam0->f_737[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (uParam0->f_763[iVar1 /*5*/])
			{
				if (!uParam0->f_763[iVar1 /*5*/].f_1)
				{
					if (unk_0x44057CDFA5C14B91(uParam0->f_763[iVar1 /*5*/].f_4))
					{
						uParam0->f_763[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_763[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_763[iVar1 /*5*/].f_1)
					{
						unk_0xF8BEB899F39F51F4(uParam0->f_763[iVar1 /*5*/].f_4);
						func_231(&(uParam0->f_763[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 7)
		{
			if (!unk_0xFAFFA408239A026B(uParam0->f_687[iVar1 /*7*/].f_4))
			{
				if (uParam0->f_687[iVar1 /*7*/])
				{
					iVar2 = unk_0x9DDC38E52C23CC6B(uParam0->f_687[iVar1 /*7*/].f_5);
					if (!uParam0->f_687[iVar1 /*7*/].f_1)
					{
						switch (iVar2)
						{
							case 1:
							case 2:
								uParam0->f_687[iVar1 /*7*/].f_1 = 1;
								break;
							
							case 0:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								bVar0 = false;
								break;
							
							case 3:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								func_231(&(uParam0->f_687[iVar1 /*7*/]));
								break;
							
							case -1:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								unk_0xF5D4E500EB98AD0E(uParam0->f_687[iVar1 /*7*/].f_5);
								uParam0->f_687[iVar1 /*7*/] = 0;
								bVar0 = false;
								break;
							}
					}
				}
				else if (unk_0x44057CDFA5C14B91(uParam0->f_687[iVar1 /*7*/].f_6))
				{
					uParam0->f_687[iVar1 /*7*/].f_5 = unk_0xF0FBC2466E9EF12E(uParam0->f_687[iVar1 /*7*/].f_4);
					uParam0->f_687[iVar1 /*7*/].f_3 = unk_0x5AFB8ED811F05E4D();
					uParam0->f_687[iVar1 /*7*/] = 1;
				}
				else
				{
					bVar0 = false;
				}
				if (uParam0->f_687[iVar1 /*7*/].f_2)
				{
					if (uParam0->f_687[iVar1 /*7*/])
					{
						if (uParam0->f_687[iVar1 /*7*/].f_1)
						{
							unk_0xF5D4E500EB98AD0E(uParam0->f_687[iVar1 /*7*/].f_5);
							func_231(&(uParam0->f_687[iVar1 /*7*/]));
							uParam0->f_687[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_231(&(uParam0->f_687[iVar1 /*7*/]));
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_879[iVar1 /*5*/])
			{
				if (!uParam0->f_879[iVar1 /*5*/].f_1)
				{
					if (unk_0xC9CBC0EAA052ACCF(uParam0->f_879[iVar1 /*5*/].f_4))
					{
						uParam0->f_879[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_879[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_879[iVar1 /*5*/].f_1)
					{
						unk_0x9A491759A8395B6A(uParam0->f_879[iVar1 /*5*/].f_4);
						func_231(&(uParam0->f_879[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_930[iVar1 /*5*/])
			{
				if (!uParam0->f_930[iVar1 /*5*/].f_1)
				{
					if (unk_0xBD2C5223D2D5D36E(uParam0->f_930[iVar1 /*5*/].f_4))
					{
						uParam0->f_930[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_930[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_930[iVar1 /*5*/].f_1)
					{
						func_231(&(uParam0->f_930[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_779)
		{
			if (uParam0->f_779[iVar1 /*5*/])
			{
				if (!uParam0->f_779[iVar1 /*5*/].f_1)
				{
					if (unk_0x9F22E45F3CF7EACA(iVar1))
					{
						uParam0->f_779[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_779[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_779[iVar1 /*5*/].f_1)
					{
						unk_0x000ED7BEBF44F5EA(iVar1, 1);
						func_231(&(uParam0->f_779[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (uParam0->f_860)
		{
			if (!uParam0->f_860.f_1)
			{
				if (unk_0x8851E7053F291F92())
				{
					uParam0->f_860.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_860.f_2)
			{
				if (uParam0->f_860.f_1)
				{
					unk_0xDB38C3D40ACF4B3D();
					func_231(&(uParam0->f_860));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_864)
		{
			if (!uParam0->f_864.f_1)
			{
				if (unk_0xE05C6BCEE4F80853())
				{
					uParam0->f_864.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_864.f_2)
			{
				if (uParam0->f_864.f_1)
				{
					unk_0x93AB4450A9644A11();
					func_231(&(uParam0->f_864));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_868 && unk_0x8BDE5BE4E46BA35F())
		{
			if (!uParam0->f_868.f_1)
			{
				if (unk_0x34CC31673AD34B53())
				{
					uParam0->f_868.f_1 = 1;
					if (uParam0->f_983)
					{
						unk_0x73D7E57BF0ED7FEB(unk_0x18F7BE9ACB7D08F4(), 0);
						func_230(uParam0);
						uParam0->f_983 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_868.f_2)
			{
				unk_0xC7BB901E267A910A();
				func_231(&(uParam0->f_868));
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_956[iVar1 /*5*/])
			{
				if (!uParam0->f_956[iVar1 /*5*/].f_1)
				{
					if (unk_0x1865CC0DAB5F6A86(uParam0->f_956[iVar1 /*5*/].f_4))
					{
						uParam0->f_956[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_956[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_956[iVar1 /*5*/].f_1)
					{
						func_231(&(uParam0->f_956[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			uParam0->f_982 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_230(var uParam0)
{
	if (unk_0x8BDE5BE4E46BA35F())
	{
		unk_0xC7BB901E267A910A();
		func_231(&(uParam0->f_868));
	}
}

void func_231(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_232()
{
	if (func_233())
	{
		func_8(1);
		unk_0x810C5D6462DD69E6();
	}
}

int func_233()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_92829 == 7 || Global_92829 == 8)
	{
		return 1;
	}
	return 0;
}

void func_234()
{
	func_252(&(Local_1668[1 /*8*/]), 59850, "AI Controller");
	func_252(&(Local_1668[0 /*8*/]), 58215, "Dialogue");
	func_252(&(Local_1668[3 /*8*/]), 57242, "Alarms & Wanted Level");
	func_252(&(Local_1668[4 /*8*/]), 56690, "Music Manager");
}

void func_235(var uParam0)
{
	if (!func_238(uParam0))
	{
		if (uParam0->f_1 <= 4)
		{
			if ((unk_0x104D0C8EF29C2A4E(&cLocal_626) || unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0)) || func_22(&(Local_1668[3 /*8*/])))
			{
				unk_0x9BEA833CAF67289C("JHP1A_ATTACK");
				func_237(uParam0, 5, 0);
			}
		}
		switch (uParam0->f_1)
		{
			case 1:
				if (func_103(unk_0x18F7BE9ACB7D08F4(), 137.7f, -3092.81f, 4.9f, 1) < 60f)
				{
					unk_0x9BEA833CAF67289C("JHP1A_START");
					func_237(uParam0, 2, 0);
				}
				break;
			
			case 2:
				if (iLocal_2573 == 3 || iLocal_2573 == 2)
				{
					unk_0x9BEA833CAF67289C("JHP1A_WAREHOUSE");
					func_237(uParam0, 3, 0);
				}
				break;
			
			case 3:
				if (iLocal_2573 == 6 || iLocal_2573 == 9)
				{
					unk_0x9BEA833CAF67289C("JHP1A_VAN");
					func_237(uParam0, 4, 0);
				}
				break;
			
			case 4:
				if (!unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0))
				{
					if (iLocal_2573 == 9 && func_103(unk_0x18F7BE9ACB7D08F4(), 137.7f, -3092.81f, 4.9f, 1) >= 500f)
					{
						if (unk_0x6662DABCFF1B4AD5("JHP1A_RADIO_1"))
						{
							unk_0x9BEA833CAF67289C("JHP1A_RADIO_1");
							func_236(uParam0);
						}
					}
				}
				break;
			
			case 5:
				if ((unk_0x104D0C8EF29C2A4E(&cLocal_626) && unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0)) && iLocal_2569)
				{
					func_237(uParam0, 6, 0);
				}
				break;
			
			case 6:
				if (!unk_0xAAC7941A7E0EE97A(unk_0x8CFC7D6E1DA5D304(), 0))
				{
					if (unk_0x6662DABCFF1B4AD5("JHP1A_RADIO_2"))
					{
						unk_0x9BEA833CAF67289C("JHP1A_RADIO_2");
						func_237(uParam0, 6, 0);
						func_236(uParam0);
					}
				}
				break;
			}
	}
	if (func_238(uParam0))
	{
		unk_0x8BB3FA32294185BB(1f);
	}
}

void func_236(var uParam0)
{
	if (*uParam0 != 4)
	{
		*uParam0 = 4;
		uParam0->f_4 = unk_0x5AFB8ED811F05E4D();
		uParam0->f_6 = 0;
		uParam0->f_1 = -1;
	}
}

void func_237(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		uParam0->f_5 = unk_0x5AFB8ED811F05E4D();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}

int func_238(var uParam0)
{
	if (*uParam0 == 4)
	{
		return 1;
	}
	return 0;
}

void func_239(var uParam0)
{
	if (!func_238(uParam0))
	{
		switch (uParam0->f_1)
		{
			case 1:
				func_237(uParam0, 2, 2000);
				break;
			
			case 2:
				if (unk_0xBD2C5223D2D5D36E(&cLocal_626))
				{
					unk_0xC8F2C54283013021(&cLocal_626, 0);
					func_242(&cLocal_2350, Local_642, 30f, -1, 500, 1, 0);
					StringCopy(&cLocal_2350, "", 32);
					func_237(uParam0, 3, 5000);
				}
				break;
			
			case 3:
				func_240(&Local_469, 3, 1, "ALARM EVENT SET IT", 1, 0);
				unk_0x77E9D78B235BDEFB(unk_0x8CFC7D6E1DA5D304(), 2, 0);
				unk_0xE223A1A4864F355C(unk_0x8CFC7D6E1DA5D304(), 0);
				unk_0x945880A1F9FE9E4F(2);
				unk_0xC6688583FB205F86(unk_0x8CFC7D6E1DA5D304(), 0);
				unk_0x0A950E4F24C0A27E(0);
				unk_0xA17B1D381B643FCA(unk_0x8CFC7D6E1DA5D304());
				unk_0x992F56931CB66EB8(unk_0x8CFC7D6E1DA5D304());
				uParam0->f_2 = unk_0x5AFB8ED811F05E4D() + 15000;
				func_237(uParam0, 4, 0);
				break;
			
			case 4:
				if (unk_0x5AFB8ED811F05E4D() > uParam0->f_2)
				{
					unk_0xC6688583FB205F86(unk_0x8CFC7D6E1DA5D304(), 1);
					unk_0x0A950E4F24C0A27E(1);
					unk_0x945880A1F9FE9E4F(5);
					iLocal_2569 = 1;
					func_236(uParam0);
				}
				unk_0xA17B1D381B643FCA(unk_0x8CFC7D6E1DA5D304());
				unk_0x992F56931CB66EB8(unk_0x8CFC7D6E1DA5D304());
				break;
			}
	}
}

int func_240(int iParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, bool bParam5)
{
	return func_241(iParam0, iParam1, sParam3, 0f, 0f, 0f, 0, bParam2, iParam4, bParam5);
}

int func_241(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (func_172(*uParam0))
	{
		if (!bParam7 || iParam1 >= uParam0->f_5)
		{
			uParam0->f_38 = unk_0x5AFB8ED811F05E4D();
			if (iParam1 != uParam0->f_5 || !unk_0x9D39145AD645E383(&(uParam0->f_9), sParam2))
			{
				uParam0->f_6 = uParam0->f_5;
				uParam0->f_5 = iParam1;
				uParam0->f_17 = { uParam0->f_9 };
				StringCopy(&(uParam0->f_9), sParam2, 32);
				if (bParam9)
				{
					uParam0->f_36 = 1;
					uParam0->f_35 = 0;
				}
				else
				{
					uParam0->f_36 = 0;
					uParam0->f_35 = uParam8;
				}
				uParam0->f_47 = 0;
				uParam0->f_46 = 0;
				uParam0->f_48 = 0;
				uParam0->f_37 = unk_0x5AFB8ED811F05E4D();
				if (!func_226(Param3))
				{
					uParam0->f_88 = { Param3 };
				}
				if (iParam6 != 0 && unk_0x31F12808DC47A9E5(iParam6))
				{
					uParam0->f_91 = iParam6;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_242(char* sParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<32> Var0;
	
	Var0.f_0 = -1;
	StringCopy(&(Var0.f_1), sParam0, 64);
	StringCopy(&(Var0.f_17), "", 24);
	Var0.f_28 = iParam5;
	Var0.f_26 = fParam4;
	Var0.f_29 = iParam6;
	Var0.f_30 = iParam7;
	Var0.f_31 = iParam8;
	Var0.f_23 = { Param1 };
	func_243(&Var0, 0);
}

int func_243(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if ((unk_0xFAFFA408239A026B(&(uParam0->f_1)) && *uParam0 != -1) && (!unk_0x31F12808DC47A9E5(Local_28[*uParam0 /*110*/]) || unk_0x0FAE113CE72ED842(Local_28[*uParam0 /*110*/])))
	{
		return 0;
	}
	while (iVar0 != -1 && !unk_0xFAFFA408239A026B(&(Local_1709[iVar0 /*32*/].f_1)))
	{
		iVar0++;
		if (iVar0 > (Local_1709.f_0 - 1))
		{
			iVar0 = -1;
		}
	}
	if (iVar0 != -1)
	{
		if (*uParam0 == -1 || (unk_0xFAFFA408239A026B(iParam1) || unk_0x9D39145AD645E383(iParam1, &(uParam0->f_17))))
		{
			Local_1709[iVar0 /*32*/] = *uParam0;
			Local_1709[iVar0 /*32*/].f_1 = { uParam0->f_1 };
			if (*uParam0 != -1)
			{
				Local_1709[iVar0 /*32*/].f_23 = { unk_0x761660F5CE986DC4(Local_28[*uParam0 /*110*/], 1) };
			}
			else
			{
				Local_1709[iVar0 /*32*/].f_23 = { uParam0->f_23 };
			}
			Local_1709[iVar0 /*32*/].f_26 = uParam0->f_26;
			Local_1709[iVar0 /*32*/].f_28 = uParam0->f_28;
			Local_1709[iVar0 /*32*/].f_29 = uParam0->f_29;
			Local_1709[iVar0 /*32*/].f_27 = unk_0x5AFB8ED811F05E4D();
			Local_1709[iVar0 /*32*/].f_30 = uParam0->f_30;
			Local_1709[iVar0 /*32*/].f_31 = uParam0->f_31;
			iVar1 = 1;
		}
		else
		{
			iVar1 = 0;
		}
		*uParam0 = -1;
		StringCopy(&(uParam0->f_1), "", 64);
		uParam0->f_23 = { 0f, 0f, 0f };
		uParam0->f_26 = 0f;
		uParam0->f_28 = 0;
		uParam0->f_29 = 0;
		uParam0->f_27 = 0;
		uParam0->f_30 = 0;
		uParam0->f_31 = 0;
		return iVar1;
	}
	return 0;
}

void func_244(var uParam0)
{
	char cVar0[24];
	bool bVar6;
	struct<3> Var7;
	
	if (!func_238(uParam0))
	{
		if (func_44())
		{
			iLocal_2524 = -1;
		}
		else if (iLocal_2524 == -1)
		{
			iLocal_2524 = unk_0x5AFB8ED811F05E4D();
			iLocal_2550 = -1;
			iLocal_2551 = 1;
		}
		if (iLocal_2528 != -1 && !unk_0xFAFFA408239A026B(&Local_2530))
		{
			if (((Local_28[iLocal_2528 /*110*/] != 0 && unk_0x31F12808DC47A9E5(Local_28[iLocal_2528 /*110*/])) && !unk_0x0FAE113CE72ED842(Local_28[iLocal_2528 /*110*/])) && !unk_0x37C9E095B6EFA109(Local_28[iLocal_2528 /*110*/]))
			{
				if (!unk_0x0B90D19A63676F41(Local_28[iLocal_2528 /*110*/]))
				{
					if (func_44())
					{
						if (iLocal_2540 && (iLocal_2551 || iLocal_2529 > iLocal_2550))
						{
							if (bLocal_2552)
							{
								iLocal_2555 = iLocal_2545;
								iLocal_2556 = iLocal_2550;
								MemCopy(&Local_2557, {func_251()}, 4);
								MemCopy(&Local_2561, {func_250()}, 4);
								iLocal_2565 = iLocal_2551;
								bLocal_2566 = iLocal_2553;
							}
							if (iLocal_2541)
							{
								func_11();
							}
							else
							{
								func_41();
							}
						}
					}
					if (func_43())
					{
						if ((unk_0x5AFB8ED811F05E4D() - iLocal_2524) > iLocal_2538)
						{
							if (func_249(iLocal_2528))
							{
								MemCopy(&cVar0, {Local_622}, 6);
							}
							else
							{
								StringCopy(&cVar0, "SOL1AUD", 24);
							}
							switch (iLocal_2528)
							{
								case 0:
									func_40(&uLocal_2358, 4, Local_28[0 /*110*/], "JHP1A_FOREMAN", 0, 1);
									break;
								
								case 1:
									func_40(&uLocal_2358, 5, Local_28[1 /*110*/], "JHP1A_FOREMAN2", 0, 1);
									break;
								
								case 2:
									func_40(&uLocal_2358, 4, Local_28[2 /*110*/], "CONSTRUCTION1", 0, 1);
									break;
								
								case 3:
									func_40(&uLocal_2358, 3, Local_28[3 /*110*/], "CONSTRUCTION2", 0, 1);
									break;
							}
							if (unk_0xFAFFA408239A026B(&cLocal_2534))
							{
								if (func_248(&uLocal_2358, &cVar0, &Local_2530, 8, 0, 0, 0))
								{
									bVar6 = true;
								}
							}
							else if (func_247(&uLocal_2358, &cVar0, &Local_2530, &cLocal_2534, 8, 0, 0))
							{
								bVar6 = true;
							}
							if (bVar6)
							{
								func_243(&(Local_28[iLocal_2528 /*110*/].f_50), &Local_2530);
								iLocal_2550 = iLocal_2529;
								iLocal_2551 = iLocal_2542;
								bLocal_2552 = iLocal_2544;
								iLocal_2553 = iLocal_2543;
								iLocal_2528 = -1;
								iLocal_2529 = -1;
								StringCopy(&Local_2530, "", 16);
								iLocal_2538 = 0;
								fLocal_2539 = 9999999f;
								iLocal_2540 = 0;
								iLocal_2541 = 0;
								iLocal_2542 = 1;
								iLocal_2544 = 0;
								iLocal_2543 = 0;
							}
						}
					}
				}
			}
			else
			{
				iLocal_2528 = -1;
				iLocal_2529 = -1;
				StringCopy(&Local_2530, "", 16);
				iLocal_2538 = 0;
				fLocal_2539 = 9999999f;
				iLocal_2540 = 0;
				iLocal_2541 = 0;
				iLocal_2542 = 1;
				iLocal_2543 = 0;
			}
		}
		if (((func_44() && iLocal_2545 != -1) && iLocal_2553) && !unk_0xFAFFA408239A026B(&cLocal_2546))
		{
			Var7 = { unk_0x761660F5CE986DC4(Local_28[iLocal_2545 /*110*/], 1) };
			if (func_103(unk_0x18F7BE9ACB7D08F4(), Var7, 1) >= 25f)
			{
				iLocal_2555 = iLocal_2545;
				iLocal_2556 = iLocal_2550;
				MemCopy(&Local_2557, {func_251()}, 4);
				MemCopy(&Local_2561, {func_250()}, 4);
				iLocal_2565 = iLocal_2551;
				bLocal_2566 = iLocal_2553;
				func_11();
				iLocal_2545 = -1;
				iLocal_2550 = -1;
				StringCopy(&cLocal_2546, "", 16);
				iLocal_2551 = 0;
				iLocal_2553 = 0;
			}
		}
		if (iLocal_2555 != -1 && !unk_0xFAFFA408239A026B(&Local_2557))
		{
			if (Local_28[iLocal_2555 /*110*/].f_5 > iLocal_2556)
			{
				iLocal_2555 = -1;
				iLocal_2556 = -1;
				StringCopy(&Local_2557, "", 16);
				StringCopy(&Local_2561, "", 16);
				iLocal_2565 = 1;
			}
		}
		if (iLocal_2528 == -1 && unk_0xFAFFA408239A026B(&Local_2530))
		{
			if (func_43() && (unk_0x5AFB8ED811F05E4D() - iLocal_2524) > 10000)
			{
				if (iLocal_2555 != -1 && !unk_0xFAFFA408239A026B(&Local_2557))
				{
					func_246(iLocal_2555, &Local_2557, iLocal_2556, 0, 0, iLocal_2565, 0, 1, &Local_2561, bLocal_2566);
					iLocal_2555 = -1;
					iLocal_2556 = -1;
					StringCopy(&Local_2557, "", 16);
					StringCopy(&Local_2561, "", 16);
					iLocal_2565 = 1;
				}
			}
		}
	}
	func_245(bLocal_2566);
}

void func_245(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_246(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	float fVar0;
	bool bVar1;
	
	fVar0 = func_102(Local_28[iParam0 /*110*/], unk_0x18F7BE9ACB7D08F4(), 1);
	if ((iParam2 > iLocal_2529 || iParam2 == 4) || ((iParam2 == iLocal_2529 && (fVar0 < fLocal_2539 || (func_249(iParam0) && !func_249(iLocal_2528)))) && iParam2 != 5))
	{
		switch (iParam2)
		{
			case 0:
				if (fVar0 < 20f)
				{
					bVar1 = true;
				}
				break;
			
			default:
				if (fVar0 < 40f)
				{
					bVar1 = true;
				}
				break;
		}
		if (bVar1)
		{
			iLocal_2528 = iParam0;
			iLocal_2529 = iParam2;
			StringCopy(&Local_2530, sParam1, 16);
			StringCopy(&cLocal_2534, sParam8, 16);
			fLocal_2539 = fVar0;
			iLocal_2540 = iParam3;
			iLocal_2541 = iParam4;
			iLocal_2538 = iParam6;
			iLocal_2542 = iParam5;
			iLocal_2544 = iParam7;
			iLocal_2543 = iParam9;
			return 1;
		}
	}
	return 0;
}

bool func_247(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_39(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15763 = 0;
	Global_15770 = 0;
	Global_15765 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 1;
	StringCopy(&Global_16760, sParam3, 24);
	Global_2621441 = 0;
	return func_29(sParam2, iParam4, 0);
}

bool func_248(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_39(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_29(sParam2, iParam3, 0);
}

int func_249(int iParam0)
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		return 1;
	}
	return 0;
}

struct<6> func_250()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		iVar6 = unk_0x1382C02314443068();
		iVar6 = (iVar6 + Global_16766);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0xD76CFACBF6A6F21E(&(Global_14624[iVar7 /*6*/])))
			{
				return Global_14624[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0xD76CFACBF6A6F21E(&(Global_14624[iVar8 /*6*/])))
					{
						return Global_14624[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14624[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_251()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15756 == 4)
	{
		return Global_15375;
	}
	return Var0;
}

int func_252(var uParam0, int iParam1, char* sParam2)
{
	if (*uParam0 != -1)
	{
		return 0;
	}
	*uParam0 = 0;
	uParam0->f_3 = sParam2;
	uParam0->f_7 = iParam1;
	return 1;
}

void func_253(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	bool bVar5;
	bool bVar6;
	
	if (!func_238(uParam0))
	{
		bLocal_2570 = true;
		if (!iLocal_2568)
		{
			if (func_174())
			{
				iLocal_2568 = 1;
				iLocal_2571 = unk_0x5AFB8ED811F05E4D();
			}
		}
		else if ((unk_0x5AFB8ED811F05E4D() - iLocal_2571) > 3000)
		{
			iLocal_2568 = 0;
			iLocal_2571 = -1;
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (func_172(Local_28[iVar0 /*110*/]))
			{
				func_273(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_172(Local_469.f_0))
		{
			func_273(&Local_469);
		}
		iVar1 = 0;
		while (iVar1 < Local_1709.f_0)
		{
			if (!unk_0xFAFFA408239A026B(&(Local_1709[iVar1 /*32*/].f_1)) && Local_1709[iVar1 /*32*/].f_27 != -1)
			{
				if (Local_1709[iVar1 /*32*/].f_28 == -1 || (unk_0x5AFB8ED811F05E4D() - Local_1709[iVar1 /*32*/].f_27) < Local_1709[iVar1 /*32*/].f_28)
				{
					if (Local_1709[iVar1 /*32*/].f_29 <= 0 || (unk_0x5AFB8ED811F05E4D() - Local_1709[iVar1 /*32*/].f_27) > Local_1709[iVar1 /*32*/].f_29)
					{
						if (Local_1709[iVar1 /*32*/] != -1 && func_172(Local_28[Local_1709[iVar1 /*32*/] /*110*/]))
						{
							Var2 = { unk_0x761660F5CE986DC4(Local_28[Local_1709[iVar1 /*32*/] /*110*/], 1) };
							Local_1709[iVar1 /*32*/].f_23 = { Var2 };
						}
						else
						{
							Var2 = { Local_1709[iVar1 /*32*/].f_23 };
						}
						if (!func_22(&(Local_1668[3 /*8*/])))
						{
							if (Local_1709[iVar1 /*32*/].f_31 && unk_0x15EE504466B7BBD3(Var2, Local_642, 1) < 35f)
							{
								func_163(&(Local_1668[3 /*8*/]), 0, 0, 1);
							}
						}
						iVar0 = 0;
						while (iVar0 < Local_28.f_0)
						{
							if (Local_1709[iVar1 /*32*/] == -1 || (iVar0 != Local_1709[iVar1 /*32*/] && Local_28[Local_1709[iVar1 /*32*/] /*110*/].f_5 >= Local_28[iVar0 /*110*/].f_5))
							{
								if (unk_0x31F12808DC47A9E5(Local_28[iVar0 /*110*/]) && !unk_0x0FAE113CE72ED842(Local_28[iVar0 /*110*/]))
								{
									if (func_103(Local_28[iVar0 /*110*/], Var2, 1) < (Local_1709[iVar1 /*32*/].f_26 + Local_28[iVar0 /*110*/].f_42))
									{
										Local_28[iVar0 /*110*/].f_34 = iVar1;
										if (Local_1709[iVar1 /*32*/].f_30)
										{
											if (!func_22(&(Local_1668[3 /*8*/])))
											{
												func_163(&(Local_1668[3 /*8*/]), 0, 0, 1);
												MemCopy(&cLocal_2350, {Local_1709[iVar1 /*32*/].f_1}, 8);
											}
										}
									}
								}
							}
							iVar0++;
						}
					}
				}
				else if ((unk_0x5AFB8ED811F05E4D() - Local_1709[iVar1 /*32*/].f_27) > Local_1709[iVar1 /*32*/].f_28 + 2000)
				{
					StringCopy(&(Local_1709[iVar1 /*32*/].f_1), "", 64);
					Local_1709[iVar1 /*32*/] = -1;
					Local_1709[iVar1 /*32*/].f_23 = { 0f, 0f, 0f };
					Local_1709[iVar1 /*32*/].f_26 = 0f;
					Local_1709[iVar1 /*32*/].f_27 = -1;
					Local_1709[iVar1 /*32*/].f_28 = -1;
					Local_1709[iVar1 /*32*/].f_29 = -1;
				}
			}
			iVar1++;
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (func_172(Local_28[iVar0 /*110*/]))
			{
				func_267(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_172(Local_469.f_0))
		{
			func_258(&Local_469);
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (func_172(Local_28[iVar0 /*110*/]))
			{
				func_257(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_172(Local_469.f_0))
		{
			func_255(&Local_469);
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (unk_0x31F12808DC47A9E5(Local_28[iVar0 /*110*/].f_105))
			{
				if (((!unk_0x31F12808DC47A9E5(Local_28[iVar0 /*110*/]) || unk_0x0FAE113CE72ED842(Local_28[iVar0 /*110*/])) || unk_0xAADCB7C011FF1594(Local_28[iVar0 /*110*/])) || (Local_28[iVar0 /*110*/].f_108 && Local_28[iVar0 /*110*/].f_5 != 0))
				{
					bVar5 = true;
				}
				else if (Local_28[iVar0 /*110*/].f_5 != 0)
				{
					bVar6 = true;
				}
				if (bVar5 || bVar6)
				{
					if (unk_0x9EE4192FE475677C(Local_28[iVar0 /*110*/].f_105, Local_28[iVar0 /*110*/]))
					{
						unk_0x964B3F361C3DBDF4(Local_28[iVar0 /*110*/].f_105, 1, 1);
					}
					if (bVar5)
					{
						unk_0xF0862FA354B164C4(&(Local_28[iVar0 /*110*/].f_105));
					}
					else if (bVar6)
					{
						unk_0x5BE35A26B9097351(&(Local_28[iVar0 /*110*/].f_105));
					}
					Local_28[iVar0 /*110*/].f_109 = 0;
				}
			}
			else if (Local_28[iVar0 /*110*/].f_107 != 0 && Local_28[iVar0 /*110*/].f_106 != -1)
			{
				if (Local_28[iVar0 /*110*/].f_109 && unk_0xEDFE27D1AEA0EA7F(Local_28[iVar0 /*110*/].f_107))
				{
					Local_28[iVar0 /*110*/].f_105 = unk_0x7082ECB3731CD86C(Local_28[iVar0 /*110*/].f_107, unk_0x433176BD83D09D7E(Local_28[iVar0 /*110*/], Local_28[iVar0 /*110*/].f_106, 0f, 0f, 0f), 1, 1, 0);
					unk_0x947CE5CCDDBA0651(Local_28[iVar0 /*110*/].f_105, Local_28[iVar0 /*110*/], unk_0xCA57A734FF47CDF5(Local_28[iVar0 /*110*/], Local_28[iVar0 /*110*/].f_106), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1);
					Local_28[iVar0 /*110*/].f_109 = 0;
				}
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < Local_28.f_0)
		{
			if (unk_0x31F12808DC47A9E5(Local_28[iVar1 /*110*/]) && !unk_0x0FAE113CE72ED842(Local_28[iVar1 /*110*/]))
			{
				unk_0xA3F48AA4B6323A62(Local_28[iVar1 /*110*/]);
				unk_0xFEA6B696E501D399(Local_28[iVar1 /*110*/]);
			}
			iVar1++;
		}
		func_254();
	}
	if (func_238(uParam0))
	{
	}
}

void func_254()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_172(Local_579[iVar0 /*8*/]))
		{
			unk_0xA3F48AA4B6323A62(Local_579[iVar0 /*8*/]);
		}
		iVar0++;
	}
}

void func_255(int iParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0x83222845D5C7852E(*iParam0);
	if (func_256(*iParam0))
	{
		Local_469.f_46 = 0;
	}
	switch (iParam0->f_5)
	{
		case 0:
			if (unk_0xF0B96EE16BA9FBE8() >= 5 && unk_0xF0B96EE16BA9FBE8() < 21)
			{
				if ((!func_182(*iParam0, 1647992574, 1) && !func_182(*iParam0, 242628503, 1)) || iLocal_2577)
				{
					if (unk_0xB6B12179F5BB7520(203.68f, -3132.46f, 4.79f, 1f, 1))
					{
						unk_0x71F977266792711C(*iParam0, 203.68f, -3132.46f, 4.79f, 1f, 0);
						iLocal_2577 = 0;
					}
				}
			}
			else if (!func_182(*iParam0, -1680762137, 1) || !iLocal_2577)
			{
				if (unk_0xB6B12179F5BB7520(162.69f, -3115.67f, 4.95f, 1f, 1))
				{
					unk_0x9B869F23DD5B668A(*iParam0, 162.69f, -3115.67f, 4.95f, 1f, 0);
					iLocal_2577 = 1;
				}
			}
			break;
		
		case 3:
			unk_0xA1D871238EFB6367(*iParam0, 1, -1, "DEFAULT_ACTION");
			switch (unk_0x6E987D62C8535B6E(&(iParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
					if (unk_0xBEF481E5CF03DC93(*iParam0, joaat("weapon_pistol"), 0))
					{
						unk_0xA48F593CC7A71FCC(*iParam0, joaat("weapon_pistol"));
					}
					if (!unk_0xBEF481E5CF03DC93(*iParam0, joaat("weapon_nightstick"), 0))
					{
						unk_0x7D154B840BD03D00(*iParam0, joaat("weapon_nightstick"), -1, 1, 1);
					}
					if (unk_0x75CE6F8BEC2654E3(*iParam0, &iVar0, 1))
					{
						if (iVar0 != joaat("weapon_nightstick"))
						{
							unk_0x5C7D86C4752CBC68(*iParam0, joaat("weapon_nightstick"), 0);
						}
					}
					break;
				
				case joaat("killed"):
				case 1518302817:
				case -1298712083:
				case 185995093:
				case -1645534839:
				case 880647822:
				case joaat("gunshot"):
				case 1921975061:
				case 1682434916:
				case -924218668:
				case 600040296:
					if (unk_0xBEF481E5CF03DC93(*iParam0, joaat("weapon_nightstick"), 0))
					{
						unk_0xA48F593CC7A71FCC(*iParam0, joaat("weapon_nightstick"));
					}
					if (!unk_0xBEF481E5CF03DC93(*iParam0, joaat("weapon_pistol"), 0))
					{
						unk_0x7D154B840BD03D00(*iParam0, joaat("weapon_pistol"), -1, 1, 1);
					}
					if (unk_0x75CE6F8BEC2654E3(*iParam0, &iVar0, 1))
					{
						if (iVar0 != joaat("weapon_pistol"))
						{
							unk_0x5C7D86C4752CBC68(*iParam0, joaat("weapon_pistol"), 0);
						}
					}
					break;
			}
			if (!func_182(*iParam0, 780511057, 1) || func_256(*iParam0))
			{
				unk_0x48B25C02FAB9DC81(*iParam0, unk_0x18F7BE9ACB7D08F4(), 0, 16);
				unk_0x6016A20BFEAEFE11(*iParam0, unk_0x18F7BE9ACB7D08F4(), -1, 2048, 2);
			}
			break;
		
		case 1:
			switch (unk_0x6E987D62C8535B6E(&(iParam0->f_9)))
			{
				case 686645495:
					if (unk_0x31F12808DC47A9E5(iParam0->f_91))
					{
						if (!unk_0xDC43CD42234DF8D3(*iParam0, unk_0x761660F5CE986DC4(iParam0->f_91, 1), 180f) && (unk_0x5AFB8ED811F05E4D() - iParam0->f_37) < 5000)
						{
							if (!func_182(*iParam0, -875674219, 1) || func_256(*iParam0))
							{
								unk_0x8F467CFC5FBBCE77(*iParam0, iParam0->f_91, -1);
								unk_0x6016A20BFEAEFE11(*iParam0, iParam0->f_91, -1, 2048, 2);
							}
						}
						else if (!func_182(*iParam0, -2015108952, 1) || func_256(*iParam0))
						{
							unk_0xF9FF745AB2FEDF81(*iParam0, iParam0->f_91, -1, 2f, -1f, 2.5f, 1f, 1);
						}
					}
					break;
				
				case -1225951737:
					if (iParam0->f_41 && !func_60(iParam0->f_88, iParam0->f_43, 1f, 0))
					{
						iParam0->f_88 = { iParam0->f_43 };
						iVar1 = 1;
					}
					if (!func_226(iParam0->f_88))
					{
						if (!unk_0xDC43CD42234DF8D3(*iParam0, iParam0->f_88, 90f) && (unk_0x5AFB8ED811F05E4D() - iParam0->f_37) < 5000)
						{
							if ((!func_182(*iParam0, 1464580341, 1) || func_256(*iParam0)) || iVar1)
							{
								unk_0xE4536F74EAB52EE1(*iParam0, iParam0->f_88, 0);
								unk_0x13C89D4679DD9966(*iParam0, iParam0->f_88, -1, 2048, 2);
							}
						}
						else if ((!func_182(*iParam0, 713668775, 1) || func_256(*iParam0)) || iVar1)
						{
							unk_0xA303A4837FBB8DDE(*iParam0, iParam0->f_43, 1f, -1, 3f, 0, 40000f);
						}
					}
					break;
				
				case -1940555668:
					break;
				
				case -927541383:
					if (!func_226(iParam0->f_88))
					{
						if (!func_182(*iParam0, 1464580341, 1) || func_256(*iParam0))
						{
							unk_0xE4536F74EAB52EE1(*iParam0, iParam0->f_88, -1);
							unk_0x13C89D4679DD9966(*iParam0, iParam0->f_88, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x73E31FC09D8359DB(*iParam0, -1);
					}
					break;
				
				case 58299323:
					if (unk_0x31F12808DC47A9E5(iParam0->f_91))
					{
						if (!func_182(*iParam0, -875674219, 1) || func_256(*iParam0))
						{
							unk_0x8F467CFC5FBBCE77(*iParam0, iParam0->f_91, -1);
							unk_0x6016A20BFEAEFE11(*iParam0, iParam0->f_91, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x73E31FC09D8359DB(*iParam0, -1);
					}
					break;
			}
			break;
	}
}

int func_256(struct<26> Param0, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109)
{
	if (Param0.f_5 != Param0.f_7 || !unk_0x9D39145AD645E383(&(Param0.f_9), &(Param0.f_25)))
	{
		return 1;
	}
	return 0;
}

void func_257(var uParam0)
{
	int iVar0;
	int iVar1;
	char cVar2[24];
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	int iVar14;
	
	unk_0x83222845D5C7852E(*uParam0);
	if (func_256(*uParam0))
	{
		uParam0->f_46 = 0;
	}
	switch (uParam0->f_5)
	{
		case 0:
			iVar1 = 0;
			while (iVar1 < Local_28.f_0)
			{
				if (Local_28[iVar1 /*110*/] == *uParam0)
				{
					iVar0 = iVar1;
				}
				iVar1++;
			}
			if (iVar0 != -1)
			{
				switch (iVar0)
				{
					case 0:
						if (!func_182(*uParam0, 1647992574, 1))
						{
							if (unk_0xB6B12179F5BB7520(155.74f, -3098.89f, 4.93f, 0.5f, 1))
							{
								unk_0x71F977266792711C(*uParam0, 155.74f, -3098.89f, 4.93f, 0.5f, -1);
							}
						}
						break;
					
					case 1:
						if ((!func_182(*uParam0, 242628503, 1) || func_256(*uParam0)) && unk_0x028356968FDD2DF2("misslsdhsclipboard@base"))
						{
							if (!unk_0xDFEB6D8BCE2B43F6(*uParam0, "misslsdhsclipboard@base", "base", 3))
							{
								unk_0xC8BEB049F3BFC0AB(&uLocal_2526);
								if (!func_60(unk_0x761660F5CE986DC4(*uParam0, 1), 126.8496f, -3089.249f, 4.9141f, 0.75f, 0))
								{
									unk_0xA303A4837FBB8DDE(0, 126.8496f, -3089.249f, 4.9141f, 1f, -1, 0.5f, 0, 264.2812f);
								}
								unk_0x8A32C8BCE5987E9B(0, 264.2812f, 0);
								unk_0xB5746603774C4C9D(0, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
								unk_0xAFDA7B8F83B2CA58(uLocal_2526);
								unk_0x73F69DD57B7E92A9(*uParam0, uLocal_2526);
								unk_0x56C7B20E11B37066(&uLocal_2526);
							}
							if (unk_0x31F12808DC47A9E5(Local_579[2 /*8*/]))
							{
								unk_0x13C89D4679DD9966(*uParam0, unk_0x79CEF243729F54F9(Local_579[2 /*8*/], unk_0xFCA9C8367E44D3C2(Local_579[2 /*8*/], "engine")), -1, 0, 2);
							}
							uParam0->f_46 = 0;
						}
						else if (unk_0x028356968FDD2DF2("misslsdhsclipboard@idle_a"))
						{
							switch (uParam0->f_46)
							{
								case 0:
								case 2:
									if (uParam0->f_46 == 0 && unk_0x461DEB4775BA9DC1(*uParam0) == 2)
									{
										uParam0->f_109 = 1;
									}
									if (((uParam0->f_46 == 0 && unk_0x461DEB4775BA9DC1(*uParam0) == 2) || uParam0->f_46 == 2) && unk_0x5AFB8ED811F05E4D() > uParam0->f_37)
									{
										unk_0xC8BEB049F3BFC0AB(&uLocal_2526);
										switch (unk_0x61E9B3BFA06B017B(0, 3))
										{
											case 0:
												StringCopy(&cVar2, "idle_a", 24);
												break;
											
											case 1:
												StringCopy(&cVar2, "idle_b", 24);
												break;
											
											case 2:
												StringCopy(&cVar2, "idle_c", 24);
												break;
										}
										unk_0xB5746603774C4C9D(0, "misslsdhsclipboard@idle_a", &cVar2, 8f, -8f, -1, 0, 0, 0, 0, 0);
										unk_0xB5746603774C4C9D(0, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
										unk_0xAFDA7B8F83B2CA58(uLocal_2526);
										unk_0x73F69DD57B7E92A9(*uParam0, uLocal_2526);
										unk_0x56C7B20E11B37066(&uLocal_2526);
										uParam0->f_46 = 1;
									}
									break;
								
								case 1:
									if (unk_0x461DEB4775BA9DC1(*uParam0) == 1)
									{
										uParam0->f_46++;
									}
									break;
								}
						}
						break;
					
					case 2:
					case 3:
						if (!func_182(*uParam0, 1647992574, 1))
						{
							if (unk_0xB6B12179F5BB7520(159.82f, -3085.93f, 5f, 0.1f, 1))
							{
								unk_0x71F977266792711C(*uParam0, 159.82f, -3085.93f, 5f, 0.1f, -1);
							}
							else if (unk_0xB6B12179F5BB7520(160.15f, -3084.79f, 4.99f, 0.1f, 1))
							{
								unk_0x71F977266792711C(*uParam0, 160.15f, -3084.79f, 4.99f, 0.1f, -1);
							}
							else if (unk_0xB6B12179F5BB7520(159.09f, -3085.02f, 5.01f, 0.1f, 1))
							{
								unk_0x71F977266792711C(*uParam0, 159.09f, -3085.02f, 5.01f, 0.1f, -1);
							}
						}
						break;
					}
			}
			break;
		
		case 1:
			switch (unk_0x6E987D62C8535B6E(&(uParam0->f_9)))
			{
				case 2074432461:
				case 356486511:
				case -414594135:
				case 1260350710:
					if (unk_0x31F12808DC47A9E5(uParam0->f_91))
					{
						if (!unk_0xDC43CD42234DF8D3(*uParam0, unk_0x761660F5CE986DC4(uParam0->f_91, 1), 180f) && (unk_0x5AFB8ED811F05E4D() - uParam0->f_37) < 5000)
						{
							if (!func_182(*uParam0, -875674219, 1) || func_256(*uParam0))
							{
								unk_0x8F467CFC5FBBCE77(*uParam0, uParam0->f_91, -1);
								unk_0x6016A20BFEAEFE11(*uParam0, uParam0->f_91, -1, 2048, 2);
							}
						}
						else if (!func_182(*uParam0, -2015108952, 1) || func_256(*uParam0))
						{
							unk_0xF9FF745AB2FEDF81(*uParam0, uParam0->f_91, -1, 2f, -1f, 2.5f, 1f, 1);
						}
					}
					break;
				
				case -1225951737:
					if (uParam0->f_41 && !func_60(uParam0->f_88, uParam0->f_43, 1f, 0))
					{
						uParam0->f_88 = { uParam0->f_43 };
						iVar8 = 1;
					}
					if (!func_226(uParam0->f_88))
					{
						if (!unk_0xDC43CD42234DF8D3(*uParam0, uParam0->f_88, 90f) && (unk_0x5AFB8ED811F05E4D() - uParam0->f_37) < 5000)
						{
							if ((!func_182(*uParam0, 1464580341, 1) || func_256(*uParam0)) || iVar8)
							{
								unk_0xE4536F74EAB52EE1(*uParam0, uParam0->f_88, 0);
								unk_0x13C89D4679DD9966(*uParam0, uParam0->f_88, -1, 2048, 2);
							}
						}
						else if ((!func_182(*uParam0, 713668775, 1) || func_256(*uParam0)) || iVar8)
						{
							unk_0xA303A4837FBB8DDE(*uParam0, uParam0->f_43, 1f, -1, 3f, 0, 40000f);
						}
					}
					break;
				
				case -1940555668:
					break;
				
				case -927541383:
					if (!func_226(uParam0->f_88))
					{
						if (!func_182(*uParam0, 1464580341, 1) || func_256(*uParam0))
						{
							unk_0xE4536F74EAB52EE1(*uParam0, uParam0->f_88, -1);
							unk_0x13C89D4679DD9966(*uParam0, uParam0->f_88, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x73E31FC09D8359DB(*uParam0, -1);
					}
					break;
				
				case 58299323:
					if (unk_0x31F12808DC47A9E5(uParam0->f_91))
					{
						if (!func_182(*uParam0, -875674219, 1) || func_256(*uParam0))
						{
							unk_0x8F467CFC5FBBCE77(*uParam0, uParam0->f_91, -1);
							unk_0x6016A20BFEAEFE11(*uParam0, uParam0->f_91, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x73E31FC09D8359DB(*uParam0, -1);
					}
					break;
			}
			break;
		
		case 2:
			if (((unk_0x9D39145AD645E383(&(uParam0->f_9), "ENT_FOOT_LEAVE") || unk_0x9D39145AD645E383(&(uParam0->f_9), "ENT_VEH_LEAVE")) || unk_0x9D39145AD645E383(&(uParam0->f_9), "WH_FOOT_LEAVE")) || unk_0x9D39145AD645E383(&(uParam0->f_9), "WH_VEH_LEAVE"))
			{
				if ((!func_182(*uParam0, 242628503, 1) || !unk_0x3821A75ECC8A0D5B(*uParam0, unk_0x18F7BE9ACB7D08F4(), 90f)) || func_256(*uParam0))
				{
					unk_0xC8BEB049F3BFC0AB(&uLocal_2526);
					unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
					unk_0x73E31FC09D8359DB(0, 2000);
					unk_0x8F251305F4CAD788(uLocal_2526, 1);
					unk_0xAFDA7B8F83B2CA58(uLocal_2526);
					unk_0x73F69DD57B7E92A9(*uParam0, uLocal_2526);
					unk_0x56C7B20E11B37066(&uLocal_2526);
					unk_0x6016A20BFEAEFE11(*uParam0, unk_0x18F7BE9ACB7D08F4(), -1, 2048, 2);
				}
			}
			else
			{
				if (unk_0x31F12808DC47A9E5(iLocal_2576) && unk_0xC4B84EB67F78C1F0(iLocal_2576, 0))
				{
					fVar11 = func_102(unk_0x18F7BE9ACB7D08F4(), iLocal_2576, 1);
				}
				if ((iLocal_2573 == 3 || iLocal_2573 == 2) || iLocal_2573 == 8)
				{
					iVar9 = unk_0x18F7BE9ACB7D08F4();
					fVar12 = 2f;
				}
				else if (iLocal_2573 == 0 || iLocal_2573 == 1)
				{
					iVar9 = unk_0x18F7BE9ACB7D08F4();
					fVar12 = 1f;
				}
				else if (iLocal_2573 == 5 && unk_0x31F12808DC47A9E5(iLocal_2576))
				{
					if (fVar11 > 10f)
					{
						iVar9 = unk_0x18F7BE9ACB7D08F4();
						fVar12 = 2f;
					}
					else
					{
						iVar9 = iLocal_2576;
						fVar12 = 2f;
					}
				}
				else if (iLocal_2573 == 4 && unk_0x31F12808DC47A9E5(iLocal_2576))
				{
					iVar9 = iLocal_2576;
					fVar12 = 1f;
				}
				if (unk_0x31F12808DC47A9E5(iVar9))
				{
					fVar10 = func_102(*uParam0, iVar9, 1);
				}
				if (fVar10 <= 7.5f)
				{
					if (((!func_182(*uParam0, 242628503, 1) && !func_182(*uParam0, 1227113341, 1)) || !unk_0x3821A75ECC8A0D5B(*uParam0, unk_0x18F7BE9ACB7D08F4(), 90f)) || func_256(*uParam0))
					{
						unk_0xC8BEB049F3BFC0AB(&uLocal_2526);
						unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
						unk_0x73E31FC09D8359DB(0, 2000);
						unk_0x8F251305F4CAD788(uLocal_2526, 1);
						unk_0xAFDA7B8F83B2CA58(uLocal_2526);
						unk_0x73F69DD57B7E92A9(*uParam0, uLocal_2526);
						unk_0x56C7B20E11B37066(&uLocal_2526);
						unk_0x6016A20BFEAEFE11(*uParam0, unk_0x18F7BE9ACB7D08F4(), -1, 2048, 2);
					}
				}
				else if (!func_182(*uParam0, 1227113341, 1) || func_256(*uParam0))
				{
					if (fVar12 > 1f)
					{
						fVar13 = 6f;
					}
					else
					{
						fVar13 = 3f;
					}
					unk_0x7F948DF34BFB8F5D(*uParam0, iVar9, -1, fVar13, fVar12, 1073741824, 0);
					unk_0x6016A20BFEAEFE11(*uParam0, unk_0x18F7BE9ACB7D08F4(), -1, 2048, 2);
				}
			}
			break;
		
		case 3:
			switch (unk_0x6E987D62C8535B6E(&(uParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
				case 1568162790:
				case 1682434916:
				case -924218668:
				case 2056033185:
				case 185995093:
					if (unk_0x75CE6F8BEC2654E3(*uParam0, &iVar14, 1))
					{
						if (iVar14 != joaat("weapon_unarmed"))
						{
							unk_0x5C7D86C4752CBC68(*uParam0, joaat("weapon_unarmed"), 0);
						}
					}
					if (!func_182(*uParam0, 780511057, 1))
					{
						unk_0x48B25C02FAB9DC81(*uParam0, unk_0x18F7BE9ACB7D08F4(), 0, 16);
					}
					break;
				
				case 1093888274:
					if ((!func_182(*uParam0, 242628503, 1) || !unk_0x3821A75ECC8A0D5B(*uParam0, unk_0x18F7BE9ACB7D08F4(), 90f)) || func_256(*uParam0))
					{
						unk_0xC8BEB049F3BFC0AB(&uLocal_2526);
						unk_0x8F467CFC5FBBCE77(0, unk_0x18F7BE9ACB7D08F4(), 0);
						unk_0x73E31FC09D8359DB(0, 2000);
						unk_0x8F251305F4CAD788(uLocal_2526, 1);
						unk_0xAFDA7B8F83B2CA58(uLocal_2526);
						unk_0x73F69DD57B7E92A9(*uParam0, uLocal_2526);
						unk_0x56C7B20E11B37066(&uLocal_2526);
						unk_0x6016A20BFEAEFE11(*uParam0, unk_0x18F7BE9ACB7D08F4(), -1, 2048, 2);
					}
					break;
			}
			break;
		
		case 5:
			if (func_103(*uParam0, 177.7484f, -3240.897f, 4.6079f, 1) < 15f)
			{
				if (!func_182(*uParam0, 1805844857, 1))
				{
					unk_0x9603FB72C3126396(*uParam0, unk_0x18F7BE9ACB7D08F4(), 1000f, -1, 0, 0);
				}
			}
			else if ((!func_182(*uParam0, 1805844857, 1) && !func_182(*uParam0, 713668775, 1)) || func_256(*uParam0))
			{
				unk_0xA303A4837FBB8DDE(*uParam0, 177.7484f, -3240.897f, 4.6079f, 3f, -1, 0.25f, 1, 40000f);
			}
			break;
		
		case 4:
			switch (unk_0x6E987D62C8535B6E(&(uParam0->f_9)))
			{
				case -1645534839:
					if (!func_182(*uParam0, -1519143300, 1) || func_256(*uParam0))
					{
						unk_0x58A1A1507026B918(*uParam0, -1, unk_0x18F7BE9ACB7D08F4(), 0, 1);
					}
					break;
			}
			break;
	}
}

void func_258(int iParam0)
{
	var uVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &uVar0, 1);
	fVar1 = func_102(unk_0x18F7BE9ACB7D08F4(), *iParam0, 1);
	if (unk_0x7F3463BA18B53A3D(*iParam0))
	{
		iVar3 = 1;
	}
	if (unk_0x1B843A60307EECA4(*iParam0, unk_0x18F7BE9ACB7D08F4(), 1))
	{
		if (unk_0xB489A3EAA19E52F6(*iParam0, joaat("weapon_unarmed"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar4 = func_265(*iParam0, &uVar5, &bVar6, &bVar7);
	if ((uVar4 && uVar5) && !bVar7)
	{
		if (bVar6)
		{
			func_240(iParam0, 3, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_240(iParam0, 3, 1, "KILLED", 1, 0);
		}
	}
	else if (((((unk_0x36E5EAE8A224786D(*iParam0, 122) || unk_0x36E5EAE8A224786D(*iParam0, 123)) || unk_0x36E5EAE8A224786D(*iParam0, 124)) || unk_0x36E5EAE8A224786D(*iParam0, 22)) || unk_0x36E5EAE8A224786D(*iParam0, 23)) || unk_0x36E5EAE8A224786D(*iParam0, 86))
	{
		func_240(iParam0, 3, 1, "GUNSHOT", 1, 0);
	}
	else if (iParam0->f_39 && func_264(4))
	{
		func_240(iParam0, 3, 1, "GUN_AIMED", 1, 0);
	}
	else if (iParam0->f_39 && func_263(*iParam0, 2))
	{
		func_240(iParam0, 3, 1, "PROJ_AIMED", 1, 0);
	}
	else if (((iParam0->f_39 && fVar1 < 8f) && !unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1)) && unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 5))
	{
		func_240(iParam0, 3, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2573 == 11)
	{
		if (iParam0->f_39)
		{
			func_240(iParam0, 3, 1, "STEALING_SEC_CAR", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_262(iParam0, 1, "HEARD_SEC_CAR", Local_579[3 /*8*/], 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2573 == 6)
	{
		if (iParam0->f_39)
		{
			func_240(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_262(iParam0, 1, "HEARD_VAN", Local_579[func_97() /*8*/], 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2573 == 10)
	{
		if (iParam0->f_39)
		{
			func_262(iParam0, 3, "STEALING_VAN", Local_579[func_49() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_262(iParam0, 1, "HEARD_VAN", Local_579[func_49() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || unk_0x36E5EAE8A224786D(*iParam0, 41)) || unk_0x36E5EAE8A224786D(*iParam0, 112)) || func_260(*iParam0, 0))
	{
		func_240(iParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || unk_0x36E5EAE8A224786D(*iParam0, 101)) || func_260(*iParam0, 1))
	{
		func_240(iParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((iParam0->f_5 != 3 && iParam0->f_84) && (iParam0->f_39 || iParam0->f_41)) && (fVar1 < 8f || func_103(unk_0x18F7BE9ACB7D08F4(), Local_642, 1) < 40f))
	{
		if (iParam0->f_39)
		{
			func_240(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_259(iParam0, 1, "HEARD_PLAYER", unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 1, 1, 0);
		}
	}
	else if (iParam0->f_5 != 5 && uVar4)
	{
		if ((uVar5 && bVar6) && bVar7)
		{
			func_240(iParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar6)
		{
			func_240(iParam0, 3, 1, "DEAD_BODY", 1, 0);
		}
	}
	if (iParam0->f_34 > -1 && iParam0->f_34 < (Local_1709.f_0 - 1))
	{
		bVar8 = Local_1709[iParam0->f_34 /*32*/].f_30;
		switch (unk_0x6E987D62C8535B6E(&(Local_1709[iParam0->f_34 /*32*/].f_1)))
		{
			case joaat("killed"):
			case 1518302817:
			case -1298712083:
			case 185995093:
			case -1645534839:
			case 880647822:
			case 1921975061:
			case joaat("fight"):
			case 1681313069:
			case 1156217463:
			case 1682434916:
			case -924218668:
			case joaat("gunshot"):
			case 600040296:
				func_240(iParam0, 3, 1, &(Local_1709[iParam0->f_34 /*32*/].f_1), 0, bVar8);
				break;
			
			case -1225951737:
				func_259(iParam0, 1, &(Local_1709[iParam0->f_34 /*32*/].f_1), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 1, 0, bVar8);
				break;
			
			case 2074432461:
			case 686645495:
				func_262(iParam0, 1, &(Local_1709[iParam0->f_34 /*32*/].f_1), Local_579[func_97() /*8*/], 1, 0, bVar8);
				break;
			}
	}
	iParam0->f_34 = -1;
	if (iParam0->f_7 != iParam0->f_5)
	{
		iParam0->f_8 = 1;
	}
	else
	{
		iParam0->f_8 = 0;
	}
	iParam0->f_7 = iParam0->f_5;
	if (!unk_0x9D39145AD645E383(&(iParam0->f_25), &(iParam0->f_9)))
	{
		iParam0->f_33 = 1;
	}
	else
	{
		iParam0->f_33 = 0;
	}
	iParam0->f_25 = { iParam0->f_9 };
	switch (iParam0->f_5)
	{
		case 0:
			break;
		
		case 1:
			switch (unk_0x6E987D62C8535B6E(&(iParam0->f_9)))
			{
				case 58299323:
					if ((unk_0x5AFB8ED811F05E4D() - iParam0->f_37) > 3000)
					{
						func_240(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				
				case -1225951737:
					if (((unk_0x5AFB8ED811F05E4D() - iParam0->f_37) > 4000 && func_103(*iParam0, iParam0->f_88, 1) < 3f) && unk_0x10793953843A66F7(*iParam0))
					{
						func_240(iParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					break;
				
				case -927541383:
					if ((unk_0x5AFB8ED811F05E4D() - iParam0->f_37) > 4000 && !unk_0x235B74E6F6192AE8(*iParam0))
					{
						func_240(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
			}
			break;
		
		case 3:
			switch (unk_0x6E987D62C8535B6E(&(iParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
					if ((((unk_0x5AFB8ED811F05E4D() - iParam0->f_38) > 8000 && func_103(unk_0x18F7BE9ACB7D08F4(), Local_642, 1) > 65f) && (func_102(unk_0x18F7BE9ACB7D08F4(), *iParam0, 1) > 10f || (unk_0x5AFB8ED811F05E4D() - iParam0->f_38) > 16000)) && !unk_0x235B74E6F6192AE8(*iParam0))
					{
						func_240(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
				
				case joaat("killed"):
				case 1518302817:
				case -1298712083:
				case 185995093:
				case -1645534839:
				case 880647822:
				case joaat("gunshot"):
				case 1921975061:
				case 1682434916:
				case -924218668:
				case 600040296:
					if (func_103(unk_0x18F7BE9ACB7D08F4(), Local_642, 1) > 300f && func_102(unk_0x18F7BE9ACB7D08F4(), *iParam0, 1) > 150f)
					{
						func_240(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
			}
			break;
	}
}

int func_259(int iParam0, int iParam1, char* sParam2, struct<3> Param3, bool bParam6, int iParam7, bool bParam8)
{
	return func_241(iParam0, iParam1, sParam2, Param3, 0, bParam6, iParam7, bParam8);
}

int func_260(struct<110> Param0, int iParam110)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		if (func_261(Param0, Local_28[iVar0 /*110*/], iParam110))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_261(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, int iParam220)
{
	if (unk_0x31F12808DC47A9E5(iParam110) && unk_0x1B843A60307EECA4(iParam110, unk_0x18F7BE9ACB7D08F4(), iParam220))
	{
		if (func_102(iParam0, iParam110, 1) < 15f)
		{
			if (unk_0x4CA763CF04749B94(iParam0, iParam110))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_262(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	return func_241(iParam0, iParam1, sParam2, 0f, 0f, 0f, iParam3, bParam4, iParam5, bParam6);
}

int func_263(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110)
{
	if ((iParam0 != 0 && unk_0x31F12808DC47A9E5(iParam0)) && !unk_0x0FAE113CE72ED842(iParam0))
	{
		if (unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), iParam110) && (unk_0x6703CD13741C39C5(unk_0x8CFC7D6E1DA5D304(), iParam0) || unk_0xF905401F186A9803(unk_0x8CFC7D6E1DA5D304(), iParam0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_264(int iParam0)
{
	if (unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), iParam0) && (unk_0xE655C0A22E4886E8(unk_0x8CFC7D6E1DA5D304()) || unk_0x536B0B7C52D20BC8(unk_0x8CFC7D6E1DA5D304())))
	{
		return 1;
	}
	return 0;
}

int func_265(struct<110> Param0, var uParam110, var uParam111, var uParam112)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		if (func_266(Param0, Local_28[iVar0 /*110*/], &bVar2, &bVar3, &bVar4))
		{
			if (bVar2 && bVar4)
			{
				Local_28[iVar0 /*110*/].f_85 = 1;
			}
			if (!bVar1)
			{
				bVar1 = true;
				*uParam110 = bVar2;
				*uParam111 = bVar3;
				*uParam112 = bVar4;
			}
			else
			{
				if (bVar2)
				{
					*uParam110 = 1;
				}
				if (bVar3)
				{
					*uParam111 = 1;
				}
				if (bVar4)
				{
					*uParam112 = 1;
				}
			}
			if (Local_28[iVar0 /*110*/].f_85)
			{
				*uParam111 = 1;
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	*uParam110 = 0;
	*uParam111 = 0;
	*uParam112 = 0;
	return 0;
}

int func_266(struct<40> Param0, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, struct<104> Param110, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, var uParam220, var uParam221, var uParam222)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x31F12808DC47A9E5(Param110.f_0) && unk_0x0FAE113CE72ED842(Param110.f_0))
	{
		Var0 = { unk_0x761660F5CE986DC4(Param110.f_0, 0) };
		if (unk_0x15EE504466B7BBD3(unk_0x761660F5CE986DC4(Param0.f_0, 1), Var0, 1) < 10f)
		{
			if (unk_0x4CA763CF04749B94(Param0.f_0, Param110.f_0))
			{
				if ((unk_0x5AFB8ED811F05E4D() - Param110.f_103) < 3000)
				{
					*uParam220 = 1;
				}
				else
				{
					*uParam220 = 0;
				}
				if (*uParam220)
				{
					iVar3 = unk_0xD2440D2BFCC8751B(Param110.f_0);
					if (unk_0xB6C2454233C8F532(iVar3))
					{
						iVar4 = unk_0x6DE4035D8BAB73B4(iVar3);
						if ((iVar4 == unk_0x18F7BE9ACB7D08F4() && !unk_0x0FAE113CE72ED842(iVar4)) && Param0.f_39)
						{
							*uParam221 = 1;
						}
						else
						{
							*uParam221 = 0;
						}
					}
					else
					{
						*uParam221 = 0;
					}
				}
				else
				{
					*uParam221 = 0;
				}
				iVar5 = unk_0xABD4C6F013BF1998(Param110.f_0);
				if (iVar5 == joaat("weapon_unarmed") || (iVar5 != joaat("weapon_unarmed") && unk_0x4EC9249A7A40AB3A(iVar5) == 2))
				{
					*uParam222 = 1;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_267(int iParam0)
{
	var uVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	struct<8> Var4;
	var uVar20;
	var uVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	int iVar25;
	int iVar26;
	struct<6> Var27;
	bool bVar33;
	var uVar34;
	float fVar35;
	struct<3> Var36;
	struct<3> Var39;
	struct<4> Var42;
	
	unk_0x75CE6F8BEC2654E3(unk_0x18F7BE9ACB7D08F4(), &uVar0, 1);
	fVar1 = func_102(unk_0x18F7BE9ACB7D08F4(), *iParam0, 1);
	if (unk_0x7F3463BA18B53A3D(*iParam0))
	{
		iVar3 = 1;
	}
	if (unk_0x1B843A60307EECA4(*iParam0, unk_0x18F7BE9ACB7D08F4(), 1))
	{
		if (unk_0xB489A3EAA19E52F6(*iParam0, joaat("weapon_unarmed"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar20 = func_265(*iParam0, &uVar21, &bVar22, &bVar23);
	if (((iParam0->f_5 != 5 && uVar20) && uVar21) && !bVar23)
	{
		if (bVar22)
		{
			func_240(iParam0, 5, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_240(iParam0, 5, 1, "KILLED", 1, 0);
		}
	}
	else if (((((unk_0x36E5EAE8A224786D(*iParam0, 122) || unk_0x36E5EAE8A224786D(*iParam0, 123)) || unk_0x36E5EAE8A224786D(*iParam0, 124)) || unk_0x36E5EAE8A224786D(*iParam0, 22)) || unk_0x36E5EAE8A224786D(*iParam0, 23)) || unk_0x36E5EAE8A224786D(*iParam0, 86))
	{
		func_240(iParam0, 5, 1, "GUNSHOT", 1, 0);
	}
	else if ((iParam0->f_39 && iParam0->f_5 != 4) && func_264(4))
	{
		func_240(iParam0, 4, 1, "GUN_AIMED", 1, 0);
	}
	else if (iParam0->f_39 && func_263(*iParam0, 2))
	{
		func_240(iParam0, 5, 1, "PROJ_AIMED", 1, 0);
	}
	else if ((((iParam0->f_39 && fVar1 < 8f) && iParam0->f_5 != 4) && !unk_0x657B649BA2AD3582(unk_0x18F7BE9ACB7D08F4(), 1)) && unk_0x9381BBF272130ED6(unk_0x18F7BE9ACB7D08F4(), 5))
	{
		func_240(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2573 == 7)
	{
		if (iParam0->f_39)
		{
			func_240(iParam0, 3, 1, "EXIT_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_259(iParam0, 1, "HEARD_PLAYER", unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2573 == 6)
	{
		if (iParam0->f_39)
		{
			func_240(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_259(iParam0, 1, "HEARD_PLAYER", unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2573 == 10)
	{
		if (iParam0->f_39)
		{
			func_262(iParam0, 3, "STEALING_VAN", Local_579[func_49() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_262(iParam0, 1, "HEARD_VAN", Local_579[func_49() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || unk_0x36E5EAE8A224786D(*iParam0, 41)) || unk_0x36E5EAE8A224786D(*iParam0, 112)) || func_260(*iParam0, 0))
	{
		func_240(iParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || unk_0x36E5EAE8A224786D(*iParam0, 101)) || func_260(*iParam0, 1))
	{
		func_240(iParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((iParam0->f_5 != 3 && iParam0->f_84) && (iParam0->f_39 || iParam0->f_41)) && (fVar1 < 8f || func_103(unk_0x18F7BE9ACB7D08F4(), Local_642, 1) < 40f))
	{
		if (iParam0->f_39)
		{
			func_240(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_259(iParam0, 1, "HEARD_PLAYER", unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 1, 1, 0);
		}
	}
	else if (iParam0->f_5 != 5 && uVar20)
	{
		if ((uVar21 && bVar22) && bVar23)
		{
			func_240(iParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar22)
		{
			func_240(iParam0, 5, 1, "DEAD_BODY", 1, 0);
		}
	}
	else if (((((((iParam0->f_39 || iParam0->f_41) && (iParam0->f_86 || iParam0->f_87)) && iLocal_2573 == 9) && !unk_0x9D39145AD645E383(&(iParam0->f_9), "SEE_VAN_LEAVING")) && !unk_0x9D39145AD645E383(&(iParam0->f_9), "SEE_VAN_LEAVING_1")) && !unk_0x9D39145AD645E383(&(iParam0->f_9), "CHECK_DRIVER")) && func_103(unk_0x18F7BE9ACB7D08F4(), Local_642, 1) < 15f)
	{
		if (iParam0->f_39)
		{
			func_262(iParam0, 1, "SEE_VAN_LEAVING", Local_579[func_97() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_262(iParam0, 1, "HEARD_VAN", Local_579[func_97() /*8*/], 1, 1, 0);
		}
	}
	else if (iLocal_2573 != 9)
	{
		if ((iParam0->f_86 && (((iLocal_2573 == 0 || iLocal_2573 == 1) || iLocal_2573 == 4) || iParam0->f_5 == 1)) || (iParam0->f_87 && ((iLocal_2573 == 3 || iLocal_2573 == 2) || iLocal_2573 == 5)))
		{
			if ((iLocal_2573 == 5 || iLocal_2573 == 4) && unk_0xAAB9BF2904B9E7CE(*iParam0, iLocal_2576, 19))
			{
				switch (iLocal_2573)
				{
					case 5:
						StringCopy(&Var4, "WH_DITCH_VEH", 64);
						break;
					
					case 4:
						StringCopy(&Var4, "ENT_DITCH_VEH", 64);
						break;
				}
				func_240(iParam0, 2, 1, &Var4, 1, 0);
			}
			else if (iParam0->f_39)
			{
				switch (iLocal_2573)
				{
					case 0:
						StringCopy(&Var4, "ENT_FOOT", 64);
						break;
					
					case 1:
						StringCopy(&Var4, "ENT_VEH", 64);
						break;
					
					case 2:
						StringCopy(&Var4, "WH_FOOT", 64);
						break;
					
					case 3:
						StringCopy(&Var4, "WH_VEH", 64);
						break;
					
					case 5:
						StringCopy(&Var4, "WH_DITCH_VEH", 64);
						break;
					
					case 4:
						StringCopy(&Var4, "ENT_DITCH_VEH", 64);
						break;
					
					case -1:
						if (iParam0->f_5 == 1)
						{
							StringCopy(&Var4, "ENT_FOOT", 64);
						}
						break;
				}
				func_240(iParam0, 2, 1, &Var4, 1, 0);
			}
			else if (iParam0->f_41)
			{
				func_259(iParam0, 1, "HEARD_PLAYER", unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 1, 1, 0);
			}
		}
	}
	if (iParam0->f_34 > -1 && iParam0->f_34 < (Local_1709.f_0 - 1))
	{
		bVar24 = Local_1709[iParam0->f_34 /*32*/].f_30;
		switch (unk_0x6E987D62C8535B6E(&(Local_1709[iParam0->f_34 /*32*/].f_1)))
		{
			case joaat("killed"):
			case 1518302817:
			case -1298712083:
				if (iParam0->f_5 != 4)
				{
					func_240(iParam0, 5, 1, &(Local_1709[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case 185995093:
				if (iParam0->f_5 != 4)
				{
					func_240(iParam0, 3, 1, &(Local_1709[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -1645534839:
				if (iParam0->f_5 != 4)
				{
					if (func_103(*iParam0, Local_1709[iParam0->f_34 /*32*/].f_23, 1) < 5f)
					{
						func_240(iParam0, 4, 1, "GUN_AIMED_AT", 0, bVar24);
					}
					else
					{
						func_240(iParam0, 5, 1, "SEEN_WEAPON", 0, bVar24);
					}
				}
				break;
			
			case 880647822:
				if (iParam0->f_5 != 4)
				{
					func_240(iParam0, 5, 1, &(Local_1709[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case 1921975061:
				if (iParam0->f_5 != 4)
				{
					func_240(iParam0, 5, 1, &(Local_1709[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case joaat("fight"):
			case 1681313069:
			case 1156217463:
			case -419867425:
				if (iParam0->f_5 != 4)
				{
					func_240(iParam0, 3, 1, &(Local_1709[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case 1682434916:
			case -924218668:
			case 2056033185:
				if (((iParam0->f_5 != 4 && !unk_0x9D39145AD645E383(&(iParam0->f_9), "STEALING_VAN")) && !unk_0x9D39145AD645E383(&(iParam0->f_9), "GET_IN_VAN")) && !unk_0x9D39145AD645E383(&(iParam0->f_9), "EXIT_VAN"))
				{
					func_240(iParam0, 3, 1, &(Local_1709[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case joaat("gunshot"):
				if (iParam0->f_5 != 4)
				{
					func_240(iParam0, 5, 1, &(Local_1709[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -426892158:
				if (iParam0->f_86)
				{
					func_240(iParam0, 2, 1, &(Local_1709[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -1461435341:
				if (iParam0->f_86)
				{
					func_240(iParam0, 2, 1, &(Local_1709[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -972653884:
				if (iParam0->f_87)
				{
					func_240(iParam0, 2, 1, &(Local_1709[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -520621538:
				if (iParam0->f_87)
				{
					func_240(iParam0, 2, 1, &(Local_1709[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -1349994105:
				if (iParam0->f_87)
				{
					func_240(iParam0, 2, 1, &(Local_1709[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -1225951737:
				if (iParam0->f_87)
				{
					func_259(iParam0, 1, &(Local_1709[iParam0->f_34 /*32*/].f_1), unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1), 1, 0, bVar24);
				}
				break;
			
			case 2074432461:
				if (iParam0->f_87)
				{
					func_262(iParam0, 1, &(Local_1709[iParam0->f_34 /*32*/].f_1), Local_579[func_97() /*8*/], 1, 0, bVar24);
				}
				break;
			}
	}
	iParam0->f_34 = -1;
	if (iParam0->f_7 != iParam0->f_5)
	{
		iParam0->f_8 = 1;
	}
	else
	{
		iParam0->f_8 = 0;
	}
	iParam0->f_7 = iParam0->f_5;
	if (!unk_0x9D39145AD645E383(&(iParam0->f_25), &(iParam0->f_9)))
	{
		iParam0->f_33 = 1;
	}
	else
	{
		iParam0->f_33 = 0;
	}
	iParam0->f_25 = { iParam0->f_9 };
	iVar25 = 0;
	while (iVar25 < Local_28.f_0)
	{
		if (Local_28[iVar25 /*110*/] == *iParam0)
		{
			iVar26 = iVar25;
		}
		iVar25++;
	}
	switch (iParam0->f_5)
	{
		case 5:
			switch (unk_0x6E987D62C8535B6E(&(iParam0->f_9)))
			{
				case joaat("gunshot"):
				case 1921975061:
				case 880647822:
				case joaat("killed"):
				case 1518302817:
				case -1298712083:
					if ((func_272(*iParam0) || (iParam0->f_48 % 2) == 0) || !func_172(Local_469.f_0))
					{
						if ((unk_0x6E987D62C8535B6E(&(iParam0->f_9)) == joaat("gunshot") || unk_0x6E987D62C8535B6E(&(iParam0->f_9)) == 1921975061) || unk_0x6E987D62C8535B6E(&(iParam0->f_9)) == 880647822)
						{
							if (func_249(iVar26))
							{
								Var27 = { func_271(iVar26, "JS_GUN1") };
								if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_270(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_270(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else
							{
								switch (iVar26)
								{
									case 2:
										StringCopy(&Var27, "SOL1_ARM1", 24);
										break;
									
									case 3:
										StringCopy(&Var27, "SOL1_ARM2", 24);
										break;
								}
								if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_270(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_270(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
						}
						else if ((unk_0x6E987D62C8535B6E(&(iParam0->f_9)) == joaat("killed") || unk_0x6E987D62C8535B6E(&(iParam0->f_9)) == 1518302817) || unk_0x6E987D62C8535B6E(&(iParam0->f_9)) == -1298712083)
						{
							if (func_249(iVar26))
							{
								Var27 = { func_271(iVar26, "JS_KILL") };
								if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
								{
									func_270(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_270(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else if (iParam0->f_48 == 0)
							{
								func_270(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					else
					{
						if (func_249(iVar26))
						{
							Var27 = { func_271(iVar26, "JS_GETSEC") };
							if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_270(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 1);
							}
							else if (iParam0->f_48 == 0)
							{
								func_270(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_SECIN1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_SECIN2", 24);
									break;
							}
							if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_270(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 1);
							}
							else if (iParam0->f_48 == 0)
							{
								func_270(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						iParam0->f_48++;
					}
					break;
			}
			break;
		
		case 4:
			switch (unk_0x6E987D62C8535B6E(&(iParam0->f_9)))
			{
				case 1224761252:
					if (func_263(*iParam0, 4))
					{
						func_240(iParam0, 4, 0, "GUN_AIMED_AT", 1, 0);
					}
					else if ((unk_0x5AFB8ED811F05E4D() - iParam0->f_37) > 1000)
					{
						func_240(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					break;
				
				case -1645534839:
					if (func_263(*iParam0, 4))
					{
						func_240(iParam0, 4, 1, "GUN_AIMED_AT", 1, 0);
					}
					if (((unk_0x5AFB8ED811F05E4D() - iParam0->f_37) > 15000 || (unk_0x5AFB8ED811F05E4D() - iParam0->f_38) > 3000) && !unk_0x235B74E6F6192AE8(*iParam0))
					{
						func_240(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					else if (func_272(*iParam0) || iParam0->f_48 == 0)
					{
						if (func_249(iVar26))
						{
							Var27 = { func_271(iVar26, "JS_HND1") };
							if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_270(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_270(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_SCAR1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_SCAR2", 24);
									break;
							}
							if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_270(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_270(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					else
					{
						if (func_249(iVar26))
						{
							Var27 = { func_271(iVar26, "JS_HND1") };
							if (func_246(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_270(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_270(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_SCAR1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_SCAR2", 24);
									break;
							}
							if (func_246(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_270(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_270(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					break;
			}
			break;
		
		case 0:
			switch (iVar26)
			{
				case 1:
					if (func_43() && (unk_0x5AFB8ED811F05E4D() - iLocal_2524) > 5000)
					{
						switch (iLocal_2554)
						{
							case 0:
								func_246(iVar26, "JS_STOCK", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2554++;
								break;
							
							case 1:
								func_246(iVar26, "JS_STOCKb", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2554++;
								break;
							
							case 2:
								func_246(iVar26, "JS_STOCKc", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2554++;
								break;
							
							case 3:
								func_246(iVar26, "JS_STOCKd", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2554++;
								break;
							
							case 4:
								func_246(iVar26, "JS_STOCKe", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2554++;
								break;
							
							case 5:
								func_246(iVar26, "JS_STOCKf", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2554++;
								break;
							
							case 6:
								func_246(iVar26, "JS_STOCKg", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2554++;
								break;
							
							case 7:
								func_246(iVar26, "JS_STOCKh", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2554++;
								break;
							
							case 8:
								func_246(iVar26, "JS_STOCKi", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2554++;
								break;
							
							case 9:
								func_246(iVar26, "JS_STOCKj", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2554++;
								break;
							
							case 10:
								func_246(iVar26, "JS_STOCKk", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2554 = 0;
								break;
							}
					}
					break;
				
				case 2:
					if (!iParam0->f_49)
					{
						if (func_246(iVar26, "SOL1_AMB1", iParam0->f_5, 0, 0, 1, 0, 1, 0, 1))
						{
							func_40(&uLocal_2358, 4, Local_28[2 /*110*/], "CONSTRUCTION1", 0, 1);
							func_40(&uLocal_2358, 3, Local_28[3 /*110*/], "CONSTRUCTION2", 0, 1);
							iParam0->f_49 = 1;
						}
					}
					break;
			}
			break;
		
		case 1:
			if (unk_0x9D39145AD645E383(&(iParam0->f_9), "SEE_VAN_LEAVING") || unk_0x9D39145AD645E383(&(iParam0->f_9), "CHECK_DRIVER"))
			{
				Var36 = { func_269(unk_0x0AF3D0AB54EA2104(unk_0x18F7BE9ACB7D08F4(), 0f, 1f, 0f) - unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)) };
				Var39 = { func_269(unk_0x761660F5CE986DC4(Local_28[iVar26 /*110*/], 1) - unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1)) };
				uVar34 = func_268(Var36, Var39);
				fVar35 = unk_0xB8BD94C2D94AB538(uVar34);
				if ((fVar35 < 90f && fVar1 < 8f) && unk_0x2A72627520A107B5(unk_0x18F7BE9ACB7D08F4()) < 1f)
				{
					bVar33 = true;
				}
			}
			switch (unk_0x6E987D62C8535B6E(&(iParam0->f_9)))
			{
				case -414594135:
				case 1260350710:
					if (func_272(*iParam0) && unk_0x9D39145AD645E383(&(iParam0->f_9), "SEE_VAN_LEAVING"))
					{
						if (func_249(iVar26))
						{
							Var27 = { func_271(iVar26, "JS_VAN_LVE1") };
							func_246(iVar26, &Var27, iParam0->f_5, 1, 0, 1, 1000, 0, 0, 0);
						}
					}
					else if (bVar33)
					{
						func_262(iParam0, 1, "CHECK_DRIVER", Local_579[func_97() /*8*/], 0, 1, 0);
					}
					else if (func_103(unk_0x18F7BE9ACB7D08F4(), Local_642, 1) >= 20f)
					{
						if (fVar1 > 5f)
						{
							func_240(iParam0, 1, 0, "VAN_LOST", 1, 0);
						}
					}
					break;
				
				case 58299323:
					if (func_272(*iParam0))
					{
						Var27 = { func_271(iVar26, "JS_VAN_LVE2") };
						func_246(iVar26, &Var27, iParam0->f_5, 1, 0, 1, 0, 0, 0, 0);
					}
					else if ((unk_0x5AFB8ED811F05E4D() - iParam0->f_37) > 3000)
					{
						func_240(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				
				case 356486511:
					if (bVar33)
					{
						if ((unk_0x5AFB8ED811F05E4D() - iParam0->f_37) > 2000 && !unk_0x235B74E6F6192AE8(*iParam0))
						{
							func_240(iParam0, 3, 1, "STEALING_VAN", 1, 0);
						}
					}
					else
					{
						func_262(iParam0, 1, "SEE_VAN_LEAVING_1", Local_579[func_97() /*8*/], 0, 1, 0);
					}
					break;
				
				case -1225951737:
					if (((unk_0x5AFB8ED811F05E4D() - iParam0->f_37) > 4000 && func_103(*iParam0, iParam0->f_88, 1) < 3f) && unk_0x10793953843A66F7(*iParam0))
					{
						func_240(iParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					else if (func_272(*iParam0))
					{
						if (func_249(iVar26))
						{
							Var27 = { func_271(iVar26, "JS_SND_INV") };
							if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
							{
								func_270(iParam0, &(iParam0->f_9), &Var27, 3f, 3000, 500, 0, 0, 0);
							}
						}
					}
					break;
				
				case -927541383:
					if ((unk_0x5AFB8ED811F05E4D() - iParam0->f_37) > 4000 && !unk_0x235B74E6F6192AE8(*iParam0))
					{
						if (func_249(iVar26))
						{
							Var27 = { func_271(iVar26, "JS_SNDLOST2") };
							func_246(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
						func_240(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					else if (func_272(*iParam0))
					{
						if (func_249(iVar26))
						{
							Var27 = { func_271(iVar26, "JS_SNDLOST1") };
							func_246(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
					}
					break;
			}
			break;
		
		case 3:
			switch (unk_0x6E987D62C8535B6E(&(iParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
				case -419867425:
					if ((((unk_0x5AFB8ED811F05E4D() - iParam0->f_38) > 8000 && func_103(unk_0x18F7BE9ACB7D08F4(), Local_642, 1) > 65f) && (func_102(unk_0x18F7BE9ACB7D08F4(), *iParam0, 1) > 10f || (unk_0x5AFB8ED811F05E4D() - iParam0->f_38) > 16000)) && !unk_0x235B74E6F6192AE8(*iParam0))
					{
						func_240(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					else if (func_272(*iParam0) && iParam0->f_35)
					{
						if (!iParam0->f_84)
						{
							if (func_249(iVar26))
							{
								Var27 = { func_271(iVar26, "JS_MELE_1") };
								if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_270(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							else
							{
								switch (iVar26)
								{
									case 2:
										StringCopy(&Var27, "SOL1_FIGHT1", 24);
										break;
									
									case 3:
										StringCopy(&Var27, "SOL1_FIGHT2", 24);
										break;
								}
								if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_270(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							iParam0->f_84 = 1;
						}
						else if (func_249(iVar26))
						{
							Var27 = { func_271(iVar26, "JS_MELE_2") };
							if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_270(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 0, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_FIGHT1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_FIGHT2", 24);
									break;
							}
							if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_270(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 0, 0);
							}
						}
					}
					break;
				
				case 1093888274:
					if ((unk_0x5AFB8ED811F05E4D() - iParam0->f_37) > 4000)
					{
						func_240(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					if (func_272(*iParam0))
					{
						if (func_249(iVar26))
						{
							Var27 = { func_271(iVar26, "JS_MELE_ESC") };
							func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
						}
					}
					break;
				
				case 1682434916:
					if (((((unk_0x5AFB8ED811F05E4D() - iParam0->f_37) > 2000 && iParam0->f_39) && !unk_0x235B74E6F6192AE8(*iParam0)) && iLocal_2573 != 9) && iLocal_2573 != 10)
					{
						func_240(iParam0, 3, 0, "EXIT_VAN", 1, 0);
					}
					if (func_272(*iParam0))
					{
						if (func_249(iVar26))
						{
							Var27 = { func_271(iVar26, "JS_VAN_IN2") };
							if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_270(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_270(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_VAN2", 24);
									break;
							}
							if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_270(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_270(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (func_43() && (unk_0x5AFB8ED811F05E4D() - iLocal_2524) > 2000)
					{
						if (func_249(iVar26))
						{
							Var27 = { func_271(iVar26, "JS_VAN_TK") };
							if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_270(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
						}
					}
					break;
				
				case -924218668:
					if (func_272(*iParam0))
					{
						if (func_249(iVar26))
						{
							Var27 = { func_271(iVar26, "JS_VAN_IN1") };
							if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_270(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_270(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_VAN2", 24);
									break;
							}
							if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_270(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_270(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (func_43() && (unk_0x5AFB8ED811F05E4D() - iLocal_2524) > 2000)
					{
						if (func_249(iVar26))
						{
							Var27 = { func_271(iVar26, "JS_VAN_TK") };
							if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_270(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_270(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
				
				case 2056033185:
					if (func_272(*iParam0))
					{
						if (func_249(iVar26))
						{
							Var27 = { func_271(iVar26, "JS_VAN_IN2") };
							if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_270(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_270(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
						else
						{
							switch (iVar26)
							{
								case 2:
									StringCopy(&Var27, "SOL1_VAN1", 24);
									break;
								
								case 3:
									StringCopy(&Var27, "SOL1_VAN2", 24);
									break;
							}
							if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_270(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_270(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 2:
			if ((unk_0x5AFB8ED811F05E4D() - iParam0->f_38) > 5000 && !unk_0x235B74E6F6192AE8(*iParam0))
			{
				if (iVar26 == 1)
				{
					func_246(iVar26, "JS_STOCK2", 0, 0, 0, 1, 1000, 0, 0, 0);
					iLocal_2554 = 0;
				}
				func_240(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
			}
			else
			{
				if (iParam0->f_39)
				{
					if ((unk_0x5AFB8ED811F05E4D() - iParam0->f_38) > 1000 && !unk_0x235B74E6F6192AE8(*iParam0))
					{
						if (((unk_0x9D39145AD645E383(&(iParam0->f_9), "ENT_FOOT") || unk_0x9D39145AD645E383(&(iParam0->f_9), "ENT_VEH")) || unk_0x9D39145AD645E383(&(iParam0->f_9), "WH_FOOT")) || unk_0x9D39145AD645E383(&(iParam0->f_9), "WH_VEH"))
						{
							Var42 = { iParam0->f_9 };
							StringConCat(&Var42, "_LEAVE", 32);
							func_240(iParam0, 2, 0, &Var42, 1, 0);
						}
					}
					if ((unk_0x9D39145AD645E383(&(iParam0->f_9), "WH_FOOT") || unk_0x9D39145AD645E383(&(iParam0->f_9), "WH_VEH")) || (unk_0x9D39145AD645E383(&(iParam0->f_9), "WH_DITCH_VEH") && !unk_0x235B74E6F6192AE8(*iParam0)))
					{
						if (((iParam0->f_104 >= 6 && iLocal_2524 != -1) && (unk_0x5AFB8ED811F05E4D() - iLocal_2524) > 7000) && (unk_0x5AFB8ED811F05E4D() - iParam0->f_38) == 0)
						{
							func_240(iParam0, 3, 0, "WH_FAILED_LEAVE", 1, 0);
						}
					}
				}
				switch (unk_0x6E987D62C8535B6E(&(iParam0->f_9)))
				{
					case -426892158:
						if (func_272(*iParam0))
						{
							if (!iParam0->f_82)
							{
								if (func_249(iVar26))
								{
									if (!iParam0->f_83)
									{
										Var27 = { func_271(iVar26, "JS_ENT_F1") };
										func_246(iVar26, &Var27, iParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
									else
									{
										Var27 = { func_271(iVar26, "JS_ENT_F1_P") };
										func_246(iVar26, &Var27, iParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
								}
							}
							else if (func_249(iVar26))
							{
								if (!iParam0->f_83)
								{
									Var27 = { func_271(iVar26, "JS_ENT_F2") };
									func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
								else
								{
									Var27 = { func_271(iVar26, "JS_ENT_F2_P") };
									func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
							}
							iParam0->f_82 = 1;
						}
						else if (func_43() && (unk_0x5AFB8ED811F05E4D() - iLocal_2524) > 5000)
						{
							if (func_249(iVar26))
							{
								if (!iParam0->f_83)
								{
									Var27 = { func_271(iVar26, "JS_ENT_F") };
									func_246(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								else
								{
									Var27 = { func_271(iVar26, "JS_ENT_F_P") };
									func_246(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
							}
						}
						break;
					
					case -1461435341:
						if (func_272(*iParam0) || iParam0->f_48 == 0)
						{
							if (!iParam0->f_82)
							{
								if (func_249(iVar26))
								{
									Var27 = { func_271(iVar26, "JS_ENT_V1") };
									if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
									{
										iParam0->f_48++;
									}
								}
								iParam0->f_82 = 1;
							}
							else if (unk_0x9D39145AD645E383(&(iParam0->f_17), "WH_VEH"))
							{
								if (func_249(iVar26))
								{
									Var27 = { func_271(iVar26, "JS_ENT_V") };
									if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
									{
										iParam0->f_48++;
									}
								}
							}
							else if (func_249(iVar26))
							{
								Var27 = { func_271(iVar26, "JS_ENT_V3") };
								if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									iParam0->f_48++;
								}
							}
						}
						else if (func_43() && (unk_0x5AFB8ED811F05E4D() - iLocal_2524) > 5000)
						{
							if (func_249(iVar26))
							{
								Var27 = { func_271(iVar26, "JS_ENT_V3") };
								func_246(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							}
						}
						break;
					
					case -972653884:
						if (func_272(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_249(iVar26))
								{
									Var27 = { func_271(iVar26, "JS_WH1") };
									if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_270(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_270(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_249(iVar26))
								{
									Var27 = { func_271(iVar26, "JS_WH2") };
									if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_270(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_270(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (func_43() && (unk_0x5AFB8ED811F05E4D() - iLocal_2524) > 5000)
							{
								if (func_249(iVar26))
								{
									if (iParam0->f_104 < 5)
									{
										Var27 = { func_271(iVar26, "JS_WH") };
									}
									else
									{
										Var27 = { func_271(iVar26, "JS_WH_F") };
									}
									if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_270(iParam0, &(iParam0->f_9), &Var27, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_270(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case -640827668:
						if (func_272(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_249(iVar26))
								{
									Var27 = { func_271(iVar26, "JS_WH1") };
									if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_270(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_270(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_249(iVar26))
								{
									Var27 = { func_271(iVar26, "JS_WH2") };
									if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_270(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_270(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (func_43() && (unk_0x5AFB8ED811F05E4D() - iLocal_2524) > 5000)
							{
								if (func_249(iVar26))
								{
									if (iParam0->f_104 < 5)
									{
										if (((iParam0->f_104 - 1) % 2) == 0)
										{
											Var27 = { func_271(iVar26, "JS_ENT_V4") };
										}
										else
										{
											Var27 = { func_271(iVar26, "JS_ENT_V3") };
										}
									}
									else
									{
										Var27 = { func_271(iVar26, "JS_WH_F") };
									}
									if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_270(iParam0, &(iParam0->f_9), &Var27, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_270(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case -520621538:
						if (func_272(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_249(iVar26))
								{
									Var27 = { func_271(iVar26, "JS_WH1") };
									if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_270(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_270(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_249(iVar26))
								{
									Var27 = { func_271(iVar26, "JS_WH2") };
									if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_270(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_270(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (func_43() && (unk_0x5AFB8ED811F05E4D() - iLocal_2524) > 5000)
							{
								if (func_249(iVar26))
								{
									if (iParam0->f_104 < 5)
									{
										if (((iParam0->f_104 - 1) % 2) == 0)
										{
											Var27 = { func_271(iVar26, "JS_ENT_V3") };
										}
										else
										{
											Var27 = { func_271(iVar26, "JS_WH") };
										}
									}
									else
									{
										Var27 = { func_271(iVar26, "JS_WH_F") };
									}
									if (func_246(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_270(iParam0, &(iParam0->f_9), &Var27, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_270(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case 778765338:
						if (iParam0->f_48 == 0)
						{
							if (func_43() && (unk_0x5AFB8ED811F05E4D() - iLocal_2524) > 1000)
							{
								if (func_249(iVar26))
								{
									Var27 = { func_271(iVar26, "JS_ENT_V4") };
									func_246(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								iParam0->f_48++;
							}
						}
						else if (func_43() && (unk_0x5AFB8ED811F05E4D() - iLocal_2524) > 5000)
						{
							if (((iParam0->f_48 - 1) % 3) == 0)
							{
								Var27 = { func_271(iVar26, "JS_ENT_V4") };
							}
							else
							{
								Var27 = { func_271(iVar26, "JS_ENT_V3") };
							}
							func_246(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							iParam0->f_48++;
						}
						break;
					
					case 1580556320:
						if (iParam0->f_48 == 0)
						{
							if (func_43() && (unk_0x5AFB8ED811F05E4D() - iLocal_2524) > 1000)
							{
								if (func_249(iVar26))
								{
									if (!iParam0->f_83)
									{
										Var27 = { func_271(iVar26, "JS_ENT_F3") };
										func_246(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
									}
									else
									{
										Var27 = { func_271(iVar26, "JS_ENT_F3_P") };
										func_246(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
									}
								}
								iParam0->f_48++;
							}
						}
						break;
					
					case -1697689838:
					case -628260985:
					case -1891358342:
						if (iParam0->f_48 == 0)
						{
							if (func_43() && (unk_0x5AFB8ED811F05E4D() - iLocal_2524) > 1000)
							{
								if (func_249(iVar26))
								{
									Var27 = { func_271(iVar26, "JS_ENT_V5") };
									func_246(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								iParam0->f_48++;
							}
						}
						break;
					}
			}
			break;
	}
}

float func_268(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_269(struct<3> Param0)
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

void func_270(int iParam0, char* sParam1, char* sParam2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		if (Local_28[iVar0 /*110*/] == *iParam0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	iParam0->f_50 = iVar1;
	StringCopy(&(iParam0->f_50.f_1), sParam1, 64);
	StringCopy(&(iParam0->f_50.f_17), sParam2, 24);
	iParam0->f_50.f_28 = iParam4;
	iParam0->f_50.f_26 = fParam3;
	iParam0->f_50.f_29 = iParam5;
	iParam0->f_50.f_30 = iParam7;
	iParam0->f_50.f_31 = iParam8;
	if (bParam6)
	{
		func_243(&(iParam0->f_50), 0);
	}
}

struct<6> func_271(int iParam0, char* sParam1)
{
	struct<6> Var0;
	
	StringCopy(&Var0, sParam1, 24);
	if (iParam0 == 1)
	{
		StringConCat(&Var0, "b", 24);
	}
	return Var0;
}

int func_272(struct<34> Param0, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109)
{
	if (Param0.f_8 || Param0.f_33)
	{
		return 1;
	}
	return 0;
}

void func_273(int iParam0)
{
	if (unk_0x6A180E89A0F78BEE(*iParam0, unk_0x18F7BE9ACB7D08F4()))
	{
		iParam0->f_40 = unk_0x5AFB8ED811F05E4D();
		iParam0->f_39 = 1;
	}
	else if ((unk_0x5AFB8ED811F05E4D() - iParam0->f_40) > 2000 || !unk_0x3821A75ECC8A0D5B(*iParam0, unk_0x18F7BE9ACB7D08F4(), 90f))
	{
		iParam0->f_40 = unk_0x5AFB8ED811F05E4D();
		iParam0->f_39 = 0;
	}
	if (iParam0->f_39)
	{
		bLocal_2570 = false;
	}
	if (bLocal_2570)
	{
		unk_0xB05E48165A6F6058(*iParam0, 188, 1);
	}
	if (!func_274())
	{
		iParam0->f_41 = unk_0x28E6B7E85E30FD47(unk_0x8CFC7D6E1DA5D304(), *iParam0);
		if (iParam0->f_41)
		{
			iParam0->f_43 = { unk_0x761660F5CE986DC4(unk_0x18F7BE9ACB7D08F4(), 1) };
		}
	}
	else
	{
		iParam0->f_41 = 0;
	}
	switch (iParam0->f_5)
	{
		case 5:
		case 4:
		case 3:
			iParam0->f_102 = 1;
			break;
		
		default:
			iParam0->f_102 = 0;
			break;
	}
}

int func_274()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (unk_0x31F12808DC47A9E5(Local_579[iVar0 /*8*/]) && unk_0xC4B84EB67F78C1F0(Local_579[iVar0 /*8*/], 0))
		{
			if (unk_0x6F0091DD6AD2A9C8(Local_579[iVar0 /*8*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_275()
{
	struct<3> Var0;
	var uVar3;
	
	unk_0x48E76A4B7B58B77A("BUGSTAR", &iLocal_2525);
	unk_0xFB5F4D76105A21B5(3, joaat("player"), iLocal_2525);
	unk_0xFB5F4D76105A21B5(5, iLocal_2525, joaat("player"));
	unk_0xFB5F4D76105A21B5(1, joaat("COP"), iLocal_2525);
	unk_0xFB5F4D76105A21B5(1, iLocal_2525, joaat("COP"));
	unk_0x3B4B46A2A779D56E(Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f), Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f), 0, 1);
	unk_0xC3033060E0409665(Vector(7.27131f, -3092.467f, 138.4268f) - Vector(2.375f, 22.75f, 19.4375f), Vector(7.27131f, -3092.467f, 138.4268f) + Vector(2.375f, 22.75f, 19.4375f), 0);
	unk_0x7EE425AE3317BA69(138.43f, -3092.47f, 4.9f, 28.375f, 1, 0, 0, 0);
	if (func_186() || func_6(0))
	{
		iLocal_655 = 0;
		if (func_186())
		{
			if (Global_87151)
			{
				iLocal_655++;
			}
		}
		if (func_186())
		{
			func_227(iLocal_655, &Var0, &uVar3);
			func_281(Var0, uVar3, 1, 0);
		}
		bLocal_654 = true;
	}
	else
	{
		while (!func_181(1))
		{
			unk_0x4EDE34FBADD967A6(0);
			func_280(&uLocal_658);
		}
	}
	func_279(&uLocal_658, "JHP1A", 0);
	func_222(&uLocal_658, "misslsdhsclipboard@base");
	func_222(&uLocal_658, "misslsdhsclipboard@idle_a");
	func_222(&uLocal_658, "misstrevor3");
	func_164(&uLocal_658, joaat("p_amb_clipboard_01"));
	func_221(&uLocal_658, iLocal_2527);
	func_223(&uLocal_658, &cLocal_645);
	unk_0x0293CECDC1AEB119(unk_0x8CFC7D6E1DA5D304(), 0.15f);
	func_277(87);
	func_40(&uLocal_2358, 0, unk_0x18F7BE9ACB7D08F4(), "MICHAEL", 0, 1);
	func_40(&uLocal_2358, 3, 0, "LESTER", 0, 1);
	func_245(bLocal_2523);
	func_276();
	iLocal_2527 = unk_0x0E40E816537BFB87(Local_642, "po1_08_warehouseint1");
	unk_0xBD2C5223D2D5D36E(&cLocal_626);
	iLocal_2578 = unk_0x1701E0E6A11D6B65(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0, 1, 1, 1);
	while (!unk_0x9F22E45F3CF7EACA(0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_276()
{
	Global_87152 = 1;
}

void func_277(int iParam0)
{
	Global_88829 = 0;
	switch (iParam0)
	{
		case 72:
			func_278(2);
			func_278(4);
			break;
		
		case 73:
			func_278(0);
			func_278(1);
			func_278(7);
			break;
		
		case 92:
			func_278(10);
			func_278(9);
			func_278(13);
			func_278(6);
			break;
		
		case 68:
			func_278(11);
			break;
		
		case 78:
			func_278(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_278(3);
			break;
		
		default:
			break;
	}
}

void func_278(int iParam0)
{
	unk_0xD2A9C3F486236CC5(&Global_88829, iParam0);
}

int func_279(var uParam0, char* sParam1, int iParam2)
{
	if (uParam0->f_779[iParam2 /*5*/].f_1 || uParam0->f_779[iParam2 /*5*/])
	{
		if (unk_0x9D39145AD645E383(uParam0->f_779[iParam2 /*5*/].f_4, sParam1))
		{
			uParam0->f_779[iParam2 /*5*/].f_2 = 0;
			uParam0->f_982 = 1;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (iParam2 >= 11)
		{
			unk_0x53F6F87C56851564(sParam1, iParam2);
		}
		else
		{
			unk_0x8E058779F430F4D7(sParam1, iParam2);
		}
		uParam0->f_779[iParam2 /*5*/] = 1;
		uParam0->f_779[iParam2 /*5*/].f_3 = unk_0x5AFB8ED811F05E4D();
		uParam0->f_779[iParam2 /*5*/].f_4 = sParam1;
		uParam0->f_982 = 1;
		return 1;
	}
	return 0;
}

void func_280(var uParam0)
{
	func_229(uParam0);
}

void func_281(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (func_186())
	{
		unk_0xDA6A6B59F261B209(0);
		unk_0x62148293B793073B(&(Global_92829.f_20), 2);
		unk_0xDF94C6DB72E69D64(1);
		if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0xF70DE7344EBF0825(unk_0x8CFC7D6E1DA5D304(), 0, 0);
		}
		Global_92825 = { Param0 };
		Global_92828 = uParam3;
		Global_92824 = 1;
		if (iParam4 == 1)
		{
			unk_0xD2A9C3F486236CC5(&(Global_92829.f_20), 14);
		}
		else
		{
			unk_0x62148293B793073B(&(Global_92829.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0xD2A9C3F486236CC5(&(Global_92829.f_20), 24);
		}
		else
		{
			unk_0x62148293B793073B(&(Global_92829.f_20), 24);
		}
		func_185(1);
	}
}

void func_282(int iParam0)
{
	struct<3> Var0;
	char[] cVar6[8];
	
	if (iParam0 == 6)
	{
		func_294();
		func_8(0);
		unk_0x9BEA833CAF67289C("JHP1A_FAIL");
		unk_0x810C5D6462DD69E6();
	}
	else if (!bLocal_656)
	{
		bLocal_656 = true;
		iLocal_657 = iParam0;
		switch (iLocal_657)
		{
			case 1:
				StringCopy(&Var0, "JHP1A_VAN_DEAD", 24);
				break;
			
			case 3:
				StringCopy(&Var0, "JHP1A_VAN_STUCK", 24);
				break;
			
			case 2:
				StringCopy(&Var0, "JHP1A_VANS_DEAD", 24);
				break;
			
			case 4:
				StringCopy(&Var0, "JHP1A_VAN_ABAN", 24);
				break;
			
			case 5:
				StringCopy(&Var0, "JHP1A_ABAN", 24);
				break;
			
			case 0:
			default:
				StringCopy(&Var0, "JHP1A_FF", 24);
				break;
		}
		if (unk_0xFAFFA408239A026B(&cVar6))
		{
			func_292(&Var0);
		}
		else
		{
			func_283(&Var0, &cVar6);
		}
		unk_0x9BEA833CAF67289C("JHP1A_FAIL");
	}
}

void func_283(char* sParam0, char* sParam1)
{
	func_291(sParam0, sParam1);
	func_284(0);
}

void func_284(int iParam0)
{
	int iVar0;
	
	if (Global_104551.f_9055 || func_6(0))
	{
		iVar0 = func_4();
		if (!func_285(iVar0))
		{
			return;
		}
		unk_0xD2A9C3F486236CC5(&(Global_83726[iVar0 /*5*/].f_1), 5);
		Global_92865 = iParam0;
	}
}

int func_285(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_290();
	if (unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		unk_0x9B5795DB2523F9E4(5000);
	}
	iVar0 = Global_83726[iParam0 /*5*/];
	iVar1 = Global_71121.f_109[iVar0 /*4*/];
	func_289(iVar1, 1);
	unk_0x4C07032A7F363326(unk_0x8CFC7D6E1DA5D304());
	unk_0xD3DA12823F23AEE1(unk_0x8CFC7D6E1DA5D304());
	func_286(&(Global_104551.f_2353.f_539), iVar1);
	if (Global_87149 == Global_92866)
	{
		Global_104551.f_9055.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xB03A1684359C50A1(Global_83762[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
		{
			unk_0x3388DD13675FEE27(0);
		}
	}
	Global_104551.f_9055.f_330[iVar1 /*6*/].f_2++;
	Global_87149 = Global_92866;
	if (iParam0 == -1)
	{
		if (Global_104551.f_9055)
		{
		}
		return 0;
	}
	if (unk_0xB03A1684359C50A1(Global_83726[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xB03A1684359C50A1(Global_83726[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_286(var uParam0, int iParam1)
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
		iVar1 = Global_104551.f_18503[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xB03A1684359C50A1(Global_104551.f_9055.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_288(Global_104551.f_18503[iVar0], &Var2, &fVar5))
			{
				Global_104551.f_18503[iVar0] = 318;
				func_287(&(uParam0->f_2276[iVar0]));
				uParam0->f_2280[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2290[iVar0] = 0f;
				uParam0->f_2294[iVar0] = 0;
				uParam0->f_2298[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2308[iVar0] = 0;
				Global_90364[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_90364[iVar0 /*29*/].f_9 = 0f;
				Global_90364[iVar0 /*29*/].f_12 = 0f;
				Global_90364[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_90364[iVar0 /*29*/].f_10 = 0f;
				Global_90364[iVar0 /*29*/].f_13 = 0f;
				Global_90364[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_90364[iVar0 /*29*/].f_11 = 0f;
				Global_90364[iVar0 /*29*/].f_14 = 0f;
				Global_90364[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_90364[iVar0 /*29*/].f_26 = 0f;
				Global_90364[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_90364[iVar0 /*29*/].f_27 = 0f;
				Global_90364[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_90364[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_287(var uParam0)
{
	*uParam0 = -15;
}

int func_288(int iParam0, var uParam1, float fParam2)
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
			return func_288(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_288(8, uParam1, fParam2);
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

void func_289(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_86959[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_86959[iParam0 /*2*/] = 0;
	}
}

void func_290()
{
	Global_92864 = 1;
	if (unk_0xCED3310F81788C52(unk_0x8CFC7D6E1DA5D304(), 1))
	{
		if (unk_0xFAFFA408239A026B(&Global_71084))
		{
			switch (func_159())
			{
				case 0:
					StringCopy(&Global_71084, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_71084, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_71084, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_71088, "", 16);
		}
		Global_92864 = 0;
	}
	else if (!unk_0x557001354138B7FB(unk_0x8CFC7D6E1DA5D304()))
	{
		if (unk_0xFAFFA408239A026B(&Global_71084))
		{
			switch (func_159())
			{
				case 0:
					StringCopy(&Global_71084, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_71084, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_71084, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_71088, "", 16);
		}
		Global_92864 = 0;
		unk_0xD2A9C3F486236CC5(&(Global_92829.f_20), 25);
	}
}

void func_291(char* sParam0, char* sParam1)
{
	if (!unk_0xFAFFA408239A026B(sParam0))
	{
		if (unk_0xD0437E6CE31A3AC9(sParam0) <= 16)
		{
			if (unk_0xD0437E6CE31A3AC9(sParam1) <= 16)
			{
				StringCopy(&Global_71084, sParam0, 16);
				StringCopy(&Global_71088, sParam1, 16);
			}
		}
	}
}

void func_292(char* sParam0)
{
	func_293(sParam0);
	func_284(0);
}

void func_293(char* sParam0)
{
	if (!unk_0xFAFFA408239A026B(sParam0))
	{
		if (unk_0xD0437E6CE31A3AC9(sParam0) <= 16)
		{
			StringCopy(&Global_71084, sParam0, 16);
			StringCopy(&Global_71088, "", 16);
			if (unk_0xA7255C604D37FB1D())
			{
				unk_0x0AA13E237790EE7C();
			}
		}
	}
}

void func_294()
{
	int iVar0;
	
	if (unk_0xC040FCA5F6E73B3E("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_104551.f_9055 || func_6(0))
	{
		if (!func_295())
		{
			iVar0 = func_4();
			if (iVar0 != -1)
			{
				if (!func_285(iVar0))
				{
					return;
				}
				unk_0xD2A9C3F486236CC5(&(Global_83726[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_290();
		}
	}
}

int func_295()
{
	if (((Global_92829 == 13 || Global_92829 == 10) || Global_92829 == 11) || Global_92829 == 12)
	{
		return 0;
	}
	return 1;
}

