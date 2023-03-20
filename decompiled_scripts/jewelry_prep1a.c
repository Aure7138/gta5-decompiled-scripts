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
	var uLocal_1437 = 15;
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
	var uLocal_1532 = 10;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
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
	var uLocal_1583 = 5;
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
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 5;
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
	var uLocal_1639 = 3;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 1092616192;
	var uLocal_1646 = 1101004800;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 3;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	struct<8> Local_1663[5];
	struct<32> Local_1704[20];
	char cLocal_2345[32] = "";
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 16;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
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
	bool bLocal_2518 = 0;
	int iLocal_2519 = 0;
	int iLocal_2520 = 0;
	var uLocal_2521 = 0;
	int iLocal_2522 = 0;
	int iLocal_2523 = 0;
	int iLocal_2524 = 0;
	struct<2> Local_2525 = { 0, 0 } ;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	char cLocal_2529[16] = "";
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	int iLocal_2533 = 0;
	float fLocal_2534 = 0f;
	int iLocal_2535 = 0;
	int iLocal_2536 = 0;
	int iLocal_2537 = 0;
	int iLocal_2538 = 0;
	int iLocal_2539 = 0;
	int iLocal_2540 = 0;
	char cLocal_2541[16] = "";
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	int iLocal_2545 = 0;
	int iLocal_2546 = 0;
	bool bLocal_2547 = 0;
	int iLocal_2548 = 0;
	int iLocal_2549 = 0;
	int iLocal_2550 = 0;
	int iLocal_2551 = 0;
	struct<2> Local_2552 = { 0, 0 } ;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	struct<2> Local_2556 = { 0, 0 } ;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	int iLocal_2560 = 0;
	bool bLocal_2561 = 0;
	int iLocal_2562 = 0;
	int iLocal_2563 = 0;
	int iLocal_2564 = 0;
	bool bLocal_2565 = 0;
	int iLocal_2566 = 0;
	int iLocal_2567 = 0;
	int iLocal_2568 = 0;
	int iLocal_2569 = 0;
	int iLocal_2570 = 0;
	int iLocal_2571 = 0;
	int iLocal_2572 = 0;
	int iLocal_2573 = 0;
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
	iLocal_2519 = -1;
	iLocal_2523 = -1;
	iLocal_2524 = -1;
	StringCopy(&Local_2525, "", 16);
	StringCopy(&cLocal_2529, "", 16);
	fLocal_2534 = 1E+08f;
	iLocal_2537 = 1;
	iLocal_2540 = -1;
	StringCopy(&cLocal_2541, "", 16);
	iLocal_2545 = -1;
	iLocal_2546 = 1;
	iLocal_2550 = -1;
	iLocal_2551 = -1;
	StringCopy(&Local_2552, "", 16);
	StringCopy(&Local_2556, "", 16);
	iLocal_2560 = 1;
	iLocal_2562 = 1;
	iLocal_2566 = -1;
	iLocal_2568 = -1;
	iLocal_2569 = -1;
	if (unk_0x89522B8E487D4EF9(3))
	{
		func_268(6);
	}
	unk_0x3F95CDEE236B6AD7(1);
	func_261();
	func_220();
	while (true)
	{
		unk_0xE10447427D928F55("M_JewelStoreJobPrep1A", 0);
		if (bLocal_656)
		{
			func_218();
		}
		func_215(&uLocal_658);
		func_176();
		if (!bLocal_654)
		{
			func_174();
			func_163();
			func_162(&Local_1663);
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
	
	if ((iLocal_2569 != -1 && unk_0xD51CFE69539DB6D8(Local_579[iLocal_2569 /*8*/])) && unk_0xC45A34912542C4EB(Local_579[iLocal_2569 /*8*/], 0))
	{
		iVar0 = unk_0x8219941CC4732B36(Local_579[iLocal_2569 /*8*/]);
		func_23(Local_579[iLocal_2569 /*8*/], -1);
	}
	if (iVar0 >= 750 || iVar0 <= 0)
	{
		Global_87783 = 1000;
	}
	else
	{
		Global_87783 = iVar0;
	}
	if (!func_22(&(Local_1663[3 /*8*/])))
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
	unk_0x52F20802944F8DCE();
}

void func_3(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55580)
	{
		Global_55580 = iParam1;
	}
	if (bParam0)
	{
		if ((func_6(0) && Global_69482.f_1 == 1) && func_5(Global_69482))
		{
		}
		else
		{
			Global_55578 = 1;
		}
	}
	if (Global_99155.f_7699 || func_6(0))
	{
		iVar0 = func_4();
		iVar1 = Global_82110[iVar0 /*5*/];
		uVar2 = Global_69505.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_99155.f_7699)
			{
			}
			return;
		}
		if (unk_0xB519E5386FBF69E5(Global_82110[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xB519E5386FBF69E5(Global_82110[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x9956FB0E4B50ECB8(&(Global_82110[iVar0 /*5*/].f_1), 4);
		unk_0x9956FB0E4B50ECB8(&Global_69484, 1);
		Global_69500 = uVar2;
		Global_69501 = unk_0x9D40BBF80D8F5E8A();
	}
}

int func_4()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xB519E5386FBF69E5(Global_82110[iVar0 /*5*/].f_1, 2))
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
	if (!bParam0 && unk_0xFF6891E21E7FC193(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB519E5386FBF69E5(Global_69484, 0);
}

int func_7(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_99155.f_7699.f_330[iParam0 /*6*/];
}

void func_8(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0x00400F14096FE01D();
	unk_0x1D208E4A4E1D4FFE(1);
	if (bParam0)
	{
		unk_0x297E769770D04E42(unk_0x3F80C6638E3A1A90());
		unk_0xE72D045151F6CA70("JHP1A_FAIL");
	}
	else
	{
		unk_0x63EB72E192731928(1f);
		unk_0x88727A27E3B839FB(unk_0x3F80C6638E3A1A90(), 1f);
	}
	unk_0x8C1CE4F676968E94(5);
	unk_0x33E519C1449D7A54(unk_0x3F80C6638E3A1A90(), 1);
	unk_0x0DC2F8EF73751B15(1);
	func_18(&Local_1663);
	func_13(&uLocal_1638, 1, 0);
	bLocal_2518 = false;
	iLocal_2519 = -1;
	iLocal_2563 = 0;
	iLocal_2564 = 0;
	bLocal_2565 = false;
	iLocal_2566 = -1;
	iLocal_2568 = -1;
	iLocal_2569 = -1;
	iLocal_2570 = 0;
	iLocal_2571 = 0;
	iLocal_2567 = 0;
	if (bParam0)
	{
		func_11();
		unk_0xDE31B2587775EDAD(unk_0xE7869D5D7816A9B6());
		unk_0x297E769770D04E42(unk_0x3F80C6638E3A1A90());
		unk_0xB0A7E0A62FB61A06(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0x9A48C517359EE773(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0xFF08C54E7EC23A77(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0xC797AB6C3A6482E1(158.78f, -3100.44f, 6.0019f, 100f, 0, 0, 0, 0, 0);
		unk_0x28705A5E63C175CC(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0x1DA595C2C10DA7E3(158.78f, -3100.44f, 6.0019f, 100f);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_620)
	{
		if (unk_0xD51CFE69539DB6D8(iLocal_620[iVar0]))
		{
			if (bParam0)
			{
				unk_0xD4E454973E16D31B(&(iLocal_620[iVar0]));
			}
			else
			{
				unk_0x9083C015A6C271BD(&(iLocal_620[iVar0]));
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
			if (unk_0xD51CFE69539DB6D8(Local_579[iVar0 /*8*/].f_2[iVar1]))
			{
				if (bParam0)
				{
					unk_0x2C9DDB5306DF417C(&(Local_579[iVar0 /*8*/].f_2[iVar1]));
				}
				else
				{
					unk_0x506D42CB68AE4EA5(&(Local_579[iVar0 /*8*/].f_2[iVar1]));
				}
			}
			iVar1++;
		}
		if (unk_0xD51CFE69539DB6D8(Local_579[iVar0 /*8*/]))
		{
			if (bParam0)
			{
				unk_0x9E55BD45B84E7BDC(&(Local_579[iVar0 /*8*/]));
			}
			else
			{
				unk_0xC1F2137782A816E9(&(Local_579[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
	if (unk_0xDF44EE1798BF710F(&cLocal_626))
	{
		unk_0xD808DFD2DD2A38F5(&cLocal_626, bParam0);
	}
	if (iLocal_2573 != 0)
	{
		unk_0x3AD14BFC20FCADDB(iLocal_2573, 0);
	}
	func_9();
}

void func_9()
{
	Global_87213 = 0;
}

void func_10(var uParam0, bool bParam1)
{
	if (unk_0xD51CFE69539DB6D8(*uParam0))
	{
		if (bParam1)
		{
			unk_0x2C9DDB5306DF417C(uParam0);
		}
		else
		{
			unk_0x506D42CB68AE4EA5(uParam0);
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
	if (unk_0xD51CFE69539DB6D8(uParam0->f_105))
	{
		if (unk_0xD55D878601C46BA9(uParam0->f_105))
		{
			unk_0x27B54A887EC71B05(uParam0->f_105, 1, 1);
		}
		if (bParam1)
		{
			unk_0xD4E454973E16D31B(&(uParam0->f_105));
		}
		else
		{
			unk_0x9083C015A6C271BD(&(uParam0->f_105));
		}
	}
	uParam0->f_106 = -1;
	uParam0->f_107 = 0;
	uParam0->f_109 = 0;
	uParam0->f_104 = 0;
}

void func_11()
{
	Global_14578 = 0;
	func_12();
}

void func_12()
{
	unk_0xACA77D3E6C847C83();
	Global_16723 = 0;
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xDA09A6E60FE9645E(0);
		Global_15712 = 6;
	}
}

void func_13(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xB519E5386FBF69E5(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_17(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD11595488376CB53(uParam0->f_1[iVar0]))
		{
			unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_1[iVar0]));
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
			unk_0x73817D396768E4C6(&(uParam0->f_13), iVar0);
			unk_0x73817D396768E4C6(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0xD11595488376CB53(*uParam0))
	{
		unk_0x5B62CAB9B0D6ABF1(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar0]))
		{
			unk_0xA6ED3077A967AC63(uParam0->f_17[iVar0], 1);
			unk_0xD9404A1491ECECC4(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0x1C26C4B0DAB91B21(uParam0->f_17[iVar0], 32, 1);
				unk_0x1C26C4B0DAB91B21(uParam0->f_17[iVar0], 305, 0);
			}
			unk_0x1C26C4B0DAB91B21(uParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0xCA9354733F0AE57E(uParam0->f_17[iVar0], func_14()) && uParam0->f_17[iVar0] != unk_0xE7869D5D7816A9B6())
				{
					unk_0x46D4C1D7588933FB(uParam0->f_17[iVar0]);
				}
			}
			if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 29))
			{
				unk_0x0C8881432DA64087(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		unk_0xA6ED3077A967AC63(unk_0xE7869D5D7816A9B6(), 1);
		unk_0xD9404A1491ECECC4(unk_0xE7869D5D7816A9B6(), 1);
	}
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (bParam2)
		{
			unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

var func_14()
{
	return unk_0xF6138D85451616EC(unk_0xBFAE5F9DEC53DAE2());
}

void func_15(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x73817D396768E4C6(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x73817D396768E4C6(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x73817D396768E4C6(&(uParam1->f_13), 19);
			break;
	}
}

void func_16(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x73817D396768E4C6(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x73817D396768E4C6(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x73817D396768E4C6(&(uParam1->f_13), 16);
			break;
	}
}

void func_17(var uParam0)
{
	if (unk_0xD11595488376CB53(uParam0->f_5))
	{
		unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_5));
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
	
	Global_55579 = 0;
	if (!Global_55803[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_67673)
	{
		if (Global_67674[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_67674[iVar1 /*9*/].f_1 = 1;
			Global_67674[iVar1 /*9*/].f_2 = 0f;
			if (Global_67674[iVar1 /*9*/].f_3 == 2)
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
	
	Global_55591 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67673)
	{
		if (iParam1 == -1 || Global_67674[iVar0 /*9*/] == iParam1)
		{
			if (Global_67674[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67674[iVar0 /*9*/].f_6 = iParam0;
				Global_67674[iVar0 /*9*/].f_7 = 1;
				Global_67674[iVar0 /*9*/].f_8 = 0;
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
		func_161(&uLocal_658, "SCRIPT\JWL_HA_RAID_STORE");
		func_160(&uLocal_658, joaat("s_m_m_security_01"));
		func_159(&(Local_1663[1 /*8*/]), 0, 0, 1);
		func_159(&(Local_1663[0 /*8*/]), 0, 0, 1);
		func_159(&(Local_1663[4 /*8*/]), 0, 0, 1);
		func_105(0f, 0f, 0f, 0f, 1, func_155());
		Global_87783 = 1000;
		unk_0x63EB72E192731928(0.1f);
		func_104("JHP1A_STEAL_BSV", 7500, 1);
		bLocal_653 = true;
	}
	if (bLocal_653)
	{
		switch (iLocal_652)
		{
			case 0:
				if (func_99(1) == 0)
				{
					func_13(&uLocal_1638, 1, 0);
					func_23(0, -1);
					func_98(0, -1);
				}
				else if ((func_97() && unk_0xD51CFE69539DB6D8(Local_579[func_96() /*8*/])) && unk_0xC45A34912542C4EB(Local_579[func_96() /*8*/], 0))
				{
					unk_0xCE8A419ECD46FA8F(0.5f);
					if (iLocal_2569 != func_96())
					{
						unk_0xD73158C5794398B4(5f, 10f, 4);
						func_23(Local_579[func_96() /*8*/], -1);
						func_98(Local_579[func_96() /*8*/], -1);
						iLocal_2569 = func_96();
					}
					if (func_94(&uLocal_1638, 692.8256f, -1012.544f, 21.722f, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 1, Local_579[func_96() /*8*/], "", "", "", 1, 0, 1, -1))
					{
						iLocal_652++;
					}
				}
				else if (func_93())
				{
					unk_0xCE8A419ECD46FA8F(0.5f);
					func_49(&uLocal_1638, 692.8256f, -1012.544f, 21.722f, 0.1f, 0.1f, 0.1f, 1, iLocal_2570, "", "", "", 1, 0, 1, -1);
					if (unk_0x22E902D6AF27E232(Local_579[func_48() /*8*/], 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0, 1, 0))
					{
						iLocal_652++;
					}
				}
				else
				{
					func_17(&uLocal_1638);
					func_23(0, -1);
					func_98(0, -1);
				}
				break;
			
			case 1:
				if (func_97())
				{
					if (func_47(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), 5f, 1, 1056964608, 0, 1, 0))
					{
						bVar0 = true;
					}
				}
				else if (func_93())
				{
					if (func_47(iLocal_2570, 5f, 1, 1056964608, 0, 1, 0))
					{
						bVar0 = true;
					}
				}
				if (bVar0)
				{
					if (func_7(88))
					{
						unk_0xD73158C5794398B4(5f, 10f, 4);
						unk_0x2EF7A8CB89D363F6(unk_0xE7869D5D7816A9B6(), 1);
						func_46(1);
						func_45(1, 0);
						iLocal_652 = 1000;
					}
					else
					{
						unk_0xD73158C5794398B4(5f, 10f, 4);
						iLocal_652++;
					}
					if (func_97())
					{
						unk_0x4F6C6B452FA34B13(Local_579[iLocal_2569 /*8*/], 0);
					}
					else if (func_93())
					{
						unk_0x4F6C6B452FA34B13(Local_579[func_48() /*8*/], 0);
						unk_0x12F88FDE652A5758(Local_579[func_48() /*8*/], 1);
						unk_0x88FD9923BDF55C95(Local_579[func_48() /*8*/]);
					}
					unk_0xCD7A5BCC47D00FB2(unk_0xE7869D5D7816A9B6(), 0, 0);
				}
				break;
			
			case 2:
				if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
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
					func_40(&uLocal_2353, 3, 0, "LESTER", 0, 1);
					if (func_28(&uLocal_2353, 12, "JHFAUD", "JHF_P10c", 8, 1, 0, 0, 0))
					{
						iLocal_652++;
					}
				}
				break;
			
			case 1001:
				func_45(1, 0);
				if (func_27())
				{
					unk_0xD73158C5794398B4(5f, 10f, 4);
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
	
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		unk_0xD39141689169EF06(unk_0xE7869D5D7816A9B6(), 0, 0, 0, 0, 0, 0, 0, 0);
		unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 157, 1);
		unk_0x2EF7A8CB89D363F6(unk_0xE7869D5D7816A9B6(), 0);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD51CFE69539DB6D8(Global_88727[iVar0]))
		{
			if (!unk_0x76B2D234F1895632(Global_88727[iVar0]))
			{
				unk_0xD39141689169EF06(Global_88727[iVar0], 0, 0, 0, 0, 0, 0, 0, 0);
				unk_0x2EF7A8CB89D363F6(Global_88727[iVar0], 0);
			}
		}
		iVar0++;
	}
	if ((Global_35619 != 0 && Global_35619 != 3) && Global_35619 != 2)
	{
		unk_0x8C1CE4F676968E94(5);
		unk_0x63EB72E192731928(1f);
	}
}

int func_27()
{
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_28(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_39(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	if (iParam5 == 1)
	{
		Global_15724 = 1;
	}
	else
	{
		Global_15724 = 0;
	}
	Global_2621441 = 0;
	return func_29(sParam3, iParam4, bParam8);
}

int func_29(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xDA09A6E60FE9645E(0);
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
					func_38();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0xF0A330A29F97AA7E())
		{
			return 0;
		}
		if (func_37(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_36();
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
			unk_0x73817D396768E4C6(&Global_2283, 20);
			unk_0x73817D396768E4C6(&Global_2284, 17);
			unk_0x73817D396768E4C6(&Global_2285, 0);
			if (bParam2)
			{
				func_34();
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
			if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
			{
				if (unk_0xC3AE89795D844EE9(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (func_33())
				{
					return 0;
				}
				if (unk_0x25AE83AAAFB359D8(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x8E2CF6ACCED3BD0F(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x3A065D524128D33B(unk_0xE7869D5D7816A9B6()))
				{
					return 0;
				}
				if (unk_0x14618ECB1EB17B8F(unk_0xE7869D5D7816A9B6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69236)
				{
					if (unk_0xA7D2A868253353BE(unk_0xE7869D5D7816A9B6()))
					{
						return 0;
					}
					if (unk_0x39CB1B5DEC5DD307(unk_0x3F80C6638E3A1A90()))
					{
						return 0;
					}
					if (unk_0xA7AC3687807201B4(unk_0xE7869D5D7816A9B6()))
					{
						return 0;
					}
					if (unk_0x3CD36EADD6272F29(unk_0x3F80C6638E3A1A90()))
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
				if (unk_0xB519E5386FBF69E5(Global_2283, 9))
				{
					return 0;
				}
			}
			func_31();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_30();
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
		StringCopy(&(Global_14580[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xDA09A6E60FE9645E(0);
	Global_15712 = 1;
}

void func_31()
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
	unk_0x73817D396768E4C6(&Global_2284, 16);
}

int func_32()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_33()
{
	int iVar0;
	int iVar1;
	
	if (Global_69236)
	{
		iVar0 = 0;
		unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &iVar1, 1);
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x834CA326769DA173() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (unk_0x9699041CFA6517D2(unk_0xE7869D5D7816A9B6(), 78, 1))
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
		if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()) == Global_99155.f_32499[2 /*29*/])
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
		Global_14413 = func_155();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69236)
		{
			Global_14413 = 3;
		}
		if (Global_14413 > 3)
		{
			Global_14413 = 3;
		}
	}
}

bool func_35(int iParam0)
{
	return Global_35619 == iParam0;
}

void func_36()
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

bool func_37(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1338577.f_203[iParam1];
			}
			break;
	}
	return unk_0xB519E5386FBF69E5(Global_1338577.f_949, iParam0);
}

void func_38()
{
	unk_0xACA77D3E6C847C83();
	Global_16723 = 0;
	if ((unk_0xD6F17BA188A65E8F() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0xDA09A6E60FE9645E(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xDA09A6E60FE9645E(1);
		Global_15712 = 6;
		return;
	}
}

void func_39(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	if (!Global_69236)
	{
		if (!unk_0xAF437D7C802AB246(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0xA6ED3077A967AC63(iParam2, 0);
			}
			else
			{
				unk_0xA6ED3077A967AC63(iParam2, 1);
			}
		}
		if (!unk_0xAF437D7C802AB246(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0x7294CF31F80E052D(iParam2, 0);
			}
			else
			{
				unk_0x7294CF31F80E052D(iParam2, 1);
			}
		}
	}
}

void func_41()
{
	Global_14578 = 0;
	func_42();
}

void func_42()
{
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xACA77D3E6C847C83();
		Global_16723 = 0;
		unk_0xDA09A6E60FE9645E(1);
		Global_15712 = 6;
		return;
	}
}

int func_43()
{
	if (func_44())
	{
		return 0;
	}
	if (unk_0xA7E452C0F82F7C56())
	{
		if (unk_0x13ACC601BB29A690())
		{
			return 0;
		}
	}
	return 1;
}

int func_44()
{
	if (Global_15712 != 0 || unk_0xF0A330A29F97AA7E())
	{
		return 1;
	}
	return 0;
}

void func_45(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		unk_0x8CCCC48313B0F20F(0, 21, 1);
	}
	unk_0x8CCCC48313B0F20F(0, 25, 1);
	unk_0x8CCCC48313B0F20F(0, 24, 1);
	unk_0x8CCCC48313B0F20F(0, 257, 1);
	unk_0x8CCCC48313B0F20F(0, 141, 1);
	unk_0x8CCCC48313B0F20F(0, 140, 1);
	unk_0x8CCCC48313B0F20F(0, 22, 1);
	unk_0x8CCCC48313B0F20F(0, 44, 1);
	unk_0x8CCCC48313B0F20F(0, 23, 1);
	unk_0x8CCCC48313B0F20F(0, 47, 1);
	unk_0x8CCCC48313B0F20F(0, 36, 1);
	if (bParam0)
	{
		unk_0x8CCCC48313B0F20F(0, 37, 1);
	}
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		if (bParam1)
		{
			unk_0x97A05AC1E676667E(unk_0xE7869D5D7816A9B6(), 2f);
		}
		else
		{
			unk_0x97A05AC1E676667E(unk_0xE7869D5D7816A9B6(), 1f);
		}
		unk_0xC31A3F1982C7B12B(unk_0xE7869D5D7816A9B6(), 102, 1);
	}
	if (unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
	{
		unk_0x297E769770D04E42(unk_0x3F80C6638E3A1A90());
	}
}

void func_46(bool bParam0)
{
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		unk_0xD39141689169EF06(unk_0xE7869D5D7816A9B6(), 1, 1, 1, 1, 1, 0, 0, 0);
		unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 157, 0);
		unk_0x2EF7A8CB89D363F6(unk_0xE7869D5D7816A9B6(), 1);
		unk_0xA3A83FA0784C86DE(unk_0xE7869D5D7816A9B6(), 0, 0);
		if (bParam0)
		{
			unk_0x36EE5CBF45EC4826(unk_0xE7869D5D7816A9B6(), joaat("weapon_unarmed"), 0);
		}
		unk_0x60F73C5C71B102FE(unk_0xE7869D5D7816A9B6(), 0);
	}
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		unk_0x297E769770D04E42(unk_0x3F80C6638E3A1A90());
	}
	unk_0x8C1CE4F676968E94(0);
	unk_0x63EB72E192731928(0f);
}

int func_47(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x8CCCC48313B0F20F(0, 71, 1);
	unk_0x8CCCC48313B0F20F(0, 72, 1);
	unk_0x8CCCC48313B0F20F(0, 76, 1);
	unk_0x8CCCC48313B0F20F(0, 73, 1);
	unk_0x8CCCC48313B0F20F(0, 59, 1);
	unk_0x8CCCC48313B0F20F(0, 60, 1);
	if (bParam5)
	{
		unk_0x8CCCC48313B0F20F(0, 75, 1);
	}
	unk_0x8CCCC48313B0F20F(0, 80, 1);
	if (!bParam6)
	{
		unk_0x8CCCC48313B0F20F(0, 69, 1);
		unk_0x8CCCC48313B0F20F(0, 70, 1);
		unk_0x8CCCC48313B0F20F(0, 68, 1);
	}
	unk_0x8CCCC48313B0F20F(0, 74, 1);
	unk_0x8CCCC48313B0F20F(0, 86, 1);
	unk_0x8CCCC48313B0F20F(0, 81, 1);
	unk_0x8CCCC48313B0F20F(0, 82, 1);
	unk_0x8CCCC48313B0F20F(0, 138, 1);
	unk_0x8CCCC48313B0F20F(0, 136, 1);
	unk_0x8CCCC48313B0F20F(0, 114, 1);
	unk_0x8CCCC48313B0F20F(0, 107, 1);
	unk_0x8CCCC48313B0F20F(0, 110, 1);
	unk_0x8CCCC48313B0F20F(0, 89, 1);
	unk_0x8CCCC48313B0F20F(0, 89, 1);
	unk_0x8CCCC48313B0F20F(0, 87, 1);
	unk_0x8CCCC48313B0F20F(0, 88, 1);
	unk_0x8CCCC48313B0F20F(0, 113, 1);
	unk_0x8CCCC48313B0F20F(0, 115, 1);
	unk_0x8CCCC48313B0F20F(0, 116, 1);
	unk_0x8CCCC48313B0F20F(0, 117, 1);
	unk_0x8CCCC48313B0F20F(0, 118, 1);
	unk_0x8CCCC48313B0F20F(0, 119, 1);
	unk_0x8CCCC48313B0F20F(0, 131, 1);
	unk_0x8CCCC48313B0F20F(0, 132, 1);
	unk_0x8CCCC48313B0F20F(0, 123, 1);
	unk_0x8CCCC48313B0F20F(0, 126, 1);
	unk_0x8CCCC48313B0F20F(0, 129, 1);
	unk_0x8CCCC48313B0F20F(0, 130, 1);
	unk_0x8CCCC48313B0F20F(0, 133, 1);
	unk_0x8CCCC48313B0F20F(0, 134, 1);
	unk_0x01E20DCCA2C958A3();
	if ((unk_0x9D40BBF80D8F5E8A() - Global_29) > 500)
	{
		unk_0x1B9F8E5CCC384F1E(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x9D40BBF80D8F5E8A();
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		if (unk_0x7F38A542899D217A(unk_0xD4F0FC8FFEDE152B(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_48()
{
	int iVar0;
	
	if (func_93())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0xD51CFE69539DB6D8(Local_579[iVar0 /*8*/]) && unk_0xC45A34912542C4EB(Local_579[iVar0 /*8*/], 0))
			{
				if (unk_0x3E29DD6D10980B6B(iLocal_2570, Local_579[iVar0 /*8*/]))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_49(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15)
{
	return func_50(uParam0, Param1, Param4, func_92(), func_92(), iParam7, 5, 0, 0, 0, iParam8, sParam9, func_91(), func_91(), func_91(), func_91(), sParam10, 0, bParam12, sParam11, 0, iParam13, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

int func_50(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)
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
	func_90(uParam0);
	func_89(uParam0);
	func_88();
	if (func_72(uParam0, uParam0->f_17[0], uParam0->f_17[1], uParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, uParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		func_71(sParam20);
		func_71(sParam21);
		func_71(sParam22);
		func_71(sParam23);
		if (unk_0xDE185266FE919B68())
		{
			bVar1 = false;
			if (unk_0xC45A34912542C4EB(iParam18, 0))
			{
				if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iParam18, 0))
				{
					unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 3);
					if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 9))
					{
						unk_0x73817D396768E4C6(&(uParam0->f_13), 4);
					}
					if (unk_0xB519E5386FBF69E5(uParam0->f_13, 23))
					{
						unk_0x73817D396768E4C6(&(uParam0->f_13), 23);
					}
					unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_69(uParam0, iParam29))
				{
					unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 3);
					if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 9))
					{
						unk_0x73817D396768E4C6(&(uParam0->f_13), 4);
					}
					unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_71(sParam24);
				func_71(sParam27);
				func_71("MORE_SEATS");
				if (bParam26 && unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
				{
					if (unk_0xD11595488376CB53(uParam0->f_5))
					{
						unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_5));
						func_71(sParam19);
					}
					if (unk_0xD11595488376CB53(*uParam0))
					{
						unk_0x5B62CAB9B0D6ABF1(uParam0);
					}
					if ((!func_66(uParam0, 1) && !func_65(uParam0)) && !unk_0xB519E5386FBF69E5(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_64(uParam0, "LOSE_WANTED", 0);
							if (!unk_0xAF437D7C802AB246(uParam0->f_17[0]))
							{
								func_62(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 0);
						unk_0x73817D396768E4C6(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xB519E5386FBF69E5(uParam0->f_13, 0))
					{
						func_71("LOSE_WANTED");
						unk_0x73817D396768E4C6(&(uParam0->f_13), 0);
						unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 1);
					}
					if (unk_0xB519E5386FBF69E5(uParam0->f_13, 1))
					{
						if (!func_66(uParam0, 1))
						{
							if (!unk_0xAF437D7C802AB246(uParam0->f_17[0]))
							{
								func_62(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x73817D396768E4C6(&(uParam0->f_13), 1);
						}
					}
					if (!unk_0xD11595488376CB53(uParam0->f_5))
					{
						if (unk_0xD11595488376CB53(*uParam0))
						{
							unk_0x5B62CAB9B0D6ABF1(uParam0);
						}
						uParam0->f_5 = func_61(Var3, 0);
						if (!iParam31 == -1)
						{
							unk_0xD65A9304AF8AC06F(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_60(uParam0->f_5, uParam0);
						}
					}
					else if (!func_59(Var3, unk_0x35EF1BE316B17AE9(uParam0->f_5), 0.1f, 0))
					{
						unk_0x4CF4101B43DF5CB0(uParam0->f_5, Var3);
						if (bParam35)
						{
							func_60(uParam0->f_5, uParam0);
						}
					}
					if (!func_66(uParam0, 2))
					{
						if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 2))
						{
							func_64(uParam0, sParam19, 0);
							unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (unk_0xB519E5386FBF69E5(uParam0->f_13, 13))
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
						unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Param1, Param4, iParam13, iVar6, iVar7);
						if (unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), Param7, Param10, fParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
									if (!unk_0x8AF655CC5761C7A2(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!unk_0x8AF655CC5761C7A2(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0xCA9354733F0AE57E(uParam0->f_17[iVar2], func_14()) || !func_57(uParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_54(uParam0))
							{
								func_71(sParam19);
								func_71(sParam24);
								func_71(sParam20);
								func_71(sParam21);
								func_71(sParam22);
								func_71(sParam23);
								func_71("LOSE_WANTED");
								func_71("MORE_SEATS");
								func_71(sParam27);
								func_13(uParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0xD51CFE69539DB6D8(iParam18))
			{
				if ((bParam26 && unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0)) && (!unk_0xB519E5386FBF69E5(uParam0->f_13, 9) && !unk_0xB519E5386FBF69E5(uParam0->f_13, 22)))
				{
					func_71(sParam24);
					func_71(sParam27);
					if (unk_0xD11595488376CB53(uParam0->f_5) || unk_0xD11595488376CB53(*uParam0))
					{
						unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_5));
						unk_0x5B62CAB9B0D6ABF1(uParam0);
						func_71(sParam19);
					}
					if ((!func_66(uParam0, 1) && !func_65(uParam0)) && !unk_0xB519E5386FBF69E5(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_64(uParam0, "LOSE_WANTED", 0);
							if (!unk_0xAF437D7C802AB246(uParam0->f_17[0]))
							{
								func_62(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 0);
						unk_0x73817D396768E4C6(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xB519E5386FBF69E5(uParam0->f_13, 0))
					{
						func_71("LOSE_WANTED");
						unk_0x73817D396768E4C6(&(uParam0->f_13), 0);
						unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 1);
					}
					if (unk_0xB519E5386FBF69E5(uParam0->f_13, 1))
					{
						if (!func_66(uParam0, 1))
						{
							if (!unk_0xAF437D7C802AB246(uParam0->f_17[0]))
							{
								func_62(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0x73817D396768E4C6(&(uParam0->f_13), 1);
						}
					}
					if (unk_0xC45A34912542C4EB(iParam18, 0))
					{
						if (!unk_0xD11595488376CB53(*uParam0))
						{
							if (unk_0xD11595488376CB53(uParam0->f_5))
							{
								unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_5));
								func_71(sParam19);
							}
							*uParam0 = func_51(iParam18, 0, 0);
							unk_0x4808D91D69951AC2(*uParam0, 2);
							if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 4))
							{
								func_60(*uParam0, uParam0);
							}
						}
						if (!func_66(uParam0, 2))
						{
							if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 3))
							{
								func_64(uParam0, sParam24, 0);
								unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 3);
								unk_0x73817D396768E4C6(&(uParam0->f_13), 4);
							}
							else if (unk_0xB519E5386FBF69E5(uParam0->f_13, 9))
							{
								if (!unk_0x356491C12DAD1A37(sParam27))
								{
									if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 4))
									{
										func_64(uParam0, sParam27, 0);
										unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 4);
									}
								}
								else if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 4))
								{
									func_64(uParam0, sParam24, 0);
									unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 4);
								}
								if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 23))
								{
									if (!unk_0xAF437D7C802AB246(uParam0->f_17[0]))
									{
										func_62(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xD11595488376CB53(uParam0->f_5))
				{
					unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_5));
					func_71(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_66(uParam0, 2))
						{
							if (unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
							{
								if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = unk_0x0ADD324BC46177EF(0, iVar8);
									if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar9]))
									{
										func_62(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_64(uParam0, "MORE_SEATS", 0);
									unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 13);
								}
							}
							else if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 3))
							{
								func_64(uParam0, sParam24, 0);
								unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 3);
								unk_0x73817D396768E4C6(&(uParam0->f_13), 4);
							}
							else if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 4))
							{
								if (unk_0xB519E5386FBF69E5(uParam0->f_13, 9))
								{
									func_64(uParam0, sParam27, 0);
									unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_66(uParam0, 2))
					{
						if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 3))
						{
							func_64(uParam0, sParam24, 0);
							unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 3);
							unk_0x73817D396768E4C6(&(uParam0->f_13), 4);
						}
						else if (unk_0xB519E5386FBF69E5(uParam0->f_13, 9))
						{
							if (!unk_0x356491C12DAD1A37(sParam27))
							{
								if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 4))
								{
									func_64(uParam0, sParam27, 0);
									unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 4);
								}
							}
							else if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 4))
							{
								func_64(uParam0, sParam24, 0);
								unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xB519E5386FBF69E5(uParam0->f_13, 0))
		{
			unk_0x73817D396768E4C6(&(uParam0->f_13), 0);
		}
		func_71(sParam19);
		func_71(sParam24);
		func_71(sParam27);
		func_71(sParam24);
		func_71("LOSE_WANTED");
		if (unk_0xD11595488376CB53(uParam0->f_5))
		{
			unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_5));
		}
		if (unk_0xD11595488376CB53(*uParam0))
		{
			unk_0x5B62CAB9B0D6ABF1(uParam0);
		}
	}
	unk_0x73817D396768E4C6(&(uParam0->f_13), 11);
	unk_0x73817D396768E4C6(&(uParam0->f_13), 12);
	return 0;
}

int func_51(int iParam0, bool bParam1, bool bParam2)
{
	return func_52(iParam0, !bParam1, bParam2);
}

int func_52(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD51CFE69539DB6D8(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xF800CF9298ABC708(iParam0);
	if (unk_0x8C1ED5BB2888BA25(iParam0))
	{
		unk_0xFC630C7120A34CE4(uVar0, func_53(unk_0x00AAD79B42B3E036(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x4ADC112587E95B61(uVar0, bParam1);
		}
		else
		{
			unk_0xA887303978A245B8(uVar0, 2);
		}
	}
	else if (unk_0x41B17741CACC905E(iParam0))
	{
		unk_0xFC630C7120A34CE4(uVar0, func_53(unk_0x00AAD79B42B3E036(), 0.7f, 0.7f));
		unk_0x4ADC112587E95B61(uVar0, bParam1);
	}
	else if (unk_0xC2F1E05878620398(iParam0))
	{
		unk_0xFC630C7120A34CE4(uVar0, func_53(unk_0x00AAD79B42B3E036(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_53(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_54(var uParam0)
{
	if (unk_0xB519E5386FBF69E5(uParam0->f_13, 12))
	{
		if (func_56(unk_0xE7869D5D7816A9B6()))
		{
			if (func_55(1, 0, 1) || unk_0xB519E5386FBF69E5(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_55(1, 0, 1) || unk_0xB519E5386FBF69E5(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_55(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x9DAD36BD64512352())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		if (!unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
		{
			return 0;
		}
		iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
		if (bParam0)
		{
			if (unk_0x76B2D234F1895632(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x76B2D234F1895632(iVar0))
			{
				if (unk_0xBD6B21D725712BDE(iVar0, -1) != unk_0xE7869D5D7816A9B6())
				{
					return 0;
				}
			}
		}
		if (!unk_0x76B2D234F1895632(iVar0))
		{
			if (unk_0x58D00CB831F3E1D3(iVar0) < 0.95f || unk_0x58D00CB831F3E1D3(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x69CFD69005B7F5D7(unk_0x3F80C6638E3A1A90()))
	{
		return 0;
	}
	if (!unk_0x380205D43AE9485A(unk_0x3F80C6638E3A1A90()))
	{
		return 0;
	}
	return 1;
}

int func_56(int iParam0)
{
	float fVar0;
	
	if (!unk_0xAF437D7C802AB246(iParam0))
	{
		fVar0 = unk_0xD4F0FC8FFEDE152B(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_57(int iParam0, int iParam1)
{
	if (!unk_0xAF437D7C802AB246(iParam0))
	{
		if (unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()) && iParam1)
		{
			if (func_58(unk_0xE7869D5D7816A9B6(), iParam0))
			{
				unk_0x03E55D89BC1D3144(func_14(), 50f);
				return 1;
			}
		}
		else if (unk_0xCA9354733F0AE57E(iParam0, func_14()))
		{
			unk_0x03E55D89BC1D3144(func_14(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_58(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xAF437D7C802AB246(iParam0))
	{
		if (unk_0x471E33531AEA977D(iParam0))
		{
			iVar0 = unk_0xF0295FF51F2D7803(iParam0, 0);
			if (unk_0xC45A34912542C4EB(iVar0, 0))
			{
				if (!unk_0xAF437D7C802AB246(iParam1))
				{
					if (unk_0xF50745B40235B5B8(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_59(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (unk_0x7F38A542899D217A((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x7F38A542899D217A((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x7F38A542899D217A((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x7F38A542899D217A((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x7F38A542899D217A((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_60(var uParam0, var uParam1)
{
	if (unk_0xD11595488376CB53(uParam0))
	{
		if (unk_0xD11595488376CB53(uParam1->f_6))
		{
			unk_0x1AD7485666C5160C(uParam1->f_6, 0);
		}
		unk_0x680E7900A7AC1C49(0);
		unk_0x5288DF8B264BDD67();
		uParam1->f_6 = uParam0;
		unk_0x1AD7485666C5160C(uParam0, 1);
	}
}

var func_61(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x3779A616B93955A6(Param0);
	unk_0xFC630C7120A34CE4(uVar0, func_53(unk_0x00AAD79B42B3E036(), 1f, 1f));
	unk_0x1AD7485666C5160C(uVar0, iParam3);
	return uVar0;
}

void func_62(var uParam0, char* sParam1, int iParam2)
{
	unk_0x489E3B00AFB0758C(uParam0, sParam1, func_63(iParam2), 1);
}

int func_63(int iParam0)
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

void func_64(var uParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0x356491C12DAD1A37(sParam1))
		{
			if (!unk_0x04E7E853E31F41A3(sParam1, ""))
			{
				func_104(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x9D40BBF80D8F5E8A();
}

int func_65(var uParam0)
{
	if (!unk_0xAF437D7C802AB246(uParam0->f_16))
	{
		if (unk_0x2AA9423D1F896887(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_66(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0xA7E452C0F82F7C56())
	{
		if (unk_0x13ACC601BB29A690())
		{
			return 1;
		}
		if (func_68(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0xA7E452C0F82F7C56())
	{
		if (func_44() && !func_67())
		{
			return 1;
		}
	}
	return 0;
}

int func_67()
{
	if (Global_16723 == 1)
	{
		return 1;
	}
	return 0;
}

int func_68(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x9D40BBF80D8F5E8A();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_69(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
		if (func_70(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_70(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0xD51CFE69539DB6D8(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x25ECA1DD55F6CB7F(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x8AEBD01597B5BA5E(iParam0, 1))
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
				if (!unk_0x8AEBD01597B5BA5E(iParam0, 1))
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

void func_71(char* sParam0)
{
	if (!unk_0x356491C12DAD1A37(sParam0))
	{
		unk_0x621ABFDE5A901516(sParam0);
	}
}

int func_72(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, var uParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
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
		if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
		{
			if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 29) && !unk_0xB519E5386FBF69E5(uParam0->f_13, 28))
			{
				if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar0]))
				{
					unk_0x0C8881432DA64087(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 29) && unk_0xB519E5386FBF69E5(uParam0->f_13, 28))
		{
			if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar0]))
			{
				unk_0x0C8881432DA64087(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0x73817D396768E4C6(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0xB519E5386FBF69E5(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!unk_0xD51CFE69539DB6D8(uParam0->f_21))
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
			iVar24 = unk_0x46B0F3CB5DC1CDFC(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), 50f, 0, iVar25);
			if (unk_0xC45A34912542C4EB(iVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (unk_0xC45A34912542C4EB(uParam0->f_21, 0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), unk_0x1141852D07400777(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
				{
					if (!unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0) || !bParam17)
					{
						if (func_70(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar0]))
								{
									unk_0x97A05AC1E676667E(uParam0->f_17[iVar0], 1f);
									if (unk_0xCA9354733F0AE57E(uParam0->f_17[iVar0], func_14()))
									{
										unk_0x46D4C1D7588933FB(uParam0->f_17[iVar0]);
									}
									if (unk_0xC47857E5E74EA5AF(uParam0->f_17[iVar0], -1794415470) == 7 && !func_87(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x8E2CF6ACCED3BD0F(uParam0->f_17[iVar0]) && !unk_0x0BEB89C5B6DBEA8E(uParam0->f_17[iVar0]))
										{
											unk_0x9BEE7E791BC4D38B(uParam0->f_17[iVar0], 1);
											unk_0x65682335D54DEA1C(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0xD8F094CB1BFE6F88(uParam0->f_17[iVar0], iVar0);
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
			unk_0x73817D396768E4C6(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar0]))
				{
					if (!unk_0xF3140D055686CF79(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0xFA2C5C2D054C888E(uParam0->f_17[iVar0]);
					}
					if (!unk_0xCA9354733F0AE57E(uParam0->f_17[iVar0], func_14()))
					{
						if (func_85(uParam0, uParam0->f_17[iVar0], uParam8, 1))
						{
							unk_0x560F88FE1A93011B(uParam0->f_17[iVar0], func_14());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 26))
	{
		if ((!func_84(uParam0) && unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6())) && !unk_0xD51CFE69539DB6D8(iParam10))
		{
			iVar13 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
			if (unk_0xC45A34912542C4EB(iVar13, 0))
			{
				if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_66(uParam0, 2))
					{
						iVar26 = 0;
						iVar27 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = unk_0x0ADD324BC46177EF(0, iVar26);
						if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar27]))
						{
							func_62(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_64(uParam0, "MORE_SEATS", 0);
						unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			unk_0x73817D396768E4C6(&(uParam0->f_13), 13);
			func_71("MORE_SEATS");
		}
		if (!unk_0xD51CFE69539DB6D8(iParam10))
		{
			if ((!unk_0xAF437D7C802AB246(uParam0->f_17[0]) || !unk_0xAF437D7C802AB246(uParam0->f_17[1])) || !unk_0xAF437D7C802AB246(uParam0->f_17[2]))
			{
				if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 31))
				{
					if (unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()) && !func_66(uParam0, 2))
					{
						iVar13 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
						if (func_83(iVar13, uParam0))
						{
							func_64(uParam0, "CMN_VEHSUIT", 0);
							unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
				{
					unk_0x73817D396768E4C6(&(uParam0->f_13), 31);
					func_71("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0xC45A34912542C4EB(iParam10, 0))
		{
			if (unk_0xF50745B40235B5B8(unk_0xE7869D5D7816A9B6(), iParam10))
			{
				if (unk_0x958B4351DD28B142(0, 75))
				{
					unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0xB519E5386FBF69E5(uParam0->f_13, 21))
			{
				unk_0x73817D396768E4C6(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xD51CFE69539DB6D8(uParam0->f_17[iVar0]))
			{
				if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar0]))
				{
					if (!unk_0xCA9354733F0AE57E(uParam0->f_17[iVar0], func_14()))
					{
						unk_0xD03433F048B6A79A(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0xD03433F048B6A79A(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
					{
						iVar13 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
						if (unk_0xC45A34912542C4EB(iVar13, 0))
						{
							if (unk_0xCA9354733F0AE57E(uParam0->f_17[iVar0], func_14()))
							{
								if (!func_84(uParam0) && unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
								{
									if (!func_82(uParam0->f_17[iVar0]))
									{
										unk_0x46D4C1D7588933FB(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !unk_0x76B2D234F1895632(iVar13))
						{
							if (unk_0xF50745B40235B5B8(uParam0->f_17[iVar0], iVar13))
							{
								if (unk_0xA7D2A868253353BE(iVar13) && !unk_0x0E9BAAAE8317091B(iVar13))
								{
									Var28 = { unk_0x1141852D07400777(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										unk_0x663F1B23D2C4D20A(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!unk_0xCA9354733F0AE57E(uParam0->f_17[iVar0], func_14()))
					{
						if (unk_0x471E33531AEA977D(uParam0->f_17[iVar0]))
						{
							iVar13 = unk_0xF0295FF51F2D7803(uParam0->f_17[iVar0], 0);
							if (!unk_0x76B2D234F1895632(iVar13))
							{
								if (unk_0xC45A34912542C4EB(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!unk_0xF50745B40235B5B8(unk_0xE7869D5D7816A9B6(), iVar13))
										{
											if (unk_0xD4F0FC8FFEDE152B(iVar13) > 5f)
											{
												unk_0x663F1B23D2C4D20A(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x663F1B23D2C4D20A(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
									{
										iVar31 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
									}
									if (unk_0xC45A34912542C4EB(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (unk_0xD4F0FC8FFEDE152B(iVar13) > 5f)
											{
												unk_0x663F1B23D2C4D20A(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x663F1B23D2C4D20A(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0xCA9354733F0AE57E(uParam0->f_17[iVar0], func_14()))
					{
						iVar32 = unk_0x03291915DC767232(unk_0xE7869D5D7816A9B6());
						if (unk_0xD51CFE69539DB6D8(iVar32))
						{
							if (func_70(iVar32, uParam0, 0))
							{
								if (func_81(iVar0, uParam0) || !unk_0xB519E5386FBF69E5(uParam0->f_13, 27))
								{
									unk_0xD8F094CB1BFE6F88(uParam0->f_17[iVar0], iVar0);
									func_15(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_81(iVar0, uParam0))
							{
								if (unk_0x1B2DC87EFB36DF80(iVar32) == joaat("sentinel2"))
								{
									unk_0xD8F094CB1BFE6F88(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0xD8F094CB1BFE6F88(uParam0->f_17[iVar0], 2);
								}
								func_80(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0xCA9354733F0AE57E(uParam0->f_17[iVar0], func_14()) && !func_79(uParam0->f_17[iVar0], iParam10)) && !func_78(uParam0->f_17[iVar0], iParam10))
					{
						if (func_85(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
						{
							if (!unk_0xCA9354733F0AE57E(uParam0->f_17[iVar0], func_14()))
							{
								if (((!unk_0x8E2CF6ACCED3BD0F(uParam0->f_17[iVar0]) && !unk_0x0BEB89C5B6DBEA8E(uParam0->f_17[iVar0])) && !unk_0xA49E19CA305DE808(uParam0->f_17[iVar0])) && !unk_0xF3140D055686CF79(uParam0->f_17[iVar0]))
								{
									iVar14 = unk_0xC47857E5E74EA5AF(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										unk_0xFA2C5C2D054C888E(uParam0->f_17[iVar0]);
									}
									unk_0x560F88FE1A93011B(uParam0->f_17[iVar0], func_14());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!unk_0xD11595488376CB53(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x9D40BBF80D8F5E8A();
								uParam0->f_1[iVar0] = func_51(uParam0->f_17[iVar0], 0, 0);
								unk_0x4808D91D69951AC2(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_60(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xD11595488376CB53(uParam0->f_1[iVar0]))
					{
						if (((func_57(uParam0->f_17[iVar0], 1) || func_79(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0xC45A34912542C4EB(iParam10, 0) && !unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iParam10, 0)))
						{
							if (unk_0xD11595488376CB53(uParam0->f_1[iVar0]))
							{
								unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_1[iVar0]));
								func_71(uVar15[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_60(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (unk_0xC45A34912542C4EB(iParam10, 0))
					{
						if (!unk_0xF50745B40235B5B8(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x0E6C083BC5101C8B(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0xB519E5386FBF69E5(uParam0->f_13, 11)) && !((bParam17 && unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0)) && !unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iParam10, 0)))
							{
								if (unk_0x471E33531AEA977D(uParam0->f_17[iVar0]))
								{
									if (!unk_0x8AF655CC5761C7A2(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_57(uParam0->f_17[iVar0], 1))
										{
											if (func_56(uParam0->f_17[iVar0]))
											{
												iVar14 = unk_0xC47857E5E74EA5AF(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													unk_0xCD7A5BCC47D00FB2(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0xCA9354733F0AE57E(uParam0->f_17[iVar0], func_14()))
									{
										if ((((!unk_0xA49E19CA305DE808(uParam0->f_17[iVar0]) && !unk_0x8E2CF6ACCED3BD0F(uParam0->f_17[iVar0])) && !unk_0x0BEB89C5B6DBEA8E(uParam0->f_17[iVar0])) && !unk_0xF3140D055686CF79(uParam0->f_17[iVar0])) && !unk_0x9DD85FBDD5BC3BF1(iParam10))
										{
											unk_0x46D4C1D7588933FB(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = unk_0xC47857E5E74EA5AF(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_87(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0xA49E19CA305DE808(uParam0->f_17[iVar0]) && !unk_0xA49E19CA305DE808(unk_0xE7869D5D7816A9B6())) && !func_77(uParam0->f_17[iVar0], 2f)) && !unk_0x8E2CF6ACCED3BD0F(uParam0->f_17[iVar0])) && !unk_0x0BEB89C5B6DBEA8E(uParam0->f_17[iVar0])) && !unk_0x9DD85FBDD5BC3BF1(iParam10))
										{
											unk_0x9BEE7E791BC4D38B(uParam0->f_17[iVar0], 1);
											if (unk_0xB519E5386FBF69E5(uParam0->f_13, 10))
											{
												unk_0x97A05AC1E676667E(uParam0->f_17[iVar0], 1f);
											}
											unk_0x65682335D54DEA1C(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0x97432097EDCCE1DF(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_51(uParam0->f_17[iVar0], 0, 0);
										unk_0x4808D91D69951AC2(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0xCA9354733F0AE57E(uParam0->f_17[iVar0], func_14()))
							{
								if (func_85(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
								{
									if (!unk_0x8E2CF6ACCED3BD0F(uParam0->f_17[iVar0]) && !unk_0x0BEB89C5B6DBEA8E(uParam0->f_17[iVar0]))
									{
										iVar14 = unk_0xC47857E5E74EA5AF(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											unk_0xFA2C5C2D054C888E(uParam0->f_17[iVar0]);
										}
										unk_0x9BEE7E791BC4D38B(uParam0->f_17[iVar0], 0);
										unk_0x560F88FE1A93011B(uParam0->f_17[iVar0], func_14());
									}
								}
							}
						}
						else if (unk_0xF50745B40235B5B8(unk_0xE7869D5D7816A9B6(), iParam10))
						{
							if (!unk_0xCA9354733F0AE57E(uParam0->f_17[iVar0], func_14()))
							{
								if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 21))
								{
									unk_0x560F88FE1A93011B(uParam0->f_17[iVar0], func_14());
								}
							}
							else if (unk_0xB519E5386FBF69E5(uParam0->f_13, 21))
							{
								unk_0x46D4C1D7588933FB(uParam0->f_17[iVar0]);
								unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0xCA9354733F0AE57E(uParam0->f_17[iVar0], func_14()) && !unk_0x9DD85FBDD5BC3BF1(iParam10))
						{
							unk_0x46D4C1D7588933FB(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0xD11595488376CB53(uParam0->f_1[iVar0]))
				{
					unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_1[iVar0]));
					func_71(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xD11595488376CB53(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_66(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar0]))
						{
							if (func_82(uParam0->f_17[iVar0]) || unk_0x0E6C083BC5101C8B(uParam0->f_17[iVar0], unk_0xE7869D5D7816A9B6(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar0]))
					{
						if (!unk_0x0E6C083BC5101C8B(uParam0->f_17[iVar0], unk_0xE7869D5D7816A9B6(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_82(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x9D40BBF80D8F5E8A();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 5))
							{
								func_64(uParam0, sParam7, 0);
								unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 5);
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
									if (!func_76(iVar0, uParam0))
									{
										if (!unk_0x356491C12DAD1A37(uVar19[iVar0]))
										{
											if (!unk_0x04E7E853E31F41A3(uVar19[iVar0], ""))
											{
												func_74(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_73(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_76(iVar0, uParam0))
										{
											func_64(uParam0, uVar15[iVar0], 0);
											func_73(iVar0, uParam0);
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
		unk_0x73817D396768E4C6(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0xD11595488376CB53(uParam0->f_1[iVar0]))
				{
					unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_1[iVar0]));
					func_71(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_71("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_73(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_13), 16);
			break;
	}
}

void func_74(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x356491C12DAD1A37(uParam1))
		{
			if (!unk_0x04E7E853E31F41A3(sParam1, ""))
			{
				func_75(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x9D40BBF80D8F5E8A();
}

void func_75(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0x81E3FE28C9E14CDE(uParam0);
	unk_0x9359E7CC54335EB9(uParam1);
	unk_0xE45B7EE472DD7F7F(iParam2, 1);
}

int func_76(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xB519E5386FBF69E5(uParam1->f_13, 14);
		
		case 1:
			return unk_0xB519E5386FBF69E5(uParam1->f_13, 15);
		
		case 2:
			return unk_0xB519E5386FBF69E5(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_77(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x51374A0BB2871E6E(iParam0, 0))
	{
		iVar0 = unk_0xF0295FF51F2D7803(iParam0, 0);
		if (!unk_0x76B2D234F1895632(iVar0))
		{
			if (unk_0xD4F0FC8FFEDE152B(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_78(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xAF437D7C802AB246(iParam0))
	{
		if (!unk_0xCA9354733F0AE57E(iParam0, func_14()))
		{
			iVar0 = unk_0x811668789F0F4837(iParam0);
			if (unk_0xC45A34912542C4EB(iParam1, 0))
			{
				if (unk_0x0E6C083BC5101C8B(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
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

int func_79(int iParam0, int iParam1)
{
	if (!unk_0xAF437D7C802AB246(iParam0))
	{
		if (unk_0xD51CFE69539DB6D8(iParam1))
		{
			if (unk_0xC45A34912542C4EB(iParam1, 0))
			{
				if (unk_0xF50745B40235B5B8(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_80(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_13), 19);
			break;
	}
}

int func_81(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xB519E5386FBF69E5(uParam1->f_13, 17);
		
		case 1:
			return unk_0xB519E5386FBF69E5(uParam1->f_13, 18);
		
		case 2:
			return unk_0xB519E5386FBF69E5(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		iVar0 = unk_0x03291915DC767232(unk_0xE7869D5D7816A9B6());
		if (unk_0xC45A34912542C4EB(iVar0, 0))
		{
			if (!unk_0xAF437D7C802AB246(iParam0))
			{
				iVar1 = unk_0x03291915DC767232(iParam0);
				if (unk_0xC45A34912542C4EB(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0x0E6C083BC5101C8B(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_83(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		if (unk_0x1B2DC87EFB36DF80(iParam0) == joaat("bus") || unk_0x1B2DC87EFB36DF80(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0xAF437D7C802AB246(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0xBD6B21D725712BDE(iParam0, 0);
			if (!unk_0xAF437D7C802AB246(iVar3))
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
			iVar4 = unk_0xBD6B21D725712BDE(iParam0, 1);
			if (!unk_0xAF437D7C802AB246(iVar4))
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
			iVar5 = unk_0xBD6B21D725712BDE(iParam0, 2);
			if (!unk_0xAF437D7C802AB246(iVar5))
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

int func_84(var uParam0)
{
	int iVar0;
	
	if (unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
	{
		iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
		if (func_70(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_85(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0xAF437D7C802AB246(iParam1))
	{
		if (unk_0x471E33531AEA977D(iParam1))
		{
			iVar0 = unk_0xF0295FF51F2D7803(iParam1, 0);
			if (!unk_0x76B2D234F1895632(iVar0))
			{
				if (unk_0xC45A34912542C4EB(iVar0, 0))
				{
					if (unk_0xF50745B40235B5B8(unk_0xE7869D5D7816A9B6(), iVar0))
					{
						if (func_84(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iParam1, uParam2, uParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x0E6C083BC5101C8B(unk_0xE7869D5D7816A9B6(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0x03291915DC767232(unk_0xE7869D5D7816A9B6());
				if (unk_0xD51CFE69539DB6D8(iVar0))
				{
					if (func_70(iVar0, uParam0, 0))
					{
						if (unk_0xC45A34912542C4EB(iVar0, 0))
						{
							if (func_86(iVar0))
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

int func_86(int iParam0)
{
	float fVar0;
	
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		fVar0 = unk_0xD4F0FC8FFEDE152B(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_87(int iParam0, int iParam1)
{
	int iVar0;
	
	if (!unk_0xAF437D7C802AB246(iParam0))
	{
		if (unk_0xC45A34912542C4EB(iParam1, 0))
		{
			iVar0 = unk_0x03291915DC767232(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_88()
{
	int iVar0;
	int iVar1;
	
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
	{
		iVar0 = unk_0x811668789F0F4837(unk_0xE7869D5D7816A9B6());
		if (unk_0xC45A34912542C4EB(iVar0, 0))
		{
			iVar1 = unk_0xBD6B21D725712BDE(iVar0, 0);
			if (!unk_0xAF437D7C802AB246(iVar1))
			{
				if (iVar1 != unk_0xE7869D5D7816A9B6())
				{
					if (unk_0x28D33422BA6C479D(iVar1))
					{
						if (!unk_0x7E7AFACA1C744410(iVar1, unk_0xE7869D5D7816A9B6()))
						{
							unk_0x6A8BCE61F660B8D0(iVar1, unk_0xE7869D5D7816A9B6(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_89(var uParam0)
{
	int iVar0;
	
	if (!unk_0xB519E5386FBF69E5(uParam0->f_13, 25))
	{
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xD51CFE69539DB6D8(uParam0->f_17[iVar0]))
			{
				if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar0]))
				{
					unk_0x1C26C4B0DAB91B21(uParam0->f_17[iVar0], 32, 0);
					unk_0x1C26C4B0DAB91B21(uParam0->f_17[iVar0], 305, 1);
					unk_0x1C26C4B0DAB91B21(uParam0->f_17[iVar0], 268, 1);
					unk_0x97432097EDCCE1DF(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0x9956FB0E4B50ECB8(&(uParam0->f_13), 25);
	}
}

void func_90(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD51CFE69539DB6D8(uParam0->f_17[iVar0]))
		{
			if (!unk_0xAF437D7C802AB246(uParam0->f_17[iVar0]))
			{
				if (unk_0x471E33531AEA977D(uParam0->f_17[iVar0]))
				{
					unk_0xA6ED3077A967AC63(uParam0->f_17[iVar0], 0);
					unk_0xD9404A1491ECECC4(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6()))
			{
				unk_0xA6ED3077A967AC63(unk_0xE7869D5D7816A9B6(), 0);
				unk_0xD9404A1491ECECC4(unk_0xE7869D5D7816A9B6(), 0);
			}
		}
	}
}

var func_91()
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_92()
{
	struct<3> Var0;
	
	return Var0;
}

int func_93()
{
	if (unk_0xD51CFE69539DB6D8(iLocal_2570) && unk_0xC45A34912542C4EB(iLocal_2570, 0))
	{
		return 1;
	}
	return 0;
}

bool func_94(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, float fParam10, int iParam11, int iParam12, char* sParam13, char* sParam14, char* sParam15, bool bParam16, int iParam17, bool bParam18, int iParam19)
{
	return func_50(uParam0, Param1, func_95(), Param4, Param7, iParam11, 5, 0, 0, 0, iParam12, sParam13, func_91(), func_91(), func_91(), func_91(), sParam14, 0, bParam16, sParam15, 1, iParam17, bParam18, iParam19, func_91(), func_91(), func_91(), 1, fParam10);
}

Vector3 func_95()
{
	return 0f, 0f, 2f;
}

int func_96()
{
	int iVar0;
	
	if (func_97())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0xD51CFE69539DB6D8(Local_579[iVar0 /*8*/]) && unk_0xC45A34912542C4EB(Local_579[iVar0 /*8*/], 0))
			{
				if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1) && unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), Local_579[iVar0 /*8*/], 1))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_97()
{
	int iVar0;
	
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0xD51CFE69539DB6D8(Local_579[iVar0 /*8*/]) && unk_0xC45A34912542C4EB(Local_579[iVar0 /*8*/], 0))
			{
				if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), Local_579[iVar0 /*8*/], 0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_98(int iParam0, int iParam1)
{
	Global_55589 = iParam0;
	Global_55590 = iParam1;
}

int func_99(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (((unk_0xD51CFE69539DB6D8(Local_579[iVar1 /*8*/]) && unk_0xC45A34912542C4EB(Local_579[iVar1 /*8*/], 0)) && !func_103(Local_579[iVar1 /*8*/])) && (!bParam0 || func_100(Local_579[iVar1 /*8*/])))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_100(int iParam0)
{
	if (unk_0xB034B5B185BD9C69(iParam0) == iLocal_2522)
	{
		if (func_102(unk_0xE7869D5D7816A9B6(), Local_642, 1) < 500f)
		{
			return 1;
		}
	}
	else if (func_101(iParam0, unk_0xE7869D5D7816A9B6(), 1) < 300f)
	{
		return 1;
	}
	return 0;
}

float func_101(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 0) };
	}
	if (!unk_0x76B2D234F1895632(iParam1))
	{
		Var3 = { unk_0x1141852D07400777(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0x1141852D07400777(iParam1, 0) };
	}
	return unk_0xF18329472591CFE6(Var0, Var3, iParam2);
}

float func_102(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x76B2D234F1895632(iParam0))
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x1141852D07400777(iParam0, 0) };
	}
	return unk_0xF18329472591CFE6(Var0, Param1, iParam4);
}

int func_103(int iParam0)
{
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		if ((unk_0xF675ACE4149620B8(iParam0, 0, 7000) || unk_0xF675ACE4149620B8(iParam0, 1, 7000)) || unk_0xF675ACE4149620B8(iParam0, 2, 7000))
		{
			return 1;
		}
	}
	return 0;
}

void func_104(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x81E3FE28C9E14CDE(sParam0);
	unk_0xE45B7EE472DD7F7F(iParam1, 1);
}

void func_105(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0xD51CFE69539DB6D8(Global_92815.f_4))
	{
		if (unk_0xC45A34912542C4EB(Global_92815.f_4, 0))
		{
			if (func_154(24) != Global_92815.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_151(unk_0x1141852D07400777(Global_92815.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_106(Global_92815.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_106(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0xD51CFE69539DB6D8(iParam0) && unk_0xC45A34912542C4EB(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0xD51CFE69539DB6D8(Global_68105.f_484[25]) && unk_0xC45A34912542C4EB(Global_68105.f_484[25], 0))
			{
				if (Global_68105.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0xF54ECC20AEF6A194(iParam0) || unk_0x1B2DC87EFB36DF80(iParam0) == joaat("bus")) || unk_0x1B2DC87EFB36DF80(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_150(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_146(iParam0, &Var0);
		if (func_145(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0x1141852D07400777(iParam0, 1) };
			uParam4 = unk_0x2CAFFCD9F5E16D2F(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0xC7C6DDDE84A8E734(unk_0x959E7FA37C0D0892()) != joaat("vehicle_gen_controller"))
			{
				Global_69093 = unk_0xC7C6DDDE84A8E734(unk_0x959E7FA37C0D0892());
			}
		}
		func_138(iParam5, &Var0, Param1, uParam4, func_144(iParam0));
		func_107(iParam5, iParam0, 0);
	}
}

void func_107(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_134(&(Global_68105.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xB519E5386FBF69E5(Global_68105.f_555[0 /*21*/].f_9, 12) && !unk_0xB519E5386FBF69E5(Global_68105.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68105.f_555[0 /*21*/].f_4 != unk_0x1B2DC87EFB36DF80(iParam1))
		{
			return;
		}
	}
	if (Global_69012 != -1 && Global_69012 != iParam0)
	{
		return;
	}
	if (unk_0xD51CFE69539DB6D8(iParam1))
	{
		if (unk_0xC45A34912542C4EB(iParam1, 0))
		{
			if (!unk_0x28D33422BA6C479D(iParam1))
			{
				unk_0x20BB4B94CC6DDC9A(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_99155.f_18731.f_4801 = func_123();
			}
			if (iParam1 != Global_68105.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_154(iParam0);
					if ((unk_0xD51CFE69539DB6D8(iVar0) && unk_0xC45A34912542C4EB(iVar0, 0)) && iParam1 != iVar0)
					{
						func_108(iVar0, 145);
					}
				}
				Global_69011 = iParam1;
				Global_69012 = iParam0;
				Global_69013 = iParam2;
			}
		}
	}
}

void func_108(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_109(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0xBD6B21D725712BDE(iParam0, -1);
		if (!unk_0xD51CFE69539DB6D8(iVar0))
		{
			iVar0 = unk_0xFC6351163F828F49(iParam0, -1);
		}
		if (unk_0xD51CFE69539DB6D8(iVar0) && !unk_0xAF437D7C802AB246(iVar0))
		{
			if (unk_0x1B2DC87EFB36DF80(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x1B2DC87EFB36DF80(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x1B2DC87EFB36DF80(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_99155.f_1750.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x1B2DC87EFB36DF80(iParam0) == Global_99155.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0xF6917DE0E003509D(&(Global_99155.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0x04E7E853E31F41A3(unk_0xC2421167AF5744AC(iParam0), &(Global_99155.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_99155.f_18731.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_99155.f_18731.f_5592[iVar1] = iVar2;
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
		if (unk_0x1B2DC87EFB36DF80(iParam0) == Global_99155.f_18731.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0xF6917DE0E003509D(&(Global_99155.f_18731.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0x04E7E853E31F41A3(unk_0xC2421167AF5744AC(iParam0), &(Global_99155.f_18731.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_99155.f_18731.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_99155.f_18731.f_5590 = iParam1;
	Global_69010 = iParam0;
	Global_99155.f_18731.f_5588 = 1;
	func_146(iParam0, &(Global_99155.f_18731.f_5510));
}

int func_109(int iParam0)
{
	if ((((((((((!unk_0xD51CFE69539DB6D8(iParam0) || !unk_0xC45A34912542C4EB(iParam0, 0)) || func_121(iParam0, 0, 0)) || func_121(iParam0, 1, 0)) || func_121(iParam0, 2, 0)) || func_144(iParam0) != 145) || func_120(iParam0)) || func_119(iParam0)) || func_118(iParam0)) || func_117(iParam0)) || !func_110(unk_0x1B2DC87EFB36DF80(iParam0)))
	{
		if (func_119(iParam0))
		{
		}
		if (func_119(iParam0))
		{
		}
		if (func_121(iParam0, 0, 0))
		{
		}
		if (func_121(iParam0, 1, 0))
		{
		}
		if (func_121(iParam0, 2, 0))
		{
		}
		if (func_144(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_110(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_111(iParam0))
	{
		return 0;
	}
	if (((unk_0xAA65D1F2BF4AAFFB(iParam0) || unk_0xD1C57B32C6DE7BB6(iParam0)) || unk_0xFFD2CE10E8C7E77F(iParam0)) || unk_0x437C3632DA4A7584(iParam0))
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

int func_111(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x6A3E3EA4770CE80A(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x00AAD79B42B3E036())) || (iParam0 == joaat("buffalo3") && !unk_0x00AAD79B42B3E036())) || (iParam0 == joaat("gauntlet2") && !unk_0x00AAD79B42B3E036())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x00AAD79B42B3E036())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_116())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x49371C7B668CA46F())
		{
			if (unk_0x373784C902F4F74E(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xCA0E36ABF4510784(Var1.f_0))
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
		if ((((!func_115() && !func_114()) && !func_113()) && !func_112()) && !func_116())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xFD563D1BF81A2CB8() || unk_0xA78EA29AC2FFBADE()) || unk_0x7ECD3D8283875DD1())
		{
		}
		else if (!func_113())
		{
			return 0;
		}
	}
	return 1;
}

int func_112()
{
	return 0;
}

int func_113()
{
	return 1;
}

int func_114()
{
	return 1;
}

int func_115()
{
	if (unk_0x3442D8DA379C5187(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_116()
{
	var uVar0;
	
	if (unk_0x6E2954F2B1919678())
	{
		if (unk_0x6935836F937B7980())
		{
			if (unk_0xACCC319A72FE75AB())
			{
				unk_0x56DCF5665F92F9BD(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x9956FB0E4B50ECB8(&uVar0, 2);
				unk_0x9956FB0E4B50ECB8(&uVar0, 4);
				unk_0x9956FB0E4B50ECB8(&uVar0, 6);
				unk_0x9956FB0E4B50ECB8(&Global_25, 2);
				unk_0x9956FB0E4B50ECB8(&Global_25, 4);
				unk_0x9956FB0E4B50ECB8(&Global_25, 6);
				unk_0x39DEDCCD70293F58(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x6FBD7D781A378269())
				{
					uVar0 = unk_0x623F98022BC99367(866);
					unk_0x9956FB0E4B50ECB8(&uVar0, 0);
					unk_0x305E571F148D27EA(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_136199 == 2)
	{
		return 1;
	}
	else if (Global_136199 == 3)
	{
		return 0;
	}
	if (unk_0x6FBD7D781A378269())
	{
		if (unk_0xB519E5386FBF69E5(unk_0x623F98022BC99367(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_117(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x1B2DC87EFB36DF80(iParam0);
	uVar1 = unk_0xC2421167AF5744AC(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x04E7E853E31F41A3(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_111(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_118(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD51CFE69539DB6D8(Global_88719[iVar0]))
		{
			if (Global_88719[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_119(int iParam0)
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(iParam0) && unk_0xC45A34912542C4EB(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xD51CFE69539DB6D8(Global_88689[iVar0]) && unk_0xC45A34912542C4EB(Global_88689[iVar0], 0))
			{
				if (Global_88689[iVar0] == iParam0 && unk_0x1B2DC87EFB36DF80(Global_88689[iVar0]) == unk_0x1B2DC87EFB36DF80(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_120(int iParam0)
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(Global_68105.f_484[24]))
	{
		if (iParam0 == Global_68105.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xD51CFE69539DB6D8(Global_68105.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68105.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_121(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xD51CFE69539DB6D8(iParam0) || !unk_0xC45A34912542C4EB(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_122(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xB519E5386FBF69E5(Global_99155.f_5843[iVar9], 0))
		{
			if (unk_0x56C8E476471194F1(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_122(int iParam0, int iParam1, char* sParam2, var uParam3)
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

var func_123()
{
	var uVar0;
	
	func_133(&uVar0, unk_0x0CE219089BDB83C5());
	func_132(&uVar0, unk_0x1B24A2CA27443F7B());
	func_131(&uVar0, unk_0x7C833E3C6EEE41E0());
	func_126(&uVar0, unk_0x2DA3502053F9E535());
	func_125(&uVar0, unk_0xEB4EA596232DA76E());
	func_124(&uVar0, unk_0xB99227ECC84A576C());
	return uVar0;
}

void func_124(var uParam0, int iParam1)
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

void func_125(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_126(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_130(*uParam0);
	iVar1 = func_128(*uParam0);
	if (iParam1 < 1 || iParam1 > func_127(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_127(int iParam0, int iParam1)
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

var func_128(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_129(unk_0xB519E5386FBF69E5(iParam0, 31), -1, 1)) + 2011;
}

int func_129(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_130(var uParam0)
{
	return uParam0 & 15;
}

void func_131(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_132(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_133(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_134(var uParam0, int iParam1)
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
			uParam0->f_4 = func_135(0, 1);
			uParam0->f_12 = 0;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_135(0, 1);
			uParam0->f_12 = 0;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_135(1, 1);
			uParam0->f_12 = 1;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_135(1, 2);
			uParam0->f_12 = 1;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 19);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_135(1, 1);
			uParam0->f_12 = 1;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_135(1, 2);
			uParam0->f_12 = 1;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 19);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_135(2, 1);
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_135(2, 1);
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_135(2, 1);
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 20);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 22);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 22);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 22);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 24);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 24);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 14);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 24);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 28);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 29);
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
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 27);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 24);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 29);
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
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 27);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 24);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 29);
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
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 7);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 27);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 24);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 11);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 13);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 10);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 11);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 13);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 9);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 9);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 8);
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
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 2);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 30);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 2);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 22);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
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
			if (func_116())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 13);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 2);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 1);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_116())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 13);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 2);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 1);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 0);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 21);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 30);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 30);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 23);
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xB519E5386FBF69E5(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_99155.f_18731.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_145(Global_99155.f_18731.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_99155.f_18731.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_99155.f_18731.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_99155.f_18731.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xB519E5386FBF69E5(uParam0->f_9, 19))
	{
		if (!func_145(Global_99155.f_1750.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_99155.f_1750.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_99155.f_1750.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xB519E5386FBF69E5(uParam0->f_9, 20))
	{
		if (!func_145(Global_99155.f_1750.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_99155.f_1750.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_99155.f_1750.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_135(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_137(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_136(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_136(int iParam0, var uParam1, int iParam2)
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
			if (Global_99155.f_7699.f_99.f_58[128] && !Global_99155.f_7699.f_99.f_58[131])
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
					if (Global_99155.f_7699.f_99.f_58[119])
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
			else if (Global_99155.f_7699.f_99.f_58[118])
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

bool func_137(int iParam0)
{
	return iParam0 < 3;
}

void func_138(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_134(&(Global_68105.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xB519E5386FBF69E5(Global_68105.f_555[0 /*21*/].f_9, 10))
		{
			func_143(iParam0);
			func_142(uParam1, &(Global_99155.f_18731.f_69[Global_68105.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xB519E5386FBF69E5(Global_68105.f_555[0 /*21*/].f_9, 11))
			{
				Global_99155.f_18731.f_1864[Global_68105.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_99155.f_18731.f_1934[Global_68105.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_99155.f_18731.f_1864[Global_68105.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_99155.f_18731.f_1934[Global_68105.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_99155.f_18731.f_1958[Global_68105.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_139(iParam0, 1);
		}
	}
}

void func_139(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_141(iParam0, 0))
		{
			func_140(iParam0, 1, 0);
			func_140(iParam0, 2, 0);
			func_140(iParam0, 3, 0);
			func_140(iParam0, 4, 0);
			func_140(iParam0, 0, 1);
			Global_68105[iParam0] = 1;
		}
	}
	else
	{
		func_140(iParam0, 0, 0);
	}
}

void func_140(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x9956FB0E4B50ECB8(&(Global_99155.f_18731[iParam0]), iParam1);
	}
	else
	{
		unk_0x73817D396768E4C6(&(Global_99155.f_18731[iParam0]), iParam1);
	}
}

bool func_141(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xB519E5386FBF69E5(Global_99155.f_18731[iParam0], iParam1);
}

void func_142(var uParam0, var uParam1)
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

void func_143(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_134(&(Global_68105.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xD51CFE69539DB6D8(Global_68105.f_139[iParam0]))
		{
			unk_0x20BB4B94CC6DDC9A(Global_68105.f_139[iParam0], 1, 1);
			unk_0xC1F2137782A816E9(&(Global_68105.f_139[iParam0]));
			Global_68105.f_139[iParam0] = 0;
		}
		if (unk_0xB519E5386FBF69E5(Global_68105.f_555[0 /*21*/].f_9, 13))
		{
			func_139(iParam0, 0);
		}
	}
}

int func_144(int iParam0)
{
	int iVar0;
	
	if (!unk_0xD51CFE69539DB6D8(iParam0))
	{
		return 145;
	}
	if (!unk_0xC45A34912542C4EB(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD51CFE69539DB6D8(Global_88689[iVar0]))
		{
			if (Global_88689[iVar0] == iParam0)
			{
				return Global_88699[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

bool func_145(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_146(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		func_149(uParam1);
		uParam1->f_66 = unk_0x1B2DC87EFB36DF80(iParam0);
		StringCopy(&(uParam1->f_1), unk_0xC2421167AF5744AC(iParam0), 16);
		*uParam1 = unk_0x0FD17058EC3E1147(iParam0);
		unk_0x95C00B12C5FCA494(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xCFEF2B49C7ED1A18(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x8062A8ED0C7F4651(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0x71D4F790860F6A5A(iParam0);
		uParam1->f_67 = unk_0x90DC8CCD4852ECAA(iParam0);
		uParam1->f_69 = unk_0x31211750BC54126F(iParam0);
		uParam1->f_70 = unk_0xF222368EEA38E69D(iParam0);
		unk_0xCCD9F17DFC40BAE7(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x7C2F17D7A0663F15(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x2C876F34337848DC(iParam0, 2))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 28);
		}
		if (unk_0x2C876F34337848DC(iParam0, 3))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 29);
		}
		if (unk_0x2C876F34337848DC(iParam0, 0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 30);
		}
		if (unk_0x2C876F34337848DC(iParam0, 1))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x657F8DC28088EB36(iParam0, 0))
		{
			uParam1->f_68 = unk_0x96616C6B22C7747D(iParam0);
		}
		if (unk_0xD1C57B32C6DE7BB6(uParam1->f_66))
		{
			if (unk_0x852BA91F4F2922FF(iParam0))
			{
				switch (unk_0x97AE2442D106D426(iParam0))
				{
					case 2:
					case 0:
						unk_0x73817D396768E4C6(&(uParam1->f_77), 23);
						unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0x73817D396768E4C6(&(uParam1->f_77), 23);
						unk_0x73817D396768E4C6(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x54AAF075A06F73AA(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 9);
		}
		if (unk_0xB1748D5D7F598D5E(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 10);
		}
		if (unk_0x22929DCF418D8AAF(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 13);
			unk_0x6A5331108E27160A(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x3781B3A8FED51121(iParam0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 12);
		}
		func_148(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xDF705551345526F6(iParam0, iVar0 + 1))
			{
				unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), func_147(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x43CA43F21BD77772(iParam0, 0))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0x73817D396768E4C6(&(uParam1->f_77), 11);
		}
		if (unk_0xB7AFC499DA70400A(iParam0, "IgnoredByQuickSave") && unk_0x4A36D1C22F217975(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0x73817D396768E4C6(&(uParam1->f_77), 27);
		}
	}
}

int func_147(int iParam0)
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

int func_148(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC45A34912542C4EB(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xA9D3956F42AEC644(*iParam0) == 0)
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
			if (unk_0x44EF52A7698B3306(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x1C8AF615CFEF2FE5(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB4686A5F9149447D(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB4686A5F9149447D(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_149(var uParam0)
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

void func_150(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_143(iParam0);
	func_139(iParam0, 0);
}

int func_151(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_152(Param0, iParam3, 1);
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

int func_152(struct<3> Param0, int iParam3, int iParam4)
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
		if (Global_86396[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_86396[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_153(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0xF18329472591CFE6(Param0, Global_86396[iVar0 /*10*/].f_3, 1);
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

bool func_153(int iParam0)
{
	return unk_0xB519E5386FBF69E5(Global_99155.f_5843[iParam0], 0);
}

int func_154(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68105.f_139[iParam0];
}

int func_155()
{
	func_156();
	return Global_99155.f_1750.f_539.f_3549;
}

void func_156()
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (func_158(Global_99155.f_1750.f_539.f_3549) != unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()))
		{
			iVar0 = func_157(unk_0xE7869D5D7816A9B6());
			if (func_137(iVar0) && (!func_35(14) || Global_98107))
			{
				if (Global_99155.f_1750.f_539.f_3549 != iVar0 && func_137(Global_99155.f_1750.f_539.f_3549))
				{
					Global_99155.f_1750.f_539.f_3550 = Global_99155.f_1750.f_539.f_3549;
				}
				Global_99155.f_1750.f_539.f_3551 = iVar0;
				Global_99155.f_1750.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_99155.f_1750.f_539.f_3549 != 145)
			{
				Global_99155.f_1750.f_539.f_3551 = Global_99155.f_1750.f_539.f_3549;
			}
			return;
		}
	}
	Global_99155.f_1750.f_539.f_3549 = 145;
}

int func_157(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD51CFE69539DB6D8(uParam0))
	{
		iVar1 = unk_0x1B2DC87EFB36DF80(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_158(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_158(int iParam0)
{
	if (func_137(iParam0))
	{
		return Global_99155.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_159(var uParam0, int iParam1, int iParam2, int iParam3)
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
		uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
		uParam0->f_5 = unk_0x9D40BBF80D8F5E8A();
		uParam0->f_1 = iParam3;
		return 1;
	}
	return 0;
}

int func_160(var uParam0, int iParam1)
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
					uParam0->f_977 = 1;
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
		unk_0x801429C020C467BA(iParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = unk_0x9D40BBF80D8F5E8A();
		(uParam0[iVar1 /*5*/])->f_4 = iParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

int func_161(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xF6917DE0E003509D(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (unk_0x04E7E853E31F41A3(uParam0->f_737[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_737[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_737[iVar0 /*5*/].f_1)
				{
					uParam0->f_977 = 1;
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
		unk_0xDF83A33BF4D93E6F(sParam1, 0);
		uParam0->f_737[iVar1 /*5*/] = 1;
		uParam0->f_737[iVar1 /*5*/].f_3 = unk_0x9D40BBF80D8F5E8A();
		uParam0->f_737[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

void func_162(var uParam0)
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
				if ((unk_0x9D40BBF80D8F5E8A() - (uParam0[iVar0 /*8*/])->f_5) > (uParam0[iVar0 /*8*/])->f_6)
				{
					(*uParam0)[iVar0 /*8*/] = 1;
					(uParam0[iVar0 /*8*/])->f_6 = 0;
				}
				break;
		}
		iVar0++;
	}
}

void func_163()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	bVar2 = false;
	if (func_102(unk_0xE7869D5D7816A9B6(), Local_642, 1) < 70f)
	{
		unk_0x97EFD0CFE3939CC0();
	}
	if (iLocal_2568 == 9)
	{
		if (!iLocal_2567)
		{
			if (unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
			{
				unk_0xD079B121AAC8BC2A("SCRIPTED_SCANNER_REPORT_JSH_PREP_1A_01", 0f);
				iLocal_2567 = 1;
			}
		}
		if (unk_0xD51CFE69539DB6D8(Local_469.f_0))
		{
			if (func_101(Local_469.f_0, unk_0xE7869D5D7816A9B6(), 1) > 300f)
			{
				unk_0x506D42CB68AE4EA5(&Local_469);
			}
		}
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_2570) && unk_0xC45A34912542C4EB(iLocal_2570, 0))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0xD51CFE69539DB6D8(Local_579[iVar0 /*8*/]) && unk_0xC45A34912542C4EB(Local_579[iVar0 /*8*/], 0))
			{
				if (unk_0x3E29DD6D10980B6B(iLocal_2570, Local_579[iVar0 /*8*/]))
				{
					bVar2 = true;
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			iLocal_2570 = 0;
		}
	}
	if (func_173())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0xD51CFE69539DB6D8(Local_579[iVar0 /*8*/]) && unk_0xC45A34912542C4EB(Local_579[iVar0 /*8*/], 0))
			{
				if (unk_0x3E29DD6D10980B6B(unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0), Local_579[iVar0 /*8*/]))
				{
					iLocal_2570 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
				}
			}
			iVar0++;
		}
	}
	func_166();
	if (iLocal_651 == 0)
	{
		if (!unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), 182.9537f, -3119.884f, 101.9226f, 115f, 260f, 120f, 0, 1, 0))
		{
			bVar3 = true;
		}
		iVar1 = 0;
		while (iVar1 < Local_28.f_0)
		{
			if (unk_0xD51CFE69539DB6D8(Local_28[iVar1 /*110*/]))
			{
				if ((Local_28[iVar1 /*110*/].f_5 == 5 && func_101(unk_0xE7869D5D7816A9B6(), Local_28[iVar1 /*110*/], 1) > 300f) && func_102(unk_0xE7869D5D7816A9B6(), Local_642, 1) > 300f)
				{
					unk_0x2C9DDB5306DF417C(&(Local_28[iVar1 /*110*/]));
				}
			}
			iVar1++;
		}
		iVar4 = 6;
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0xD51CFE69539DB6D8(Local_579[iVar0 /*8*/]))
			{
				if (!unk_0xC45A34912542C4EB(Local_579[iVar0 /*8*/], 0))
				{
					unk_0xC1F2137782A816E9(&(Local_579[iVar0 /*8*/]));
					if (unk_0xD11595488376CB53(Local_579[iVar0 /*8*/].f_1))
					{
						unk_0x5B62CAB9B0D6ABF1(&(Local_579[iVar0 /*8*/].f_1));
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
				else if (func_103(Local_579[iVar0 /*8*/]))
				{
					if (unk_0xD11595488376CB53(Local_579[iVar0 /*8*/].f_1))
					{
						unk_0x5B62CAB9B0D6ABF1(&(Local_579[iVar0 /*8*/].f_1));
					}
					iVar4 = 3;
				}
				else if (!func_100(Local_579[iVar0 /*8*/]))
				{
					if (unk_0xB034B5B185BD9C69(Local_579[iVar0 /*8*/]) == iLocal_2522)
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
			if (((((iLocal_2568 == 9 && func_96() != -1) && unk_0xD51CFE69539DB6D8(Local_579[func_96() /*8*/])) && unk_0xC45A34912542C4EB(Local_579[func_96() /*8*/], 0)) && !func_103(Local_579[func_96() /*8*/])) || (((iLocal_2568 == 10 && func_48() != -1) && unk_0xD51CFE69539DB6D8(Local_579[func_48() /*8*/])) && unk_0xC45A34912542C4EB(Local_579[func_48() /*8*/], 0)))
			{
				if (unk_0xD11595488376CB53(Local_579[iVar0 /*8*/].f_1))
				{
					unk_0x5B62CAB9B0D6ABF1(&(Local_579[iVar0 /*8*/].f_1));
				}
			}
			else if ((((unk_0xD51CFE69539DB6D8(Local_579[iVar0 /*8*/]) && unk_0xC45A34912542C4EB(Local_579[iVar0 /*8*/], 0)) && !func_103(Local_579[iVar0 /*8*/])) && func_100(Local_579[iVar0 /*8*/])) && iLocal_652 == 0)
			{
				if (!unk_0xD11595488376CB53(Local_579[iVar0 /*8*/].f_1))
				{
					Local_579[iVar0 /*8*/].f_1 = func_165(Local_579[iVar0 /*8*/], 0, 0);
					unk_0xA09285173B92875E(Local_579[iVar0 /*8*/].f_1, 1);
				}
			}
			iVar0++;
		}
		if (iLocal_2568 == 9 || iLocal_2568 == 10)
		{
			if (func_164("JHP1A_BKIN", 0, 0) || func_164("JHP1A_BKINANY", 0, 0))
			{
				unk_0x00400F14096FE01D();
			}
		}
		else if (iLocal_652 == 0)
		{
			if (!iLocal_2562)
			{
				if (func_99(1) == 1)
				{
					func_104("JHP1A_BKIN", 7500, 1);
				}
				iLocal_2562 = 1;
			}
		}
		if (func_99(1) == 0)
		{
			if (iVar4 != 6)
			{
				func_268(iVar4);
			}
		}
	}
}

var func_164(char* sParam0, int iParam1, int iParam2)
{
	unk_0x589BB5028182386C(sParam0);
	if (iParam1 == 1)
	{
		unk_0x9359E7CC54335EB9(iParam2);
	}
	return unk_0x9E606060DFAF139A();
}

int func_165(int iParam0, bool bParam1, bool bParam2)
{
	return func_52(iParam0, !bParam1, bParam2);
}

void func_166()
{
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), Local_579[3 /*8*/], 1))
		{
			iLocal_2568 = 11;
		}
		else if (func_172())
		{
			iLocal_2568 = 7;
		}
		else if (func_171())
		{
			iLocal_2568 = 6;
		}
		else if (func_97())
		{
			iLocal_2568 = 9;
			iLocal_2562 = 0;
		}
		else if (func_93())
		{
			iLocal_2568 = 10;
		}
		else if (func_170())
		{
			iLocal_2568 = 8;
		}
		else if (((unk_0xD51CFE69539DB6D8(iLocal_2571) && unk_0xC45A34912542C4EB(iLocal_2571, 0)) && !unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_2571, 1)) && unk_0x22E902D6AF27E232(iLocal_2571, Local_642, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0))
		{
			iLocal_2568 = 5;
		}
		else if (((!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1) && unk_0xD51CFE69539DB6D8(unk_0xA0B1717D806F4901())) && !func_169()) && unk_0x22E902D6AF27E232(unk_0xA0B1717D806F4901(), Local_642, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0))
		{
			iLocal_2571 = unk_0xA0B1717D806F4901();
			iLocal_2568 = 5;
		}
		else if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1) && unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), Local_642, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0))
		{
			iLocal_2568 = 2;
		}
		else if (((unk_0xD51CFE69539DB6D8(iLocal_2571) && unk_0xC45A34912542C4EB(iLocal_2571, 0)) && !unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iLocal_2571, 1)) && (unk_0x22E902D6AF27E232(iLocal_2571, 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, 1, 0) || unk_0x3761EA7F8628B81A(iLocal_2571, 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0)))
		{
			iLocal_2568 = 4;
		}
		else if (((!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1) && unk_0xD51CFE69539DB6D8(unk_0xA0B1717D806F4901())) && !func_169()) && (unk_0x22E902D6AF27E232(unk_0xA0B1717D806F4901(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, 1, 0) || unk_0x3761EA7F8628B81A(unk_0xA0B1717D806F4901(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0)))
		{
			iLocal_2571 = unk_0xA0B1717D806F4901();
			iLocal_2568 = 4;
		}
		else if ((unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1) && !func_169()) && unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), Local_642, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0))
		{
			iLocal_2571 = unk_0xA0B1717D806F4901();
			iLocal_2568 = 3;
		}
		else if ((unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1) && !func_169()) && unk_0x22E902D6AF27E232(unk_0xE7869D5D7816A9B6(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, 1, 0))
		{
			iLocal_2571 = unk_0xA0B1717D806F4901();
			iLocal_2568 = 1;
		}
		else if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1) && unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0))
		{
			iLocal_2568 = 1;
		}
		else
		{
			iLocal_2571 = 0;
			if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1) && unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), 159.688f, -3092.446f, 7.314032f, 4.9375f, 7.3125f, 2.3125f, 0, 1, 0))
			{
				iLocal_2568 = 0;
			}
			else if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1) && unk_0x3761EA7F8628B81A(unk_0xE7869D5D7816A9B6(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0))
			{
				iLocal_2568 = 0;
			}
			else
			{
				iLocal_2568 = -1;
			}
		}
		if (iLocal_2568 == 1)
		{
			if (func_168(Local_28[0 /*110*/]))
			{
				func_167(Local_28[0 /*110*/], 120f, 20f, 120f, -90f, 90f);
			}
		}
		else if (func_168(Local_28[0 /*110*/]))
		{
			func_167(Local_28[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		}
		if (bLocal_2565)
		{
			unk_0xC31A3F1982C7B12B(unk_0xE7869D5D7816A9B6(), 155, 1);
		}
		if ((iLocal_2568 != -1 && unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0)) && unk_0x3498640250A18717(Vector(101.9226f, -3119.884f, 182.9537f) - Vector(108.0625f, 239.75f, 94.25f), Vector(101.9226f, -3119.884f, 182.9537f) + Vector(108.0625f, 239.75f, 94.25f)))
		{
		}
	}
}

void func_167(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0xAF437D7C802AB246(uParam0))
	{
		unk_0x07B8B2D4A37EF139(iParam0, fParam1);
		unk_0x2AA3F7975F22D83C(iParam0, fParam2);
		unk_0xA792FC945D14FB8E(iParam0, (fParam3 / 2f));
		unk_0xC8C98616330C2235(iParam0, fParam4);
		unk_0xAD3898EC342785E7(iParam0, fParam5);
	}
}

int func_168(int iParam0)
{
	if (iParam0 != 0 && unk_0xD51CFE69539DB6D8(iParam0))
	{
		switch (unk_0xEFB1DE83A1007C1B(iParam0))
		{
			case 1:
				if (!unk_0xAF437D7C802AB246(unk_0x10E754B2E0DF2A70(iParam0)))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0xC45A34912542C4EB(unk_0xE59FAD6B5E1AA42D(iParam0), 0))
				{
					return 1;
				}
				break;
			
			default:
				if (!unk_0x76B2D234F1895632(iParam0))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_169()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (unk_0xD51CFE69539DB6D8(Local_579[iVar0 /*8*/]) && unk_0xC45A34912542C4EB(Local_579[iVar0 /*8*/], 0))
		{
			if (unk_0xA0B1717D806F4901() == Local_579[iVar0 /*8*/])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_170()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (unk_0xD51CFE69539DB6D8(Local_579[iVar0 /*8*/]) && unk_0x915685CA559C211B(Local_579[iVar0 /*8*/], unk_0xE7869D5D7816A9B6(), 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_171()
{
	int iVar0;
	
	if (unk_0xF3140D055686CF79(unk_0xE7869D5D7816A9B6()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if ((unk_0xD51CFE69539DB6D8(Local_579[iVar0 /*8*/]) && unk_0xC45A34912542C4EB(Local_579[iVar0 /*8*/], 0)) && unk_0x811668789F0F4837(unk_0xE7869D5D7816A9B6()) == Local_579[iVar0 /*8*/])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_172()
{
	int iVar0;
	
	if ((unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1) && !unk_0x471E33531AEA977D(unk_0xE7869D5D7816A9B6())) && !unk_0xF3140D055686CF79(unk_0xE7869D5D7816A9B6()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0xD51CFE69539DB6D8(Local_579[iVar0 /*8*/]) && unk_0xC45A34912542C4EB(Local_579[iVar0 /*8*/], 0))
			{
				if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), Local_579[iVar0 /*8*/], 1))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_173()
{
	int iVar0;
	
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
		if (unk_0xC45A34912542C4EB(iVar0, 0) && (unk_0x1B2DC87EFB36DF80(iVar0) == joaat("towtruck") || unk_0x1B2DC87EFB36DF80(iVar0) == joaat("towtruck2")))
		{
			return 1;
		}
	}
	return 0;
}

void func_174()
{
	int iVar0;
	
	if (unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		func_268(6);
	}
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		if (unk_0xD51CFE69539DB6D8(Local_28[iVar0 /*110*/]))
		{
			if (Local_28[iVar0 /*110*/].f_93)
			{
				if (Local_28[iVar0 /*110*/].f_102)
				{
					func_175(Local_28[iVar0 /*110*/], &(Local_28[iVar0 /*110*/].f_94), 3, 0, 0, 0, -1082130432, 0, -1);
				}
				else
				{
					func_175(Local_28[iVar0 /*110*/], &(Local_28[iVar0 /*110*/].f_94), 2, 0, 0, 0, -1082130432, 0, -1);
				}
			}
			if (!func_168(Local_28[iVar0 /*110*/]))
			{
				if (Local_28[iVar0 /*110*/].f_103 == -1)
				{
					Local_28[iVar0 /*110*/].f_103 = unk_0x9D40BBF80D8F5E8A();
				}
				else if ((unk_0x9D40BBF80D8F5E8A() - Local_28[iVar0 /*110*/].f_103) >= 5000)
				{
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_579.f_0)
	{
		if (unk_0xD51CFE69539DB6D8(Local_579[iVar0 /*8*/]) && Local_579[iVar0 /*8*/].f_7)
		{
			if (!func_168(Local_579[iVar0 /*8*/]))
			{
				if (unk_0xD11595488376CB53(Local_579[iVar0 /*8*/].f_1))
				{
					unk_0x5B62CAB9B0D6ABF1(&(Local_579[iVar0 /*8*/].f_1));
				}
				unk_0xC1F2137782A816E9(&(Local_579[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
}

int func_175(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xBFAE5F9DEC53DAE2();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xAF437D7C802AB246(iParam0))
	{
		if (!unk_0x0B25DF5D53C8A538(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x566A0CB935F3EEA8(iParam0, 1);
			}
			else
			{
				unk_0xB4D355A7DFE15BFC(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x2EFEB3EA1D6A46DE(iParam0, iParam2);
			unk_0xBE0219028260E31F(iParam0, fParam6);
			if (unk_0xD11595488376CB53(*uParam1))
			{
				unk_0xA09285173B92875E(*uParam1, 7);
			}
		}
		unk_0x83F4881BA5450FEF(iParam0, iParam4);
		unk_0xDCDE8A1D95BAAF08(iParam0, iParam5);
		*uParam1 = unk_0x7DAA0D3B6BB8AD16(iParam0);
		if (!unk_0xB519E5386FBF69E5(uParam1->f_6, 2))
		{
			if (unk_0xD11595488376CB53(*uParam1))
			{
				if (!unk_0xF6917DE0E003509D(iParam7))
				{
					unk_0xD514AD97CE4B7796("MCUSTBLIP");
					unk_0x63E8D6007C32E426(iParam7);
					unk_0x33A8A7C6E127D3D4(*uParam1);
				}
				unk_0x9956FB0E4B50ECB8(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x51374A0BB2871E6E(iParam0, 0))
		{
			uParam1->f_1 = unk_0x2BC40A9A0319DB0F(iParam0);
			if (!unk_0xB519E5386FBF69E5(uParam1->f_6, 3))
			{
				if (unk_0xD11595488376CB53(uParam1->f_1))
				{
					unk_0xA09285173B92875E(uParam1->f_1, 7);
					unk_0x9956FB0E4B50ECB8(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xD11595488376CB53(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0x73817D396768E4C6(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_176()
{
	struct<3> Var0;
	var uVar3;
	
	if (bLocal_654 == 1)
	{
		if (!unk_0xAEF17BDE274A1247())
		{
			if (!unk_0xA864A37DA392324A())
			{
				unk_0x6A6E764D1DB633C7(1000);
			}
		}
		else
		{
			if (unk_0x9E77A197C8591F81())
			{
				unk_0xEFCAB8003504D08E(0);
				unk_0x9F13924F68008214();
			}
			func_24(iLocal_655);
			unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
			unk_0x00400F14096FE01D();
			unk_0x1D208E4A4E1D4FFE(1);
			func_8(1);
			if (!func_214())
			{
				func_213(iLocal_651, &Var0, &uVar3);
				unk_0x88A973CE47FBEF95(unk_0xE7869D5D7816A9B6(), Var0, 1, 0, 0, 1);
				unk_0x151F32CB40BE730C(unk_0xE7869D5D7816A9B6(), uVar3);
				unk_0x2878EC06B3F897A0(unk_0xE7869D5D7816A9B6(), 1);
				func_211(&uLocal_658, Var0, 50f, 0);
			}
			func_210(&uLocal_658);
			switch (iLocal_651)
			{
				case 0:
					func_160(&uLocal_658, joaat("burrito2"));
					func_160(&uLocal_658, joaat("s_m_y_pestcont_01"));
					func_160(&uLocal_658, joaat("s_m_m_security_01"));
					func_160(&uLocal_658, joaat("dilettante2"));
					func_160(&uLocal_658, joaat("p_amb_clipboard_01"));
					func_209(&uLocal_658, &cLocal_645);
					func_208(&uLocal_658, "misslsdhsclipboard@base");
					func_208(&uLocal_658, "misslsdhsclipboard@idle_a");
					func_208(&uLocal_658, "misstrevor3");
					func_207(&uLocal_658, iLocal_2522);
					if (((func_206() && !unk_0xAA65D1F2BF4AAFFB(func_205())) && !unk_0xD1C57B32C6DE7BB6(func_205())) && !unk_0xFFD2CE10E8C7E77F(func_205()))
					{
						func_160(&uLocal_658, func_205());
					}
					break;
				
				case 1:
					func_160(&uLocal_658, joaat("burrito2"));
					break;
			}
			while (!func_204(&uLocal_658))
			{
				unk_0x4EDE34FBADD967A6(0);
				func_174();
			}
			switch (iLocal_651)
			{
				case 0:
					if (((func_206() && !unk_0xAA65D1F2BF4AAFFB(func_205())) && !unk_0xD1C57B32C6DE7BB6(func_205())) && !unk_0xFFD2CE10E8C7E77F(func_205()))
					{
						while (!func_203())
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						Local_579[4 /*8*/] = func_183(189.3979f, -2932.721f, 5.6127f, 180.5455f);
					}
					if (func_214())
					{
						if (unk_0xD51CFE69539DB6D8(Local_579[4 /*8*/]))
						{
							func_180(Local_579[4 /*8*/], -1, 1);
						}
						else
						{
							func_180(0, -1, 1);
						}
					}
					else
					{
						unk_0x2878EC06B3F897A0(unk_0xE7869D5D7816A9B6(), 0);
						if (unk_0xD51CFE69539DB6D8(Local_579[4 /*8*/]))
						{
							unk_0x0CC1C59D57D7212B(unk_0xE7869D5D7816A9B6(), Local_579[4 /*8*/], -1);
						}
					}
					while (!func_177(0))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					unk_0x7FB81B1DD14A3BE4(0f);
					unk_0x6EF372C057320AD4(0f, 1065353216);
					break;
				
				case 1:
					if (!func_7(88))
					{
						Local_579[0 /*8*/] = unk_0xD504D1FF5DD2FFD7(joaat("burrito2"), 693.725f, -1006.302f, 21.8355f, 359.884f, 1, 1);
						unk_0x4F6C6B452FA34B13(Local_579[0 /*8*/], 0);
						unk_0xC9CEB5227A733CE6(Local_579[0 /*8*/]);
					}
					if (func_214())
					{
						func_180(0, -1, 1);
					}
					else
					{
						unk_0x2878EC06B3F897A0(unk_0xE7869D5D7816A9B6(), 0);
					}
					unk_0x88A973CE47FBEF95(unk_0xE7869D5D7816A9B6(), 692.067f, -1004.812f, 21.9059f, 1, 0, 0, 1);
					unk_0x151F32CB40BE730C(unk_0xE7869D5D7816A9B6(), 359.5735f);
					unk_0x7FB81B1DD14A3BE4(0f);
					unk_0x6EF372C057320AD4(0f, 1065353216);
					break;
			}
			if (unk_0xAEF17BDE274A1247() || !unk_0x845A95C48FA19489())
			{
				if (!func_7(88) || iLocal_651 != 1)
				{
					unk_0x2D3BB3EF936C4B76(800);
				}
			}
			bLocal_654 = false;
		}
	}
}

int func_177(bool bParam0)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = false;
	iVar1 = 1;
	if (bParam0)
	{
		if (unk_0xD51CFE69539DB6D8(Global_87855[0]))
		{
			Local_579[0 /*8*/] = Global_87855[0];
			unk_0x20BB4B94CC6DDC9A(Local_579[0 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xD51CFE69539DB6D8(Global_87855[1]))
		{
			Local_579[1 /*8*/] = Global_87855[1];
			unk_0x20BB4B94CC6DDC9A(Local_579[1 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xD51CFE69539DB6D8(Global_87855[2]))
		{
			Local_579[2 /*8*/] = Global_87855[2];
			unk_0x20BB4B94CC6DDC9A(Local_579[2 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xD51CFE69539DB6D8(Global_87855.f_9[0]))
		{
			Local_28[1 /*110*/] = Global_87855.f_9[0];
			if (!unk_0xAF437D7C802AB246(Local_28[1 /*110*/]))
			{
				unk_0xC602CB510D8B9EAE(Local_28[1 /*110*/], 0);
			}
			unk_0x20BB4B94CC6DDC9A(Local_28[1 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xD51CFE69539DB6D8(Global_87855.f_28[0]))
		{
			Local_28[1 /*110*/].f_105 = Global_87855.f_28[0];
			unk_0x20BB4B94CC6DDC9A(Local_28[1 /*110*/].f_105, 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xD51CFE69539DB6D8(Global_87855.f_9[2]))
		{
			Local_28[0 /*110*/] = Global_87855.f_9[2];
			if (!unk_0xAF437D7C802AB246(Local_28[0 /*110*/]))
			{
				unk_0xC602CB510D8B9EAE(Local_28[0 /*110*/], 0);
			}
			unk_0x20BB4B94CC6DDC9A(Local_28[0 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xD51CFE69539DB6D8(Global_87855.f_9[3]))
		{
			Local_28[2 /*110*/] = Global_87855.f_9[3];
			if (!unk_0xAF437D7C802AB246(Local_28[3 /*110*/]))
			{
				unk_0xC602CB510D8B9EAE(Local_28[2 /*110*/], 0);
			}
			unk_0x20BB4B94CC6DDC9A(Local_28[2 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xD51CFE69539DB6D8(Global_87855.f_9[4]))
		{
			Local_28[3 /*110*/] = Global_87855.f_9[4];
			if (!unk_0xAF437D7C802AB246(Local_28[3 /*110*/]))
			{
				unk_0xC602CB510D8B9EAE(Local_28[3 /*110*/], 0);
			}
			unk_0x20BB4B94CC6DDC9A(Local_28[3 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xD51CFE69539DB6D8(Global_87855.f_9[5]))
		{
			Local_469.f_0 = Global_87855.f_9[5];
			if (!unk_0xAF437D7C802AB246(Local_469.f_0))
			{
				unk_0xC602CB510D8B9EAE(Local_469.f_0, 0);
			}
			unk_0x20BB4B94CC6DDC9A(Local_469.f_0, 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xD51CFE69539DB6D8(Global_87855[3]))
		{
			Local_579[3 /*8*/] = Global_87855[3];
			unk_0x20BB4B94CC6DDC9A(Local_579[3 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		if (!unk_0xD51CFE69539DB6D8(Local_579[0 /*8*/]))
		{
			Local_579[0 /*8*/] = unk_0xD504D1FF5DD2FFD7(joaat("burrito2"), 148.7243f, -3104.619f, 4.8962f, 179.6158f, 1, 1);
		}
		if (!unk_0xD51CFE69539DB6D8(Local_579[1 /*8*/]))
		{
			Local_579[1 /*8*/] = unk_0xD504D1FF5DD2FFD7(joaat("burrito2"), 145.9856f, -3080f, 4.8962f, 269.0827f, 1, 1);
		}
		if (!unk_0xD51CFE69539DB6D8(Local_579[2 /*8*/]))
		{
			Local_579[2 /*8*/] = unk_0xD504D1FF5DD2FFD7(joaat("burrito2"), 129.9696f, -3089.331f, 4.8796f, 269.9255f, 1, 1);
		}
		if (!unk_0xD51CFE69539DB6D8(Local_28[1 /*110*/]))
		{
			Local_28[1 /*110*/] = unk_0xA7F4088D9A2629CC(26, joaat("s_m_y_pestcont_01"), 126.2174f, -3089.383f, 4.9199f, 275.4068f, 1, 1);
			unk_0x09714949CF524B00(Local_28[1 /*110*/], 150);
			unk_0x497AFDFE79EEFE4F(Local_28[1 /*110*/], 8, 1, 0, 0);
			unk_0x497AFDFE79EEFE4F(Local_28[1 /*110*/], 0, 0, 2, 0);
			unk_0x497AFDFE79EEFE4F(Local_28[1 /*110*/], 3, 0, 1, 0);
			unk_0x497AFDFE79EEFE4F(Local_28[1 /*110*/], 4, 0, 1, 0);
			unk_0x497AFDFE79EEFE4F(Local_28[1 /*110*/], 8, 0, 0, 0);
			unk_0x497AFDFE79EEFE4F(Local_28[1 /*110*/], 10, 1, 0, 0);
			unk_0x15761A8A11C7E0AB(Local_28[1 /*110*/], 0, 1, 0, 0);
			unk_0x15761A8A11C7E0AB(Local_28[1 /*110*/], 1, 0, 0, 0);
			unk_0x4CF93401368188F2(Local_28[1 /*110*/], 2f);
		}
		if (!unk_0xD51CFE69539DB6D8(Local_28[1 /*110*/].f_105))
		{
			Local_28[1 /*110*/].f_105 = unk_0x8C15E6EC0BC9B4BE(joaat("p_amb_clipboard_01"), unk_0x5D551231E967CD2B(Local_28[1 /*110*/], 60309, 0f, 0f, 0f), 1, 1, 0);
			unk_0x9E4D318905B670CB(Local_28[1 /*110*/].f_105, Local_28[1 /*110*/], unk_0x206A9EC63F98F19D(Local_28[1 /*110*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1);
		}
		if (!unk_0xD51CFE69539DB6D8(Local_28[0 /*110*/]))
		{
			Local_28[0 /*110*/] = unk_0xA7F4088D9A2629CC(26, joaat("s_m_y_pestcont_01"), 155.74f, -3098.89f, 5.93f, 0f, 1, 1);
			unk_0x497AFDFE79EEFE4F(Local_28[0 /*110*/], 0, 0, 0, 0);
			unk_0x497AFDFE79EEFE4F(Local_28[0 /*110*/], 3, 0, 0, 0);
			unk_0x497AFDFE79EEFE4F(Local_28[0 /*110*/], 4, 0, 0, 0);
			unk_0x497AFDFE79EEFE4F(Local_28[0 /*110*/], 8, 1, 0, 0);
			unk_0x497AFDFE79EEFE4F(Local_28[0 /*110*/], 10, 0, 0, 0);
			unk_0x15761A8A11C7E0AB(Local_28[0 /*110*/], 0, 0, 0, 0);
			unk_0x4CF93401368188F2(Local_28[0 /*110*/], 2f);
		}
		if (!unk_0xD51CFE69539DB6D8(Local_28[2 /*110*/]))
		{
			Local_28[2 /*110*/] = unk_0xA7F4088D9A2629CC(26, joaat("s_m_y_pestcont_01"), 159.8f, -3085.96f, 6f, 0f, 1, 1);
			unk_0x497AFDFE79EEFE4F(Local_28[2 /*110*/], 0, 0, 1, 0);
			unk_0x497AFDFE79EEFE4F(Local_28[2 /*110*/], 3, 0, 2, 0);
			unk_0x497AFDFE79EEFE4F(Local_28[2 /*110*/], 4, 0, 2, 0);
			unk_0x497AFDFE79EEFE4F(Local_28[2 /*110*/], 8, 1, 0, 0);
			unk_0x497AFDFE79EEFE4F(Local_28[2 /*110*/], 10, 1, 0, 0);
			unk_0x15761A8A11C7E0AB(Local_28[2 /*110*/], 1, 0, 0, 0);
			unk_0x4CF93401368188F2(Local_28[2 /*110*/], 2f);
		}
		if (!unk_0xD51CFE69539DB6D8(Local_28[3 /*110*/]))
		{
			Local_28[3 /*110*/] = unk_0xA7F4088D9A2629CC(26, joaat("s_m_y_pestcont_01"), 159.06f, -3085f, 6.01f, 0f, 1, 1);
			unk_0x497AFDFE79EEFE4F(Local_28[3 /*110*/], 0, 1, 1, 0);
			unk_0x497AFDFE79EEFE4F(Local_28[3 /*110*/], 3, 0, 3, 0);
			unk_0x497AFDFE79EEFE4F(Local_28[3 /*110*/], 4, 0, 3, 0);
			unk_0x497AFDFE79EEFE4F(Local_28[3 /*110*/], 8, 1, 0, 0);
			unk_0x497AFDFE79EEFE4F(Local_28[3 /*110*/], 10, 0, 0, 0);
			unk_0x15761A8A11C7E0AB(Local_28[3 /*110*/], 0, 0, 0, 0);
			unk_0x4CF93401368188F2(Local_28[3 /*110*/], 2f);
		}
		if (!unk_0xD51CFE69539DB6D8(Local_469.f_0) && !unk_0xD51CFE69539DB6D8(Local_579[3 /*8*/]))
		{
			if (unk_0x7C833E3C6EEE41E0() >= 5 && unk_0x7C833E3C6EEE41E0() < 21)
			{
				Local_579[3 /*8*/] = unk_0xD504D1FF5DD2FFD7(joaat("dilettante2"), 144.84f, -2982.75f, 5.32f, 266.5972f, 1, 1);
				Local_469.f_0 = unk_0xF430A9686E704FA3(Local_579[3 /*8*/], 26, joaat("s_m_m_security_01"), -1, 1, 1);
			}
			else
			{
				Local_579[3 /*8*/] = unk_0xD504D1FF5DD2FFD7(joaat("dilettante2"), 169.3554f, -3110.025f, 4.8228f, 88.4411f, 1, 1);
				Local_469.f_0 = unk_0xA7F4088D9A2629CC(26, joaat("s_m_m_security_01"), 161.7414f, -3117.074f, 4.9643f, 333.7041f, 1, 1);
			}
		}
	}
	if (unk_0xD51CFE69539DB6D8(Local_579[0 /*8*/]))
	{
		func_179(Local_579[0 /*8*/], 0);
		unk_0x18F90CF5D756C783(Local_579[0 /*8*/], 7);
		unk_0x174FED9630483D03(Local_579[0 /*8*/], 1);
		unk_0x8100F8AA27EE924B(Local_579[0 /*8*/], 1);
		Local_579[0 /*8*/].f_7 = 0;
	}
	if (unk_0xD51CFE69539DB6D8(Local_579[1 /*8*/]))
	{
		func_179(Local_579[1 /*8*/], 1);
		unk_0xE9A614E9191BFB4A(Local_579[1 /*8*/], 1, 1, 0);
		unk_0xD09991316D3221AD(Local_579[1 /*8*/], 4, 0);
		unk_0xDBF2D7502C37C299(Local_579[1 /*8*/], 0, 1, 0);
		unk_0xDBF2D7502C37C299(Local_579[1 /*8*/], 4, 0, 1);
		unk_0x8100F8AA27EE924B(Local_579[1 /*8*/], 1);
		Local_579[1 /*8*/].f_7 = 0;
	}
	if (unk_0xD51CFE69539DB6D8(Local_579[2 /*8*/]))
	{
		func_179(Local_579[2 /*8*/], 2);
		unk_0xDBF2D7502C37C299(Local_579[2 /*8*/], 2, 1, 0);
		unk_0xDBF2D7502C37C299(Local_579[2 /*8*/], 3, 1, 0);
		unk_0x8100F8AA27EE924B(Local_579[2 /*8*/], 1);
		Local_579[2 /*8*/].f_7 = 0;
	}
	if (unk_0xD51CFE69539DB6D8(Local_28[1 /*110*/]))
	{
		unk_0x4C6DD31AB89A02B8(Local_28[1 /*110*/], &(Local_28[1 /*110*/].f_1));
		unk_0x9BEE7E791BC4D38B(Local_28[1 /*110*/], 1);
		unk_0x690C5239500171FE(Local_28[1 /*110*/], iLocal_2520);
		unk_0x3AE219FD480C0ED6(Local_28[1 /*110*/], 1);
		func_167(Local_28[1 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0x13866008405A72EE(Local_28[1 /*110*/], 50f);
		StringCopy(&(Local_28[1 /*110*/].f_1), "foreman2(rear)", 16);
		Local_28[1 /*110*/].f_42 = 20f;
		Local_28[1 /*110*/].f_86 = 1;
		Local_28[1 /*110*/].f_87 = 1;
		Local_28[1 /*110*/].f_107 = joaat("p_amb_clipboard_01");
		Local_28[1 /*110*/].f_106 = 60309;
		Local_28[1 /*110*/].f_108 = 0;
	}
	if (unk_0xD51CFE69539DB6D8(Local_28[0 /*110*/]))
	{
		unk_0x4C6DD31AB89A02B8(Local_28[0 /*110*/], &(Local_28[0 /*110*/].f_1));
		unk_0x9BEE7E791BC4D38B(Local_28[0 /*110*/], 1);
		unk_0x690C5239500171FE(Local_28[0 /*110*/], iLocal_2520);
		unk_0x3AE219FD480C0ED6(Local_28[0 /*110*/], 1);
		func_167(Local_28[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		unk_0x13866008405A72EE(Local_28[0 /*110*/], 50f);
		StringCopy(&(Local_28[0 /*110*/].f_1), "foreman1(front)", 16);
		Local_28[0 /*110*/].f_86 = 1;
		Local_28[0 /*110*/].f_87 = 1;
		Local_28[0 /*110*/].f_42 = 17.5f;
	}
	if (unk_0xD51CFE69539DB6D8(Local_28[2 /*110*/]))
	{
		unk_0x4C6DD31AB89A02B8(Local_28[2 /*110*/], &(Local_28[2 /*110*/].f_1));
		unk_0x9BEE7E791BC4D38B(Local_28[2 /*110*/], 1);
		unk_0x690C5239500171FE(Local_28[2 /*110*/], iLocal_2520);
		func_167(Local_28[2 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0x3AE219FD480C0ED6(Local_28[2 /*110*/], 1);
		unk_0x13866008405A72EE(Local_28[2 /*110*/], 50f);
		StringCopy(&(Local_28[2 /*110*/].f_1), "front 1", 16);
		Local_28[2 /*110*/].f_86 = 0;
		Local_28[2 /*110*/].f_87 = 0;
		Local_28[2 /*110*/].f_42 = 17.5f;
	}
	if (unk_0xD51CFE69539DB6D8(Local_28[3 /*110*/]))
	{
		unk_0x4C6DD31AB89A02B8(Local_28[3 /*110*/], &(Local_28[3 /*110*/].f_1));
		unk_0x9BEE7E791BC4D38B(Local_28[3 /*110*/], 1);
		unk_0x690C5239500171FE(Local_28[3 /*110*/], iLocal_2520);
		unk_0x13866008405A72EE(Local_28[3 /*110*/], 50f);
		func_167(Local_28[3 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0x3AE219FD480C0ED6(Local_28[3 /*110*/], 1);
		StringCopy(&(Local_28[3 /*110*/].f_1), "front 2", 16);
		Local_28[3 /*110*/].f_86 = 0;
		Local_28[3 /*110*/].f_87 = 0;
		Local_28[3 /*110*/].f_42 = 17.5f;
	}
	if (unk_0xD51CFE69539DB6D8(Local_469.f_0) && unk_0xD51CFE69539DB6D8(Local_579[3 /*8*/]))
	{
		unk_0x4C6DD31AB89A02B8(Local_469.f_0, &(Local_469.f_1));
		unk_0x9BEE7E791BC4D38B(Local_469.f_0, 1);
		unk_0x690C5239500171FE(Local_469.f_0, iLocal_2520);
		unk_0x20A7731B1904C2E6(Local_469.f_0, 2);
		unk_0x7E3DC7ED30B648F0(Local_469.f_0, 2, 0);
		unk_0xCC897563F1971D6A(Local_469.f_0, joaat("weapon_nightstick"), -1, 0, 1);
		unk_0xB161EBD04DDDE4AD(Local_469.f_0, 5);
		func_167(Local_469.f_0, 40f, 5f, 90f, -90f, 90f);
		StringCopy(&(Local_469.f_1), "sec", 16);
		Local_469.f_86 = 1;
		Local_469.f_87 = 1;
		Local_469.f_93 = 0;
		if (Global_87855.f_357 == 1)
		{
			if (!func_178(Local_469.f_0, 242628503, 1))
			{
				if (unk_0x2EAC68D550960C3C(203.68f, -3132.46f, 4.79f, "WORLD_HUMAN_SMOKING", 1f, 1))
				{
					iLocal_2572 = 0;
					unk_0x94026C1D1DB14225(&uVar2);
					unk_0x8856EDD9AA658EC6(0, Local_579[3 /*8*/], &cLocal_645, 786599, 0, 0, -1, -1082130432, 0, 1073741824);
					unk_0x663F1B23D2C4D20A(0, Local_579[3 /*8*/], 0);
					unk_0xA3A25B3BCF95E908(0, 203.68f, -3132.46f, 4.79f, 1f, 0);
					unk_0x911ECBCE73F8EC3F(uVar2);
					unk_0xC2C4A3A9FF2FBFFF(Local_469.f_0, uVar2);
					unk_0x33A90AD8FA327B72(&uVar2);
				}
				else
				{
					iVar1 = 0;
				}
			}
		}
		else if (!func_178(Local_469.f_0, -1680762137, 1))
		{
			if (unk_0x2EAC68D550960C3C(162.69f, -3115.67f, 4.95f, "WORLD_HUMAN_SECURITY_SHINE_TORCH", 1f, 1))
			{
				iLocal_2572 = 1;
				unk_0x2180C35C80AFB905(Local_469.f_0, 162.69f, -3115.67f, 4.95f, 1f, 0);
			}
			else
			{
				iVar1 = 0;
			}
		}
	}
	if (((((((((unk_0xD51CFE69539DB6D8(Local_579[0 /*8*/]) && unk_0xD51CFE69539DB6D8(Local_579[1 /*8*/])) && unk_0xD51CFE69539DB6D8(Local_579[2 /*8*/])) && unk_0xD51CFE69539DB6D8(Local_579[3 /*8*/])) && unk_0xD51CFE69539DB6D8(Local_28[1 /*110*/])) && unk_0xD51CFE69539DB6D8(Local_28[0 /*110*/])) && unk_0xD51CFE69539DB6D8(Local_28[2 /*110*/])) && unk_0xD51CFE69539DB6D8(Local_28[3 /*110*/])) && unk_0xD51CFE69539DB6D8(Local_469.f_0)) && iVar1)
	{
		return 1;
	}
	else if (bVar0)
	{
		return 0;
	}
	return 0;
}

int func_178(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0xC47857E5E74EA5AF(uParam0, iParam1);
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

void func_179(var uParam0, int iParam1)
{
	Global_91025.f_22[iParam1] = uParam0;
}

void func_180(int iParam0, int iParam1, int iParam2)
{
	if (func_182() && func_214())
	{
		while (Global_91020 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x307133C47B1565B0(0);
		if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
		{
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				unk_0x1E08281A4D8EAD3C(unk_0xE7869D5D7816A9B6());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0xD51CFE69539DB6D8(iParam0))
				{
					if (unk_0xC45A34912542C4EB(iParam0, 0))
					{
						if (!unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), iParam0, 0))
						{
							unk_0x0CC1C59D57D7212B(unk_0xE7869D5D7816A9B6(), iParam0, iParam1);
							unk_0x6EF372C057320AD4(0f, 1065353216);
							unk_0x7FB81B1DD14A3BE4(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
			{
				unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
			}
		}
		unk_0xCE6D6B0EAA418D44();
		func_181(0);
	}
}

void func_181(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&(Global_91025.f_20), 13);
	}
	else
	{
		unk_0x73817D396768E4C6(&(Global_91025.f_20), 13);
	}
}

int func_182()
{
	if (Global_91025 == 10 || Global_91025 == 9)
	{
		return 1;
	}
	return 0;
}

int func_183(struct<3> Param0, float fParam3)
{
	return func_184(&(Global_95220.f_2311), Param0, fParam3, 0);
}

int func_184(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_202(uParam0))
	{
		if (func_145(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0xB84E12C6EBFF63A4(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_201(uParam0))
		{
			unk_0xB86B1248EA9B87EA(Param1, 5f, 1, 0, 0, 0);
			func_200(Param1, 5f, 0);
			iVar0 = unk_0xD504D1FF5DD2FFD7(uParam0->f_12.f_66, Param1, fParam4, 1, 1);
			if (unk_0xD51CFE69539DB6D8(iVar0))
			{
				Var1 = { unk_0x1141852D07400777(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x9CA89729A675E8FF(iVar0, Param1, 0, 0, 1);
				}
				func_193(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0xAA65D1F2BF4AAFFB(uParam0->f_12.f_66) || unk_0xD4023077B0753359(uParam0->f_12.f_66))
				{
					if (!unk_0x44A90CB76CA95162(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0xC9CEB5227A733CE6(iVar0);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0x3937C84F74FAABA4(unk_0x1B2DC87EFB36DF80(iVar0)))
						{
							func_192(uParam0->f_11, 1);
						}
						else if (unk_0x07C6F7E084F6A97E(unk_0x1B2DC87EFB36DF80(iVar0)))
						{
							func_192(uParam0->f_11, 2);
						}
					}
					unk_0xE07FEB47C3650425(iVar0, 0);
					unk_0xC0C7A9F655DB1456(iVar0, 0);
					unk_0x8100F8AA27EE924B(iVar0, 1);
					func_191(iVar0, uParam0->f_11);
				}
				else if ((!func_189(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x04E7E853E31F41A3(unk_0x959E7FA37C0D0892(), "startup_positioning"))
				{
					iVar8 = func_188(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_185(iVar8);
					}
				}
				if (((Global_91025 != 13 && Global_91025 != 10) && Global_91025 != 11) && Global_91025 != 12)
				{
					if (unk_0xC7C6DDDE84A8E734(&(Global_91025.f_3)) == Global_69093)
					{
						if (uParam0->f_12.f_66 == Global_99155.f_18731.f_69[21 /*78*/].f_66)
						{
							func_139(24, 0);
							func_185(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_108(iVar0, uParam0->f_11);
				}
				unk_0x839E9476E54502A2(uParam0->f_12.f_66);
				Var1 = { unk_0x1141852D07400777(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_185(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_134(&(Global_68105.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xD51CFE69539DB6D8(Global_68105.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0xC45A34912542C4EB(Global_68105.f_139[iParam0], 0))
				{
					if (unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), Global_68105.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x20BB4B94CC6DDC9A(Global_68105.f_139[iParam0], 1, 1);
				unk_0x9E55BD45B84E7BDC(&(Global_68105.f_139[iParam0]));
			}
		}
		Global_68105[iParam0] = 1;
		if (unk_0xB519E5386FBF69E5(Global_68105.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_141(iParam0, 0)) && Global_69014.f_66 == 0) && Global_99155.f_18731.f_1958[Global_68105.f_555[0 /*21*/].f_14] != 0) && Global_99155.f_18731.f_1958[Global_68105.f_555[0 /*21*/].f_14] > 3) && (!func_186(0, Global_68105.f_555[0 /*21*/].f_12) || !func_186(1, Global_68105.f_555[0 /*21*/].f_12)))
			{
				func_142(&(Global_99155.f_18731.f_69[Global_68105.f_555[0 /*21*/].f_14 /*78*/]), &Global_69014);
				Global_69092 = Global_99155.f_18731.f_5591;
			}
			func_139(iParam0, 0);
		}
	}
}

int func_186(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_187(&(Global_99155.f_18731.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_111(Global_99155.f_18731.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66);
}

int func_187(var uParam0)
{
	return *uParam0;
}

int func_188(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0xD51CFE69539DB6D8(Global_68105.f_484[iVar0]) && !unk_0x76B2D234F1895632(Global_68105.f_484[iVar0])) && unk_0xC45A34912542C4EB(Global_68105.f_484[iVar0], 0))
		{
			unk_0x95C00B12C5FCA494(iParam0, &iVar1, &iVar2);
			unk_0x95C00B12C5FCA494(Global_68105.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x1B2DC87EFB36DF80(iParam0) == unk_0x1B2DC87EFB36DF80(Global_68105.f_484[iVar0]) && unk_0x90DC8CCD4852ECAA(iParam0) == unk_0x90DC8CCD4852ECAA(Global_68105.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_189(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x1B2DC87EFB36DF80(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_190(iParam0, Global_68105.f_139[38], 0))
			{
				func_185(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_190(iParam0, Global_68105.f_139[43], 1))
			{
				func_185(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0x03FA0C4EFCD138FB(unk_0xE7869D5D7816A9B6(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_190(iParam0, uVar1[iVar6], 1) && func_59(unk_0x1141852D07400777(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_145(Param1, 0f, 0f, 0f, 0)) || unk_0xF18329472591CFE6(unk_0x1141852D07400777(iParam0, 1), unk_0x1141852D07400777(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0x9E55BD45B84E7BDC(&iParam0);
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
			if ((unk_0xD51CFE69539DB6D8(Global_68105.f_484[14]) && unk_0xC45A34912542C4EB(iParam0, 0)) && unk_0xC45A34912542C4EB(Global_68105.f_484[14], 0))
			{
				if (unk_0x1B2DC87EFB36DF80(Global_68105.f_484[14]) == joaat("luxor2") && unk_0x90DC8CCD4852ECAA(iParam0) == unk_0x90DC8CCD4852ECAA(Global_68105.f_484[14]))
				{
					func_185(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0xD51CFE69539DB6D8(Global_68105.f_484[20]) && unk_0xC45A34912542C4EB(iParam0, 0)) && unk_0xC45A34912542C4EB(Global_68105.f_484[20], 0))
			{
				if (unk_0x1B2DC87EFB36DF80(Global_68105.f_484[20]) == joaat("swift2") && unk_0x90DC8CCD4852ECAA(iParam0) == unk_0x90DC8CCD4852ECAA(Global_68105.f_484[20]))
				{
					func_185(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_190(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0xD51CFE69539DB6D8(iParam1) && !unk_0x76B2D234F1895632(iParam1)) && unk_0xC45A34912542C4EB(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0x95C00B12C5FCA494(iParam0, &iVar0, &iVar1);
			unk_0x95C00B12C5FCA494(iParam1, &iVar2, &iVar3);
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

void func_191(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xD51CFE69539DB6D8(Global_88689[iVar0]))
		{
			Global_88689[iVar0] = iParam0;
			Global_88699[iVar0] = iParam1;
			Global_88709[iVar0] = unk_0x1B2DC87EFB36DF80(iParam0);
			if (unk_0x3937C84F74FAABA4(Global_88709[iVar0]))
			{
				Global_88737[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_88737[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_192(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD51CFE69539DB6D8(Global_88689[iVar0]))
		{
			if (iParam0 == 145 || Global_88699[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x1B2DC87EFB36DF80(Global_88689[iVar0]) == func_135(iParam0, iParam1))
				{
					if (!unk_0x8AF655CC5761C7A2(unk_0xE7869D5D7816A9B6(), Global_88689[iVar0], 0))
					{
						unk_0x20BB4B94CC6DDC9A(Global_88689[iVar0], 0, 1);
						unk_0x9E55BD45B84E7BDC(&(Global_88689[iVar0]));
						Global_88699[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_193(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xC45A34912542C4EB(iParam0, 0))
	{
		if (unk_0xC7C6DDDE84A8E734(&(uParam1->f_1)) != 0)
		{
			unk_0xAA38ABB77E443507(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0x93CF2A62AE3C8085())
		{
			unk_0x0E88E3FDED7F6766(iParam0, *uParam1);
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0xB519E5386FBF69E5(uParam1->f_77, func_147(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), func_147(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xB519E5386FBF69E5(uParam1->f_77, func_147(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x9956FB0E4B50ECB8(&(uParam1->f_77), func_147(iVar1 + 1));
			}
		}
		if (unk_0xB519E5386FBF69E5(uParam1->f_77, 13))
		{
			unk_0x145645B37AE71EFB(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xA2F299A29CED1AB0(iParam0);
		}
		if (unk_0xB519E5386FBF69E5(uParam1->f_77, 12))
		{
			unk_0x2CF4F678CED1EB9D(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x50BBB995D0E3481E(iParam0);
		}
		unk_0x408AD7E5AD0BB545(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0xC5F406A695E19D8A(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xB519E5386FBF69E5(uParam1->f_77, 15) || func_199(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_198())
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
		unk_0x2AA0B1D3DB2C3E10(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0x40B9990275E6AD59(iParam0, 0);
		}
		else
		{
			unk_0x40B9990275E6AD59(iParam0, 0);
			unk_0x40B9990275E6AD59(iParam0, uParam1->f_65);
		}
		unk_0x0C27C841171728F7(iParam0, !unk_0xB519E5386FBF69E5(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0x18F90CF5D756C783(iParam0, uParam1->f_70);
		}
		unk_0x4FD36E73DE133D3F(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x2706D464EB8463E7(iParam0, 2, unk_0xB519E5386FBF69E5(uParam1->f_77, 28));
		unk_0x2706D464EB8463E7(iParam0, 3, unk_0xB519E5386FBF69E5(uParam1->f_77, 29));
		unk_0x2706D464EB8463E7(iParam0, 0, unk_0xB519E5386FBF69E5(uParam1->f_77, 30));
		unk_0x2706D464EB8463E7(iParam0, 1, unk_0xB519E5386FBF69E5(uParam1->f_77, 31));
		unk_0xB862D2A317F182C4(iParam0, unk_0xB519E5386FBF69E5(uParam1->f_77, 10));
		if (unk_0x5349DE586C4C8ACB(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xED6BC33BD669B45F(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x48E903ADD98A5FDD(unk_0x1B2DC87EFB36DF80(iParam0)))
			{
				if (unk_0x07C6F7E084F6A97E(unk_0x1B2DC87EFB36DF80(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_197(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_197(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x657F8DC28088EB36(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0xD0005B9DEEF3CBA9(iParam0, 1);
			}
			else
			{
				unk_0x38FE2C5E44C306D8(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_194(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xFFD2CE10E8C7E77F(uParam1->f_66) && !unk_0xAA65D1F2BF4AAFFB(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xB519E5386FBF69E5(uParam1->f_77, func_147(iVar2 + 1)))
				{
					if (!unk_0xDF705551345526F6(iParam0, iVar2 + 1))
					{
						unk_0xC1DD29CFE93055E7(iParam0, iVar2 + 1, 0);
					}
				}
				else if (unk_0xDF705551345526F6(iParam0, iVar2 + 1))
				{
					unk_0xC1DD29CFE93055E7(iParam0, iVar2 + 1, 1);
				}
				iVar2++;
			}
		}
		if (unk_0xD1C57B32C6DE7BB6(uParam1->f_66))
		{
			if (!unk_0xB519E5386FBF69E5(uParam1->f_77, 23))
			{
				if (unk_0xB519E5386FBF69E5(uParam1->f_77, 22))
				{
					unk_0xD390C3A4EAD66C38(iParam0, 2);
				}
				else
				{
					unk_0xD390C3A4EAD66C38(iParam0, 3);
				}
			}
			else
			{
				unk_0xD390C3A4EAD66C38(iParam0, 4);
			}
		}
		if (unk_0xB519E5386FBF69E5(uParam1->f_77, 27))
		{
			unk_0xFBDEFAD3C34AC9CF(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xFBDEFAD3C34AC9CF(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_194(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xC45A34912542C4EB(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xA9D3956F42AEC644(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x5DAB69BA0BF447FC(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0xFB0870DB05D28CB1(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x1C8AF615CFEF2FE5(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x91C889C88C57B287(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x16580F6E093503C8(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x16580F6E093503C8(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x16580F6E093503C8(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if ((unk_0xBAA70A4A1B1A59C8(*iParam0, 38) != 0 && unk_0xBAA70A4A1B1A59C8(*iParam0, 24) != 0) && unk_0x1C8AF615CFEF2FE5(*iParam0, 24) != func_196(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x16580F6E093503C8(*iParam0, 24, func_196(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	if (func_195(*iParam0))
	{
		unk_0x9DB0432DBE539D98(*iParam0, 1);
		unk_0x8100F8AA27EE924B(*iParam0, 1);
	}
	return 1;
}

int func_195(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0xD51CFE69539DB6D8(iParam0) && unk_0xC45A34912542C4EB(iParam0, 0)) && unk_0xA9D3956F42AEC644(iParam0) > 0)
	{
		unk_0x5DAB69BA0BF447FC(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x1C8AF615CFEF2FE5(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x84501D0C09CEA717(iParam0, iVar1, unk_0x1C8AF615CFEF2FE5(iParam0, iVar1)), 16);
				iVar2 = unk_0xC7C6DDDE84A8E734(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0xC7C6DDDE84A8E734("MNU_CAGE") || iVar2 == unk_0xC7C6DDDE84A8E734("SABRE_CAG"))
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

int func_196(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xD51CFE69539DB6D8(iParam0) && unk_0xC45A34912542C4EB(iParam0, 0))
	{
		iVar0 = unk_0xBAA70A4A1B1A59C8(iParam0, 38);
		iVar1 = unk_0xBAA70A4A1B1A59C8(iParam0, 24);
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

void func_197(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA9D3956F42AEC644(iParam0) > 0)
	{
		unk_0x5DAB69BA0BF447FC(iParam0, 0);
		iVar0 = unk_0x1C8AF615CFEF2FE5(iParam0, 24);
		iVar1 = unk_0xB4686A5F9149447D(iParam0, 24);
		unk_0xE9ECD7D720B42CB4(iParam0, uParam1);
		if (iVar0 == -1)
		{
			unk_0x91C889C88C57B287(iParam0, 24);
		}
		else
		{
			unk_0x16580F6E093503C8(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_198()
{
	return unk_0x3442D8DA379C5187(joaat("mpindependence"));
}

int func_199(int iParam0)
{
	var uVar0;
	
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		if (unk_0xC45A34912542C4EB(iParam0, 0))
		{
			if (unk_0x8FFABA46948DBAD8("MPBitset", 3))
			{
				if (unk_0xB7AFC499DA70400A(iParam0, "MPBitset"))
				{
					uVar0 = unk_0x3947414BC68E5255(iParam0, "MPBitset");
				}
				return unk_0xB519E5386FBF69E5(uVar0, 4);
			}
		}
	}
	return 0;
}

void func_200(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_134(&(Global_68105.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0xF18329472591CFE6(Param0, Global_68105.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_185(iVar0);
			}
		}
		iVar0++;
	}
}

int func_201(var uParam0)
{
	if (func_202(uParam0))
	{
		if (unk_0x5053BF6D5604065B(uParam0->f_12.f_66))
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

int func_202(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_111(uParam0->f_12.f_66))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_59(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_203()
{
	return func_201(&(Global_95220.f_2311));
}

int func_204(var uParam0)
{
	if (func_215(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_205()
{
	return Global_95220.f_2311.f_12.f_66;
}

int func_206()
{
	return func_202(&(Global_95220.f_2311));
}

int func_207(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x4443D8D533ACB547(iParam1))
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
					uParam0->f_977 = 1;
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
		unk_0x3B150C65C40BD16E(iParam1);
		uParam0->f_763[iVar1 /*5*/] = 1;
		uParam0->f_763[iVar1 /*5*/].f_3 = unk_0x9D40BBF80D8F5E8A();
		uParam0->f_763[iVar1 /*5*/].f_4 = iParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

int func_208(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xF6917DE0E003509D(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_273)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			if (unk_0x04E7E853E31F41A3(uParam0->f_273[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_273[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_273[iVar0 /*5*/].f_1)
				{
					uParam0->f_977 = 1;
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
		unk_0x2B0BB514F9140141(sParam1);
		uParam0->f_273[iVar1 /*5*/] = 1;
		uParam0->f_273[iVar1 /*5*/].f_3 = unk_0x9D40BBF80D8F5E8A();
		uParam0->f_273[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

int func_209(var uParam0, char[4] cParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xF6917DE0E003509D(cParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (unk_0x04E7E853E31F41A3(uParam0->f_374[iVar0 /*5*/].f_4, cParam1))
			{
				uParam0->f_374[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_374[iVar0 /*5*/].f_1)
				{
					uParam0->f_977 = 1;
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
		unk_0xCBEB830866A6963D(cParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = unk_0x9D40BBF80D8F5E8A();
		uParam0->f_374[iVar1 /*5*/].f_4 = cParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

void func_210(var uParam0)
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
		if (uParam0->f_874[iVar0 /*5*/])
		{
			uParam0->f_874[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_925[iVar0 /*5*/])
		{
			uParam0->f_925[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (uParam0->f_779[iVar0 /*5*/])
		{
			uParam0->f_779[iVar0 /*5*/].f_2 = 1;
		}
		iVar0++;
	}
	if (uParam0->f_863)
	{
		uParam0->f_863.f_2 = 1;
	}
	if (uParam0->f_855)
	{
		uParam0->f_855.f_2 = 1;
	}
	if (uParam0->f_859)
	{
		uParam0->f_859.f_2 = 1;
	}
}

int func_211(var uParam0, struct<3> Param1, float fParam4, int iParam5)
{
	if (func_212(Param1) || fParam4 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_863)
	{
		if (func_145(uParam0->f_863.f_4, Param1, 0) && uParam0->f_863.f_10 == fParam4)
		{
			uParam0->f_863.f_2 = 0;
			if (!uParam0->f_863.f_1)
			{
				uParam0->f_977 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	unk_0x3D81DBD4F6A29824(Param1, fParam4, iParam5);
	uParam0->f_863 = 1;
	uParam0->f_863.f_3 = unk_0x9D40BBF80D8F5E8A();
	uParam0->f_863.f_4 = { Param1 };
	uParam0->f_863.f_7 = { 0f, 0f, 0f };
	uParam0->f_863.f_10 = fParam4;
	uParam0->f_977 = 1;
	return 1;
}

int func_212(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_213(int iParam0, var uParam1, var uParam2)
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

bool func_214()
{
	return unk_0xB519E5386FBF69E5(Global_91025.f_20, 13);
}

int func_215(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (uParam0->f_977)
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 < 30)
		{
			if ((*uParam0)[iVar1 /*5*/])
			{
				if (!(uParam0[iVar1 /*5*/])->f_1)
				{
					if (unk_0x5053BF6D5604065B((uParam0[iVar1 /*5*/])->f_4))
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
						unk_0x839E9476E54502A2((uParam0[iVar1 /*5*/])->f_4);
						func_217(uParam0[iVar1 /*5*/]);
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
					if (unk_0x2917D5E1CB5CE43A(uParam0->f_273[iVar1 /*5*/].f_4))
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
						unk_0x8B10CC9832827D27(uParam0->f_273[iVar1 /*5*/].f_4);
						func_217(&(uParam0->f_273[iVar1 /*5*/]));
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
					if (unk_0x729A24E50365D07B(uParam0->f_374[iVar1 /*5*/].f_4))
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
						unk_0x4C5B723663B8F630(uParam0->f_374[iVar1 /*5*/].f_4);
						func_217(&(uParam0->f_374[iVar1 /*5*/]));
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
					if (unk_0x4A4851D44CDF03C0(uParam0->f_656[iVar1 /*6*/].f_5))
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
						unk_0x8A86A209B0F0AF7D(&(uParam0->f_656[iVar1 /*6*/].f_5));
						func_217(&(uParam0->f_656[iVar1 /*6*/]));
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
					if (unk_0x08F84BB137ADEE81(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4))
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
						unk_0xFC8E26A6FE4C2E54(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4);
						func_217(&(uParam0->f_475[iVar1 /*6*/]));
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
					if (unk_0x8150EED628D374BE(uParam0->f_202[iVar1 /*7*/].f_4))
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
						unk_0xE12FE76269CF566D(uParam0->f_202[iVar1 /*7*/].f_4);
						func_217(&(uParam0->f_202[iVar1 /*7*/]));
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
					if (unk_0xE5ED4BE9950F1B30(uParam0->f_151[iVar1 /*5*/].f_4))
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
						unk_0x22CA804442E37496(uParam0->f_151[iVar1 /*5*/].f_4);
						func_217(&(uParam0->f_151[iVar1 /*5*/]));
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
					if (unk_0xDF83A33BF4D93E6F(uParam0->f_737[iVar1 /*5*/].f_4, 0))
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
						unk_0x9694B1DF874054DF(uParam0->f_737[iVar1 /*5*/].f_4);
						func_217(&(uParam0->f_737[iVar1 /*5*/]));
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
					if (unk_0x97ED7BE642158AAF(uParam0->f_763[iVar1 /*5*/].f_4))
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
						unk_0xAA4BA243DE1874F4(uParam0->f_763[iVar1 /*5*/].f_4);
						func_217(&(uParam0->f_763[iVar1 /*5*/]));
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
			if (!unk_0xF6917DE0E003509D(uParam0->f_687[iVar1 /*7*/].f_4))
			{
				if (uParam0->f_687[iVar1 /*7*/])
				{
					iVar2 = unk_0xFFA02FB4C52407B4(uParam0->f_687[iVar1 /*7*/].f_5);
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
								func_217(&(uParam0->f_687[iVar1 /*7*/]));
								break;
							
							case -1:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								unk_0xE3968C191B4B1537(uParam0->f_687[iVar1 /*7*/].f_5);
								uParam0->f_687[iVar1 /*7*/] = 0;
								bVar0 = false;
								break;
							}
					}
				}
				else if (unk_0x97ED7BE642158AAF(uParam0->f_687[iVar1 /*7*/].f_6))
				{
					uParam0->f_687[iVar1 /*7*/].f_5 = unk_0xCB782AA06DF74569(uParam0->f_687[iVar1 /*7*/].f_4);
					uParam0->f_687[iVar1 /*7*/].f_3 = unk_0x9D40BBF80D8F5E8A();
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
							unk_0xE3968C191B4B1537(uParam0->f_687[iVar1 /*7*/].f_5);
							func_217(&(uParam0->f_687[iVar1 /*7*/]));
							uParam0->f_687[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_217(&(uParam0->f_687[iVar1 /*7*/]));
					}
				}
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (uParam0->f_874[iVar1 /*5*/])
			{
				if (!uParam0->f_874[iVar1 /*5*/].f_1)
				{
					if (unk_0x877A3342F85192B1(uParam0->f_874[iVar1 /*5*/].f_4))
					{
						uParam0->f_874[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_874[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_874[iVar1 /*5*/].f_1)
					{
						unk_0xA29AC749499D846D(uParam0->f_874[iVar1 /*5*/].f_4);
						func_217(&(uParam0->f_874[iVar1 /*5*/]));
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
			if (uParam0->f_925[iVar1 /*5*/])
			{
				if (!uParam0->f_925[iVar1 /*5*/].f_1)
				{
					if (unk_0xC167A96DA488D690(uParam0->f_925[iVar1 /*5*/].f_4))
					{
						uParam0->f_925[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_925[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_925[iVar1 /*5*/].f_1)
					{
						func_217(&(uParam0->f_925[iVar1 /*5*/]));
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
					if (unk_0x4D15A085E079AB18(iVar1))
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
						unk_0x3A2938D665EA8A9E(iVar1, 1);
						func_217(&(uParam0->f_779[iVar1 /*5*/]));
					}
					else
					{
						bVar0 = false;
					}
				}
			}
			iVar1++;
		}
		if (uParam0->f_855)
		{
			if (!uParam0->f_855.f_1)
			{
				if (unk_0xD6306290BE90B505())
				{
					uParam0->f_855.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_855.f_2)
			{
				if (uParam0->f_855.f_1)
				{
					unk_0x5736B7F949DFB3D6();
					func_217(&(uParam0->f_855));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_859)
		{
			if (!uParam0->f_859.f_1)
			{
				if (unk_0xBE13BCB8DDE36844())
				{
					uParam0->f_859.f_1 = 1;
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_859.f_2)
			{
				if (uParam0->f_859.f_1)
				{
					unk_0xBC91299322613A2E();
					func_217(&(uParam0->f_859));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_863 && unk_0xC5E5B5BBBE4693F6())
		{
			if (!uParam0->f_863.f_1)
			{
				if (unk_0xB1959BA5ECC2010F())
				{
					uParam0->f_863.f_1 = 1;
					if (uParam0->f_978)
					{
						unk_0x2878EC06B3F897A0(unk_0xE7869D5D7816A9B6(), 0);
						func_216(uParam0);
						uParam0->f_978 = 0;
					}
				}
				else
				{
					bVar0 = false;
				}
			}
			if (uParam0->f_863.f_2)
			{
				unk_0xEF1C0568E9BDCF78();
				func_217(&(uParam0->f_863));
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_951[iVar1 /*5*/])
			{
				if (!uParam0->f_951[iVar1 /*5*/].f_1)
				{
					if (unk_0x0B4924B3F0DADDD1(uParam0->f_951[iVar1 /*5*/].f_4))
					{
						uParam0->f_951[iVar1 /*5*/].f_1 = 1;
					}
					else
					{
						bVar0 = false;
					}
				}
				if (uParam0->f_951[iVar1 /*5*/].f_2)
				{
					if (uParam0->f_951[iVar1 /*5*/].f_1)
					{
						func_217(&(uParam0->f_951[iVar1 /*5*/]));
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
			uParam0->f_977 = 0;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_216(var uParam0)
{
	if (unk_0xC5E5B5BBBE4693F6())
	{
		unk_0xEF1C0568E9BDCF78();
		func_217(&(uParam0->f_863));
	}
}

void func_217(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_218()
{
	if (func_219())
	{
		func_8(1);
		unk_0x52F20802944F8DCE();
	}
}

int func_219()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_91025 == 7 || Global_91025 == 8)
	{
		return 1;
	}
	return 0;
}

void func_220()
{
	func_238(&(Local_1663[1 /*8*/]), 52305, "AI Controller");
	func_238(&(Local_1663[0 /*8*/]), 50670, "Dialogue");
	func_238(&(Local_1663[3 /*8*/]), 49697, "Alarms & Wanted Level");
	func_238(&(Local_1663[4 /*8*/]), 49142, "Music Manager");
}

void func_221(var uParam0)
{
	if (!func_224(uParam0))
	{
		if (uParam0->f_1 <= 4)
		{
			if ((unk_0xDF44EE1798BF710F(&cLocal_626) || unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0)) || func_22(&(Local_1663[3 /*8*/])))
			{
				unk_0xE72D045151F6CA70("JHP1A_ATTACK");
				func_223(uParam0, 5, 0);
			}
		}
		switch (uParam0->f_1)
		{
			case 1:
				if (func_102(unk_0xE7869D5D7816A9B6(), 137.7f, -3092.81f, 4.9f, 1) < 60f)
				{
					unk_0xE72D045151F6CA70("JHP1A_START");
					func_223(uParam0, 2, 0);
				}
				break;
			
			case 2:
				if (iLocal_2568 == 3 || iLocal_2568 == 2)
				{
					unk_0xE72D045151F6CA70("JHP1A_WAREHOUSE");
					func_223(uParam0, 3, 0);
				}
				break;
			
			case 3:
				if (iLocal_2568 == 6 || iLocal_2568 == 9)
				{
					unk_0xE72D045151F6CA70("JHP1A_VAN");
					func_223(uParam0, 4, 0);
				}
				break;
			
			case 4:
				if (!unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
				{
					if (iLocal_2568 == 9 && func_102(unk_0xE7869D5D7816A9B6(), 137.7f, -3092.81f, 4.9f, 1) >= 500f)
					{
						if (unk_0x062A4B39164546AD("JHP1A_RADIO_1"))
						{
							unk_0xE72D045151F6CA70("JHP1A_RADIO_1");
							func_222(uParam0);
						}
					}
				}
				break;
			
			case 5:
				if ((unk_0xDF44EE1798BF710F(&cLocal_626) && unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0)) && iLocal_2564)
				{
					func_223(uParam0, 6, 0);
				}
				break;
			
			case 6:
				if (!unk_0x51AFBB2BC4E2AAFD(unk_0x3F80C6638E3A1A90(), 0))
				{
					if (unk_0x062A4B39164546AD("JHP1A_RADIO_2"))
					{
						unk_0xE72D045151F6CA70("JHP1A_RADIO_2");
						func_223(uParam0, 6, 0);
						func_222(uParam0);
					}
				}
				break;
			}
	}
	if (func_224(uParam0))
	{
		unk_0x63EB72E192731928(1f);
	}
}

void func_222(var uParam0)
{
	if (*uParam0 != 4)
	{
		*uParam0 = 4;
		uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
		uParam0->f_6 = 0;
		uParam0->f_1 = -1;
	}
}

void func_223(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		uParam0->f_5 = unk_0x9D40BBF80D8F5E8A();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}

int func_224(var uParam0)
{
	if (*uParam0 == 4)
	{
		return 1;
	}
	return 0;
}

void func_225(var uParam0)
{
	if (!func_224(uParam0))
	{
		switch (uParam0->f_1)
		{
			case 1:
				func_223(uParam0, 2, 2000);
				break;
			
			case 2:
				if (unk_0xC167A96DA488D690(&cLocal_626))
				{
					unk_0xCE7ED718291BC854(&cLocal_626, 0);
					func_228(&cLocal_2345, Local_642, 30f, -1, 500, 1, 0);
					StringCopy(&cLocal_2345, "", 32);
					func_223(uParam0, 3, 5000);
				}
				break;
			
			case 3:
				func_226(&Local_469, 3, 1, "ALARM EVENT SET IT", 1, 0);
				unk_0xFBDF63459A604D13(unk_0x3F80C6638E3A1A90(), 2, 0);
				unk_0x6FF6F40CA433340F(unk_0x3F80C6638E3A1A90(), 0);
				unk_0x8C1CE4F676968E94(2);
				unk_0x33E519C1449D7A54(unk_0x3F80C6638E3A1A90(), 0);
				unk_0x0DC2F8EF73751B15(0);
				unk_0x1A18C20425B2A973(unk_0x3F80C6638E3A1A90());
				unk_0x6028EA1BF6115AEE(unk_0x3F80C6638E3A1A90());
				uParam0->f_2 = unk_0x9D40BBF80D8F5E8A() + 15000;
				func_223(uParam0, 4, 0);
				break;
			
			case 4:
				if (unk_0x9D40BBF80D8F5E8A() > uParam0->f_2)
				{
					unk_0x33E519C1449D7A54(unk_0x3F80C6638E3A1A90(), 1);
					unk_0x0DC2F8EF73751B15(1);
					unk_0x8C1CE4F676968E94(5);
					iLocal_2564 = 1;
					func_222(uParam0);
				}
				unk_0x1A18C20425B2A973(unk_0x3F80C6638E3A1A90());
				unk_0x6028EA1BF6115AEE(unk_0x3F80C6638E3A1A90());
				break;
			}
	}
}

int func_226(int iParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, bool bParam5)
{
	return func_227(iParam0, iParam1, sParam3, 0f, 0f, 0f, 0, bParam2, iParam4, bParam5);
}

int func_227(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (func_168(*uParam0))
	{
		if (!bParam7 || iParam1 >= uParam0->f_5)
		{
			uParam0->f_38 = unk_0x9D40BBF80D8F5E8A();
			if (iParam1 != uParam0->f_5 || !unk_0x04E7E853E31F41A3(&(uParam0->f_9), sParam2))
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
				uParam0->f_37 = unk_0x9D40BBF80D8F5E8A();
				if (!func_212(Param3))
				{
					uParam0->f_88 = { Param3 };
				}
				if (iParam6 != 0 && unk_0xD51CFE69539DB6D8(iParam6))
				{
					uParam0->f_91 = iParam6;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_228(char* sParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_229(&Var0, 0);
}

int func_229(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if ((unk_0xF6917DE0E003509D(&(uParam0->f_1)) && *uParam0 != -1) && (!unk_0xD51CFE69539DB6D8(Local_28[*uParam0 /*110*/]) || unk_0xAF437D7C802AB246(Local_28[*uParam0 /*110*/])))
	{
		return 0;
	}
	while (iVar0 != -1 && !unk_0xF6917DE0E003509D(&(Local_1704[iVar0 /*32*/].f_1)))
	{
		iVar0++;
		if (iVar0 > (Local_1704.f_0 - 1))
		{
			iVar0 = -1;
		}
	}
	if (iVar0 != -1)
	{
		if (*uParam0 == -1 || (unk_0xF6917DE0E003509D(iParam1) || unk_0x04E7E853E31F41A3(iParam1, &(uParam0->f_17))))
		{
			Local_1704[iVar0 /*32*/] = *uParam0;
			Local_1704[iVar0 /*32*/].f_1 = { uParam0->f_1 };
			if (*uParam0 != -1)
			{
				Local_1704[iVar0 /*32*/].f_23 = { unk_0x1141852D07400777(Local_28[*uParam0 /*110*/], 1) };
			}
			else
			{
				Local_1704[iVar0 /*32*/].f_23 = { uParam0->f_23 };
			}
			Local_1704[iVar0 /*32*/].f_26 = uParam0->f_26;
			Local_1704[iVar0 /*32*/].f_28 = uParam0->f_28;
			Local_1704[iVar0 /*32*/].f_29 = uParam0->f_29;
			Local_1704[iVar0 /*32*/].f_27 = unk_0x9D40BBF80D8F5E8A();
			Local_1704[iVar0 /*32*/].f_30 = uParam0->f_30;
			Local_1704[iVar0 /*32*/].f_31 = uParam0->f_31;
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

void func_230(var uParam0)
{
	char cVar0[24];
	bool bVar6;
	struct<3> Var7;
	
	if (!func_224(uParam0))
	{
		if (func_44())
		{
			iLocal_2519 = -1;
		}
		else if (iLocal_2519 == -1)
		{
			iLocal_2519 = unk_0x9D40BBF80D8F5E8A();
			iLocal_2545 = -1;
			iLocal_2546 = 1;
		}
		if (iLocal_2523 != -1 && !unk_0xF6917DE0E003509D(&Local_2525))
		{
			if (((Local_28[iLocal_2523 /*110*/] != 0 && unk_0xD51CFE69539DB6D8(Local_28[iLocal_2523 /*110*/])) && !unk_0xAF437D7C802AB246(Local_28[iLocal_2523 /*110*/])) && !unk_0x30B9624BD969F89F(Local_28[iLocal_2523 /*110*/]))
			{
				if (!unk_0x8E2CF6ACCED3BD0F(Local_28[iLocal_2523 /*110*/]))
				{
					if (func_44())
					{
						if (iLocal_2535 && (iLocal_2546 || iLocal_2524 > iLocal_2545))
						{
							if (bLocal_2547)
							{
								iLocal_2550 = iLocal_2540;
								iLocal_2551 = iLocal_2545;
								MemCopy(&Local_2552, {func_237()}, 4);
								MemCopy(&Local_2556, {func_236()}, 4);
								iLocal_2560 = iLocal_2546;
								bLocal_2561 = iLocal_2548;
							}
							if (iLocal_2536)
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
						if ((unk_0x9D40BBF80D8F5E8A() - iLocal_2519) > iLocal_2533)
						{
							if (func_235(iLocal_2523))
							{
								MemCopy(&cVar0, {Local_622}, 6);
							}
							else
							{
								StringCopy(&cVar0, "SOL1AUD", 24);
							}
							switch (iLocal_2523)
							{
								case 0:
									func_40(&uLocal_2353, 4, Local_28[0 /*110*/], "JHP1A_FOREMAN", 0, 1);
									break;
								
								case 1:
									func_40(&uLocal_2353, 5, Local_28[1 /*110*/], "JHP1A_FOREMAN2", 0, 1);
									break;
								
								case 2:
									func_40(&uLocal_2353, 4, Local_28[2 /*110*/], "CONSTRUCTION1", 0, 1);
									break;
								
								case 3:
									func_40(&uLocal_2353, 3, Local_28[3 /*110*/], "CONSTRUCTION2", 0, 1);
									break;
							}
							if (unk_0xF6917DE0E003509D(&cLocal_2529))
							{
								if (func_234(&uLocal_2353, &cVar0, &Local_2525, 8, 0, 0, 0))
								{
									bVar6 = true;
								}
							}
							else if (func_233(&uLocal_2353, &cVar0, &Local_2525, &cLocal_2529, 8, 0, 0))
							{
								bVar6 = true;
							}
							if (bVar6)
							{
								func_229(&(Local_28[iLocal_2523 /*110*/].f_50), &Local_2525);
								iLocal_2545 = iLocal_2524;
								iLocal_2546 = iLocal_2537;
								bLocal_2547 = iLocal_2539;
								iLocal_2548 = iLocal_2538;
								iLocal_2523 = -1;
								iLocal_2524 = -1;
								StringCopy(&Local_2525, "", 16);
								iLocal_2533 = 0;
								fLocal_2534 = 9999999f;
								iLocal_2535 = 0;
								iLocal_2536 = 0;
								iLocal_2537 = 1;
								iLocal_2539 = 0;
								iLocal_2538 = 0;
							}
						}
					}
				}
			}
			else
			{
				iLocal_2523 = -1;
				iLocal_2524 = -1;
				StringCopy(&Local_2525, "", 16);
				iLocal_2533 = 0;
				fLocal_2534 = 9999999f;
				iLocal_2535 = 0;
				iLocal_2536 = 0;
				iLocal_2537 = 1;
				iLocal_2538 = 0;
			}
		}
		if (((func_44() && iLocal_2540 != -1) && iLocal_2548) && !unk_0xF6917DE0E003509D(&cLocal_2541))
		{
			Var7 = { unk_0x1141852D07400777(Local_28[iLocal_2540 /*110*/], 1) };
			if (func_102(unk_0xE7869D5D7816A9B6(), Var7, 1) >= 25f)
			{
				iLocal_2550 = iLocal_2540;
				iLocal_2551 = iLocal_2545;
				MemCopy(&Local_2552, {func_237()}, 4);
				MemCopy(&Local_2556, {func_236()}, 4);
				iLocal_2560 = iLocal_2546;
				bLocal_2561 = iLocal_2548;
				func_11();
				iLocal_2540 = -1;
				iLocal_2545 = -1;
				StringCopy(&cLocal_2541, "", 16);
				iLocal_2546 = 0;
				iLocal_2548 = 0;
			}
		}
		if (iLocal_2550 != -1 && !unk_0xF6917DE0E003509D(&Local_2552))
		{
			if (Local_28[iLocal_2550 /*110*/].f_5 > iLocal_2551)
			{
				iLocal_2550 = -1;
				iLocal_2551 = -1;
				StringCopy(&Local_2552, "", 16);
				StringCopy(&Local_2556, "", 16);
				iLocal_2560 = 1;
			}
		}
		if (iLocal_2523 == -1 && unk_0xF6917DE0E003509D(&Local_2525))
		{
			if (func_43() && (unk_0x9D40BBF80D8F5E8A() - iLocal_2519) > 10000)
			{
				if (iLocal_2550 != -1 && !unk_0xF6917DE0E003509D(&Local_2552))
				{
					func_232(iLocal_2550, &Local_2552, iLocal_2551, 0, 0, iLocal_2560, 0, 1, &Local_2556, bLocal_2561);
					iLocal_2550 = -1;
					iLocal_2551 = -1;
					StringCopy(&Local_2552, "", 16);
					StringCopy(&Local_2556, "", 16);
					iLocal_2560 = 1;
				}
			}
		}
	}
	func_231(bLocal_2561);
}

void func_231(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_232(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	float fVar0;
	bool bVar1;
	
	fVar0 = func_101(Local_28[iParam0 /*110*/], unk_0xE7869D5D7816A9B6(), 1);
	if ((iParam2 > iLocal_2524 || iParam2 == 4) || ((iParam2 == iLocal_2524 && (fVar0 < fLocal_2534 || (func_235(iParam0) && !func_235(iLocal_2523)))) && iParam2 != 5))
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
			iLocal_2523 = iParam0;
			iLocal_2524 = iParam2;
			StringCopy(&Local_2525, sParam1, 16);
			StringCopy(&cLocal_2529, sParam8, 16);
			fLocal_2534 = fVar0;
			iLocal_2535 = iParam3;
			iLocal_2536 = iParam4;
			iLocal_2533 = iParam6;
			iLocal_2537 = iParam5;
			iLocal_2539 = iParam7;
			iLocal_2538 = iParam9;
			return 1;
		}
	}
	return 0;
}

bool func_233(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_39(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15719 = 0;
	Global_15726 = 0;
	Global_15721 = 0;
	Global_16703 = 0;
	Global_16705 = 0;
	Global_16709 = 1;
	StringCopy(&Global_16716, sParam3, 24);
	Global_2621441 = 0;
	return func_29(sParam2, iParam4, 0);
}

bool func_234(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_39(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_29(sParam2, iParam3, 0);
}

int func_235(int iParam0)
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		return 1;
	}
	return 0;
}

struct<6> func_236()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = unk_0x465F47E0FBFEFAEE();
		iVar6 = (iVar6 + Global_16722);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x33FD8E2E139F4FAC(&(Global_14580[iVar7 /*6*/])))
			{
				return Global_14580[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x33FD8E2E139F4FAC(&(Global_14580[iVar8 /*6*/])))
					{
						return Global_14580[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14580[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_237()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return Var0;
}

int func_238(var uParam0, int iParam1, char* sParam2)
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

void func_239(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	bool bVar5;
	bool bVar6;
	
	if (!func_224(uParam0))
	{
		bLocal_2565 = true;
		if (!iLocal_2563)
		{
			if (func_170())
			{
				iLocal_2563 = 1;
				iLocal_2566 = unk_0x9D40BBF80D8F5E8A();
			}
		}
		else if ((unk_0x9D40BBF80D8F5E8A() - iLocal_2566) > 3000)
		{
			iLocal_2563 = 0;
			iLocal_2566 = -1;
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (func_168(Local_28[iVar0 /*110*/]))
			{
				func_259(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_168(Local_469.f_0))
		{
			func_259(&Local_469);
		}
		iVar1 = 0;
		while (iVar1 < Local_1704.f_0)
		{
			if (!unk_0xF6917DE0E003509D(&(Local_1704[iVar1 /*32*/].f_1)) && Local_1704[iVar1 /*32*/].f_27 != -1)
			{
				if (Local_1704[iVar1 /*32*/].f_28 == -1 || (unk_0x9D40BBF80D8F5E8A() - Local_1704[iVar1 /*32*/].f_27) < Local_1704[iVar1 /*32*/].f_28)
				{
					if (Local_1704[iVar1 /*32*/].f_29 <= 0 || (unk_0x9D40BBF80D8F5E8A() - Local_1704[iVar1 /*32*/].f_27) > Local_1704[iVar1 /*32*/].f_29)
					{
						if (Local_1704[iVar1 /*32*/] != -1 && func_168(Local_28[Local_1704[iVar1 /*32*/] /*110*/]))
						{
							Var2 = { unk_0x1141852D07400777(Local_28[Local_1704[iVar1 /*32*/] /*110*/], 1) };
							Local_1704[iVar1 /*32*/].f_23 = { Var2 };
						}
						else
						{
							Var2 = { Local_1704[iVar1 /*32*/].f_23 };
						}
						if (!func_22(&(Local_1663[3 /*8*/])))
						{
							if (Local_1704[iVar1 /*32*/].f_31 && unk_0xF18329472591CFE6(Var2, Local_642, 1) < 35f)
							{
								func_159(&(Local_1663[3 /*8*/]), 0, 0, 1);
							}
						}
						iVar0 = 0;
						while (iVar0 < Local_28.f_0)
						{
							if (Local_1704[iVar1 /*32*/] == -1 || (iVar0 != Local_1704[iVar1 /*32*/] && Local_28[Local_1704[iVar1 /*32*/] /*110*/].f_5 >= Local_28[iVar0 /*110*/].f_5))
							{
								if (unk_0xD51CFE69539DB6D8(Local_28[iVar0 /*110*/]) && !unk_0xAF437D7C802AB246(Local_28[iVar0 /*110*/]))
								{
									if (func_102(Local_28[iVar0 /*110*/], Var2, 1) < (Local_1704[iVar1 /*32*/].f_26 + Local_28[iVar0 /*110*/].f_42))
									{
										Local_28[iVar0 /*110*/].f_34 = iVar1;
										if (Local_1704[iVar1 /*32*/].f_30)
										{
											if (!func_22(&(Local_1663[3 /*8*/])))
											{
												func_159(&(Local_1663[3 /*8*/]), 0, 0, 1);
												MemCopy(&cLocal_2345, {Local_1704[iVar1 /*32*/].f_1}, 8);
											}
										}
									}
								}
							}
							iVar0++;
						}
					}
				}
				else if ((unk_0x9D40BBF80D8F5E8A() - Local_1704[iVar1 /*32*/].f_27) > Local_1704[iVar1 /*32*/].f_28 + 2000)
				{
					StringCopy(&(Local_1704[iVar1 /*32*/].f_1), "", 64);
					Local_1704[iVar1 /*32*/] = -1;
					Local_1704[iVar1 /*32*/].f_23 = { 0f, 0f, 0f };
					Local_1704[iVar1 /*32*/].f_26 = 0f;
					Local_1704[iVar1 /*32*/].f_27 = -1;
					Local_1704[iVar1 /*32*/].f_28 = -1;
					Local_1704[iVar1 /*32*/].f_29 = -1;
				}
			}
			iVar1++;
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (func_168(Local_28[iVar0 /*110*/]))
			{
				func_253(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_168(Local_469.f_0))
		{
			func_244(&Local_469);
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (func_168(Local_28[iVar0 /*110*/]))
			{
				func_243(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_168(Local_469.f_0))
		{
			func_241(&Local_469);
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (unk_0xD51CFE69539DB6D8(Local_28[iVar0 /*110*/].f_105))
			{
				if (((!unk_0xD51CFE69539DB6D8(Local_28[iVar0 /*110*/]) || unk_0xAF437D7C802AB246(Local_28[iVar0 /*110*/])) || unk_0xE47BD1403D4D87E3(Local_28[iVar0 /*110*/])) || (Local_28[iVar0 /*110*/].f_108 && Local_28[iVar0 /*110*/].f_5 != 0))
				{
					bVar5 = true;
				}
				else if (Local_28[iVar0 /*110*/].f_5 != 0)
				{
					bVar6 = true;
				}
				if (bVar5 || bVar6)
				{
					if (unk_0x6CE07ABFB69A4990(Local_28[iVar0 /*110*/].f_105, Local_28[iVar0 /*110*/]))
					{
						unk_0x27B54A887EC71B05(Local_28[iVar0 /*110*/].f_105, 1, 1);
					}
					if (bVar5)
					{
						unk_0x9083C015A6C271BD(&(Local_28[iVar0 /*110*/].f_105));
					}
					else if (bVar6)
					{
						unk_0xD4E454973E16D31B(&(Local_28[iVar0 /*110*/].f_105));
					}
					Local_28[iVar0 /*110*/].f_109 = 0;
				}
			}
			else if (Local_28[iVar0 /*110*/].f_107 != 0 && Local_28[iVar0 /*110*/].f_106 != -1)
			{
				if (Local_28[iVar0 /*110*/].f_109 && unk_0x5053BF6D5604065B(Local_28[iVar0 /*110*/].f_107))
				{
					Local_28[iVar0 /*110*/].f_105 = unk_0x8C15E6EC0BC9B4BE(Local_28[iVar0 /*110*/].f_107, unk_0x5D551231E967CD2B(Local_28[iVar0 /*110*/], Local_28[iVar0 /*110*/].f_106, 0f, 0f, 0f), 1, 1, 0);
					unk_0x9E4D318905B670CB(Local_28[iVar0 /*110*/].f_105, Local_28[iVar0 /*110*/], unk_0x206A9EC63F98F19D(Local_28[iVar0 /*110*/], Local_28[iVar0 /*110*/].f_106), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1);
					Local_28[iVar0 /*110*/].f_109 = 0;
				}
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < Local_28.f_0)
		{
			if (unk_0xD51CFE69539DB6D8(Local_28[iVar1 /*110*/]) && !unk_0xAF437D7C802AB246(Local_28[iVar1 /*110*/]))
			{
				unk_0x29FD5B1A4BA65801(Local_28[iVar1 /*110*/]);
				unk_0xA2D9AE20AB412A1B(Local_28[iVar1 /*110*/]);
			}
			iVar1++;
		}
		func_240();
	}
	if (func_224(uParam0))
	{
	}
}

void func_240()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_168(Local_579[iVar0 /*8*/]))
		{
			unk_0x29FD5B1A4BA65801(Local_579[iVar0 /*8*/]);
		}
		iVar0++;
	}
}

void func_241(int iParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0x8F575FC0497CAD6C(*iParam0);
	if (func_242(*iParam0))
	{
		Local_469.f_46 = 0;
	}
	switch (iParam0->f_5)
	{
		case 0:
			if (unk_0x7C833E3C6EEE41E0() >= 5 && unk_0x7C833E3C6EEE41E0() < 21)
			{
				if ((!func_178(*iParam0, 1647992574, 1) && !func_178(*iParam0, 242628503, 1)) || iLocal_2572)
				{
					if (unk_0x22E8CF9DF233BFE5(203.68f, -3132.46f, 4.79f, 1f, 1))
					{
						unk_0xA3A25B3BCF95E908(*iParam0, 203.68f, -3132.46f, 4.79f, 1f, 0);
						iLocal_2572 = 0;
					}
				}
			}
			else if (!func_178(*iParam0, -1680762137, 1) || !iLocal_2572)
			{
				if (unk_0x22E8CF9DF233BFE5(162.69f, -3115.67f, 4.95f, 1f, 1))
				{
					unk_0x92F37D77F0154C31(*iParam0, 162.69f, -3115.67f, 4.95f, 1f, 0);
					iLocal_2572 = 1;
				}
			}
			break;
		
		case 3:
			unk_0x0C8881432DA64087(*iParam0, 1, -1, "DEFAULT_ACTION");
			switch (unk_0xC7C6DDDE84A8E734(&(iParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
					if (unk_0xFB3EFA6765C8A823(*iParam0, joaat("weapon_pistol"), 0))
					{
						unk_0xB7C0041C7DC55CD8(*iParam0, joaat("weapon_pistol"));
					}
					if (!unk_0xFB3EFA6765C8A823(*iParam0, joaat("weapon_nightstick"), 0))
					{
						unk_0xCC897563F1971D6A(*iParam0, joaat("weapon_nightstick"), -1, 1, 1);
					}
					if (unk_0x5E99B63A819500A5(*iParam0, &iVar0, 1))
					{
						if (iVar0 != joaat("weapon_nightstick"))
						{
							unk_0x36EE5CBF45EC4826(*iParam0, joaat("weapon_nightstick"), 0);
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
					if (unk_0xFB3EFA6765C8A823(*iParam0, joaat("weapon_nightstick"), 0))
					{
						unk_0xB7C0041C7DC55CD8(*iParam0, joaat("weapon_nightstick"));
					}
					if (!unk_0xFB3EFA6765C8A823(*iParam0, joaat("weapon_pistol"), 0))
					{
						unk_0xCC897563F1971D6A(*iParam0, joaat("weapon_pistol"), -1, 1, 1);
					}
					if (unk_0x5E99B63A819500A5(*iParam0, &iVar0, 1))
					{
						if (iVar0 != joaat("weapon_pistol"))
						{
							unk_0x36EE5CBF45EC4826(*iParam0, joaat("weapon_pistol"), 0);
						}
					}
					break;
			}
			if (!func_178(*iParam0, 780511057, 1) || func_242(*iParam0))
			{
				unk_0x13C351F151D49F89(*iParam0, unk_0xE7869D5D7816A9B6(), 0, 16);
				unk_0x6A8BCE61F660B8D0(*iParam0, unk_0xE7869D5D7816A9B6(), -1, 2048, 2);
			}
			break;
		
		case 1:
			switch (unk_0xC7C6DDDE84A8E734(&(iParam0->f_9)))
			{
				case 686645495:
					if (unk_0xD51CFE69539DB6D8(iParam0->f_91))
					{
						if (!unk_0x50D7BCB98D6E1BFA(*iParam0, unk_0x1141852D07400777(iParam0->f_91, 1), 180f) && (unk_0x9D40BBF80D8F5E8A() - iParam0->f_37) < 5000)
						{
							if (!func_178(*iParam0, -875674219, 1) || func_242(*iParam0))
							{
								unk_0x58F62EDF6111D598(*iParam0, iParam0->f_91, -1);
								unk_0x6A8BCE61F660B8D0(*iParam0, iParam0->f_91, -1, 2048, 2);
							}
						}
						else if (!func_178(*iParam0, -2015108952, 1) || func_242(*iParam0))
						{
							unk_0xFBBCDB428409716C(*iParam0, iParam0->f_91, -1, 2f, -1f, 2.5f, 1f, 1);
						}
					}
					break;
				
				case -1225951737:
					if (iParam0->f_41 && !func_59(iParam0->f_88, iParam0->f_43, 1f, 0))
					{
						iParam0->f_88 = { iParam0->f_43 };
						iVar1 = 1;
					}
					if (!func_212(iParam0->f_88))
					{
						if (!unk_0x50D7BCB98D6E1BFA(*iParam0, iParam0->f_88, 90f) && (unk_0x9D40BBF80D8F5E8A() - iParam0->f_37) < 5000)
						{
							if ((!func_178(*iParam0, 1464580341, 1) || func_242(*iParam0)) || iVar1)
							{
								unk_0xDE6D5CD5475B6C9F(*iParam0, iParam0->f_88, 0);
								unk_0x27ADB0309A9865E0(*iParam0, iParam0->f_88, -1, 2048, 2);
							}
						}
						else if ((!func_178(*iParam0, 713668775, 1) || func_242(*iParam0)) || iVar1)
						{
							unk_0x33E113E52A91C5C3(*iParam0, iParam0->f_43, 1f, -1, 3f, 0, 40000f);
						}
					}
					break;
				
				case -1940555668:
					break;
				
				case -927541383:
					if (!func_212(iParam0->f_88))
					{
						if (!func_178(*iParam0, 1464580341, 1) || func_242(*iParam0))
						{
							unk_0xDE6D5CD5475B6C9F(*iParam0, iParam0->f_88, -1);
							unk_0x27ADB0309A9865E0(*iParam0, iParam0->f_88, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x39FD98334BDB065B(*iParam0, -1);
					}
					break;
				
				case 58299323:
					if (unk_0xD51CFE69539DB6D8(iParam0->f_91))
					{
						if (!func_178(*iParam0, -875674219, 1) || func_242(*iParam0))
						{
							unk_0x58F62EDF6111D598(*iParam0, iParam0->f_91, -1);
							unk_0x6A8BCE61F660B8D0(*iParam0, iParam0->f_91, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x39FD98334BDB065B(*iParam0, -1);
					}
					break;
			}
			break;
	}
}

int func_242(struct<26> Param0, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109)
{
	if (Param0.f_5 != Param0.f_7 || !unk_0x04E7E853E31F41A3(&(Param0.f_9), &(Param0.f_25)))
	{
		return 1;
	}
	return 0;
}

void func_243(var uParam0)
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
	
	unk_0x8F575FC0497CAD6C(*uParam0);
	if (func_242(*uParam0))
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
						if (!func_178(*uParam0, 1647992574, 1))
						{
							if (unk_0x22E8CF9DF233BFE5(155.74f, -3098.89f, 4.93f, 0.5f, 1))
							{
								unk_0xA3A25B3BCF95E908(*uParam0, 155.74f, -3098.89f, 4.93f, 0.5f, -1);
							}
						}
						break;
					
					case 1:
						if ((!func_178(*uParam0, 242628503, 1) || func_242(*uParam0)) && unk_0x2917D5E1CB5CE43A("misslsdhsclipboard@base"))
						{
							if (!unk_0x23417CDB252083F9(*uParam0, "misslsdhsclipboard@base", "base", 3))
							{
								unk_0x94026C1D1DB14225(&uLocal_2521);
								if (!func_59(unk_0x1141852D07400777(*uParam0, 1), 126.8496f, -3089.249f, 4.9141f, 0.75f, 0))
								{
									unk_0x33E113E52A91C5C3(0, 126.8496f, -3089.249f, 4.9141f, 1f, -1, 0.5f, 0, 264.2812f);
								}
								unk_0xF78809EA8A08F2D1(0, 264.2812f, 0);
								unk_0xDCF460AE46C9489C(0, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
								unk_0x911ECBCE73F8EC3F(uLocal_2521);
								unk_0xC2C4A3A9FF2FBFFF(*uParam0, uLocal_2521);
								unk_0x33A90AD8FA327B72(&uLocal_2521);
							}
							if (unk_0xD51CFE69539DB6D8(Local_579[2 /*8*/]))
							{
								unk_0x27ADB0309A9865E0(*uParam0, unk_0x242AD66021ED4052(Local_579[2 /*8*/], unk_0x56ADDC5BECDDD8A5(Local_579[2 /*8*/], "engine")), -1, 0, 2);
							}
							uParam0->f_46 = 0;
						}
						else if (unk_0x2917D5E1CB5CE43A("misslsdhsclipboard@idle_a"))
						{
							switch (uParam0->f_46)
							{
								case 0:
								case 2:
									if (uParam0->f_46 == 0 && unk_0x229936D409069998(*uParam0) == 2)
									{
										uParam0->f_109 = 1;
									}
									if (((uParam0->f_46 == 0 && unk_0x229936D409069998(*uParam0) == 2) || uParam0->f_46 == 2) && unk_0x9D40BBF80D8F5E8A() > uParam0->f_37)
									{
										unk_0x94026C1D1DB14225(&uLocal_2521);
										switch (unk_0x0ADD324BC46177EF(0, 3))
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
										unk_0xDCF460AE46C9489C(0, "misslsdhsclipboard@idle_a", &cVar2, 8f, -8f, -1, 0, 0, 0, 0, 0);
										unk_0xDCF460AE46C9489C(0, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
										unk_0x911ECBCE73F8EC3F(uLocal_2521);
										unk_0xC2C4A3A9FF2FBFFF(*uParam0, uLocal_2521);
										unk_0x33A90AD8FA327B72(&uLocal_2521);
										uParam0->f_46 = 1;
									}
									break;
								
								case 1:
									if (unk_0x229936D409069998(*uParam0) == 1)
									{
										uParam0->f_46++;
									}
									break;
								}
						}
						break;
					
					case 2:
					case 3:
						if (!func_178(*uParam0, 1647992574, 1))
						{
							if (unk_0x22E8CF9DF233BFE5(159.82f, -3085.93f, 5f, 0.1f, 1))
							{
								unk_0xA3A25B3BCF95E908(*uParam0, 159.82f, -3085.93f, 5f, 0.1f, -1);
							}
							else if (unk_0x22E8CF9DF233BFE5(160.15f, -3084.79f, 4.99f, 0.1f, 1))
							{
								unk_0xA3A25B3BCF95E908(*uParam0, 160.15f, -3084.79f, 4.99f, 0.1f, -1);
							}
							else if (unk_0x22E8CF9DF233BFE5(159.09f, -3085.02f, 5.01f, 0.1f, 1))
							{
								unk_0xA3A25B3BCF95E908(*uParam0, 159.09f, -3085.02f, 5.01f, 0.1f, -1);
							}
						}
						break;
					}
			}
			break;
		
		case 1:
			switch (unk_0xC7C6DDDE84A8E734(&(uParam0->f_9)))
			{
				case 2074432461:
				case 356486511:
				case -414594135:
				case 1260350710:
					if (unk_0xD51CFE69539DB6D8(uParam0->f_91))
					{
						if (!unk_0x50D7BCB98D6E1BFA(*uParam0, unk_0x1141852D07400777(uParam0->f_91, 1), 180f) && (unk_0x9D40BBF80D8F5E8A() - uParam0->f_37) < 5000)
						{
							if (!func_178(*uParam0, -875674219, 1) || func_242(*uParam0))
							{
								unk_0x58F62EDF6111D598(*uParam0, uParam0->f_91, -1);
								unk_0x6A8BCE61F660B8D0(*uParam0, uParam0->f_91, -1, 2048, 2);
							}
						}
						else if (!func_178(*uParam0, -2015108952, 1) || func_242(*uParam0))
						{
							unk_0xFBBCDB428409716C(*uParam0, uParam0->f_91, -1, 2f, -1f, 2.5f, 1f, 1);
						}
					}
					break;
				
				case -1225951737:
					if (uParam0->f_41 && !func_59(uParam0->f_88, uParam0->f_43, 1f, 0))
					{
						uParam0->f_88 = { uParam0->f_43 };
						iVar8 = 1;
					}
					if (!func_212(uParam0->f_88))
					{
						if (!unk_0x50D7BCB98D6E1BFA(*uParam0, uParam0->f_88, 90f) && (unk_0x9D40BBF80D8F5E8A() - uParam0->f_37) < 5000)
						{
							if ((!func_178(*uParam0, 1464580341, 1) || func_242(*uParam0)) || iVar8)
							{
								unk_0xDE6D5CD5475B6C9F(*uParam0, uParam0->f_88, 0);
								unk_0x27ADB0309A9865E0(*uParam0, uParam0->f_88, -1, 2048, 2);
							}
						}
						else if ((!func_178(*uParam0, 713668775, 1) || func_242(*uParam0)) || iVar8)
						{
							unk_0x33E113E52A91C5C3(*uParam0, uParam0->f_43, 1f, -1, 3f, 0, 40000f);
						}
					}
					break;
				
				case -1940555668:
					break;
				
				case -927541383:
					if (!func_212(uParam0->f_88))
					{
						if (!func_178(*uParam0, 1464580341, 1) || func_242(*uParam0))
						{
							unk_0xDE6D5CD5475B6C9F(*uParam0, uParam0->f_88, -1);
							unk_0x27ADB0309A9865E0(*uParam0, uParam0->f_88, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x39FD98334BDB065B(*uParam0, -1);
					}
					break;
				
				case 58299323:
					if (unk_0xD51CFE69539DB6D8(uParam0->f_91))
					{
						if (!func_178(*uParam0, -875674219, 1) || func_242(*uParam0))
						{
							unk_0x58F62EDF6111D598(*uParam0, uParam0->f_91, -1);
							unk_0x6A8BCE61F660B8D0(*uParam0, uParam0->f_91, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x39FD98334BDB065B(*uParam0, -1);
					}
					break;
			}
			break;
		
		case 2:
			if (((unk_0x04E7E853E31F41A3(&(uParam0->f_9), "ENT_FOOT_LEAVE") || unk_0x04E7E853E31F41A3(&(uParam0->f_9), "ENT_VEH_LEAVE")) || unk_0x04E7E853E31F41A3(&(uParam0->f_9), "WH_FOOT_LEAVE")) || unk_0x04E7E853E31F41A3(&(uParam0->f_9), "WH_VEH_LEAVE"))
			{
				if ((!func_178(*uParam0, 242628503, 1) || !unk_0xFA68268DB708808B(*uParam0, unk_0xE7869D5D7816A9B6(), 90f)) || func_242(*uParam0))
				{
					unk_0x94026C1D1DB14225(&uLocal_2521);
					unk_0x58F62EDF6111D598(0, unk_0xE7869D5D7816A9B6(), 0);
					unk_0x39FD98334BDB065B(0, 2000);
					unk_0x1A13F6831AEE500F(uLocal_2521, 1);
					unk_0x911ECBCE73F8EC3F(uLocal_2521);
					unk_0xC2C4A3A9FF2FBFFF(*uParam0, uLocal_2521);
					unk_0x33A90AD8FA327B72(&uLocal_2521);
					unk_0x6A8BCE61F660B8D0(*uParam0, unk_0xE7869D5D7816A9B6(), -1, 2048, 2);
				}
			}
			else
			{
				if (unk_0xD51CFE69539DB6D8(iLocal_2571) && unk_0xC45A34912542C4EB(iLocal_2571, 0))
				{
					fVar11 = func_101(unk_0xE7869D5D7816A9B6(), iLocal_2571, 1);
				}
				if ((iLocal_2568 == 3 || iLocal_2568 == 2) || iLocal_2568 == 8)
				{
					iVar9 = unk_0xE7869D5D7816A9B6();
					fVar12 = 2f;
				}
				else if (iLocal_2568 == 0 || iLocal_2568 == 1)
				{
					iVar9 = unk_0xE7869D5D7816A9B6();
					fVar12 = 1f;
				}
				else if (iLocal_2568 == 5 && unk_0xD51CFE69539DB6D8(iLocal_2571))
				{
					if (fVar11 > 10f)
					{
						iVar9 = unk_0xE7869D5D7816A9B6();
						fVar12 = 2f;
					}
					else
					{
						iVar9 = iLocal_2571;
						fVar12 = 2f;
					}
				}
				else if (iLocal_2568 == 4 && unk_0xD51CFE69539DB6D8(iLocal_2571))
				{
					iVar9 = iLocal_2571;
					fVar12 = 1f;
				}
				if (unk_0xD51CFE69539DB6D8(iVar9))
				{
					fVar10 = func_101(*uParam0, iVar9, 1);
				}
				if (fVar10 <= 7.5f)
				{
					if (((!func_178(*uParam0, 242628503, 1) && !func_178(*uParam0, 1227113341, 1)) || !unk_0xFA68268DB708808B(*uParam0, unk_0xE7869D5D7816A9B6(), 90f)) || func_242(*uParam0))
					{
						unk_0x94026C1D1DB14225(&uLocal_2521);
						unk_0x58F62EDF6111D598(0, unk_0xE7869D5D7816A9B6(), 0);
						unk_0x39FD98334BDB065B(0, 2000);
						unk_0x1A13F6831AEE500F(uLocal_2521, 1);
						unk_0x911ECBCE73F8EC3F(uLocal_2521);
						unk_0xC2C4A3A9FF2FBFFF(*uParam0, uLocal_2521);
						unk_0x33A90AD8FA327B72(&uLocal_2521);
						unk_0x6A8BCE61F660B8D0(*uParam0, unk_0xE7869D5D7816A9B6(), -1, 2048, 2);
					}
				}
				else if (!func_178(*uParam0, 1227113341, 1) || func_242(*uParam0))
				{
					if (fVar12 > 1f)
					{
						fVar13 = 6f;
					}
					else
					{
						fVar13 = 3f;
					}
					unk_0xD0153915878AE371(*uParam0, iVar9, -1, fVar13, fVar12, 1073741824, 0);
					unk_0x6A8BCE61F660B8D0(*uParam0, unk_0xE7869D5D7816A9B6(), -1, 2048, 2);
				}
			}
			break;
		
		case 3:
			switch (unk_0xC7C6DDDE84A8E734(&(uParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
				case 1568162790:
				case 1682434916:
				case -924218668:
				case 2056033185:
				case 185995093:
					if (unk_0x5E99B63A819500A5(*uParam0, &iVar14, 1))
					{
						if (iVar14 != joaat("weapon_unarmed"))
						{
							unk_0x36EE5CBF45EC4826(*uParam0, joaat("weapon_unarmed"), 0);
						}
					}
					if (!func_178(*uParam0, 780511057, 1))
					{
						unk_0x13C351F151D49F89(*uParam0, unk_0xE7869D5D7816A9B6(), 0, 16);
					}
					break;
				
				case 1093888274:
					if ((!func_178(*uParam0, 242628503, 1) || !unk_0xFA68268DB708808B(*uParam0, unk_0xE7869D5D7816A9B6(), 90f)) || func_242(*uParam0))
					{
						unk_0x94026C1D1DB14225(&uLocal_2521);
						unk_0x58F62EDF6111D598(0, unk_0xE7869D5D7816A9B6(), 0);
						unk_0x39FD98334BDB065B(0, 2000);
						unk_0x1A13F6831AEE500F(uLocal_2521, 1);
						unk_0x911ECBCE73F8EC3F(uLocal_2521);
						unk_0xC2C4A3A9FF2FBFFF(*uParam0, uLocal_2521);
						unk_0x33A90AD8FA327B72(&uLocal_2521);
						unk_0x6A8BCE61F660B8D0(*uParam0, unk_0xE7869D5D7816A9B6(), -1, 2048, 2);
					}
					break;
			}
			break;
		
		case 5:
			if (func_102(*uParam0, 177.7484f, -3240.897f, 4.6079f, 1) < 15f)
			{
				if (!func_178(*uParam0, 1805844857, 1))
				{
					unk_0x4B79E06845D63B96(*uParam0, unk_0xE7869D5D7816A9B6(), 1000f, -1, 0, 0);
				}
			}
			else if ((!func_178(*uParam0, 1805844857, 1) && !func_178(*uParam0, 713668775, 1)) || func_242(*uParam0))
			{
				unk_0x33E113E52A91C5C3(*uParam0, 177.7484f, -3240.897f, 4.6079f, 3f, -1, 0.25f, 1, 40000f);
			}
			break;
		
		case 4:
			switch (unk_0xC7C6DDDE84A8E734(&(uParam0->f_9)))
			{
				case -1645534839:
					if (!func_178(*uParam0, -1519143300, 1) || func_242(*uParam0))
					{
						unk_0xF504D2C6A132D1E5(*uParam0, -1, unk_0xE7869D5D7816A9B6(), 0, 1);
					}
					break;
			}
			break;
	}
}

void func_244(int iParam0)
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
	
	unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &uVar0, 1);
	fVar1 = func_101(unk_0xE7869D5D7816A9B6(), *iParam0, 1);
	if (unk_0x3B2CF3CC08ABF68C(*iParam0))
	{
		iVar3 = 1;
	}
	if (unk_0x915685CA559C211B(*iParam0, unk_0xE7869D5D7816A9B6(), 1))
	{
		if (unk_0x3D06E0340496855A(*iParam0, joaat("weapon_unarmed"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar4 = func_251(*iParam0, &uVar5, &bVar6, &bVar7);
	if ((uVar4 && uVar5) && !bVar7)
	{
		if (bVar6)
		{
			func_226(iParam0, 3, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_226(iParam0, 3, 1, "KILLED", 1, 0);
		}
	}
	else if (((((unk_0xC06784B4179CA473(*iParam0, 122) || unk_0xC06784B4179CA473(*iParam0, 123)) || unk_0xC06784B4179CA473(*iParam0, 124)) || unk_0xC06784B4179CA473(*iParam0, 22)) || unk_0xC06784B4179CA473(*iParam0, 23)) || unk_0xC06784B4179CA473(*iParam0, 86))
	{
		func_226(iParam0, 3, 1, "GUNSHOT", 1, 0);
	}
	else if (iParam0->f_39 && func_250(4))
	{
		func_226(iParam0, 3, 1, "GUN_AIMED", 1, 0);
	}
	else if (iParam0->f_39 && func_249(*iParam0, 2))
	{
		func_226(iParam0, 3, 1, "PROJ_AIMED", 1, 0);
	}
	else if (((iParam0->f_39 && fVar1 < 8f) && !unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1)) && unk_0x72957E5DA83E879F(unk_0xE7869D5D7816A9B6(), 5))
	{
		func_226(iParam0, 3, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2568 == 11)
	{
		if (iParam0->f_39)
		{
			func_226(iParam0, 3, 1, "STEALING_SEC_CAR", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_248(iParam0, 1, "HEARD_SEC_CAR", Local_579[3 /*8*/], 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2568 == 6)
	{
		if (iParam0->f_39)
		{
			func_226(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_248(iParam0, 1, "HEARD_VAN", Local_579[func_96() /*8*/], 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2568 == 10)
	{
		if (iParam0->f_39)
		{
			func_248(iParam0, 3, "STEALING_VAN", Local_579[func_48() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_248(iParam0, 1, "HEARD_VAN", Local_579[func_48() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || unk_0xC06784B4179CA473(*iParam0, 41)) || unk_0xC06784B4179CA473(*iParam0, 112)) || func_246(*iParam0, 0))
	{
		func_226(iParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || unk_0xC06784B4179CA473(*iParam0, 101)) || func_246(*iParam0, 1))
	{
		func_226(iParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((iParam0->f_5 != 3 && iParam0->f_84) && (iParam0->f_39 || iParam0->f_41)) && (fVar1 < 8f || func_102(unk_0xE7869D5D7816A9B6(), Local_642, 1) < 40f))
	{
		if (iParam0->f_39)
		{
			func_226(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_245(iParam0, 1, "HEARD_PLAYER", unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), 1, 1, 0);
		}
	}
	else if (iParam0->f_5 != 5 && uVar4)
	{
		if ((uVar5 && bVar6) && bVar7)
		{
			func_226(iParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar6)
		{
			func_226(iParam0, 3, 1, "DEAD_BODY", 1, 0);
		}
	}
	if (iParam0->f_34 > -1 && iParam0->f_34 < (Local_1704.f_0 - 1))
	{
		bVar8 = Local_1704[iParam0->f_34 /*32*/].f_30;
		switch (unk_0xC7C6DDDE84A8E734(&(Local_1704[iParam0->f_34 /*32*/].f_1)))
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
				func_226(iParam0, 3, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), 0, bVar8);
				break;
			
			case -1225951737:
				func_245(iParam0, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), 1, 0, bVar8);
				break;
			
			case 2074432461:
			case 686645495:
				func_248(iParam0, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), Local_579[func_96() /*8*/], 1, 0, bVar8);
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
	if (!unk_0x04E7E853E31F41A3(&(iParam0->f_25), &(iParam0->f_9)))
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
			switch (unk_0xC7C6DDDE84A8E734(&(iParam0->f_9)))
			{
				case 58299323:
					if ((unk_0x9D40BBF80D8F5E8A() - iParam0->f_37) > 3000)
					{
						func_226(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				
				case -1225951737:
					if (((unk_0x9D40BBF80D8F5E8A() - iParam0->f_37) > 4000 && func_102(*iParam0, iParam0->f_88, 1) < 3f) && unk_0x4BF1843159BD9367(*iParam0))
					{
						func_226(iParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					break;
				
				case -927541383:
					if ((unk_0x9D40BBF80D8F5E8A() - iParam0->f_37) > 4000 && !unk_0x14536F3E8414BD5B(*iParam0))
					{
						func_226(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
			}
			break;
		
		case 3:
			switch (unk_0xC7C6DDDE84A8E734(&(iParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
					if ((((unk_0x9D40BBF80D8F5E8A() - iParam0->f_38) > 8000 && func_102(unk_0xE7869D5D7816A9B6(), Local_642, 1) > 65f) && (func_101(unk_0xE7869D5D7816A9B6(), *iParam0, 1) > 10f || (unk_0x9D40BBF80D8F5E8A() - iParam0->f_38) > 16000)) && !unk_0x14536F3E8414BD5B(*iParam0))
					{
						func_226(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
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
					if (func_102(unk_0xE7869D5D7816A9B6(), Local_642, 1) > 300f && func_101(unk_0xE7869D5D7816A9B6(), *iParam0, 1) > 150f)
					{
						func_226(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
			}
			break;
	}
}

int func_245(int iParam0, int iParam1, char* sParam2, struct<3> Param3, bool bParam6, int iParam7, bool bParam8)
{
	return func_227(iParam0, iParam1, sParam2, Param3, 0, bParam6, iParam7, bParam8);
}

int func_246(struct<110> Param0, int iParam110)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		if (func_247(Param0, Local_28[iVar0 /*110*/], iParam110))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_247(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, int iParam220)
{
	if (unk_0xD51CFE69539DB6D8(iParam110) && unk_0x915685CA559C211B(iParam110, unk_0xE7869D5D7816A9B6(), iParam220))
	{
		if (func_101(iParam0, iParam110, 1) < 15f)
		{
			if (unk_0x3D501875CBE31D51(iParam0, iParam110))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_248(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	return func_227(iParam0, iParam1, sParam2, 0f, 0f, 0f, iParam3, bParam4, iParam5, bParam6);
}

int func_249(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110)
{
	if ((iParam0 != 0 && unk_0xD51CFE69539DB6D8(iParam0)) && !unk_0xAF437D7C802AB246(iParam0))
	{
		if (unk_0x72957E5DA83E879F(unk_0xE7869D5D7816A9B6(), iParam110) && (unk_0xBC273BCD46110BE6(unk_0x3F80C6638E3A1A90(), iParam0) || unk_0x386C3192F791D414(unk_0x3F80C6638E3A1A90(), iParam0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_250(int iParam0)
{
	if (unk_0x72957E5DA83E879F(unk_0xE7869D5D7816A9B6(), iParam0) && (unk_0x3EB3CC572EB40155(unk_0x3F80C6638E3A1A90()) || unk_0x21E4A126B001732E(unk_0x3F80C6638E3A1A90())))
	{
		return 1;
	}
	return 0;
}

int func_251(struct<110> Param0, var uParam110, var uParam111, var uParam112)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		if (func_252(Param0, Local_28[iVar0 /*110*/], &bVar2, &bVar3, &bVar4))
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

int func_252(struct<40> Param0, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, struct<104> Param110, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, var uParam220, var uParam221, var uParam222)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xD51CFE69539DB6D8(Param110.f_0) && unk_0xAF437D7C802AB246(Param110.f_0))
	{
		Var0 = { unk_0x1141852D07400777(Param110.f_0, 0) };
		if (unk_0xF18329472591CFE6(unk_0x1141852D07400777(Param0.f_0, 1), Var0, 1) < 10f)
		{
			if (unk_0x3D501875CBE31D51(Param0.f_0, Param110.f_0))
			{
				if ((unk_0x9D40BBF80D8F5E8A() - Param110.f_103) < 3000)
				{
					*uParam220 = 1;
				}
				else
				{
					*uParam220 = 0;
				}
				if (*uParam220)
				{
					iVar3 = unk_0xA4B928C90A3BEC26(Param110.f_0);
					if (unk_0x41B17741CACC905E(iVar3))
					{
						iVar4 = unk_0x10E754B2E0DF2A70(iVar3);
						if ((iVar4 == unk_0xE7869D5D7816A9B6() && !unk_0xAF437D7C802AB246(iVar4)) && Param0.f_39)
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
				iVar5 = unk_0xD0A47184F3928F62(Param110.f_0);
				if (iVar5 == joaat("weapon_unarmed") || (iVar5 != joaat("weapon_unarmed") && unk_0x224B88C1B3769C41(iVar5) == 2))
				{
					*uParam222 = 1;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_253(int iParam0)
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
	
	unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &uVar0, 1);
	fVar1 = func_101(unk_0xE7869D5D7816A9B6(), *iParam0, 1);
	if (unk_0x3B2CF3CC08ABF68C(*iParam0))
	{
		iVar3 = 1;
	}
	if (unk_0x915685CA559C211B(*iParam0, unk_0xE7869D5D7816A9B6(), 1))
	{
		if (unk_0x3D06E0340496855A(*iParam0, joaat("weapon_unarmed"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar20 = func_251(*iParam0, &uVar21, &bVar22, &bVar23);
	if (((iParam0->f_5 != 5 && uVar20) && uVar21) && !bVar23)
	{
		if (bVar22)
		{
			func_226(iParam0, 5, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_226(iParam0, 5, 1, "KILLED", 1, 0);
		}
	}
	else if (((((unk_0xC06784B4179CA473(*iParam0, 122) || unk_0xC06784B4179CA473(*iParam0, 123)) || unk_0xC06784B4179CA473(*iParam0, 124)) || unk_0xC06784B4179CA473(*iParam0, 22)) || unk_0xC06784B4179CA473(*iParam0, 23)) || unk_0xC06784B4179CA473(*iParam0, 86))
	{
		func_226(iParam0, 5, 1, "GUNSHOT", 1, 0);
	}
	else if ((iParam0->f_39 && iParam0->f_5 != 4) && func_250(4))
	{
		func_226(iParam0, 4, 1, "GUN_AIMED", 1, 0);
	}
	else if (iParam0->f_39 && func_249(*iParam0, 2))
	{
		func_226(iParam0, 5, 1, "PROJ_AIMED", 1, 0);
	}
	else if ((((iParam0->f_39 && fVar1 < 8f) && iParam0->f_5 != 4) && !unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1)) && unk_0x72957E5DA83E879F(unk_0xE7869D5D7816A9B6(), 5))
	{
		func_226(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2568 == 7)
	{
		if (iParam0->f_39)
		{
			func_226(iParam0, 3, 1, "EXIT_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_245(iParam0, 1, "HEARD_PLAYER", unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2568 == 6)
	{
		if (iParam0->f_39)
		{
			func_226(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_245(iParam0, 1, "HEARD_PLAYER", unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2568 == 10)
	{
		if (iParam0->f_39)
		{
			func_248(iParam0, 3, "STEALING_VAN", Local_579[func_48() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_248(iParam0, 1, "HEARD_VAN", Local_579[func_48() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || unk_0xC06784B4179CA473(*iParam0, 41)) || unk_0xC06784B4179CA473(*iParam0, 112)) || func_246(*iParam0, 0))
	{
		func_226(iParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || unk_0xC06784B4179CA473(*iParam0, 101)) || func_246(*iParam0, 1))
	{
		func_226(iParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((iParam0->f_5 != 3 && iParam0->f_84) && (iParam0->f_39 || iParam0->f_41)) && (fVar1 < 8f || func_102(unk_0xE7869D5D7816A9B6(), Local_642, 1) < 40f))
	{
		if (iParam0->f_39)
		{
			func_226(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_245(iParam0, 1, "HEARD_PLAYER", unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), 1, 1, 0);
		}
	}
	else if (iParam0->f_5 != 5 && uVar20)
	{
		if ((uVar21 && bVar22) && bVar23)
		{
			func_226(iParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar22)
		{
			func_226(iParam0, 5, 1, "DEAD_BODY", 1, 0);
		}
	}
	else if (((((((iParam0->f_39 || iParam0->f_41) && (iParam0->f_86 || iParam0->f_87)) && iLocal_2568 == 9) && !unk_0x04E7E853E31F41A3(&(iParam0->f_9), "SEE_VAN_LEAVING")) && !unk_0x04E7E853E31F41A3(&(iParam0->f_9), "SEE_VAN_LEAVING_1")) && !unk_0x04E7E853E31F41A3(&(iParam0->f_9), "CHECK_DRIVER")) && func_102(unk_0xE7869D5D7816A9B6(), Local_642, 1) < 15f)
	{
		if (iParam0->f_39)
		{
			func_248(iParam0, 1, "SEE_VAN_LEAVING", Local_579[func_96() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_248(iParam0, 1, "HEARD_VAN", Local_579[func_96() /*8*/], 1, 1, 0);
		}
	}
	else if (iLocal_2568 != 9)
	{
		if ((iParam0->f_86 && (((iLocal_2568 == 0 || iLocal_2568 == 1) || iLocal_2568 == 4) || iParam0->f_5 == 1)) || (iParam0->f_87 && ((iLocal_2568 == 3 || iLocal_2568 == 2) || iLocal_2568 == 5)))
		{
			if ((iLocal_2568 == 5 || iLocal_2568 == 4) && unk_0xF70F7CD913F23E2A(*iParam0, iLocal_2571, 19))
			{
				switch (iLocal_2568)
				{
					case 5:
						StringCopy(&Var4, "WH_DITCH_VEH", 64);
						break;
					
					case 4:
						StringCopy(&Var4, "ENT_DITCH_VEH", 64);
						break;
				}
				func_226(iParam0, 2, 1, &Var4, 1, 0);
			}
			else if (iParam0->f_39)
			{
				switch (iLocal_2568)
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
				func_226(iParam0, 2, 1, &Var4, 1, 0);
			}
			else if (iParam0->f_41)
			{
				func_245(iParam0, 1, "HEARD_PLAYER", unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), 1, 1, 0);
			}
		}
	}
	if (iParam0->f_34 > -1 && iParam0->f_34 < (Local_1704.f_0 - 1))
	{
		bVar24 = Local_1704[iParam0->f_34 /*32*/].f_30;
		switch (unk_0xC7C6DDDE84A8E734(&(Local_1704[iParam0->f_34 /*32*/].f_1)))
		{
			case joaat("killed"):
			case 1518302817:
			case -1298712083:
				if (iParam0->f_5 != 4)
				{
					func_226(iParam0, 5, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case 185995093:
				if (iParam0->f_5 != 4)
				{
					func_226(iParam0, 3, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -1645534839:
				if (iParam0->f_5 != 4)
				{
					if (func_102(*iParam0, Local_1704[iParam0->f_34 /*32*/].f_23, 1) < 5f)
					{
						func_226(iParam0, 4, 1, "GUN_AIMED_AT", 0, bVar24);
					}
					else
					{
						func_226(iParam0, 5, 1, "SEEN_WEAPON", 0, bVar24);
					}
				}
				break;
			
			case 880647822:
				if (iParam0->f_5 != 4)
				{
					func_226(iParam0, 5, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case 1921975061:
				if (iParam0->f_5 != 4)
				{
					func_226(iParam0, 5, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case joaat("fight"):
			case 1681313069:
			case 1156217463:
			case -419867425:
				if (iParam0->f_5 != 4)
				{
					func_226(iParam0, 3, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case 1682434916:
			case -924218668:
			case 2056033185:
				if (((iParam0->f_5 != 4 && !unk_0x04E7E853E31F41A3(&(iParam0->f_9), "STEALING_VAN")) && !unk_0x04E7E853E31F41A3(&(iParam0->f_9), "GET_IN_VAN")) && !unk_0x04E7E853E31F41A3(&(iParam0->f_9), "EXIT_VAN"))
				{
					func_226(iParam0, 3, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case joaat("gunshot"):
				if (iParam0->f_5 != 4)
				{
					func_226(iParam0, 5, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -426892158:
				if (iParam0->f_86)
				{
					func_226(iParam0, 2, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -1461435341:
				if (iParam0->f_86)
				{
					func_226(iParam0, 2, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -972653884:
				if (iParam0->f_87)
				{
					func_226(iParam0, 2, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -520621538:
				if (iParam0->f_87)
				{
					func_226(iParam0, 2, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -1349994105:
				if (iParam0->f_87)
				{
					func_226(iParam0, 2, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -1225951737:
				if (iParam0->f_87)
				{
					func_245(iParam0, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), 1, 0, bVar24);
				}
				break;
			
			case 2074432461:
				if (iParam0->f_87)
				{
					func_248(iParam0, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), Local_579[func_96() /*8*/], 1, 0, bVar24);
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
	if (!unk_0x04E7E853E31F41A3(&(iParam0->f_25), &(iParam0->f_9)))
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
			switch (unk_0xC7C6DDDE84A8E734(&(iParam0->f_9)))
			{
				case joaat("gunshot"):
				case 1921975061:
				case 880647822:
				case joaat("killed"):
				case 1518302817:
				case -1298712083:
					if ((func_258(*iParam0) || (iParam0->f_48 % 2) == 0) || !func_168(Local_469.f_0))
					{
						if ((unk_0xC7C6DDDE84A8E734(&(iParam0->f_9)) == joaat("gunshot") || unk_0xC7C6DDDE84A8E734(&(iParam0->f_9)) == 1921975061) || unk_0xC7C6DDDE84A8E734(&(iParam0->f_9)) == 880647822)
						{
							if (func_235(iVar26))
							{
								Var27 = { func_257(iVar26, "JS_GUN1") };
								if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_256(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_256(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
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
								if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_256(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_256(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
						}
						else if ((unk_0xC7C6DDDE84A8E734(&(iParam0->f_9)) == joaat("killed") || unk_0xC7C6DDDE84A8E734(&(iParam0->f_9)) == 1518302817) || unk_0xC7C6DDDE84A8E734(&(iParam0->f_9)) == -1298712083)
						{
							if (func_235(iVar26))
							{
								Var27 = { func_257(iVar26, "JS_KILL") };
								if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
								{
									func_256(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_256(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else if (iParam0->f_48 == 0)
							{
								func_256(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					else
					{
						if (func_235(iVar26))
						{
							Var27 = { func_257(iVar26, "JS_GETSEC") };
							if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_256(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 1);
							}
							else if (iParam0->f_48 == 0)
							{
								func_256(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
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
							if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_256(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 1);
							}
							else if (iParam0->f_48 == 0)
							{
								func_256(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						iParam0->f_48++;
					}
					break;
			}
			break;
		
		case 4:
			switch (unk_0xC7C6DDDE84A8E734(&(iParam0->f_9)))
			{
				case 1224761252:
					if (func_249(*iParam0, 4))
					{
						func_226(iParam0, 4, 0, "GUN_AIMED_AT", 1, 0);
					}
					else if ((unk_0x9D40BBF80D8F5E8A() - iParam0->f_37) > 1000)
					{
						func_226(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					break;
				
				case -1645534839:
					if (func_249(*iParam0, 4))
					{
						func_226(iParam0, 4, 1, "GUN_AIMED_AT", 1, 0);
					}
					if (((unk_0x9D40BBF80D8F5E8A() - iParam0->f_37) > 15000 || (unk_0x9D40BBF80D8F5E8A() - iParam0->f_38) > 3000) && !unk_0x14536F3E8414BD5B(*iParam0))
					{
						func_226(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					else if (func_258(*iParam0) || iParam0->f_48 == 0)
					{
						if (func_235(iVar26))
						{
							Var27 = { func_257(iVar26, "JS_HND1") };
							if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_256(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_256(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
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
							if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_256(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_256(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					else
					{
						if (func_235(iVar26))
						{
							Var27 = { func_257(iVar26, "JS_HND1") };
							if (func_232(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_256(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_256(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
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
							if (func_232(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_256(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_256(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
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
					if (func_43() && (unk_0x9D40BBF80D8F5E8A() - iLocal_2519) > 5000)
					{
						switch (iLocal_2549)
						{
							case 0:
								func_232(iVar26, "JS_STOCK", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 1:
								func_232(iVar26, "JS_STOCKb", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 2:
								func_232(iVar26, "JS_STOCKc", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 3:
								func_232(iVar26, "JS_STOCKd", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 4:
								func_232(iVar26, "JS_STOCKe", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 5:
								func_232(iVar26, "JS_STOCKf", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 6:
								func_232(iVar26, "JS_STOCKg", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 7:
								func_232(iVar26, "JS_STOCKh", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 8:
								func_232(iVar26, "JS_STOCKi", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 9:
								func_232(iVar26, "JS_STOCKj", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 10:
								func_232(iVar26, "JS_STOCKk", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549 = 0;
								break;
							}
					}
					break;
				
				case 2:
					if (!iParam0->f_49)
					{
						if (func_232(iVar26, "SOL1_AMB1", iParam0->f_5, 0, 0, 1, 0, 1, 0, 1))
						{
							func_40(&uLocal_2353, 4, Local_28[2 /*110*/], "CONSTRUCTION1", 0, 1);
							func_40(&uLocal_2353, 3, Local_28[3 /*110*/], "CONSTRUCTION2", 0, 1);
							iParam0->f_49 = 1;
						}
					}
					break;
			}
			break;
		
		case 1:
			if (unk_0x04E7E853E31F41A3(&(iParam0->f_9), "SEE_VAN_LEAVING") || unk_0x04E7E853E31F41A3(&(iParam0->f_9), "CHECK_DRIVER"))
			{
				Var36 = { func_255(unk_0xBD306D8AFEF4E078(unk_0xE7869D5D7816A9B6(), 0f, 1f, 0f) - unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1)) };
				Var39 = { func_255(unk_0x1141852D07400777(Local_28[iVar26 /*110*/], 1) - unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1)) };
				uVar34 = func_254(Var36, Var39);
				fVar35 = unk_0x64EBDBD74E9DA578(uVar34);
				if ((fVar35 < 90f && fVar1 < 8f) && unk_0xD4F0FC8FFEDE152B(unk_0xE7869D5D7816A9B6()) < 1f)
				{
					bVar33 = true;
				}
			}
			switch (unk_0xC7C6DDDE84A8E734(&(iParam0->f_9)))
			{
				case -414594135:
				case 1260350710:
					if (func_258(*iParam0) && unk_0x04E7E853E31F41A3(&(iParam0->f_9), "SEE_VAN_LEAVING"))
					{
						if (func_235(iVar26))
						{
							Var27 = { func_257(iVar26, "JS_VAN_LVE1") };
							func_232(iVar26, &Var27, iParam0->f_5, 1, 0, 1, 1000, 0, 0, 0);
						}
					}
					else if (bVar33)
					{
						func_248(iParam0, 1, "CHECK_DRIVER", Local_579[func_96() /*8*/], 0, 1, 0);
					}
					else if (func_102(unk_0xE7869D5D7816A9B6(), Local_642, 1) >= 20f)
					{
						if (fVar1 > 5f)
						{
							func_226(iParam0, 1, 0, "VAN_LOST", 1, 0);
						}
					}
					break;
				
				case 58299323:
					if (func_258(*iParam0))
					{
						Var27 = { func_257(iVar26, "JS_VAN_LVE2") };
						func_232(iVar26, &Var27, iParam0->f_5, 1, 0, 1, 0, 0, 0, 0);
					}
					else if ((unk_0x9D40BBF80D8F5E8A() - iParam0->f_37) > 3000)
					{
						func_226(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				
				case 356486511:
					if (bVar33)
					{
						if ((unk_0x9D40BBF80D8F5E8A() - iParam0->f_37) > 2000 && !unk_0x14536F3E8414BD5B(*iParam0))
						{
							func_226(iParam0, 3, 1, "STEALING_VAN", 1, 0);
						}
					}
					else
					{
						func_248(iParam0, 1, "SEE_VAN_LEAVING_1", Local_579[func_96() /*8*/], 0, 1, 0);
					}
					break;
				
				case -1225951737:
					if (((unk_0x9D40BBF80D8F5E8A() - iParam0->f_37) > 4000 && func_102(*iParam0, iParam0->f_88, 1) < 3f) && unk_0x4BF1843159BD9367(*iParam0))
					{
						func_226(iParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					else if (func_258(*iParam0))
					{
						if (func_235(iVar26))
						{
							Var27 = { func_257(iVar26, "JS_SND_INV") };
							if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
							{
								func_256(iParam0, &(iParam0->f_9), &Var27, 3f, 3000, 500, 0, 0, 0);
							}
						}
					}
					break;
				
				case -927541383:
					if ((unk_0x9D40BBF80D8F5E8A() - iParam0->f_37) > 4000 && !unk_0x14536F3E8414BD5B(*iParam0))
					{
						if (func_235(iVar26))
						{
							Var27 = { func_257(iVar26, "JS_SNDLOST2") };
							func_232(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
						func_226(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					else if (func_258(*iParam0))
					{
						if (func_235(iVar26))
						{
							Var27 = { func_257(iVar26, "JS_SNDLOST1") };
							func_232(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
					}
					break;
			}
			break;
		
		case 3:
			switch (unk_0xC7C6DDDE84A8E734(&(iParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
				case -419867425:
					if ((((unk_0x9D40BBF80D8F5E8A() - iParam0->f_38) > 8000 && func_102(unk_0xE7869D5D7816A9B6(), Local_642, 1) > 65f) && (func_101(unk_0xE7869D5D7816A9B6(), *iParam0, 1) > 10f || (unk_0x9D40BBF80D8F5E8A() - iParam0->f_38) > 16000)) && !unk_0x14536F3E8414BD5B(*iParam0))
					{
						func_226(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					else if (func_258(*iParam0) && iParam0->f_35)
					{
						if (!iParam0->f_84)
						{
							if (func_235(iVar26))
							{
								Var27 = { func_257(iVar26, "JS_MELE_1") };
								if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_256(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 0, 0);
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
								if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_256(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							iParam0->f_84 = 1;
						}
						else if (func_235(iVar26))
						{
							Var27 = { func_257(iVar26, "JS_MELE_2") };
							if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_256(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 0, 0);
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
							if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_256(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 0, 0);
							}
						}
					}
					break;
				
				case 1093888274:
					if ((unk_0x9D40BBF80D8F5E8A() - iParam0->f_37) > 4000)
					{
						func_226(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					if (func_258(*iParam0))
					{
						if (func_235(iVar26))
						{
							Var27 = { func_257(iVar26, "JS_MELE_ESC") };
							func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
						}
					}
					break;
				
				case 1682434916:
					if (((((unk_0x9D40BBF80D8F5E8A() - iParam0->f_37) > 2000 && iParam0->f_39) && !unk_0x14536F3E8414BD5B(*iParam0)) && iLocal_2568 != 9) && iLocal_2568 != 10)
					{
						func_226(iParam0, 3, 0, "EXIT_VAN", 1, 0);
					}
					if (func_258(*iParam0))
					{
						if (func_235(iVar26))
						{
							Var27 = { func_257(iVar26, "JS_VAN_IN2") };
							if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_256(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_256(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
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
							if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_256(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_256(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (func_43() && (unk_0x9D40BBF80D8F5E8A() - iLocal_2519) > 2000)
					{
						if (func_235(iVar26))
						{
							Var27 = { func_257(iVar26, "JS_VAN_TK") };
							if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_256(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
						}
					}
					break;
				
				case -924218668:
					if (func_258(*iParam0))
					{
						if (func_235(iVar26))
						{
							Var27 = { func_257(iVar26, "JS_VAN_IN1") };
							if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_256(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_256(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
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
							if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_256(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_256(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (func_43() && (unk_0x9D40BBF80D8F5E8A() - iLocal_2519) > 2000)
					{
						if (func_235(iVar26))
						{
							Var27 = { func_257(iVar26, "JS_VAN_TK") };
							if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_256(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_256(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
				
				case 2056033185:
					if (func_258(*iParam0))
					{
						if (func_235(iVar26))
						{
							Var27 = { func_257(iVar26, "JS_VAN_IN2") };
							if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_256(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_256(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
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
							if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_256(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_256(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 2:
			if ((unk_0x9D40BBF80D8F5E8A() - iParam0->f_38) > 5000 && !unk_0x14536F3E8414BD5B(*iParam0))
			{
				if (iVar26 == 1)
				{
					func_232(iVar26, "JS_STOCK2", 0, 0, 0, 1, 1000, 0, 0, 0);
					iLocal_2549 = 0;
				}
				func_226(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
			}
			else
			{
				if (iParam0->f_39)
				{
					if ((unk_0x9D40BBF80D8F5E8A() - iParam0->f_38) > 1000 && !unk_0x14536F3E8414BD5B(*iParam0))
					{
						if (((unk_0x04E7E853E31F41A3(&(iParam0->f_9), "ENT_FOOT") || unk_0x04E7E853E31F41A3(&(iParam0->f_9), "ENT_VEH")) || unk_0x04E7E853E31F41A3(&(iParam0->f_9), "WH_FOOT")) || unk_0x04E7E853E31F41A3(&(iParam0->f_9), "WH_VEH"))
						{
							Var42 = { iParam0->f_9 };
							StringConCat(&Var42, "_LEAVE", 32);
							func_226(iParam0, 2, 0, &Var42, 1, 0);
						}
					}
					if ((unk_0x04E7E853E31F41A3(&(iParam0->f_9), "WH_FOOT") || unk_0x04E7E853E31F41A3(&(iParam0->f_9), "WH_VEH")) || (unk_0x04E7E853E31F41A3(&(iParam0->f_9), "WH_DITCH_VEH") && !unk_0x14536F3E8414BD5B(*iParam0)))
					{
						if (((iParam0->f_104 >= 6 && iLocal_2519 != -1) && (unk_0x9D40BBF80D8F5E8A() - iLocal_2519) > 7000) && (unk_0x9D40BBF80D8F5E8A() - iParam0->f_38) == 0)
						{
							func_226(iParam0, 3, 0, "WH_FAILED_LEAVE", 1, 0);
						}
					}
				}
				switch (unk_0xC7C6DDDE84A8E734(&(iParam0->f_9)))
				{
					case -426892158:
						if (func_258(*iParam0))
						{
							if (!iParam0->f_82)
							{
								if (func_235(iVar26))
								{
									if (!iParam0->f_83)
									{
										Var27 = { func_257(iVar26, "JS_ENT_F1") };
										func_232(iVar26, &Var27, iParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
									else
									{
										Var27 = { func_257(iVar26, "JS_ENT_F1_P") };
										func_232(iVar26, &Var27, iParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
								}
							}
							else if (func_235(iVar26))
							{
								if (!iParam0->f_83)
								{
									Var27 = { func_257(iVar26, "JS_ENT_F2") };
									func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
								else
								{
									Var27 = { func_257(iVar26, "JS_ENT_F2_P") };
									func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
							}
							iParam0->f_82 = 1;
						}
						else if (func_43() && (unk_0x9D40BBF80D8F5E8A() - iLocal_2519) > 5000)
						{
							if (func_235(iVar26))
							{
								if (!iParam0->f_83)
								{
									Var27 = { func_257(iVar26, "JS_ENT_F") };
									func_232(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								else
								{
									Var27 = { func_257(iVar26, "JS_ENT_F_P") };
									func_232(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
							}
						}
						break;
					
					case -1461435341:
						if (func_258(*iParam0) || iParam0->f_48 == 0)
						{
							if (!iParam0->f_82)
							{
								if (func_235(iVar26))
								{
									Var27 = { func_257(iVar26, "JS_ENT_V1") };
									if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
									{
										iParam0->f_48++;
									}
								}
								iParam0->f_82 = 1;
							}
							else if (unk_0x04E7E853E31F41A3(&(iParam0->f_17), "WH_VEH"))
							{
								if (func_235(iVar26))
								{
									Var27 = { func_257(iVar26, "JS_ENT_V") };
									if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
									{
										iParam0->f_48++;
									}
								}
							}
							else if (func_235(iVar26))
							{
								Var27 = { func_257(iVar26, "JS_ENT_V3") };
								if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									iParam0->f_48++;
								}
							}
						}
						else if (func_43() && (unk_0x9D40BBF80D8F5E8A() - iLocal_2519) > 5000)
						{
							if (func_235(iVar26))
							{
								Var27 = { func_257(iVar26, "JS_ENT_V3") };
								func_232(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							}
						}
						break;
					
					case -972653884:
						if (func_258(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_235(iVar26))
								{
									Var27 = { func_257(iVar26, "JS_WH1") };
									if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_256(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_256(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_235(iVar26))
								{
									Var27 = { func_257(iVar26, "JS_WH2") };
									if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_256(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_256(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (func_43() && (unk_0x9D40BBF80D8F5E8A() - iLocal_2519) > 5000)
							{
								if (func_235(iVar26))
								{
									if (iParam0->f_104 < 5)
									{
										Var27 = { func_257(iVar26, "JS_WH") };
									}
									else
									{
										Var27 = { func_257(iVar26, "JS_WH_F") };
									}
									if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_256(iParam0, &(iParam0->f_9), &Var27, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_256(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case -640827668:
						if (func_258(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_235(iVar26))
								{
									Var27 = { func_257(iVar26, "JS_WH1") };
									if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_256(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_256(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_235(iVar26))
								{
									Var27 = { func_257(iVar26, "JS_WH2") };
									if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_256(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_256(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (func_43() && (unk_0x9D40BBF80D8F5E8A() - iLocal_2519) > 5000)
							{
								if (func_235(iVar26))
								{
									if (iParam0->f_104 < 5)
									{
										if (((iParam0->f_104 - 1) % 2) == 0)
										{
											Var27 = { func_257(iVar26, "JS_ENT_V4") };
										}
										else
										{
											Var27 = { func_257(iVar26, "JS_ENT_V3") };
										}
									}
									else
									{
										Var27 = { func_257(iVar26, "JS_WH_F") };
									}
									if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_256(iParam0, &(iParam0->f_9), &Var27, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_256(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case -520621538:
						if (func_258(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_235(iVar26))
								{
									Var27 = { func_257(iVar26, "JS_WH1") };
									if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_256(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_256(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_235(iVar26))
								{
									Var27 = { func_257(iVar26, "JS_WH2") };
									if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_256(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_256(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (func_43() && (unk_0x9D40BBF80D8F5E8A() - iLocal_2519) > 5000)
							{
								if (func_235(iVar26))
								{
									if (iParam0->f_104 < 5)
									{
										if (((iParam0->f_104 - 1) % 2) == 0)
										{
											Var27 = { func_257(iVar26, "JS_ENT_V3") };
										}
										else
										{
											Var27 = { func_257(iVar26, "JS_WH") };
										}
									}
									else
									{
										Var27 = { func_257(iVar26, "JS_WH_F") };
									}
									if (func_232(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_256(iParam0, &(iParam0->f_9), &Var27, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_256(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case 778765338:
						if (iParam0->f_48 == 0)
						{
							if (func_43() && (unk_0x9D40BBF80D8F5E8A() - iLocal_2519) > 1000)
							{
								if (func_235(iVar26))
								{
									Var27 = { func_257(iVar26, "JS_ENT_V4") };
									func_232(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								iParam0->f_48++;
							}
						}
						else if (func_43() && (unk_0x9D40BBF80D8F5E8A() - iLocal_2519) > 5000)
						{
							if (((iParam0->f_48 - 1) % 3) == 0)
							{
								Var27 = { func_257(iVar26, "JS_ENT_V4") };
							}
							else
							{
								Var27 = { func_257(iVar26, "JS_ENT_V3") };
							}
							func_232(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							iParam0->f_48++;
						}
						break;
					
					case 1580556320:
						if (iParam0->f_48 == 0)
						{
							if (func_43() && (unk_0x9D40BBF80D8F5E8A() - iLocal_2519) > 1000)
							{
								if (func_235(iVar26))
								{
									if (!iParam0->f_83)
									{
										Var27 = { func_257(iVar26, "JS_ENT_F3") };
										func_232(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
									}
									else
									{
										Var27 = { func_257(iVar26, "JS_ENT_F3_P") };
										func_232(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
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
							if (func_43() && (unk_0x9D40BBF80D8F5E8A() - iLocal_2519) > 1000)
							{
								if (func_235(iVar26))
								{
									Var27 = { func_257(iVar26, "JS_ENT_V5") };
									func_232(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
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

float func_254(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_255(struct<3> Param0)
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

void func_256(int iParam0, char* sParam1, char* sParam2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8)
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
		func_229(&(iParam0->f_50), 0);
	}
}

struct<6> func_257(int iParam0, char* sParam1)
{
	struct<6> Var0;
	
	StringCopy(&Var0, sParam1, 24);
	if (iParam0 == 1)
	{
		StringConCat(&Var0, "b", 24);
	}
	return Var0;
}

int func_258(struct<34> Param0, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109)
{
	if (Param0.f_8 || Param0.f_33)
	{
		return 1;
	}
	return 0;
}

void func_259(int iParam0)
{
	if (unk_0x7F895384D1330018(*iParam0, unk_0xE7869D5D7816A9B6()))
	{
		iParam0->f_40 = unk_0x9D40BBF80D8F5E8A();
		iParam0->f_39 = 1;
	}
	else if ((unk_0x9D40BBF80D8F5E8A() - iParam0->f_40) > 2000 || !unk_0xFA68268DB708808B(*iParam0, unk_0xE7869D5D7816A9B6(), 90f))
	{
		iParam0->f_40 = unk_0x9D40BBF80D8F5E8A();
		iParam0->f_39 = 0;
	}
	if (iParam0->f_39)
	{
		bLocal_2565 = false;
	}
	if (bLocal_2565)
	{
		unk_0xC31A3F1982C7B12B(*iParam0, 188, 1);
	}
	if (!func_260())
	{
		iParam0->f_41 = unk_0x336C780EEEFE4E4B(unk_0x3F80C6638E3A1A90(), *iParam0);
		if (iParam0->f_41)
		{
			iParam0->f_43 = { unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1) };
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

int func_260()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (unk_0xD51CFE69539DB6D8(Local_579[iVar0 /*8*/]) && unk_0xC45A34912542C4EB(Local_579[iVar0 /*8*/], 0))
		{
			if (unk_0x4E3A17D3771C1678(Local_579[iVar0 /*8*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_261()
{
	struct<3> Var0;
	var uVar3;
	
	unk_0x103FCC2BD24292A3("BUGSTAR", &iLocal_2520);
	unk_0xA9CA101B50B90993(3, joaat("player"), iLocal_2520);
	unk_0xA9CA101B50B90993(5, iLocal_2520, joaat("player"));
	unk_0xA9CA101B50B90993(1, joaat("COP"), iLocal_2520);
	unk_0xA9CA101B50B90993(1, iLocal_2520, joaat("COP"));
	unk_0xBDF0A810DD6A47D3(Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f), Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f), 0, 1);
	unk_0x98ED910C6513D537(Vector(7.27131f, -3092.467f, 138.4268f) - Vector(2.375f, 22.75f, 19.4375f), Vector(7.27131f, -3092.467f, 138.4268f) + Vector(2.375f, 22.75f, 19.4375f), 0);
	unk_0xB86B1248EA9B87EA(138.43f, -3092.47f, 4.9f, 28.375f, 1, 0, 0, 0);
	if (func_182() || func_6(0))
	{
		iLocal_655 = 0;
		if (func_182())
		{
			if (Global_85535)
			{
				iLocal_655++;
			}
		}
		if (func_182())
		{
			func_213(iLocal_655, &Var0, &uVar3);
			func_267(Var0, uVar3, 1, 0);
		}
		bLocal_654 = true;
	}
	else
	{
		while (!func_177(1))
		{
			unk_0x4EDE34FBADD967A6(0);
			func_266(&uLocal_658);
		}
	}
	func_265(&uLocal_658, "JHP1A", 0);
	func_208(&uLocal_658, "misslsdhsclipboard@base");
	func_208(&uLocal_658, "misslsdhsclipboard@idle_a");
	func_208(&uLocal_658, "misstrevor3");
	func_160(&uLocal_658, joaat("p_amb_clipboard_01"));
	func_207(&uLocal_658, iLocal_2522);
	func_209(&uLocal_658, &cLocal_645);
	unk_0x88727A27E3B839FB(unk_0x3F80C6638E3A1A90(), 0.15f);
	func_263(87);
	func_40(&uLocal_2353, 0, unk_0xE7869D5D7816A9B6(), "MICHAEL", 0, 1);
	func_40(&uLocal_2353, 3, 0, "LESTER", 0, 1);
	func_231(bLocal_2518);
	func_262();
	iLocal_2522 = unk_0x41D9D981197E60A2(Local_642, "po1_08_warehouseint1");
	unk_0xC167A96DA488D690(&cLocal_626);
	iLocal_2573 = unk_0x8668A841B325FF16(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0, 1, 1, 1);
	while (!unk_0x4D15A085E079AB18(0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_262()
{
	Global_85536 = 1;
}

void func_263(int iParam0)
{
	Global_87213 = 0;
	switch (iParam0)
	{
		case 72:
			func_264(2);
			func_264(4);
			break;
		
		case 73:
			func_264(0);
			func_264(1);
			func_264(7);
			break;
		
		case 92:
			func_264(10);
			func_264(9);
			func_264(13);
			func_264(6);
			break;
		
		case 68:
			func_264(11);
			break;
		
		case 78:
			func_264(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_264(3);
			break;
		
		default:
			break;
	}
}

void func_264(int iParam0)
{
	unk_0x9956FB0E4B50ECB8(&Global_87213, iParam0);
}

int func_265(var uParam0, char* sParam1, int iParam2)
{
	if (uParam0->f_779[iParam2 /*5*/].f_1 || uParam0->f_779[iParam2 /*5*/])
	{
		if (unk_0x04E7E853E31F41A3(uParam0->f_779[iParam2 /*5*/].f_4, sParam1))
		{
			uParam0->f_779[iParam2 /*5*/].f_2 = 0;
			uParam0->f_977 = 1;
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if (iParam2 >= 10)
		{
			unk_0xDE372C28E5D47E7C(sParam1, iParam2);
		}
		else
		{
			unk_0x36A3D6FBED10EF81(sParam1, iParam2);
		}
		uParam0->f_779[iParam2 /*5*/] = 1;
		uParam0->f_779[iParam2 /*5*/].f_3 = unk_0x9D40BBF80D8F5E8A();
		uParam0->f_779[iParam2 /*5*/].f_4 = sParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

void func_266(var uParam0)
{
	func_215(uParam0);
}

void func_267(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (func_182())
	{
		unk_0x8A10FCF639EC0104(0);
		unk_0x73817D396768E4C6(&(Global_91025.f_20), 2);
		unk_0x307133C47B1565B0(1);
		if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 0, 0);
		}
		Global_91021 = { Param0 };
		Global_91024 = uParam3;
		Global_91020 = 1;
		if (iParam4 == 1)
		{
			unk_0x9956FB0E4B50ECB8(&(Global_91025.f_20), 14);
		}
		else
		{
			unk_0x73817D396768E4C6(&(Global_91025.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0x9956FB0E4B50ECB8(&(Global_91025.f_20), 24);
		}
		else
		{
			unk_0x73817D396768E4C6(&(Global_91025.f_20), 24);
		}
		func_181(1);
	}
}

void func_268(int iParam0)
{
	struct<3> Var0;
	char[] cVar6[8];
	
	if (iParam0 == 6)
	{
		func_280();
		func_8(0);
		unk_0xE72D045151F6CA70("JHP1A_FAIL");
		unk_0x52F20802944F8DCE();
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
		if (unk_0xF6917DE0E003509D(&cVar6))
		{
			func_278(&Var0);
		}
		else
		{
			func_269(&Var0, &cVar6);
		}
		unk_0xE72D045151F6CA70("JHP1A_FAIL");
	}
}

void func_269(char* sParam0, char* sParam1)
{
	func_277(sParam0, sParam1);
	func_270(0);
}

void func_270(int iParam0)
{
	int iVar0;
	
	if (Global_99155.f_7699 || func_6(0))
	{
		iVar0 = func_4();
		if (!func_271(iVar0))
		{
			return;
		}
		unk_0x9956FB0E4B50ECB8(&(Global_82110[iVar0 /*5*/].f_1), 5);
		Global_91061 = iParam0;
	}
}

int func_271(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_276();
	if (unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		unk_0x9F8FD6071D5A40B6(5000);
	}
	iVar0 = Global_82110[iParam0 /*5*/];
	iVar1 = Global_69505.f_109[iVar0 /*4*/];
	func_275(iVar1, 1);
	unk_0xCC01DB5BB34A420E(unk_0x3F80C6638E3A1A90());
	unk_0x7BB1D0BBB1E5E5A7(unk_0x3F80C6638E3A1A90());
	func_272(&(Global_99155.f_1750.f_539), iVar1);
	if (Global_85533 == Global_91062)
	{
		Global_99155.f_7699.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xB519E5386FBF69E5(Global_82146[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
		{
			unk_0xBE3A91305A4366F2(0);
		}
	}
	Global_99155.f_7699.f_330[iVar1 /*6*/].f_2++;
	Global_85533 = Global_91062;
	if (iParam0 == -1)
	{
		if (Global_99155.f_7699)
		{
		}
		return 0;
	}
	if (unk_0xB519E5386FBF69E5(Global_82110[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xB519E5386FBF69E5(Global_82110[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_272(var uParam0, int iParam1)
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
		iVar1 = Global_99155.f_17147[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xB519E5386FBF69E5(Global_99155.f_7699.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_274(Global_99155.f_17147[iVar0], &Var2, &fVar5))
			{
				Global_99155.f_17147[iVar0] = 318;
				func_273(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_88748[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_88748[iVar0 /*29*/].f_9 = 0f;
				Global_88748[iVar0 /*29*/].f_12 = 0f;
				Global_88748[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_88748[iVar0 /*29*/].f_10 = 0f;
				Global_88748[iVar0 /*29*/].f_13 = 0f;
				Global_88748[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_88748[iVar0 /*29*/].f_11 = 0f;
				Global_88748[iVar0 /*29*/].f_14 = 0f;
				Global_88748[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_88748[iVar0 /*29*/].f_26 = 0f;
				Global_88748[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_88748[iVar0 /*29*/].f_27 = 0f;
				Global_88748[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_88748[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_273(var uParam0)
{
	*uParam0 = -15;
}

int func_274(int iParam0, var uParam1, float fParam2)
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
			return func_274(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_274(8, uParam1, fParam2);
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

void func_275(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85343[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85343[iParam0 /*2*/] = 0;
	}
}

void func_276()
{
	Global_91060 = 1;
	if (unk_0xA01404E50546EA1D(unk_0x3F80C6638E3A1A90(), 1))
	{
		if (unk_0xF6917DE0E003509D(&Global_69468))
		{
			switch (func_155())
			{
				case 0:
					StringCopy(&Global_69468, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_69468, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_69468, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_69472, "", 16);
		}
		Global_91060 = 0;
	}
	else if (!unk_0x2E6D4A0CE8AD9494(unk_0x3F80C6638E3A1A90()))
	{
		if (unk_0xF6917DE0E003509D(&Global_69468))
		{
			switch (func_155())
			{
				case 0:
					StringCopy(&Global_69468, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_69468, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_69468, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_69472, "", 16);
		}
		Global_91060 = 0;
		unk_0x9956FB0E4B50ECB8(&(Global_91025.f_20), 25);
	}
}

void func_277(char* sParam0, char* sParam1)
{
	if (!unk_0xF6917DE0E003509D(sParam0))
	{
		if (unk_0x21DDB8B32E12806A(sParam0) <= 16)
		{
			if (unk_0x21DDB8B32E12806A(sParam1) <= 16)
			{
				StringCopy(&Global_69468, sParam0, 16);
				StringCopy(&Global_69472, sParam1, 16);
			}
		}
	}
}

void func_278(char* sParam0)
{
	func_279(sParam0);
	func_270(0);
}

void func_279(char* sParam0)
{
	if (!unk_0xF6917DE0E003509D(sParam0))
	{
		if (unk_0x21DDB8B32E12806A(sParam0) <= 16)
		{
			StringCopy(&Global_69468, sParam0, 16);
			StringCopy(&Global_69472, "", 16);
			if (unk_0x850C4267F4883C31())
			{
				unk_0x63842D98ECE6507A();
			}
		}
	}
}

void func_280()
{
	int iVar0;
	
	if (unk_0xD51489677E1B0844("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_99155.f_7699 || func_6(0))
	{
		if (!func_281())
		{
			iVar0 = func_4();
			if (iVar0 != -1)
			{
				if (!func_271(iVar0))
				{
					return;
				}
				unk_0x9956FB0E4B50ECB8(&(Global_82110[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_276();
		}
	}
}

int func_281()
{
	if (((Global_91025 == 13 || Global_91025 == 10) || Global_91025 == 11) || Global_91025 == 12)
	{
		return 0;
	}
	return 1;
}

