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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
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
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1000;
	var uLocal_55 = 1000;
	var uLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	struct<3> Local_83 = { 0, 0, 0 } ;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	bool bLocal_94 = 0;
	float fLocal_95 = 0f;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 1132396544;
	var uLocal_101 = 1132396544;
	var uLocal_102 = 1132396544;
	var uLocal_103 = 0;
	var uLocal_104 = -1082130432;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 8;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = -1;
	var uLocal_165 = 1092616192;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	int iLocal_168 = 0;
	struct<21> Local_169 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_190[15];
	int iLocal_341 = 0;
	float fLocal_342 = 0f;
	struct<2> Local_343 = { 0, 16 } ;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	struct<3> Local_409[1];
	int iLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417[3] = { 0, 0, 0 };
	int iLocal_421 = 0;
	var uLocal_422 = 0;
	struct<418> Local_423 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_841 = -1;
	var uLocal_842 = -1;
	var uLocal_843 = -1;
	var uLocal_844 = -1;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	struct<32> Local_853 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_885 = 0;
	int iLocal_886 = 0;
	int iLocal_887 = 0;
	int iLocal_888 = 0;
	int iLocal_889 = 0;
	int iLocal_890 = 0;
	int iLocal_891 = 0;
	int iLocal_892 = 0;
	int iLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	int iLocal_896 = 0;
	int iLocal_897 = 0;
	var uLocal_898 = 0;
	int iLocal_899 = 0;
	int iLocal_900 = 0;
	bool bLocal_901 = 0;
	int iLocal_902 = 0;
	int iLocal_903 = 0;
	int iLocal_904 = 0;
	int iLocal_905 = 0;
	int iLocal_906 = 0;
	int iLocal_907 = 0;
	bool bLocal_908 = 0;
	int iLocal_909 = 0;
	int iLocal_910 = 0;
	int iLocal_911 = 0;
	int iLocal_912 = 0;
	int iLocal_913 = 0;
	int iLocal_914 = 0;
	int iLocal_915 = 0;
	struct<3> Local_916 = { 0, 0, 0 } ;
	struct<3> Local_919 = { 0, 0, 0 } ;
	struct<3> Local_922 = { 0, 0, 0 } ;
	struct<3> Local_925 = { 0, 0, 0 } ;
	struct<3> Local_928 = { 0, 0, 0 } ;
	struct<3> Local_931 = { 0, 0, 0 } ;
	struct<3> Local_934 = { 0, 0, 0 } ;
	struct<3> Local_937 = { 0, 0, 0 } ;
	struct<3> Local_940 = { 0, 0, 0 } ;
	struct<3> Local_943 = { 0, 0, 0 } ;
	struct<3> Local_946 = { 0, 0, 0 } ;
	struct<3> Local_949 = { 0, 0, 0 } ;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	struct<3> Local_955 = { 0, 0, 0 } ;
	struct<3> Local_958 = { 0, 0, 0 } ;
	struct<3> Local_961 = { 0, 0, 0 } ;
	struct<3> Local_964 = { 0, 0, 0 } ;
	struct<3> Local_967 = { 0, 0, 0 } ;
	float fLocal_970 = 0f;
	float fLocal_971 = 0f;
	float fLocal_972 = 0f;
	float fLocal_973 = 0f;
	float fLocal_974 = 0f;
	int iLocal_975 = 0;
	char cLocal_976[16] = "";
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	char cLocal_980[64] = "";
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	char cLocal_996[64] = "";
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	char cLocal_1012[64] = "";
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	char cLocal_1028[64] = "";
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	struct<3> Local_1044 = { 0, 0, 0 } ;
	struct<3> Local_1047 = { 0, 0, 0 } ;
	float fLocal_1050 = 0f;
	bool bLocal_1051 = 0;
	struct<28> Local_1052 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 5;
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
	int iLocal_1123 = 0;
	int iLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 1097859072;
	var uLocal_1128 = 1500;
	var uLocal_1129 = 45;
	var uLocal_1130 = 1103626240;
	var uLocal_1131 = 5;
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
	int iLocal_1142 = 0;
	int iLocal_1143 = 0;
	int iLocal_1144 = 0;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	uLocal_77 = unk_0x41A93ECFFBBAC499();
	uLocal_78 = unk_0xEF74E92BF5AB1FC4();
	Local_83 = { 500f, 500f, 500f };
	iLocal_886 = joaat("a_f_y_genhot_01");
	iLocal_887 = joaat("a_f_y_bevhills_01");
	iLocal_888 = joaat("ambulance");
	iLocal_889 = joaat("bison");
	iLocal_896 = 1;
	iLocal_897 = 1000;
	Local_916 = { 1358.822f, -1547.396f, 53.7793f };
	Local_919 = { 1358.822f, -1547.396f, 53.7793f };
	Local_922 = { -694.2758f, -1119.447f, 13.525f };
	Local_925 = { -683.1272f, -1102.185f, 13.5257f };
	Local_928 = { 410.2629f, -1399.16f, 28.4017f };
	Local_931 = { 371.3834f, -1482.955f, 28.3418f };
	Local_934 = { 404.8026f, -1416.294f, 28.435f };
	Local_937 = { 406.612f, -1419.937f, 29.00375f };
	Local_940 = { -682.5392f, -1109.082f, 13.6729f };
	Local_943 = { -688.6727f, -1117.512f, 13.52498f };
	Local_946 = { -667.136f, -1046.06f, 15.9174f };
	Local_949 = { -703.1228f, -1142.432f, 9.8127f };
	Local_955 = { -701.2533f, -1080.285f, 12.2884f };
	Local_958 = { -687.8794f, -1108.073f, 13.5257f };
	Local_961 = { -703.0013f, -1084.073f, 12.1105f };
	fLocal_970 = 25.0227f;
	fLocal_971 = 226.3085f;
	fLocal_972 = -128.2329f;
	fLocal_973 = 238.4969f;
	fLocal_974 = 212.7682f;
	StringCopy(&cLocal_976, "taxi_oj_fc_2", 16);
	StringCopy(&cLocal_980, "amb@world_human_hang_out_street@male_c@idle_a", 64);
	StringCopy(&cLocal_996, "amb@world_human_hang_out_street@male_c@exit", 64);
	StringCopy(&cLocal_1012, "amb@world_human_hang_out_street@female_hold_arm@idle_a", 64);
	StringCopy(&cLocal_1028, "amb@world_human_hang_out_street@female_hold_arm@exit", 64);
	Local_1044 = { -727.111f, -1046.357f, 11.43926f };
	Local_1047 = { -642.6097f, -1085.538f, 28.42921f };
	fLocal_1050 = 76.75f;
	iLocal_1123 = 786468;
	iLocal_1124 = 1;
	if (unk_0x89522B8E487D4EF9(67))
	{
		func_437(2);
		func_433();
	}
	unk_0x3F95CDEE236B6AD7(1);
	func_419();
	while (true)
	{
		if (unk_0xD51CFE69539DB6D8(Local_423.f_2))
		{
			func_8();
		}
		else
		{
			func_1(&Local_423);
		}
		unk_0x4EDE34FBADD967A6(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_2 = unk_0xE7869D5D7816A9B6();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(unk_0xE7869D5D7816A9B6());
	if (iVar1 == 0)
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	else if (iVar1 == 2)
	{
		iVar0 = joaat("sp2_dist_driving_car");
	}
	else if (iVar1 == 1)
	{
		iVar0 = joaat("sp1_dist_driving_car");
	}
	else
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	return iVar0;
}

int func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		iVar1 = unk_0x1B2DC87EFB36DF80(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_4(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_4(int iParam0)
{
	if (func_5(iParam0))
	{
		return Global_99155.f_32499[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_5(int iParam0)
{
	return iParam0 < 3;
}

void func_6(var uParam0)
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_3(unk_0xE7869D5D7816A9B6());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, unk_0xE7869D5D7816A9B6(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, unk_0xE7869D5D7816A9B6(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, unk_0xE7869D5D7816A9B6(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, unk_0xE7869D5D7816A9B6(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_7(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_7(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_8()
{
	if (func_418(&Local_423))
	{
		func_417(&Local_423);
		if (unk_0xD11595488376CB53(Local_853.f_4))
		{
			unk_0x5B62CAB9B0D6ABF1(&(Local_853.f_4));
		}
		if (func_416(&Local_423, 0))
		{
			func_414();
		}
	}
	else
	{
		func_413(&Local_423);
		if (Local_423.f_410 < 28)
		{
			func_379(&Local_423, &uLocal_1125);
			func_378(&Local_423);
			func_377(&Local_423, &uLocal_898, 0);
		}
		if (Local_423.f_410 > 2)
		{
			if (!func_376(&Local_423))
			{
				func_345();
			}
			else
			{
				func_336(&Local_423, "Taxi Not Driveable", func_344(&Local_423));
			}
		}
		if (Local_423.f_410 >= 21 && !iLocal_905)
		{
			func_324();
		}
		if (iLocal_907)
		{
			unk_0x6423C366AD1DAA00(0.8f);
		}
		if (Local_423.f_410 == 9 || Local_423.f_410 == 17)
		{
			func_300(&Local_423, 0, 0);
		}
		switch (Local_423.f_410)
		{
			case 0:
				func_297();
				func_296(&Local_423, 16, 4f, 0);
				func_294(&Local_423, Local_916, Local_919, "TaxiKeyla", iLocal_886, 41.1334f, 15f);
				func_293(&Local_423);
				func_292(&Local_423, 1);
				break;
			
			case 1:
				if (func_290())
				{
					func_289();
					func_269();
					func_268(&(Local_409[0 /*3*/]), "TAXI_SC_BN_04", 100);
					func_267(&Local_423, &Local_409);
					func_266(&Local_423);
					unk_0xBDF0A810DD6A47D3(Local_928, Local_931, 0, 1);
					Local_423.f_14 = { Local_916 };
					func_292(&Local_423, 3);
				}
				break;
			
			case 3:
				if (func_261(&Local_423, 1))
				{
					if (!unk_0x76B2D234F1895632(Local_423.f_3))
					{
						unk_0x497AFDFE79EEFE4F(Local_423.f_3, 0, 0, 1, 0);
						unk_0x497AFDFE79EEFE4F(Local_423.f_3, 2, 1, 2, 0);
						unk_0x497AFDFE79EEFE4F(Local_423.f_3, 3, 0, 2, 0);
						unk_0x497AFDFE79EEFE4F(Local_423.f_3, 4, 1, 3, 0);
						unk_0x497AFDFE79EEFE4F(Local_423.f_3, 8, 1, 0, 0);
					}
					func_260(&Local_423, 1, 0);
					unk_0x103FCC2BD24292A3("TAXI_Escapee", &(Local_853.f_30));
					unk_0xA9CA101B50B90993(255, Local_853.f_30, Local_423.f_413);
					unk_0xA9CA101B50B90993(255, Local_853.f_30, joaat("player"));
					unk_0x39895086D78BEA60(1346.9f, -1606.52f, 31.16f, 1457.25f, -1508.19f, 83.05f, 0, 1);
					func_292(&Local_423, 5);
				}
				break;
			
			case 5:
				if (func_241(&Local_423, 0, 1109393408))
				{
					func_240();
					func_292(&Local_423, 6);
				}
				break;
			
			case 6:
				if (func_239(&Local_423))
				{
					func_235(&Local_423, 9, 1, 0, 0);
					func_234(&Local_423);
					Local_423.f_17 = { 485.2039f, -1418.064f, 28.2112f };
					func_233();
					func_232(392.8545f, -1379.577f, 29.2837f, 0, 50f);
					func_292(&Local_423, 17);
				}
				if (unk_0xC45A34912542C4EB(Local_423.f_4, 0))
				{
					if (!unk_0x8AF655CC5761C7A2(Local_423.f_2, Local_423.f_4, 0))
					{
						func_230(&Local_423);
						func_292(&Local_423, 5);
					}
				}
				break;
			
			case 17:
				func_229(&Local_423, &(Local_423.f_9));
				if (!unk_0xD51CFE69539DB6D8(Local_853.f_3))
				{
					if (func_228())
					{
						func_227(&Local_853, Local_937, fLocal_972);
					}
				}
				else
				{
					func_226(&Local_423, &Local_853);
				}
				if (func_200(&Local_423, 9f, 1097859072, 1117782016))
				{
					if (unk_0x2C9421ABC44104B7(Local_423.f_9))
					{
						unk_0x1AD7485666C5160C(Local_423.f_9, 0);
					}
					unk_0x5B62CAB9B0D6ABF1(&(Local_423.f_9));
					func_292(&Local_423, 19);
				}
				break;
			
			case 19:
				if (func_193())
				{
					if (!func_192())
					{
						func_235(&Local_423, 139, 1, 0, 0);
						iLocal_907 = 1;
						func_292(&Local_423, 9);
					}
				}
				break;
			
			case 9:
				func_226(&Local_423, &Local_853);
				func_191();
				if (func_190(Local_853.f_2, Local_853.f_3))
				{
					func_189(&Local_423, 2, 0);
					unk_0x4ECE628F133B6FC9(Local_853.f_2, 1);
					unk_0x7E3DC7ED30B648F0(Local_853.f_2, 6, 1);
					unk_0x7E3DC7ED30B648F0(Local_853.f_2, 17, 1);
					func_260(&Local_423, 1, 0);
					Local_853.f_5 = unk_0x8219941CC4732B36(Local_853.f_3);
					Local_853.f_15 = unk_0xF4E8009A18C52112(Local_853.f_3);
					Local_853.f_16 = unk_0x28E83575387AA2B1(Local_853.f_3);
					func_296(&Local_423, 13, 0f, 0);
					func_296(&Local_423, 20, 0f, 0);
					unk_0xA30D54731C0AAECF(Local_946, Local_949);
					uLocal_894 = unk_0x8668A841B325FF16(Local_946, Local_949, 0, 1, 1, 1);
					unk_0x1B8E0930AB96444B(0);
					func_292(&Local_423, 13);
				}
				break;
			
			case 13:
				func_191();
				func_226(&Local_423, &Local_853);
				func_229(&Local_423, &(Local_853.f_4));
				if (func_188(&Local_423))
				{
					if (func_187(Local_853.f_2, Local_853.f_4))
					{
						func_235(&Local_423, 51, 1, 0, 0);
						func_292(&Local_423, 25);
					}
					func_183(&Local_423);
					func_180(Local_853.f_3, 291.0313f, -1476.446f, 28.2945f, 15f, &Local_1052, 2);
					if (func_148())
					{
						if (unk_0x10AB6CE405F2016C(Local_853.f_3))
						{
							unk_0x6035B71FBC2881EC(Local_853.f_3);
							unk_0xFC8E26A6FE4C2E54(0, "taxi_oj_fc3");
						}
						func_146(&uLocal_45, 0, 0);
						func_145();
						func_292(&Local_423, 20);
					}
				}
				break;
			
			case 20:
				if (func_144())
				{
					if (func_123())
					{
						func_292(&Local_423, 14);
					}
				}
				break;
			
			case 14:
				func_122(&Local_423, &(Local_423.f_43));
				if (unk_0xC45A34912542C4EB(Local_853.f_3, 0))
				{
					if ((unk_0x3761EA7F8628B81A(Local_853.f_3, Local_922, 20f, 20f, 60f, true, 1, 0) && unk_0xD4F0FC8FFEDE152B(Local_853.f_3) < 5f) || Local_853.f_31 > 2)
					{
						if (!unk_0x76B2D234F1895632(iLocal_890))
						{
							unk_0xFA2C5C2D054C888E(iLocal_890);
							unk_0x88A973CE47FBEF95(iLocal_890, Local_943, 1, 0, 0, 1);
						}
						func_235(&Local_423, 37, 1, 0, 0);
						func_292(&Local_423, 21);
					}
				}
				break;
			
			case 21:
				func_122(&Local_423, &(Local_423.f_43));
				func_121(&Local_423, Local_853.f_2, 1, 1);
				func_121(&Local_423, iLocal_890, 0, 0);
				func_229(&Local_423, &(Local_423.f_9));
				if (unk_0xD11595488376CB53(Local_853.f_4))
				{
					unk_0x5B62CAB9B0D6ABF1(&(Local_853.f_4));
					Local_423.f_17 = { Local_925 };
				}
				else if (!unk_0xD11595488376CB53(Local_423.f_9))
				{
					Local_423.f_9 = func_119(Local_423.f_17, 1);
				}
				if (unk_0xC45A34912542C4EB(Local_423.f_4, 0))
				{
					if (unk_0x8AF655CC5761C7A2(Local_423.f_2, Local_423.f_4, 0))
					{
						if (unk_0x3761EA7F8628B81A(Local_423.f_4, -684.526f, -1105.76f, 13.52571f, 1f, 1f, 2f, !Local_423.f_140, 1, 0))
						{
						}
						if (unk_0x22E902D6AF27E232(Local_423.f_4, -685.0081f, -1101.297f, 13.527f, -678.677f, -1110.64f, 15.5871f, 2.25f, 0, 1, 0) || unk_0x22E902D6AF27E232(Local_423.f_4, -704.1705f, -1115.226f, 13.525f, -700.2585f, -1121.292f, 15.4336f, 2.25f, 0, 1, 0))
						{
							if (unk_0x22E902D6AF27E232(Local_423.f_4, -685.0081f, -1101.297f, 13.527f, -678.677f, -1110.64f, 15.5871f, 2.25f, 0, 1, 0))
							{
								iLocal_413 = 0;
							}
							else
							{
								iLocal_413 = 1;
							}
							Local_423.f_35 = 60f;
							Local_423.f_417 = 143;
							Local_423.f_416 = 143;
							iLocal_907 = 0;
							func_292(&Local_423, 22);
						}
					}
				}
				break;
			
			case 22:
				func_121(&Local_423, Local_853.f_2, 0, 1);
				func_121(&Local_423, iLocal_890, 0, 0);
				if (!unk_0xAF437D7C802AB246(Local_423.f_3))
				{
					if (unk_0xC45A34912542C4EB(Local_423.f_4, 0))
					{
						if (Local_853.f_31 != 6)
						{
							if (func_116(&Local_423, 1, 3f))
							{
								iLocal_906 = 1;
								unk_0x5B62CAB9B0D6ABF1(&(Local_423.f_9));
								func_292(&Local_423, 27);
							}
						}
						else
						{
							if (!unk_0xD11595488376CB53(Local_423.f_9))
							{
								Local_423.f_9 = func_119(Local_423.f_17, 1);
							}
							if (func_200(&Local_423, 8f, 1097859072, 1117782016) || func_116(&Local_423, 1, 1084227584))
							{
								unk_0x5B62CAB9B0D6ABF1(&(Local_423.f_9));
								func_292(&Local_423, 27);
							}
						}
					}
				}
				break;
			
			case 25:
				func_121(&Local_423, Local_853.f_2, 0, 1);
				func_121(&Local_423, iLocal_890, 0, 0);
				if (unk_0x44B59DB1458EE8E0(unk_0xBFAE5F9DEC53DAE2()) < 1)
				{
					func_235(&Local_423, 37, 1, 0, 0);
					func_292(&Local_423, 27);
				}
				break;
			
			case 27:
				func_121(&Local_423, Local_853.f_2, 0, 1);
				func_121(&Local_423, iLocal_890, 0, 0);
				if (!unk_0xAF437D7C802AB246(Local_423.f_3))
				{
					if (unk_0xD11595488376CB53(Local_853.f_4))
					{
						unk_0x5B62CAB9B0D6ABF1(&(Local_853.f_4));
					}
					unk_0x621ABFDE5A901516("TAXI_OBJ_DRIVE");
					if (Local_853.f_9 > 2)
					{
						Local_423.f_56 = -10;
					}
					else if (Local_853.f_9 == 0)
					{
						Local_423.f_56 = 7;
						func_115(&Local_423, 0);
					}
					else
					{
						Local_423.f_56 = 4;
					}
					func_113(&Local_423);
					func_109(&Local_423);
					func_108(&Local_423);
					func_292(&Local_423, 29);
				}
				break;
			
			case 29:
				unk_0x621ABFDE5A901516("TAXI_OBJ_DRIVE");
				if (func_79(&Local_423, &uLocal_1132))
				{
					func_53(&Local_423);
					func_292(&Local_423, 28);
				}
				break;
			
			case 28:
				if (iLocal_905 || iLocal_904)
				{
					func_292(&Local_423, 30);
				}
				break;
			
			case 30:
				unk_0x621ABFDE5A901516("TAXI_OBJ_DRIVE");
				if ((!unk_0xAF437D7C802AB246(Local_423.f_3) && unk_0x915685CA559C211B(iLocal_890, Local_423.f_3, 1)) && unk_0x915685CA559C211B(Local_853.f_2, Local_423.f_3, 1))
				{
					if (iLocal_910 || unk_0x83666F9FB8FEBD4B() > 20000)
					{
						func_50(1, &Local_423, 1);
						func_433();
					}
					else
					{
						iLocal_421 = unk_0x11EF3EB1EF47F297(Local_940, 10f, joaat("ambulance"), 0);
						if (unk_0xC45A34912542C4EB(iLocal_421, 0))
						{
							iLocal_910 = 1;
						}
						iLocal_891 = unk_0x421E6299B34E6001(Local_940, 5f, 5f, 5f, -1);
						if (!unk_0xAF437D7C802AB246(iLocal_891))
						{
							iLocal_910 = 1;
						}
						if (!iLocal_911)
						{
							if (unk_0xB966431F1A283F6B(5, Local_940, 1, 0f, &uLocal_895))
							{
								unk_0xC1B1E9A034A63A62(0);
								iLocal_911 = 1;
							}
						}
					}
				}
				if (func_48(Local_940, 1) > 100f || func_46(Local_423.f_3, unk_0xE7869D5D7816A9B6()) > 100f)
				{
					func_50(1, &Local_423, 1);
					func_433();
				}
				else if ((unk_0xAF437D7C802AB246(Local_423.f_3) || unk_0x915685CA559C211B(iLocal_890, unk_0xE7869D5D7816A9B6(), 1)) || unk_0x915685CA559C211B(Local_853.f_2, unk_0xE7869D5D7816A9B6(), 1))
				{
					if (!unk_0xAF437D7C802AB246(Local_423.f_3))
					{
						unk_0x9BEE7E791BC4D38B(Local_423.f_3, 1);
						unk_0xFA2C5C2D054C888E(Local_423.f_3);
						unk_0x33A90AD8FA327B72(&uLocal_414);
						unk_0x94026C1D1DB14225(&uLocal_414);
						unk_0xC2EA5B4B2052D2F1(0, 2000);
						unk_0x29F2993666F68F46(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0x911ECBCE73F8EC3F(uLocal_414);
						unk_0xC2C4A3A9FF2FBFFF(Local_423.f_3, uLocal_414);
						unk_0x33A90AD8FA327B72(&uLocal_414);
						unk_0x8D6671D78D1F569B(Local_423.f_3, 1);
					}
					if (!unk_0xAF437D7C802AB246(iLocal_890))
					{
						unk_0x9BEE7E791BC4D38B(iLocal_890, 1);
						unk_0xFA2C5C2D054C888E(iLocal_890);
						unk_0x33A90AD8FA327B72(&uLocal_414);
						unk_0x94026C1D1DB14225(&uLocal_414);
						unk_0xC2EA5B4B2052D2F1(0, 1000);
						unk_0x29F2993666F68F46(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0x911ECBCE73F8EC3F(uLocal_414);
						unk_0xC2C4A3A9FF2FBFFF(iLocal_890, uLocal_414);
						unk_0x33A90AD8FA327B72(&uLocal_414);
						unk_0x8D6671D78D1F569B(iLocal_890, 1);
					}
					if (!unk_0xAF437D7C802AB246(Local_853.f_2))
					{
						unk_0x9BEE7E791BC4D38B(Local_853.f_2, 1);
						unk_0x33A90AD8FA327B72(&uLocal_414);
						unk_0x94026C1D1DB14225(&uLocal_414);
						if (bLocal_908)
						{
							unk_0xDCF460AE46C9489C(0, "MOVE_DUCK_FOR_COVER", "exit", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
						}
						unk_0x39FD98334BDB065B(0, 500);
						unk_0x29F2993666F68F46(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0x911ECBCE73F8EC3F(uLocal_414);
						unk_0xC2C4A3A9FF2FBFFF(Local_853.f_2, uLocal_414);
						unk_0x33A90AD8FA327B72(&uLocal_414);
						unk_0x8D6671D78D1F569B(Local_853.f_2, 1);
					}
					func_50(1, &Local_423, 1);
					func_433();
				}
				else if ((iLocal_904 && !func_192()) && (unk_0x9D40BBF80D8F5E8A() - iLocal_900) > 500)
				{
					if (!unk_0xAF437D7C802AB246(Local_423.f_3))
					{
						unk_0x9BEE7E791BC4D38B(Local_423.f_3, 1);
						unk_0xFA2C5C2D054C888E(Local_423.f_3);
						unk_0x33A90AD8FA327B72(&uLocal_414);
						unk_0x94026C1D1DB14225(&uLocal_414);
						unk_0x56421AD67F716D1C(0, unk_0xE7869D5D7816A9B6(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
						unk_0x911ECBCE73F8EC3F(uLocal_414);
						unk_0xC2C4A3A9FF2FBFFF(Local_423.f_3, uLocal_414);
						unk_0x33A90AD8FA327B72(&uLocal_414);
						unk_0x8D6671D78D1F569B(Local_423.f_3, 1);
					}
					if (!unk_0xAF437D7C802AB246(iLocal_890))
					{
						unk_0x9BEE7E791BC4D38B(iLocal_890, 1);
						unk_0xFA2C5C2D054C888E(iLocal_890);
						unk_0x33A90AD8FA327B72(&uLocal_414);
						unk_0x94026C1D1DB14225(&uLocal_414);
						unk_0xC2EA5B4B2052D2F1(0, 1000);
						unk_0x29F2993666F68F46(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0x911ECBCE73F8EC3F(uLocal_414);
						unk_0xC2C4A3A9FF2FBFFF(iLocal_890, uLocal_414);
						unk_0x33A90AD8FA327B72(&uLocal_414);
						unk_0x8D6671D78D1F569B(iLocal_890, 1);
					}
					if (!unk_0xAF437D7C802AB246(Local_853.f_2))
					{
						unk_0x9BEE7E791BC4D38B(Local_853.f_2, 1);
						unk_0xFA2C5C2D054C888E(Local_853.f_2);
						unk_0x33A90AD8FA327B72(&uLocal_414);
						unk_0x94026C1D1DB14225(&uLocal_414);
						unk_0x39FD98334BDB065B(0, 500);
						unk_0x29F2993666F68F46(0, Local_423.f_17, 1000f, -1, 0, 0);
						unk_0x911ECBCE73F8EC3F(uLocal_414);
						unk_0xC2C4A3A9FF2FBFFF(Local_853.f_2, uLocal_414);
						unk_0x33A90AD8FA327B72(&uLocal_414);
						unk_0x8D6671D78D1F569B(Local_853.f_2, 1);
					}
					func_9(&Local_423, 1);
					func_433();
				}
				break;
			}
	}
}

void func_9(var uParam0, bool bParam1)
{
	func_417(uParam0);
	if (func_192())
	{
		func_44();
	}
	func_42();
	unk_0x00400F14096FE01D();
	unk_0x1D208E4A4E1D4FFE(1);
	func_39(0);
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		unk_0x8100F8AA27EE924B(uParam0->f_4, 0);
		unk_0xFA1A9835C7DE4F2A(uParam0->f_4);
		unk_0x814812A00D591F4F(uParam0->f_4);
	}
	func_35(uParam0->f_14, 1);
	func_232(uParam0->f_14, 1, 1114636288);
	func_34(&(uParam0->f_244), 3);
	unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 32, 1);
	if (func_31())
	{
		unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
	}
	unk_0xD60DE78AB9B18914(1);
	func_22(0, 1, 1, 0);
	unk_0xA8010B7497A9230B(1);
	unk_0xE242D0D27B122FAC(1);
	if (unk_0xCF686B56FD5328B5(*uParam0))
	{
		unk_0x74FF6D08DE291367(*uParam0, 0);
		unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
		unk_0x1B8E0930AB96444B(1);
	}
	if (func_21(Global_99155.f_17711, 4))
	{
		func_19(&(Global_99155.f_17711), 4);
		unk_0x7E38E815EF844C74(func_18(), 0);
	}
	if (bParam1)
	{
		func_17(uParam0);
	}
	func_16(uParam0);
	unk_0x8B10CC9832827D27("gestures@m@standing@casual");
	unk_0x8B10CC9832827D27("oddjobs@taxi@");
	unk_0x8B10CC9832827D27("oddjobs@towingcome_here");
	if (unk_0xC8FFCE1611C4F73B())
	{
		func_14(uParam0->f_411);
	}
	if (!unk_0x4844BC1882594FDB(unk_0xBFAE5F9DEC53DAE2()))
	{
		unk_0x8FE59DE2329CBE64(unk_0xBFAE5F9DEC53DAE2(), 1, 0);
	}
	unk_0x2A788D80D436EF63(unk_0xF2DB717A73826179((func_10(&uLocal_90) * 1000f)), 12, 0);
}

float func_10(var uParam0)
{
	if (func_13(uParam0))
	{
		if (func_12(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_11(unk_0xB519E5386FBF69E5(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_11(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		return (unk_0xBBDA792448DB5A89(unk_0x9D40BBF80D8F5E8A()) / 1000f);
	}
	if (unk_0x00AAD79B42B3E036())
	{
		iVar0 = unk_0xC7F926248AF8587B();
		return (unk_0xBBDA792448DB5A89(iVar0) / 1000f);
	}
	return (unk_0xBBDA792448DB5A89(unk_0x9D40BBF80D8F5E8A()) / 1000f);
}

bool func_12(var uParam0)
{
	return unk_0xB519E5386FBF69E5(*uParam0, 2);
}

bool func_13(var uParam0)
{
	return unk_0xB519E5386FBF69E5(*uParam0, 1);
}

void func_14(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_15(iParam0)}, 6);
		if (!unk_0x356491C12DAD1A37(&uVar0))
		{
		}
	}
}

struct<8> func_15(int iParam0)
{
	struct<8> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		
		case 4:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		
		case 6:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		
		case 7:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		
		case 8:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		
		case 9:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_16(var uParam0)
{
	unk_0x4C17FD5BCB6C8DDD(uParam0->f_51[0]);
}

void func_17(var uParam0)
{
	if (unk_0xD51CFE69539DB6D8(uParam0->f_3))
	{
		if (!unk_0x76B2D234F1895632(uParam0->f_3))
		{
			if (!unk_0x51374A0BB2871E6E(uParam0->f_3, 0))
			{
				unk_0x2E4D4E5B335FC291(uParam0->f_3);
			}
			unk_0x9BEE7E791BC4D38B(uParam0->f_3, 0);
			unk_0xA9CA101B50B90993(255, uParam0->f_413, joaat("player"));
			if (unk_0x23417CDB252083F9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				unk_0x91BC1C1D86377CB9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (unk_0x23417CDB252083F9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				unk_0x91BC1C1D86377CB9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (unk_0x23417CDB252083F9(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				unk_0x91BC1C1D86377CB9(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (unk_0x23417CDB252083F9(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x91BC1C1D86377CB9(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			unk_0x506D42CB68AE4EA5(&(uParam0->f_3));
		}
	}
}

int func_18()
{
	return joaat("taxi");
}

void func_19(var uParam0, int iParam1)
{
	func_20(uParam0, iParam1);
}

void func_20(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_21(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_22(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (bParam0)
	{
		unk_0xB14E3E3C57569BDB(unk_0x3F80C6638E3A1A90());
		unk_0x7CBBF6C9E2EED3EA(unk_0x3F80C6638E3A1A90(), 1);
		unk_0x30584A18ECB7ED72(unk_0x3F80C6638E3A1A90(), 1);
		func_30(1);
		unk_0x86F04B1FEFFA59AF();
		unk_0x7D5D106C0BC41E4F();
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xD6F17BA188A65E8F())
			{
				unk_0xDA09A6E60FE9645E(0);
			}
			if (!func_29())
			{
				Global_14413.f_1 = 3;
			}
			Global_15712 = 5;
		}
		func_28(1, iParam3, iParam2, 0);
		Global_55584 = 1;
		Global_67890 = 1;
		Global_69234 = 1;
	}
	else
	{
		func_30(0);
		unk_0x77B6DFDC1F6D6D54();
		Global_55584 = 0;
		if (bParam1)
		{
			unk_0xDD8068D05776246D();
		}
		unk_0x7CBBF6C9E2EED3EA(unk_0x3F80C6638E3A1A90(), 0);
		unk_0x30584A18ECB7ED72(unk_0x3F80C6638E3A1A90(), 0);
		func_28(0, iParam3, iParam2, 0);
		if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()) && !func_23(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x2EF7A8CB89D363F6(unk_0xE7869D5D7816A9B6(), 0);
		}
		Global_69234 = 0;
	}
}

int func_23(int iParam0)
{
	if (func_25(iParam0, 0))
	{
		return 1;
	}
	if (func_24())
	{
		if (iParam0 == unk_0x3F80C6638E3A1A90())
		{
			return 1;
		}
	}
	if (unk_0xB519E5386FBF69E5(Global_2416794[iParam0 /*303*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_24()
{
	return unk_0xB519E5386FBF69E5(Global_2359301, 3);
}

bool func_25(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x3F80C6638E3A1A90())
	{
		bVar0 = func_26(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1586079[iParam0 /*408*/].f_192 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0xD18C3CF631455087(iParam0))
		{
			bVar0 = unk_0x2CC717AC6CF51F8F(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
	}
	if (Global_1315887[iVar1] == 1)
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

int func_27()
{
	return Global_1312746;
}

int func_28(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xA78EA29AC2FFBADE())
	{
		if (unk_0xE5021B3C1EC84FDE() != iParam0 && uParam2)
		{
			unk_0xA0DB703A9F74EAE8(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_29()
{
	if (Global_14413.f_1 == 1 || Global_14413.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_30(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2283, 13);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_2283, 13);
	}
}

int func_31()
{
	if (!func_33() && !func_32())
	{
		if (!unk_0xC970788FCA6269B6(unk_0xBFAE5F9DEC53DAE2()))
		{
			return 1;
		}
	}
	return 0;
}

int func_32()
{
	if (unk_0xFF6891E21E7FC193(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_33()
{
	if (unk_0xFF6891E21E7FC193(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_34(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_35(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_37(Param0, func_38(), 0))
	{
		Var0 = { func_36(Param0, 1f, -30f, -30f, -10f) };
		Var3 = { func_36(Param0, 1f, 30f, 30f, 10f) };
		unk_0xBDF0A810DD6A47D3(Var0, Var3, iParam3, 1);
	}
}

Vector3 func_36(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	fVar3 = fParam3;
	fVar4 = unk_0xD0FFB162F40A139C(fVar3);
	fVar5 = unk_0x0BADBFA3B172435F(fVar3);
	Var0.f_0 = ((Param4.f_0 * fVar4) + (Param4.f_1 * fVar5));
	Var0.f_1 = ((Param4.f_1 * fVar4) - (Param4.f_0 * fVar5));
	Var6 = { Param0 + Var0 };
	return Var6;
}

bool func_37(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_38()
{
	struct<3> Var0;
	
	return Var0;
}

void func_39(int iParam0)
{
	if (Global_14571)
	{
		func_40(0, 0);
	}
	if (Global_14413.f_1 == 10 || Global_14413.f_1 == 9)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2284, 16);
	}
	if (unk_0xD6F17BA188A65E8F())
	{
		unk_0xDA09A6E60FE9645E(0);
	}
	Global_15712 = 5;
	if (iParam0 == 1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_2283, 30);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_2283, 30);
	}
	if (!func_29())
	{
		Global_14413.f_1 = 3;
	}
}

void func_40(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_41(0))
		{
			Global_14571 = 1;
			if (bParam1)
			{
				unk_0x2EA67F1118848733(&Global_14350);
			}
			Global_14341 = { Global_14359[Global_14358 /*3*/] };
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
	else if (Global_14571 == 1)
	{
		Global_14571 = 0;
		Global_14341 = { Global_14366[Global_14358 /*3*/] };
		if (bParam1)
		{
			unk_0xD61764696C2259C9(Global_14350);
		}
		else
		{
			unk_0xD61764696C2259C9(Global_14341);
		}
	}
}

int func_41(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14413.f_1 > 3)
		{
			if (unk_0xB519E5386FBF69E5(Global_2283, 14))
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
	if (unk_0xFF6891E21E7FC193(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14413.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_42()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_88291[iVar0 /*17*/] && !Global_88291[iVar0 /*17*/].f_1)
		{
			if (Global_88291[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_88291[iVar0 /*17*/].f_5 != 88 && Global_88291[iVar0 /*17*/].f_5 != 89) && Global_88291[iVar0 /*17*/].f_5 != 92)
				{
					func_43(Global_88291[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_43(int iParam0, bool bParam1)
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

void func_44()
{
	Global_14578 = 0;
	func_45();
}

void func_45()
{
	unk_0xACA77D3E6C847C83();
	Global_16723 = 0;
	if (unk_0xF0A330A29F97AA7E())
	{
		unk_0xDA09A6E60FE9645E(0);
		Global_15712 = 6;
	}
}

float func_46(int iParam0, int iParam1)
{
	return func_47(iParam0, iParam1, 1);
}

float func_47(int iParam0, int iParam1, int iParam2)
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

float func_48(struct<3> Param0, int iParam3)
{
	return func_49(unk_0x91B73D905EA38F6B(unk_0xBFAE5F9DEC53DAE2()), Param0, iParam3);
}

float func_49(int iParam0, struct<3> Param1, int iParam4)
{
	if (unk_0x76B2D234F1895632(iParam0))
	{
		return -1f;
	}
	return unk_0xF18329472591CFE6(unk_0x1141852D07400777(iParam0, 1), Param1, iParam4);
}

void func_50(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_53(uParam1);
		if (!unk_0xAF437D7C802AB246(uParam1->f_3))
		{
			unk_0x1C26C4B0DAB91B21(uParam1->f_3, 317, 1);
		}
	}
	else
	{
		func_51(1, 0);
	}
	func_9(uParam1, bParam2);
}

void func_51(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_99155.f_17711.f_22[0]++;
			func_52("Fares Completed ++ = ", Global_99155.f_17711.f_22[0]);
			break;
		
		case 1:
			Global_99155.f_17711.f_22[1]++;
			func_52("Fares Failed ++ = ", Global_99155.f_17711.f_22[1]);
			break;
		
		case 2:
			Global_99155.f_17711.f_22[2]++;
			func_52("Fares Accepted ++ ", Global_99155.f_17711.f_22[2]);
			break;
		
		case 3:
			Global_99155.f_17711.f_22[3]++;
			func_52("Fares Expired ++ ", Global_99155.f_17711.f_22[3]);
			break;
		
		case 13:
			Global_99155.f_17711.f_22[13]++;
			func_52("Passengers run ++ = ", Global_99155.f_17711.f_22[13]);
			break;
		
		case 14:
			Global_99155.f_17711.f_22[14]++;
			func_52("Passenger Forced to Pay ++ = ", Global_99155.f_17711.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_99155.f_17711.f_22[4])
				{
					Global_99155.f_17711.f_22[4] = iParam1;
					func_52("This distance ", iParam1);
					func_52(" is longer than current best", Global_99155.f_17711.f_22[4]);
				}
				else
				{
					func_52("Longest Distance Not Beat ", Global_99155.f_17711.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_99155.f_17711.f_22[5] = (Global_99155.f_17711.f_22[5] + iParam1);
			func_52("Total Distance w/ Passenger = ", Global_99155.f_17711.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_99155.f_17711.f_22[6]++;
			}
			else
			{
				Global_99155.f_17711.f_22[6] = (Global_99155.f_17711.f_22[6] + iParam1);
			}
			func_52("Wanted Levels ++ = ", Global_99155.f_17711.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_99155.f_17711.f_22[7] = (Global_99155.f_17711.f_22[7] + iParam1);
			}
			else
			{
				Global_99155.f_17711.f_22[7]++;
			}
			func_52("Wanted Levels Lost = ", Global_99155.f_17711.f_22[7]);
			break;
		
		case 8:
			Global_99155.f_17711.f_22[8]++;
			func_52("Taxis wrecked ++ = ", Global_99155.f_17711.f_22[8]);
			break;
		
		case 9:
			Global_99155.f_17711.f_22[9]++;
			func_52("Horn Honked ++ = ", Global_99155.f_17711.f_22[9]);
			break;
		
		case 10:
			Global_99155.f_17711.f_22[10] = (Global_99155.f_17711.f_22[10] + iParam1);
			func_52("Total Money Earned = ", Global_99155.f_17711.f_22[10]);
			break;
		
		case 11:
			Global_99155.f_17711.f_22[11] = (Global_99155.f_17711.f_22[11] + iParam1);
			func_52("Total Tips Earned = ", Global_99155.f_17711.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_99155.f_17711.f_22[12])
			{
				Global_99155.f_17711.f_22[12] = iParam1;
				func_52("New Highest Tip = ", Global_99155.f_17711.f_22[12]);
			}
			else
			{
				func_52("Highest Tip Not Reached = ", Global_99155.f_17711.f_22[12]);
			}
			break;
	}
}

void func_52(char* sParam0, int iParam1)
{
}

void func_53(var uParam0)
{
	func_51(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_437(1);
		func_65(15, 1);
	}
	func_63(&(Global_99155.f_17711), 1024);
	if (!func_21(Global_99155.f_17711, 64))
	{
		func_54(func_61(func_62(uParam0)), 0, 0);
	}
}

void func_54(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_60((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_99155.f_8808[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_99155.f_8808[iParam0 /*12*/].f_6 == 11 || Global_99155.f_8808[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_99155.f_8808[iParam0 /*12*/].f_5 = 1;
		Global_99155.f_8808[iParam0 /*12*/].f_10 = iParam1;
		Global_99155.f_8808[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0xE4A025C0D4FCCAFA(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xE4A025C0D4FCCAFA(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xE4A025C0D4FCCAFA(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_55();
	}
}

void func_55()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_98891 = 0;
	Global_98892 = 0;
	Global_98893 = 0;
	Global_98894 = 0;
	Global_98895 = 0;
	Global_98896 = 0;
	Global_98897 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_99155.f_8808.f_3853;
	Global_99155.f_8808.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_99155.f_8808[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_99155.f_8808[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_98891++;
					fVar1 = (fVar1 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_98892++;
					fVar2 = (fVar2 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_98893++;
					fVar3 = (fVar3 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_98894++;
					fVar4 = (fVar4 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_98895++;
					fVar5 = (fVar5 + (Global_99155.f_8808[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_98896++;
					fVar6 = (fVar6 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_98897++;
					fVar7 = (fVar7 + Global_99155.f_8808[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_98874 > 0)
	{
		if (Global_98891 == Global_98874)
		{
			fVar1 = 55f;
		}
	}
	if (Global_98875 > 0)
	{
		if (Global_98892 == Global_98875)
		{
			fVar2 = 10f;
		}
	}
	if (Global_98876 > 0)
	{
		if (Global_98893 == Global_98876)
		{
			fVar3 = 0f;
		}
	}
	if (Global_98877 > 0)
	{
		if (Global_98894 == Global_98877)
		{
			fVar4 = 10f;
		}
	}
	if (Global_98878 > 0)
	{
		if (((Global_98895 == Global_98878 || (Global_98878 * 10 / Global_98895) < 41) || Global_98895 > Global_98881) || Global_98895 == Global_98881)
		{
			if (!unk_0xB519E5386FBF69E5(Global_99155.f_8808.f_3856, 14))
			{
				if (Global_98895 == Global_98878)
				{
					unk_0xE4A025C0D4FCCAFA(joaat("num_rndevents_completed"), Global_98878, 0);
					unk_0x9956FB0E4B50ECB8(&(Global_99155.f_8808.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_98879 > 0)
	{
		if (Global_98896 == Global_98879)
		{
			fVar6 = 15f;
		}
	}
	if (Global_98880 > 0)
	{
		if (Global_98897 == Global_98880)
		{
			fVar7 = 5f;
		}
	}
	Global_99155.f_8808.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_98895 > Global_98881 || Global_98895 == Global_98881)
	{
		iVar9 = Global_98881;
	}
	else
	{
		iVar9 = Global_98895;
	}
	unk_0x39DEDCCD70293F58(joaat("num_missions_completed"), Global_98891, 1);
	unk_0x39DEDCCD70293F58(joaat("num_missions_available"), Global_98874, 1);
	unk_0x39DEDCCD70293F58(joaat("num_minigames_completed"), Global_98892, 1);
	unk_0x39DEDCCD70293F58(joaat("num_minigames_available"), Global_98875, 1);
	unk_0x39DEDCCD70293F58(joaat("num_oddjobs_completed"), Global_98893, 1);
	unk_0x39DEDCCD70293F58(joaat("num_oddjobs_available"), Global_98876, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndpeople_completed"), Global_98894, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndpeople_available"), Global_98877, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndevents_completed"), iVar9, 1);
	unk_0x39DEDCCD70293F58(joaat("num_rndevents_available"), Global_98881, 1);
	unk_0x39DEDCCD70293F58(joaat("num_misc_completed"), (Global_98897 + Global_98896), 1);
	unk_0x39DEDCCD70293F58(joaat("num_misc_available"), (Global_98880 + Global_98879), 1);
	Global_98898 = (Global_98891 * 100 / Global_98874);
	Global_98900 = ((Global_98893 + Global_98892) * 100 / (Global_98876 + Global_98875));
	Global_98899 = ((Global_98894 + iVar9) * 100 / (Global_98877 + Global_98881));
	Global_98901 = ((Global_98896 + Global_98897) * 100 / (Global_98879 + Global_98880));
	unk_0xFF6A346D78DD4938(joaat("total_progress_made"), Global_99155.f_8808.f_3853, 1);
	unk_0x39DEDCCD70293F58(joaat("percent_story_missions"), Global_98898, 1);
	unk_0x39DEDCCD70293F58(joaat("percent_ambient_missions"), Global_98899, 1);
	unk_0x39DEDCCD70293F58(joaat("percent_oddjobs"), Global_98900, 1);
	if (fVar8 > 0f && unk_0xF34EE736CF047844(fVar8) < unk_0xF34EE736CF047844(Global_99155.f_8808.f_3853))
	{
		func_59(13, unk_0xF34EE736CF047844(Global_99155.f_8808.f_3853));
	}
	if (!unk_0x11ED867E5A37BE49())
	{
		if (!Global_69236)
		{
			if (func_58() == 2 == 0 && !unk_0x00AAD79B42B3E036())
			{
				if (unk_0x472ED84D47326927())
				{
					Global_98889 = 0;
				}
				if (!Global_55578)
				{
					func_56();
				}
			}
		}
	}
}

int func_56()
{
	if (func_57(0))
	{
		return 0;
	}
	if (Global_91064.f_8)
	{
		if (Global_91064.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_91064.f_10 > 1)
	{
		return 0;
	}
	Global_91064.f_10++;
	return 1;
}

bool func_57(bool bParam0)
{
	if (!bParam0 && unk_0xFF6891E21E7FC193(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xB519E5386FBF69E5(Global_69484, 0);
}

int func_58()
{
	return Global_25034;
}

int func_59(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 70)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = unk_0x674FE6A5C8163DA5(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0x613BED2AD524D24F(iParam0, iParam1);
	}
	return 0;
}

int func_60(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	
	if (iParam2 == -1)
	{
		iParam2 = func_27();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = unk_0x489ECBF72F3DA469((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0xA689D636E73D305A((iParam0 - 0)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = unk_0x489ECBF72F3DA469((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0xA689D636E73D305A((iParam0 - 192)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = unk_0x489ECBF72F3DA469((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0xA689D636E73D305A((iParam0 - 513)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = unk_0x489ECBF72F3DA469((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0xA689D636E73D305A((iParam0 - 705)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = unk_0xB4BF922F35D7655F((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0xA689D636E73D305A((iParam0 - 3111)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = unk_0xB4BF922F35D7655F((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0xA689D636E73D305A((iParam0 - 2919)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = unk_0x2655E62E609CEE1A((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0xA689D636E73D305A((iParam0 - 4207)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = unk_0x2655E62E609CEE1A((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0xA689D636E73D305A((iParam0 - 4335)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = unk_0x2655E62E609CEE1A((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0xA689D636E73D305A((iParam0 - 6029)) * 64);
		iVar0 = unk_0x4CD737F9D5037B5E(uVar10, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_61(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 2:
			iVar0 = 201;
			break;
		
		case 3:
			iVar0 = 202;
			break;
		
		case 4:
			iVar0 = 203;
			break;
		
		case 5:
			iVar0 = 204;
			break;
		
		case 6:
			iVar0 = 205;
			break;
		
		case 7:
			iVar0 = 206;
			break;
		
		case 8:
			iVar0 = 207;
			break;
		
		case 9:
			break;
		
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

int func_62(var uParam0)
{
	return uParam0->f_411;
}

void func_63(var uParam0, int iParam1)
{
	func_64(uParam0, iParam1);
}

void func_64(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_65(int iParam0, int iParam1)
{
	if (iParam0 >= 70)
	{
		return 0;
	}
	return func_66(iParam0, iParam1);
}

int func_66(int iParam0, int iParam1)
{
	if (func_78(14) && !func_77(iParam0))
	{
		return 0;
	}
	if (unk_0x1F0D90C2E3B3876D(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25280 != 0 && !Global_69236)
	{
		return 0;
	}
	if (func_76(&Global_2558814))
	{
		if (func_74(&Global_2558814, iParam0))
		{
			return 0;
		}
		if (func_67(&Global_2558814, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x870B558D3473ADCD(iParam0))
		{
			return 0;
		}
		if (unk_0x1F0D90C2E3B3876D(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_67(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[70];
	
	if (unk_0x1F0D90C2E3B3876D(iParam1))
	{
		return 0;
	}
	if (func_78(14) && !func_77(iParam1))
	{
		return 0;
	}
	if (func_74(uParam0, iParam1))
	{
		return 0;
	}
	if (func_73(uParam0) < 0f)
	{
		func_72(uParam0, 0);
	}
	func_70(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_68(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_68(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x1F0D90C2E3B3876D(iParam1))
	{
		return 0;
	}
	if (func_78(14) && !func_77(iParam1))
	{
		return 0;
	}
	if (func_74(uParam0, iParam1))
	{
		return 0;
	}
	if (func_73(uParam0) < 0f)
	{
		func_72(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_69(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_69(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 70;
}

void func_70(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_71(uParam0, iVar0);
		iVar0++;
	}
	func_72(uParam0, (Global_2558813 - 0.5f));
}

void func_71(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 70;
}

void func_72(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_72 = 0f;
	}
	else
	{
		uParam0->f_72 = fParam1;
	}
}

float func_73(var uParam0)
{
	return uParam0->f_72;
}

bool func_74(var uParam0, int iParam1)
{
	return func_75(uParam0, iParam1) != -1;
}

int func_75(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_76(var uParam0)
{
	return uParam0->f_71 == 1;
}

int func_77(int iParam0)
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

bool func_78(int iParam0)
{
	return Global_35619 == iParam0;
}

int func_79(var uParam0, var uParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_192() && func_106(uParam0, 0) > 1f)
			{
				if (func_31())
				{
					unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
				}
				func_105(uParam0);
				func_19(&(Global_99155.f_17711), 4096);
				func_103(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_104(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				unk_0xCC18B241D266EF14(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_102(1);
				iLocal_168 = 6;
			}
			break;
		
		case 6:
			if (!func_96(uParam1, 0))
			{
				func_80(uParam0);
				func_296(uParam0, 0, 0, 0);
				func_102(0);
				iLocal_168 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_80(var uParam0)
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_81(func_94(), 21, iVar0, 0, 0);
		func_51(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_81(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_99155.f_32499[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_99155.f_32499[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_82(Global_99155.f_32499[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		unk_0x56DCF5665F92F9BD(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x39DEDCCD70293F58(iVar1, iVar0, 1);
	}
}

int func_82(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_93();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_92(99, 1);
					func_91(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_91(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_91(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_90(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_89(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_91(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_91(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_91(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_89(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_91(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_91(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_91(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_91(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_91(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_91(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_91(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_91(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_91(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x87F8C006AA576A39())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_91(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_91(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_91(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_91(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_91(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_91(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_89(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_91(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_91(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_91(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_91(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_91(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_91(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_88(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_92(95, iParam3);
					break;
				
				case 1:
					func_92(97, iParam3);
					break;
				
				case 2:
					func_92(96, iParam3);
					break;
			}
			func_92(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = unk_0xF34EE736CF047844((fVar0 * unk_0xBBDA792448DB5A89(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_85(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_85(iVar1);
	}
	iVar5 = (Global_52753[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_52753[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_52753[iVar2] = 2147483647;
				}
				else
				{
					Global_52753[iVar2] = (Global_52753[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_91(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_91(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_91(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_52753[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_52753[iVar2];
			Global_52753[iVar2] = (Global_52753[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_99155.f_25013.f_233[iVar2 /*69*/].f_2[Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_99155.f_25013.f_233[iVar2 /*69*/].f_2[Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_99155.f_25013.f_233[iVar2 /*69*/].f_2[Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_99155.f_25013.f_233[iVar2 /*69*/]++;
		Global_99155.f_25013.f_233[iVar2 /*69*/].f_1++;
		if (Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_99155.f_25013.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_84(iParam0);
	if (Global_35619 == 15)
	{
		func_83(0);
	}
	return 1;
}

void func_83(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_99155.f_25013.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_52761[iVar0 /*3*/][0] = Global_99155.f_25013[iVar0];
		Global_52761.f_31[iVar0 /*3*/][0] = Global_99155.f_25013.f_11[iVar0];
		Global_52761.f_62[iVar0 /*3*/][0] = Global_99155.f_25013.f_22[iVar0];
		Global_52761.f_93[iVar0 /*3*/][0] = Global_99155.f_25013.f_33[iVar0];
		Global_52761.f_124[iVar0 /*3*/][0] = Global_99155.f_25013.f_44[iVar0];
		Global_52761.f_155[iVar0 /*3*/][0] = Global_99155.f_25013.f_55[iVar0];
		Global_52761.f_186[iVar0 /*3*/][0] = Global_99155.f_25013.f_66[iVar0];
		Global_52761.f_217[iVar0 /*3*/][0] = Global_99155.f_25013.f_77[iVar0];
		Global_52761.f_248[iVar0 /*3*/][0] = Global_99155.f_25013.f_88[iVar0];
		if (!bParam0)
		{
			Global_52761[iVar0 /*3*/][1] = Global_99155.f_25013[iVar0];
			Global_52761.f_31[iVar0 /*3*/][1] = Global_99155.f_25013.f_11[iVar0];
			Global_52761.f_62[iVar0 /*3*/][1] = Global_99155.f_25013.f_22[iVar0];
			Global_52761.f_93[iVar0 /*3*/][1] = Global_99155.f_25013.f_33[iVar0];
			Global_52761.f_124[iVar0 /*3*/][1] = Global_99155.f_25013.f_44[iVar0];
			Global_52761.f_155[iVar0 /*3*/][1] = Global_99155.f_25013.f_55[iVar0];
			Global_52761.f_186[iVar0 /*3*/][1] = Global_99155.f_25013.f_66[iVar0];
			Global_52761.f_217[iVar0 /*3*/][1] = Global_99155.f_25013.f_77[iVar0];
			Global_52761.f_248[iVar0 /*3*/][1] = Global_99155.f_25013.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_84(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_52753[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x39DEDCCD70293F58(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			unk_0x39DEDCCD70293F58(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			unk_0x39DEDCCD70293F58(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_85(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!unk_0x00AAD79B42B3E036())
	{
		if (unk_0xB519E5386FBF69E5(Global_99155.f_25013.f_471, iParam0))
		{
			bVar0 = true;
			unk_0x73817D396768E4C6(&(Global_99155.f_25013.f_471), iParam0);
		}
	}
	else if (unk_0xB519E5386FBF69E5(Global_99155.f_25013.f_471, iParam0) || unk_0xB519E5386FBF69E5(Global_2097152[func_87() /*10169*/].f_7698.f_10, iParam0))
	{
		bVar0 = true;
		unk_0x73817D396768E4C6(&(Global_99155.f_25013.f_471), iParam0);
		unk_0x73817D396768E4C6(&(Global_2097152[func_87() /*10169*/].f_7698.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x4A4F36C4EFDE341F("COUP_RED");
		unk_0x9359E7CC54335EB9(func_86(iParam0));
		unk_0x77AD0392EB2D45CC(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_86(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_87()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_88(int iParam0)
{
	func_92(93, iParam0);
	func_92(29, iParam0);
	func_92(30, iParam0);
}

bool func_89(int iParam0)
{
	if (!unk_0x00AAD79B42B3E036())
	{
		return unk_0xB519E5386FBF69E5(Global_99155.f_25013.f_471, iParam0);
	}
	return unk_0xB519E5386FBF69E5(Global_2097152[func_87() /*10169*/].f_7698.f_10, iParam0);
}

int func_90(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x1F0D90C2E3B3876D(27))
	{
		return 0;
	}
	if (unk_0x56DCF5665F92F9BD(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x56DCF5665F92F9BD(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0x56DCF5665F92F9BD(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0x56DCF5665F92F9BD(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x39DEDCCD70293F58(joaat("num_cash_spent"), iVar1, 1);
		func_59(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_65(27, 1);
	return 1;
}

void func_91(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x56DCF5665F92F9BD(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x39DEDCCD70293F58(iParam0, iVar0, 1);
}

void func_92(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51321[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x00AAD79B42B3E036())
	{
		return;
	}
	if (Global_51321[iParam0 /*7*/])
	{
		unk_0x56DCF5665F92F9BD(Global_51321[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x39DEDCCD70293F58(Global_51321[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_93()
{
	int iVar0;
	
	if (unk_0x6E2954F2B1919678())
	{
		unk_0x56DCF5665F92F9BD(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_52753[0] == iVar0)
		{
			Global_52753[0] = iVar0;
		}
		unk_0x56DCF5665F92F9BD(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_52753[1] == iVar0)
		{
			Global_52753[1] = iVar0;
		}
		unk_0x56DCF5665F92F9BD(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_52753[2] == iVar0)
		{
			Global_52753[2] = iVar0;
		}
	}
}

int func_94()
{
	func_95();
	return Global_99155.f_1750.f_539.f_3549;
}

void func_95()
{
	int iVar0;
	
	if (unk_0xD51CFE69539DB6D8(unk_0xE7869D5D7816A9B6()))
	{
		if (func_4(Global_99155.f_1750.f_539.f_3549) != unk_0x1B2DC87EFB36DF80(unk_0xE7869D5D7816A9B6()))
		{
			iVar0 = func_3(unk_0xE7869D5D7816A9B6());
			if (func_5(iVar0) && (!func_78(14) || Global_98107))
			{
				if (Global_99155.f_1750.f_539.f_3549 != iVar0 && func_5(Global_99155.f_1750.f_539.f_3549))
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

int func_96(var uParam0, int iParam1)
{
	if (!func_13(&(uParam0->f_2)))
	{
		func_100(&(uParam0->f_2));
	}
	unk_0x1B7A773B18DF3DB0(14);
	unk_0xE2B331FD5EEF4684(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x958B4351DD28B142(2, 201) || uParam0->f_8)
		{
			if (!func_13(&(uParam0->f_5)))
			{
				func_100(&(uParam0->f_5));
				func_99(uParam0, 1051260355);
			}
		}
		if (func_13(&(uParam0->f_5)))
		{
			if (func_98(&(uParam0->f_5)) > 0.33f)
			{
				func_97(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_98(&(uParam0->f_2)) * 1000f) > unk_0xBBDA792448DB5A89(uParam0->f_1)
	{
		if (!func_13(&(uParam0->f_5)))
		{
			func_100(&(uParam0->f_5));
			func_99(uParam0, 1051260355);
		}
		else if (func_98(&(uParam0->f_5)) > 0.33f)
		{
			func_97(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_97(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_98(var uParam0)
{
	if (func_13(uParam0))
	{
		if (func_12(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_11(unk_0xB519E5386FBF69E5(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_99(var uParam0, int iParam1)
{
	unk_0xA4F3B84032D46C13(*uParam0, "SHARD_ANIM_OUT");
	unk_0x43C93E686A1E92C5(uParam0->f_9);
	unk_0x73B039A1CD485226(iParam1);
	unk_0xFF141057ED7B4C73();
}

void func_100(var uParam0)
{
	func_101(uParam0, 0f);
}

void func_101(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_11(unk_0xB519E5386FBF69E5(*uParam0, 4)) - fParam1);
	unk_0x9956FB0E4B50ECB8(uParam0, 1);
	unk_0x73817D396768E4C6(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_102(int iParam0)
{
	Global_69496 = iParam0;
	Global_69497 = iParam0;
}

void func_103(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, char* sParam6, char* sParam7, int iParam8, int iParam9)
{
	unk_0xA4F3B84032D46C13(*uParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
	unk_0x33D37B75FC2BCC8C("STRING");
	unk_0xC498567F546E6683(iParam9);
	unk_0x9359E7CC54335EB9(sParam1);
	unk_0x057886C01DDC535D();
	unk_0x33D37B75FC2BCC8C(sParam7);
	unk_0x8D23CF083336DA9B(uParam2);
	unk_0x8D23CF083336DA9B(uParam3);
	unk_0x9359E7CC54335EB9(uParam6);
	unk_0x8D23CF083336DA9B(uParam5);
	unk_0x8D23CF083336DA9B(iParam4);
	unk_0x057886C01DDC535D();
	unk_0xFF141057ED7B4C73();
	func_100(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_104(var uParam0)
{
	char* sVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TAXI_SC_BN_02";
			break;
		
		case 1:
			sVar0 = "TAXI_SC_BN_01";
			break;
		
		case 2:
			sVar0 = "TAXI_SC_BN_03";
			break;
		
		case 3:
			sVar0 = "TAXI_SC_BN_12";
			break;
		
		case 4:
			sVar0 = "TAXI_SC_BN_08";
			break;
		
		case 5:
			sVar0 = "TAXI_SC_BN_07";
			break;
		
		case 6:
			sVar0 = "TAXI_SC_KO";
			break;
		
		case 7:
			sVar0 = "TAXI_SC_BN_10";
			break;
		
		case 8:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_105(var uParam0)
{
	int iVar0;
	
	Local_169.f_1 = unk_0xBBDA792448DB5A89(uParam0->f_50);
	Local_169.f_2 = unk_0xBBDA792448DB5A89(uParam0->f_56);
	func_51(11, uParam0->f_56);
	func_51(12, uParam0->f_56);
	iLocal_57[1] = uParam0->f_56;
	iLocal_57[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_169.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (unk_0xB519E5386FBF69E5(Local_169.f_4[iVar0 /*3*/], 2))
		{
			Local_169.f_3 = (Local_169.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_169.f_0 = uParam0->f_411;
	Local_169.f_20 = ((Local_169.f_1 + Local_169.f_2) + Local_169.f_3);
}

float func_106(var uParam0, int iParam1)
{
	if (!func_13(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_107(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_98(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_107(var uParam0)
{
	if (!func_13(uParam0))
	{
		func_100(uParam0);
	}
}

void func_108(var uParam0)
{
	if (uParam0->f_56 >= uParam0->f_59)
	{
		uParam0->f_56 = unk_0x11E019C8F43ACC8A((IntToFloat(uParam0->f_50) * 0.4f));
	}
	else if (uParam0->f_56 < uParam0->f_59 && uParam0->f_56 >= uParam0->f_58)
	{
		uParam0->f_56 = unk_0x11E019C8F43ACC8A((IntToFloat(uParam0->f_50) * 0.15f));
	}
	else
	{
		uParam0->f_56 = 0;
	}
	if (!func_21(uParam0->f_55, 1))
	{
		func_63(&(uParam0->f_55), 1);
	}
}

void func_109(var uParam0)
{
	func_111();
	unk_0x00400F14096FE01D();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_235(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_235(uParam0, 103, 1, 0, 0);
		}
		func_110(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_235(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_235(uParam0, 102, 1, 0, 0);
	}
	func_296(uParam0, 16, 4f, 0);
}

void func_110(int iParam0)
{
	Global_97867.f_221 = iParam0;
}

void func_111()
{
	Global_14578 = 0;
	func_112();
}

void func_112()
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

void func_113(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_114(fVar0);
	iLocal_57[4] = unk_0x11E019C8F43ACC8A(fVar0);
	iLocal_57[5] = unk_0x11E019C8F43ACC8A(fVar0);
	func_51(4, unk_0x11E019C8F43ACC8A(fVar0));
	func_51(5, unk_0x11E019C8F43ACC8A(fVar0));
	uParam0->f_50 = unk_0x11E019C8F43ACC8A((fVar0 * 100f));
}

float func_114(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_115(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		unk_0x9956FB0E4B50ECB8(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

int func_116(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (unk_0x8AF655CC5761C7A2(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_41(1))
			{
				func_39(0);
			}
			if (func_31())
			{
				func_118();
				return 1;
			}
			else if (func_117(uParam0->f_4, iParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					unk_0x8FE59DE2329CBE64(unk_0xBFAE5F9DEC53DAE2(), 0, 256);
				}
				else
				{
					unk_0x8FE59DE2329CBE64(unk_0xBFAE5F9DEC53DAE2(), 0, 0);
				}
			}
			unk_0x5A4DA86F0AB35256(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_117(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
		unk_0x1B9F8E5CCC384F1E(iParam0, uParam1, iParam2, iParam4);
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

void func_118()
{
	if (unk_0x3CD36EADD6272F29(unk_0x3F80C6638E3A1A90()))
	{
		unk_0x7BB1D0BBB1E5E5A7(unk_0x3F80C6638E3A1A90());
	}
}

var func_119(struct<3> Param0, int iParam3)
{
	var uVar0;
	
	uVar0 = unk_0x3779A616B93955A6(Param0);
	unk_0xFC630C7120A34CE4(uVar0, func_120(unk_0x00AAD79B42B3E036(), 1f, 1f));
	unk_0x1AD7485666C5160C(uVar0, iParam3);
	return uVar0;
}

float func_120(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_121(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (unk_0xD51CFE69539DB6D8(iParam1))
	{
		if (bParam2)
		{
			if (!unk_0x76B2D234F1895632(iParam1))
			{
				if (unk_0x4231F56FA5885AE9(iParam1))
				{
					if (unk_0x5DD29D700F7A48AB(unk_0xE7869D5D7816A9B6()))
					{
						if (Local_423.f_109 == 0)
						{
							func_336(&Local_423, "Driver jacked the fiance", 7);
						}
					}
				}
			}
		}
		if (unk_0xAF437D7C802AB246(iParam1))
		{
			if (bParam3)
			{
				if (!unk_0x76B2D234F1895632(iLocal_890))
				{
					unk_0xFA2C5C2D054C888E(iLocal_890);
					unk_0x4B79E06845D63B96(iLocal_890, unk_0xE7869D5D7816A9B6(), 100f, 20000, 0, 0);
					unk_0x8D6671D78D1F569B(iLocal_890, 1);
				}
				func_336(uParam0, "Target injured.", 13);
			}
			else
			{
				if (!unk_0x76B2D234F1895632(Local_853.f_2))
				{
					unk_0xFA2C5C2D054C888E(Local_853.f_2);
					unk_0x4B79E06845D63B96(Local_853.f_2, unk_0xE7869D5D7816A9B6(), 100f, 20000, 0, 0);
					unk_0x8D6671D78D1F569B(Local_853.f_2, 1);
				}
				func_336(uParam0, "Mistress injured.", 14);
			}
		}
		else if (unk_0xDB3D41842CEA074F(unk_0x3F80C6638E3A1A90()))
		{
			if ((unk_0xA180067B477D9371(iParam1, joaat("weapon_stungun"), 0) || unk_0xA180067B477D9371(iParam1, 0, 2)) || unk_0xA180067B477D9371(iParam1, 0, 1))
			{
				if (!unk_0x76B2D234F1895632(iLocal_890))
				{
					unk_0xFA2C5C2D054C888E(iLocal_890);
					unk_0x4B79E06845D63B96(iLocal_890, unk_0xE7869D5D7816A9B6(), 100f, 20000, 0, 0);
					unk_0x8D6671D78D1F569B(iLocal_890, 1);
				}
				if (!unk_0x76B2D234F1895632(Local_853.f_2))
				{
					unk_0xFA2C5C2D054C888E(Local_853.f_2);
					unk_0x4B79E06845D63B96(Local_853.f_2, unk_0xE7869D5D7816A9B6(), 100f, 20000, 0, 0);
					unk_0x8D6671D78D1F569B(Local_853.f_2, 1);
				}
				func_336(uParam0, "Passenger injured by player with weapon.", 14);
			}
			if (!bParam3)
			{
				unk_0xE03E82B34235FC17(unk_0x3F80C6638E3A1A90());
			}
		}
	}
}

void func_122(var uParam0, var uParam1)
{
	unk_0xB63C332FD6AA5D49(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_123()
{
	struct<3> Var0;
	
	func_143();
	if (iLocal_1143 < 3 && iLocal_1143 > 0)
	{
		if (func_139(iLocal_897))
		{
			iLocal_1143 = 3;
		}
	}
	if (unk_0xD51CFE69539DB6D8(iLocal_890))
	{
		if (!unk_0xAF437D7C802AB246(iLocal_890))
		{
			Var0 = { unk_0x1141852D07400777(iLocal_890, 1) };
		}
	}
	switch (iLocal_1143)
	{
		case 0:
			if (func_138(1, 1, 1) && !Local_423.f_142)
			{
				iLocal_897 = unk_0x9D40BBF80D8F5E8A();
				func_136(&uLocal_1082);
				func_135(&Local_1052, -1, 1);
				func_232(Local_958, 0, 15f);
				func_232(Local_961, 0, 15f);
				func_134(&Local_423, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
				func_133();
				func_296(&Local_423, 19, 0, 0);
				iLocal_1143 = 1;
			}
			else
			{
				func_132("TX_FC CAN_PLAYER_START_CUTSCENE returns false", &(Local_423.f_78), 1000);
			}
			break;
		
		case 1:
			if (func_106(&Local_423, 19) > 0.5f)
			{
				func_131(0, 0, 1);
				unk_0xC797AB6C3A6482E1(Local_958, 30f, 0, 0, 0, 0, 0);
				unk_0xC797AB6C3A6482E1(Local_961, 30f, 0, 0, 0, 0, 0);
				unk_0xB0A7E0A62FB61A06(Local_958, 30f, 0);
				unk_0xB0A7E0A62FB61A06(Local_961, 30f, 0);
				func_129(Local_958, 1114636288, 1);
				func_129(Local_961, 1114636288, 1);
				unk_0xBDF0A810DD6A47D3(Local_946, Local_949, 0, 1);
				func_235(&Local_423, 35, 1, 1, 0);
				unk_0x34F8B34A8E9D3B57(Local_423.f_0, func_128(0));
				unk_0x3B330DB318EF2761(Local_423.f_0, func_127(0), 2);
				unk_0xD2E0A9EDD55F008D(Local_423.f_0, 44.5167f);
				unk_0x657EEE601EEC4152(Local_423.f_0, "HAND_SHAKE", 0.1f);
				unk_0x63498CF6CF35C6A2(Local_423.f_0, 1);
				unk_0x538689EF05955EF7(1, 0, 3000, 1, 0, 0);
				if (unk_0xC45A34912542C4EB(Local_853.f_3, 0))
				{
					unk_0x88A973CE47FBEF95(Local_853.f_3, Local_955, 1, 0, 0, 1);
					unk_0x151F32CB40BE730C(Local_853.f_3, fLocal_971);
					if (unk_0x2BA39B916A61E352(&cLocal_976, Local_955, &iLocal_899))
					{
					}
					if (unk_0x0A4FE71EF333549B(&cLocal_976, iLocal_899, &uLocal_952))
					{
					}
					if (!unk_0x76B2D234F1895632(Local_853.f_2))
					{
						unk_0x8856EDD9AA658EC6(Local_853.f_2, Local_853.f_3, &cLocal_976, iLocal_1124, iLocal_899 + 4, 0, -1, -1082130432, 0, 1073741824);
					}
				}
				func_296(&Local_423, 19, 0, 0);
				iLocal_1143 = 2;
			}
			break;
		
		case 2:
			if (func_106(&Local_423, 19) > 5f)
			{
				func_296(&Local_423, 19, 0, 0);
				iLocal_1143 = 4;
			}
			else if (func_106(&Local_423, 19) > 4.7f)
			{
				if (func_126())
				{
					if (!iLocal_915)
					{
						unk_0xCD0E4FEA8B60FCA3("CamPushInNeutral", 0, 0);
						unk_0xCC18B241D266EF14(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_915 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (unk_0xC45A34912542C4EB(Local_853.f_3, 0))
			{
				unk_0x88A973CE47FBEF95(Local_853.f_3, Local_922, 1, 0, 0, 1);
				unk_0x151F32CB40BE730C(Local_853.f_3, fLocal_974);
				unk_0x6035B71FBC2881EC(Local_853.f_3);
			}
			func_296(&Local_423, 19, 0, 0);
			iLocal_1143 = 4;
			break;
		
		case 4:
			if (unk_0xC45A34912542C4EB(Local_423.f_4, 0))
			{
				Local_423.f_141 = 0;
				unk_0x2D3BB3EF936C4B76(800);
				unk_0x7FB81B1DD14A3BE4(0);
				unk_0x6EF372C057320AD4(0, 1065353216);
				if (unk_0xC45A34912542C4EB(Local_853.f_3, 0))
				{
					unk_0x88A973CE47FBEF95(Local_853.f_3, Local_922, 1, 0, 0, 1);
					unk_0x151F32CB40BE730C(Local_853.f_3, fLocal_974);
					unk_0x6035B71FBC2881EC(Local_853.f_3);
					if (!unk_0x76B2D234F1895632(Local_853.f_2))
					{
						unk_0xDE31B2587775EDAD(Local_853.f_2);
						unk_0x88A973CE47FBEF95(Local_853.f_2, -691.1571f, -1117.732f, 13.52498f, 1, 0, 0, 1);
						unk_0x151F32CB40BE730C(Local_853.f_2, -49.27436f);
					}
				}
				unk_0x74FF6D08DE291367(Local_423.f_0, 0);
				unk_0x74FF6D08DE291367(uLocal_422, 0);
				func_124(1, 1, 1);
				unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
				while (!unk_0xDE185266FE919B68())
				{
					unk_0x4EDE34FBADD967A6(0);
				}
				func_189(&Local_423, 19, 0);
				iLocal_1143 = 5;
				return 1;
			}
			break;
	}
	return 0;
}

void func_124(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		unk_0x8FE59DE2329CBE64(unk_0xBFAE5F9DEC53DAE2(), 1, 0);
	}
	unk_0xD60DE78AB9B18914(1);
	func_22(0, 1, iParam2, 0);
	if (bParam1)
	{
		unk_0xA8010B7497A9230B(1);
		unk_0xE242D0D27B122FAC(1);
	}
	func_125(23, 0);
}

void func_125(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0x9956FB0E4B50ECB8(&Global_25278, iParam0);
	}
	else
	{
		unk_0x73817D396768E4C6(&Global_25278, iParam0);
	}
}

int func_126()
{
	if (unk_0x08EE17D4722097C7(unk_0x5B93518F6779B7F5()) == 4)
	{
		return 1;
	}
	return 0;
}

Vector3 func_127(int iParam0)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1.9027f, 0f, 170.5764f };
			break;
	}
	return Var0;
}

Vector3 func_128(int iParam0)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -686.0368f, -1073.22f, 16.1762f };
			break;
	}
	return Var0;
}

void func_129(struct<3> Param0, float fParam3, bool bParam4)
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	
	unk_0xD3B9E1270A1D5481(Param0, &Var1, &fVar0, 1, 1077936128, 0);
	Var4 = { func_36(Var1, func_130(fVar0), fParam3, fParam3, 5f) };
	Var7 = { func_36(Var1, fVar0, fParam3, fParam3, -5f) };
	Var7.f_2 = (Var7.f_2 - 22f);
	Var4.f_2 = (Var4.f_2 + 22f);
	if (bParam4)
	{
		unk_0x39895086D78BEA60(Var7, Var4, 0, 1);
	}
	else
	{
		unk_0x3EB6E5FC1FA6912C(Var7, Var4, 1);
	}
}

float func_130(float fParam0)
{
	if (fParam0 > 180f)
	{
		return (fParam0 - 180f);
	}
	return (fParam0 + 180f);
}

void func_131(int iParam0, int iParam1, int iParam2)
{
	unk_0x8FE59DE2329CBE64(unk_0xBFAE5F9DEC53DAE2(), 0, iParam0);
	if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		unk_0x86F1B61A4BF04972(unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), 15f);
	}
	unk_0xD60DE78AB9B18914(iParam1);
	func_39(0);
	func_22(1, 1, iParam2, 0);
	unk_0xA8010B7497A9230B(0);
	unk_0xE242D0D27B122FAC(0);
	func_125(23, 1);
}

void func_132(char* sParam0, int iParam1, int iParam2)
{
	if (unk_0x9D40BBF80D8F5E8A() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = unk_0x9D40BBF80D8F5E8A();
}

void func_133()
{
	var uVar0;
	
	iLocal_890 = unk_0xA7F4088D9A2629CC(26, iLocal_887, Local_940, fLocal_970, 1, 1);
	unk_0xEFEED5D1AC8E24F1(iLocal_890, 5);
	unk_0x497AFDFE79EEFE4F(iLocal_890, 3, 1, 2, 0);
	unk_0x497AFDFE79EEFE4F(iLocal_890, 4, 0, 1, 0);
	unk_0x497AFDFE79EEFE4F(iLocal_890, 2, 1, 2, 0);
	unk_0x1C26C4B0DAB91B21(iLocal_890, 20, 1);
	func_7(&(Local_423.f_244), 5, iLocal_890, "TaxiCarrie", 0, 1);
	if (!unk_0x76B2D234F1895632(iLocal_890))
	{
		unk_0x151F32CB40BE730C(iLocal_890, fLocal_970);
		unk_0x33A90AD8FA327B72(&uVar0);
		unk_0x94026C1D1DB14225(&uVar0);
		unk_0x39FD98334BDB065B(0, 2500);
		unk_0xDCF460AE46C9489C(0, "oddjobs@towingcome_here", "come_here_idle_a", 8f, -1.5f, 2000, 0, 0, 0, 0, 0);
		unk_0x338CE2D3EAA1E395(0, Local_943, 1f, 0, 0, 786603, -1082130432);
		unk_0x911ECBCE73F8EC3F(uVar0);
		unk_0xC2C4A3A9FF2FBFFF(iLocal_890, uVar0);
		unk_0x33A90AD8FA327B72(&uVar0);
	}
}

void func_134(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)
{
	if (!unk_0xCF686B56FD5328B5(*uParam0))
	{
		*uParam0 = unk_0xF90D4D0A9F2F4A42(26379945, Param1, Param4, iParam7, 0, 2);
	}
}

void func_135(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = -1;
	}
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

void func_136(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_137(), 24);
		iVar0++;
	}
	unk_0x00400F14096FE01D();
	func_44();
}

var func_137()
{
	var uVar0;
	
	return uVar0;
}

int func_138(bool bParam0, bool bParam1, bool bParam2)
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

int func_139(int iParam0)
{
	if (func_142() && unk_0x9D40BBF80D8F5E8A() >= iParam0 + 1000)
	{
		unk_0x6A6E764D1DB633C7(500);
		while (!unk_0xAEF17BDE274A1247())
		{
			unk_0x4EDE34FBADD967A6(0);
		}
		func_39(0);
		func_140();
		return 1;
	}
	return 0;
}

void func_140()
{
	Global_14578 = 0;
	func_141();
}

void func_141()
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

int func_142()
{
	if (unk_0xA57007F9A665F322())
	{
		return 0;
	}
	if (unk_0x958B4351DD28B142(0, 18) || unk_0x958B4351DD28B142(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_143()
{
	if (func_33())
	{
		unk_0xCA3345CE8849CB88("appInternet");
	}
	if (func_32())
	{
		unk_0xCA3345CE8849CB88("appCamera");
	}
	if (func_41(1))
	{
		func_39(0);
	}
}

int func_144()
{
	if (!unk_0x5053BF6D5604065B(iLocal_887))
	{
		return 0;
	}
	if (!unk_0x2917D5E1CB5CE43A("MOVE_DUCK_FOR_COVER"))
	{
		func_132("TAXI_ASSETS_STREAMED - Loading MOVE_DUCK_FOR_COVER", &iLocal_896, 1000);
		return 0;
	}
	return 1;
}

void func_145()
{
	unk_0x801429C020C467BA(iLocal_887);
	unk_0x2B0BB514F9140141("MOVE_DUCK_FOR_COVER");
	unk_0x2B0BB514F9140141(&cLocal_980);
	unk_0x2B0BB514F9140141(&cLocal_996);
	unk_0x2B0BB514F9140141(&cLocal_1012);
	unk_0x2B0BB514F9140141(&cLocal_1028);
}

void func_146(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x00AAD79B42B3E036())
	{
		if (unk_0xB519E5386FBF69E5(Global_2457699.f_4416, 26))
		{
			return;
		}
	}
	if (unk_0xA16CC47187A94189())
	{
		unk_0xC36FD2B6875CA6EA(iParam2);
		unk_0x1E79BB0C6A422F63("FocusIn");
		unk_0x61B624BA2305D0E5("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0xCD0E4FEA8B60FCA3("FocusOut", 0, 0);
			unk_0xCC18B241D266EF14(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	unk_0x1B8E0930AB96444B(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x356491C12DAD1A37(sVar0))
	{
		if (!unk_0x00AAD79B42B3E036())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x356491C12DAD1A37(uParam0->f_3))
	{
		if (func_147(uParam0->f_3))
		{
			unk_0x1D208E4A4E1D4FFE(1);
		}
	}
	if (!unk_0x356491C12DAD1A37(sVar0))
	{
		if (func_147(sVar0))
		{
			unk_0x1D208E4A4E1D4FFE(1);
		}
	}
}

bool func_147(char* sParam0)
{
	unk_0xAA8D087D7A86072A(sParam0);
	return unk_0x360D41DC76A83E6A(0);
}

int func_148()
{
	if (func_106(&Local_423, 20) > 2f)
	{
		if (!Local_423.f_142)
		{
			func_169(&Local_423, &Local_853, (unk_0x9D40BBF80D8F5E8A() - iLocal_975) > 15000, 0);
		}
	}
	if (unk_0xC45A34912542C4EB(Local_853.f_3, 0))
	{
		if (unk_0xC45A34912542C4EB(Local_423.f_4, 0))
		{
			if (unk_0x22E902D6AF27E232(Local_423.f_4, Local_1044, Local_1047, fLocal_1050, 0, 1, 0))
			{
				unk_0x1B9F8E5CCC384F1E(Local_423.f_4, 5f, 1, 0);
				return 1;
			}
		}
		func_149(&uLocal_45, Local_853.f_3, 0, 0, 1, 1, 1);
		func_122(&Local_423, &(Local_423.f_43));
		if (!iLocal_903)
		{
			if (!unk_0x76B2D234F1895632(Local_853.f_2))
			{
				if (!unk_0x05BA2AC20921A37E(Local_853.f_3) && IntToFloat((unk_0x9D40BBF80D8F5E8A() - iLocal_975)) > unk_0x686986496F16B625(120, "txm_fc_h1_"))
				{
					unk_0x8543F365CDBCAAAD(Local_853.f_2, Local_853.f_3, Local_955, 28f, 0, Local_853.f_1, iLocal_1123, 13.75f, -1f);
					iLocal_903 = 1;
				}
			}
		}
	}
	return 0;
}

void func_149(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_150(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_150(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_151(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_151(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0xA16CC47187A94189())
	{
		if (unk_0x9D40BBF80D8F5E8A() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (unk_0x356491C12DAD1A37(iVar0))
	{
		if (!unk_0x00AAD79B42B3E036())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_147(iVar0))
	{
		func_168();
	}
	if (func_167(iParam1) && unk_0xB756E8D139BDE124(iParam1))
	{
		iVar1 = 0;
		if (unk_0x41B17741CACC905E(iParam1))
		{
			unk_0xBF4FEE4E9AAA57D3(unk_0x10E754B2E0DF2A70(iParam1));
			unk_0x85E578E9EDFAA283(unk_0x10E754B2E0DF2A70(iParam1), 1);
			if (unk_0xB7FBD067DCB72466(unk_0x10E754B2E0DF2A70(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x8C1ED5BB2888BA25(iParam1))
		{
			unk_0x62580637CC8C1B3F(unk_0xE59FAD6B5E1AA42D(iParam1));
			if (unk_0xF4CAF05E946FAF1C(unk_0xE59FAD6B5E1AA42D(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0xC2F1E05878620398(iParam1))
		{
			unk_0xD033824AEAC999BE(unk_0x1652DF7B39293553(iParam1));
			if (unk_0x1B93A6975F1736AC(unk_0x1652DF7B39293553(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0xA16CC47187A94189())
		{
			if (func_162(uParam0, bParam7, bParam9, 0))
			{
				func_159(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_156(iVar0))
				{
					if ((unk_0x356491C12DAD1A37(uParam0->f_3) && !unk_0x356491C12DAD1A37(iVar0)) && unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
					{
						if ((iVar1 && !unk_0x23741E39BEA32E66()) && uParam8)
						{
							if (!func_147(iVar0))
							{
								func_155(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0x04E7E853E31F41A3("CMN_HINT", iVar0))
								{
									func_154(1);
								}
							}
						}
					}
				}
			}
			else if (func_156(iVar0))
			{
				if (unk_0x356491C12DAD1A37(uParam0->f_3) && !unk_0x356491C12DAD1A37(iVar0))
				{
					if (((unk_0xD525F9D50CBB6A5D(iParam1) && iVar1) && !unk_0x23741E39BEA32E66()) && uParam8)
					{
						if (!func_147(iVar0))
						{
							func_155(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0x04E7E853E31F41A3("CMN_HINT", iVar0))
							{
								func_154(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x356491C12DAD1A37(sParam5))
			{
				if (func_147(sParam5))
				{
					unk_0x1D208E4A4E1D4FFE(1);
				}
			}
			if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
			{
				if (unk_0x8AA6E648EA73FF4C(unk_0xE7869D5D7816A9B6()))
				{
					if (unk_0x08EE17D4722097C7(3) == 3 || unk_0x08EE17D4722097C7(3) == 4)
					{
						func_146(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x523C6F050AF90E4F(unk_0xE7869D5D7816A9B6()))
				{
					if (unk_0x08EE17D4722097C7(6) == 3 || unk_0x08EE17D4722097C7(6) == 4)
					{
						func_146(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x8BFF7CA791EED675(unk_0xE7869D5D7816A9B6()))
				{
					if (unk_0x08EE17D4722097C7(4) == 3 || unk_0x08EE17D4722097C7(4) == 4)
					{
						func_146(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x32C78E85F7C35A47(unk_0xE7869D5D7816A9B6()))
				{
					if (unk_0x08EE17D4722097C7(5) == 3 || unk_0x08EE17D4722097C7(5) == 4)
					{
						func_146(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x83A7252D14019A24(unk_0xE7869D5D7816A9B6()))
				{
					if (unk_0x08EE17D4722097C7(2) == 3 || unk_0x08EE17D4722097C7(2) == 4)
					{
						func_146(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x96A11F2A7C8A4DB5() == 3 || unk_0x96A11F2A7C8A4DB5() == 4)
				{
					func_146(uParam0, iVar0, 1);
				}
			}
			if (!func_162(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_153(uParam0))
				{
					func_152(uParam0);
				}
			}
		}
	}
	else
	{
		func_146(uParam0, iVar0, 0);
	}
}

void func_152(var uParam0)
{
	if (func_167(unk_0xE7869D5D7816A9B6()))
	{
		unk_0x44C7AD5B54E267EE(unk_0xE7869D5D7816A9B6());
	}
	if (unk_0xA16CC47187A94189())
	{
		unk_0x1B8E0930AB96444B(1);
		unk_0xC36FD2B6875CA6EA(0);
		unk_0x61B624BA2305D0E5("HINT_CAM_SCENE");
		unk_0x1E79BB0C6A422F63("FocusIn");
		if (uParam0->f_11)
		{
			unk_0xCD0E4FEA8B60FCA3("FocusOut", 0, 0);
			unk_0xCC18B241D266EF14(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_153(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x9D40BBF80D8F5E8A()
		{
			return 1;
		}
	}
	return 0;
}

int func_154(bool bParam0)
{
	switch (Global_35619)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_99155.f_8663.f_100++;
			}
			return Global_99155.f_8663.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_99155.f_8663.f_101++;
			}
			return Global_99155.f_8663.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_99155.f_8663.f_102++;
			}
			return Global_99155.f_8663.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_155(char* sParam0, int iParam1)
{
	unk_0xCAFBB15049416379(sParam0);
	unk_0x7CBFB87C647743C3(0, 0, 1, iParam1);
}

int func_156(char* sParam0)
{
	if (!func_157(1, 1, 0))
	{
		if ((!unk_0xF6917DE0E003509D(sParam0) && func_147(sParam0)) || func_147("CMN_HINT"))
		{
			unk_0x1D208E4A4E1D4FFE(1);
		}
		return 0;
	}
	switch (Global_35619)
	{
		case 0:
		case 3:
			if (func_154(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_154(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_154(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_157(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0xF478777FFCC96862())
	{
		return 0;
	}
	if (func_41(0))
	{
		return 0;
	}
	if (func_158())
	{
		return 0;
	}
	if (unk_0x29C4AA4F29B1E539())
	{
		return 0;
	}
	if (Global_67887)
	{
		return 0;
	}
	if (unk_0xFF6891E21E7FC193(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_52760)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
		{
			if (unk_0x8AA6E648EA73FF4C(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0x08EE17D4722097C7(3) == 3 || unk_0x08EE17D4722097C7(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x523C6F050AF90E4F(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0x08EE17D4722097C7(6) == 3 || unk_0x08EE17D4722097C7(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x8BFF7CA791EED675(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0x08EE17D4722097C7(4) == 3 || unk_0x08EE17D4722097C7(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x32C78E85F7C35A47(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0x08EE17D4722097C7(5) == 3 || unk_0x08EE17D4722097C7(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x83A7252D14019A24(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0x08EE17D4722097C7(2) == 3 || unk_0x08EE17D4722097C7(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x96A11F2A7C8A4DB5() == 3 || unk_0x96A11F2A7C8A4DB5() == 4)
			{
				return 0;
			}
			if (unk_0x55B32F062B30EC90())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_158()
{
	return unk_0x9D40BBF80D8F5E8A() <= Global_17257.f_5666 + 100;
}

void func_159(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0x76B2D234F1895632(iParam1))
	{
		func_146(uParam0, 0, 0);
	}
	if (func_37(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0x41B17741CACC905E(iParam1))
		{
			iVar0 = unk_0x10E754B2E0DF2A70(iParam1);
			if (!unk_0x51374A0BB2871E6E(iVar0, 0))
			{
				if (unk_0x1415CDB1128C3FBC(iVar0))
				{
					if (!func_160())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0x0C2FCAD5220719B8(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x1B8E0930AB96444B(0);
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
	unk_0xA109811CF2C55706(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0x6A8BCE61F660B8D0(unk_0xE7869D5D7816A9B6(), iParam1, -1, iVar3, iVar4);
	unk_0xCD0E4FEA8B60FCA3("FocusIn", 0, 0);
	unk_0x91523366B2FDCD40("HINT_CAM_SCENE");
	unk_0xCC18B241D266EF14(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x9D40BBF80D8F5E8A();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_160()
{
	return func_161(unk_0x3F80C6638E3A1A90());
}

int func_161(int iParam0)
{
	if (unk_0x1B2DC87EFB36DF80(unk_0x91B73D905EA38F6B(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_162(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x9D40BBF80D8F5E8A() >= (uParam0->f_8 + uParam0->f_9))
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
				if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
				{
					if (func_166(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_165(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_165(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_166(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_153(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x9D40BBF80D8F5E8A() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
					{
						if (!func_166(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_165(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_165(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_166(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x9D40BBF80D8F5E8A();
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
				if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
				{
					if (!func_166(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_165(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_165(bParam1, bParam2, bParam3) || unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1) || unk_0xA93197082225A470(unk_0xE7869D5D7816A9B6(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_166(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x9D40BBF80D8F5E8A() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1))
					{
						if (func_164(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_163(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1) || func_163(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 1) || unk_0xA93197082225A470(unk_0xE7869D5D7816A9B6(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_164(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_153(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_157(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_168();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_163(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_157(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		if (!unk_0x21E4A126B001732E(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x8CCCC48313B0F20F(0, 140, 1);
			unk_0x8CCCC48313B0F20F(0, 80, 1);
			if (unk_0x8B4FAB242D8FEF11(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_164(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_157(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		unk_0x8CCCC48313B0F20F(0, 80, 1);
		if (unk_0xAB629695087578E9())
		{
			if (unk_0x8B4FAB242D8FEF11(0, 80))
			{
				unk_0x1B8E0930AB96444B(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_165(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_157(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		if (!unk_0x21E4A126B001732E(unk_0x3F80C6638E3A1A90()))
		{
			unk_0x8CCCC48313B0F20F(0, 140, 1);
			unk_0x8CCCC48313B0F20F(0, 80, 1);
			if (unk_0x2E080842BD1CBD38(0, 80) && unk_0x9D40BBF80D8F5E8A() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_166(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_157(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
	{
		unk_0x8CCCC48313B0F20F(0, 80, 1);
		if (unk_0xAB629695087578E9())
		{
			if (unk_0x2E080842BD1CBD38(0, 80) && unk_0x9D40BBF80D8F5E8A() > Global_116)
			{
				unk_0x1B8E0930AB96444B(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_167(int iParam0)
{
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		if (unk_0x8C1ED5BB2888BA25(iParam0))
		{
			if (unk_0xC45A34912542C4EB(unk_0xE59FAD6B5E1AA42D(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0x41B17741CACC905E(iParam0))
		{
			if (!unk_0xAF437D7C802AB246(unk_0x10E754B2E0DF2A70(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0xC2F1E05878620398(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_168()
{
	unk_0x9956FB0E4B50ECB8(&Global_2284, 4);
}

void func_169(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!unk_0x76B2D234F1895632(uParam1->f_2))
	{
		if (unk_0x915685CA559C211B(uParam1->f_2, unk_0xE7869D5D7816A9B6(), 0))
		{
			func_336(uParam0, "Taxi shot up the car", 12);
		}
	}
	else
	{
		func_336(uParam0, "Followee died", 13);
	}
	if ((unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 0 && unk_0xC45A34912542C4EB(uParam1->f_3, 0)) && !unk_0x76B2D234F1895632(uParam1->f_2))
	{
		unk_0x03C1B195D300CB1D(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
		unk_0x8D6671D78D1F569B(uParam1->f_2, 1);
		func_336(uParam0, "Player went wanted", 4);
	}
	func_178(uParam0, uParam1);
	if (unk_0xC45A34912542C4EB(uParam1->f_3, 0) && !unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (bParam3)
		{
			if (func_177(&(uParam1->f_3)))
			{
				unk_0x8FD11D9817727405(unk_0x1141852D07400777(uParam1->f_3, 1), 22.5f, 255, 0, 0, 60);
			}
			else if (func_176(&(uParam1->f_3)))
			{
				unk_0x8FD11D9817727405(unk_0x1141852D07400777(uParam1->f_3, 1), func_175(&(uParam1->f_3)), 255, 0, 0, 60);
			}
			else if (func_174(&(uParam1->f_3)))
			{
				unk_0x8FD11D9817727405(unk_0x1141852D07400777(uParam1->f_3, 1), 13f, 125, 0, 125, 60);
			}
		}
		if ((unk_0xF4E8009A18C52112(uParam1->f_3) < uParam1->f_15 || unk_0x915685CA559C211B(uParam1->f_3, unk_0xE7869D5D7816A9B6(), 1)) || unk_0x28E83575387AA2B1(uParam1->f_3) < uParam1->f_16)
		{
			if (unk_0x915685CA559C211B(uParam1->f_3, unk_0xE7869D5D7816A9B6(), 0))
			{
				func_336(uParam0, "Taxi shot up the car", 12);
			}
			if (func_106(uParam0, 13) > 5f)
			{
				func_173(uParam0, uParam1, 1);
			}
			else
			{
				uParam1->f_15 = unk_0xF4E8009A18C52112(uParam1->f_3);
				uParam1->f_5 = unk_0x8219941CC4732B36(uParam1->f_3);
				uParam1->f_16 = unk_0x28E83575387AA2B1(uParam1->f_3);
			}
		}
		if (func_47(uParam0->f_4, uParam1->f_3, 1) >= 120f)
		{
			if (func_47(uParam0->f_4, uParam1->f_3, 1) >= 480f)
			{
				func_235(uParam0, 143, 0, 0, 0);
				func_336(uParam0, "Taxi let the Chasee lose him", 2);
			}
			else if (!uParam1->f_21)
			{
				if ((func_172(&(uParam0->f_409), unk_0x1141852D07400777(uParam0->f_4, 1), unk_0x1141852D07400777(uParam1->f_3, 1), 0) == -1 && func_47(uParam0->f_4, uParam1->f_3, 1) >= 150f) && func_106(uParam0, 8) > 10f)
				{
					uParam1->f_21 = 1;
					uParam1->f_23 = 0;
					uParam1->f_9++;
					func_296(uParam0, 8, 0, 0);
					if (uParam1->f_9 > 3)
					{
						if (unk_0xC45A34912542C4EB(uParam1->f_3, 0) && !unk_0x76B2D234F1895632(uParam1->f_2))
						{
							unk_0x03C1B195D300CB1D(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
							unk_0x8D6671D78D1F569B(uParam1->f_2, 1);
						}
						func_336(uParam0, "Taxi let the Chasee lose him", 2);
					}
					else if (uParam1->f_9 == 3)
					{
						func_171(uParam0, 6, 1);
					}
					else
					{
						func_171(uParam0, 1, 1);
					}
					func_235(uParam0, 13, 1, 0, 0);
				}
			}
			else if (unk_0xF70F7CD913F23E2A(uParam0->f_4, uParam1->f_3, 17))
			{
				uParam1->f_21 = 0;
				func_296(uParam0, 8, 0, 0);
			}
			else if (func_47(uParam0->f_4, uParam1->f_3, 1) >= 300f)
			{
				func_235(uParam0, 143, 0, 0, 0);
				func_336(uParam0, "Taxi let the Chasee lose him", 2);
			}
		}
		else if (((func_47(uParam0->f_4, uParam1->f_3, 1) < 22.5f && func_177(&(uParam1->f_3))) || (func_47(uParam0->f_4, uParam1->f_3, 1) < 13f && func_174(&(uParam1->f_3)))) || (func_47(uParam0->f_4, uParam1->f_3, 1) < func_175(&(uParam1->f_3)) && func_176(&(uParam1->f_3))))
		{
			if (!uParam1->f_22 || func_170(uParam0, 21))
			{
				if ((unk_0xF70F7CD913F23E2A(uParam0->f_4, uParam1->f_3, 17) && func_106(uParam0, 8) > 10f) && bParam2)
				{
					uParam1->f_22 = 1;
					uParam1->f_23 = 0;
					uParam1->f_8++;
					uParam1->f_9++;
					func_296(uParam0, 8, 0, 0);
					if (!func_170(uParam0, 21))
					{
						func_296(uParam0, 21, 0, 0);
					}
					if (uParam1->f_9 > 3)
					{
						if (!func_192())
						{
							if (unk_0xC45A34912542C4EB(uParam1->f_3, 0) && !unk_0x76B2D234F1895632(uParam1->f_2))
							{
								unk_0x03C1B195D300CB1D(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
								unk_0x8D6671D78D1F569B(uParam1->f_2, 1);
							}
							func_336(uParam0, "Taxi was ID'd by the Chasee", 3);
						}
						else
						{
							func_140();
						}
					}
					else if (uParam1->f_9 == 3)
					{
						func_171(uParam0, 3, 1);
					}
					else
					{
						func_171(uParam0, 2, 1);
					}
					if (func_47(uParam0->f_4, uParam1->f_3, 1) < 15f)
					{
						if (!func_192())
						{
							func_235(uParam0, 143, 0, 0, 0);
							func_44();
							if (unk_0xC45A34912542C4EB(uParam1->f_3, 0) && !unk_0x76B2D234F1895632(uParam1->f_2))
							{
								unk_0x03C1B195D300CB1D(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
								unk_0x8D6671D78D1F569B(uParam1->f_2, 1);
							}
							func_336(uParam0, "Taxi was ID'd by the Chasee", 3);
						}
						else
						{
							func_140();
						}
					}
					else if (uParam1->f_9 <= 3)
					{
						func_235(uParam0, 13, 1, 0, 0);
					}
					uParam1->f_15 = unk_0xF4E8009A18C52112(uParam1->f_3);
				}
			}
		}
		else
		{
			if (func_170(uParam0, 21))
			{
				func_189(uParam0, 21, 0);
			}
			if (uParam1->f_22)
			{
				if (func_47(uParam0->f_4, uParam1->f_3, 1) > 22.5f)
				{
					uParam1->f_22 = 0;
					func_296(uParam0, 8, 0, 0);
				}
			}
			if (uParam1->f_21)
			{
				if (func_47(uParam0->f_4, uParam1->f_3, 1) < 150f && unk_0xF70F7CD913F23E2A(uParam0->f_4, uParam1->f_3, 17))
				{
					uParam1->f_21 = 0;
					func_296(uParam0, 8, 0, 0);
				}
			}
			if (!uParam1->f_23)
			{
				if (!uParam1->f_21 && !uParam1->f_22)
				{
					uParam1->f_23 = 1;
					func_171(uParam0, 8, 1);
					func_235(uParam0, 13, 1, 0, 0);
					func_296(uParam0, 8, 0, 0);
				}
			}
			else
			{
				if (uParam0->f_80 > uParam0->f_101)
				{
					uParam1->f_24 = 1;
				}
				if ((!uParam1->f_24 && !uParam1->f_21) && !uParam1->f_22)
				{
					if (func_106(uParam0, 8) > 15f && !func_192())
					{
						func_171(uParam0, 9, 1);
						func_235(uParam0, 13, 1, 0, 0);
						func_296(uParam0, 8, 0, 0);
					}
				}
			}
		}
	}
}

bool func_170(var uParam0, int iParam1)
{
	return func_13(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_171(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

int func_172(var uParam0, struct<3> Param1, struct<3> Param4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x1EAB9962ED64CF16(Param1, Param4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = unk_0x9CBE058E2C3ABB72(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
		if (iVar8 == 2)
		{
			if (bParam7)
			{
			}
			if (iVar6 == 0)
			{
				*uParam0 = 0;
				return iVar6;
			}
			else
			{
				if (bParam7)
				{
				}
				*uParam0 = 0;
				return iVar6;
			}
		}
		else if (iVar8 == 0)
		{
			if (bParam7)
			{
			}
			*uParam0 = 0;
		}
	}
	return -1;
}

void func_173(var uParam0, var uParam1, bool bParam2)
{
	uParam1->f_6++;
	uParam1->f_9++;
	if (uParam1->f_6 >= 1)
	{
		if (!func_192())
		{
			func_260(uParam0, 0, 1);
			if (unk_0xC45A34912542C4EB(uParam1->f_3, 0) && !unk_0x76B2D234F1895632(uParam1->f_2))
			{
				unk_0x03C1B195D300CB1D(uParam1->f_2, uParam1->f_3, uParam0->f_4, 8, 100f, 786468, 1000f, 1000f, 1);
				unk_0x8D6671D78D1F569B(uParam1->f_2, 1);
			}
			func_336(uParam0, "Taxi was ID'd by the Chasee", 3);
		}
		else
		{
			func_140();
		}
	}
	else
	{
		func_296(uParam0, 13, 0, 0);
		unk_0x29FD5B1A4BA65801(uParam1->f_3);
		func_171(uParam0, 10, 1);
		func_260(uParam0, 1, 0);
	}
	if (bParam2)
	{
	}
}

int func_174(var uParam0)
{
	if (unk_0xC45A34912542C4EB(*uParam0, 0))
	{
		if (unk_0x6D30046757C9C4F9(*uParam0) || unk_0xD4F0FC8FFEDE152B(*uParam0) < 4f)
		{
			return 1;
		}
	}
	return 0;
}

float func_175(var uParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar2 = 22.5f;
	fVar3 = 13f;
	if (unk_0xC45A34912542C4EB(*uParam0, 0))
	{
		fVar1 = unk_0xD4F0FC8FFEDE152B(*uParam0);
	}
	fVar0 = ((((fVar1 - 4f) / 11f) * (fVar2 - fVar3)) + fVar3);
	return fVar0;
}

int func_176(var uParam0)
{
	if (unk_0xC45A34912542C4EB(*uParam0, 0))
	{
		if (unk_0xD4F0FC8FFEDE152B(*uParam0) >= 4f && unk_0xD4F0FC8FFEDE152B(*uParam0) < 15f)
		{
			return 1;
		}
	}
	return 0;
}

int func_177(var uParam0)
{
	if (unk_0xC45A34912542C4EB(*uParam0, 0))
	{
		if (unk_0xD4F0FC8FFEDE152B(*uParam0) >= 15f)
		{
			return 1;
		}
	}
	return 0;
}

void func_178(var uParam0, var uParam1)
{
	if (unk_0xC45A34912542C4EB(uParam1->f_3, 0) && !unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
	{
		if (func_47(uParam0->f_4, uParam1->f_3, 1) < 120f)
		{
			if (uParam0->f_414 == 6 || uParam0->f_414 == 1)
			{
				if (func_179(uParam0) == 13)
				{
					func_111();
				}
			}
		}
		if (func_47(uParam0->f_4, uParam1->f_3, 1) >= 22.5f)
		{
			if (uParam0->f_414 == 3 || uParam0->f_414 == 2)
			{
				if (func_179(uParam0) == 13)
				{
					func_111();
				}
			}
		}
	}
}

int func_179(var uParam0)
{
	return uParam0->f_416;
}

void func_180(int iParam0, struct<3> Param1, float fParam4, var uParam5, int iParam6)
{
	if (!func_192())
	{
		if (unk_0xC45A34912542C4EB(iParam0, 0))
		{
			if (func_49(iParam0, Param1, 1) < fParam4)
			{
				if (func_182(uParam5))
				{
					func_181(uParam5, iParam6, -1);
				}
			}
		}
	}
}

void func_181(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = iParam2;
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

bool func_182(var uParam0)
{
	return *uParam0 == 0;
}

void func_183(var uParam0)
{
	if (func_186(uParam0))
	{
		func_184(uParam0);
	}
}

void func_184(var uParam0)
{
	if (unk_0xC2CAF88DF2FA5D09() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = unk_0x7510FF7BD6BD3BAE();
			func_189(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_106(uParam0, 20) > 3f)
				{
					func_235(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_21(uParam0->f_81, 262144) || !func_21(uParam0->f_81, 1048576))
				{
					if (func_106(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_235(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_21(uParam0->f_82, 67108864))
				{
					if (func_106(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_235(uParam0, 85, 1, 0, 0);
						func_189(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_106(uParam0, 20) > 8f)
				{
					func_235(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_21(uParam0->f_81, 262144) || func_21(uParam0->f_82, 67108864))
			{
				if (!func_170(uParam0, 22))
				{
					func_185(uParam0, 22);
				}
			}
			if (func_170(uParam0, 22) && func_106(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_21(uParam0->f_81, 1048576))
					{
						func_235(uParam0, 84, 1, 0, 0);
						func_189(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_21(uParam0->f_82, 134217728))
					{
						func_235(uParam0, 85, 1, 0, 0);
						func_189(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

void func_185(var uParam0, int iParam1)
{
	func_107(&(uParam0->f_146[iParam1 /*3*/]));
}

bool func_186(var uParam0)
{
	return uParam0->f_120;
}

int func_187(int iParam0, var uParam1)
{
	if (unk_0x44B59DB1458EE8E0(unk_0xBFAE5F9DEC53DAE2()) < 1)
	{
		if (unk_0xAF437D7C802AB246(iParam0))
		{
			if (!unk_0xAF437D7C802AB246(unk_0xE7869D5D7816A9B6()))
			{
				if (unk_0x915685CA559C211B(iParam0, unk_0xE7869D5D7816A9B6(), 1))
				{
					unk_0x1B1CE102A7E7999E(unk_0xBFAE5F9DEC53DAE2(), 1, 0);
					unk_0x6FF6F40CA433340F(unk_0xBFAE5F9DEC53DAE2(), 0);
					if (unk_0xD11595488376CB53(uParam1))
					{
						unk_0x5B62CAB9B0D6ABF1(&uParam1);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_188(var uParam0)
{
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (unk_0xBD6B21D725712BDE(uParam0->f_4, -1) == unk_0xE7869D5D7816A9B6())
		{
			return 1;
		}
	}
	return 0;
}

void func_189(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			func_97(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_97(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

int func_190(int iParam0, int iParam1)
{
	if (unk_0xC45A34912542C4EB(iParam1, 0))
	{
		if (!unk_0xAF437D7C802AB246(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_191()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 402.42f, -1457.19f, 28.82f };
	Var3 = { -701.25f, -1080.29f, 12.29f };
	if (Var3.f_0 <= Var0.f_0)
	{
		Local_964.f_0 = Var3.f_0;
		Local_967.f_0 = Var0.f_0;
	}
	else
	{
		Local_964.f_0 = Var0.f_0;
		Local_967.f_0 = Var3.f_0;
	}
	if (Var3.f_1 <= Var0.f_1)
	{
		Local_964.f_1 = Var3.f_1;
		Local_967.f_1 = Var0.f_1;
	}
	else
	{
		Local_964.f_1 = Var0.f_1;
		Local_967.f_1 = Var3.f_1;
	}
	Local_964 = { Local_964 - Vector(20f, 20f, 20f) };
	Local_967 = { Local_967 + Vector(20f, 20f, 20f) };
	unk_0x1A10579F8DE3BF6B(Local_964.f_0, Local_964.f_1, Local_967.f_0, Local_967.f_1);
}

int func_192()
{
	if (Global_15712 != 0 || unk_0xF0A330A29F97AA7E())
	{
		return 1;
	}
	return 0;
}

int func_193()
{
	func_143();
	if (iLocal_1144 < 9 && iLocal_1144 > 2)
	{
		if (func_139(iLocal_897))
		{
			iLocal_1144 = 9;
		}
	}
	switch (iLocal_1144)
	{
		case 0:
			if (func_138(1, 1, 1))
			{
				iLocal_897 = unk_0x9D40BBF80D8F5E8A();
				func_131(256, 0, 1);
				func_136(&uLocal_1082);
				func_135(&Local_1052, 2, 0);
				if (func_199(&Local_853, Local_934, fLocal_973))
				{
					unk_0x39895086D78BEA60(1346.9f, -1606.52f, 31.16f, 1457.25f, -1508.19f, 83.05f, 1, 1);
					func_134(&Local_423, 0f, 0f, 0f, 0f, 0f, 0f, 1112014848);
					func_235(&Local_423, 138, 1, 0, 0);
					iLocal_1144 = 1;
				}
			}
			break;
		
		case 1:
			if (func_106(&Local_423, 19) > 3f)
			{
				if (!unk_0xAF437D7C802AB246(Local_853.f_2))
				{
					unk_0x9BEE7E791BC4D38B(Local_853.f_2, 1);
					unk_0xFA2C5C2D054C888E(Local_853.f_2);
					if (unk_0xC45A34912542C4EB(Local_853.f_3, 0))
					{
						unk_0x33A90AD8FA327B72(&uLocal_414);
						unk_0x94026C1D1DB14225(&uLocal_414);
						unk_0x65682335D54DEA1C(0, Local_853.f_3, 20000, -1, 1f, 1, 0);
						unk_0xDCF460AE46C9489C(0, "veh@truck@ds@base", "start_engine", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
						unk_0x911ECBCE73F8EC3F(uLocal_414);
						unk_0xC2C4A3A9FF2FBFFF(Local_853.f_2, uLocal_414);
						unk_0x18F90CF5D756C783(Local_853.f_3, 1);
					}
				}
				unk_0xC460EB4DE5C459DC(unk_0xE7869D5D7816A9B6(), Local_423.f_17);
				unk_0x34F8B34A8E9D3B57(Local_423.f_0, func_198(0));
				unk_0x3B330DB318EF2761(Local_423.f_0, func_197(0), 2);
				unk_0xD2E0A9EDD55F008D(Local_423.f_0, 17.2f);
				unk_0x657EEE601EEC4152(Local_423.f_0, "HAND_SHAKE", 0.1f);
				unk_0x63498CF6CF35C6A2(Local_423.f_0, 1);
				unk_0x538689EF05955EF7(1, 0, 3000, 1, 0, 0);
				func_296(&Local_423, 19, 0, 0);
				iLocal_1144 = 2;
			}
			break;
		
		case 2:
			uLocal_422 = unk_0xF90D4D0A9F2F4A42(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 1115815936, 0, 2);
			unk_0x34F8B34A8E9D3B57(uLocal_422, func_198(4));
			unk_0x3B330DB318EF2761(uLocal_422, func_197(0), 2);
			unk_0xD2E0A9EDD55F008D(uLocal_422, 17.2f);
			unk_0x657EEE601EEC4152(uLocal_422, "HAND_SHAKE", 0.1f);
			unk_0x7D333E815920766B(uLocal_422, Local_423.f_0, 6000, 1, 1);
			func_296(&Local_423, 19, 0, 0);
			iLocal_1144 = 3;
			break;
		
		case 3:
			if (func_106(&Local_423, 19) > 7.85f && !iLocal_912)
			{
				if (func_179(&Local_423) > 10)
				{
					func_194();
				}
				iLocal_912 = 1;
			}
			if (func_106(&Local_423, 19) > 8f && iLocal_912)
			{
				unk_0x34F8B34A8E9D3B57(Local_423.f_0, func_198(2));
				unk_0xB98C70F0FFEA713A(Local_423.f_0, Local_853.f_3, 0f, 0f, 0f, 1);
				unk_0xD2E0A9EDD55F008D(Local_423.f_0, 35f);
				unk_0x657EEE601EEC4152(Local_423.f_0, "HAND_SHAKE", 0.2f);
				unk_0x63498CF6CF35C6A2(Local_423.f_0, 1);
				unk_0x538689EF05955EF7(1, 0, 3000, 1, 0, 0);
				func_296(&Local_423, 19, 0, 0);
				iLocal_1144 = 4;
			}
			break;
		
		case 4:
			unk_0x34F8B34A8E9D3B57(uLocal_422, func_198(2));
			unk_0xB98C70F0FFEA713A(uLocal_422, Local_853.f_3, 0f, 0f, 0f, 1);
			unk_0xD2E0A9EDD55F008D(uLocal_422, 45f);
			unk_0x657EEE601EEC4152(uLocal_422, "HAND_SHAKE", 0.2f);
			unk_0x7D333E815920766B(uLocal_422, Local_423.f_0, 10000, 1, 1);
			func_296(&Local_423, 19, 0, 0);
			iLocal_1144 = 11;
			break;
		
		case 9:
			if (!unk_0x76B2D234F1895632(Local_853.f_2) && !unk_0x76B2D234F1895632(Local_853.f_3))
			{
				if (!unk_0x51374A0BB2871E6E(Local_853.f_2, 0))
				{
					unk_0x0CC1C59D57D7212B(Local_853.f_2, Local_853.f_3, -1);
				}
				unk_0xA299DFC4364AB573(Local_853.f_3, 10f);
				func_100(&(Local_853.f_27));
				func_296(&Local_423, 19, 2f, 0);
				iLocal_1144 = 11;
				if (!bLocal_901)
				{
					func_194();
				}
			}
			break;
		
		case 11:
			if ((unk_0x9D40BBF80D8F5E8A() % 1000) < 50)
			{
			}
			if (unk_0x3CADAC7418851926(413.8f, -1416.19f, 29.26f, 5f, joaat("prop_sec_barrier_ld_02a"), 0))
			{
				unk_0x57196288096F5B83(joaat("prop_sec_barrier_ld_02a"), 413.8f, -1416.19f, 29.26f, 0, 0.85f, 0);
			}
			if (func_106(&Local_423, 19) > 4f)
			{
				unk_0x2D3BB3EF936C4B76(800);
				unk_0x7FB81B1DD14A3BE4(0);
				unk_0x6EF372C057320AD4(0, 1065353216);
				func_100(&(Local_853.f_27));
				unk_0x74FF6D08DE291367(Local_423.f_0, 0);
				unk_0x74FF6D08DE291367(uLocal_422, 0);
				func_124(1, 1, 1);
				unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
				func_189(&Local_423, 19, 0);
				iLocal_1144 = 12;
			}
			else if (func_106(&Local_423, 19) > 3.7f)
			{
				if (func_126())
				{
					if (!iLocal_914)
					{
						unk_0xCD0E4FEA8B60FCA3("CamPushInNeutral", 0, 0);
						unk_0xCC18B241D266EF14(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_914 = 1;
					}
				}
			}
			break;
		
		case 12:
			return 1;
			break;
	}
	return 0;
}

void func_194()
{
	bLocal_901 = true;
	if (!unk_0xAF437D7C802AB246(Local_853.f_2))
	{
		if (unk_0xC45A34912542C4EB(Local_853.f_3, 0))
		{
			if (unk_0x8AF655CC5761C7A2(Local_853.f_2, Local_853.f_3, 0))
			{
				unk_0x88A973CE47FBEF95(Local_853.f_3, 406.612f, -1419.937f, 29.00375f, 1, 0, 0, 1);
				unk_0x690C5239500171FE(Local_853.f_2, Local_853.f_30);
				unk_0x7E3DC7ED30B648F0(Local_853.f_2, 1, 1);
				unk_0x7E3DC7ED30B648F0(Local_853.f_2, 6, 0);
				unk_0x7E3DC7ED30B648F0(Local_853.f_2, 17, 0);
				unk_0x7E3DC7ED30B648F0(Local_853.f_2, 3, 0);
				unk_0x07B8B2D4A37EF139(Local_853.f_2, 500f);
				unk_0x13866008405A72EE(Local_853.f_2, 500f);
				unk_0xDA2CE8F608C0C0AF(Local_853.f_2, 500f);
				unk_0x9BEE7E791BC4D38B(Local_853.f_2, 1);
				unk_0x29627C73E3F24F9A(Local_853.f_3, 500);
				unk_0x29627C73E3F24F9A(Local_853.f_2, 500);
				unk_0xC602CB510D8B9EAE(Local_853.f_3, 1);
				unk_0xC602CB510D8B9EAE(Local_853.f_2, 1);
				if (!unk_0xD11595488376CB53(Local_853.f_4))
				{
					Local_853.f_4 = func_195(Local_853.f_3, 0, 0);
				}
				unk_0x9BEE7E791BC4D38B(Local_853.f_2, 1);
				unk_0x23F0735A27D6F6B3(Local_853.f_3, 120, "txm_fc_h1_", 1);
				unk_0xEB35A2486E0DCF8F(Local_853.f_3, 0.8f);
				iLocal_975 = unk_0x9D40BBF80D8F5E8A();
			}
		}
	}
}

int func_195(int iParam0, bool bParam1, bool bParam2)
{
	return func_196(iParam0, !bParam1, bParam2);
}

int func_196(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0xD51CFE69539DB6D8(iParam0))
	{
		return 0;
	}
	uVar0 = unk_0xF800CF9298ABC708(iParam0);
	if (unk_0x8C1ED5BB2888BA25(iParam0))
	{
		unk_0xFC630C7120A34CE4(uVar0, func_120(unk_0x00AAD79B42B3E036(), 1f, 1f));
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
		unk_0xFC630C7120A34CE4(uVar0, func_120(unk_0x00AAD79B42B3E036(), 0.7f, 0.7f));
		unk_0x4ADC112587E95B61(uVar0, bParam1);
	}
	else if (unk_0xC2F1E05878620398(iParam0))
	{
		unk_0xFC630C7120A34CE4(uVar0, func_120(unk_0x00AAD79B42B3E036(), 0.7f, 0.7f));
	}
	return uVar0;
}

Vector3 func_197(int iParam0)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -0.7535f, -0.0475f, 91.9877f };
			break;
		
		case 1:
			Var0 = { 4.2328f, 0f, 165.0072f };
			break;
		
		case 2:
			Var0 = { -0.3221f, 0f, 68.7635f };
			break;
		
		case 3:
			Var0 = { -0.3614f, 0f, -145.1533f };
			break;
		
		case 4:
			Var0 = { -5.4284f, 0f, 1.8065f };
			break;
		
		case 5:
			Var0 = { 1.2038f, 0f, 68.7635f };
			break;
		
		case 6:
			Var0 = { -2.1877f, 0f, 71.1648f };
			break;
	}
	return Var0;
}

Vector3 func_198(int iParam0)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 495.4f, -1416.8f, 30.2f };
			break;
		
		case 1:
			Var0 = { 429.6911f, -1385.415f, 29.7266f };
			break;
		
		case 2:
			Var0 = { 417.9f, -1419.4f, 30.6f };
			break;
		
		case 3:
			Var0 = { 426.754f, -1386.51f, 29.6201f };
			break;
		
		case 4:
			Var0 = { 493.7f, -1416.9f, 30.2f };
			break;
		
		case 5:
			Var0 = { 450.0146f, -1414.523f, 34.4507f };
			break;
		
		case 6:
			Var0 = { 448.2621f, -1413.842f, 34.4501f };
			break;
	}
	return Var0;
}

int func_199(var uParam0, struct<3> Param1, float fParam4)
{
	if (!unk_0xD51CFE69539DB6D8(uParam0->f_2))
	{
		uParam0->f_2 = unk_0xA7F4088D9A2629CC(26, *uParam0, Param1, fParam4, 1, 1);
	}
	func_7(&(Local_423.f_244), 4, uParam0->f_2, "TaxiJames", 0, 1);
	unk_0x0814FB03E16A03C1(uParam0->f_2, "TaxiJames");
	if (!unk_0x76B2D234F1895632(iLocal_890))
	{
		unk_0x1C26C4B0DAB91B21(iLocal_890, 20, 1);
	}
	if (!unk_0x76B2D234F1895632(uParam0->f_2))
	{
		unk_0x497AFDFE79EEFE4F(uParam0->f_2, 0, 1, 0, 0);
		unk_0x497AFDFE79EEFE4F(uParam0->f_2, 3, 0, 0, 0);
		unk_0x497AFDFE79EEFE4F(uParam0->f_2, 4, 0, 1, 0);
		unk_0x497AFDFE79EEFE4F(uParam0->f_2, 8, 0, 0, 0);
		unk_0x497AFDFE79EEFE4F(uParam0->f_2, 11, 0, 1, 0);
		unk_0x690C5239500171FE(uParam0->f_2, uParam0->f_30);
		unk_0x7E3DC7ED30B648F0(uParam0->f_2, 1, 1);
		unk_0x7E3DC7ED30B648F0(uParam0->f_2, 6, 1);
		unk_0x7E3DC7ED30B648F0(uParam0->f_2, 17, 1);
		unk_0x7E3DC7ED30B648F0(uParam0->f_2, 3, 0);
		unk_0x07B8B2D4A37EF139(uParam0->f_2, 300f);
		unk_0x13866008405A72EE(uParam0->f_2, 300f);
		unk_0xDA2CE8F608C0C0AF(uParam0->f_2, 300f);
		unk_0x9BEE7E791BC4D38B(uParam0->f_2, 1);
	}
	return 1;
}

int func_200(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if ((((unk_0xDE185266FE919B68() && !unk_0x845A95C48FA19489()) && !unk_0xA864A37DA392324A()) && !unk_0xAEF17BDE274A1247()) && !uParam0->f_142)
	{
		if (func_212(uParam0))
		{
			func_122(uParam0, &(uParam0->f_43));
			func_207(uParam0);
			func_206(uParam0);
			func_183(uParam0);
			func_205(uParam0, fParam2, fParam3);
			func_203(uParam0);
			return func_201(uParam0, iParam1);
		}
	}
	return 0;
}

int func_201(var uParam0, int iParam1)
{
	if (func_62(uParam0) == 2)
	{
		if (unk_0x3761EA7F8628B81A(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_202(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && unk_0x44B59DB1458EE8E0(unk_0xBFAE5F9DEC53DAE2()) < 1) && func_138(1, 1, 1)) && unk_0x0E9BAAAE8317091B(uParam0->f_4))
		{
			return func_116(uParam0, 1, iParam1);
		}
	}
	else if (((unk_0x3761EA7F8628B81A(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && unk_0x44B59DB1458EE8E0(unk_0xBFAE5F9DEC53DAE2()) < 1) && func_138(1, 1, 1)) && unk_0x0E9BAAAE8317091B(uParam0->f_4))
	{
		return func_116(uParam0, 1, iParam1);
	}
	return 0;
}

float func_202(int iParam0, struct<3> Param1, int iParam4)
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

void func_203(var uParam0)
{
	float fVar0;
	
	if ((func_204(uParam0) && func_21(uParam0->f_81, 67108864)) && unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) == 0)
	{
		if ((unk_0x9D40BBF80D8F5E8A() - iLocal_97) >= 10000)
		{
			fVar0 = func_48(uParam0->f_17, 1);
			if (fVar0 > fLocal_95)
			{
				iLocal_96++;
			}
			else
			{
				iLocal_96 = 0;
			}
			fLocal_95 = fVar0;
			iLocal_97 = unk_0x9D40BBF80D8F5E8A();
		}
		if (iLocal_96 >= 2 && !func_192())
		{
			func_235(uParam0, 136, 1, 0, 1);
			iLocal_96 = 0;
		}
		if ((unk_0x9D40BBF80D8F5E8A() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((unk_0x9D40BBF80D8F5E8A() % 4000) < 50)
		{
			if (!func_204(uParam0))
			{
			}
			if (!func_21(uParam0->f_81, 67108864))
			{
			}
		}
		if (unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 0)
		{
			if (iLocal_96 > 0)
			{
				iLocal_96 = 0;
			}
		}
	}
}

int func_204(var uParam0)
{
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (!unk_0xAF437D7C802AB246(uParam0->f_3))
		{
			if (unk_0x8AF655CC5761C7A2(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_205(var uParam0, float fParam1, float fParam2)
{
	if (func_204(uParam0) && func_21(uParam0->f_44, 4))
	{
		if ((unk_0x6D30046757C9C4F9(uParam0->f_4) || unk_0xD4F0FC8FFEDE152B(uParam0->f_4) < 3f) && func_188(uParam0))
		{
			if (!func_170(uParam0, 2))
			{
				func_185(uParam0, 2);
			}
			else if (func_204(uParam0))
			{
				if (func_106(uParam0, 2) > fParam1 && !func_170(uParam0, 14))
				{
					if (func_33())
					{
						func_235(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_235(uParam0, 48, 1, 0, 0);
					}
					func_296(uParam0, 2, 0, 0);
					if (func_170(uParam0, 10))
					{
						func_296(uParam0, 10, 0, 0);
					}
				}
				if (!func_170(uParam0, 3))
				{
					func_296(uParam0, 3, 0, 0);
				}
				else if (func_106(uParam0, 3) >= fParam2)
				{
					func_189(uParam0, 3, 0);
					func_336(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_170(uParam0, 2))
			{
				func_189(uParam0, 2, 0);
			}
			if (func_170(uParam0, 3))
			{
				func_189(uParam0, 3, 0);
			}
		}
	}
}

void func_206(var uParam0)
{
	if (unk_0x3F029B262D36DD77(unk_0xBFAE5F9DEC53DAE2()) && !func_21(uParam0->f_44, 2))
	{
		func_63(&(uParam0->f_44), 2);
	}
	else if (!unk_0x3F029B262D36DD77(unk_0xBFAE5F9DEC53DAE2()) && func_21(uParam0->f_44, 2))
	{
		func_19(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_51(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_235(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + unk_0x11E019C8F43ACC8A(5f));
	}
}

void func_207(var uParam0)
{
	if (!func_21(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (unk_0x44B59DB1458EE8E0(unk_0xBFAE5F9DEC53DAE2()) >= 1)
				{
					if (func_106(uParam0, 9) > 1f)
					{
						func_211(uParam0, unk_0x44B59DB1458EE8E0(unk_0xBFAE5F9DEC53DAE2()));
						if (uParam0->f_410 != 22)
						{
							func_235(uParam0, 50, 1, 1, 0);
						}
						func_296(uParam0, 9, 0, 0);
						if (unk_0xD11595488376CB53(uParam0->f_9))
						{
							unk_0x95FCF148333C6A88(uParam0->f_9, 0);
							unk_0x1AD7485666C5160C(uParam0->f_9, 0);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_192() && func_106(uParam0, 9) > 4f)
				{
					func_235(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_210("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_235(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (unk_0x44B59DB1458EE8E0(unk_0xBFAE5F9DEC53DAE2()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (unk_0x51AFBB2BC4E2AAFD(unk_0xBFAE5F9DEC53DAE2(), func_209(uParam0)))
				{
					func_211(uParam0, unk_0x44B59DB1458EE8E0(unk_0xBFAE5F9DEC53DAE2()));
					func_51(6, 0);
				}
				if (!func_208(uParam0))
				{
					if (!unk_0xF0A330A29F97AA7E())
					{
						if (func_106(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_235(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (unk_0x44B59DB1458EE8E0(unk_0xBFAE5F9DEC53DAE2()) < 1)
				{
					if (func_210("TAXI_OBJ_POL", 0, 0))
					{
						unk_0x00400F14096FE01D();
					}
					if (unk_0xD11595488376CB53(uParam0->f_9))
					{
						unk_0x95FCF148333C6A88(uParam0->f_9, 255);
						unk_0x1AD7485666C5160C(uParam0->f_9, 1);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_192())
				{
					if (uParam0->f_410 != 22)
					{
						func_235(uParam0, 53, 1, 0, 1);
					}
					func_51(7, func_209(uParam0));
					func_211(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_192())
				{
					func_189(uParam0, 9, 0);
					func_296(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_208(var uParam0)
{
	return uParam0->f_110;
}

int func_209(var uParam0)
{
	return uParam0->f_106;
}

bool func_210(char* sParam0, int iParam1, int iParam2)
{
	unk_0x589BB5028182386C(sParam0);
	if (iParam1 == 1)
	{
		unk_0x9359E7CC54335EB9(iParam2);
	}
	return unk_0x9E606060DFAF139A();
}

void func_211(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

int func_212(var uParam0)
{
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (!unk_0xAF437D7C802AB246(uParam0->f_3))
		{
			if (!unk_0x8AF655CC5761C7A2(uParam0->f_3, uParam0->f_4, 1) && !unk_0xF3140D055686CF79(uParam0->f_3))
			{
				func_336(uParam0, "Passenger left car.", 9);
			}
			else if (func_222(uParam0))
			{
				if (func_210("TAXI_OBJ_PICKUP", 0, 0))
				{
					unk_0x621ABFDE5A901516("TAXI_OBJ_PICKUP");
				}
				if (unk_0xDE185266FE919B68())
				{
					return 1;
				}
			}
			else
			{
				if ((unk_0x9D40BBF80D8F5E8A() % 1000) < 50)
				{
				}
				func_213(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_213(var uParam0, bool bParam1)
{
	func_221(uParam0, uParam0->f_3);
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (!unk_0x8AF655CC5761C7A2(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_170(uParam0, 14))
			{
				if (func_192())
				{
					func_220(1);
				}
				func_171(uParam0, 11, 1);
				func_215(uParam0, 1);
				func_296(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_204(uParam0))
				{
					if ((unk_0x9D40BBF80D8F5E8A() % 1000) < 50)
					{
					}
					if (unk_0x51374A0BB2871E6E(uParam0->f_2, 0))
					{
						if (func_106(uParam0, 15) > 5f)
						{
							func_296(uParam0, 15, 0f, 1);
						}
					}
					if (func_106(uParam0, 14) > 20f)
					{
						func_336(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_106(uParam0, 14) > 20f)
				{
					if (func_214(uParam0->f_4, 1) > 40f)
					{
						func_336(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_336(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

float func_214(int iParam0, int iParam1)
{
	return func_47(unk_0x91B73D905EA38F6B(unk_0xBFAE5F9DEC53DAE2()), iParam0, iParam1);
}

void func_215(var uParam0, bool bParam1)
{
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (unk_0xD11595488376CB53(uParam0->f_8))
			{
				unk_0x95FCF148333C6A88(uParam0->f_8, 0);
				unk_0x1AD7485666C5160C(uParam0->f_8, 0);
				func_219(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (unk_0xD11595488376CB53(uParam0->f_9))
			{
				unk_0x95FCF148333C6A88(uParam0->f_9, 0);
				unk_0x1AD7485666C5160C(uParam0->f_9, 0);
				unk_0x00400F14096FE01D();
				if (func_204(uParam0))
				{
					func_235(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_219(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_216(uParam0, 0, 0);
		}
		else if (unk_0xD11595488376CB53(uParam0->f_10))
		{
			unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_10));
			if (unk_0xD11595488376CB53(uParam0->f_8))
			{
				unk_0x95FCF148333C6A88(uParam0->f_8, 255);
				unk_0x1AD7485666C5160C(uParam0->f_8, 1);
			}
			else if (unk_0xD11595488376CB53(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					unk_0x95FCF148333C6A88(uParam0->f_9, 0);
					unk_0x1AD7485666C5160C(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					unk_0x95FCF148333C6A88(uParam0->f_9, 255);
					unk_0x1AD7485666C5160C(uParam0->f_9, 1);
				}
			}
			unk_0x00400F14096FE01D();
		}
	}
}

void func_216(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_417(uParam0);
	}
	if (!unk_0xD11595488376CB53(uParam0->f_10))
	{
		uParam0->f_10 = func_196(uParam0->f_4, 1, 0);
		unk_0x227FC39A4871C64F(uParam0->f_10, "TAXI_BLIP_CAR");
		unk_0x1AD7485666C5160C(uParam0->f_10, 1);
		func_217(uParam0);
		if (bParam2)
		{
			unk_0x00400F14096FE01D();
			func_235(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_217(var uParam0)
{
	func_296(uParam0, 14, 0, 0);
	func_218();
}

void func_218()
{
	int iVar0;
	
	iVar0 = unk_0xA0B1717D806F4901();
	if (unk_0xC45A34912542C4EB(iVar0, 0))
	{
		unk_0x3A8AEDC6680712C1(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_219(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_21(*uParam1, iParam2))
	{
		unk_0x00400F14096FE01D();
		func_235(uParam0, iParam3, 1, 0, 0);
		func_63(uParam1, iParam2);
	}
}

void func_220(int iParam0)
{
	Global_16723 = iParam0;
}

void func_221(var uParam0, int iParam1)
{
	if (unk_0xD51CFE69539DB6D8(iParam1))
	{
		if (!unk_0xAF437D7C802AB246(iParam1))
		{
			if (unk_0xDB3D41842CEA074F(unk_0x3F80C6638E3A1A90()))
			{
				if ((unk_0xA180067B477D9371(iParam1, joaat("weapon_stungun"), 0) || unk_0xA180067B477D9371(iParam1, 0, 2)) || unk_0xA180067B477D9371(iParam1, 0, 1))
				{
					func_336(uParam0, "Passenger injured by player with weapon.", 14);
				}
				unk_0xE03E82B34235FC17(unk_0x3F80C6638E3A1A90());
			}
		}
	}
}

int func_222(var uParam0)
{
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (unk_0xBD6B21D725712BDE(uParam0->f_4, -1) == uParam0->f_2)
		{
			if (func_170(uParam0, 14))
			{
				func_223(uParam0);
			}
			func_215(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_223(var uParam0)
{
	func_189(uParam0, 14, 0);
	func_189(uParam0, 15, 0);
	func_225();
	if (func_224())
	{
		func_220(0);
	}
}

int func_224()
{
	if (Global_16723 == 1)
	{
		return 1;
	}
	return 0;
}

void func_225()
{
	var uVar0;
	
	uVar0 = unk_0xA0B1717D806F4901();
	if (unk_0xC45A34912542C4EB(uVar0, 0))
	{
		unk_0x3A8AEDC6680712C1(-1, "Radio_On", iVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_226(var uParam0, var uParam1)
{
	func_121(uParam0, uParam1->f_2, 1, 1);
	if (unk_0xC45A34912542C4EB(uParam1->f_3, 0))
	{
		if (unk_0x915685CA559C211B(uParam1->f_3, unk_0xE7869D5D7816A9B6(), 1))
		{
			if (!func_192())
			{
				func_336(&Local_423, "Target's vehicle has been damaged by the player", 3);
			}
			else
			{
				func_140();
			}
		}
	}
	else if (!func_192())
	{
		func_336(&Local_423, "Target's vehicle isn't driveable", 13);
	}
	else
	{
		func_140();
	}
}

int func_227(var uParam0, struct<3> Param1, float fParam4)
{
	uParam0->f_17 = { Param1 };
	uParam0->f_10 = fParam4;
	uParam0->f_3 = unk_0xD504D1FF5DD2FFD7(uParam0->f_1, uParam0->f_17, uParam0->f_10, 1, 1);
	unk_0x7E38E815EF844C74(uParam0->f_1, 1);
	unk_0x839E9476E54502A2(uParam0->f_1);
	uLocal_417[0] = unk_0xD504D1FF5DD2FFD7(iLocal_888, 404.9912f, -1423.974f, 28.4638f, 227.5235f, 1, 1);
	uLocal_417[1] = unk_0xD504D1FF5DD2FFD7(iLocal_888, 402.2958f, -1427.018f, 28.4632f, 226.6982f, 1, 1);
	uLocal_417[2] = unk_0xD504D1FF5DD2FFD7(iLocal_889, 398.415f, -1428.167f, 28.4504f, 226.4081f, 1, 1);
	unk_0x18F90CF5D756C783(uLocal_417[0], 2);
	unk_0x18F90CF5D756C783(uLocal_417[1], 2);
	unk_0x18F90CF5D756C783(uLocal_417[2], 2);
	unk_0xAA38ABB77E443507(uLocal_417[0], "BRAVEST");
	unk_0xAA38ABB77E443507(uLocal_417[1], "BOLDEST");
	unk_0xAA38ABB77E443507(uLocal_417[2], "BADDEST");
	unk_0x09714949CF524B00(uParam0->f_3, 800);
	unk_0xAA38ABB77E443507(uParam0->f_3, "PUSSYWAG");
	unk_0x12F88FDE652A5758(uParam0->f_3, 1);
	unk_0x174FED9630483D03(uParam0->f_3, 1);
	uParam0->f_15 = unk_0xF4E8009A18C52112(uParam0->f_3);
	uParam0->f_31 = 1;
	unk_0x059F430B70190AB2(uParam0->f_3, 1);
	func_232(Local_423.f_14, 1, 1114636288);
	func_232(Local_958, 1, 15f);
	func_232(Local_961, 1, 15f);
	unk_0x18F90CF5D756C783(uParam0->f_3, 2);
	return 1;
}

int func_228()
{
	if (!unk_0x5053BF6D5604065B(Local_853.f_0))
	{
		func_132("TAXI_ASSETS_FC_STAGE_02 - Loading escape ped", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x5053BF6D5604065B(Local_853.f_1))
	{
		func_132("TAXI_ASSETS_FC_STAGE_02 - Loading escape car", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x5053BF6D5604065B(iLocal_888))
	{
		func_132("TAXI_ASSETS_FC_STAGE_02 - Loading ambulance", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x5053BF6D5604065B(iLocal_889))
	{
		func_132("TAXI_ASSETS_FC_STAGE_02 - Loading hospital car 2", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x08F84BB137ADEE81(120, "txm_fc_h1_"))
	{
		func_132("TAXI_ASSETS_FC_STAGE_02 - Vehicle Recording Loading txm_fc_h1_...", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x08F84BB137ADEE81(0, "taxi_oj_fc3"))
	{
		func_132("TAXI_ASSETS_FC_STAGE_02 - Vehicle Recording Loading taxi_oj_fc3...", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x729A24E50365D07B(&cLocal_976))
	{
		func_132("TAXI_ASSETS_FC_STAGE_02 - Way point Recording Loading taxi_oj_fc...", &iLocal_896, 1000);
		return 0;
	}
	if (!unk_0x2917D5E1CB5CE43A("veh@truck@ds@base"))
	{
		return 0;
	}
	return 1;
}

void func_229(var uParam0, var uParam1)
{
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (!unk_0x8AF655CC5761C7A2(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_170(uParam0, 14))
			{
				if (unk_0xD11595488376CB53(*uParam1) && unk_0x86EA9787AE151BBA(*uParam1) > 0)
				{
					unk_0x95FCF148333C6A88(*uParam1, 0);
				}
				func_216(uParam0, 0, 0);
				func_235(uParam0, 2, 1, 0, 0);
			}
			else if (func_106(uParam0, 14) > 20f)
			{
				func_336(uParam0, "Player not in taxi - HANDLE BLIPS", 8);
			}
		}
		else
		{
			if (func_170(uParam0, 14))
			{
				func_296(uParam0, 2, 0, 0);
				func_223(uParam0);
			}
			if (unk_0xD11595488376CB53(uParam0->f_10))
			{
				unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_10));
			}
			if ((unk_0xD11595488376CB53(*uParam1) && unk_0x86EA9787AE151BBA(*uParam1) < 255) && unk_0x44B59DB1458EE8E0(unk_0xBFAE5F9DEC53DAE2()) < 1)
			{
				unk_0x95FCF148333C6A88(*uParam1, 255);
				unk_0x1AD7485666C5160C(*uParam1, 1);
			}
		}
	}
}

void func_230(var uParam0)
{
	func_231(uParam0, 1000);
	if (!unk_0x76B2D234F1895632(uParam0->f_3) && !unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		unk_0xDE31B2587775EDAD(uParam0->f_3);
		unk_0x58F62EDF6111D598(uParam0->f_3, unk_0xE7869D5D7816A9B6(), 0);
	}
	func_140();
	func_223(uParam0);
}

void func_231(var uParam0, int iParam1)
{
	if (unk_0xCF686B56FD5328B5(*uParam0))
	{
		unk_0x74FF6D08DE291367(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		unk_0x538689EF05955EF7(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
	}
}

void func_232(struct<3> Param0, bool bParam3, float fParam4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_36(Param0, 1f, -fParam4, -fParam4, -fParam4) };
	Var3 = { func_36(Param0, 1f, fParam4, fParam4, fParam4) };
	Var0.f_2 = (Var0.f_2 - 22f);
	Var3.f_2 = (Var3.f_2 + 22f);
	if (!bParam3)
	{
		unk_0x39895086D78BEA60(Var0, Var3, 0, 1);
	}
	else
	{
		unk_0x3EB6E5FC1FA6912C(Var0, Var3, 1);
		unk_0x1D23906D962EED92();
	}
}

void func_233()
{
	func_63(&(Local_423.f_55), 2);
	func_63(&(Local_423.f_55), 4);
	func_63(&(Local_423.f_55), 16);
	func_63(&(Local_423.f_55), 64);
	func_63(&(Local_423.f_55), 256);
	func_63(&(Local_423.f_55), 512);
	func_63(&(Local_423.f_55), 1024);
	func_63(&(Local_423.f_55), 2048);
	func_63(&(Local_423.f_55), 1073741824);
	func_63(&(Local_423.f_55), 8388608);
	func_63(&(Local_423.f_55), 33554432);
	func_63(&(Local_423.f_55), 16777216);
	func_63(&(Local_423.f_55), 4096);
	func_63(&(Local_423.f_100), 8);
	func_63(&(Local_423.f_100), 2048);
	func_63(&(Local_423.f_100), 256);
	func_63(&uLocal_1125, 2);
}

void func_234(var uParam0)
{
	unk_0xE03E82B34235FC17(unk_0x3F80C6638E3A1A90());
	unk_0x8FE59DE2329CBE64(unk_0xBFAE5F9DEC53DAE2(), 1, 0);
	func_231(uParam0, 1000);
}

void func_235(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_296(uParam0, 16, 4f, 0);
		if (func_236(uParam0))
		{
			func_44();
		}
	}
	func_260(uParam0, iParam2, bParam3);
}

int func_236(var uParam0)
{
	struct<3> Var0;
	struct<6> Var6;
	
	StringCopy(&Var0, uParam0->f_143, 24);
	if (func_192())
	{
		Var6 = { func_238() };
		if (!unk_0xF6917DE0E003509D(&Var6))
		{
			StringConCat(&Var0, "_obj1", 24);
			if (unk_0x04E7E853E31F41A3(&Var6, &Var0))
			{
				return 1;
			}
			StringCopy(&Var0, uParam0->f_143, 24);
			StringConCat(&Var0, "_gret1", 24);
			func_237(&Var0);
			if (unk_0x04E7E853E31F41A3(&Var6, &Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_237(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_238()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		return Global_15331;
	}
	return Var0;
}

int func_239(var uParam0)
{
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (!unk_0xAF437D7C802AB246(uParam0->f_3))
		{
			if ((unk_0xF3140D055686CF79(uParam0->f_3) && (unk_0x9D40BBF80D8F5E8A() - iLocal_89) > 500) || unk_0x8AF655CC5761C7A2(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_240()
{
	unk_0x801429C020C467BA(Local_853.f_0);
	unk_0x801429C020C467BA(Local_853.f_1);
	unk_0x801429C020C467BA(iLocal_888);
	unk_0x801429C020C467BA(iLocal_889);
	unk_0xDBDFBE5906702D9E(120, "txm_fc_h1_");
	unk_0xDBDFBE5906702D9E(0, "taxi_oj_fc3");
	unk_0xCBEB830866A6963D(&cLocal_976);
	unk_0x2B0BB514F9140141("veh@truck@ds@base");
}

int func_241(var uParam0, bool bParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (!unk_0x8AF655CC5761C7A2(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((unk_0x9D40BBF80D8F5E8A() % 1000) < 50)
			{
			}
			func_213(uParam0, 1);
			if (func_31())
			{
				unk_0x8FE59DE2329CBE64(unk_0xBFAE5F9DEC53DAE2(), 1, 0);
			}
			if (unk_0xC47857E5E74EA5AF(uParam0->f_3, 2106541073) == 1 || unk_0xC47857E5E74EA5AF(uParam0->f_3, 2106541073) == 0)
			{
				unk_0xDE31B2587775EDAD(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_87 = 0;
				unk_0x58F62EDF6111D598(uParam0->f_3, unk_0xE7869D5D7816A9B6(), 0);
			}
		}
		else if (unk_0x51AFBB2BC4E2AAFD(unk_0xBFAE5F9DEC53DAE2(), 0))
		{
			func_258(uParam0);
			if (uParam0->f_48 > 1)
			{
				unk_0x33A90AD8FA327B72(&uVar3);
				unk_0x94026C1D1DB14225(&uVar3);
				unk_0x33E113E52A91C5C3(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				unk_0x58F62EDF6111D598(0, uParam0->f_4, 0);
				unk_0x911ECBCE73F8EC3F(uVar3);
				unk_0xC2C4A3A9FF2FBFFF(uParam0->f_3, uVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_170(uParam0, 14))
			{
				func_223(uParam0);
				func_215(uParam0, 0);
			}
			if (func_170(uParam0, 9))
			{
				func_189(uParam0, 9, 0);
				unk_0x00400F14096FE01D();
				if (unk_0xD11595488376CB53(uParam0->f_8))
				{
					unk_0x95FCF148333C6A88(uParam0->f_8, 255);
					unk_0x1AD7485666C5160C(uParam0->f_8, 1);
				}
			}
			if (!unk_0x76B2D234F1895632(uParam0->f_3))
			{
				fVar4 = ((unk_0xD4F0FC8FFEDE152B(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_257(uParam0, uParam0->f_3) > 300f)
				{
					func_336(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (unk_0xC47857E5E74EA5AF(uParam0->f_3, 242628503) != 1 || ((func_47(unk_0xE7869D5D7816A9B6(), uParam0->f_3, 1) < 20f && func_202(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_202(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_254(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_253(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_94)
							{
								uParam0->f_7 = func_252(uParam0->f_4, uParam0->f_3);
								iVar0 = func_251(uParam0, &iVar1);
								if (!unk_0x76B2D234F1895632(iVar0))
								{
									if (iVar1 == uParam0->f_7)
									{
										if (uParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (uParam0->f_7 == 2)
										{
											iVar2 = 131072;
										}
										unk_0xCD7A5BCC47D00FB2(iVar0, 0, iVar2);
									}
									else
									{
										unk_0xCD7A5BCC47D00FB2(iVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (unk_0xE8C390D56BE854E1(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!unk_0x76B2D234F1895632(iVar0))
											{
												unk_0xCD7A5BCC47D00FB2(iVar0, 0, 4096);
											}
										}
									}
								}
							}
							unk_0xFA2C5C2D054C888E(uParam0->f_3);
							unk_0x65682335D54DEA1C(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								unk_0x8FD11D9817727405(unk_0x1141852D07400777(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_188(uParam0))
							{
								unk_0xFA2C5C2D054C888E(uParam0->f_3);
							}
							else if (((unk_0xC47857E5E74EA5AF(uParam0->f_3, 242628503) != 1 && unk_0xC47857E5E74EA5AF(uParam0->f_3, 242628503) != 0) && unk_0xC47857E5E74EA5AF(uParam0->f_3, 242628503) != 7) && func_257(uParam0, uParam0->f_3) > 8f)
							{
								unk_0x33A90AD8FA327B72(&(uParam0->f_243));
								unk_0x94026C1D1DB14225(&(uParam0->f_243));
								unk_0x58F62EDF6111D598(0, unk_0xE7869D5D7816A9B6(), 0);
								if (uParam0->f_411 != 9)
								{
									unk_0xDCF460AE46C9489C(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									unk_0xDCF460AE46C9489C(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								unk_0x911ECBCE73F8EC3F(uParam0->f_243);
								unk_0xC2C4A3A9FF2FBFFF(uParam0->f_3, uParam0->f_243);
							}
							if (unk_0x23417CDB252083F9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								unk_0x8CAD7018AB2D288A(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_94)
						{
							if (func_47(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_250(uParam0, 1))
								{
									unk_0xDE31B2587775EDAD(uParam0->f_3);
									func_336(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_249(uParam0->f_4))
								{
									unk_0xDE31B2587775EDAD(uParam0->f_3);
									func_336(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_247(uParam0);
						if (func_257(uParam0, uParam0->f_3) < fVar4 || func_31())
						{
							if (unk_0x8AF655CC5761C7A2(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_243(uParam0))
								{
									func_242(uParam0);
									iLocal_89 = unk_0x9D40BBF80D8F5E8A();
									unk_0x1C26C4B0DAB91B21(uParam0->f_3, 26, 1);
									func_189(uParam0, 5, 0);
									unk_0x59192BA17AF112CB();
									unk_0xB63C332FD6AA5D49(uParam0->f_428, &(uParam0->f_42), -1);
									unk_0xD9404A1491ECECC4(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							unk_0x8FD11D9817727405(unk_0x1141852D07400777(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_242(var uParam0)
{
	if (unk_0xD11595488376CB53(uParam0->f_8))
	{
		unk_0x1AD7485666C5160C(uParam0->f_8, 0);
		unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_8));
	}
}

int func_243(var uParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	
	func_132("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!unk_0x76B2D234F1895632(uParam0->f_3) && !unk_0x76B2D234F1895632(uParam0->f_4))
	{
		func_143();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_139(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_116(uParam0, 0, 1084227584) && func_138(1, 1, 1))
			{
				if (func_250(uParam0, 1))
				{
					iLocal_88 = unk_0x9D40BBF80D8F5E8A();
					unk_0xC1B1E9A034A63A62(0);
					iLocal_86 = 1;
				}
				else
				{
					func_336(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (unk_0x83666F9FB8FEBD4B() > 500)
			{
				uParam0->f_7 = func_252(uParam0->f_4, uParam0->f_3);
				iVar9 = func_251(uParam0, &iVar10);
				if (!unk_0x76B2D234F1895632(iVar9))
				{
					if (iVar10 == uParam0->f_7)
					{
						if (uParam0->f_7 == 1)
						{
							iVar11 = 262144;
						}
						else
						{
							iVar11 = 131072;
						}
						unk_0xCD7A5BCC47D00FB2(iVar9, 0, iVar11);
					}
					else
					{
						unk_0xCD7A5BCC47D00FB2(iVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (unk_0xE8C390D56BE854E1(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!unk_0x76B2D234F1895632(iVar9))
						{
							unk_0xCD7A5BCC47D00FB2(iVar9, 0, 4096);
						}
					}
				}
				iLocal_86 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_7 == 0)
			{
				Var6 = { 1.5f, 0f, -0.6422f };
				Var0 = { -1.4309f, 3.958f, 3.5037f };
				Var3 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (uParam0->f_7 == 2)
			{
				Var6 = { 1.5f, -1f, -0.6422f };
				Var0 = { 1.4309f, 3.958f, 0.5037f };
				Var3 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else
			{
				Var6 = { -1.5f, -1f, -0.6422f };
				Var0 = { -1.4823f, 4.2333f, 0.5939f };
				Var3 = { -0.4718f, 1.4282f, 0.3619f };
			}
			iVar12 = func_172(&(uParam0->f_409), unk_0xBD306D8AFEF4E078(uParam0->f_4, 0f, 2.2f, 0.275f), unk_0xBD306D8AFEF4E078(uParam0->f_4, Var0), 1);
			if (iVar12 == 1)
			{
				Var0.f_2 = (Var0.f_2 + 1.5f);
				if (uParam0->f_7 == 2)
				{
					Var3 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar12 != -1)
			{
				func_131(0, 0, 1);
				unk_0xB0A7E0A62FB61A06(unk_0x1141852D07400777(uParam0->f_4, 1), 3f, 0);
				unk_0xFF08C54E7EC23A77(unk_0x1141852D07400777(uParam0->f_4, 1), 25f, 0);
				unk_0x1D208E4A4E1D4FFE(1);
				unk_0x00400F14096FE01D();
				func_111();
				func_260(uParam0, 0, 0);
				Var13 = { unk_0xBD306D8AFEF4E078(uParam0->f_4, Var6) };
				unk_0x88A973CE47FBEF95(uParam0->f_3, Var13, 1, 0, 0, 1);
				unk_0x151F32CB40BE730C(uParam0->f_3, func_245(uParam0));
				func_134(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				unk_0x34F8B34A8E9D3B57(*uParam0, unk_0xBD306D8AFEF4E078(uParam0->f_4, Var0));
				unk_0xB98C70F0FFEA713A(*uParam0, uParam0->f_4, Var3, 1);
				unk_0x63498CF6CF35C6A2(*uParam0, 1);
				unk_0x538689EF05955EF7(1, 0, 3000, 1, 0, 0);
				unk_0xA573D5E64CDFAF83(uParam0->f_3, 0, 0);
				unk_0x65682335D54DEA1C(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_86 = 5;
			}
			break;
		
		case 5:
			func_132("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (unk_0x83666F9FB8FEBD4B() > 3500)
			{
				iLocal_86 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!unk_0x76B2D234F1895632(uParam0->f_3) && !unk_0x76B2D234F1895632(uParam0->f_4))
			{
				if (!unk_0x51374A0BB2871E6E(uParam0->f_3, 0))
				{
					unk_0x0CC1C59D57D7212B(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					unk_0x64BC661927CC9D64(uParam0->f_4, func_244(uParam0->f_7), 1);
				}
				unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
				unk_0x74FF6D08DE291367(*uParam0, 0);
				unk_0x74FF6D08DE291367(uParam0->f_1, 0);
				unk_0x7FB81B1DD14A3BE4(0);
				unk_0x6EF372C057320AD4(0, 1065353216);
				unk_0x2D3BB3EF936C4B76(800);
				unk_0x1D208E4A4E1D4FFE(1);
				unk_0x00400F14096FE01D();
				func_111();
				func_260(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			if (unk_0xDE185266FE919B68() && !unk_0x845A95C48FA19489())
			{
				func_124(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			unk_0x538689EF05955EF7(0, 0, 3000, 1, 0, 0);
			unk_0x74FF6D08DE291367(*uParam0, 0);
			unk_0x74FF6D08DE291367(uParam0->f_1, 0);
			unk_0x7FB81B1DD14A3BE4(0);
			unk_0x6EF372C057320AD4(0, 1065353216);
			func_124(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!unk_0x76B2D234F1895632(uParam0->f_3) && !unk_0x76B2D234F1895632(uParam0->f_4))
			{
				if (unk_0xF3140D055686CF79(uParam0->f_3) || unk_0x51374A0BB2871E6E(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (unk_0xC47857E5E74EA5AF(unk_0xE7869D5D7816A9B6(), -1794415470) != 1 && unk_0xC47857E5E74EA5AF(unk_0xE7869D5D7816A9B6(), -1794415470) != 0)
				{
					unk_0x65682335D54DEA1C(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

int func_244(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		case 0:
			return 1;
		
		case -1:
			return 0;
		
		default:
	}
	return 2;
}

float func_245(var uParam0)
{
	float fVar0;
	struct<3> Var1;
	
	fVar0 = 0f;
	Var1 = { func_38() };
	if (uParam0->f_7 == 2)
	{
		Var1 = { unk_0xBD306D8AFEF4E078(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		Var1 = { unk_0xBD306D8AFEF4E078(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_246(unk_0x1141852D07400777(uParam0->f_3, 1), Var1);
	return fVar0;
}

float func_246(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5)
{
	return unk_0x2C393A56EDEECDE4((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

void func_247(var uParam0)
{
	var uVar0;
	
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (!unk_0xAF437D7C802AB246(uParam0->f_3))
		{
			if (func_214(uParam0->f_3, 1) > 30f || func_248(uParam0))
			{
				if (unk_0xC47857E5E74EA5AF(uParam0->f_3, -1794415470) == 1 || unk_0xC47857E5E74EA5AF(uParam0->f_3, 242628503) == 1)
				{
					unk_0x33A90AD8FA327B72(&uVar0);
					unk_0x94026C1D1DB14225(&uVar0);
					unk_0x58F62EDF6111D598(0, uParam0->f_4, 0);
					unk_0xDCF460AE46C9489C(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					unk_0x33E113E52A91C5C3(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					unk_0x911ECBCE73F8EC3F(uVar0);
					unk_0xC2C4A3A9FF2FBFFF(uParam0->f_3, uVar0);
					func_336(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_248(var uParam0)
{
	if ((unk_0xD4F0FC8FFEDE152B(uParam0->f_4) > 3f && func_106(uParam0, 5) > 15f) || unk_0xD1ED65515DA55794(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_249(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0x3F916E486684A3A8(iParam0, 0, 0))
	{
		iVar0++;
	}
	if (!unk_0x3F916E486684A3A8(iParam0, 1, 0))
	{
		iVar0++;
	}
	if (!unk_0x3F916E486684A3A8(iParam0, 4, 0))
	{
		iVar0++;
	}
	if (!unk_0x3F916E486684A3A8(iParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (unk_0x3937C84F74FAABA4(unk_0x1B2DC87EFB36DF80(iParam0)))
	{
		iVar1 = 0;
		if (!unk_0x087B4B9B00A33D4D(iParam0, 0))
		{
			iVar1++;
		}
		if (!unk_0x087B4B9B00A33D4D(iParam0, 1))
		{
			iVar1++;
		}
		if (!unk_0x087B4B9B00A33D4D(iParam0, 2))
		{
			iVar1++;
		}
		if (!unk_0x087B4B9B00A33D4D(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

int func_250(var uParam0, bool bParam1)
{
	int iVar0[3];
	int iVar4;
	
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		iVar0[0] = unk_0xBD6B21D725712BDE(uParam0->f_4, 1);
		iVar0[1] = unk_0xBD6B21D725712BDE(uParam0->f_4, 2);
		iVar0[2] = unk_0xBD6B21D725712BDE(uParam0->f_4, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (unk_0xD51CFE69539DB6D8(iVar0[iVar4]))
			{
				if (unk_0x76B2D234F1895632(iVar0[iVar4]))
				{
					if (iVar4 == 0)
					{
						uParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar4 == 1)
					{
						uParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						uParam0->f_7 = 0;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return 0;
				}
			}
			iVar4++;
		}
		if ((unk_0x9D40BBF80D8F5E8A() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_251(var uParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		iVar0 = unk_0xBD6B21D725712BDE(uParam0->f_4, 1);
		if (unk_0xD51CFE69539DB6D8(iVar0))
		{
			*uParam1 = 1;
			return iVar0;
		}
		else
		{
			iVar0 = unk_0xBD6B21D725712BDE(uParam0->f_4, 2);
			if (unk_0xD51CFE69539DB6D8(iVar0))
			{
				*uParam1 = 2;
				return iVar0;
			}
			else
			{
				iVar0 = unk_0xBD6B21D725712BDE(uParam0->f_4, 0);
				if (unk_0xD51CFE69539DB6D8(iVar0))
				{
					*uParam1 = 0;
					return iVar0;
				}
			}
		}
	}
	return 0;
}

int func_252(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	iVar4 = unk_0x25ECA1DD55F6CB7F(iParam0);
	Var0 = { unk_0x61CBEF33034AF6B9(iParam0, unk_0x1141852D07400777(iParam1, 1)) };
	if (unk_0x1B2DC87EFB36DF80(iParam0) != joaat("vacca"))
	{
	}
	if (unk_0x1B2DC87EFB36DF80(iParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (Var0.f_0 > 0f)
	{
		if (unk_0xE8C390D56BE854E1(iParam1, iParam0, 2, 0, 0))
		{
			iVar3 = 2;
		}
		else if (unk_0xE8C390D56BE854E1(iParam1, iParam0, 1, 0, 0))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (unk_0xE8C390D56BE854E1(iParam1, iParam0, 1, 0, 0))
	{
		iVar3 = 1;
	}
	else if (unk_0xE8C390D56BE854E1(iParam1, iParam0, 2, 0, 0))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

int func_253(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!unk_0x76B2D234F1895632(uParam0->f_3))
	{
		if (!unk_0x51AAB57E2FC16B14(uParam0->f_3) && func_214(uParam0->f_3, 1) < fParam2)
		{
			if (!func_170(uParam0, 5))
			{
				func_296(uParam0, 5, 0, 0);
			}
		}
		else if (func_170(uParam0, 5))
		{
			func_189(uParam0, 5, 0);
		}
		if (((func_106(uParam0, 5) > IntToFloat(iParam1) && unk_0xD4F0FC8FFEDE152B(uParam0->f_4) < fParam4) && !unk_0x51AAB57E2FC16B14(uParam0->f_3)) || func_214(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_254(var uParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	var uVar12;
	int iVar15;
	var uVar16;
	int iVar17;
	int iVar18;
	
	iVar18 = unk_0x56ADDC5BECDDD8A5(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = unk_0x56ADDC5BECDDD8A5(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		Var6 = { unk_0x242AD66021ED4052(uParam0->f_4, iVar18) };
		Var6 = { unk_0x61CBEF33034AF6B9(uParam0->f_4, Var6) };
		Var6.f_1 = (Var6.f_1 + 1f);
	}
	else
	{
		Var6 = { 0f, 1f, 1f };
	}
	Var0 = { unk_0xBD306D8AFEF4E078(uParam0->f_4, Var6) };
	Var3 = { unk_0xBD306D8AFEF4E078(uParam0->f_3, 0f, 0.25f, 0.9f) };
	unk_0x25464EB6EAD8ED1B(Var0, Var3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			unk_0x9BEE7E791BC4D38B(uParam0->f_3, 1);
			iLocal_87 = 1;
			break;
		
		case 1:
			if ((func_47(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && unk_0x7F38A542899D217A((Var0.f_2 - Var3.f_2)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = unk_0x1EAB9962ED64CF16(Var0, Var3, 511, 0, 7);
				}
				else
				{
					iVar17 = unk_0x9CBE058E2C3ABB72(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
					if (iVar17 == 2)
					{
						if (iVar15 == 0)
						{
							iLocal_87 = 2;
						}
						uParam0->f_409 = 0;
					}
					else if (iVar17 == 0)
					{
						uParam0->f_409 = 0;
					}
				}
			}
			else if (unk_0xC47857E5E74EA5AF(uParam0->f_3, 242628503) != 1 && unk_0xC47857E5E74EA5AF(uParam0->f_3, 242628503) != 0)
			{
				unk_0x33A90AD8FA327B72(&(uParam0->f_243));
				unk_0x94026C1D1DB14225(&(uParam0->f_243));
				unk_0xDCF460AE46C9489C(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x58F62EDF6111D598(0, unk_0xE7869D5D7816A9B6(), 0);
				unk_0x1A13F6831AEE500F(uParam0->f_243, 1);
				unk_0x911ECBCE73F8EC3F(uParam0->f_243);
				unk_0xC2C4A3A9FF2FBFFF(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			unk_0x00400F14096FE01D();
			if (uParam0->f_411 != 9)
			{
				if (!func_21(uParam0->f_44, 128))
				{
					func_235(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_255(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			unk_0xFA2C5C2D054C888E(uParam0->f_3);
			unk_0x6A8BCE61F660B8D0(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			unk_0x33A90AD8FA327B72(&(uParam0->f_243));
			unk_0x94026C1D1DB14225(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				unk_0xDCF460AE46C9489C(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				unk_0xDCF460AE46C9489C(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			unk_0x58F62EDF6111D598(0, unk_0xE7869D5D7816A9B6(), 0);
			unk_0x911ECBCE73F8EC3F(uParam0->f_243);
			unk_0xC2C4A3A9FF2FBFFF(uParam0->f_3, uParam0->f_243);
			unk_0x33A90AD8FA327B72(&(uParam0->f_243));
			iLocal_87 = 3;
			break;
		
		case 3:
			iLocal_87 = 0;
			if (unk_0x23417CDB252083F9(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				unk_0x8CAD7018AB2D288A(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_255(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	unk_0x63170E828689585A(uParam0, sParam1, uParam2, func_256(iParam3), 0);
}

int func_256(int iParam0)
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

float func_257(var uParam0, int iParam1)
{
	if (!unk_0x76B2D234F1895632(iParam1))
	{
		if (func_188(uParam0))
		{
			return func_47(uParam0->f_4, iParam1, 1);
		}
	}
	return 0f;
}

void func_258(var uParam0)
{
	func_221(uParam0, uParam0->f_3);
	if (func_188(uParam0))
	{
		if (func_170(uParam0, 14))
		{
			func_223(uParam0);
			if (unk_0xD11595488376CB53(uParam0->f_10))
			{
				unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_10));
			}
		}
	}
	if (!func_170(uParam0, 9))
	{
		if (unk_0xD11595488376CB53(uParam0->f_8))
		{
			unk_0x95FCF148333C6A88(uParam0->f_8, 0);
			unk_0x1AD7485666C5160C(uParam0->f_8, 0);
		}
		func_296(uParam0, 9, 0, 0);
		func_259("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_259(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0x81E3FE28C9E14CDE(sParam0);
	unk_0xE45B7EE472DD7F7F(iParam1, 1);
}

void func_260(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_44();
		func_296(uParam0, 16, 4f, 0);
		unk_0x00400F14096FE01D();
	}
}

int func_261(var uParam0, int iParam1)
{
	if (!unk_0x4D15A085E079AB18(2))
	{
		return 0;
	}
	func_265(12);
	if (func_21(uParam0->f_44, 8))
	{
		if (!func_21(uParam0->f_44, 128))
		{
			if (unk_0x5DD29D700F7A48AB(unk_0xE7869D5D7816A9B6()) && !func_21(uParam0->f_44, 256))
			{
				func_63(&(uParam0->f_44), 256);
			}
			if (func_21(uParam0->f_44, 256) && unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
			{
				func_235(uParam0, 135, 1, 0, 1);
				func_63(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_264(uParam0, iParam1))
	{
		if (func_214(uParam0->f_3, 1) < 35f)
		{
			if (!func_21(uParam0->f_44, 8))
			{
				unk_0x58F62EDF6111D598(uParam0->f_3, unk_0xE7869D5D7816A9B6(), 0);
				func_235(uParam0, 133, 1, 0, 1);
				func_63(&(uParam0->f_44), 8);
			}
		}
		if ((unk_0xAF437D7C802AB246(uParam0->f_3) || unk_0xF05AC1C00BC1230B(uParam0->f_3)) || func_214(uParam0->f_3, 1) > 400f)
		{
			func_336(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = unk_0xF0295FF51F2D7803(uParam0->f_2, 0);
		unk_0x8100F8AA27EE924B(uParam0->f_4, 1);
		if (unk_0xBD6B21D725712BDE(uParam0->f_4, -1) == uParam0->f_2)
		{
			unk_0x2EA9D513624CAB16(uParam0->f_4);
			func_262(uParam0);
			func_51(2, 0);
			bLocal_94 = true;
			func_107(&uLocal_90);
			return 1;
		}
		else
		{
			func_336(uParam0, "No Taxi", 21);
			func_155("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_262(var uParam0)
{
	if (!unk_0x76B2D234F1895632(uParam0->f_4))
	{
		if (func_263())
		{
		}
	}
}

int func_263()
{
	if (unk_0xB519E5386FBF69E5(unk_0x0ADD324BC46177EF(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_264(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
			if (unk_0xC45A34912542C4EB(iVar0, 0))
			{
				iVar1 = unk_0x1B2DC87EFB36DF80(iVar0);
				bVar2 = func_249(iVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == joaat("rhino") || iVar1 == joaat("ratloader")) || iVar1 == joaat("surfer")) || iVar1 == joaat("surfer2")) || iVar1 == joaat("armytanker")) || iVar1 == joaat("barracks")) || iVar1 == joaat("barracks2")) || iVar1 == joaat("crusader")) || iVar1 == joaat("utillitruck")) || iVar1 == joaat("utillitruck2")) || iVar1 == joaat("utillitruck3")) || iVar1 == joaat("airtug")) || iVar1 == joaat("caddy")) || iVar1 == joaat("caddy2")) || iVar1 == joaat("dloader")) || iVar1 == joaat("docktug")) || iVar1 == joaat("flatbed")) || iVar1 == joaat("ripley")) || iVar1 == joaat("romero")) || iVar1 == joaat("towtruck")) || iVar1 == joaat("towtruck2")) || iVar1 == joaat("airbus")) || iVar1 == joaat("bus")) || iVar1 == joaat("coach")) || iVar1 == joaat("rentalbus")) || iVar1 == joaat("tourbus")) || iVar1 == joaat("riot")) || iVar1 == joaat("trash")) || iVar1 == joaat("benson")) || iVar1 == joaat("biff")) || iVar1 == joaat("hauler")) || iVar1 == joaat("packer")) || iVar1 == joaat("phantom")) || iVar1 == joaat("pounder")) || iVar1 == joaat("bulldozer")) || iVar1 == joaat("handler")) || iVar1 == joaat("tiptruck2")) || iVar1 == joaat("cutter")) || iVar1 == joaat("dump")) || iVar1 == joaat("mixer")) || iVar1 == joaat("mixer2")) || iVar1 == joaat("rubble")) || iVar1 == joaat("scrap")) || iVar1 == joaat("tiptruck")) || iVar1 == joaat("camper")) || iVar1 == joaat("taco")) || iVar1 == joaat("boxville")) || iVar1 == joaat("boxville2")) || iVar1 == joaat("boxville3")) || iVar1 == joaat("burrito")) || iVar1 == joaat("burrito2")) || iVar1 == joaat("burrito3")) || iVar1 == joaat("burrito4")) || iVar1 == joaat("gburrito")) || iVar1 == joaat("journey")) || iVar1 == joaat("mule")) || iVar1 == joaat("mule2")) || iVar1 == joaat("pony")) || iVar1 == joaat("rumpo")) || iVar1 == joaat("rumpo2")) || iVar1 == joaat("speedo")) || iVar1 == joaat("speedo2")) || iVar1 == joaat("youga")) || iVar1 == joaat("mower")) || iVar1 == joaat("tractor")) || iVar1 == joaat("tractor2")) || iVar1 == joaat("fbi")) || iVar1 == joaat("fbi2")) || iVar1 == joaat("pranger")) || iVar1 == joaat("ambulance")) || iVar1 == joaat("dilettante2")) || iVar1 == joaat("firetruk")) || iVar1 == joaat("lguard")) || iVar1 == joaat("dune")) || iVar1 == joaat("pbus")) || iVar1 == joaat("police")) || iVar1 == joaat("police2")) || iVar1 == joaat("police3")) || iVar1 == joaat("police4")) || iVar1 == joaat("policeb")) || iVar1 == joaat("policet")) || iVar1 == joaat("sheriff")) || iVar1 == joaat("sheriff2")) || iVar1 == joaat("stockade"))
				{
					bVar3 = false;
				}
				if (uParam0->f_411 == 7)
				{
					if (iVar1 == joaat("bodhi2"))
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (unk_0x3937C84F74FAABA4(iVar1))
				{
					if (unk_0xBD6B21D725712BDE(iVar0, -1) == unk_0xE7869D5D7816A9B6())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (unk_0x25ECA1DD55F6CB7F(iVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_21(uParam0->f_44, 64))
					{
						if (unk_0x4D15A085E079AB18(2))
						{
							func_155("TX_VIP_DMGD", -1);
							if (func_147("TX_VIP_DMGD"))
							{
								func_63(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_21(uParam0->f_44, 32))
					{
						if (unk_0x4D15A085E079AB18(2))
						{
							func_155("TX_VIP_CAR", -1);
							if (func_147("TX_VIP_CAR"))
							{
								func_63(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_21(uParam0->f_44, 16))
					{
						if (unk_0x4D15A085E079AB18(2))
						{
							func_155("TX_VIP_SMALL", -1);
							if (func_147("TX_VIP_SMALL"))
							{
								func_63(&(uParam0->f_44), 16);
							}
						}
					}
					return 0;
				}
				return 1;
			}
		}
		else
		{
			func_19(&(uParam0->f_44), 16);
			func_19(&(uParam0->f_44), 64);
			func_19(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

void func_265(int iParam0)
{
	var uVar0;
	char cVar1[24];
	
	if (unk_0xA4844394CE04D85D() || unk_0xFD563D1BF81A2CB8())
	{
		uVar0 = iParam0;
		unk_0x52D7AD2E007B9DFC(8, &uVar0, 1, 1);
	}
	else if (unk_0x26A43F8C0E764E33() || unk_0x7ECD3D8283875DD1())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		unk_0x492EDD75C56D6606(8, &cVar1);
	}
}

void func_266(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_20(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_267(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			unk_0x73817D396768E4C6(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			unk_0x9956FB0E4B50ECB8(&(uParam0->f_60[iVar0 /*3*/]), 1);
			unk_0x73817D396768E4C6(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_268(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_269()
{
	Local_343.f_0 = 0;
	func_286(44131, 44106, 1);
	func_286(43867, 43843, 1);
	func_286(43782, 43757, 1);
	func_286(43686, 43662, 1);
	func_286(43552, 43531, 1);
	func_286(43478, 43453, 1);
	func_286(43311, 43287, 1);
}

int func_270(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_336(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_271(var uParam0)
{
	if (unk_0xD51CFE69539DB6D8(uParam0->f_4))
	{
		if (func_273(uParam0->f_4))
		{
			func_272(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_272(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_273(int iParam0)
{
	if (!unk_0xC45A34912542C4EB(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xF4E8009A18C52112(iParam0) < -100f)
	{
		return 1;
	}
	else if (unk_0xF675ACE4149620B8(iParam0, 0, 40000) || unk_0xF675ACE4149620B8(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_274(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_336(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_275(var uParam0)
{
	if (unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 0)
	{
		if (func_276(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_276(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_277(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_272(uParam0, 11);
	return 1;
}

int func_278(var uParam0)
{
	if (unk_0xD51CFE69539DB6D8(uParam0->f_4))
	{
		if (unk_0xA7D2A868253353BE(uParam0->f_4) && !unk_0x0E9BAAAE8317091B(uParam0->f_4))
		{
			if (!func_170(uParam0, 25))
			{
				func_296(uParam0, 25, 0, 0);
			}
			else if (func_106(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_170(uParam0, 25))
		{
			func_189(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_279(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_336(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_280(var uParam0)
{
	if (!unk_0x76B2D234F1895632(uParam0->f_4))
	{
		if (unk_0xFA7BE9A102B98E76(uParam0->f_4))
		{
			if (unk_0xF675ACE4149620B8(uParam0->f_4, 0, 40000) || unk_0xF675ACE4149620B8(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_281(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_336(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_282(var uParam0)
{
	if (!unk_0x76B2D234F1895632(uParam0->f_4))
	{
		if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
		{
			if (unk_0x6D30046757C9C4F9(uParam0->f_4))
			{
				if (func_276(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_283(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_336(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_284(var uParam0)
{
	if (unk_0xD51CFE69539DB6D8(uParam0->f_4))
	{
		if (func_285(uParam0->f_4))
		{
			func_272(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_285(int iParam0)
{
	if (!unk_0xC45A34912542C4EB(iParam0, 0))
	{
		return 1;
	}
	if (unk_0xF4E8009A18C52112(iParam0) == 0f)
	{
		if (!unk_0xC45A34912542C4EB(iParam0, 0))
		{
		}
		return 1;
	}
	else if (unk_0xF675ACE4149620B8(iParam0, 0, 40000) || unk_0xF675ACE4149620B8(iParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_286(int iParam0, int iParam1, bool bParam2)
{
	if (Local_343.f_0 >= 16)
	{
		Local_343.f_0 = 16;
		return;
	}
	Local_343.f_1[Local_343.f_0 /*4*/] = 0;
	func_64(&(Local_343.f_1[Local_343.f_0 /*4*/]), 1);
	if (bParam2)
	{
		func_64(&(Local_343.f_1[Local_343.f_0 /*4*/]), 2);
	}
	Local_343.f_1[Local_343.f_0 /*4*/].f_2 = iParam0;
	Local_343.f_1[Local_343.f_0 /*4*/].f_3 = iParam1;
	Local_343.f_0++;
}

int func_287(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_336(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_288(var uParam0)
{
	if (unk_0xD51CFE69539DB6D8(uParam0->f_3))
	{
		if ((unk_0xAF437D7C802AB246(uParam0->f_3) || unk_0x76B2D234F1895632(uParam0->f_3)) || unk_0x9DD85FBDD5BC3BF1(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_289()
{
	Local_190[5 /*10*/] = 5;
	Local_190[5 /*10*/].f_1 = 0;
	Local_190[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_190[5 /*10*/].f_9 = 78;
	Local_190[0 /*10*/] = 5;
	Local_190[0 /*10*/].f_1 = 0;
	Local_190[0 /*10*/].f_2 = "TX_AIR_N";
	Local_190[0 /*10*/].f_9 = 76;
	Local_190[2 /*10*/] = 5;
	Local_190[2 /*10*/].f_1 = 0;
	Local_190[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_190[2 /*10*/].f_9 = 21;
	Local_190[1 /*10*/] = 10;
	Local_190[1 /*10*/].f_1 = 0;
	Local_190[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_190[1 /*10*/].f_9 = 71;
	Local_190[4 /*10*/] = 10;
	Local_190[4 /*10*/].f_1 = 0;
	Local_190[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_190[4 /*10*/].f_9 = 79;
	Local_190[6 /*10*/] = 10;
	Local_190[6 /*10*/].f_1 = 0;
	Local_190[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_190[6 /*10*/].f_9 = 80;
	Local_190[9 /*10*/] = 15;
	Local_190[9 /*10*/].f_1 = 0;
	Local_190[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_190[9 /*10*/].f_9 = 82;
	Local_190[8 /*10*/] = 15;
	Local_190[8 /*10*/].f_1 = 0;
	Local_190[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_190[8 /*10*/].f_9 = 72;
	Local_190[7 /*10*/] = 15;
	Local_190[7 /*10*/].f_1 = 0;
	Local_190[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_190[7 /*10*/].f_9 = 74;
	Local_190[11 /*10*/] = 5;
	Local_190[11 /*10*/].f_1 = 0;
	Local_190[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_190[11 /*10*/].f_9 = 70;
	Local_190[12 /*10*/] = 5;
	Local_190[12 /*10*/].f_1 = 0;
	Local_190[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_190[12 /*10*/].f_9 = 69;
	Local_190[13 /*10*/] = 10;
	Local_190[13 /*10*/].f_1 = 0;
	Local_190[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_190[13 /*10*/].f_9 = 67;
	Local_190[14 /*10*/] = 10;
	Local_190[14 /*10*/].f_1 = 0;
	Local_190[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_190[14 /*10*/].f_9 = 75;
}

int func_290()
{
	if (!unk_0x5053BF6D5604065B(iLocal_886))
	{
		return 0;
	}
	if (!unk_0x2917D5E1CB5CE43A("gestures@m@standing@casual"))
	{
		return 0;
	}
	if (!func_291(&iLocal_896, 0))
	{
		func_132("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_896, 1000);
		return 0;
	}
	return 1;
}

int func_291(int iParam0, bool bParam1)
{
	if (!unk_0x5053BF6D5604065B(func_18()))
	{
		func_132("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!unk_0x2917D5E1CB5CE43A("gestures@m@standing@casual"))
		{
			func_132("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!unk_0x2917D5E1CB5CE43A("oddjobs@taxi@"))
	{
		func_132("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x2917D5E1CB5CE43A("oddjobs@towingcome_here"))
	{
		func_132("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x2917D5E1CB5CE43A("misscommon@response"))
	{
		func_132("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!unk_0x4D15A085E079AB18(2))
	{
		func_132("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_292(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			uParam0->f_123 = "TRS_STREAMING";
			break;
		
		case 2:
			uParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		
		case 3:
			uParam0->f_123 = " TRS_SPAWNING ";
			break;
		
		case 4:
			uParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		
		case 5:
			uParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		
		case 6:
			uParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		
		case 7:
			uParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		
		case 8:
			uParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		
		case 9:
			uParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		
		case 10:
			uParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		
		case 18:
			uParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		
		case 11:
			uParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		
		case 19:
			uParam0->f_123 = " TRS_CUTSCENE ";
			break;
		
		case 20:
			uParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		
		case 13:
			uParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		
		case 12:
			uParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		
		case 14:
			uParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		
		case 15:
			uParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		
		case 16:
			uParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		
		case 17:
			uParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		
		case 22:
			uParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		
		case 25:
			uParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		
		case 26:
			uParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		
		case 24:
			uParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		
		case 27:
			uParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		
		case 23:
			uParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		
		case 28:
			uParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		
		case 29:
			uParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		
		case 30:
			uParam0->f_123 = " TRS_CLEANUP ";
			break;
		
		case 21:
			uParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		
		default:
			uParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	uParam0->f_410 = iParam1;
}

int func_293(var uParam0)
{
	if (!unk_0xAF437D7C802AB246(uParam0->f_3))
	{
		uParam0->f_8 = func_195(uParam0->f_3, 0, 0);
		unk_0x27955D546C265CFD(1, 0);
		unk_0x1AD7485666C5160C(uParam0->f_8, 1);
		unk_0x227FC39A4871C64F(uParam0->f_8, "TAXI_BLIP_PASS");
		unk_0x6A8BCE61F660B8D0(uParam0->f_3, unk_0xE7869D5D7816A9B6(), -1, 2048, 4);
	}
	return 1;
}

int func_294(var uParam0, struct<3> Param1, struct<3> Param4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!unk_0xD51CFE69539DB6D8(uParam0->f_3))
	{
		func_295(uParam0, uParam0->f_14);
		uParam0->f_11 = { Param1 };
		uParam0->f_14 = { Param4 };
		func_35(uParam0->f_14, 0);
		unk_0xB0A7E0A62FB61A06(uParam0->f_14, 2f, 0);
		func_232(uParam0->f_14, 0, fParam10);
		if (iParam8 == 0)
		{
			uParam0->f_3 = unk_0x1E9F26C09DC24B58(uParam0->f_11);
		}
		else if (unk_0xD51CFE69539DB6D8(Global_97867.f_225[0]))
		{
			uParam0->f_3 = Global_97867.f_225[0];
			unk_0x20BB4B94CC6DDC9A(uParam0->f_3, 1, 1);
		}
		else
		{
			uParam0->f_3 = unk_0xA7F4088D9A2629CC(26, iParam8, uParam0->f_11, fParam9, 1, 1);
		}
		func_7(&(uParam0->f_244), 3, uParam0->f_3, sParam7, 0, 1);
		unk_0x0814FB03E16A03C1(uParam0->f_3, sParam7);
		unk_0xC31A3F1982C7B12B(uParam0->f_3, 112, 1);
		if (!unk_0xAF437D7C802AB246(uParam0->f_3))
		{
			unk_0x29627C73E3F24F9A(uParam0->f_3, 250);
			unk_0x1C26C4B0DAB91B21(uParam0->f_3, 32, 0);
			unk_0x1C26C4B0DAB91B21(uParam0->f_3, 104, 1);
			unk_0x1C26C4B0DAB91B21(uParam0->f_3, 177, 1);
			unk_0x1C26C4B0DAB91B21(uParam0->f_3, 116, 0);
			unk_0x103FCC2BD24292A3("TAXI_Passenger", &(uParam0->f_413));
			unk_0xA9CA101B50B90993(1, uParam0->f_413, joaat("player"));
			unk_0xA9CA101B50B90993(2, uParam0->f_413, joaat("COP"));
			unk_0x690C5239500171FE(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_295(var uParam0, struct<3> Param1)
{
	uParam0->f_51[0] = unk_0xF68E25367BD354F6(Param1, 20f, 5f, 0);
}

void func_296(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_101(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_100(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_101(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_100(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_297()
{
	unk_0x801429C020C467BA(iLocal_886);
	func_299(0);
	uLocal_1132 = func_298();
	unk_0x2B0BB514F9140141("gestures@m@standing@casual");
}

var func_298()
{
	return unk_0xE3C796DC28BC3254("MIDSIZED_MESSAGE");
}

void func_299(bool bParam0)
{
	unk_0x801429C020C467BA(func_18());
	if (bParam0)
	{
		unk_0x2B0BB514F9140141("gestures@m@standing@casual");
	}
	unk_0x2B0BB514F9140141("oddjobs@taxi@");
	unk_0x2B0BB514F9140141("oddjobs@towingcome_here");
	unk_0x2B0BB514F9140141("misscommon@response");
	unk_0x36A3D6FBED10EF81("TAXI", 2);
	if (!func_21(Global_99155.f_17711, 128))
	{
		func_63(&(Global_99155.f_17711), 128);
	}
}

void func_300(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) == 0)
		{
			if (bParam2)
			{
				if (func_106(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_235(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_235(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_296(uParam0, 10, 0f, 1);
				}
			}
			else if (func_106(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_235(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_235(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_296(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_106(uParam0, 10) > 30f)
		{
			if (!func_192())
			{
				if (uParam0->f_112)
				{
					func_235(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_235(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_296(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_21(uParam0->f_100, 64))
	{
		if (!func_13(&(Local_190[5 /*10*/].f_6)))
		{
			func_107(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_98(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_323(uParam0))
			{
				if (uParam0->f_113)
				{
					func_235(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_235(uParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_322(uParam0, 1);
				func_320(5, uParam0);
				func_319(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 1))
	{
		if (!func_13(&(Local_190[0 /*10*/].f_6)))
		{
			func_107(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_98(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_318(uParam0))
			{
				func_322(uParam0, 1);
				func_320(0, uParam0);
				if (uParam0->f_113)
				{
					func_235(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_235(uParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_319(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 2))
	{
		if (!func_13(&(Local_190[1 /*10*/].f_6)))
		{
			func_107(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_98(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_317(uParam0))
			{
				func_322(uParam0, 1);
				func_320(1, uParam0);
				if (uParam0->f_113)
				{
					func_235(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_235(uParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_319(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 2048))
	{
		if (!func_13(&(Local_190[8 /*10*/].f_6)))
		{
			if (unk_0xD51CFE69539DB6D8(uParam0->f_4))
			{
				uParam0->f_46 = unk_0x8219941CC4732B36(uParam0->f_4);
				func_107(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_98(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_316(uParam0))
			{
				func_322(uParam0, 1);
				func_320(8, uParam0);
				func_319(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 128))
	{
		if (!func_13(&(Local_190[6 /*10*/].f_6)))
		{
			func_107(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_98(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_315(uParam0))
			{
				func_322(uParam0, 1);
				func_320(6, uParam0);
				if (uParam0->f_113)
				{
					func_235(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_235(uParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_319(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 32))
	{
		if (!func_13(&(Local_190[4 /*10*/].f_6)))
		{
			func_107(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_98(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_314(uParam0))
			{
				func_322(uParam0, 1);
				func_320(4, uParam0);
				if (uParam0->f_113)
				{
					func_235(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_235(uParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_319(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 256))
	{
		if (!func_13(&(Local_190[7 /*10*/].f_6)))
		{
			func_107(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_98(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_313(uParam0))
			{
				func_320(7, uParam0);
				func_322(uParam0, 1);
				if (uParam0->f_113)
				{
					func_235(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_235(uParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_319(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 8))
	{
		if (!func_13(&(Local_190[9 /*10*/].f_6)))
		{
			func_107(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_98(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			unk_0xE03E82B34235FC17(unk_0x3F80C6638E3A1A90());
		}
		else if (func_98(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_312(uParam0))
			{
				func_322(uParam0, 1);
				func_320(9, uParam0);
				if (uParam0->f_113)
				{
					func_235(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_235(uParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_319(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 16384))
	{
		if (!func_13(&(Local_190[13 /*10*/].f_6)))
		{
			func_107(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_98(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_306(uParam0))
			{
				func_322(uParam0, 1);
				func_320(13, uParam0);
				if (uParam0->f_113)
				{
					func_235(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_235(uParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_319(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 32768))
	{
		if (!func_13(&(Local_190[14 /*10*/].f_6)))
		{
			func_107(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_98(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_305(uParam0))
			{
				func_322(uParam0, 1);
				func_320(14, uParam0);
				if (uParam0->f_113)
				{
					func_235(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_235(uParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_319(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 4096))
	{
		if (!func_13(&(Local_190[11 /*10*/].f_6)))
		{
			func_107(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_98(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_304(uParam0))
			{
				func_322(uParam0, 1);
				func_320(11, uParam0);
				if (uParam0->f_113)
				{
					func_235(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_235(uParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_319(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 8192))
	{
		if (!func_13(&(Local_190[12 /*10*/].f_6)))
		{
			func_107(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_98(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_303(uParam0))
			{
				func_322(uParam0, 1);
				func_320(12, uParam0);
				if (uParam0->f_113)
				{
					func_235(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_235(uParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_319(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 4))
	{
		if (!func_13(&(Local_190[2 /*10*/].f_6)))
		{
			func_302(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_98(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_301(uParam0))
			{
				if (uParam0->f_113)
				{
					func_235(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_235(uParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_322(uParam0, 1);
				func_320(2, uParam0);
				func_319(uParam0);
			}
		}
	}
}

int func_301(var uParam0)
{
	float fVar0;
	
	if (!unk_0xAF437D7C802AB246(uParam0->f_2))
	{
		if ((!unk_0x960D953E3623A78D(uParam0->f_2) && !func_13(&(Local_190[0 /*10*/].f_3))) && !func_13(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_13(&(Local_190[2 /*10*/].f_3)))
			{
				uParam0->f_37 = unk_0xD4F0FC8FFEDE152B(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_107(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_98(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = unk_0xD4F0FC8FFEDE152B(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_97(&(Local_190[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_97(&(Local_190[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_302(var uParam0, float fParam1)
{
	if (!func_13(uParam0))
	{
		func_101(uParam0, fParam1);
	}
}

int func_303(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		Var0 = { unk_0x3BB233C973B4C0FC(uParam0->f_4, 1) };
		if (Var0.f_1 < -10f && !func_13(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_13(&(Local_190[12 /*10*/].f_3)))
			{
				func_107(&(Local_190[12 /*10*/].f_3));
			}
			else if (func_98(&(Local_190[12 /*10*/].f_3)) > 5f)
			{
				func_97(&(Local_190[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_97(&(Local_190[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_304(var uParam0)
{
	struct<3> Var0;
	
	if ((((((unk_0xC45A34912542C4EB(uParam0->f_4, 0) && !func_13(&(Local_190[0 /*10*/].f_3))) && !func_13(&(Local_190[1 /*10*/].f_3))) && !func_13(&(Local_190[5 /*10*/].f_3))) && !func_13(&(Local_190[9 /*10*/].f_3))) && !func_13(&(Local_190[7 /*10*/].f_3))) && !func_13(&(Local_190[8 /*10*/].f_3)))
	{
		Var0 = { unk_0x3BB233C973B4C0FC(uParam0->f_4, 1) };
		if (unk_0x7F38A542899D217A(Var0.f_0) > 2.5f && !func_13(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_13(&(Local_190[11 /*10*/].f_3)))
			{
				func_107(&(Local_190[11 /*10*/].f_3));
				uLocal_342 = Var0.f_0;
			}
			else if (func_98(&(Local_190[11 /*10*/].f_3)) < 1.5f && (unk_0x7F38A542899D217A(uLocal_342) - unk_0x7F38A542899D217A(Var0.f_0)) < 0f)
			{
				func_97(&(Local_190[11 /*10*/].f_3));
				return 1;
			}
			else if (func_98(&(Local_190[11 /*10*/].f_3)) >= 1.5f)
			{
				func_97(&(Local_190[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_305(var uParam0)
{
	if (((((unk_0xC45A34912542C4EB(uParam0->f_4, 0) && !func_13(&(Local_190[0 /*10*/].f_3))) && !func_13(&(Local_190[8 /*10*/].f_3))) && !func_13(&(Local_190[5 /*10*/].f_3))) && !func_13(&(Local_190[9 /*10*/].f_3))) && !func_13(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_13(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = unk_0x46B0F3CB5DC1CDFC(unk_0x1141852D07400777(uParam0->f_4, 1), 10f, 0, 260);
			if (unk_0xD51CFE69539DB6D8(uParam0->f_5))
			{
				if ((unk_0xD4F0FC8FFEDE152B(uParam0->f_4) > 15f && func_47(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!unk_0x76B2D234F1895632(uParam0->f_5) && !unk_0xD12071DBE8393EC8(uParam0->f_5, -1)))
				{
					func_107(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_98(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_47(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !unk_0x3B2CF3CC08ABF68C(uParam0->f_5))
		{
			func_97(&(Local_190[14 /*10*/].f_3));
			return 1;
		}
		else if (func_98(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_97(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
		else if (unk_0x3B2CF3CC08ABF68C(uParam0->f_5))
		{
			func_97(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_306(var uParam0)
{
	if (((unk_0xC45A34912542C4EB(uParam0->f_4, 0) && !func_13(&(Local_190[9 /*10*/].f_3))) && !func_13(&(Local_190[7 /*10*/].f_3))) && !func_13(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_307(uParam0->f_4) && unk_0xD4F0FC8FFEDE152B(uParam0->f_4) > 15f)
		{
			if (!func_13(&(Local_190[13 /*10*/].f_3)))
			{
				func_107(&(Local_190[13 /*10*/].f_3));
			}
			else if (func_98(&(Local_190[13 /*10*/].f_3)) > 5f)
			{
				func_97(&(Local_190[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_97(&(Local_190[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_307(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	struct<3> Var24;
	float fVar27;
	
	unk_0x534DA90AB4BE425C(unk_0x1141852D07400777(iParam0, 1), 1, &Var0, 1, 1077936128, 0);
	unk_0x534DA90AB4BE425C(unk_0x1141852D07400777(iParam0, 1), 2, &Var3, 1, 1077936128, 0);
	unk_0xBDD6CC4AE1223F7F(Var0, -1, &Var6);
	fVar27 = unk_0x652D2EEEF1D3E62C(Var6 - Var0);
	Var9 = { func_311((Var3.f_0 - Var0.f_0), (Var3.f_1 - Var0.f_1), 0f) };
	Var12 = { func_310(Var9, 0) * Vector(fVar27, fVar27, fVar27) };
	Var9 = { Var9 * Vector(2f, 2f, 2f) };
	Var15 = { Var0 - Var9 + Var12 };
	Var18 = { Var0 - Var9 - Var12 };
	Var21 = { Var3 + Var9 + Var12 };
	Var24 = { Var3 + Var9 - Var12 };
	Var24 = { Var24 };
	return func_308(unk_0x1141852D07400777(iParam0, 1), Var15, Var18, Var21);
}

int func_308(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	Param0.f_2 = 0f;
	Param3.f_2 = 0f;
	Param6.f_2 = 0f;
	Param9.f_2 = 0f;
	Var0 = { func_311(Param6 - Param3) };
	Var3 = { func_311(Param9 - Param3) };
	fVar6 = func_309(Param0, Var0);
	fVar7 = func_309(Param3, Var0);
	fVar8 = func_309(Param6, Var0);
	fVar9 = func_309(Param0, Var3);
	fVar10 = func_309(Param3, Var3);
	fVar11 = func_309(Param9, Var3);
	if (fVar7 > fVar8)
	{
		fVar12 = fVar7;
		fVar7 = fVar8;
		fVar8 = fVar12;
	}
	if (fVar6 < fVar7 || fVar6 > fVar8)
	{
		return 0;
	}
	if (fVar10 > fVar11)
	{
		fVar13 = fVar10;
		fVar10 = fVar11;
		fVar11 = fVar13;
	}
	if (fVar9 < fVar10 || fVar9 > fVar11)
	{
		return 0;
	}
	return 1;
}

float func_309(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_310(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	
	switch (iParam3)
	{
		case 0:
			Var0.f_0 = -Param0.f_1;
			Var0.f_1 = Param0.f_0;
			break;
		
		case 1:
			Var0.f_0 = -Param0.f_0;
			Var0.f_1 = -Param0.f_1;
			break;
		
		case 2:
			Var0.f_0 = Param0.f_1;
			Var0.f_1 = -Param0.f_0;
			break;
	}
	Var0.f_2 = Param0.f_2;
	return Var0;
}

Vector3 func_311(struct<3> Param0)
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

int func_312(var uParam0)
{
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (unk_0xBD6B21D725712BDE(uParam0->f_4, -1) == unk_0xE7869D5D7816A9B6())
		{
			if (unk_0xDB3D41842CEA074F(unk_0x3F80C6638E3A1A90()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_313(var uParam0)
{
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (unk_0xBD6B21D725712BDE(uParam0->f_4, -1) == unk_0xE7869D5D7816A9B6())
		{
			if (unk_0xD1ED65515DA55794(uParam0->f_4))
			{
				if (!iLocal_341)
				{
					if (unk_0xB24C64718049BB39(uParam0->f_4) <= -145f || unk_0xB24C64718049BB39(uParam0->f_4) >= 145f)
					{
						iLocal_341 = 1;
					}
				}
			}
			else if (iLocal_341)
			{
				if (unk_0xB24C64718049BB39(uParam0->f_4) <= 35f && unk_0xB24C64718049BB39(uParam0->f_4) >= -35f)
				{
					iLocal_341 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_314(var uParam0)
{
	int iVar0;
	
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		iVar0 = unk_0x18862BBFC3D2ED50(unk_0x3F80C6638E3A1A90());
		if (iVar0 == 0)
		{
			if (!func_13(&(Local_190[4 /*10*/].f_3)))
			{
				func_107(&(Local_190[4 /*10*/].f_3));
			}
			else if (func_98(&(Local_190[4 /*10*/].f_3)) > 2f)
			{
				func_97(&(Local_190[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_97(&(Local_190[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_315(var uParam0)
{
	int iVar0;
	
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		iVar0 = unk_0x58611A5F6463C46E(unk_0x3F80C6638E3A1A90());
		if (iVar0 == 0)
		{
			if (!func_13(&(Local_190[6 /*10*/].f_3)))
			{
				func_107(&(Local_190[6 /*10*/].f_3));
			}
			else if (func_98(&(Local_190[6 /*10*/].f_3)) > 3.5f)
			{
				func_97(&(Local_190[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_97(&(Local_190[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_316(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (unk_0x641FE3AF0CF996E3(uParam0->f_4))
		{
			iVar0 = unk_0x8219941CC4732B36(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			unk_0x29FD5B1A4BA65801(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_235(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_235(uParam0, 72, 1, 0, 1);
				}
				func_97(&(Local_190[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_317(var uParam0)
{
	struct<3> Var0;
	
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		Var0 = { unk_0x3BB233C973B4C0FC(uParam0->f_4, 1) };
		if (unk_0x7F38A542899D217A(Var0.f_0) > 3f && !func_13(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_13(&(Local_190[1 /*10*/].f_3)))
			{
				func_107(&(Local_190[1 /*10*/].f_3));
			}
			else if (func_98(&(Local_190[1 /*10*/].f_3)) > 1.2f)
			{
				func_97(&(Local_190[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_97(&(Local_190[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_318(var uParam0)
{
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (!unk_0x0E9BAAAE8317091B(uParam0->f_4) && unk_0x47EF9ED961F4F559(uParam0->f_4))
		{
			if (!func_13(&(Local_190[0 /*10*/].f_3)))
			{
				func_107(&(Local_190[0 /*10*/].f_3));
			}
			else if (func_98(&(Local_190[0 /*10*/].f_3)) > 0.7f)
			{
				func_97(&(Local_190[0 /*10*/].f_3));
				func_100(&(Local_190[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_97(&(Local_190[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_319(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_13(&(Local_190[iVar0 /*10*/].f_6)))
		{
			func_100(&(Local_190[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_296(uParam0, 10, 0f, 1);
	unk_0xE03E82B34235FC17(unk_0x3F80C6638E3A1A90());
}

void func_320(int iParam0, var uParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_321(uParam1, iParam0);
	func_97(&(Local_190[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_321(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_322(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_323(var uParam0)
{
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (unk_0xD4F0FC8FFEDE152B(uParam0->f_4) > 25f)
		{
			if (!func_13(&(Local_190[5 /*10*/].f_3)))
			{
				func_107(&(Local_190[5 /*10*/].f_3));
			}
			else if (func_98(&(Local_190[5 /*10*/].f_3)) > 3.5f)
			{
				func_97(&(Local_190[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_97(&(Local_190[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_324()
{
	struct<3> Var0;
	
	func_132("UPDATE_FINAL_SCENE()", &iLocal_896, 1000);
	if ((Local_423.f_410 >= 28 && !iLocal_905) && ((unk_0x915685CA559C211B(Local_423.f_3, unk_0xE7869D5D7816A9B6(), 1) || unk_0x915685CA559C211B(iLocal_890, unk_0xE7869D5D7816A9B6(), 1)) || unk_0x915685CA559C211B(Local_853.f_2, unk_0xE7869D5D7816A9B6(), 1)))
	{
		iLocal_905 = 1;
	}
	else if (!unk_0x76B2D234F1895632(Local_423.f_3))
	{
		if (unk_0x915685CA559C211B(Local_853.f_2, Local_423.f_3, 1) && iLocal_1142 < 6)
		{
			iLocal_905 = 1;
		}
	}
	if (iLocal_1142 >= 4)
	{
		if (func_214(Local_423.f_3, 1) < 3f && !iLocal_904)
		{
			if (!func_192())
			{
				func_327(&(Local_423.f_244), Local_423.f_144, "txm4_aggro", 8, 0, 0, 0);
				unk_0xA02736B50802C8BB(Local_423.f_3, unk_0xE7869D5D7816A9B6(), -1, 0);
				iLocal_900 = unk_0x9D40BBF80D8F5E8A();
				iLocal_904 = 1;
			}
			else if (!iLocal_913)
			{
				func_140();
				iLocal_913 = 1;
			}
		}
	}
	switch (iLocal_1142)
	{
		case 0:
			if ((!unk_0x76B2D234F1895632(Local_853.f_2) && !unk_0x76B2D234F1895632(Local_423.f_3)) && !unk_0x76B2D234F1895632(iLocal_890))
			{
				unk_0x103FCC2BD24292A3("TAXI_Whore", &iLocal_893);
				iLocal_892 = unk_0x1EB88099AAF24BDE(Local_423.f_3);
				unk_0xA9CA101B50B90993(255, Local_853.f_30, iLocal_893);
				unk_0xA9CA101B50B90993(255, Local_853.f_30, iLocal_892);
				unk_0x690C5239500171FE(Local_853.f_2, Local_853.f_30);
				unk_0x690C5239500171FE(iLocal_890, iLocal_893);
				unk_0x9BEE7E791BC4D38B(Local_853.f_2, 1);
				unk_0x7E3DC7ED30B648F0(Local_853.f_2, 17, 1);
				unk_0x09714949CF524B00(Local_853.f_2, 130);
				unk_0xDEF79D33A50B28A7(Local_853.f_2, 1);
				unk_0x29A570418FD8F6FE(Local_853.f_2, 1);
				unk_0xFA2C5C2D054C888E(Local_853.f_2);
				unk_0x9BEE7E791BC4D38B(iLocal_890, 1);
				unk_0x7E3DC7ED30B648F0(iLocal_890, 17, 1);
				unk_0x09714949CF524B00(iLocal_890, 130);
				unk_0xDEF79D33A50B28A7(iLocal_890, 1);
				unk_0x29A570418FD8F6FE(iLocal_890, 1);
				unk_0xFA2C5C2D054C888E(iLocal_890);
				iLocal_1142 = 1;
			}
			break;
		
		case 1:
			if (((!unk_0x76B2D234F1895632(Local_853.f_2) && !unk_0x76B2D234F1895632(Local_423.f_3)) && !unk_0x76B2D234F1895632(iLocal_890)) && !unk_0x76B2D234F1895632(Local_853.f_3))
			{
				unk_0x33A90AD8FA327B72(&uLocal_414);
				unk_0x94026C1D1DB14225(&uLocal_414);
				unk_0x58F62EDF6111D598(0, iLocal_890, 0);
				unk_0xDCF460AE46C9489C(0, &cLocal_980, "idle_b", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0xDCF460AE46C9489C(0, &cLocal_996, "exit", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0x911ECBCE73F8EC3F(uLocal_414);
				unk_0xC2C4A3A9FF2FBFFF(Local_853.f_2, uLocal_414);
				unk_0x33A90AD8FA327B72(&uLocal_414);
				unk_0x33A90AD8FA327B72(&uLocal_415);
				unk_0x94026C1D1DB14225(&uLocal_415);
				unk_0x58F62EDF6111D598(0, Local_853.f_2, 0);
				unk_0xDCF460AE46C9489C(0, &cLocal_1012, "idle_a", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x911ECBCE73F8EC3F(uLocal_415);
				unk_0xC2C4A3A9FF2FBFFF(iLocal_890, uLocal_415);
				unk_0x33A90AD8FA327B72(&uLocal_415);
				iLocal_1142 = 2;
			}
			break;
		
		case 2:
			if (iLocal_906)
			{
				if (!unk_0x76B2D234F1895632(iLocal_890) && !unk_0x76B2D234F1895632(Local_423.f_3))
				{
					unk_0x690C5239500171FE(Local_423.f_3, iLocal_892);
					unk_0x9BEE7E791BC4D38B(Local_423.f_3, 1);
					unk_0x7E3DC7ED30B648F0(Local_423.f_3, 13, 1);
					unk_0x64E0FC912F0D2D42(Local_423.f_3, 100);
					unk_0xB161EBD04DDDE4AD(Local_423.f_3, 100);
					unk_0x09714949CF524B00(Local_423.f_3, 105);
					unk_0xFA2C5C2D054C888E(Local_423.f_3);
					unk_0x33A90AD8FA327B72(&uLocal_416);
					unk_0x94026C1D1DB14225(&uLocal_416);
					unk_0x39FD98334BDB065B(0, 5000);
					func_326(&Local_423, -691.48f, -1113.31f, 13.53f);
					unk_0xBE9AFED5018B4A06(0, func_325(iLocal_413), iLocal_890, 3f, 1, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
					unk_0x56421AD67F716D1C(0, iLocal_890, -1, joaat("FIRING_PATTERN_FULL_AUTO"));
					unk_0x911ECBCE73F8EC3F(uLocal_416);
					unk_0xC2C4A3A9FF2FBFFF(Local_423.f_3, uLocal_416);
					unk_0x33A90AD8FA327B72(&uLocal_416);
					iLocal_902 = 1;
					unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 0, 256);
					unk_0xCC897563F1971D6A(Local_423.f_3, joaat("weapon_pistol"), 100, 1, 1);
					iLocal_1142 = 3;
				}
			}
			else if (!iLocal_909)
			{
				if (!unk_0xAF437D7C802AB246(Local_853.f_2) && !unk_0xAF437D7C802AB246(iLocal_890))
				{
					if (func_214(Local_853.f_2, 1) < 2f || func_214(iLocal_890, 1) < 2f)
					{
						unk_0xFA2C5C2D054C888E(Local_853.f_2);
						unk_0xFA2C5C2D054C888E(iLocal_890);
						unk_0x6A8BCE61F660B8D0(Local_853.f_2, unk_0xE7869D5D7816A9B6(), -1, 2048, 4);
						unk_0x33A90AD8FA327B72(&uLocal_414);
						unk_0x94026C1D1DB14225(&uLocal_414);
						unk_0x58F62EDF6111D598(0, unk_0xE7869D5D7816A9B6(), 0);
						unk_0x911ECBCE73F8EC3F(uLocal_414);
						unk_0xC2C4A3A9FF2FBFFF(Local_853.f_2, uLocal_414);
						unk_0x6A8BCE61F660B8D0(iLocal_890, unk_0xE7869D5D7816A9B6(), -1, 2048, 4);
						unk_0x33A90AD8FA327B72(&uLocal_415);
						unk_0x94026C1D1DB14225(&uLocal_415);
						unk_0x58F62EDF6111D598(0, unk_0xE7869D5D7816A9B6(), 0);
						unk_0x911ECBCE73F8EC3F(uLocal_415);
						unk_0xC2C4A3A9FF2FBFFF(iLocal_890, uLocal_415);
						iLocal_909 = 1;
					}
				}
				else
				{
					if (unk_0xAF437D7C802AB246(Local_853.f_2))
					{
					}
					else
					{
						unk_0xFA2C5C2D054C888E(Local_853.f_2);
						unk_0x4B79E06845D63B96(Local_853.f_2, unk_0xE7869D5D7816A9B6(), 100f, 20000, 0, 0);
					}
					if (unk_0xAF437D7C802AB246(iLocal_890))
					{
					}
					else
					{
						unk_0xFA2C5C2D054C888E(iLocal_890);
						unk_0x4B79E06845D63B96(iLocal_890, unk_0xE7869D5D7816A9B6(), 100f, 20000, 0, 0);
					}
				}
			}
			break;
		
		case 3:
			func_132("UPDATE_FINAL_SCENE - FINAL_SCENE_WAIT_FOR_DIALOGUE", &iLocal_896, 1000);
			if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()) && !unk_0x76B2D234F1895632(Local_423.f_3))
			{
				if (unk_0xC47857E5E74EA5AF(Local_423.f_3, 242628503) == 1)
				{
					if (unk_0x229936D409069998(Local_423.f_3) > 0 && iLocal_902)
					{
						unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
						iLocal_902 = 0;
					}
				}
			}
			else
			{
				unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
			}
			if (((!unk_0xAF437D7C802AB246(iLocal_890) && unk_0xBE39A9E9E0D434A6(iLocal_890)) && !unk_0x76B2D234F1895632(Local_853.f_2)) && !bLocal_908)
			{
				unk_0x6A8BCE61F660B8D0(Local_853.f_2, Local_423.f_3, -1, 2048, 4);
				unk_0x33A90AD8FA327B72(&uLocal_414);
				unk_0x94026C1D1DB14225(&uLocal_414);
				unk_0x39FD98334BDB065B(0, 500);
				unk_0xDCF460AE46C9489C(0, "MOVE_DUCK_FOR_COVER", "enter", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0xDCF460AE46C9489C(0, "MOVE_DUCK_FOR_COVER", "loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x58F62EDF6111D598(0, Local_423.f_3, 0);
				unk_0x911ECBCE73F8EC3F(uLocal_414);
				unk_0xC2C4A3A9FF2FBFFF(Local_853.f_2, uLocal_414);
				bLocal_908 = true;
			}
			if (!unk_0x76B2D234F1895632(Local_423.f_3) && !unk_0x76B2D234F1895632(Local_853.f_2))
			{
				if (unk_0x229936D409069998(Local_423.f_3) > 2)
				{
					func_235(&Local_423, 58, 1, 0, 0);
					unk_0x33A90AD8FA327B72(&uLocal_416);
					unk_0x94026C1D1DB14225(&uLocal_416);
					unk_0x44C7AD5B54E267EE(0);
					unk_0xA02736B50802C8BB(0, Local_853.f_2, 2000, 0);
					unk_0x911ECBCE73F8EC3F(uLocal_416);
					unk_0xC2C4A3A9FF2FBFFF(Local_423.f_3, uLocal_416);
					iLocal_1142 = 4;
				}
			}
			break;
		
		case 4:
			func_132("FINAL_SCENE_KILL_WOMAN", &iLocal_896, 1000);
			if (unk_0x76B2D234F1895632(iLocal_890))
			{
				if (!unk_0x76B2D234F1895632(Local_853.f_2))
				{
					if (!unk_0x76B2D234F1895632(Local_423.f_3))
					{
						unk_0x33A90AD8FA327B72(&uLocal_415);
						unk_0x94026C1D1DB14225(&uLocal_415);
						unk_0xBE9AFED5018B4A06(0, -691.48f, -1113.31f, 13.53f, Local_853.f_2, 1f, 0, 1056964608, 1082130432, 1, 0, 0, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
						unk_0xA02736B50802C8BB(0, Local_853.f_2, -1, 1);
						unk_0x911ECBCE73F8EC3F(uLocal_415);
						unk_0xC2C4A3A9FF2FBFFF(Local_423.f_3, uLocal_415);
					}
				}
				iLocal_1142 = 6;
			}
			break;
		
		case 6:
			func_132("FINAL_SCENE_KILL_MAN", &iLocal_896, 1000);
			if (!func_192())
			{
				if (!unk_0x76B2D234F1895632(Local_423.f_3) && !unk_0x76B2D234F1895632(Local_853.f_2))
				{
					unk_0x56421AD67F716D1C(Local_423.f_3, Local_853.f_2, -1, joaat("FIRING_PATTERN_FULL_AUTO"));
					iLocal_1142 = 7;
				}
			}
			break;
		
		case 7:
			func_132("FINAL_SCENE_FLEE", &iLocal_896, 1000);
			if (unk_0x76B2D234F1895632(Local_853.f_2) && !unk_0x76B2D234F1895632(Local_423.f_3))
			{
				Var0 = { unk_0x1141852D07400777(Local_853.f_2, 0) };
				unk_0x94026C1D1DB14225(&uLocal_416);
				unk_0x90B6E77A0795E4C0(0, Var0, 1000, 0, 0);
				unk_0x0A4F47B84A5F0258(0, 0);
				unk_0x39FD98334BDB065B(0, 500);
				unk_0x29F2993666F68F46(0, -691.48f, -1113.31f, 13.53f, 1000f, -1, 0, 0);
				unk_0x911ECBCE73F8EC3F(uLocal_416);
				unk_0xC2C4A3A9FF2FBFFF(Local_423.f_3, uLocal_416);
				unk_0x33A90AD8FA327B72(&uLocal_416);
				unk_0x8D6671D78D1F569B(Local_423.f_3, 1);
				iLocal_905 = 1;
			}
			break;
	}
}

Vector3 func_325(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -691.48f, -1113.31f, 13.53f;
		
		case 1:
			return -691.48f, -1113.31f, 13.53f;
		
		default:
	}
	return -691.48f, -1113.31f, 13.53f;
}

void func_326(var uParam0, struct<3> Param1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
	{
		if (!unk_0x76B2D234F1895632(uParam0->f_3))
		{
			Var0 = { unk_0xBD306D8AFEF4E078(uParam0->f_4, -1.78774f, -1.62399f, -0.6206f) };
			Var3 = { unk_0xBD306D8AFEF4E078(uParam0->f_4, 1.78498f, -1.24105f, -0.6422f) };
			if (unk_0xF18329472591CFE6(Var0, Param1, 0) < unk_0xF18329472591CFE6(Var3, Param1, 0) && unk_0xE8C390D56BE854E1(uParam0->f_3, uParam0->f_4, 1, 0, 0))
			{
				unk_0x663F1B23D2C4D20A(0, uParam0->f_4, 131584);
			}
			else if (unk_0xF18329472591CFE6(Var0, Param1, 0) >= unk_0xF18329472591CFE6(Var3, Param1, 0) && unk_0xE8C390D56BE854E1(uParam0->f_3, uParam0->f_4, 2, 0, 0))
			{
				unk_0x663F1B23D2C4D20A(0, uParam0->f_4, 262656);
			}
			else
			{
				unk_0x663F1B23D2C4D20A(0, uParam0->f_4, 512);
			}
		}
	}
}

int func_327(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_335(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_328(sParam2, iParam3, 0);
}

int func_328(char* sParam0, int iParam1, bool bParam2)
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
					func_141();
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
		if (func_334(8, -1))
		{
			return 0;
		}
		Global_15788 = { Global_15782 };
		func_333();
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
				func_332();
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
				if (func_331())
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
			if (func_29())
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
			func_330();
			Global_15722 = bParam2;
		}
		Global_15714 = iParam1;
		StringCopy(&Global_15331, sParam0, 24);
		Global_14578 = 0;
		func_329();
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
		func_141();
	}
	return 0;
}

void func_329()
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

void func_330()
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

int func_331()
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

void func_332()
{
	if (func_78(14))
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
		Global_14413 = func_94();
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

void func_333()
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

bool func_334(int iParam0, int iParam1)
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

void func_335(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_336(var uParam0, char* sParam1, int iParam2)
{
	struct<3> Var0;
	
	func_140();
	func_437(2);
	Var0 = { func_343() };
	if ((!unk_0xF6917DE0E003509D(&Var0) && func_192()) && !unk_0x04E7E853E31F41A3(&Var0, "NULL"))
	{
	}
	else
	{
		unk_0x00400F14096FE01D();
		unk_0x1D208E4A4E1D4FFE(1);
		StringCopy(&Var0, uParam0->f_143, 24);
		if (!unk_0x76B2D234F1895632(uParam0->f_3))
		{
			if (!func_204(uParam0))
			{
				if (unk_0x23417CDB252083F9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					unk_0x91BC1C1D86377CB9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (unk_0x23417CDB252083F9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					unk_0x91BC1C1D86377CB9(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (unk_0x23417CDB252083F9(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					unk_0x91BC1C1D86377CB9(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_296(uParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_aband2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				func_341(uParam0, &Var0);
			}
			else if (!unk_0xAF437D7C802AB246(uParam0->f_3))
			{
				func_255(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (uParam0->f_115)
			{
				StringConCat(&Var0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&Var0, "_aggro", 24);
			}
			func_341(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&Var0, "_lost1", 24);
			func_341(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&Var0, "_spotd1", 24);
			func_341(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&Var0, "_wntd1", 24);
			func_341(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&Var0, "_spook", 24);
			func_341(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_204(uParam0))
			{
				if (unk_0x6D30046757C9C4F9(uParam0->f_4))
				{
					func_338(uParam0, 4096, 0);
				}
				else
				{
					func_338(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&Var0, "_hit2", 24);
			func_341(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&Var0, "_jak", 24);
			func_341(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_shot2", 24);
				}
				else
				{
					StringConCat(&Var0, "_shot1", 24);
				}
				func_341(uParam0, &Var0);
			}
			else if (!unk_0xAF437D7C802AB246(uParam0->f_3))
			{
				func_255(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			unk_0x1B1CE102A7E7999E(unk_0x3F80C6638E3A1A90(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_341(uParam0, &Var0);
			unk_0x1B1CE102A7E7999E(unk_0x3F80C6638E3A1A90(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&Var0, "_shot1", 24);
			func_341(uParam0, &Var0);
			unk_0x1B1CE102A7E7999E(unk_0x3F80C6638E3A1A90(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_51(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_341(uParam0, &Var0);
			}
			else if (!unk_0xAF437D7C802AB246(uParam0->f_3))
			{
				func_255(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_338(uParam0, 0, 0);
			func_341(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_51(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_341(uParam0, &Var0);
			}
			else if (!unk_0xAF437D7C802AB246(uParam0->f_3))
			{
				func_255(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_341(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_51(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_341(uParam0, &Var0);
			}
			else if (!unk_0xAF437D7C802AB246(uParam0->f_3))
			{
				func_255(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&Var0, "OJTX_QUIT_", 24);
			func_337(&Var0);
			func_327(&(uParam0->f_244), "OJTXAUD", &Var0, 7, 0, 0, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (uParam0->f_115)
			{
				StringConCat(&Var0, "_aband2", 24);
			}
			else
			{
				StringConCat(&Var0, "_fail1", 24);
			}
			func_341(uParam0, &Var0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (uParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&Var0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&Var0, "_aband1", 24);
				}
				if (uParam0->f_410 > 5)
				{
					func_341(uParam0, &Var0);
				}
			}
			else if (!unk_0xAF437D7C802AB246(uParam0->f_3))
			{
				func_255(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_51(3, 0);
		}
		func_296(uParam0, 3, 0f, 1);
	}
}

void func_337(char* sParam0)
{
	switch (func_3(unk_0xE7869D5D7816A9B6()))
	{
		case 0:
			StringConCat(sParam0, "M", 24);
			break;
		
		case 2:
			StringConCat(sParam0, "T", 24);
			break;
		
		case 1:
			StringConCat(sParam0, "F", 24);
			break;
		
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

void func_338(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!unk_0x76B2D234F1895632(uParam0->f_3))
	{
		unk_0x9BEE7E791BC4D38B(uParam0->f_3, 0);
		unk_0x29FD5B1A4BA65801(uParam0->f_3);
		unk_0x7346544C767CFCBF(uParam0->f_3, 3, 0);
		unk_0x7E3DC7ED30B648F0(uParam0->f_3, 17, 1);
		unk_0xFA2C5C2D054C888E(uParam0->f_3);
		if ((func_49(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_340(uParam0->f_29)) && !bParam2)
		{
			func_339(uParam0);
		}
		else
		{
			unk_0x7346544C767CFCBF(uParam0->f_3, 1024, 1);
			unk_0x7346544C767CFCBF(uParam0->f_3, 131072, 1);
			unk_0x94026C1D1DB14225(&uVar0);
			unk_0xCD7A5BCC47D00FB2(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				unk_0x5EE92E5069683596(0, 1193033728, 0);
			}
			else
			{
				unk_0x4B79E06845D63B96(0, unk_0xE7869D5D7816A9B6(), 1000f, -1, 0, 0);
			}
			unk_0x732BBAB72712004C(0, 0);
			unk_0x911ECBCE73F8EC3F(uVar0);
			unk_0xC2C4A3A9FF2FBFFF(uParam0->f_3, uVar0);
			unk_0x33A90AD8FA327B72(&uVar0);
		}
		unk_0x8D6671D78D1F569B(uParam0->f_3, 1);
	}
}

void func_339(var uParam0)
{
	var uVar0;
	
	if (!unk_0x76B2D234F1895632(uParam0->f_3))
	{
		if (func_37(func_38(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				unk_0x151F32CB40BE730C(uParam0->f_3, 84.9058f);
				unk_0x8D6671D78D1F569B(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0x151F32CB40BE730C(uParam0->f_3, 68.3138f);
				unk_0x8D6671D78D1F569B(uParam0->f_3, 1);
			}
			else
			{
				unk_0x5EE92E5069683596(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			unk_0xFA2C5C2D054C888E(uParam0->f_3);
			unk_0x33A90AD8FA327B72(&uVar0);
			unk_0x94026C1D1DB14225(&uVar0);
			unk_0xCD7A5BCC47D00FB2(0, 0, 0);
			unk_0x732BBAB72712004C(0, 0);
			unk_0x33E113E52A91C5C3(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				unk_0x7D786F4317F35B2E(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				unk_0x236D757920F01F00(0, 1);
				unk_0x33E113E52A91C5C3(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				unk_0xF78809EA8A08F2D1(0, 151.7794f, 0);
				unk_0x7D786F4317F35B2E(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				unk_0xA3A25B3BCF95E908(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				unk_0xA3A25B3BCF95E908(0, uParam0->f_29, 15f, 20000);
				unk_0x5EE92E5069683596(0, 1193033728, 0);
			}
			else
			{
				unk_0xDCF460AE46C9489C(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				unk_0xDCF460AE46C9489C(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (unk_0x22E8CF9DF233BFE5(uParam0->f_29, 15f, 1))
			{
				unk_0xA3A25B3BCF95E908(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				unk_0x5EE92E5069683596(0, 1193033728, 0);
			}
			unk_0x911ECBCE73F8EC3F(uVar0);
			unk_0xC2C4A3A9FF2FBFFF(uParam0->f_3, uVar0);
			unk_0x33A90AD8FA327B72(&uVar0);
		}
		unk_0x8D6671D78D1F569B(uParam0->f_3, 1);
	}
}

int func_340(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_341(var uParam0, char* sParam1)
{
	if (func_342(uParam0))
	{
		func_327(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_342(var uParam0)
{
	if (!unk_0x76B2D234F1895632(uParam0->f_3))
	{
		if (func_47(unk_0xE7869D5D7816A9B6(), uParam0->f_3, 1) < 40f && !unk_0x51AAB57E2FC16B14(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_343()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15712 == 4)
	{
		iVar6 = unk_0x465F47E0FBFEFAEE();
		iVar6 = (iVar6 + Global_16722);
		if (iVar6 > -1)
		{
			return Global_14580[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_344(var uParam0)
{
	return uParam0->f_118;
}

void func_345()
{
	func_375(&Local_423);
	if (func_374(&Local_423, &Local_1052))
	{
		switch (Local_1052.f_27)
		{
			case 0:
				if (Local_423.f_410 == 17)
				{
					if (!func_373(&Local_423))
					{
						if (func_372("TAXI_OBJ_FTC1") || unk_0xD11595488376CB53(Local_423.f_9))
						{
							Local_1052.f_27++;
						}
						else if (func_179(&Local_423) != 10)
						{
							func_235(&Local_423, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_179(&Local_423) > 10 && func_179(&Local_423) != 15) && !func_373(&Local_423))
				{
					func_235(&Local_423, 15, 1, 0, 0);
					func_185(&Local_423, 7);
				}
				break;
			}
	}
	func_346(&Local_423, &uLocal_1082, &Local_1052, bLocal_1051);
}

int func_346(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_354(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_170(uParam0, 2))
	{
		if (func_353(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((unk_0x9D40BBF80D8F5E8A() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_352(uParam0))
				{
					uParam2->f_7 = { func_351(uParam1) };
					func_327(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_192())
				{
					uParam2->f_13 = { func_238() };
					if (unk_0x04E7E853E31F41A3(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_64(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_349(uParam1);
					func_296(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_208(uParam0))
				{
					if (func_192())
					{
						func_296(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_348() };
						if (unk_0x44B59DB1458EE8E0(unk_0xBFAE5F9DEC53DAE2()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_192())
				{
					uParam2->f_19 = { func_343() };
				}
				else
				{
					func_64(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_349(uParam1);
					func_296(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_170(uParam0, 14) && !func_192()) && !func_208(uParam0)) && func_106(uParam0, 18) > 1f)
				{
					func_296(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_192())
				{
					if (func_106(uParam0, 18) > 1f)
					{
						if (!unk_0xF6917DE0E003509D(&(uParam2->f_1)))
						{
							func_347(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_192())
				{
					func_64(&(uParam2->f_26), unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, unk_0xBBDA792448DB5A89(uParam2->f_27))));
					uParam2->f_27++;
					func_349(uParam1);
					func_296(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_347(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_335(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	return func_328(sParam2, iParam4, 0);
}

struct<6> func_348()
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

void func_349(var uParam0)
{
	int iVar0;
	
	iVar0 = func_350(uParam0);
	if (iVar0 > -1)
	{
		func_19(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_19(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_63(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_137(), 24);
	}
}

int func_350(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_21((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_351(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_21((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_63(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_352(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_210("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_210("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_210("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_210("TX_OBJ_GYB_DO", 0, 0) || func_210("TAXI_OBJ_GYB", 0, 0)) || func_210("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_210("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_210("TX_OBJ_CYI_DO", 0, 0) || func_210("TAXI_OBJ_CYI_01", 0, 0)) || func_210("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_210("TX_OBJ_GYN_DO", 0, 0) || func_210("TAXI_OBJ_GYN", 0, 0)) || func_210("TAXI_OBJ_GYN_TG", 0, 0)) || func_210("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_210("TAXI_OBJ_CC1", 0, 0) || func_210("TAXI_OBJ_CC2", 0, 0)) || func_210("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_210("TAXI_OBJ_FTC1", 0, 0) || func_210("TAXI_OBJ_FTC2", 0, 0)) || func_210("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_210("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_210("TAXI_OBJ_GETRUN", 0, 0) || func_210("TAXI_OBJ_DRIVE", 0, 0)) || func_210("TAXI_OBJ_RETURN", 0, 0)) || func_210("TAXI_OBJ_POL", 0, 0)) || func_210("TAXI_OBJ_RUNOUT", 0, 0)) || func_210("TAXI_OBJ_POL", 0, 0));
}

int func_353(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_21((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_354(var uParam0, var uParam1)
{
	struct<3> Var0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_352(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_170(uParam0, 14))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_179(uParam0))
		{
			case 55:
				StringConCat(&Var0, "_lvMe1", 24);
				cVar6 = { Var0 };
				func_371(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_370(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_296(uParam0, 16, 0, 0);
				func_369(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_192())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&Var0, "_retrn1", 24);
					}
					if (uParam0->f_411 != 9)
					{
						func_368(uParam0, &Var0, 0, 0, 8);
					}
				}
				else
				{
					func_365(uParam0, Var0, func_367(uParam0, 2));
				}
				if (func_21(uParam0->f_98, 4))
				{
					func_296(uParam0, 16, 0, 0);
					func_260(uParam0, 0, 0);
				}
				func_219(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_106(uParam0, 16) > 1f)
				{
					func_220(1);
					if (uParam0->f_411 == 9)
					{
						func_259("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_259("TAXI_VIP_RETURN", 7500, 1);
					}
					func_296(uParam0, 16, 0, 0);
					func_260(uParam0, 0, 0);
				}
				break;
			
			case 65:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&Var0, "_aggro", 24);
				}
				uParam0->f_107++;
				if (uParam0->f_411 != 9)
				{
					func_368(uParam0, &Var0, 0, 1, 8);
				}
				else if (!unk_0xAF437D7C802AB246(uParam0->f_3))
				{
					func_255(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_106(uParam0, 16) > func_120(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_192()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&Var0, uParam0->f_143, 24);
		switch (func_179(uParam0))
		{
			case 142:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&Var0, "_noDri1", 24);
				}
				func_368(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&Var0, "_lvMe2", 24);
				cVar6 = { Var0 };
				func_371(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_370(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_296(uParam0, 16, 0, 0);
				func_369(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_327(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_235(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_296(uParam0, 16, 0, 0);
				func_235(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&Var0, "_hail1", 24);
				cVar6 = { Var0 };
				if (!func_21(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_371(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_370(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_368(uParam0, &Var0, 0, 0, 8);
					}
				}
				func_296(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_259("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_259("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&Var0, "_obj1", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xD11595488376CB53(uParam0->f_9))
					{
						uParam0->f_9 = func_119(uParam0->f_17, 1);
					}
					else if (unk_0x86EA9787AE151BBA(uParam0->f_9) == 0)
					{
						unk_0x95FCF148333C6A88(uParam0->f_9, 255);
						unk_0x4CF4101B43DF5CB0(uParam0->f_9, uParam0->f_17);
						unk_0x1AD7485666C5160C(uParam0->f_9, 1);
					}
				}
				func_235(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 9:
				if ((uParam0->f_101 == 1 || uParam0->f_411 == 2) || uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_gret1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&Var0, "_gret1", 24);
							break;
						
						case 0:
							StringConCat(&Var0, "_gret2", 24);
							break;
						
						case 2:
							StringConCat(&Var0, "_gret3", 24);
							break;
						
						default:
							StringConCat(&Var0, "_gret4", 24);
							break;
						}
				}
				func_237(&Var0);
				if (uParam0->f_411 != 9)
				{
					func_368(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					func_255(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!unk_0xD11595488376CB53(uParam0->f_9))
					{
						uParam0->f_9 = func_119(uParam0->f_17, 1);
					}
					else if (unk_0x86EA9787AE151BBA(uParam0->f_9) == 0)
					{
						unk_0x95FCF148333C6A88(uParam0->f_9, 255);
						unk_0x4CF4101B43DF5CB0(uParam0->f_9, uParam0->f_17);
						unk_0x1AD7485666C5160C(uParam0->f_9, 1);
					}
				}
				func_235(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&Var0, "_dest2", 24);
				func_364(uParam0, 33554432, Var0, "", 1, 8);
				func_296(uParam0, 16, 0, 0);
				func_235(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_192())
				{
					func_363(uParam0, 0);
					func_63(&(uParam0->f_44), 4);
					func_296(uParam0, 16, 0, 0);
					func_235(uParam0, 13, 0, 0, 0);
				}
				break;
			
			case 14:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_bant2", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_bant1", 24);
						break;
					
					case 2:
						StringConCat(&Var0, "_bant3", 24);
						break;
					
					default:
						StringConCat(&Var0, "_bant1", 24);
						break;
				}
				func_237(&Var0);
				func_361(Var0, uParam1);
				func_296(uParam0, 16, 0, 0);
				func_296(uParam0, 11, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_106(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban1", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant1", 24);
						func_237(&Var0);
					}
					func_361(Var0, uParam1);
					func_63(&(uParam0->f_81), 67108864);
					func_296(uParam0, 16, 0, 0);
					func_296(uParam0, 11, 0, 0);
					func_260(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_106(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&Var0, "_ban2", 24);
					}
					else if (uParam0->f_411 == 1)
					{
						StringConCat(&Var0, "_banter", 24);
					}
					else
					{
						StringConCat(&Var0, "_bant2", 24);
						if (uParam0->f_411 != 6)
						{
							func_237(&Var0);
						}
					}
					func_361(Var0, uParam1);
					func_296(uParam0, 11, 0, 0);
					func_296(uParam0, 16, 0, 0);
					func_260(uParam0, 0, 0);
				}
				break;
			
			case 17:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_ban3", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant3", 24);
					func_237(&Var0);
				}
				func_361(Var0, uParam1);
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 18:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant4", 24);
				}
				func_237(&Var0);
				func_361(Var0, uParam1);
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 19:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&Var0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&Var0, "_bant5", 24);
				}
				func_237(&Var0);
				func_361(Var0, uParam1);
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&Var0, "_dest2b", 24);
				func_237(&Var0);
				func_361(Var0, uParam1);
				func_296(uParam0, 16, 0, 0);
				func_296(uParam0, 11, 0, 0);
				func_260(uParam0, 0, 0);
				func_63(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&Var0, "_seePt1", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				func_235(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&Var0, "_talk", 24);
				StringIntConCat(&Var0, 1, 24);
				func_237(&Var0);
				func_368(uParam0, &Var0, 1, 0, 8);
				break;
			
			case 89:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_deal1", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_deal1", 24);
						break;
					
					default:
						StringConCat(&Var0, "_deal1", 24);
						break;
				}
				func_368(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&Var0, "_ig1c", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 27:
				StringConCat(&Var0, "_bTime", 24);
				if (uParam0->f_411 == 2)
				{
					iVar13 = 8;
				}
				else
				{
					iVar13 = 3;
				}
				iVar12 = 0;
				while (iVar12 < iVar13)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar12)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar15[iVar12] = 0;
									break;
								
								default:
									iVar15[iVar12] = 1;
									break;
							}
							break;
						
						default:
							iVar15[iVar12] = 1;
							break;
					}
					iVar12++;
				}
				if (uParam0->f_411 == 2)
				{
					func_360(&(uParam0->f_90), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_360(&(uParam0->f_90), 3, &Var0, &iVar15, 1, 0);
				}
				func_361(Var0, uParam1);
				func_369(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_296(uParam0, 16, 0, 0);
				func_296(uParam0, 6, 0f, 1);
				func_260(uParam0, 0, 0);
				break;
			
			case 26:
				StringConCat(&Var0, "_gTime", 24);
				iVar12 = 0;
				while (iVar12 < 8)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar12)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar15[iVar12] = 0;
									break;
								
								default:
									iVar15[iVar12] = 1;
									break;
							}
							break;
						
						default:
							iVar15[iVar12] = 1;
							break;
					}
					iVar12++;
				}
				if (uParam0->f_411 == 2)
				{
					func_360(&(uParam0->f_89), 8, &Var0, &iVar15, 1, 0);
				}
				else
				{
					func_360(&(uParam0->f_89), 3, &Var0, &iVar15, 1, 0);
				}
				func_361(Var0, uParam1);
				func_369(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_296(uParam0, 16, 0, 0);
				func_296(uParam0, 6, 0f, 1);
				func_260(uParam0, 0, 0);
				break;
			
			case 12:
				func_259("TAXI_OBJ_GYB", 3500, 1);
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_259("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_259("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_259("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 28:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&Var0, "_dest1A", 24);
						break;
					
					case 1:
						StringConCat(&Var0, "_dest1B", 24);
						break;
					
					default:
						StringConCat(&Var0, "_dest1A", 24);
						break;
				}
				func_368(uParam0, &Var0, 0, 0, 8);
				func_235(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_21(uParam0->f_98, 268435456))
				{
					func_259("TAXI_OBJ_CYI_01", 7500, 1);
					func_63(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&Var0, "_rCar1", 24);
				func_237(&Var0);
				func_361(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&Var0, "_rCar2", 24);
				func_237(&Var0);
				func_361(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&Var0, "_rCar3", 24);
				func_237(&Var0);
				func_361(Var0, uParam1);
				uParam0->f_124 = { Var0 };
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 33:
				func_259("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_21(uParam0->f_82, 8192))
				{
					if (func_106(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_airBr1", 24);
						func_237(&Var0);
						if (uParam0->f_411 == 5)
						{
							func_361(Var0, uParam1);
						}
						else
						{
							func_368(uParam0, &Var0, 0, 0, 8);
						}
						func_63(&(uParam0->f_82), 8192);
						func_296(uParam0, 16, 0, 0);
						func_296(uParam0, 11, 0, 0);
						func_260(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_21(uParam0->f_82, 16384))
				{
					StringConCat(&Var0, "_seeD1", 24);
					func_237(&Var0);
					func_368(uParam0, &Var0, 0, 0, 8);
					func_63(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_21(uParam0->f_82, 32768))
				{
					StringConCat(&Var0, "_seeD2", 24);
					func_237(&Var0);
					func_368(uParam0, &Var0, 0, 0, 8);
					func_63(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&Var0, "_done1", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				func_235(uParam0, 46, 1, 0, 0);
				break;
			
			case 138:
				if (uParam0->f_101 == 1)
				{
					StringConCat(&Var0, "_ftc1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&Var0, "_ftc1", 24);
							break;
						
						case 0:
							StringConCat(&Var0, "_ftc2", 24);
							break;
						
						case 2:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						
						default:
							StringConCat(&Var0, "_ftc3", 24);
							break;
						}
				}
				func_237(&Var0);
				func_368(uParam0, &Var0, 0, 0, 8);
				func_235(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_260(uParam0, 0, 0);
				break;
			
			case 139:
				func_259("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_235(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&Var0, "_dOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x0ADD324BC46177EF(0, 120);
				if (!func_21(uParam0->f_82, 268435456))
				{
					if (iVar14 > 80)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else if (iVar14 > 40)
					{
						StringConCat(&cVar6, "_2", 24);
					}
					else
					{
						StringConCat(&cVar6, "_3", 24);
					}
					func_63(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 > 80)
				{
					StringConCat(&cVar6, "_4", 24);
				}
				else if (iVar14 > 40)
				{
					StringConCat(&cVar6, "_5", 24);
				}
				else
				{
					StringConCat(&cVar6, "_6", 24);
				}
				func_370(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&Var0, "_bdOff1", 24);
				cVar6 = { Var0 };
				iVar14 = unk_0x0ADD324BC46177EF(0, 100);
				if (!func_21(uParam0->f_82, 268435456))
				{
					if (iVar14 < 50)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else
					{
						StringConCat(&cVar6, "_2", 24);
					}
					func_63(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_370(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&Var0, "_dr2P", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&Var0, "_dr2N", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&Var0, "_dOff2", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				func_235(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_259("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_260(uParam0, 0, 0);
				func_235(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&Var0, "_dOff3", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				func_235(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_192())
				{
					func_259("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_260(uParam0, 0, 0);
					func_235(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_259("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_260(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_21(uParam0->f_81, 1))
				{
					func_359(uParam0, 1, Var0, "_sick1", 8);
					func_19(&(uParam0->f_81), 2);
				}
				else if (!func_21(uParam0->f_81, 2))
				{
					func_359(uParam0, 2, Var0, "_sick2", 8);
					func_19(&(uParam0->f_81), 1);
				}
				func_369(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_21(uParam0->f_82, 2097152))
				{
					StringConCat(&Var0, "_nopke1", 24);
				}
				else if (!func_21(uParam0->f_82, 4194304))
				{
					StringConCat(&Var0, "_nopke2", 24);
				}
				func_63(&(uParam0->f_81), 2097152);
				func_368(uParam0, &Var0, 0, 0, 8);
				func_296(uParam0, 16, 0, 0);
				func_369(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 1);
				func_260(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&Var0, "_Puke1", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				func_369(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 63:
				StringConCat(&Var0, "_PkStp2", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				func_369(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&Var0, "_PkStp1", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				func_369(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				break;
			
			case 64:
				StringConCat(&Var0, "_PukeR1", 24);
				func_237(&Var0);
				func_368(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_21(uParam0->f_81, 4))
				{
					func_359(uParam0, 4, Var0, "_turns1", 8);
				}
				else if (!func_21(uParam0->f_81, 8))
				{
					func_359(uParam0, 8, Var0, "_turns2", 8);
				}
				else
				{
					func_359(uParam0, 8, Var0, "_turns3", 8);
					func_19(&(uParam0->f_81), 4);
					func_19(&(uParam0->f_81), 8);
				}
				func_369(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_358(uParam0))
				{
					func_365(uParam0, Var0, func_367(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xAF437D7C802AB246(uParam0->f_3))
					{
						func_255(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_carHt", 24);
					cVar6 = { Var0 };
					func_371(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_327(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&Var0, "_carHt1", 24);
					cVar6 = { Var0 };
					if (uParam0->f_411 == 0)
					{
						func_371(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_371(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_370(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				func_369(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&Var0, "_genPnHi", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_21(uParam0->f_83, 128))
				{
					StringConCat(&Var0, "_nMiss1", 24);
					func_327(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_63(&(uParam0->f_83), 128);
					func_19(&(uParam0->f_83), 256);
					func_296(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 256))
				{
					StringConCat(&Var0, "_nMiss2", 24);
					func_327(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_63(&(uParam0->f_83), 256);
					func_19(&(uParam0->f_83), 512);
					func_296(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 512))
				{
					StringConCat(&Var0, "_nMiss3", 24);
					func_327(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_63(&(uParam0->f_83), 512);
					func_19(&(uParam0->f_83), 128);
					func_296(uParam0, 16, 0, 0);
				}
				func_260(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_21(uParam0->f_83, 1))
				{
					StringConCat(&Var0, "_air1", 24);
					if (bVar24)
					{
						func_237(&Var0);
					}
					func_327(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_63(&(uParam0->f_83), 1);
					func_19(&(uParam0->f_83), 2);
					func_296(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 2))
				{
					StringConCat(&Var0, "_air2", 24);
					if (bVar24)
					{
						func_237(&Var0);
					}
					func_327(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_63(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_19(&(uParam0->f_83), 4);
					}
					else
					{
						func_19(&(uParam0->f_83), 1);
					}
					func_296(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 4))
				{
					StringConCat(&Var0, "_air3", 24);
					if (bVar24)
					{
						func_237(&Var0);
					}
					func_327(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_63(&(uParam0->f_83), 4);
					func_19(&(uParam0->f_83), 1);
					func_296(uParam0, 16, 0, 0);
				}
				func_369(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case joaat("mpsv_lp0_31"):
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_21(uParam0->f_81, 4096))
				{
					func_364(uParam0, 4096, Var0, "_sideW1", bVar24, 8);
				}
				else if (!func_21(uParam0->f_81, 8192))
				{
					func_364(uParam0, 8192, Var0, "_sideW2", bVar24, 8);
				}
				func_369(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_21(uParam0->f_81, 16384))
				{
					func_364(uParam0, 16384, Var0, "_opLne1", bVar24, 8);
				}
				else if (!func_21(uParam0->f_81, 32768))
				{
					func_364(uParam0, 32768, Var0, "_opLne2", bVar24, 8);
				}
				func_369(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_21(uParam0->f_82, 8))
					{
						func_357(uParam0, 8, Var0, "_bored1", 8, 0);
					}
					else if (!func_21(uParam0->f_82, 16))
					{
						func_357(uParam0, 16, Var0, "_bored2", 8, 0);
					}
					else if (!func_21(uParam0->f_82, 32))
					{
						func_357(uParam0, 32, Var0, "_bored3", 8, 0);
					}
					func_369(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_260(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_good1", 24);
					cVar6 = { Var0 };
					func_371(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_370(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_369(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
					func_296(uParam0, 16, 0, 0);
					func_260(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&Var0, "_EtoB1", 24);
				cVar6 = { Var0 };
				func_371(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_370(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_369(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&Var0, "_BtoE1", 24);
				cVar6 = { Var0 };
				func_371(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_370(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_369(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_21(uParam0->f_81, 65536))
				{
					func_364(uParam0, 65536, Var0, "_runLit1", 1, 8);
				}
				else if (!func_21(uParam0->f_81, 131072))
				{
					func_364(uParam0, 131072, Var0, "_runLit2", 1, 8);
				}
				func_260(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_358(uParam0))
				{
					func_365(uParam0, Var0, func_367(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xAF437D7C802AB246(uParam0->f_3))
					{
						func_255(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_21(uParam0->f_83, 8))
				{
					StringConCat(&Var0, "_hitR1", 24);
					func_237(&Var0);
					func_327(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_63(&(uParam0->f_83), 8);
					func_19(&(uParam0->f_83), 16);
					func_296(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 16))
				{
					StringConCat(&Var0, "_hitR2", 24);
					func_237(&Var0);
					func_327(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_63(&(uParam0->f_83), 16);
					func_19(&(uParam0->f_83), 32);
					func_296(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 32))
				{
					StringConCat(&Var0, "_hitR3", 24);
					func_237(&Var0);
					func_327(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_63(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_19(&(uParam0->f_83), 64);
					}
					else
					{
						func_19(&(uParam0->f_83), 8);
					}
					func_296(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 64))
				{
					StringConCat(&Var0, "_hitR4", 24);
					func_237(&Var0);
					func_327(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
					func_63(&(uParam0->f_83), 64);
					func_19(&(uParam0->f_83), 8);
					func_296(uParam0, 16, 0, 0);
				}
				func_369(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_192())
				{
					if (uParam0->f_115)
					{
						StringConCat(&Var0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&Var0, "_aggro", 24);
					}
					func_368(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_365(uParam0, Var0, func_367(uParam0, 65));
					func_260(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_192())
				{
					if (uParam0->f_411 == 4)
					{
						StringCopy(&Var0, "tm6_shoot", 24);
					}
					else if (uParam0->f_115)
					{
						StringConCat(&Var0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&Var0, "_shoot", 24);
					}
					func_368(uParam0, &Var0, 0, 1, 8);
				}
				else
				{
					func_365(uParam0, Var0, func_367(uParam0, 66));
					func_260(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_192())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&Var0, "_warnC1", 24);
								func_368(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&Var0, "_warnF1", 24);
								func_368(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&Var0, "_far1", 24);
								func_368(uParam0, &Var0, 0, 0, 8);
								func_369(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 2:
								StringConCat(&Var0, "_close1", 24);
								func_368(uParam0, &Var0, 0, 0, 8);
								func_369(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
								break;
							
							case 10:
								StringConCat(&Var0, "_hit1", 24);
								func_368(uParam0, &Var0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&Var0, "_good1", 24);
								cVar6 = { Var0 };
								func_371(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_370(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
								func_369(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_296(uParam0, 16, 0, 0);
								func_260(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&Var0, "_sBant1", 24);
									cVar6 = { Var0 };
									func_368(uParam0, &Var0, 0, 0, 8);
									func_296(uParam0, 16, 0, 0);
									func_296(uParam0, 11, 0, 0);
									func_260(uParam0, 0, 0);
									if (!iLocal_66)
									{
										iLocal_64 = 1;
									}
								}
								else
								{
									if (!iLocal_65)
									{
										StringConCat(&Var0, "_bant3", 24);
										iLocal_65 = 1;
									}
									else
									{
										StringConCat(&Var0, "_bant2", 24);
										iLocal_66 = 1;
									}
									func_237(&Var0);
									func_368(uParam0, &Var0, 0, 0, 8);
									func_296(uParam0, 16, 0, 0);
									func_296(uParam0, 11, 0, 0);
									func_260(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&Var0, "_done1", 24);
								func_368(uParam0, &Var0, 0, 0, 8);
								break;
						}
						func_235(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&Var0, "_speed1", 24);
				cVar6 = { Var0 };
				func_371(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_370(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_369(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_21(uParam0->f_82, 1))
				{
					func_357(uParam0, 1, Var0, "_close1", 8, 0);
				}
				else if (!func_21(uParam0->f_82, 2))
				{
					func_357(uParam0, 2, Var0, "_close2", 8, 0);
				}
				else if (!func_21(uParam0->f_82, 4))
				{
					func_357(uParam0, 4, Var0, "_close3", 8, 0);
				}
				func_260(uParam0, 0, 0);
				break;
			
			case 48:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_stop2", 24);
				}
				else
				{
					StringConCat(&Var0, "_stop1", 24);
				}
				cVar6 = { Var0 };
				func_371(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_370(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (!unk_0xAF437D7C802AB246(uParam0->f_3))
				{
					func_255(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_296(uParam0, 16, 0, 0);
				func_369(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_358(uParam0))
				{
					func_365(uParam0, Var0, func_367(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xAF437D7C802AB246(uParam0->f_3))
					{
						func_255(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&Var0, "_roll1", 24);
					func_356(uParam0, Var0, 8);
				}
				func_369(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_21(uParam0->f_83, 1024))
				{
					func_63(&(uParam0->f_83), 1024);
					func_296(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv1", 24);
					func_237(&Var0);
					func_327(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 2048))
				{
					func_63(&(uParam0->f_83), 2048);
					func_296(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv2", 24);
					func_237(&Var0);
					func_327(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 4096))
				{
					func_63(&(uParam0->f_83), 4096);
					func_296(uParam0, 16, 0, 0);
					StringConCat(&Var0, "_swrv3", 24);
					func_237(&Var0);
					func_327(&(uParam0->f_244), uParam0->f_144, &Var0, 8, 0, 0, 0);
				}
				func_260(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_21(uParam0->f_82, 1024))
				{
					func_357(uParam0, 1024, Var0, "_rvrs1", 8, 1);
					func_19(&(uParam0->f_82), 2048);
				}
				else if (!func_21(uParam0->f_82, 2048))
				{
					func_357(uParam0, 2048, Var0, "_rvrs2", 8, 1);
				}
				func_260(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&Var0, "_ofrd1", 24);
				cVar6 = { Var0 };
				func_371(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_370(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_369(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&Var0, "_ofrdch1", 24);
				func_327(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&Var0, "_losPol1", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				func_235(uParam0, 52, 1, 0, 0);
				break;
			
			case 50:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&Var0, "_lsPo1", 24);
				}
				if (uParam0->f_411 != 9)
				{
					func_368(uParam0, &Var0, 0, 0, 8);
				}
				else if (!unk_0xAF437D7C802AB246(uParam0->f_3))
				{
					func_255(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_358(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&Var0, "_copBa1", 24);
						cVar6 = { Var0 };
						cVar6 = { Var0 };
						func_368(uParam0, &Var0, 0, 0, 8);
						func_235(uParam0, 52, 1, 0, 0);
						func_296(uParam0, 16, 0, 0);
					}
					else
					{
						if (uParam0->f_411 == 5 && uParam0->f_410 > 9)
						{
							StringConCat(&Var0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&Var0, "_copBa1", 24);
						}
						cVar6 = { Var0 };
						func_368(uParam0, &Var0, 0, 0, 8);
						func_296(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&Var0, "_copBa1", 24);
					cVar6 = { Var0 };
					func_371(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_370(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
					func_296(uParam0, 16, 0, 0);
					func_260(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&Var0, "_evdeP1", 24);
				func_369(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_368(uParam0, &Var0, 0, 0, 8);
				func_296(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (unk_0x44B59DB1458EE8E0(unk_0xBFAE5F9DEC53DAE2()) >= 1)
				{
					func_259("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_260(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&Var0, "_cpFz1", 24);
				func_237(&Var0);
				func_368(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_21(uParam0->f_81, 262144))
				{
					func_364(uParam0, 262144, Var0, "_rdCh1", 1, 8);
				}
				else if (!func_21(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_364(uParam0, 1048576, Var0, "_rdCh2", 1, 8);
					}
					else
					{
						func_364(uParam0, 1048576, Var0, "_rdCh2", 0, 8);
					}
				}
				func_369(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_21(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_355(uParam0, 67108864, Var0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_21(uParam0->f_82, 134217728))
				{
					func_355(uParam0, 134217728, Var0, "_rdFv1", 0, 7);
				}
				func_369(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), Var0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&Var0, "_rdneu1", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&Var0, "_rdtip1", 24);
				cVar6 = { Var0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_370(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 100:
				func_259("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_260(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&Var0, "_horn", 24);
					func_368(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&Var0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_237(&Var0);
				}
				func_63(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_368(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&Var0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_237(&Var0);
				}
				func_63(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_368(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 103:
				if (uParam0->f_411 == 4)
				{
					StringConCat(&Var0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&Var0, "_thank3", 24);
				}
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_237(&Var0);
				}
				func_63(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_368(uParam0, &Var0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_21(uParam0->f_82, 65536))
				{
					if (func_106(uParam0, 11) > uParam0->f_36)
					{
						switch (uParam0->f_102)
						{
							case 0:
								StringConCat(&Var0, "_ccba2", 24);
								break;
							
							case 1:
								StringConCat(&Var0, "_ccba1", 24);
								break;
							
							default:
								StringConCat(&Var0, "_ccba1", 24);
								break;
						}
						func_237(&Var0);
						func_361(Var0, uParam1);
						func_63(&(uParam0->f_82), 65536);
						func_296(uParam0, 16, 0, 0);
						func_296(uParam0, 11, 0, 0);
						func_260(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_21(uParam0->f_82, 131072))
				{
					if (func_106(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&Var0, "_ccbb1", 24);
						func_237(&Var0);
						func_361(Var0, uParam1);
						func_63(&(uParam0->f_82), 131072);
						func_296(uParam0, 16, 0, 0);
						func_296(uParam0, 11, 0, 0);
						func_260(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_21(uParam0->f_82, 8388608))
				{
					StringConCat(&Var0, "_close1", 24);
					func_63(&(uParam0->f_82), 8388608);
				}
				else if (!func_21(uParam0->f_82, 16777216))
				{
					StringConCat(&Var0, "_close2", 24);
					func_63(&(uParam0->f_82), 16777216);
				}
				else if (!func_21(uParam0->f_82, 33554432))
				{
					StringConCat(&Var0, "_close3", 24);
					func_63(&(uParam0->f_82), 33554432);
				}
				func_361(Var0, uParam1);
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&Var0, "_kill1", 24);
					cVar6 = { Var0 };
					func_371(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_237(&Var0);
					func_370(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&Var0, "_cheat1", 24);
					func_368(uParam0, &Var0, 0, 0, 8);
				}
				else
				{
					StringConCat(&Var0, "_kill1", 24);
					func_368(uParam0, &Var0, 0, 0, 8);
				}
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&Var0, "_wndw2", 24);
				func_361(Var0, uParam1);
				func_296(uParam0, 16, 0, 0);
				func_296(uParam0, 11, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&Var0, "_wndw0", 24);
				func_361(Var0, uParam1);
				func_296(uParam0, 16, 0, 0);
				func_296(uParam0, 11, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&Var0, "_wndw1", 24);
				func_361(Var0, uParam1);
				func_296(uParam0, 16, 0, 0);
				func_296(uParam0, 11, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&Var0, "_csite1", 24);
				func_237(&Var0);
				func_368(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&Var0, "_fair1", 24);
				func_237(&Var0);
				func_368(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&Var0, "_AlCk1", 24);
				cVar6 = { Var0 };
				func_371(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_370(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&Var0, "_eggG1", 24);
				cVar6 = { Var0 };
				func_371(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_370(&(uParam0->f_244), uParam0->f_144, &Var0, &cVar6, 8, 0, 0);
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&Var0, "_goons1", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&Var0, "_oRun1", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&Var0, "_gotG1", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&Var0, "_getA1", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&Var0, "_gnawy1", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&Var0, "_grl1", 24);
				func_237(&Var0);
				func_368(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&Var0, "_figt1", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&Var0, "_gEgg1", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&Var0, "_gEgg3", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&Var0, "_gEgg2", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&Var0, "_gLeav1", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&Var0, "_aKill1", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&Var0, "_gHelp1", 24);
				func_237(&Var0);
				func_368(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&Var0, "_gDest1", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				func_235(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&Var0, "_gKO1", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&Var0, "_gThank1", 24);
				func_63(&(uParam0->f_81), 2097152);
				func_368(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&Var0, "_gDriv1", 24);
				func_237(&Var0);
				func_361(Var0, uParam1);
				func_63(&(uParam0->f_81), 67108864);
				func_296(uParam0, 16, 0, 0);
				func_296(uParam0, 11, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&Var0, "_cash1", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_21(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_364(uParam0, 33554432, Var0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!unk_0xAF437D7C802AB246(uParam0->f_3))
					{
						func_255(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_235(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&Var0, "_foot", 24);
				func_327(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_21(uParam0->f_81, 268435456))
				{
					func_364(uParam0, 268435456, Var0, "_kPay1", 1, 8);
				}
				func_235(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_259("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_260(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_21(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_364(uParam0, 4194304, Var0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!unk_0xAF437D7C802AB246(uParam0->f_3))
						{
							func_255(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_364(uParam0, 4194304, Var0, "_mPay1", 1, 8);
					}
				}
				func_235(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_259("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_260(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&Var0, "_runoff", 24);
				func_327(&(uParam0->f_244), uParam0->f_144, &Var0, 9, 0, 0, 0);
				func_296(uParam0, 16, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_21(uParam0->f_81, 16777216))
				{
					func_364(uParam0, 16777216, Var0, "_ret1", 1, 8);
				}
				func_260(uParam0, 0, 0);
				break;
			
			case 88:
				func_259("TAXI_TIEFLEE", 7500, 1);
				func_260(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_21(uParam0->f_98, 536870912))
				{
					func_259("TAXI_OBJ_CYI_1B", 7500, 1);
					func_63(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_260(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&Var0, "_joke1", 24);
				func_237(&Var0);
				func_368(uParam0, &Var0, 0, 0, 8);
				break;
			
			case 136:
				if (uParam0->f_115)
				{
					StringConCat(&Var0, "_wronglz", 24);
				}
				else if (uParam0->f_116)
				{
					StringConCat(&Var0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&Var0, "_wrong", 24);
				}
				func_368(uParam0, &Var0, 0, 0, 8);
				func_260(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&Var0, "_shout", 24);
				func_368(uParam0, &Var0, 0, 0, 8);
				func_260(uParam0, 0, 0);
				break;
			
			case 135:
				if (uParam0->f_411 == 4)
				{
					StringCopy(&Var0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&Var0, "_jack", 24);
				}
				func_368(uParam0, &Var0, 0, 0, 8);
				func_260(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&Var0, "_getCar", 24);
				func_368(uParam0, &Var0, 1, 0, 8);
				func_235(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_259("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_235(uParam0, 0, 0, 0, 0);
				func_260(uParam0, 0, 0);
				break;
			}
	}
}

void func_355(var uParam0, int iParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_63(&(uParam0->f_82), iParam1);
	func_296(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_237(&Param2);
	}
	func_327(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_356(var uParam0, struct<6> Param1, int iParam7)
{
	char cVar0[24];
	
	cVar0 = { Param1 };
	if (!func_21(uParam0->f_82, 64))
	{
		func_63(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_21(uParam0->f_82, 128))
	{
		func_63(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, unk_0x0ADD324BC46177EF(1, 3), 24);
	}
	func_370(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_296(uParam0, 16, 0, 0);
}

void func_357(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_63(&(uParam0->f_82), iParam1);
	func_296(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_237(&Param2);
		}
	}
	func_327(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

int func_358(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_359(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_63(&(uParam0->f_81), iParam1);
	func_296(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	func_327(&(uParam0->f_244), uParam0->f_144, &Param2, iParam9, 0, 0, 0);
}

void func_360(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_276(*uParam0, iVar1))
		{
			func_64(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_237(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_361(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_362(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_63(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_362(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0xF6917DE0E003509D(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_363(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_259("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_259("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_259("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_259("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_259("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_259("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_259("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_259("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_259("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_259("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_259("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_259("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_259("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_259("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_259("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_259("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_259("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_259("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_259("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_259("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_364(var uParam0, int iParam1, struct<3> Param2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_63(&(uParam0->f_81), iParam1);
	func_296(uParam0, 16, 0, 0);
	StringConCat(&Param2, sParam8, 24);
	if (bParam9)
	{
		func_237(&Param2);
	}
	func_327(&(uParam0->f_244), uParam0->f_144, &Param2, iParam10, 0, 0, 0);
}

void func_365(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_296(uParam0, 16, 0, 0);
	func_296(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!unk_0xAF437D7C802AB246(uParam0->f_3))
	{
		unk_0xDDC391F01DFCE539(uParam0->f_3, &cParam1, func_366(uParam0));
	}
}

char* func_366(var uParam0)
{
	char* sVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TaxiFelipe";
			break;
		
		case 1:
			sVar0 = "TaxiOtis";
			break;
		
		case 2:
			sVar0 = "TaxiKwak";
			break;
		
		case 3:
			sVar0 = "TaxiWalter";
			break;
		
		case 4:
			sVar0 = "TaxiMiranda";
			break;
		
		case 5:
			sVar0 = "TaxiDerrick";
			break;
		
		case 6:
			sVar0 = "TaxiAlonzo";
			break;
		
		case 7:
			sVar0 = "TaxiDarren";
			break;
		
		case 8:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_367(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 72:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ACRH";
				
				case 1:
					return "_ACRH";
				
				case 2:
					return "_ACAA";
				
				case 3:
					return "_ACRH";
				
				case 4:
					return "_AEAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					return "_ACAA";
				
				case 7:
					return "_ACAA";
				
				case 8:
					return "_ACRH";
				
				default:
			}
			return "_ACRH";
			break;
		
		case 82:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AHIT";
				
				case 1:
					return "_AHIT";
				
				case 2:
					return "_AEAA";
				
				case 3:
					return "_ADAA";
				
				case 4:
					return "_AFAA";
				
				case 5:
					return "_AFAA";
				
				case 6:
					return "_AEAA";
				
				case 7:
					return "_AHAA";
				
				case 8:
					return "_AEAA";
				
				default:
			}
			return "_AHIT";
			break;
		
		case 74:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AROL";
				
				case 1:
					return "_AROL";
				
				case 2:
					return "_AHAA";
				
				case 3:
					return "_AROL";
				
				case 4:
					return "_AGAA";
				
				case 5:
					return "_AROL";
				
				case 6:
					return "_AROL";
				
				case 7:
					return "_AROL";
				
				case 8:
					return "_AROL";
				
				default:
			}
			return "_AROL";
			break;
		
		case 65:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ABAA";
				
				case 1:
					return "_FUAA";
				
				case 2:
					return "_AFAA";
				
				case 3:
					return "_DBAA";
				
				case 4:
					return "_DLAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				
				case 7:
					return "_DBAA";
				
				case 8:
					return "_EFAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 66:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AEAA";
				
				case 1:
					return "_ACAA";
				
				case 2:
					return "_AJAA";
				
				case 3:
					return "_AHAA";
				
				case 4:
					return "_AHAA";
				
				case 5:
					return "_AIAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				
				case 7:
					return "_AUAA";
				
				case 8:
					return "_AHAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 2:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AAAA";
				
				case 1:
					return "_AAAA";
				
				case 2:
					return "_ADAA";
				
				case 3:
					return "_ABAA";
				
				case 4:
					return "_AAAA";
				
				case 5:
					return "_ABAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				
				case 7:
					return "_BUAA";
				
				case 8:
					return "_ADAA";
				
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

int func_368(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_296(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_296(uParam0, 17, 0f, 1);
	}
	func_260(uParam0, iParam2, 0);
	return func_327(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_369(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
{
	if (iParam0 == 0)
	{
		if (func_21(*uParam2, 2))
		{
			if (!bParam10)
			{
				*uParam1 = (*uParam1 - 2);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 8)
	{
		if (func_21(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_21(*uParam2, 4))
		{
			if (!func_21(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_19(uParam2, 4096);
			}
		}
		else if (func_21(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_21(*uParam2, 512))
		{
			if (!func_21(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_19(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_21(*uParam2, 16))
		{
			if (!func_21(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_19(uParam2, 4096);
			}
		}
		else if (func_21(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_21(*uParam2, 64))
		{
			if (!func_21(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_19(uParam2, 4096);
			}
		}
		else if (func_21(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_21(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_21(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_21(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_21(*uParam2, 8192))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_21(*uParam2, 16384))
		{
			if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 11)
	{
		if (func_21(*uParam2, 32768))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_21(*uParam2, 65536))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_21(*uParam2, 131072))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_21(*uParam2, 262144))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_21(*uParam2, 524288))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_21(*uParam2, 1048576))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_21(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_21(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_21(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_21(*uParam2, 67108864))
		{
			if (func_21(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_21(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_21(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_21(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_21(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

int func_370(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_335(uParam0, 145, sParam1, iParam5, iParam6, 0);
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
	Global_16703 = 1;
	Global_16705 = 0;
	Global_16709 = 0;
	StringCopy(&Global_16716, sParam3, 24);
	Global_2621441 = 0;
	return func_328(sParam2, iParam4, 0);
}

void func_371(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		fVar0 = unk_0xBBDA792448DB5A89(iVar2);
		iVar1 = unk_0xF2DB717A73826179(unk_0xE3621CC40F31FE2E(2f, fVar0));
		if (!func_276(*uParam0, iVar1))
		{
			func_64(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_237(sParam2);
				}
				else
				{
					func_237(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

int func_372(char* sParam0)
{
	if (!unk_0x356491C12DAD1A37(sParam0))
	{
		if (func_210(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_373(var uParam0)
{
	if (func_192())
	{
		return 1;
	}
	if (func_170(uParam0, 17))
	{
		return 1;
	}
	if (func_170(uParam0, 14))
	{
		return 1;
	}
	if (func_208(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_374(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_170(uParam0, 9));
}

void func_375(var uParam0)
{
	if (func_170(uParam0, 17))
	{
		if (!func_170(uParam0, 14))
		{
			if (!func_208(uParam0))
			{
				if (!func_192())
				{
					func_189(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_376(var uParam0)
{
	return uParam0->f_117;
}

void func_377(var uParam0, var uParam1, bool bParam2)
{
	if (!func_21(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!unk_0xF6917DE0E003509D(&(uParam0->f_124)) && func_192())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_192())
				{
					StringCopy(&(uParam0->f_124), func_137(), 24);
					uParam0->f_56 = (uParam0->f_56 + uParam0->f_57);
					if (uParam0->f_56 < 0)
					{
						uParam0->f_56 = 0;
					}
					uParam0->f_57 = 0;
					*uParam1 = 0;
					if (bParam2)
					{
					}
				}
				break;
			}
	}
}

void func_378(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (unk_0xD51CFE69539DB6D8(uParam0->f_4))
		{
			if (Local_343.f_0 > 0 && !func_276(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343.f_0 - 1))
				{
					if (func_276(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_276(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_64(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = unk_0x9D40BBF80D8F5E8A();
							}
						}
						else
						{
							func_20(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_276(Local_343.f_1[iVar0 /*4*/], 4) && !func_276(Local_343.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_343.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_343.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_64(&(Local_343.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_336(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_379(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_170(uParam0, 27))
	{
		func_185(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_106(uParam0, 27) > 5f)
	{
		if (func_406(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_296(uParam0, 27, 0, 0);
			func_296(uParam0, 10, 0, 0);
			func_404(uParam0, &uVar0, uParam1);
		}
		func_401(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_380(uParam0);
	}
	if ((((!unk_0x4844BC1882594FDB(unk_0x3F80C6638E3A1A90()) && (unk_0xCF686B56FD5328B5(*uParam0) && !unk_0x64DEF1DE79E83BEB(*uParam0))) && (unk_0xCF686B56FD5328B5(uParam0->f_1) && !unk_0x64DEF1DE79E83BEB(uParam0->f_1))) && !unk_0x13ACC601BB29A690()) && !func_192())
	{
		if (func_106(uParam0, 26) > 10f)
		{
			func_189(uParam0, 26, 0);
			unk_0x8FE59DE2329CBE64(unk_0x3F80C6638E3A1A90(), 1, 0);
		}
	}
	else if (func_170(uParam0, 26))
	{
		func_189(uParam0, 26, 0);
	}
	return 0;
}

void func_380(var uParam0)
{
	if (!func_400(uParam0->f_429))
	{
		uParam0->f_429 = func_399();
		func_390(&(uParam0->f_429), 0, 0, unk_0x0ADD324BC46177EF(4, 7), 0, 0, 0);
	}
	else if (func_381(uParam0->f_429))
	{
		func_336(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_381(int iParam0)
{
	return func_382(func_399(), iParam0);
}

int func_382(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_400(iParam1) || !func_400(iParam0))
	{
		return 1;
	}
	iVar0 = func_388(iParam0);
	iVar1 = func_388(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_387(iParam0);
	iVar1 = func_387(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_386(iParam0);
	iVar1 = func_386(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_385(iParam0);
	iVar1 = func_385(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_384(iParam0);
	iVar1 = func_384(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_383(iParam0);
	iVar1 = func_383(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_383(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 20) & 63;
}

int func_384(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 14) & 63;
}

int func_385(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 9) & 31;
}

int func_386(int iParam0)
{
	return unk_0x97EF1E5BCE9DC075(iParam0, 4) & 31;
}

int func_387(int iParam0)
{
	return iParam0 & 15;
}

var func_388(int iParam0)
{
	return (unk_0x97EF1E5BCE9DC075(iParam0, 26) & 31 * func_389(unk_0xB519E5386FBF69E5(iParam0, 31), -1, 1)) + 2011;
}

int func_389(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_390(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_388(*uParam0);
	iVar1 = func_387(*uParam0);
	iVar2 = func_386(*uParam0);
	iVar3 = func_385(*uParam0);
	iVar4 = func_384(*uParam0);
	iVar5 = func_383(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_398(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_398(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_391(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_391(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_397(uParam0, iParam1);
	func_396(uParam0, iParam2);
	func_395(uParam0, iParam3);
	func_394(uParam0, iParam5);
	func_393(uParam0, iParam4);
	func_392(uParam0, iParam6);
}

void func_392(var uParam0, int iParam1)
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

void func_393(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_387(*uParam0);
	iVar1 = func_388(*uParam0);
	if (iParam1 < 1 || iParam1 > func_398(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 4));
}

void func_394(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_395(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 9));
}

void func_396(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 14));
}

void func_397(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || unk_0xEDD95A39E5544DE8(iParam1, 20));
}

int func_398(int iParam0, int iParam1)
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

int func_399()
{
	var uVar0;
	
	func_397(&uVar0, unk_0x0CE219089BDB83C5());
	func_396(&uVar0, unk_0x1B24A2CA27443F7B());
	func_395(&uVar0, unk_0x7C833E3C6EEE41E0());
	func_393(&uVar0, unk_0x2DA3502053F9E535());
	func_394(&uVar0, unk_0xEB4EA596232DA76E());
	func_392(&uVar0, unk_0xB99227ECC84A576C());
	return uVar0;
}

int func_400(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_383(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_384(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_385(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_388(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_387(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_386(iParam0);
	if (iVar5 < 1 || iVar5 > func_398(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_401(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_403()) && !func_188(uParam0)) || ((uParam0->f_411 != 9 && func_264(uParam0, 1)) && !func_188(uParam0)))
		{
			uVar0 = func_402(uParam0->f_4);
			unk_0x52B01BD1A77FF6DE(&uVar0);
			uParam0->f_4 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
			unk_0x20BB4B94CC6DDC9A(uParam0->f_4, 1, 0);
			func_223(uParam0);
			func_215(uParam0, 0);
		}
	}
}

var func_402(var uParam0)
{
	return uParam0;
}

int func_403()
{
	int iVar0;
	
	if (!unk_0x76B2D234F1895632(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0))
		{
			iVar0 = unk_0xF0295FF51F2D7803(unk_0xE7869D5D7816A9B6(), 0);
			if (unk_0xC45A34912542C4EB(iVar0, 0))
			{
				if (unk_0xBD6B21D725712BDE(iVar0, -1) == unk_0xE7869D5D7816A9B6())
				{
					if (unk_0x7579897B912B3328(iVar0, func_18()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_404(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_405(uParam0, 0, 1))
			{
				func_336(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_405(uParam0, 0, 4))
			{
				func_336(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_405(uParam0, 0, 8))
			{
				func_336(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_405(uParam0, 1, 1))
			{
				func_336(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_405(uParam0, 0, 1))
			{
				func_336(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_21(*uParam2, 2) && func_204(uParam0))
			{
				func_336(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_405(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!unk_0x76B2D234F1895632(uParam0->f_3))
	{
		if (!unk_0x51AAB57E2FC16B14(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_235(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_235(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_406(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = unk_0xE7869D5D7816A9B6();
	if (!unk_0x76B2D234F1895632(iVar0) && !unk_0x76B2D234F1895632(iParam0))
	{
		if (!func_21(*uParam2, 1))
		{
			if (func_412(iParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_21(*uParam2, 2))
		{
			if (unk_0x44B59DB1458EE8E0(unk_0x3F80C6638E3A1A90()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_21(*uParam2, 4))
		{
			if (func_410(iVar0, iParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_21(*uParam2, 8))
		{
			if (func_409(iVar0, iParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_21(*uParam2, 128);
		if (bParam4)
		{
			if (func_407(iParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_21(*uParam2, 16))
		{
			if (func_407(iParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		if (iParam7 && unk_0x915685CA559C211B(iParam0, iVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_407(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_79)
		{
			iLocal_80 = unk_0x8219941CC4732B36(iParam0);
			bLocal_79 = true;
		}
		iLocal_81 = unk_0x8219941CC4732B36(iParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		uVar0 = unk_0xA0B1717D806F4901();
		if (!unk_0x76B2D234F1895632(uVar0))
		{
			if (unk_0x915685CA559C211B(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_79)
		{
			if (unk_0x915685CA559C211B(iParam0, unk_0xE7869D5D7816A9B6(), 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x915685CA559C211B(iParam0, unk_0xE7869D5D7816A9B6(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = unk_0xA0B1717D806F4901();
		if (!unk_0x76B2D234F1895632(uVar1))
		{
			if (unk_0x915685CA559C211B(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!unk_0x76B2D234F1895632(iParam0))
		{
			if (unk_0x4231F56FA5885AE9(iParam0))
			{
				if (unk_0x9D84FB8703BD7832(iParam0) == unk_0xE7869D5D7816A9B6())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (unk_0xC3AE89795D844EE9(unk_0xE7869D5D7816A9B6()))
		{
			if (unk_0x3761EA7F8628B81A(iParam0, unk_0x1141852D07400777(unk_0xE7869D5D7816A9B6(), 1), 10f, 10f, 10f, false, 1, 0))
			{
				if (unk_0xDB3D41842CEA074F(unk_0x3F80C6638E3A1A90()))
				{
					return 1;
				}
			}
		}
	}
	if (unk_0xAA6E5BDAAA361C61(unk_0xE7869D5D7816A9B6()))
	{
		if (unk_0x7048B4332456CDFF(iParam0))
		{
			return 1;
		}
	}
	if (func_408(unk_0xE7869D5D7816A9B6(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (unk_0x8E2CF6ACCED3BD0F(iParam0) && func_214(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (unk_0x51374A0BB2871E6E(iParam0, 0))
		{
			if (unk_0x3C1B1C07A878AE1D(unk_0xE7869D5D7816A9B6(), unk_0xF0295FF51F2D7803(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (unk_0x3C1B1C07A878AE1D(unk_0xE7869D5D7816A9B6(), iParam0))
		{
			return 1;
		}
		if (!unk_0x76B2D234F1895632(uParam1))
		{
			if (unk_0x915685CA559C211B(iParam1, unk_0xE7869D5D7816A9B6(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_408(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0x5E99B63A819500A5(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (unk_0xD0C9DCB982CB2D78(iParam0))
		{
			if (unk_0x2A488C176D52CCA5(unk_0x1141852D07400777(iParam0, 1), unk_0x1141852D07400777(iParam1, 1)) < 2.5f)
			{
				if (unk_0xFA68268DB708808B(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_409(int iParam0, int iParam1, var uParam2)
{
	if (unk_0x72957E5DA83E879F(uParam0, 4))
	{
		if (unk_0xD0C9DCB982CB2D78(uParam0) && !unk_0x678D45DA30B158ED(iParam0))
		{
			if (unk_0x3761EA7F8628B81A(uParam1, unk_0x1141852D07400777(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), false, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_410(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	int iVar3;
	
	iVar3 = 0;
	if (!unk_0x76B2D234F1895632(uParam1))
	{
		Var0 = { unk_0x1141852D07400777(iParam1, 1) };
	}
	if (unk_0x742CA22C114D89E4(Var0, 4f, 1))
	{
		return 1;
	}
	if (unk_0x8B527A53714D07F2(Var0, unk_0xBBDA792448DB5A89(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (unk_0x72957E5DA83E879F(uParam0, 2))
	{
		if (unk_0xD0C9DCB982CB2D78(uParam0))
		{
			if (unk_0x3761EA7F8628B81A(iParam1, unk_0x1141852D07400777(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
			{
				if (unk_0xFA68268DB708808B(unk_0x10E754B2E0DF2A70(iParam1), iParam0, 120f) && unk_0xF70F7CD913F23E2A(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (unk_0x51374A0BB2871E6E(unk_0x10E754B2E0DF2A70(iParam1), 0))
			{
				iVar3 = unk_0xF0295FF51F2D7803(unk_0x10E754B2E0DF2A70(iParam1), 0);
			}
			if (unk_0xA7AC3687807201B4(iParam0) || func_411(iVar3))
			{
				if (unk_0x3761EA7F8628B81A(iParam1, unk_0x1141852D07400777(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), false, 1, 0))
				{
					if (unk_0xFA68268DB708808B(unk_0x10E754B2E0DF2A70(iParam1), iParam0, 120f) && unk_0xF70F7CD913F23E2A(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (unk_0xC77E15B3AC49D8CF((Var0.f_0 - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.f_0 + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_411(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (unk_0xD51CFE69539DB6D8(iParam0))
	{
		if (unk_0xC45A34912542C4EB(iParam0, 0))
		{
			if (unk_0xBD6B21D725712BDE(iParam0, -1) != 0)
			{
				if (unk_0x5E99B63A819500A5(unk_0xE7869D5D7816A9B6(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_47(unk_0xE7869D5D7816A9B6(), iParam0, 1) < 40f)
						{
							if (unk_0xAA0DBF98A1199035(unk_0x3F80C6638E3A1A90(), &uVar1))
							{
								if ((unk_0x8C1ED5BB2888BA25(uVar1) && unk_0xE59FAD6B5E1AA42D(iVar1) == iParam0) || (unk_0x41B17741CACC905E(iVar1) && unk_0x10E754B2E0DF2A70(iVar1) == unk_0xBD6B21D725712BDE(iParam0, -1)))
								{
									if ((unk_0xD33337101FE7D2FE(unk_0xE7869D5D7816A9B6()) && unk_0x6BBF308E0A0F9AD4(0, 24)) || (unk_0x51374A0BB2871E6E(unk_0xE7869D5D7816A9B6(), 0) && unk_0x6BBF308E0A0F9AD4(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_412(int iParam0, var uParam1)
{
	if (!unk_0x76B2D234F1895632(uParam0))
	{
		if (unk_0x72957E5DA83E879F(unk_0xE7869D5D7816A9B6(), 6))
		{
			if (unk_0xBC273BCD46110BE6(unk_0x3F80C6638E3A1A90(), iParam0) || unk_0x386C3192F791D414(unk_0x3F80C6638E3A1A90(), iParam0))
			{
				if (unk_0xFA68268DB708808B(iParam0, unk_0xE7869D5D7816A9B6(), 90f))
				{
					if (func_214(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = unk_0x9D40BBF80D8F5E8A();
						}
						else if ((unk_0x9D40BBF80D8F5E8A() - uParam1->f_1) > uParam1->f_3)
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

void func_413(var uParam0)
{
	if (!func_21(uParam0->f_98, 2))
	{
		if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
		{
			if (func_49(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				unk_0xC797AB6C3A6482E1(uParam0->f_17, 25f, 0, 0, 0, 0, 0);
				func_63(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_414()
{
	func_415(&Local_423);
	func_437(2);
	func_433();
}

void func_415(var uParam0)
{
	func_50(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_437(2);
	}
}

int func_416(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_192() && func_106(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!unk_0x76B2D234F1895632(uParam0->f_3))
		{
			if (unk_0xC45A34912542C4EB(uParam0->f_4, 0))
			{
				if (unk_0x8AF655CC5761C7A2(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_62(uParam0) == 0 || func_276(uParam0->f_85, 32))
					{
						if (!unk_0x6D30046757C9C4F9(uParam0->f_4))
						{
							func_338(uParam0, 4160, 0);
						}
						else
						{
							func_338(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_338(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_338(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_338(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((unk_0x9D40BBF80D8F5E8A() % 1000) < 50)
	{
	}
	return 0;
}

void func_417(var uParam0)
{
	if (unk_0xD11595488376CB53(uParam0->f_8))
	{
		unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_8));
	}
	if (unk_0xD11595488376CB53(uParam0->f_9))
	{
		unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_9));
	}
	if (unk_0xD11595488376CB53(uParam0->f_10))
	{
		unk_0x5B62CAB9B0D6ABF1(&(uParam0->f_10));
	}
}

int func_418(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_419()
{
	func_422(&Local_423, 8);
	Local_423.f_410 = 0;
	func_421(&Local_423, 3, 6);
	Local_423.f_23 = { 1412.324f, -1518.315f, 58.4644f };
	Local_423.f_33 = 114.1f;
	Local_423.f_26 = { Local_925 };
	Local_423.f_34 = 95.93f;
	func_420(&Local_423, &Local_853);
	Local_853.f_0 = joaat("s_m_m_doctor_01");
	Local_853.f_1 = joaat("bison");
}

void func_420(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = Global_99155.f_17711.f_39[uParam0->f_411];
	uParam1->f_20 = 1;
	uParam1->f_32 = -1817882002;
	uParam1->f_12 = (0.7f - (0.6f * IntToFloat(iVar0)));
	uParam1->f_13 = (0.8f - (0.6f * IntToFloat(iVar0)));
	uParam1->f_14 = (24f + IntToFloat((10 * iVar0)));
}

void func_421(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_422(var uParam0, int iParam1)
{
	func_432(1);
	func_225();
	func_6(&(uParam0->f_244));
	func_431(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_21(Global_99155.f_17711, 4))
	{
		func_63(&(Global_99155.f_17711), 4);
	}
	func_426(uParam0);
	func_424(uParam0);
	unk_0x1C26C4B0DAB91B21(unk_0xE7869D5D7816A9B6(), 32, 0);
	uParam0->f_102 = (func_423(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	unk_0x36A3D6FBED10EF81("TAXI", 2);
}

int func_423(int iParam0)
{
	return Global_99155.f_17711.f_39[iParam0];
}

void func_424(var uParam0)
{
	switch (func_62(uParam0))
	{
		case 0:
			func_425(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_425(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_425(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_425(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_425(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_425(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_425(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_425(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_425(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_425(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_425(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_426(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_430(uParam0, 3);
			func_429(uParam0, 14);
			break;
		
		case 1:
			func_430(uParam0, 14);
			func_429(uParam0, 8);
			break;
		
		case 2:
			func_430(uParam0, 8);
			func_429(uParam0, 7);
			break;
		
		case 3:
			func_430(uParam0, 15);
			func_429(uParam0, 6);
			break;
		
		case 4:
			func_430(uParam0, 0);
			func_429(uParam0, 3);
			break;
		
		case 5:
			func_430(uParam0, 6);
			func_429(uParam0, 7);
			break;
		
		case 6:
			func_430(uParam0, 8);
			func_429(uParam0, 15);
			break;
		
		case 7:
			func_430(uParam0, 8);
			func_429(uParam0, 14);
			break;
		
		case 8:
			func_430(uParam0, 7);
			func_429(uParam0, 15);
			break;
		
		case 9:
			func_430(uParam0, unk_0x0ADD324BC46177EF(0, 17));
			iVar0 = func_428((uParam0->f_418.f_2 + unk_0x0ADD324BC46177EF(1, 17)), 0, 16);
			func_429(uParam0, iVar0);
			func_427(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_427(var uParam0)
{
	switch (uParam0->f_418.f_2)
	{
		case 2:
		case 8:
			uParam0->f_418.f_3 = 1;
			break;
		
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			uParam0->f_418.f_3 = 2;
			break;
		
		case 4:
		case 10:
			uParam0->f_418.f_3 = 3;
			break;
		
		case 1:
		case 6:
		case 13:
			uParam0->f_418.f_3 = 4;
			break;
		
		case 11:
			uParam0->f_418.f_3 = 5;
			break;
		
		case 12:
		case 14:
			uParam0->f_418.f_3 = 6;
			break;
		
		case 7:
			uParam0->f_418.f_3 = 7;
			break;
	}
}

int func_428(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 > iParam2)
	{
		return -1;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_429(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_430(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_431(var uParam0)
{
	uParam0->f_2 = unk_0xE7869D5D7816A9B6();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_38() };
	uParam0->f_17 = { func_38() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_189(uParam0, 32, 0);
}

void func_432(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_98211, unk_0x959E7FA37C0D0892(), 24);
		Global_98205 = 1;
	}
	else
	{
		StringCopy(&Global_98211, "NULL", 24);
		Global_98205 = 0;
	}
}

void func_433()
{
	unk_0xBDF0A810DD6A47D3(Local_928, Local_931, 1, 1);
	unk_0xBDF0A810DD6A47D3(Local_946, Local_949, 1, 1);
	func_129(Local_958, 60f, 0);
	func_129(Local_961, 60f, 0);
	unk_0x1D23906D962EED92();
	unk_0x3AD14BFC20FCADDB(uLocal_894, 0);
	unk_0xF6231EA8B0BD197C(iLocal_893);
	unk_0xF6231EA8B0BD197C(iLocal_892);
	unk_0x4C5B723663B8F630(&cLocal_976);
	func_232(385.1685f, -1372.719f, 29.8554f, 1, 50f);
	func_436();
	func_435();
	func_434();
	unk_0x7E38E815EF844C74(Local_853.f_1, 0);
	func_146(&uLocal_45, 0, 0);
	unk_0x52F20802944F8DCE();
}

void func_434()
{
	unk_0x839E9476E54502A2(iLocal_887);
	unk_0x8B10CC9832827D27("MOVE_DUCK_FOR_COVER");
	unk_0x8B10CC9832827D27(&cLocal_980);
	unk_0x8B10CC9832827D27(&cLocal_996);
	unk_0x8B10CC9832827D27(&cLocal_1012);
	unk_0x8B10CC9832827D27(&cLocal_1028);
}

void func_435()
{
	unk_0x839E9476E54502A2(Local_853.f_0);
	unk_0x839E9476E54502A2(Local_853.f_1);
	unk_0x839E9476E54502A2(iLocal_888);
	unk_0x839E9476E54502A2(iLocal_889);
	unk_0x4C5B723663B8F630(&cLocal_976);
	unk_0x8B10CC9832827D27("veh@truck@ds@base");
}

void func_436()
{
	unk_0x839E9476E54502A2(iLocal_886);
	unk_0x8B10CC9832827D27("gestures@m@standing@casual");
}

void func_437(int iParam0)
{
	Global_97867.f_22 = iParam0;
}

