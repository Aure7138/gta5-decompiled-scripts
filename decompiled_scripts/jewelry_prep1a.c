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
	if (unk_0x524AF15206846700(3))
	{
		func_270(6);
	}
	unk_0x5DB716F779D8C70F(1);
	func_263();
	func_222();
	while (true)
	{
		unk_0x14CA049761F06FFB("M_JewelStoreJobPrep1A", 0);
		if (bLocal_656)
		{
			func_220();
		}
		func_217(&uLocal_658);
		func_177();
		if (!bLocal_654)
		{
			func_175();
			func_164();
			func_163(&Local_1663);
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
	
	if ((iLocal_2569 != -1 && unk_0xD2CFFE76B625AE55(Local_579[iLocal_2569 /*8*/])) && unk_0x0B4DDB992C7BCF57(Local_579[iLocal_2569 /*8*/], 0))
	{
		iVar0 = unk_0x4C3235E6E203703D(Local_579[iLocal_2569 /*8*/]);
		func_23(Local_579[iLocal_2569 /*8*/], -1);
	}
	if (iVar0 >= 750 || iVar0 <= 0)
	{
		Global_88036 = 1000;
	}
	else
	{
		Global_88036 = iVar0;
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
	unk_0x7C3AA2D27E16E2AD();
}

void func_3(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_55751)
	{
		Global_55751 = iParam1;
	}
	if (bParam0)
	{
		if ((func_6(0) && Global_69735.f_1 == 1) && func_5(Global_69735))
		{
		}
		else
		{
			Global_55749 = 1;
		}
	}
	if (Global_101154.f_7775 || func_6(0))
	{
		iVar0 = func_4();
		iVar1 = Global_82363[iVar0 /*5*/];
		uVar2 = Global_69758.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_101154.f_7775)
			{
			}
			return;
		}
		if (unk_0xF426A5DE932B3BEE(Global_82363[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xF426A5DE932B3BEE(Global_82363[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x26545538B51562AD(&(Global_82363[iVar0 /*5*/].f_1), 4);
		unk_0x26545538B51562AD(&Global_69737, 1);
		Global_69753 = uVar2;
		Global_69754 = unk_0xA0F74982C6AAA9D4();
	}
}

int func_4()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xF426A5DE932B3BEE(Global_82363[iVar0 /*5*/].f_1, 2))
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
	if (!bParam0 && unk_0xD32535FA4397160F(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xF426A5DE932B3BEE(Global_69737, 0);
}

int func_7(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_101154.f_7775.f_330[iParam0 /*6*/];
}

void func_8(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0x8ACEB4FC9E9EE225();
	unk_0x5BD150B52CE8D356(1);
	if (bParam0)
	{
		unk_0x99542B3CBA8A014E(unk_0x4D29100D094E5511());
		unk_0x68BD4F826EFDDC53("JHP1A_FAIL");
	}
	else
	{
		unk_0xE71148ED586F1ED1(1f);
		unk_0xA0E6CCD4DFBA5CBA(unk_0x4D29100D094E5511(), 1f);
	}
	unk_0x193107EFB9C9FD44(5);
	unk_0x31468B47E750A9D1(unk_0x4D29100D094E5511(), 1);
	unk_0xC23650E60FCF4464(1);
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
		unk_0x09D2BE36C9D2B76F(unk_0x27D769C59BC9D030());
		unk_0x99542B3CBA8A014E(unk_0x4D29100D094E5511());
		unk_0x90CDF5C9FC20A5BF(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0xDFAEC2DE5A80DCA7(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0xBEE458FA951B0113(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0xC972AA2C9F94741D(158.78f, -3100.44f, 6.0019f, 100f, 0, 0, 0, 0, 0);
		unk_0x8474F03FCE36E004(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0x14EA3066FD050C45(158.78f, -3100.44f, 6.0019f, 100f);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_620)
	{
		if (unk_0xD2CFFE76B625AE55(iLocal_620[iVar0]))
		{
			if (bParam0)
			{
				unk_0x7C0FE14555841C1E(&(iLocal_620[iVar0]));
			}
			else
			{
				unk_0x7DC0C08D21B1080D(&(iLocal_620[iVar0]));
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
			if (unk_0xD2CFFE76B625AE55(Local_579[iVar0 /*8*/].f_2[iVar1]))
			{
				if (bParam0)
				{
					unk_0xF6ADC11BDB5ECA41(&(Local_579[iVar0 /*8*/].f_2[iVar1]));
				}
				else
				{
					unk_0x7E8F7C1D05860F53(&(Local_579[iVar0 /*8*/].f_2[iVar1]));
				}
			}
			iVar1++;
		}
		if (unk_0xD2CFFE76B625AE55(Local_579[iVar0 /*8*/]))
		{
			if (bParam0)
			{
				unk_0xF6E128C391C16F7C(&(Local_579[iVar0 /*8*/]));
			}
			else
			{
				unk_0x9846B4D56971A958(&(Local_579[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
	if (unk_0x62CF6FCD67E09678(&cLocal_626))
	{
		unk_0x698FDE6DDD416ACA(&cLocal_626, bParam0);
	}
	if (iLocal_2573 != 0)
	{
		unk_0x3CE75187603652E2(iLocal_2573, 0);
	}
	func_9();
}

void func_9()
{
	Global_87466 = 0;
}

void func_10(var uParam0, bool bParam1)
{
	if (unk_0xD2CFFE76B625AE55(*uParam0))
	{
		if (bParam1)
		{
			unk_0xF6ADC11BDB5ECA41(uParam0);
		}
		else
		{
			unk_0x7E8F7C1D05860F53(uParam0);
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
	if (unk_0xD2CFFE76B625AE55(uParam0->f_105))
	{
		if (unk_0xBF99E4112970270F(uParam0->f_105))
		{
			unk_0xE223D49B3EFFD3E3(uParam0->f_105, 1, 1);
		}
		if (bParam1)
		{
			unk_0x7C0FE14555841C1E(&(uParam0->f_105));
		}
		else
		{
			unk_0x7DC0C08D21B1080D(&(uParam0->f_105));
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
	unk_0xF022734652B12EB3();
	Global_16723 = 0;
	if (unk_0x1BF2632AED6B5924())
	{
		unk_0x94DA6AACA7F07289(0);
		Global_15712 = 6;
	}
}

void func_13(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xF426A5DE932B3BEE(uParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_17(uParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x7B4654D62B7E0E9E(uParam0->f_1[iVar0]))
		{
			unk_0x9403D0F4C7711241(&(uParam0->f_1[iVar0]));
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
			unk_0xF17F4B0641AB2DE1(&(uParam0->f_13), iVar0);
			unk_0xF17F4B0641AB2DE1(&(uParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0x7B4654D62B7E0E9E(*uParam0))
	{
		unk_0x9403D0F4C7711241(uParam0);
	}
	uParam0->f_6 = 0;
	uParam0->f_12 = 0;
	uParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0xE4F7206742848BAF(uParam0->f_17[iVar0]))
		{
			unk_0x6B8EBAC1C87F6645(uParam0->f_17[iVar0], 1);
			unk_0xD0731BD9ADB40FF5(uParam0->f_17[iVar0], 1);
			if (bParam2)
			{
				unk_0x56F64CC9254C2E4F(uParam0->f_17[iVar0], 32, 1);
				unk_0x56F64CC9254C2E4F(uParam0->f_17[iVar0], 305, 0);
			}
			unk_0x56F64CC9254C2E4F(uParam0->f_17[iVar0], 268, 0);
			if (bParam1)
			{
				if (unk_0x0CD267261D0845BA(uParam0->f_17[iVar0], func_14()) && uParam0->f_17[iVar0] != unk_0x27D769C59BC9D030())
				{
					unk_0xBFE5E4F12033E3EF(uParam0->f_17[iVar0]);
				}
			}
			if (!unk_0xF426A5DE932B3BEE(uParam0->f_13, 29))
			{
				unk_0x7F4F6E605AAF8691(uParam0->f_17[iVar0], 0, -1, 0);
			}
			uParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		unk_0x6B8EBAC1C87F6645(unk_0x27D769C59BC9D030(), 1);
		unk_0xD0731BD9ADB40FF5(unk_0x27D769C59BC9D030(), 1);
	}
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		if (bParam2)
		{
			unk_0x56F64CC9254C2E4F(unk_0x27D769C59BC9D030(), 32, 1);
		}
	}
	uParam0->f_21 = 0;
}

var func_14()
{
	return unk_0x702DA8E73909DA0E(unk_0xB927AFB90873B8C1());
}

void func_15(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xF17F4B0641AB2DE1(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xF17F4B0641AB2DE1(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xF17F4B0641AB2DE1(&(uParam1->f_13), 19);
			break;
	}
}

void func_16(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xF17F4B0641AB2DE1(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xF17F4B0641AB2DE1(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xF17F4B0641AB2DE1(&(uParam1->f_13), 16);
			break;
	}
}

void func_17(var uParam0)
{
	if (unk_0x7B4654D62B7E0E9E(uParam0->f_5))
	{
		unk_0x9403D0F4C7711241(&(uParam0->f_5));
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
	
	Global_55750 = 0;
	if (!Global_55974[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_67844)
	{
		if (Global_67845[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_67845[iVar1 /*9*/].f_1 = 1;
			Global_67845[iVar1 /*9*/].f_2 = 0f;
			if (Global_67845[iVar1 /*9*/].f_3 == 2)
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
	
	Global_55762 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_67844)
	{
		if (iParam1 == -1 || Global_67845[iVar0 /*9*/] == iParam1)
		{
			if (Global_67845[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_67845[iVar0 /*9*/].f_6 = iParam0;
				Global_67845[iVar0 /*9*/].f_7 = 1;
				Global_67845[iVar0 /*9*/].f_8 = 0;
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
		func_162(&uLocal_658, "SCRIPT\JWL_HA_RAID_STORE");
		func_161(&uLocal_658, joaat("s_m_m_security_01"));
		func_160(&(Local_1663[1 /*8*/]), 0, 0, 1);
		func_160(&(Local_1663[0 /*8*/]), 0, 0, 1);
		func_160(&(Local_1663[4 /*8*/]), 0, 0, 1);
		func_105(0f, 0f, 0f, 0f, 1, func_156());
		Global_88036 = 1000;
		unk_0xE71148ED586F1ED1(0.1f);
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
				else if ((func_97() && unk_0xD2CFFE76B625AE55(Local_579[func_96() /*8*/])) && unk_0x0B4DDB992C7BCF57(Local_579[func_96() /*8*/], 0))
				{
					unk_0x0062D9D41655E62A(0.5f);
					if (iLocal_2569 != func_96())
					{
						unk_0xA0342EB4AE1476FC(5f, 10f, 4);
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
					unk_0x0062D9D41655E62A(0.5f);
					func_49(&uLocal_1638, 692.8256f, -1012.544f, 21.722f, 0.1f, 0.1f, 0.1f, 1, iLocal_2570, "", "", "", 1, 0, 1, -1);
					if (unk_0x98CEDC9398D49BB8(Local_579[func_48() /*8*/], 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0, 1, 0))
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
					if (func_47(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), 5f, 1, 1056964608, 0, 1, 0))
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
						unk_0xA0342EB4AE1476FC(5f, 10f, 4);
						unk_0xDC994C828DF12354(unk_0x27D769C59BC9D030(), 1);
						func_46(1);
						func_45(1, 0);
						iLocal_652 = 1000;
					}
					else
					{
						unk_0xA0342EB4AE1476FC(5f, 10f, 4);
						iLocal_652++;
					}
					if (func_97())
					{
						unk_0xAF18A34434FDEA9C(Local_579[iLocal_2569 /*8*/], 0);
					}
					else if (func_93())
					{
						unk_0xAF18A34434FDEA9C(Local_579[func_48() /*8*/], 0);
						unk_0x292E660CC707615A(Local_579[func_48() /*8*/], 1);
						unk_0x73BEE2C540226170(Local_579[func_48() /*8*/]);
					}
					unk_0x550B00F01FC4ADF0(unk_0x27D769C59BC9D030(), 0, 0);
				}
				break;
			
			case 2:
				if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
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
					unk_0xA0342EB4AE1476FC(5f, 10f, 4);
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
	
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		unk_0xF7B3552987613A6B(unk_0x27D769C59BC9D030(), 0, 0, 0, 0, 0, 0, 0, 0);
		unk_0x56F64CC9254C2E4F(unk_0x27D769C59BC9D030(), 157, 1);
		unk_0xDC994C828DF12354(unk_0x27D769C59BC9D030(), 0);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD2CFFE76B625AE55(Global_88980[iVar0]))
		{
			if (!unk_0x2006A8C1BA2AFE80(Global_88980[iVar0], 0))
			{
				unk_0xF7B3552987613A6B(Global_88980[iVar0], 0, 0, 0, 0, 0, 0, 0, 0);
				unk_0xDC994C828DF12354(Global_88980[iVar0], 0);
			}
		}
		iVar0++;
	}
	if ((Global_35711 != 0 && Global_35711 != 3) && Global_35711 != 2)
	{
		unk_0x193107EFB9C9FD44(5);
		unk_0xE71148ED586F1ED1(1f);
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
					unk_0x94DA6AACA7F07289(0);
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
		if (unk_0x1BF2632AED6B5924())
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
			unk_0xF17F4B0641AB2DE1(&Global_2283, 20);
			unk_0xF17F4B0641AB2DE1(&Global_2284, 17);
			unk_0xF17F4B0641AB2DE1(&Global_2285, 0);
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
			if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
			{
				if (unk_0x1FEDE585C0F25C08(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (func_33())
				{
					return 0;
				}
				if (unk_0x431C14C947878B67(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0xBD036012AF60D938(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0x225B3357C492A629(unk_0x27D769C59BC9D030()))
				{
					return 0;
				}
				if (unk_0x397ABA0C937BB0B4(unk_0x27D769C59BC9D030(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_69489)
				{
					if (unk_0xA8ED23ED7AA60A97(unk_0x27D769C59BC9D030()))
					{
						return 0;
					}
					if (unk_0x300FBC9A9F898890(unk_0x4D29100D094E5511()))
					{
						return 0;
					}
					if (unk_0xB0821632434D6AED(unk_0x27D769C59BC9D030()))
					{
						return 0;
					}
					if (unk_0x37C10326493962AC(unk_0x4D29100D094E5511()))
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
				if (unk_0xF426A5DE932B3BEE(Global_2283, 9))
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
	unk_0x94DA6AACA7F07289(0);
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
	unk_0xF17F4B0641AB2DE1(&Global_2284, 16);
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
	
	if (Global_69489)
	{
		iVar0 = 0;
		unk_0x4CF6F4DF2C64D299(unk_0x27D769C59BC9D030(), &iVar1, 1);
		if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x32B2DBD1EB9EECE3() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		if (unk_0xCDA4E7364CE84AA7(unk_0x27D769C59BC9D030(), 78, 1))
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
		if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
		{
			if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[0 /*29*/])
			{
				Global_14413 = 0;
			}
			else if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[1 /*29*/])
			{
				Global_14413 = 1;
			}
			else if (unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()) == Global_101154.f_32575[2 /*29*/])
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
		Global_14413 = func_156();
		if (Global_14413 == 145)
		{
			Global_14413 = 3;
		}
		if (Global_69489)
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
	return Global_35711 == iParam0;
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
				return Global_1338622.f_203[iParam1];
			}
			break;
	}
	return unk_0xF426A5DE932B3BEE(Global_1338622.f_949, iParam0);
}

void func_38()
{
	unk_0xF022734652B12EB3();
	Global_16723 = 0;
	if ((unk_0x0EFEEF8E6B0B4E34() || Global_14413.f_1 == 9) || Global_14412 == 1)
	{
		unk_0x94DA6AACA7F07289(0);
		Global_15712 = 6;
		Global_14413.f_1 = 3;
		return;
	}
	if (unk_0x1BF2632AED6B5924())
	{
		unk_0x94DA6AACA7F07289(1);
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
	if (!Global_69489)
	{
		if (!unk_0xE4F7206742848BAF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6B8EBAC1C87F6645(iParam2, 0);
			}
			else
			{
				unk_0x6B8EBAC1C87F6645(iParam2, 1);
			}
		}
		if (!unk_0xE4F7206742848BAF(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xBDBBE2B9920C24A7(iParam2, 0);
			}
			else
			{
				unk_0xBDBBE2B9920C24A7(iParam2, 1);
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
	if (unk_0x1BF2632AED6B5924())
	{
		unk_0xF022734652B12EB3();
		Global_16723 = 0;
		unk_0x94DA6AACA7F07289(1);
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
	if (unk_0xBCF0E2C57A40A43F())
	{
		if (unk_0x45252A58A2BF9751())
		{
			return 0;
		}
	}
	return 1;
}

int func_44()
{
	if (Global_15712 != 0 || unk_0x1BF2632AED6B5924())
	{
		return 1;
	}
	return 0;
}

void func_45(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		unk_0xCFF471245AFEEDCE(0, 21, 1);
	}
	unk_0xCFF471245AFEEDCE(0, 25, 1);
	unk_0xCFF471245AFEEDCE(0, 24, 1);
	unk_0xCFF471245AFEEDCE(0, 257, 1);
	unk_0xCFF471245AFEEDCE(0, 141, 1);
	unk_0xCFF471245AFEEDCE(0, 140, 1);
	unk_0xCFF471245AFEEDCE(0, 22, 1);
	unk_0xCFF471245AFEEDCE(0, 44, 1);
	unk_0xCFF471245AFEEDCE(0, 23, 1);
	unk_0xCFF471245AFEEDCE(0, 47, 1);
	unk_0xCFF471245AFEEDCE(0, 36, 1);
	if (bParam0)
	{
		unk_0xCFF471245AFEEDCE(0, 37, 1);
	}
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		if (bParam1)
		{
			unk_0x1535027F70F1EBC7(unk_0x27D769C59BC9D030(), 2f);
		}
		else
		{
			unk_0x1535027F70F1EBC7(unk_0x27D769C59BC9D030(), 1f);
		}
		unk_0xC908FA7A5EBB2825(unk_0x27D769C59BC9D030(), 102, 1);
	}
	if (unk_0x14B5449970A1C2DA(unk_0x4D29100D094E5511(), 0))
	{
		unk_0x99542B3CBA8A014E(unk_0x4D29100D094E5511());
	}
}

void func_46(bool bParam0)
{
	if (!unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
	{
		unk_0xF7B3552987613A6B(unk_0x27D769C59BC9D030(), 1, 1, 1, 1, 1, 0, 0, 0);
		unk_0x56F64CC9254C2E4F(unk_0x27D769C59BC9D030(), 157, 0);
		unk_0xDC994C828DF12354(unk_0x27D769C59BC9D030(), 1);
		unk_0x35E648675FC36FAE(unk_0x27D769C59BC9D030(), 0, 0);
		if (bParam0)
		{
			unk_0xCA26676919C42B5B(unk_0x27D769C59BC9D030(), joaat("weapon_unarmed"), 0);
		}
		unk_0x126149F876BC6432(unk_0x27D769C59BC9D030(), 0);
	}
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		unk_0x99542B3CBA8A014E(unk_0x4D29100D094E5511());
	}
	unk_0x193107EFB9C9FD44(0);
	unk_0xE71148ED586F1ED1(0f);
}

int func_47(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0xCFF471245AFEEDCE(0, 71, 1);
	unk_0xCFF471245AFEEDCE(0, 72, 1);
	unk_0xCFF471245AFEEDCE(0, 76, 1);
	unk_0xCFF471245AFEEDCE(0, 73, 1);
	unk_0xCFF471245AFEEDCE(0, 59, 1);
	unk_0xCFF471245AFEEDCE(0, 60, 1);
	if (bParam5)
	{
		unk_0xCFF471245AFEEDCE(0, 75, 1);
	}
	unk_0xCFF471245AFEEDCE(0, 80, 1);
	if (!bParam6)
	{
		unk_0xCFF471245AFEEDCE(0, 69, 1);
		unk_0xCFF471245AFEEDCE(0, 70, 1);
		unk_0xCFF471245AFEEDCE(0, 68, 1);
	}
	unk_0xCFF471245AFEEDCE(0, 74, 1);
	unk_0xCFF471245AFEEDCE(0, 86, 1);
	unk_0xCFF471245AFEEDCE(0, 81, 1);
	unk_0xCFF471245AFEEDCE(0, 82, 1);
	unk_0xCFF471245AFEEDCE(0, 138, 1);
	unk_0xCFF471245AFEEDCE(0, 136, 1);
	unk_0xCFF471245AFEEDCE(0, 114, 1);
	unk_0xCFF471245AFEEDCE(0, 107, 1);
	unk_0xCFF471245AFEEDCE(0, 110, 1);
	unk_0xCFF471245AFEEDCE(0, 89, 1);
	unk_0xCFF471245AFEEDCE(0, 89, 1);
	unk_0xCFF471245AFEEDCE(0, 87, 1);
	unk_0xCFF471245AFEEDCE(0, 88, 1);
	unk_0xCFF471245AFEEDCE(0, 113, 1);
	unk_0xCFF471245AFEEDCE(0, 115, 1);
	unk_0xCFF471245AFEEDCE(0, 116, 1);
	unk_0xCFF471245AFEEDCE(0, 117, 1);
	unk_0xCFF471245AFEEDCE(0, 118, 1);
	unk_0xCFF471245AFEEDCE(0, 119, 1);
	unk_0xCFF471245AFEEDCE(0, 131, 1);
	unk_0xCFF471245AFEEDCE(0, 132, 1);
	unk_0xCFF471245AFEEDCE(0, 123, 1);
	unk_0xCFF471245AFEEDCE(0, 126, 1);
	unk_0xCFF471245AFEEDCE(0, 129, 1);
	unk_0xCFF471245AFEEDCE(0, 130, 1);
	unk_0xCFF471245AFEEDCE(0, 133, 1);
	unk_0xCFF471245AFEEDCE(0, 134, 1);
	unk_0xD2707D96EC4B48D3();
	if ((unk_0xA0F74982C6AAA9D4() - Global_29) > 500)
	{
		unk_0x29D71D9710F2540E(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0xA0F74982C6AAA9D4();
	if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
	{
		if (unk_0x43698C98CC255554(unk_0xECC01072E61D2F3A(iParam0)) <= fParam3)
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
			if (unk_0xD2CFFE76B625AE55(Local_579[iVar0 /*8*/]) && unk_0x0B4DDB992C7BCF57(Local_579[iVar0 /*8*/], 0))
			{
				if (unk_0x10BD59A398C824DA(iLocal_2570, Local_579[iVar0 /*8*/]))
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
		if (unk_0xCBB243DDC0D132D1())
		{
			bVar1 = false;
			if (unk_0x0B4DDB992C7BCF57(iParam18, 0))
			{
				if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), iParam18, 0))
				{
					unk_0x26545538B51562AD(&(uParam0->f_13), 3);
					if (!unk_0xF426A5DE932B3BEE(uParam0->f_13, 9))
					{
						unk_0xF17F4B0641AB2DE1(&(uParam0->f_13), 4);
					}
					if (unk_0xF426A5DE932B3BEE(uParam0->f_13, 23))
					{
						unk_0xF17F4B0641AB2DE1(&(uParam0->f_13), 23);
					}
					unk_0x26545538B51562AD(&(uParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_69(uParam0, iParam29))
				{
					unk_0x26545538B51562AD(&(uParam0->f_13), 3);
					if (!unk_0xF426A5DE932B3BEE(uParam0->f_13, 9))
					{
						unk_0xF17F4B0641AB2DE1(&(uParam0->f_13), 4);
					}
					unk_0x26545538B51562AD(&(uParam0->f_13), 9);
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
				if (bParam26 && unk_0x14B5449970A1C2DA(unk_0x4D29100D094E5511(), 0))
				{
					if (unk_0x7B4654D62B7E0E9E(uParam0->f_5))
					{
						unk_0x9403D0F4C7711241(&(uParam0->f_5));
						func_71(sParam19);
					}
					if (unk_0x7B4654D62B7E0E9E(*uParam0))
					{
						unk_0x9403D0F4C7711241(uParam0);
					}
					if ((!func_66(uParam0, 1) && !func_65(uParam0)) && !unk_0xF426A5DE932B3BEE(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_64(uParam0, "LOSE_WANTED", 0);
							if (!unk_0xE4F7206742848BAF(uParam0->f_17[0]))
							{
								func_62(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x26545538B51562AD(&(uParam0->f_13), 0);
						unk_0xF17F4B0641AB2DE1(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xF426A5DE932B3BEE(uParam0->f_13, 0))
					{
						func_71("LOSE_WANTED");
						unk_0xF17F4B0641AB2DE1(&(uParam0->f_13), 0);
						unk_0x26545538B51562AD(&(uParam0->f_13), 1);
					}
					if (unk_0xF426A5DE932B3BEE(uParam0->f_13, 1))
					{
						if (!func_66(uParam0, 1))
						{
							if (!unk_0xE4F7206742848BAF(uParam0->f_17[0]))
							{
								func_62(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xF17F4B0641AB2DE1(&(uParam0->f_13), 1);
						}
					}
					if (!unk_0x7B4654D62B7E0E9E(uParam0->f_5))
					{
						if (unk_0x7B4654D62B7E0E9E(*uParam0))
						{
							unk_0x9403D0F4C7711241(uParam0);
						}
						uParam0->f_5 = func_61(Var3, 0);
						if (!iParam31 == -1)
						{
							unk_0x216986E3E3E543F2(uParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_60(uParam0->f_5, uParam0);
						}
					}
					else if (!func_59(Var3, unk_0xFB4AA60106DBA831(uParam0->f_5), 0.1f, 0))
					{
						unk_0x1651233EBDC5526E(uParam0->f_5, Var3);
						if (bParam35)
						{
							func_60(uParam0->f_5, uParam0);
						}
					}
					if (!func_66(uParam0, 2))
					{
						if (!unk_0xF426A5DE932B3BEE(uParam0->f_13, 2))
						{
							func_64(uParam0, sParam19, 0);
							unk_0x26545538B51562AD(&(uParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (unk_0xF426A5DE932B3BEE(uParam0->f_13, 13))
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
						unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), Param1, Param4, iParam13, iVar6, iVar7);
						if (unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), Param7, Param10, fParam36, 0, iVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), Param1, Param4, iParam13, iVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0xE4F7206742848BAF(uParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
									if (!unk_0x1C48F76B3D032074(uParam0->f_17[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!unk_0x1C48F76B3D032074(uParam0->f_17[iVar2], iParam18, 0))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x0CD267261D0845BA(uParam0->f_17[iVar2], func_14()) || !func_57(uParam0->f_17[iVar2], 1))
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
			else if (unk_0xD2CFFE76B625AE55(iParam18))
			{
				if ((bParam26 && unk_0x14B5449970A1C2DA(unk_0x4D29100D094E5511(), 0)) && (!unk_0xF426A5DE932B3BEE(uParam0->f_13, 9) && !unk_0xF426A5DE932B3BEE(uParam0->f_13, 22)))
				{
					func_71(sParam24);
					func_71(sParam27);
					if (unk_0x7B4654D62B7E0E9E(uParam0->f_5) || unk_0x7B4654D62B7E0E9E(*uParam0))
					{
						unk_0x9403D0F4C7711241(&(uParam0->f_5));
						unk_0x9403D0F4C7711241(uParam0);
						func_71(sParam19);
					}
					if ((!func_66(uParam0, 1) && !func_65(uParam0)) && !unk_0xF426A5DE932B3BEE(uParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_64(uParam0, "LOSE_WANTED", 0);
							if (!unk_0xE4F7206742848BAF(uParam0->f_17[0]))
							{
								func_62(uParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x26545538B51562AD(&(uParam0->f_13), 0);
						unk_0xF17F4B0641AB2DE1(&(uParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xF426A5DE932B3BEE(uParam0->f_13, 0))
					{
						func_71("LOSE_WANTED");
						unk_0xF17F4B0641AB2DE1(&(uParam0->f_13), 0);
						unk_0x26545538B51562AD(&(uParam0->f_13), 1);
					}
					if (unk_0xF426A5DE932B3BEE(uParam0->f_13, 1))
					{
						if (!func_66(uParam0, 1))
						{
							if (!unk_0xE4F7206742848BAF(uParam0->f_17[0]))
							{
								func_62(uParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xF17F4B0641AB2DE1(&(uParam0->f_13), 1);
						}
					}
					if (unk_0x0B4DDB992C7BCF57(iParam18, 0))
					{
						if (!unk_0x7B4654D62B7E0E9E(*uParam0))
						{
							if (unk_0x7B4654D62B7E0E9E(uParam0->f_5))
							{
								unk_0x9403D0F4C7711241(&(uParam0->f_5));
								func_71(sParam19);
							}
							*uParam0 = func_51(iParam18, 0, 0);
							unk_0xC11BDDB34C4D6840(*uParam0, 2);
							if (!unk_0xF426A5DE932B3BEE(uParam0->f_13, 4))
							{
								func_60(*uParam0, uParam0);
							}
						}
						if (!func_66(uParam0, 2))
						{
							if (!unk_0xF426A5DE932B3BEE(uParam0->f_13, 3))
							{
								func_64(uParam0, sParam24, 0);
								unk_0x26545538B51562AD(&(uParam0->f_13), 3);
								unk_0xF17F4B0641AB2DE1(&(uParam0->f_13), 4);
							}
							else if (unk_0xF426A5DE932B3BEE(uParam0->f_13, 9))
							{
								if (!unk_0x0275404839C0A19A(sParam27))
								{
									if (!unk_0xF426A5DE932B3BEE(uParam0->f_13, 4))
									{
										func_64(uParam0, sParam27, 0);
										unk_0x26545538B51562AD(&(uParam0->f_13), 4);
									}
								}
								else if (!unk_0xF426A5DE932B3BEE(uParam0->f_13, 4))
								{
									func_64(uParam0, sParam24, 0);
									unk_0x26545538B51562AD(&(uParam0->f_13), 4);
								}
								if (!unk_0xF426A5DE932B3BEE(uParam0->f_13, 23))
								{
									if (!unk_0xE4F7206742848BAF(uParam0->f_17[0]))
									{
										func_62(uParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0x26545538B51562AD(&(uParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0x7B4654D62B7E0E9E(uParam0->f_5))
				{
					unk_0x9403D0F4C7711241(&(uParam0->f_5));
					func_71(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_66(uParam0, 2))
						{
							if (unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030()))
							{
								if (!unk_0xF426A5DE932B3BEE(uParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0xE4F7206742848BAF(uParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = unk_0x3A5708FEE1B560A9(0, iVar8);
									if (!unk_0xE4F7206742848BAF(uParam0->f_17[iVar9]))
									{
										func_62(uParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_64(uParam0, "MORE_SEATS", 0);
									unk_0x26545538B51562AD(&(uParam0->f_13), 13);
								}
							}
							else if (!unk_0xF426A5DE932B3BEE(uParam0->f_13, 3))
							{
								func_64(uParam0, sParam24, 0);
								unk_0x26545538B51562AD(&(uParam0->f_13), 3);
								unk_0xF17F4B0641AB2DE1(&(uParam0->f_13), 4);
							}
							else if (!unk_0xF426A5DE932B3BEE(uParam0->f_13, 4))
							{
								if (unk_0xF426A5DE932B3BEE(uParam0->f_13, 9))
								{
									func_64(uParam0, sParam27, 0);
									unk_0x26545538B51562AD(&(uParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_66(uParam0, 2))
					{
						if (!unk_0xF426A5DE932B3BEE(uParam0->f_13, 3))
						{
							func_64(uParam0, sParam24, 0);
							unk_0x26545538B51562AD(&(uParam0->f_13), 3);
							unk_0xF17F4B0641AB2DE1(&(uParam0->f_13), 4);
						}
						else if (unk_0xF426A5DE932B3BEE(uParam0->f_13, 9))
						{
							if (!unk_0x0275404839C0A19A(sParam27))
							{
								if (!unk_0xF426A5DE932B3BEE(uParam0->f_13, 4))
								{
									func_64(uParam0, sParam27, 0);
									unk_0x26545538B51562AD(&(uParam0->f_13), 4);
								}
							}
							else if (!unk_0xF426A5DE932B3BEE(uParam0->f_13, 4))
							{
								func_64(uParam0, sParam24, 0);
								unk_0x26545538B51562AD(&(uParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xF426A5DE932B3BEE(uParam0->f_13, 0))
		{
			unk_0xF17F4B0641AB2DE1(&(uParam0->f_13), 0);
		}
		func_71(sParam19);
		func_71(sParam24);
		func_71(sParam27);
		func_71(sParam24);
		func_71("LOSE_WANTED");
		if (unk_0x7B4654D62B7E0E9E(uParam0->f_5))
		{
			unk_0x9403D0F4C7711241(&(uParam0->f_5));
		}
		if (unk_0x7B4654D62B7E0E9E(*uParam0))
		{
			unk_0x9403D0F4C7711241(uParam0);
		}
	}
	unk_0xF17F4B0641AB2DE1(&(uParam0->f_13), 11);
	unk_0xF17F4B0641AB2DE1(&(uParam0->f_13), 12);
	return 0;
}

int func_51(int iParam0, bool bParam1, bool bParam2)
{
	return func_52(iParam0, !bParam1, bParam2);
}

int func_52(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD2CFFE76B625AE55(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xABF4388EB11AD060(iParam0);
	if (unk_0x8F8858152A9B9959(iParam0))
	{
		unk_0xC5B4E9487339A2BB(uVar0, func_53(unk_0x0E063DDE8855EC52(), 1f, 1f));
		if (!bParam2)
		{
			unk_0xD1B211F2EB392B46(uVar0, bParam1);
		}
		else
		{
			unk_0x8D910E607F73E53D(uVar0, 2);
		}
	}
	else if (unk_0x54F37403E01EFD97(iParam0))
	{
		unk_0xC5B4E9487339A2BB(uVar0, func_53(unk_0x0E063DDE8855EC52(), 0.7f, 0.7f));
		unk_0xD1B211F2EB392B46(uVar0, bParam1);
	}
	else if (unk_0xEB9962C184DA6150(iParam0))
	{
		unk_0xC5B4E9487339A2BB(uVar0, func_53(unk_0x0E063DDE8855EC52(), 0.7f, 0.7f));
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
	if (unk_0xF426A5DE932B3BEE(uParam0->f_13, 12))
	{
		if (func_56(unk_0x27D769C59BC9D030()))
		{
			if (func_55(1, 0, 1) || unk_0xF426A5DE932B3BEE(uParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_55(1, 0, 1) || unk_0xF426A5DE932B3BEE(uParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_55(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x8A4F12025F4EA58F())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x2006A8C1BA2AFE80(unk_0x27D769C59BC9D030(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		if (!unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030()))
		{
			return 0;
		}
		iVar0 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
		if (bParam0)
		{
			if (unk_0x2006A8C1BA2AFE80(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x2006A8C1BA2AFE80(iVar0, 0))
			{
				if (unk_0x9297C590C99228DC(iVar0, -1) != unk_0x27D769C59BC9D030())
				{
					return 0;
				}
			}
		}
		if (!unk_0x2006A8C1BA2AFE80(iVar0, 0))
		{
			if (unk_0x45492A3571FB6301(iVar0) < 0.95f || unk_0x45492A3571FB6301(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x0E14B2E6EB7392B5(unk_0x4D29100D094E5511()))
	{
		return 0;
	}
	if (!unk_0x5E91AC2C8CAC699C(unk_0x4D29100D094E5511()))
	{
		return 0;
	}
	return 1;
}

int func_56(int iParam0)
{
	float fVar0;
	
	if (!unk_0xE4F7206742848BAF(iParam0))
	{
		fVar0 = unk_0xECC01072E61D2F3A(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_57(int iParam0, int iParam1)
{
	if (!unk_0xE4F7206742848BAF(iParam0))
	{
		if (unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030()) && iParam1)
		{
			if (func_58(unk_0x27D769C59BC9D030(), iParam0))
			{
				unk_0x5823CACBF33EDC8B(func_14(), 50f);
				return 1;
			}
		}
		else if (unk_0x0CD267261D0845BA(iParam0, func_14()))
		{
			unk_0x5823CACBF33EDC8B(func_14(), 50f);
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
	
	if (!unk_0xE4F7206742848BAF(iParam0))
	{
		if (unk_0x57ADE64D2E3798F0(iParam0))
		{
			iVar0 = unk_0xD9FFE8E1642C81E2(iParam0, 0);
			if (unk_0x0B4DDB992C7BCF57(iVar0, 0))
			{
				if (!unk_0xE4F7206742848BAF(iParam1))
				{
					if (unk_0xDD5B7E23D882DABD(iParam1, iVar0))
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
		if (unk_0x43698C98CC255554((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (unk_0x43698C98CC255554((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (unk_0x43698C98CC255554((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x43698C98CC255554((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x43698C98CC255554((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_60(var uParam0, var uParam1)
{
	if (unk_0x7B4654D62B7E0E9E(uParam0))
	{
		if (unk_0x7B4654D62B7E0E9E(uParam1->f_6))
		{
			unk_0xAB27F3DE6390C749(uParam1->f_6, 0);
		}
		unk_0x87BCBE1293B3437E(0);
		unk_0xDA8D0EA7732673F0();
		uParam1->f_6 = uParam0;
		unk_0xAB27F3DE6390C749(uParam0, 1);
	}
}

var func_61(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x43B8950858CAD66F(Param0);
	unk_0xC5B4E9487339A2BB(uVar0, func_53(unk_0x0E063DDE8855EC52(), 1f, 1f));
	unk_0xAB27F3DE6390C749(uVar0, iParam3);
	return uVar0;
}

void func_62(var uParam0, char* sParam1, int iParam2)
{
	unk_0x83983CFE8950EEAC(uParam0, sParam1, func_63(iParam2), 1);
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
		if (!unk_0x0275404839C0A19A(sParam1))
		{
			if (!unk_0xC1C5B83BB6719C6C(sParam1, ""))
			{
				func_104(sParam1, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0xA0F74982C6AAA9D4();
}

int func_65(var uParam0)
{
	if (!unk_0xE4F7206742848BAF(uParam0->f_16))
	{
		if (unk_0x3BF4F8DBABE55D2B(uParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_66(var uParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0xBCF0E2C57A40A43F())
	{
		if (unk_0x45252A58A2BF9751())
		{
			return 1;
		}
		if (func_68(uParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0xBCF0E2C57A40A43F())
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
	
	iVar1 = unk_0xA0F74982C6AAA9D4();
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
	
	if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		iVar0 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
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
	
	if (unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0xD2CFFE76B625AE55(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0x1AEADBB0240E0B51(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0x07FBD5D953873E41(iParam0, 1))
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
				if (!unk_0x07FBD5D953873E41(iParam0, 1))
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
	if (!unk_0x0275404839C0A19A(sParam0))
	{
		unk_0x9ED24946DD556448(sParam0);
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
		if (!unk_0xE4F7206742848BAF(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x14B5449970A1C2DA(unk_0x4D29100D094E5511(), 0))
		{
			if (!unk_0xF426A5DE932B3BEE(uParam0->f_13, 29) && !unk_0xF426A5DE932B3BEE(uParam0->f_13, 28))
			{
				if (!unk_0xE4F7206742848BAF(uParam0->f_17[iVar0]))
				{
					unk_0x7F4F6E605AAF8691(uParam0->f_17[iVar0], 1, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0x26545538B51562AD(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0xF426A5DE932B3BEE(uParam0->f_13, 29) && unk_0xF426A5DE932B3BEE(uParam0->f_13, 28))
		{
			if (!unk_0xE4F7206742848BAF(uParam0->f_17[iVar0]))
			{
				unk_0x7F4F6E605AAF8691(uParam0->f_17[iVar0], 0, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0xF17F4B0641AB2DE1(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0xF426A5DE932B3BEE(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!unk_0xD2CFFE76B625AE55(uParam0->f_21))
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
			iVar24 = unk_0xE02F462DE06D185B(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 50f, 0, iVar25);
			if (unk_0x0B4DDB992C7BCF57(iVar24, 0))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (unk_0x0B4DDB992C7BCF57(uParam0->f_21, 0))
		{
			if (unk_0xB7A628320EFF8E47(unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), unk_0xA8CFDE65C45F813B(uParam0->f_21, 1)) < 400f)
			{
				if (!unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030()))
				{
					if (!unk_0x14B5449970A1C2DA(unk_0x4D29100D094E5511(), 0) || !bParam17)
					{
						if (func_70(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0xE4F7206742848BAF(uParam0->f_17[iVar0]))
								{
									unk_0x1535027F70F1EBC7(uParam0->f_17[iVar0], 1f);
									if (unk_0x0CD267261D0845BA(uParam0->f_17[iVar0], func_14()))
									{
										unk_0xBFE5E4F12033E3EF(uParam0->f_17[iVar0]);
									}
									if (unk_0x810AFFABCBF31E2D(uParam0->f_17[iVar0], -1794415470) == 7 && !func_87(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0xBD036012AF60D938(uParam0->f_17[iVar0]) && !unk_0x8D1E4231095B313B(uParam0->f_17[iVar0]))
										{
											unk_0xA8ED9F72DC442242(uParam0->f_17[iVar0], 1);
											unk_0x835BBE043A81D6DD(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0x7AA5A5EF421F62F0(uParam0->f_17[iVar0], iVar0);
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
			unk_0xF17F4B0641AB2DE1(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0xE4F7206742848BAF(uParam0->f_17[iVar0]))
				{
					if (!unk_0x0F74EBD810C90005(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0xF156AA2A744B309E(uParam0->f_17[iVar0]);
					}
					if (!unk_0x0CD267261D0845BA(uParam0->f_17[iVar0], func_14()))
					{
						if (func_85(uParam0, uParam0->f_17[iVar0], uParam8, 1))
						{
							unk_0x3BD6117D6F00B83F(uParam0->f_17[iVar0], func_14());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xF426A5DE932B3BEE(uParam0->f_13, 26))
	{
		if ((!func_84(uParam0) && unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030())) && !unk_0xD2CFFE76B625AE55(iParam10))
		{
			iVar13 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
			if (unk_0x0B4DDB992C7BCF57(iVar13, 0))
			{
				if (!unk_0xF426A5DE932B3BEE(uParam0->f_13, 13))
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
							if (!unk_0xE4F7206742848BAF(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = unk_0x3A5708FEE1B560A9(0, iVar26);
						if (!unk_0xE4F7206742848BAF(uParam0->f_17[iVar27]))
						{
							func_62(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_64(uParam0, "MORE_SEATS", 0);
						unk_0x26545538B51562AD(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			unk_0xF17F4B0641AB2DE1(&(uParam0->f_13), 13);
			func_71("MORE_SEATS");
		}
		if (!unk_0xD2CFFE76B625AE55(iParam10))
		{
			if ((!unk_0xE4F7206742848BAF(uParam0->f_17[0]) || !unk_0xE4F7206742848BAF(uParam0->f_17[1])) || !unk_0xE4F7206742848BAF(uParam0->f_17[2]))
			{
				if (!unk_0xF426A5DE932B3BEE(uParam0->f_13, 31))
				{
					if (unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030()) && !func_66(uParam0, 2))
					{
						iVar13 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
						if (func_83(iVar13, uParam0))
						{
							func_64(uParam0, "CMN_VEHSUIT", 0);
							unk_0x26545538B51562AD(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030()))
				{
					unk_0xF17F4B0641AB2DE1(&(uParam0->f_13), 31);
					func_71("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0x0B4DDB992C7BCF57(iParam10, 0))
		{
			if (unk_0xDD5B7E23D882DABD(unk_0x27D769C59BC9D030(), iParam10))
			{
				if (unk_0x117D586920E8F7BA(0, 75))
				{
					unk_0x26545538B51562AD(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0xF426A5DE932B3BEE(uParam0->f_13, 21))
			{
				unk_0xF17F4B0641AB2DE1(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xD2CFFE76B625AE55(uParam0->f_17[iVar0]))
			{
				if (!unk_0xE4F7206742848BAF(uParam0->f_17[iVar0]))
				{
					if (!unk_0x0CD267261D0845BA(uParam0->f_17[iVar0], func_14()))
					{
						unk_0x7F9BB1C77787740C(uParam0->f_17[iVar0], 1);
					}
					else
					{
						unk_0x7F9BB1C77787740C(uParam0->f_17[iVar0], 0);
					}
					if (unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030()))
					{
						iVar13 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
						if (unk_0x0B4DDB992C7BCF57(iVar13, 0))
						{
							if (unk_0x0CD267261D0845BA(uParam0->f_17[iVar0], func_14()))
							{
								if (!func_84(uParam0) && unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030()))
								{
									if (!func_82(uParam0->f_17[iVar0]))
									{
										unk_0xBFE5E4F12033E3EF(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !unk_0x2006A8C1BA2AFE80(iVar13, 0))
						{
							if (unk_0xDD5B7E23D882DABD(uParam0->f_17[iVar0], iVar13))
							{
								if (unk_0xA8ED23ED7AA60A97(iVar13) && !unk_0xC2331082FBFCB35D(iVar13))
								{
									Var28 = { unk_0xA8CFDE65C45F813B(iVar13, 1) };
									if (Var28.f_2 < -1f)
									{
										unk_0x8BD12B4D2B1648B7(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!unk_0x0CD267261D0845BA(uParam0->f_17[iVar0], func_14()))
					{
						if (unk_0x57ADE64D2E3798F0(uParam0->f_17[iVar0]))
						{
							iVar13 = unk_0xD9FFE8E1642C81E2(uParam0->f_17[iVar0], 0);
							if (!unk_0x2006A8C1BA2AFE80(iVar13, 0))
							{
								if (unk_0x0B4DDB992C7BCF57(iParam10, 0))
								{
									if (iVar13 != iParam10)
									{
										if (!unk_0xDD5B7E23D882DABD(unk_0x27D769C59BC9D030(), iVar13))
										{
											if (unk_0xECC01072E61D2F3A(iVar13) > 5f)
											{
												unk_0x8BD12B4D2B1648B7(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x8BD12B4D2B1648B7(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030()))
									{
										iVar31 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
									}
									if (unk_0x0B4DDB992C7BCF57(iVar31, 0))
									{
										if (iVar13 != iVar31)
										{
											if (unk_0xECC01072E61D2F3A(iVar13) > 5f)
											{
												unk_0x8BD12B4D2B1648B7(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0x8BD12B4D2B1648B7(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x0CD267261D0845BA(uParam0->f_17[iVar0], func_14()))
					{
						iVar32 = unk_0x841B76F992C06AAC(unk_0x27D769C59BC9D030());
						if (unk_0xD2CFFE76B625AE55(iVar32))
						{
							if (func_70(iVar32, uParam0, 0))
							{
								if (func_81(iVar0, uParam0) || !unk_0xF426A5DE932B3BEE(uParam0->f_13, 27))
								{
									unk_0x7AA5A5EF421F62F0(uParam0->f_17[iVar0], iVar0);
									func_15(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x26545538B51562AD(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_81(iVar0, uParam0))
							{
								if (unk_0x946C63BD9EF05437(iVar32) == joaat("sentinel2"))
								{
									unk_0x7AA5A5EF421F62F0(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0x7AA5A5EF421F62F0(uParam0->f_17[iVar0], 2);
								}
								func_80(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x0CD267261D0845BA(uParam0->f_17[iVar0], func_14()) && !func_79(uParam0->f_17[iVar0], iParam10)) && !func_78(uParam0->f_17[iVar0], iParam10))
					{
						if (func_85(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
						{
							if (!unk_0x0CD267261D0845BA(uParam0->f_17[iVar0], func_14()))
							{
								if (((!unk_0xBD036012AF60D938(uParam0->f_17[iVar0]) && !unk_0x8D1E4231095B313B(uParam0->f_17[iVar0])) && !unk_0xD71487833C90B456(uParam0->f_17[iVar0])) && !unk_0x0F74EBD810C90005(uParam0->f_17[iVar0]))
								{
									iVar14 = unk_0x810AFFABCBF31E2D(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										unk_0xF156AA2A744B309E(uParam0->f_17[iVar0]);
									}
									unk_0x3BD6117D6F00B83F(uParam0->f_17[iVar0], func_14());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!unk_0x7B4654D62B7E0E9E(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0xA0F74982C6AAA9D4();
								uParam0->f_1[iVar0] = func_51(uParam0->f_17[iVar0], 0, 0);
								unk_0xC11BDDB34C4D6840(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_60(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0x7B4654D62B7E0E9E(uParam0->f_1[iVar0]))
					{
						if (((func_57(uParam0->f_17[iVar0], 1) || func_79(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0x0B4DDB992C7BCF57(iParam10, 0) && !unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), iParam10, 0)))
						{
							if (unk_0x7B4654D62B7E0E9E(uParam0->f_1[iVar0]))
							{
								unk_0x9403D0F4C7711241(&(uParam0->f_1[iVar0]));
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
					else if (unk_0x0B4DDB992C7BCF57(iParam10, 0))
					{
						if (!unk_0xDD5B7E23D882DABD(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0xC4F9E3DD5445F8E4(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !unk_0xF426A5DE932B3BEE(uParam0->f_13, 11)) && !((bParam17 && unk_0x14B5449970A1C2DA(unk_0x4D29100D094E5511(), 0)) && !unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), iParam10, 0)))
							{
								if (unk_0x57ADE64D2E3798F0(uParam0->f_17[iVar0]))
								{
									if (!unk_0x1C48F76B3D032074(uParam0->f_17[iVar0], iParam10, 0))
									{
										if (!func_57(uParam0->f_17[iVar0], 1))
										{
											if (func_56(uParam0->f_17[iVar0]))
											{
												iVar14 = unk_0x810AFFABCBF31E2D(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													unk_0x550B00F01FC4ADF0(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x0CD267261D0845BA(uParam0->f_17[iVar0], func_14()))
									{
										if ((((!unk_0xD71487833C90B456(uParam0->f_17[iVar0]) && !unk_0xBD036012AF60D938(uParam0->f_17[iVar0])) && !unk_0x8D1E4231095B313B(uParam0->f_17[iVar0])) && !unk_0x0F74EBD810C90005(uParam0->f_17[iVar0])) && !unk_0xFA7888B344869306(iParam10))
										{
											unk_0xBFE5E4F12033E3EF(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = unk_0x810AFFABCBF31E2D(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_87(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0xD71487833C90B456(uParam0->f_17[iVar0]) && !unk_0xD71487833C90B456(unk_0x27D769C59BC9D030())) && !func_77(uParam0->f_17[iVar0], 2f)) && !unk_0xBD036012AF60D938(uParam0->f_17[iVar0])) && !unk_0x8D1E4231095B313B(uParam0->f_17[iVar0])) && !unk_0xFA7888B344869306(iParam10))
										{
											unk_0xA8ED9F72DC442242(uParam0->f_17[iVar0], 1);
											if (unk_0xF426A5DE932B3BEE(uParam0->f_13, 10))
											{
												unk_0x1535027F70F1EBC7(uParam0->f_17[iVar0], 1f);
											}
											unk_0x835BBE043A81D6DD(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0xDA128C2F38D83BA1(uParam0->f_17[iVar0], 0);
										}
									}
									else if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_51(uParam0->f_17[iVar0], 0, 0);
										unk_0xC11BDDB34C4D6840(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x0CD267261D0845BA(uParam0->f_17[iVar0], func_14()))
							{
								if (func_85(uParam0, uParam0->f_17[iVar0], uParam8, bParam11))
								{
									if (!unk_0xBD036012AF60D938(uParam0->f_17[iVar0]) && !unk_0x8D1E4231095B313B(uParam0->f_17[iVar0]))
									{
										iVar14 = unk_0x810AFFABCBF31E2D(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											unk_0xF156AA2A744B309E(uParam0->f_17[iVar0]);
										}
										unk_0xA8ED9F72DC442242(uParam0->f_17[iVar0], 0);
										unk_0x3BD6117D6F00B83F(uParam0->f_17[iVar0], func_14());
									}
								}
							}
						}
						else if (unk_0xDD5B7E23D882DABD(unk_0x27D769C59BC9D030(), iParam10))
						{
							if (!unk_0x0CD267261D0845BA(uParam0->f_17[iVar0], func_14()))
							{
								if (!unk_0xF426A5DE932B3BEE(uParam0->f_13, 21))
								{
									unk_0x3BD6117D6F00B83F(uParam0->f_17[iVar0], func_14());
								}
							}
							else if (unk_0xF426A5DE932B3BEE(uParam0->f_13, 21))
							{
								unk_0xBFE5E4F12033E3EF(uParam0->f_17[iVar0]);
								unk_0x26545538B51562AD(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x0CD267261D0845BA(uParam0->f_17[iVar0], func_14()) && !unk_0xFA7888B344869306(iParam10))
						{
							unk_0xBFE5E4F12033E3EF(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0x7B4654D62B7E0E9E(uParam0->f_1[iVar0]))
				{
					unk_0x9403D0F4C7711241(&(uParam0->f_1[iVar0]));
					func_71(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x7B4654D62B7E0E9E(uParam0->f_1[iVar0]))
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
						if (!unk_0xE4F7206742848BAF(uParam0->f_17[iVar0]))
						{
							if (func_82(uParam0->f_17[iVar0]) || unk_0xC4F9E3DD5445F8E4(uParam0->f_17[iVar0], unk_0x27D769C59BC9D030(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0xE4F7206742848BAF(uParam0->f_17[iVar0]))
					{
						if (!unk_0xC4F9E3DD5445F8E4(uParam0->f_17[iVar0], unk_0x27D769C59BC9D030(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_82(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0xA0F74982C6AAA9D4();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0xF426A5DE932B3BEE(uParam0->f_13, 5))
							{
								func_64(uParam0, sParam7, 0);
								unk_0x26545538B51562AD(&(uParam0->f_13), 5);
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
										if (!unk_0x0275404839C0A19A(uVar19[iVar0]))
										{
											if (!unk_0xC1C5B83BB6719C6C(uVar19[iVar0], ""))
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
		unk_0xF17F4B0641AB2DE1(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0x7B4654D62B7E0E9E(uParam0->f_1[iVar0]))
				{
					unk_0x9403D0F4C7711241(&(uParam0->f_1[iVar0]));
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
			unk_0x26545538B51562AD(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x26545538B51562AD(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x26545538B51562AD(&(uParam1->f_13), 16);
			break;
	}
}

void func_74(var uParam0, char* sParam1, var uParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0x0275404839C0A19A(uParam1))
		{
			if (!unk_0xC1C5B83BB6719C6C(sParam1, ""))
			{
				func_75(sParam1, uParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0xA0F74982C6AAA9D4();
}

void func_75(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xA1F5C1FF1B6B5069(uParam0);
	unk_0x2B088D6251C2080D(uParam1);
	unk_0xB1547516FF59A048(iParam2, 1);
}

int func_76(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xF426A5DE932B3BEE(uParam1->f_13, 14);
		
		case 1:
			return unk_0xF426A5DE932B3BEE(uParam1->f_13, 15);
		
		case 2:
			return unk_0xF426A5DE932B3BEE(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_77(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x9A4E2270C2271219(iParam0, 0))
	{
		iVar0 = unk_0xD9FFE8E1642C81E2(iParam0, 0);
		if (!unk_0x2006A8C1BA2AFE80(iVar0, 0))
		{
			if (unk_0xECC01072E61D2F3A(iVar0) > fParam1)
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
	
	if (!unk_0xE4F7206742848BAF(iParam0))
	{
		if (!unk_0x0CD267261D0845BA(iParam0, func_14()))
		{
			iVar0 = unk_0xF67151DFE5F974F3(iParam0);
			if (unk_0x0B4DDB992C7BCF57(iParam1, 0))
			{
				if (unk_0xC4F9E3DD5445F8E4(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
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
	if (!unk_0xE4F7206742848BAF(iParam0))
	{
		if (unk_0xD2CFFE76B625AE55(iParam1))
		{
			if (unk_0x0B4DDB992C7BCF57(iParam1, 0))
			{
				if (unk_0xDD5B7E23D882DABD(iParam0, iParam1))
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
			unk_0x26545538B51562AD(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x26545538B51562AD(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x26545538B51562AD(&(uParam1->f_13), 19);
			break;
	}
}

int func_81(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xF426A5DE932B3BEE(uParam1->f_13, 17);
		
		case 1:
			return unk_0xF426A5DE932B3BEE(uParam1->f_13, 18);
		
		case 2:
			return unk_0xF426A5DE932B3BEE(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		iVar0 = unk_0x841B76F992C06AAC(unk_0x27D769C59BC9D030());
		if (unk_0x0B4DDB992C7BCF57(iVar0, 0))
		{
			if (!unk_0xE4F7206742848BAF(iParam0))
			{
				iVar1 = unk_0x841B76F992C06AAC(iParam0);
				if (unk_0x0B4DDB992C7BCF57(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0xC4F9E3DD5445F8E4(unk_0x27D769C59BC9D030(), iParam0, 20f, 20f, 20f, 0, 1, 0) && unk_0xC4F9E3DD5445F8E4(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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
	
	if (unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		if (unk_0x946C63BD9EF05437(iParam0) == joaat("bus") || unk_0x946C63BD9EF05437(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0xE4F7206742848BAF(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0x9297C590C99228DC(iParam0, 0);
			if (!unk_0xE4F7206742848BAF(iVar3))
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
			iVar4 = unk_0x9297C590C99228DC(iParam0, 1);
			if (!unk_0xE4F7206742848BAF(iVar4))
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
			iVar5 = unk_0x9297C590C99228DC(iParam0, 2);
			if (!unk_0xE4F7206742848BAF(iVar5))
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
	
	if (unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030()))
	{
		iVar0 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
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
	
	if (!unk_0xE4F7206742848BAF(iParam1))
	{
		if (unk_0x57ADE64D2E3798F0(iParam1))
		{
			iVar0 = unk_0xD9FFE8E1642C81E2(iParam1, 0);
			if (!unk_0x2006A8C1BA2AFE80(iVar0, 0))
			{
				if (unk_0x0B4DDB992C7BCF57(iVar0, 0))
				{
					if (unk_0xDD5B7E23D882DABD(unk_0x27D769C59BC9D030(), iVar0))
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
				else if (unk_0xC4F9E3DD5445F8E4(unk_0x27D769C59BC9D030(), iParam1, uParam2, uParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0xC4F9E3DD5445F8E4(unk_0x27D769C59BC9D030(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0x841B76F992C06AAC(unk_0x27D769C59BC9D030());
				if (unk_0xD2CFFE76B625AE55(iVar0))
				{
					if (func_70(iVar0, uParam0, 0))
					{
						if (unk_0x0B4DDB992C7BCF57(iVar0, 0))
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
	
	if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
	{
		fVar0 = unk_0xECC01072E61D2F3A(iParam0);
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
	
	if (!unk_0xE4F7206742848BAF(iParam0))
	{
		if (unk_0x0B4DDB992C7BCF57(iParam1, 0))
		{
			iVar0 = unk_0x841B76F992C06AAC(iParam0);
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
	
	if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1))
	{
		iVar0 = unk_0xF67151DFE5F974F3(unk_0x27D769C59BC9D030());
		if (unk_0x0B4DDB992C7BCF57(iVar0, 0))
		{
			iVar1 = unk_0x9297C590C99228DC(iVar0, 0);
			if (!unk_0xE4F7206742848BAF(iVar1))
			{
				if (iVar1 != unk_0x27D769C59BC9D030())
				{
					if (unk_0xE24B37600DCB21FC(iVar1))
					{
						if (!unk_0xFB6EC5803E0147E0(iVar1, unk_0x27D769C59BC9D030()))
						{
							unk_0x85FD30B510E7C05E(iVar1, unk_0x27D769C59BC9D030(), 2000, 2048, 2);
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
	
	if (!unk_0xF426A5DE932B3BEE(uParam0->f_13, 25))
	{
		if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
		{
			unk_0x56F64CC9254C2E4F(unk_0x27D769C59BC9D030(), 32, 0);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xD2CFFE76B625AE55(uParam0->f_17[iVar0]))
			{
				if (!unk_0xE4F7206742848BAF(uParam0->f_17[iVar0]))
				{
					unk_0x56F64CC9254C2E4F(uParam0->f_17[iVar0], 32, 0);
					unk_0x56F64CC9254C2E4F(uParam0->f_17[iVar0], 305, 1);
					unk_0x56F64CC9254C2E4F(uParam0->f_17[iVar0], 268, 1);
					unk_0xDA128C2F38D83BA1(uParam0->f_17[iVar0], 0);
				}
			}
			iVar0++;
		}
		unk_0x26545538B51562AD(&(uParam0->f_13), 25);
	}
}

void func_90(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD2CFFE76B625AE55(uParam0->f_17[iVar0]))
		{
			if (!unk_0xE4F7206742848BAF(uParam0->f_17[iVar0]))
			{
				if (unk_0x57ADE64D2E3798F0(uParam0->f_17[iVar0]))
				{
					unk_0x6B8EBAC1C87F6645(uParam0->f_17[iVar0], 0);
					unk_0xD0731BD9ADB40FF5(uParam0->f_17[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
		{
			if (unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030()))
			{
				unk_0x6B8EBAC1C87F6645(unk_0x27D769C59BC9D030(), 0);
				unk_0xD0731BD9ADB40FF5(unk_0x27D769C59BC9D030(), 0);
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
	if (unk_0xD2CFFE76B625AE55(iLocal_2570) && unk_0x0B4DDB992C7BCF57(iLocal_2570, 0))
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
			if (unk_0xD2CFFE76B625AE55(Local_579[iVar0 /*8*/]) && unk_0x0B4DDB992C7BCF57(Local_579[iVar0 /*8*/], 0))
			{
				if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1) && unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_579[iVar0 /*8*/], 1))
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
	
	if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0xD2CFFE76B625AE55(Local_579[iVar0 /*8*/]) && unk_0x0B4DDB992C7BCF57(Local_579[iVar0 /*8*/], 0))
			{
				if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_579[iVar0 /*8*/], 0))
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
	Global_55760 = iParam0;
	Global_55761 = iParam1;
}

int func_99(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (((unk_0xD2CFFE76B625AE55(Local_579[iVar1 /*8*/]) && unk_0x0B4DDB992C7BCF57(Local_579[iVar1 /*8*/], 0)) && !func_103(Local_579[iVar1 /*8*/])) && (!bParam0 || func_100(Local_579[iVar1 /*8*/])))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_100(int iParam0)
{
	if (unk_0x94F32809C13F5225(iParam0) == iLocal_2522)
	{
		if (func_102(unk_0x27D769C59BC9D030(), Local_642, 1) < 500f)
		{
			return 1;
		}
	}
	else if (func_101(iParam0, unk_0x27D769C59BC9D030(), 1) < 300f)
	{
		return 1;
	}
	return 0;
}

float func_101(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 0) };
	}
	if (!unk_0x2006A8C1BA2AFE80(iParam1, 0))
	{
		Var3 = { unk_0xA8CFDE65C45F813B(iParam1, 1) };
	}
	else
	{
		Var3 = { unk_0xA8CFDE65C45F813B(iParam1, 0) };
	}
	return unk_0x676D4CD42E0837CA(Var0, Var3, iParam2);
}

float func_102(int iParam0, struct<3> Param1, int iParam4)
{
	struct<3> Var0;
	
	if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0xA8CFDE65C45F813B(iParam0, 0) };
	}
	return unk_0x676D4CD42E0837CA(Var0, Param1, iParam4);
}

int func_103(int iParam0)
{
	if (unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		if ((unk_0xE06C11511DE39267(iParam0, 0, 7000) || unk_0xE06C11511DE39267(iParam0, 1, 7000)) || unk_0xE06C11511DE39267(iParam0, 2, 7000))
		{
			return 1;
		}
	}
	return 0;
}

void func_104(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xA1F5C1FF1B6B5069(sParam0);
	unk_0xB1547516FF59A048(iParam1, 1);
}

void func_105(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0xD2CFFE76B625AE55(Global_93091.f_4))
	{
		if (unk_0x0B4DDB992C7BCF57(Global_93091.f_4, 0))
		{
			if (func_155(24) != Global_93091.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_152(unk_0xA8CFDE65C45F813B(Global_93091.f_4, 1), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_106(Global_93091.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_106(int iParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (unk_0xD2CFFE76B625AE55(iParam0) && unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0xD2CFFE76B625AE55(Global_68319.f_484[25]) && unk_0x0B4DDB992C7BCF57(Global_68319.f_484[25], 0))
			{
				if (Global_68319.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x51A640907BDD41BB(iParam0) || unk_0x946C63BD9EF05437(iParam0) == joaat("bus")) || unk_0x946C63BD9EF05437(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_151(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_147(iParam0, &Var0);
		if (func_146(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0xA8CFDE65C45F813B(iParam0, 1) };
			uParam4 = unk_0x4D6B971C8AEE130C(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0x70ABFF261710305D(unk_0x3AA961419D971CB2()) != joaat("vehicle_gen_controller"))
			{
				Global_69307 = unk_0x70ABFF261710305D(unk_0x3AA961419D971CB2());
			}
		}
		func_139(iParam5, &Var0, Param1, uParam4, func_145(iParam0));
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
	if (!func_135(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xF426A5DE932B3BEE(Global_68319.f_555[0 /*21*/].f_9, 12) && !unk_0xF426A5DE932B3BEE(Global_68319.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_68319.f_555[0 /*21*/].f_4 != unk_0x946C63BD9EF05437(iParam1))
		{
			return;
		}
	}
	if (Global_69226 != -1 && Global_69226 != iParam0)
	{
		return;
	}
	if (unk_0xD2CFFE76B625AE55(iParam1))
	{
		if (unk_0x0B4DDB992C7BCF57(iParam1, 0))
		{
			if (!unk_0xE24B37600DCB21FC(iParam1))
			{
				unk_0xAF3355298F537BB0(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_101154.f_18807.f_4801 = func_124();
			}
			if (iParam1 != Global_68319.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_155(iParam0);
					if ((unk_0xD2CFFE76B625AE55(iVar0) && unk_0x0B4DDB992C7BCF57(iVar0, 0)) && iParam1 != iVar0)
					{
						func_108(iVar0, 145);
					}
				}
				Global_69225 = iParam1;
				Global_69226 = iParam0;
				Global_69227 = iParam2;
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
		iVar0 = unk_0x9297C590C99228DC(iParam0, -1);
		if (!unk_0xD2CFFE76B625AE55(iVar0))
		{
			iVar0 = unk_0x8704B0F200BD412D(iParam0, -1);
		}
		if (unk_0xD2CFFE76B625AE55(iVar0) && !unk_0xE4F7206742848BAF(iVar0))
		{
			if (unk_0x946C63BD9EF05437(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x946C63BD9EF05437(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x946C63BD9EF05437(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_101154.f_1826.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x946C63BD9EF05437(iParam0) == Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x75CB9E30BA492FF0(&(Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xC1C5B83BB6719C6C(unk_0x9111F14F8ABAE773(iParam0), &(Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_101154.f_18807.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101154.f_18807.f_5592[iVar1] = iVar2;
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
		if (unk_0x946C63BD9EF05437(iParam0) == Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x75CB9E30BA492FF0(&(Global_101154.f_18807.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xC1C5B83BB6719C6C(unk_0x9111F14F8ABAE773(iParam0), &(Global_101154.f_18807.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_101154.f_18807.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101154.f_18807.f_5590 = iParam1;
	Global_69224 = iParam0;
	Global_101154.f_18807.f_5588 = 1;
	func_147(iParam0, &(Global_101154.f_18807.f_5510));
}

int func_109(int iParam0)
{
	if ((((((((((!unk_0xD2CFFE76B625AE55(iParam0) || !unk_0x0B4DDB992C7BCF57(iParam0, 0)) || func_122(iParam0, 0, 0)) || func_122(iParam0, 1, 0)) || func_122(iParam0, 2, 0)) || func_145(iParam0) != 145) || func_121(iParam0)) || func_120(iParam0)) || func_119(iParam0)) || func_118(iParam0)) || !func_110(unk_0x946C63BD9EF05437(iParam0)))
	{
		if (func_120(iParam0))
		{
		}
		if (func_120(iParam0))
		{
		}
		if (func_122(iParam0, 0, 0))
		{
		}
		if (func_122(iParam0, 1, 0))
		{
		}
		if (func_122(iParam0, 2, 0))
		{
		}
		if (func_145(iParam0) != 145)
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
	if (!func_111(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0xD3AE48D8EB7DCBE6(iParam0) || unk_0xEC6E5897335290DD(iParam0)) || unk_0xDBFA5C79D9B3D622(iParam0)) || unk_0x5BFC131B92C92E97(iParam0))
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

int func_111(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xCCCEEEDD3FD9AA24(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x0E063DDE8855EC52())) || (iParam0 == joaat("buffalo3") && !unk_0x0E063DDE8855EC52())) || (iParam0 == joaat("gauntlet2") && !unk_0x0E063DDE8855EC52())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x0E063DDE8855EC52())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_117())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xF91F65A88EC73320())
		{
			if (unk_0xB1B63407FCB8DC25(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x80EC20FBCB429863(Var1.f_0))
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
		if ((((!func_116() && !func_115()) && !func_114()) && !func_113()) && !func_117())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xD0333FE560420AC5() || unk_0xDFCB321F1D24137F()) || unk_0x748A964A12412EBB())
		{
		}
		else if (!func_114())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_112(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_112(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2459480)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x9CC4C10F8D665832();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_5004 && !Global_262145.f_10847) && iVar1 < Global_262145.f_10848)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_11652 && iVar1 < Global_262145.f_11664)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_11648 && iVar1 < Global_262145.f_11660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_11649 && iVar1 < Global_262145.f_11661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_11650 && iVar1 < Global_262145.f_11662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_11651 && iVar1 < Global_262145.f_11663)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_11653 && iVar1 < Global_262145.f_11665)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_11654 && iVar1 < Global_262145.f_11657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_11655 && iVar1 < Global_262145.f_11658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_11656 && iVar1 < Global_262145.f_11659)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_113()
{
	return 0;
}

int func_114()
{
	return 1;
}

int func_115()
{
	return 1;
}

int func_116()
{
	if (unk_0xA29E536967D6DF2E(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_117()
{
	var uVar0;
	
	if (unk_0xB3081451628A5D6C())
	{
		if (unk_0xF8B1AB221BA632B5())
		{
			if (unk_0x4C5F5AF635DED95E())
			{
				unk_0xD0D748C6C14C0E92(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				unk_0x26545538B51562AD(&uVar0, 2);
				unk_0x26545538B51562AD(&uVar0, 4);
				unk_0x26545538B51562AD(&uVar0, 6);
				unk_0x26545538B51562AD(&Global_25, 2);
				unk_0x26545538B51562AD(&Global_25, 4);
				unk_0x26545538B51562AD(&Global_25, 6);
				unk_0xE2A8B026FA4DDFFF(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (unk_0x755BFB74ADDC1524())
				{
					uVar0 = unk_0xC06A80AF9911D7A8(866);
					unk_0x26545538B51562AD(&uVar0, 0);
					unk_0xD020BAA9D2E33978(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_138274 == 2)
	{
		return 1;
	}
	else if (Global_138274 == 3)
	{
		return 0;
	}
	if (unk_0x755BFB74ADDC1524())
	{
		if (unk_0xF426A5DE932B3BEE(unk_0xC06A80AF9911D7A8(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_118(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = unk_0x946C63BD9EF05437(iParam0);
	uVar1 = unk_0x9111F14F8ABAE773(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xC1C5B83BB6719C6C(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_111(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_119(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xD2CFFE76B625AE55(Global_88972[iVar0]))
		{
			if (Global_88972[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_120(int iParam0)
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(iParam0) && unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xD2CFFE76B625AE55(Global_88942[iVar0]) && unk_0x0B4DDB992C7BCF57(Global_88942[iVar0], 0))
			{
				if (Global_88942[iVar0] == iParam0 && unk_0x946C63BD9EF05437(Global_88942[iVar0]) == unk_0x946C63BD9EF05437(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_121(int iParam0)
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(Global_68319.f_484[24]))
	{
		if (iParam0 == Global_68319.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xD2CFFE76B625AE55(Global_68319.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_68319.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_122(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0xD2CFFE76B625AE55(iParam0) || !unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_123(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xF426A5DE932B3BEE(Global_101154.f_5919[iVar9], 0))
		{
			if (unk_0x005659B4CDF2566C(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_123(int iParam0, int iParam1, char* sParam2, var uParam3)
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

var func_124()
{
	var uVar0;
	
	func_134(&uVar0, unk_0x2FADF5E93AB8D64B());
	func_133(&uVar0, unk_0x51C7DC141C5D0E6B());
	func_132(&uVar0, unk_0xEFEADD7EBD01C0A6());
	func_127(&uVar0, unk_0x388418AD39C0F4DE());
	func_126(&uVar0, unk_0xE3911478C9FE04B2());
	func_125(&uVar0, unk_0x8FB5B60BC869990E());
	return uVar0;
}

void func_125(var uParam0, int iParam1)
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

void func_126(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_127(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_131(*uParam0);
	iVar1 = func_129(*uParam0);
	if (iParam1 < 1 || iParam1 > func_128(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

int func_128(int iParam0, int iParam1)
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

var func_129(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_130(unk_0xF426A5DE932B3BEE(iParam0, 31), -1, 1)) + 2011;
}

int func_130(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_131(var uParam0)
{
	return uParam0 & 15;
}

void func_132(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_133(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_134(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_135(var uParam0, int iParam1)
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
			uParam0->f_4 = func_136(0, 1);
			uParam0->f_12 = 0;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_136(0, 1);
			uParam0->f_12 = 0;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_136(1, 1);
			uParam0->f_12 = 1;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_136(1, 2);
			uParam0->f_12 = 1;
			unk_0x26545538B51562AD(&(uParam0->f_9), 19);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_136(1, 1);
			uParam0->f_12 = 1;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_136(1, 2);
			uParam0->f_12 = 1;
			unk_0x26545538B51562AD(&(uParam0->f_9), 19);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_136(2, 1);
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_136(2, 1);
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_136(2, 1);
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 20);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 22);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 22);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 22);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 24);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			unk_0x26545538B51562AD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 24);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			unk_0x26545538B51562AD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 14);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 24);
			unk_0x26545538B51562AD(&(uParam0->f_9), 28);
			unk_0x26545538B51562AD(&(uParam0->f_9), 29);
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
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 27);
			unk_0x26545538B51562AD(&(uParam0->f_9), 24);
			unk_0x26545538B51562AD(&(uParam0->f_9), 29);
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
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 27);
			unk_0x26545538B51562AD(&(uParam0->f_9), 24);
			unk_0x26545538B51562AD(&(uParam0->f_9), 29);
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
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			unk_0x26545538B51562AD(&(uParam0->f_9), 7);
			unk_0x26545538B51562AD(&(uParam0->f_9), 27);
			unk_0x26545538B51562AD(&(uParam0->f_9), 24);
			unk_0x26545538B51562AD(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 11);
			unk_0x26545538B51562AD(&(uParam0->f_9), 13);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x26545538B51562AD(&(uParam0->f_9), 10);
			unk_0x26545538B51562AD(&(uParam0->f_9), 11);
			unk_0x26545538B51562AD(&(uParam0->f_9), 13);
			unk_0x26545538B51562AD(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x26545538B51562AD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x26545538B51562AD(&(uParam0->f_9), 9);
			unk_0x26545538B51562AD(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x26545538B51562AD(&(uParam0->f_9), 9);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x26545538B51562AD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x26545538B51562AD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x26545538B51562AD(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 8);
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
			unk_0x26545538B51562AD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x26545538B51562AD(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x26545538B51562AD(&(uParam0->f_9), 2);
			unk_0x26545538B51562AD(&(uParam0->f_9), 30);
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x26545538B51562AD(&(uParam0->f_9), 2);
			unk_0x26545538B51562AD(&(uParam0->f_9), 22);
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
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
			if (func_117())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x26545538B51562AD(&(uParam0->f_9), 13);
			unk_0x26545538B51562AD(&(uParam0->f_9), 2);
			unk_0x26545538B51562AD(&(uParam0->f_9), 1);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_117())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0x26545538B51562AD(&(uParam0->f_9), 13);
			unk_0x26545538B51562AD(&(uParam0->f_9), 2);
			unk_0x26545538B51562AD(&(uParam0->f_9), 1);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x26545538B51562AD(&(uParam0->f_9), 0);
			unk_0x26545538B51562AD(&(uParam0->f_9), 21);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			unk_0x26545538B51562AD(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x26545538B51562AD(&(uParam0->f_9), 30);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x26545538B51562AD(&(uParam0->f_9), 30);
			unk_0x26545538B51562AD(&(uParam0->f_9), 23);
			unk_0x26545538B51562AD(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xF426A5DE932B3BEE(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_101154.f_18807.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_146(Global_101154.f_18807.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101154.f_18807.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_101154.f_18807.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_101154.f_18807.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xF426A5DE932B3BEE(uParam0->f_9, 19))
	{
		if (!func_146(Global_101154.f_1826.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101154.f_1826.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101154.f_1826.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xF426A5DE932B3BEE(uParam0->f_9, 20))
	{
		if (!func_146(Global_101154.f_1826.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_101154.f_1826.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_101154.f_1826.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_136(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_138(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_137(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_137(int iParam0, var uParam1, int iParam2)
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
			if (Global_101154.f_7775.f_99.f_58[128] && !Global_101154.f_7775.f_99.f_58[131])
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
					if (Global_101154.f_7775.f_99.f_58[119])
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
			else if (Global_101154.f_7775.f_99.f_58[118])
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

bool func_138(int iParam0)
{
	return iParam0 < 3;
}

void func_139(int iParam0, var uParam1, struct<3> Param2, var uParam5, int iParam6)
{
	if (func_135(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xF426A5DE932B3BEE(Global_68319.f_555[0 /*21*/].f_9, 10))
		{
			func_144(iParam0);
			func_143(uParam1, &(Global_101154.f_18807.f_69[Global_68319.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xF426A5DE932B3BEE(Global_68319.f_555[0 /*21*/].f_9, 11))
			{
				Global_101154.f_18807.f_1864[Global_68319.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_101154.f_18807.f_1934[Global_68319.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_101154.f_18807.f_1864[Global_68319.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_101154.f_18807.f_1934[Global_68319.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_140(iParam0, 1);
		}
	}
}

void func_140(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_142(iParam0, 0))
		{
			func_141(iParam0, 1, 0);
			func_141(iParam0, 2, 0);
			func_141(iParam0, 3, 0);
			func_141(iParam0, 4, 0);
			func_141(iParam0, 0, 1);
			Global_68319[iParam0] = 1;
		}
	}
	else
	{
		func_141(iParam0, 0, 0);
	}
}

void func_141(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0x26545538B51562AD(&(Global_101154.f_18807[iParam0]), iParam1);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&(Global_101154.f_18807[iParam0]), iParam1);
	}
}

bool func_142(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xF426A5DE932B3BEE(Global_101154.f_18807[iParam0], iParam1);
}

void func_143(var uParam0, var uParam1)
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

void func_144(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_135(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xD2CFFE76B625AE55(Global_68319.f_139[iParam0]))
		{
			unk_0xAF3355298F537BB0(Global_68319.f_139[iParam0], 1, 1);
			unk_0x9846B4D56971A958(&(Global_68319.f_139[iParam0]));
			Global_68319.f_139[iParam0] = 0;
		}
		if (unk_0xF426A5DE932B3BEE(Global_68319.f_555[0 /*21*/].f_9, 13))
		{
			func_140(iParam0, 0);
		}
	}
}

int func_145(int iParam0)
{
	int iVar0;
	
	if (!unk_0xD2CFFE76B625AE55(iParam0))
	{
		return 145;
	}
	if (!unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD2CFFE76B625AE55(Global_88942[iVar0]))
		{
			if (Global_88942[iVar0] == iParam0)
			{
				return Global_88952[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

bool func_146(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_147(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		func_150(uParam1);
		uParam1->f_66 = unk_0x946C63BD9EF05437(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x9111F14F8ABAE773(iParam0), 16);
		*uParam1 = unk_0xC960169422AD5363(iParam0);
		unk_0x923073D63782E037(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0xC780DEE9C0D887BF(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0x0C8CAFCFEDEEF36D(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xEF90EF7B0A4543EE(iParam0);
		uParam1->f_67 = unk_0xC3362AC1471926AA(iParam0);
		uParam1->f_69 = unk_0xA2A724EEE80F007F(iParam0);
		uParam1->f_70 = unk_0x977E90DD5881BA08(iParam0);
		unk_0x477102A8963B16B4(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0x486F923523D0F4DB(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x8A455A983374FA6C(iParam0, 2))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 28);
		}
		if (unk_0x8A455A983374FA6C(iParam0, 3))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 29);
		}
		if (unk_0x8A455A983374FA6C(iParam0, 0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 30);
		}
		if (unk_0x8A455A983374FA6C(iParam0, 1))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0x1BCE164A254176FA(iParam0, 0))
		{
			uParam1->f_68 = unk_0xD3A88CAE99C338A3(iParam0);
		}
		if (unk_0xEC6E5897335290DD(uParam1->f_66))
		{
			if (unk_0x7D5667109E828021(iParam0))
			{
				switch (unk_0xDBA4852736CE4FDB(iParam0))
				{
					case 2:
					case 0:
						unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 23);
						unk_0x26545538B51562AD(&(uParam1->f_77), 22);
						break;
					
					case 3:
					case 1:
						unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 23);
						unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 22);
						break;
					
					case 4:
						unk_0x26545538B51562AD(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0x26545538B51562AD(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x480DA4A4EBDCE31C(iParam0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 9);
		}
		if (unk_0x6509ED7AD3D989FE(iParam0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 10);
		}
		if (unk_0xFD1E4AF84D93E688(iParam0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 13);
			unk_0x3E4DACD1434531DD(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0xE00D5F67AE8F1A68(iParam0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 12);
		}
		func_149(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0x3D866A165E63B4FE(iParam0, iVar0 + 1))
			{
				unk_0x26545538B51562AD(&(uParam1->f_77), func_148(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x3E70A6BAFEE797B2(iParam0, 0))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 11);
		}
		if (unk_0xE8E046017EE675F2(iParam0, "IgnoredByQuickSave") && unk_0xF47B23D65F733C81(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x26545538B51562AD(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xF17F4B0641AB2DE1(&(uParam1->f_77), 27);
		}
	}
}

int func_148(int iParam0)
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

int func_149(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x0B4DDB992C7BCF57(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x41EEFFCF5FB2A6E4(*iParam0) == 0)
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
			if (unk_0x56F45DEAAF97E44B(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0xC90889BF6C7006D1(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x0334928DD9F6AEB8(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x0334928DD9F6AEB8(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_150(var uParam0)
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

void func_151(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_144(iParam0);
	func_140(iParam0, 0);
}

int func_152(struct<3> Param0, int iParam3, var uParam4, var uParam5)
{
	int iVar0;
	
	iVar0 = func_153(Param0, iParam3, 1);
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

int func_153(struct<3> Param0, int iParam3, int iParam4)
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
		if (Global_86649[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_86649[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_154(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0x676D4CD42E0837CA(Param0, Global_86649[iVar0 /*10*/].f_3, 1);
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

bool func_154(int iParam0)
{
	return unk_0xF426A5DE932B3BEE(Global_101154.f_5919[iParam0], 0);
}

int func_155(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_68319.f_139[iParam0];
}

int func_156()
{
	func_157();
	return Global_101154.f_1826.f_539.f_3549;
}

void func_157()
{
	int iVar0;
	
	if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
	{
		if (func_159(Global_101154.f_1826.f_539.f_3549) != unk_0x946C63BD9EF05437(unk_0x27D769C59BC9D030()))
		{
			iVar0 = func_158(unk_0x27D769C59BC9D030());
			if (func_138(iVar0) && (!func_35(14) || Global_100106))
			{
				if (Global_101154.f_1826.f_539.f_3549 != iVar0 && func_138(Global_101154.f_1826.f_539.f_3549))
				{
					Global_101154.f_1826.f_539.f_3550 = Global_101154.f_1826.f_539.f_3549;
				}
				Global_101154.f_1826.f_539.f_3551 = iVar0;
				Global_101154.f_1826.f_539.f_3549 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_101154.f_1826.f_539.f_3549 != 145)
			{
				Global_101154.f_1826.f_539.f_3551 = Global_101154.f_1826.f_539.f_3549;
			}
			return;
		}
	}
	Global_101154.f_1826.f_539.f_3549 = 145;
}

int func_158(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD2CFFE76B625AE55(uParam0))
	{
		iVar1 = unk_0x946C63BD9EF05437(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_159(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_159(int iParam0)
{
	if (func_138(iParam0))
	{
		return Global_101154.f_32575[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_160(var uParam0, int iParam1, int iParam2, int iParam3)
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
		uParam0->f_4 = unk_0xA0F74982C6AAA9D4();
		uParam0->f_5 = unk_0xA0F74982C6AAA9D4();
		uParam0->f_1 = iParam3;
		return 1;
	}
	return 0;
}

int func_161(var uParam0, int iParam1)
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
		unk_0x97C59C4E8349D15F(iParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = unk_0xA0F74982C6AAA9D4();
		(uParam0[iVar1 /*5*/])->f_4 = iParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

int func_162(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x75CB9E30BA492FF0(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (unk_0xC1C5B83BB6719C6C(uParam0->f_737[iVar0 /*5*/].f_4, sParam1))
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
		unk_0x386AEE656157CB3A(sParam1, 0);
		uParam0->f_737[iVar1 /*5*/] = 1;
		uParam0->f_737[iVar1 /*5*/].f_3 = unk_0xA0F74982C6AAA9D4();
		uParam0->f_737[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

void func_163(var uParam0)
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
				if ((unk_0xA0F74982C6AAA9D4() - (uParam0[iVar0 /*8*/])->f_5) > (uParam0[iVar0 /*8*/])->f_6)
				{
					(*uParam0)[iVar0 /*8*/] = 1;
					(uParam0[iVar0 /*8*/])->f_6 = 0;
				}
				break;
		}
		iVar0++;
	}
}

void func_164()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	bVar2 = false;
	if (func_102(unk_0x27D769C59BC9D030(), Local_642, 1) < 70f)
	{
		unk_0xD81EB89A9BDAFD95();
	}
	if (iLocal_2568 == 9)
	{
		if (!iLocal_2567)
		{
			if (unk_0x14B5449970A1C2DA(unk_0x4D29100D094E5511(), 0))
			{
				unk_0xF30F45A6EE56923E("SCRIPTED_SCANNER_REPORT_JSH_PREP_1A_01", 0f);
				iLocal_2567 = 1;
			}
		}
		if (unk_0xD2CFFE76B625AE55(Local_469.f_0))
		{
			if (func_101(Local_469.f_0, unk_0x27D769C59BC9D030(), 1) > 300f)
			{
				unk_0x7E8F7C1D05860F53(&Local_469);
			}
		}
	}
	if (unk_0xD2CFFE76B625AE55(iLocal_2570) && unk_0x0B4DDB992C7BCF57(iLocal_2570, 0))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0xD2CFFE76B625AE55(Local_579[iVar0 /*8*/]) && unk_0x0B4DDB992C7BCF57(Local_579[iVar0 /*8*/], 0))
			{
				if (unk_0x10BD59A398C824DA(iLocal_2570, Local_579[iVar0 /*8*/]))
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
	if (func_174())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0xD2CFFE76B625AE55(Local_579[iVar0 /*8*/]) && unk_0x0B4DDB992C7BCF57(Local_579[iVar0 /*8*/], 0))
			{
				if (unk_0x10BD59A398C824DA(unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0), Local_579[iVar0 /*8*/]))
				{
					iLocal_2570 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
				}
			}
			iVar0++;
		}
	}
	func_167();
	if (iLocal_651 == 0)
	{
		if (!unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), 182.9537f, -3119.884f, 101.9226f, 115f, 260f, 120f, 0, 1, 0))
		{
			bVar3 = true;
		}
		iVar1 = 0;
		while (iVar1 < Local_28.f_0)
		{
			if (unk_0xD2CFFE76B625AE55(Local_28[iVar1 /*110*/]))
			{
				if ((Local_28[iVar1 /*110*/].f_5 == 5 && func_101(unk_0x27D769C59BC9D030(), Local_28[iVar1 /*110*/], 1) > 300f) && func_102(unk_0x27D769C59BC9D030(), Local_642, 1) > 300f)
				{
					unk_0xF6ADC11BDB5ECA41(&(Local_28[iVar1 /*110*/]));
				}
			}
			iVar1++;
		}
		iVar4 = 6;
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0xD2CFFE76B625AE55(Local_579[iVar0 /*8*/]))
			{
				if (!unk_0x0B4DDB992C7BCF57(Local_579[iVar0 /*8*/], 0))
				{
					unk_0x9846B4D56971A958(&(Local_579[iVar0 /*8*/]));
					if (unk_0x7B4654D62B7E0E9E(Local_579[iVar0 /*8*/].f_1))
					{
						unk_0x9403D0F4C7711241(&(Local_579[iVar0 /*8*/].f_1));
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
					if (unk_0x7B4654D62B7E0E9E(Local_579[iVar0 /*8*/].f_1))
					{
						unk_0x9403D0F4C7711241(&(Local_579[iVar0 /*8*/].f_1));
					}
					iVar4 = 3;
				}
				else if (!func_100(Local_579[iVar0 /*8*/]))
				{
					if (unk_0x94F32809C13F5225(Local_579[iVar0 /*8*/]) == iLocal_2522)
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
			if (((((iLocal_2568 == 9 && func_96() != -1) && unk_0xD2CFFE76B625AE55(Local_579[func_96() /*8*/])) && unk_0x0B4DDB992C7BCF57(Local_579[func_96() /*8*/], 0)) && !func_103(Local_579[func_96() /*8*/])) || (((iLocal_2568 == 10 && func_48() != -1) && unk_0xD2CFFE76B625AE55(Local_579[func_48() /*8*/])) && unk_0x0B4DDB992C7BCF57(Local_579[func_48() /*8*/], 0)))
			{
				if (unk_0x7B4654D62B7E0E9E(Local_579[iVar0 /*8*/].f_1))
				{
					unk_0x9403D0F4C7711241(&(Local_579[iVar0 /*8*/].f_1));
				}
			}
			else if ((((unk_0xD2CFFE76B625AE55(Local_579[iVar0 /*8*/]) && unk_0x0B4DDB992C7BCF57(Local_579[iVar0 /*8*/], 0)) && !func_103(Local_579[iVar0 /*8*/])) && func_100(Local_579[iVar0 /*8*/])) && iLocal_652 == 0)
			{
				if (!unk_0x7B4654D62B7E0E9E(Local_579[iVar0 /*8*/].f_1))
				{
					Local_579[iVar0 /*8*/].f_1 = func_166(Local_579[iVar0 /*8*/], 0, 0);
					unk_0x1FDCAFA848ABB8FA(Local_579[iVar0 /*8*/].f_1, 1);
				}
			}
			iVar0++;
		}
		if (iLocal_2568 == 9 || iLocal_2568 == 10)
		{
			if (func_165("JHP1A_BKIN", 0, 0) || func_165("JHP1A_BKINANY", 0, 0))
			{
				unk_0x8ACEB4FC9E9EE225();
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
				func_270(iVar4);
			}
		}
	}
}

var func_165(char* sParam0, int iParam1, int iParam2)
{
	unk_0x907B9289657244FB(sParam0);
	if (iParam1 == 1)
	{
		unk_0x2B088D6251C2080D(iParam2);
	}
	return unk_0x07B8D9CA22BFDA75();
}

int func_166(int iParam0, bool bParam1, bool bParam2)
{
	return func_52(iParam0, !bParam1, bParam2);
}

void func_167()
{
	if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_579[3 /*8*/], 1))
		{
			iLocal_2568 = 11;
		}
		else if (func_173())
		{
			iLocal_2568 = 7;
		}
		else if (func_172())
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
		else if (func_171())
		{
			iLocal_2568 = 8;
		}
		else if (((unk_0xD2CFFE76B625AE55(iLocal_2571) && unk_0x0B4DDB992C7BCF57(iLocal_2571, 0)) && !unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), iLocal_2571, 1)) && unk_0x98CEDC9398D49BB8(iLocal_2571, Local_642, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0))
		{
			iLocal_2568 = 5;
		}
		else if (((!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1) && unk_0xD2CFFE76B625AE55(unk_0x070841EC2D20AB5A())) && !func_170()) && unk_0x98CEDC9398D49BB8(unk_0x070841EC2D20AB5A(), Local_642, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0))
		{
			iLocal_2571 = unk_0x070841EC2D20AB5A();
			iLocal_2568 = 5;
		}
		else if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1) && unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), Local_642, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0))
		{
			iLocal_2568 = 2;
		}
		else if (((unk_0xD2CFFE76B625AE55(iLocal_2571) && unk_0x0B4DDB992C7BCF57(iLocal_2571, 0)) && !unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), iLocal_2571, 1)) && (unk_0x98CEDC9398D49BB8(iLocal_2571, 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, 1, 0) || unk_0xB1988D54B2C48CB5(iLocal_2571, 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0)))
		{
			iLocal_2568 = 4;
		}
		else if (((!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1) && unk_0xD2CFFE76B625AE55(unk_0x070841EC2D20AB5A())) && !func_170()) && (unk_0x98CEDC9398D49BB8(unk_0x070841EC2D20AB5A(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, 1, 0) || unk_0xB1988D54B2C48CB5(unk_0x070841EC2D20AB5A(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0)))
		{
			iLocal_2571 = unk_0x070841EC2D20AB5A();
			iLocal_2568 = 4;
		}
		else if ((unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1) && !func_170()) && unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), Local_642, 119.7228f, -3092.472f, 13.46126f, 44f, 0, 1, 0))
		{
			iLocal_2571 = unk_0x070841EC2D20AB5A();
			iLocal_2568 = 3;
		}
		else if ((unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1) && !func_170()) && unk_0x98CEDC9398D49BB8(unk_0x27D769C59BC9D030(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, 0, 1, 0))
		{
			iLocal_2571 = unk_0x070841EC2D20AB5A();
			iLocal_2568 = 1;
		}
		else if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1) && unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0))
		{
			iLocal_2568 = 1;
		}
		else
		{
			iLocal_2571 = 0;
			if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1) && unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), 159.688f, -3092.446f, 7.314032f, 4.9375f, 7.3125f, 2.3125f, 0, 1, 0))
			{
				iLocal_2568 = 0;
			}
			else if (!unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1) && unk_0xB1988D54B2C48CB5(unk_0x27D769C59BC9D030(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, 0, 1, 0))
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
			if (func_169(Local_28[0 /*110*/]))
			{
				func_168(Local_28[0 /*110*/], 120f, 20f, 120f, -90f, 90f);
			}
		}
		else if (func_169(Local_28[0 /*110*/]))
		{
			func_168(Local_28[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		}
		if (bLocal_2565)
		{
			unk_0xC908FA7A5EBB2825(unk_0x27D769C59BC9D030(), 155, 1);
		}
		if ((iLocal_2568 != -1 && unk_0x14B5449970A1C2DA(unk_0x4D29100D094E5511(), 0)) && unk_0xD59C7C590E43DFAB(Vector(101.9226f, -3119.884f, 182.9537f) - Vector(108.0625f, 239.75f, 94.25f), Vector(101.9226f, -3119.884f, 182.9537f) + Vector(108.0625f, 239.75f, 94.25f)))
		{
		}
	}
}

void func_168(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0xE4F7206742848BAF(uParam0))
	{
		unk_0x1D3964987BED85C6(iParam0, fParam1);
		unk_0xC578B8FC686912DD(iParam0, fParam2);
		unk_0xCABCE9129F76BDC8(iParam0, (fParam3 / 2f));
		unk_0x6F10EAC0F46B369A(iParam0, fParam4);
		unk_0x6DA28A1C8F489423(iParam0, fParam5);
	}
}

int func_169(int iParam0)
{
	if (iParam0 != 0 && unk_0xD2CFFE76B625AE55(iParam0))
	{
		switch (unk_0x376E4A601F9FE2E9(iParam0))
		{
			case 1:
				if (!unk_0xE4F7206742848BAF(unk_0x97EA5EA3E7FE8500(iParam0)))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x0B4DDB992C7BCF57(unk_0x35E488C304B2E03E(iParam0), 0))
				{
					return 1;
				}
				break;
			
			default:
				if (!unk_0x2006A8C1BA2AFE80(iParam0, 0))
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_170()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (unk_0xD2CFFE76B625AE55(Local_579[iVar0 /*8*/]) && unk_0x0B4DDB992C7BCF57(Local_579[iVar0 /*8*/], 0))
		{
			if (unk_0x070841EC2D20AB5A() == Local_579[iVar0 /*8*/])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_171()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (unk_0xD2CFFE76B625AE55(Local_579[iVar0 /*8*/]) && unk_0x77F1B7F6C32990D6(Local_579[iVar0 /*8*/], unk_0x27D769C59BC9D030(), 1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_172()
{
	int iVar0;
	
	if (unk_0x0F74EBD810C90005(unk_0x27D769C59BC9D030()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if ((unk_0xD2CFFE76B625AE55(Local_579[iVar0 /*8*/]) && unk_0x0B4DDB992C7BCF57(Local_579[iVar0 /*8*/], 0)) && unk_0xF67151DFE5F974F3(unk_0x27D769C59BC9D030()) == Local_579[iVar0 /*8*/])
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_173()
{
	int iVar0;
	
	if ((unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1) && !unk_0x57ADE64D2E3798F0(unk_0x27D769C59BC9D030())) && !unk_0x0F74EBD810C90005(unk_0x27D769C59BC9D030()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0xD2CFFE76B625AE55(Local_579[iVar0 /*8*/]) && unk_0x0B4DDB992C7BCF57(Local_579[iVar0 /*8*/], 0))
			{
				if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Local_579[iVar0 /*8*/], 1))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_174()
{
	int iVar0;
	
	if (unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 0))
	{
		iVar0 = unk_0xD9FFE8E1642C81E2(unk_0x27D769C59BC9D030(), 0);
		if (unk_0x0B4DDB992C7BCF57(iVar0, 0) && (unk_0x946C63BD9EF05437(iVar0) == joaat("towtruck") || unk_0x946C63BD9EF05437(iVar0) == joaat("towtruck2")))
		{
			return 1;
		}
	}
	return 0;
}

void func_175()
{
	int iVar0;
	
	if (unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
	{
		func_270(6);
	}
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		if (unk_0xD2CFFE76B625AE55(Local_28[iVar0 /*110*/]))
		{
			if (Local_28[iVar0 /*110*/].f_93)
			{
				if (Local_28[iVar0 /*110*/].f_102)
				{
					func_176(Local_28[iVar0 /*110*/], &(Local_28[iVar0 /*110*/].f_94), 3, 0, 0, 0, -1082130432, 0, -1);
				}
				else
				{
					func_176(Local_28[iVar0 /*110*/], &(Local_28[iVar0 /*110*/].f_94), 2, 0, 0, 0, -1082130432, 0, -1);
				}
			}
			if (!func_169(Local_28[iVar0 /*110*/]))
			{
				if (Local_28[iVar0 /*110*/].f_103 == -1)
				{
					Local_28[iVar0 /*110*/].f_103 = unk_0xA0F74982C6AAA9D4();
				}
				else if ((unk_0xA0F74982C6AAA9D4() - Local_28[iVar0 /*110*/].f_103) >= 5000)
				{
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_579.f_0)
	{
		if (unk_0xD2CFFE76B625AE55(Local_579[iVar0 /*8*/]) && Local_579[iVar0 /*8*/].f_7)
		{
			if (!func_169(Local_579[iVar0 /*8*/]))
			{
				if (unk_0x7B4654D62B7E0E9E(Local_579[iVar0 /*8*/].f_1))
				{
					unk_0x9403D0F4C7711241(&(Local_579[iVar0 /*8*/].f_1));
				}
				unk_0x9846B4D56971A958(&(Local_579[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
}

int func_176(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, int iParam7, int iParam8)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xB927AFB90873B8C1();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0xE4F7206742848BAF(iParam0))
	{
		if (!unk_0x8C79FE8E7B1D3719(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x22440CC73AA415DC(iParam0, 1);
			}
			else
			{
				unk_0xF3C9F1B96F53319A(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x695053617BEDFE08(iParam0, iParam2);
			unk_0xD8FCDA89F7F7CD3E(iParam0, fParam6);
			if (unk_0x7B4654D62B7E0E9E(*uParam1))
			{
				unk_0x1FDCAFA848ABB8FA(*uParam1, 7);
			}
		}
		unk_0x69044FC34D5EE0DA(iParam0, iParam4);
		unk_0x62C27D69B2FBBE91(iParam0, iParam5);
		*uParam1 = unk_0xD42109C080DF92B6(iParam0);
		if (!unk_0xF426A5DE932B3BEE(uParam1->f_6, 2))
		{
			if (unk_0x7B4654D62B7E0E9E(*uParam1))
			{
				if (!unk_0x75CB9E30BA492FF0(iParam7))
				{
					unk_0x10D2832C26BEFBED("MCUSTBLIP");
					unk_0xF9E9E11D6DF3EBF8(iParam7);
					unk_0x85E82A3531BB69F1(*uParam1);
				}
				unk_0x26545538B51562AD(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x9A4E2270C2271219(iParam0, 0))
		{
			uParam1->f_1 = unk_0xD856C59050C14C28(iParam0);
			if (!unk_0xF426A5DE932B3BEE(uParam1->f_6, 3))
			{
				if (unk_0x7B4654D62B7E0E9E(uParam1->f_1))
				{
					unk_0x1FDCAFA848ABB8FA(uParam1->f_1, 7);
					unk_0x26545538B51562AD(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0x7B4654D62B7E0E9E(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xF17F4B0641AB2DE1(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_177()
{
	struct<3> Var0;
	var uVar3;
	
	if (bLocal_654 == 1)
	{
		if (!unk_0x3934E959DB2478D3())
		{
			if (!unk_0xA07829C3F763B9B6())
			{
				unk_0x4E63F662FDE672C3(1000);
			}
		}
		else
		{
			if (unk_0xB1FDEE75A71D93F5())
			{
				unk_0x6D84AAC1F334DEE9(0);
				unk_0x18159512D699D089();
			}
			func_24(iLocal_655);
			unk_0x04E786541E35ECB1(0, 0, 3000, 1, 0, 0);
			unk_0x8ACEB4FC9E9EE225();
			unk_0x5BD150B52CE8D356(1);
			func_8(1);
			if (!func_216())
			{
				func_215(iLocal_651, &Var0, &uVar3);
				unk_0x4EEE9D9427E70F4E(unk_0x27D769C59BC9D030(), Var0, 1, 0, 0, 1);
				unk_0xFBDCF3D5834B58D8(unk_0x27D769C59BC9D030(), uVar3);
				unk_0xA8CA82EB31D1626F(unk_0x27D769C59BC9D030(), 1);
				func_213(&uLocal_658, Var0, 50f, 0);
			}
			func_212(&uLocal_658);
			switch (iLocal_651)
			{
				case 0:
					func_161(&uLocal_658, joaat("burrito2"));
					func_161(&uLocal_658, joaat("s_m_y_pestcont_01"));
					func_161(&uLocal_658, joaat("s_m_m_security_01"));
					func_161(&uLocal_658, joaat("dilettante2"));
					func_161(&uLocal_658, joaat("p_amb_clipboard_01"));
					func_211(&uLocal_658, &cLocal_645);
					func_210(&uLocal_658, "misslsdhsclipboard@base");
					func_210(&uLocal_658, "misslsdhsclipboard@idle_a");
					func_210(&uLocal_658, "misstrevor3");
					func_209(&uLocal_658, iLocal_2522);
					if (((func_208() && !unk_0xD3AE48D8EB7DCBE6(func_207())) && !unk_0xEC6E5897335290DD(func_207())) && !unk_0xDBFA5C79D9B3D622(func_207()))
					{
						func_161(&uLocal_658, func_207());
					}
					break;
				
				case 1:
					func_161(&uLocal_658, joaat("burrito2"));
					break;
			}
			while (!func_206(&uLocal_658))
			{
				unk_0x4EDE34FBADD967A6(0);
				func_175();
			}
			switch (iLocal_651)
			{
				case 0:
					if (((func_208() && !unk_0xD3AE48D8EB7DCBE6(func_207())) && !unk_0xEC6E5897335290DD(func_207())) && !unk_0xDBFA5C79D9B3D622(func_207()))
					{
						while (!func_205())
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						Local_579[4 /*8*/] = func_184(189.3979f, -2932.721f, 5.6127f, 180.5455f);
					}
					if (func_216())
					{
						if (unk_0xD2CFFE76B625AE55(Local_579[4 /*8*/]))
						{
							func_181(Local_579[4 /*8*/], -1, 1);
						}
						else
						{
							func_181(0, -1, 1);
						}
					}
					else
					{
						unk_0xA8CA82EB31D1626F(unk_0x27D769C59BC9D030(), 0);
						if (unk_0xD2CFFE76B625AE55(Local_579[4 /*8*/]))
						{
							unk_0xBD875C7680C64C56(unk_0x27D769C59BC9D030(), Local_579[4 /*8*/], -1);
						}
					}
					while (!func_178(0))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					unk_0x0B28AEB595CB09AF(0f);
					unk_0x4523FDDB9926E1D8(0f, 1065353216);
					break;
				
				case 1:
					if (!func_7(88))
					{
						Local_579[0 /*8*/] = unk_0x4E76306EE6AE7596(joaat("burrito2"), 693.725f, -1006.302f, 21.8355f, 359.884f, 1, 1);
						unk_0xAF18A34434FDEA9C(Local_579[0 /*8*/], 0);
						unk_0xFA3ED0FFF3FD8F34(Local_579[0 /*8*/]);
					}
					if (func_216())
					{
						func_181(0, -1, 1);
					}
					else
					{
						unk_0xA8CA82EB31D1626F(unk_0x27D769C59BC9D030(), 0);
					}
					unk_0x4EEE9D9427E70F4E(unk_0x27D769C59BC9D030(), 692.067f, -1004.812f, 21.9059f, 1, 0, 0, 1);
					unk_0xFBDCF3D5834B58D8(unk_0x27D769C59BC9D030(), 359.5735f);
					unk_0x0B28AEB595CB09AF(0f);
					unk_0x4523FDDB9926E1D8(0f, 1065353216);
					break;
			}
			if (unk_0x3934E959DB2478D3() || !unk_0xF1384D7CDC020749())
			{
				if (!func_7(88) || iLocal_651 != 1)
				{
					unk_0x4AD174B0D4656163(800);
				}
			}
			bLocal_654 = false;
		}
	}
}

int func_178(bool bParam0)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	
	bVar0 = false;
	iVar1 = 1;
	if (bParam0)
	{
		if (unk_0xD2CFFE76B625AE55(Global_88108[0]))
		{
			Local_579[0 /*8*/] = Global_88108[0];
			unk_0xAF3355298F537BB0(Local_579[0 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xD2CFFE76B625AE55(Global_88108[1]))
		{
			Local_579[1 /*8*/] = Global_88108[1];
			unk_0xAF3355298F537BB0(Local_579[1 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xD2CFFE76B625AE55(Global_88108[2]))
		{
			Local_579[2 /*8*/] = Global_88108[2];
			unk_0xAF3355298F537BB0(Local_579[2 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xD2CFFE76B625AE55(Global_88108.f_9[0]))
		{
			Local_28[1 /*110*/] = Global_88108.f_9[0];
			if (!unk_0xE4F7206742848BAF(Local_28[1 /*110*/]))
			{
				unk_0xD6FF698E7BC1C003(Local_28[1 /*110*/], 0);
			}
			unk_0xAF3355298F537BB0(Local_28[1 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xD2CFFE76B625AE55(Global_88108.f_28[0]))
		{
			Local_28[1 /*110*/].f_105 = Global_88108.f_28[0];
			unk_0xAF3355298F537BB0(Local_28[1 /*110*/].f_105, 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xD2CFFE76B625AE55(Global_88108.f_9[2]))
		{
			Local_28[0 /*110*/] = Global_88108.f_9[2];
			if (!unk_0xE4F7206742848BAF(Local_28[0 /*110*/]))
			{
				unk_0xD6FF698E7BC1C003(Local_28[0 /*110*/], 0);
			}
			unk_0xAF3355298F537BB0(Local_28[0 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xD2CFFE76B625AE55(Global_88108.f_9[3]))
		{
			Local_28[2 /*110*/] = Global_88108.f_9[3];
			if (!unk_0xE4F7206742848BAF(Local_28[3 /*110*/]))
			{
				unk_0xD6FF698E7BC1C003(Local_28[2 /*110*/], 0);
			}
			unk_0xAF3355298F537BB0(Local_28[2 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xD2CFFE76B625AE55(Global_88108.f_9[4]))
		{
			Local_28[3 /*110*/] = Global_88108.f_9[4];
			if (!unk_0xE4F7206742848BAF(Local_28[3 /*110*/]))
			{
				unk_0xD6FF698E7BC1C003(Local_28[3 /*110*/], 0);
			}
			unk_0xAF3355298F537BB0(Local_28[3 /*110*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xD2CFFE76B625AE55(Global_88108.f_9[5]))
		{
			Local_469.f_0 = Global_88108.f_9[5];
			if (!unk_0xE4F7206742848BAF(Local_469.f_0))
			{
				unk_0xD6FF698E7BC1C003(Local_469.f_0, 0);
			}
			unk_0xAF3355298F537BB0(Local_469.f_0, 1, 1);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0xD2CFFE76B625AE55(Global_88108[3]))
		{
			Local_579[3 /*8*/] = Global_88108[3];
			unk_0xAF3355298F537BB0(Local_579[3 /*8*/], 1, 1);
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		if (!unk_0xD2CFFE76B625AE55(Local_579[0 /*8*/]))
		{
			Local_579[0 /*8*/] = unk_0x4E76306EE6AE7596(joaat("burrito2"), 148.7243f, -3104.619f, 4.8962f, 179.6158f, 1, 1);
		}
		if (!unk_0xD2CFFE76B625AE55(Local_579[1 /*8*/]))
		{
			Local_579[1 /*8*/] = unk_0x4E76306EE6AE7596(joaat("burrito2"), 145.9856f, -3080f, 4.8962f, 269.0827f, 1, 1);
		}
		if (!unk_0xD2CFFE76B625AE55(Local_579[2 /*8*/]))
		{
			Local_579[2 /*8*/] = unk_0x4E76306EE6AE7596(joaat("burrito2"), 129.9696f, -3089.331f, 4.8796f, 269.9255f, 1, 1);
		}
		if (!unk_0xD2CFFE76B625AE55(Local_28[1 /*110*/]))
		{
			Local_28[1 /*110*/] = unk_0x91D233CD0204A37F(26, joaat("s_m_y_pestcont_01"), 126.2174f, -3089.383f, 4.9199f, 275.4068f, 1, 1);
			unk_0x51F79AC13D2AD286(Local_28[1 /*110*/], 150);
			unk_0x5D927D8655264D6C(Local_28[1 /*110*/], 8, 1, 0, 0);
			unk_0x5D927D8655264D6C(Local_28[1 /*110*/], 0, 0, 2, 0);
			unk_0x5D927D8655264D6C(Local_28[1 /*110*/], 3, 0, 1, 0);
			unk_0x5D927D8655264D6C(Local_28[1 /*110*/], 4, 0, 1, 0);
			unk_0x5D927D8655264D6C(Local_28[1 /*110*/], 8, 0, 0, 0);
			unk_0x5D927D8655264D6C(Local_28[1 /*110*/], 10, 1, 0, 0);
			unk_0x2F228A16D7B61C5F(Local_28[1 /*110*/], 0, 1, 0, 0);
			unk_0x2F228A16D7B61C5F(Local_28[1 /*110*/], 1, 0, 0, 0);
			unk_0x07E227C9815AD64F(Local_28[1 /*110*/], 2f);
		}
		if (!unk_0xD2CFFE76B625AE55(Local_28[1 /*110*/].f_105))
		{
			Local_28[1 /*110*/].f_105 = unk_0xA8C993B9F5CB4D92(joaat("p_amb_clipboard_01"), unk_0x52AB056B2AF7BB53(Local_28[1 /*110*/], 60309, 0f, 0f, 0f), 1, 1, 0);
			unk_0x356675505D724E40(Local_28[1 /*110*/].f_105, Local_28[1 /*110*/], unk_0x5C9720EC37666AF2(Local_28[1 /*110*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1);
		}
		if (!unk_0xD2CFFE76B625AE55(Local_28[0 /*110*/]))
		{
			Local_28[0 /*110*/] = unk_0x91D233CD0204A37F(26, joaat("s_m_y_pestcont_01"), 155.74f, -3098.89f, 5.93f, 0f, 1, 1);
			unk_0x5D927D8655264D6C(Local_28[0 /*110*/], 0, 0, 0, 0);
			unk_0x5D927D8655264D6C(Local_28[0 /*110*/], 3, 0, 0, 0);
			unk_0x5D927D8655264D6C(Local_28[0 /*110*/], 4, 0, 0, 0);
			unk_0x5D927D8655264D6C(Local_28[0 /*110*/], 8, 1, 0, 0);
			unk_0x5D927D8655264D6C(Local_28[0 /*110*/], 10, 0, 0, 0);
			unk_0x2F228A16D7B61C5F(Local_28[0 /*110*/], 0, 0, 0, 0);
			unk_0x07E227C9815AD64F(Local_28[0 /*110*/], 2f);
		}
		if (!unk_0xD2CFFE76B625AE55(Local_28[2 /*110*/]))
		{
			Local_28[2 /*110*/] = unk_0x91D233CD0204A37F(26, joaat("s_m_y_pestcont_01"), 159.8f, -3085.96f, 6f, 0f, 1, 1);
			unk_0x5D927D8655264D6C(Local_28[2 /*110*/], 0, 0, 1, 0);
			unk_0x5D927D8655264D6C(Local_28[2 /*110*/], 3, 0, 2, 0);
			unk_0x5D927D8655264D6C(Local_28[2 /*110*/], 4, 0, 2, 0);
			unk_0x5D927D8655264D6C(Local_28[2 /*110*/], 8, 1, 0, 0);
			unk_0x5D927D8655264D6C(Local_28[2 /*110*/], 10, 1, 0, 0);
			unk_0x2F228A16D7B61C5F(Local_28[2 /*110*/], 1, 0, 0, 0);
			unk_0x07E227C9815AD64F(Local_28[2 /*110*/], 2f);
		}
		if (!unk_0xD2CFFE76B625AE55(Local_28[3 /*110*/]))
		{
			Local_28[3 /*110*/] = unk_0x91D233CD0204A37F(26, joaat("s_m_y_pestcont_01"), 159.06f, -3085f, 6.01f, 0f, 1, 1);
			unk_0x5D927D8655264D6C(Local_28[3 /*110*/], 0, 1, 1, 0);
			unk_0x5D927D8655264D6C(Local_28[3 /*110*/], 3, 0, 3, 0);
			unk_0x5D927D8655264D6C(Local_28[3 /*110*/], 4, 0, 3, 0);
			unk_0x5D927D8655264D6C(Local_28[3 /*110*/], 8, 1, 0, 0);
			unk_0x5D927D8655264D6C(Local_28[3 /*110*/], 10, 0, 0, 0);
			unk_0x2F228A16D7B61C5F(Local_28[3 /*110*/], 0, 0, 0, 0);
			unk_0x07E227C9815AD64F(Local_28[3 /*110*/], 2f);
		}
		if (!unk_0xD2CFFE76B625AE55(Local_469.f_0) && !unk_0xD2CFFE76B625AE55(Local_579[3 /*8*/]))
		{
			if (unk_0xEFEADD7EBD01C0A6() >= 5 && unk_0xEFEADD7EBD01C0A6() < 21)
			{
				Local_579[3 /*8*/] = unk_0x4E76306EE6AE7596(joaat("dilettante2"), 144.84f, -2982.75f, 5.32f, 266.5972f, 1, 1);
				Local_469.f_0 = unk_0x9961770283FB23FE(Local_579[3 /*8*/], 26, joaat("s_m_m_security_01"), -1, 1, 1);
			}
			else
			{
				Local_579[3 /*8*/] = unk_0x4E76306EE6AE7596(joaat("dilettante2"), 169.3554f, -3110.025f, 4.8228f, 88.4411f, 1, 1);
				Local_469.f_0 = unk_0x91D233CD0204A37F(26, joaat("s_m_m_security_01"), 161.7414f, -3117.074f, 4.9643f, 333.7041f, 1, 1);
			}
		}
	}
	if (unk_0xD2CFFE76B625AE55(Local_579[0 /*8*/]))
	{
		func_180(Local_579[0 /*8*/], 0);
		unk_0x37B592C0F74990D2(Local_579[0 /*8*/], 7);
		unk_0xFF67B6EC799C2F15(Local_579[0 /*8*/], 1);
		unk_0x1B7FCBF5F0A9F480(Local_579[0 /*8*/], 1);
		Local_579[0 /*8*/].f_7 = 0;
	}
	if (unk_0xD2CFFE76B625AE55(Local_579[1 /*8*/]))
	{
		func_180(Local_579[1 /*8*/], 1);
		unk_0x8BE1AEC303A057F7(Local_579[1 /*8*/], 1, 1, 0);
		unk_0x28F46AE29FA4808C(Local_579[1 /*8*/], 4, 0);
		unk_0x166C39D9F6B273E0(Local_579[1 /*8*/], 0, 1, 0);
		unk_0x166C39D9F6B273E0(Local_579[1 /*8*/], 4, 0, 1);
		unk_0x1B7FCBF5F0A9F480(Local_579[1 /*8*/], 1);
		Local_579[1 /*8*/].f_7 = 0;
	}
	if (unk_0xD2CFFE76B625AE55(Local_579[2 /*8*/]))
	{
		func_180(Local_579[2 /*8*/], 2);
		unk_0x166C39D9F6B273E0(Local_579[2 /*8*/], 2, 1, 0);
		unk_0x166C39D9F6B273E0(Local_579[2 /*8*/], 3, 1, 0);
		unk_0x1B7FCBF5F0A9F480(Local_579[2 /*8*/], 1);
		Local_579[2 /*8*/].f_7 = 0;
	}
	if (unk_0xD2CFFE76B625AE55(Local_28[1 /*110*/]))
	{
		unk_0x87BC6B9F690D1A6A(Local_28[1 /*110*/], &(Local_28[1 /*110*/].f_1));
		unk_0xA8ED9F72DC442242(Local_28[1 /*110*/], 1);
		unk_0x71065DDFF8D7744C(Local_28[1 /*110*/], iLocal_2520);
		unk_0x63070E40C11F5D99(Local_28[1 /*110*/], 1);
		func_168(Local_28[1 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0xE3972E860E6962F9(Local_28[1 /*110*/], 50f);
		StringCopy(&(Local_28[1 /*110*/].f_1), "foreman2(rear)", 16);
		Local_28[1 /*110*/].f_42 = 20f;
		Local_28[1 /*110*/].f_86 = 1;
		Local_28[1 /*110*/].f_87 = 1;
		Local_28[1 /*110*/].f_107 = joaat("p_amb_clipboard_01");
		Local_28[1 /*110*/].f_106 = 60309;
		Local_28[1 /*110*/].f_108 = 0;
	}
	if (unk_0xD2CFFE76B625AE55(Local_28[0 /*110*/]))
	{
		unk_0x87BC6B9F690D1A6A(Local_28[0 /*110*/], &(Local_28[0 /*110*/].f_1));
		unk_0xA8ED9F72DC442242(Local_28[0 /*110*/], 1);
		unk_0x71065DDFF8D7744C(Local_28[0 /*110*/], iLocal_2520);
		unk_0x63070E40C11F5D99(Local_28[0 /*110*/], 1);
		func_168(Local_28[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		unk_0xE3972E860E6962F9(Local_28[0 /*110*/], 50f);
		StringCopy(&(Local_28[0 /*110*/].f_1), "foreman1(front)", 16);
		Local_28[0 /*110*/].f_86 = 1;
		Local_28[0 /*110*/].f_87 = 1;
		Local_28[0 /*110*/].f_42 = 17.5f;
	}
	if (unk_0xD2CFFE76B625AE55(Local_28[2 /*110*/]))
	{
		unk_0x87BC6B9F690D1A6A(Local_28[2 /*110*/], &(Local_28[2 /*110*/].f_1));
		unk_0xA8ED9F72DC442242(Local_28[2 /*110*/], 1);
		unk_0x71065DDFF8D7744C(Local_28[2 /*110*/], iLocal_2520);
		func_168(Local_28[2 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0x63070E40C11F5D99(Local_28[2 /*110*/], 1);
		unk_0xE3972E860E6962F9(Local_28[2 /*110*/], 50f);
		StringCopy(&(Local_28[2 /*110*/].f_1), "front 1", 16);
		Local_28[2 /*110*/].f_86 = 0;
		Local_28[2 /*110*/].f_87 = 0;
		Local_28[2 /*110*/].f_42 = 17.5f;
	}
	if (unk_0xD2CFFE76B625AE55(Local_28[3 /*110*/]))
	{
		unk_0x87BC6B9F690D1A6A(Local_28[3 /*110*/], &(Local_28[3 /*110*/].f_1));
		unk_0xA8ED9F72DC442242(Local_28[3 /*110*/], 1);
		unk_0x71065DDFF8D7744C(Local_28[3 /*110*/], iLocal_2520);
		unk_0xE3972E860E6962F9(Local_28[3 /*110*/], 50f);
		func_168(Local_28[3 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0x63070E40C11F5D99(Local_28[3 /*110*/], 1);
		StringCopy(&(Local_28[3 /*110*/].f_1), "front 2", 16);
		Local_28[3 /*110*/].f_86 = 0;
		Local_28[3 /*110*/].f_87 = 0;
		Local_28[3 /*110*/].f_42 = 17.5f;
	}
	if (unk_0xD2CFFE76B625AE55(Local_469.f_0) && unk_0xD2CFFE76B625AE55(Local_579[3 /*8*/]))
	{
		unk_0x87BC6B9F690D1A6A(Local_469.f_0, &(Local_469.f_1));
		unk_0xA8ED9F72DC442242(Local_469.f_0, 1);
		unk_0x71065DDFF8D7744C(Local_469.f_0, iLocal_2520);
		unk_0xB8A4FDD35107E443(Local_469.f_0, 2);
		unk_0x7ED3655E5924C6F4(Local_469.f_0, 2, 0);
		unk_0xAC9A80BE63D6295F(Local_469.f_0, joaat("weapon_nightstick"), -1, 0, 1);
		unk_0xDAF499362B4CEDC5(Local_469.f_0, 5);
		func_168(Local_469.f_0, 40f, 5f, 90f, -90f, 90f);
		StringCopy(&(Local_469.f_1), "sec", 16);
		Local_469.f_86 = 1;
		Local_469.f_87 = 1;
		Local_469.f_93 = 0;
		if (Global_88108.f_357 == 1)
		{
			if (!func_179(Local_469.f_0, 242628503, 1))
			{
				if (unk_0x1262CC69BD01BD7C(203.68f, -3132.46f, 4.79f, "WORLD_HUMAN_SMOKING", 1f, 1))
				{
					iLocal_2572 = 0;
					unk_0x33A0CEA494F4C2A3(&uVar2);
					unk_0x347457A360E454FB(0, Local_579[3 /*8*/], &cLocal_645, 786599, 0, 0, -1, -1082130432, 0, 1073741824);
					unk_0x8BD12B4D2B1648B7(0, Local_579[3 /*8*/], 0);
					unk_0x603D1721FED38663(0, 203.68f, -3132.46f, 4.79f, 1f, 0);
					unk_0x33F83FC0F5F458E3(uVar2);
					unk_0x8B8674266D533E9F(Local_469.f_0, uVar2);
					unk_0x433C209504FBC7EE(&uVar2);
				}
				else
				{
					iVar1 = 0;
				}
			}
		}
		else if (!func_179(Local_469.f_0, -1680762137, 1))
		{
			if (unk_0x1262CC69BD01BD7C(162.69f, -3115.67f, 4.95f, "WORLD_HUMAN_SECURITY_SHINE_TORCH", 1f, 1))
			{
				iLocal_2572 = 1;
				unk_0x1C9D2135563CF053(Local_469.f_0, 162.69f, -3115.67f, 4.95f, 1f, 0);
			}
			else
			{
				iVar1 = 0;
			}
		}
	}
	if (((((((((unk_0xD2CFFE76B625AE55(Local_579[0 /*8*/]) && unk_0xD2CFFE76B625AE55(Local_579[1 /*8*/])) && unk_0xD2CFFE76B625AE55(Local_579[2 /*8*/])) && unk_0xD2CFFE76B625AE55(Local_579[3 /*8*/])) && unk_0xD2CFFE76B625AE55(Local_28[1 /*110*/])) && unk_0xD2CFFE76B625AE55(Local_28[0 /*110*/])) && unk_0xD2CFFE76B625AE55(Local_28[2 /*110*/])) && unk_0xD2CFFE76B625AE55(Local_28[3 /*110*/])) && unk_0xD2CFFE76B625AE55(Local_469.f_0)) && iVar1)
	{
		return 1;
	}
	else if (bVar0)
	{
		return 0;
	}
	return 0;
}

int func_179(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x810AFFABCBF31E2D(uParam0, iParam1);
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

void func_180(var uParam0, int iParam1)
{
	Global_91278.f_22[iParam1] = uParam0;
}

void func_181(int iParam0, int iParam1, int iParam2)
{
	if (func_183() && func_216())
	{
		while (Global_91273 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x42B9806B3EED4C70(0);
		if (unk_0xD2CFFE76B625AE55(unk_0x27D769C59BC9D030()))
		{
			if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
			{
				unk_0x029678E81E95BAF2(unk_0x27D769C59BC9D030());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
			{
				if (unk_0xD2CFFE76B625AE55(iParam0))
				{
					if (unk_0x0B4DDB992C7BCF57(iParam0, 0))
					{
						if (!unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), iParam0, 0))
						{
							unk_0xBD875C7680C64C56(unk_0x27D769C59BC9D030(), iParam0, iParam1);
							unk_0x4523FDDB9926E1D8(0f, 1065353216);
							unk_0x0B28AEB595CB09AF(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
			{
				unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 1, 0);
			}
		}
		unk_0xEAFB18BDF651DD1C();
		func_182(0);
	}
}

void func_182(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x26545538B51562AD(&(Global_91278.f_20), 13);
	}
	else
	{
		unk_0xF17F4B0641AB2DE1(&(Global_91278.f_20), 13);
	}
}

int func_183()
{
	if (Global_91278 == 10 || Global_91278 == 9)
	{
		return 1;
	}
	return 0;
}

int func_184(struct<3> Param0, float fParam3)
{
	return func_185(&(Global_95496.f_2311), Param0, fParam3, 0);
}

int func_185(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_204(uParam0))
	{
		if (func_146(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0xCC0EABB8FAB8D0DE(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_203(uParam0))
		{
			unk_0xEFA71310CAEBAE1F(Param1, 5f, 1, 0, 0, 0);
			func_202(Param1, 5f, 0);
			iVar0 = unk_0x4E76306EE6AE7596(uParam0->f_12.f_66, Param1, fParam4, 1, 1);
			if (unk_0xD2CFFE76B625AE55(iVar0))
			{
				Var1 = { unk_0xA8CFDE65C45F813B(iVar0, 1) };
				if (unk_0xB7A628320EFF8E47(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0x018805F05877E2E2(iVar0, Param1, 0, 0, 1);
				}
				func_194(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0xD3AE48D8EB7DCBE6(uParam0->f_12.f_66) || unk_0x7942D30C2A703CD1(uParam0->f_12.f_66))
				{
					if (!unk_0x0A211711F686379E(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0xFA3ED0FFF3FD8F34(iVar0);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0xA8059F869DFB2747(unk_0x946C63BD9EF05437(iVar0)))
						{
							func_193(uParam0->f_11, 1);
						}
						else if (unk_0x6CCC9ABA9456E815(unk_0x946C63BD9EF05437(iVar0)))
						{
							func_193(uParam0->f_11, 2);
						}
					}
					unk_0x8B93994E73DF8345(iVar0, 0);
					unk_0xC2677E1BE02B1E79(iVar0, 0);
					unk_0x1B7FCBF5F0A9F480(iVar0, 1);
					func_192(iVar0, uParam0->f_11);
				}
				else if ((!func_190(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0xC1C5B83BB6719C6C(unk_0x3AA961419D971CB2(), "startup_positioning"))
				{
					iVar8 = func_189(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_186(iVar8);
					}
				}
				if (((Global_91278 != 13 && Global_91278 != 10) && Global_91278 != 11) && Global_91278 != 12)
				{
					if (unk_0x70ABFF261710305D(&(Global_91278.f_3)) == Global_69307)
					{
						if (uParam0->f_12.f_66 == Global_101154.f_18807.f_69[21 /*78*/].f_66)
						{
							func_140(24, 0);
							func_186(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_108(iVar0, uParam0->f_11);
				}
				unk_0x0049DE0B34213B12(uParam0->f_12.f_66);
				Var1 = { unk_0xA8CFDE65C45F813B(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_186(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_135(&(Global_68319.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xD2CFFE76B625AE55(Global_68319.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0xE4F7206742848BAF(unk_0x27D769C59BC9D030()))
			{
				if (unk_0x0B4DDB992C7BCF57(Global_68319.f_139[iParam0], 0))
				{
					if (unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Global_68319.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xAF3355298F537BB0(Global_68319.f_139[iParam0], 1, 1);
				unk_0xF6E128C391C16F7C(&(Global_68319.f_139[iParam0]));
			}
		}
		Global_68319[iParam0] = 1;
		if (unk_0xF426A5DE932B3BEE(Global_68319.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_142(iParam0, 0)) && Global_69228.f_66 == 0) && Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] != 0) && Global_101154.f_18807.f_1958[Global_68319.f_555[0 /*21*/].f_14] > 3) && (!func_187(0, Global_68319.f_555[0 /*21*/].f_12) || !func_187(1, Global_68319.f_555[0 /*21*/].f_12)))
			{
				func_143(&(Global_101154.f_18807.f_69[Global_68319.f_555[0 /*21*/].f_14 /*78*/]), &Global_69228);
				Global_69306 = Global_101154.f_18807.f_5591;
			}
			func_140(iParam0, 0);
		}
	}
}

int func_187(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_188(&(Global_101154.f_18807.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_111(Global_101154.f_18807.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_188(var uParam0)
{
	return *uParam0;
}

int func_189(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0xD2CFFE76B625AE55(Global_68319.f_484[iVar0]) && !unk_0x2006A8C1BA2AFE80(Global_68319.f_484[iVar0], 0)) && unk_0x0B4DDB992C7BCF57(Global_68319.f_484[iVar0], 0))
		{
			unk_0x923073D63782E037(iParam0, &iVar1, &iVar2);
			unk_0x923073D63782E037(Global_68319.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x946C63BD9EF05437(iParam0) == unk_0x946C63BD9EF05437(Global_68319.f_484[iVar0]) && unk_0xC3362AC1471926AA(iParam0) == unk_0xC3362AC1471926AA(Global_68319.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_190(int iParam0, struct<3> Param1, bool bParam4)
{
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;
	
	iVar0 = unk_0x946C63BD9EF05437(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_191(iParam0, Global_68319.f_139[38], 0))
			{
				func_186(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_191(iParam0, Global_68319.f_139[43], 1))
			{
				func_186(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0xE3D50125FB4DA7C7(unk_0x27D769C59BC9D030(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_191(iParam0, uVar1[iVar6], 1) && func_59(unk_0xA8CFDE65C45F813B(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam4 || func_146(Param1, 0f, 0f, 0f, 0)) || unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(iParam0, 1), unk_0xA8CFDE65C45F813B(uVar1[iVar6], 1), 1) < 10f)
					{
						unk_0xF6E128C391C16F7C(&iParam0);
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
			if ((unk_0xD2CFFE76B625AE55(Global_68319.f_484[14]) && unk_0x0B4DDB992C7BCF57(iParam0, 0)) && unk_0x0B4DDB992C7BCF57(Global_68319.f_484[14], 0))
			{
				if (unk_0x946C63BD9EF05437(Global_68319.f_484[14]) == joaat("luxor2") && unk_0xC3362AC1471926AA(iParam0) == unk_0xC3362AC1471926AA(Global_68319.f_484[14]))
				{
					func_186(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0xD2CFFE76B625AE55(Global_68319.f_484[20]) && unk_0x0B4DDB992C7BCF57(iParam0, 0)) && unk_0x0B4DDB992C7BCF57(Global_68319.f_484[20], 0))
			{
				if (unk_0x946C63BD9EF05437(Global_68319.f_484[20]) == joaat("swift2") && unk_0xC3362AC1471926AA(iParam0) == unk_0xC3362AC1471926AA(Global_68319.f_484[20]))
				{
					func_186(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_191(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0xD2CFFE76B625AE55(iParam1) && !unk_0x2006A8C1BA2AFE80(iParam1, 0)) && unk_0x0B4DDB992C7BCF57(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0x923073D63782E037(iParam0, &iVar0, &iVar1);
			unk_0x923073D63782E037(iParam1, &iVar2, &iVar3);
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

void func_192(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xD2CFFE76B625AE55(Global_88942[iVar0]))
		{
			Global_88942[iVar0] = iParam0;
			Global_88952[iVar0] = iParam1;
			Global_88962[iVar0] = unk_0x946C63BD9EF05437(iParam0);
			if (unk_0xA8059F869DFB2747(Global_88962[iVar0]))
			{
				Global_88990[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_88990[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_193(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xD2CFFE76B625AE55(Global_88942[iVar0]))
		{
			if (iParam0 == 145 || Global_88952[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x946C63BD9EF05437(Global_88942[iVar0]) == func_136(iParam0, iParam1))
				{
					if (!unk_0x1C48F76B3D032074(unk_0x27D769C59BC9D030(), Global_88942[iVar0], 0))
					{
						unk_0xAF3355298F537BB0(Global_88942[iVar0], 0, 1);
						unk_0xF6E128C391C16F7C(&(Global_88942[iVar0]));
						Global_88952[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_194(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		if (unk_0x70ABFF261710305D(&(uParam1->f_1)) != 0)
		{
			unk_0x363CB1E011E73B79(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0xDDE375984608ED63())
		{
			unk_0x97344EBF9AD0F17F(iParam0, *uParam1);
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
			if (unk_0xF426A5DE932B3BEE(uParam1->f_77, func_148(iVar0 + 1)))
			{
			}
			else
			{
				unk_0x26545538B51562AD(&(uParam1->f_77), func_148(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xF426A5DE932B3BEE(uParam1->f_77, func_148(iVar1 + 1)))
			{
			}
			else
			{
				unk_0x26545538B51562AD(&(uParam1->f_77), func_148(iVar1 + 1));
			}
		}
		if (unk_0xF426A5DE932B3BEE(uParam1->f_77, 13))
		{
			unk_0x5F3BFD21D9B2F155(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x260FAF7AD1C9058F(iParam0);
		}
		if (unk_0xF426A5DE932B3BEE(uParam1->f_77, 12))
		{
			unk_0x43EB68B30C2D12B2(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x60C7627F18E7E3B5(iParam0);
		}
		unk_0xFD2475756036347D(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x85E88CC5C37A1A11(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xF426A5DE932B3BEE(uParam1->f_77, 15) || func_201(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_200())
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
		unk_0x7D42D99B3885D48F(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger"))
		{
			unk_0x15C84F66C4F9715B(iParam0, 0);
		}
		else
		{
			unk_0x15C84F66C4F9715B(iParam0, 0);
			unk_0x15C84F66C4F9715B(iParam0, uParam1->f_65);
		}
		unk_0x5140F895BFA54316(iParam0, !unk_0xF426A5DE932B3BEE(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0x37B592C0F74990D2(iParam0, uParam1->f_70);
		}
		unk_0x7D1AE670C52C839A(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0x1FD802F9308DD553(iParam0, 2, unk_0xF426A5DE932B3BEE(uParam1->f_77, 28));
		unk_0x1FD802F9308DD553(iParam0, 3, unk_0xF426A5DE932B3BEE(uParam1->f_77, 29));
		unk_0x1FD802F9308DD553(iParam0, 0, unk_0xF426A5DE932B3BEE(uParam1->f_77, 30));
		unk_0x1FD802F9308DD553(iParam0, 1, unk_0xF426A5DE932B3BEE(uParam1->f_77, 31));
		unk_0x11E91887F8A313B1(iParam0, unk_0xF426A5DE932B3BEE(uParam1->f_77, 10));
		if (unk_0xC14CF45D822A1BEF(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0x22302C6C9DC94642(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x9D4118D82F876A81(unk_0x946C63BD9EF05437(iParam0)))
			{
				if (unk_0x6CCC9ABA9456E815(unk_0x946C63BD9EF05437(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_199(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_199(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0x1BCE164A254176FA(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x72D8EEFEABAD4CC9(iParam0, 1);
			}
			else
			{
				unk_0x0716DFA30041BE76(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_195(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0xDBFA5C79D9B3D622(uParam1->f_66) && !unk_0xD3AE48D8EB7DCBE6(uParam1->f_66))
		{
			iVar2 = 0;
			while (iVar2 <= 11)
			{
				if (unk_0xF426A5DE932B3BEE(uParam1->f_77, func_148(iVar2 + 1)))
				{
					if (!unk_0x3D866A165E63B4FE(iParam0, iVar2 + 1))
					{
						unk_0x10CCA34E93B40732(iParam0, iVar2 + 1, 0);
					}
				}
				else if (unk_0x3D866A165E63B4FE(iParam0, iVar2 + 1))
				{
					unk_0x10CCA34E93B40732(iParam0, iVar2 + 1, 1);
				}
				iVar2++;
			}
		}
		if (unk_0xEC6E5897335290DD(uParam1->f_66))
		{
			if (!unk_0xF426A5DE932B3BEE(uParam1->f_77, 23))
			{
				if (unk_0xF426A5DE932B3BEE(uParam1->f_77, 22))
				{
					unk_0x4890188915218B70(iParam0, 2);
				}
				else
				{
					unk_0x4890188915218B70(iParam0, 3);
				}
			}
			else
			{
				unk_0x4890188915218B70(iParam0, 4);
			}
		}
		if (unk_0xF426A5DE932B3BEE(uParam1->f_77, 27))
		{
			unk_0xBC2F3726EAB9B952(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0xBC2F3726EAB9B952(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_195(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x0B4DDB992C7BCF57(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0x41EEFFCF5FB2A6E4(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x66E8010228AFE795(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0x31784B1E9A6BDD10(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0xC90889BF6C7006D1(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x7D3DEE1D65BA1603(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x406E9DA605D8FD2B(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x406E9DA605D8FD2B(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x406E9DA605D8FD2B(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_198(unk_0x946C63BD9EF05437(*iParam0), 1) && unk_0xC90889BF6C7006D1(*iParam0, 24) != func_197(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x406E9DA605D8FD2B(*iParam0, 24, func_197(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	if (func_196(*iParam0))
	{
		unk_0x7DC8EB593E346DA4(*iParam0, 1);
		unk_0x1B7FCBF5F0A9F480(*iParam0, 1);
	}
	return 1;
}

int func_196(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0xD2CFFE76B625AE55(iParam0) && unk_0x0B4DDB992C7BCF57(iParam0, 0)) && unk_0x41EEFFCF5FB2A6E4(iParam0) > 0)
	{
		unk_0x66E8010228AFE795(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0xC90889BF6C7006D1(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x42CE83CA72E324C3(iParam0, iVar1, unk_0xC90889BF6C7006D1(iParam0, iVar1)), 16);
				iVar2 = unk_0x70ABFF261710305D(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x70ABFF261710305D("MNU_CAGE") || iVar2 == unk_0x70ABFF261710305D("SABRE_CAG"))
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

int func_197(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xD2CFFE76B625AE55(iParam0) && unk_0x0B4DDB992C7BCF57(iParam0, 0))
	{
		switch (unk_0x946C63BD9EF05437(iParam0))
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
		iVar0 = unk_0xBBB5FCBC554BAAE8(iParam0, 38);
		iVar1 = unk_0xBBB5FCBC554BAAE8(iParam0, 24);
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

int func_198(int iParam0, int iParam1)
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
			if (!Global_262145.f_11649)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_11650)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_11648)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_11651)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_11653)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_11652)
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
	}
	return 0;
}

void func_199(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x41EEFFCF5FB2A6E4(iParam0) > 0)
	{
		unk_0x66E8010228AFE795(iParam0, 0);
		iVar0 = unk_0xC90889BF6C7006D1(iParam0, 24);
		iVar1 = unk_0x0334928DD9F6AEB8(iParam0, 24);
		unk_0xDB859F5026BDBB0E(iParam0, uParam1);
		if (iVar0 == -1)
		{
			unk_0x7D3DEE1D65BA1603(iParam0, 24);
		}
		else
		{
			unk_0x406E9DA605D8FD2B(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_200()
{
	return unk_0xA29E536967D6DF2E(joaat("mpindependence"));
}

int func_201(int iParam0)
{
	var uVar0;
	
	if (unk_0xD2CFFE76B625AE55(iParam0))
	{
		if (unk_0x0B4DDB992C7BCF57(iParam0, 0))
		{
			if (unk_0x90F7F7FF57758DF4("MPBitset", 3))
			{
				if (unk_0xE8E046017EE675F2(iParam0, "MPBitset"))
				{
					uVar0 = unk_0x6140AB07098540A5(iParam0, "MPBitset");
				}
				return unk_0xF426A5DE932B3BEE(uVar0, 4);
			}
		}
	}
	return 0;
}

void func_202(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_135(&(Global_68319.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x676D4CD42E0837CA(Param0, Global_68319.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_186(iVar0);
			}
		}
		iVar0++;
	}
}

int func_203(var uParam0)
{
	if (func_204(uParam0))
	{
		if (unk_0x875098323FCA8FE6(uParam0->f_12.f_66))
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

int func_204(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_111(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_59(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_205()
{
	return func_203(&(Global_95496.f_2311));
}

int func_206(var uParam0)
{
	if (func_217(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_207()
{
	return Global_95496.f_2311.f_12.f_66;
}

int func_208()
{
	return func_204(&(Global_95496.f_2311));
}

int func_209(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0xBFF8C08B5EEF0974(iParam1))
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
		unk_0x564E441E8CD3C56D(iParam1);
		uParam0->f_763[iVar1 /*5*/] = 1;
		uParam0->f_763[iVar1 /*5*/].f_3 = unk_0xA0F74982C6AAA9D4();
		uParam0->f_763[iVar1 /*5*/].f_4 = iParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

int func_210(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x75CB9E30BA492FF0(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_273)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			if (unk_0xC1C5B83BB6719C6C(uParam0->f_273[iVar0 /*5*/].f_4, sParam1))
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
		unk_0x88172B3983EC5071(sParam1);
		uParam0->f_273[iVar1 /*5*/] = 1;
		uParam0->f_273[iVar1 /*5*/].f_3 = unk_0xA0F74982C6AAA9D4();
		uParam0->f_273[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

int func_211(var uParam0, char[4] cParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x75CB9E30BA492FF0(cParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (unk_0xC1C5B83BB6719C6C(uParam0->f_374[iVar0 /*5*/].f_4, cParam1))
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
		unk_0x73FC038FEC1E71CF(cParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = unk_0xA0F74982C6AAA9D4();
		uParam0->f_374[iVar1 /*5*/].f_4 = cParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

void func_212(var uParam0)
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

int func_213(var uParam0, struct<3> Param1, float fParam4, int iParam5)
{
	if (func_214(Param1) || fParam4 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_863)
	{
		if (func_146(uParam0->f_863.f_4, Param1, 0) && uParam0->f_863.f_10 == fParam4)
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
	unk_0x9BDDAC2B68E13329(Param1, fParam4, iParam5);
	uParam0->f_863 = 1;
	uParam0->f_863.f_3 = unk_0xA0F74982C6AAA9D4();
	uParam0->f_863.f_4 = { Param1 };
	uParam0->f_863.f_7 = { 0f, 0f, 0f };
	uParam0->f_863.f_10 = fParam4;
	uParam0->f_977 = 1;
	return 1;
}

int func_214(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_215(int iParam0, var uParam1, var uParam2)
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

bool func_216()
{
	return unk_0xF426A5DE932B3BEE(Global_91278.f_20, 13);
}

int func_217(var uParam0)
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
					if (unk_0x875098323FCA8FE6((uParam0[iVar1 /*5*/])->f_4))
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
						unk_0x0049DE0B34213B12((uParam0[iVar1 /*5*/])->f_4);
						func_219(uParam0[iVar1 /*5*/]);
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
					if (unk_0x482101C9B3483958(uParam0->f_273[iVar1 /*5*/].f_4))
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
						unk_0x651E63BA2F4975EC(uParam0->f_273[iVar1 /*5*/].f_4);
						func_219(&(uParam0->f_273[iVar1 /*5*/]));
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
					if (unk_0xCE92500E70EEA516(uParam0->f_374[iVar1 /*5*/].f_4))
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
						unk_0x47419E1CD54CFC70(uParam0->f_374[iVar1 /*5*/].f_4);
						func_219(&(uParam0->f_374[iVar1 /*5*/]));
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
					if (unk_0x4C3CEC038B6637D7(uParam0->f_656[iVar1 /*6*/].f_5))
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
						unk_0xBBDCA990E9FC1AE1(&(uParam0->f_656[iVar1 /*6*/].f_5));
						func_219(&(uParam0->f_656[iVar1 /*6*/]));
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
					if (unk_0xEBB7C2AE703AC573(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4))
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
						unk_0x1AB756D010D94832(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4);
						func_219(&(uParam0->f_475[iVar1 /*6*/]));
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
					if (unk_0xFF6542840B510590(uParam0->f_202[iVar1 /*7*/].f_4))
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
						unk_0x51360EBF81D1CBAE(uParam0->f_202[iVar1 /*7*/].f_4);
						func_219(&(uParam0->f_202[iVar1 /*7*/]));
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
					if (unk_0x7F4F64DCC48E87D6(uParam0->f_151[iVar1 /*5*/].f_4))
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
						unk_0xEA1867C178F48481(uParam0->f_151[iVar1 /*5*/].f_4);
						func_219(&(uParam0->f_151[iVar1 /*5*/]));
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
					if (unk_0x386AEE656157CB3A(uParam0->f_737[iVar1 /*5*/].f_4, 0))
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
						unk_0x46E187EE07236C31(uParam0->f_737[iVar1 /*5*/].f_4);
						func_219(&(uParam0->f_737[iVar1 /*5*/]));
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
					if (unk_0x73F79DD3F5F32B29(uParam0->f_763[iVar1 /*5*/].f_4))
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
						unk_0x34E1C1B799C848E3(uParam0->f_763[iVar1 /*5*/].f_4);
						func_219(&(uParam0->f_763[iVar1 /*5*/]));
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
			if (!unk_0x75CB9E30BA492FF0(uParam0->f_687[iVar1 /*7*/].f_4))
			{
				if (uParam0->f_687[iVar1 /*7*/])
				{
					iVar2 = unk_0xC98B67E52A4FDB4D(uParam0->f_687[iVar1 /*7*/].f_5);
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
								func_219(&(uParam0->f_687[iVar1 /*7*/]));
								break;
							
							case -1:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								unk_0xB3368537F806024D(uParam0->f_687[iVar1 /*7*/].f_5);
								uParam0->f_687[iVar1 /*7*/] = 0;
								bVar0 = false;
								break;
							}
					}
				}
				else if (unk_0x73F79DD3F5F32B29(uParam0->f_687[iVar1 /*7*/].f_6))
				{
					uParam0->f_687[iVar1 /*7*/].f_5 = unk_0x47B84E8C67CD564D(uParam0->f_687[iVar1 /*7*/].f_4);
					uParam0->f_687[iVar1 /*7*/].f_3 = unk_0xA0F74982C6AAA9D4();
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
							unk_0xB3368537F806024D(uParam0->f_687[iVar1 /*7*/].f_5);
							func_219(&(uParam0->f_687[iVar1 /*7*/]));
							uParam0->f_687[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_219(&(uParam0->f_687[iVar1 /*7*/]));
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
					if (unk_0xABCC5756D7CA4CBE(uParam0->f_874[iVar1 /*5*/].f_4))
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
						unk_0x3EE330FEB4D10E4C(uParam0->f_874[iVar1 /*5*/].f_4);
						func_219(&(uParam0->f_874[iVar1 /*5*/]));
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
					if (unk_0x90F076E311C149C5(uParam0->f_925[iVar1 /*5*/].f_4))
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
						func_219(&(uParam0->f_925[iVar1 /*5*/]));
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
					if (unk_0x911CCA58116D31F0(iVar1))
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
						unk_0x85DF15590BBEBCCD(iVar1, 1);
						func_219(&(uParam0->f_779[iVar1 /*5*/]));
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
				if (unk_0xD84E191BFE45F102())
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
					unk_0xFEA2DA05C289B450();
					func_219(&(uParam0->f_855));
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
				if (unk_0x8708D9B1919C4499())
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
					unk_0x1CC4A8AA93F57EF0();
					func_219(&(uParam0->f_859));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_863 && unk_0x9A7F0D797C57AC34())
		{
			if (!uParam0->f_863.f_1)
			{
				if (unk_0x22AC80586B658378())
				{
					uParam0->f_863.f_1 = 1;
					if (uParam0->f_978)
					{
						unk_0xA8CA82EB31D1626F(unk_0x27D769C59BC9D030(), 0);
						func_218(uParam0);
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
				unk_0x18F9F40035A8905D();
				func_219(&(uParam0->f_863));
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_951[iVar1 /*5*/])
			{
				if (!uParam0->f_951[iVar1 /*5*/].f_1)
				{
					if (unk_0xBF1504B8A1447E5E(uParam0->f_951[iVar1 /*5*/].f_4))
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
						func_219(&(uParam0->f_951[iVar1 /*5*/]));
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

void func_218(var uParam0)
{
	if (unk_0x9A7F0D797C57AC34())
	{
		unk_0x18F9F40035A8905D();
		func_219(&(uParam0->f_863));
	}
}

void func_219(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_220()
{
	if (func_221())
	{
		func_8(1);
		unk_0x7C3AA2D27E16E2AD();
	}
}

int func_221()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_91278 == 7 || Global_91278 == 8)
	{
		return 1;
	}
	return 0;
}

void func_222()
{
	func_240(&(Local_1663[1 /*8*/]), 53191, "AI Controller");
	func_240(&(Local_1663[0 /*8*/]), 51556, "Dialogue");
	func_240(&(Local_1663[3 /*8*/]), 50583, "Alarms & Wanted Level");
	func_240(&(Local_1663[4 /*8*/]), 50031, "Music Manager");
}

void func_223(var uParam0)
{
	if (!func_226(uParam0))
	{
		if (uParam0->f_1 <= 4)
		{
			if ((unk_0x62CF6FCD67E09678(&cLocal_626) || unk_0x14B5449970A1C2DA(unk_0x4D29100D094E5511(), 0)) || func_22(&(Local_1663[3 /*8*/])))
			{
				unk_0x68BD4F826EFDDC53("JHP1A_ATTACK");
				func_225(uParam0, 5, 0);
			}
		}
		switch (uParam0->f_1)
		{
			case 1:
				if (func_102(unk_0x27D769C59BC9D030(), 137.7f, -3092.81f, 4.9f, 1) < 60f)
				{
					unk_0x68BD4F826EFDDC53("JHP1A_START");
					func_225(uParam0, 2, 0);
				}
				break;
			
			case 2:
				if (iLocal_2568 == 3 || iLocal_2568 == 2)
				{
					unk_0x68BD4F826EFDDC53("JHP1A_WAREHOUSE");
					func_225(uParam0, 3, 0);
				}
				break;
			
			case 3:
				if (iLocal_2568 == 6 || iLocal_2568 == 9)
				{
					unk_0x68BD4F826EFDDC53("JHP1A_VAN");
					func_225(uParam0, 4, 0);
				}
				break;
			
			case 4:
				if (!unk_0x14B5449970A1C2DA(unk_0x4D29100D094E5511(), 0))
				{
					if (iLocal_2568 == 9 && func_102(unk_0x27D769C59BC9D030(), 137.7f, -3092.81f, 4.9f, 1) >= 500f)
					{
						if (unk_0xAD68522F73EA2CC1("JHP1A_RADIO_1"))
						{
							unk_0x68BD4F826EFDDC53("JHP1A_RADIO_1");
							func_224(uParam0);
						}
					}
				}
				break;
			
			case 5:
				if ((unk_0x62CF6FCD67E09678(&cLocal_626) && unk_0x14B5449970A1C2DA(unk_0x4D29100D094E5511(), 0)) && iLocal_2564)
				{
					func_225(uParam0, 6, 0);
				}
				break;
			
			case 6:
				if (!unk_0x14B5449970A1C2DA(unk_0x4D29100D094E5511(), 0))
				{
					if (unk_0xAD68522F73EA2CC1("JHP1A_RADIO_2"))
					{
						unk_0x68BD4F826EFDDC53("JHP1A_RADIO_2");
						func_225(uParam0, 6, 0);
						func_224(uParam0);
					}
				}
				break;
			}
	}
	if (func_226(uParam0))
	{
		unk_0xE71148ED586F1ED1(1f);
	}
}

void func_224(var uParam0)
{
	if (*uParam0 != 4)
	{
		*uParam0 = 4;
		uParam0->f_4 = unk_0xA0F74982C6AAA9D4();
		uParam0->f_6 = 0;
		uParam0->f_1 = -1;
	}
}

void func_225(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		uParam0->f_5 = unk_0xA0F74982C6AAA9D4();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}

int func_226(var uParam0)
{
	if (*uParam0 == 4)
	{
		return 1;
	}
	return 0;
}

void func_227(var uParam0)
{
	if (!func_226(uParam0))
	{
		switch (uParam0->f_1)
		{
			case 1:
				func_225(uParam0, 2, 2000);
				break;
			
			case 2:
				if (unk_0x90F076E311C149C5(&cLocal_626))
				{
					unk_0xDE61E19AF93982C1(&cLocal_626, 0);
					func_230(&cLocal_2345, Local_642, 30f, -1, 500, 1, 0);
					StringCopy(&cLocal_2345, "", 32);
					func_225(uParam0, 3, 5000);
				}
				break;
			
			case 3:
				func_228(&Local_469, 3, 1, "ALARM EVENT SET IT", 1, 0);
				unk_0xB2758D8199128B65(unk_0x4D29100D094E5511(), 2, 0);
				unk_0x774840DEC1F0175E(unk_0x4D29100D094E5511(), 0);
				unk_0x193107EFB9C9FD44(2);
				unk_0x31468B47E750A9D1(unk_0x4D29100D094E5511(), 0);
				unk_0xC23650E60FCF4464(0);
				unk_0xD0D4327CB5C33C15(unk_0x4D29100D094E5511());
				unk_0x866BEA8368D2411E(unk_0x4D29100D094E5511());
				uParam0->f_2 = unk_0xA0F74982C6AAA9D4() + 15000;
				func_225(uParam0, 4, 0);
				break;
			
			case 4:
				if (unk_0xA0F74982C6AAA9D4() > uParam0->f_2)
				{
					unk_0x31468B47E750A9D1(unk_0x4D29100D094E5511(), 1);
					unk_0xC23650E60FCF4464(1);
					unk_0x193107EFB9C9FD44(5);
					iLocal_2564 = 1;
					func_224(uParam0);
				}
				unk_0xD0D4327CB5C33C15(unk_0x4D29100D094E5511());
				unk_0x866BEA8368D2411E(unk_0x4D29100D094E5511());
				break;
			}
	}
}

int func_228(int iParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, bool bParam5)
{
	return func_229(iParam0, iParam1, sParam3, 0f, 0f, 0f, 0, bParam2, iParam4, bParam5);
}

int func_229(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (func_169(*uParam0))
	{
		if (!bParam7 || iParam1 >= uParam0->f_5)
		{
			uParam0->f_38 = unk_0xA0F74982C6AAA9D4();
			if (iParam1 != uParam0->f_5 || !unk_0xC1C5B83BB6719C6C(&(uParam0->f_9), sParam2))
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
				uParam0->f_37 = unk_0xA0F74982C6AAA9D4();
				if (!func_214(Param3))
				{
					uParam0->f_88 = { Param3 };
				}
				if (iParam6 != 0 && unk_0xD2CFFE76B625AE55(iParam6))
				{
					uParam0->f_91 = iParam6;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_230(char* sParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_231(&Var0, 0);
}

int func_231(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if ((unk_0x75CB9E30BA492FF0(&(uParam0->f_1)) && *uParam0 != -1) && (!unk_0xD2CFFE76B625AE55(Local_28[*uParam0 /*110*/]) || unk_0xE4F7206742848BAF(Local_28[*uParam0 /*110*/])))
	{
		return 0;
	}
	while (iVar0 != -1 && !unk_0x75CB9E30BA492FF0(&(Local_1704[iVar0 /*32*/].f_1)))
	{
		iVar0++;
		if (iVar0 > (Local_1704.f_0 - 1))
		{
			iVar0 = -1;
		}
	}
	if (iVar0 != -1)
	{
		if (*uParam0 == -1 || (unk_0x75CB9E30BA492FF0(iParam1) || unk_0xC1C5B83BB6719C6C(iParam1, &(uParam0->f_17))))
		{
			Local_1704[iVar0 /*32*/] = *uParam0;
			Local_1704[iVar0 /*32*/].f_1 = { uParam0->f_1 };
			if (*uParam0 != -1)
			{
				Local_1704[iVar0 /*32*/].f_23 = { unk_0xA8CFDE65C45F813B(Local_28[*uParam0 /*110*/], 1) };
			}
			else
			{
				Local_1704[iVar0 /*32*/].f_23 = { uParam0->f_23 };
			}
			Local_1704[iVar0 /*32*/].f_26 = uParam0->f_26;
			Local_1704[iVar0 /*32*/].f_28 = uParam0->f_28;
			Local_1704[iVar0 /*32*/].f_29 = uParam0->f_29;
			Local_1704[iVar0 /*32*/].f_27 = unk_0xA0F74982C6AAA9D4();
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

void func_232(var uParam0)
{
	char cVar0[24];
	bool bVar6;
	struct<3> Var7;
	
	if (!func_226(uParam0))
	{
		if (func_44())
		{
			iLocal_2519 = -1;
		}
		else if (iLocal_2519 == -1)
		{
			iLocal_2519 = unk_0xA0F74982C6AAA9D4();
			iLocal_2545 = -1;
			iLocal_2546 = 1;
		}
		if (iLocal_2523 != -1 && !unk_0x75CB9E30BA492FF0(&Local_2525))
		{
			if (((Local_28[iLocal_2523 /*110*/] != 0 && unk_0xD2CFFE76B625AE55(Local_28[iLocal_2523 /*110*/])) && !unk_0xE4F7206742848BAF(Local_28[iLocal_2523 /*110*/])) && !unk_0x4C334C07AF5D51CB(Local_28[iLocal_2523 /*110*/]))
			{
				if (!unk_0xBD036012AF60D938(Local_28[iLocal_2523 /*110*/]))
				{
					if (func_44())
					{
						if (iLocal_2535 && (iLocal_2546 || iLocal_2524 > iLocal_2545))
						{
							if (bLocal_2547)
							{
								iLocal_2550 = iLocal_2540;
								iLocal_2551 = iLocal_2545;
								MemCopy(&Local_2552, {func_239()}, 4);
								MemCopy(&Local_2556, {func_238()}, 4);
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
						if ((unk_0xA0F74982C6AAA9D4() - iLocal_2519) > iLocal_2533)
						{
							if (func_237(iLocal_2523))
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
							if (unk_0x75CB9E30BA492FF0(&cLocal_2529))
							{
								if (func_236(&uLocal_2353, &cVar0, &Local_2525, 8, 0, 0, 0))
								{
									bVar6 = true;
								}
							}
							else if (func_235(&uLocal_2353, &cVar0, &Local_2525, &cLocal_2529, 8, 0, 0))
							{
								bVar6 = true;
							}
							if (bVar6)
							{
								func_231(&(Local_28[iLocal_2523 /*110*/].f_50), &Local_2525);
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
		if (((func_44() && iLocal_2540 != -1) && iLocal_2548) && !unk_0x75CB9E30BA492FF0(&cLocal_2541))
		{
			Var7 = { unk_0xA8CFDE65C45F813B(Local_28[iLocal_2540 /*110*/], 1) };
			if (func_102(unk_0x27D769C59BC9D030(), Var7, 1) >= 25f)
			{
				iLocal_2550 = iLocal_2540;
				iLocal_2551 = iLocal_2545;
				MemCopy(&Local_2552, {func_239()}, 4);
				MemCopy(&Local_2556, {func_238()}, 4);
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
		if (iLocal_2550 != -1 && !unk_0x75CB9E30BA492FF0(&Local_2552))
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
		if (iLocal_2523 == -1 && unk_0x75CB9E30BA492FF0(&Local_2525))
		{
			if (func_43() && (unk_0xA0F74982C6AAA9D4() - iLocal_2519) > 10000)
			{
				if (iLocal_2550 != -1 && !unk_0x75CB9E30BA492FF0(&Local_2552))
				{
					func_234(iLocal_2550, &Local_2552, iLocal_2551, 0, 0, iLocal_2560, 0, 1, &Local_2556, bLocal_2561);
					iLocal_2550 = -1;
					iLocal_2551 = -1;
					StringCopy(&Local_2552, "", 16);
					StringCopy(&Local_2556, "", 16);
					iLocal_2560 = 1;
				}
			}
		}
	}
	func_233(bLocal_2561);
}

void func_233(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_234(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	float fVar0;
	bool bVar1;
	
	fVar0 = func_101(Local_28[iParam0 /*110*/], unk_0x27D769C59BC9D030(), 1);
	if ((iParam2 > iLocal_2524 || iParam2 == 4) || ((iParam2 == iLocal_2524 && (fVar0 < fLocal_2534 || (func_237(iParam0) && !func_237(iLocal_2523)))) && iParam2 != 5))
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

bool func_235(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
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

bool func_236(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

int func_237(int iParam0)
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		return 1;
	}
	return 0;
}

struct<6> func_238()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = unk_0x351E0C865946978E();
		iVar6 = (iVar6 + Global_16722);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0x2A19A119886EC3BF(&(Global_14580[iVar7 /*6*/])))
			{
				return Global_14580[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0x2A19A119886EC3BF(&(Global_14580[iVar8 /*6*/])))
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

struct<6> func_239()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return Var0;
}

int func_240(var uParam0, int iParam1, char* sParam2)
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

void func_241(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	bool bVar5;
	bool bVar6;
	
	if (!func_226(uParam0))
	{
		bLocal_2565 = true;
		if (!iLocal_2563)
		{
			if (func_171())
			{
				iLocal_2563 = 1;
				iLocal_2566 = unk_0xA0F74982C6AAA9D4();
			}
		}
		else if ((unk_0xA0F74982C6AAA9D4() - iLocal_2566) > 3000)
		{
			iLocal_2563 = 0;
			iLocal_2566 = -1;
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (func_169(Local_28[iVar0 /*110*/]))
			{
				func_261(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_169(Local_469.f_0))
		{
			func_261(&Local_469);
		}
		iVar1 = 0;
		while (iVar1 < Local_1704.f_0)
		{
			if (!unk_0x75CB9E30BA492FF0(&(Local_1704[iVar1 /*32*/].f_1)) && Local_1704[iVar1 /*32*/].f_27 != -1)
			{
				if (Local_1704[iVar1 /*32*/].f_28 == -1 || (unk_0xA0F74982C6AAA9D4() - Local_1704[iVar1 /*32*/].f_27) < Local_1704[iVar1 /*32*/].f_28)
				{
					if (Local_1704[iVar1 /*32*/].f_29 <= 0 || (unk_0xA0F74982C6AAA9D4() - Local_1704[iVar1 /*32*/].f_27) > Local_1704[iVar1 /*32*/].f_29)
					{
						if (Local_1704[iVar1 /*32*/] != -1 && func_169(Local_28[Local_1704[iVar1 /*32*/] /*110*/]))
						{
							Var2 = { unk_0xA8CFDE65C45F813B(Local_28[Local_1704[iVar1 /*32*/] /*110*/], 1) };
							Local_1704[iVar1 /*32*/].f_23 = { Var2 };
						}
						else
						{
							Var2 = { Local_1704[iVar1 /*32*/].f_23 };
						}
						if (!func_22(&(Local_1663[3 /*8*/])))
						{
							if (Local_1704[iVar1 /*32*/].f_31 && unk_0x676D4CD42E0837CA(Var2, Local_642, 1) < 35f)
							{
								func_160(&(Local_1663[3 /*8*/]), 0, 0, 1);
							}
						}
						iVar0 = 0;
						while (iVar0 < Local_28.f_0)
						{
							if (Local_1704[iVar1 /*32*/] == -1 || (iVar0 != Local_1704[iVar1 /*32*/] && Local_28[Local_1704[iVar1 /*32*/] /*110*/].f_5 >= Local_28[iVar0 /*110*/].f_5))
							{
								if (unk_0xD2CFFE76B625AE55(Local_28[iVar0 /*110*/]) && !unk_0xE4F7206742848BAF(Local_28[iVar0 /*110*/]))
								{
									if (func_102(Local_28[iVar0 /*110*/], Var2, 1) < (Local_1704[iVar1 /*32*/].f_26 + Local_28[iVar0 /*110*/].f_42))
									{
										Local_28[iVar0 /*110*/].f_34 = iVar1;
										if (Local_1704[iVar1 /*32*/].f_30)
										{
											if (!func_22(&(Local_1663[3 /*8*/])))
											{
												func_160(&(Local_1663[3 /*8*/]), 0, 0, 1);
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
				else if ((unk_0xA0F74982C6AAA9D4() - Local_1704[iVar1 /*32*/].f_27) > Local_1704[iVar1 /*32*/].f_28 + 2000)
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
			if (func_169(Local_28[iVar0 /*110*/]))
			{
				func_255(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_169(Local_469.f_0))
		{
			func_246(&Local_469);
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (func_169(Local_28[iVar0 /*110*/]))
			{
				func_245(&(Local_28[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_169(Local_469.f_0))
		{
			func_243(&Local_469);
		}
		iVar0 = 0;
		while (iVar0 < Local_28.f_0)
		{
			if (unk_0xD2CFFE76B625AE55(Local_28[iVar0 /*110*/].f_105))
			{
				if (((!unk_0xD2CFFE76B625AE55(Local_28[iVar0 /*110*/]) || unk_0xE4F7206742848BAF(Local_28[iVar0 /*110*/])) || unk_0xA7EEDB617B2F8DF1(Local_28[iVar0 /*110*/])) || (Local_28[iVar0 /*110*/].f_108 && Local_28[iVar0 /*110*/].f_5 != 0))
				{
					bVar5 = true;
				}
				else if (Local_28[iVar0 /*110*/].f_5 != 0)
				{
					bVar6 = true;
				}
				if (bVar5 || bVar6)
				{
					if (unk_0x53D573A48E8DFC4C(Local_28[iVar0 /*110*/].f_105, Local_28[iVar0 /*110*/]))
					{
						unk_0xE223D49B3EFFD3E3(Local_28[iVar0 /*110*/].f_105, 1, 1);
					}
					if (bVar5)
					{
						unk_0x7DC0C08D21B1080D(&(Local_28[iVar0 /*110*/].f_105));
					}
					else if (bVar6)
					{
						unk_0x7C0FE14555841C1E(&(Local_28[iVar0 /*110*/].f_105));
					}
					Local_28[iVar0 /*110*/].f_109 = 0;
				}
			}
			else if (Local_28[iVar0 /*110*/].f_107 != 0 && Local_28[iVar0 /*110*/].f_106 != -1)
			{
				if (Local_28[iVar0 /*110*/].f_109 && unk_0x875098323FCA8FE6(Local_28[iVar0 /*110*/].f_107))
				{
					Local_28[iVar0 /*110*/].f_105 = unk_0xA8C993B9F5CB4D92(Local_28[iVar0 /*110*/].f_107, unk_0x52AB056B2AF7BB53(Local_28[iVar0 /*110*/], Local_28[iVar0 /*110*/].f_106, 0f, 0f, 0f), 1, 1, 0);
					unk_0x356675505D724E40(Local_28[iVar0 /*110*/].f_105, Local_28[iVar0 /*110*/], unk_0x5C9720EC37666AF2(Local_28[iVar0 /*110*/], Local_28[iVar0 /*110*/].f_106), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 1, 0, 2, 1);
					Local_28[iVar0 /*110*/].f_109 = 0;
				}
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < Local_28.f_0)
		{
			if (unk_0xD2CFFE76B625AE55(Local_28[iVar1 /*110*/]) && !unk_0xE4F7206742848BAF(Local_28[iVar1 /*110*/]))
			{
				unk_0x1393E54C663BBD20(Local_28[iVar1 /*110*/]);
				unk_0xEFDDBE1D72250E1B(Local_28[iVar1 /*110*/]);
			}
			iVar1++;
		}
		func_242();
	}
	if (func_226(uParam0))
	{
	}
}

void func_242()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_169(Local_579[iVar0 /*8*/]))
		{
			unk_0x1393E54C663BBD20(Local_579[iVar0 /*8*/]);
		}
		iVar0++;
	}
}

void func_243(int iParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0x852341ED4384D624(*iParam0);
	if (func_244(*iParam0))
	{
		Local_469.f_46 = 0;
	}
	switch (iParam0->f_5)
	{
		case 0:
			if (unk_0xEFEADD7EBD01C0A6() >= 5 && unk_0xEFEADD7EBD01C0A6() < 21)
			{
				if ((!func_179(*iParam0, 1647992574, 1) && !func_179(*iParam0, 242628503, 1)) || iLocal_2572)
				{
					if (unk_0x35A830607A198ABC(203.68f, -3132.46f, 4.79f, 1f, 1))
					{
						unk_0x603D1721FED38663(*iParam0, 203.68f, -3132.46f, 4.79f, 1f, 0);
						iLocal_2572 = 0;
					}
				}
			}
			else if (!func_179(*iParam0, -1680762137, 1) || !iLocal_2572)
			{
				if (unk_0x35A830607A198ABC(162.69f, -3115.67f, 4.95f, 1f, 1))
				{
					unk_0x1C09BAA9FE7D178D(*iParam0, 162.69f, -3115.67f, 4.95f, 1f, 0);
					iLocal_2572 = 1;
				}
			}
			break;
		
		case 3:
			unk_0x7F4F6E605AAF8691(*iParam0, 1, -1, "DEFAULT_ACTION");
			switch (unk_0x70ABFF261710305D(&(iParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
					if (unk_0x9F1B20B487FAE1CF(*iParam0, joaat("weapon_pistol"), 0))
					{
						unk_0xB1F866D7C20C5E2D(*iParam0, joaat("weapon_pistol"));
					}
					if (!unk_0x9F1B20B487FAE1CF(*iParam0, joaat("weapon_nightstick"), 0))
					{
						unk_0xAC9A80BE63D6295F(*iParam0, joaat("weapon_nightstick"), -1, 1, 1);
					}
					if (unk_0x4CF6F4DF2C64D299(*iParam0, &iVar0, 1))
					{
						if (iVar0 != joaat("weapon_nightstick"))
						{
							unk_0xCA26676919C42B5B(*iParam0, joaat("weapon_nightstick"), 0);
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
					if (unk_0x9F1B20B487FAE1CF(*iParam0, joaat("weapon_nightstick"), 0))
					{
						unk_0xB1F866D7C20C5E2D(*iParam0, joaat("weapon_nightstick"));
					}
					if (!unk_0x9F1B20B487FAE1CF(*iParam0, joaat("weapon_pistol"), 0))
					{
						unk_0xAC9A80BE63D6295F(*iParam0, joaat("weapon_pistol"), -1, 1, 1);
					}
					if (unk_0x4CF6F4DF2C64D299(*iParam0, &iVar0, 1))
					{
						if (iVar0 != joaat("weapon_pistol"))
						{
							unk_0xCA26676919C42B5B(*iParam0, joaat("weapon_pistol"), 0);
						}
					}
					break;
			}
			if (!func_179(*iParam0, 780511057, 1) || func_244(*iParam0))
			{
				unk_0xF7CC6FE06DC847BB(*iParam0, unk_0x27D769C59BC9D030(), 0, 16);
				unk_0x85FD30B510E7C05E(*iParam0, unk_0x27D769C59BC9D030(), -1, 2048, 2);
			}
			break;
		
		case 1:
			switch (unk_0x70ABFF261710305D(&(iParam0->f_9)))
			{
				case 686645495:
					if (unk_0xD2CFFE76B625AE55(iParam0->f_91))
					{
						if (!unk_0x586C5B4EFB499437(*iParam0, unk_0xA8CFDE65C45F813B(iParam0->f_91, 1), 180f) && (unk_0xA0F74982C6AAA9D4() - iParam0->f_37) < 5000)
						{
							if (!func_179(*iParam0, -875674219, 1) || func_244(*iParam0))
							{
								unk_0xF14C2AE8A3F59CE0(*iParam0, iParam0->f_91, -1);
								unk_0x85FD30B510E7C05E(*iParam0, iParam0->f_91, -1, 2048, 2);
							}
						}
						else if (!func_179(*iParam0, -2015108952, 1) || func_244(*iParam0))
						{
							unk_0x4592A3AC866799EE(*iParam0, iParam0->f_91, -1, 2f, -1f, 2.5f, 1f, 1);
						}
					}
					break;
				
				case -1225951737:
					if (iParam0->f_41 && !func_59(iParam0->f_88, iParam0->f_43, 1f, 0))
					{
						iParam0->f_88 = { iParam0->f_43 };
						iVar1 = 1;
					}
					if (!func_214(iParam0->f_88))
					{
						if (!unk_0x586C5B4EFB499437(*iParam0, iParam0->f_88, 90f) && (unk_0xA0F74982C6AAA9D4() - iParam0->f_37) < 5000)
						{
							if ((!func_179(*iParam0, 1464580341, 1) || func_244(*iParam0)) || iVar1)
							{
								unk_0x7ACF885D02B287A3(*iParam0, iParam0->f_88, 0);
								unk_0x398367D1AEB7ED62(*iParam0, iParam0->f_88, -1, 2048, 2);
							}
						}
						else if ((!func_179(*iParam0, 713668775, 1) || func_244(*iParam0)) || iVar1)
						{
							unk_0xE4A57337AE998385(*iParam0, iParam0->f_43, 1f, -1, 3f, 0, 40000f);
						}
					}
					break;
				
				case -1940555668:
					break;
				
				case -927541383:
					if (!func_214(iParam0->f_88))
					{
						if (!func_179(*iParam0, 1464580341, 1) || func_244(*iParam0))
						{
							unk_0x7ACF885D02B287A3(*iParam0, iParam0->f_88, -1);
							unk_0x398367D1AEB7ED62(*iParam0, iParam0->f_88, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x4E2F67DAF5750EE5(*iParam0, -1);
					}
					break;
				
				case 58299323:
					if (unk_0xD2CFFE76B625AE55(iParam0->f_91))
					{
						if (!func_179(*iParam0, -875674219, 1) || func_244(*iParam0))
						{
							unk_0xF14C2AE8A3F59CE0(*iParam0, iParam0->f_91, -1);
							unk_0x85FD30B510E7C05E(*iParam0, iParam0->f_91, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x4E2F67DAF5750EE5(*iParam0, -1);
					}
					break;
			}
			break;
	}
}

int func_244(struct<26> Param0, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109)
{
	if (Param0.f_5 != Param0.f_7 || !unk_0xC1C5B83BB6719C6C(&(Param0.f_9), &(Param0.f_25)))
	{
		return 1;
	}
	return 0;
}

void func_245(var uParam0)
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
	
	unk_0x852341ED4384D624(*uParam0);
	if (func_244(*uParam0))
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
						if (!func_179(*uParam0, 1647992574, 1))
						{
							if (unk_0x35A830607A198ABC(155.74f, -3098.89f, 4.93f, 0.5f, 1))
							{
								unk_0x603D1721FED38663(*uParam0, 155.74f, -3098.89f, 4.93f, 0.5f, -1);
							}
						}
						break;
					
					case 1:
						if ((!func_179(*uParam0, 242628503, 1) || func_244(*uParam0)) && unk_0x482101C9B3483958("misslsdhsclipboard@base"))
						{
							if (!unk_0xF4954568C87BA772(*uParam0, "misslsdhsclipboard@base", "base", 3))
							{
								unk_0x33A0CEA494F4C2A3(&uLocal_2521);
								if (!func_59(unk_0xA8CFDE65C45F813B(*uParam0, 1), 126.8496f, -3089.249f, 4.9141f, 0.75f, 0))
								{
									unk_0xE4A57337AE998385(0, 126.8496f, -3089.249f, 4.9141f, 1f, -1, 0.5f, 0, 264.2812f);
								}
								unk_0xD9F9CB5C8842E29C(0, 264.2812f, 0);
								unk_0x878D12AEFBF5BAF0(0, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
								unk_0x33F83FC0F5F458E3(uLocal_2521);
								unk_0x8B8674266D533E9F(*uParam0, uLocal_2521);
								unk_0x433C209504FBC7EE(&uLocal_2521);
							}
							if (unk_0xD2CFFE76B625AE55(Local_579[2 /*8*/]))
							{
								unk_0x398367D1AEB7ED62(*uParam0, unk_0xEAE1E838D30BBB88(Local_579[2 /*8*/], unk_0x1060AD708DD56BC7(Local_579[2 /*8*/], "engine")), -1, 0, 2);
							}
							uParam0->f_46 = 0;
						}
						else if (unk_0x482101C9B3483958("misslsdhsclipboard@idle_a"))
						{
							switch (uParam0->f_46)
							{
								case 0:
								case 2:
									if (uParam0->f_46 == 0 && unk_0x729CF4943DFABB73(*uParam0) == 2)
									{
										uParam0->f_109 = 1;
									}
									if (((uParam0->f_46 == 0 && unk_0x729CF4943DFABB73(*uParam0) == 2) || uParam0->f_46 == 2) && unk_0xA0F74982C6AAA9D4() > uParam0->f_37)
									{
										unk_0x33A0CEA494F4C2A3(&uLocal_2521);
										switch (unk_0x3A5708FEE1B560A9(0, 3))
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
										unk_0x878D12AEFBF5BAF0(0, "misslsdhsclipboard@idle_a", &cVar2, 8f, -8f, -1, 0, 0, 0, 0, 0);
										unk_0x878D12AEFBF5BAF0(0, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
										unk_0x33F83FC0F5F458E3(uLocal_2521);
										unk_0x8B8674266D533E9F(*uParam0, uLocal_2521);
										unk_0x433C209504FBC7EE(&uLocal_2521);
										uParam0->f_46 = 1;
									}
									break;
								
								case 1:
									if (unk_0x729CF4943DFABB73(*uParam0) == 1)
									{
										uParam0->f_46++;
									}
									break;
								}
						}
						break;
					
					case 2:
					case 3:
						if (!func_179(*uParam0, 1647992574, 1))
						{
							if (unk_0x35A830607A198ABC(159.82f, -3085.93f, 5f, 0.1f, 1))
							{
								unk_0x603D1721FED38663(*uParam0, 159.82f, -3085.93f, 5f, 0.1f, -1);
							}
							else if (unk_0x35A830607A198ABC(160.15f, -3084.79f, 4.99f, 0.1f, 1))
							{
								unk_0x603D1721FED38663(*uParam0, 160.15f, -3084.79f, 4.99f, 0.1f, -1);
							}
							else if (unk_0x35A830607A198ABC(159.09f, -3085.02f, 5.01f, 0.1f, 1))
							{
								unk_0x603D1721FED38663(*uParam0, 159.09f, -3085.02f, 5.01f, 0.1f, -1);
							}
						}
						break;
					}
			}
			break;
		
		case 1:
			switch (unk_0x70ABFF261710305D(&(uParam0->f_9)))
			{
				case 2074432461:
				case 356486511:
				case -414594135:
				case 1260350710:
					if (unk_0xD2CFFE76B625AE55(uParam0->f_91))
					{
						if (!unk_0x586C5B4EFB499437(*uParam0, unk_0xA8CFDE65C45F813B(uParam0->f_91, 1), 180f) && (unk_0xA0F74982C6AAA9D4() - uParam0->f_37) < 5000)
						{
							if (!func_179(*uParam0, -875674219, 1) || func_244(*uParam0))
							{
								unk_0xF14C2AE8A3F59CE0(*uParam0, uParam0->f_91, -1);
								unk_0x85FD30B510E7C05E(*uParam0, uParam0->f_91, -1, 2048, 2);
							}
						}
						else if (!func_179(*uParam0, -2015108952, 1) || func_244(*uParam0))
						{
							unk_0x4592A3AC866799EE(*uParam0, uParam0->f_91, -1, 2f, -1f, 2.5f, 1f, 1);
						}
					}
					break;
				
				case -1225951737:
					if (uParam0->f_41 && !func_59(uParam0->f_88, uParam0->f_43, 1f, 0))
					{
						uParam0->f_88 = { uParam0->f_43 };
						iVar8 = 1;
					}
					if (!func_214(uParam0->f_88))
					{
						if (!unk_0x586C5B4EFB499437(*uParam0, uParam0->f_88, 90f) && (unk_0xA0F74982C6AAA9D4() - uParam0->f_37) < 5000)
						{
							if ((!func_179(*uParam0, 1464580341, 1) || func_244(*uParam0)) || iVar8)
							{
								unk_0x7ACF885D02B287A3(*uParam0, uParam0->f_88, 0);
								unk_0x398367D1AEB7ED62(*uParam0, uParam0->f_88, -1, 2048, 2);
							}
						}
						else if ((!func_179(*uParam0, 713668775, 1) || func_244(*uParam0)) || iVar8)
						{
							unk_0xE4A57337AE998385(*uParam0, uParam0->f_43, 1f, -1, 3f, 0, 40000f);
						}
					}
					break;
				
				case -1940555668:
					break;
				
				case -927541383:
					if (!func_214(uParam0->f_88))
					{
						if (!func_179(*uParam0, 1464580341, 1) || func_244(*uParam0))
						{
							unk_0x7ACF885D02B287A3(*uParam0, uParam0->f_88, -1);
							unk_0x398367D1AEB7ED62(*uParam0, uParam0->f_88, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x4E2F67DAF5750EE5(*uParam0, -1);
					}
					break;
				
				case 58299323:
					if (unk_0xD2CFFE76B625AE55(uParam0->f_91))
					{
						if (!func_179(*uParam0, -875674219, 1) || func_244(*uParam0))
						{
							unk_0xF14C2AE8A3F59CE0(*uParam0, uParam0->f_91, -1);
							unk_0x85FD30B510E7C05E(*uParam0, uParam0->f_91, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x4E2F67DAF5750EE5(*uParam0, -1);
					}
					break;
			}
			break;
		
		case 2:
			if (((unk_0xC1C5B83BB6719C6C(&(uParam0->f_9), "ENT_FOOT_LEAVE") || unk_0xC1C5B83BB6719C6C(&(uParam0->f_9), "ENT_VEH_LEAVE")) || unk_0xC1C5B83BB6719C6C(&(uParam0->f_9), "WH_FOOT_LEAVE")) || unk_0xC1C5B83BB6719C6C(&(uParam0->f_9), "WH_VEH_LEAVE"))
			{
				if ((!func_179(*uParam0, 242628503, 1) || !unk_0xB1D18B06E0525A9E(*uParam0, unk_0x27D769C59BC9D030(), 90f)) || func_244(*uParam0))
				{
					unk_0x33A0CEA494F4C2A3(&uLocal_2521);
					unk_0xF14C2AE8A3F59CE0(0, unk_0x27D769C59BC9D030(), 0);
					unk_0x4E2F67DAF5750EE5(0, 2000);
					unk_0x575C8AF5AF9A9FED(uLocal_2521, 1);
					unk_0x33F83FC0F5F458E3(uLocal_2521);
					unk_0x8B8674266D533E9F(*uParam0, uLocal_2521);
					unk_0x433C209504FBC7EE(&uLocal_2521);
					unk_0x85FD30B510E7C05E(*uParam0, unk_0x27D769C59BC9D030(), -1, 2048, 2);
				}
			}
			else
			{
				if (unk_0xD2CFFE76B625AE55(iLocal_2571) && unk_0x0B4DDB992C7BCF57(iLocal_2571, 0))
				{
					fVar11 = func_101(unk_0x27D769C59BC9D030(), iLocal_2571, 1);
				}
				if ((iLocal_2568 == 3 || iLocal_2568 == 2) || iLocal_2568 == 8)
				{
					iVar9 = unk_0x27D769C59BC9D030();
					fVar12 = 2f;
				}
				else if (iLocal_2568 == 0 || iLocal_2568 == 1)
				{
					iVar9 = unk_0x27D769C59BC9D030();
					fVar12 = 1f;
				}
				else if (iLocal_2568 == 5 && unk_0xD2CFFE76B625AE55(iLocal_2571))
				{
					if (fVar11 > 10f)
					{
						iVar9 = unk_0x27D769C59BC9D030();
						fVar12 = 2f;
					}
					else
					{
						iVar9 = iLocal_2571;
						fVar12 = 2f;
					}
				}
				else if (iLocal_2568 == 4 && unk_0xD2CFFE76B625AE55(iLocal_2571))
				{
					iVar9 = iLocal_2571;
					fVar12 = 1f;
				}
				if (unk_0xD2CFFE76B625AE55(iVar9))
				{
					fVar10 = func_101(*uParam0, iVar9, 1);
				}
				if (fVar10 <= 7.5f)
				{
					if (((!func_179(*uParam0, 242628503, 1) && !func_179(*uParam0, 1227113341, 1)) || !unk_0xB1D18B06E0525A9E(*uParam0, unk_0x27D769C59BC9D030(), 90f)) || func_244(*uParam0))
					{
						unk_0x33A0CEA494F4C2A3(&uLocal_2521);
						unk_0xF14C2AE8A3F59CE0(0, unk_0x27D769C59BC9D030(), 0);
						unk_0x4E2F67DAF5750EE5(0, 2000);
						unk_0x575C8AF5AF9A9FED(uLocal_2521, 1);
						unk_0x33F83FC0F5F458E3(uLocal_2521);
						unk_0x8B8674266D533E9F(*uParam0, uLocal_2521);
						unk_0x433C209504FBC7EE(&uLocal_2521);
						unk_0x85FD30B510E7C05E(*uParam0, unk_0x27D769C59BC9D030(), -1, 2048, 2);
					}
				}
				else if (!func_179(*uParam0, 1227113341, 1) || func_244(*uParam0))
				{
					if (fVar12 > 1f)
					{
						fVar13 = 6f;
					}
					else
					{
						fVar13 = 3f;
					}
					unk_0x9B6F077214CEDE77(*uParam0, iVar9, -1, fVar13, fVar12, 1073741824, 0);
					unk_0x85FD30B510E7C05E(*uParam0, unk_0x27D769C59BC9D030(), -1, 2048, 2);
				}
			}
			break;
		
		case 3:
			switch (unk_0x70ABFF261710305D(&(uParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
				case 1568162790:
				case 1682434916:
				case -924218668:
				case 2056033185:
				case 185995093:
					if (unk_0x4CF6F4DF2C64D299(*uParam0, &iVar14, 1))
					{
						if (iVar14 != joaat("weapon_unarmed"))
						{
							unk_0xCA26676919C42B5B(*uParam0, joaat("weapon_unarmed"), 0);
						}
					}
					if (!func_179(*uParam0, 780511057, 1))
					{
						unk_0xF7CC6FE06DC847BB(*uParam0, unk_0x27D769C59BC9D030(), 0, 16);
					}
					break;
				
				case 1093888274:
					if ((!func_179(*uParam0, 242628503, 1) || !unk_0xB1D18B06E0525A9E(*uParam0, unk_0x27D769C59BC9D030(), 90f)) || func_244(*uParam0))
					{
						unk_0x33A0CEA494F4C2A3(&uLocal_2521);
						unk_0xF14C2AE8A3F59CE0(0, unk_0x27D769C59BC9D030(), 0);
						unk_0x4E2F67DAF5750EE5(0, 2000);
						unk_0x575C8AF5AF9A9FED(uLocal_2521, 1);
						unk_0x33F83FC0F5F458E3(uLocal_2521);
						unk_0x8B8674266D533E9F(*uParam0, uLocal_2521);
						unk_0x433C209504FBC7EE(&uLocal_2521);
						unk_0x85FD30B510E7C05E(*uParam0, unk_0x27D769C59BC9D030(), -1, 2048, 2);
					}
					break;
			}
			break;
		
		case 5:
			if (func_102(*uParam0, 177.7484f, -3240.897f, 4.6079f, 1) < 15f)
			{
				if (!func_179(*uParam0, 1805844857, 1))
				{
					unk_0x3DA9DFE29006A19F(*uParam0, unk_0x27D769C59BC9D030(), 1000f, -1, 0, 0);
				}
			}
			else if ((!func_179(*uParam0, 1805844857, 1) && !func_179(*uParam0, 713668775, 1)) || func_244(*uParam0))
			{
				unk_0xE4A57337AE998385(*uParam0, 177.7484f, -3240.897f, 4.6079f, 3f, -1, 0.25f, 1, 40000f);
			}
			break;
		
		case 4:
			switch (unk_0x70ABFF261710305D(&(uParam0->f_9)))
			{
				case -1645534839:
					if (!func_179(*uParam0, -1519143300, 1) || func_244(*uParam0))
					{
						unk_0xCE76B3438711A56E(*uParam0, -1, unk_0x27D769C59BC9D030(), 0, 1);
					}
					break;
			}
			break;
	}
}

void func_246(int iParam0)
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
	
	unk_0x4CF6F4DF2C64D299(unk_0x27D769C59BC9D030(), &uVar0, 1);
	fVar1 = func_101(unk_0x27D769C59BC9D030(), *iParam0, 1);
	if (unk_0x1A82CEBB20BF3F73(*iParam0))
	{
		iVar3 = 1;
	}
	if (unk_0x77F1B7F6C32990D6(*iParam0, unk_0x27D769C59BC9D030(), 1))
	{
		if (unk_0x6AE62C1DA604CA92(*iParam0, joaat("weapon_unarmed"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar4 = func_253(*iParam0, &uVar5, &bVar6, &bVar7);
	if ((uVar4 && uVar5) && !bVar7)
	{
		if (bVar6)
		{
			func_228(iParam0, 3, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_228(iParam0, 3, 1, "KILLED", 1, 0);
		}
	}
	else if (((((unk_0x3BA391CFC751A0E7(*iParam0, 122) || unk_0x3BA391CFC751A0E7(*iParam0, 123)) || unk_0x3BA391CFC751A0E7(*iParam0, 124)) || unk_0x3BA391CFC751A0E7(*iParam0, 22)) || unk_0x3BA391CFC751A0E7(*iParam0, 23)) || unk_0x3BA391CFC751A0E7(*iParam0, 86))
	{
		func_228(iParam0, 3, 1, "GUNSHOT", 1, 0);
	}
	else if (iParam0->f_39 && func_252(4))
	{
		func_228(iParam0, 3, 1, "GUN_AIMED", 1, 0);
	}
	else if (iParam0->f_39 && func_251(*iParam0, 2))
	{
		func_228(iParam0, 3, 1, "PROJ_AIMED", 1, 0);
	}
	else if (((iParam0->f_39 && fVar1 < 8f) && !unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1)) && unk_0x1D01F222CF5E89FA(unk_0x27D769C59BC9D030(), 5))
	{
		func_228(iParam0, 3, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2568 == 11)
	{
		if (iParam0->f_39)
		{
			func_228(iParam0, 3, 1, "STEALING_SEC_CAR", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_250(iParam0, 1, "HEARD_SEC_CAR", Local_579[3 /*8*/], 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2568 == 6)
	{
		if (iParam0->f_39)
		{
			func_228(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_250(iParam0, 1, "HEARD_VAN", Local_579[func_96() /*8*/], 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2568 == 10)
	{
		if (iParam0->f_39)
		{
			func_250(iParam0, 3, "STEALING_VAN", Local_579[func_48() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_250(iParam0, 1, "HEARD_VAN", Local_579[func_48() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || unk_0x3BA391CFC751A0E7(*iParam0, 41)) || unk_0x3BA391CFC751A0E7(*iParam0, 112)) || func_248(*iParam0, 0))
	{
		func_228(iParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || unk_0x3BA391CFC751A0E7(*iParam0, 101)) || func_248(*iParam0, 1))
	{
		func_228(iParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((iParam0->f_5 != 3 && iParam0->f_84) && (iParam0->f_39 || iParam0->f_41)) && (fVar1 < 8f || func_102(unk_0x27D769C59BC9D030(), Local_642, 1) < 40f))
	{
		if (iParam0->f_39)
		{
			func_228(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_247(iParam0, 1, "HEARD_PLAYER", unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 1, 1, 0);
		}
	}
	else if (iParam0->f_5 != 5 && uVar4)
	{
		if ((uVar5 && bVar6) && bVar7)
		{
			func_228(iParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar6)
		{
			func_228(iParam0, 3, 1, "DEAD_BODY", 1, 0);
		}
	}
	if (iParam0->f_34 > -1 && iParam0->f_34 < (Local_1704.f_0 - 1))
	{
		bVar8 = Local_1704[iParam0->f_34 /*32*/].f_30;
		switch (unk_0x70ABFF261710305D(&(Local_1704[iParam0->f_34 /*32*/].f_1)))
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
				func_228(iParam0, 3, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), 0, bVar8);
				break;
			
			case -1225951737:
				func_247(iParam0, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 1, 0, bVar8);
				break;
			
			case 2074432461:
			case 686645495:
				func_250(iParam0, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), Local_579[func_96() /*8*/], 1, 0, bVar8);
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
	if (!unk_0xC1C5B83BB6719C6C(&(iParam0->f_25), &(iParam0->f_9)))
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
			switch (unk_0x70ABFF261710305D(&(iParam0->f_9)))
			{
				case 58299323:
					if ((unk_0xA0F74982C6AAA9D4() - iParam0->f_37) > 3000)
					{
						func_228(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				
				case -1225951737:
					if (((unk_0xA0F74982C6AAA9D4() - iParam0->f_37) > 4000 && func_102(*iParam0, iParam0->f_88, 1) < 3f) && unk_0x537945462B3922D7(*iParam0))
					{
						func_228(iParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					break;
				
				case -927541383:
					if ((unk_0xA0F74982C6AAA9D4() - iParam0->f_37) > 4000 && !unk_0x7D2129D13363B0E7(*iParam0))
					{
						func_228(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
			}
			break;
		
		case 3:
			switch (unk_0x70ABFF261710305D(&(iParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
					if ((((unk_0xA0F74982C6AAA9D4() - iParam0->f_38) > 8000 && func_102(unk_0x27D769C59BC9D030(), Local_642, 1) > 65f) && (func_101(unk_0x27D769C59BC9D030(), *iParam0, 1) > 10f || (unk_0xA0F74982C6AAA9D4() - iParam0->f_38) > 16000)) && !unk_0x7D2129D13363B0E7(*iParam0))
					{
						func_228(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
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
					if (func_102(unk_0x27D769C59BC9D030(), Local_642, 1) > 300f && func_101(unk_0x27D769C59BC9D030(), *iParam0, 1) > 150f)
					{
						func_228(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
			}
			break;
	}
}

int func_247(int iParam0, int iParam1, char* sParam2, struct<3> Param3, bool bParam6, int iParam7, bool bParam8)
{
	return func_229(iParam0, iParam1, sParam2, Param3, 0, bParam6, iParam7, bParam8);
}

int func_248(struct<110> Param0, int iParam110)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		if (func_249(Param0, Local_28[iVar0 /*110*/], iParam110))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_249(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, int iParam220)
{
	if (unk_0xD2CFFE76B625AE55(iParam110) && unk_0x77F1B7F6C32990D6(iParam110, unk_0x27D769C59BC9D030(), iParam220))
	{
		if (func_101(iParam0, iParam110, 1) < 15f)
		{
			if (unk_0x2B602B95240AC6EF(iParam0, iParam110))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_250(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	return func_229(iParam0, iParam1, sParam2, 0f, 0f, 0f, iParam3, bParam4, iParam5, bParam6);
}

int func_251(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110)
{
	if ((iParam0 != 0 && unk_0xD2CFFE76B625AE55(iParam0)) && !unk_0xE4F7206742848BAF(iParam0))
	{
		if (unk_0x1D01F222CF5E89FA(unk_0x27D769C59BC9D030(), iParam110) && (unk_0xC542D24D363306EC(unk_0x4D29100D094E5511(), iParam0) || unk_0x3FB18423318A562B(unk_0x4D29100D094E5511(), iParam0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_252(int iParam0)
{
	if (unk_0x1D01F222CF5E89FA(unk_0x27D769C59BC9D030(), iParam0) && (unk_0x8E06E8DFD2B57A05(unk_0x4D29100D094E5511()) || unk_0x102415F9164597E2(unk_0x4D29100D094E5511())))
	{
		return 1;
	}
	return 0;
}

int func_253(struct<110> Param0, var uParam110, var uParam111, var uParam112)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = 0;
	while (iVar0 < Local_28.f_0)
	{
		if (func_254(Param0, Local_28[iVar0 /*110*/], &bVar2, &bVar3, &bVar4))
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

int func_254(struct<40> Param0, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, struct<104> Param110, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, var uParam220, var uParam221, var uParam222)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0xD2CFFE76B625AE55(Param110.f_0) && unk_0xE4F7206742848BAF(Param110.f_0))
	{
		Var0 = { unk_0xA8CFDE65C45F813B(Param110.f_0, 0) };
		if (unk_0x676D4CD42E0837CA(unk_0xA8CFDE65C45F813B(Param0.f_0, 1), Var0, 1) < 10f)
		{
			if (unk_0x2B602B95240AC6EF(Param0.f_0, Param110.f_0))
			{
				if ((unk_0xA0F74982C6AAA9D4() - Param110.f_103) < 3000)
				{
					*uParam220 = 1;
				}
				else
				{
					*uParam220 = 0;
				}
				if (*uParam220)
				{
					iVar3 = unk_0x2DAFD02C8FD38298(Param110.f_0);
					if (unk_0x54F37403E01EFD97(iVar3))
					{
						iVar4 = unk_0x97EA5EA3E7FE8500(iVar3);
						if ((iVar4 == unk_0x27D769C59BC9D030() && !unk_0xE4F7206742848BAF(iVar4)) && Param0.f_39)
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
				iVar5 = unk_0x8819B196C736F174(Param110.f_0);
				if (iVar5 == joaat("weapon_unarmed") || (iVar5 != joaat("weapon_unarmed") && unk_0x33E3225602B37F79(iVar5) == 2))
				{
					*uParam222 = 1;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_255(int iParam0)
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
	
	unk_0x4CF6F4DF2C64D299(unk_0x27D769C59BC9D030(), &uVar0, 1);
	fVar1 = func_101(unk_0x27D769C59BC9D030(), *iParam0, 1);
	if (unk_0x1A82CEBB20BF3F73(*iParam0))
	{
		iVar3 = 1;
	}
	if (unk_0x77F1B7F6C32990D6(*iParam0, unk_0x27D769C59BC9D030(), 1))
	{
		if (unk_0x6AE62C1DA604CA92(*iParam0, joaat("weapon_unarmed"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar20 = func_253(*iParam0, &uVar21, &bVar22, &bVar23);
	if (((iParam0->f_5 != 5 && uVar20) && uVar21) && !bVar23)
	{
		if (bVar22)
		{
			func_228(iParam0, 5, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_228(iParam0, 5, 1, "KILLED", 1, 0);
		}
	}
	else if (((((unk_0x3BA391CFC751A0E7(*iParam0, 122) || unk_0x3BA391CFC751A0E7(*iParam0, 123)) || unk_0x3BA391CFC751A0E7(*iParam0, 124)) || unk_0x3BA391CFC751A0E7(*iParam0, 22)) || unk_0x3BA391CFC751A0E7(*iParam0, 23)) || unk_0x3BA391CFC751A0E7(*iParam0, 86))
	{
		func_228(iParam0, 5, 1, "GUNSHOT", 1, 0);
	}
	else if ((iParam0->f_39 && iParam0->f_5 != 4) && func_252(4))
	{
		func_228(iParam0, 4, 1, "GUN_AIMED", 1, 0);
	}
	else if (iParam0->f_39 && func_251(*iParam0, 2))
	{
		func_228(iParam0, 5, 1, "PROJ_AIMED", 1, 0);
	}
	else if ((((iParam0->f_39 && fVar1 < 8f) && iParam0->f_5 != 4) && !unk_0x9A4E2270C2271219(unk_0x27D769C59BC9D030(), 1)) && unk_0x1D01F222CF5E89FA(unk_0x27D769C59BC9D030(), 5))
	{
		func_228(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2568 == 7)
	{
		if (iParam0->f_39)
		{
			func_228(iParam0, 3, 1, "EXIT_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_247(iParam0, 1, "HEARD_PLAYER", unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2568 == 6)
	{
		if (iParam0->f_39)
		{
			func_228(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_247(iParam0, 1, "HEARD_PLAYER", unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2568 == 10)
	{
		if (iParam0->f_39)
		{
			func_250(iParam0, 3, "STEALING_VAN", Local_579[func_48() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_250(iParam0, 1, "HEARD_VAN", Local_579[func_48() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || unk_0x3BA391CFC751A0E7(*iParam0, 41)) || unk_0x3BA391CFC751A0E7(*iParam0, 112)) || func_248(*iParam0, 0))
	{
		func_228(iParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || unk_0x3BA391CFC751A0E7(*iParam0, 101)) || func_248(*iParam0, 1))
	{
		func_228(iParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((iParam0->f_5 != 3 && iParam0->f_84) && (iParam0->f_39 || iParam0->f_41)) && (fVar1 < 8f || func_102(unk_0x27D769C59BC9D030(), Local_642, 1) < 40f))
	{
		if (iParam0->f_39)
		{
			func_228(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_247(iParam0, 1, "HEARD_PLAYER", unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 1, 1, 0);
		}
	}
	else if (iParam0->f_5 != 5 && uVar20)
	{
		if ((uVar21 && bVar22) && bVar23)
		{
			func_228(iParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar22)
		{
			func_228(iParam0, 5, 1, "DEAD_BODY", 1, 0);
		}
	}
	else if (((((((iParam0->f_39 || iParam0->f_41) && (iParam0->f_86 || iParam0->f_87)) && iLocal_2568 == 9) && !unk_0xC1C5B83BB6719C6C(&(iParam0->f_9), "SEE_VAN_LEAVING")) && !unk_0xC1C5B83BB6719C6C(&(iParam0->f_9), "SEE_VAN_LEAVING_1")) && !unk_0xC1C5B83BB6719C6C(&(iParam0->f_9), "CHECK_DRIVER")) && func_102(unk_0x27D769C59BC9D030(), Local_642, 1) < 15f)
	{
		if (iParam0->f_39)
		{
			func_250(iParam0, 1, "SEE_VAN_LEAVING", Local_579[func_96() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_250(iParam0, 1, "HEARD_VAN", Local_579[func_96() /*8*/], 1, 1, 0);
		}
	}
	else if (iLocal_2568 != 9)
	{
		if ((iParam0->f_86 && (((iLocal_2568 == 0 || iLocal_2568 == 1) || iLocal_2568 == 4) || iParam0->f_5 == 1)) || (iParam0->f_87 && ((iLocal_2568 == 3 || iLocal_2568 == 2) || iLocal_2568 == 5)))
		{
			if ((iLocal_2568 == 5 || iLocal_2568 == 4) && unk_0xDE7DE56F6FF55B6A(*iParam0, iLocal_2571, 19))
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
				func_228(iParam0, 2, 1, &Var4, 1, 0);
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
				func_228(iParam0, 2, 1, &Var4, 1, 0);
			}
			else if (iParam0->f_41)
			{
				func_247(iParam0, 1, "HEARD_PLAYER", unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 1, 1, 0);
			}
		}
	}
	if (iParam0->f_34 > -1 && iParam0->f_34 < (Local_1704.f_0 - 1))
	{
		bVar24 = Local_1704[iParam0->f_34 /*32*/].f_30;
		switch (unk_0x70ABFF261710305D(&(Local_1704[iParam0->f_34 /*32*/].f_1)))
		{
			case joaat("killed"):
			case 1518302817:
			case -1298712083:
				if (iParam0->f_5 != 4)
				{
					func_228(iParam0, 5, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case 185995093:
				if (iParam0->f_5 != 4)
				{
					func_228(iParam0, 3, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -1645534839:
				if (iParam0->f_5 != 4)
				{
					if (func_102(*iParam0, Local_1704[iParam0->f_34 /*32*/].f_23, 1) < 5f)
					{
						func_228(iParam0, 4, 1, "GUN_AIMED_AT", 0, bVar24);
					}
					else
					{
						func_228(iParam0, 5, 1, "SEEN_WEAPON", 0, bVar24);
					}
				}
				break;
			
			case 880647822:
				if (iParam0->f_5 != 4)
				{
					func_228(iParam0, 5, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case 1921975061:
				if (iParam0->f_5 != 4)
				{
					func_228(iParam0, 5, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case joaat("fight"):
			case 1681313069:
			case 1156217463:
			case -419867425:
				if (iParam0->f_5 != 4)
				{
					func_228(iParam0, 3, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case 1682434916:
			case -924218668:
			case 2056033185:
				if (((iParam0->f_5 != 4 && !unk_0xC1C5B83BB6719C6C(&(iParam0->f_9), "STEALING_VAN")) && !unk_0xC1C5B83BB6719C6C(&(iParam0->f_9), "GET_IN_VAN")) && !unk_0xC1C5B83BB6719C6C(&(iParam0->f_9), "EXIT_VAN"))
				{
					func_228(iParam0, 3, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case joaat("gunshot"):
				if (iParam0->f_5 != 4)
				{
					func_228(iParam0, 5, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -426892158:
				if (iParam0->f_86)
				{
					func_228(iParam0, 2, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -1461435341:
				if (iParam0->f_86)
				{
					func_228(iParam0, 2, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -972653884:
				if (iParam0->f_87)
				{
					func_228(iParam0, 2, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -520621538:
				if (iParam0->f_87)
				{
					func_228(iParam0, 2, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -1349994105:
				if (iParam0->f_87)
				{
					func_228(iParam0, 2, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -1225951737:
				if (iParam0->f_87)
				{
					func_247(iParam0, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1), 1, 0, bVar24);
				}
				break;
			
			case 2074432461:
				if (iParam0->f_87)
				{
					func_250(iParam0, 1, &(Local_1704[iParam0->f_34 /*32*/].f_1), Local_579[func_96() /*8*/], 1, 0, bVar24);
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
	if (!unk_0xC1C5B83BB6719C6C(&(iParam0->f_25), &(iParam0->f_9)))
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
			switch (unk_0x70ABFF261710305D(&(iParam0->f_9)))
			{
				case joaat("gunshot"):
				case 1921975061:
				case 880647822:
				case joaat("killed"):
				case 1518302817:
				case -1298712083:
					if ((func_260(*iParam0) || (iParam0->f_48 % 2) == 0) || !func_169(Local_469.f_0))
					{
						if ((unk_0x70ABFF261710305D(&(iParam0->f_9)) == joaat("gunshot") || unk_0x70ABFF261710305D(&(iParam0->f_9)) == 1921975061) || unk_0x70ABFF261710305D(&(iParam0->f_9)) == 880647822)
						{
							if (func_237(iVar26))
							{
								Var27 = { func_259(iVar26, "JS_GUN1") };
								if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_258(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_258(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
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
								if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_258(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_258(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
						}
						else if ((unk_0x70ABFF261710305D(&(iParam0->f_9)) == joaat("killed") || unk_0x70ABFF261710305D(&(iParam0->f_9)) == 1518302817) || unk_0x70ABFF261710305D(&(iParam0->f_9)) == -1298712083)
						{
							if (func_237(iVar26))
							{
								Var27 = { func_259(iVar26, "JS_KILL") };
								if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
								{
									func_258(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_258(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else if (iParam0->f_48 == 0)
							{
								func_258(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					else
					{
						if (func_237(iVar26))
						{
							Var27 = { func_259(iVar26, "JS_GETSEC") };
							if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_258(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 1);
							}
							else if (iParam0->f_48 == 0)
							{
								func_258(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
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
							if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_258(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 1);
							}
							else if (iParam0->f_48 == 0)
							{
								func_258(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						iParam0->f_48++;
					}
					break;
			}
			break;
		
		case 4:
			switch (unk_0x70ABFF261710305D(&(iParam0->f_9)))
			{
				case 1224761252:
					if (func_251(*iParam0, 4))
					{
						func_228(iParam0, 4, 0, "GUN_AIMED_AT", 1, 0);
					}
					else if ((unk_0xA0F74982C6AAA9D4() - iParam0->f_37) > 1000)
					{
						func_228(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					break;
				
				case -1645534839:
					if (func_251(*iParam0, 4))
					{
						func_228(iParam0, 4, 1, "GUN_AIMED_AT", 1, 0);
					}
					if (((unk_0xA0F74982C6AAA9D4() - iParam0->f_37) > 15000 || (unk_0xA0F74982C6AAA9D4() - iParam0->f_38) > 3000) && !unk_0x7D2129D13363B0E7(*iParam0))
					{
						func_228(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					else if (func_260(*iParam0) || iParam0->f_48 == 0)
					{
						if (func_237(iVar26))
						{
							Var27 = { func_259(iVar26, "JS_HND1") };
							if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_258(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_258(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
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
							if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_258(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_258(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					else
					{
						if (func_237(iVar26))
						{
							Var27 = { func_259(iVar26, "JS_HND1") };
							if (func_234(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_258(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_258(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
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
							if (func_234(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_258(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_258(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
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
					if (func_43() && (unk_0xA0F74982C6AAA9D4() - iLocal_2519) > 5000)
					{
						switch (iLocal_2549)
						{
							case 0:
								func_234(iVar26, "JS_STOCK", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 1:
								func_234(iVar26, "JS_STOCKb", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 2:
								func_234(iVar26, "JS_STOCKc", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 3:
								func_234(iVar26, "JS_STOCKd", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 4:
								func_234(iVar26, "JS_STOCKe", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 5:
								func_234(iVar26, "JS_STOCKf", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 6:
								func_234(iVar26, "JS_STOCKg", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 7:
								func_234(iVar26, "JS_STOCKh", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 8:
								func_234(iVar26, "JS_STOCKi", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 9:
								func_234(iVar26, "JS_STOCKj", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549++;
								break;
							
							case 10:
								func_234(iVar26, "JS_STOCKk", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2549 = 0;
								break;
							}
					}
					break;
				
				case 2:
					if (!iParam0->f_49)
					{
						if (func_234(iVar26, "SOL1_AMB1", iParam0->f_5, 0, 0, 1, 0, 1, 0, 1))
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
			if (unk_0xC1C5B83BB6719C6C(&(iParam0->f_9), "SEE_VAN_LEAVING") || unk_0xC1C5B83BB6719C6C(&(iParam0->f_9), "CHECK_DRIVER"))
			{
				Var36 = { func_257(unk_0xD7C4E2CB0B216852(unk_0x27D769C59BC9D030(), 0f, 1f, 0f) - unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1)) };
				Var39 = { func_257(unk_0xA8CFDE65C45F813B(Local_28[iVar26 /*110*/], 1) - unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1)) };
				uVar34 = func_256(Var36, Var39);
				fVar35 = unk_0x7D29901A621D1EB3(uVar34);
				if ((fVar35 < 90f && fVar1 < 8f) && unk_0xECC01072E61D2F3A(unk_0x27D769C59BC9D030()) < 1f)
				{
					bVar33 = true;
				}
			}
			switch (unk_0x70ABFF261710305D(&(iParam0->f_9)))
			{
				case -414594135:
				case 1260350710:
					if (func_260(*iParam0) && unk_0xC1C5B83BB6719C6C(&(iParam0->f_9), "SEE_VAN_LEAVING"))
					{
						if (func_237(iVar26))
						{
							Var27 = { func_259(iVar26, "JS_VAN_LVE1") };
							func_234(iVar26, &Var27, iParam0->f_5, 1, 0, 1, 1000, 0, 0, 0);
						}
					}
					else if (bVar33)
					{
						func_250(iParam0, 1, "CHECK_DRIVER", Local_579[func_96() /*8*/], 0, 1, 0);
					}
					else if (func_102(unk_0x27D769C59BC9D030(), Local_642, 1) >= 20f)
					{
						if (fVar1 > 5f)
						{
							func_228(iParam0, 1, 0, "VAN_LOST", 1, 0);
						}
					}
					break;
				
				case 58299323:
					if (func_260(*iParam0))
					{
						Var27 = { func_259(iVar26, "JS_VAN_LVE2") };
						func_234(iVar26, &Var27, iParam0->f_5, 1, 0, 1, 0, 0, 0, 0);
					}
					else if ((unk_0xA0F74982C6AAA9D4() - iParam0->f_37) > 3000)
					{
						func_228(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				
				case 356486511:
					if (bVar33)
					{
						if ((unk_0xA0F74982C6AAA9D4() - iParam0->f_37) > 2000 && !unk_0x7D2129D13363B0E7(*iParam0))
						{
							func_228(iParam0, 3, 1, "STEALING_VAN", 1, 0);
						}
					}
					else
					{
						func_250(iParam0, 1, "SEE_VAN_LEAVING_1", Local_579[func_96() /*8*/], 0, 1, 0);
					}
					break;
				
				case -1225951737:
					if (((unk_0xA0F74982C6AAA9D4() - iParam0->f_37) > 4000 && func_102(*iParam0, iParam0->f_88, 1) < 3f) && unk_0x537945462B3922D7(*iParam0))
					{
						func_228(iParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					else if (func_260(*iParam0))
					{
						if (func_237(iVar26))
						{
							Var27 = { func_259(iVar26, "JS_SND_INV") };
							if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
							{
								func_258(iParam0, &(iParam0->f_9), &Var27, 3f, 3000, 500, 0, 0, 0);
							}
						}
					}
					break;
				
				case -927541383:
					if ((unk_0xA0F74982C6AAA9D4() - iParam0->f_37) > 4000 && !unk_0x7D2129D13363B0E7(*iParam0))
					{
						if (func_237(iVar26))
						{
							Var27 = { func_259(iVar26, "JS_SNDLOST2") };
							func_234(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
						func_228(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					else if (func_260(*iParam0))
					{
						if (func_237(iVar26))
						{
							Var27 = { func_259(iVar26, "JS_SNDLOST1") };
							func_234(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
					}
					break;
			}
			break;
		
		case 3:
			switch (unk_0x70ABFF261710305D(&(iParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
				case -419867425:
					if ((((unk_0xA0F74982C6AAA9D4() - iParam0->f_38) > 8000 && func_102(unk_0x27D769C59BC9D030(), Local_642, 1) > 65f) && (func_101(unk_0x27D769C59BC9D030(), *iParam0, 1) > 10f || (unk_0xA0F74982C6AAA9D4() - iParam0->f_38) > 16000)) && !unk_0x7D2129D13363B0E7(*iParam0))
					{
						func_228(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					else if (func_260(*iParam0) && iParam0->f_35)
					{
						if (!iParam0->f_84)
						{
							if (func_237(iVar26))
							{
								Var27 = { func_259(iVar26, "JS_MELE_1") };
								if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_258(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 0, 0);
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
								if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_258(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							iParam0->f_84 = 1;
						}
						else if (func_237(iVar26))
						{
							Var27 = { func_259(iVar26, "JS_MELE_2") };
							if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_258(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 0, 0);
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
							if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_258(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 0, 0);
							}
						}
					}
					break;
				
				case 1093888274:
					if ((unk_0xA0F74982C6AAA9D4() - iParam0->f_37) > 4000)
					{
						func_228(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					if (func_260(*iParam0))
					{
						if (func_237(iVar26))
						{
							Var27 = { func_259(iVar26, "JS_MELE_ESC") };
							func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
						}
					}
					break;
				
				case 1682434916:
					if (((((unk_0xA0F74982C6AAA9D4() - iParam0->f_37) > 2000 && iParam0->f_39) && !unk_0x7D2129D13363B0E7(*iParam0)) && iLocal_2568 != 9) && iLocal_2568 != 10)
					{
						func_228(iParam0, 3, 0, "EXIT_VAN", 1, 0);
					}
					if (func_260(*iParam0))
					{
						if (func_237(iVar26))
						{
							Var27 = { func_259(iVar26, "JS_VAN_IN2") };
							if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_258(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_258(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
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
							if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_258(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_258(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (func_43() && (unk_0xA0F74982C6AAA9D4() - iLocal_2519) > 2000)
					{
						if (func_237(iVar26))
						{
							Var27 = { func_259(iVar26, "JS_VAN_TK") };
							if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_258(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
						}
					}
					break;
				
				case -924218668:
					if (func_260(*iParam0))
					{
						if (func_237(iVar26))
						{
							Var27 = { func_259(iVar26, "JS_VAN_IN1") };
							if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_258(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_258(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
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
							if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_258(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_258(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (func_43() && (unk_0xA0F74982C6AAA9D4() - iLocal_2519) > 2000)
					{
						if (func_237(iVar26))
						{
							Var27 = { func_259(iVar26, "JS_VAN_TK") };
							if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_258(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_258(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
				
				case 2056033185:
					if (func_260(*iParam0))
					{
						if (func_237(iVar26))
						{
							Var27 = { func_259(iVar26, "JS_VAN_IN2") };
							if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_258(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_258(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
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
							if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_258(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_258(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 2:
			if ((unk_0xA0F74982C6AAA9D4() - iParam0->f_38) > 5000 && !unk_0x7D2129D13363B0E7(*iParam0))
			{
				if (iVar26 == 1)
				{
					func_234(iVar26, "JS_STOCK2", 0, 0, 0, 1, 1000, 0, 0, 0);
					iLocal_2549 = 0;
				}
				func_228(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
			}
			else
			{
				if (iParam0->f_39)
				{
					if ((unk_0xA0F74982C6AAA9D4() - iParam0->f_38) > 1000 && !unk_0x7D2129D13363B0E7(*iParam0))
					{
						if (((unk_0xC1C5B83BB6719C6C(&(iParam0->f_9), "ENT_FOOT") || unk_0xC1C5B83BB6719C6C(&(iParam0->f_9), "ENT_VEH")) || unk_0xC1C5B83BB6719C6C(&(iParam0->f_9), "WH_FOOT")) || unk_0xC1C5B83BB6719C6C(&(iParam0->f_9), "WH_VEH"))
						{
							Var42 = { iParam0->f_9 };
							StringConCat(&Var42, "_LEAVE", 32);
							func_228(iParam0, 2, 0, &Var42, 1, 0);
						}
					}
					if ((unk_0xC1C5B83BB6719C6C(&(iParam0->f_9), "WH_FOOT") || unk_0xC1C5B83BB6719C6C(&(iParam0->f_9), "WH_VEH")) || (unk_0xC1C5B83BB6719C6C(&(iParam0->f_9), "WH_DITCH_VEH") && !unk_0x7D2129D13363B0E7(*iParam0)))
					{
						if (((iParam0->f_104 >= 6 && iLocal_2519 != -1) && (unk_0xA0F74982C6AAA9D4() - iLocal_2519) > 7000) && (unk_0xA0F74982C6AAA9D4() - iParam0->f_38) == 0)
						{
							func_228(iParam0, 3, 0, "WH_FAILED_LEAVE", 1, 0);
						}
					}
				}
				switch (unk_0x70ABFF261710305D(&(iParam0->f_9)))
				{
					case -426892158:
						if (func_260(*iParam0))
						{
							if (!iParam0->f_82)
							{
								if (func_237(iVar26))
								{
									if (!iParam0->f_83)
									{
										Var27 = { func_259(iVar26, "JS_ENT_F1") };
										func_234(iVar26, &Var27, iParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
									else
									{
										Var27 = { func_259(iVar26, "JS_ENT_F1_P") };
										func_234(iVar26, &Var27, iParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
								}
							}
							else if (func_237(iVar26))
							{
								if (!iParam0->f_83)
								{
									Var27 = { func_259(iVar26, "JS_ENT_F2") };
									func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
								else
								{
									Var27 = { func_259(iVar26, "JS_ENT_F2_P") };
									func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
							}
							iParam0->f_82 = 1;
						}
						else if (func_43() && (unk_0xA0F74982C6AAA9D4() - iLocal_2519) > 5000)
						{
							if (func_237(iVar26))
							{
								if (!iParam0->f_83)
								{
									Var27 = { func_259(iVar26, "JS_ENT_F") };
									func_234(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								else
								{
									Var27 = { func_259(iVar26, "JS_ENT_F_P") };
									func_234(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
							}
						}
						break;
					
					case -1461435341:
						if (func_260(*iParam0) || iParam0->f_48 == 0)
						{
							if (!iParam0->f_82)
							{
								if (func_237(iVar26))
								{
									Var27 = { func_259(iVar26, "JS_ENT_V1") };
									if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
									{
										iParam0->f_48++;
									}
								}
								iParam0->f_82 = 1;
							}
							else if (unk_0xC1C5B83BB6719C6C(&(iParam0->f_17), "WH_VEH"))
							{
								if (func_237(iVar26))
								{
									Var27 = { func_259(iVar26, "JS_ENT_V") };
									if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
									{
										iParam0->f_48++;
									}
								}
							}
							else if (func_237(iVar26))
							{
								Var27 = { func_259(iVar26, "JS_ENT_V3") };
								if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									iParam0->f_48++;
								}
							}
						}
						else if (func_43() && (unk_0xA0F74982C6AAA9D4() - iLocal_2519) > 5000)
						{
							if (func_237(iVar26))
							{
								Var27 = { func_259(iVar26, "JS_ENT_V3") };
								func_234(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							}
						}
						break;
					
					case -972653884:
						if (func_260(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_237(iVar26))
								{
									Var27 = { func_259(iVar26, "JS_WH1") };
									if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_258(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_258(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_237(iVar26))
								{
									Var27 = { func_259(iVar26, "JS_WH2") };
									if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_258(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_258(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (func_43() && (unk_0xA0F74982C6AAA9D4() - iLocal_2519) > 5000)
							{
								if (func_237(iVar26))
								{
									if (iParam0->f_104 < 5)
									{
										Var27 = { func_259(iVar26, "JS_WH") };
									}
									else
									{
										Var27 = { func_259(iVar26, "JS_WH_F") };
									}
									if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_258(iParam0, &(iParam0->f_9), &Var27, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_258(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case -640827668:
						if (func_260(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_237(iVar26))
								{
									Var27 = { func_259(iVar26, "JS_WH1") };
									if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_258(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_258(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_237(iVar26))
								{
									Var27 = { func_259(iVar26, "JS_WH2") };
									if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_258(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_258(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (func_43() && (unk_0xA0F74982C6AAA9D4() - iLocal_2519) > 5000)
							{
								if (func_237(iVar26))
								{
									if (iParam0->f_104 < 5)
									{
										if (((iParam0->f_104 - 1) % 2) == 0)
										{
											Var27 = { func_259(iVar26, "JS_ENT_V4") };
										}
										else
										{
											Var27 = { func_259(iVar26, "JS_ENT_V3") };
										}
									}
									else
									{
										Var27 = { func_259(iVar26, "JS_WH_F") };
									}
									if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_258(iParam0, &(iParam0->f_9), &Var27, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_258(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case -520621538:
						if (func_260(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_237(iVar26))
								{
									Var27 = { func_259(iVar26, "JS_WH1") };
									if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_258(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_258(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_237(iVar26))
								{
									Var27 = { func_259(iVar26, "JS_WH2") };
									if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_258(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_258(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (func_43() && (unk_0xA0F74982C6AAA9D4() - iLocal_2519) > 5000)
							{
								if (func_237(iVar26))
								{
									if (iParam0->f_104 < 5)
									{
										if (((iParam0->f_104 - 1) % 2) == 0)
										{
											Var27 = { func_259(iVar26, "JS_ENT_V3") };
										}
										else
										{
											Var27 = { func_259(iVar26, "JS_WH") };
										}
									}
									else
									{
										Var27 = { func_259(iVar26, "JS_WH_F") };
									}
									if (func_234(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_258(iParam0, &(iParam0->f_9), &Var27, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_258(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case 778765338:
						if (iParam0->f_48 == 0)
						{
							if (func_43() && (unk_0xA0F74982C6AAA9D4() - iLocal_2519) > 1000)
							{
								if (func_237(iVar26))
								{
									Var27 = { func_259(iVar26, "JS_ENT_V4") };
									func_234(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								iParam0->f_48++;
							}
						}
						else if (func_43() && (unk_0xA0F74982C6AAA9D4() - iLocal_2519) > 5000)
						{
							if (((iParam0->f_48 - 1) % 3) == 0)
							{
								Var27 = { func_259(iVar26, "JS_ENT_V4") };
							}
							else
							{
								Var27 = { func_259(iVar26, "JS_ENT_V3") };
							}
							func_234(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							iParam0->f_48++;
						}
						break;
					
					case 1580556320:
						if (iParam0->f_48 == 0)
						{
							if (func_43() && (unk_0xA0F74982C6AAA9D4() - iLocal_2519) > 1000)
							{
								if (func_237(iVar26))
								{
									if (!iParam0->f_83)
									{
										Var27 = { func_259(iVar26, "JS_ENT_F3") };
										func_234(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
									}
									else
									{
										Var27 = { func_259(iVar26, "JS_ENT_F3_P") };
										func_234(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
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
							if (func_43() && (unk_0xA0F74982C6AAA9D4() - iLocal_2519) > 1000)
							{
								if (func_237(iVar26))
								{
									Var27 = { func_259(iVar26, "JS_ENT_V5") };
									func_234(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
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

float func_256(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_257(struct<3> Param0)
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

void func_258(int iParam0, char* sParam1, char* sParam2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8)
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
		func_231(&(iParam0->f_50), 0);
	}
}

struct<6> func_259(int iParam0, char* sParam1)
{
	struct<6> Var0;
	
	StringCopy(&Var0, sParam1, 24);
	if (iParam0 == 1)
	{
		StringConCat(&Var0, "b", 24);
	}
	return Var0;
}

int func_260(struct<34> Param0, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109)
{
	if (Param0.f_8 || Param0.f_33)
	{
		return 1;
	}
	return 0;
}

void func_261(int iParam0)
{
	if (unk_0x8B9546E15CCA42CC(*iParam0, unk_0x27D769C59BC9D030()))
	{
		iParam0->f_40 = unk_0xA0F74982C6AAA9D4();
		iParam0->f_39 = 1;
	}
	else if ((unk_0xA0F74982C6AAA9D4() - iParam0->f_40) > 2000 || !unk_0xB1D18B06E0525A9E(*iParam0, unk_0x27D769C59BC9D030(), 90f))
	{
		iParam0->f_40 = unk_0xA0F74982C6AAA9D4();
		iParam0->f_39 = 0;
	}
	if (iParam0->f_39)
	{
		bLocal_2565 = false;
	}
	if (bLocal_2565)
	{
		unk_0xC908FA7A5EBB2825(*iParam0, 188, 1);
	}
	if (!func_262())
	{
		iParam0->f_41 = unk_0x3D36DEF64E43A302(unk_0x4D29100D094E5511(), *iParam0);
		if (iParam0->f_41)
		{
			iParam0->f_43 = { unk_0xA8CFDE65C45F813B(unk_0x27D769C59BC9D030(), 1) };
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

int func_262()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (unk_0xD2CFFE76B625AE55(Local_579[iVar0 /*8*/]) && unk_0x0B4DDB992C7BCF57(Local_579[iVar0 /*8*/], 0))
		{
			if (unk_0x3E5C6F3596BA7A15(Local_579[iVar0 /*8*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_263()
{
	struct<3> Var0;
	var uVar3;
	
	unk_0x5974EAB5457E93B2("BUGSTAR", &iLocal_2520);
	unk_0xED5347CD6B7B01FA(3, joaat("player"), iLocal_2520);
	unk_0xED5347CD6B7B01FA(5, iLocal_2520, joaat("player"));
	unk_0xED5347CD6B7B01FA(1, joaat("COP"), iLocal_2520);
	unk_0xED5347CD6B7B01FA(1, iLocal_2520, joaat("COP"));
	unk_0x5B40EC93D0367189(Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f), Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f), 0, 1);
	unk_0x2FA9C6D79054F1BE(Vector(7.27131f, -3092.467f, 138.4268f) - Vector(2.375f, 22.75f, 19.4375f), Vector(7.27131f, -3092.467f, 138.4268f) + Vector(2.375f, 22.75f, 19.4375f), 0);
	unk_0xEFA71310CAEBAE1F(138.43f, -3092.47f, 4.9f, 28.375f, 1, 0, 0, 0);
	if (func_183() || func_6(0))
	{
		iLocal_655 = 0;
		if (func_183())
		{
			if (Global_85788)
			{
				iLocal_655++;
			}
		}
		if (func_183())
		{
			func_215(iLocal_655, &Var0, &uVar3);
			func_269(Var0, uVar3, 1, 0);
		}
		bLocal_654 = true;
	}
	else
	{
		while (!func_178(1))
		{
			unk_0x4EDE34FBADD967A6(0);
			func_268(&uLocal_658);
		}
	}
	func_267(&uLocal_658, "JHP1A", 0);
	func_210(&uLocal_658, "misslsdhsclipboard@base");
	func_210(&uLocal_658, "misslsdhsclipboard@idle_a");
	func_210(&uLocal_658, "misstrevor3");
	func_161(&uLocal_658, joaat("p_amb_clipboard_01"));
	func_209(&uLocal_658, iLocal_2522);
	func_211(&uLocal_658, &cLocal_645);
	unk_0xA0E6CCD4DFBA5CBA(unk_0x4D29100D094E5511(), 0.15f);
	func_265(87);
	func_40(&uLocal_2353, 0, unk_0x27D769C59BC9D030(), "MICHAEL", 0, 1);
	func_40(&uLocal_2353, 3, 0, "LESTER", 0, 1);
	func_233(bLocal_2518);
	func_264();
	iLocal_2522 = unk_0x695481387D3FCB8D(Local_642, "po1_08_warehouseint1");
	unk_0x90F076E311C149C5(&cLocal_626);
	iLocal_2573 = unk_0x84496C593C3C7F04(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0, 1, 1, 1);
	while (!unk_0x911CCA58116D31F0(0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_264()
{
	Global_85789 = 1;
}

void func_265(int iParam0)
{
	Global_87466 = 0;
	switch (iParam0)
	{
		case 72:
			func_266(2);
			func_266(4);
			break;
		
		case 73:
			func_266(0);
			func_266(1);
			func_266(7);
			break;
		
		case 92:
			func_266(10);
			func_266(9);
			func_266(13);
			func_266(6);
			break;
		
		case 68:
			func_266(11);
			break;
		
		case 78:
			func_266(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_266(3);
			break;
		
		default:
			break;
	}
}

void func_266(int iParam0)
{
	unk_0x26545538B51562AD(&Global_87466, iParam0);
}

int func_267(var uParam0, char* sParam1, int iParam2)
{
	if (uParam0->f_779[iParam2 /*5*/].f_1 || uParam0->f_779[iParam2 /*5*/])
	{
		if (unk_0xC1C5B83BB6719C6C(uParam0->f_779[iParam2 /*5*/].f_4, sParam1))
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
			unk_0x1DE7DE1986BBED16(sParam1, iParam2);
		}
		else
		{
			unk_0x8378AB3CED5FF44A(sParam1, iParam2);
		}
		uParam0->f_779[iParam2 /*5*/] = 1;
		uParam0->f_779[iParam2 /*5*/].f_3 = unk_0xA0F74982C6AAA9D4();
		uParam0->f_779[iParam2 /*5*/].f_4 = sParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

void func_268(var uParam0)
{
	func_217(uParam0);
}

void func_269(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (func_183())
	{
		unk_0xF160EBCA8FFA0E2A(0);
		unk_0xF17F4B0641AB2DE1(&(Global_91278.f_20), 2);
		unk_0x42B9806B3EED4C70(1);
		if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
		{
			unk_0x9F805E4A6F671CEE(unk_0x4D29100D094E5511(), 0, 0);
		}
		Global_91274 = { Param0 };
		Global_91277 = uParam3;
		Global_91273 = 1;
		if (iParam4 == 1)
		{
			unk_0x26545538B51562AD(&(Global_91278.f_20), 14);
		}
		else
		{
			unk_0xF17F4B0641AB2DE1(&(Global_91278.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0x26545538B51562AD(&(Global_91278.f_20), 24);
		}
		else
		{
			unk_0xF17F4B0641AB2DE1(&(Global_91278.f_20), 24);
		}
		func_182(1);
	}
}

void func_270(int iParam0)
{
	struct<3> Var0;
	char[] cVar6[8];
	
	if (iParam0 == 6)
	{
		func_282();
		func_8(0);
		unk_0x68BD4F826EFDDC53("JHP1A_FAIL");
		unk_0x7C3AA2D27E16E2AD();
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
		if (unk_0x75CB9E30BA492FF0(&cVar6))
		{
			func_280(&Var0);
		}
		else
		{
			func_271(&Var0, &cVar6);
		}
		unk_0x68BD4F826EFDDC53("JHP1A_FAIL");
	}
}

void func_271(char* sParam0, char* sParam1)
{
	func_279(sParam0, sParam1);
	func_272(0);
}

void func_272(int iParam0)
{
	int iVar0;
	
	if (Global_101154.f_7775 || func_6(0))
	{
		iVar0 = func_4();
		if (!func_273(iVar0))
		{
			return;
		}
		unk_0x26545538B51562AD(&(Global_82363[iVar0 /*5*/].f_1), 5);
		Global_91314 = iParam0;
	}
}

int func_273(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_278();
	if (unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		unk_0x7D2EAD19B9630AC7(5000);
	}
	iVar0 = Global_82363[iParam0 /*5*/];
	iVar1 = Global_69758.f_109[iVar0 /*4*/];
	func_277(iVar1, 1);
	unk_0x2FFA718F35114C82(unk_0x4D29100D094E5511());
	unk_0x69C3634DD9DA38D2(unk_0x4D29100D094E5511());
	func_274(&(Global_101154.f_1826.f_539), iVar1);
	if (Global_85786 == Global_91315)
	{
		Global_101154.f_7775.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xF426A5DE932B3BEE(Global_82399[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
		{
			unk_0xFB56942BE14F95CB(0);
		}
	}
	Global_101154.f_7775.f_330[iVar1 /*6*/].f_2++;
	Global_85786 = Global_91315;
	if (iParam0 == -1)
	{
		if (Global_101154.f_7775)
		{
		}
		return 0;
	}
	if (unk_0xF426A5DE932B3BEE(Global_82363[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xF426A5DE932B3BEE(Global_82363[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_274(var uParam0, int iParam1)
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
		iVar1 = Global_101154.f_17223[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xF426A5DE932B3BEE(Global_101154.f_7775.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_276(Global_101154.f_17223[iVar0], &Var2, &fVar5))
			{
				Global_101154.f_17223[iVar0] = 318;
				func_275(&(uParam0->f_1524[iVar0]));
				uParam0->f_1528[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_1556[iVar0] = 0;
				Global_89001[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_89001[iVar0 /*29*/].f_9 = 0f;
				Global_89001[iVar0 /*29*/].f_12 = 0f;
				Global_89001[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_89001[iVar0 /*29*/].f_10 = 0f;
				Global_89001[iVar0 /*29*/].f_13 = 0f;
				Global_89001[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_89001[iVar0 /*29*/].f_11 = 0f;
				Global_89001[iVar0 /*29*/].f_14 = 0f;
				Global_89001[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_89001[iVar0 /*29*/].f_26 = 0f;
				Global_89001[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_89001[iVar0 /*29*/].f_27 = 0f;
				Global_89001[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_89001[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_275(var uParam0)
{
	*uParam0 = -15;
}

int func_276(int iParam0, var uParam1, float fParam2)
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
			return func_276(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_276(8, uParam1, fParam2);
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

void func_277(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_85596[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_85596[iParam0 /*2*/] = 0;
	}
}

void func_278()
{
	Global_91313 = 1;
	if (unk_0xA3626A14E36A87F3(unk_0x4D29100D094E5511(), 1))
	{
		if (unk_0x75CB9E30BA492FF0(&Global_69721))
		{
			switch (func_156())
			{
				case 0:
					StringCopy(&Global_69721, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_69721, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_69721, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_69725, "", 16);
		}
		Global_91313 = 0;
	}
	else if (!unk_0x2DB75A8F096AB1F1(unk_0x4D29100D094E5511()))
	{
		if (unk_0x75CB9E30BA492FF0(&Global_69721))
		{
			switch (func_156())
			{
				case 0:
					StringCopy(&Global_69721, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_69721, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_69721, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_69725, "", 16);
		}
		Global_91313 = 0;
		unk_0x26545538B51562AD(&(Global_91278.f_20), 25);
	}
}

void func_279(char* sParam0, char* sParam1)
{
	if (!unk_0x75CB9E30BA492FF0(sParam0))
	{
		if (unk_0x1DA63F254F38C8A7(sParam0) <= 16)
		{
			if (unk_0x1DA63F254F38C8A7(sParam1) <= 16)
			{
				StringCopy(&Global_69721, sParam0, 16);
				StringCopy(&Global_69725, sParam1, 16);
			}
		}
	}
}

void func_280(char* sParam0)
{
	func_281(sParam0);
	func_272(0);
}

void func_281(char* sParam0)
{
	if (!unk_0x75CB9E30BA492FF0(sParam0))
	{
		if (unk_0x1DA63F254F38C8A7(sParam0) <= 16)
		{
			StringCopy(&Global_69721, sParam0, 16);
			StringCopy(&Global_69725, "", 16);
			if (unk_0x49279CC117071237())
			{
				unk_0xFD60997054FB930F();
			}
		}
	}
}

void func_282()
{
	int iVar0;
	
	if (unk_0x9A8E9A1E029E9A5A("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_101154.f_7775 || func_6(0))
	{
		if (!func_283())
		{
			iVar0 = func_4();
			if (iVar0 != -1)
			{
				if (!func_273(iVar0))
				{
					return;
				}
				unk_0x26545538B51562AD(&(Global_82363[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_278();
		}
	}
}

int func_283()
{
	if (((Global_91278 == 13 || Global_91278 == 10) || Global_91278 == 11) || Global_91278 == 12)
	{
		return 0;
	}
	return 1;
}

