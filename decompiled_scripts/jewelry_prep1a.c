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
	struct<110> Local_27[4];
	struct<94> Local_468 = { 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1 } ;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = -1;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = -1;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	struct<8> Local_578[5];
	int iLocal_619[1] = { 0 };
	struct<4> Local_621 = { 0, 0, 0, 0 } ;
	char cLocal_625[64] = "";
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	struct<3> Local_641 = { 0, 0, 0 } ;
	char cLocal_644[24] = "";
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	int iLocal_650 = 0;
	int iLocal_651 = 0;
	bool bLocal_652 = 0;
	bool bLocal_653 = 0;
	int iLocal_654 = 0;
	bool bLocal_655 = 0;
	int iLocal_656 = 0;
	var uLocal_657 = 30;
	var uLocal_658 = 0;
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
	var uLocal_808 = 10;
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
	var uLocal_859 = 10;
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
	var uLocal_930 = 20;
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
	var uLocal_1031 = 20;
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
	var uLocal_1132 = 30;
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
	var uLocal_1313 = 5;
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
	var uLocal_1344 = 7;
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
	var uLocal_1394 = 5;
	var uLocal_1395 = 0;
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
	var uLocal_1420 = 3;
	var uLocal_1421 = 0;
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
	var uLocal_1436 = 15;
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
	var uLocal_1531 = 10;
	var uLocal_1532 = 0;
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
	var uLocal_1582 = 5;
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
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 5;
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
	int* iLocal_1637 = NULL;
	var uLocal_1638 = 3;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 1092616192;
	var uLocal_1645 = 1101004800;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 3;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	struct<8> Local_1662[5];
	struct<32> Local_1703[20];
	char cLocal_2344[32] = "";
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 16;
	var uLocal_2353 = 0;
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
	bool bLocal_2517 = 0;
	int iLocal_2518 = 0;
	int iLocal_2519 = 0;
	int iLocal_2520 = 0;
	int iLocal_2521 = 0;
	int iLocal_2522 = 0;
	int iLocal_2523 = 0;
	char cLocal_2524[16] = "";
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	char cLocal_2528[16] = "";
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	int iLocal_2532 = 0;
	float fLocal_2533 = 0f;
	int iLocal_2534 = 0;
	int iLocal_2535 = 0;
	int iLocal_2536 = 0;
	int iLocal_2537 = 0;
	int iLocal_2538 = 0;
	int iLocal_2539 = 0;
	char cLocal_2540[16] = "";
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	int iLocal_2544 = 0;
	int iLocal_2545 = 0;
	bool bLocal_2546 = 0;
	int iLocal_2547 = 0;
	int iLocal_2548 = 0;
	int iLocal_2549 = 0;
	int iLocal_2550 = 0;
	struct<2> Local_2551 = { 0, 0 } ;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	struct<2> Local_2555 = { 0, 0 } ;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	int iLocal_2559 = 0;
	bool bLocal_2560 = 0;
	int iLocal_2561 = 0;
	int iLocal_2562 = 0;
	int iLocal_2563 = 0;
	bool bLocal_2564 = 0;
	int iLocal_2565 = 0;
	int iLocal_2566 = 0;
	int iLocal_2567 = 0;
	int iLocal_2568 = 0;
	int iLocal_2569 = 0;
	int iLocal_2570 = 0;
	int iLocal_2571 = 0;
	int iLocal_2572 = 0;
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
	StringCopy(&Local_621, "JHP1ADS", 16);
	StringCopy(&cLocal_625, "JEWEL_STORE_HEIST_SETUP_BUGSTAR_ALARMS", 64);
	Local_641 = { 154.9478f, -3092.523f, 4.911984f };
	StringCopy(&cLocal_644, "jhp1a_sec_arrive", 24);
	iLocal_650 = 0;
	iLocal_656 = 6;
	iLocal_2518 = -1;
	iLocal_2522 = -1;
	iLocal_2523 = -1;
	StringCopy(&cLocal_2524, "", 16);
	StringCopy(&cLocal_2528, "", 16);
	fLocal_2533 = 1E+08f;
	iLocal_2536 = 1;
	iLocal_2539 = -1;
	StringCopy(&cLocal_2540, "", 16);
	iLocal_2544 = -1;
	iLocal_2545 = 1;
	iLocal_2549 = -1;
	iLocal_2550 = -1;
	StringCopy(&Local_2551, "", 16);
	StringCopy(&Local_2555, "", 16);
	iLocal_2559 = 1;
	iLocal_2561 = 1;
	iLocal_2565 = -1;
	iLocal_2567 = -1;
	iLocal_2568 = -1;
	if (unk_0xC968670BFACE42D9(3))
	{
		func_266(6);
	}
	unk_0xC4301E5121A0ED73(true);
	func_259();
	func_218();
	while (true)
	{
		unk_0x208784099002BC30("M_JewelStoreJobPrep1A", 0);
		if (bLocal_655)
		{
			func_216();
		}
		func_213(&uLocal_657);
		func_176();
		if (!bLocal_653)
		{
			func_174();
			func_163();
			func_162(&Local_1662);
		}
		func_1();
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1()
{
	switch (iLocal_650)
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
	
	if ((iLocal_2568 != -1 && unk_0x7239B21A38F536BA(Local_578[iLocal_2568 /*8*/])) && unk_0x4C241E39B23DF959(Local_578[iLocal_2568 /*8*/], false))
	{
		iVar0 = unk_0xEEF059FAD016D209(Local_578[iLocal_2568 /*8*/]);
		func_23(Local_578[iLocal_2568 /*8*/], -1);
	}
	if (iVar0 >= 750 || iVar0 <= 0)
	{
		Global_86614 = 1000;
	}
	else
	{
		Global_86614 = iVar0;
	}
	if (!func_22(&(Local_1662[3 /*8*/])))
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
	unk_0x1090044AD1DA76FA();
}

void func_3(bool bParam0, int iParam1)
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
		if ((func_6(0) && Global_68313.f_1 == 1) && func_5(Global_68313))
		{
		}
		else
		{
			Global_54572 = 1;
		}
	}
	if (Global_97173.f_7311 || func_6(0))
	{
		iVar0 = func_4();
		iVar1 = Global_80941[iVar0 /*5*/];
		uVar2 = Global_68336.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_97173.f_7311)
			{
			}
			return;
		}
		if (unk_0xA921AA820C25702F(Global_80941[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xA921AA820C25702F(Global_80941[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0x933D6A9EEC1BACD0(&(Global_80941[iVar0 /*5*/].f_1), 4);
		unk_0x933D6A9EEC1BACD0(&Global_68315, 1);
		Global_68331 = uVar2;
		Global_68332 = unk_0x9CD27B0045628463();
	}
}

int func_4()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xA921AA820C25702F(Global_80941[iVar0 /*5*/].f_1, 2))
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
	if (!bParam0 && unk_0x2C83A9DA6BFFC4F9(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xA921AA820C25702F(Global_68315, 0);
}

int func_7(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_97173.f_7311.f_325[iParam0 /*6*/];
}

void func_8(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0xCC33FA791322B9D9();
	unk_0x8DFCED7A656F8802(true);
	if (bParam0)
	{
		unk_0xB302540597885499(unk_0x4F8644AF03D0E0D6());
		unk_0x706D57B0F50DA710("JHP1A_FAIL");
	}
	else
	{
		unk_0x020E5F00CDA207BA(1f);
		unk_0xDB89EF50FF25FCE9(unk_0x4F8644AF03D0E0D6(), 1f);
	}
	unk_0xAA5F02DB48D704B9(5);
	unk_0xDB172424876553F4(unk_0x4F8644AF03D0E0D6(), true);
	unk_0x102E68B2024D536D(true);
	func_18(&Local_1662);
	func_13(&iLocal_1637, 1, 0);
	bLocal_2517 = false;
	iLocal_2518 = -1;
	iLocal_2562 = 0;
	iLocal_2563 = 0;
	bLocal_2564 = false;
	iLocal_2565 = -1;
	iLocal_2567 = -1;
	iLocal_2568 = -1;
	iLocal_2569 = 0;
	iLocal_2570 = 0;
	iLocal_2566 = 0;
	if (bParam0)
	{
		func_11();
		unk_0xAAA34F8A7CB32098(unk_0xD80958FC74E988A6());
		unk_0xB302540597885499(unk_0x4F8644AF03D0E0D6());
		unk_0xBE31FD6CE464AC59(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0x04F8FC8FCF58F88D(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0xDD9B9B385AAC7F5B(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0x01C7B9B38428AEB6(158.78f, -3100.44f, 6.0019f, 100f, 0, 0, 0, 0, 0);
		unk_0x0A1CB9094635D1A6(158.78f, -3100.44f, 6.0019f, 100f, 0);
		unk_0x5D6B2D4830A67C62(158.78f, -3100.44f, 6.0019f, 100f);
	}
	iVar0 = 0;
	while (iVar0 < iLocal_619)
	{
		if (unk_0x7239B21A38F536BA(iLocal_619[iVar0]))
		{
			if (bParam0)
			{
				unk_0x539E0AE3E6634B9F(&(iLocal_619[iVar0]));
			}
			else
			{
				unk_0x3AE22DEB5BA5A3E6(&(iLocal_619[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_27.f_0)
	{
		func_10(&(Local_27[iVar0 /*110*/]), bParam0);
		iVar0++;
	}
	func_10(&Local_468, bParam0);
	iVar0 = 0;
	while (iVar0 < Local_578.f_0)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (unk_0x7239B21A38F536BA(Local_578[iVar0 /*8*/].f_2[iVar1]))
			{
				if (bParam0)
				{
					unk_0x9614299DCB53E54B(&(Local_578[iVar0 /*8*/].f_2[iVar1]));
				}
				else
				{
					unk_0x2595DD4236549CE3(&(Local_578[iVar0 /*8*/].f_2[iVar1]));
				}
			}
			iVar1++;
		}
		if (unk_0x7239B21A38F536BA(Local_578[iVar0 /*8*/]))
		{
			if (bParam0)
			{
				unk_0xEA386986E786A54F(&(Local_578[iVar0 /*8*/]));
			}
			else
			{
				unk_0x629BFA74418D6239(&(Local_578[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
	if (unk_0x226435CB96CCFC8C(&cLocal_625))
	{
		unk_0xA1CADDCD98415A41(&cLocal_625, bParam0);
	}
	if (iLocal_2572 != 0)
	{
		unk_0x31D16B74C6E29D66(iLocal_2572, false);
	}
	func_9();
}

void func_9()
{
	Global_86044 = 0;
}

void func_10(int* iParam0, bool bParam1)
{
	if (unk_0x7239B21A38F536BA(*iParam0))
	{
		if (bParam1)
		{
			unk_0x9614299DCB53E54B(iParam0);
		}
		else
		{
			unk_0x2595DD4236549CE3(iParam0);
		}
	}
	iParam0->f_5 = 0;
	iParam0->f_6 = -1;
	iParam0->f_7 = -1;
	iParam0->f_39 = 0;
	iParam0->f_41 = 0;
	iParam0->f_93 = 1;
	iParam0->f_102 = 0;
	iParam0->f_47 = 0;
	iParam0->f_46 = 0;
	iParam0->f_48 = 0;
	iParam0->f_37 = -1;
	iParam0->f_103 = -1;
	iParam0->f_40 = 0;
	iParam0->f_92 = -1;
	iParam0->f_43 = { 0f, 0f, 0f };
	iParam0->f_88 = { 0f, 0f, 0f };
	iParam0->f_91 = 0;
	if (unk_0x7239B21A38F536BA(iParam0->f_105))
	{
		if (unk_0xB346476EF1A64897(iParam0->f_105))
		{
			unk_0x961AC54BF0613F5D(iParam0->f_105, true, true);
		}
		if (bParam1)
		{
			unk_0x539E0AE3E6634B9F(&(iParam0->f_105));
		}
		else
		{
			unk_0x3AE22DEB5BA5A3E6(&(iParam0->f_105));
		}
	}
	iParam0->f_106 = -1;
	iParam0->f_107 = 0;
	iParam0->f_109 = 0;
	iParam0->f_104 = 0;
}

void func_11()
{
	Global_14558 = 0;
	func_12();
}

void func_12()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
	}
}

void func_13(int* iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0xA921AA820C25702F(iParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_17(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xA6DB27D19ECBB7DA(iParam0->f_1[iVar0]))
		{
			unk_0x86A652570E5F25DD(&(iParam0->f_1[iVar0]));
		}
		func_16(iVar0, iParam0);
		func_15(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			unk_0xE80492A9AC099A93(&(iParam0->f_13), iVar0);
			unk_0xE80492A9AC099A93(&(iParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (unk_0xA6DB27D19ECBB7DA(*iParam0))
	{
		unk_0x86A652570E5F25DD(iParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_12 = 0;
	iParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[iVar0]))
		{
			unk_0x6373D1349925A70E(iParam0->f_17[iVar0], true);
			unk_0x0EB0585D15254740(iParam0->f_17[iVar0], true);
			if (bParam2)
			{
				unk_0x1913FE4CBF41C463(iParam0->f_17[iVar0], 32, true);
				unk_0x1913FE4CBF41C463(iParam0->f_17[iVar0], 305, false);
			}
			unk_0x1913FE4CBF41C463(iParam0->f_17[iVar0], 268, false);
			if (bParam1)
			{
				if (unk_0x9BB01E3834671191(iParam0->f_17[iVar0], func_14()) && iParam0->f_17[iVar0] != unk_0xD80958FC74E988A6())
				{
					unk_0xED74007FFB146BC2(iParam0->f_17[iVar0]);
				}
			}
			if (!unk_0xA921AA820C25702F(iParam0->f_13, 29))
			{
				unk_0xD75ACCF5E0FB5367(iParam0->f_17[iVar0], false, -1, 0);
			}
			iParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		unk_0x6373D1349925A70E(unk_0xD80958FC74E988A6(), true);
		unk_0x0EB0585D15254740(unk_0xD80958FC74E988A6(), true);
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (bParam2)
		{
			unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 32, true);
		}
	}
	iParam0->f_21 = 0;
}

int func_14()
{
	return unk_0x0D127585F77030AF(unk_0xA5EDC40EF369B48D());
}

void func_15(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xE80492A9AC099A93(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0xE80492A9AC099A93(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0xE80492A9AC099A93(&(uParam1->f_13), 19);
			break;
	}
}

void func_16(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xE80492A9AC099A93(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0xE80492A9AC099A93(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0xE80492A9AC099A93(&(uParam1->f_13), 16);
			break;
	}
}

void func_17(int* iParam0)
{
	if (unk_0xA6DB27D19ECBB7DA(iParam0->f_5))
	{
		unk_0x86A652570E5F25DD(&(iParam0->f_5));
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
	
	Global_54573 = 0;
	if (!Global_54797[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_66667)
	{
		if (Global_66668[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_66668[iVar1 /*9*/].f_1 = 1;
			Global_66668[iVar1 /*9*/].f_2 = 0f;
			if (Global_66668[iVar1 /*9*/].f_3 == 2)
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

void func_24(int iParam0)
{
	if (iParam0 == 2)
	{
	}
	else
	{
		iLocal_651 = 0;
		bLocal_652 = false;
		iLocal_650 = iParam0;
	}
}

int func_25()
{
	bool bVar0;
	
	if (!bLocal_652)
	{
		func_161(&uLocal_657, "SCRIPT\JWL_HA_RAID_STORE");
		func_160(&uLocal_657, joaat("s_m_m_security_01"));
		func_159(&(Local_1662[1 /*8*/]), 0, 0, 1);
		func_159(&(Local_1662[0 /*8*/]), 0, 0, 1);
		func_159(&(Local_1662[4 /*8*/]), 0, 0, 1);
		func_105(0f, 0f, 0f, 0f, 1, func_155());
		Global_86614 = 1000;
		unk_0x020E5F00CDA207BA(0.1f);
		func_104("JHP1A_STEAL_BSV", 7500, 1);
		bLocal_652 = true;
	}
	if (bLocal_652)
	{
		switch (iLocal_651)
		{
			case 0:
				if (func_99(1) == 0)
				{
					func_13(&iLocal_1637, 1, 0);
					func_23(0, -1);
					func_98(0, -1);
				}
				else if ((func_97() && unk_0x7239B21A38F536BA(Local_578[func_96() /*8*/])) && unk_0x4C241E39B23DF959(Local_578[func_96() /*8*/], false))
				{
					unk_0xB3B3359379FE77D3(0.5f);
					if (iLocal_2568 != func_96())
					{
						unk_0x293220DA1B46CEBC(5f, 10f, 4);
						func_23(Local_578[func_96() /*8*/], -1);
						func_98(Local_578[func_96() /*8*/], -1);
						iLocal_2568 = func_96();
					}
					if (func_94(&iLocal_1637, 692.8256f, -1012.544f, 21.722f, 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 1, Local_578[func_96() /*8*/], "", "", "", 1, 0, 1, -1))
					{
						iLocal_651++;
					}
				}
				else if (func_93())
				{
					unk_0xB3B3359379FE77D3(0.5f);
					func_49(&iLocal_1637, 692.8256f, -1012.544f, 21.722f, 0.1f, 0.1f, 0.1f, 1, iLocal_2569, "", "", "", 1, 0, 1, -1);
					if (unk_0x51210CED3DA1C78A(Local_578[func_48() /*8*/], 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, false, true, 0))
					{
						iLocal_651++;
					}
				}
				else
				{
					func_17(&iLocal_1637);
					func_23(0, -1);
					func_98(0, -1);
				}
				break;
			
			case 1:
				if (func_97())
				{
					if (func_47(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), 5f, 1, 1056964608, 0, 1))
					{
						bVar0 = true;
					}
				}
				else if (func_93())
				{
					if (func_47(iLocal_2569, 5f, 1, 1056964608, 0, 1))
					{
						bVar0 = true;
					}
				}
				if (bVar0)
				{
					if (func_7(88))
					{
						unk_0x293220DA1B46CEBC(5f, 10f, 4);
						unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), true);
						func_46(1);
						func_45(1, 0);
						iLocal_651 = 1000;
					}
					else
					{
						unk_0x293220DA1B46CEBC(5f, 10f, 4);
						iLocal_651++;
					}
					if (func_97())
					{
						unk_0x31B927BBC44156CD(Local_578[iLocal_2568 /*8*/], false);
					}
					else if (func_93())
					{
						unk_0x31B927BBC44156CD(Local_578[func_48() /*8*/], false);
						unk_0x2B6747FAA9DB9D6B(Local_578[func_48() /*8*/], true);
						unk_0xD0E9CE05A1E68CD8(Local_578[func_48() /*8*/]);
					}
					unk_0x504D54DF3F6F2247(unk_0xD80958FC74E988A6(), 0, 0);
				}
				break;
			
			case 2:
				if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
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
					func_40(&uLocal_2352, 3, 0, "LESTER", 0, 1);
					if (func_28(&uLocal_2352, 12, "JHFAUD", "JHF_P10c", 8, 1, 0, 0, 0))
					{
						iLocal_651++;
					}
				}
				break;
			
			case 1001:
				func_45(1, 0);
				if (func_27())
				{
					unk_0x293220DA1B46CEBC(5f, 10f, 4);
					iLocal_651++;
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
	
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		unk_0xFAEE099C6F890BB8(unk_0xD80958FC74E988A6(), false, false, false, false, false, false, false, false);
		unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 157, true);
		unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), false);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x7239B21A38F536BA(Global_87558[iVar0]))
		{
			if (!unk_0x5F9532F3B5CC2551(Global_87558[iVar0]))
			{
				unk_0xFAEE099C6F890BB8(Global_87558[iVar0], false, false, false, false, false, false, false, false);
				unk_0x3882114BDE571AD4(Global_87558[iVar0], false);
			}
		}
		iVar0++;
	}
	if ((Global_34909 != 0 && Global_34909 != 3) && Global_34909 != 2)
	{
		unk_0xAA5F02DB48D704B9(5);
		unk_0x020E5F00CDA207BA(1f);
	}
}

int func_27()
{
	if (Global_14393.f_1 == 10 || Global_14393.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_28(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_39(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15740 = 0;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_15697 = 0;
	Global_15744 = 0;
	Global_15746 = 0;
	if (iParam5 == 1)
	{
		Global_15704 = 1;
	}
	else
	{
		Global_15704 = 0;
	}
	Global_2621441 = 0;
	return func_29(sParam3, iParam4, bParam8);
}

int func_29(char* sParam0, int iParam1, bool bParam2)
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
					unk_0xD79DEEFB53455EBA(false);
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
					func_38();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x16754C556D2EDE3D())
		{
			return 0;
		}
		if (func_37(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_36();
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
			unk_0xE80492A9AC099A93(&Global_2263, 20);
			unk_0xE80492A9AC099A93(&Global_2264, 17);
			unk_0xE80492A9AC099A93(&Global_2265, 0);
			if (bParam2)
			{
				func_34();
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
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				if (unk_0x4E209B2C1EAD5159(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (func_33())
				{
					return 0;
				}
				if (unk_0x57E457CD2C0FC168(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x47E4E977581C5B55(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0x7DCE8BDA0F1C1200(unk_0xD80958FC74E988A6()))
				{
					return 0;
				}
				if (unk_0xF731332072F5156C(unk_0xD80958FC74E988A6(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68067)
				{
					if (unk_0xCFB0A0D8EDD145A3(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x95E8F73DC65EFB9C(unk_0x4F8644AF03D0E0D6()))
					{
						return 0;
					}
					if (unk_0xC70B5FAE151982D8(unk_0xD80958FC74E988A6()))
					{
						return 0;
					}
					if (unk_0x3E5F7FC85D854E15(unk_0x4F8644AF03D0E0D6()))
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
				if (unk_0xA921AA820C25702F(Global_2263, 9))
				{
					return 0;
				}
			}
			func_31();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_30();
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
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xD79DEEFB53455EBA(false);
	Global_15692 = 1;
}

void func_31()
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
	unk_0xE80492A9AC099A93(&Global_2264, 16);
}

int func_32()
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_33()
{
	int iVar0;
	int iVar1;
	
	if (Global_68067)
	{
		iVar0 = 0;
		unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &iVar1, true);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x68EDDA28A5976D07() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0x7EE53118C892B513(unk_0xD80958FC74E988A6(), 78, true))
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
		if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()) == Global_97173.f_29699[2 /*29*/])
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
		Global_14393 = func_155();
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

bool func_35(int iParam0)
{
	return Global_34909 == iParam0;
}

void func_36()
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

bool func_37(int iParam0, int iParam1)
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
	return unk_0xA921AA820C25702F(Global_1327591.f_949, iParam0);
}

void func_38()
{
	unk_0x9AEB285D1818C9AC();
	Global_16703 = 0;
	if ((unk_0x7497D2CE2C30D24C() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		unk_0xD79DEEFB53455EBA(false);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0xD79DEEFB53455EBA(true);
		Global_15692 = 6;
		return;
	}
}

void func_39(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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
	if (!Global_68067)
	{
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x6373D1349925A70E(iParam2, false);
			}
			else
			{
				unk_0x6373D1349925A70E(iParam2, true);
			}
		}
		if (!unk_0x84A2DD9AC37C35C1(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xEC4686EC06434678(iParam2, false);
			}
			else
			{
				unk_0xEC4686EC06434678(iParam2, true);
			}
		}
	}
}

void func_41()
{
	Global_14558 = 0;
	func_42();
}

void func_42()
{
	if (unk_0x16754C556D2EDE3D())
	{
		unk_0x9AEB285D1818C9AC();
		Global_16703 = 0;
		unk_0xD79DEEFB53455EBA(true);
		Global_15692 = 6;
		return;
	}
}

int func_43()
{
	if (func_44())
	{
		return 0;
	}
	if (unk_0xAD6DACA4BA53E0A4())
	{
		if (unk_0x7984C03AA5CC2F41())
		{
			return 0;
		}
	}
	return 1;
}

int func_44()
{
	if (Global_15692 != 0 || unk_0x16754C556D2EDE3D())
	{
		return 1;
	}
	return 0;
}

void func_45(bool bParam0, bool bParam1)
{
	if (!bParam1)
	{
		unk_0xFE99B66D079CF6BC(0, 21, true);
	}
	unk_0xFE99B66D079CF6BC(0, 25, true);
	unk_0xFE99B66D079CF6BC(0, 24, true);
	unk_0xFE99B66D079CF6BC(0, 257, true);
	unk_0xFE99B66D079CF6BC(0, 141, true);
	unk_0xFE99B66D079CF6BC(0, 140, true);
	unk_0xFE99B66D079CF6BC(0, 22, true);
	unk_0xFE99B66D079CF6BC(0, 44, true);
	unk_0xFE99B66D079CF6BC(0, 23, true);
	unk_0xFE99B66D079CF6BC(0, 47, true);
	unk_0xFE99B66D079CF6BC(0, 36, true);
	if (bParam0)
	{
		unk_0xFE99B66D079CF6BC(0, 37, true);
	}
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		if (bParam1)
		{
			unk_0x433083750C5E064A(unk_0xD80958FC74E988A6(), 2f);
		}
		else
		{
			unk_0x433083750C5E064A(unk_0xD80958FC74E988A6(), 1f);
		}
		unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 102, true);
	}
	if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
	{
		unk_0xB302540597885499(unk_0x4F8644AF03D0E0D6());
	}
}

void func_46(bool bParam0)
{
	if (!unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
	{
		unk_0xFAEE099C6F890BB8(unk_0xD80958FC74E988A6(), true, true, true, true, true, false, false, false);
		unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 157, false);
		unk_0x3882114BDE571AD4(unk_0xD80958FC74E988A6(), true);
		unk_0x88CBB5CEB96B7BD2(unk_0xD80958FC74E988A6(), false, 0);
		if (bParam0)
		{
			unk_0xADF692B254977C0C(unk_0xD80958FC74E988A6(), joaat("weapon_unarmed"), false);
		}
		unk_0xA7B2458D0AD6DED8(unk_0xD80958FC74E988A6(), false);
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		unk_0xB302540597885499(unk_0x4F8644AF03D0E0D6());
	}
	unk_0xAA5F02DB48D704B9(0);
	unk_0x020E5F00CDA207BA(0f);
}

int func_47(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5)
{
	unk_0xFE99B66D079CF6BC(0, 71, true);
	unk_0xFE99B66D079CF6BC(0, 72, true);
	unk_0xFE99B66D079CF6BC(0, 76, true);
	unk_0xFE99B66D079CF6BC(0, 73, true);
	unk_0xFE99B66D079CF6BC(0, 59, true);
	unk_0xFE99B66D079CF6BC(0, 60, true);
	if (bParam5)
	{
		unk_0xFE99B66D079CF6BC(0, 75, true);
	}
	unk_0xFE99B66D079CF6BC(0, 80, true);
	unk_0xFE99B66D079CF6BC(0, 69, true);
	unk_0xFE99B66D079CF6BC(0, 70, true);
	unk_0xFE99B66D079CF6BC(0, 68, true);
	unk_0xFE99B66D079CF6BC(0, 74, true);
	unk_0xFE99B66D079CF6BC(0, 86, true);
	unk_0xFE99B66D079CF6BC(0, 81, true);
	unk_0xFE99B66D079CF6BC(0, 82, true);
	unk_0xFE99B66D079CF6BC(0, 138, true);
	unk_0xFE99B66D079CF6BC(0, 136, true);
	unk_0xFE99B66D079CF6BC(0, 114, true);
	unk_0xFE99B66D079CF6BC(0, 107, true);
	unk_0xFE99B66D079CF6BC(0, 110, true);
	unk_0xFE99B66D079CF6BC(0, 89, true);
	unk_0xFE99B66D079CF6BC(0, 89, true);
	unk_0xFE99B66D079CF6BC(0, 87, true);
	unk_0xFE99B66D079CF6BC(0, 88, true);
	unk_0xFE99B66D079CF6BC(0, 113, true);
	unk_0xFE99B66D079CF6BC(0, 115, true);
	unk_0xFE99B66D079CF6BC(0, 116, true);
	unk_0xFE99B66D079CF6BC(0, 117, true);
	unk_0xFE99B66D079CF6BC(0, 118, true);
	unk_0xFE99B66D079CF6BC(0, 119, true);
	unk_0xFE99B66D079CF6BC(0, 131, true);
	unk_0xFE99B66D079CF6BC(0, 132, true);
	unk_0xFE99B66D079CF6BC(0, 123, true);
	unk_0xFE99B66D079CF6BC(0, 126, true);
	unk_0xFE99B66D079CF6BC(0, 129, true);
	unk_0xFE99B66D079CF6BC(0, 130, true);
	unk_0xFE99B66D079CF6BC(0, 133, true);
	unk_0xFE99B66D079CF6BC(0, 134, true);
	unk_0x17FCA7199A530203();
	if ((unk_0x9CD27B0045628463() - Global_28) > 500)
	{
		unk_0x260BE8F09E326A20(iParam0, fParam1, iParam2, bParam4);
	}
	Global_28 = unk_0x9CD27B0045628463();
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		if (unk_0x73D57CFFDD12C355(unk_0xD5037BA82E12416F(iParam0)) <= fParam3)
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
			if (unk_0x7239B21A38F536BA(Local_578[iVar0 /*8*/]) && unk_0x4C241E39B23DF959(Local_578[iVar0 /*8*/], false))
			{
				if (unk_0x146DF9EC4C4B9FD4(iLocal_2569, Local_578[iVar0 /*8*/]))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_49(int* iParam0, struct<3> Param1, struct<3> Param4, bool bParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15)
{
	return func_50(iParam0, Param1, Param4, func_92(), func_92(), bParam7, 5, 0, 0, 0, iParam8, sParam9, func_91(), func_91(), func_91(), func_91(), sParam10, 0, bParam12, sParam11, 0, iParam13, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

int func_50(int* iParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, bool bParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	iParam0->f_17[0] = iParam15;
	iParam0->f_17[1] = iParam16;
	iParam0->f_17[2] = iParam17;
	iParam0->f_16 = iParam15;
	func_90(iParam0);
	func_89(iParam0);
	func_88();
	if (func_72(iParam0, iParam0->f_17[0], iParam0->f_17[1], iParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, iParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		func_71(sParam20);
		func_71(sParam21);
		func_71(sParam22);
		func_71(sParam23);
		if (unk_0x5A859503B0C08678())
		{
			bVar1 = false;
			if (unk_0x4C241E39B23DF959(iParam18, false))
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iParam18, false))
				{
					unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 3);
					if (!unk_0xA921AA820C25702F(iParam0->f_13, 9))
					{
						unk_0xE80492A9AC099A93(&(iParam0->f_13), 4);
					}
					if (unk_0xA921AA820C25702F(iParam0->f_13, 23))
					{
						unk_0xE80492A9AC099A93(&(iParam0->f_13), 23);
					}
					unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_69(iParam0, iParam29))
				{
					unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 3);
					if (!unk_0xA921AA820C25702F(iParam0->f_13, 9))
					{
						unk_0xE80492A9AC099A93(&(iParam0->f_13), 4);
					}
					unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 9);
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
				if (bParam26 && unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
				{
					if (unk_0xA6DB27D19ECBB7DA(iParam0->f_5))
					{
						unk_0x86A652570E5F25DD(&(iParam0->f_5));
						func_71(sParam19);
					}
					if (unk_0xA6DB27D19ECBB7DA(*iParam0))
					{
						unk_0x86A652570E5F25DD(iParam0);
					}
					if ((!func_66(iParam0, 1) && !func_65(iParam0)) && !unk_0xA921AA820C25702F(iParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_64(iParam0, "LOSE_WANTED", 0);
							if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[0]))
							{
								func_62(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 0);
						unk_0xE80492A9AC099A93(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xA921AA820C25702F(iParam0->f_13, 0))
					{
						func_71("LOSE_WANTED");
						unk_0xE80492A9AC099A93(&(iParam0->f_13), 0);
						unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 1);
					}
					if (unk_0xA921AA820C25702F(iParam0->f_13, 1))
					{
						if (!func_66(iParam0, 1))
						{
							if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[0]))
							{
								func_62(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xE80492A9AC099A93(&(iParam0->f_13), 1);
						}
					}
					if (!unk_0xA6DB27D19ECBB7DA(iParam0->f_5))
					{
						if (unk_0xA6DB27D19ECBB7DA(*iParam0))
						{
							unk_0x86A652570E5F25DD(iParam0);
						}
						iParam0->f_5 = func_61(Var3, 0);
						if (!iParam31 == -1)
						{
							unk_0xDF735600A4696DAF(iParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_60(iParam0->f_5, iParam0);
						}
					}
					else if (!func_59(Var3, unk_0x586AFE3FF72D996E(iParam0->f_5), 0.1f))
					{
						unk_0xAE2AF67E9D9AF65D(iParam0->f_5, Var3);
						if (bParam35)
						{
							func_60(iParam0->f_5, iParam0);
						}
					}
					if (!func_66(iParam0, 2))
					{
						if (!unk_0xA921AA820C25702F(iParam0->f_13, 2))
						{
							func_64(iParam0, sParam19, 0);
							unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (unk_0xA921AA820C25702F(iParam0->f_13, 13))
						{
							bParam13 = false;
						}
					}
					bVar1 = false;
					bVar6 = false;
					iVar7 = 0;
					if ((iParam14 == 1 || iParam14 == 3) || iParam14 == 5)
					{
						bVar6 = true;
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
						unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Param1, Param4, bParam13, bVar6, iVar7);
						if (unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Param7, Param10, fParam36, false, bVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), Param1, Param4, bParam13, bVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
									if (!unk_0xA3EE4A07279BB9DB(iParam0->f_17[iVar2], iVar0, false))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!unk_0xA3EE4A07279BB9DB(iParam0->f_17[iVar2], iParam18, false))
									{
										bVar1 = false;
									}
								}
								else if (!unk_0x9BB01E3834671191(iParam0->f_17[iVar2], func_14()) || !func_57(iParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_54(iParam0))
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
								func_13(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (unk_0x7239B21A38F536BA(iParam18))
			{
				if ((bParam26 && unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) && (!unk_0xA921AA820C25702F(iParam0->f_13, 9) && !unk_0xA921AA820C25702F(iParam0->f_13, 22)))
				{
					func_71(sParam24);
					func_71(sParam27);
					if (unk_0xA6DB27D19ECBB7DA(iParam0->f_5) || unk_0xA6DB27D19ECBB7DA(*iParam0))
					{
						unk_0x86A652570E5F25DD(&(iParam0->f_5));
						unk_0x86A652570E5F25DD(iParam0);
						func_71(sParam19);
					}
					if ((!func_66(iParam0, 1) && !func_65(iParam0)) && !unk_0xA921AA820C25702F(iParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_64(iParam0, "LOSE_WANTED", 0);
							if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[0]))
							{
								func_62(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 0);
						unk_0xE80492A9AC099A93(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (unk_0xA921AA820C25702F(iParam0->f_13, 0))
					{
						func_71("LOSE_WANTED");
						unk_0xE80492A9AC099A93(&(iParam0->f_13), 0);
						unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 1);
					}
					if (unk_0xA921AA820C25702F(iParam0->f_13, 1))
					{
						if (!func_66(iParam0, 1))
						{
							if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[0]))
							{
								func_62(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							unk_0xE80492A9AC099A93(&(iParam0->f_13), 1);
						}
					}
					if (unk_0x4C241E39B23DF959(iParam18, false))
					{
						if (!unk_0xA6DB27D19ECBB7DA(*iParam0))
						{
							if (unk_0xA6DB27D19ECBB7DA(iParam0->f_5))
							{
								unk_0x86A652570E5F25DD(&(iParam0->f_5));
								func_71(sParam19);
							}
							*iParam0 = func_51(iParam18, 0, 0);
							unk_0x9029B2F3DA924928(*iParam0, 2);
							if (!unk_0xA921AA820C25702F(iParam0->f_13, 4))
							{
								func_60(*iParam0, iParam0);
							}
						}
						if (!func_66(iParam0, 2))
						{
							if (!unk_0xA921AA820C25702F(iParam0->f_13, 3))
							{
								func_64(iParam0, sParam24, 0);
								unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 3);
								unk_0xE80492A9AC099A93(&(iParam0->f_13), 4);
							}
							else if (unk_0xA921AA820C25702F(iParam0->f_13, 9))
							{
								if (!unk_0xF22B6C47C6EAB066(sParam27))
								{
									if (!unk_0xA921AA820C25702F(iParam0->f_13, 4))
									{
										func_64(iParam0, sParam27, 0);
										unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 4);
									}
								}
								else if (!unk_0xA921AA820C25702F(iParam0->f_13, 4))
								{
									func_64(iParam0, sParam24, 0);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 4);
								}
								if (!unk_0xA921AA820C25702F(iParam0->f_13, 23))
								{
									if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[0]))
									{
										func_62(iParam0->f_17[0], "GET_IN_CAR", 3);
									}
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (unk_0xA6DB27D19ECBB7DA(iParam0->f_5))
				{
					unk_0x86A652570E5F25DD(&(iParam0->f_5));
					func_71(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_66(iParam0, 2))
						{
							if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
							{
								if (!unk_0xA921AA820C25702F(iParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = unk_0xD53343AA4FB7DD28(0, iVar8);
									if (!unk_0x84A2DD9AC37C35C1(iParam0->f_17[iVar9]))
									{
										func_62(iParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_64(iParam0, "MORE_SEATS", 0);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 13);
								}
							}
							else if (!unk_0xA921AA820C25702F(iParam0->f_13, 3))
							{
								func_64(iParam0, sParam24, 0);
								unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 3);
								unk_0xE80492A9AC099A93(&(iParam0->f_13), 4);
							}
							else if (!unk_0xA921AA820C25702F(iParam0->f_13, 4))
							{
								if (unk_0xA921AA820C25702F(iParam0->f_13, 9))
								{
									func_64(iParam0, sParam27, 0);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_66(iParam0, 2))
					{
						if (!unk_0xA921AA820C25702F(iParam0->f_13, 3))
						{
							func_64(iParam0, sParam24, 0);
							unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 3);
							unk_0xE80492A9AC099A93(&(iParam0->f_13), 4);
						}
						else if (unk_0xA921AA820C25702F(iParam0->f_13, 9))
						{
							if (!unk_0xF22B6C47C6EAB066(sParam27))
							{
								if (!unk_0xA921AA820C25702F(iParam0->f_13, 4))
								{
									func_64(iParam0, sParam27, 0);
									unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 4);
								}
							}
							else if (!unk_0xA921AA820C25702F(iParam0->f_13, 4))
							{
								func_64(iParam0, sParam24, 0);
								unk_0x933D6A9EEC1BACD0(&(iParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (unk_0xA921AA820C25702F(iParam0->f_13, 0))
		{
			unk_0xE80492A9AC099A93(&(iParam0->f_13), 0);
		}
		func_71(sParam19);
		func_71(sParam24);
		func_71(sParam27);
		func_71(sParam24);
		func_71("LOSE_WANTED");
		if (unk_0xA6DB27D19ECBB7DA(iParam0->f_5))
		{
			unk_0x86A652570E5F25DD(&(iParam0->f_5));
		}
		if (unk_0xA6DB27D19ECBB7DA(*iParam0))
		{
			unk_0x86A652570E5F25DD(iParam0);
		}
	}
	unk_0xE80492A9AC099A93(&(iParam0->f_13), 11);
	unk_0xE80492A9AC099A93(&(iParam0->f_13), 12);
	return 0;
}

int func_51(int iParam0, bool bParam1, bool bParam2)
{
	return func_52(iParam0, !bParam1, bParam2);
}

int func_52(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x5CDE92C702A8FCE7(iParam0);
	if (unk_0x6AC7003FA6E5575E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_53(unk_0x10FAB35428CCC9D7(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x6F6F290102C02AB4(iVar0, bParam1);
		}
		else
		{
			unk_0x03D7FB09E75D6B7E(iVar0, 2);
		}
	}
	else if (unk_0x524AC5ECEA15343E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_53(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
		unk_0x6F6F290102C02AB4(iVar0, bParam1);
	}
	else if (unk_0x8D68C8FD0FACA94E(iParam0))
	{
		unk_0xD38744167B2FA257(iVar0, func_53(unk_0x10FAB35428CCC9D7(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_53(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_54(int* iParam0)
{
	if (unk_0xA921AA820C25702F(iParam0->f_13, 12))
	{
		if (func_56(unk_0xD80958FC74E988A6()))
		{
			if (func_55(1, 0, 1) || unk_0xA921AA820C25702F(iParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_55(1, 0, 1) || unk_0xA921AA820C25702F(iParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_55(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (unk_0x2B4A15E44DE0F478())
	{
		return 0;
	}
	if (bParam0)
	{
		if (unk_0x5F9532F3B5CC2551(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		if (!unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
		{
			return 0;
		}
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (bParam0)
		{
			if (unk_0x5F9532F3B5CC2551(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!unk_0x5F9532F3B5CC2551(iVar0))
			{
				if (unk_0xBB40DD2270B65366(iVar0, -1) != unk_0xD80958FC74E988A6())
				{
					return 0;
				}
			}
		}
		if (!unk_0x5F9532F3B5CC2551(iVar0))
		{
			if (unk_0x95EED5A694951F9F(iVar0) < 0.95f || unk_0x95EED5A694951F9F(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!unk_0x908CBECC2CAA3690(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	if (!unk_0xDE7465A27D403C06(unk_0x4F8644AF03D0E0D6()))
	{
		return 0;
	}
	return 1;
}

int func_56(int iParam0)
{
	float fVar0;
	
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		fVar0 = unk_0xD5037BA82E12416F(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_57(int iParam0, int iParam1)
{
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()) && iParam1)
		{
			if (func_58(unk_0xD80958FC74E988A6(), iParam0))
			{
				unk_0x4102C7858CFEE4E4(func_14(), 50f);
				return 1;
			}
		}
		else if (unk_0x9BB01E3834671191(iParam0, func_14()))
		{
			unk_0x4102C7858CFEE4E4(func_14(), 50f);
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
	
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (unk_0x826AA586EDB9FEF8(iParam0))
		{
			iVar0 = unk_0x9A9112A0FE9A4713(iParam0, false);
			if (unk_0x4C241E39B23DF959(iVar0, false))
			{
				if (!unk_0x84A2DD9AC37C35C1(iParam1))
				{
					if (unk_0xA808AA1D79230FC2(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_59(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (unk_0x73D57CFFDD12C355((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (unk_0x73D57CFFDD12C355((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			if (unk_0x73D57CFFDD12C355((Param0.f_2 - Param3.f_2)) <= fParam6)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_60(int iParam0, int* iParam1)
{
	if (unk_0xA6DB27D19ECBB7DA(iParam0))
	{
		if (unk_0xA6DB27D19ECBB7DA(iParam1->f_6))
		{
			unk_0x4F7D8A9BFB0B43E9(iParam1->f_6, false);
		}
		unk_0x3DDA37128DD1ACA8(false);
		unk_0x67EEDEA1B9BAFD94();
		iParam1->f_6 = iParam0;
		unk_0x4F7D8A9BFB0B43E9(iParam0, true);
	}
}

int func_61(struct<3> Param0, bool bParam3)
{
	int iVar0;
	
	iVar0 = unk_0x5A039BB0BCA604B6(Param0);
	unk_0xD38744167B2FA257(iVar0, func_53(unk_0x10FAB35428CCC9D7(), 1f, 1f));
	unk_0x4F7D8A9BFB0B43E9(iVar0, bParam3);
	return iVar0;
}

void func_62(int iParam0, char* sParam1, int iParam2)
{
	unk_0x8E04FEDD28D42462(iParam0, sParam1, func_63(iParam2), 1);
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

void func_64(int* iParam0, char* sParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!unk_0xF22B6C47C6EAB066(sParam1))
		{
			if (!unk_0x0C515FAB3FF9EA92(sParam1, ""))
			{
				func_104(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_10 = unk_0x9CD27B0045628463();
}

int func_65(int* iParam0)
{
	if (!unk_0x84A2DD9AC37C35C1(iParam0->f_16))
	{
		if (unk_0x9072C8B49907BFAD(iParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_66(int* iParam0, int iParam1)
{
	if (iParam1 != 1 || unk_0xAD6DACA4BA53E0A4())
	{
		if (unk_0x7984C03AA5CC2F41())
		{
			return 1;
		}
		if (func_68(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || unk_0xAD6DACA4BA53E0A4())
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
	if (Global_16703 == 1)
	{
		return 1;
	}
	return 0;
}

int func_68(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x9CD27B0045628463();
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
	
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
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
	
	if (unk_0x4C241E39B23DF959(iParam0, false))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (unk_0x7239B21A38F536BA(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = unk_0xA7C4F2C6E744A550(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!unk_0xF7F203E31F96F6A1(iParam0, 1))
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
				if (!unk_0xF7F203E31F96F6A1(iParam0, 1))
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
	if (!unk_0xF22B6C47C6EAB066(sParam0))
	{
		unk_0xCF708001E1E536DD(sParam0);
	}
}

int func_72(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)
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
		if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
		{
			if (!unk_0xA921AA820C25702F(uParam0->f_13, 29) && !unk_0xA921AA820C25702F(uParam0->f_13, 28))
			{
				if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar0]))
				{
					unk_0xD75ACCF5E0FB5367(uParam0->f_17[iVar0], true, -1, 0);
				}
				if (iVar0 == 2)
				{
					unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!unk_0xA921AA820C25702F(uParam0->f_13, 29) && unk_0xA921AA820C25702F(uParam0->f_13, 28))
		{
			if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar0]))
			{
				unk_0xD75ACCF5E0FB5367(uParam0->f_17[iVar0], false, -1, 0);
			}
			if (iVar0 == 2)
			{
				unk_0xE80492A9AC099A93(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (unk_0xA921AA820C25702F(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!unk_0x7239B21A38F536BA(uParam0->f_21))
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
			iVar24 = unk_0xF73EB622C4F1689B(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 50f, 0, iVar25);
			if (unk_0x4C241E39B23DF959(iVar24, false))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (unk_0x4C241E39B23DF959(uParam0->f_21, false))
		{
			if (unk_0xB7A628320EFF8E47(unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), unk_0x3FEF770D40960D5A(uParam0->f_21, true)) < 400f)
			{
				if (!unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
				{
					if (!unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0) || !bParam17)
					{
						if (func_70(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar0]))
								{
									unk_0x433083750C5E064A(uParam0->f_17[iVar0], 1f);
									if (unk_0x9BB01E3834671191(uParam0->f_17[iVar0], func_14()))
									{
										unk_0xED74007FFB146BC2(uParam0->f_17[iVar0]);
									}
									if (unk_0x77F1BEB8863288D5(uParam0->f_17[iVar0], -1794415470) == 7 && !func_87(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!unk_0x47E4E977581C5B55(uParam0->f_17[iVar0]) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[iVar0]))
										{
											unk_0x9F8AA94D6D97DBF4(uParam0->f_17[iVar0], true);
											unk_0xC20E50AA46D09CA8(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0);
											unk_0x0BDDB8D9EC6BCF3C(uParam0->f_17[iVar0], iVar0);
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
			unk_0xE80492A9AC099A93(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar0]))
				{
					if (!unk_0xBB062B2B5722478E(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						unk_0xE1EF3C1216AFF2CD(uParam0->f_17[iVar0]);
					}
					if (!unk_0x9BB01E3834671191(uParam0->f_17[iVar0], func_14()))
					{
						if (func_85(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							unk_0x9F3480FE65DB31B5(uParam0->f_17[iVar0], func_14());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!unk_0xA921AA820C25702F(uParam0->f_13, 26))
	{
		if ((!func_84(uParam0) && unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6())) && !unk_0x7239B21A38F536BA(iParam10))
		{
			iVar13 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
			if (unk_0x4C241E39B23DF959(iVar13, false))
			{
				if (!unk_0xA921AA820C25702F(uParam0->f_13, 13))
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
							if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = unk_0xD53343AA4FB7DD28(0, iVar26);
						if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar27]))
						{
							func_62(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_64(uParam0, "MORE_SEATS", 0);
						unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			unk_0xE80492A9AC099A93(&(uParam0->f_13), 13);
			func_71("MORE_SEATS");
		}
		if (!unk_0x7239B21A38F536BA(iParam10))
		{
			if ((!unk_0x84A2DD9AC37C35C1(uParam0->f_17[0]) || !unk_0x84A2DD9AC37C35C1(uParam0->f_17[1])) || !unk_0x84A2DD9AC37C35C1(uParam0->f_17[2]))
			{
				if (!unk_0xA921AA820C25702F(uParam0->f_13, 31))
				{
					if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()) && !func_66(uParam0, 2))
					{
						iVar13 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
						if (func_83(iVar13, uParam0))
						{
							func_64(uParam0, "CMN_VEHSUIT", 0);
							unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
				{
					unk_0xE80492A9AC099A93(&(uParam0->f_13), 31);
					func_71("CMN_VEHSUIT");
				}
			}
		}
		if (unk_0x4C241E39B23DF959(iParam10, false))
		{
			if (unk_0xA808AA1D79230FC2(unk_0xD80958FC74E988A6(), iParam10))
			{
				if (unk_0x580417101DDB492F(0, 75))
				{
					unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 21);
				}
			}
			else if (unk_0xA921AA820C25702F(uParam0->f_13, 21))
			{
				unk_0xE80492A9AC099A93(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x7239B21A38F536BA(uParam0->f_17[iVar0]))
			{
				if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar0]))
				{
					if (!unk_0x9BB01E3834671191(uParam0->f_17[iVar0], func_14()))
					{
						unk_0x56CEF0AC79073BDE(uParam0->f_17[iVar0], true);
					}
					else
					{
						unk_0x56CEF0AC79073BDE(uParam0->f_17[iVar0], false);
					}
					if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
					{
						iVar13 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
						if (unk_0x4C241E39B23DF959(iVar13, false))
						{
							if (unk_0x9BB01E3834671191(uParam0->f_17[iVar0], func_14()))
							{
								if (!func_84(uParam0) && unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
								{
									if (!func_82(uParam0->f_17[iVar0]))
									{
										unk_0xED74007FFB146BC2(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !unk_0x5F9532F3B5CC2551(iVar13))
						{
							if (unk_0xA808AA1D79230FC2(uParam0->f_17[iVar0], iVar13))
							{
								if (unk_0xCFB0A0D8EDD145A3(iVar13) && !unk_0xB104CD1BABF302E2(iVar13))
								{
									Var28 = { unk_0x3FEF770D40960D5A(iVar13, true) };
									if (Var28.f_2 < -1f)
									{
										unk_0xD3DBCE61A490BE02(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!unk_0x9BB01E3834671191(uParam0->f_17[iVar0], func_14()))
					{
						if (unk_0x826AA586EDB9FEF8(uParam0->f_17[iVar0]))
						{
							iVar13 = unk_0x9A9112A0FE9A4713(uParam0->f_17[iVar0], false);
							if (!unk_0x5F9532F3B5CC2551(iVar13))
							{
								if (unk_0x4C241E39B23DF959(iParam10, false))
								{
									if (iVar13 != iParam10)
									{
										if (!unk_0xA808AA1D79230FC2(unk_0xD80958FC74E988A6(), iVar13))
										{
											if (unk_0xD5037BA82E12416F(iVar13) > 5f)
											{
												unk_0xD3DBCE61A490BE02(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0xD3DBCE61A490BE02(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
									{
										iVar31 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
									}
									if (unk_0x4C241E39B23DF959(iVar31, false))
									{
										if (iVar13 != iVar31)
										{
											if (unk_0xD5037BA82E12416F(iVar13) > 5f)
											{
												unk_0xD3DBCE61A490BE02(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												unk_0xD3DBCE61A490BE02(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (unk_0x9BB01E3834671191(uParam0->f_17[iVar0], func_14()))
					{
						iVar32 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
						if (unk_0x7239B21A38F536BA(iVar32))
						{
							if (func_70(iVar32, uParam0, 0))
							{
								if (func_81(iVar0, uParam0) || !unk_0xA921AA820C25702F(uParam0->f_13, 27))
								{
									unk_0x0BDDB8D9EC6BCF3C(uParam0->f_17[iVar0], iVar0);
									func_15(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_81(iVar0, uParam0))
							{
								if (unk_0x9F47B058362C84B5(iVar32) == joaat("sentinel2"))
								{
									unk_0x0BDDB8D9EC6BCF3C(uParam0->f_17[iVar0], 4);
								}
								else
								{
									unk_0x0BDDB8D9EC6BCF3C(uParam0->f_17[iVar0], 2);
								}
								func_80(iVar0, uParam0);
							}
						}
					}
					if ((!unk_0x9BB01E3834671191(uParam0->f_17[iVar0], func_14()) && !func_79(uParam0->f_17[iVar0], iParam10)) && !func_78(uParam0->f_17[iVar0], iParam10))
					{
						if (func_85(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!unk_0x9BB01E3834671191(uParam0->f_17[iVar0], func_14()))
							{
								if (((!unk_0x47E4E977581C5B55(uParam0->f_17[iVar0]) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[iVar0])) && !unk_0x433DDFFE2044B636(uParam0->f_17[iVar0])) && !unk_0xBB062B2B5722478E(uParam0->f_17[iVar0]))
								{
									iVar14 = unk_0x77F1BEB8863288D5(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7)
									{
										unk_0xE1EF3C1216AFF2CD(uParam0->f_17[iVar0]);
									}
									unk_0x9F3480FE65DB31B5(uParam0->f_17[iVar0], func_14());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!unk_0xA6DB27D19ECBB7DA(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = unk_0x9CD27B0045628463();
								uParam0->f_1[iVar0] = func_51(uParam0->f_17[iVar0], 0, 0);
								unk_0x9029B2F3DA924928(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_60(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (unk_0xA6DB27D19ECBB7DA(uParam0->f_1[iVar0]))
					{
						if (((func_57(uParam0->f_17[iVar0], 1) || func_79(uParam0->f_17[iVar0], iParam10)) || iParam12) || (unk_0x4C241E39B23DF959(iParam10, false) && !unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iParam10, false)))
						{
							if (unk_0xA6DB27D19ECBB7DA(uParam0->f_1[iVar0]))
							{
								unk_0x86A652570E5F25DD(&(uParam0->f_1[iVar0]));
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
					else if (unk_0x4C241E39B23DF959(iParam10, false))
					{
						if (!unk_0xA808AA1D79230FC2(uParam0->f_17[iVar0], iParam10))
						{
							if ((unk_0x751B70C3D034E187(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, false, true, 0) && !unk_0xA921AA820C25702F(uParam0->f_13, 11)) && !((bParam17 && unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) && !unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iParam10, false)))
							{
								if (unk_0x826AA586EDB9FEF8(uParam0->f_17[iVar0]))
								{
									if (!unk_0xA3EE4A07279BB9DB(uParam0->f_17[iVar0], iParam10, false))
									{
										if (!func_57(uParam0->f_17[iVar0], 1))
										{
											if (func_56(uParam0->f_17[iVar0]))
											{
												iVar14 = unk_0x77F1BEB8863288D5(uParam0->f_17[iVar0], 451360105);
												if (iVar14 == 7)
												{
													unk_0x504D54DF3F6F2247(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (unk_0x9BB01E3834671191(uParam0->f_17[iVar0], func_14()))
									{
										if ((((!unk_0x433DDFFE2044B636(uParam0->f_17[iVar0]) && !unk_0x47E4E977581C5B55(uParam0->f_17[iVar0])) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[iVar0])) && !unk_0xBB062B2B5722478E(uParam0->f_17[iVar0])) && !unk_0x28D3FED7190D3A0B(iParam10))
										{
											unk_0xED74007FFB146BC2(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = unk_0x77F1BEB8863288D5(uParam0->f_17[iVar0], -1794415470);
									if (iVar14 == 7 && !func_87(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!unk_0x433DDFFE2044B636(uParam0->f_17[iVar0]) && !unk_0x433DDFFE2044B636(unk_0xD80958FC74E988A6())) && !func_77(uParam0->f_17[iVar0], 2f)) && !unk_0x47E4E977581C5B55(uParam0->f_17[iVar0])) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[iVar0])) && !unk_0x28D3FED7190D3A0B(iParam10))
										{
											unk_0x9F8AA94D6D97DBF4(uParam0->f_17[iVar0], true);
											if (unk_0xA921AA820C25702F(uParam0->f_13, 10))
											{
												unk_0x433083750C5E064A(uParam0->f_17[iVar0], 1f);
											}
											unk_0xC20E50AA46D09CA8(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											unk_0xBC0ED94165A48BC2(uParam0->f_17[iVar0], false);
										}
									}
									else if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iParam10, false))
									{
										uParam0->f_1[iVar0] = func_51(uParam0->f_17[iVar0], 0, 0);
										unk_0x9029B2F3DA924928(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!unk_0x9BB01E3834671191(uParam0->f_17[iVar0], func_14()))
							{
								if (func_85(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!unk_0x47E4E977581C5B55(uParam0->f_17[iVar0]) && !unk_0x2A74E1D5F2F00EEC(uParam0->f_17[iVar0]))
									{
										iVar14 = unk_0x77F1BEB8863288D5(uParam0->f_17[iVar0], -1794415470);
										if (iVar14 == 7)
										{
											unk_0xE1EF3C1216AFF2CD(uParam0->f_17[iVar0]);
										}
										unk_0x9F8AA94D6D97DBF4(uParam0->f_17[iVar0], false);
										unk_0x9F3480FE65DB31B5(uParam0->f_17[iVar0], func_14());
									}
								}
							}
						}
						else if (unk_0xA808AA1D79230FC2(unk_0xD80958FC74E988A6(), iParam10))
						{
							if (!unk_0x9BB01E3834671191(uParam0->f_17[iVar0], func_14()))
							{
								if (!unk_0xA921AA820C25702F(uParam0->f_13, 21))
								{
									unk_0x9F3480FE65DB31B5(uParam0->f_17[iVar0], func_14());
								}
							}
							else if (unk_0xA921AA820C25702F(uParam0->f_13, 21))
							{
								unk_0xED74007FFB146BC2(uParam0->f_17[iVar0]);
								unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 21);
							}
						}
						else if (unk_0x9BB01E3834671191(uParam0->f_17[iVar0], func_14()) && !unk_0x28D3FED7190D3A0B(iParam10))
						{
							unk_0xED74007FFB146BC2(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (unk_0xA6DB27D19ECBB7DA(uParam0->f_1[iVar0]))
				{
					unk_0x86A652570E5F25DD(&(uParam0->f_1[iVar0]));
					func_71(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0xA6DB27D19ECBB7DA(uParam0->f_1[iVar0]))
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
						if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar0]))
						{
							if (func_82(uParam0->f_17[iVar0]) || unk_0x751B70C3D034E187(uParam0->f_17[iVar0], unk_0xD80958FC74E988A6(), uParam0->f_8, uParam0->f_8, uParam0->f_8, false, true, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar0]))
					{
						if (!unk_0x751B70C3D034E187(uParam0->f_17[iVar0], unk_0xD80958FC74E988A6(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, false, true, 0) && !func_82(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = unk_0x9CD27B0045628463();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!unk_0xA921AA820C25702F(uParam0->f_13, 5))
							{
								func_64(uParam0, sParam7, 0);
								unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 5);
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
										if (!unk_0xF22B6C47C6EAB066(uVar19[iVar0]))
										{
											if (!unk_0x0C515FAB3FF9EA92(uVar19[iVar0], ""))
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
		unk_0xE80492A9AC099A93(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (unk_0xA6DB27D19ECBB7DA(uParam0->f_1[iVar0]))
				{
					unk_0x86A652570E5F25DD(&(uParam0->f_1[iVar0]));
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
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_13), 14);
			break;
		
		case 1:
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_13), 15);
			break;
		
		case 2:
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_13), 16);
			break;
	}
}

void func_74(var uParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (!bParam3)
	{
		if (!unk_0xF22B6C47C6EAB066(sParam1))
		{
			if (!unk_0x0C515FAB3FF9EA92(sParam1, ""))
			{
				func_75(sParam1, sParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = unk_0x9CD27B0045628463();
}

void func_75(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xB87A37EEB7FAA67D(sParam0);
	unk_0xC63CD5D2920ACBE7(sParam1);
	unk_0x9D77056A530643F6(iParam2, true);
}

int func_76(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xA921AA820C25702F(uParam1->f_13, 14);
		
		case 1:
			return unk_0xA921AA820C25702F(uParam1->f_13, 15);
		
		case 2:
			return unk_0xA921AA820C25702F(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_77(int iParam0, float fParam1)
{
	int iVar0;
	
	if (unk_0x997ABD671D25CA0B(iParam0, false))
	{
		iVar0 = unk_0x9A9112A0FE9A4713(iParam0, false);
		if (!unk_0x5F9532F3B5CC2551(iVar0))
		{
			if (unk_0xD5037BA82E12416F(iVar0) > fParam1)
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
	
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (!unk_0x9BB01E3834671191(iParam0, func_14()))
		{
			iVar0 = unk_0xF92691AED837A5FC(iParam0);
			if (unk_0x4C241E39B23DF959(iParam1, false))
			{
				if (unk_0x751B70C3D034E187(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, false, true, 0))
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
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (unk_0x7239B21A38F536BA(iParam1))
		{
			if (unk_0x4C241E39B23DF959(iParam1, false))
			{
				if (unk_0xA808AA1D79230FC2(iParam0, iParam1))
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
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_13), 17);
			break;
		
		case 1:
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_13), 18);
			break;
		
		case 2:
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_13), 19);
			break;
	}
}

int func_81(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xA921AA820C25702F(uParam1->f_13, 17);
		
		case 1:
			return unk_0xA921AA820C25702F(uParam1->f_13, 18);
		
		case 2:
			return unk_0xA921AA820C25702F(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		iVar0 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
		if (unk_0x4C241E39B23DF959(iVar0, false))
		{
			if (!unk_0x84A2DD9AC37C35C1(iParam0))
			{
				iVar1 = unk_0x6094AD011A2EA87D(iParam0);
				if (unk_0x4C241E39B23DF959(iVar1, false))
				{
					if (iVar0 == iVar1)
					{
						if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iParam0, 20f, 20f, 20f, false, true, 0) && unk_0x751B70C3D034E187(iParam0, iVar1, 20f, 20f, 20f, false, true, 0))
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
	
	if (unk_0x4C241E39B23DF959(iParam0, false))
	{
		if (unk_0x9F47B058362C84B5(iParam0) == joaat("bus") || unk_0x9F47B058362C84B5(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!unk_0x84A2DD9AC37C35C1(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = unk_0xBB40DD2270B65366(iParam0, 0);
			if (!unk_0x84A2DD9AC37C35C1(iVar3))
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
			iVar4 = unk_0xBB40DD2270B65366(iParam0, 1);
			if (!unk_0x84A2DD9AC37C35C1(iVar4))
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
			iVar5 = unk_0xBB40DD2270B65366(iParam0, 2);
			if (!unk_0x84A2DD9AC37C35C1(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1 = (iVar1 + 1);
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
	
	if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
	{
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
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
	
	if (!unk_0x84A2DD9AC37C35C1(iParam1))
	{
		if (unk_0x826AA586EDB9FEF8(iParam1))
		{
			iVar0 = unk_0x9A9112A0FE9A4713(iParam1, false);
			if (!unk_0x5F9532F3B5CC2551(iVar0))
			{
				if (unk_0x4C241E39B23DF959(iVar0, false))
				{
					if (unk_0xA808AA1D79230FC2(unk_0xD80958FC74E988A6(), iVar0))
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
				else if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iParam1, fParam2, fParam2, 3f, false, true, 0))
				{
					return 1;
				}
			}
		}
		else if (unk_0x751B70C3D034E187(unk_0xD80958FC74E988A6(), iParam1, fParam2, fParam2, 3f, false, true, 0))
		{
			if (!bParam3)
			{
				iVar0 = unk_0x6094AD011A2EA87D(unk_0xD80958FC74E988A6());
				if (unk_0x7239B21A38F536BA(iVar0))
				{
					if (func_70(iVar0, uParam0, 0))
					{
						if (unk_0x4C241E39B23DF959(iVar0, false))
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
	
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		fVar0 = unk_0xD5037BA82E12416F(iParam0);
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
	
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (unk_0x4C241E39B23DF959(iParam1, false))
		{
			iVar0 = unk_0x6094AD011A2EA87D(iParam0);
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
	
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true))
	{
		iVar0 = unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6());
		if (unk_0x4C241E39B23DF959(iVar0, false))
		{
			iVar1 = unk_0xBB40DD2270B65366(iVar0, 0);
			if (!unk_0x84A2DD9AC37C35C1(iVar1))
			{
				if (iVar1 != unk_0xD80958FC74E988A6())
				{
					if (unk_0x0A7B270912999B3C(iVar1))
					{
						if (!unk_0x813A0A7C9D2E831F(iVar1, unk_0xD80958FC74E988A6()))
						{
							unk_0x69F4BE8C8CC4796C(iVar1, unk_0xD80958FC74E988A6(), 2000, 2048, 2);
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
	
	if (!unk_0xA921AA820C25702F(uParam0->f_13, 25))
	{
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x1913FE4CBF41C463(unk_0xD80958FC74E988A6(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (unk_0x7239B21A38F536BA(uParam0->f_17[iVar0]))
			{
				if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar0]))
				{
					unk_0x1913FE4CBF41C463(uParam0->f_17[iVar0], 32, false);
					unk_0x1913FE4CBF41C463(uParam0->f_17[iVar0], 305, true);
					unk_0x1913FE4CBF41C463(uParam0->f_17[iVar0], 268, true);
					unk_0xBC0ED94165A48BC2(uParam0->f_17[iVar0], false);
				}
			}
			iVar0++;
		}
		unk_0x933D6A9EEC1BACD0(&(uParam0->f_13), 25);
	}
}

void func_90(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0x7239B21A38F536BA(uParam0->f_17[iVar0]))
		{
			if (!unk_0x84A2DD9AC37C35C1(uParam0->f_17[iVar0]))
			{
				if (unk_0x826AA586EDB9FEF8(uParam0->f_17[iVar0]))
				{
					unk_0x6373D1349925A70E(uParam0->f_17[iVar0], false);
					unk_0x0EB0585D15254740(uParam0->f_17[iVar0], false);
				}
			}
		}
		iVar0++;
	}
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
		{
			if (unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6()))
			{
				unk_0x6373D1349925A70E(unk_0xD80958FC74E988A6(), false);
				unk_0x0EB0585D15254740(unk_0xD80958FC74E988A6(), false);
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
	if (unk_0x7239B21A38F536BA(iLocal_2569) && unk_0x4C241E39B23DF959(iLocal_2569, false))
	{
		return 1;
	}
	return 0;
}

bool func_94(int* iParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, float fParam10, bool bParam11, int iParam12, char* sParam13, char* sParam14, char* sParam15, bool bParam16, int iParam17, bool bParam18, int iParam19)
{
	return func_50(iParam0, Param1, func_95(), Param4, Param7, bParam11, 5, 0, 0, 0, iParam12, sParam13, func_91(), func_91(), func_91(), func_91(), sParam14, 0, bParam16, sParam15, 1, iParam17, bParam18, iParam19, func_91(), func_91(), func_91(), 1, fParam10);
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
			if (unk_0x7239B21A38F536BA(Local_578[iVar0 /*8*/]) && unk_0x4C241E39B23DF959(Local_578[iVar0 /*8*/], false))
			{
				if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) && unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_578[iVar0 /*8*/], true))
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
	
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x7239B21A38F536BA(Local_578[iVar0 /*8*/]) && unk_0x4C241E39B23DF959(Local_578[iVar0 /*8*/], false))
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_578[iVar0 /*8*/], false))
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
	Global_54583 = iParam0;
	Global_54584 = iParam1;
}

int func_99(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (((unk_0x7239B21A38F536BA(Local_578[iVar1 /*8*/]) && unk_0x4C241E39B23DF959(Local_578[iVar1 /*8*/], false)) && !func_103(Local_578[iVar1 /*8*/])) && (!bParam0 || func_100(Local_578[iVar1 /*8*/])))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_100(int iParam0)
{
	if (unk_0x2107BA504071A6BB(iParam0) == iLocal_2521)
	{
		if (func_102(unk_0xD80958FC74E988A6(), Local_641, 1) < 500f)
		{
			return 1;
		}
	}
	else if (func_101(iParam0, unk_0xD80958FC74E988A6(), 1) < 300f)
	{
		return 1;
	}
	return 0;
}

float func_101(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, false) };
	}
	if (!unk_0x5F9532F3B5CC2551(iParam1))
	{
		Var3 = { unk_0x3FEF770D40960D5A(iParam1, true) };
	}
	else
	{
		Var3 = { unk_0x3FEF770D40960D5A(iParam1, false) };
	}
	return unk_0xF1B760881820C952(Var0, Var3, bParam2);
}

float func_102(int iParam0, struct<3> Param1, bool bParam4)
{
	struct<3> Var0;
	
	if (!unk_0x5F9532F3B5CC2551(iParam0))
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3FEF770D40960D5A(iParam0, false) };
	}
	return unk_0xF1B760881820C952(Var0, Param1, bParam4);
}

int func_103(int iParam0)
{
	if (unk_0x4C241E39B23DF959(iParam0, false))
	{
		if ((unk_0x679BE1DAF71DA874(iParam0, 0, 7000) || unk_0x679BE1DAF71DA874(iParam0, 1, 7000)) || unk_0x679BE1DAF71DA874(iParam0, 2, 7000))
		{
			return 1;
		}
	}
	return 0;
}

void func_104(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xB87A37EEB7FAA67D(sParam0);
	unk_0x9D77056A530643F6(iParam1, true);
}

void func_105(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	struct<3> Var0;
	var uVar3;
	
	if (unk_0x7239B21A38F536BA(Global_91172.f_4))
	{
		if (unk_0x4C241E39B23DF959(Global_91172.f_4, false))
		{
			if (func_154(24) != Global_91172.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_151(unk_0x3FEF770D40960D5A(Global_91172.f_4, true), iParam5, &Var0, &uVar3))
					{
						Param0 = { Var0 };
						fParam3 = uVar3;
					}
				}
				func_106(Global_91172.f_4, Param0, fParam3, 24, 0);
			}
		}
	}
}

void func_106(int iParam0, struct<3> Param1, float fParam4, int iParam5, bool bParam6)
{
	struct<54> Var0;
	
	if (unk_0x7239B21A38F536BA(iParam0) && unk_0x4C241E39B23DF959(iParam0, false))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (unk_0x7239B21A38F536BA(Global_66960.f_484[25]) && unk_0x4C241E39B23DF959(Global_66960.f_484[25], false))
			{
				if (Global_66960.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((unk_0x9F243D3919F442FE(iParam0) || unk_0x9F47B058362C84B5(iParam0) == joaat("bus")) || unk_0x9F47B058362C84B5(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_150(iParam5);
		Var0.f_9 = 25;
		Var0.f_35 = 2;
		func_146(iParam0, &Var0);
		if (func_145(Param1, 0f, 0f, 0f))
		{
			Param1 = { unk_0x3FEF770D40960D5A(iParam0, true) };
			fParam4 = unk_0xE83D4F9BA2A38914(iParam0);
		}
		if (iParam5 == 24)
		{
			if (unk_0xD24D37CC275948CC(unk_0x442E0A7EDE4A738A()) != joaat("vehicle_gen_controller"))
			{
				Global_67924 = unk_0xD24D37CC275948CC(unk_0x442E0A7EDE4A738A());
			}
		}
		func_138(iParam5, Var0, Param1, fParam4, func_144(iParam0));
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
	if (!func_134(&(Global_66960.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xA921AA820C25702F(Global_66960.f_555[0 /*21*/].f_9, 12) && !unk_0xA921AA820C25702F(Global_66960.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_66960.f_555[0 /*21*/].f_4 != unk_0x9F47B058362C84B5(iParam1))
		{
			return;
		}
	}
	if (Global_67867 != -1 && Global_67867 != iParam0)
	{
		return;
	}
	if (unk_0x7239B21A38F536BA(iParam1))
	{
		if (unk_0x4C241E39B23DF959(iParam1, false))
		{
			if (!unk_0x0A7B270912999B3C(iParam1))
			{
				unk_0xAD738C3085FE7E11(iParam1, true, true);
			}
			if (iParam0 == 24)
			{
				Global_97173.f_18338.f_4249 = func_123();
			}
			if (iParam1 != Global_66960.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_154(iParam0);
					if ((unk_0x7239B21A38F536BA(iVar0) && unk_0x4C241E39B23DF959(iVar0, false)) && iParam1 != iVar0)
					{
						func_108(iVar0, 145);
					}
				}
				Global_67866 = iParam1;
				Global_67867 = iParam0;
				Global_67868 = iParam2;
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
		iVar0 = unk_0xBB40DD2270B65366(iParam0, -1);
		if (!unk_0x7239B21A38F536BA(iVar0))
		{
			iVar0 = unk_0x83F969AA1EE2A664(iParam0, -1);
		}
		if (unk_0x7239B21A38F536BA(iVar0) && !unk_0x84A2DD9AC37C35C1(iVar0))
		{
			if (unk_0x9F47B058362C84B5(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x9F47B058362C84B5(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x9F47B058362C84B5(iVar0) == joaat("player_two"))
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
			if (unk_0x9F47B058362C84B5(iParam0) == Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_42)
			{
				if (!unk_0xCA042B6957743895(&(Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (unk_0x0C515FAB3FF9EA92(unk_0x7CE1CCB9B293020E(iParam0), &(Global_97173.f_18338.f_4414[iVar1 /*109*/][iVar2 /*54*/].f_1)))
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
		if (unk_0x9F47B058362C84B5(iParam0) == Global_97173.f_18338.f_4808[iVar1 /*54*/].f_42)
		{
			if (!unk_0xCA042B6957743895(&(Global_97173.f_18338.f_4808[iVar1 /*54*/].f_1)))
			{
				if (unk_0x0C515FAB3FF9EA92(unk_0x7CE1CCB9B293020E(iParam0), &(Global_97173.f_18338.f_4808[iVar1 /*54*/].f_1)))
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
	func_146(iParam0, &(Global_97173.f_18338.f_4742));
}

int func_109(int iParam0)
{
	if ((((((((((!unk_0x7239B21A38F536BA(iParam0) || !unk_0x4C241E39B23DF959(iParam0, false)) || func_121(iParam0, 0, 0)) || func_121(iParam0, 1, 0)) || func_121(iParam0, 2, 0)) || func_144(iParam0) != 145) || func_120(iParam0)) || func_119(iParam0)) || func_118(iParam0)) || func_117(iParam0)) || !func_110(unk_0x9F47B058362C84B5(iParam0)))
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
	if (((unk_0x45A9187928F4B9E3(iParam0) || unk_0xA0948AB42D7BA0DE(iParam0)) || unk_0xDCE4334788AF94EA(iParam0)) || unk_0xAB935175B22E822B(iParam0))
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
	if (!unk_0x19AAC8F07BFEC53E(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !unk_0x10FAB35428CCC9D7())) || (iParam0 == joaat("buffalo3") && !unk_0x10FAB35428CCC9D7())) || (iParam0 == joaat("gauntlet2") && !unk_0x10FAB35428CCC9D7())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !unk_0x10FAB35428CCC9D7())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_116())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0xA7A866D21CD2329B())
		{
			if (unk_0x33468EDC08E371F6(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0xD4D7B033C3AA243C(Var1.f_0))
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
		if ((unk_0x4D982ADB1978442D() || unk_0x48AF36444B965238()) || unk_0xA72BC0B675B1519E())
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
	if (unk_0x812595A0644CE1DE(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_116()
{
	int iVar0;
	
	if (unk_0x5AA3BEFA29F03AD4())
	{
		if (unk_0xA921AA820C25702F(unk_0xC488FF2356EA7791(866), 0))
		{
			return 1;
		}
	}
	if (!unk_0x10FAB35428CCC9D7())
	{
		if (unk_0xA921AA820C25702F(Global_97173.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131417 == 2)
	{
		return 1;
	}
	if (unk_0x054354A99211EB96())
	{
		if (unk_0x85443FF4C328F53B())
		{
			if (unk_0x593570C289A77688())
			{
				if (unk_0x5AA3BEFA29F03AD4())
				{
					iVar0 = unk_0xC488FF2356EA7791(866);
					unk_0x933D6A9EEC1BACD0(&iVar0, 0);
					unk_0xDAC073C7901F9E15(iVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_117(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x9F47B058362C84B5(iParam0);
	sVar1 = unk_0x7CE1CCB9B293020E(iParam0);
	if (iVar0 == joaat("speedo") && unk_0x0C515FAB3FF9EA92(sVar1, "LAMAR G "))
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
		if (unk_0x7239B21A38F536BA(Global_87550[iVar0]))
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

int func_119(int iParam0)
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(iParam0) && unk_0x4C241E39B23DF959(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0x7239B21A38F536BA(Global_87520[iVar0]) && unk_0x4C241E39B23DF959(Global_87520[iVar0], false))
			{
				if (Global_87520[iVar0] == iParam0 && unk_0x9F47B058362C84B5(Global_87520[iVar0]) == unk_0x9F47B058362C84B5(iParam0))
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
	
	if (unk_0x7239B21A38F536BA(Global_66960.f_484[24]))
	{
		if (iParam0 == Global_66960.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0x7239B21A38F536BA(Global_66960.f_484[iVar0]))
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

int func_121(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!unk_0x7239B21A38F536BA(iParam0) || !unk_0x4C241E39B23DF959(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_122(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || unk_0xA921AA820C25702F(Global_97173.f_5486[iVar9], 0))
		{
			if (unk_0xCEE4490CD57BB3C2(&sVar1, iParam0))
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
	
	func_133(&uVar0, unk_0x494E97C2EF27C470());
	func_132(&uVar0, unk_0x13D2B8ADD79640F2());
	func_131(&uVar0, unk_0x25223CA6B4D20B7F());
	func_126(&uVar0, unk_0x3D10BC92A4DB1D35());
	func_125(&uVar0, unk_0xBBC72712E80257A1());
	func_124(&uVar0, unk_0x961777E64BDAF717());
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
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_129(unk_0xA921AA820C25702F(iParam0, 31), -1, 1)) + 2011;
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
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_135(0, 1);
			uParam0->f_12 = 0;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_135(1, 1);
			uParam0->f_12 = 1;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_135(1, 2);
			uParam0->f_12 = 1;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 19);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_135(1, 1);
			uParam0->f_12 = 1;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_135(1, 2);
			uParam0->f_12 = 1;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 19);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_135(2, 1);
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_135(2, 1);
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_135(2, 1);
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 20);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 0);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 0);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 0);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 0);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 22);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 0);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 22);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 0);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 22);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 0);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 0);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 0);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 0);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 24);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 0);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 24);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 0);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 14);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 24);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 28);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 29);
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
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 27);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 24);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 29);
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
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 27);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 24);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 29);
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
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 7);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 27);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 24);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 11);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 13);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 10);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 11);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 13);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 9);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 9);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 8);
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
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 2);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 30);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 2);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 22);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
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
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 13);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 2);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 1);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
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
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 13);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 2);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 1);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 0);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 21);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 30);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 30);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 23);
			unk_0x933D6A9EEC1BACD0(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xA921AA820C25702F(uParam0->f_9, 10))
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
		if (!func_145(Global_97173.f_18338.f_1312[uParam0->f_14 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97173.f_18338.f_1312[uParam0->f_14 /*3*/] };
		}
		if (Global_97173.f_18338.f_1382[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_97173.f_18338.f_1382[uParam0->f_14];
		}
	}
	if (unk_0xA921AA820C25702F(uParam0->f_9, 19))
	{
		if (!func_145(Global_97173.f_1729.f_539.f_2528[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97173.f_1729.f_539.f_2528[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_97173.f_1729.f_539.f_2549[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xA921AA820C25702F(uParam0->f_9, 20))
	{
		if (!func_145(Global_97173.f_1729.f_539.f_2528[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_97173.f_1729.f_539.f_2528[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_97173.f_1729.f_539.f_2549[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_135(int iParam0, int iParam1)
{
	struct<58> Var0;
	
	if (func_137(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
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

bool func_137(int iParam0)
{
	return iParam0 < 3;
}

void func_138(int iParam0, struct<54> Param1, struct<3> Param55, float fParam58, int iParam59)
{
	if (func_134(&(Global_66960.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xA921AA820C25702F(Global_66960.f_555[0 /*21*/].f_9, 10))
		{
			func_143(iParam0);
			func_142(Param1, &(Global_97173.f_18338.f_69[Global_66960.f_555[0 /*21*/].f_14 /*54*/]));
			if (unk_0xA921AA820C25702F(Global_66960.f_555[0 /*21*/].f_9, 11))
			{
				Global_97173.f_18338.f_1312[Global_66960.f_555[0 /*21*/].f_14 /*3*/] = { Param55 };
				Global_97173.f_18338.f_1382[Global_66960.f_555[0 /*21*/].f_14] = fParam58;
			}
			else
			{
				Global_97173.f_18338.f_1312[Global_66960.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_97173.f_18338.f_1382[Global_66960.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_97173.f_18338.f_1406[Global_66960.f_555[0 /*21*/].f_14] = iParam59 + 1;
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
			Global_66960[iParam0] = 1;
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
		unk_0x933D6A9EEC1BACD0(&(Global_97173.f_18338[iParam0]), iParam1);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_97173.f_18338[iParam0]), iParam1);
	}
}

bool func_141(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xA921AA820C25702F(Global_97173.f_18338[iParam0], iParam1);
}

void func_142(struct<54> Param0, var uParam54)
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

void func_143(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_134(&(Global_66960.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x7239B21A38F536BA(Global_66960.f_139[iParam0]))
		{
			unk_0xAD738C3085FE7E11(Global_66960.f_139[iParam0], true, true);
			unk_0x629BFA74418D6239(&(Global_66960.f_139[iParam0]));
			Global_66960.f_139[iParam0] = 0;
		}
		if (unk_0xA921AA820C25702F(Global_66960.f_555[0 /*21*/].f_9, 13))
		{
			func_139(iParam0, 0);
		}
	}
}

int func_144(int iParam0)
{
	int iVar0;
	
	if (!unk_0x7239B21A38F536BA(iParam0))
	{
		return 145;
	}
	if (!unk_0x4C241E39B23DF959(iParam0, false))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0x7239B21A38F536BA(Global_87520[iVar0]))
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

bool func_145(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_146(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x4C241E39B23DF959(iParam0, false))
	{
		func_149(uParam1);
		uParam1->f_42 = unk_0x9F47B058362C84B5(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x7CE1CCB9B293020E(iParam0), 16);
		*uParam1 = unk_0xF11BC2DD9A3E7195(iParam0);
		unk_0xA19435F193E081AC(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x3BC4245933A166F7(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xB635392A4938B3C3(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = unk_0x0EE21293DAD47C95(iParam0);
		uParam1->f_43 = unk_0x2BB9230590DA5E8A(iParam0);
		uParam1->f_45 = unk_0xB3ED1BFB4BE636DC(iParam0);
		uParam1->f_46 = unk_0x25BC98A59C2EA962(iParam0);
		unk_0x8389CD56CA8072DC(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		unk_0x7619EEE8C886757F(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (unk_0x8C4B92553E4766A5(iParam0, 2))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 28);
		}
		if (unk_0x8C4B92553E4766A5(iParam0, 3))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 29);
		}
		if (unk_0x8C4B92553E4766A5(iParam0, 0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 30);
		}
		if (unk_0x8C4B92553E4766A5(iParam0, 1))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (unk_0x52F357A30698BCCE(iParam0, false))
		{
			uParam1->f_44 = unk_0xF8C397922FC03F41(iParam0);
		}
		if (unk_0xA0948AB42D7BA0DE(uParam1->f_42))
		{
			if (unk_0x4198AB0022B15F87(iParam0))
			{
				switch (unk_0x9B0F3DCA3DB0F4CD(iParam0))
				{
					case 2:
					case 0:
						unk_0xE80492A9AC099A93(&(uParam1->f_53), 23);
						unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						unk_0xE80492A9AC099A93(&(uParam1->f_53), 23);
						unk_0xE80492A9AC099A93(&(uParam1->f_53), 22);
						break;
					
					case 4:
						unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 23);
			}
		}
		if (!unk_0x678B9BB8C3F58FEB(iParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 9);
		}
		if (unk_0x4AF9BD80EEBEB453(iParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 10);
		}
		if (unk_0xF095C0405307B21B(iParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 13);
			unk_0xB64CF2CCA9D95F52(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (unk_0x910A32E7AAD2656C(iParam0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 12);
		}
		func_148(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xD2E6822DBFD6C8BD(iParam0, iVar0 + 1))
			{
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), func_147(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x060D935D3981A275(iParam0, 0))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 11);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(uParam1->f_53), 11);
		}
		if (unk_0x05661B80A8C9165F(iParam0, "IgnoredByQuickSave") && unk_0xDACE671663F2F5DB(iParam0, "IgnoredByQuickSave"))
		{
			unk_0x933D6A9EEC1BACD0(&(uParam1->f_53), 27);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(uParam1->f_53), 27);
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
	
	if (!unk_0x4C241E39B23DF959(*iParam0, false))
	{
		return 0;
	}
	if (unk_0x33F2E3FE70EAAE1D(*iParam0) == 0)
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
			if (unk_0x84B233A8C8FC8AE7(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = unk_0x772960298DA26FDB(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0xB3924ECD70E095DC(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0xB3924ECD70E095DC(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_149(var uParam0)
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
		if (Global_85227[iVar0 /*10*/].f_7 != 262)
		{
			if (Global_85227[iVar0 /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_153(iVar0) || iParam4 == 0)
				{
					fVar1 = unk_0xF1B760881820C952(Param0, Global_85227[iVar0 /*10*/].f_3, true);
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
	return unk_0xA921AA820C25702F(Global_97173.f_5486[iParam0], 0);
}

int func_154(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_66960.f_139[iParam0];
}

int func_155()
{
	func_156();
	return Global_97173.f_1729.f_539.f_3213;
}

void func_156()
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
	{
		if (func_158(Global_97173.f_1729.f_539.f_3213) != unk_0x9F47B058362C84B5(unk_0xD80958FC74E988A6()))
		{
			iVar0 = func_157(unk_0xD80958FC74E988A6());
			if (func_137(iVar0) && (!func_35(14) || Global_96126))
			{
				if (Global_97173.f_1729.f_539.f_3213 != iVar0 && func_137(Global_97173.f_1729.f_539.f_3213))
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

int func_157(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		iVar1 = unk_0x9F47B058362C84B5(iParam0);
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
		return Global_97173.f_29699[iParam0 /*29*/];
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
		uParam0->f_4 = unk_0x9CD27B0045628463();
		uParam0->f_5 = unk_0x9CD27B0045628463();
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
		unk_0x963D27A58DF860AC(iParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = unk_0x9CD27B0045628463();
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
	
	if (unk_0xCA042B6957743895(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_737)
	{
		if (uParam0->f_737[iVar0 /*5*/])
		{
			if (unk_0x0C515FAB3FF9EA92(uParam0->f_737[iVar0 /*5*/].f_4, sParam1))
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
		unk_0x2F844A8B08D76685(sParam1, 0);
		uParam0->f_737[iVar1 /*5*/] = 1;
		uParam0->f_737[iVar1 /*5*/].f_3 = unk_0x9CD27B0045628463();
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
				if ((unk_0x9CD27B0045628463() - (uParam0[iVar0 /*8*/])->f_5) > (uParam0[iVar0 /*8*/])->f_6)
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
	if (func_102(unk_0xD80958FC74E988A6(), Local_641, 1) < 70f)
	{
		unk_0x1121BFA1A1A522A8();
	}
	if (iLocal_2567 == 9)
	{
		if (!iLocal_2566)
		{
			if (unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
			{
				unk_0xDFEBD56D9BD1EB16("SCRIPTED_SCANNER_REPORT_JSH_PREP_1A_01", 0f);
				iLocal_2566 = 1;
			}
		}
		if (unk_0x7239B21A38F536BA(Local_468.f_0))
		{
			if (func_101(Local_468.f_0, unk_0xD80958FC74E988A6(), 1) > 300f)
			{
				unk_0x2595DD4236549CE3(&Local_468);
			}
		}
	}
	if (unk_0x7239B21A38F536BA(iLocal_2569) && unk_0x4C241E39B23DF959(iLocal_2569, false))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x7239B21A38F536BA(Local_578[iVar0 /*8*/]) && unk_0x4C241E39B23DF959(Local_578[iVar0 /*8*/], false))
			{
				if (unk_0x146DF9EC4C4B9FD4(iLocal_2569, Local_578[iVar0 /*8*/]))
				{
					bVar2 = true;
				}
			}
			iVar0++;
		}
		if (!bVar2)
		{
			iLocal_2569 = 0;
		}
	}
	if (func_173())
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x7239B21A38F536BA(Local_578[iVar0 /*8*/]) && unk_0x4C241E39B23DF959(Local_578[iVar0 /*8*/], false))
			{
				if (unk_0x146DF9EC4C4B9FD4(unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false), Local_578[iVar0 /*8*/]))
				{
					iLocal_2569 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
				}
			}
			iVar0++;
		}
	}
	func_166();
	if (iLocal_650 == 0)
	{
		if (!unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), 182.9537f, -3119.884f, 101.9226f, 115f, 260f, 120f, false, true, 0))
		{
			bVar3 = true;
		}
		iVar1 = 0;
		while (iVar1 < Local_27.f_0)
		{
			if (unk_0x7239B21A38F536BA(Local_27[iVar1 /*110*/]))
			{
				if ((Local_27[iVar1 /*110*/].f_5 == 5 && func_101(unk_0xD80958FC74E988A6(), Local_27[iVar1 /*110*/], 1) > 300f) && func_102(unk_0xD80958FC74E988A6(), Local_641, 1) > 300f)
				{
					unk_0x9614299DCB53E54B(&(Local_27[iVar1 /*110*/]));
				}
			}
			iVar1++;
		}
		iVar4 = 6;
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x7239B21A38F536BA(Local_578[iVar0 /*8*/]))
			{
				if (!unk_0x4C241E39B23DF959(Local_578[iVar0 /*8*/], false))
				{
					unk_0x629BFA74418D6239(&(Local_578[iVar0 /*8*/]));
					if (unk_0xA6DB27D19ECBB7DA(Local_578[iVar0 /*8*/].f_1))
					{
						unk_0x86A652570E5F25DD(&(Local_578[iVar0 /*8*/].f_1));
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
				else if (func_103(Local_578[iVar0 /*8*/]))
				{
					if (unk_0xA6DB27D19ECBB7DA(Local_578[iVar0 /*8*/].f_1))
					{
						unk_0x86A652570E5F25DD(&(Local_578[iVar0 /*8*/].f_1));
					}
					iVar4 = 3;
				}
				else if (!func_100(Local_578[iVar0 /*8*/]))
				{
					if (unk_0x2107BA504071A6BB(Local_578[iVar0 /*8*/]) == iLocal_2521)
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
			if (((((iLocal_2567 == 9 && func_96() != -1) && unk_0x7239B21A38F536BA(Local_578[func_96() /*8*/])) && unk_0x4C241E39B23DF959(Local_578[func_96() /*8*/], false)) && !func_103(Local_578[func_96() /*8*/])) || (((iLocal_2567 == 10 && func_48() != -1) && unk_0x7239B21A38F536BA(Local_578[func_48() /*8*/])) && unk_0x4C241E39B23DF959(Local_578[func_48() /*8*/], false)))
			{
				if (unk_0xA6DB27D19ECBB7DA(Local_578[iVar0 /*8*/].f_1))
				{
					unk_0x86A652570E5F25DD(&(Local_578[iVar0 /*8*/].f_1));
				}
			}
			else if ((((unk_0x7239B21A38F536BA(Local_578[iVar0 /*8*/]) && unk_0x4C241E39B23DF959(Local_578[iVar0 /*8*/], false)) && !func_103(Local_578[iVar0 /*8*/])) && func_100(Local_578[iVar0 /*8*/])) && iLocal_651 == 0)
			{
				if (!unk_0xA6DB27D19ECBB7DA(Local_578[iVar0 /*8*/].f_1))
				{
					Local_578[iVar0 /*8*/].f_1 = func_165(Local_578[iVar0 /*8*/], 0, 0);
					unk_0xAE9FC9EF6A9FAC79(Local_578[iVar0 /*8*/].f_1, 1);
				}
			}
			iVar0++;
		}
		if (iLocal_2567 == 9 || iLocal_2567 == 10)
		{
			if (func_164("JHP1A_BKIN", 0, 0) || func_164("JHP1A_BKINANY", 0, 0))
			{
				unk_0xCC33FA791322B9D9();
			}
		}
		else if (iLocal_651 == 0)
		{
			if (!iLocal_2561)
			{
				if (func_99(1) == 1)
				{
					func_104("JHP1A_BKIN", 7500, 1);
				}
				iLocal_2561 = 1;
			}
		}
		if (func_99(1) == 0)
		{
			if (iVar4 != 6)
			{
				func_266(iVar4);
			}
		}
	}
}

bool func_164(char* sParam0, int iParam1, char* sParam2)
{
	unk_0x853648FD1063A213(sParam0);
	if (iParam1 == 1)
	{
		unk_0xC63CD5D2920ACBE7(sParam2);
	}
	return unk_0x8A9BA1AB3E237613();
}

int func_165(int iParam0, bool bParam1, bool bParam2)
{
	return func_52(iParam0, !bParam1, bParam2);
}

void func_166()
{
	if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_578[3 /*8*/], true))
		{
			iLocal_2567 = 11;
		}
		else if (func_172())
		{
			iLocal_2567 = 7;
		}
		else if (func_171())
		{
			iLocal_2567 = 6;
		}
		else if (func_97())
		{
			iLocal_2567 = 9;
			iLocal_2561 = 0;
		}
		else if (func_93())
		{
			iLocal_2567 = 10;
		}
		else if (func_170())
		{
			iLocal_2567 = 8;
		}
		else if (((unk_0x7239B21A38F536BA(iLocal_2570) && unk_0x4C241E39B23DF959(iLocal_2570, false)) && !unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_2570, true)) && unk_0x51210CED3DA1C78A(iLocal_2570, Local_641, 119.7228f, -3092.472f, 13.46126f, 44f, false, true, 0))
		{
			iLocal_2567 = 5;
		}
		else if (((!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) && unk_0x7239B21A38F536BA(unk_0xB6997A7EB3F5C8C0())) && !func_169()) && unk_0x51210CED3DA1C78A(unk_0xB6997A7EB3F5C8C0(), Local_641, 119.7228f, -3092.472f, 13.46126f, 44f, false, true, 0))
		{
			iLocal_2570 = unk_0xB6997A7EB3F5C8C0();
			iLocal_2567 = 5;
		}
		else if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) && unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_641, 119.7228f, -3092.472f, 13.46126f, 44f, false, true, 0))
		{
			iLocal_2567 = 2;
		}
		else if (((unk_0x7239B21A38F536BA(iLocal_2570) && unk_0x4C241E39B23DF959(iLocal_2570, false)) && !unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iLocal_2570, true)) && (unk_0x51210CED3DA1C78A(iLocal_2570, 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, false, true, 0) || unk_0x20B60995556D004F(iLocal_2570, 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0)))
		{
			iLocal_2567 = 4;
		}
		else if (((!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) && unk_0x7239B21A38F536BA(unk_0xB6997A7EB3F5C8C0())) && !func_169()) && (unk_0x51210CED3DA1C78A(unk_0xB6997A7EB3F5C8C0(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, false, true, 0) || unk_0x20B60995556D004F(unk_0xB6997A7EB3F5C8C0(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0)))
		{
			iLocal_2570 = unk_0xB6997A7EB3F5C8C0();
			iLocal_2567 = 4;
		}
		else if ((unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) && !func_169()) && unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), Local_641, 119.7228f, -3092.472f, 13.46126f, 44f, false, true, 0))
		{
			iLocal_2570 = unk_0xB6997A7EB3F5C8C0();
			iLocal_2567 = 3;
		}
		else if ((unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) && !func_169()) && unk_0x51210CED3DA1C78A(unk_0xD80958FC74E988A6(), 170.8236f, -3092.406f, 4.849259f, 154.33f, -3092.45f, 9.783653f, 14.0625f, false, true, 0))
		{
			iLocal_2570 = unk_0xB6997A7EB3F5C8C0();
			iLocal_2567 = 1;
		}
		else if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) && unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0))
		{
			iLocal_2567 = 1;
		}
		else
		{
			iLocal_2570 = 0;
			if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) && unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), 159.688f, -3092.446f, 7.314032f, 4.9375f, 7.3125f, 2.3125f, false, true, 0))
			{
				iLocal_2567 = 0;
			}
			else if (!unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) && unk_0x20B60995556D004F(unk_0xD80958FC74E988A6(), 115.7556f, -3092.294f, 7.576007f, 4.375f, 10.1875f, 2.5625f, false, true, 0))
			{
				iLocal_2567 = 0;
			}
			else
			{
				iLocal_2567 = -1;
			}
		}
		if (iLocal_2567 == 1)
		{
			if (func_168(Local_27[0 /*110*/]))
			{
				func_167(Local_27[0 /*110*/], 120f, 20f, 120f, -90f, 90f);
			}
		}
		else if (func_168(Local_27[0 /*110*/]))
		{
			func_167(Local_27[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		}
		if (bLocal_2564)
		{
			unk_0xC1E8A365BF3B29F2(unk_0xD80958FC74E988A6(), 155, true);
		}
		if ((iLocal_2567 != -1 && unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) && unk_0x16EC4839969F9F5E(Vector(101.9226f, -3119.884f, 182.9537f) - Vector(108.0625f, 239.75f, 94.25f), Vector(101.9226f, -3119.884f, 182.9537f) + Vector(108.0625f, 239.75f, 94.25f)))
		{
		}
	}
}

void func_167(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		unk_0xF29CF591C4BF6CEE(iParam0, fParam1);
		unk_0x9C74B0BC831B753A(iParam0, fParam2);
		unk_0x3B6405E8AB34A907(iParam0, (fParam3 / 2f));
		unk_0x2DB492222FB21E26(iParam0, fParam4);
		unk_0x70793BDCA1E854D4(iParam0, fParam5);
	}
}

int func_168(int iParam0)
{
	if (iParam0 != 0 && unk_0x7239B21A38F536BA(iParam0))
	{
		switch (unk_0x8ACD366038D14505(iParam0))
		{
			case 1:
				if (!unk_0x84A2DD9AC37C35C1(unk_0x04A2A40C73395041(iParam0)))
				{
					return 1;
				}
				break;
			
			case 2:
				if (unk_0x4C241E39B23DF959(unk_0x4B53F92932ADFAC0(iParam0), false))
				{
					return 1;
				}
				break;
			
			default:
				if (!unk_0x5F9532F3B5CC2551(iParam0))
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
		if (unk_0x7239B21A38F536BA(Local_578[iVar0 /*8*/]) && unk_0x4C241E39B23DF959(Local_578[iVar0 /*8*/], false))
		{
			if (unk_0xB6997A7EB3F5C8C0() == Local_578[iVar0 /*8*/])
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
		if (unk_0x7239B21A38F536BA(Local_578[iVar0 /*8*/]) && unk_0xC86D67D52A707CF8(Local_578[iVar0 /*8*/], unk_0xD80958FC74E988A6(), true))
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
	
	if (unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if ((unk_0x7239B21A38F536BA(Local_578[iVar0 /*8*/]) && unk_0x4C241E39B23DF959(Local_578[iVar0 /*8*/], false)) && unk_0xF92691AED837A5FC(unk_0xD80958FC74E988A6()) == Local_578[iVar0 /*8*/])
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
	
	if ((unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true) && !unk_0x826AA586EDB9FEF8(unk_0xD80958FC74E988A6())) && !unk_0xBB062B2B5722478E(unk_0xD80958FC74E988A6()))
	{
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (unk_0x7239B21A38F536BA(Local_578[iVar0 /*8*/]) && unk_0x4C241E39B23DF959(Local_578[iVar0 /*8*/], false))
			{
				if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Local_578[iVar0 /*8*/], true))
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
	
	if (unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), false))
	{
		iVar0 = unk_0x9A9112A0FE9A4713(unk_0xD80958FC74E988A6(), false);
		if (unk_0x4C241E39B23DF959(iVar0, false) && (unk_0x9F47B058362C84B5(iVar0) == joaat("towtruck") || unk_0x9F47B058362C84B5(iVar0) == joaat("towtruck2")))
		{
			return 1;
		}
	}
	return 0;
}

void func_174()
{
	int iVar0;
	
	if (unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
	{
		func_266(6);
	}
	iVar0 = 0;
	while (iVar0 < Local_27.f_0)
	{
		if (unk_0x7239B21A38F536BA(Local_27[iVar0 /*110*/]))
		{
			if (Local_27[iVar0 /*110*/].f_93)
			{
				if (Local_27[iVar0 /*110*/].f_102)
				{
					func_175(Local_27[iVar0 /*110*/], &(Local_27[iVar0 /*110*/].f_94), 3, 0, 0, 0, -1082130432, 0);
				}
				else
				{
					func_175(Local_27[iVar0 /*110*/], &(Local_27[iVar0 /*110*/].f_94), 2, 0, 0, 0, -1082130432, 0);
				}
			}
			if (!func_168(Local_27[iVar0 /*110*/]))
			{
				if (Local_27[iVar0 /*110*/].f_103 == -1)
				{
					Local_27[iVar0 /*110*/].f_103 = unk_0x9CD27B0045628463();
				}
				else if ((unk_0x9CD27B0045628463() - Local_27[iVar0 /*110*/].f_103) >= 5000)
				{
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_578.f_0)
	{
		if (unk_0x7239B21A38F536BA(Local_578[iVar0 /*8*/]) && Local_578[iVar0 /*8*/].f_7)
		{
			if (!func_168(Local_578[iVar0 /*8*/]))
			{
				if (unk_0xA6DB27D19ECBB7DA(Local_578[iVar0 /*8*/].f_1))
				{
					unk_0x86A652570E5F25DD(&(Local_578[iVar0 /*8*/].f_1));
				}
				unk_0x629BFA74418D6239(&(Local_578[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
}

int func_175(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0xA5EDC40EF369B48D();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (!unk_0x15B8ECF844EE67ED(iParam0))
		{
			unk_0xD30C50DF888D58B5(iParam0, true);
			uParam1->f_7 = iParam0;
			unk_0xE52B8E7F85D39A08(iParam0, iParam2);
			unk_0x97C65887D4B37FA9(iParam0, fParam6);
			if (unk_0xA6DB27D19ECBB7DA(*uParam1))
			{
				unk_0xAE9FC9EF6A9FAC79(*uParam1, 7);
			}
		}
		unk_0x0C4BBF625CA98C4E(iParam0, bParam4);
		unk_0x3EED80DFF7325CAA(iParam0, bParam5);
		*uParam1 = unk_0x7CD934010E115C2C(iParam0);
		if (!unk_0xA921AA820C25702F(uParam1->f_6, 2))
		{
			if (unk_0xA6DB27D19ECBB7DA(*uParam1))
			{
				if (!unk_0xCA042B6957743895(sParam7))
				{
					unk_0xF9113A30DE5C6670("MCUSTBLIP");
					unk_0x6C188BE134E074AA(sParam7);
					unk_0xBC38B49BCB83BC9B(*uParam1);
				}
				unk_0x933D6A9EEC1BACD0(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x997ABD671D25CA0B(iParam0, false))
		{
			uParam1->f_1 = unk_0x56176892826A4FE8(iParam0);
			if (!unk_0xA921AA820C25702F(uParam1->f_6, 3))
			{
				if (unk_0xA6DB27D19ECBB7DA(uParam1->f_1))
				{
					unk_0xAE9FC9EF6A9FAC79(uParam1->f_1, 7);
					unk_0x933D6A9EEC1BACD0(&(uParam1->f_6), 3);
				}
			}
		}
		else if (unk_0xA6DB27D19ECBB7DA(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xE80492A9AC099A93(&(uParam1->f_6), 3);
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
	float fVar3;
	
	if (bLocal_653 == 1)
	{
		if (!unk_0xB16FCE9DDC7BA182())
		{
			if (!unk_0x797AC7CB535BA28F())
			{
				unk_0x891B5B39AC6302AF(1000);
			}
		}
		else
		{
			if (unk_0x991251AFC3981F84())
			{
				unk_0xC7272775B4DC786E(false);
				unk_0x440AF51A3462B86F();
			}
			func_24(iLocal_654);
			unk_0x07E5B515DB0636FC(false, false, 3000, true, false, 0);
			unk_0xCC33FA791322B9D9();
			unk_0x8DFCED7A656F8802(true);
			func_8(1);
			if (!func_212())
			{
				func_211(iLocal_650, &Var0, &fVar3);
				unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), Var0, true, false, false, true);
				unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), fVar3);
				unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), true);
				func_209(&uLocal_657, Var0, 50f, 0);
			}
			func_208(&uLocal_657);
			switch (iLocal_650)
			{
				case 0:
					func_160(&uLocal_657, joaat("burrito2"));
					func_160(&uLocal_657, joaat("s_m_y_pestcont_01"));
					func_160(&uLocal_657, joaat("s_m_m_security_01"));
					func_160(&uLocal_657, joaat("dilettante2"));
					func_160(&uLocal_657, joaat("p_amb_clipboard_01"));
					func_207(&uLocal_657, &cLocal_644);
					func_206(&uLocal_657, "misslsdhsclipboard@base");
					func_206(&uLocal_657, "misslsdhsclipboard@idle_a");
					func_206(&uLocal_657, "misstrevor3");
					func_205(&uLocal_657, iLocal_2521);
					if (((func_204() && !unk_0x45A9187928F4B9E3(func_203())) && !unk_0xA0948AB42D7BA0DE(func_203())) && !unk_0xDCE4334788AF94EA(func_203()))
					{
						func_160(&uLocal_657, func_203());
					}
					break;
				
				case 1:
					func_160(&uLocal_657, joaat("burrito2"));
					break;
			}
			while (!func_202(&uLocal_657))
			{
				unk_0x4EDE34FBADD967A6(0);
				func_174();
			}
			switch (iLocal_650)
			{
				case 0:
					if (((func_204() && !unk_0x45A9187928F4B9E3(func_203())) && !unk_0xA0948AB42D7BA0DE(func_203())) && !unk_0xDCE4334788AF94EA(func_203()))
					{
						while (!func_201())
						{
							unk_0x4EDE34FBADD967A6(0);
						}
						Local_578[4 /*8*/] = func_183(189.3979f, -2932.721f, 5.6127f, 180.5455f);
					}
					if (func_212())
					{
						if (unk_0x7239B21A38F536BA(Local_578[4 /*8*/]))
						{
							func_180(Local_578[4 /*8*/], -1, 1);
						}
						else
						{
							func_180(0, -1, 1);
						}
					}
					else
					{
						unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), false);
						if (unk_0x7239B21A38F536BA(Local_578[4 /*8*/]))
						{
							unk_0xF75B0D629E1C063D(unk_0xD80958FC74E988A6(), Local_578[4 /*8*/], -1);
						}
					}
					while (!func_177(0))
					{
						unk_0x4EDE34FBADD967A6(0);
					}
					unk_0xB4EC2312F4E5B1F1(0f);
					unk_0x6D0858B8EDFD2B7D(0f, 1f);
					break;
				
				case 1:
					if (!func_7(88))
					{
						Local_578[0 /*8*/] = unk_0xAF35D0D2583051B0(joaat("burrito2"), 693.725f, -1006.302f, 21.8355f, 359.884f, 1, 1);
						unk_0x31B927BBC44156CD(Local_578[0 /*8*/], false);
						unk_0x49733E92263139D1(Local_578[0 /*8*/]);
					}
					if (func_212())
					{
						func_180(0, -1, 1);
					}
					else
					{
						unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), false);
					}
					unk_0x06843DA7060A026B(unk_0xD80958FC74E988A6(), 692.067f, -1004.812f, 21.9059f, true, false, false, true);
					unk_0x8E2530AA8ADA980E(unk_0xD80958FC74E988A6(), 359.5735f);
					unk_0xB4EC2312F4E5B1F1(0f);
					unk_0x6D0858B8EDFD2B7D(0f, 1f);
					break;
			}
			if (unk_0xB16FCE9DDC7BA182() || !unk_0x5C544BC6C57AC575())
			{
				if (!func_7(88) || iLocal_650 != 1)
				{
					unk_0xD4E8E24955024033(800);
				}
			}
			bLocal_653 = false;
		}
	}
}

int func_177(bool bParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	bVar0 = false;
	iVar1 = 1;
	if (bParam0)
	{
		if (unk_0x7239B21A38F536BA(Global_86686[0]))
		{
			Local_578[0 /*8*/] = Global_86686[0];
			unk_0xAD738C3085FE7E11(Local_578[0 /*8*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x7239B21A38F536BA(Global_86686[1]))
		{
			Local_578[1 /*8*/] = Global_86686[1];
			unk_0xAD738C3085FE7E11(Local_578[1 /*8*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x7239B21A38F536BA(Global_86686[2]))
		{
			Local_578[2 /*8*/] = Global_86686[2];
			unk_0xAD738C3085FE7E11(Local_578[2 /*8*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x7239B21A38F536BA(Global_86686.f_9[0]))
		{
			Local_27[1 /*110*/] = Global_86686.f_9[0];
			if (!unk_0x84A2DD9AC37C35C1(Local_27[1 /*110*/]))
			{
				unk_0x0DC7CABAB1E9B67E(Local_27[1 /*110*/], 0);
			}
			unk_0xAD738C3085FE7E11(Local_27[1 /*110*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x7239B21A38F536BA(Global_86686.f_28[0]))
		{
			Local_27[1 /*110*/].f_105 = Global_86686.f_28[0];
			unk_0xAD738C3085FE7E11(Local_27[1 /*110*/].f_105, true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x7239B21A38F536BA(Global_86686.f_9[2]))
		{
			Local_27[0 /*110*/] = Global_86686.f_9[2];
			if (!unk_0x84A2DD9AC37C35C1(Local_27[0 /*110*/]))
			{
				unk_0x0DC7CABAB1E9B67E(Local_27[0 /*110*/], 0);
			}
			unk_0xAD738C3085FE7E11(Local_27[0 /*110*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x7239B21A38F536BA(Global_86686.f_9[3]))
		{
			Local_27[2 /*110*/] = Global_86686.f_9[3];
			if (!unk_0x84A2DD9AC37C35C1(Local_27[3 /*110*/]))
			{
				unk_0x0DC7CABAB1E9B67E(Local_27[2 /*110*/], 0);
			}
			unk_0xAD738C3085FE7E11(Local_27[2 /*110*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x7239B21A38F536BA(Global_86686.f_9[4]))
		{
			Local_27[3 /*110*/] = Global_86686.f_9[4];
			if (!unk_0x84A2DD9AC37C35C1(Local_27[3 /*110*/]))
			{
				unk_0x0DC7CABAB1E9B67E(Local_27[3 /*110*/], 0);
			}
			unk_0xAD738C3085FE7E11(Local_27[3 /*110*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x7239B21A38F536BA(Global_86686.f_9[5]))
		{
			Local_468.f_0 = Global_86686.f_9[5];
			if (!unk_0x84A2DD9AC37C35C1(Local_468.f_0))
			{
				unk_0x0DC7CABAB1E9B67E(Local_468.f_0, 0);
			}
			unk_0xAD738C3085FE7E11(Local_468.f_0, true, true);
		}
		else
		{
			bVar0 = true;
		}
		if (unk_0x7239B21A38F536BA(Global_86686[3]))
		{
			Local_578[3 /*8*/] = Global_86686[3];
			unk_0xAD738C3085FE7E11(Local_578[3 /*8*/], true, true);
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		if (!unk_0x7239B21A38F536BA(Local_578[0 /*8*/]))
		{
			Local_578[0 /*8*/] = unk_0xAF35D0D2583051B0(joaat("burrito2"), 148.7243f, -3104.619f, 4.8962f, 179.6158f, 1, 1);
		}
		if (!unk_0x7239B21A38F536BA(Local_578[1 /*8*/]))
		{
			Local_578[1 /*8*/] = unk_0xAF35D0D2583051B0(joaat("burrito2"), 145.9856f, -3080f, 4.8962f, 269.0827f, 1, 1);
		}
		if (!unk_0x7239B21A38F536BA(Local_578[2 /*8*/]))
		{
			Local_578[2 /*8*/] = unk_0xAF35D0D2583051B0(joaat("burrito2"), 129.9696f, -3089.331f, 4.8796f, 269.9255f, 1, 1);
		}
		if (!unk_0x7239B21A38F536BA(Local_27[1 /*110*/]))
		{
			Local_27[1 /*110*/] = unk_0xD49F9B0955C367DE(26, joaat("s_m_y_pestcont_01"), 126.2174f, -3089.383f, 4.9199f, 275.4068f, true, true);
			unk_0x6B76DC1F3AE6E6A3(Local_27[1 /*110*/], 150);
			unk_0x262B14F48D29DE80(Local_27[1 /*110*/], 8, 1, 0, 0);
			unk_0x262B14F48D29DE80(Local_27[1 /*110*/], 0, 0, 2, 0);
			unk_0x262B14F48D29DE80(Local_27[1 /*110*/], 3, 0, 1, 0);
			unk_0x262B14F48D29DE80(Local_27[1 /*110*/], 4, 0, 1, 0);
			unk_0x262B14F48D29DE80(Local_27[1 /*110*/], 8, 0, 0, 0);
			unk_0x262B14F48D29DE80(Local_27[1 /*110*/], 10, 1, 0, 0);
			unk_0x93376B65A266EB5F(Local_27[1 /*110*/], 0, 1, 0, false);
			unk_0x93376B65A266EB5F(Local_27[1 /*110*/], 1, 0, 0, false);
			unk_0xDC2C5C242AAC342B(Local_27[1 /*110*/], 2f);
		}
		if (!unk_0x7239B21A38F536BA(Local_27[1 /*110*/].f_105))
		{
			Local_27[1 /*110*/].f_105 = unk_0x509D5878EB39E842(joaat("p_amb_clipboard_01"), unk_0x17C07FC640E86B4E(Local_27[1 /*110*/], 60309, 0f, 0f, 0f), true, true, false);
			unk_0x6B9BBD38AB0796DF(Local_27[1 /*110*/].f_105, Local_27[1 /*110*/], unk_0x3F428D08BE5AAE31(Local_27[1 /*110*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, true, true, true, false, 2, true);
		}
		if (!unk_0x7239B21A38F536BA(Local_27[0 /*110*/]))
		{
			Local_27[0 /*110*/] = unk_0xD49F9B0955C367DE(26, joaat("s_m_y_pestcont_01"), 155.74f, -3098.89f, 5.93f, 0f, true, true);
			unk_0x262B14F48D29DE80(Local_27[0 /*110*/], 0, 0, 0, 0);
			unk_0x262B14F48D29DE80(Local_27[0 /*110*/], 3, 0, 0, 0);
			unk_0x262B14F48D29DE80(Local_27[0 /*110*/], 4, 0, 0, 0);
			unk_0x262B14F48D29DE80(Local_27[0 /*110*/], 8, 1, 0, 0);
			unk_0x262B14F48D29DE80(Local_27[0 /*110*/], 10, 0, 0, 0);
			unk_0x93376B65A266EB5F(Local_27[0 /*110*/], 0, 0, 0, false);
			unk_0xDC2C5C242AAC342B(Local_27[0 /*110*/], 2f);
		}
		if (!unk_0x7239B21A38F536BA(Local_27[2 /*110*/]))
		{
			Local_27[2 /*110*/] = unk_0xD49F9B0955C367DE(26, joaat("s_m_y_pestcont_01"), 159.8f, -3085.96f, 6f, 0f, true, true);
			unk_0x262B14F48D29DE80(Local_27[2 /*110*/], 0, 0, 1, 0);
			unk_0x262B14F48D29DE80(Local_27[2 /*110*/], 3, 0, 2, 0);
			unk_0x262B14F48D29DE80(Local_27[2 /*110*/], 4, 0, 2, 0);
			unk_0x262B14F48D29DE80(Local_27[2 /*110*/], 8, 1, 0, 0);
			unk_0x262B14F48D29DE80(Local_27[2 /*110*/], 10, 1, 0, 0);
			unk_0x93376B65A266EB5F(Local_27[2 /*110*/], 1, 0, 0, false);
			unk_0xDC2C5C242AAC342B(Local_27[2 /*110*/], 2f);
		}
		if (!unk_0x7239B21A38F536BA(Local_27[3 /*110*/]))
		{
			Local_27[3 /*110*/] = unk_0xD49F9B0955C367DE(26, joaat("s_m_y_pestcont_01"), 159.06f, -3085f, 6.01f, 0f, true, true);
			unk_0x262B14F48D29DE80(Local_27[3 /*110*/], 0, 1, 1, 0);
			unk_0x262B14F48D29DE80(Local_27[3 /*110*/], 3, 0, 3, 0);
			unk_0x262B14F48D29DE80(Local_27[3 /*110*/], 4, 0, 3, 0);
			unk_0x262B14F48D29DE80(Local_27[3 /*110*/], 8, 1, 0, 0);
			unk_0x262B14F48D29DE80(Local_27[3 /*110*/], 10, 0, 0, 0);
			unk_0x93376B65A266EB5F(Local_27[3 /*110*/], 0, 0, 0, false);
			unk_0xDC2C5C242AAC342B(Local_27[3 /*110*/], 2f);
		}
		if (!unk_0x7239B21A38F536BA(Local_468.f_0) && !unk_0x7239B21A38F536BA(Local_578[3 /*8*/]))
		{
			if (unk_0x25223CA6B4D20B7F() >= 5 && unk_0x25223CA6B4D20B7F() < 21)
			{
				Local_578[3 /*8*/] = unk_0xAF35D0D2583051B0(joaat("dilettante2"), 144.84f, -2982.75f, 5.32f, 266.5972f, 1, 1);
				Local_468.f_0 = unk_0x7DD959874C1FD534(Local_578[3 /*8*/], 26, joaat("s_m_m_security_01"), -1, true, true);
			}
			else
			{
				Local_578[3 /*8*/] = unk_0xAF35D0D2583051B0(joaat("dilettante2"), 169.3554f, -3110.025f, 4.8228f, 88.4411f, 1, 1);
				Local_468.f_0 = unk_0xD49F9B0955C367DE(26, joaat("s_m_m_security_01"), 161.7414f, -3117.074f, 4.9643f, 333.7041f, true, true);
			}
		}
	}
	if (unk_0x7239B21A38F536BA(Local_578[0 /*8*/]))
	{
		func_179(Local_578[0 /*8*/], 0);
		unk_0xB664292EAECF7FA6(Local_578[0 /*8*/], 7);
		unk_0xCDE5E70C1DDB954C(Local_578[0 /*8*/], true);
		unk_0x92F0CF722BC4202F(Local_578[0 /*8*/], true);
		Local_578[0 /*8*/].f_7 = 0;
	}
	if (unk_0x7239B21A38F536BA(Local_578[1 /*8*/]))
	{
		func_179(Local_578[1 /*8*/], 1);
		unk_0x2497C4717C8B881E(Local_578[1 /*8*/], 1, 1);
		unk_0x2FA133A4A9D37ED8(Local_578[1 /*8*/], 4, false);
		unk_0x7C65DAC73C35C862(Local_578[1 /*8*/], 0, true, false);
		unk_0x7C65DAC73C35C862(Local_578[1 /*8*/], 4, false, true);
		unk_0x92F0CF722BC4202F(Local_578[1 /*8*/], true);
		Local_578[1 /*8*/].f_7 = 0;
	}
	if (unk_0x7239B21A38F536BA(Local_578[2 /*8*/]))
	{
		func_179(Local_578[2 /*8*/], 2);
		unk_0x7C65DAC73C35C862(Local_578[2 /*8*/], 2, true, false);
		unk_0x7C65DAC73C35C862(Local_578[2 /*8*/], 3, true, false);
		unk_0x92F0CF722BC4202F(Local_578[2 /*8*/], true);
		Local_578[2 /*8*/].f_7 = 0;
	}
	if (unk_0x7239B21A38F536BA(Local_27[1 /*110*/]))
	{
		unk_0x98EFA132A4117BE1(Local_27[1 /*110*/], &(Local_27[1 /*110*/].f_1));
		unk_0x9F8AA94D6D97DBF4(Local_27[1 /*110*/], true);
		unk_0xC80A74AC829DDD92(Local_27[1 /*110*/], iLocal_2519);
		unk_0x9D64D7405520E3D3(Local_27[1 /*110*/], true);
		func_167(Local_27[1 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0x33A8F7F7D5F7F33C(Local_27[1 /*110*/], 50f);
		StringCopy(&(Local_27[1 /*110*/].f_1), "foreman2(rear)", 16);
		Local_27[1 /*110*/].f_42 = 20f;
		Local_27[1 /*110*/].f_86 = 1;
		Local_27[1 /*110*/].f_87 = 1;
		Local_27[1 /*110*/].f_107 = joaat("p_amb_clipboard_01");
		Local_27[1 /*110*/].f_106 = 60309;
		Local_27[1 /*110*/].f_108 = 0;
	}
	if (unk_0x7239B21A38F536BA(Local_27[0 /*110*/]))
	{
		unk_0x98EFA132A4117BE1(Local_27[0 /*110*/], &(Local_27[0 /*110*/].f_1));
		unk_0x9F8AA94D6D97DBF4(Local_27[0 /*110*/], true);
		unk_0xC80A74AC829DDD92(Local_27[0 /*110*/], iLocal_2519);
		unk_0x9D64D7405520E3D3(Local_27[0 /*110*/], true);
		func_167(Local_27[0 /*110*/], 17.5f, 10f, 120f, -90f, 90f);
		unk_0x33A8F7F7D5F7F33C(Local_27[0 /*110*/], 50f);
		StringCopy(&(Local_27[0 /*110*/].f_1), "foreman1(front)", 16);
		Local_27[0 /*110*/].f_86 = 1;
		Local_27[0 /*110*/].f_87 = 1;
		Local_27[0 /*110*/].f_42 = 17.5f;
	}
	if (unk_0x7239B21A38F536BA(Local_27[2 /*110*/]))
	{
		unk_0x98EFA132A4117BE1(Local_27[2 /*110*/], &(Local_27[2 /*110*/].f_1));
		unk_0x9F8AA94D6D97DBF4(Local_27[2 /*110*/], true);
		unk_0xC80A74AC829DDD92(Local_27[2 /*110*/], iLocal_2519);
		func_167(Local_27[2 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0x9D64D7405520E3D3(Local_27[2 /*110*/], true);
		unk_0x33A8F7F7D5F7F33C(Local_27[2 /*110*/], 50f);
		StringCopy(&(Local_27[2 /*110*/].f_1), "front 1", 16);
		Local_27[2 /*110*/].f_86 = 0;
		Local_27[2 /*110*/].f_87 = 0;
		Local_27[2 /*110*/].f_42 = 17.5f;
	}
	if (unk_0x7239B21A38F536BA(Local_27[3 /*110*/]))
	{
		unk_0x98EFA132A4117BE1(Local_27[3 /*110*/], &(Local_27[3 /*110*/].f_1));
		unk_0x9F8AA94D6D97DBF4(Local_27[3 /*110*/], true);
		unk_0xC80A74AC829DDD92(Local_27[3 /*110*/], iLocal_2519);
		unk_0x33A8F7F7D5F7F33C(Local_27[3 /*110*/], 50f);
		func_167(Local_27[3 /*110*/], 20f, 5f, 90f, -90f, 90f);
		unk_0x9D64D7405520E3D3(Local_27[3 /*110*/], true);
		StringCopy(&(Local_27[3 /*110*/].f_1), "front 2", 16);
		Local_27[3 /*110*/].f_86 = 0;
		Local_27[3 /*110*/].f_87 = 0;
		Local_27[3 /*110*/].f_42 = 17.5f;
	}
	if (unk_0x7239B21A38F536BA(Local_468.f_0) && unk_0x7239B21A38F536BA(Local_578[3 /*8*/]))
	{
		unk_0x98EFA132A4117BE1(Local_468.f_0, &(Local_468.f_1));
		unk_0x9F8AA94D6D97DBF4(Local_468.f_0, true);
		unk_0xC80A74AC829DDD92(Local_468.f_0, iLocal_2519);
		unk_0x0703B9079823DA4A(Local_468.f_0, 2);
		unk_0x9F7794730795E019(Local_468.f_0, 2, false);
		unk_0xBF0FD6E56C964FCB(Local_468.f_0, joaat("weapon_nightstick"), -1, false, true);
		unk_0x7AEFB85C1D49DEB6(Local_468.f_0, 5);
		func_167(Local_468.f_0, 40f, 5f, 90f, -90f, 90f);
		StringCopy(&(Local_468.f_1), "sec", 16);
		Local_468.f_86 = 1;
		Local_468.f_87 = 1;
		Local_468.f_93 = 0;
		if (Global_86686.f_357 == 1)
		{
			if (!func_178(Local_468.f_0, 242628503, 1))
			{
				if (unk_0x0A9D0C2A3BBC86C1(203.68f, -3132.46f, 4.79f, "WORLD_HUMAN_SMOKING", 1f, true))
				{
					iLocal_2571 = 0;
					unk_0xE8854A4326B9E12B(&iVar2);
					unk_0x3123FAA6DB1CF7ED(0, Local_578[3 /*8*/], &cLocal_644, 786599, 0, 0, -1, -1f, false, 2f);
					unk_0xD3DBCE61A490BE02(0, Local_578[3 /*8*/], 0);
					unk_0x277F471BA9DB000B(0, 203.68f, -3132.46f, 4.79f, 1f, 0);
					unk_0x39E72BC99E6360CB(iVar2);
					unk_0x5ABA3986D90D8A3B(Local_468.f_0, iVar2);
					unk_0x3841422E9C488D8C(&iVar2);
				}
				else
				{
					iVar1 = 0;
				}
			}
		}
		else if (!func_178(Local_468.f_0, -1680762137, 1))
		{
			if (unk_0x0A9D0C2A3BBC86C1(162.69f, -3115.67f, 4.95f, "WORLD_HUMAN_SECURITY_SHINE_TORCH", 1f, true))
			{
				iLocal_2571 = 1;
				unk_0x97A28E63F0BA5631(Local_468.f_0, 162.69f, -3115.67f, 4.95f, 1f, 0);
			}
			else
			{
				iVar1 = 0;
			}
		}
	}
	if (((((((((unk_0x7239B21A38F536BA(Local_578[0 /*8*/]) && unk_0x7239B21A38F536BA(Local_578[1 /*8*/])) && unk_0x7239B21A38F536BA(Local_578[2 /*8*/])) && unk_0x7239B21A38F536BA(Local_578[3 /*8*/])) && unk_0x7239B21A38F536BA(Local_27[1 /*110*/])) && unk_0x7239B21A38F536BA(Local_27[0 /*110*/])) && unk_0x7239B21A38F536BA(Local_27[2 /*110*/])) && unk_0x7239B21A38F536BA(Local_27[3 /*110*/])) && unk_0x7239B21A38F536BA(Local_468.f_0)) && iVar1)
	{
		return 1;
	}
	else if (bVar0)
	{
		return 0;
	}
	return 0;
}

int func_178(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x77F1BEB8863288D5(iParam0, iParam1);
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
	Global_89784.f_22[iParam1] = uParam0;
}

void func_180(int iParam0, int iParam1, int iParam2)
{
	if (func_182() && func_212())
	{
		while (Global_89779 != 6)
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		unk_0x577D1284D6873711(false);
		if (unk_0x7239B21A38F536BA(unk_0xD80958FC74E988A6()))
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				unk_0x9C720776DAA43E7E(unk_0xD80958FC74E988A6());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if (unk_0x7239B21A38F536BA(iParam0))
				{
					if (unk_0x4C241E39B23DF959(iParam0, false))
					{
						if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), iParam0, false))
						{
							unk_0xF75B0D629E1C063D(unk_0xD80958FC74E988A6(), iParam0, iParam1);
							unk_0x6D0858B8EDFD2B7D(0f, 1f);
							unk_0xB4EC2312F4E5B1F1(0f);
							unk_0x4EDE34FBADD967A6(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
			{
				unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), true, 0);
			}
		}
		unk_0xB4EDDC19532BFB85();
		func_181(0);
	}
}

void func_181(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x933D6A9EEC1BACD0(&(Global_89784.f_20), 13);
	}
	else
	{
		unk_0xE80492A9AC099A93(&(Global_89784.f_20), 13);
	}
}

int func_182()
{
	if (Global_89784 == 10 || Global_89784 == 9)
	{
		return 1;
	}
	return 0;
}

int func_183(struct<3> Param0, float fParam3)
{
	return func_184(&(Global_93409.f_2167), Param0, fParam3, 0);
}

int func_184(var uParam0, struct<3> Param1, float fParam4, bool bParam5)
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (func_200(uParam0))
	{
		if (func_145(Param1, 0f, 0f, 0f))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_42 == joaat("monster") || uParam0->f_12.f_42 == joaat("marshall"))
		{
			if (unk_0x2A70BAE8883E4C81(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, false, true))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (func_199(uParam0))
		{
			unk_0xA56F01F3765B93A0(Param1, 5f, true, false, false, false);
			func_198(Param1, 5f, 0);
			iVar0 = unk_0xAF35D0D2583051B0(uParam0->f_12.f_42, Param1, fParam4, 1, 1);
			if (unk_0x7239B21A38F536BA(iVar0))
			{
				func_193(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (unk_0x45A9187928F4B9E3(uParam0->f_12.f_42) || unk_0x9537097412CF75FE(uParam0->f_12.f_42))
				{
					if (!unk_0xFFA5D878809819DB(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					unk_0x49733E92263139D1(iVar0);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (unk_0x7F6DB52EEFC96DF8(unk_0x9F47B058362C84B5(iVar0)))
						{
							func_192(uParam0->f_11, 1);
						}
						else if (unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(iVar0)))
						{
							func_192(uParam0->f_11, 2);
						}
					}
					unk_0xAB04325045427AAE(iVar0, false);
					unk_0x428BACCDF5E26EAD(iVar0, false);
					unk_0x92F0CF722BC4202F(iVar0, true);
					func_191(iVar0, uParam0->f_11);
				}
				else if ((!func_189(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0x0C515FAB3FF9EA92(unk_0x442E0A7EDE4A738A(), "startup_positioning"))
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
				if (((Global_89784 != 13 && Global_89784 != 10) && Global_89784 != 11) && Global_89784 != 12)
				{
					if (unk_0xD24D37CC275948CC(&(Global_89784.f_3)) == Global_67924)
					{
						if (uParam0->f_12.f_42 == Global_97173.f_18338.f_69[21 /*54*/].f_42)
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
				unk_0xE532F5D78798DAAB(uParam0->f_12.f_42);
				Var1 = { unk_0x3FEF770D40960D5A(iVar0, true) };
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
	if (func_134(&(Global_66960.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0x7239B21A38F536BA(Global_66960.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x84A2DD9AC37C35C1(unk_0xD80958FC74E988A6()))
			{
				if (unk_0x4C241E39B23DF959(Global_66960.f_139[iParam0], false))
				{
					if (unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Global_66960.f_139[iParam0], false))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0xAD738C3085FE7E11(Global_66960.f_139[iParam0], true, true);
				unk_0xEA386986E786A54F(&(Global_66960.f_139[iParam0]));
			}
		}
		Global_66960[iParam0] = 1;
		if (unk_0xA921AA820C25702F(Global_66960.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_141(iParam0, 0)) && Global_67869.f_42 == 0) && Global_97173.f_18338.f_1406[Global_66960.f_555[0 /*21*/].f_14] != 0) && Global_97173.f_18338.f_1406[Global_66960.f_555[0 /*21*/].f_14] > 3) && (!func_186(0, Global_66960.f_555[0 /*21*/].f_12) || !func_186(1, Global_66960.f_555[0 /*21*/].f_12)))
			{
				func_142(Global_97173.f_18338.f_69[Global_66960.f_555[0 /*21*/].f_14 /*54*/], &Global_67869);
				Global_67923 = Global_97173.f_18338.f_4799;
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
	if (iParam0 < 0 || iParam0 >= func_187(&(Global_97173.f_18338.f_4414[iVar0 /*109*/])))
	{
		return 0;
	}
	return func_111(Global_97173.f_18338.f_4414[iVar0 /*109*/][iParam0 /*54*/].f_42);
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
		if ((unk_0x7239B21A38F536BA(Global_66960.f_484[iVar0]) && !unk_0x5F9532F3B5CC2551(Global_66960.f_484[iVar0])) && unk_0x4C241E39B23DF959(Global_66960.f_484[iVar0], false))
		{
			unk_0xA19435F193E081AC(iParam0, &iVar1, &iVar2);
			unk_0xA19435F193E081AC(Global_66960.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x9F47B058362C84B5(iParam0) == unk_0x9F47B058362C84B5(Global_66960.f_484[iVar0]) && unk_0x2BB9230590DA5E8A(iParam0) == unk_0x2BB9230590DA5E8A(Global_66960.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
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
	
	iVar0 = unk_0x9F47B058362C84B5(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_190(iParam0, Global_66960.f_139[38], 0))
			{
				func_185(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_190(iParam0, Global_66960.f_139[43], 1))
			{
				func_185(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar5 = unk_0xCFF869CBFA210D82(unk_0xD80958FC74E988A6(), &uVar1);
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				if (func_190(iParam0, uVar1[iVar6], 1) && func_59(unk_0x3FEF770D40960D5A(uVar1[iVar6], true), 2136.133f, 4780.563f, 39.9702f, 5f))
				{
					if ((!bParam4 || func_145(Param1, 0f, 0f, 0f)) || unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(iParam0, true), unk_0x3FEF770D40960D5A(uVar1[iVar6], true), true) < 10f)
					{
						unk_0xEA386986E786A54F(&iParam0);
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
	}
	return 0;
}

int func_190(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0x7239B21A38F536BA(iParam1) && !unk_0x5F9532F3B5CC2551(iParam1)) && unk_0x4C241E39B23DF959(iParam1, false))
	{
		if (bParam2)
		{
			unk_0xA19435F193E081AC(iParam0, &iVar0, &iVar1);
			unk_0xA19435F193E081AC(iParam1, &iVar2, &iVar3);
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
		if (!unk_0x7239B21A38F536BA(Global_87520[iVar0]))
		{
			Global_87520[iVar0] = iParam0;
			Global_87530[iVar0] = iParam1;
			Global_87540[iVar0] = unk_0x9F47B058362C84B5(iParam0);
			if (unk_0x7F6DB52EEFC96DF8(Global_87540[iVar0]))
			{
				Global_87568[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_87568[iParam1 /*3*/][1] = -1;
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
		if (unk_0x7239B21A38F536BA(Global_87520[iVar0]))
		{
			if (iParam0 == 145 || Global_87530[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x9F47B058362C84B5(Global_87520[iVar0]) == func_135(iParam0, iParam1))
				{
					if (!unk_0xA3EE4A07279BB9DB(unk_0xD80958FC74E988A6(), Global_87520[iVar0], false))
					{
						unk_0xAD738C3085FE7E11(Global_87520[iVar0], false, true);
						unk_0xEA386986E786A54F(&(Global_87520[iVar0]));
						Global_87530[iVar0] = 145;
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
	
	if (unk_0x4C241E39B23DF959(iParam0, false))
	{
		if (unk_0xD24D37CC275948CC(&(uParam1->f_1)) != 0)
		{
			unk_0x95A88F0B409CDA47(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < unk_0x4C4D6B2644F458CB())
		{
			unk_0x9088EB5A43FFB0A1(iParam0, *uParam1);
		}
		if (unk_0xA921AA820C25702F(uParam1->f_53, 13))
		{
			unk_0x7141766F91D15BEA(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0x55E1D2758F34E437(iParam0);
		}
		if (unk_0xA921AA820C25702F(uParam1->f_53, 12))
		{
			unk_0x36CED73BFED89754(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			unk_0x5FFBDEEC3E8E2009(iParam0);
		}
		unk_0x4F1D4BE3A7F24601(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x2036F561ADD12E33(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xA921AA820C25702F(uParam1->f_53, 15) || func_197(iParam0)) || (((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0) && uParam1->f_9[20] > 0)) && func_196())
		{
			uParam1->f_38 = 0;
			uParam1->f_39 = 0;
			uParam1->f_40 = 0;
		}
		else if ((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0)
		{
			uParam1->f_38 = 255;
			uParam1->f_39 = 255;
			uParam1->f_40 = 255;
		}
		unk_0xB5BA80F839791C0F(iParam0, uParam1->f_38, uParam1->f_39, uParam1->f_40);
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			unk_0x57C51E6BAD752696(iParam0, 0);
		}
		else
		{
			unk_0x57C51E6BAD752696(iParam0, 0);
			unk_0x57C51E6BAD752696(iParam0, uParam1->f_41);
		}
		unk_0xEB9DC3C7D8596C46(iParam0, !unk_0xA921AA820C25702F(uParam1->f_53, 9));
		if (bParam2)
		{
			unk_0xB664292EAECF7FA6(iParam0, uParam1->f_46);
		}
		unk_0x8E0A582209A62695(iParam0, uParam1->f_50, uParam1->f_51, uParam1->f_52);
		unk_0x2AA720E4287BF269(iParam0, 2, unk_0xA921AA820C25702F(uParam1->f_53, 28));
		unk_0x2AA720E4287BF269(iParam0, 3, unk_0xA921AA820C25702F(uParam1->f_53, 29));
		unk_0x2AA720E4287BF269(iParam0, 0, unk_0xA921AA820C25702F(uParam1->f_53, 30));
		unk_0x2AA720E4287BF269(iParam0, 1, unk_0xA921AA820C25702F(uParam1->f_53, 31));
		unk_0x67B2C79AA7FF5738(iParam0, unk_0xA921AA820C25702F(uParam1->f_53, 10));
		if (unk_0x87B63E25A529D526(iParam0) > 1 && uParam1->f_43 >= 0)
		{
			unk_0x60BF608F1B8CD1B6(iParam0, uParam1->f_43);
		}
		if (uParam1->f_45 > -1 && uParam1->f_45 < 255)
		{
			if (!unk_0xBF94DD42F63BDED2(unk_0x9F47B058362C84B5(iParam0)))
			{
				if (unk_0xB50C0B0CEDC6CE84(unk_0x9F47B058362C84B5(iParam0)))
				{
					if (uParam1->f_45 == 6)
					{
						unk_0x487EB21CC7295BA1(iParam0, uParam1->f_45);
					}
				}
				else
				{
					unk_0x487EB21CC7295BA1(iParam0, uParam1->f_45);
				}
			}
		}
		if (unk_0x52F357A30698BCCE(iParam0, false))
		{
			if ((uParam1->f_44 == 0 || uParam1->f_44 == 3) || uParam1->f_44 == 5)
			{
				unk_0x8F5FB35D7E88FC70(iParam0, true);
			}
			else
			{
				unk_0xDED51F703D0FA83D(iParam0, true);
			}
		}
		if (bParam3)
		{
			func_194(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		}
		if (!unk_0xDCE4334788AF94EA(uParam1->f_42) && !unk_0x45A9187928F4B9E3(uParam1->f_42))
		{
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				if (unk_0xA921AA820C25702F(uParam1->f_53, func_147(iVar0 + 1)))
				{
					if (!unk_0xD2E6822DBFD6C8BD(iParam0, iVar0 + 1))
					{
						unk_0x7EE3A3C5E4A40CC9(iParam0, iVar0 + 1, false);
					}
				}
				else if (unk_0xD2E6822DBFD6C8BD(iParam0, iVar0 + 1))
				{
					unk_0x7EE3A3C5E4A40CC9(iParam0, iVar0 + 1, true);
				}
				iVar0++;
			}
		}
		if (unk_0xA0948AB42D7BA0DE(uParam1->f_42))
		{
			if (!unk_0xA921AA820C25702F(uParam1->f_53, 23))
			{
				if (unk_0xA921AA820C25702F(uParam1->f_53, 22))
				{
					unk_0xCFC8BE9A5E1FE575(iParam0, 2);
				}
				else
				{
					unk_0xCFC8BE9A5E1FE575(iParam0, 3);
				}
			}
			else
			{
				unk_0xCFC8BE9A5E1FE575(iParam0, 4);
			}
		}
		if (unk_0xA921AA820C25702F(uParam1->f_53, 27))
		{
			unk_0x6B1E8E2ED1335B71(iParam0, "IgnoredByQuickSave", true);
		}
		else
		{
			unk_0x6B1E8E2ED1335B71(iParam0, "IgnoredByQuickSave", false);
		}
	}
}

int func_194(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x4C241E39B23DF959(*iParam0, false))
	{
		return 0;
	}
	if (unk_0x33F2E3FE70EAAE1D(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x1F2AA07F00B3217A(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			unk_0x2A1F4F37F95BAD08(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (unk_0x772960298DA26FDB(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x92D619E420858204(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x6AF0636DDEDCB6DD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x6AF0636DDEDCB6DD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x6AF0636DDEDCB6DD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_195(*iParam0))
	{
		unk_0x3E8C8727991A8A0B(*iParam0, true);
		unk_0x92F0CF722BC4202F(*iParam0, true);
	}
	return 1;
}

int func_195(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((unk_0x7239B21A38F536BA(iParam0) && unk_0x4C241E39B23DF959(iParam0, false)) && unk_0x33F2E3FE70EAAE1D(iParam0) > 0)
	{
		unk_0x1F2AA07F00B3217A(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 25)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x772960298DA26FDB(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x8935624F8C5592CC(iParam0, iVar1, unk_0x772960298DA26FDB(iParam0, iVar1)), 16);
				iVar2 = unk_0xD24D37CC275948CC(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0xD24D37CC275948CC("MNU_CAGE") || iVar2 == unk_0xD24D37CC275948CC("SABRE_CAG"))
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

bool func_196()
{
	return unk_0x812595A0644CE1DE(joaat("mpindependence"));
}

int func_197(int iParam0)
{
	int iVar0;
	
	if (unk_0x7239B21A38F536BA(iParam0))
	{
		if (unk_0x4C241E39B23DF959(iParam0, false))
		{
			if (unk_0x4F14F9F870D6FBC8("MPBitset", 3))
			{
				if (unk_0x05661B80A8C9165F(iParam0, "MPBitset"))
				{
					iVar0 = unk_0xA06C969B02A97298(iParam0, "MPBitset");
				}
				return unk_0xA921AA820C25702F(iVar0, 4);
			}
		}
	}
	return 0;
}

void func_198(struct<3> Param0, float fParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_134(&(Global_66960.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0xF1B760881820C952(Param0, Global_66960.f_555[0 /*21*/], bParam4) <= fParam3)
			{
				func_185(iVar0);
			}
		}
		iVar0++;
	}
}

int func_199(var uParam0)
{
	if (func_200(uParam0))
	{
		if (unk_0x98A4EB5D89A0C952(uParam0->f_12.f_42))
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

int func_200(var uParam0)
{
	if (uParam0->f_12.f_42 == 0)
	{
		return 0;
	}
	if (!func_111(uParam0->f_12.f_42))
	{
		return 0;
	}
	return 1;
}

bool func_201()
{
	return func_199(&(Global_93409.f_2167));
}

int func_202(var uParam0)
{
	if (func_213(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_203()
{
	return Global_93409.f_2167.f_12.f_42;
}

int func_204()
{
	return func_200(&(Global_93409.f_2167));
}

int func_205(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x26B0E73D7EAAF4D3(iParam1))
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
		unk_0x2CA429C029CCF247(iParam1);
		uParam0->f_763[iVar1 /*5*/] = 1;
		uParam0->f_763[iVar1 /*5*/].f_3 = unk_0x9CD27B0045628463();
		uParam0->f_763[iVar1 /*5*/].f_4 = iParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

int func_206(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCA042B6957743895(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_273)
	{
		if (uParam0->f_273[iVar0 /*5*/])
		{
			if (unk_0x0C515FAB3FF9EA92(uParam0->f_273[iVar0 /*5*/].f_4, sParam1))
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
		unk_0xD3BD40951412FEF6(sParam1);
		uParam0->f_273[iVar1 /*5*/] = 1;
		uParam0->f_273[iVar1 /*5*/].f_3 = unk_0x9CD27B0045628463();
		uParam0->f_273[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

int func_207(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCA042B6957743895(sParam1))
	{
		return 0;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_374)
	{
		if (uParam0->f_374[iVar0 /*5*/])
		{
			if (unk_0x0C515FAB3FF9EA92(uParam0->f_374[iVar0 /*5*/].f_4, sParam1))
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
		unk_0x9EEFB62EB27B5792(sParam1);
		uParam0->f_374[iVar1 /*5*/] = 1;
		uParam0->f_374[iVar1 /*5*/].f_3 = unk_0x9CD27B0045628463();
		uParam0->f_374[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

void func_208(var uParam0)
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

int func_209(var uParam0, struct<3> Param1, float fParam4, int iParam5)
{
	if (func_210(Param1) || fParam4 <= 0f)
	{
		return 0;
	}
	if (uParam0->f_863)
	{
		if (func_145(uParam0->f_863.f_4, Param1) && uParam0->f_863.f_10 == fParam4)
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
	unk_0xACCFB4ACF53551B0(Param1, fParam4, iParam5);
	uParam0->f_863 = 1;
	uParam0->f_863.f_3 = unk_0x9CD27B0045628463();
	uParam0->f_863.f_4 = { Param1 };
	uParam0->f_863.f_7 = { 0f, 0f, 0f };
	uParam0->f_863.f_10 = fParam4;
	uParam0->f_977 = 1;
	return 1;
}

int func_210(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_211(int iParam0, var uParam1, var uParam2)
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

bool func_212()
{
	return unk_0xA921AA820C25702F(Global_89784.f_20, 13);
}

int func_213(var uParam0)
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
					if (unk_0x98A4EB5D89A0C952((uParam0[iVar1 /*5*/])->f_4))
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
						unk_0xE532F5D78798DAAB((uParam0[iVar1 /*5*/])->f_4);
						func_215(uParam0[iVar1 /*5*/]);
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
					if (unk_0xD031A9162D01088C(uParam0->f_273[iVar1 /*5*/].f_4))
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
						unk_0xF66A602F829E2A06(uParam0->f_273[iVar1 /*5*/].f_4);
						func_215(&(uParam0->f_273[iVar1 /*5*/]));
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
					if (unk_0xCB4E8BE8A0063C5D(uParam0->f_374[iVar1 /*5*/].f_4))
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
						unk_0xFF1B8B4AA1C25DC8(uParam0->f_374[iVar1 /*5*/].f_4);
						func_215(&(uParam0->f_374[iVar1 /*5*/]));
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
					if (unk_0x85F01B8D5B90570E(uParam0->f_656[iVar1 /*6*/].f_5))
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
						unk_0x1D132D614DD86811(&(uParam0->f_656[iVar1 /*6*/].f_5));
						func_215(&(uParam0->f_656[iVar1 /*6*/]));
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
					if (unk_0x300D614A4C785FC4(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4))
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
						unk_0xF1160ACCF98A3FC8(uParam0->f_475[iVar1 /*6*/].f_5, uParam0->f_475[iVar1 /*6*/].f_4);
						func_215(&(uParam0->f_475[iVar1 /*6*/]));
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
					if (unk_0x36E353271F0E90EE(uParam0->f_202[iVar1 /*7*/].f_4))
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
						unk_0xAA08EF13F341C8FC(uParam0->f_202[iVar1 /*7*/].f_4);
						func_215(&(uParam0->f_202[iVar1 /*7*/]));
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
					if (unk_0x1BBE0523B8DB9A21(uParam0->f_151[iVar1 /*5*/].f_4))
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
						unk_0xACE699C71AB9DEB5(uParam0->f_151[iVar1 /*5*/].f_4);
						func_215(&(uParam0->f_151[iVar1 /*5*/]));
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
					if (unk_0x2F844A8B08D76685(uParam0->f_737[iVar1 /*5*/].f_4, 0))
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
						unk_0x77ED170667F50170(uParam0->f_737[iVar1 /*5*/].f_4);
						func_215(&(uParam0->f_737[iVar1 /*5*/]));
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
					if (unk_0x6726BDCCC1932F0E(uParam0->f_763[iVar1 /*5*/].f_4))
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
						unk_0x261CCE7EED010641(uParam0->f_763[iVar1 /*5*/].f_4);
						func_215(&(uParam0->f_763[iVar1 /*5*/]));
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
			if (!unk_0xCA042B6957743895(uParam0->f_687[iVar1 /*7*/].f_4))
			{
				if (uParam0->f_687[iVar1 /*7*/])
				{
					iVar2 = unk_0x9B6E70C5CEEF4EEB(uParam0->f_687[iVar1 /*7*/].f_5);
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
								func_215(&(uParam0->f_687[iVar1 /*7*/]));
								break;
							
							case -1:
								uParam0->f_687[iVar1 /*7*/].f_1 = 0;
								unk_0xEB119AA014E89183(uParam0->f_687[iVar1 /*7*/].f_5);
								uParam0->f_687[iVar1 /*7*/] = 0;
								bVar0 = false;
								break;
							}
					}
				}
				else if (unk_0x6726BDCCC1932F0E(uParam0->f_687[iVar1 /*7*/].f_6))
				{
					uParam0->f_687[iVar1 /*7*/].f_5 = unk_0xB66064452270E8F1(uParam0->f_687[iVar1 /*7*/].f_4);
					uParam0->f_687[iVar1 /*7*/].f_3 = unk_0x9CD27B0045628463();
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
							unk_0xEB119AA014E89183(uParam0->f_687[iVar1 /*7*/].f_5);
							func_215(&(uParam0->f_687[iVar1 /*7*/]));
							uParam0->f_687[iVar1 /*7*/].f_4 = "";
						}
						else
						{
							bVar0 = false;
						}
					}
					else
					{
						func_215(&(uParam0->f_687[iVar1 /*7*/]));
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
					if (unk_0x60F9A4393A21F741(uParam0->f_874[iVar1 /*5*/].f_4))
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
						unk_0x3548536485DD792B(uParam0->f_874[iVar1 /*5*/].f_4);
						func_215(&(uParam0->f_874[iVar1 /*5*/]));
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
					if (unk_0x9D74AE343DB65533(uParam0->f_925[iVar1 /*5*/].f_4))
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
						func_215(&(uParam0->f_925[iVar1 /*5*/]));
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
					if (unk_0x02245FE4BED318B8(iVar1))
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
						unk_0x2A179DF17CCF04CD(iVar1, true);
						func_215(&(uParam0->f_779[iVar1 /*5*/]));
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
				if (unk_0xCA7D9B86ECA7481B())
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
					unk_0x88C6814073DD4A73();
					func_215(&(uParam0->f_855));
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
				if (unk_0xF2D0E6A75CC05597())
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
					unk_0x6CE36C35C1AC8163();
					func_215(&(uParam0->f_859));
				}
				else
				{
					bVar0 = false;
				}
			}
		}
		if (uParam0->f_863 && unk_0xA41A05B6CB741B85())
		{
			if (!uParam0->f_863.f_1)
			{
				if (unk_0x01B8247A7A8B9AD1())
				{
					uParam0->f_863.f_1 = 1;
					if (uParam0->f_978)
					{
						unk_0x428CA6DBD1094446(unk_0xD80958FC74E988A6(), false);
						func_214(uParam0);
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
				unk_0xC197616D221FF4A4();
				func_215(&(uParam0->f_863));
			}
		}
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (uParam0->f_951[iVar1 /*5*/])
			{
				if (!uParam0->f_951[iVar1 /*5*/].f_1)
				{
					if (unk_0x0145F696AAAAD2E4(uParam0->f_951[iVar1 /*5*/].f_4))
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
						func_215(&(uParam0->f_951[iVar1 /*5*/]));
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

void func_214(var uParam0)
{
	if (unk_0xA41A05B6CB741B85())
	{
		unk_0xC197616D221FF4A4();
		func_215(&(uParam0->f_863));
	}
}

void func_215(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1;
}

void func_216()
{
	if (func_217())
	{
		func_8(1);
		unk_0x1090044AD1DA76FA();
	}
}

int func_217()
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

void func_218()
{
	func_236(&(Local_1662[1 /*8*/]), 51352, "AI Controller");
	func_236(&(Local_1662[0 /*8*/]), 49717, "Dialogue");
	func_236(&(Local_1662[3 /*8*/]), 48742, "Alarms & Wanted Level");
	func_236(&(Local_1662[4 /*8*/]), 48190, "Music Manager");
}

void func_219(var uParam0)
{
	if (!func_222(uParam0))
	{
		if (uParam0->f_1 <= 4)
		{
			if ((unk_0x226435CB96CCFC8C(&cLocal_625) || unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) || func_22(&(Local_1662[3 /*8*/])))
			{
				unk_0x706D57B0F50DA710("JHP1A_ATTACK");
				func_221(uParam0, 5, 0);
			}
		}
		switch (uParam0->f_1)
		{
			case 1:
				if (func_102(unk_0xD80958FC74E988A6(), 137.7f, -3092.81f, 4.9f, 1) < 60f)
				{
					unk_0x706D57B0F50DA710("JHP1A_START");
					func_221(uParam0, 2, 0);
				}
				break;
			
			case 2:
				if (iLocal_2567 == 3 || iLocal_2567 == 2)
				{
					unk_0x706D57B0F50DA710("JHP1A_WAREHOUSE");
					func_221(uParam0, 3, 0);
				}
				break;
			
			case 3:
				if (iLocal_2567 == 6 || iLocal_2567 == 9)
				{
					unk_0x706D57B0F50DA710("JHP1A_VAN");
					func_221(uParam0, 4, 0);
				}
				break;
			
			case 4:
				if (!unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
				{
					if (iLocal_2567 == 9 && func_102(unk_0xD80958FC74E988A6(), 137.7f, -3092.81f, 4.9f, 1) >= 500f)
					{
						if (unk_0x1E5185B72EF5158A("JHP1A_RADIO_1"))
						{
							unk_0x706D57B0F50DA710("JHP1A_RADIO_1");
							func_220(uParam0);
						}
					}
				}
				break;
			
			case 5:
				if ((unk_0x226435CB96CCFC8C(&cLocal_625) && unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0)) && iLocal_2563)
				{
					func_221(uParam0, 6, 0);
				}
				break;
			
			case 6:
				if (!unk_0x238DB2A2C23EE9EF(unk_0x4F8644AF03D0E0D6(), 0))
				{
					if (unk_0x1E5185B72EF5158A("JHP1A_RADIO_2"))
					{
						unk_0x706D57B0F50DA710("JHP1A_RADIO_2");
						func_221(uParam0, 6, 0);
						func_220(uParam0);
					}
				}
				break;
			}
	}
	if (func_222(uParam0))
	{
		unk_0x020E5F00CDA207BA(1f);
	}
}

void func_220(var uParam0)
{
	if (*uParam0 != 4)
	{
		*uParam0 = 4;
		uParam0->f_4 = unk_0x9CD27B0045628463();
		uParam0->f_6 = 0;
		uParam0->f_1 = -1;
	}
}

void func_221(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 > 0)
	{
		*uParam0 = 2;
		uParam0->f_5 = unk_0x9CD27B0045628463();
		uParam0->f_6 = iParam2;
	}
	uParam0->f_1 = iParam1;
}

int func_222(var uParam0)
{
	if (*uParam0 == 4)
	{
		return 1;
	}
	return 0;
}

void func_223(var uParam0)
{
	if (!func_222(uParam0))
	{
		switch (uParam0->f_1)
		{
			case 1:
				func_221(uParam0, 2, 2000);
				break;
			
			case 2:
				if (unk_0x9D74AE343DB65533(&cLocal_625))
				{
					unk_0x0355EF116C4C97B2(&cLocal_625, false);
					func_226(&cLocal_2344, Local_641, 30f, -1, 500, 1, 0);
					StringCopy(&cLocal_2344, "", 32);
					func_221(uParam0, 3, 5000);
				}
				break;
			
			case 3:
				func_224(&Local_468, 3, 1, "ALARM EVENT SET IT", 1, 0);
				unk_0x340E61DE7F471565(unk_0x4F8644AF03D0E0D6(), 2, false);
				unk_0xE0A7D1E497FFCD6F(unk_0x4F8644AF03D0E0D6(), false);
				unk_0xAA5F02DB48D704B9(2);
				unk_0xDB172424876553F4(unk_0x4F8644AF03D0E0D6(), false);
				unk_0x102E68B2024D536D(false);
				unk_0xBC9490CA15AEA8FB(unk_0x4F8644AF03D0E0D6());
				unk_0xDC64D2C53493ED12(unk_0x4F8644AF03D0E0D6());
				uParam0->f_2 = unk_0x9CD27B0045628463() + 15000;
				func_221(uParam0, 4, 0);
				break;
			
			case 4:
				if (unk_0x9CD27B0045628463() > uParam0->f_2)
				{
					unk_0xDB172424876553F4(unk_0x4F8644AF03D0E0D6(), true);
					unk_0x102E68B2024D536D(true);
					unk_0xAA5F02DB48D704B9(5);
					iLocal_2563 = 1;
					func_220(uParam0);
				}
				unk_0xBC9490CA15AEA8FB(unk_0x4F8644AF03D0E0D6());
				unk_0xDC64D2C53493ED12(unk_0x4F8644AF03D0E0D6());
				break;
			}
	}
}

int func_224(int iParam0, int iParam1, bool bParam2, char* sParam3, int iParam4, bool bParam5)
{
	return func_225(iParam0, iParam1, sParam3, 0f, 0f, 0f, 0, bParam2, iParam4, bParam5);
}

int func_225(var uParam0, int iParam1, char* sParam2, struct<3> Param3, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (func_168(*uParam0))
	{
		if (!bParam7 || iParam1 >= uParam0->f_5)
		{
			uParam0->f_38 = unk_0x9CD27B0045628463();
			if (iParam1 != uParam0->f_5 || !unk_0x0C515FAB3FF9EA92(&(uParam0->f_9), sParam2))
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
				uParam0->f_37 = unk_0x9CD27B0045628463();
				if (!func_210(Param3))
				{
					uParam0->f_88 = { Param3 };
				}
				if (iParam6 != 0 && unk_0x7239B21A38F536BA(iParam6))
				{
					uParam0->f_91 = iParam6;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_226(char* sParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_227(&Var0, 0);
}

int func_227(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	if ((unk_0xCA042B6957743895(&(uParam0->f_1)) && *uParam0 != -1) && (!unk_0x7239B21A38F536BA(Local_27[*uParam0 /*110*/]) || unk_0x84A2DD9AC37C35C1(Local_27[*uParam0 /*110*/])))
	{
		return 0;
	}
	while (iVar0 != -1 && !unk_0xCA042B6957743895(&(Local_1703[iVar0 /*32*/].f_1)))
	{
		iVar0++;
		if (iVar0 > (Local_1703.f_0 - 1))
		{
			iVar0 = -1;
		}
	}
	if (iVar0 != -1)
	{
		if (*uParam0 == -1 || (unk_0xCA042B6957743895(sParam1) || unk_0x0C515FAB3FF9EA92(sParam1, &(uParam0->f_17))))
		{
			Local_1703[iVar0 /*32*/] = *uParam0;
			Local_1703[iVar0 /*32*/].f_1 = { uParam0->f_1 };
			if (*uParam0 != -1)
			{
				Local_1703[iVar0 /*32*/].f_23 = { unk_0x3FEF770D40960D5A(Local_27[*uParam0 /*110*/], true) };
			}
			else
			{
				Local_1703[iVar0 /*32*/].f_23 = { uParam0->f_23 };
			}
			Local_1703[iVar0 /*32*/].f_26 = uParam0->f_26;
			Local_1703[iVar0 /*32*/].f_28 = uParam0->f_28;
			Local_1703[iVar0 /*32*/].f_29 = uParam0->f_29;
			Local_1703[iVar0 /*32*/].f_27 = unk_0x9CD27B0045628463();
			Local_1703[iVar0 /*32*/].f_30 = uParam0->f_30;
			Local_1703[iVar0 /*32*/].f_31 = uParam0->f_31;
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

void func_228(var uParam0)
{
	char cVar0[24];
	bool bVar6;
	struct<3> Var7;
	
	if (!func_222(uParam0))
	{
		if (func_44())
		{
			iLocal_2518 = -1;
		}
		else if (iLocal_2518 == -1)
		{
			iLocal_2518 = unk_0x9CD27B0045628463();
			iLocal_2544 = -1;
			iLocal_2545 = 1;
		}
		if (iLocal_2522 != -1 && !unk_0xCA042B6957743895(&cLocal_2524))
		{
			if (((Local_27[iLocal_2522 /*110*/] != 0 && unk_0x7239B21A38F536BA(Local_27[iLocal_2522 /*110*/])) && !unk_0x84A2DD9AC37C35C1(Local_27[iLocal_2522 /*110*/])) && !unk_0xE0A0AEC214B1FABA(Local_27[iLocal_2522 /*110*/]))
			{
				if (!unk_0x47E4E977581C5B55(Local_27[iLocal_2522 /*110*/]))
				{
					if (func_44())
					{
						if (iLocal_2534 && (iLocal_2545 || iLocal_2523 > iLocal_2544))
						{
							if (bLocal_2546)
							{
								iLocal_2549 = iLocal_2539;
								iLocal_2550 = iLocal_2544;
								MemCopy(&Local_2551, {func_235()}, 4);
								MemCopy(&Local_2555, {func_234()}, 4);
								iLocal_2559 = iLocal_2545;
								bLocal_2560 = iLocal_2547;
							}
							if (iLocal_2535)
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
						if ((unk_0x9CD27B0045628463() - iLocal_2518) > iLocal_2532)
						{
							if (func_233(iLocal_2522))
							{
								MemCopy(&cVar0, {Local_621}, 6);
							}
							else
							{
								StringCopy(&cVar0, "SOL1AUD", 24);
							}
							switch (iLocal_2522)
							{
								case 0:
									func_40(&uLocal_2352, 4, Local_27[0 /*110*/], "JHP1A_FOREMAN", 0, 1);
									break;
								
								case 1:
									func_40(&uLocal_2352, 5, Local_27[1 /*110*/], "JHP1A_FOREMAN2", 0, 1);
									break;
								
								case 2:
									func_40(&uLocal_2352, 4, Local_27[2 /*110*/], "CONSTRUCTION1", 0, 1);
									break;
								
								case 3:
									func_40(&uLocal_2352, 3, Local_27[3 /*110*/], "CONSTRUCTION2", 0, 1);
									break;
							}
							if (unk_0xCA042B6957743895(&cLocal_2528))
							{
								if (func_232(&uLocal_2352, &cVar0, &cLocal_2524, 8, 0, 0, 0))
								{
									bVar6 = true;
								}
							}
							else if (func_231(&uLocal_2352, &cVar0, &cLocal_2524, &cLocal_2528, 8, 0, 0))
							{
								bVar6 = true;
							}
							if (bVar6)
							{
								func_227(&(Local_27[iLocal_2522 /*110*/].f_50), &cLocal_2524);
								iLocal_2544 = iLocal_2523;
								iLocal_2545 = iLocal_2536;
								bLocal_2546 = iLocal_2538;
								iLocal_2547 = iLocal_2537;
								iLocal_2522 = -1;
								iLocal_2523 = -1;
								StringCopy(&cLocal_2524, "", 16);
								iLocal_2532 = 0;
								fLocal_2533 = 9999999f;
								iLocal_2534 = 0;
								iLocal_2535 = 0;
								iLocal_2536 = 1;
								iLocal_2538 = 0;
								iLocal_2537 = 0;
							}
						}
					}
				}
			}
			else
			{
				iLocal_2522 = -1;
				iLocal_2523 = -1;
				StringCopy(&cLocal_2524, "", 16);
				iLocal_2532 = 0;
				fLocal_2533 = 9999999f;
				iLocal_2534 = 0;
				iLocal_2535 = 0;
				iLocal_2536 = 1;
				iLocal_2537 = 0;
			}
		}
		if (((func_44() && iLocal_2539 != -1) && iLocal_2547) && !unk_0xCA042B6957743895(&cLocal_2540))
		{
			Var7 = { unk_0x3FEF770D40960D5A(Local_27[iLocal_2539 /*110*/], true) };
			if (func_102(unk_0xD80958FC74E988A6(), Var7, 1) >= 25f)
			{
				iLocal_2549 = iLocal_2539;
				iLocal_2550 = iLocal_2544;
				MemCopy(&Local_2551, {func_235()}, 4);
				MemCopy(&Local_2555, {func_234()}, 4);
				iLocal_2559 = iLocal_2545;
				bLocal_2560 = iLocal_2547;
				func_11();
				iLocal_2539 = -1;
				iLocal_2544 = -1;
				StringCopy(&cLocal_2540, "", 16);
				iLocal_2545 = 0;
				iLocal_2547 = 0;
			}
		}
		if (iLocal_2549 != -1 && !unk_0xCA042B6957743895(&Local_2551))
		{
			if (Local_27[iLocal_2549 /*110*/].f_5 > iLocal_2550)
			{
				iLocal_2549 = -1;
				iLocal_2550 = -1;
				StringCopy(&Local_2551, "", 16);
				StringCopy(&Local_2555, "", 16);
				iLocal_2559 = 1;
			}
		}
		if (iLocal_2522 == -1 && unk_0xCA042B6957743895(&cLocal_2524))
		{
			if (func_43() && (unk_0x9CD27B0045628463() - iLocal_2518) > 10000)
			{
				if (iLocal_2549 != -1 && !unk_0xCA042B6957743895(&Local_2551))
				{
					func_230(iLocal_2549, &Local_2551, iLocal_2550, 0, 0, iLocal_2559, 0, 1, &Local_2555, bLocal_2560);
					iLocal_2549 = -1;
					iLocal_2550 = -1;
					StringCopy(&Local_2551, "", 16);
					StringCopy(&Local_2555, "", 16);
					iLocal_2559 = 1;
				}
			}
		}
	}
	func_229(bLocal_2560);
}

void func_229(bool bParam0)
{
	if (bParam0)
	{
	}
}

int func_230(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9)
{
	float fVar0;
	bool bVar1;
	
	fVar0 = func_101(Local_27[iParam0 /*110*/], unk_0xD80958FC74E988A6(), 1);
	if ((iParam2 > iLocal_2523 || iParam2 == 4) || ((iParam2 == iLocal_2523 && (fVar0 < fLocal_2533 || (func_233(iParam0) && !func_233(iLocal_2522)))) && iParam2 != 5))
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
			iLocal_2522 = iParam0;
			iLocal_2523 = iParam2;
			StringCopy(&cLocal_2524, sParam1, 16);
			StringCopy(&cLocal_2528, sParam8, 16);
			fLocal_2533 = fVar0;
			iLocal_2534 = iParam3;
			iLocal_2535 = iParam4;
			iLocal_2532 = iParam6;
			iLocal_2536 = iParam5;
			iLocal_2538 = iParam7;
			iLocal_2537 = iParam9;
			return 1;
		}
	}
	return 0;
}

bool func_231(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_39(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 1;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return func_29(sParam2, iParam4, 0);
}

bool func_232(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_39(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_29(sParam2, iParam3, 0);
}

int func_233(int iParam0)
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		return 1;
	}
	return 0;
}

struct<6> func_234()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		iVar6 = unk_0x480357EE890C295A();
		iVar6 = (iVar6 + Global_16702);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (unk_0xAC09CA973C564252(&(Global_14560[iVar7 /*6*/])))
			{
				return Global_14560[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (unk_0xAC09CA973C564252(&(Global_14560[iVar8 /*6*/])))
					{
						return Global_14560[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14560[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_235()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		return Global_15311;
	}
	return Var0;
}

int func_236(var uParam0, int iParam1, char* sParam2)
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

void func_237(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	bool bVar5;
	bool bVar6;
	
	if (!func_222(uParam0))
	{
		bLocal_2564 = true;
		if (!iLocal_2562)
		{
			if (func_170())
			{
				iLocal_2562 = 1;
				iLocal_2565 = unk_0x9CD27B0045628463();
			}
		}
		else if ((unk_0x9CD27B0045628463() - iLocal_2565) > 3000)
		{
			iLocal_2562 = 0;
			iLocal_2565 = -1;
		}
		iVar0 = 0;
		while (iVar0 < Local_27.f_0)
		{
			if (func_168(Local_27[iVar0 /*110*/]))
			{
				func_257(&(Local_27[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_168(Local_468.f_0))
		{
			func_257(&Local_468);
		}
		iVar1 = 0;
		while (iVar1 < Local_1703.f_0)
		{
			if (!unk_0xCA042B6957743895(&(Local_1703[iVar1 /*32*/].f_1)) && Local_1703[iVar1 /*32*/].f_27 != -1)
			{
				if (Local_1703[iVar1 /*32*/].f_28 == -1 || (unk_0x9CD27B0045628463() - Local_1703[iVar1 /*32*/].f_27) < Local_1703[iVar1 /*32*/].f_28)
				{
					if (Local_1703[iVar1 /*32*/].f_29 <= 0 || (unk_0x9CD27B0045628463() - Local_1703[iVar1 /*32*/].f_27) > Local_1703[iVar1 /*32*/].f_29)
					{
						if (Local_1703[iVar1 /*32*/] != -1 && func_168(Local_27[Local_1703[iVar1 /*32*/] /*110*/]))
						{
							Var2 = { unk_0x3FEF770D40960D5A(Local_27[Local_1703[iVar1 /*32*/] /*110*/], true) };
							Local_1703[iVar1 /*32*/].f_23 = { Var2 };
						}
						else
						{
							Var2 = { Local_1703[iVar1 /*32*/].f_23 };
						}
						if (!func_22(&(Local_1662[3 /*8*/])))
						{
							if (Local_1703[iVar1 /*32*/].f_31 && unk_0xF1B760881820C952(Var2, Local_641, true) < 35f)
							{
								func_159(&(Local_1662[3 /*8*/]), 0, 0, 1);
							}
						}
						iVar0 = 0;
						while (iVar0 < Local_27.f_0)
						{
							if (Local_1703[iVar1 /*32*/] == -1 || (iVar0 != Local_1703[iVar1 /*32*/] && Local_27[Local_1703[iVar1 /*32*/] /*110*/].f_5 >= Local_27[iVar0 /*110*/].f_5))
							{
								if (unk_0x7239B21A38F536BA(Local_27[iVar0 /*110*/]) && !unk_0x84A2DD9AC37C35C1(Local_27[iVar0 /*110*/]))
								{
									if (func_102(Local_27[iVar0 /*110*/], Var2, 1) < (Local_1703[iVar1 /*32*/].f_26 + Local_27[iVar0 /*110*/].f_42))
									{
										Local_27[iVar0 /*110*/].f_34 = iVar1;
										if (Local_1703[iVar1 /*32*/].f_30)
										{
											if (!func_22(&(Local_1662[3 /*8*/])))
											{
												func_159(&(Local_1662[3 /*8*/]), 0, 0, 1);
												MemCopy(&cLocal_2344, {Local_1703[iVar1 /*32*/].f_1}, 8);
											}
										}
									}
								}
							}
							iVar0++;
						}
					}
				}
				else if ((unk_0x9CD27B0045628463() - Local_1703[iVar1 /*32*/].f_27) > Local_1703[iVar1 /*32*/].f_28 + 2000)
				{
					StringCopy(&(Local_1703[iVar1 /*32*/].f_1), "", 64);
					Local_1703[iVar1 /*32*/] = -1;
					Local_1703[iVar1 /*32*/].f_23 = { 0f, 0f, 0f };
					Local_1703[iVar1 /*32*/].f_26 = 0f;
					Local_1703[iVar1 /*32*/].f_27 = -1;
					Local_1703[iVar1 /*32*/].f_28 = -1;
					Local_1703[iVar1 /*32*/].f_29 = -1;
				}
			}
			iVar1++;
		}
		iVar0 = 0;
		while (iVar0 < Local_27.f_0)
		{
			if (func_168(Local_27[iVar0 /*110*/]))
			{
				func_251(&(Local_27[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_168(Local_468.f_0))
		{
			func_242(&Local_468);
		}
		iVar0 = 0;
		while (iVar0 < Local_27.f_0)
		{
			if (func_168(Local_27[iVar0 /*110*/]))
			{
				func_241(&(Local_27[iVar0 /*110*/]));
			}
			iVar0++;
		}
		if (func_168(Local_468.f_0))
		{
			func_239(&Local_468);
		}
		iVar0 = 0;
		while (iVar0 < Local_27.f_0)
		{
			if (unk_0x7239B21A38F536BA(Local_27[iVar0 /*110*/].f_105))
			{
				if (((!unk_0x7239B21A38F536BA(Local_27[iVar0 /*110*/]) || unk_0x84A2DD9AC37C35C1(Local_27[iVar0 /*110*/])) || unk_0xE3B6097CC25AA69E(Local_27[iVar0 /*110*/])) || (Local_27[iVar0 /*110*/].f_108 && Local_27[iVar0 /*110*/].f_5 != 0))
				{
					bVar5 = true;
				}
				else if (Local_27[iVar0 /*110*/].f_5 != 0)
				{
					bVar6 = true;
				}
				if (bVar5 || bVar6)
				{
					if (unk_0xEFBE71898A993728(Local_27[iVar0 /*110*/].f_105, Local_27[iVar0 /*110*/]))
					{
						unk_0x961AC54BF0613F5D(Local_27[iVar0 /*110*/].f_105, true, true);
					}
					if (bVar5)
					{
						unk_0x3AE22DEB5BA5A3E6(&(Local_27[iVar0 /*110*/].f_105));
					}
					else if (bVar6)
					{
						unk_0x539E0AE3E6634B9F(&(Local_27[iVar0 /*110*/].f_105));
					}
					Local_27[iVar0 /*110*/].f_109 = 0;
				}
			}
			else if (Local_27[iVar0 /*110*/].f_107 != 0 && Local_27[iVar0 /*110*/].f_106 != -1)
			{
				if (Local_27[iVar0 /*110*/].f_109 && unk_0x98A4EB5D89A0C952(Local_27[iVar0 /*110*/].f_107))
				{
					Local_27[iVar0 /*110*/].f_105 = unk_0x509D5878EB39E842(Local_27[iVar0 /*110*/].f_107, unk_0x17C07FC640E86B4E(Local_27[iVar0 /*110*/], Local_27[iVar0 /*110*/].f_106, 0f, 0f, 0f), true, true, false);
					unk_0x6B9BBD38AB0796DF(Local_27[iVar0 /*110*/].f_105, Local_27[iVar0 /*110*/], unk_0x3F428D08BE5AAE31(Local_27[iVar0 /*110*/], Local_27[iVar0 /*110*/].f_106), 0f, 0f, 0f, 0f, 0f, 0f, true, true, true, false, 2, true);
					Local_27[iVar0 /*110*/].f_109 = 0;
				}
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < Local_27.f_0)
		{
			if (unk_0x7239B21A38F536BA(Local_27[iVar1 /*110*/]) && !unk_0x84A2DD9AC37C35C1(Local_27[iVar1 /*110*/]))
			{
				unk_0xA72CD9CA74A5ECBA(Local_27[iVar1 /*110*/]);
				unk_0xAC678E40BE7C74D2(Local_27[iVar1 /*110*/]);
			}
			iVar1++;
		}
		func_238();
	}
	if (func_222(uParam0))
	{
	}
}

void func_238()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (func_168(Local_578[iVar0 /*8*/]))
		{
			unk_0xA72CD9CA74A5ECBA(Local_578[iVar0 /*8*/]);
		}
		iVar0++;
	}
}

void func_239(int iParam0)
{
	int iVar0;
	int iVar1;
	
	unk_0xF1C03A5352243A30(*iParam0);
	if (func_240(*iParam0))
	{
		Local_468.f_46 = 0;
	}
	switch (iParam0->f_5)
	{
		case 0:
			if (unk_0x25223CA6B4D20B7F() >= 5 && unk_0x25223CA6B4D20B7F() < 21)
			{
				if ((!func_178(*iParam0, 1647992574, 1) && !func_178(*iParam0, 242628503, 1)) || iLocal_2571)
				{
					if (unk_0x5A59271FFADD33C1(203.68f, -3132.46f, 4.79f, 1f, true))
					{
						unk_0x277F471BA9DB000B(*iParam0, 203.68f, -3132.46f, 4.79f, 1f, 0);
						iLocal_2571 = 0;
					}
				}
			}
			else if (!func_178(*iParam0, -1680762137, 1) || !iLocal_2571)
			{
				if (unk_0x5A59271FFADD33C1(162.69f, -3115.67f, 4.95f, 1f, true))
				{
					unk_0x9FDA1B3D7E7028B3(*iParam0, 162.69f, -3115.67f, 4.95f, 1f, 0);
					iLocal_2571 = 1;
				}
			}
			break;
		
		case 3:
			unk_0xD75ACCF5E0FB5367(*iParam0, true, -1, "DEFAULT_ACTION");
			switch (unk_0xD24D37CC275948CC(&(iParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
					if (unk_0x8DECB02F88F428BC(*iParam0, joaat("weapon_pistol"), false))
					{
						unk_0x4899CB088EDF59B8(*iParam0, joaat("weapon_pistol"));
					}
					if (!unk_0x8DECB02F88F428BC(*iParam0, joaat("weapon_nightstick"), false))
					{
						unk_0xBF0FD6E56C964FCB(*iParam0, joaat("weapon_nightstick"), -1, true, true);
					}
					if (unk_0x3A87E44BB9A01D54(*iParam0, &iVar0, true))
					{
						if (iVar0 != joaat("weapon_nightstick"))
						{
							unk_0xADF692B254977C0C(*iParam0, joaat("weapon_nightstick"), false);
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
					if (unk_0x8DECB02F88F428BC(*iParam0, joaat("weapon_nightstick"), false))
					{
						unk_0x4899CB088EDF59B8(*iParam0, joaat("weapon_nightstick"));
					}
					if (!unk_0x8DECB02F88F428BC(*iParam0, joaat("weapon_pistol"), false))
					{
						unk_0xBF0FD6E56C964FCB(*iParam0, joaat("weapon_pistol"), -1, true, true);
					}
					if (unk_0x3A87E44BB9A01D54(*iParam0, &iVar0, true))
					{
						if (iVar0 != joaat("weapon_pistol"))
						{
							unk_0xADF692B254977C0C(*iParam0, joaat("weapon_pistol"), false);
						}
					}
					break;
			}
			if (!func_178(*iParam0, 780511057, 1) || func_240(*iParam0))
			{
				unk_0xF166E48407BAC484(*iParam0, unk_0xD80958FC74E988A6(), 0, 16);
				unk_0x69F4BE8C8CC4796C(*iParam0, unk_0xD80958FC74E988A6(), -1, 2048, 2);
			}
			break;
		
		case 1:
			switch (unk_0xD24D37CC275948CC(&(iParam0->f_9)))
			{
				case 686645495:
					if (unk_0x7239B21A38F536BA(iParam0->f_91))
					{
						if (!unk_0xFCF37A457CB96DC0(*iParam0, unk_0x3FEF770D40960D5A(iParam0->f_91, true), 180f) && (unk_0x9CD27B0045628463() - iParam0->f_37) < 5000)
						{
							if (!func_178(*iParam0, -875674219, 1) || func_240(*iParam0))
							{
								unk_0x5AD23D40115353AC(*iParam0, iParam0->f_91, -1);
								unk_0x69F4BE8C8CC4796C(*iParam0, iParam0->f_91, -1, 2048, 2);
							}
						}
						else if (!func_178(*iParam0, -2015108952, 1) || func_240(*iParam0))
						{
							unk_0x338E7EF52B6095A9(*iParam0, iParam0->f_91, -1, 2f, -1f, 2.5f, 1f, true);
						}
					}
					break;
				
				case -1225951737:
					if (iParam0->f_41 && !func_59(iParam0->f_88, iParam0->f_43, 1f))
					{
						iParam0->f_88 = { iParam0->f_43 };
						iVar1 = 1;
					}
					if (!func_210(iParam0->f_88))
					{
						if (!unk_0xFCF37A457CB96DC0(*iParam0, iParam0->f_88, 90f) && (unk_0x9CD27B0045628463() - iParam0->f_37) < 5000)
						{
							if ((!func_178(*iParam0, 1464580341, 1) || func_240(*iParam0)) || iVar1)
							{
								unk_0x1DDA930A0AC38571(*iParam0, iParam0->f_88, 0);
								unk_0x6FA46612594F7973(*iParam0, iParam0->f_88, -1, 2048, 2);
							}
						}
						else if ((!func_178(*iParam0, 713668775, 1) || func_240(*iParam0)) || iVar1)
						{
							unk_0x15D3A79D4E44B913(*iParam0, iParam0->f_43, 1f, -1, 3f, false, 40000f);
						}
					}
					break;
				
				case -1940555668:
					break;
				
				case -927541383:
					if (!func_210(iParam0->f_88))
					{
						if (!func_178(*iParam0, 1464580341, 1) || func_240(*iParam0))
						{
							unk_0x1DDA930A0AC38571(*iParam0, iParam0->f_88, -1);
							unk_0x6FA46612594F7973(*iParam0, iParam0->f_88, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x919BE13EED931959(*iParam0, -1);
					}
					break;
				
				case 58299323:
					if (unk_0x7239B21A38F536BA(iParam0->f_91))
					{
						if (!func_178(*iParam0, -875674219, 1) || func_240(*iParam0))
						{
							unk_0x5AD23D40115353AC(*iParam0, iParam0->f_91, -1);
							unk_0x69F4BE8C8CC4796C(*iParam0, iParam0->f_91, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x919BE13EED931959(*iParam0, -1);
					}
					break;
			}
			break;
	}
}

int func_240(struct<26> Param0, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109)
{
	if (Param0.f_5 != Param0.f_7 || !unk_0x0C515FAB3FF9EA92(&(Param0.f_9), &(Param0.f_25)))
	{
		return 1;
	}
	return 0;
}

void func_241(var uParam0)
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
	
	unk_0xF1C03A5352243A30(*uParam0);
	if (func_240(*uParam0))
	{
		uParam0->f_46 = 0;
	}
	switch (uParam0->f_5)
	{
		case 0:
			iVar1 = 0;
			while (iVar1 < Local_27.f_0)
			{
				if (Local_27[iVar1 /*110*/] == *uParam0)
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
							if (unk_0x5A59271FFADD33C1(155.74f, -3098.89f, 4.93f, 0.5f, true))
							{
								unk_0x277F471BA9DB000B(*uParam0, 155.74f, -3098.89f, 4.93f, 0.5f, -1);
							}
						}
						break;
					
					case 1:
						if ((!func_178(*uParam0, 242628503, 1) || func_240(*uParam0)) && unk_0xD031A9162D01088C("misslsdhsclipboard@base"))
						{
							if (!unk_0x1F0B79228E461EC9(*uParam0, "misslsdhsclipboard@base", "base", 3))
							{
								unk_0xE8854A4326B9E12B(&iLocal_2520);
								if (!func_59(unk_0x3FEF770D40960D5A(*uParam0, true), 126.8496f, -3089.249f, 4.9141f, 0.75f))
								{
									unk_0x15D3A79D4E44B913(0, 126.8496f, -3089.249f, 4.9141f, 1f, -1, 0.5f, false, 264.2812f);
								}
								unk_0x93B93A37987F1F3D(0, 264.2812f, 0);
								unk_0xEA47FE3719165B94(0, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0f, false, false, false);
								unk_0x39E72BC99E6360CB(iLocal_2520);
								unk_0x5ABA3986D90D8A3B(*uParam0, iLocal_2520);
								unk_0x3841422E9C488D8C(&iLocal_2520);
							}
							if (unk_0x7239B21A38F536BA(Local_578[2 /*8*/]))
							{
								unk_0x6FA46612594F7973(*uParam0, unk_0x44A8FCB8ED227738(Local_578[2 /*8*/], unk_0xFB71170B7E76ACBA(Local_578[2 /*8*/], "engine")), -1, 0, 2);
							}
							uParam0->f_46 = 0;
						}
						else if (unk_0xD031A9162D01088C("misslsdhsclipboard@idle_a"))
						{
							switch (uParam0->f_46)
							{
								case 0:
								case 2:
									if (uParam0->f_46 == 0 && unk_0x00A9010CFE1E3533(*uParam0) == 2)
									{
										uParam0->f_109 = 1;
									}
									if (((uParam0->f_46 == 0 && unk_0x00A9010CFE1E3533(*uParam0) == 2) || uParam0->f_46 == 2) && unk_0x9CD27B0045628463() > uParam0->f_37)
									{
										unk_0xE8854A4326B9E12B(&iLocal_2520);
										switch (unk_0xD53343AA4FB7DD28(0, 3))
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
										unk_0xEA47FE3719165B94(0, "misslsdhsclipboard@idle_a", &cVar2, 8f, -8f, -1, 0, 0f, false, false, false);
										unk_0xEA47FE3719165B94(0, "misslsdhsclipboard@base", "base", 8f, -8f, -1, 1, 0f, false, false, false);
										unk_0x39E72BC99E6360CB(iLocal_2520);
										unk_0x5ABA3986D90D8A3B(*uParam0, iLocal_2520);
										unk_0x3841422E9C488D8C(&iLocal_2520);
										uParam0->f_46 = 1;
									}
									break;
								
								case 1:
									if (unk_0x00A9010CFE1E3533(*uParam0) == 1)
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
							if (unk_0x5A59271FFADD33C1(159.82f, -3085.93f, 5f, 0.1f, true))
							{
								unk_0x277F471BA9DB000B(*uParam0, 159.82f, -3085.93f, 5f, 0.1f, -1);
							}
							else if (unk_0x5A59271FFADD33C1(160.15f, -3084.79f, 4.99f, 0.1f, true))
							{
								unk_0x277F471BA9DB000B(*uParam0, 160.15f, -3084.79f, 4.99f, 0.1f, -1);
							}
							else if (unk_0x5A59271FFADD33C1(159.09f, -3085.02f, 5.01f, 0.1f, true))
							{
								unk_0x277F471BA9DB000B(*uParam0, 159.09f, -3085.02f, 5.01f, 0.1f, -1);
							}
						}
						break;
					}
			}
			break;
		
		case 1:
			switch (unk_0xD24D37CC275948CC(&(uParam0->f_9)))
			{
				case 2074432461:
				case 356486511:
				case -414594135:
				case 1260350710:
					if (unk_0x7239B21A38F536BA(uParam0->f_91))
					{
						if (!unk_0xFCF37A457CB96DC0(*uParam0, unk_0x3FEF770D40960D5A(uParam0->f_91, true), 180f) && (unk_0x9CD27B0045628463() - uParam0->f_37) < 5000)
						{
							if (!func_178(*uParam0, -875674219, 1) || func_240(*uParam0))
							{
								unk_0x5AD23D40115353AC(*uParam0, uParam0->f_91, -1);
								unk_0x69F4BE8C8CC4796C(*uParam0, uParam0->f_91, -1, 2048, 2);
							}
						}
						else if (!func_178(*uParam0, -2015108952, 1) || func_240(*uParam0))
						{
							unk_0x338E7EF52B6095A9(*uParam0, uParam0->f_91, -1, 2f, -1f, 2.5f, 1f, true);
						}
					}
					break;
				
				case -1225951737:
					if (uParam0->f_41 && !func_59(uParam0->f_88, uParam0->f_43, 1f))
					{
						uParam0->f_88 = { uParam0->f_43 };
						iVar8 = 1;
					}
					if (!func_210(uParam0->f_88))
					{
						if (!unk_0xFCF37A457CB96DC0(*uParam0, uParam0->f_88, 90f) && (unk_0x9CD27B0045628463() - uParam0->f_37) < 5000)
						{
							if ((!func_178(*uParam0, 1464580341, 1) || func_240(*uParam0)) || iVar8)
							{
								unk_0x1DDA930A0AC38571(*uParam0, uParam0->f_88, 0);
								unk_0x6FA46612594F7973(*uParam0, uParam0->f_88, -1, 2048, 2);
							}
						}
						else if ((!func_178(*uParam0, 713668775, 1) || func_240(*uParam0)) || iVar8)
						{
							unk_0x15D3A79D4E44B913(*uParam0, uParam0->f_43, 1f, -1, 3f, false, 40000f);
						}
					}
					break;
				
				case -1940555668:
					break;
				
				case -927541383:
					if (!func_210(uParam0->f_88))
					{
						if (!func_178(*uParam0, 1464580341, 1) || func_240(*uParam0))
						{
							unk_0x1DDA930A0AC38571(*uParam0, uParam0->f_88, -1);
							unk_0x6FA46612594F7973(*uParam0, uParam0->f_88, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x919BE13EED931959(*uParam0, -1);
					}
					break;
				
				case 58299323:
					if (unk_0x7239B21A38F536BA(uParam0->f_91))
					{
						if (!func_178(*uParam0, -875674219, 1) || func_240(*uParam0))
						{
							unk_0x5AD23D40115353AC(*uParam0, uParam0->f_91, -1);
							unk_0x69F4BE8C8CC4796C(*uParam0, uParam0->f_91, -1, 2048, 2);
						}
					}
					else
					{
						unk_0x919BE13EED931959(*uParam0, -1);
					}
					break;
			}
			break;
		
		case 2:
			if (((unk_0x0C515FAB3FF9EA92(&(uParam0->f_9), "ENT_FOOT_LEAVE") || unk_0x0C515FAB3FF9EA92(&(uParam0->f_9), "ENT_VEH_LEAVE")) || unk_0x0C515FAB3FF9EA92(&(uParam0->f_9), "WH_FOOT_LEAVE")) || unk_0x0C515FAB3FF9EA92(&(uParam0->f_9), "WH_VEH_LEAVE"))
			{
				if ((!func_178(*uParam0, 242628503, 1) || !unk_0xD71649DB0A545AA3(*uParam0, unk_0xD80958FC74E988A6(), 90f)) || func_240(*uParam0))
				{
					unk_0xE8854A4326B9E12B(&iLocal_2520);
					unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
					unk_0x919BE13EED931959(0, 2000);
					unk_0x58C70CF3A41E4AE7(iLocal_2520, true);
					unk_0x39E72BC99E6360CB(iLocal_2520);
					unk_0x5ABA3986D90D8A3B(*uParam0, iLocal_2520);
					unk_0x3841422E9C488D8C(&iLocal_2520);
					unk_0x69F4BE8C8CC4796C(*uParam0, unk_0xD80958FC74E988A6(), -1, 2048, 2);
				}
			}
			else
			{
				if (unk_0x7239B21A38F536BA(iLocal_2570) && unk_0x4C241E39B23DF959(iLocal_2570, false))
				{
					fVar11 = func_101(unk_0xD80958FC74E988A6(), iLocal_2570, 1);
				}
				if ((iLocal_2567 == 3 || iLocal_2567 == 2) || iLocal_2567 == 8)
				{
					iVar9 = unk_0xD80958FC74E988A6();
					fVar12 = 2f;
				}
				else if (iLocal_2567 == 0 || iLocal_2567 == 1)
				{
					iVar9 = unk_0xD80958FC74E988A6();
					fVar12 = 1f;
				}
				else if (iLocal_2567 == 5 && unk_0x7239B21A38F536BA(iLocal_2570))
				{
					if (fVar11 > 10f)
					{
						iVar9 = unk_0xD80958FC74E988A6();
						fVar12 = 2f;
					}
					else
					{
						iVar9 = iLocal_2570;
						fVar12 = 2f;
					}
				}
				else if (iLocal_2567 == 4 && unk_0x7239B21A38F536BA(iLocal_2570))
				{
					iVar9 = iLocal_2570;
					fVar12 = 1f;
				}
				if (unk_0x7239B21A38F536BA(iVar9))
				{
					fVar10 = func_101(*uParam0, iVar9, 1);
				}
				if (fVar10 <= 7.5f)
				{
					if (((!func_178(*uParam0, 242628503, 1) && !func_178(*uParam0, 1227113341, 1)) || !unk_0xD71649DB0A545AA3(*uParam0, unk_0xD80958FC74E988A6(), 90f)) || func_240(*uParam0))
					{
						unk_0xE8854A4326B9E12B(&iLocal_2520);
						unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
						unk_0x919BE13EED931959(0, 2000);
						unk_0x58C70CF3A41E4AE7(iLocal_2520, true);
						unk_0x39E72BC99E6360CB(iLocal_2520);
						unk_0x5ABA3986D90D8A3B(*uParam0, iLocal_2520);
						unk_0x3841422E9C488D8C(&iLocal_2520);
						unk_0x69F4BE8C8CC4796C(*uParam0, unk_0xD80958FC74E988A6(), -1, 2048, 2);
					}
				}
				else if (!func_178(*uParam0, 1227113341, 1) || func_240(*uParam0))
				{
					if (fVar12 > 1f)
					{
						fVar13 = 6f;
					}
					else
					{
						fVar13 = 3f;
					}
					unk_0x6A071245EB0D1882(*uParam0, iVar9, -1, fVar13, fVar12, 2f, 0);
					unk_0x69F4BE8C8CC4796C(*uParam0, unk_0xD80958FC74E988A6(), -1, 2048, 2);
				}
			}
			break;
		
		case 3:
			switch (unk_0xD24D37CC275948CC(&(uParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
				case 1568162790:
				case 1682434916:
				case -924218668:
				case 2056033185:
				case 185995093:
					if (unk_0x3A87E44BB9A01D54(*uParam0, &iVar14, true))
					{
						if (iVar14 != joaat("weapon_unarmed"))
						{
							unk_0xADF692B254977C0C(*uParam0, joaat("weapon_unarmed"), false);
						}
					}
					if (!func_178(*uParam0, 780511057, 1))
					{
						unk_0xF166E48407BAC484(*uParam0, unk_0xD80958FC74E988A6(), 0, 16);
					}
					break;
				
				case 1093888274:
					if ((!func_178(*uParam0, 242628503, 1) || !unk_0xD71649DB0A545AA3(*uParam0, unk_0xD80958FC74E988A6(), 90f)) || func_240(*uParam0))
					{
						unk_0xE8854A4326B9E12B(&iLocal_2520);
						unk_0x5AD23D40115353AC(0, unk_0xD80958FC74E988A6(), 0);
						unk_0x919BE13EED931959(0, 2000);
						unk_0x58C70CF3A41E4AE7(iLocal_2520, true);
						unk_0x39E72BC99E6360CB(iLocal_2520);
						unk_0x5ABA3986D90D8A3B(*uParam0, iLocal_2520);
						unk_0x3841422E9C488D8C(&iLocal_2520);
						unk_0x69F4BE8C8CC4796C(*uParam0, unk_0xD80958FC74E988A6(), -1, 2048, 2);
					}
					break;
			}
			break;
		
		case 5:
			if (func_102(*uParam0, 177.7484f, -3240.897f, 4.6079f, 1) < 15f)
			{
				if (!func_178(*uParam0, 1805844857, 1))
				{
					unk_0x22B0D0E37CCB840D(*uParam0, unk_0xD80958FC74E988A6(), 1000f, -1, false, false);
				}
			}
			else if ((!func_178(*uParam0, 1805844857, 1) && !func_178(*uParam0, 713668775, 1)) || func_240(*uParam0))
			{
				unk_0x15D3A79D4E44B913(*uParam0, 177.7484f, -3240.897f, 4.6079f, 3f, -1, 0.25f, true, 40000f);
			}
			break;
		
		case 4:
			switch (unk_0xD24D37CC275948CC(&(uParam0->f_9)))
			{
				case -1645534839:
					if (!func_178(*uParam0, -1519143300, 1) || func_240(*uParam0))
					{
						unk_0xF2EAB31979A7F910(*uParam0, -1, unk_0xD80958FC74E988A6(), 0, true);
					}
					break;
			}
			break;
	}
}

void func_242(int iParam0)
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
	
	unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &uVar0, true);
	fVar1 = func_101(unk_0xD80958FC74E988A6(), *iParam0, 1);
	if (unk_0xDFD5033FDBA0A9C8(*iParam0))
	{
		iVar3 = 1;
	}
	if (unk_0xC86D67D52A707CF8(*iParam0, unk_0xD80958FC74E988A6(), true))
	{
		if (unk_0x131D401334815E94(*iParam0, joaat("weapon_unarmed"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar4 = func_249(*iParam0, &uVar5, &bVar6, &bVar7);
	if ((uVar4 && uVar5) && !bVar7)
	{
		if (bVar6)
		{
			func_224(iParam0, 3, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_224(iParam0, 3, 1, "KILLED", 1, 0);
		}
	}
	else if (((((unk_0x8507BCB710FA6DC0(*iParam0, 122) || unk_0x8507BCB710FA6DC0(*iParam0, 123)) || unk_0x8507BCB710FA6DC0(*iParam0, 124)) || unk_0x8507BCB710FA6DC0(*iParam0, 22)) || unk_0x8507BCB710FA6DC0(*iParam0, 23)) || unk_0x8507BCB710FA6DC0(*iParam0, 86))
	{
		func_224(iParam0, 3, 1, "GUNSHOT", 1, 0);
	}
	else if (iParam0->f_39 && func_248(4))
	{
		func_224(iParam0, 3, 1, "GUN_AIMED", 1, 0);
	}
	else if (iParam0->f_39 && func_247(*iParam0, 2))
	{
		func_224(iParam0, 3, 1, "PROJ_AIMED", 1, 0);
	}
	else if (((iParam0->f_39 && fVar1 < 8f) && !unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 5))
	{
		func_224(iParam0, 3, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2567 == 11)
	{
		if (iParam0->f_39)
		{
			func_224(iParam0, 3, 1, "STEALING_SEC_CAR", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_246(iParam0, 1, "HEARD_SEC_CAR", Local_578[3 /*8*/], 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2567 == 6)
	{
		if (iParam0->f_39)
		{
			func_224(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_246(iParam0, 1, "HEARD_VAN", Local_578[func_96() /*8*/], 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2567 == 10)
	{
		if (iParam0->f_39)
		{
			func_246(iParam0, 3, "STEALING_VAN", Local_578[func_48() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_246(iParam0, 1, "HEARD_VAN", Local_578[func_48() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || unk_0x8507BCB710FA6DC0(*iParam0, 41)) || unk_0x8507BCB710FA6DC0(*iParam0, 112)) || func_244(*iParam0, 0))
	{
		func_224(iParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || unk_0x8507BCB710FA6DC0(*iParam0, 101)) || func_244(*iParam0, 1))
	{
		func_224(iParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((iParam0->f_5 != 3 && iParam0->f_84) && (iParam0->f_39 || iParam0->f_41)) && (fVar1 < 8f || func_102(unk_0xD80958FC74E988A6(), Local_641, 1) < 40f))
	{
		if (iParam0->f_39)
		{
			func_224(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_243(iParam0, 1, "HEARD_PLAYER", unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 1, 1, 0);
		}
	}
	else if (iParam0->f_5 != 5 && uVar4)
	{
		if ((uVar5 && bVar6) && bVar7)
		{
			func_224(iParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar6)
		{
			func_224(iParam0, 3, 1, "DEAD_BODY", 1, 0);
		}
	}
	if (iParam0->f_34 > -1 && iParam0->f_34 < (Local_1703.f_0 - 1))
	{
		bVar8 = Local_1703[iParam0->f_34 /*32*/].f_30;
		switch (unk_0xD24D37CC275948CC(&(Local_1703[iParam0->f_34 /*32*/].f_1)))
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
				func_224(iParam0, 3, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), 0, bVar8);
				break;
			
			case -1225951737:
				func_243(iParam0, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 1, 0, bVar8);
				break;
			
			case 2074432461:
			case 686645495:
				func_246(iParam0, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), Local_578[func_96() /*8*/], 1, 0, bVar8);
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
	if (!unk_0x0C515FAB3FF9EA92(&(iParam0->f_25), &(iParam0->f_9)))
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
			switch (unk_0xD24D37CC275948CC(&(iParam0->f_9)))
			{
				case 58299323:
					if ((unk_0x9CD27B0045628463() - iParam0->f_37) > 3000)
					{
						func_224(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				
				case -1225951737:
					if (((unk_0x9CD27B0045628463() - iParam0->f_37) > 4000 && func_102(*iParam0, iParam0->f_88, 1) < 3f) && unk_0xAC29253EEF8F0180(*iParam0))
					{
						func_224(iParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					break;
				
				case -927541383:
					if ((unk_0x9CD27B0045628463() - iParam0->f_37) > 4000 && !unk_0x049E937F18F4020C(*iParam0))
					{
						func_224(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
			}
			break;
		
		case 3:
			switch (unk_0xD24D37CC275948CC(&(iParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
					if ((((unk_0x9CD27B0045628463() - iParam0->f_38) > 8000 && func_102(unk_0xD80958FC74E988A6(), Local_641, 1) > 65f) && (func_101(unk_0xD80958FC74E988A6(), *iParam0, 1) > 10f || (unk_0x9CD27B0045628463() - iParam0->f_38) > 16000)) && !unk_0x049E937F18F4020C(*iParam0))
					{
						func_224(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
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
					if (func_102(unk_0xD80958FC74E988A6(), Local_641, 1) > 300f && func_101(unk_0xD80958FC74E988A6(), *iParam0, 1) > 150f)
					{
						func_224(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					break;
			}
			break;
	}
}

int func_243(int iParam0, int iParam1, char* sParam2, struct<3> Param3, bool bParam6, int iParam7, bool bParam8)
{
	return func_225(iParam0, iParam1, sParam2, Param3, 0, bParam6, iParam7, bParam8);
}

int func_244(struct<110> Param0, bool bParam110)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_27.f_0)
	{
		if (func_245(Param0, Local_27[iVar0 /*110*/], bParam110))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_245(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, bool bParam220)
{
	if (unk_0x7239B21A38F536BA(iParam110) && unk_0xC86D67D52A707CF8(iParam110, unk_0xD80958FC74E988A6(), bParam220))
	{
		if (func_101(iParam0, iParam110, 1) < 15f)
		{
			if (unk_0x0267D00AF114F17A(iParam0, iParam110))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_246(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	return func_225(iParam0, iParam1, sParam2, 0f, 0f, 0f, iParam3, bParam4, iParam5, bParam6);
}

int func_247(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, int iParam110)
{
	if ((iParam0 != 0 && unk_0x7239B21A38F536BA(iParam0)) && !unk_0x84A2DD9AC37C35C1(iParam0))
	{
		if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), iParam110) && (unk_0x3C06B5C839B38F7B(unk_0x4F8644AF03D0E0D6(), iParam0) || unk_0x7912F7FC4F6264B6(unk_0x4F8644AF03D0E0D6(), iParam0)))
		{
			return 1;
		}
	}
	return 0;
}

int func_248(int iParam0)
{
	if (unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), iParam0) && (unk_0x2E397FD2ECD37C87(unk_0x4F8644AF03D0E0D6()) || unk_0x78CFE51896B6B8A4(unk_0x4F8644AF03D0E0D6())))
	{
		return 1;
	}
	return 0;
}

int func_249(struct<110> Param0, var uParam110, var uParam111, var uParam112)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = 0;
	while (iVar0 < Local_27.f_0)
	{
		if (func_250(Param0, Local_27[iVar0 /*110*/], &bVar2, &bVar3, &bVar4))
		{
			if (bVar2 && bVar4)
			{
				Local_27[iVar0 /*110*/].f_85 = 1;
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
			if (Local_27[iVar0 /*110*/].f_85)
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

int func_250(struct<40> Param0, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, struct<104> Param110, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, var uParam220, var uParam221, var uParam222)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x7239B21A38F536BA(Param110.f_0) && unk_0x84A2DD9AC37C35C1(Param110.f_0))
	{
		Var0 = { unk_0x3FEF770D40960D5A(Param110.f_0, false) };
		if (unk_0xF1B760881820C952(unk_0x3FEF770D40960D5A(Param0.f_0, true), Var0, true) < 10f)
		{
			if (unk_0x0267D00AF114F17A(Param0.f_0, Param110.f_0))
			{
				if ((unk_0x9CD27B0045628463() - Param110.f_103) < 3000)
				{
					*uParam220 = 1;
				}
				else
				{
					*uParam220 = 0;
				}
				if (*uParam220)
				{
					iVar3 = unk_0x93C8B64DEB84728C(Param110.f_0);
					if (unk_0x524AC5ECEA15343E(iVar3))
					{
						iVar4 = unk_0x04A2A40C73395041(iVar3);
						if ((iVar4 == unk_0xD80958FC74E988A6() && !unk_0x84A2DD9AC37C35C1(iVar4)) && Param0.f_39)
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
				iVar5 = unk_0x16FFE42AB2D2DC59(Param110.f_0);
				if (iVar5 == joaat("weapon_unarmed") || (iVar5 != joaat("weapon_unarmed") && unk_0x3BE0BB12D25FB305(iVar5) == 2))
				{
					*uParam222 = 1;
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_251(int iParam0)
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
	float fVar34;
	float fVar35;
	struct<3> Var36;
	struct<3> Var39;
	struct<4> Var42;
	
	unk_0x3A87E44BB9A01D54(unk_0xD80958FC74E988A6(), &uVar0, true);
	fVar1 = func_101(unk_0xD80958FC74E988A6(), *iParam0, 1);
	if (unk_0xDFD5033FDBA0A9C8(*iParam0))
	{
		iVar3 = 1;
	}
	if (unk_0xC86D67D52A707CF8(*iParam0, unk_0xD80958FC74E988A6(), true))
	{
		if (unk_0x131D401334815E94(*iParam0, joaat("weapon_unarmed"), 0))
		{
			iVar2 = 1;
		}
	}
	uVar20 = func_249(*iParam0, &uVar21, &bVar22, &bVar23);
	if (((iParam0->f_5 != 5 && uVar20) && uVar21) && !bVar23)
	{
		if (bVar22)
		{
			func_224(iParam0, 5, 1, "PLAYER_KILLED", 1, 0);
		}
		else
		{
			func_224(iParam0, 5, 1, "KILLED", 1, 0);
		}
	}
	else if (((((unk_0x8507BCB710FA6DC0(*iParam0, 122) || unk_0x8507BCB710FA6DC0(*iParam0, 123)) || unk_0x8507BCB710FA6DC0(*iParam0, 124)) || unk_0x8507BCB710FA6DC0(*iParam0, 22)) || unk_0x8507BCB710FA6DC0(*iParam0, 23)) || unk_0x8507BCB710FA6DC0(*iParam0, 86))
	{
		func_224(iParam0, 5, 1, "GUNSHOT", 1, 0);
	}
	else if ((iParam0->f_39 && iParam0->f_5 != 4) && func_248(4))
	{
		func_224(iParam0, 4, 1, "GUN_AIMED", 1, 0);
	}
	else if (iParam0->f_39 && func_247(*iParam0, 2))
	{
		func_224(iParam0, 5, 1, "PROJ_AIMED", 1, 0);
	}
	else if ((((iParam0->f_39 && fVar1 < 8f) && iParam0->f_5 != 4) && !unk_0x997ABD671D25CA0B(unk_0xD80958FC74E988A6(), true)) && unk_0x475768A975D5AD17(unk_0xD80958FC74E988A6(), 5))
	{
		func_224(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2567 == 7)
	{
		if (iParam0->f_39)
		{
			func_224(iParam0, 3, 1, "EXIT_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_243(iParam0, 1, "HEARD_PLAYER", unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2567 == 6)
	{
		if (iParam0->f_39)
		{
			func_224(iParam0, 3, 1, "GET_IN_VAN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_243(iParam0, 1, "HEARD_PLAYER", unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 1, 1, 0);
		}
	}
	else if ((iParam0->f_39 || iParam0->f_41) && iLocal_2567 == 10)
	{
		if (iParam0->f_39)
		{
			func_246(iParam0, 3, "STEALING_VAN", Local_578[func_48() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_246(iParam0, 1, "HEARD_VAN", Local_578[func_48() /*8*/], 1, 1, 0);
		}
	}
	else if (((iVar2 || unk_0x8507BCB710FA6DC0(*iParam0, 41)) || unk_0x8507BCB710FA6DC0(*iParam0, 112)) || func_244(*iParam0, 0))
	{
		func_224(iParam0, 3, 1, "FIGHT", 1, 0);
	}
	else if ((iVar3 || unk_0x8507BCB710FA6DC0(*iParam0, 101)) || func_244(*iParam0, 1))
	{
		func_224(iParam0, 3, 1, "RAN_OVER", 1, 0);
	}
	else if (((iParam0->f_5 != 3 && iParam0->f_84) && (iParam0->f_39 || iParam0->f_41)) && (fVar1 < 8f || func_102(unk_0xD80958FC74E988A6(), Local_641, 1) < 40f))
	{
		if (iParam0->f_39)
		{
			func_224(iParam0, 3, 1, "FIGHT_RETURN", 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_243(iParam0, 1, "HEARD_PLAYER", unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 1, 1, 0);
		}
	}
	else if (iParam0->f_5 != 5 && uVar20)
	{
		if ((uVar21 && bVar22) && bVar23)
		{
			func_224(iParam0, 3, 1, "PLAYER_KO", 1, 0);
		}
		else if (!bVar22)
		{
			func_224(iParam0, 5, 1, "DEAD_BODY", 1, 0);
		}
	}
	else if (((((((iParam0->f_39 || iParam0->f_41) && (iParam0->f_86 || iParam0->f_87)) && iLocal_2567 == 9) && !unk_0x0C515FAB3FF9EA92(&(iParam0->f_9), "SEE_VAN_LEAVING")) && !unk_0x0C515FAB3FF9EA92(&(iParam0->f_9), "SEE_VAN_LEAVING_1")) && !unk_0x0C515FAB3FF9EA92(&(iParam0->f_9), "CHECK_DRIVER")) && func_102(unk_0xD80958FC74E988A6(), Local_641, 1) < 15f)
	{
		if (iParam0->f_39)
		{
			func_246(iParam0, 1, "SEE_VAN_LEAVING", Local_578[func_96() /*8*/], 1, 1, 0);
		}
		else if (iParam0->f_41)
		{
			func_246(iParam0, 1, "HEARD_VAN", Local_578[func_96() /*8*/], 1, 1, 0);
		}
	}
	else if (iLocal_2567 != 9)
	{
		if ((iParam0->f_86 && (((iLocal_2567 == 0 || iLocal_2567 == 1) || iLocal_2567 == 4) || iParam0->f_5 == 1)) || (iParam0->f_87 && ((iLocal_2567 == 3 || iLocal_2567 == 2) || iLocal_2567 == 5)))
		{
			if ((iLocal_2567 == 5 || iLocal_2567 == 4) && unk_0xFCDFF7B72D23A1AC(*iParam0, iLocal_2570, 19))
			{
				switch (iLocal_2567)
				{
					case 5:
						StringCopy(&Var4, "WH_DITCH_VEH", 64);
						break;
					
					case 4:
						StringCopy(&Var4, "ENT_DITCH_VEH", 64);
						break;
				}
				func_224(iParam0, 2, 1, &Var4, 1, 0);
			}
			else if (iParam0->f_39)
			{
				switch (iLocal_2567)
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
				func_224(iParam0, 2, 1, &Var4, 1, 0);
			}
			else if (iParam0->f_41)
			{
				func_243(iParam0, 1, "HEARD_PLAYER", unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 1, 1, 0);
			}
		}
	}
	if (iParam0->f_34 > -1 && iParam0->f_34 < (Local_1703.f_0 - 1))
	{
		bVar24 = Local_1703[iParam0->f_34 /*32*/].f_30;
		switch (unk_0xD24D37CC275948CC(&(Local_1703[iParam0->f_34 /*32*/].f_1)))
		{
			case joaat("killed"):
			case 1518302817:
			case -1298712083:
				if (iParam0->f_5 != 4)
				{
					func_224(iParam0, 5, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case 185995093:
				if (iParam0->f_5 != 4)
				{
					func_224(iParam0, 3, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -1645534839:
				if (iParam0->f_5 != 4)
				{
					if (func_102(*iParam0, Local_1703[iParam0->f_34 /*32*/].f_23, 1) < 5f)
					{
						func_224(iParam0, 4, 1, "GUN_AIMED_AT", 0, bVar24);
					}
					else
					{
						func_224(iParam0, 5, 1, "SEEN_WEAPON", 0, bVar24);
					}
				}
				break;
			
			case 880647822:
				if (iParam0->f_5 != 4)
				{
					func_224(iParam0, 5, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case 1921975061:
				if (iParam0->f_5 != 4)
				{
					func_224(iParam0, 5, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case joaat("fight"):
			case 1681313069:
			case 1156217463:
			case -419867425:
				if (iParam0->f_5 != 4)
				{
					func_224(iParam0, 3, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case 1682434916:
			case -924218668:
			case 2056033185:
				if (((iParam0->f_5 != 4 && !unk_0x0C515FAB3FF9EA92(&(iParam0->f_9), "STEALING_VAN")) && !unk_0x0C515FAB3FF9EA92(&(iParam0->f_9), "GET_IN_VAN")) && !unk_0x0C515FAB3FF9EA92(&(iParam0->f_9), "EXIT_VAN"))
				{
					func_224(iParam0, 3, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case joaat("gunshot"):
				if (iParam0->f_5 != 4)
				{
					func_224(iParam0, 5, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -426892158:
				if (iParam0->f_86)
				{
					func_224(iParam0, 2, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -1461435341:
				if (iParam0->f_86)
				{
					func_224(iParam0, 2, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -972653884:
				if (iParam0->f_87)
				{
					func_224(iParam0, 2, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -520621538:
				if (iParam0->f_87)
				{
					func_224(iParam0, 2, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -1349994105:
				if (iParam0->f_87)
				{
					func_224(iParam0, 2, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), 0, bVar24);
				}
				break;
			
			case -1225951737:
				if (iParam0->f_87)
				{
					func_243(iParam0, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true), 1, 0, bVar24);
				}
				break;
			
			case 2074432461:
				if (iParam0->f_87)
				{
					func_246(iParam0, 1, &(Local_1703[iParam0->f_34 /*32*/].f_1), Local_578[func_96() /*8*/], 1, 0, bVar24);
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
	if (!unk_0x0C515FAB3FF9EA92(&(iParam0->f_25), &(iParam0->f_9)))
	{
		iParam0->f_33 = 1;
	}
	else
	{
		iParam0->f_33 = 0;
	}
	iParam0->f_25 = { iParam0->f_9 };
	iVar25 = 0;
	while (iVar25 < Local_27.f_0)
	{
		if (Local_27[iVar25 /*110*/] == *iParam0)
		{
			iVar26 = iVar25;
		}
		iVar25++;
	}
	switch (iParam0->f_5)
	{
		case 5:
			switch (unk_0xD24D37CC275948CC(&(iParam0->f_9)))
			{
				case joaat("gunshot"):
				case 1921975061:
				case 880647822:
				case joaat("killed"):
				case 1518302817:
				case -1298712083:
					if ((func_256(*iParam0) || (iParam0->f_48 % 2) == 0) || !func_168(Local_468.f_0))
					{
						if ((unk_0xD24D37CC275948CC(&(iParam0->f_9)) == joaat("gunshot") || unk_0xD24D37CC275948CC(&(iParam0->f_9)) == 1921975061) || unk_0xD24D37CC275948CC(&(iParam0->f_9)) == 880647822)
						{
							if (func_233(iVar26))
							{
								Var27 = { func_255(iVar26, "JS_GUN1") };
								if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_254(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_254(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
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
								if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									func_254(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_254(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
						}
						else if ((unk_0xD24D37CC275948CC(&(iParam0->f_9)) == joaat("killed") || unk_0xD24D37CC275948CC(&(iParam0->f_9)) == 1518302817) || unk_0xD24D37CC275948CC(&(iParam0->f_9)) == -1298712083)
						{
							if (func_233(iVar26))
							{
								Var27 = { func_255(iVar26, "JS_KILL") };
								if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
								{
									func_254(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 0);
								}
								else if (iParam0->f_48 == 0)
								{
									func_254(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
								}
							}
							else if (iParam0->f_48 == 0)
							{
								func_254(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					else
					{
						if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_GETSEC") };
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 1);
							}
							else if (iParam0->f_48 == 0)
							{
								func_254(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
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
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 2000, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 15f, 3000, 250, 0, 1, 1);
							}
							else if (iParam0->f_48 == 0)
							{
								func_254(iParam0, &(iParam0->f_9), "", 15f, 3000, 250, 1, 1, 1);
							}
						}
						iParam0->f_48++;
					}
					break;
			}
			break;
		
		case 4:
			switch (unk_0xD24D37CC275948CC(&(iParam0->f_9)))
			{
				case 1224761252:
					if (func_247(*iParam0, 4))
					{
						func_224(iParam0, 4, 0, "GUN_AIMED_AT", 1, 0);
					}
					else if ((unk_0x9CD27B0045628463() - iParam0->f_37) > 1000)
					{
						func_224(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					break;
				
				case -1645534839:
					if (func_247(*iParam0, 4))
					{
						func_224(iParam0, 4, 1, "GUN_AIMED_AT", 1, 0);
					}
					if (((unk_0x9CD27B0045628463() - iParam0->f_37) > 15000 || (unk_0x9CD27B0045628463() - iParam0->f_38) > 3000) && !unk_0x049E937F18F4020C(*iParam0))
					{
						func_224(iParam0, 5, 1, "SEEN_WEAPON", 1, 0);
					}
					else if (func_256(*iParam0) || iParam0->f_48 == 0)
					{
						if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_HND1") };
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
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
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
							}
						}
						iParam0->f_48++;
					}
					else
					{
						if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_HND1") };
							if (func_230(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
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
							if (func_230(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 2000, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 1, 0);
							}
							else if (iParam0->f_48 == 0)
							{
								func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 1, 0);
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
					if (func_43() && (unk_0x9CD27B0045628463() - iLocal_2518) > 5000)
					{
						switch (iLocal_2548)
						{
							case 0:
								func_230(iVar26, "JS_STOCK", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2548++;
								break;
							
							case 1:
								func_230(iVar26, "JS_STOCKb", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2548++;
								break;
							
							case 2:
								func_230(iVar26, "JS_STOCKc", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2548++;
								break;
							
							case 3:
								func_230(iVar26, "JS_STOCKd", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2548++;
								break;
							
							case 4:
								func_230(iVar26, "JS_STOCKe", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2548++;
								break;
							
							case 5:
								func_230(iVar26, "JS_STOCKf", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2548++;
								break;
							
							case 6:
								func_230(iVar26, "JS_STOCKg", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2548++;
								break;
							
							case 7:
								func_230(iVar26, "JS_STOCKh", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2548++;
								break;
							
							case 8:
								func_230(iVar26, "JS_STOCKi", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2548++;
								break;
							
							case 9:
								func_230(iVar26, "JS_STOCKj", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2548++;
								break;
							
							case 10:
								func_230(iVar26, "JS_STOCKk", iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								iLocal_2548 = 0;
								break;
							}
					}
					break;
				
				case 2:
					if (!iParam0->f_49)
					{
						if (func_230(iVar26, "SOL1_AMB1", iParam0->f_5, 0, 0, 1, 0, 1, 0, 1))
						{
							func_40(&uLocal_2352, 4, Local_27[2 /*110*/], "CONSTRUCTION1", 0, 1);
							func_40(&uLocal_2352, 3, Local_27[3 /*110*/], "CONSTRUCTION2", 0, 1);
							iParam0->f_49 = 1;
						}
					}
					break;
			}
			break;
		
		case 1:
			if (unk_0x0C515FAB3FF9EA92(&(iParam0->f_9), "SEE_VAN_LEAVING") || unk_0x0C515FAB3FF9EA92(&(iParam0->f_9), "CHECK_DRIVER"))
			{
				Var36 = { func_253(unk_0x1899F328B0E12848(unk_0xD80958FC74E988A6(), 0f, 1f, 0f) - unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) };
				Var39 = { func_253(unk_0x3FEF770D40960D5A(Local_27[iVar26 /*110*/], true) - unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true)) };
				fVar34 = func_252(Var36, Var39);
				fVar35 = unk_0x1D08B970013C34B6(fVar34);
				if ((fVar35 < 90f && fVar1 < 8f) && unk_0xD5037BA82E12416F(unk_0xD80958FC74E988A6()) < 1f)
				{
					bVar33 = true;
				}
			}
			switch (unk_0xD24D37CC275948CC(&(iParam0->f_9)))
			{
				case -414594135:
				case 1260350710:
					if (func_256(*iParam0) && unk_0x0C515FAB3FF9EA92(&(iParam0->f_9), "SEE_VAN_LEAVING"))
					{
						if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_VAN_LVE1") };
							func_230(iVar26, &Var27, iParam0->f_5, 1, 0, 1, 1000, 0, 0, 0);
						}
					}
					else if (bVar33)
					{
						func_246(iParam0, 1, "CHECK_DRIVER", Local_578[func_96() /*8*/], 0, 1, 0);
					}
					else if (func_102(unk_0xD80958FC74E988A6(), Local_641, 1) >= 20f)
					{
						if (fVar1 > 5f)
						{
							func_224(iParam0, 1, 0, "VAN_LOST", 1, 0);
						}
					}
					break;
				
				case 58299323:
					if (func_256(*iParam0))
					{
						Var27 = { func_255(iVar26, "JS_VAN_LVE2") };
						func_230(iVar26, &Var27, iParam0->f_5, 1, 0, 1, 0, 0, 0, 0);
					}
					else if ((unk_0x9CD27B0045628463() - iParam0->f_37) > 3000)
					{
						func_224(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					break;
				
				case 356486511:
					if (bVar33)
					{
						if ((unk_0x9CD27B0045628463() - iParam0->f_37) > 2000 && !unk_0x049E937F18F4020C(*iParam0))
						{
							func_224(iParam0, 3, 1, "STEALING_VAN", 1, 0);
						}
					}
					else
					{
						func_246(iParam0, 1, "SEE_VAN_LEAVING_1", Local_578[func_96() /*8*/], 0, 1, 0);
					}
					break;
				
				case -1225951737:
					if (((unk_0x9CD27B0045628463() - iParam0->f_37) > 4000 && func_102(*iParam0, iParam0->f_88, 1) < 3f) && unk_0xAC29253EEF8F0180(*iParam0))
					{
						func_224(iParam0, 1, 0, "SOUND_LOST", 1, 0);
					}
					else if (func_256(*iParam0))
					{
						if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_SND_INV") };
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 3f, 3000, 500, 0, 0, 0);
							}
						}
					}
					break;
				
				case -927541383:
					if ((unk_0x9CD27B0045628463() - iParam0->f_37) > 4000 && !unk_0x049E937F18F4020C(*iParam0))
					{
						if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_SNDLOST2") };
							func_230(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
						func_224(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					else if (func_256(*iParam0))
					{
						if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_SNDLOST1") };
							func_230(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 1000, 0, 0, 0);
						}
					}
					break;
			}
			break;
		
		case 3:
			switch (unk_0xD24D37CC275948CC(&(iParam0->f_9)))
			{
				case joaat("fight"):
				case 1681313069:
				case 1156217463:
				case -419867425:
					if ((((unk_0x9CD27B0045628463() - iParam0->f_38) > 8000 && func_102(unk_0xD80958FC74E988A6(), Local_641, 1) > 65f) && (func_101(unk_0xD80958FC74E988A6(), *iParam0, 1) > 10f || (unk_0x9CD27B0045628463() - iParam0->f_38) > 16000)) && !unk_0x049E937F18F4020C(*iParam0))
					{
						func_224(iParam0, 3, 0, "FIGHT_ESC", 1, 0);
					}
					else if (func_256(*iParam0) && iParam0->f_35)
					{
						if (!iParam0->f_84)
						{
							if (func_233(iVar26))
							{
								Var27 = { func_255(iVar26, "JS_MELE_1") };
								if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 0, 0);
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
								if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
								{
									func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 0, 0);
								}
							}
							iParam0->f_84 = 1;
						}
						else if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_MELE_2") };
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 0, 0);
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
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 0, 0);
							}
						}
					}
					break;
				
				case 1093888274:
					if ((unk_0x9CD27B0045628463() - iParam0->f_37) > 4000)
					{
						func_224(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
					}
					if (func_256(*iParam0))
					{
						if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_MELE_ESC") };
							func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
						}
					}
					break;
				
				case 1682434916:
					if (((((unk_0x9CD27B0045628463() - iParam0->f_37) > 2000 && iParam0->f_39) && !unk_0x049E937F18F4020C(*iParam0)) && iLocal_2567 != 9) && iLocal_2567 != 10)
					{
						func_224(iParam0, 3, 0, "EXIT_VAN", 1, 0);
					}
					if (func_256(*iParam0))
					{
						if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_VAN_IN2") };
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
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
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (func_43() && (unk_0x9CD27B0045628463() - iLocal_2518) > 2000)
					{
						if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_VAN_TK") };
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
						}
					}
					break;
				
				case -924218668:
					if (func_256(*iParam0))
					{
						if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_VAN_IN1") };
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
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
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					else if (func_43() && (unk_0x9CD27B0045628463() - iLocal_2518) > 2000)
					{
						if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_VAN_TK") };
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
				
				case 2056033185:
					if (func_256(*iParam0))
					{
						if (func_233(iVar26))
						{
							Var27 = { func_255(iVar26, "JS_VAN_IN2") };
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
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
							if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 0, 0, 0, 0))
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 0, 1, 0);
							}
							else
							{
								func_254(iParam0, &(iParam0->f_9), &Var27, 25f, 3000, 1000, 1, 1, 0);
							}
						}
					}
					break;
			}
			break;
		
		case 2:
			if ((unk_0x9CD27B0045628463() - iParam0->f_38) > 5000 && !unk_0x049E937F18F4020C(*iParam0))
			{
				if (iVar26 == 1)
				{
					func_230(iVar26, "JS_STOCK2", 0, 0, 0, 1, 1000, 0, 0, 0);
					iLocal_2548 = 0;
				}
				func_224(iParam0, 0, 0, "BACK_TO_WORK", 1, 0);
			}
			else
			{
				if (iParam0->f_39)
				{
					if ((unk_0x9CD27B0045628463() - iParam0->f_38) > 1000 && !unk_0x049E937F18F4020C(*iParam0))
					{
						if (((unk_0x0C515FAB3FF9EA92(&(iParam0->f_9), "ENT_FOOT") || unk_0x0C515FAB3FF9EA92(&(iParam0->f_9), "ENT_VEH")) || unk_0x0C515FAB3FF9EA92(&(iParam0->f_9), "WH_FOOT")) || unk_0x0C515FAB3FF9EA92(&(iParam0->f_9), "WH_VEH"))
						{
							Var42 = { iParam0->f_9 };
							StringConCat(&Var42, "_LEAVE", 32);
							func_224(iParam0, 2, 0, &Var42, 1, 0);
						}
					}
					if ((unk_0x0C515FAB3FF9EA92(&(iParam0->f_9), "WH_FOOT") || unk_0x0C515FAB3FF9EA92(&(iParam0->f_9), "WH_VEH")) || (unk_0x0C515FAB3FF9EA92(&(iParam0->f_9), "WH_DITCH_VEH") && !unk_0x049E937F18F4020C(*iParam0)))
					{
						if (((iParam0->f_104 >= 6 && iLocal_2518 != -1) && (unk_0x9CD27B0045628463() - iLocal_2518) > 7000) && (unk_0x9CD27B0045628463() - iParam0->f_38) == 0)
						{
							func_224(iParam0, 3, 0, "WH_FAILED_LEAVE", 1, 0);
						}
					}
				}
				switch (unk_0xD24D37CC275948CC(&(iParam0->f_9)))
				{
					case -426892158:
						if (func_256(*iParam0))
						{
							if (!iParam0->f_82)
							{
								if (func_233(iVar26))
								{
									if (!iParam0->f_83)
									{
										Var27 = { func_255(iVar26, "JS_ENT_F1") };
										func_230(iVar26, &Var27, iParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
									else
									{
										Var27 = { func_255(iVar26, "JS_ENT_F1_P") };
										func_230(iVar26, &Var27, iParam0->f_5, 1, 0, 0, 500, 0, 0, 0);
									}
								}
							}
							else if (func_233(iVar26))
							{
								if (!iParam0->f_83)
								{
									Var27 = { func_255(iVar26, "JS_ENT_F2") };
									func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
								else
								{
									Var27 = { func_255(iVar26, "JS_ENT_F2_P") };
									func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0);
								}
							}
							iParam0->f_82 = 1;
						}
						else if (func_43() && (unk_0x9CD27B0045628463() - iLocal_2518) > 5000)
						{
							if (func_233(iVar26))
							{
								if (!iParam0->f_83)
								{
									Var27 = { func_255(iVar26, "JS_ENT_F") };
									func_230(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								else
								{
									Var27 = { func_255(iVar26, "JS_ENT_F_P") };
									func_230(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
							}
						}
						break;
					
					case -1461435341:
						if (func_256(*iParam0) || iParam0->f_48 == 0)
						{
							if (!iParam0->f_82)
							{
								if (func_233(iVar26))
								{
									Var27 = { func_255(iVar26, "JS_ENT_V1") };
									if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 500, 0, 0, 0))
									{
										iParam0->f_48++;
									}
								}
								iParam0->f_82 = 1;
							}
							else if (unk_0x0C515FAB3FF9EA92(&(iParam0->f_17), "WH_VEH"))
							{
								if (func_233(iVar26))
								{
									Var27 = { func_255(iVar26, "JS_ENT_V") };
									if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
									{
										iParam0->f_48++;
									}
								}
							}
							else if (func_233(iVar26))
							{
								Var27 = { func_255(iVar26, "JS_ENT_V3") };
								if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 0, 1000, 0, 0, 0))
								{
									iParam0->f_48++;
								}
							}
						}
						else if (func_43() && (unk_0x9CD27B0045628463() - iLocal_2518) > 5000)
						{
							if (func_233(iVar26))
							{
								Var27 = { func_255(iVar26, "JS_ENT_V3") };
								func_230(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							}
						}
						break;
					
					case -972653884:
						if (func_256(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_233(iVar26))
								{
									Var27 = { func_255(iVar26, "JS_WH1") };
									if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_233(iVar26))
								{
									Var27 = { func_255(iVar26, "JS_WH2") };
									if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (func_43() && (unk_0x9CD27B0045628463() - iLocal_2518) > 5000)
							{
								if (func_233(iVar26))
								{
									if (iParam0->f_104 < 5)
									{
										Var27 = { func_255(iVar26, "JS_WH") };
									}
									else
									{
										Var27 = { func_255(iVar26, "JS_WH_F") };
									}
									if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var27, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case -640827668:
						if (func_256(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_233(iVar26))
								{
									Var27 = { func_255(iVar26, "JS_WH1") };
									if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_233(iVar26))
								{
									Var27 = { func_255(iVar26, "JS_WH2") };
									if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (func_43() && (unk_0x9CD27B0045628463() - iLocal_2518) > 5000)
							{
								if (func_233(iVar26))
								{
									if (iParam0->f_104 < 5)
									{
										if (((iParam0->f_104 - 1) % 2) == 0)
										{
											Var27 = { func_255(iVar26, "JS_ENT_V4") };
										}
										else
										{
											Var27 = { func_255(iVar26, "JS_ENT_V3") };
										}
									}
									else
									{
										Var27 = { func_255(iVar26, "JS_WH_F") };
									}
									if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var27, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case -520621538:
						if (func_256(*iParam0))
						{
							if (iParam0->f_104 == 0)
							{
								if (func_233(iVar26))
								{
									Var27 = { func_255(iVar26, "JS_WH1") };
									if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							else if (iParam0->f_104 > 0)
							{
								if (func_233(iVar26))
								{
									Var27 = { func_255(iVar26, "JS_WH2") };
									if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var27, 5f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 5f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
							iParam0->f_82 = 1;
						}
						else if (iParam0->f_104 < 6)
						{
							if (func_43() && (unk_0x9CD27B0045628463() - iLocal_2518) > 5000)
							{
								if (func_233(iVar26))
								{
									if (iParam0->f_104 < 5)
									{
										if (((iParam0->f_104 - 1) % 2) == 0)
										{
											Var27 = { func_255(iVar26, "JS_ENT_V3") };
										}
										else
										{
											Var27 = { func_255(iVar26, "JS_WH") };
										}
									}
									else
									{
										Var27 = { func_255(iVar26, "JS_WH_F") };
									}
									if (func_230(iVar26, &Var27, iParam0->f_5, 1, 1, 1, 0, 0, 0, 0))
									{
										func_254(iParam0, &(iParam0->f_9), &Var27, 10f, 3000, 500, 0, 0, 0);
									}
									else
									{
										func_254(iParam0, &(iParam0->f_9), "", 10f, 3000, 500, 1, 0, 0);
									}
									iParam0->f_104++;
								}
							}
						}
						break;
					
					case 778765338:
						if (iParam0->f_48 == 0)
						{
							if (func_43() && (unk_0x9CD27B0045628463() - iLocal_2518) > 1000)
							{
								if (func_233(iVar26))
								{
									Var27 = { func_255(iVar26, "JS_ENT_V4") };
									func_230(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
								}
								iParam0->f_48++;
							}
						}
						else if (func_43() && (unk_0x9CD27B0045628463() - iLocal_2518) > 5000)
						{
							if (((iParam0->f_48 - 1) % 3) == 0)
							{
								Var27 = { func_255(iVar26, "JS_ENT_V4") };
							}
							else
							{
								Var27 = { func_255(iVar26, "JS_ENT_V3") };
							}
							func_230(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
							iParam0->f_48++;
						}
						break;
					
					case 1580556320:
						if (iParam0->f_48 == 0)
						{
							if (func_43() && (unk_0x9CD27B0045628463() - iLocal_2518) > 1000)
							{
								if (func_233(iVar26))
								{
									if (!iParam0->f_83)
									{
										Var27 = { func_255(iVar26, "JS_ENT_F3") };
										func_230(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
									}
									else
									{
										Var27 = { func_255(iVar26, "JS_ENT_F3_P") };
										func_230(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
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
							if (func_43() && (unk_0x9CD27B0045628463() - iLocal_2518) > 1000)
							{
								if (func_233(iVar26))
								{
									Var27 = { func_255(iVar26, "JS_ENT_V5") };
									func_230(iVar26, &Var27, iParam0->f_5, 0, 0, 1, 0, 0, 0, 0);
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

float func_252(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_253(struct<3> Param0)
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

void func_254(int iParam0, char* sParam1, char* sParam2, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_27.f_0)
	{
		if (Local_27[iVar0 /*110*/] == *iParam0)
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
		func_227(&(iParam0->f_50), 0);
	}
}

struct<6> func_255(int iParam0, char* sParam1)
{
	struct<6> Var0;
	
	StringCopy(&Var0, sParam1, 24);
	if (iParam0 == 1)
	{
		StringConCat(&Var0, "b", 24);
	}
	return Var0;
}

int func_256(struct<34> Param0, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109)
{
	if (Param0.f_8 || Param0.f_33)
	{
		return 1;
	}
	return 0;
}

void func_257(int iParam0)
{
	if (unk_0x6CD5A433374D4CFB(*iParam0, unk_0xD80958FC74E988A6()))
	{
		iParam0->f_40 = unk_0x9CD27B0045628463();
		iParam0->f_39 = 1;
	}
	else if ((unk_0x9CD27B0045628463() - iParam0->f_40) > 2000 || !unk_0xD71649DB0A545AA3(*iParam0, unk_0xD80958FC74E988A6(), 90f))
	{
		iParam0->f_40 = unk_0x9CD27B0045628463();
		iParam0->f_39 = 0;
	}
	if (iParam0->f_39)
	{
		bLocal_2564 = false;
	}
	if (bLocal_2564)
	{
		unk_0xC1E8A365BF3B29F2(*iParam0, 188, true);
	}
	if (!func_258())
	{
		iParam0->f_41 = unk_0xF297383AA91DCA29(unk_0x4F8644AF03D0E0D6(), *iParam0);
		if (iParam0->f_41)
		{
			iParam0->f_43 = { unk_0x3FEF770D40960D5A(unk_0xD80958FC74E988A6(), true) };
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

int func_258()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (unk_0x7239B21A38F536BA(Local_578[iVar0 /*8*/]) && unk_0x4C241E39B23DF959(Local_578[iVar0 /*8*/], false))
		{
			if (unk_0x4319E335B71FFF34(Local_578[iVar0 /*8*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_259()
{
	struct<3> Var0;
	var uVar3;
	
	unk_0xF372BC22FCB88606("BUGSTAR", &iLocal_2519);
	unk_0xBF25EB89375A37AD(3, joaat("player"), iLocal_2519);
	unk_0xBF25EB89375A37AD(5, iLocal_2519, joaat("player"));
	unk_0xBF25EB89375A37AD(1, joaat("COP"), iLocal_2519);
	unk_0xBF25EB89375A37AD(1, iLocal_2519, joaat("COP"));
	unk_0xC12321827687FE4D(Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f), Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f), false, true);
	unk_0x46A1E1A299EC4BBA(Vector(7.27131f, -3092.467f, 138.4268f) - Vector(2.375f, 22.75f, 19.4375f), Vector(7.27131f, -3092.467f, 138.4268f) + Vector(2.375f, 22.75f, 19.4375f));
	unk_0xA56F01F3765B93A0(138.43f, -3092.47f, 4.9f, 28.375f, true, false, false, false);
	if (func_182() || func_6(0))
	{
		iLocal_654 = 0;
		if (func_182())
		{
			if (Global_84366)
			{
				iLocal_654++;
			}
		}
		if (func_182())
		{
			func_211(iLocal_654, &Var0, &uVar3);
			func_265(Var0, uVar3, 1, 0);
		}
		bLocal_653 = true;
	}
	else
	{
		while (!func_177(1))
		{
			unk_0x4EDE34FBADD967A6(0);
			func_264(&uLocal_657);
		}
	}
	func_263(&uLocal_657, "JHP1A", 0);
	func_206(&uLocal_657, "misslsdhsclipboard@base");
	func_206(&uLocal_657, "misslsdhsclipboard@idle_a");
	func_206(&uLocal_657, "misstrevor3");
	func_160(&uLocal_657, joaat("p_amb_clipboard_01"));
	func_205(&uLocal_657, iLocal_2521);
	func_207(&uLocal_657, &cLocal_644);
	unk_0xDB89EF50FF25FCE9(unk_0x4F8644AF03D0E0D6(), 0.15f);
	func_261(87);
	func_40(&uLocal_2352, 0, unk_0xD80958FC74E988A6(), "MICHAEL", 0, 1);
	func_40(&uLocal_2352, 3, 0, "LESTER", 0, 1);
	func_229(bLocal_2517);
	func_260();
	iLocal_2521 = unk_0x05B7A89BD78797FC(Local_641, "po1_08_warehouseint1");
	unk_0x9D74AE343DB65533(&cLocal_625);
	iLocal_2572 = unk_0x1B5C85C612E5256E(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, false, true, true, true);
	while (!unk_0x02245FE4BED318B8(0))
	{
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_260()
{
	Global_84367 = 1;
}

void func_261(int iParam0)
{
	Global_86044 = 0;
	switch (iParam0)
	{
		case 72:
			func_262(2);
			func_262(4);
			break;
		
		case 73:
			func_262(0);
			func_262(1);
			func_262(7);
			break;
		
		case 92:
			func_262(10);
			func_262(9);
			func_262(13);
			func_262(6);
			break;
		
		case 68:
			func_262(11);
			break;
		
		case 78:
			func_262(14);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_262(3);
			break;
		
		default:
			break;
	}
}

void func_262(int iParam0)
{
	unk_0x933D6A9EEC1BACD0(&Global_86044, iParam0);
}

int func_263(var uParam0, char* sParam1, int iParam2)
{
	if (uParam0->f_779[iParam2 /*5*/].f_1 || uParam0->f_779[iParam2 /*5*/])
	{
		if (unk_0x0C515FAB3FF9EA92(uParam0->f_779[iParam2 /*5*/].f_4, sParam1))
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
			unk_0x6009F9F1AE90D8A6(sParam1, iParam2);
		}
		else
		{
			unk_0x71A78003C8E71424(sParam1, iParam2);
		}
		uParam0->f_779[iParam2 /*5*/] = 1;
		uParam0->f_779[iParam2 /*5*/].f_3 = unk_0x9CD27B0045628463();
		uParam0->f_779[iParam2 /*5*/].f_4 = sParam1;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}

void func_264(var uParam0)
{
	func_213(uParam0);
}

void func_265(struct<3> Param0, var uParam3, int iParam4, int iParam5)
{
	if (func_182())
	{
		unk_0xAA391C728106F7AF(false);
		unk_0xE80492A9AC099A93(&(Global_89784.f_20), 2);
		unk_0x577D1284D6873711(true);
		if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0x8D32347D6D4C40A2(unk_0x4F8644AF03D0E0D6(), false, 0);
		}
		Global_89780 = { Param0 };
		Global_89783 = uParam3;
		Global_89779 = 1;
		if (iParam4 == 1)
		{
			unk_0x933D6A9EEC1BACD0(&(Global_89784.f_20), 14);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(Global_89784.f_20), 14);
		}
		if (iParam5 == 1)
		{
			unk_0x933D6A9EEC1BACD0(&(Global_89784.f_20), 24);
		}
		else
		{
			unk_0xE80492A9AC099A93(&(Global_89784.f_20), 24);
		}
		func_181(1);
	}
}

void func_266(int iParam0)
{
	struct<3> Var0;
	char[] cVar6[8];
	
	if (iParam0 == 6)
	{
		func_278();
		func_8(0);
		unk_0x706D57B0F50DA710("JHP1A_FAIL");
		unk_0x1090044AD1DA76FA();
	}
	else if (!bLocal_655)
	{
		bLocal_655 = true;
		iLocal_656 = iParam0;
		switch (iLocal_656)
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
		if (unk_0xCA042B6957743895(&cVar6))
		{
			func_276(&Var0);
		}
		else
		{
			func_267(&Var0, &cVar6);
		}
		unk_0x706D57B0F50DA710("JHP1A_FAIL");
	}
}

void func_267(char* sParam0, char* sParam1)
{
	func_275(sParam0, sParam1);
	func_268(0);
}

void func_268(int iParam0)
{
	int iVar0;
	
	if (Global_97173.f_7311 || func_6(0))
	{
		iVar0 = func_4();
		if (!func_269(iVar0))
		{
			return;
		}
		unk_0x933D6A9EEC1BACD0(&(Global_80941[iVar0 /*5*/].f_1), 5);
		Global_89820 = iParam0;
	}
}

int func_269(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_274();
	if (unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		unk_0xBF9BD71691857E48(5000);
	}
	iVar0 = Global_80941[iParam0 /*5*/];
	iVar1 = Global_68336.f_109[iVar0 /*4*/];
	func_273(iVar1, 1);
	unk_0xC9A763D8FE87436A(unk_0x4F8644AF03D0E0D6());
	unk_0xD6A953C6D1492057(unk_0x4F8644AF03D0E0D6());
	func_270(&(Global_97173.f_1729.f_539), iVar1);
	if (Global_84364 == Global_89821)
	{
		Global_97173.f_7311.f_325[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xA921AA820C25702F(Global_80977[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
		{
			unk_0xDA66D2796BA33F12(false);
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
	if (unk_0xA921AA820C25702F(Global_80941[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xA921AA820C25702F(Global_80941[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_270(var uParam0, int iParam1)
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
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xA921AA820C25702F(Global_97173.f_7311.f_99.f_214[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar5 = 0f;
			if (!func_272(Global_97173.f_16754[iVar0], &Var2, &fVar5))
			{
				Global_97173.f_16754[iVar0] = 318;
				func_271(&(uParam0->f_1524[iVar0]));
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

void func_271(var uParam0)
{
	*uParam0 = -15;
}

int func_272(int iParam0, var uParam1, float fParam2)
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
			return func_272(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_272(8, uParam1, fParam2);
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

void func_273(int iParam0, bool bParam1)
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

void func_274()
{
	Global_89819 = 1;
	if (unk_0x388A47C51ABDAC8E(unk_0x4F8644AF03D0E0D6(), true))
	{
		if (unk_0xCA042B6957743895(&Global_68299))
		{
			switch (func_155())
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
	else if (!unk_0x5E9564D8246B909A(unk_0x4F8644AF03D0E0D6()))
	{
		if (unk_0xCA042B6957743895(&Global_68299))
		{
			switch (func_155())
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

void func_275(char* sParam0, char* sParam1)
{
	if (!unk_0xCA042B6957743895(sParam0))
	{
		if (unk_0xF030907CCBB8A9FD(sParam0) <= 16)
		{
			if (unk_0xF030907CCBB8A9FD(sParam1) <= 16)
			{
				StringCopy(&Global_68299, sParam0, 16);
				StringCopy(&Global_68303, sParam1, 16);
			}
		}
	}
}

void func_276(char* sParam0)
{
	func_277(sParam0);
	func_268(0);
}

void func_277(char* sParam0)
{
	if (!unk_0xCA042B6957743895(sParam0))
	{
		if (unk_0xF030907CCBB8A9FD(sParam0) <= 16)
		{
			StringCopy(&Global_68299, sParam0, 16);
			StringCopy(&Global_68303, "", 16);
			if (unk_0x1897CA71995A90B4())
			{
				unk_0x071A5197D6AFC8B3();
			}
		}
	}
}

void func_278()
{
	int iVar0;
	
	if (unk_0xE6CC9F3BA0FB9EF1("buddyDeathResponse"))
	{
		unk_0xE81651AD79516E48("buddyDeathResponse", 1424);
	}
	if (Global_97173.f_7311 || func_6(0))
	{
		if (!func_279())
		{
			iVar0 = func_4();
			if (iVar0 != -1)
			{
				if (!func_269(iVar0))
				{
					return;
				}
				unk_0x933D6A9EEC1BACD0(&(Global_80941[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_274();
		}
	}
}

int func_279()
{
	if (((Global_89784 == 13 || Global_89784 == 10) || Global_89784 == 11) || Global_89784 == 12)
	{
		return 0;
	}
	return 1;
}

